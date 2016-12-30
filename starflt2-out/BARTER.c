// ====== OVERLAY 'BARTER' ======
// store offset = 0xdfc0
// overlay size   = 0x15a0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xdfd6  codep:0x1d29 parp:0xdfd6 size:0x0002 C-string:'UNK_0xdfd6'
//      UNK_0xdfda  codep:0x1d29 parp:0xdfda size:0x0002 C-string:'UNK_0xdfda'
//      UNK_0xdfde  codep:0x1d29 parp:0xdfde size:0x0002 C-string:'UNK_0xdfde'
//      UNK_0xdfe2  codep:0x1d29 parp:0xdfe2 size:0x0002 C-string:'UNK_0xdfe2'
//      UNK_0xdfe6  codep:0x224c parp:0xdfe6 size:0x0018 C-string:'UNK_0xdfe6'
//      UNK_0xe000  codep:0x224c parp:0xe000 size:0x0008 C-string:'UNK_0xe000'
//      UNK_0xe00a  codep:0x224c parp:0xe00a size:0x0008 C-string:'UNK_0xe00a'
//      UNK_0xe014  codep:0x224c parp:0xe014 size:0x0008 C-string:'UNK_0xe014'
//      UNK_0xe01e  codep:0x224c parp:0xe01e size:0x0008 C-string:'UNK_0xe01e'
//      UNK_0xe028  codep:0x224c parp:0xe028 size:0x0008 C-string:'UNK_0xe028'
//      UNK_0xe032  codep:0x224c parp:0xe032 size:0x0008 C-string:'UNK_0xe032'
//      UNK_0xe03c  codep:0x224c parp:0xe03c size:0x0008 C-string:'UNK_0xe03c'
//      UNK_0xe046  codep:0x224c parp:0xe046 size:0x0008 C-string:'UNK_0xe046'
//      UNK_0xe050  codep:0x224c parp:0xe050 size:0x0008 C-string:'UNK_0xe050'
//      UNK_0xe05a  codep:0x224c parp:0xe05a size:0x0008 C-string:'UNK_0xe05a'
//      UNK_0xe064  codep:0x224c parp:0xe064 size:0x0008 C-string:'UNK_0xe064'
//      UNK_0xe06e  codep:0x224c parp:0xe06e size:0x0008 C-string:'UNK_0xe06e'
//      UNK_0xe078  codep:0x224c parp:0xe078 size:0x0008 C-string:'UNK_0xe078'
//      UNK_0xe082  codep:0x224c parp:0xe082 size:0x0008 C-string:'UNK_0xe082'
//      UNK_0xe08c  codep:0x224c parp:0xe08c size:0x0008 C-string:'UNK_0xe08c'
//      UNK_0xe096  codep:0x224c parp:0xe096 size:0x0008 C-string:'UNK_0xe096'
//      UNK_0xe0a0  codep:0x224c parp:0xe0a0 size:0x0008 C-string:'UNK_0xe0a0'
//      UNK_0xe0aa  codep:0x224c parp:0xe0aa size:0x0008 C-string:'UNK_0xe0aa'
//      UNK_0xe0b4  codep:0x224c parp:0xe0b4 size:0x0008 C-string:'UNK_0xe0b4'
//      UNK_0xe0be  codep:0x224c parp:0xe0be size:0x0008 C-string:'UNK_0xe0be'
//      UNK_0xe0c8  codep:0x224c parp:0xe0c8 size:0x0008 C-string:'UNK_0xe0c8'
//      UNK_0xe0d2  codep:0x224c parp:0xe0d2 size:0x0008 C-string:'UNK_0xe0d2'
//      UNK_0xe0dc  codep:0x224c parp:0xe0dc size:0x0008 C-string:'UNK_0xe0dc'
//      UNK_0xe0e6  codep:0x224c parp:0xe0e6 size:0x0008 C-string:'UNK_0xe0e6'
//      UNK_0xe0f0  codep:0x224c parp:0xe0f0 size:0x0018 C-string:'UNK_0xe0f0'
//      UNK_0xe10a  codep:0x7394 parp:0xe10a size:0x0006 C-string:'UNK_0xe10a'
//      UNK_0xe112  codep:0x7394 parp:0xe112 size:0x0006 C-string:'UNK_0xe112'
//      UNK_0xe11a  codep:0x7394 parp:0xe11a size:0x000e C-string:'UNK_0xe11a'
//      UNK_0xe12a  codep:0x7394 parp:0xe12a size:0x0006 C-string:'UNK_0xe12a'
//      UNK_0xe132  codep:0x7394 parp:0xe132 size:0x000e C-string:'UNK_0xe132'
//      UNK_0xe142  codep:0x7394 parp:0xe142 size:0x0006 C-string:'UNK_0xe142'
//      UNK_0xe14a  codep:0x7394 parp:0xe14a size:0x0006 C-string:'UNK_0xe14a'
//      UNK_0xe152  codep:0x7420 parp:0xe152 size:0x0008 C-string:'UNK_0xe152'
//      UNK_0xe15c  codep:0x224c parp:0xe15c size:0x0006 C-string:'UNK_0xe15c'
//      UNK_0xe164  codep:0x224c parp:0xe164 size:0x0006 C-string:'UNK_0xe164'
//      UNK_0xe16c  codep:0x224c parp:0xe16c size:0x0010 C-string:'UNK_0xe16c'
//      UNK_0xe17e  codep:0x224c parp:0xe17e size:0x0004 C-string:'UNK_0xe17e'
//      UNK_0xe184  codep:0x224c parp:0xe184 size:0x0004 C-string:'UNK_0xe184'
//      UNK_0xe18a  codep:0x224c parp:0xe18a size:0x0006 C-string:'UNK_0xe18a'
//      UNK_0xe192  codep:0x224c parp:0xe192 size:0x0004 C-string:'UNK_0xe192'
//      UNK_0xe198  codep:0x224c parp:0xe198 size:0x0010 C-string:'UNK_0xe198'
//      UNK_0xe1aa  codep:0x224c parp:0xe1aa size:0x000c C-string:'UNK_0xe1aa'
//      UNK_0xe1b8  codep:0x224c parp:0xe1b8 size:0x002e C-string:'UNK_0xe1b8'
//      UNK_0xe1e8  codep:0x224c parp:0xe1e8 size:0x0016 C-string:'UNK_0xe1e8'
//      UNK_0xe200  codep:0x224c parp:0xe200 size:0x0052 C-string:'UNK_0xe200'
//      UNK_0xe254  codep:0x224c parp:0xe254 size:0x000a C-string:'UNK_0xe254'
//      UNK_0xe260  codep:0x1d29 parp:0xe260 size:0x0002 C-string:'UNK_0xe260'
//      UNK_0xe264  codep:0x224c parp:0xe264 size:0x0016 C-string:'UNK_0xe264'
//      UNK_0xe27c  codep:0x224c parp:0xe27c size:0x000e C-string:'UNK_0xe27c'
//      UNK_0xe28c  codep:0x224c parp:0xe28c size:0x0056 C-string:'UNK_0xe28c'
//      UNK_0xe2e4  codep:0x224c parp:0xe2e4 size:0x0023 C-string:'UNK_0xe2e4'
//      UNK_0xe309  codep:0x224c parp:0xe309 size:0x0025 C-string:'UNK_0xe309'
//      UNK_0xe330  codep:0x224c parp:0xe330 size:0x0026 C-string:'UNK_0xe330'
//          T>NAME  codep:0x4b3b parp:0xe361 size:0x0014 C-string:'T_gt_NAME'
//      UNK_0xe377  codep:0x224c parp:0xe377 size:0x004b C-string:'UNK_0xe377'
//      UNK_0xe3c4  codep:0x224c parp:0xe3c4 size:0x0028 C-string:'UNK_0xe3c4'
//      UNK_0xe3ee  codep:0x224c parp:0xe3ee size:0x0008 C-string:'UNK_0xe3ee'
//      UNK_0xe3f8  codep:0x224c parp:0xe3f8 size:0x0008 C-string:'UNK_0xe3f8'
//      UNK_0xe402  codep:0x224c parp:0xe402 size:0x000c C-string:'UNK_0xe402'
//      UNK_0xe410  codep:0x224c parp:0xe410 size:0x0016 C-string:'UNK_0xe410'
//             SPL  codep:0x4b3b parp:0xe42e size:0x0024 C-string:'SPL'
//      UNK_0xe454  codep:0x224c parp:0xe454 size:0x001e C-string:'UNK_0xe454'
//      UNK_0xe474  codep:0x224c parp:0xe474 size:0x001c C-string:'UNK_0xe474'
//      UNK_0xe492  codep:0x224c parp:0xe492 size:0x0012 C-string:'UNK_0xe492'
//      UNK_0xe4a6  codep:0x1d29 parp:0xe4a6 size:0x0002 C-string:'UNK_0xe4a6'
//      UNK_0xe4aa  codep:0x1d29 parp:0xe4aa size:0x0002 C-string:'UNK_0xe4aa'
//      UNK_0xe4ae  codep:0x1d29 parp:0xe4ae size:0x0002 C-string:'UNK_0xe4ae'
//      UNK_0xe4b2  codep:0x1d29 parp:0xe4b2 size:0x0002 C-string:'UNK_0xe4b2'
//      UNK_0xe4b6  codep:0x1d29 parp:0xe4b6 size:0x0002 C-string:'UNK_0xe4b6'
//      UNK_0xe4ba  codep:0x1d29 parp:0xe4ba size:0x0002 C-string:'UNK_0xe4ba'
//      UNK_0xe4be  codep:0x1d29 parp:0xe4be size:0x0026 C-string:'UNK_0xe4be'
//      UNK_0xe4e6  codep:0x7394 parp:0xe4e6 size:0x0006 C-string:'UNK_0xe4e6'
//      UNK_0xe4ee  codep:0x7394 parp:0xe4ee size:0x0006 C-string:'UNK_0xe4ee'
//      UNK_0xe4f6  codep:0x7394 parp:0xe4f6 size:0x0016 C-string:'UNK_0xe4f6'
//      UNK_0xe50e  codep:0x7394 parp:0xe50e size:0x0006 C-string:'UNK_0xe50e'
//      UNK_0xe516  codep:0x7394 parp:0xe516 size:0x0026 C-string:'UNK_0xe516'
//      UNK_0xe53e  codep:0x7394 parp:0xe53e size:0x0006 C-string:'UNK_0xe53e'
//       TRADE.EDL  codep:0x7394 parp:0xe552 size:0x0006 C-string:'TRADE_dot_EDL'
//      UNK_0xe55a  codep:0x224c parp:0xe55a size:0x000c C-string:'UNK_0xe55a'
//      UNK_0xe568  codep:0x224c parp:0xe568 size:0x0026 C-string:'UNK_0xe568'
//      UNK_0xe590  codep:0x224c parp:0xe590 size:0x0008 C-string:'UNK_0xe590'
//      UNK_0xe59a  codep:0x224c parp:0xe59a size:0x0008 C-string:'UNK_0xe59a'
//      UNK_0xe5a4  codep:0x224c parp:0xe5a4 size:0x0008 C-string:'UNK_0xe5a4'
//      UNK_0xe5ae  codep:0x224c parp:0xe5ae size:0x0008 C-string:'UNK_0xe5ae'
//      UNK_0xe5b8  codep:0x224c parp:0xe5b8 size:0x000c C-string:'UNK_0xe5b8'
//      UNK_0xe5c6  codep:0x224c parp:0xe5c6 size:0x000c C-string:'UNK_0xe5c6'
//      UNK_0xe5d4  codep:0x224c parp:0xe5d4 size:0x0014 C-string:'UNK_0xe5d4'
//      UNK_0xe5ea  codep:0x224c parp:0xe5ea size:0x000c C-string:'UNK_0xe5ea'
//      UNK_0xe5f8  codep:0x224c parp:0xe5f8 size:0x0004 C-string:'UNK_0xe5f8'
//      UNK_0xe5fe  codep:0x224c parp:0xe5fe size:0x0010 C-string:'UNK_0xe5fe'
//      UNK_0xe610  codep:0x224c parp:0xe610 size:0x000e C-string:'UNK_0xe610'
//      UNK_0xe620  codep:0x224c parp:0xe620 size:0x001e C-string:'UNK_0xe620'
//      UNK_0xe640  codep:0x224c parp:0xe640 size:0x0034 C-string:'UNK_0xe640'
//      UNK_0xe676  codep:0x1d29 parp:0xe676 size:0x0002 C-string:'UNK_0xe676'
//      UNK_0xe67a  codep:0x224c parp:0xe67a size:0x0008 C-string:'UNK_0xe67a'
//      UNK_0xe684  codep:0x224c parp:0xe684 size:0x0018 C-string:'UNK_0xe684'
//      UNK_0xe69e  codep:0x224c parp:0xe69e size:0x0020 C-string:'UNK_0xe69e'
//      UNK_0xe6c0  codep:0x224c parp:0xe6c0 size:0x000e C-string:'UNK_0xe6c0'
//      UNK_0xe6d0  codep:0x224c parp:0xe6d0 size:0x0014 C-string:'UNK_0xe6d0'
//      UNK_0xe6e6  codep:0x224c parp:0xe6e6 size:0x0021 C-string:'UNK_0xe6e6'
//     ENTER-TRADE  codep:0xaccc parp:0xe717 size:0x0020 C-string:'ENTER_dash_TRADE'
//        DO-ENTER  codep:0x224c parp:0xe744 size:0x0014 C-string:'DO_dash_ENTER'
//        (GETUSE)  codep:0x4b3b parp:0xe765 size:0x0014 C-string:'_ro_GETUSE_rc_'
//      UNK_0xe77b  codep:0x224c parp:0xe77b size:0x0006 C-string:'UNK_0xe77b'
//      UNK_0xe783  codep:0x224c parp:0xe783 size:0x0006 C-string:'UNK_0xe783'
//      UNK_0xe78b  codep:0x224c parp:0xe78b size:0x0020 C-string:'UNK_0xe78b'
//      UNK_0xe7ad  codep:0x224c parp:0xe7ad size:0x002c C-string:'UNK_0xe7ad'
//      UNK_0xe7db  codep:0x224c parp:0xe7db size:0x0024 C-string:'UNK_0xe7db'
//      UNK_0xe801  codep:0x224c parp:0xe801 size:0x0006 C-string:'UNK_0xe801'
//      UNK_0xe809  codep:0x224c parp:0xe809 size:0x0008 C-string:'UNK_0xe809'
//      UNK_0xe813  codep:0x224c parp:0xe813 size:0x0006 C-string:'UNK_0xe813'
//      UNK_0xe81b  codep:0x224c parp:0xe81b size:0x0008 C-string:'UNK_0xe81b'
//      UNK_0xe825  codep:0x224c parp:0xe825 size:0x0008 C-string:'UNK_0xe825'
//      UNK_0xe82f  codep:0x224c parp:0xe82f size:0x0018 C-string:'UNK_0xe82f'
//      UNK_0xe849  codep:0x224c parp:0xe849 size:0x0012 C-string:'UNK_0xe849'
//      UNK_0xe85d  codep:0x224c parp:0xe85d size:0x001f C-string:'UNK_0xe85d'
//      UNK_0xe87e  codep:0x224c parp:0xe87e size:0x001c C-string:'UNK_0xe87e'
//      UNK_0xe89c  codep:0x224c parp:0xe89c size:0x0026 C-string:'UNK_0xe89c'
//      UNK_0xe8c4  codep:0x224c parp:0xe8c4 size:0x0020 C-string:'UNK_0xe8c4'
//      UNK_0xe8e6  codep:0x224c parp:0xe8e6 size:0x0038 C-string:'UNK_0xe8e6'
//      UNK_0xe920  codep:0x224c parp:0xe920 size:0x0032 C-string:'UNK_0xe920'
//      UNK_0xe954  codep:0x224c parp:0xe954 size:0x000a C-string:'UNK_0xe954'
//      UNK_0xe960  codep:0x224c parp:0xe960 size:0x001a C-string:'UNK_0xe960'
//      UNK_0xe97c  codep:0x224c parp:0xe97c size:0x002c C-string:'UNK_0xe97c'
//      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x0016 C-string:'UNK_0xe9aa'
//      UNK_0xe9c2  codep:0x224c parp:0xe9c2 size:0x000a C-string:'UNK_0xe9c2'
//      UNK_0xe9ce  codep:0x224c parp:0xe9ce size:0x0034 C-string:'UNK_0xe9ce'
//      UNK_0xea04  codep:0x224c parp:0xea04 size:0x002c C-string:'UNK_0xea04'
//      UNK_0xea32  codep:0x224c parp:0xea32 size:0x0008 C-string:'UNK_0xea32'
//      UNK_0xea3c  codep:0x224c parp:0xea3c size:0x002c C-string:'UNK_0xea3c'
//      UNK_0xea6a  codep:0x224c parp:0xea6a size:0x0031 C-string:'UNK_0xea6a'
//      UNK_0xea9d  codep:0x224c parp:0xea9d size:0x0026 C-string:'UNK_0xea9d'
//      UNK_0xeac5  codep:0x224c parp:0xeac5 size:0x0028 C-string:'UNK_0xeac5'
//      UNK_0xeaef  codep:0x224c parp:0xeaef size:0x0032 C-string:'UNK_0xeaef'
//      UNK_0xeb23  codep:0x224c parp:0xeb23 size:0x0020 C-string:'UNK_0xeb23'
//      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0026 C-string:'UNK_0xeb45'
//      UNK_0xeb6d  codep:0x224c parp:0xeb6d size:0x0020 C-string:'UNK_0xeb6d'
//      UNK_0xeb8f  codep:0x1d29 parp:0xeb8f size:0x0002 C-string:'UNK_0xeb8f'
//      UNK_0xeb93  codep:0x224c parp:0xeb93 size:0x004a C-string:'UNK_0xeb93'
//      UNK_0xebdf  codep:0x224c parp:0xebdf size:0x002d C-string:'UNK_0xebdf'
//      UNK_0xec0e  codep:0x224c parp:0xec0e size:0x001e C-string:'UNK_0xec0e'
//      UNK_0xec2e  codep:0x224c parp:0xec2e size:0x005c C-string:'UNK_0xec2e'
//      UNK_0xec8c  codep:0x224c parp:0xec8c size:0x0012 C-string:'UNK_0xec8c'
//      UNK_0xeca0  codep:0x224c parp:0xeca0 size:0x0036 C-string:'UNK_0xeca0'
//      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x0024 C-string:'UNK_0xecd8'
//      UNK_0xecfe  codep:0x224c parp:0xecfe size:0x0022 C-string:'UNK_0xecfe'
//      UNK_0xed22  codep:0x224c parp:0xed22 size:0x001a C-string:'UNK_0xed22'
//      UNK_0xed3e  codep:0x224c parp:0xed3e size:0x005a C-string:'UNK_0xed3e'
//      UNK_0xed9a  codep:0x224c parp:0xed9a size:0x0018 C-string:'UNK_0xed9a'
//      UNK_0xedb4  codep:0x224c parp:0xedb4 size:0x0006 C-string:'UNK_0xedb4'
//      UNK_0xedbc  codep:0x224c parp:0xedbc size:0x0006 C-string:'UNK_0xedbc'
//      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x0020 C-string:'UNK_0xedc4'
//      UNK_0xede6  codep:0x224c parp:0xede6 size:0x004a C-string:'UNK_0xede6'
//      UNK_0xee32  codep:0x224c parp:0xee32 size:0x0016 C-string:'UNK_0xee32'
//      UNK_0xee4a  codep:0x224c parp:0xee4a size:0x001a C-string:'UNK_0xee4a'
//      UNK_0xee66  codep:0x224c parp:0xee66 size:0x0006 C-string:'UNK_0xee66'
//      UNK_0xee6e  codep:0x224c parp:0xee6e size:0x0010 C-string:'UNK_0xee6e'
//      UNK_0xee80  codep:0x224c parp:0xee80 size:0x0008 C-string:'UNK_0xee80'
//      UNK_0xee8a  codep:0x224c parp:0xee8a size:0x000a C-string:'UNK_0xee8a'
//      UNK_0xee96  codep:0x224c parp:0xee96 size:0x0016 C-string:'UNK_0xee96'
//      UNK_0xeeae  codep:0x224c parp:0xeeae size:0x000e C-string:'UNK_0xeeae'
//      UNK_0xeebe  codep:0x224c parp:0xeebe size:0x0016 C-string:'UNK_0xeebe'
//      UNK_0xeed6  codep:0x224c parp:0xeed6 size:0x0010 C-string:'UNK_0xeed6'
//      UNK_0xeee8  codep:0x224c parp:0xeee8 size:0x0020 C-string:'UNK_0xeee8'
//      UNK_0xef0a  codep:0x224c parp:0xef0a size:0x0012 C-string:'UNK_0xef0a'
//      UNK_0xef1e  codep:0x224c parp:0xef1e size:0x0010 C-string:'UNK_0xef1e'
//      UNK_0xef30  codep:0x224c parp:0xef30 size:0x0014 C-string:'UNK_0xef30'
//      UNK_0xef46  codep:0x224c parp:0xef46 size:0x001a C-string:'UNK_0xef46'
//     OPEN-EXPERT  codep:0xaccc parp:0xef70 size:0x004a C-string:'OPEN_dash_EXPERT'
//       DO-OPEN_1  codep:0x224c parp:0xefc6 size:0x0010 C-string:'DO_dash_OPEN_1'
//      UNK_0xefd8  codep:0x224c parp:0xefd8 size:0x001c C-string:'UNK_0xefd8'
//      UNK_0xeff6  codep:0x224c parp:0xeff6 size:0x0006 C-string:'UNK_0xeff6'
//      UNK_0xeffe  codep:0x224c parp:0xeffe size:0x0008 C-string:'UNK_0xeffe'
//      UNK_0xf008  codep:0x224c parp:0xf008 size:0x000a C-string:'UNK_0xf008'
//      UNK_0xf014  codep:0x224c parp:0xf014 size:0x0032 C-string:'UNK_0xf014'
//      UNK_0xf048  codep:0x224c parp:0xf048 size:0x001c C-string:'UNK_0xf048'
//      UNK_0xf066  codep:0x224c parp:0xf066 size:0x0036 C-string:'UNK_0xf066'
//      UNK_0xf09e  codep:0x224c parp:0xf09e size:0x0006 C-string:'UNK_0xf09e'
//      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x0012 C-string:'UNK_0xf0a6'
//      UNK_0xf0ba  codep:0x224c parp:0xf0ba size:0x0010 C-string:'UNK_0xf0ba'
//      UNK_0xf0cc  codep:0x224c parp:0xf0cc size:0x0006 C-string:'UNK_0xf0cc'
//      UNK_0xf0d4  codep:0x224c parp:0xf0d4 size:0x0016 C-string:'UNK_0xf0d4'
//      UNK_0xf0ec  codep:0x224c parp:0xf0ec size:0x0012 C-string:'UNK_0xf0ec'
//      UNK_0xf100  codep:0x224c parp:0xf100 size:0x0014 C-string:'UNK_0xf100'
//      UNK_0xf116  codep:0x224c parp:0xf116 size:0x000e C-string:'UNK_0xf116'
//      UNK_0xf126  codep:0x224c parp:0xf126 size:0x002e C-string:'UNK_0xf126'
//      UNK_0xf156  codep:0x224c parp:0xf156 size:0x0002 C-string:'UNK_0xf156'
//      UNK_0xf15a  codep:0x224c parp:0xf15a size:0x002a C-string:'UNK_0xf15a'
//      UNK_0xf186  codep:0x224c parp:0xf186 size:0x0028 C-string:'UNK_0xf186'
//      UNK_0xf1b0  codep:0x224c parp:0xf1b0 size:0x000c C-string:'UNK_0xf1b0'
//      UNK_0xf1be  codep:0x224c parp:0xf1be size:0x0030 C-string:'UNK_0xf1be'
//      UNK_0xf1f0  codep:0x224c parp:0xf1f0 size:0x0032 C-string:'UNK_0xf1f0'
//      UNK_0xf224  codep:0x224c parp:0xf224 size:0x0038 C-string:'UNK_0xf224'
//      UNK_0xf25e  codep:0x224c parp:0xf25e size:0x0016 C-string:'UNK_0xf25e'
//      UNK_0xf276  codep:0x224c parp:0xf276 size:0x0050 C-string:'UNK_0xf276'
//      UNK_0xf2c8  codep:0x224c parp:0xf2c8 size:0x0006 C-string:'UNK_0xf2c8'
//      UNK_0xf2d0  codep:0x224c parp:0xf2d0 size:0x0006 C-string:'UNK_0xf2d0'
//      UNK_0xf2d8  codep:0x224c parp:0xf2d8 size:0x0010 C-string:'UNK_0xf2d8'
//      UNK_0xf2ea  codep:0x224c parp:0xf2ea size:0x003e C-string:'UNK_0xf2ea'
//      UNK_0xf32a  codep:0x224c parp:0xf32a size:0x0052 C-string:'UNK_0xf32a'
//      UNK_0xf37e  codep:0x224c parp:0xf37e size:0x0006 C-string:'UNK_0xf37e'
//      UNK_0xf386  codep:0x224c parp:0xf386 size:0x0012 C-string:'UNK_0xf386'
//      UNK_0xf39a  codep:0x224c parp:0xf39a size:0x0024 C-string:'UNK_0xf39a'
//     (DO-BARTER)  codep:0xaccc parp:0xf3ce size:0x0082 C-string:'_ro_DO_dash_BARTER_rc_'
//       DO-BARTER  codep:0x224c parp:0xf45e size:0x0026 C-string:'DO_dash_BARTER'
//      UNK_0xf486  codep:0x224c parp:0xf486 size:0x0018 C-string:'UNK_0xf486'
//         N>REPLY  codep:0x4b3b parp:0xf4aa size:0x0010 C-string:'N_gt_REPLY'
//      UNK_0xf4bc  codep:0x224c parp:0xf4bc size:0x0008 C-string:'UNK_0xf4bc'
//         !PFLAGS  codep:0x224c parp:0xf4d0 size:0x0030 C-string:'_ex_PFLAGS'
//             L>P  codep:0x224c parp:0xf508 size:0x000e C-string:'L_gt_P'
//      UNK_0xf518  codep:0x224c parp:0xf518 size:0x0034 C-string:'UNK_0xf518'
//       DO-OPEN_2  codep:0x224c parp:0xf558 size:0x0000 C-string:'DO_dash_OPEN_2'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xdfd6 = 0xdfd6; // UNK_0xdfd6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdfda = 0xdfda; // UNK_0xdfda size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdfde = 0xdfde; // UNK_0xdfde size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdfe2 = 0xdfe2; // UNK_0xdfe2 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe260 = 0xe260; // UNK_0xe260 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4a6 = 0xe4a6; // UNK_0xe4a6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4aa = 0xe4aa; // UNK_0xe4aa size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4ae = 0xe4ae; // UNK_0xe4ae size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4b2 = 0xe4b2; // UNK_0xe4b2 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4b6 = 0xe4b6; // UNK_0xe4b6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4ba = 0xe4ba; // UNK_0xe4ba size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4be = 0xe4be; // UNK_0xe4be size: 38
// {0x3a, 0x20, 0x14, 0x22, 0x15, 0x00, 0x94, 0x73, 0x15, 0x13, 0x01, 0x32, 0xd1, 0x6a, 0x94, 0x73, 0x15, 0x14, 0x01, 0x32, 0xd1, 0x6a, 0x94, 0x73, 0x15, 0x15, 0x01, 0x32, 0xd1, 0x6a, 0x94, 0x73, 0x15, 0x16, 0x01, 0x32, 0xd1, 0x6a}

const unsigned short int pp_UNK_0xe676 = 0xe676; // UNK_0xe676 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeb8f = 0xeb8f; // UNK_0xeb8f size: 2
// {0x01, 0x00}




// 0xdfd2: db 0x5a 0x01 'Z '

// ================================================
// 0xdfd4: WORD 'UNK_0xdfd6' codep=0x1d29 parp=0xdfd6
// ================================================
// 0xdfd6: db 0x3a 0x20 ': '

// ================================================
// 0xdfd8: WORD 'UNK_0xdfda' codep=0x1d29 parp=0xdfda
// ================================================
// 0xdfda: db 0x3a 0x20 ': '

// ================================================
// 0xdfdc: WORD 'UNK_0xdfde' codep=0x1d29 parp=0xdfde
// ================================================
// 0xdfde: db 0x3a 0x20 ': '

// ================================================
// 0xdfe0: WORD 'UNK_0xdfe2' codep=0x1d29 parp=0xdfe2
// ================================================
// 0xdfe2: db 0x3a 0x20 ': '

// ================================================
// 0xdfe4: WORD 'UNK_0xdfe6' codep=0x224c parp=0xdfe6
// ================================================

void UNK_0xdfe6() // UNK_0xdfe6
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xdffe: WORD 'UNK_0xe000' codep=0x224c parp=0xe000
// ================================================

void UNK_0xe000() // UNK_0xe000
{
  Push(0x0040);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe008: WORD 'UNK_0xe00a' codep=0x224c parp=0xe00a
// ================================================

void UNK_0xe00a() // UNK_0xe00a
{
  Push(0x0041);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe012: WORD 'UNK_0xe014' codep=0x224c parp=0xe014
// ================================================

void UNK_0xe014() // UNK_0xe014
{
  Push(0x0042);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe01c: WORD 'UNK_0xe01e' codep=0x224c parp=0xe01e
// ================================================

void UNK_0xe01e() // UNK_0xe01e
{
  Push(0x0043);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe026: WORD 'UNK_0xe028' codep=0x224c parp=0xe028
// ================================================

void UNK_0xe028() // UNK_0xe028
{
  Push(0x0044);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe030: WORD 'UNK_0xe032' codep=0x224c parp=0xe032
// ================================================

void UNK_0xe032() // UNK_0xe032
{
  Push(0x0045);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe03a: WORD 'UNK_0xe03c' codep=0x224c parp=0xe03c
// ================================================

void UNK_0xe03c() // UNK_0xe03c
{
  Push(0x0046);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe044: WORD 'UNK_0xe046' codep=0x224c parp=0xe046
// ================================================

void UNK_0xe046() // UNK_0xe046
{
  Push(0x0047);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe04e: WORD 'UNK_0xe050' codep=0x224c parp=0xe050
// ================================================

void UNK_0xe050() // UNK_0xe050
{
  Push(0x0048);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe058: WORD 'UNK_0xe05a' codep=0x224c parp=0xe05a
// ================================================

void UNK_0xe05a() // UNK_0xe05a
{
  Push(0x0049);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe062: WORD 'UNK_0xe064' codep=0x224c parp=0xe064
// ================================================

void UNK_0xe064() // UNK_0xe064
{
  Push(0x004a);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe06c: WORD 'UNK_0xe06e' codep=0x224c parp=0xe06e
// ================================================

void UNK_0xe06e() // UNK_0xe06e
{
  Push(0x004b);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe076: WORD 'UNK_0xe078' codep=0x224c parp=0xe078
// ================================================

void UNK_0xe078() // UNK_0xe078
{
  Push(0x004c);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe080: WORD 'UNK_0xe082' codep=0x224c parp=0xe082
// ================================================

void UNK_0xe082() // UNK_0xe082
{
  Push(0x004d);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe08a: WORD 'UNK_0xe08c' codep=0x224c parp=0xe08c
// ================================================

void UNK_0xe08c() // UNK_0xe08c
{
  Push(0x004e);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe094: WORD 'UNK_0xe096' codep=0x224c parp=0xe096
// ================================================

void UNK_0xe096() // UNK_0xe096
{
  Push(0x004f);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe09e: WORD 'UNK_0xe0a0' codep=0x224c parp=0xe0a0
// ================================================

void UNK_0xe0a0() // UNK_0xe0a0
{
  Push(0x0050);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0a8: WORD 'UNK_0xe0aa' codep=0x224c parp=0xe0aa
// ================================================

void UNK_0xe0aa() // UNK_0xe0aa
{
  Push(0x0051);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0b2: WORD 'UNK_0xe0b4' codep=0x224c parp=0xe0b4
// ================================================

void UNK_0xe0b4() // UNK_0xe0b4
{
  Push(0x0052);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0bc: WORD 'UNK_0xe0be' codep=0x224c parp=0xe0be
// ================================================

void UNK_0xe0be() // UNK_0xe0be
{
  Push(0x0053);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0c6: WORD 'UNK_0xe0c8' codep=0x224c parp=0xe0c8
// ================================================

void UNK_0xe0c8() // UNK_0xe0c8
{
  Push(0x0054);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0d0: WORD 'UNK_0xe0d2' codep=0x224c parp=0xe0d2
// ================================================

void UNK_0xe0d2() // UNK_0xe0d2
{
  Push(0x0055);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0da: WORD 'UNK_0xe0dc' codep=0x224c parp=0xe0dc
// ================================================

void UNK_0xe0dc() // UNK_0xe0dc
{
  Push(0x0056);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0e4: WORD 'UNK_0xe0e6' codep=0x224c parp=0xe0e6
// ================================================

void UNK_0xe0e6() // UNK_0xe0e6
{
  Push(0x0057);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0ee: WORD 'UNK_0xe0f0' codep=0x224c parp=0xe0f0
// ================================================

void UNK_0xe0f0() // UNK_0xe0f0
{
  Push(0x0058);
  UNK_0xdfe6(); // UNK_0xdfe6
}

// 0xe0f8: db 0x14 0x22 0x09 0x00 0x14 0x22 0x1c 0x00 0x14 0x22 0x1a 0x00 0x14 0x22 0x44 0x00 ' "   "   "   "D '

// ================================================
// 0xe108: WORD 'UNK_0xe10a' codep=0x7394 parp=0xe10a
// ================================================
// 0xe10a: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b '     k'

// ================================================
// 0xe110: WORD 'UNK_0xe112' codep=0x7394 parp=0xe112
// ================================================
// 0xe112: db 0x1c 0x1f 0x01 0x20 0xcd 0x6b '     k'

// ================================================
// 0xe118: WORD 'UNK_0xe11a' codep=0x7394 parp=0xe11a
// ================================================
// 0xe11a: db 0x44 0x00 0x14 0x22 0x07 0x6f 0x94 0x73 0x44 0x14 0x02 0x22 0x07 0x6f 'D  " o sD  " o'

// ================================================
// 0xe128: WORD 'UNK_0xe12a' codep=0x7394 parp=0xe12a
// ================================================
// 0xe12a: db 0x44 0x16 0x01 0x22 0x07 0x6f 'D  " o'

// ================================================
// 0xe130: WORD 'UNK_0xe132' codep=0x7394 parp=0xe132
// ================================================
// 0xe132: db 0x1a 0x16 0x01 0x17 0xa9 0x6b 0x94 0x73 0x09 0x18 0x02 0x1b 0x54 0x6a '     k s    Tj'

// ================================================
// 0xe140: WORD 'UNK_0xe142' codep=0x7394 parp=0xe142
// ================================================
// 0xe142: db 0x09 0x1a 0x01 0x1b 0x54 0x6a '    Tj'

// ================================================
// 0xe148: WORD 'UNK_0xe14a' codep=0x7394 parp=0xe14a
// ================================================
// 0xe14a: db 0x09 0x00 0x20 0x1b 0x54 0x6a '    Tj'

// ================================================
// 0xe150: WORD 'UNK_0xe152' codep=0x7420 parp=0xe152
// ================================================
// 0xe152: db 0x0b 0x11 0x02 0x20 0x74 0x34 0x12 0x01 '    t4  '

// ================================================
// 0xe15a: WORD 'UNK_0xe15c' codep=0x224c parp=0xe15c
// ================================================

void UNK_0xe15c() // UNK_0xe15c
{
  Push(pp__ro_THING_rc_); // (THING) size: 4
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe162: WORD 'UNK_0xe164' codep=0x224c parp=0xe164
// ================================================

void UNK_0xe164() // UNK_0xe164
{
  Push(pp__ro_TRADER); // (TRADER size: 4
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe16a: WORD 'UNK_0xe16c' codep=0x224c parp=0xe16c
// ================================================

void UNK_0xe16c() // UNK_0xe16c
{
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  SetColor("BLUE");
  return;

  label1:
  SetColor("YELLOW");
}


// ================================================
// 0xe17c: WORD 'UNK_0xe17e' codep=0x224c parp=0xe17e
// ================================================

void UNK_0xe17e() // UNK_0xe17e
{
  SetColor("GREY1");
}


// ================================================
// 0xe182: WORD 'UNK_0xe184' codep=0x224c parp=0xe184
// ================================================

void UNK_0xe184() // UNK_0xe184
{
  SetColor("WHITE");
}


// ================================================
// 0xe188: WORD 'UNK_0xe18a' codep=0x224c parp=0xe18a
// ================================================

void UNK_0xe18a() // UNK_0xe18a
{
  UNK_0xe16c(); // UNK_0xe16c
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe190: WORD 'UNK_0xe192' codep=0x224c parp=0xe192
// ================================================

void UNK_0xe192() // UNK_0xe192
{
  SetColor("LT-BLUE");
}


// ================================================
// 0xe196: WORD 'UNK_0xe198' codep=0x224c parp=0xe198
// ================================================

void UNK_0xe198() // UNK_0xe198
{
  Push(cc__4); // 4
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe1a8: WORD 'UNK_0xe1aa' codep=0x224c parp=0xe1aa
// ================================================

void UNK_0xe1aa() // UNK_0xe1aa
{
  UNK_0xe198(); // UNK_0xe198
  UNK_0xe16c(); // UNK_0xe16c
  _ex_COLOR(); // !COLOR
  WUP(); // WUP
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe1b6: WORD 'UNK_0xe1b8' codep=0x224c parp=0xe1b8
// ================================================

void UNK_0xe1b8() // UNK_0xe1b8
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
// 0xe1e6: WORD 'UNK_0xe1e8' codep=0x224c parp=0xe1e8
// ================================================

void UNK_0xe1e8() // UNK_0xe1e8
{
  Push(0); // 0
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  D_plus__dash_(); // D+-
  _st__n_(); // <#
  _n_S(); // #S
  ROT(); // ROT
  SIGN(); // SIGN
  _n__gt_(); // #>
}


// ================================================
// 0xe1fe: WORD 'UNK_0xe200' codep=0x224c parp=0xe200
// ================================================

void UNK_0xe200() // UNK_0xe200
{
  UNK_0xe1b8(); // UNK_0xe1b8
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
// 0xe252: WORD 'UNK_0xe254' codep=0x224c parp=0xe254
// ================================================

void UNK_0xe254() // UNK_0xe254
{
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
}


// ================================================
// 0xe25e: WORD 'UNK_0xe260' codep=0x1d29 parp=0xe260
// ================================================
// 0xe260: db 0x3a 0x20 ': '

// ================================================
// 0xe262: WORD 'UNK_0xe264' codep=0x224c parp=0xe264
// ================================================

void UNK_0xe264() // UNK_0xe264
{
  OVER(); // OVER
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_BL); // BL
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp_UNK_0xe260); // UNK_0xe260 size: 0
  ON_2(); // ON_2
}


// ================================================
// 0xe27a: WORD 'UNK_0xe27c' codep=0x224c parp=0xe27c
// ================================================

void UNK_0xe27c() // UNK_0xe27c
{
  Push(pp_UNK_0xdfd6); // UNK_0xdfd6 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe28a: WORD 'UNK_0xe28c' codep=0x224c parp=0xe28c
// ================================================

void UNK_0xe28c() // UNK_0xe28c
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  UNK_0xe27c(); // UNK_0xe27c
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  WUP(); // WUP
  UNK_0xe198(); // UNK_0xe198
  Push(pp_UNK_0xdfd6); // UNK_0xdfd6 size: 0
  _099(); // 099

  label2:
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(0x002e);
  _eq_(); // =
  Push(pp_UNK_0xdfd6); // UNK_0xdfd6 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  SPACE(); // SPACE

  label3:
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdfd6); // UNK_0xdfd6 size: 0
  _plus__ex__2(); // +!_2
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(pp_UNK_0xe260); // UNK_0xe260 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label4;
  Push(0xfffc);
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xe260); // UNK_0xe260 size: 0
  _099(); // 099

  label4:
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe2e2: WORD 'UNK_0xe2e4' codep=0x224c parp=0xe2e4
// ================================================

void UNK_0xe2e4() // UNK_0xe2e4
{
  UNK_0xe264(); // UNK_0xe264
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfe2); // UNK_0xdfe2 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() ^ Pop()); // XOR
  if (Pop() == 0) goto label1;

  UNK_0x3f09("HIGH");
  return;

  label1:

  UNK_0x3f09("LOW");
}


// ================================================
// 0xe307: WORD 'UNK_0xe309' codep=0x224c parp=0xe309
// ================================================

void UNK_0xe309() // UNK_0xe309
{
  UNK_0xe264(); // UNK_0xe264
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfe2); // UNK_0xdfe2 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() ^ Pop()); // XOR
  if (Pop() == 0) goto label1;

  UNK_0x3f09("PAY");
  return;

  label1:

  UNK_0x3f09("ACCEPT");
}


// ================================================
// 0xe32e: WORD 'UNK_0xe330' codep=0x224c parp=0xe330
// ================================================

void UNK_0xe330() // UNK_0xe330
{
  UNK_0xe264(); // UNK_0xe264
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfe2); // UNK_0xdfe2 size: 0
  Push(Read16(Pop())); // @
  Push(Pop() ^ Pop()); // XOR
  if (Pop() == 0) goto label1;

  UNK_0x3f09("OFFER");
  return;

  label1:

  UNK_0x3f09("PRICE");
}


// ================================================
// 0xe356: WORD 'T>NAME' codep=0x4b3b parp=0xe361
// ================================================

void T_gt_NAME() // T>NAME
{
  switch(Pop()) // T>NAME
  {
  case 28:
    LoadData("ART-NAM"); // from 'ARTIFACT    '
    break;
  case 68:
    LoadData("UNK_0xe11a"); // from 'CREATURE    '
    break;
  case 9:
    LoadData("UNK_0xe14a"); // from 'STIS        '
    break;
  case 26:
    LoadData("ELEM-NA"); // from 'ELEMENT     '
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xe375: WORD 'UNK_0xe377' codep=0x224c parp=0xe377
// ================================================

void UNK_0xe377() // UNK_0xe377
{
  Push(Read16(regsp)); // DUP
  Push(0x0009);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0x0018);
  return;

  label1:
  Push(0x001c);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0x0018);
  return;

  label2:
  Push(0x0010);
}

// 0xe3a5: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x44 0x00 0x5f 0x12 0xfa 0x15 0x0f 0x00 0xdc 0x1b 0x0a 0x20 0x4c 0x49 0x46 0x45 0x46 0x4f 0x52 0x4d 0x53 0x90 0x16 'L""u] D _         LIFEFORMS  '

// ================================================
// 0xe3c2: WORD 'UNK_0xe3c4' codep=0x224c parp=0xe3c4
// ================================================

void UNK_0xe3c4() // UNK_0xe3c4
{
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  Push(Read16(regsp)); // DUP
  UNK_0xe377(); // UNK_0xe377
  SWAP(); // SWAP
  T_gt_NAME(); // T>NAME case
  SWAP(); // SWAP
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  _2DUP(); // 2DUP
  PAD(); // PAD
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  ROT(); // ROT
  Pop(); // DROP
  SWAP(); // SWAP
}


// ================================================
// 0xe3ec: WORD 'UNK_0xe3ee' codep=0x224c parp=0xe3ee
// ================================================

void UNK_0xe3ee() // UNK_0xe3ee
{
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  Push(Read16(Pop())); // @
  UNK_0xe1e8(); // UNK_0xe1e8
}


// ================================================
// 0xe3f6: WORD 'UNK_0xe3f8' codep=0x224c parp=0xe3f8
// ================================================

void UNK_0xe3f8() // UNK_0xe3f8
{
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  UNK_0xe1e8(); // UNK_0xe1e8
}


// ================================================
// 0xe400: WORD 'UNK_0xe402' codep=0x224c parp=0xe402
// ================================================

void UNK_0xe402() // UNK_0xe402
{
  UNK_0xe184(); // UNK_0xe184
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xdfda); // UNK_0xdfda size: 0
  Push(Read16(Pop())); // @
  UNK_0xe1e8(); // UNK_0xe1e8
}


// ================================================
// 0xe40e: WORD 'UNK_0xe410' codep=0x224c parp=0xe410
// ================================================

void UNK_0xe410() // UNK_0xe410
{
  UNK_0xe15c(); // UNK_0xe15c
  Push(0x65f4); // IFIELD(ASKING)
  Push(Read16(Pop())); // @
  UNK_0xe1e8(); // UNK_0xe1e8
  ICLOSE(); // ICLOSE
  UNK_0xe184(); // UNK_0xe184
  _ex_COLOR(); // !COLOR
}

// 0xe420: db 0x4c 0x22 0x20 0x0f 0x90 0x16 'L"    '

// ================================================
// 0xe426: WORD 'SPL' codep=0x4b3b parp=0xe42e
// ================================================

void SPL() // SPL
{
  switch(Pop()) // SPL
  {
  case 42:
    UNK_0xe402(); // UNK_0xe402
    break;
  case 38:
    UNK_0xe3ee(); // UNK_0xe3ee
    break;
  case 37:
    UNK_0xe2e4(); // UNK_0xe2e4
    break;
  case 47:
    UNK_0xe3c4(); // UNK_0xe3c4
    break;
  case 43:
    UNK_0xe410(); // UNK_0xe410
    break;
  case 35:
    UNK_0xe3f8(); // UNK_0xe3f8
    break;
  case 40:
    UNK_0xe309(); // UNK_0xe309
    break;
  case 41:
    UNK_0xe330(); // UNK_0xe330
    break;
  default:
    Push(0); // 0
    break;

  }
}

// ================================================
// 0xe452: WORD 'UNK_0xe454' codep=0x224c parp=0xe454
// ================================================

void UNK_0xe454() // UNK_0xe454
{
  Push(pp_UNK_0xe260); // UNK_0xe260 size: 0
  _099(); // 099
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  _at_COLOR(); // @COLOR
  _gt_R(); // >R
  SPL(); // SPL case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  UNK_0xe28c(); // UNK_0xe28c
  UNK_0xe254(); // UNK_0xe254

  label1:
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe472: WORD 'UNK_0xe474' codep=0x224c parp=0xe474
// ================================================

void UNK_0xe474() // UNK_0xe474
{
  UNK_0xe198(); // UNK_0xe198
  WUP(); // WUP

  label1:
  UNK_0xe200(); // UNK_0xe200
  UNK_0xe454(); // UNK_0xe454
  UNK_0xe28c(); // UNK_0xe28c
  Push(1); // 1
  Push(pp_UNK_0xdfd6); // UNK_0xdfd6 size: 0
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe490: WORD 'UNK_0xe492' codep=0x224c parp=0xe492
// ================================================

void UNK_0xe492() // UNK_0xe492
{
  Push(pp_UNK_0xdfd6); // UNK_0xdfd6 size: 0
  _099(); // 099
  Push(0x65ed); // IFIELD(PHRASE)
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN size: 400
  COUNT(); // COUNT
  UNK_0xe474(); // UNK_0xe474
}


// ================================================
// 0xe4a4: WORD 'UNK_0xe4a6' codep=0x1d29 parp=0xe4a6
// ================================================
// 0xe4a6: db 0x3a 0x20 ': '

// ================================================
// 0xe4a8: WORD 'UNK_0xe4aa' codep=0x1d29 parp=0xe4aa
// ================================================
// 0xe4aa: db 0x3a 0x20 ': '

// ================================================
// 0xe4ac: WORD 'UNK_0xe4ae' codep=0x1d29 parp=0xe4ae
// ================================================
// 0xe4ae: db 0x3a 0x20 ': '

// ================================================
// 0xe4b0: WORD 'UNK_0xe4b2' codep=0x1d29 parp=0xe4b2
// ================================================
// 0xe4b2: db 0x3a 0x20 ': '

// ================================================
// 0xe4b4: WORD 'UNK_0xe4b6' codep=0x1d29 parp=0xe4b6
// ================================================
// 0xe4b6: db 0x3a 0x20 ': '

// ================================================
// 0xe4b8: WORD 'UNK_0xe4ba' codep=0x1d29 parp=0xe4ba
// ================================================
// 0xe4ba: db 0x3a 0x20 ': '

// ================================================
// 0xe4bc: WORD 'UNK_0xe4be' codep=0x1d29 parp=0xe4be
// ================================================
// 0xe4be: db 0x3a 0x20 0x14 0x22 0x15 0x00 0x94 0x73 0x15 0x13 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x14 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x15 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x16 0x01 0x32 0xd1 0x6a ':  "   s   2 j s   2 j s   2 j s   2 j'

// ================================================
// 0xe4e4: WORD 'UNK_0xe4e6' codep=0x7394 parp=0xe4e6
// ================================================
// 0xe4e6: db 0x15 0x1a 0x03 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xe4ec: WORD 'UNK_0xe4ee' codep=0x7394 parp=0xe4ee
// ================================================
// 0xe4ee: db 0x15 0x1d 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xe4f4: WORD 'UNK_0xe4f6' codep=0x7394 parp=0xe4f6
// ================================================
// 0xe4f6: db 0x15 0x1e 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x1f 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x20 0x01 0x32 0xd1 0x6a '   2 j s   2 j s   2 j'

// ================================================
// 0xe50c: WORD 'UNK_0xe50e' codep=0x7394 parp=0xe50e
// ================================================
// 0xe50e: db 0x15 0x21 0x01 0x32 0xd1 0x6a ' ! 2 j'

// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x7394 parp=0xe516
// ================================================
// 0xe516: db 0x15 0x22 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x23 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x24 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x25 0x02 0x32 0xd1 0x6a 0x94 0x73 0x15 0x27 0x02 0x32 0xd1 0x6a ' " 2 j s # 2 j s $ 2 j s % 2 j s ' 2 j'

// ================================================
// 0xe53c: WORD 'UNK_0xe53e' codep=0x7394 parp=0xe53e
// ================================================
// 0xe53e: db 0x15 0x29 0x01 0x32 0xd1 0x6a ' ) 2 j'

// ================================================
// 0xe544: WORD 'TRADE.EDL' codep=0x7394 parp=0xe552
// ================================================
// 0xe552: db 0x15 0x2a 0x01 0x32 0xd1 0x6a ' * 2 j'

// ================================================
// 0xe558: WORD 'UNK_0xe55a' codep=0x224c parp=0xe55a
// ================================================

void UNK_0xe55a() // UNK_0xe55a
{
  UNK_0xe15c(); // UNK_0xe15c
  Push(0xa9ce); // probable 'ASKING'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe566: WORD 'UNK_0xe568' codep=0x224c parp=0xe568
// ================================================

void UNK_0xe568() // UNK_0xe568
{
  UNK_0xe55a(); // UNK_0xe55a
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(0x65f4); // IFIELD(ASKING)
  _ex__2(); // !_2
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe58e: WORD 'UNK_0xe590' codep=0x224c parp=0xe590
// ================================================

void UNK_0xe590() // UNK_0xe590
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xe598: WORD 'UNK_0xe59a' codep=0x224c parp=0xe59a
// ================================================

void UNK_0xe59a() // UNK_0xe59a
{
  Push(0x0064);
  M_star__slash_(); // M*/
}


// ================================================
// 0xe5a2: WORD 'UNK_0xe5a4' codep=0x224c parp=0xe5a4
// ================================================

void UNK_0xe5a4() // UNK_0xe5a4
{
  Push(0); // 0
  Push(pp_UNK_0xdfe2); // UNK_0xdfe2 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xe5ac: WORD 'UNK_0xe5ae' codep=0x224c parp=0xe5ae
// ================================================

void UNK_0xe5ae() // UNK_0xe5ae
{
  Push(1); // 1
  Push(pp_UNK_0xdfe2); // UNK_0xdfe2 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xe5b6: WORD 'UNK_0xe5b8' codep=0x224c parp=0xe5b8
// ================================================

void UNK_0xe5b8() // UNK_0xe5b8
{
  UNK_0xe164(); // UNK_0xe164
  Push(0xe552); // probable 'TRADE.EDL'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5c4: WORD 'UNK_0xe5c6' codep=0x224c parp=0xe5c6
// ================================================

void UNK_0xe5c6() // UNK_0xe5c6
{
  UNK_0xe164(); // UNK_0xe164
  Push(0xe552); // probable 'TRADE.EDL'
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5d2: WORD 'UNK_0xe5d4' codep=0x224c parp=0xe5d4
// ================================================

void UNK_0xe5d4() // UNK_0xe5d4
{
  UNK_0xe15c(); // UNK_0xe15c
  Push(0xa9ce); // probable 'ASKING'
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
  UNK_0xe568(); // UNK_0xe568
  Push(0xc024); // probable 'SET-C'
  MODULE(); // MODULE
}


// ================================================
// 0xe5e8: WORD 'UNK_0xe5ea' codep=0x224c parp=0xe5ea
// ================================================

void UNK_0xe5ea() // UNK_0xe5ea
{
  UNK_0xe15c(); // UNK_0xe15c
  Push(0xa91b); // probable 'INST-VA'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5f6: WORD 'UNK_0xe5f8' codep=0x224c parp=0xe5f8
// ================================================

void UNK_0xe5f8() // UNK_0xe5f8
{
  UNK_0xe492(); // UNK_0xe492
}


// ================================================
// 0xe5fc: WORD 'UNK_0xe5fe' codep=0x224c parp=0xe5fe
// ================================================

void UNK_0xe5fe() // UNK_0xe5fe
{
  ILAST(); // ILAST
  CI(); // CI
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0x65e7); // IFIELD(INST-OF)
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe60e: WORD 'UNK_0xe610' codep=0x224c parp=0xe610
// ================================================

void UNK_0xe610() // UNK_0xe610
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xe5f8(); // UNK_0xe5f8
  UNK_0xe5fe(); // UNK_0xe5fe
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe61e: WORD 'UNK_0xe620' codep=0x224c parp=0xe620
// ================================================

void UNK_0xe620() // UNK_0xe620
{
  UNK_0xe5b8(); // UNK_0xe5b8
  Push(cc__8); // 8
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe0aa(); // UNK_0xe0aa
  UNK_0xe610(); // UNK_0xe610
  Push(0x0bb8);
  MS(); // MS
  Push(pp_TERMINA); // TERMINA size: 2
  ON_2(); // ON_2
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
}


// ================================================
// 0xe63e: WORD 'UNK_0xe640' codep=0x224c parp=0xe640
// ================================================

void UNK_0xe640() // UNK_0xe640
{
  UNK_0xe164(); // UNK_0xe164
  Push(cc__4); // 4
  UNK_0xe5b8(); // UNK_0xe5b8
  MAX(); // MAX
  UNK_0xe5c6(); // UNK_0xe5c6
  LoadData("UNK_0xe53e"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(cc__4); // 4
  UNK_0xe5c6(); // UNK_0xe5c6
  goto label2;

  label1:
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0x000a);
  UNK_0xe5c6(); // UNK_0xe5c6

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe674: WORD 'UNK_0xe676' codep=0x1d29 parp=0xe676
// ================================================
// 0xe676: db 0x3a 0x20 ': '

// ================================================
// 0xe678: WORD 'UNK_0xe67a' codep=0x224c parp=0xe67a
// ================================================

void UNK_0xe67a() // UNK_0xe67a
{
  UNK_0xe590(); // UNK_0xe590
  Push(pp_UNK_0xe676); // UNK_0xe676 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x224c parp=0xe684
// ================================================

void UNK_0xe684() // UNK_0xe684
{
  UNK_0xe5b8(); // UNK_0xe5b8
  Push(0x000a);
  _eq_(); // =
  UNK_0xe164(); // UNK_0xe164
  Push(0xe4de);
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x224c parp=0xe69e
// ================================================

void UNK_0xe69e() // UNK_0xe69e
{
  UNK_0xe5b8(); // UNK_0xe5b8
  Push(cc__9); // 9
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xe676); // UNK_0xe676 size: 0
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  Push(cc__7); // 7
  UNK_0xe5c6(); // UNK_0xe5c6

  label2:
  return;

  label1:
  Push(cc_TRUE); // TRUE
}


// ================================================
// 0xe6be: WORD 'UNK_0xe6c0' codep=0x224c parp=0xe6c0
// ================================================

void UNK_0xe6c0() // UNK_0xe6c0
{
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_TERMINA); // TERMINA size: 2
  _ex__2(); // !_2
  Push(pp_BARTERI); // BARTERI size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xe6ce: WORD 'UNK_0xe6d0' codep=0x224c parp=0xe6d0
// ================================================

void UNK_0xe6d0() // UNK_0xe6d0
{
  Push(cc_TRUE); // TRUE
  UNK_0xe6c0(); // UNK_0xe6c0
  UNK_0xe164(); // UNK_0xe164
  LoadData("UNK_0xe4e6"); // from 'TRADERS     '
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  UNK_0xe5f8(); // UNK_0xe5f8
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x224c parp=0xe6e6
// ================================================

void UNK_0xe6e6() // UNK_0xe6e6
{
  Push(cc_FALSE); // FALSE
  UNK_0xe6c0(); // UNK_0xe6c0
  UNK_0xe0c8(); // UNK_0xe0c8
  UNK_0xe610(); // UNK_0xe610
}

// 0xe6f0: db 0x4c 0x22 0x89 0x12 0x13 0x1c 0x0e 0x45 0x58 0x50 0x45 0x52 0x54 0x20 0x46 0x41 0x49 0x4c 0x45 0x44 0x21 0x90 0x16 'L"     EXPERT FAILED!  '

// ================================================
// 0xe707: WORD 'ENTER-TRADE' codep=0xaccc parp=0xe717
// ================================================
// 0xe717: db 0x03 0x03 0x03 0x29 0xe7 0x2e 0xe7 0x33 0xe7 0x84 0xe6 0x9e 0xe6 0x7a 0x5d 0x17 0x0b 0x00 0x02 0xd0 0xe6 0x00 0x81 0x02 0xe6 0xe6 0x00 0x01 0x01 0xe6 0xe6 0x80 '   ) . 3     z]                 '

// ================================================
// 0xe737: WORD 'DO-ENTER' codep=0x224c parp=0xe744
// ================================================
// entry

void DO_dash_ENTER() // DO-ENTER
{
  UNK_0xe67a(); // UNK_0xe67a
  UNK_0xe640(); // UNK_0xe640
  Push(0xe717); // probable 'ENTER-TRADE'
  DISTRAC(); // DISTRAC
  UNK_0xe18a(); // UNK_0xe18a

  label1:
  Rule(ENTER-TRADE);
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xe758: WORD '(GETUSE)' codep=0x4b3b parp=0xe765
// ================================================

void _ro_GETUSE_rc_() // (GETUSE)
{
  switch(Pop()) // (GETUSE)
  {
  case 68:
    LoadData("UNK_0xe12a"); // from 'CREATURE    '
    break;
  case 28:
    LoadData("UNK_0xe112"); // from 'ARTIFACT    '
    break;
  case 26:
    LoadData("UNK_0xe132"); // from 'ELEMENT     '
    break;
  case 9:
    LoadData("UNK_0xe142"); // from 'STIS        '
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xe779: WORD 'UNK_0xe77b' codep=0x224c parp=0xe77b
// ================================================

void UNK_0xe77b() // UNK_0xe77b
{
  _at_INST_dash_C(); // @INST-C
  _ro_GETUSE_rc_(); // (GETUSE) case
}


// ================================================
// 0xe781: WORD 'UNK_0xe783' codep=0x224c parp=0xe783
// ================================================

void UNK_0xe783() // UNK_0xe783
{
  UNK_0xe77b(); // UNK_0xe77b
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe789: WORD 'UNK_0xe78b' codep=0x224c parp=0xe78b
// ================================================

void UNK_0xe78b() // UNK_0xe78b
{
  UNK_0xe15c(); // UNK_0xe15c
  UNK_0xe783(); // UNK_0xe783
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x0030);
  Push(Pop() & Pop()); // AND
  Push(Pop()>>4); // 16/
  goto label2;

  label1:
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7ab: WORD 'UNK_0xe7ad' codep=0x224c parp=0xe7ad
// ================================================

void UNK_0xe7ad() // UNK_0xe7ad
{
  UNK_0xe15c(); // UNK_0xe15c
  UNK_0xe783(); // UNK_0xe783
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x00cf);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  Push(0x00fc);
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +

  label2:
  UNK_0xe77b(); // UNK_0xe77b
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7d9: WORD 'UNK_0xe7db' codep=0x224c parp=0xe7db
// ================================================

void UNK_0xe7db() // UNK_0xe7db
{
  UNK_0xe78b(); // UNK_0xe78b
  if (Pop() == 0) goto label1;
  Push(2); // 2
  goto label2;

  label1:
  Push(0); // 0
  Push(cc__3); // 3
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Push(2); // 2
  goto label2;

  label3:
  Push(1); // 1

  label2:
  UNK_0xe7ad(); // UNK_0xe7ad
}


// ================================================
// 0xe7ff: WORD 'UNK_0xe801' codep=0x224c parp=0xe801
// ================================================

void UNK_0xe801() // UNK_0xe801
{
  Push(cc__3); // 3
  UNK_0xe7ad(); // UNK_0xe7ad
}


// ================================================
// 0xe807: WORD 'UNK_0xe809' codep=0x224c parp=0xe809
// ================================================

void UNK_0xe809() // UNK_0xe809
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(1); // 1
  _eq_(); // =
}


// ================================================
// 0xe811: WORD 'UNK_0xe813' codep=0x224c parp=0xe813
// ================================================

void UNK_0xe813() // UNK_0xe813
{
  UNK_0xe78b(); // UNK_0xe78b
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe819: WORD 'UNK_0xe81b' codep=0x224c parp=0xe81b
// ================================================

void UNK_0xe81b() // UNK_0xe81b
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(2); // 2
  _eq_(); // =
}


// ================================================
// 0xe823: WORD 'UNK_0xe825' codep=0x224c parp=0xe825
// ================================================

void UNK_0xe825() // UNK_0xe825
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(cc__3); // 3
  _eq_(); // =
}


// ================================================
// 0xe82d: WORD 'UNK_0xe82f' codep=0x224c parp=0xe82f
// ================================================

void UNK_0xe82f() // UNK_0xe82f
{
  Push(0x003a);
  Push(0x0094);
  POS_dot_(); // POS.
  Push(0x0018);
  Push(0); // 0
  POLY_dash_ER(); // POLY-ER
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe847: WORD 'UNK_0xe849' codep=0x224c parp=0xe849
// ================================================

void UNK_0xe849() // UNK_0xe849
{
  UNK_0xe82f(); // UNK_0xe82f
  Push(0xb71f); // probable 'OV.0$$'
  MODULE(); // MODULE
  Push(0x07d0);
  MS(); // MS
  UNK_0xe82f(); // UNK_0xe82f
}


// ================================================
// 0xe85b: WORD 'UNK_0xe85d' codep=0x224c parp=0xe85d
// ================================================

void UNK_0xe85d() // UNK_0xe85d
{
  UNK_0xe82f(); // UNK_0xe82f
  PRINT("NO ROOM IN CARGO", 16); // (.")
  Push(0x07d0);
  MS(); // MS
  UNK_0xe82f(); // UNK_0xe82f
}


// ================================================
// 0xe87c: WORD 'UNK_0xe87e' codep=0x224c parp=0xe87e
// ================================================

void UNK_0xe87e() // UNK_0xe87e
{
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(cc_TRUE); // TRUE
  return;

  label1:
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  _2SWAP(); // 2SWAP
  D_gt_(); // D>
}


// ================================================
// 0xe89a: WORD 'UNK_0xe89c' codep=0x224c parp=0xe89c
// ================================================

void UNK_0xe89c() // UNK_0xe89c
{
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(1); // 1
  return;

  label1:
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(0x65f2); // IFIELD(UNK_0xe152)
  Push(Read16(Pop())); // @
  _dash_(); // -
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8c2: WORD 'UNK_0xe8c4' codep=0x224c parp=0xe8c4
// ================================================

void UNK_0xe8c4() // UNK_0xe8c4
{
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  Push(0x001c);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xe10a"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  if (Pop() == 0) Push(1); else Push(0); // 0=
  goto label2;

  label1:
  Push(0); // 0

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8e4: WORD 'UNK_0xe8e6' codep=0x224c parp=0xe8e6
// ================================================

void UNK_0xe8e6() // UNK_0xe8e6
{
  UNK_0xe8c4(); // UNK_0xe8c4
  if (Pop() == 0) goto label1;
  UNK_0xe55a(); // UNK_0xe55a
  Push(0); // 0
  UNK_0xe87e(); // UNK_0xe87e
  if (Pop() == 0) goto label2;
  UNK_0xe15c(); // UNK_0xe15c
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  UNK_0xe89c(); // UNK_0xe89c
  if (Pop() == 0) goto label3;
  Push(1); // 1
  goto label4;

  label3:
  Push(0); // 0
  UNK_0xe85d(); // UNK_0xe85d

  label4:
  goto label5;

  label2:
  Push(0); // 0
  UNK_0xe849(); // UNK_0xe849

  label5:
  return;

  label1:
  Push(1); // 1
}


// ================================================
// 0xe91e: WORD 'UNK_0xe920' codep=0x224c parp=0xe920
// ================================================

void UNK_0xe920() // UNK_0xe920
{
  Push(pp_TBOX); // TBOX size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _1_dot_5_at_(); // 1.5@
  goto label2;

  label1:
  Push2Words("*STARSH");

  label2:
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(UNK_0xe152)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  _dash_(); // -
  goto label4;

  label3:
  Push(Pop() + Pop()); // +

  label4:
  Push(0x65f2); // IFIELD(UNK_0xe152)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe952: WORD 'UNK_0xe954' codep=0x224c parp=0xe954
// ================================================

void UNK_0xe954() // UNK_0xe954
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe95e: WORD 'UNK_0xe960' codep=0x224c parp=0xe960
// ================================================

void UNK_0xe960() // UNK_0xe960
{
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  _at_INST_dash_S(); // @INST-S
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe97a: WORD 'UNK_0xe97c' codep=0x224c parp=0xe97c
// ================================================

void UNK_0xe97c() // UNK_0xe97c
{
  _at_INST_dash_C(); // @INST-C
  _gt_R(); // >R
  CI(); // CI
  Push(pp_ITEM); // ITEM size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  R_gt_(); // R>
  BOX_gt_TOC(); // BOX>TOC
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  _ro_BOX_gt__rc_(); // (BOX>)
  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  Push(pp_TBOX); // TBOX size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _1_dot_5_at_(); // 1.5@
  goto label2;

  label1:
  Push2Words("*STARSH");

  label2:
  UNK_0xe97c(); // UNK_0xe97c
}


// ================================================
// 0xe9c0: WORD 'UNK_0xe9c2' codep=0x224c parp=0xe9c2
// ================================================

void UNK_0xe9c2() // UNK_0xe9c2
{
  Push(1); // 1
  Push(0x000a);
  M_star__slash_(); // M*/
}


// ================================================
// 0xe9cc: WORD 'UNK_0xe9ce' codep=0x224c parp=0xe9ce
// ================================================

void UNK_0xe9ce() // UNK_0xe9ce
{
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  UNK_0xe55a(); // UNK_0xe55a
  Push(0); // 0
  UNK_0xe8c4(); // UNK_0xe8c4
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  Push(Read16(Pop())); // @
  U_star_(); // U*
  UNK_0xe9c2(); // UNK_0xe9c2

  label1:
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  D_plus_(); // D+
  goto label3;

  label2:
  D_dash_(); // D-

  label3:
  Push(0xc297); // probable 'OVD!BAL'
  MODULE(); // MODULE
}


// ================================================
// 0xea02: WORD 'UNK_0xea04' codep=0x224c parp=0xea04
// ================================================

void UNK_0xea04() // UNK_0xea04
{
  UNK_0xe55a(); // UNK_0xe55a
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  Push(0x65f2); // IFIELD(INST-VA)
  _ex__2(); // !_2
  Push(0x65f4); // IFIELD(ASKING)
  _ex__2(); // !_2
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xea30: WORD 'UNK_0xea32' codep=0x224c parp=0xea32
// ================================================

void UNK_0xea32() // UNK_0xea32
{
  UNK_0xe55a(); // UNK_0xe55a
  U_star_(); // U*
  UNK_0xe9c2(); // UNK_0xe9c2
}


// ================================================
// 0xea3a: WORD 'UNK_0xea3c' codep=0x224c parp=0xea3c
// ================================================

void UNK_0xea3c() // UNK_0xea3c
{
  Push(0x003a);
  Push(0x00aa);
  POS_dot_(); // POS.
  Push(0x0018);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xe192(); // UNK_0xe192
  _ex_COLOR(); // !COLOR
  PRINT("SP = ", 5); // (.")
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  Push(Read16(Pop())); // @
  UNK_0xea32(); // UNK_0xea32
  UNK_0xe184(); // UNK_0xe184
  _ex_COLOR(); // !COLOR
  D_dot_(); // D.
}


// ================================================
// 0xea68: WORD 'UNK_0xea6a' codep=0x224c parp=0xea6a
// ================================================

void UNK_0xea6a() // UNK_0xea6a
{
  Push(pp_XBLT); // XBLT size: 2
  Push(Read16(Pop())); // @
  Push(pp_YBLT); // YBLT size: 2
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  Push(2); // 2
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(0x00fa);
  MS(); // MS
  PRINT("^\", 2); // (.")
  Push(0x00fa);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffe3

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xea9b: WORD 'UNK_0xea9d' codep=0x224c parp=0xea9d
// ================================================

void UNK_0xea9d() // UNK_0xea9d
{
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  Push(0x001c);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xe10a"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _eq_(); // =
  goto label2;

  label1:
  Push(cc_FALSE); // FALSE

  label2:
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xeac3: WORD 'UNK_0xeac5' codep=0x224c parp=0xeac5
// ================================================

void UNK_0xeac5() // UNK_0xeac5
{
  Push(0x003a);
  Push(0x00a3);
  POS_dot_(); // POS.
  Push(0x0018);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xe192(); // UNK_0xe192
  _ex_COLOR(); // !COLOR
  PRINT("SET AMOUNT ", 11); // (.")
  UNK_0xea6a(); // UNK_0xea6a
}


// ================================================
// 0xeaed: WORD 'UNK_0xeaef' codep=0x224c parp=0xeaef
// ================================================

void UNK_0xeaef() // UNK_0xeaef
{
  Push(0x0076);
  Push(0x00a3);
  POS_dot_(); // POS.
  Push(0x0009);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xe184(); // UNK_0xe184
  _ex_COLOR(); // !COLOR
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  _dot_(); // .
  Push(0xfffc);
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  PRINT(".", 1); // (.")
  _dot_(); // .
}


// ================================================
// 0xeb21: WORD 'UNK_0xeb23' codep=0x224c parp=0xeb23
// ================================================

void UNK_0xeb23() // UNK_0xeb23
{
  UNK_0xe82f(); // UNK_0xe82f
  PRINT("NO MORE AVAILABLE", 17); // (.")
  Push(0x07d0);
  MS(); // MS
  UNK_0xe82f(); // UNK_0xe82f
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  UNK_0xea9d(); // UNK_0xea9d
  if (Pop() == 0) goto label1;
  _at_INST_dash_S(); // @INST-S
  Push(0xc052); // probable '@TAMT'
  MODULE(); // MODULE
  _2DUP(); // 2DUP
  _gt_(); // >
  if (Pop() == 0) goto label2;
  UNK_0xeb23(); // UNK_0xeb23
  SWAP(); // SWAP
  Pop(); // DROP
  goto label1;

  label2:
  Pop(); // DROP

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb6b: WORD 'UNK_0xeb6d' codep=0x224c parp=0xeb6d
// ================================================

void UNK_0xeb6d() // UNK_0xeb6d
{
  UNK_0xea9d(); // UNK_0xea9d
  if (Pop() == 0) goto label1;
  _at_INST_dash_S(); // @INST-S
  Push(0xc052); // probable '@TAMT'
  MODULE(); // MODULE
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  Push(Read16(Pop())); // @
  _dash_(); // -
  _at_INST_dash_S(); // @INST-S
  Push(0xc042); // probable '!TAMT'
  MODULE(); // MODULE

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb8d: WORD 'UNK_0xeb8f' codep=0x1d29 parp=0xeb8f
// ================================================
// 0xeb8f: db 0x01 0x00 '  '

// ================================================
// 0xeb91: WORD 'UNK_0xeb93' codep=0x224c parp=0xeb93
// ================================================

void UNK_0xeb93() // UNK_0xeb93
{
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xeb8f); // UNK_0xeb8f size: 0
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  UNK_0xeb45(); // UNK_0xeb45
  Push(Read16(regsp)); // DUP
  UNK_0xe89c(); // UNK_0xe89c
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  UNK_0xea32(); // UNK_0xea32
  UNK_0xe87e(); // UNK_0xe87e
  if (Pop() == 0) goto label2;
  Push(1); // 1
  MAX(); // MAX
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  UNK_0xe15c(); // UNK_0xe15c
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  MIN(); // MIN

  label3:
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  _ex__2(); // !_2
  goto label4;

  label2:
  Pop(); // DROP
  UNK_0xe849(); // UNK_0xe849

  label4:
  return;

  label1:
  Pop(); // DROP
  UNK_0xe85d(); // UNK_0xe85d
}


// ================================================
// 0xebdd: WORD 'UNK_0xebdf' codep=0x224c parp=0xebdf
// ================================================

void UNK_0xebdf() // UNK_0xebdf
{
  Push(0x003a);
  Push(0x00a3);
  POS_dot_(); // POS.
  Push(0x0018);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xe192(); // UNK_0xe192
  _ex_COLOR(); // !COLOR
  PRINT("SELL ALL?  [N Y]", 16); // (.")
  Y_slash_N(); // Y/N
}


// ================================================
// 0xec0c: WORD 'UNK_0xec0e' codep=0x224c parp=0xec0e
// ================================================

void UNK_0xec0e() // UNK_0xec0e
{
  Push(pp_KEYTIME); // KEYTIME size: 4
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM size: 4
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x00fa); Push(0x0000);
  D_st_(); // D<
  if (Pop() == 0) return;
  Push(0x000a);
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xec2c: WORD 'UNK_0xec2e' codep=0x224c parp=0xec2e
// ================================================

void UNK_0xec2e() // UNK_0xec2e
{
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xebdf(); // UNK_0xebdf
  goto label2;

  label1:
  Push(0); // 0

  label2:
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  UNK_0xeac5(); // UNK_0xeac5
  Push(1); // 1
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  _ex__2(); // !_2
  UNK_0xeaef(); // UNK_0xeaef
  Push(1); // 1
  Push(pp_UNK_0xeb8f); // UNK_0xeb8f size: 0
  _ex__2(); // !_2

  label6:
  XYSCAN(); // XYSCAN
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label5;
  UNK_0xec0e(); // UNK_0xec0e
  Push(pp_UNK_0xeb8f); // UNK_0xeb8f size: 0
  _ex__2(); // !_2
  UNK_0xeb93(); // UNK_0xeb93
  UNK_0xeaef(); // UNK_0xeaef
  UNK_0xea3c(); // UNK_0xea3c

  label5:
  goto label6;

  label4:
  Pop(); Pop();// 2DROP
  return;

  label3:
  UNK_0xe15c(); // UNK_0xe15c
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xec8a: WORD 'UNK_0xec8c' codep=0x224c parp=0xec8c
// ================================================

void UNK_0xec8c() // UNK_0xec8c
{
  Push(0x00fa);
  UNK_0xdfe6(); // UNK_0xdfe6
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xe492(); // UNK_0xe492
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec9e: WORD 'UNK_0xeca0' codep=0x224c parp=0xeca0
// ================================================

void UNK_0xeca0() // UNK_0xeca0
{
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  Push(0x001c);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  UNK_0xe164(); // UNK_0xe164
  LoadData("UNK_0xe50e"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xe516"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label2;
  Push(1); // 1
  goto label3;

  label2:
  Push(0); // 0

  label3:
  goto label4;

  label1:
  Push(0); // 0

  label4:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8
// ================================================

void UNK_0xecd8() // UNK_0xecd8
{
  UNK_0xeca0(); // UNK_0xeca0
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  UNK_0xe5c6(); // UNK_0xe5c6
  UNK_0xec8c(); // UNK_0xec8c

  label1:
  UNK_0xe825(); // UNK_0xe825
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xe5b8(); // UNK_0xe5b8
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(cc__4); // 4
  MAX(); // MAX
  MIN(); // MIN
  UNK_0xe5c6(); // UNK_0xe5c6
}


// ================================================
// 0xecfc: WORD 'UNK_0xecfe' codep=0x224c parp=0xecfe
// ================================================

void UNK_0xecfe() // UNK_0xecfe
{
  UNK_0xe15c(); // UNK_0xe15c
  UNK_0xea04(); // UNK_0xea04
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe9aa(); // UNK_0xe9aa
  _gt_INACTI(); // >INACTI
  goto label2;

  label1:
  UNK_0xe960(); // UNK_0xe960
  UNK_0xe954(); // UNK_0xe954

  label2:
  ICLOSE(); // ICLOSE
  Push(0xc024); // probable 'SET-C'
  MODULE(); // MODULE
}


// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x224c parp=0xed22
// ================================================

void UNK_0xed22() // UNK_0xed22
{
  UNK_0xe8c4(); // UNK_0xe8c4
  if (Pop() == 0) goto label1;
  UNK_0xe15c(); // UNK_0xe15c
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  _ex__2(); // !_2
  return;

  label1:
  UNK_0xec2e(); // UNK_0xec2e
}


// ================================================
// 0xed3c: WORD 'UNK_0xed3e' codep=0x224c parp=0xed3e
// ================================================

void UNK_0xed3e() // UNK_0xed3e
{
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
  Push2Words("NULL");
  UNK_0xe87e(); // UNK_0xe87e
  if (Pop() == 0) goto label1;
  Push(0); // 0
  UNK_0xe89c(); // UNK_0xe89c
  if (Pop() == 0) goto label2;
  UNK_0xe8e6(); // UNK_0xe8e6
  if (Pop() == 0) goto label3;
  UNK_0xe801(); // UNK_0xe801
  UNK_0xecd8(); // UNK_0xecd8
  UNK_0xed22(); // UNK_0xed22
  UNK_0xe9ce(); // UNK_0xe9ce

  UNK_0x3f09("DOING TRANSACTION");
  UNK_0xe1aa(); // UNK_0xe1aa
  Push(pp_ELEM_dash_AM); // ELEM-AM size: 2
  Push(Read16(Pop())); // @
  UNK_0xe920(); // UNK_0xe920
  UNK_0xeb6d(); // UNK_0xeb6d
  UNK_0xecfe(); // UNK_0xecfe
  Push(0xc2bb); // probable 'OV!TFLA'
  MODULE(); // MODULE
  goto label3;

  label3:
  goto label4;

  label2:
  UNK_0xe85d(); // UNK_0xe85d

  label4:
  return;

  label1:
  UNK_0xe849(); // UNK_0xe849
}


// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x224c parp=0xed9a
// ================================================

void UNK_0xed9a() // UNK_0xed9a
{
  UNK_0xe164(); // UNK_0xe164
  Push(0xe552); // probable 'TRADE.EDL'
  IFLD_at_(); // IFLD@
  Push(Pop() + Pop()); // +
  Push(cc__9); // 9
  MIN(); // MIN
  Push(0xe552); // probable 'TRADE.EDL'
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedb2: WORD 'UNK_0xedb4' codep=0x224c parp=0xedb4
// ================================================

void UNK_0xedb4() // UNK_0xedb4
{
  Push(1); // 1
  UNK_0xed9a(); // UNK_0xed9a
}


// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x224c parp=0xedbc
// ================================================

void UNK_0xedbc() // UNK_0xedbc
{
  Push(cc__3); // 3
  UNK_0xed9a(); // UNK_0xed9a
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  UNK_0xe164(); // UNK_0xe164
  LoadData("TRADE.EDL"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  Push(cc__4); // 4
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(cc__9); // 9
  goto label2;

  label1:
  Push(cc__5); // 5

  label2:
  Push(pp_PATIENC); // PATIENC size: 2
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xede4: WORD 'UNK_0xede6' codep=0x224c parp=0xede6
// ================================================

void UNK_0xede6() // UNK_0xede6
{
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(1); // 1
  return;

  label1:
  UNK_0xe15c(); // UNK_0xe15c
  _at_INST_dash_C(); // @INST-C
  Push(0x001c);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  UNK_0xe164(); // UNK_0xe164
  LoadData("UNK_0xe4ee"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  LoadData("UNK_0xe4f6"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label3;
  LoadData("TRADE.EDL"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__4); // 4
  _st_(); // <
  goto label4;

  label3:
  Push(1); // 1

  label4:
  goto label5;

  label2:
  Push(1); // 1

  label5:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee30: WORD 'UNK_0xee32' codep=0x224c parp=0xee32
// ================================================

void UNK_0xee32() // UNK_0xee32
{
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe55a(); // UNK_0xe55a
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  return;

  label1:
  Push(1); // 1
}


// ================================================
// 0xee48: WORD 'UNK_0xee4a' codep=0x224c parp=0xee4a
// ================================================

void UNK_0xee4a() // UNK_0xee4a
{
  Push(pp_PATIENC); // PATIENC size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xedb4(); // UNK_0xedb4
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
  UNK_0xe7db(); // UNK_0xe7db
  UNK_0xe0a0(); // UNK_0xe0a0
  UNK_0xe610(); // UNK_0xe610
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xee64: WORD 'UNK_0xee66' codep=0x224c parp=0xee66
// ================================================

void UNK_0xee66() // UNK_0xee66
{
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
}


// ================================================
// 0xee6c: WORD 'UNK_0xee6e' codep=0x224c parp=0xee6e
// ================================================

void UNK_0xee6e() // UNK_0xee6e
{
  UNK_0xe000(); // UNK_0xe000
  UNK_0xe610(); // UNK_0xe610
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
  Push(0x0fa0);
  MS(); // MS
}


// ================================================
// 0xee7e: WORD 'UNK_0xee80' codep=0x224c parp=0xee80
// ================================================

void UNK_0xee80() // UNK_0xee80
{
  UNK_0xe55a(); // UNK_0xe55a
  UNK_0xe5ea(); // UNK_0xe5ea
  _eq_(); // =
}


// ================================================
// 0xee88: WORD 'UNK_0xee8a' codep=0x224c parp=0xee8a
// ================================================

void UNK_0xee8a() // UNK_0xee8a
{
  Push(pp_PATIENC); // PATIENC size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe4be); // UNK_0xe4be size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xee94: WORD 'UNK_0xee96' codep=0x224c parp=0xee96
// ================================================

void UNK_0xee96() // UNK_0xee96
{
  UNK_0xee8a(); // UNK_0xee8a
  Push(pp_PATIENC); // PATIENC size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(cc__9); // 9
  MIN(); // MIN
  Push(pp_PATIENC); // PATIENC size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xeeac: WORD 'UNK_0xeeae' codep=0x224c parp=0xeeae
// ================================================

void UNK_0xeeae() // UNK_0xeeae
{
  Push(pp_PATIENC); // PATIENC size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe4be); // UNK_0xe4be size: 0
  Push(Read16(Pop())); // @
  _st_(); // <
  UNK_0xee8a(); // UNK_0xee8a
}


// ================================================
// 0xeebc: WORD 'UNK_0xeebe' codep=0x224c parp=0xeebe
// ================================================

void UNK_0xeebe() // UNK_0xeebe
{
  Push(pp_BARTERI); // BARTERI size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe0b4(); // UNK_0xe0b4
  UNK_0xe610(); // UNK_0xe610

  label1:
  UNK_0xe620(); // UNK_0xe620
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
  UNK_0xe7db(); // UNK_0xe7db
}


// ================================================
// 0xeed4: WORD 'UNK_0xeed6' codep=0x224c parp=0xeed6
// ================================================

void UNK_0xeed6() // UNK_0xeed6
{
  UNK_0xedc4(); // UNK_0xedc4
  UNK_0xee8a(); // UNK_0xee8a
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe082(); // UNK_0xe082
  UNK_0xe610(); // UNK_0xe610
  Push(pp_BARTERI); // BARTERI size: 2
  ON_2(); // ON_2
}


// ================================================
// 0xeee6: WORD 'UNK_0xeee8' codep=0x224c parp=0xeee8
// ================================================

void UNK_0xeee8() // UNK_0xeee8
{
  Push(pp_PATIENC); // PATIENC size: 2
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(2); // 2
  Push(pp_PATIENC); // PATIENC size: 2
  _ex__2(); // !_2

  label1:
  UNK_0xee8a(); // UNK_0xee8a
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe08c(); // UNK_0xe08c
  UNK_0xe610(); // UNK_0xe610
  Push(pp_BARTERI); // BARTERI size: 2
  ON_2(); // ON_2
}


// ================================================
// 0xef08: WORD 'UNK_0xef0a' codep=0x224c parp=0xef0a
// ================================================

void UNK_0xef0a() // UNK_0xef0a
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe096(); // UNK_0xe096
  UNK_0xe610(); // UNK_0xe610
  Push(cc__dash_1); // -1
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
}


// ================================================
// 0xef1c: WORD 'UNK_0xef1e' codep=0x224c parp=0xef1e
// ================================================

void UNK_0xef1e() // UNK_0xef1e
{
  UNK_0xe0f0(); // UNK_0xe0f0
  UNK_0xe610(); // UNK_0xe610
  Push(0x0fa0);
  MS(); // MS
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
}


// ================================================
// 0xef2e: WORD 'UNK_0xef30' codep=0x224c parp=0xef30
// ================================================

void UNK_0xef30() // UNK_0xef30
{
  Push(0x00da);
  UNK_0xdfe6(); // UNK_0xdfe6
  UNK_0xe610(); // UNK_0xe610
  Push(0x0fa0);
  MS(); // MS
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
}


// ================================================
// 0xef44: WORD 'UNK_0xef46' codep=0x224c parp=0xef46
// ================================================

void UNK_0xef46() // UNK_0xef46
{
  UNK_0xea9d(); // UNK_0xea9d
  if (Pop() == 0) goto label1;
  _at_INST_dash_S(); // @INST-S
  Push(0xc052); // probable '@TAMT'
  MODULE(); // MODULE
  _0_gt_(); // 0>
  goto label2;

  label1:
  Push(cc_TRUE); // TRUE

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef60: WORD 'OPEN-EXPERT' codep=0xaccc parp=0xef70
// ================================================
// 0xef70: db 0x07 0x08 0x07 0x99 0xef 0x9d 0xef 0xa1 0xef 0xa6 0xef 0xab 0xef 0xb0 0xef 0xb5 0xef 0x46 0xef 0xe6 0xed 0x66 0xee 0x32 0xee 0x25 0xe8 0x13 0xe8 0x09 0xe8 0x1b 0xe8 0x12 0x90 0x16 0x4c 0x22 0x84 0xef 0x42 0x01 0x30 0xef 0x00 0x01 0x1e 0xef 0x01 0x02 0x6e 0xee 0x82 0x03 0x02 0x3e 0xed 0x84 0x83 0x02 0xd6 0xee 0x85 0x83 0x02 0xe8 0xee 0x86 0x83 0x02 0x0a 0xef 0x87 0x83 '                 F   f 2 %          L"  B 0       n    >                  '

// ================================================
// 0xefba: WORD 'DO-OPEN_1' codep=0x224c parp=0xefc6
// ================================================

void DO_dash_OPEN_1() // DO-OPEN_1
{
  Push(0xef70); // probable 'OPEN-EXPERT'
  DISTRAC(); // DISTRAC
  UNK_0xe18a(); // UNK_0xe18a

  label1:
  Rule(OPEN-EXPERT);
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xefd6: WORD 'UNK_0xefd8' codep=0x224c parp=0xefd8
// ================================================

void UNK_0xefd8() // UNK_0xefd8
{
  SWAP(); // SWAP
  Push(0); // 0
  ROT(); // ROT
  Push(0); // 0
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  DMIN(); // DMIN
  goto label2;

  label1:
  DMAX(); // DMAX

  label2:
  Pop(); // DROP
}


// ================================================
// 0xeff4: WORD 'UNK_0xeff6' codep=0x224c parp=0xeff6
// ================================================

void UNK_0xeff6() // UNK_0xeff6
{
  UNK_0xe5ea(); // UNK_0xe5ea
  UNK_0xefd8(); // UNK_0xefd8
}


// ================================================
// 0xeffc: WORD 'UNK_0xeffe' codep=0x224c parp=0xeffe
// ================================================

void UNK_0xeffe() // UNK_0xeffe
{
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  UNK_0xefd8(); // UNK_0xefd8
}


// ================================================
// 0xf006: WORD 'UNK_0xf008' codep=0x224c parp=0xf008
// ================================================

void UNK_0xf008() // UNK_0xf008
{
  UNK_0xe55a(); // UNK_0xe55a
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  _eq_(); // =
}


// ================================================
// 0xf012: WORD 'UNK_0xf014' codep=0x224c parp=0xf014
// ================================================

void UNK_0xf014() // UNK_0xf014
{
  UNK_0xe55a(); // UNK_0xe55a
  Push(Read16(regsp)); // DUP
  UNK_0xe5ea(); // UNK_0xe5ea
  _dash_(); // -
  ABS(); // ABS
  Push(cc__3); // 3
  Push(cc__5); // 5
  RRND(); // RRND
  Push(0x000a);
  _star__slash_(); // */
  Push(0x0025);
  MAX(); // MAX
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  _dash_(); // -

  label2:
  UNK_0xeff6(); // UNK_0xeff6
  UNK_0xeffe(); // UNK_0xeffe
}


// ================================================
// 0xf046: WORD 'UNK_0xf048' codep=0x224c parp=0xf048
// ================================================

void UNK_0xf048() // UNK_0xf048
{
  UNK_0xe55a(); // UNK_0xe55a
  Push(0); // 0
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  D_gt_(); // D>
  return;

  label1:
  D_st_(); // D<
}


// ================================================
// 0xf064: WORD 'UNK_0xf066' codep=0x224c parp=0xf066
// ================================================

void UNK_0xf066() // UNK_0xf066
{
  Push(pp__1ST); // 1ST size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  D_gt_(); // D>
  goto label3;

  label2:
  D_st_(); // D<

  label3:
  return;

  label1:
  Push(0); // 0
}

// 0xf094: db 0x4c 0x22 0x1b 0x62 0x57 0x6d 0x90 0x16 'L" bWm  '

// ================================================
// 0xf09c: WORD 'UNK_0xf09e' codep=0x224c parp=0xf09e
// ================================================

void UNK_0xf09e() // UNK_0xf09e
{
  Push(pp__ask_REPLY); // ?REPLY size: 2
  _099(); // 099
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  UNK_0xe00a(); // UNK_0xe00a
  UNK_0xe610(); // UNK_0xe610
  Push(pp_UNK_0xe4a6); // UNK_0xe4a6 size: 0
  ON_2(); // ON_2
  UNK_0xf09e(); // UNK_0xf09e
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  UNK_0xe5d4(); // UNK_0xe5d4
}


// ================================================
// 0xf0b8: WORD 'UNK_0xf0ba' codep=0x224c parp=0xf0ba
// ================================================

void UNK_0xf0ba() // UNK_0xf0ba
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe014(); // UNK_0xe014
  UNK_0xe610(); // UNK_0xe610
  Push(0xfffd);
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
}


// ================================================
// 0xf0ca: WORD 'UNK_0xf0cc' codep=0x224c parp=0xf0cc
// ================================================

void UNK_0xf0cc() // UNK_0xf0cc
{
  UNK_0xe01e(); // UNK_0xe01e
  UNK_0xe610(); // UNK_0xe610
}


// ================================================
// 0xf0d2: WORD 'UNK_0xf0d4' codep=0x224c parp=0xf0d4
// ================================================

void UNK_0xf0d4() // UNK_0xf0d4
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe028(); // UNK_0xe028
  UNK_0xe610(); // UNK_0xe610
  UNK_0xf066(); // UNK_0xf066
  if (Pop() == 0) goto label1;
  UNK_0xf0cc(); // UNK_0xf0cc

  label1:
  Push(cc__dash_2); // -2
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
}


// ================================================
// 0xf0ea: WORD 'UNK_0xf0ec' codep=0x224c parp=0xf0ec
// ================================================

void UNK_0xf0ec() // UNK_0xf0ec
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe032(); // UNK_0xe032
  UNK_0xe610(); // UNK_0xe610
  UNK_0xedbc(); // UNK_0xedbc
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
  UNK_0xe7db(); // UNK_0xe7db
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xf0fe: WORD 'UNK_0xf100' codep=0x224c parp=0xf100
// ================================================

void UNK_0xf100() // UNK_0xf100
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe03c(); // UNK_0xe03c
  UNK_0xe610(); // UNK_0xe610
  UNK_0xee80(); // UNK_0xee80
  if (Pop() == 0) return;
  Push(cc__dash_2); // -2
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
}


// ================================================
// 0xf114: WORD 'UNK_0xf116' codep=0x224c parp=0xf116
// ================================================

void UNK_0xf116() // UNK_0xf116
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe046(); // UNK_0xe046
  UNK_0xe610(); // UNK_0xe610
  Push(pp_BARTERI); // BARTERI size: 2
  _099(); // 099
  UNK_0xeebe(); // UNK_0xeebe
}


// ================================================
// 0xf124: WORD 'UNK_0xf126' codep=0x224c parp=0xf126
// ================================================

void UNK_0xf126() // UNK_0xf126
{
  UNK_0xe55a(); // UNK_0xe55a
  UNK_0xe5ea(); // UNK_0xe5ea
  _dash_(); // -
  ABS(); // ABS
  Push(1); // 1
  Push(cc__4); // 4
  RRND(); // RRND
  Push(cc__3); // 3
  _star__slash_(); // */
  Push(0x0025);
  MAX(); // MAX
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(-Pop()); // NEGATE

  label1:
  UNK_0xe55a(); // UNK_0xe55a
  Push(Pop() + Pop()); // +
  UNK_0xeff6(); // UNK_0xeff6
  UNK_0xeffe(); // UNK_0xeffe
}


// ================================================
// 0xf154: WORD 'UNK_0xf156' codep=0x224c parp=0xf156
// ================================================

void UNK_0xf156() // UNK_0xf156
{
}


// ================================================
// 0xf158: WORD 'UNK_0xf15a' codep=0x224c parp=0xf15a
// ================================================

void UNK_0xf15a() // UNK_0xf15a
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) goto label1;
  UNK_0xf116(); // UNK_0xf116
  return;

  label1:
  UNK_0xf126(); // UNK_0xf126
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdfda); // UNK_0xdfda size: 0
  _ex__2(); // !_2
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe050(); // UNK_0xe050
  UNK_0xe610(); // UNK_0xe610
  UNK_0xe5d4(); // UNK_0xe5d4
}


// ================================================
// 0xf184: WORD 'UNK_0xf186' codep=0x224c parp=0xf186
// ================================================

void UNK_0xf186() // UNK_0xf186
{
  UNK_0xee80(); // UNK_0xee80
  if (Pop() == 0) goto label1;
  Push(cc_TRUE); // TRUE
  return;

  label1:
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba size: 0
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(cc_TRUE); // TRUE
  return;

  label2:
  Push(cc_FALSE); // FALSE
}


// ================================================
// 0xf1ae: WORD 'UNK_0xf1b0' codep=0x224c parp=0xf1b0
// ================================================

void UNK_0xf1b0() // UNK_0xf1b0
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe06e(); // UNK_0xe06e
  UNK_0xe610(); // UNK_0xe610
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2 size: 0
  ON_2(); // ON_2
}


// ================================================
// 0xf1bc: WORD 'UNK_0xf1be' codep=0x224c parp=0xf1be
// ================================================

void UNK_0xf1be() // UNK_0xf1be
{
  UNK_0xf014(); // UNK_0xf014
  Push(Read16(regsp)); // DUP
  UNK_0xe5d4(); // UNK_0xe5d4
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xf0a6(); // UNK_0xf0a6
  return;

  label1:
  UNK_0xe590(); // UNK_0xe590
  if (Pop() == 0) goto label2;
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe064(); // UNK_0xe064
  UNK_0xe610(); // UNK_0xe610
  goto label3;

  label2:
  UNK_0xf156(); // UNK_0xf156

  label3:
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe078(); // UNK_0xe078
  UNK_0xe610(); // UNK_0xe610
}


// ================================================
// 0xf1ee: WORD 'UNK_0xf1f0' codep=0x224c parp=0xf1f0
// ================================================

void UNK_0xf1f0() // UNK_0xf1f0
{
  Push(pp_BARTERI); // BARTERI size: 2
  Push(Read16(Pop())); // @
  Push(pp__ask_REPLY); // ?REPLY size: 2
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(pp_UNK_0xe4b6); // UNK_0xe4b6 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xeeae(); // UNK_0xeeae
  if (Pop() == 0) goto label1;
  UNK_0xf1b0(); // UNK_0xf1b0
  return;

  label1:
  UNK_0xf186(); // UNK_0xf186
  if (Pop() == 0) goto label2;
  UNK_0xf1b0(); // UNK_0xf1b0
  return;

  label2:
  UNK_0xf1be(); // UNK_0xf1be
}


// ================================================
// 0xf222: WORD 'UNK_0xf224' codep=0x224c parp=0xf224
// ================================================

void UNK_0xf224() // UNK_0xf224
{
  UNK_0xe590(); // UNK_0xe590
  if (Pop() == 0) goto label1;
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe05a(); // UNK_0xe05a
  UNK_0xe610(); // UNK_0xe610
  goto label2;

  label1:
  UNK_0xf156(); // UNK_0xf156

  label2:
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  Push(0x0028);
  goto label4;

  label3:
  Push(0x003c);

  label4:
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba size: 0
  _ex__2(); // !_2
  UNK_0xee80(); // UNK_0xee80
  if (Pop() == 0) return;
  Push(cc__dash_2); // -2
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
}


// ================================================
// 0xf25c: WORD 'UNK_0xf25e' codep=0x224c parp=0xf25e
// ================================================

void UNK_0xf25e() // UNK_0xf25e
{
  Push(0x0014);
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba size: 0
  _ex__2(); // !_2
  UNK_0xee80(); // UNK_0xee80
  if (Pop() == 0) return;
  Push(cc__dash_1); // -1
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
}


// ================================================
// 0xf274: WORD 'UNK_0xf276' codep=0x224c parp=0xf276
// ================================================

void UNK_0xf276() // UNK_0xf276
{
  Push(pp__1ST); // 1ST size: 2
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  UNK_0xf014(); // UNK_0xf014
  Push(Read16(regsp)); // DUP
  Push(cc__5); // 5
  Push(0x0064);
  _star__slash_(); // */
  OVER(); // OVER
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  MIN(); // MIN

  label2:
  _gt_R(); // >R
  _dash_(); // -
  UNK_0xe5ea(); // UNK_0xe5ea
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  MAX(); // MAX

  label3:
  R_gt_(); // R>
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
  UNK_0xf048(); // UNK_0xf048
  Push(Pop() | Pop()); // OR
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8
// ================================================

void UNK_0xf2c8() // UNK_0xf2c8
{
  Push(pp_UNK_0xe4a6); // UNK_0xe4a6 size: 0
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf2ce: WORD 'UNK_0xf2d0' codep=0x224c parp=0xf2d0
// ================================================

void UNK_0xf2d0() // UNK_0xf2d0
{
  Push(pp_UNK_0xe4aa); // UNK_0xe4aa size: 0
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf2d6: WORD 'UNK_0xf2d8' codep=0x224c parp=0xf2d8
// ================================================

void UNK_0xf2d8() // UNK_0xf2d8
{
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  _0_st_(); // 0<
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf2e8: WORD 'UNK_0xf2ea' codep=0x224c parp=0xf2ea
// ================================================

void UNK_0xf2ea() // UNK_0xf2ea
{
  Push(pp__1ST); // 1ST size: 2
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  Push(0); // 0
  UNK_0xe5ea(); // UNK_0xe5ea
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  Push(Pop()*2); // 2*
  Push(0); // 0
  D_gt_(); // D>
  goto label3;

  label2:
  Push(Pop()>>1); // 2/
  Push(0); // 0
  D_st_(); // D<

  label3:
  Push(Pop() & Pop()); // AND
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf328: WORD 'UNK_0xf32a' codep=0x224c parp=0xf32a
// ================================================

void UNK_0xf32a() // UNK_0xf32a
{
  Push(pp__1ST); // 1ST size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  Push(Read16(Pop())); // @
  Push(0); // 0
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  D_st_(); // D<
  _gt_R(); // >R
  Push(0x006b);
  UNK_0xe59a(); // UNK_0xe59a
  D_st_(); // D<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
  goto label3;

  label2:
  D_gt_(); // D>
  _gt_R(); // >R
  Push(0x006b);
  UNK_0xe59a(); // UNK_0xe59a
  D_gt_(); // D>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND

  label3:
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf37c: WORD 'UNK_0xf37e' codep=0x224c parp=0xf37e
// ================================================

void UNK_0xf37e() // UNK_0xf37e
{
  Push(pp_UNK_0xe4b6); // UNK_0xe4b6 size: 0
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf384: WORD 'UNK_0xf386' codep=0x224c parp=0xf386
// ================================================

void UNK_0xf386() // UNK_0xf386
{
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe4ae); // UNK_0xe4ae size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf398: WORD 'UNK_0xf39a' codep=0x224c parp=0xf39a
// ================================================

void UNK_0xf39a() // UNK_0xf39a
{
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0050);
  UNK_0xe59a(); // UNK_0xe59a
  Push(pp_SELLING); // SELLING size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  D_gt_(); // D>
  return;

  label1:
  D_st_(); // D<
}


// ================================================
// 0xf3be: WORD '(DO-BARTER)' codep=0xaccc parp=0xf3ce
// ================================================
// 0xf3ce: db 0x0d 0x0c 0x0c 0x0f 0xf4 0x15 0xf4 0x1b 0xf4 0x1f 0xf4 0x23 0xf4 0x29 0xf4 0x2f 0xf4 0x35 0xf4 0x3c 0xf4 0x41 0xf4 0x46 0xf4 0x4b 0xf4 0x90 0x16 0x76 0xf2 0xc8 0xf2 0xd0 0xf2 0x08 0xf0 0x66 0xf0 0x7e 0xf3 0xea 0xf2 0xd8 0xf2 0x2a 0xf3 0x80 0xee 0x86 0xf3 0x9a 0xf3 0x06 0x00 0x64 0xef 0x65 0x6d 0x90 0x16 0x4c 0x22 0x36 0xf3 0x03 0xa6 0xf0 0x80 0x01 0x02 0x03 0xa6 0xf0 0x83 0x01 0x02 0x01 0x3e 0xed 0x81 0x01 0x3e 0xed 0x82 0x03 0xba 0xf0 0x84 0x05 0x02 0x03 0xd4 0xf0 0x86 0x05 0x02 0x03 0xec 0xf0 0x87 0x05 0x02 0x04 0x00 0xf1 0x06 0x88 0x02 0x05 0x02 0x16 0xf1 0x85 0x89 0x02 0x5a 0xf1 0x85 0x09 0x02 0x24 0xf2 0x02 0x8a 0x02 0x5e 0xf2 0x02 0x8b '           # ) / 5 < A F K   v       f ~     *         d em  L"6              >   >                                 Z    $    ^   '

// ================================================
// 0xf450: WORD 'DO-BARTER' codep=0x224c parp=0xf45e
// ================================================
// entry

void DO_dash_BARTER() // DO-BARTER
{
  Push(pp_TRACE); // TRACE size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;

  UNK_0x3f09(" ");
  _dot_TTY(); // .TTY
  UNK_0xe5ea(); // UNK_0xe5ea
  _dot_(); // .
  UNK_0xe55a(); // UNK_0xe55a
  _dot_(); // .

  label1:
  UNK_0xe18a(); // UNK_0xe18a
  Push(0xf3ce); // probable '(DO-BARTER)'
  DISTRAC(); // DISTRAC
  Rule((DO-BARTER));
  Pop(); // DROP
  UNK_0xf1f0(); // UNK_0xf1f0
}


// ================================================
// 0xf484: WORD 'UNK_0xf486' codep=0x224c parp=0xf486
// ================================================

void UNK_0xf486() // UNK_0xf486
{
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe0be(); // UNK_0xe0be
  return;

  label1:
  UNK_0xe0dc(); // UNK_0xe0dc
}


// ================================================
// 0xf49e: WORD 'N>REPLY' codep=0x4b3b parp=0xf4aa
// ================================================

void N_gt_REPLY() // N>REPLY
{
  switch(Pop()) // N>REPLY
  {
  case 0:
    UNK_0xe0d2(); // UNK_0xe0d2
    break;
  case 1:
    UNK_0xe0e6(); // UNK_0xe0e6
    break;
  case 2:
    UNK_0xf486(); // UNK_0xf486
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf4ba: WORD 'UNK_0xf4bc' codep=0x224c parp=0xf4bc
// ================================================

void UNK_0xf4bc() // UNK_0xf4bc
{
  UNK_0xe5ae(); // UNK_0xe5ae
  N_gt_REPLY(); // N>REPLY case
  UNK_0xe610(); // UNK_0xe610
}


// ================================================
// 0xf4c4: WORD '!PFLAGS' codep=0x224c parp=0xf4d0
// ================================================
// entry

void _ex_PFLAGS() // !PFLAGS
{
  UNK_0xe17e(); // UNK_0xe17e
  _ex_COLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  UNK_0xf4bc(); // UNK_0xf4bc
  Push(Read16(regsp)); // DUP
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label1;
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe4b6); // UNK_0xe4b6 size: 0
  _ex__2(); // !_2
  Push(pp_UNK_0xe4aa); // UNK_0xe4aa size: 0
  _ex__2(); // !_2
  return;

  label1:
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_UNK_0xe4b6); // UNK_0xe4b6 size: 0
  _ex__2(); // !_2
  Push(pp_UNK_0xe4aa); // UNK_0xe4aa size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf500: WORD 'L>P' codep=0x224c parp=0xf508
// ================================================
// entry

void L_gt_P() // L>P
{
  Push(pp_PLAST); // PLAST size: 2
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  _ex__2(); // !_2
  Push(pp_UNK_0xe4ae); // UNK_0xe4ae size: 0
  _099(); // 099
}


// ================================================
// 0xf516: WORD 'UNK_0xf518' codep=0x224c parp=0xf518
// ================================================

void UNK_0xf518() // UNK_0xf518
{
  Push(pp_UNK_0xe4a6); // UNK_0xe4a6 size: 0
  _099(); // 099
  Push(pp_UNK_0xe4aa); // UNK_0xe4aa size: 0
  _099(); // 099
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2 size: 0
  _099(); // 099
  Push(pp_UNK_0xe4ae); // UNK_0xe4ae size: 0
  _099(); // 099
  Push(pp_UNK_0xe4b6); // UNK_0xe4b6 size: 0
  _099(); // 099
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba size: 0
  _099(); // 099
  Push(pp_PLAST); // PLAST size: 2
  _099(); // 099
  Push(pp_UNK_0xdfde); // UNK_0xdfde size: 0
  _099(); // 099
  Push(pp_UNK_0xdfda); // UNK_0xdfda size: 0
  _099(); // 099
  Push(2); // 2
  Push(pp__1ST); // 1ST size: 2
  _ex__2(); // !_2
  Push(0x0014);
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf54c: WORD 'DO-OPEN_2' codep=0x224c parp=0xf558
// ================================================
// entry

void DO_dash_OPEN_2() // DO-OPEN_2
{
  UNK_0xf518(); // UNK_0xf518
  DO_dash_OPEN_1(); // DO-OPEN_1
}

// 0xf55e: db 0x42 0x41 0x00 'BA '
  