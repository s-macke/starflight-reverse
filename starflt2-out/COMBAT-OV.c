// ====== OVERLAY 'COMBAT-OV' ======
// store offset = 0xdd00
// overlay size   = 0x1860

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xdd16  codep:0x224c parp:0xdd16 size:0x0008 C-string:'UNK_0xdd16'
//      UNK_0xdd20  codep:0x1d29 parp:0xdd20 size:0x0002 C-string:'UNK_0xdd20'
//      UNK_0xdd24  codep:0x1d29 parp:0xdd24 size:0x0002 C-string:'UNK_0xdd24'
//      UNK_0xdd28  codep:0x1d29 parp:0xdd28 size:0x0004 C-string:'UNK_0xdd28'
//      UNK_0xdd2e  codep:0x224c parp:0xdd2e size:0x0012 C-string:'UNK_0xdd2e'
//      UNK_0xdd42  codep:0x224c parp:0xdd42 size:0x0008 C-string:'UNK_0xdd42'
//      UNK_0xdd4c  codep:0x224c parp:0xdd4c size:0x000e C-string:'UNK_0xdd4c'
//      UNK_0xdd5c  codep:0x224c parp:0xdd5c size:0x0006 C-string:'UNK_0xdd5c'
//      UNK_0xdd64  codep:0x224c parp:0xdd64 size:0x000a C-string:'UNK_0xdd64'
//      UNK_0xdd70  codep:0x224c parp:0xdd70 size:0x001a C-string:'UNK_0xdd70'
//      UNK_0xdd8c  codep:0x7394 parp:0xdd8c size:0x001e C-string:'UNK_0xdd8c'
//      UNK_0xddac  codep:0x7420 parp:0xddac size:0x0008 C-string:'UNK_0xddac'
//      UNK_0xddb6  codep:0x7420 parp:0xddb6 size:0x0003 C-string:'UNK_0xddb6'
//      UNK_0xddbb  codep:0x7420 parp:0xddbb size:0x0003 C-string:'UNK_0xddbb'
//      UNK_0xddc0  codep:0x7420 parp:0xddc0 size:0x0003 C-string:'UNK_0xddc0'
//      UNK_0xddc5  codep:0x7420 parp:0xddc5 size:0x0011 C-string:'UNK_0xddc5'
//      UNK_0xddd8  codep:0x7420 parp:0xddd8 size:0x0021 C-string:'UNK_0xddd8'
//      UNK_0xddfb  codep:0x7420 parp:0xddfb size:0x0003 C-string:'UNK_0xddfb'
//      UNK_0xde00  codep:0x7420 parp:0xde00 size:0x0003 C-string:'UNK_0xde00'
//      UNK_0xde05  codep:0x7420 parp:0xde05 size:0x0003 C-string:'UNK_0xde05'
//      UNK_0xde0a  codep:0x7420 parp:0xde0a size:0x0003 C-string:'UNK_0xde0a'
//      UNK_0xde0f  codep:0x7420 parp:0xde0f size:0x0003 C-string:'UNK_0xde0f'
//      UNK_0xde14  codep:0x7420 parp:0xde14 size:0x0003 C-string:'UNK_0xde14'
//      UNK_0xde19  codep:0x7420 parp:0xde19 size:0x0003 C-string:'UNK_0xde19'
//      UNK_0xde1e  codep:0x7420 parp:0xde1e size:0x0003 C-string:'UNK_0xde1e'
//      UNK_0xde23  codep:0x7420 parp:0xde23 size:0x0003 C-string:'UNK_0xde23'
//      UNK_0xde28  codep:0x7420 parp:0xde28 size:0x0003 C-string:'UNK_0xde28'
//      UNK_0xde2d  codep:0x7420 parp:0xde2d size:0x0003 C-string:'UNK_0xde2d'
//      UNK_0xde32  codep:0x7420 parp:0xde32 size:0x0003 C-string:'UNK_0xde32'
//      UNK_0xde37  codep:0x224c parp:0xde37 size:0x0010 C-string:'UNK_0xde37'
//      UNK_0xde49  codep:0x1d29 parp:0xde49 size:0x0004 C-string:'UNK_0xde49'
//      UNK_0xde4f  codep:0x1d29 parp:0xde4f size:0x0002 C-string:'UNK_0xde4f'
//      UNK_0xde53  codep:0x1d29 parp:0xde53 size:0x0004 C-string:'UNK_0xde53'
//      UNK_0xde59  codep:0x1d29 parp:0xde59 size:0x0002 C-string:'UNK_0xde59'
//      UNK_0xde5d  codep:0x224c parp:0xde5d size:0x001c C-string:'UNK_0xde5d'
//      UNK_0xde7b  codep:0x224c parp:0xde7b size:0x0008 C-string:'UNK_0xde7b'
//      UNK_0xde85  codep:0x224c parp:0xde85 size:0x0018 C-string:'UNK_0xde85'
//      UNK_0xde9f  codep:0x224c parp:0xde9f size:0x000e C-string:'UNK_0xde9f'
//      UNK_0xdeaf  codep:0x224c parp:0xdeaf size:0x001e C-string:'UNK_0xdeaf'
//      UNK_0xdecf  codep:0x224c parp:0xdecf size:0x005a C-string:'UNK_0xdecf'
//            X=-1  codep:0x4b3b parp:0xdf32 size:0x0010 C-string:'X_eq__dash_1'
//             X=0  codep:0x4b3b parp:0xdf4a size:0x0010 C-string:'X_eq_0'
//             X=1  codep:0x4b3b parp:0xdf62 size:0x0010 C-string:'X_eq_1'
//      KEY>ORIENT  codep:0x4b3b parp:0xdf81 size:0x0143 C-string:'KEY_gt_ORIENT'
//      UNK_0xe0c6  codep:0x1d29 parp:0xe0c6 size:0x0016 C-string:'UNK_0xe0c6'
//      UNK_0xe0de  codep:0x224c parp:0xe0de size:0x000a C-string:'UNK_0xe0de'
//      UNK_0xe0ea  codep:0x224c parp:0xe0ea size:0x005c C-string:'UNK_0xe0ea'
//      UNK_0xe148  codep:0x1d29 parp:0xe148 size:0x0002 C-string:'UNK_0xe148'
//      UNK_0xe14c  codep:0x1d29 parp:0xe14c size:0x0004 C-string:'UNK_0xe14c'
//      UNK_0xe152  codep:0x224c parp:0xe152 size:0x000e C-string:'UNK_0xe152'
//      UNK_0xe162  codep:0x224c parp:0xe162 size:0x0014 C-string:'UNK_0xe162'
//      UNK_0xe178  codep:0x224c parp:0xe178 size:0x0022 C-string:'UNK_0xe178'
//      UNK_0xe19c  codep:0x224c parp:0xe19c size:0x0048 C-string:'UNK_0xe19c'
//      UNK_0xe1e6  codep:0x2214 parp:0xe1e6 size:0x0002 C-string:'UNK_0xe1e6'
//      UNK_0xe1ea  codep:0x224c parp:0xe1ea size:0x0010 C-string:'UNK_0xe1ea'
//      UNK_0xe1fc  codep:0x224c parp:0xe1fc size:0x0040 C-string:'UNK_0xe1fc'
//      UNK_0xe23e  codep:0x224c parp:0xe23e size:0x000c C-string:'UNK_0xe23e'
//      UNK_0xe24c  codep:0x224c parp:0xe24c size:0x0014 C-string:'UNK_0xe24c'
//      UNK_0xe262  codep:0x224c parp:0xe262 size:0x001a C-string:'UNK_0xe262'
//      UNK_0xe27e  codep:0x224c parp:0xe27e size:0x001a C-string:'UNK_0xe27e'
//      UNK_0xe29a  codep:0x224c parp:0xe29a size:0x001a C-string:'UNK_0xe29a'
//      UNK_0xe2b6  codep:0x2214 parp:0xe2b6 size:0x0002 C-string:'UNK_0xe2b6'
//      UNK_0xe2ba  codep:0x2214 parp:0xe2ba size:0x0002 C-string:'UNK_0xe2ba'
//      UNK_0xe2be  codep:0x1d29 parp:0xe2be size:0x0002 C-string:'UNK_0xe2be'
//      UNK_0xe2c2  codep:0x7420 parp:0xe2c2 size:0x0003 C-string:'UNK_0xe2c2'
//      UNK_0xe2c7  codep:0x7420 parp:0xe2c7 size:0x0003 C-string:'UNK_0xe2c7'
//      UNK_0xe2cc  codep:0x7420 parp:0xe2cc size:0x0003 C-string:'UNK_0xe2cc'
//      UNK_0xe2d1  codep:0x7420 parp:0xe2d1 size:0x0003 C-string:'UNK_0xe2d1'
//      UNK_0xe2d6  codep:0x7420 parp:0xe2d6 size:0x0003 C-string:'UNK_0xe2d6'
//      UNK_0xe2db  codep:0x7420 parp:0xe2db size:0x0008 C-string:'UNK_0xe2db'
//      UNK_0xe2e5  codep:0x7420 parp:0xe2e5 size:0x0003 C-string:'UNK_0xe2e5'
//      UNK_0xe2ea  codep:0x7420 parp:0xe2ea size:0x0003 C-string:'UNK_0xe2ea'
//      UNK_0xe2ef  codep:0x7420 parp:0xe2ef size:0x0003 C-string:'UNK_0xe2ef'
//      UNK_0xe2f4  codep:0x7420 parp:0xe2f4 size:0x0003 C-string:'UNK_0xe2f4'
//      UNK_0xe2f9  codep:0x224c parp:0xe2f9 size:0x0004 C-string:'UNK_0xe2f9'
//      UNK_0xe2ff  codep:0x224c parp:0xe2ff size:0x0034 C-string:'UNK_0xe2ff'
//             C>C  codep:0x4b3b parp:0xe33b size:0x001a C-string:'C_gt_C'
//      UNK_0xe357  codep:0x224c parp:0xe357 size:0x0080 C-string:'UNK_0xe357'
//      SCALE>.MIS  codep:0x4b3b parp:0xe3e6 size:0x002c C-string:'SCALE_gt__dot_MIS'
//      UNK_0xe414  codep:0x224c parp:0xe414 size:0x000e C-string:'UNK_0xe414'
//      UNK_0xe424  codep:0x224c parp:0xe424 size:0x001c C-string:'UNK_0xe424'
//      UNK_0xe442  codep:0x224c parp:0xe442 size:0x000e C-string:'UNK_0xe442'
//      UNK_0xe452  codep:0x224c parp:0xe452 size:0x0046 C-string:'UNK_0xe452'
//      UNK_0xe49a  codep:0x224c parp:0xe49a size:0x0024 C-string:'UNK_0xe49a'
//      UNK_0xe4c0  codep:0x224c parp:0xe4c0 size:0x000e C-string:'UNK_0xe4c0'
//      UNK_0xe4d0  codep:0x224c parp:0xe4d0 size:0x001e C-string:'UNK_0xe4d0'
//      UNK_0xe4f0  codep:0x224c parp:0xe4f0 size:0x0024 C-string:'UNK_0xe4f0'
//      UNK_0xe516  codep:0x224c parp:0xe516 size:0x001e C-string:'UNK_0xe516'
//      UNK_0xe536  codep:0x224c parp:0xe536 size:0x0036 C-string:'UNK_0xe536'
//      UNK_0xe56e  codep:0x2214 parp:0xe56e size:0x0002 C-string:'UNK_0xe56e'
//      UNK_0xe572  codep:0x224c parp:0xe572 size:0x004a C-string:'UNK_0xe572'
//      UNK_0xe5be  codep:0x224c parp:0xe5be size:0x0052 C-string:'UNK_0xe5be'
//      UNK_0xe612  codep:0x224c parp:0xe612 size:0x0006 C-string:'UNK_0xe612'
//      UNK_0xe61a  codep:0x224c parp:0xe61a size:0x006a C-string:'UNK_0xe61a'
//      UNK_0xe686  codep:0x224c parp:0xe686 size:0x0008 C-string:'UNK_0xe686'
//      UNK_0xe690  codep:0x224c parp:0xe690 size:0x0072 C-string:'UNK_0xe690'
//      UNK_0xe704  codep:0x224c parp:0xe704 size:0x0016 C-string:'UNK_0xe704'
//      UNK_0xe71c  codep:0x224c parp:0xe71c size:0x000e C-string:'UNK_0xe71c'
//      UNK_0xe72c  codep:0x224c parp:0xe72c size:0x0026 C-string:'UNK_0xe72c'
//      UNK_0xe754  codep:0x224c parp:0xe754 size:0x000e C-string:'UNK_0xe754'
//      UNK_0xe764  codep:0x224c parp:0xe764 size:0x0042 C-string:'UNK_0xe764'
//      UNK_0xe7a8  codep:0x224c parp:0xe7a8 size:0x0042 C-string:'UNK_0xe7a8'
//      UNK_0xe7ec  codep:0x224c parp:0xe7ec size:0x0024 C-string:'UNK_0xe7ec'
//      UNK_0xe812  codep:0x224c parp:0xe812 size:0x002c C-string:'UNK_0xe812'
//      UNK_0xe840  codep:0x224c parp:0xe840 size:0x0010 C-string:'UNK_0xe840'
//      UNK_0xe852  codep:0x224c parp:0xe852 size:0x001a C-string:'UNK_0xe852'
//      UNK_0xe86e  codep:0x224c parp:0xe86e size:0x0014 C-string:'UNK_0xe86e'
//      UNK_0xe884  codep:0x224c parp:0xe884 size:0x0014 C-string:'UNK_0xe884'
//      UNK_0xe89a  codep:0x224c parp:0xe89a size:0x0024 C-string:'UNK_0xe89a'
//      UNK_0xe8c0  codep:0x224c parp:0xe8c0 size:0x002a C-string:'UNK_0xe8c0'
//      UNK_0xe8ec  codep:0x224c parp:0xe8ec size:0x000c C-string:'UNK_0xe8ec'
//      UNK_0xe8fa  codep:0x224c parp:0xe8fa size:0x0036 C-string:'UNK_0xe8fa'
//      UNK_0xe932  codep:0x224c parp:0xe932 size:0x000a C-string:'UNK_0xe932'
//      UNK_0xe93e  codep:0x224c parp:0xe93e size:0x0026 C-string:'UNK_0xe93e'
//      UNK_0xe966  codep:0x224c parp:0xe966 size:0x003a C-string:'UNK_0xe966'
//      UNK_0xe9a2  codep:0x224c parp:0xe9a2 size:0x01a1 C-string:'UNK_0xe9a2'
//      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x00fe C-string:'UNK_0xeb45'
//      UNK_0xec45  codep:0x224c parp:0xec45 size:0x001a C-string:'UNK_0xec45'
//      ?APPROACHI  codep:0x224c parp:0xec6e size:0x000a C-string:'_ask_APPROACHI'
//      UNK_0xec7a  codep:0x224c parp:0xec7a size:0x0068 C-string:'UNK_0xec7a'
//      UNK_0xece4  codep:0x224c parp:0xece4 size:0x000a C-string:'UNK_0xece4'
//              ?J  codep:0x224c parp:0xecf5 size:0x002c C-string:'_ask_J'
//        <COMBAT>  codep:0xaccc parp:0xed2e size:0x00e1 C-string:'_st_COMBAT_gt_'
//      UNK_0xee11  codep:0x224c parp:0xee11 size:0x005c C-string:'UNK_0xee11'
//      UNK_0xee6f  codep:0x224c parp:0xee6f size:0x001e C-string:'UNK_0xee6f'
//      UNK_0xee8f  codep:0x224c parp:0xee8f size:0x0076 C-string:'UNK_0xee8f'
//      UNK_0xef07  codep:0x224c parp:0xef07 size:0x0006 C-string:'UNK_0xef07'
//      UNK_0xef0f  codep:0x224c parp:0xef0f size:0x0012 C-string:'UNK_0xef0f'
//      UNK_0xef23  codep:0x224c parp:0xef23 size:0x000e C-string:'UNK_0xef23'
//      UNK_0xef33  codep:0x224c parp:0xef33 size:0x0014 C-string:'UNK_0xef33'
//      UNK_0xef49  codep:0x224c parp:0xef49 size:0x0032 C-string:'UNK_0xef49'
//      UNK_0xef7d  codep:0x224c parp:0xef7d size:0x001a C-string:'UNK_0xef7d'
//      UNK_0xef99  codep:0x224c parp:0xef99 size:0x0016 C-string:'UNK_0xef99'
//      UNK_0xefb1  codep:0x224c parp:0xefb1 size:0x0028 C-string:'UNK_0xefb1'
//      UNK_0xefdb  codep:0x224c parp:0xefdb size:0x0018 C-string:'UNK_0xefdb'
//          COMBAT  codep:0x224c parp:0xeffe size:0x0052 C-string:'COMBAT'
//      UNK_0xf052  codep:0x1d29 parp:0xf052 size:0x0020 C-string:'UNK_0xf052'
//      UNK_0xf074  codep:0x224c parp:0xf074 size:0x0034 C-string:'UNK_0xf074'
//      UNK_0xf0aa  codep:0x224c parp:0xf0aa size:0x000a C-string:'UNK_0xf0aa'
//      UNK_0xf0b6  codep:0x224c parp:0xf0b6 size:0x0022 C-string:'UNK_0xf0b6'
//      UNK_0xf0da  codep:0x224c parp:0xf0da size:0x000e C-string:'UNK_0xf0da'
//      UNK_0xf0ea  codep:0x224c parp:0xf0ea size:0x0016 C-string:'UNK_0xf0ea'
//      UNK_0xf102  codep:0x224c parp:0xf102 size:0x0026 C-string:'UNK_0xf102'
//      UNK_0xf12a  codep:0x224c parp:0xf12a size:0x0008 C-string:'UNK_0xf12a'
//      UNK_0xf134  codep:0x224c parp:0xf134 size:0x0022 C-string:'UNK_0xf134'
//      UNK_0xf158  codep:0x1d29 parp:0xf158 size:0x0004 C-string:'UNK_0xf158'
//      UNK_0xf15e  codep:0x224c parp:0xf15e size:0x0026 C-string:'UNK_0xf15e'
//      UNK_0xf186  codep:0x224c parp:0xf186 size:0x0042 C-string:'UNK_0xf186'
//      UNK_0xf1ca  codep:0x224c parp:0xf1ca size:0x0076 C-string:'UNK_0xf1ca'
//      UNK_0xf242  codep:0x224c parp:0xf242 size:0x000c C-string:'UNK_0xf242'
//      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0010 C-string:'UNK_0xf250'
//      UNK_0xf262  codep:0x224c parp:0xf262 size:0x000a C-string:'UNK_0xf262'
//      UNK_0xf26e  codep:0x224c parp:0xf26e size:0x001a C-string:'UNK_0xf26e'
//      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x002a C-string:'UNK_0xf28a'
//      UNK_0xf2b6  codep:0x224c parp:0xf2b6 size:0x0096 C-string:'UNK_0xf2b6'
//      UNK_0xf34e  codep:0x224c parp:0xf34e size:0x0058 C-string:'UNK_0xf34e'
//      UNK_0xf3a8  codep:0x224c parp:0xf3a8 size:0x000c C-string:'UNK_0xf3a8'
//      UNK_0xf3b6  codep:0x224c parp:0xf3b6 size:0x0082 C-string:'UNK_0xf3b6'
//      UNK_0xf43a  codep:0x224c parp:0xf43a size:0x006c C-string:'UNK_0xf43a'
//      UNK_0xf4a8  codep:0x224c parp:0xf4a8 size:0x003e C-string:'UNK_0xf4a8'
//             WAR  codep:0x224c parp:0xf4ee size:0x001c C-string:'WAR'
//        CLEAR-CO  codep:0x224c parp:0xf517 size:0x0030 C-string:'CLEAR_dash_CO'
//          (COMB)  codep:0x224c parp:0xf552 size:0x0000 C-string:'_ro_COMB_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xdd20 = 0xdd20; // UNK_0xdd20 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xdd24 = 0xdd24; // UNK_0xdd24 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdd28 = 0xdd28; // UNK_0xdd28 size: 4
// {0x56, 0x3a, 0x20, 0xde}

const unsigned short int pp_UNK_0xde49 = 0xde49; // UNK_0xde49 size: 4
// {0x56, 0x3a, 0x20, 0x53}

const unsigned short int pp_UNK_0xde4f = 0xde4f; // UNK_0xde4f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde53 = 0xde53; // UNK_0xde53 size: 4
// {0x56, 0x3a, 0x20, 0x20}

const unsigned short int pp_UNK_0xde59 = 0xde59; // UNK_0xde59 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe0c6 = 0xe0c6; // UNK_0xe0c6 size: 22
// {0x56, 0x3a, 0x20, 0x4f, 0x4c, 0x22, 0x98, 0x2a, 0x38, 0x0c, 0xbe, 0xe0, 0xc4, 0xe0, 0x38, 0x0c, 0x65, 0x10, 0x14, 0x40, 0x90, 0x16}

const unsigned short int pp_UNK_0xe148 = 0xe148; // UNK_0xe148 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe14c = 0xe14c; // UNK_0xe14c size: 4
// {0x56, 0x3a, 0x20, 0xca}

const unsigned short int pp_UNK_0xe2be = 0xe2be; // UNK_0xe2be size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xf052 = 0xf052; // UNK_0xf052 size: 32
// {0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00}

const unsigned short int pp_UNK_0xf158 = 0xf158; // UNK_0xf158 size: 4
// {0x56, 0x3a, 0x20, 0x00}


const unsigned short int cc_UNK_0xe1e6 = 0x001d; // UNK_0xe1e6
const unsigned short int cc_UNK_0xe2b6 = 0x0001; // UNK_0xe2b6
const unsigned short int cc_UNK_0xe2ba = 0x0000; // UNK_0xe2ba
const unsigned short int cc_UNK_0xe56e = 0x0000; // UNK_0xe56e


// 0xdd12: db 0x86 0x01 '  '

// ================================================
// 0xdd14: WORD 'UNK_0xdd16' codep=0x224c parp=0xdd16
// ================================================

void UNK_0xdd16() // UNK_0xdd16
{
  Push2Words("*MISS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xdd1e: WORD 'UNK_0xdd20' codep=0x1d29 parp=0xdd20
// ================================================
// 0xdd20: db 0x00 0x00 '  '

// ================================================
// 0xdd22: WORD 'UNK_0xdd24' codep=0x1d29 parp=0xdd24
// ================================================
// 0xdd24: db 0x3a 0x20 ': '

// ================================================
// 0xdd26: WORD 'UNK_0xdd28' codep=0x1d29 parp=0xdd28
// ================================================
// 0xdd28: db 0x56 0x3a 0x20 0xde 'V:  '

// ================================================
// 0xdd2c: WORD 'UNK_0xdd2e' codep=0x224c parp=0xdd2e
// ================================================

void UNK_0xdd2e() // UNK_0xdd2e
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}

// 0xdd34: db 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x90 0x16 'L". ] d  K  '

// ================================================
// 0xdd40: WORD 'UNK_0xdd42' codep=0x224c parp=0xdd42
// ================================================

void UNK_0xdd42() // UNK_0xdd42
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xdd4a: WORD 'UNK_0xdd4c' codep=0x224c parp=0xdd4c
// ================================================

void UNK_0xdd4c() // UNK_0xdd4c
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdd5a: WORD 'UNK_0xdd5c' codep=0x224c parp=0xdd5c
// ================================================

void UNK_0xdd5c() // UNK_0xdd5c
{
  _at_IX(); // @IX
  _at_IY(); // @IY
}


// ================================================
// 0xdd62: WORD 'UNK_0xdd64' codep=0x224c parp=0xdd64
// ================================================

void UNK_0xdd64() // UNK_0xdd64
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdd6e: WORD 'UNK_0xdd70' codep=0x224c parp=0xdd70
// ================================================

void UNK_0xdd70() // UNK_0xdd70
{
  _at_ID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
}

// 0xdd7e: db 0x14 0x22 0x19 0x00 0x94 0x73 0x19 0x0b 0x01 0x24 0x5d 0x6b ' "   s   $]k'

// ================================================
// 0xdd8a: WORD 'UNK_0xdd8c' codep=0x7394 parp=0xdd8c
// ================================================
// 0xdd8c: db 0x19 0x0e 0x02 0x24 0x5d 0x6b 0x94 0x73 0x19 0x13 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x12 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x14 0x01 0x24 0x5d 0x6b '   $]k s   $]k s   $]k s   $]k'

// ================================================
// 0xddaa: WORD 'UNK_0xddac' codep=0x7420 parp=0xddac
// ================================================
// 0xddac: db 0x19 0x0c 0x01 0x20 0x74 0x19 0x12 0x02 '    t   '

// ================================================
// 0xddb4: WORD 'UNK_0xddb6' codep=0x7420 parp=0xddb6
// ================================================
// 0xddb6: db 0x19 0x14 0x02 '   '

// ================================================
// 0xddb9: WORD 'UNK_0xddbb' codep=0x7420 parp=0xddbb
// ================================================
// 0xddbb: db 0x19 0x11 0x01 '   '

// ================================================
// 0xddbe: WORD 'UNK_0xddc0' codep=0x7420 parp=0xddc0
// ================================================
// 0xddc0: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xddc3: WORD 'UNK_0xddc5' codep=0x7420 parp=0xddc5
// ================================================
// 0xddc5: db 0x14 0x14 0x01 0x14 0x22 0x14 0x00 0x20 0x74 0x14 0x11 0x01 0x20 0x74 0x14 0x12 0x01 '    "   t    t   '

// ================================================
// 0xddd6: WORD 'UNK_0xddd8' codep=0x7420 parp=0xddd8
// ================================================
// 0xddd8: db 0x14 0x13 0x01 0x20 0x74 0x14 0x14 0x01 0x20 0x74 0x14 0x15 0x01 0x20 0x74 0x14 0x16 0x01 0x20 0x74 0x14 0x17 0x01 0x20 0x74 0x14 0x18 0x01 0x20 0x74 0x14 0x19 0x01 '    t    t    t    t    t    t   '

// ================================================
// 0xddf9: WORD 'UNK_0xddfb' codep=0x7420 parp=0xddfb
// ================================================
// 0xddfb: db 0x14 0x1a 0x01 '   '

// ================================================
// 0xddfe: WORD 'UNK_0xde00' codep=0x7420 parp=0xde00
// ================================================
// 0xde00: db 0x14 0x1b 0x01 '   '

// ================================================
// 0xde03: WORD 'UNK_0xde05' codep=0x7420 parp=0xde05
// ================================================
// 0xde05: db 0x14 0x1c 0x01 '   '

// ================================================
// 0xde08: WORD 'UNK_0xde0a' codep=0x7420 parp=0xde0a
// ================================================
// 0xde0a: db 0x14 0x1d 0x01 '   '

// ================================================
// 0xde0d: WORD 'UNK_0xde0f' codep=0x7420 parp=0xde0f
// ================================================
// 0xde0f: db 0x14 0x1e 0x01 '   '

// ================================================
// 0xde12: WORD 'UNK_0xde14' codep=0x7420 parp=0xde14
// ================================================
// 0xde14: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xde17: WORD 'UNK_0xde19' codep=0x7420 parp=0xde19
// ================================================
// 0xde19: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xde1c: WORD 'UNK_0xde1e' codep=0x7420 parp=0xde1e
// ================================================
// 0xde1e: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xde21: WORD 'UNK_0xde23' codep=0x7420 parp=0xde23
// ================================================
// 0xde23: db 0x14 0x25 0x02 ' % '

// ================================================
// 0xde26: WORD 'UNK_0xde28' codep=0x7420 parp=0xde28
// ================================================
// 0xde28: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xde2b: WORD 'UNK_0xde2d' codep=0x7420 parp=0xde2d
// ================================================
// 0xde2d: db 0x11 0x17 0x03 '   '

// ================================================
// 0xde30: WORD 'UNK_0xde32' codep=0x7420 parp=0xde32
// ================================================
// 0xde32: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xde35: WORD 'UNK_0xde37' codep=0x224c parp=0xde37
// ================================================

void UNK_0xde37() // UNK_0xde37
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
// 0xde47: WORD 'UNK_0xde49' codep=0x1d29 parp=0xde49
// ================================================
// 0xde49: db 0x56 0x3a 0x20 0x53 'V: S'

// ================================================
// 0xde4d: WORD 'UNK_0xde4f' codep=0x1d29 parp=0xde4f
// ================================================
// 0xde4f: db 0x3a 0x20 ': '

// ================================================
// 0xde51: WORD 'UNK_0xde53' codep=0x1d29 parp=0xde53
// ================================================
// 0xde53: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xde57: WORD 'UNK_0xde59' codep=0x1d29 parp=0xde59
// ================================================
// 0xde59: db 0x00 0x00 '  '

// ================================================
// 0xde5b: WORD 'UNK_0xde5d' codep=0x224c parp=0xde5d
// ================================================

void UNK_0xde5d() // UNK_0xde5d
{
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xde79: WORD 'UNK_0xde7b' codep=0x224c parp=0xde7b
// ================================================

void UNK_0xde7b() // UNK_0xde7b
{
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xde83: WORD 'UNK_0xde85' codep=0x224c parp=0xde85
// ================================================

void UNK_0xde85() // UNK_0xde85
{
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xde9d: WORD 'UNK_0xde9f' codep=0x224c parp=0xde9f
// ================================================

void UNK_0xde9f() // UNK_0xde9f
{

  label1:
  Push(cc__dash_1); // -1
  Push(2); // 2
  RRND(); // RRND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xdead: WORD 'UNK_0xdeaf' codep=0x224c parp=0xdeaf
// ================================================

void UNK_0xdeaf() // UNK_0xdeaf
{
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0xfffa);
  Push(0x0006);
  RRND(); // RRND
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xdecd: WORD 'UNK_0xdecf' codep=0x224c parp=0xdecf
// ================================================

void UNK_0xdecf() // UNK_0xdecf
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push2Words("0.");
  return;

  label1:
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label2:
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label3:
  R_gt_(); // R>
}

// 0xdf09: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x19 0x00 0x5f 0x12 0x90 0x16 0x4c 0x22 0x09 0xdf 0xfa 0x15 0x08 0x00 0xbe 0xdd 0x60 0x16 0x04 0x00 0x26 0xde 0x92 0x0c 0x90 0x16 'L""u]   _   L"        `   &     '

// ================================================
// 0xdf29: WORD 'X=-1' codep=0x4b3b parp=0xdf32
// ================================================
// 0xdf32: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0x91 0x3b 0x01 0x00 0x81 0x3b 0x00 0x00 0x89 0x3b '  n:   ;   ;   ;'

// ================================================
// 0xdf42: WORD 'X=0' codep=0x4b3b parp=0xdf4a
// ================================================
// 0xdf4a: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0x99 0x3b 0x01 0x00 0x3f 0x0f 0x00 0x00 0x17 0xdf '  n:   ;  ?     '

// ================================================
// 0xdf5a: WORD 'X=1' codep=0x4b3b parp=0xdf62
// ================================================
// 0xdf62: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0xa1 0x3b 0x01 0x00 0x30 0x0f 0x00 0x00 0x22 0x0f '  n:   ;  0   " '

// ================================================
// 0xdf72: WORD 'KEY>ORIENT' codep=0x4b3b parp=0xdf81
// ================================================
// 0xdf81: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0x32 0xdf 0x00 0x00 0x4a 0xdf 0x01 0x00 0x62 0xdf 0x4c 0x22 0x57 0xde 0xae 0x0b 0xdd 0x4a 0x52 0x56 0xae 0x0b 0x87 0x3b 0x2d 0x12 0xf5 0x12 0x41 0x0e 0x57 0xde 0x16 0x6d 0x90 0x16 0x4c 0x22 0x34 0xdd 0x7f 0x3b 0x46 0x12 0x90 0x16 0x4c 0x22 0x5a 0xdd 0x4a 0xdd 0x5b 0xde 0x7f 0x3b 0x46 0x12 0x90 0x16 0x4c 0x22 0xef 0x64 0x2f 0x7a 0x97 0x3b 0x46 0x75 0xdf 0x79 0x90 0x16 0x4c 0x22 0xef 0x64 0x2f 0x7a 0x34 0x75 0x7f 0x3b 0x97 0x3b 0x25 0x40 0xdf 0x79 0x90 0x16 0x4c 0x22 0x9e 0x51 0x9a 0xdd 0x92 0x0c 0xdd 0x4a 0xf5 0x12 0x90 0x16 0x4c 0x22 0x9e 0x51 0xa2 0xdd 0x92 0x0c 0xdd 0x4a 0xf5 0x12 0x90 0x16 0x4c 0x22 0x9e 0x51 0x92 0xdd 0x92 0x0c 0xdd 0x4a 0xf5 0x12 0x90 0x16 0x4c 0x22 0xa7 0x53 0x8f 0x3b 0xc4 0x0f 0x90 0x16 0x4c 0x22 0x82 0xdd 0x92 0x0c 0x0d 0xe0 0x41 0x0e 0xfa 0x15 0x10 0x00 0x97 0x3b 0xb3 0x0f 0x5d 0x17 0x5a 0x00 0xad 0x11 0x34 0xdd 0x46 0x12 0x90 0x16 0x4c 0x22 0x82 0xdd 0x92 0x0c 0x0d 0xe0 0x41 0x0e 0xfa 0x15 0x10 0x00 0xa7 0x3b 0xb3 0x0f 0x5d 0x17 0x5a 0x00 0xad 0x11 0x34 0xdd 0x46 0x12 0x90 0x16 0x4c 0x22 0x14 0xdd 0xc3 0x51 0xd1 0xdf 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x1d 0x00 0x9f 0x3b 0x4c 0x7e 0x89 0x12 0xf5 0x12 0xc3 0xdf 0x76 0x59 0xae 0x0b 0x89 0x12 0xf5 0x12 0xfa 0x15 0x10 0x00 0xe2 0x7a 0x5d 0x17 0x1d 0x00 0x97 0x3b 0x4c 0x7e 0x89 0x12 0xf5 0x12 0x3d 0x0f 0x0a 0x7a 0x17 0xe0 0xf5 0x12 0x90 0x16 0x20 0x74 0x34 0x0c 0x01 0x4c 0x22 0xb9 0x5f 0xae 0x0b 0xdd 0x4a 0x90 0x16 0x4c 0x22 0x34 0xdd 0x5d 0x17 0x46 0x00 0x46 0x12 0x90 0x16 0x4c 0x22 0xef 0x64 0x83 0x4a 0x1f 0x7a 0x91 0xe0 0x92 0x0c 0xdf 0x79 0xdd 0x4a 0x90 0x16 0x74 0x3b 0x01 0x00 0xc0 0xd4 '  n:  2   J   b L"W    JRV   ;-   A W  m  L"4 ;F   L"Z J [ ;F   L" d/z ;Fu y  L" d/z4u; ;%@ y  L" Q     J    L" Q     J    L" Q     J    L" S ;    L"      A      ;  ] Z   4 F   L"      A      ;  ] Z   4 F   L"   Q      ]    ;L~      vY           z]    ;L~    =  z       t4  L" _   J  L"4 ] F F   L" d J z     y J  t;    '

// ================================================
// 0xe0c4: WORD 'UNK_0xe0c6' codep=0x1d29 parp=0xe0c6
// ================================================
// 0xe0c6: db 0x56 0x3a 0x20 0x4f 0x4c 0x22 0x98 0x2a 0x38 0x0c 0xbe 0xe0 0xc4 0xe0 0x38 0x0c 0x65 0x10 0x14 0x40 0x90 0x16 'V: OL" *8     8 e  @  '

// ================================================
// 0xe0dc: WORD 'UNK_0xe0de' codep=0x224c parp=0xe0de
// ================================================

void UNK_0xe0de() // UNK_0xe0de
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe0c6); // UNK_0xe0c6 size: 0
  D_ex_(); // D!
}


// ================================================
// 0xe0e8: WORD 'UNK_0xe0ea' codep=0x224c parp=0xe0ea
// ================================================

void UNK_0xe0ea() // UNK_0xe0ea
{
  Push(0x65ed); // IFIELD(UNK_0xddac)
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
}

// 0xe0f2: db 0x14 0x22 0x0b 0x00 0x14 0x22 0x05 0x00 0x4c 0x22 0xb4 0x0d 0x62 0xdd 0x4a 0xdd 0xb3 0x0e 0x92 0x0f 0x58 0x10 0xa2 0x0e 0x46 0x12 0xb4 0x0d 0x92 0x0f 0x58 0x10 0x90 0x0e 0xf2 0x0e 0x90 0x0e 0x46 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0xf2 0xe0 0xfa 0xe0 0x07 0x13 0x90 0x16 0x4c 0x22 0xf6 0xe0 0xfa 0xe0 0x5d 0x17 0x1d 0x00 0x46 0x75 0x3e 0x13 0x90 0x16 0x4c 0x22 0x1e 0xe1 0x07 0x13 0x28 0xe1 0x07 0x13 0xf5 0x12 0x90 0x16 ' "   "  L"  b J     X   F     X       F     L"        L"    ]   Fu>   L"    (       '

// ================================================
// 0xe146: WORD 'UNK_0xe148' codep=0x1d29 parp=0xe148
// ================================================
// 0xe148: db 0x3a 0x20 ': '

// ================================================
// 0xe14a: WORD 'UNK_0xe14c' codep=0x1d29 parp=0xe14c
// ================================================
// 0xe14c: db 0x56 0x3a 0x20 0xca 'V:  '

// ================================================
// 0xe150: WORD 'UNK_0xe152' codep=0x224c parp=0xe152
// ================================================

void UNK_0xe152() // UNK_0xe152
{
  Push(pp_UNK_0xe148); // UNK_0xe148 size: 0
  _st__ex__gt_(); // <!>
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe14c); // UNK_0xe14c size: 0
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe160: WORD 'UNK_0xe162' codep=0x224c parp=0xe162
// ================================================

void UNK_0xe162() // UNK_0xe162
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe14c); // UNK_0xe14c size: 0
  _2_at_(); // 2@
  Push(pp_UNK_0xe148); // UNK_0xe148 size: 0
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe176: WORD 'UNK_0xe178' codep=0x224c parp=0xe178
// ================================================

void UNK_0xe178() // UNK_0xe178
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(0x65fd); // IFIELD(UNK_0xde05)
  UNK_0xde7b(); // UNK_0xde7b
  _gt_FLAG(); // >FLAG
  Push(0x65fd); // IFIELD(UNK_0xde05)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(0x65fc); // IFIELD(UNK_0xde00)
  UNK_0xde85(); // UNK_0xde85
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe19a: WORD 'UNK_0xe19c' codep=0x224c parp=0xe19c
// ================================================

void UNK_0xe19c() // UNK_0xe19c
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(0x65ff); // IFIELD(UNK_0xde0f)
  UNK_0xde7b(); // UNK_0xde7b
  _gt_FLAG(); // >FLAG
  Push(0x65ff); // IFIELD(UNK_0xde0f)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(0x65fe); // IFIELD(UNK_0xde0a)
  UNK_0xde85(); // UNK_0xde85
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}

// 0xe1be: db 0x4c 0x22 0x52 0x56 0x92 0x0c 0x2e 0x0f 0x5f 0x12 0x90 0x16 0x4c 0x22 0x52 0x56 0x92 0x0c 0xa7 0x3b 0x5f 0x12 0x90 0x16 0x4c 0x22 0x52 0x56 0x92 0x0c 0x5d 0x17 0x10 0x00 0x5f 0x12 0x90 0x16 'L"RV  . _   L"RV   ;_   L"RV  ]   _   '

// ================================================
// 0xe1e4: WORD 'UNK_0xe1e6' codep=0x2214 parp=0xe1e6
// ================================================
// 0xe1e6: db 0x1d 0x00 '  '

// ================================================
// 0xe1e8: WORD 'UNK_0xe1ea' codep=0x224c parp=0xe1ea
// ================================================

void UNK_0xe1ea() // UNK_0xe1ea
{
  Push(pp__n_MISS); // #MISS size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  Push(pp__n_MISS); // #MISS size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xe1fa: WORD 'UNK_0xe1fc' codep=0x224c parp=0xe1fc
// ================================================

void UNK_0xe1fc() // UNK_0xe1fc
{
  Push(1); // 1
  Push(pp__n_MISS); // #MISS size: 2
  _plus__ex__2(); // +!_2
  Push(pp__n_MISS); // #MISS size: 2
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xe1e6); // UNK_0xe1e6
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe1ea(); // UNK_0xe1ea
  UNK_0xdd16(); // UNK_0xdd16
  ILAST(); // ILAST
  IDELETE(); // IDELETE
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}

// 0xe21c: db 0x29 0x1d 0x00 0x00 0x4c 0x22 0x34 0xdd 0x5d 0x17 0x5a 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x1c 0xe2 0xb8 0x3b 0x53 0x13 0x1c 0xe2 0xae 0x0b 0xdd 0x4a 0x90 0x16 ')   L"4 ] Z F        ;S      J  '

// ================================================
// 0xe23c: WORD 'UNK_0xe23e' codep=0x224c parp=0xe23e
// ================================================

void UNK_0xe23e() // UNK_0xe23e
{
  Push(0x6626); // IFIELD(UNK_0xde19)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe24a: WORD 'UNK_0xe24c' codep=0x224c parp=0xe24c
// ================================================

void UNK_0xe24c() // UNK_0xe24c
{
  Push(0x6611); // IFIELD(UNK_0xde14)
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  UNK_0xe23e(); // UNK_0xe23e
  Push(Pop() & Pop()); // AND
  Push(pp__ask_NEB); // ?NEB size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe260: WORD 'UNK_0xe262' codep=0x224c parp=0xe262
// ================================================

void UNK_0xe262() // UNK_0xe262
{
  Push(pp__n_AUX); // #AUX size: 2
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xc0a1);
  return;

  label1:
  Push(0xc090);
}


// ================================================
// 0xe27c: WORD 'UNK_0xe27e' codep=0x224c parp=0xe27e
// ================================================

void UNK_0xe27e() // UNK_0xe27e
{
  Push(pp__n_AUX); // #AUX size: 2
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xbcb8);
  return;

  label1:
  Push(0xbc98);
}


// ================================================
// 0xe298: WORD 'UNK_0xe29a' codep=0x224c parp=0xe29a
// ================================================

void UNK_0xe29a() // UNK_0xe29a
{
  Push(0x6613); // IFIELD(UNK_0xde1e)
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  UNK_0xe24c(); // UNK_0xe24c
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe262(); // UNK_0xe262
  goto label2;

  label1:
  UNK_0xe27e(); // UNK_0xe27e

  label2:
  MODULE(); // MODULE
}


// ================================================
// 0xe2b4: WORD 'UNK_0xe2b6' codep=0x2214 parp=0xe2b6
// ================================================
// 0xe2b6: db 0x01 0x00 '  '

// ================================================
// 0xe2b8: WORD 'UNK_0xe2ba' codep=0x2214 parp=0xe2ba
// ================================================
// 0xe2ba: db 0x00 0x00 '  '

// ================================================
// 0xe2bc: WORD 'UNK_0xe2be' codep=0x1d29 parp=0xe2be
// ================================================
// 0xe2be: db 0x00 0x00 '  '

// ================================================
// 0xe2c0: WORD 'UNK_0xe2c2' codep=0x7420 parp=0xe2c2
// ================================================
// 0xe2c2: db 0x1d 0x0b 0x04 '   '

// ================================================
// 0xe2c5: WORD 'UNK_0xe2c7' codep=0x7420 parp=0xe2c7
// ================================================
// 0xe2c7: db 0x1d 0x0f 0x04 '   '

// ================================================
// 0xe2ca: WORD 'UNK_0xe2cc' codep=0x7420 parp=0xe2cc
// ================================================
// 0xe2cc: db 0x1d 0x13 0x02 '   '

// ================================================
// 0xe2cf: WORD 'UNK_0xe2d1' codep=0x7420 parp=0xe2d1
// ================================================
// 0xe2d1: db 0x1d 0x15 0x02 '   '

// ================================================
// 0xe2d4: WORD 'UNK_0xe2d6' codep=0x7420 parp=0xe2d6
// ================================================
// 0xe2d6: db 0x1d 0x17 0x02 '   '

// ================================================
// 0xe2d9: WORD 'UNK_0xe2db' codep=0x7420 parp=0xe2db
// ================================================
// 0xe2db: db 0x1d 0x1b 0x02 0x20 0x74 0x1d 0x1f 0x02 '    t   '

// ================================================
// 0xe2e3: WORD 'UNK_0xe2e5' codep=0x7420 parp=0xe2e5
// ================================================
// 0xe2e5: db 0x1d 0x21 0x01 ' ! '

// ================================================
// 0xe2e8: WORD 'UNK_0xe2ea' codep=0x7420 parp=0xe2ea
// ================================================
// 0xe2ea: db 0x1d 0x22 0x02 ' " '

// ================================================
// 0xe2ed: WORD 'UNK_0xe2ef' codep=0x7420 parp=0xe2ef
// ================================================
// 0xe2ef: db 0x1d 0x24 0x02 ' $ '

// ================================================
// 0xe2f2: WORD 'UNK_0xe2f4' codep=0x7420 parp=0xe2f4
// ================================================
// 0xe2f4: db 0x1d 0x26 0x03 ' & '

// ================================================
// 0xe2f7: WORD 'UNK_0xe2f9' codep=0x224c parp=0xe2f9
// ================================================

void UNK_0xe2f9() // UNK_0xe2f9
{
  _at_INST_dash_S(); // @INST-S
}


// ================================================
// 0xe2fd: WORD 'UNK_0xe2ff' codep=0x224c parp=0xe2ff
// ================================================

void UNK_0xe2ff() // UNK_0xe2ff
{
  UNK_0xdd16(); // UNK_0xdd16

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE
  goto label2;

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Push(pp__n_MISS); // #MISS size: 2
  _099(); // 099
  SAVE_dash_OV(); // SAVE-OV
}

// 0xe31b: db 0x4c 0x22 0xe3 0xe2 0x92 0x0c 0xb8 0xe2 0x5f 0x12 0xfa 0x15 0x08 0x00 0xd5 0x4f 0x60 0x16 0x04 0x00 0x26 0x50 0x90 0x16 'L"      _      O`   &P  '

// ================================================
// 0xe333: WORD 'C>C' codep=0x4b3b parp=0xe33b
// ================================================
// 0xe33b: db 0x03 0x00 0x1d 0xe3 0x06 0x00 0x55 0x50 0x07 0x00 0xe3 0x4f 0x0a 0x00 0x32 0x50 0x4c 0x22 0xf7 0xe2 0x39 0xe3 0x9d 0x86 0x90 0x16 '      UP   O  2PL"  9     '

// ================================================
// 0xe355: WORD 'UNK_0xe357' codep=0x224c parp=0xe357
// ================================================

void UNK_0xe357() // UNK_0xe357
{
  Push(0x65ec); // IFIELD(UNK_0xe2c2)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(UNK_0xe2c7)
  Push(Read16(Pop())); // @
}

// 0xe361: db 0x4c 0x22 0xca 0xe2 0xae 0x0b 0xcf 0xe2 0xae 0x0b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x01 0x2e 0x90 0x16 0x4c 0x22 0x8f 0x8a 0xdc 0x1b 0x01 0x2e 0x7e 0x8a 0x90 0x16 0x4c 0x22 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x2b 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x2a 0x90 0x16 0x4c 0x22 0x46 0x5a 0xae 0x0b 0xe7 0x0f 0x3b 0x5a 0xae 0x0b 0xf6 0x0f 0xb3 0x0e 0xfa 0x15 0x0a 0x00 0x8f 0x3b 0x72 0x89 0x60 0x16 0x06 0x00 0x87 0x3b 0x72 0x89 0x90 0x16 0x4c 0x22 0xc0 0xe2 0xae 0x0b 0x3d 0x0f 0x9f 0x11 0xf7 0xe2 0x97 0x3b 0xa7 0x3b 0x25 0x40 0xfa 0x15 0x08 0x00 0x95 0xe3 0x60 0x16 0x04 0x00 0x81 0xe3 0x90 0x16 'L"          L"   .  L"     .~   L"       +`      *  L"FZ    ;Z           ;r `    ;r   L"    =      ; ;%@      `       '

// ================================================
// 0xe3d7: WORD 'SCALE>.MIS' codep=0x4b3b parp=0xe3e6
// ================================================
// 0xe3e6: db 0x03 0x00 0x48 0x3a 0x02 0x00 0x6f 0xe3 0x04 0x00 0x77 0xe3 0x08 0x00 0xb9 0xe3 0x4c 0x22 0x55 0xe3 0xd3 0x92 0x17 0x93 0xf2 0x0e 0x7f 0x3b 0x72 0x0f 0xf2 0x0e 0x7b 0x9a 0x4b 0xe3 0x20 0x64 0xae 0x0b 0xe4 0xe3 0x90 0x16 '  H:  o   w     L"U       ;r   { K  d      '

// ================================================
// 0xe412: WORD 'UNK_0xe414' codep=0x224c parp=0xe414
// ================================================

void UNK_0xe414() // UNK_0xe414
{
  UNK_0xdd16(); // UNK_0xdd16
  Push(0xe3f8);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe422: WORD 'UNK_0xe424' codep=0x224c parp=0xe424
// ================================================

void UNK_0xe424() // UNK_0xe424
{
  Push(0x6602); // IFIELD(UNK_0xe2e5)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_UNK_0xe2ba); // UNK_0xe2ba
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push2Words("*SHIP");
  goto label2;

  label1:
  Push(pp_UNK_0xdd28); // UNK_0xdd28 size: 0
  _2_at_(); // 2@

  label2:
  Push(0x6607); // IFIELD(UNK_0xe2f4)
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe440: WORD 'UNK_0xe442' codep=0x224c parp=0xe442
// ================================================

void UNK_0xe442() // UNK_0xe442
{
  _gt_R(); // >R
  Push(0); // 0
  SWAP(); // SWAP
  Push(1); // 1
  R_gt_(); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xe450: WORD 'UNK_0xe452' codep=0x224c parp=0xe452
// ================================================

void UNK_0xe452() // UNK_0xe452
{
  Push(0x65f4); // IFIELD(UNK_0xe2cc)
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(UNK_0xe2c2)
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(0x65f6); // IFIELD(UNK_0xe2d1)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(UNK_0xe2c7)
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  _gt_R(); // >R
  R_at_(); // R@
  UNK_0xe442(); // UNK_0xe442
  Push(0x65fc); // IFIELD(UNK_0xe2db)
  _2_ex__2(); // 2!_2
  R_gt_(); // R>
  UNK_0xe442(); // UNK_0xe442
  Push(0x65f8); // IFIELD(UNK_0xe2d6)
  _2_ex__2(); // 2!_2
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  Push(0x65ec); // IFIELD(UNK_0xe2c2)
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x65f0); // IFIELD(UNK_0xe2c7)
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe498: WORD 'UNK_0xe49a' codep=0x224c parp=0xe49a
// ================================================

void UNK_0xe49a() // UNK_0xe49a
{
  Push(pp_IINDEX); // IINDEX size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_I(); // POINT>I
  _dot_ICON(); // .ICON
  i++;
  } while(i<imax); // (LOOP) 0xfff8


  label1:
  R_gt_(); // R>
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe4be: WORD 'UNK_0xe4c0' codep=0x224c parp=0xe4c0
// ================================================

void UNK_0xe4c0() // UNK_0xe4c0
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR size: 4
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe4ce: WORD 'UNK_0xe4d0' codep=0x224c parp=0xe4d0
// ================================================

void UNK_0xe4d0() // UNK_0xe4d0
{
  Push(0x65f0); // IFIELD(UNK_0xe2c7)
  _2_at_(); // 2@
  Push(0x65fc); // IFIELD(UNK_0xe2db)
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x65f0); // IFIELD(UNK_0xe2c7)
  _2_ex__2(); // 2!_2
  Push(0x65ec); // IFIELD(UNK_0xe2c2)
  _2_at_(); // 2@
  Push(0x65f8); // IFIELD(UNK_0xe2d6)
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x65ec); // IFIELD(UNK_0xe2c2)
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe4ee: WORD 'UNK_0xe4f0' codep=0x224c parp=0xe4f0
// ================================================

void UNK_0xe4f0() // UNK_0xe4f0
{
  Push(pp__ask_NEB); // ?NEB size: 2
  Push(Read16(Pop())); // @
  Push(pp__ask_UF); // ?UF size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _ask_CGA(); // ?CGA
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  NBCLR(); // NBCLR
  goto label2;

  label1:
  SetColor("BLACK");

  label2:
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
}


// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  Push(pp__ask_AF); // ?AF size: 2
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe4c0(); // UNK_0xe4c0
  _gt_MAINVI(); // >MAINVI
  UNK_0xe4f0(); // UNK_0xe4f0
  UNK_0xe414(); // UNK_0xe414
  UNK_0xe49a(); // UNK_0xe49a
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe534: WORD 'UNK_0xe536' codep=0x224c parp=0xe536
// ================================================

void UNK_0xe536() // UNK_0xe536
{
  Push(pp__at__co_0_star_1_sc_); // @,0*1; size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x03e8);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BEEPON_2(); // BEEPON_2
  Push(i); // I
  TONE(); // TONE
  DISPLAY(); // DISPLAY
  Push(0x000c);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  Push(0x0014);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe56c: WORD 'UNK_0xe56e' codep=0x2214 parp=0xe56e
// ================================================
// 0xe56e: db 0x00 0x00 '  '

// ================================================
// 0xe570: WORD 'UNK_0xe572' codep=0x224c parp=0xe572
// ================================================

void UNK_0xe572() // UNK_0xe572
{
  Push(0x0064);
  Push(0x03e8);
  Push(pp_COLOR); // COLOR size: 2
  Push(Read16(Pop())); // @
  SetColor("RED");
  _eq_(); // =
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(0xe56e);
  _ex__2(); // !_2
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP

  label1:

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BEEPON_2(); // BEEPON_2
  Push(i); // I
  Push(i); // I
  Push(Pop()*2); // 2*
  RRND(); // RRND
  TONE(); // TONE
  Push(cc__3); // 3
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  Push(cc_UNK_0xe56e); // UNK_0xe56e
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe5bc: WORD 'UNK_0xe5be' codep=0x224c parp=0xe5be
// ================================================

void UNK_0xe5be() // UNK_0xe5be
{
  UNK_0xe1fc(); // UNK_0xe1fc
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(0x001d);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  Push2Words("*MISS");
  IINSERT(); // IINSERT
  UNK_0xdd16(); // UNK_0xdd16
  Push(0x6602); // IFIELD(UNK_0xe2e5)
  C_ex__2(); // C!_2
  UNK_0xe424(); // UNK_0xe424
  Push(0x65f6); // IFIELD(UNK_0xe2d1)
  _ex__2(); // !_2
  Push(0x65f4); // IFIELD(UNK_0xe2cc)
  _ex__2(); // !_2
  Push(0x65f0); // IFIELD(UNK_0xe2c7)
  _ex__2(); // !_2
  Push(0x65ec); // IFIELD(UNK_0xe2c2)
  _ex__2(); // !_2
  UNK_0xe452(); // UNK_0xe452
  Push(0x6603); // IFIELD(UNK_0xe2ea)
  _099(); // 099
  R_gt_(); // R>
  Push(cc__7); // 7
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x0060);
  goto label2;

  label1:
  Push(0x7fff);

  label2:
  Push(0x6605); // IFIELD(UNK_0xe2ef)
  _ex__2(); // !_2
  UNK_0xe536(); // UNK_0xe536
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe610: WORD 'UNK_0xe612' codep=0x224c parp=0xe612
// ================================================

void UNK_0xe612() // UNK_0xe612
{
  IDELETE(); // IDELETE
  UNK_0xe1ea(); // UNK_0xe1ea
}


// ================================================
// 0xe618: WORD 'UNK_0xe61a' codep=0x224c parp=0xe61a
// ================================================

void UNK_0xe61a() // UNK_0xe61a
{
  UNK_0xe357(); // UNK_0xe357
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0); // 0
  OVER(); // OVER
  _gt_R(); // >R
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  POINT_gt_I(); // POINT>I
  Push(0x6602); // IFIELD(UNK_0xe2e5)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_UNK_0xe2ba); // UNK_0xe2ba
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xdd70(); // UNK_0xdd70
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(1); // 1

  label2:
  goto label3;

  label1:
  Pop(); // DROP
  Push(1); // 1

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  R_gt_(); // R>
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}

// 0xe662: db 0x4c 0x22 0x55 0xe3 0x90 0x92 0x07 0x13 0xfa 0x15 0x0a 0x00 0x10 0xe6 0xc9 0x7a 0x60 0x16 0x0e 0x00 0x18 0xe6 0xfa 0x15 0x08 0x00 0x2e 0x0f 0xbc 0xe2 0x23 0x6d 0x90 0x16 'L"U            z`         .   #m  '

// ================================================
// 0xe684: WORD 'UNK_0xe686' codep=0x224c parp=0xe686
// ================================================

void UNK_0xe686() // UNK_0xe686
{
  Push(0xe664);
  ALL(); // ALL
}


// ================================================
// 0xe68e: WORD 'UNK_0xe690' codep=0x224c parp=0xe690
// ================================================

void UNK_0xe690() // UNK_0xe690
{
  Push(pp_XORMODE); // XORMODE size: 2
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  UNK_0xdd64(); // UNK_0xdd64
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xe4c0(); // UNK_0xe4c0
  Push(pp__ro_ENCOUN); // (ENCOUN size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0017);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  UNK_0xe516(); // UNK_0xe516

  label1:
  Push(pp_XORMODE); // XORMODE size: 2
  _st__ex__gt_(); // <!>
}

// 0xe6c2: db 0x4c 0x22 0xcd 0xde 0xb3 0x0e 0x72 0x0f 0xc9 0x74 0x16 0x6d 0x72 0x0f 0xbb 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0xdb 0x3f 0xdb 0x3f 0x07 0x40 0xfa 0x15 0x0c 0x00 0xde 0x0d 0x9d 0xde 0x9d 0xde 0x60 0x16 0x04 0x00 0xcd 0xde 0xc6 0x11 0xb3 0x0e 0x72 0x0f 0xc9 0x74 0x16 0x6d 0xc6 0x11 0x72 0x0f 0xbb 0x74 0x16 0x6d 0x90 0x16 'L"    r  t mr  t m  L" ? ? @          `         r  t m  r  t m  '

// ================================================
// 0xe702: WORD 'UNK_0xe704' codep=0x224c parp=0xe704
// ================================================

void UNK_0xe704() // UNK_0xe704
{

  label1:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe61a(); // UNK_0xe61a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
  goto label1;
}


// ================================================
// 0xe71a: WORD 'UNK_0xe71c' codep=0x224c parp=0xe71c
// ================================================

void UNK_0xe71c() // UNK_0xe71c
{
  UNK_0xdeaf(); // UNK_0xdeaf
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xdeaf(); // UNK_0xdeaf
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xe72a: WORD 'UNK_0xe72c' codep=0x224c parp=0xe72c
// ================================================

void UNK_0xe72c() // UNK_0xe72c
{
  UNK_0xe2f9(); // UNK_0xe2f9
  Push(cc__6); // 6
  Push(cc__8); // 8
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(0x6607); // IFIELD(UNK_0xe2f4)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  UNK_0xe71c(); // UNK_0xe71c
  SWAP(); // SWAP
  Push(0x65f4); // IFIELD(UNK_0xe2cc)
  D_ex_(); // D!
  UNK_0xe452(); // UNK_0xe452
}


// ================================================
// 0xe752: WORD 'UNK_0xe754' codep=0x224c parp=0xe754
// ================================================

void UNK_0xe754() // UNK_0xe754
{
  Push(cc__7); // 7
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe612(); // UNK_0xe612
}


// ================================================
// 0xe762: WORD 'UNK_0xe764' codep=0x224c parp=0xe764
// ================================================

void UNK_0xe764() // UNK_0xe764
{

  label3:
  UNK_0xe2f9(); // UNK_0xe2f9
  Push(cc__7); // 7
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x6603); // IFIELD(UNK_0xe2ea)
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  MOD(); // MOD
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe72c(); // UNK_0xe72c
  UNK_0xe4d0(); // UNK_0xe4d0

  label1:
  Push(1); // 1
  Push(0x6603); // IFIELD(UNK_0xe2ea)
  _plus__ex__2(); // +!_2
  Push(0x6605); // IFIELD(UNK_0xe2ef)
  Push(Read16(Pop())); // @
  Push(0x6603); // IFIELD(UNK_0xe2ea)
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label2;
  UNK_0xe612(); // UNK_0xe612
  IPREV(); // IPREV

  label2:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  INEXT(); // INEXT
  goto label3;
}


// ================================================
// 0xe7a6: WORD 'UNK_0xe7a8' codep=0x224c parp=0xe7a8
// ================================================

void UNK_0xe7a8() // UNK_0xe7a8
{
  UNK_0xdd16(); // UNK_0xdd16
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xe764(); // UNK_0xe764
  UNK_0xe516(); // UNK_0xe516
  Push(pp_UNK_0xe2be); // UNK_0xe2be size: 0
  _099(); // 099
  UNK_0xe686(); // UNK_0xe686
  Push(pp_UNK_0xe2be); // UNK_0xe2be size: 0
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xe704(); // UNK_0xe704
  UNK_0xe357(); // UNK_0xe357
  UNK_0xe2f9(); // UNK_0xe2f9
  Push(0x6602); // IFIELD(UNK_0xe2e5)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(0xc694);
  MODULE(); // MODULE
  UNK_0xe754(); // UNK_0xe754
  i++;
  } while(i<imax); // (LOOP) 0xffea


  label1:
  UNK_0xe516(); // UNK_0xe516
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe7ea: WORD 'UNK_0xe7ec' codep=0x224c parp=0xe7ec
// ================================================

void UNK_0xe7ec() // UNK_0xe7ec
{
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xdecf(); // UNK_0xdecf
  SWAP(); // SWAP
  Pop();
  switch(Pop()) // KEY>ORIENT
  {
  case 65535:
    X_eq__dash_1(); // X=-1
    break;
  case 0:
    X_eq_0(); // X=0
    break;
  case 1:
    X_eq_1(); // X=1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(Read16(regsp)); // DUP
  Push(0x65ec); // IFIELD(UNK_0xddc0)
  C_ex__2(); // C!_2
  Push(0x0023);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe810: WORD 'UNK_0xe812' codep=0x224c parp=0xe812
// ================================================

void UNK_0xe812() // UNK_0xe812
{
  Push(0x0014);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xe7ec(); // UNK_0xe7ec
  Push(0x65ec); // IFIELD(UNK_0xddc0)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(cc__8); // 8
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0x65ec); // IFIELD(UNK_0xddc0)
  C_ex__2(); // C!_2
  Push(0x0023);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
}


// ================================================
// 0xe83e: WORD 'UNK_0xe840' codep=0x224c parp=0xe840
// ================================================

void UNK_0xe840() // UNK_0xe840
{
  _at_ID(); // @ID
  Push(cc_INVIS_dash_I); // INVIS-I
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe812(); // UNK_0xe812
}


// ================================================
// 0xe850: WORD 'UNK_0xe852' codep=0x224c parp=0xe852
// ================================================

void UNK_0xe852() // UNK_0xe852
{
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_XWLD_c_XP); // XWLD:XP size: 4
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _slash_(); // /
  _gt_R(); // >R
  R_at_(); // R@
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  R_gt_(); // R>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e
// ================================================

void UNK_0xe86e() // UNK_0xe86e
{
  Push(2); // 2
  Push(cc__6); // 6
  RRND(); // RRND
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe882: WORD 'UNK_0xe884' codep=0x224c parp=0xe884
// ================================================

void UNK_0xe884() // UNK_0xe884
{
  Push(cc__4); // 4
  Push(cc__8); // 8
  RRND(); // RRND
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe898: WORD 'UNK_0xe89a' codep=0x224c parp=0xe89a
// ================================================

void UNK_0xe89a() // UNK_0xe89a
{
  Push(pp_IINDEX); // IINDEX size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  Push(0x662a); // IFIELD(UNK_0xde28)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x001b);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
  R_gt_(); // R>
  Push(pp_IINDEX); // IINDEX size: 2
  _st__ex__gt_(); // <!>
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xe8be: WORD 'UNK_0xe8c0' codep=0x224c parp=0xe8c0
// ================================================

void UNK_0xe8c0() // UNK_0xe8c0
{
  Push(pp__ro_AORIGI); // (AORIGI size: 4
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  Push(cc__3); // 3
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(0x0012);
  Push(0x0014);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(pp_COLOR); // COLOR size: 2
  Push(Read16(Pop())); // @
  SetColor("LT-BLUE");
  _eq_(); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x224c parp=0xe8ec
// ================================================

void UNK_0xe8ec() // UNK_0xe8ec
{
  UNK_0xe4c0(); // UNK_0xe4c0
  Push(0xc7ce);
  MODULE(); // MODULE
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xe8f8: WORD 'UNK_0xe8fa' codep=0x224c parp=0xe8fa
// ================================================

void UNK_0xe8fa() // UNK_0xe8fa
{
  UNK_0xe86e(); // UNK_0xe86e
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xe86e(); // UNK_0xe86e
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xe8c0(); // UNK_0xe8c0
  Push(pp_UNK_0xdd24); // UNK_0xdd24 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(cc__4); // 4
  POS_dot_(); // POS.
  Push(0x661b); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe930: WORD 'UNK_0xe932' codep=0x224c parp=0xe932
// ================================================

void UNK_0xe932() // UNK_0xe932
{
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe93c: WORD 'UNK_0xe93e' codep=0x224c parp=0xe93e
// ================================================

void UNK_0xe93e() // UNK_0xe93e
{
  Push(0x65f4); // IFIELD(UNK_0xddd8)
  Push(Read16(regsp)); // DUP
  UNK_0xde85(); // UNK_0xde85
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe964: WORD 'UNK_0xe966' codep=0x224c parp=0xe966
// ================================================

void UNK_0xe966() // UNK_0xe966
{
  Push(pp_IINDEX); // IINDEX size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _gt_R(); // >R
  _gt_MAINVI(); // >MAINVI
  UNK_0xe4f0(); // UNK_0xe4f0
  UNK_0xe414(); // UNK_0xe414
  UNK_0xe852(); // UNK_0xe852
  _2SWAP(); // 2SWAP
  UNK_0xe852(); // UNK_0xe852
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
  _1PIX(); // 1PIX
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  LLINE(); // LLINE
  UNK_0xe8fa(); // UNK_0xe8fa
  _2PIX(); // 2PIX
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  Push(pp__at__co_0_star_1_sc_); // @,0*1; size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe572(); // UNK_0xe572

  label1:
  R_gt_(); // R>
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe9a0: WORD 'UNK_0xe9a2' codep=0x224c parp=0xe9a2
// ================================================

void UNK_0xe9a2() // UNK_0xe9a2
{
  UNK_0xe93e(); // UNK_0xe93e
  if (Pop() == 0) goto label1;
  UNK_0xe932(); // UNK_0xe932
  _2DUP(); // 2DUP
  Push(pp_XABS); // XABS size: 2
  _plus__ex__2(); // +!_2
  Push(pp_YABS); // YABS size: 2
  _plus__ex__2(); // +!_2
  _2DUP(); // 2DUP
  Push(0x65ee); // IFIELD(INST-X)
  _plus__ex__2(); // +!_2
  Push(0x65f0); // IFIELD(INST-Y)
  _plus__ex__2(); // +!_2
  _at_IX(); // @IX
  Push(Pop() + Pop()); // +
  _ex_IX(); // !IX
  _at_IY(); // @IY
  Push(Pop() + Pop()); // +
  _ex_IY(); // !IY
  return;

  label1:
  Pop(); Pop();// 2DROP
}

// 0xe9d2: db 0x4c 0x22 0xdd 0xa3 0x5d 0x17 0x43 0x01 0x5f 0x12 0x1e 0xdd 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x44 0x00 0x09 0xdf 0x07 0x13 0xfa 0x15 0x18 0x00 0x2c 0xdd 0x62 0xdd 0xdf 0x79 0x82 0xe8 0x72 0x0f 0xf2 0x0e 0x82 0xe8 0x72 0x0f 0xf2 0x0e 0x60 0x16 0x04 0x00 0x62 0xdd 0x2c 0xdd 0x62 0xdd 0xdb 0x3f 0xdb 0x3f 0x5b 0xde 0xb4 0x0d 0xcd 0xde 0xa2 0x0e 0xb3 0x0f 0xf2 0x0e 0x90 0x0e 0xb3 0x0f 0xf2 0x0e 0xa0 0xe9 0x14 0xe5 0xde 0x0d 0xdf 0x79 0x90 0x16 0x29 0x1d 0x56 0x3a 0x20 0xd0 0x4c 0x22 0x34 0x75 0x5d 0x17 0x19 0x00 0x5d 0x17 0x1b 0x00 0x25 0x40 0x5d 0x17 0x1c 0x00 0x46 0x75 0x3e 0x13 0x09 0xdf 0xf5 0x12 0x20 0x0f 0xa7 0x53 0x05 0x10 0x8f 0x3b 0x89 0x11 0xc4 0x4b 0x89 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x2c 0xdd 0x62 0xdd 0x2a 0xea 0x4c 0x6d 0xdf 0x79 0x3d 0x0f 0xa7 0x53 0xb3 0x0f 0x8f 0x3b 0x89 0x11 0x20 0x0f 0xb8 0x15 0x30 0xe9 0x48 0x52 0xa9 0x94 0x14 0xe5 0x30 0xe9 0x10 0xe8 0x14 0xe5 0xd2 0xe9 0xd0 0x15 0xee 0xff 0x30 0xe9 0x90 0x16 0x4c 0x22 0xd0 0x5b 0xae 0x0b 0x1f 0x8d 0xee 0xe4 0x12 0xe4 0x3c 0x97 0x1d 0x85 0x53 0x50 0x9d 0x86 0x62 0xdd 0xd3 0x92 0x2a 0xea 0x38 0x0c 0xd3 0x92 0x87 0x3b 0x5d 0x17 0xfd 0xff 0xb8 0x15 0xdb 0x3f 0xdb 0x3f 0x50 0x0e 0x72 0x0f 0xf2 0x0e 0x50 0x0e 0x72 0x0f 0xf2 0x0e 0xfa 0x88 0x67 0x8f 0x34 0x0a 0xae 0x0b 0xfa 0x15 0x04 0x00 0x70 0xe5 0xd0 0x15 0xe0 0xff 0xde 0x0d 0xde 0x0d 0x45 0x8d 0x34 0x85 0xe4 0x96 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x2c 0xdd 0x62 0xdd 0xdf 0x79 0x2a 0xea 0x38 0x0c 0x07 0x40 0xfa 0x15 0x1a 0x00 0x5d 0x17 0x30 0x75 0x62 0xdd 0x2a 0xea 0x38 0x0c 0x5b 0xde 0x4c 0x0f 0x5d 0x17 0xca 0xc6 0xd9 0x84 0x60 0x16 0x11 0x00 0x07 0x3f 0x0a 0x52 0x41 0x59 0x20 0x4d 0x49 0x53 0x53 0x45 0x44 0xf1 0x9f 0x5d 0x17 0xe8 0x03 0xef 0x2a 0x90 0x16 0x4c 0x22 0x5c 0xea 0x8e 0xea 0xe2 0xea 0xea 0xe8 0x90 0x16 0x4c 0x22 0x5d 0x17 0x44 0x00 0x72 0x0f 0xf2 0x0e 0xa7 0x3b 0x72 0x0f 0xf2 0x0e 0x90 0x16 'L"  ] C _         D         , b  y  r     r   `   b , b  ? ?[                        y  ) V:  L"4u]   ]   %@]   Fu>        S   ;   K      L", b * Lm y=  S   ;      0 HR    0           0   L" [        <   SP  b   * 8    ;]      ? ?P r   P r     g 4       p         E 4     L"  , b  y* 8  @    ] 0ub * 8 [ L ]     `    ? RAY MISSED  ]    *  L"\         L"] D r    ;r     '

// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Push(pp__at__co_0_star_1_sc_); // @,0*1; size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x03e8);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BEEPON_2(); // BEEPON_2
  Push(i); // I
  TONE(); // TONE
  Push(0x00c8);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  Push(0xffe2);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe2

  BEEPOFF(); // BEEPOFF
}

// 0xeb79: db 0x4c 0x22 0x6c 0xe8 0x2f 0x5f 0xae 0x0b 0x72 0x0f 0xbb 0x74 0x16 0x6d 0x6c 0xe8 0x3a 0x5f 0xae 0x0b 0x72 0x0f 0xc9 0x74 0x16 0x6d 0x8e 0xe6 0x90 0x16 0x4c 0x22 0x5a 0xdd 0x4a 0xdd 0x1a 0xe7 0xb8 0xe2 0x92 0xdd 0x92 0x0c 0xbc 0xe5 0x7f 0x3b 0xb9 0xdd 0x0a 0x6d 0x57 0xde 0x57 0x6d 0x3e 0xe8 0xdc 0xe0 0x90 0x16 0x4c 0x22 0x5a 0xdd 0x4a 0xdd 0x1a 0xe7 0xb8 0xe2 0xa2 0xdd 0x92 0x0c 0x8f 0x3b 0x72 0x0f 0xbc 0xe5 0x7f 0x3b 0xb9 0xdd 0x0a 0x6d 0x57 0xde 0x57 0x6d 0x3e 0xe8 0xdc 0xe0 0x90 0x16 0x4c 0x22 0x5a 0xdd 0x4a 0xdd 0xd5 0x4f 0x64 0xe9 0x53 0x50 0x9d 0x86 0x16 0x16 0x38 0x66 0x02 0x00 0x35 0xde 0xf1 0x9f 0x9a 0xdd 0x92 0x0c 0xb8 0x27 0xb8 0xe2 0x20 0x0f 0x5d 0x17 0x94 0xc6 0xd9 0x84 0x7f 0x3b 0xb9 0xdd 0x0a 0x6d 0x57 0xde 0x57 0x6d 0x3e 0xe8 0xdc 0xe0 0x90 0x16 0x4c 0x22 0x5a 0xdd 0x4a 0xdd 0x90 0x16 0x4c 0x22 0x13 0xec 0xd6 0xe6 0x87 0x3b 0xb9 0xdd 0x0a 0x6d 0x5a 0xdd 0xea 0xe7 0x8e 0xe6 0x90 0x16 0x4c 0x22 0x13 0xec 0xc2 0xe6 0x7f 0x3b 0xb9 0xdd 0x0a 0x6d 0x5a 0xdd 0xea 0xe7 0x8e 0xe6 0x90 0x16 'L"l /_  r  t ml :_  r  t m    L"Z J           ;   mW Wm>     L"Z J          ;r   ;   mW Wm>     L"Z J  Od SP    8f  5        '    ]     ;   mW Wm>     L"Z J   L"     ;   mZ       L"    ;   mZ       '

// ================================================
// 0xec43: WORD 'UNK_0xec45' codep=0x224c parp=0xec45
// ================================================

void UNK_0xec45() // UNK_0xec45
{
  if (Pop() == 0) goto label1;
  UNK_0xdd42(); // UNK_0xdd42
  if (Pop() == 0) goto label2;
  UNK_0xde9f(); // UNK_0xde9f
  goto label3;

  label2:
  Push(0); // 0

  label3:
  return;

  label1:
  UNK_0xde9f(); // UNK_0xde9f
}


// ================================================
// 0xec5f: WORD '?APPROACHI' codep=0x224c parp=0xec6e
// ================================================

void _ask_APPROACHI() // ?APPROACHI
{
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _eq_(); // =
}


// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x224c parp=0xec7a
// ================================================

void UNK_0xec7a() // UNK_0xec7a
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(1); // 1
  UNK_0xec45(); // UNK_0xec45
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  R_gt_(); // R>
  UNK_0xec45(); // UNK_0xec45
  Push(Pop() + Pop()); // +
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xe690(); // UNK_0xe690
  Push(0); // 0
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  C_ex__2(); // C!_2
}

// 0xeca8: db 0x4c 0x22 0x34 0x75 0x87 0x3b 0x97 0x3b 0x25 0x40 0x09 0xdf 0xf5 0x12 0x20 0x0f 0x8f 0x3b 0xa7 0x53 0x3d 0x0f 0x89 0x11 0xb3 0x0f 0xc4 0x4b 0x97 0x3b 0x46 0x12 0xf5 0x12 0x52 0x56 0xae 0x0b 0x5d 0x17 0x10 0x00 0x5f 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x5d 0x17 0x46 0xc7 0xd9 0x84 0x90 0x16 'L"4u ; ;%@       ; S=      K ;F   RV  ]   _     L"] F     '

// ================================================
// 0xece2: WORD 'UNK_0xece4' codep=0x224c parp=0xece4
// ================================================

void UNK_0xece4() // UNK_0xece4
{
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
}


// ================================================
// 0xecee: WORD '?J' codep=0x224c parp=0xecf5
// ================================================
// entry

void _ask_J() // ?J
{
  Push(pp_UNK_0xdd20); // UNK_0xdd20 size: 0
  Push(Read16(Pop())); // @
  UNK_0xece4(); // UNK_0xece4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xdd2e(); // UNK_0xdd2e
  UNK_0xeb45(); // UNK_0xeb45
  UNK_0xe884(); // UNK_0xe884
  UNK_0xe884(); // UNK_0xe884
  UNK_0xe9a2(); // UNK_0xe9a2
  Push(0xc7ce);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Push(0xb7e7);
  MODULE(); // MODULE

  label2:
  Push2Words("NULL");
}


// ================================================
// 0xed21: WORD '<COMBAT>' codep=0xaccc parp=0xed2e
// ================================================
// 0xed2e: db 0x13 0x16 0x13 0x99 0xed 0x9d 0xed 0xa3 0xed 0xa9 0xed 0xb0 0xed 0xb6 0xed 0xbd 0xed 0xc6 0xed 0xce 0xed 0xd2 0xed 0xda 0xed 0xe0 0xed 0xe5 0xed 0xea 0xed 0xef 0xed 0xf5 0xed 0xfa 0xed 0x00 0xee 0x08 0xee 0x32 0xea 0x93 0xdf 0x01 0xe0 0x19 0xe0 0xf3 0xdf 0x55 0xe0 0xad 0xdf 0xcc 0xe1 0xd8 0xe1 0xe5 0xdf 0x37 0xe0 0x2a 0xe1 0xaa 0xec 0x98 0xe0 0xc0 0xe1 0xa2 0xe0 0xea 0xe0 0xae 0xe0 0xc5 0xdf 0x20 0xe1 0xcc 0xe0 0xb7 0xdf 0x45 0x20 0x20 0x20 0x20 0x20 0x4f 0x56 0x52 0x41 0x28 0x72 0x66 0x67 0x31 0x34 0x61 0x70 0x72 0x38 0x38 0x29 0x01 0x27 0xeb 0x80 0x03 0x99 0xeb 0x81 0x82 0x83 0x03 0xb9 0xeb 0x81 0x84 0x85 0x04 0x99 0xeb 0x01 0x86 0x87 0x82 0x03 0x99 0xeb 0x01 0x88 0x82 0x04 0xdd 0xeb 0x81 0x89 0x8a 0x8b 0x06 0xdd 0xeb 0x01 0x86 0x87 0x02 0x89 0x8b 0x05 0xdd 0xeb 0x01 0x88 0x02 0x89 0x8b 0x01 0xda 0xec 0x8c 0x05 0x1d 0xec 0x8d 0x07 0x0e 0x8f 0x90 0x03 0x1d 0xec 0x8e 0x11 0x90 0x02 0x7b 0xeb 0x92 0x0d 0x02 0x7b 0xeb 0x92 0x87 0x02 0x7b 0xeb 0x92 0x88 0x03 0x31 0xec 0x90 0x81 0x93 0x02 0x1d 0xec 0x94 0x90 0x03 0x31 0xec 0x90 0x87 0x93 0x05 0x31 0xec 0x90 0x87 0x15 0x89 0x02 0x04 0x31 0xec 0x90 0x87 0x15 0x82 '                                         2         U         7 *                     E     OVRA(rfg14apr88) '                                                                      {    {    {    1          1     1       1     '

// ================================================
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11
// ================================================

void UNK_0xee11() // UNK_0xee11
{
  Push(pp_NTIME); // NTIME size: 4
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NTIME); // NTIME size: 4
  _2_at_(); // 2@
  Push(0x32c8); Push(0x0000);
  D_plus_(); // D+
  D_gt_(); // D>
  if (Pop() == 0) return;
  Push2Words("NULL");
  Push(pp_NTIME); // NTIME size: 4
  D_ex_(); // D!
  Push(pp_NLR); // NLR size: 2
  Push(Read16(Pop())); // @
  Push(pp_NLR); // NLR size: 2
  _099(); // 099
  Push(pp__ask_NEB); // ?NEB size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label2;
  CTINIT(); // CTINIT
  goto label3;

  label2:
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR

  label3:
  Push(0x6651); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xee6d: WORD 'UNK_0xee6f' codep=0x224c parp=0xee6f
// ================================================

void UNK_0xee6f() // UNK_0xee6f
{
  _at_ID(); // @ID
  Push(Read16(regsp)); // DUP
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  Push(pp__ro_ENCOUN); // (ENCOUN size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0017);
  _eq_SPECIE(); // =SPECIE
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  Push(pp_PAST); // PAST size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp__ask_UF); // ?UF size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) return;
  Push(pp__h_CRIT); // ^CRIT size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0); // 0
  Push(pp__n_VESS); // #VESS size: 2
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  goto label2;

  label1:
  Push(2); // 2

  label2:
  RRND(); // RRND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_I(); // POINT>I
  UNK_0xee6f(); // UNK_0xee6f
  if (Pop() == 0) goto label3;
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label4;
  Push(cc_INVIS_dash_I); // INVIS-I
  _ex_ID(); // !ID
  goto label3;

  label4:
  UNK_0xe840(); // UNK_0xe840

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffe4

  Pop(); // DROP
}


// ================================================
// 0xef05: WORD 'UNK_0xef07' codep=0x224c parp=0xef07
// ================================================

void UNK_0xef07() // UNK_0xef07
{
  Push(pp__h_CRIT); // ^CRIT size: 2
  _099(); // 099
}


// ================================================
// 0xef0d: WORD 'UNK_0xef0f' codep=0x224c parp=0xef0f
// ================================================

void UNK_0xef0f() // UNK_0xef0f
{
  Push(pp__h_CRIT); // ^CRIT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xef21: WORD 'UNK_0xef23' codep=0x224c parp=0xef23
// ================================================

void UNK_0xef23() // UNK_0xef23
{
  Push(pp__h_CRIT); // ^CRIT size: 2
  Push(Read16(Pop())); // @
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xef31: WORD 'UNK_0xef33' codep=0x224c parp=0xef33
// ================================================

void UNK_0xef33() // UNK_0xef33
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(0x6611); // IFIELD(UNK_0xde14)
  Push(Read16(Pop())); // @
  Push(0x65fb); // IFIELD(UNK_0xddfb)
  UNK_0xde7b(); // UNK_0xde7b
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  _st_(); // <
}


// ================================================
// 0xef47: WORD 'UNK_0xef49' codep=0x224c parp=0xef49
// ================================================

void UNK_0xef49() // UNK_0xef49
{
  UNK_0xef33(); // UNK_0xef33
  if (Pop() == 0) goto label1;
  Push(0x6611); // IFIELD(UNK_0xde14)
  Push(Read16(Pop())); // @
  Push(0x0028);
  Push(Pop() + Pop()); // +
  Push(0x0dac);
  MIN(); // MIN
  Push(0x6611); // IFIELD(UNK_0xde14)
  _ex__2(); // !_2
  Push(pp__ask_COMBAT); // ?COMBAT size: 2
  Push(Read16(Pop())); // @
  Push(pp__n_AUX); // #AUX size: 2
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe29a(); // UNK_0xe29a

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef7b: WORD 'UNK_0xef7d' codep=0x224c parp=0xef7d
// ================================================

void UNK_0xef7d() // UNK_0xef7d
{
  Push(pp_SMART); // SMART size: 2
  _099(); // 099
  Push(0xed2e);
  DISTRAC(); // DISTRAC
  Func13("<COMBAT>");
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xe0ea(); // UNK_0xe0ea
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xec7a(); // UNK_0xec7a
}


// ================================================
// 0xef97: WORD 'UNK_0xef99' codep=0x224c parp=0xef99
// ================================================

void UNK_0xef99() // UNK_0xef99
{
  Push(0x65f5); // IFIELD(UNK_0xddb6)
  Push(Read16(Pop())); // @
  LoadData("UNK_0xdd8c"); // from 'VESSEL      '
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) return;
  Push(cc__5); // 5
  LoadData("UNK_0xdd8c"); // from 'VESSEL      '
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xefaf: WORD 'UNK_0xefb1' codep=0x224c parp=0xefb1
// ================================================

void UNK_0xefb1() // UNK_0xefb1
{
  _at_ID(); // @ID
  Push(Read16(regsp)); // DUP
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(cc_INVIS_dash_I); // INVIS-I
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(0x0014);
  _eq_SPECIE(); // =SPECIE
  ICLOSE(); // ICLOSE
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x224c parp=0xefdb
// ================================================

void UNK_0xefdb() // UNK_0xefdb
{
  Push(0xc7dc);
  MODULE(); // MODULE
  Pop(); // DROP
  Push(0x0016);
  _gt_(); // >
  Push(pp__ask_AF); // ?AF size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xeff3: WORD 'COMBAT' codep=0x224c parp=0xeffe
// ================================================

void COMBAT() // COMBAT
{
  UNK_0xee11(); // UNK_0xee11
  Push(0xc7ce);
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ATIME); // ATIME size: 4
  _2_at_(); // 2@
  D_gt_(); // D>
  if (Pop() == 0) goto label1;
  UNK_0xef23(); // UNK_0xef23
  UNK_0xefb1(); // UNK_0xefb1
  if (Pop() == 0) goto label2;
  UNK_0xef7d(); // UNK_0xef7d
  UNK_0xe932(); // UNK_0xe932
  UNK_0xef99(); // UNK_0xef99
  UNK_0xee8f(); // UNK_0xee8f
  goto label3;

  label2:
  UNK_0xdd70(); // UNK_0xdd70
  if (Pop() == 0) goto label3;
  UNK_0xef49(); // UNK_0xef49

  label3:
  ICLOSE(); // ICLOSE
  UNK_0xef0f(); // UNK_0xef0f
  Push(pp__i_UHL); // 'UHL size: 2
  _at_EXECUTE(); // @EXECUTE

  label1:
  UNK_0xe7a8(); // UNK_0xe7a8
  UNK_0xefdb(); // UNK_0xefdb
  Push(pp__ask_COMBAT); // ?COMBAT size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_UNNEST); // 'UNNEST size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf050: WORD 'UNK_0xf052' codep=0x1d29 parp=0xf052
// ================================================
// 0xf052: db 0x00 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0xff 0xff 0x00 0x00 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0x00 0x00 0xff 0xff 0x01 0x00 '                                '

// ================================================
// 0xf072: WORD 'UNK_0xf074' codep=0x224c parp=0xf074
// ================================================

void UNK_0xf074() // UNK_0xf074
{
  Push(0xc7dc);
  MODULE(); // MODULE
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(0x662a); // IFIELD(UNK_0xde28)
  Push(Read8(Pop())&0xFF); // C@
  _4_star_(); // 4*
  Push(pp_UNK_0xf052); // UNK_0xf052 size: 0
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  _gt_R(); // >R
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(pp_XABS); // XABS size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  ROT(); // ROT
  Push(Pop() * Pop()); // *
  Push(pp_YABS); // YABS size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xde49); // UNK_0xde49 size: 0
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xf0a8: WORD 'UNK_0xf0aa' codep=0x224c parp=0xf0aa
// ================================================

void UNK_0xf0aa() // UNK_0xf0aa
{
  Push(0x6626); // IFIELD(UNK_0xde19)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0b4: WORD 'UNK_0xf0b6' codep=0x224c parp=0xf0b6
// ================================================

void UNK_0xf0b6() // UNK_0xf0b6
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(0x0006);
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x224c parp=0xf0da
// ================================================

void UNK_0xf0da() // UNK_0xf0da
{
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
}


// ================================================
// 0xf0e8: WORD 'UNK_0xf0ea' codep=0x224c parp=0xf0ea
// ================================================

void UNK_0xf0ea() // UNK_0xf0ea
{
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(0x000a);
  M_star_(); // M*
  Push(pp__10_star_END); // 10*END size: 4
  _2_ex__2(); // 2!_2
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf100: WORD 'UNK_0xf102' codep=0x224c parp=0xf102
// ================================================

void UNK_0xf102() // UNK_0xf102
{
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  ROT(); // ROT
  Push(0); // 0
  D_dash_(); // D-
  Push2Words("0.");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END size: 4
  _2_ex__2(); // 2!_2
  Push(pp__10_star_CARG); // 10*CARG size: 4
  _2_at_(); // 2@
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG size: 4
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x224c parp=0xf12a
// ================================================

void UNK_0xf12a() // UNK_0xf12a
{
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  D0_eq_(); // D0=
}


// ================================================
// 0xf132: WORD 'UNK_0xf134' codep=0x224c parp=0xf134
// ================================================

void UNK_0xf134() // UNK_0xf134
{
  Push(pp__10_star_END); // 10*END size: 4
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Push(cc__5); // 5
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf156: WORD 'UNK_0xf158' codep=0x1d29 parp=0xf158
// ================================================
// 0xf158: db 0x56 0x3a 0x20 0x00 'V:  '

// ================================================
// 0xf15c: WORD 'UNK_0xf15e' codep=0x224c parp=0xf15e
// ================================================

void UNK_0xf15e() // UNK_0xf15e
{
  Push(0); // 0
  Push(0x00fa);
  ROT(); // ROT
  _dash_(); // -
  RRND(); // RRND
  Push(0x0032);
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdd24); // UNK_0xdd24 size: 0
  _ex__2(); // !_2
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xf184: WORD 'UNK_0xf186' codep=0x224c parp=0xf186
// ================================================

void UNK_0xf186() // UNK_0xf186
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f8); // IFIELD(UNK_0xde2d)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fc); // IFIELD(UNK_0xde32)
  Push(Read8(Pop())&0xFF); // C@
  _gt_R(); // >R
  Push(pp_UNK_0xde53); // UNK_0xde53 size: 0
  _2_at_(); // 2@
  R_at_(); // R@
  UNK_0xf15e(); // UNK_0xf15e
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_UNK_0xf158); // UNK_0xf158 size: 0
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  R_gt_(); // R>
  UNK_0xf15e(); // UNK_0xf15e
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_UNK_0xf158); // UNK_0xf158 size: 0
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  _2DUP(); // 2DUP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_UNK_0xde49); // UNK_0xde49 size: 0
  D_ex_(); // D!
}


// ================================================
// 0xf1c8: WORD 'UNK_0xf1ca' codep=0x224c parp=0xf1ca
// ================================================

void UNK_0xf1ca() // UNK_0xf1ca
{
  Push(0x2710);
  Push(pp_UNK_0xde4f); // UNK_0xde4f size: 0
  _ex__2(); // !_2
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_I(); // POINT>I
  UNK_0xf0da(); // UNK_0xf0da
  _at_ID(); // @ID
  Push(0x0060);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  _at_ID(); // @ID
  Push(0x0062);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xde49); // UNK_0xde49 size: 0
  _2_at_(); // 2@
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xde5d(); // UNK_0xde5d
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xde4f); // UNK_0xde4f size: 0
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(pp_UNK_0xde4f); // UNK_0xde4f size: 0
  _st__ex__gt_(); // <!>
  UNK_0xdd5c(); // UNK_0xdd5c
  Push(pp_UNK_0xde53); // UNK_0xde53 size: 0
  _2_ex__2(); // 2!_2
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xdd28); // UNK_0xdd28 size: 0
  D_ex_(); // D!
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffae

  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf240: WORD 'UNK_0xf242' codep=0x224c parp=0xf242
// ================================================

void UNK_0xf242() // UNK_0xf242
{
  Push(pp_UNK_0xde4f); // UNK_0xde4f size: 0
  Push(Read16(Pop())); // @
  Push(0x2710);
  _dash_(); // -
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250
// ================================================

void UNK_0xf250() // UNK_0xf250
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x666f); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf260: WORD 'UNK_0xf262' codep=0x224c parp=0xf262
// ================================================

void UNK_0xf262() // UNK_0xf262
{
  Push(1); // 1
  Push(0x5184);
  _ex__2(); // !_2
}


// ================================================
// 0xf26c: WORD 'UNK_0xf26e' codep=0x224c parp=0xf26e
// ================================================

void UNK_0xf26e() // UNK_0xf26e
{
  Push(pp_WEAPON_dash_); // WEAPON- size: 2
  ON_2(); // ON_2
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xf186(); // UNK_0xf186
  Push(cc_UNK_0xe2b6); // UNK_0xe2b6
  Push(0x65fd); // IFIELD(UNK_0xde05)
  UNK_0xde7b(); // UNK_0xde7b
  UNK_0xe5be(); // UNK_0xe5be
  Push(cc__5); // 5
  UNK_0xf102(); // UNK_0xf102
  UNK_0xe0de(); // UNK_0xe0de
  UNK_0xf262(); // UNK_0xf262
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  Push(pp_WEAPON_dash_); // WEAPON- size: 2
  ON_2(); // ON_2
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xf186(); // UNK_0xf186
  _2DUP(); // 2DUP
  Push(pp_UNK_0xde53); // UNK_0xde53 size: 0
  _2_ex__2(); // 2!_2
  SetColor("LT-BLUE");
  UNK_0xe966(); // UNK_0xe966
  Push(pp_UNK_0xde53); // UNK_0xde53 size: 0
  _2_at_(); // 2@
  Push(cc_UNK_0xe2b6); // UNK_0xe2b6
  Push(0); // 0
  Push(0xc694);
  MODULE(); // MODULE
  Push(1); // 1
  UNK_0xf102(); // UNK_0xf102
  UNK_0xe0de(); // UNK_0xe0de
  UNK_0xf262(); // UNK_0xf262
}


// ================================================
// 0xf2b4: WORD 'UNK_0xf2b6' codep=0x224c parp=0xf2b6
// ================================================

void UNK_0xf2b6() // UNK_0xf2b6
{
  UNK_0xf12a(); // UNK_0xf12a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf0aa(); // UNK_0xf0aa
  if (Pop() == 0) goto label2;
  UNK_0xf074(); // UNK_0xf074
  UNK_0xf1ca(); // UNK_0xf1ca
  UNK_0xf242(); // UNK_0xf242
  if (Pop() == 0) goto label3;
  UNK_0xdd4c(); // UNK_0xdd4c
  Push(pp_UNK_0xde53); // UNK_0xde53 size: 0
  _2_at_(); // 2@
  UNK_0xde5d(); // UNK_0xde5d
  Push(cc__7); // 7
  _st_(); // <
  UNK_0xe19c(); // UNK_0xe19c
  Push(Pop() & Pop()); // AND
  Push(pp__ask_3); // ?3 size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  UNK_0xf28a(); // UNK_0xf28a
  goto label5;

  label4:
  UNK_0xe178(); // UNK_0xe178
  if (Pop() == 0) goto label6;
  UNK_0xf26e(); // UNK_0xf26e
  goto label5;

  label6:
  UNK_0xe19c(); // UNK_0xe19c
  if (Pop() == 0) goto label7;
  UNK_0xf28a(); // UNK_0xf28a
  goto label5;

  label7:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x668d); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY

  label5:
  goto label8;

  label3:
  UNK_0xf250(); // UNK_0xf250

  label8:
  goto label9;

  label2:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x66ae); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY

  label9:
  return;

  label1:
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  Push(0x66cd); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY
}

// 0xf342: db 0x4c 0x22 0xa0 0x5f 0x37 0x3a 0xfc 0xef 0x90 0x16 'L" _7:    '

// ================================================
// 0xf34c: WORD 'UNK_0xf34e' codep=0x224c parp=0xf34e
// ================================================

void UNK_0xf34e() // UNK_0xf34e
{
  Push(0xc39d);
  Push(pp__i_VEHICL); // 'VEHICL size: 2
  _ex__2(); // !_2
  Push(0xc3cf);
  Push(pp__i_REPAIR); // 'REPAIR size: 2
  _ex__2(); // !_2
  Push(0x3a48);
  Push(pp__i__dot_VEHIC); // '.VEHIC size: 2
  _ex__2(); // !_2
  Push(0xf344);
  Push(pp__i_EXTERN); // 'EXTERN size: 2
  _ex__2(); // !_2
  Push(0xc1f8);
  Push(pp__i_CREW_dash_C); // 'CREW-C size: 2
  _ex__2(); // !_2
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP size: 4
  _2_ex__2(); // 2!_2
  Push(pp__ask_HEAL); // ?HEAL size: 2
  ON_2(); // ON_2
  Push(0x3a48);
  Push(pp__i__dot_VITAL); // '.VITAL size: 2
  _ex__2(); // !_2
  Push(0xc1c7);
  Push(pp__i_TREATM); // 'TREATM size: 2
  _ex__2(); // !_2
  Push(pp__ask_HEAL); // ?HEAL size: 2
  ON_2(); // ON_2
  Push(0xe414);
  Push(pp__i__dot_BACKG); // '.BACKG size: 2
  _ex__2(); // !_2
  Push(pp__ask_COMBAT); // ?COMBAT size: 2
  ON_1(); // ON_1
  Push(pp_TIME_dash_PA); // TIME-PA size: 2
  ON_1(); // ON_1
}


// ================================================
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8
// ================================================

void UNK_0xf3a8() // UNK_0xf3a8
{
  Push(pp_LKEY); // LKEY size: 2
  Push(Read16(Pop())); // @
  Push(0x000d);
  _eq_(); // =
}


// ================================================
// 0xf3b4: WORD 'UNK_0xf3b6' codep=0x224c parp=0xf3b6
// ================================================

void UNK_0xf3b6() // UNK_0xf3b6
{
  Push(0xc39d);
  Push(pp__i_VEHICL); // 'VEHICL size: 2
  _ex__2(); // !_2
  Push(0xc3cf);
  Push(pp__i_REPAIR); // 'REPAIR size: 2
  _ex__2(); // !_2
  Push(0x3a48);
  Push(pp__i__dot_VEHIC); // '.VEHIC size: 2
  _ex__2(); // !_2
  Push(pp__n_AUX); // #AUX size: 2
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  _at_CRS(); // @CRS
  Push(0x0090);
  Push(0x005c);
  Push(0x0085);
  Push(0x0061);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
  _ex_CRS(); // !CRS

  label1:
  Push(0xae81);
  Push(pp__i_EXTERN); // 'EXTERN size: 2
  _ex__2(); // !_2
  Push(0xc1f8);
  Push(pp__i_CREW_dash_C); // 'CREW-C size: 2
  _ex__2(); // !_2
  Push(0x3a48);
  Push(pp__i__dot_VITAL); // '.VITAL size: 2
  _ex__2(); // !_2
  Push(0xc1c7);
  Push(pp__i_TREATM); // 'TREATM size: 2
  _ex__2(); // !_2
  Push(0xc0e7);
  Push(pp__i__dot_DATE); // '.DATE size: 2
  _ex__2(); // !_2
  UNK_0xf134(); // UNK_0xf134
  Push(pp_UNK_0xde59); // UNK_0xde59 size: 0
  _099(); // 099
  Push(pp_FORCEPT); // FORCEPT size: 2
  OFF_2(); // OFF_2
  Push(pp__ask_COMBAT); // ?COMBAT size: 2
  OFF_2(); // OFF_2
  ICLOSE(); // ICLOSE
  UNK_0xefdb(); // UNK_0xefdb
  if (Pop() == 0) return;
  Push(pp__i_UNNEST); // 'UNNEST size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf438: WORD 'UNK_0xf43a' codep=0x224c parp=0xf43a
// ================================================

void UNK_0xf43a() // UNK_0xf43a
{
  Pop();
  switch(Pop()) // (XYSCAN
  {
  case 327:
    UNK_0xa45f(); // UNK_0xa45f
    break;
  case 328:
    UNK_0xa467(); // UNK_0xa467
    break;
  case 329:
    UNK_0xa46f(); // UNK_0xa46f
    break;
  case 2:
    UNK_0x9f68(); // UNK_0x9f68
    break;
  case 331:
    UNK_0xa477(); // UNK_0xa477
    break;
  case 333:
    UNK_0xa51e(); // UNK_0xa51e
    break;
  case 20:
    UNK_0xa587(); // UNK_0xa587
    break;
  case 335:
    UNK_0xa52a(); // UNK_0xa52a
    break;
  case 336:
    UNK_0xa532(); // UNK_0xa532
    break;
  case 337:
    UNK_0xa53a(); // UNK_0xa53a
    break;
  case 0:
    UNK_0xa542(); // UNK_0xa542
    break;
  case 92:
    UNK_0xa45f(); // UNK_0xa45f
    break;
  case 126:
    UNK_0xa467(); // UNK_0xa467
    break;
  case 124:
    UNK_0xa477(); // UNK_0xa477
    break;
  case 500:
    UNK_0xa51e(); // UNK_0xa51e
    break;
  case 335:
    UNK_0xa52a(); // UNK_0xa52a
    break;
  case 96:
    UNK_0xa532(); // UNK_0xa532
    break;
  case 315:
    _i_F1(); // 'F1
    break;
  case 316:
    _i_F2(); // 'F2
    break;
  case 317:
    _i_F3(); // 'F3
    break;
  case 318:
    _i_F4(); // 'F4
    break;
  case 319:
    _i_F5(); // 'F5
    break;
  case 320:
    _i_F6(); // 'F6
    break;
  case 321:
    _i_F7(); // 'F7
    break;
  case 322:
    _i_F8(); // 'F8
    break;
  case 323:
    _i_F9(); // 'F9
    break;
  case 324:
    _i_F10(); // 'F10
    break;
  case 338:
    NULL(); // NULL
    break;
  default:
    UNK_0xa548(); // UNK_0xa548
    break;

  }
  _2DUP(); // 2DUP
  Pop();
  switch(Pop()) // KEY>ORIENT
  {
  case 65535:
    X_eq__dash_1(); // X=-1
    break;
  case 0:
    X_eq_0(); // X=0
    break;
  case 1:
    X_eq_1(); // X=1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(0x662a); // IFIELD(UNK_0xde28)
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  Push(0x662a); // IFIELD(UNK_0xde28)
  C_ex__2(); // C!_2
  UNK_0xe89a(); // UNK_0xe89a
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe162(); // UNK_0xe162
  Push(0x65f5); // IFIELD(UNK_0xddc5)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xe9a2(); // UNK_0xe9a2
  Push(0xc7ce);
  MODULE(); // MODULE
  Push(0x0fa0);
  Push(cc_MPS); // MPS
  Push(0x6606); // IFIELD(UNK_0xde23)
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  _slash_(); // /
  UNK_0xe152(); // UNK_0xe152
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  goto label4;

  label1:
  Pop(); Pop();// 2DROP

  label4:
  _ask_TRIG(); // ?TRIG
  UNK_0xf3a8(); // UNK_0xf3a8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  UNK_0xf2b6(); // UNK_0xf2b6
  UNK_0xe29a(); // UNK_0xe29a

  label5:
  UNK_0xe516(); // UNK_0xe516
  UNK_0xf3a8(); // UNK_0xf3a8
  if (Pop() == 0) return;
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf4a6: WORD 'UNK_0xf4a8' codep=0x224c parp=0xf4a8
// ================================================

void UNK_0xf4a8() // UNK_0xf4a8
{
  _gt_MAINVI(); // >MAINVI
  UNK_0xe4f0(); // UNK_0xe4f0
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  Push(0x66e3); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY
  Push(0x670c); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY
  UNK_0xef07(); // UNK_0xef07
  Push(0xc1b8);
  MODULE(); // MODULE
  UNK_0xf34e(); // UNK_0xf34e
  UNK_0xe0de(); // UNK_0xe0de
  Push(pp_FORCEPT); // FORCEPT size: 2
  ON_2(); // ON_2
  UNK_0xf0ea(); // UNK_0xf0ea
  UNK_0xdd2e(); // UNK_0xdd2e
  UNK_0xe8ec(); // UNK_0xe8ec
  _gt_1FONT(); // >1FONT
  Push(pp__n_AUX); // #AUX size: 2
  OFF_2(); // OFF_2
  UNK_0xe29a(); // UNK_0xe29a
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xf4e6: WORD 'WAR' codep=0x224c parp=0xf4ee
// ================================================
// entry

void WAR() // WAR
{
  UNK_0xece4(); // UNK_0xece4
  if (Pop() == 0) goto label1;
  Push(0xf3b6);
  Push(0xf43a);
  Push(0xf4a8);
  DOTASKS(UNK_0xf4a8, UNK_0xf43a, UNK_0xf3b6);
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf50a: WORD 'CLEAR-CO' codep=0x224c parp=0xf517
// ================================================
// entry

void CLEAR_dash_CO() // CLEAR-CO
{
  Push(pp_MOVED); // MOVED size: 2
  _099(); // 099
  UNK_0xe2ff(); // UNK_0xe2ff
  Push(pp_UNK_0xe2be); // UNK_0xe2be size: 0
  _099(); // 099
  UNK_0xe0de(); // UNK_0xe0de
  Push2Words("NULL");
  Push(pp_NTIME); // NTIME size: 4
  _2_ex__2(); // 2!_2
  Push(pp_NLR); // NLR size: 2
  _099(); // 099
  Push(0xc1b8);
  MODULE(); // MODULE
  Push(0); // 0
  UNK_0xe152(); // UNK_0xe152
  Push(0x0035);
  Push(0xb76b);
  MODULE(); // MODULE
  Push(pp_UNK_0xdd20); // UNK_0xdd20 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf547: WORD '(COMB)' codep=0x224c parp=0xf552
// ================================================
// entry

void _ro_COMB_rc_() // (COMB)
{
  COMBAT(); // COMBAT
  SAVE_dash_OV(); // SAVE-OV
}

// 0xf558: db 0x43 0x4f 0x4d 0x42 0x41 0x54 0x2d 0x56 0x00 'COMBAT-V '
  