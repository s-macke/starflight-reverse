// ====== OVERLAY 'BARTER' ======
// store offset = 0xdfc0
// overlay size   = 0x15a0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


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
//         !PFLAGS  codep:0x224c parp:0xf4d0 size:0x0030 C-string:'StorePFLAGS'
//             L>P  codep:0x224c parp:0xf508 size:0x000e C-string:'L_gt_P'
//      UNK_0xf518  codep:0x224c parp:0xf518 size:0x0034 C-string:'UNK_0xf518'
//       DO-OPEN_2  codep:0x224c parp:0xf558 size:0x0000 C-string:'DO_dash_OPEN_2'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_TRACE; // TRACE
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_TBOX; // TBOX
extern const unsigned short int pp__1ST; // 1ST
extern const unsigned short int pp_SELLING; // SELLING
extern const unsigned short int pp_BARTERI; // BARTERI
extern const unsigned short int pp_IsREPLY; // ?REPLY
extern const unsigned short int pp_PLAST; // PLAST
extern const unsigned short int pp_ITEM; // ITEM
extern const unsigned short int pp_PATIENC; // PATIENC
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp__ro_THING_rc_; // (THING)
extern LoadDataType ELEM_dash_NA; // ELEM-NA
extern LoadDataType ART_dash_NAM; // ART-NAM
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_OF; // INST-OF
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_VA; // INST-VA
extern IFieldType PHRASE; // PHRASE
extern IFieldType ASKING; // ASKING
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void D_plus__dash_(); // D+-
void M_star__slash_(); // M*/
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void SIGN(); // SIGN
void PAD(); // PAD
void Draw(); // .
void D_dot_(); // D.
void SPACE(); // SPACE
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void DMAX(); // DMAX
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void CJ(); // CJ
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void ILAST(); // ILAST
void IFLD_at_(); // IFLD@
void IFLD_ex_(); // IFLD!
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void _gt_1FONT(); // >1FONT
void POS_dot_(); // POS.
void POLY_dash_ER(); // POLY-ER
void WUP(); // WUP
void DrawTTY(); // .TTY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void _dash_XTRAIL(); // -XTRAIL
void DISTRAC(); // DISTRAC
void BOX_gt_TOC(); // BOX>TOC
void _gt_BOX(); // >BOX
void _ro_BOX_gt__rc_(); // (BOX>)
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void _1_dot_5_at_(); // 1.5@
void CI(); // CI


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
// 0xdfe4: WORD 'UNK_0xdfe6' codep=0x224c parp=0xdfe6 params=4 returns=2
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
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xdffe: WORD 'UNK_0xe000' codep=0x224c parp=0xe000 params=3 returns=2
// ================================================

void UNK_0xe000() // UNK_0xe000
{
  Push(0x0040);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe008: WORD 'UNK_0xe00a' codep=0x224c parp=0xe00a params=3 returns=2
// ================================================

void UNK_0xe00a() // UNK_0xe00a
{
  Push(0x0041);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe012: WORD 'UNK_0xe014' codep=0x224c parp=0xe014 params=3 returns=2
// ================================================

void UNK_0xe014() // UNK_0xe014
{
  Push(0x0042);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe01c: WORD 'UNK_0xe01e' codep=0x224c parp=0xe01e params=3 returns=2
// ================================================

void UNK_0xe01e() // UNK_0xe01e
{
  Push(0x0043);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe026: WORD 'UNK_0xe028' codep=0x224c parp=0xe028 params=3 returns=2
// ================================================

void UNK_0xe028() // UNK_0xe028
{
  Push(0x0044);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe030: WORD 'UNK_0xe032' codep=0x224c parp=0xe032 params=3 returns=2
// ================================================

void UNK_0xe032() // UNK_0xe032
{
  Push(0x0045);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe03a: WORD 'UNK_0xe03c' codep=0x224c parp=0xe03c params=3 returns=2
// ================================================

void UNK_0xe03c() // UNK_0xe03c
{
  Push(0x0046);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe044: WORD 'UNK_0xe046' codep=0x224c parp=0xe046 params=3 returns=2
// ================================================

void UNK_0xe046() // UNK_0xe046
{
  Push(0x0047);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe04e: WORD 'UNK_0xe050' codep=0x224c parp=0xe050 params=3 returns=2
// ================================================

void UNK_0xe050() // UNK_0xe050
{
  Push(0x0048);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe058: WORD 'UNK_0xe05a' codep=0x224c parp=0xe05a params=3 returns=2
// ================================================

void UNK_0xe05a() // UNK_0xe05a
{
  Push(0x0049);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe062: WORD 'UNK_0xe064' codep=0x224c parp=0xe064 params=3 returns=2
// ================================================

void UNK_0xe064() // UNK_0xe064
{
  Push(0x004a);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe06c: WORD 'UNK_0xe06e' codep=0x224c parp=0xe06e params=3 returns=2
// ================================================

void UNK_0xe06e() // UNK_0xe06e
{
  Push(0x004b);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe076: WORD 'UNK_0xe078' codep=0x224c parp=0xe078 params=3 returns=2
// ================================================

void UNK_0xe078() // UNK_0xe078
{
  Push(0x004c);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe080: WORD 'UNK_0xe082' codep=0x224c parp=0xe082 params=3 returns=2
// ================================================

void UNK_0xe082() // UNK_0xe082
{
  Push(0x004d);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe08a: WORD 'UNK_0xe08c' codep=0x224c parp=0xe08c params=3 returns=2
// ================================================

void UNK_0xe08c() // UNK_0xe08c
{
  Push(0x004e);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe094: WORD 'UNK_0xe096' codep=0x224c parp=0xe096 params=3 returns=2
// ================================================

void UNK_0xe096() // UNK_0xe096
{
  Push(0x004f);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe09e: WORD 'UNK_0xe0a0' codep=0x224c parp=0xe0a0 params=3 returns=2
// ================================================

void UNK_0xe0a0() // UNK_0xe0a0
{
  Push(0x0050);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0a8: WORD 'UNK_0xe0aa' codep=0x224c parp=0xe0aa params=3 returns=2
// ================================================

void UNK_0xe0aa() // UNK_0xe0aa
{
  Push(0x0051);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0b2: WORD 'UNK_0xe0b4' codep=0x224c parp=0xe0b4 params=3 returns=2
// ================================================

void UNK_0xe0b4() // UNK_0xe0b4
{
  Push(0x0052);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0bc: WORD 'UNK_0xe0be' codep=0x224c parp=0xe0be params=3 returns=2
// ================================================

void UNK_0xe0be() // UNK_0xe0be
{
  Push(0x0053);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0c6: WORD 'UNK_0xe0c8' codep=0x224c parp=0xe0c8 params=3 returns=2
// ================================================

void UNK_0xe0c8() // UNK_0xe0c8
{
  Push(0x0054);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0d0: WORD 'UNK_0xe0d2' codep=0x224c parp=0xe0d2 params=3 returns=2
// ================================================

void UNK_0xe0d2() // UNK_0xe0d2
{
  Push(0x0055);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0da: WORD 'UNK_0xe0dc' codep=0x224c parp=0xe0dc params=3 returns=2
// ================================================

void UNK_0xe0dc() // UNK_0xe0dc
{
  Push(0x0056);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0e4: WORD 'UNK_0xe0e6' codep=0x224c parp=0xe0e6 params=3 returns=2
// ================================================

void UNK_0xe0e6() // UNK_0xe0e6
{
  Push(0x0057);
  UNK_0xdfe6(); // UNK_0xdfe6
}


// ================================================
// 0xe0ee: WORD 'UNK_0xe0f0' codep=0x224c parp=0xe0f0 params=3 returns=2
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
LoadDataType UNK_0xe10a = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe110: WORD 'UNK_0xe112' codep=0x7394 parp=0xe112
// ================================================
LoadDataType UNK_0xe112 = {ARTIFACTIDX, 0x1f, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe118: WORD 'UNK_0xe11a' codep=0x7394 parp=0xe11a
// ================================================
LoadDataType UNK_0xe11a = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};
// 0xe120: db 0x94 0x73 0x44 0x14 0x02 0x22 0x07 0x6f ' sD  " o'

// ================================================
// 0xe128: WORD 'UNK_0xe12a' codep=0x7394 parp=0xe12a
// ================================================
LoadDataType UNK_0xe12a = {CREATUREIDX, 0x16, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe130: WORD 'UNK_0xe132' codep=0x7394 parp=0xe132
// ================================================
LoadDataType UNK_0xe132 = {ELEMENTIDX, 0x16, 0x01, 0x17, 0x6ba9};
// 0xe138: db 0x94 0x73 0x09 0x18 0x02 0x1b 0x54 0x6a ' s    Tj'

// ================================================
// 0xe140: WORD 'UNK_0xe142' codep=0x7394 parp=0xe142
// ================================================
LoadDataType UNK_0xe142 = {STISIDX, 0x1a, 0x01, 0x1b, 0x6a54};

// ================================================
// 0xe148: WORD 'UNK_0xe14a' codep=0x7394 parp=0xe14a
// ================================================
LoadDataType UNK_0xe14a = {STISIDX, 0x00, 0x20, 0x1b, 0x6a54};

// ================================================
// 0xe150: WORD 'UNK_0xe152' codep=0x7420 parp=0xe152
// ================================================
IFieldType UNK_0xe152 = {BOXIDX, 0x11, 0x02};
// 0xe155: db 0x20 0x74 0x34 0x12 0x01 ' t4  '

// ================================================
// 0xe15a: WORD 'UNK_0xe15c' codep=0x224c parp=0xe15c params=0 returns=0
// ================================================

void UNK_0xe15c() // UNK_0xe15c
{
  Push(pp__ro_THING_rc_); // (THING)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe162: WORD 'UNK_0xe164' codep=0x224c parp=0xe164 params=0 returns=0
// ================================================

void UNK_0xe164() // UNK_0xe164
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe16a: WORD 'UNK_0xe16c' codep=0x224c parp=0xe16c
// ================================================

void UNK_0xe16c() // UNK_0xe16c
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    SetColor(BLUE);
    return;
  }
  SetColor(YELLOW);
}


// ================================================
// 0xe17c: WORD 'UNK_0xe17e' codep=0x224c parp=0xe17e params=0 returns=1
// ================================================

void UNK_0xe17e() // UNK_0xe17e
{
  SetColor(GREY1);
}


// ================================================
// 0xe182: WORD 'UNK_0xe184' codep=0x224c parp=0xe184 params=0 returns=1
// ================================================

void UNK_0xe184() // UNK_0xe184
{
  SetColor(WHITE);
}


// ================================================
// 0xe188: WORD 'UNK_0xe18a' codep=0x224c parp=0xe18a
// ================================================

void UNK_0xe18a() // UNK_0xe18a
{
  UNK_0xe16c(); // UNK_0xe16c
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe190: WORD 'UNK_0xe192' codep=0x224c parp=0xe192 params=0 returns=1
// ================================================

void UNK_0xe192() // UNK_0xe192
{
  SetColor(LT_dash_BLUE);
}


// ================================================
// 0xe196: WORD 'UNK_0xe198' codep=0x224c parp=0xe198
// ================================================

void UNK_0xe198() // UNK_0xe198
{
  Push(4);
  Push(Read16(pp_WBOTTOM) + 6); // WBOTTOM @ 6 +
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
  StoreCOLOR(); // !COLOR
  WUP(); // WUP
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe1b6: WORD 'UNK_0xe1b8' codep=0x224c parp=0xe1b8
// ================================================

void UNK_0xe1b8() // UNK_0xe1b8
{
  unsigned short int i, imax, a;
  _2DUP(); // 2DUP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())&0xFF); //  C@
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
  Push(a); // I
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe1e6: WORD 'UNK_0xe1e8' codep=0x224c parp=0xe1e8
// ================================================

void UNK_0xe1e8() // UNK_0xe1e8
{
  Push(0);
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
  unsigned short int i, imax;
  UNK_0xe1b8(); // UNK_0xe1b8
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
    Push(i); // I
    Push(Read16(Pop())&0xFF); //  C@
    Push((Read16(Pop())&0xFF)==Read16(cc_BL)?1:0); //  C@ BL =
    Push(i); // I
    Push(Pop() + 1); //  1+
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
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  Push(3);
  PICK(); // PICK
  _dash_(); // -
  Push(Pop() - 1); //  1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe252: WORD 'UNK_0xe254' codep=0x224c parp=0xe254 params=2 returns=2
// ================================================

void UNK_0xe254() // UNK_0xe254
{
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
}


// ================================================
// 0xe25e: WORD 'UNK_0xe260' codep=0x1d29 parp=0xe260
// ================================================
// 0xe260: db 0x3a 0x20 ': '

// ================================================
// 0xe262: WORD 'UNK_0xe264' codep=0x224c parp=0xe264 params=2 returns=2
// ================================================

void UNK_0xe264() // UNK_0xe264
{
  OVER(); // OVER
  Push(Read16(Pop() + 1)&0xFF); //  1+ C@
  Push(!((Read16(Pop() + 1)&0xFF)==Read16(cc_BL)?1:0)); //  1+ C@ BL = NOT
  if (Pop() == 0) return;
  Push(pp_UNK_0xe260); // UNK_0xe260
  ON_2(); // ON_2
}


// ================================================
// 0xe27a: WORD 'UNK_0xe27c' codep=0x224c parp=0xe27c params=1 returns=1
// ================================================

void UNK_0xe27c() // UNK_0xe27c
{
  Push(Pop() + Read16(pp_UNK_0xdfd6)); //  UNK_0xdfd6 @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe28a: WORD 'UNK_0xe28c' codep=0x224c parp=0xe28c params=2 returns=0
// ================================================

void UNK_0xe28c() // UNK_0xe28c
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xe27c(); // UNK_0xe27c
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WUP(); // WUP
      UNK_0xe198(); // UNK_0xe198
      Push(pp_UNK_0xdfd6); // UNK_0xdfd6
      _099(); // 099
    }
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    Push(!(((Read16(Pop())&0xFF)==0x002e?1:0) | (Read16(pp_UNK_0xdfd6)==0?1:0))); //  C@ 0x002e = UNK_0xdfd6 @ 0= OR NOT
    if (Pop() != 0)
    {
      SPACE(); // SPACE
    }
    Push(Read16(regsp)); // DUP
    Push(pp_UNK_0xdfd6); // UNK_0xdfd6
    _plus__ex__2(); // +!_2
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Read16(pp_UNK_0xe260)); // UNK_0xe260 @
    if (Pop() != 0)
    {
      Push(0xfffc);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(pp_UNK_0xe260); // UNK_0xe260
      _099(); // 099
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe2e2: WORD 'UNK_0xe2e4' codep=0x224c parp=0xe2e4 params=2 returns=4
// ================================================

void UNK_0xe2e4() // UNK_0xe2e4
{
  UNK_0xe264(); // UNK_0xe264
  Push(Read16(pp_SELLING) + Read16(pp_UNK_0xdfe2)); // SELLING @ UNK_0xdfe2 @ XOR
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("HIGH");
    return;
  }
  SET_STR_AS_PARAM("LOW");
}


// ================================================
// 0xe307: WORD 'UNK_0xe309' codep=0x224c parp=0xe309 params=2 returns=4
// ================================================

void UNK_0xe309() // UNK_0xe309
{
  UNK_0xe264(); // UNK_0xe264
  Push(Read16(pp_SELLING) + Read16(pp_UNK_0xdfe2)); // SELLING @ UNK_0xdfe2 @ XOR
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("PAY");
    return;
  }
  SET_STR_AS_PARAM("ACCEPT");
}


// ================================================
// 0xe32e: WORD 'UNK_0xe330' codep=0x224c parp=0xe330 params=2 returns=4
// ================================================

void UNK_0xe330() // UNK_0xe330
{
  UNK_0xe264(); // UNK_0xe264
  Push(Read16(pp_SELLING) + Read16(pp_UNK_0xdfe2)); // SELLING @ UNK_0xdfe2 @ XOR
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("OFFER");
    return;
  }
  SET_STR_AS_PARAM("PRICE");
}


// ================================================
// 0xe356: WORD 'T>NAME' codep=0x4b3b parp=0xe361
// ================================================

void T_gt_NAME() // T>NAME
{
  switch(Pop()) // T>NAME
  {
  case 28:
    LoadData(ART_dash_NAM); // from 'ARTIFACT'
    break;
  case 68:
    LoadData(UNK_0xe11a); // from 'CREATURE'
    break;
  case 9:
    LoadData(UNK_0xe14a); // from 'STIS'
    break;
  case 26:
    LoadData(ELEM_dash_NA); // from 'ELEMENT'
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xe375: WORD 'UNK_0xe377' codep=0x224c parp=0xe377 params=1 returns=1
// ================================================

void UNK_0xe377() // UNK_0xe377
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==9?1:0); //  9 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x0018);
    return;
  }
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    Push(0x0018);
    return;
  }
  Push(0x0010);
}

// 0xe3a5: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x44 0x00 0x5f 0x12 0xfa 0x15 0x0f 0x00 0xdc 0x1b 0x0a 0x20 0x4c 0x49 0x46 0x45 0x46 0x4f 0x52 0x4d 0x53 0x90 0x16 'L""u] D _         LIFEFORMS  '

// ================================================
// 0xe3c2: WORD 'UNK_0xe3c4' codep=0x224c parp=0xe3c4
// ================================================

void UNK_0xe3c4() // UNK_0xe3c4
{
  UNK_0xe15c(); // UNK_0xe15c
  GetINST_dash_C(); // @INST-C
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
  Push(Read16(pp_UNK_0xdfde)); // UNK_0xdfde @
  UNK_0xe1e8(); // UNK_0xe1e8
}


// ================================================
// 0xe3f6: WORD 'UNK_0xe3f8' codep=0x224c parp=0xe3f8
// ================================================

void UNK_0xe3f8() // UNK_0xe3f8
{
  Push(Read16(pp_PLAST)); // PLAST @
  UNK_0xe1e8(); // UNK_0xe1e8
}


// ================================================
// 0xe400: WORD 'UNK_0xe402' codep=0x224c parp=0xe402
// ================================================

void UNK_0xe402() // UNK_0xe402
{
  UNK_0xe184(); // UNK_0xe184
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_UNK_0xdfda)); // UNK_0xdfda @
  UNK_0xe1e8(); // UNK_0xe1e8
}


// ================================================
// 0xe40e: WORD 'UNK_0xe410' codep=0x224c parp=0xe410
// ================================================

void UNK_0xe410() // UNK_0xe410
{
  UNK_0xe15c(); // UNK_0xe15c
  Push(Read16(0x65e1+ASKING.offset)); // ASKING<IFIELD> @
  UNK_0xe1e8(); // UNK_0xe1e8
  ICLOSE(); // ICLOSE
  UNK_0xe184(); // UNK_0xe184
  StoreCOLOR(); // !COLOR
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
    Push(0);
    break;

  }
}

// ================================================
// 0xe452: WORD 'UNK_0xe454' codep=0x224c parp=0xe454
// ================================================

void UNK_0xe454() // UNK_0xe454
{
  unsigned short int a;
  Push(pp_UNK_0xe260); // UNK_0xe260
  _099(); // 099
  OVER(); // OVER
  Push(Read16(Pop())&0xFF); //  C@
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  SPL(); // SPL case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    UNK_0xe28c(); // UNK_0xe28c
    UNK_0xe254(); // UNK_0xe254
  }
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe472: WORD 'UNK_0xe474' codep=0x224c parp=0xe474
// ================================================

void UNK_0xe474() // UNK_0xe474
{
  UNK_0xe198(); // UNK_0xe198
  WUP(); // WUP
  do
  {
    UNK_0xe200(); // UNK_0xe200
    UNK_0xe454(); // UNK_0xe454
    UNK_0xe28c(); // UNK_0xe28c
    Push(1);
    Push(pp_UNK_0xdfd6); // UNK_0xdfd6
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe490: WORD 'UNK_0xe492' codep=0x224c parp=0xe492
// ================================================

void UNK_0xe492() // UNK_0xe492
{
  Push(pp_UNK_0xdfd6); // UNK_0xdfd6
  _099(); // 099
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
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
LoadDataType UNK_0xe4e6 = {TRADERSIDX, 0x1a, 0x03, 0x32, 0x6ad1};

// ================================================
// 0xe4ec: WORD 'UNK_0xe4ee' codep=0x7394 parp=0xe4ee
// ================================================
LoadDataType UNK_0xe4ee = {TRADERSIDX, 0x1d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe4f4: WORD 'UNK_0xe4f6' codep=0x7394 parp=0xe4f6
// ================================================
LoadDataType UNK_0xe4f6 = {TRADERSIDX, 0x1e, 0x01, 0x32, 0x6ad1};
// 0xe4fc: db 0x94 0x73 0x15 0x1f 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x20 0x01 0x32 0xd1 0x6a ' s   2 j s   2 j'

// ================================================
// 0xe50c: WORD 'UNK_0xe50e' codep=0x7394 parp=0xe50e
// ================================================
LoadDataType UNK_0xe50e = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x7394 parp=0xe516
// ================================================
LoadDataType UNK_0xe516 = {TRADERSIDX, 0x22, 0x01, 0x32, 0x6ad1};
// 0xe51c: db 0x94 0x73 0x15 0x23 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x24 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x25 0x02 0x32 0xd1 0x6a 0x94 0x73 0x15 0x27 0x02 0x32 0xd1 0x6a ' s # 2 j s $ 2 j s % 2 j s ' 2 j'

// ================================================
// 0xe53c: WORD 'UNK_0xe53e' codep=0x7394 parp=0xe53e
// ================================================
LoadDataType UNK_0xe53e = {TRADERSIDX, 0x29, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe544: WORD 'TRADE.EDL' codep=0x7394 parp=0xe552
// ================================================
LoadDataType TRADE_dot_EDL = {TRADERSIDX, 0x2a, 0x01, 0x32, 0x6ad1};

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
  GetINST_dash_C(); // @INST-C
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(0x65e1+ASKING.offset); // ASKING<IFIELD>
    Store_2(); // !_2
  } else
  {
    Pop(); // DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe58e: WORD 'UNK_0xe590' codep=0x224c parp=0xe590
// ================================================

void UNK_0xe590() // UNK_0xe590
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe598: WORD 'UNK_0xe59a' codep=0x224c parp=0xe59a params=3 returns=2
// ================================================

void UNK_0xe59a() // UNK_0xe59a
{
  Push(0x0064);
  M_star__slash_(); // M*/
}


// ================================================
// 0xe5a2: WORD 'UNK_0xe5a4' codep=0x224c parp=0xe5a4 params=0 returns=0
// ================================================

void UNK_0xe5a4() // UNK_0xe5a4
{
  Push(0);
  Push(pp_UNK_0xdfe2); // UNK_0xdfe2
  Store_2(); // !_2
}


// ================================================
// 0xe5ac: WORD 'UNK_0xe5ae' codep=0x224c parp=0xe5ae params=0 returns=0
// ================================================

void UNK_0xe5ae() // UNK_0xe5ae
{
  Push(1);
  Push(pp_UNK_0xdfe2); // UNK_0xdfe2
  Store_2(); // !_2
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
  Push(0x65e1+INST_dash_OF.offset); // INST-OF<IFIELD>
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
  Push(8);
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe0aa(); // UNK_0xe0aa
  UNK_0xe610(); // UNK_0xe610
  Push(0x0bb8);
  MS(); // MS
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
}


// ================================================
// 0xe63e: WORD 'UNK_0xe640' codep=0x224c parp=0xe640
// ================================================

void UNK_0xe640() // UNK_0xe640
{
  UNK_0xe164(); // UNK_0xe164
  Push(4);
  UNK_0xe5b8(); // UNK_0xe5b8
  MAX(); // MAX
  UNK_0xe5c6(); // UNK_0xe5c6
  LoadData(UNK_0xe53e); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(4);
    UNK_0xe5c6(); // UNK_0xe5c6
  } else
  {
    Push(Pop()==4?1:0); //  4 =
    if (Pop() != 0)
    {
      Push(0x000a);
      UNK_0xe5c6(); // UNK_0xe5c6
    }
  }
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
  Push(pp_UNK_0xe676); // UNK_0xe676
  Store_2(); // !_2
}


// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x224c parp=0xe684
// ================================================

void UNK_0xe684() // UNK_0xe684
{
  UNK_0xe5b8(); // UNK_0xe5b8
  Push(Pop()==0x000a?1:0); //  0x000a =
  UNK_0xe164(); // UNK_0xe164
  Push(0xe4de);
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
  Push(Pop()==0?1:0); //  0=
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x224c parp=0xe69e
// ================================================

void UNK_0xe69e() // UNK_0xe69e
{
  UNK_0xe5b8(); // UNK_0xe5b8
  Push(Pop()==9?1:0); //  9 =
  if (Pop() != 0)
  {
    Push(Read16(pp_UNK_0xe676)); // UNK_0xe676 @
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(7);
      UNK_0xe5c6(); // UNK_0xe5c6
    }
    return;
  }
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xe6be: WORD 'UNK_0xe6c0' codep=0x224c parp=0xe6c0 params=1 returns=0
// ================================================

void UNK_0xe6c0() // UNK_0xe6c0
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_TERMINA); // TERMINA
  Store_2(); // !_2
  Push(pp_BARTERI); // BARTERI
  Store_2(); // !_2
}


// ================================================
// 0xe6ce: WORD 'UNK_0xe6d0' codep=0x224c parp=0xe6d0
// ================================================

void UNK_0xe6d0() // UNK_0xe6d0
{
  Push(Read16(cc_TRUE)); // TRUE
  UNK_0xe6c0(); // UNK_0xe6c0
  UNK_0xe164(); // UNK_0xe164
  LoadData(UNK_0xe4e6); // from 'TRADERS'
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  UNK_0xe5f8(); // UNK_0xe5f8
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x224c parp=0xe6e6
// ================================================

void UNK_0xe6e6() // UNK_0xe6e6
{
  Push(Read16(cc_FALSE)); // FALSE
  UNK_0xe6c0(); // UNK_0xe6c0
  UNK_0xe0c8(); // UNK_0xe0c8
  UNK_0xe610(); // UNK_0xe610
}

// 0xe6f0: db 0x4c 0x22 0x89 0x12 0x13 0x1c 0x0e 0x45 0x58 0x50 0x45 0x52 0x54 0x20 0x46 0x41 0x49 0x4c 0x45 0x44 0x21 0x90 0x16 'L"     EXPERT FAILED!  '

// ================================================
// 0xe707: WORD 'ENTER-TRADE' codep=0xaccc parp=0xe717
// ================================================

void ENTER_dash_TRADE() // ENTER-TRADE rule
{
  int b;

  b = 1;
  UNK_0xe684(); // UNK_0xe684
  b = b && !Pop();
  UNK_0xe69e(); // UNK_0xe69e
  b = b && Pop();
  if (b)
  {
    UNK_0xe6d0(); // UNK_0xe6d0
  }

  b = 1;
  UNK_0xe684(); // UNK_0xe684
  b = b && !Pop();
  UNK_0xe69e(); // UNK_0xe69e
  b = b && !Pop();
  if (b)
  {
    UNK_0xe6e6(); // UNK_0xe6e6
  }

  b = 1;
  UNK_0xe684(); // UNK_0xe684
  b = b && Pop();
  if (b)
  {
    UNK_0xe6e6(); // UNK_0xe6e6
  }
}

// 0xe724: db 0x7a 0x5d 'z]'
// 0xe728: db 0x00 ' '

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
  do
  {
    ENTER_dash_TRADE(); // ENTER-TRADE rule
  } while(Pop() == 0);
}


// ================================================
// 0xe758: WORD '(GETUSE)' codep=0x4b3b parp=0xe765
// ================================================

void _ro_GETUSE_rc_() // (GETUSE)
{
  switch(Pop()) // (GETUSE)
  {
  case 68:
    LoadData(UNK_0xe12a); // from 'CREATURE'
    break;
  case 28:
    LoadData(UNK_0xe112); // from 'ARTIFACT'
    break;
  case 26:
    LoadData(UNK_0xe132); // from 'ELEMENT'
    break;
  case 9:
    LoadData(UNK_0xe142); // from 'STIS'
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
  GetINST_dash_C(); // @INST-C
  _ro_GETUSE_rc_(); // (GETUSE) case
}


// ================================================
// 0xe781: WORD 'UNK_0xe783' codep=0x224c parp=0xe783
// ================================================

void UNK_0xe783() // UNK_0xe783
{
  UNK_0xe77b(); // UNK_0xe77b
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xe789: WORD 'UNK_0xe78b' codep=0x224c parp=0xe78b
// ================================================

void UNK_0xe78b() // UNK_0xe78b
{
  UNK_0xe15c(); // UNK_0xe15c
  UNK_0xe783(); // UNK_0xe783
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Push((Pop() & 0x0030) >> 4); //  0x0030 AND 16/
  } else
  {
    Push(Pop() & 3); //  3 AND
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7ab: WORD 'UNK_0xe7ad' codep=0x224c parp=0xe7ad
// ================================================

void UNK_0xe7ad() // UNK_0xe7ad
{
  UNK_0xe15c(); // UNK_0xe15c
  UNK_0xe783(); // UNK_0xe783
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Push(Pop() & 0x00cf); //  0x00cf AND
    SWAP(); // SWAP
    Push(Pop() >> 4); //  16*
    Push(Pop() + Pop()); // +
  } else
  {
    Push(Pop() & 0x00fc); //  0x00fc AND
    Push(Pop() + Pop()); // +
  }
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
  if (Pop() != 0)
  {
    Push(2);
  } else
  {
    Push(0);
    Push(3);
    RRND(); // RRND
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Push(2);
    } else
    {
      Push(1);
    }
  }
  UNK_0xe7ad(); // UNK_0xe7ad
}


// ================================================
// 0xe7ff: WORD 'UNK_0xe801' codep=0x224c parp=0xe801
// ================================================

void UNK_0xe801() // UNK_0xe801
{
  Push(3);
  UNK_0xe7ad(); // UNK_0xe7ad
}


// ================================================
// 0xe807: WORD 'UNK_0xe809' codep=0x224c parp=0xe809
// ================================================

void UNK_0xe809() // UNK_0xe809
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(Pop()==1?1:0); //  1 =
}


// ================================================
// 0xe811: WORD 'UNK_0xe813' codep=0x224c parp=0xe813
// ================================================

void UNK_0xe813() // UNK_0xe813
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xe819: WORD 'UNK_0xe81b' codep=0x224c parp=0xe81b
// ================================================

void UNK_0xe81b() // UNK_0xe81b
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(Pop()==2?1:0); //  2 =
}


// ================================================
// 0xe823: WORD 'UNK_0xe825' codep=0x224c parp=0xe825
// ================================================

void UNK_0xe825() // UNK_0xe825
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(Pop()==3?1:0); //  3 =
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
  Push(0);
  POLY_dash_ER(); // POLY-ER
  SetColor(PINK);
  StoreCOLOR(); // !COLOR
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
// 0xe87c: WORD 'UNK_0xe87e' codep=0x224c parp=0xe87e params=4 returns=1
// ================================================

void UNK_0xe87e() // UNK_0xe87e
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  _2SWAP(); // 2SWAP
  D_gt_(); // D>
}


// ================================================
// 0xe89a: WORD 'UNK_0xe89c' codep=0x224c parp=0xe89c params=1 returns=1
// ================================================

void UNK_0xe89c() // UNK_0xe89c
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(1);
    return;
  }
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_QT.offset) - Read16(0x65e1+UNK_0xe152.offset)); // INST-QT<IFIELD> @ UNK_0xe152<IFIELD> @ -
  _gt_(); // >
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8c2: WORD 'UNK_0xe8c4' codep=0x224c parp=0xe8c4 params=0 returns=1
// ================================================

void UNK_0xe8c4() // UNK_0xe8c4
{
  UNK_0xe15c(); // UNK_0xe15c
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    LoadData(UNK_0xe10a); // from 'ARTIFACT'
    Push((Read16(Pop())&0xFF) - 1==0?1:0); //  C@ 1- 0=
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8e4: WORD 'UNK_0xe8e6' codep=0x224c parp=0xe8e6 params=0 returns=1
// ================================================

void UNK_0xe8e6() // UNK_0xe8e6
{
  UNK_0xe8c4(); // UNK_0xe8c4
  if (Pop() != 0)
  {
    UNK_0xe55a(); // UNK_0xe55a
    Push(0);
    UNK_0xe87e(); // UNK_0xe87e
    if (Pop() != 0)
    {
      UNK_0xe15c(); // UNK_0xe15c
      LoadData(ART_dash_VOL); // from 'ARTIFACT'
      Push(Read16(Pop())); //  @
      ICLOSE(); // ICLOSE
      UNK_0xe89c(); // UNK_0xe89c
      if (Pop() != 0)
      {
        Push(1);
      } else
      {
        Push(0);
        UNK_0xe85d(); // UNK_0xe85d
      }
    } else
    {
      Push(0);
      UNK_0xe849(); // UNK_0xe849
    }
    return;
  }
  Push(1);
}


// ================================================
// 0xe91e: WORD 'UNK_0xe920' codep=0x224c parp=0xe920 params=1 returns=0
// ================================================

void UNK_0xe920() // UNK_0xe920
{
  Push(Read16(pp_TBOX)); // TBOX @
  if (Pop() != 0)
  {
    Push(pp_TV_dash_HOLD); // TV-HOLD
    _1_dot_5_at_(); // 1.5@
  } else
  {
    Push2Words("*STARSH");
  }
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xe152.offset)); // UNK_0xe152<IFIELD> @
  SWAP(); // SWAP
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    _dash_(); // -
  } else
  {
    Push(Pop() + Pop()); // +
  }
  Push(0x65e1+UNK_0xe152.offset); // UNK_0xe152<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe952: WORD 'UNK_0xe954' codep=0x224c parp=0xe954 params=0 returns=0
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
  GetINST_dash_C(); // @INST-C
  GetINST_dash_S(); // @INST-S
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe97a: WORD 'UNK_0xe97c' codep=0x224c parp=0xe97c
// ================================================

void UNK_0xe97c() // UNK_0xe97c
{
  unsigned short int a;
  GetINST_dash_C(); // @INST-C
  a = Pop(); // >R
  CI(); // CI
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex__2(); // 1.5!_2
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(a); // R>
  BOX_gt_TOC(); // BOX>TOC
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  _ro_BOX_gt__rc_(); // (BOX>)
  IsNULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  Push(Read16(pp_TBOX)); // TBOX @
  if (Pop() != 0)
  {
    Push(pp_TV_dash_HOLD); // TV-HOLD
    _1_dot_5_at_(); // 1.5@
  } else
  {
    Push2Words("*STARSH");
  }
  UNK_0xe97c(); // UNK_0xe97c
}


// ================================================
// 0xe9c0: WORD 'UNK_0xe9c2' codep=0x224c parp=0xe9c2 params=2 returns=2
// ================================================

void UNK_0xe9c2() // UNK_0xe9c2
{
  Push(1);
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
  Push(0);
  UNK_0xe8c4(); // UNK_0xe8c4
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    U_star_(); // U*
    UNK_0xe9c2(); // UNK_0xe9c2
  }
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    D_plus_(); // D+
  } else
  {
    D_dash_(); // D-
  }
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
  GetINST_dash_C(); // @INST-C
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(0x65e1+INST_dash_VA.offset); // INST-VA<IFIELD>
    Store_2(); // !_2
    Push(0x65e1+ASKING.offset); // ASKING<IFIELD>
    Store_2(); // !_2
  } else
  {
    Pop(); // DROP
  }
  Push(2);
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
  SetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  UNK_0xe192(); // UNK_0xe192
  StoreCOLOR(); // !COLOR
  PRINT("SP = ", 5); // (.")
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  UNK_0xea32(); // UNK_0xea32
  UNK_0xe184(); // UNK_0xe184
  StoreCOLOR(); // !COLOR
  D_dot_(); // D.
}


// ================================================
// 0xea68: WORD 'UNK_0xea6a' codep=0x224c parp=0xea6a
// ================================================

void UNK_0xea6a() // UNK_0xea6a
{
  unsigned short int i, imax;
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_YBLT)); // YBLT @
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2DUP(); // 2DUP
    POS_dot_(); // POS.
    Push(2);
    SetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(0x00fa);
    MS(); // MS
    PRINT("^\\", 2); // (.")
    Push(0x00fa);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea9b: WORD 'UNK_0xea9d' codep=0x224c parp=0xea9d params=0 returns=1
// ================================================

void UNK_0xea9d() // UNK_0xea9d
{
  UNK_0xe15c(); // UNK_0xe15c
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    LoadData(UNK_0xe10a); // from 'ARTIFACT'
    Push(Read16(Pop())&0xFF); //  C@
    Push((Read16(Pop())&0xFF)==2?1:0); //  C@ 2 =
  } else
  {
    Push(Read16(cc_FALSE)); // FALSE
  }
  Push(Pop() & !Read16(pp_SELLING)); //  SELLING @ NOT AND
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
  SetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  UNK_0xe192(); // UNK_0xe192
  StoreCOLOR(); // !COLOR
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
  Push(9);
  SetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  UNK_0xe184(); // UNK_0xe184
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  Push(0x000a);
  _slash_MOD(); // /MOD
  Draw(); // .
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT(".", 1); // (.")
  Draw(); // .
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
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45 params=0 returns=0
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  UNK_0xea9d(); // UNK_0xea9d
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(0xc052); // probable '@TAMT'
    MODULE(); // MODULE
    _2DUP(); // 2DUP
    _gt_(); // >
    if (Pop() != 0)
    {
      UNK_0xeb23(); // UNK_0xeb23
      SWAP(); // SWAP
      Pop(); // DROP
    } else
    {
      Pop(); // DROP
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb6b: WORD 'UNK_0xeb6d' codep=0x224c parp=0xeb6d params=0 returns=0
// ================================================

void UNK_0xeb6d() // UNK_0xeb6d
{
  UNK_0xea9d(); // UNK_0xea9d
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(0xc052); // probable '@TAMT'
    MODULE(); // MODULE
    Push(Pop() - Read16(pp_ELEM_dash_AM)); //  ELEM-AM @ -
    GetINST_dash_S(); // @INST-S
    Push(0xc042); // probable '!TAMT'
    MODULE(); // MODULE
  }
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
  Push(Read16(pp_ELEM_dash_AM) + Read16(pp_UNK_0xeb8f)); // ELEM-AM @ UNK_0xeb8f @ +
  UNK_0xeb45(); // UNK_0xeb45
  Push(Read16(regsp)); // DUP
  UNK_0xe89c(); // UNK_0xe89c
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xea32(); // UNK_0xea32
    UNK_0xe87e(); // UNK_0xe87e
    if (Pop() != 0)
    {
      Push(1);
      MAX(); // MAX
      Push(Read16(pp_SELLING)); // SELLING @
      if (Pop() != 0)
      {
        UNK_0xe15c(); // UNK_0xe15c
        Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
        ICLOSE(); // ICLOSE
        MIN(); // MIN
      }
      Push(pp_ELEM_dash_AM); // ELEM-AM
      Store_2(); // !_2
    } else
    {
      Pop(); // DROP
      UNK_0xe849(); // UNK_0xe849
    }
    return;
  }
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
  SetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  UNK_0xe192(); // UNK_0xe192
  StoreCOLOR(); // !COLOR
  PRINT("SELL ALL\?  [N Y]", 16); // (.")
  Y_slash_N(); // Y/N
}


// ================================================
// 0xec0c: WORD 'UNK_0xec0e' codep=0x224c parp=0xec0e
// ================================================

void UNK_0xec0e() // UNK_0xec0e
{
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x00fa); Push(0x0000);
  D_st_(); // D<
  if (Pop() == 0) return;
  Push(Pop() * 0x000a); //  0x000a *
}


// ================================================
// 0xec2c: WORD 'UNK_0xec2e' codep=0x224c parp=0xec2e params=0 returns=0
// ================================================

void UNK_0xec2e() // UNK_0xec2e
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    UNK_0xebdf(); // UNK_0xebdf
  } else
  {
    Push(0);
  }
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) goto label3;
  UNK_0xeac5(); // UNK_0xeac5
  Push(1);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  UNK_0xeaef(); // UNK_0xeaef
  Push(1);
  Push(pp_UNK_0xeb8f); // UNK_0xeb8f
  Store_2(); // !_2

  label6:
  XYSCAN(); // XYSCAN
  IsTRIG(); // ?TRIG
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    UNK_0xec0e(); // UNK_0xec0e
    Push(pp_UNK_0xeb8f); // UNK_0xeb8f
    Store_2(); // !_2
    UNK_0xeb93(); // UNK_0xeb93
    UNK_0xeaef(); // UNK_0xeaef
    UNK_0xea3c(); // UNK_0xea3c
  }
  goto label6;

  label4:
  Pop(); Pop(); // 2DROP
  return;

  label3:
  UNK_0xe15c(); // UNK_0xe15c
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
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
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec9e: WORD 'UNK_0xeca0' codep=0x224c parp=0xeca0
// ================================================

void UNK_0xeca0() // UNK_0xeca0
{
  UNK_0xe15c(); // UNK_0xe15c
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  UNK_0xe164(); // UNK_0xe164
  LoadData(UNK_0xe50e); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    LoadData(UNK_0xe516); // from 'TRADERS'
    Push(Read16(Pop())&0xFF); //  C@
    if (Pop() != 0)
    {
      Push(1);
    } else
    {
      Push(0);
    }
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8
// ================================================

void UNK_0xecd8() // UNK_0xecd8
{
  UNK_0xeca0(); // UNK_0xeca0
  if (Pop() != 0)
  {
    Push(3);
    UNK_0xe5c6(); // UNK_0xe5c6
    UNK_0xec8c(); // UNK_0xec8c
  }
  UNK_0xe825(); // UNK_0xe825
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  UNK_0xe5b8(); // UNK_0xe5b8
  Push(Read16(regsp)); // DUP
  Push(Pop() - 1); //  1-
  Push(4);
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
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    UNK_0xe9aa(); // UNK_0xe9aa
    _gt_INACTI(); // >INACTI
  } else
  {
    UNK_0xe960(); // UNK_0xe960
    UNK_0xe954(); // UNK_0xe954
  }
  ICLOSE(); // ICLOSE
  Push(0xc024); // probable 'SET-C'
  MODULE(); // MODULE
}


// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x224c parp=0xed22 params=0 returns=0
// ================================================

void UNK_0xed22() // UNK_0xed22
{
  UNK_0xe8c4(); // UNK_0xe8c4
  if (Pop() != 0)
  {
    UNK_0xe15c(); // UNK_0xe15c
    LoadData(ART_dash_VOL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    ICLOSE(); // ICLOSE
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
    return;
  }
  UNK_0xec2e(); // UNK_0xec2e
}


// ================================================
// 0xed3c: WORD 'UNK_0xed3e' codep=0x224c parp=0xed3e
// ================================================

void UNK_0xed3e() // UNK_0xed3e
{
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  Push2Words("NULL");
  UNK_0xe87e(); // UNK_0xe87e
  if (Pop() == 0) goto label1;
  Push(0);
  UNK_0xe89c(); // UNK_0xe89c
  if (Pop() == 0) goto label2;
  UNK_0xe8e6(); // UNK_0xe8e6
  if (Pop() == 0) goto label3;
  UNK_0xe801(); // UNK_0xe801
  UNK_0xecd8(); // UNK_0xecd8
  UNK_0xed22(); // UNK_0xed22
  UNK_0xe9ce(); // UNK_0xe9ce
  SET_STR_AS_PARAM("DOING TRANSACTION");
  UNK_0xe1aa(); // UNK_0xe1aa
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
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
  Push(9);
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
  Push(1);
  UNK_0xed9a(); // UNK_0xed9a
}


// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x224c parp=0xedbc
// ================================================

void UNK_0xedbc() // UNK_0xedbc
{
  Push(3);
  UNK_0xed9a(); // UNK_0xed9a
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  UNK_0xe164(); // UNK_0xe164
  LoadData(TRADE_dot_EDL); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0);
  Push(4);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(9);
  } else
  {
    Push(5);
  }
  Push(pp_PATIENC); // PATIENC
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xede4: WORD 'UNK_0xede6' codep=0x224c parp=0xede6
// ================================================

void UNK_0xede6() // UNK_0xede6
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  UNK_0xe15c(); // UNK_0xe15c
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  GetINST_dash_S(); // @INST-S
  UNK_0xe164(); // UNK_0xe164
  LoadData(UNK_0xe4ee); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    LoadData(UNK_0xe4f6); // from 'TRADERS'
    Push(Read16(Pop())&0xFF); //  C@
    if (Pop() != 0)
    {
      LoadData(TRADE_dot_EDL); // from 'TRADERS'
      Push(Read16(Pop())&0xFF); //  C@
      Push(4);
      _st_(); // <
    } else
    {
      Push(1);
    }
  } else
  {
    Push(1);
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee30: WORD 'UNK_0xee32' codep=0x224c parp=0xee32 params=0 returns=1
// ================================================

void UNK_0xee32() // UNK_0xee32
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    UNK_0xe55a(); // UNK_0xe55a
    Push(!(Pop()==0?1:0)); //  0= NOT
    return;
  }
  Push(1);
}


// ================================================
// 0xee48: WORD 'UNK_0xee4a' codep=0x224c parp=0xee4a params=0 returns=0
// ================================================

void UNK_0xee4a() // UNK_0xee4a
{
  Push(Read16(pp_PATIENC)==0?1:0); // PATIENC @ 0=
  if (Pop() == 0) return;
  UNK_0xedb4(); // UNK_0xedb4
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  UNK_0xe7db(); // UNK_0xe7db
  UNK_0xe0a0(); // UNK_0xe0a0
  UNK_0xe610(); // UNK_0xe610
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xee64: WORD 'UNK_0xee66' codep=0x224c parp=0xee66 params=0 returns=1
// ================================================

void UNK_0xee66() // UNK_0xee66
{
  Push(Read16(pp_SELLING)); // SELLING @
}


// ================================================
// 0xee6c: WORD 'UNK_0xee6e' codep=0x224c parp=0xee6e
// ================================================

void UNK_0xee6e() // UNK_0xee6e
{
  UNK_0xe000(); // UNK_0xe000
  UNK_0xe610(); // UNK_0xe610
  Push(pp_BARTERI); // BARTERI
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
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xee88: WORD 'UNK_0xee8a' codep=0x224c parp=0xee8a params=0 returns=0
// ================================================

void UNK_0xee8a() // UNK_0xee8a
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(pp_UNK_0xe4be); // UNK_0xe4be
  Store_2(); // !_2
}


// ================================================
// 0xee94: WORD 'UNK_0xee96' codep=0x224c parp=0xee96 params=1 returns=0
// ================================================

void UNK_0xee96() // UNK_0xee96
{
  UNK_0xee8a(); // UNK_0xee8a
  Push(Pop() + Read16(pp_PATIENC)); //  PATIENC @ +
  Push(0);
  MAX(); // MAX
  Push(9);
  MIN(); // MIN
  Push(pp_PATIENC); // PATIENC
  Store_2(); // !_2
}


// ================================================
// 0xeeac: WORD 'UNK_0xeeae' codep=0x224c parp=0xeeae params=0 returns=1
// ================================================

void UNK_0xeeae() // UNK_0xeeae
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(Read16(pp_UNK_0xe4be)); // UNK_0xe4be @
  _st_(); // <
  UNK_0xee8a(); // UNK_0xee8a
}


// ================================================
// 0xeebc: WORD 'UNK_0xeebe' codep=0x224c parp=0xeebe
// ================================================

void UNK_0xeebe() // UNK_0xeebe
{
  Push(Read16(pp_BARTERI)); // BARTERI @
  if (Pop() != 0)
  {
    UNK_0xe0b4(); // UNK_0xe0b4
    UNK_0xe610(); // UNK_0xe610
  }
  UNK_0xe620(); // UNK_0xe620
  Push(pp_BARTERI); // BARTERI
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
  Push(pp_BARTERI); // BARTERI
  ON_2(); // ON_2
}


// ================================================
// 0xeee6: WORD 'UNK_0xeee8' codep=0x224c parp=0xeee8
// ================================================

void UNK_0xeee8() // UNK_0xeee8
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(2);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(2);
    Push(pp_PATIENC); // PATIENC
    Store_2(); // !_2
  }
  UNK_0xee8a(); // UNK_0xee8a
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe08c(); // UNK_0xe08c
  UNK_0xe610(); // UNK_0xe610
  Push(pp_BARTERI); // BARTERI
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
  Push(-1);
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
  Push(pp_BARTERI); // BARTERI
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
  Push(pp_BARTERI); // BARTERI
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
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
}


// ================================================
// 0xef44: WORD 'UNK_0xef46' codep=0x224c parp=0xef46 params=0 returns=1
// ================================================

void UNK_0xef46() // UNK_0xef46
{
  UNK_0xea9d(); // UNK_0xea9d
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(0xc052); // probable '@TAMT'
    MODULE(); // MODULE
    _0_gt_(); // 0>
  } else
  {
    Push(Read16(cc_TRUE)); // TRUE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef60: WORD 'OPEN-EXPERT' codep=0xaccc parp=0xef70
// ================================================

void OPEN_dash_EXPERT() // OPEN-EXPERT rule
{
  int b;

  b = 1;
  UNK_0xef46(); // UNK_0xef46
  b = b && !Pop();
  if (b)
  {
    UNK_0xef30(); // UNK_0xef30
  }

  b = 1;
  UNK_0xede6(); // UNK_0xede6
  b = b && !Pop();
  if (b)
  {
    UNK_0xef1e(); // UNK_0xef1e
  }

  b = 1;
  UNK_0xee66(); // UNK_0xee66
  b = b && Pop();
  UNK_0xee32(); // UNK_0xee32
  b = b && !Pop();
  if (b)
  {
    UNK_0xee6e(); // UNK_0xee6e
  }

  b = 1;
  UNK_0xe825(); // UNK_0xe825
  b = b && Pop();
  UNK_0xee32(); // UNK_0xee32
  b = b && Pop();
  if (b)
  {
    UNK_0xed3e(); // UNK_0xed3e
  }

  b = 1;
  UNK_0xe813(); // UNK_0xe813
  b = b && Pop();
  UNK_0xee32(); // UNK_0xee32
  b = b && Pop();
  if (b)
  {
    UNK_0xeed6(); // UNK_0xeed6
  }

  b = 1;
  UNK_0xe809(); // UNK_0xe809
  b = b && Pop();
  UNK_0xee32(); // UNK_0xee32
  b = b && Pop();
  if (b)
  {
    UNK_0xeee8(); // UNK_0xeee8
  }

  b = 1;
  UNK_0xe81b(); // UNK_0xe81b
  b = b && Pop();
  UNK_0xee32(); // UNK_0xee32
  b = b && Pop();
  if (b)
  {
    UNK_0xef0a(); // UNK_0xef0a
  }
}


// ================================================
// 0xefba: WORD 'DO-OPEN_1' codep=0x224c parp=0xefc6
// ================================================

void DO_dash_OPEN_1() // DO-OPEN_1
{
  Push(0xef70); // probable 'OPEN-EXPERT'
  DISTRAC(); // DISTRAC
  UNK_0xe18a(); // UNK_0xe18a
  do
  {
    OPEN_dash_EXPERT(); // OPEN-EXPERT rule
  } while(Pop() == 0);
}


// ================================================
// 0xefd6: WORD 'UNK_0xefd8' codep=0x224c parp=0xefd8 params=2 returns=1
// ================================================

void UNK_0xefd8() // UNK_0xefd8
{
  SWAP(); // SWAP
  Push(0);
  ROT(); // ROT
  Push(0);
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    DMIN(); // DMIN
  } else
  {
    DMAX(); // DMAX
  }
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
// 0xeffc: WORD 'UNK_0xeffe' codep=0x224c parp=0xeffe params=1 returns=1
// ================================================

void UNK_0xeffe() // UNK_0xeffe
{
  Push(Read16(pp_PLAST)); // PLAST @
  UNK_0xefd8(); // UNK_0xefd8
}


// ================================================
// 0xf006: WORD 'UNK_0xf008' codep=0x224c parp=0xf008
// ================================================

void UNK_0xf008() // UNK_0xf008
{
  UNK_0xe55a(); // UNK_0xe55a
  Push(Pop()==Read16(pp_PLAST)?1:0); //  PLAST @ =
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
  Push(3);
  Push(5);
  RRND(); // RRND
  Push(0x000a);
  _star__slash_(); // */
  Push(0x0025);
  MAX(); // MAX
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Push(Pop() + Pop()); // +
  } else
  {
    _dash_(); // -
  }
  UNK_0xeff6(); // UNK_0xeff6
  UNK_0xeffe(); // UNK_0xeffe
}


// ================================================
// 0xf046: WORD 'UNK_0xf048' codep=0x224c parp=0xf048
// ================================================

void UNK_0xf048() // UNK_0xf048
{
  UNK_0xe55a(); // UNK_0xe55a
  Push(0);
  Push(Read16(pp_PLAST)); // PLAST @
  Push(0);
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    D_gt_(); // D>
    return;
  }
  D_st_(); // D<
}


// ================================================
// 0xf064: WORD 'UNK_0xf066' codep=0x224c parp=0xf066 params=0 returns=1
// ================================================

void UNK_0xf066() // UNK_0xf066
{
  Push(Read16(pp__1ST)==0?1:0); // 1ST @ 0=
  if (Pop() != 0)
  {
    Push(Read16(pp_PLAST)); // PLAST @
    Push(0);
    Push(Read16(pp_UNK_0xdfde)); // UNK_0xdfde @
    Push(0);
    Push(Read16(pp_SELLING)); // SELLING @
    if (Pop() != 0)
    {
      D_gt_(); // D>
    } else
    {
      D_st_(); // D<
    }
    return;
  }
  Push(0);
}

// 0xf094: db 0x4c 0x22 0x1b 0x62 0x57 0x6d 0x90 0x16 'L" bWm  '

// ================================================
// 0xf09c: WORD 'UNK_0xf09e' codep=0x224c parp=0xf09e params=0 returns=0
// ================================================

void UNK_0xf09e() // UNK_0xf09e
{
  Push(pp_IsREPLY); // ?REPLY
  _099(); // 099
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  UNK_0xe00a(); // UNK_0xe00a
  UNK_0xe610(); // UNK_0xe610
  Push(pp_UNK_0xe4a6); // UNK_0xe4a6
  ON_2(); // ON_2
  UNK_0xf09e(); // UNK_0xf09e
  Push(Read16(pp_PLAST)); // PLAST @
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
  Push(-3);
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
  if (Pop() != 0)
  {
    UNK_0xf0cc(); // UNK_0xf0cc
  }
  Push(-2);
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
  Push(pp_BARTERI); // BARTERI
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
  Push(-2);
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
  Push(pp_BARTERI); // BARTERI
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
  Push(1);
  Push(4);
  RRND(); // RRND
  Push(3);
  _star__slash_(); // */
  Push(0x0025);
  MAX(); // MAX
  Push(Read16(pp_SELLING)==0?1:0); // SELLING @ 0=
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  UNK_0xe55a(); // UNK_0xe55a
  Push(Pop() + Pop()); // +
  UNK_0xeff6(); // UNK_0xeff6
  UNK_0xeffe(); // UNK_0xeffe
}


// ================================================
// 0xf154: WORD 'UNK_0xf156' codep=0x224c parp=0xf156 params=0 returns=0
// ================================================

void UNK_0xf156() // UNK_0xf156
{
}


// ================================================
// 0xf158: WORD 'UNK_0xf15a' codep=0x224c parp=0xf15a
// ================================================

void UNK_0xf15a() // UNK_0xf15a
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() != 0)
  {
    UNK_0xf116(); // UNK_0xf116
    return;
  }
  UNK_0xf126(); // UNK_0xf126
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdfda); // UNK_0xdfda
  Store_2(); // !_2
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
  if (Pop() != 0)
  {
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_UNK_0xe4ba)); // UNK_0xe4ba @
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf1ae: WORD 'UNK_0xf1b0' codep=0x224c parp=0xf1b0
// ================================================

void UNK_0xf1b0() // UNK_0xf1b0
{
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe06e(); // UNK_0xe06e
  UNK_0xe610(); // UNK_0xe610
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
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
  Push(Pop()==Read16(pp_PLAST)?1:0); //  PLAST @ =
  if (Pop() != 0)
  {
    UNK_0xf0a6(); // UNK_0xf0a6
    return;
  }
  UNK_0xe590(); // UNK_0xe590
  if (Pop() != 0)
  {
    UNK_0xe5a4(); // UNK_0xe5a4
    UNK_0xe064(); // UNK_0xe064
    UNK_0xe610(); // UNK_0xe610
  } else
  {
    UNK_0xf156(); // UNK_0xf156
  }
  UNK_0xe5a4(); // UNK_0xe5a4
  UNK_0xe078(); // UNK_0xe078
  UNK_0xe610(); // UNK_0xe610
}


// ================================================
// 0xf1ee: WORD 'UNK_0xf1f0' codep=0x224c parp=0xf1f0 params=0 returns=0
// ================================================

void UNK_0xf1f0() // UNK_0xf1f0
{
  Push((Read16(pp_BARTERI) & Read16(pp_IsREPLY)) & !Read16(pp_UNK_0xe4b6)); // BARTERI @ ?REPLY @ AND UNK_0xe4b6 @ NOT AND
  if (Pop() == 0) return;
  UNK_0xeeae(); // UNK_0xeeae
  if (Pop() != 0)
  {
    UNK_0xf1b0(); // UNK_0xf1b0
    return;
  }
  UNK_0xf186(); // UNK_0xf186
  if (Pop() != 0)
  {
    UNK_0xf1b0(); // UNK_0xf1b0
    return;
  }
  UNK_0xf1be(); // UNK_0xf1be
}


// ================================================
// 0xf222: WORD 'UNK_0xf224' codep=0x224c parp=0xf224
// ================================================

void UNK_0xf224() // UNK_0xf224
{
  UNK_0xe590(); // UNK_0xe590
  if (Pop() != 0)
  {
    UNK_0xe5a4(); // UNK_0xe5a4
    UNK_0xe05a(); // UNK_0xe05a
    UNK_0xe610(); // UNK_0xe610
  } else
  {
    UNK_0xf156(); // UNK_0xf156
  }
  Push(Read16(pp_UNK_0xe4b2)); // UNK_0xe4b2 @
  if (Pop() != 0)
  {
    Push(0x0028);
  } else
  {
    Push(0x003c);
  }
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba
  Store_2(); // !_2
  UNK_0xee80(); // UNK_0xee80
  if (Pop() == 0) return;
  Push(-2);
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
}


// ================================================
// 0xf25c: WORD 'UNK_0xf25e' codep=0x224c parp=0xf25e
// ================================================

void UNK_0xf25e() // UNK_0xf25e
{
  Push(0x0014);
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba
  Store_2(); // !_2
  UNK_0xee80(); // UNK_0xee80
  if (Pop() == 0) return;
  Push(-1);
  UNK_0xee96(); // UNK_0xee96
  UNK_0xee4a(); // UNK_0xee4a
}


// ================================================
// 0xf274: WORD 'UNK_0xf276' codep=0x224c parp=0xf276 params=0 returns=1
// ================================================

void UNK_0xf276() // UNK_0xf276
{
  unsigned short int a;
  Push(Read16(pp__1ST)); // 1ST @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(pp_PLAST)); // PLAST @
    UNK_0xf014(); // UNK_0xf014
    Push(Read16(regsp)); // DUP
    Push(5);
    Push(0x0064);
    _star__slash_(); // */
    OVER(); // OVER
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Push(Read16(pp_SELLING)); // SELLING @
    if (Pop() != 0)
    {
      MIN(); // MIN
    }
    a = Pop(); // >R
    _dash_(); // -
    UNK_0xe5ea(); // UNK_0xe5ea
    Push(Read16(pp_SELLING)==0?1:0); // SELLING @ 0=
    if (Pop() != 0)
    {
      MAX(); // MAX
    }
    Push(a); // R>
    Push(Pop() + 1); //  1+
    WITHIN(); // WITHIN
    UNK_0xf048(); // UNK_0xf048
    Push(Pop() | Pop()); // OR
    return;
  }
  Push(0);
}


// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8 params=0 returns=1
// ================================================

void UNK_0xf2c8() // UNK_0xf2c8
{
  Push(Read16(pp_UNK_0xe4a6)); // UNK_0xe4a6 @
}


// ================================================
// 0xf2ce: WORD 'UNK_0xf2d0' codep=0x224c parp=0xf2d0 params=0 returns=1
// ================================================

void UNK_0xf2d0() // UNK_0xf2d0
{
  Push(Read16(pp_UNK_0xe4aa)); // UNK_0xe4aa @
}


// ================================================
// 0xf2d6: WORD 'UNK_0xf2d8' codep=0x224c parp=0xf2d8 params=0 returns=1
// ================================================

void UNK_0xf2d8() // UNK_0xf2d8
{
  Push(Read16(pp_PLAST)); // PLAST @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  _0_st_(); // 0<
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf2e8: WORD 'UNK_0xf2ea' codep=0x224c parp=0xf2ea params=0 returns=1
// ================================================

void UNK_0xf2ea() // UNK_0xf2ea
{
  Push(Read16(pp__1ST)); // 1ST @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(pp_PLAST)); // PLAST @
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0?1:0)); //  0= NOT
    SWAP(); // SWAP
    Push(0);
    UNK_0xe5ea(); // UNK_0xe5ea
    Push(Read16(pp_SELLING)); // SELLING @
    if (Pop() != 0)
    {
      Push(Pop() * 2); //  2*
      Push(0);
      D_gt_(); // D>
    } else
    {
      Push(Pop() >> 1); //  2/
      Push(0);
      D_st_(); // D<
    }
    Push(Pop() & Pop()); // AND
    return;
  }
  Push(0);
}


// ================================================
// 0xf328: WORD 'UNK_0xf32a' codep=0x224c parp=0xf32a params=0 returns=1
// ================================================

void UNK_0xf32a() // UNK_0xf32a
{
  unsigned short int a, b;
  Push(Read16(pp__1ST)==0?1:0); // 1ST @ 0=
  if (Pop() != 0)
  {
    Push(Read16(pp_PLAST)); // PLAST @
    Push(0);
    Push(Read16(pp_UNK_0xdfde)); // UNK_0xdfde @
    Push(0);
    _2OVER(); // 2OVER
    _2OVER(); // 2OVER
    Push(Read16(pp_SELLING)); // SELLING @
    if (Pop() != 0)
    {
      D_st_(); // D<
      a = Pop(); // >R
      Push(0x006b);
      UNK_0xe59a(); // UNK_0xe59a
      D_st_(); // D<
      Push(!Pop()); //  NOT
      Push(a); // R>
      Push(Pop() & Pop()); // AND
    } else
    {
      D_gt_(); // D>
      b = Pop(); // >R
      Push(0x006b);
      UNK_0xe59a(); // UNK_0xe59a
      D_gt_(); // D>
      Push(!Pop()); //  NOT
      Push(b); // R>
      Push(Pop() & Pop()); // AND
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xf37c: WORD 'UNK_0xf37e' codep=0x224c parp=0xf37e params=0 returns=1
// ================================================

void UNK_0xf37e() // UNK_0xf37e
{
  Push(Read16(pp_UNK_0xe4b6)); // UNK_0xe4b6 @
}


// ================================================
// 0xf384: WORD 'UNK_0xf386' codep=0x224c parp=0xf386 params=0 returns=1
// ================================================

void UNK_0xf386() // UNK_0xf386
{
  Push(Read16(pp_PLAST)); // PLAST @
  Push(Read16(pp_PLAST)==Read16(pp_UNK_0xdfde)?1:0); // PLAST @ UNK_0xdfde @ =
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe4ae); // UNK_0xe4ae
  Store_2(); // !_2
}


// ================================================
// 0xf398: WORD 'UNK_0xf39a' codep=0x224c parp=0xf39a params=0 returns=1
// ================================================

void UNK_0xf39a() // UNK_0xf39a
{
  Push(Read16(pp_UNK_0xdfde)); // UNK_0xdfde @
  Push(0);
  Push(Read16(pp_PLAST)); // PLAST @
  Push(0);
  Push(0x0050);
  UNK_0xe59a(); // UNK_0xe59a
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    D_gt_(); // D>
    return;
  }
  D_st_(); // D<
}


// ================================================
// 0xf3be: WORD '(DO-BARTER)' codep=0xaccc parp=0xf3ce
// ================================================

void _ro_DO_dash_BARTER_rc_() // (DO-BARTER) rule
{
  int b;

  b = 1;
  UNK_0xf276(); // UNK_0xf276
  b = b && Pop();
  UNK_0xf2c8(); // UNK_0xf2c8
  b = b && !Pop();
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  if (b)
  {
    UNK_0xf0a6(); // UNK_0xf0a6
  }

  b = 1;
  UNK_0xf008(); // UNK_0xf008
  b = b && Pop();
  UNK_0xf2c8(); // UNK_0xf2c8
  b = b && !Pop();
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  if (b)
  {
    UNK_0xf0a6(); // UNK_0xf0a6
  }

  b = 1;
  UNK_0xf2c8(); // UNK_0xf2c8
  b = b && Pop();
  if (b)
  {
    UNK_0xed3e(); // UNK_0xed3e
  }

  b = 1;
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && Pop();
  if (b)
  {
    UNK_0xed3e(); // UNK_0xed3e
  }

  b = 1;
  UNK_0xf066(); // UNK_0xf066
  b = b && Pop();
  UNK_0xf37e(); // UNK_0xf37e
  b = b && !Pop();
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  if (b)
  {
    UNK_0xf0ba(); // UNK_0xf0ba
  }

  b = 1;
  UNK_0xf2ea(); // UNK_0xf2ea
  b = b && Pop();
  UNK_0xf37e(); // UNK_0xf37e
  b = b && !Pop();
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  if (b)
  {
    UNK_0xf0d4(); // UNK_0xf0d4
  }

  b = 1;
  UNK_0xf2d8(); // UNK_0xf2d8
  b = b && Pop();
  UNK_0xf37e(); // UNK_0xf37e
  b = b && !Pop();
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  if (b)
  {
    UNK_0xf0ec(); // UNK_0xf0ec
  }

  b = 1;
  UNK_0xf2ea(); // UNK_0xf2ea
  b = b && !Pop();
  UNK_0xf32a(); // UNK_0xf32a
  b = b && Pop();
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  UNK_0xf37e(); // UNK_0xf37e
  b = b && !Pop();
  if (b)
  {
    UNK_0xf100(); // UNK_0xf100
  }

  b = 1;
  UNK_0xf37e(); // UNK_0xf37e
  b = b && Pop();
  UNK_0xee80(); // UNK_0xee80
  b = b && Pop();
  if (b)
  {
    UNK_0xf116(); // UNK_0xf116
  }

  b = 1;
  UNK_0xf37e(); // UNK_0xf37e
  b = b && Pop();
  UNK_0xee80(); // UNK_0xee80
  b = b && !Pop();
  if (b)
  {
    UNK_0xf15a(); // UNK_0xf15a
  }

  b = 1;
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  UNK_0xf386(); // UNK_0xf386
  b = b && Pop();
  if (b)
  {
    UNK_0xf224(); // UNK_0xf224
  }

  b = 1;
  UNK_0xf2d0(); // UNK_0xf2d0
  b = b && !Pop();
  UNK_0xf39a(); // UNK_0xf39a
  b = b && Pop();
  if (b)
  {
    UNK_0xf25e(); // UNK_0xf25e
  }
}

// 0xf3e9: db 0x90 0x16 '  '

// ================================================
// 0xf450: WORD 'DO-BARTER' codep=0x224c parp=0xf45e
// ================================================
// entry

void DO_dash_BARTER() // DO-BARTER
{
  Push(Read16(pp_TRACE)); // TRACE @
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM(" ");
    DrawTTY(); // .TTY
    UNK_0xe5ea(); // UNK_0xe5ea
    Draw(); // .
    UNK_0xe55a(); // UNK_0xe55a
    Draw(); // .
  }
  UNK_0xe18a(); // UNK_0xe18a
  Push(0xf3ce); // probable '(DO-BARTER)'
  DISTRAC(); // DISTRAC
  _ro_DO_dash_BARTER_rc_(); // (DO-BARTER) rule
  Pop(); // DROP
  UNK_0xf1f0(); // UNK_0xf1f0
}


// ================================================
// 0xf484: WORD 'UNK_0xf486' codep=0x224c parp=0xf486 params=3 returns=2
// ================================================

void UNK_0xf486() // UNK_0xf486
{
  Push(Read16(pp_PLAST)); // PLAST @
  Push(Read16(pp_PLAST)==Read16(pp_UNK_0xdfde)?1:0); // PLAST @ UNK_0xdfde @ =
  if (Pop() != 0)
  {
    UNK_0xe0be(); // UNK_0xe0be
    return;
  }
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

void StorePFLAGS() // !PFLAGS
{
  UNK_0xe17e(); // UNK_0xe17e
  StoreCOLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  UNK_0xf4bc(); // UNK_0xf4bc
  Push(Read16(regsp)); // DUP
  Push(Pop()==2?1:0); //  2 =
  if (Pop() != 0)
  {
    Push(Pop()==0?1:0); //  0=
    Push(Read16(regsp)); // DUP
    Push(pp_UNK_0xe4b6); // UNK_0xe4b6
    Store_2(); // !_2
    Push(pp_UNK_0xe4aa); // UNK_0xe4aa
    Store_2(); // !_2
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_UNK_0xe4b6); // UNK_0xe4b6
  Store_2(); // !_2
  Push(pp_UNK_0xe4aa); // UNK_0xe4aa
  Store_2(); // !_2
}


// ================================================
// 0xf500: WORD 'L>P' codep=0x224c parp=0xf508 params=0 returns=0
// ================================================
// entry

void L_gt_P() // L>P
{
  Push(Read16(pp_PLAST)); // PLAST @
  Push(pp_UNK_0xdfde); // UNK_0xdfde
  Store_2(); // !_2
  Push(pp_UNK_0xe4ae); // UNK_0xe4ae
  _099(); // 099
}


// ================================================
// 0xf516: WORD 'UNK_0xf518' codep=0x224c parp=0xf518 params=0 returns=0
// ================================================

void UNK_0xf518() // UNK_0xf518
{
  Push(pp_UNK_0xe4a6); // UNK_0xe4a6
  _099(); // 099
  Push(pp_UNK_0xe4aa); // UNK_0xe4aa
  _099(); // 099
  Push(pp_UNK_0xe4b2); // UNK_0xe4b2
  _099(); // 099
  Push(pp_UNK_0xe4ae); // UNK_0xe4ae
  _099(); // 099
  Push(pp_UNK_0xe4b6); // UNK_0xe4b6
  _099(); // 099
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba
  _099(); // 099
  Push(pp_PLAST); // PLAST
  _099(); // 099
  Push(pp_UNK_0xdfde); // UNK_0xdfde
  _099(); // 099
  Push(pp_UNK_0xdfda); // UNK_0xdfda
  _099(); // 099
  Push(2);
  Push(pp__1ST); // 1ST
  Store_2(); // !_2
  Push(0x0014);
  Push(pp_UNK_0xe4ba); // UNK_0xe4ba
  Store_2(); // !_2
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

