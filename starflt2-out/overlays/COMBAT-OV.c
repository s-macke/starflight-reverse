// ====== OVERLAY 'COMBAT-OV' ======
// store offset = 0xdd00
// overlay size   = 0x1860

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xdd16  codep:0x224c parp:0xdd16 size:0x0008 C-string:'UNK_0xdd16'
//      UNK_0xdd20  codep:0x1d29 parp:0xdd20 size:0x0002 C-string:'UNK_0xdd20'
//      UNK_0xdd24  codep:0x1d29 parp:0xdd24 size:0x0002 C-string:'UNK_0xdd24'
//      UNK_0xdd28  codep:0x1d29 parp:0xdd28 size:0x0004 C-string:'UNK_0xdd28'
//      UNK_0xdd2e  codep:0x224c parp:0xdd2e size:0x0006 C-string:'UNK_0xdd2e'
//      UNK_0xdd36  codep:0x224c parp:0xdd36 size:0x000a C-string:'UNK_0xdd36'
//      UNK_0xdd42  codep:0x224c parp:0xdd42 size:0x0008 C-string:'UNK_0xdd42'
//      UNK_0xdd4c  codep:0x224c parp:0xdd4c size:0x000e C-string:'UNK_0xdd4c'
//      UNK_0xdd5c  codep:0x224c parp:0xdd5c size:0x0006 C-string:'UNK_0xdd5c'
//      UNK_0xdd64  codep:0x224c parp:0xdd64 size:0x000a C-string:'UNK_0xdd64'
//      UNK_0xdd70  codep:0x224c parp:0xdd70 size:0x0012 C-string:'UNK_0xdd70'
//      UNK_0xdd84  codep:0x7394 parp:0xdd84 size:0x0006 C-string:'UNK_0xdd84'
//      UNK_0xdd8c  codep:0x7394 parp:0xdd8c size:0x0006 C-string:'UNK_0xdd8c'
//      UNK_0xdd94  codep:0x7394 parp:0xdd94 size:0x0006 C-string:'UNK_0xdd94'
//      UNK_0xdd9c  codep:0x7394 parp:0xdd9c size:0x0006 C-string:'UNK_0xdd9c'
//      UNK_0xdda4  codep:0x7394 parp:0xdda4 size:0x0006 C-string:'UNK_0xdda4'
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
//      UNK_0xdecf  codep:0x224c parp:0xdecf size:0x003a C-string:'UNK_0xdecf'
//      UNK_0xdf0b  codep:0x224c parp:0xdf0b size:0x000a C-string:'UNK_0xdf0b'
//      UNK_0xdf17  codep:0x224c parp:0xdf17 size:0x0012 C-string:'UNK_0xdf17'
//            X=-1  codep:0x4b3b parp:0xdf32 size:0x0010 C-string:'X_eq__dash_1'
//             X=0  codep:0x4b3b parp:0xdf4a size:0x0010 C-string:'X_eq_0'
//             X=1  codep:0x4b3b parp:0xdf62 size:0x0010 C-string:'X_eq_1'
//      KEY>ORIENT  codep:0x4b3b parp:0xdf81 size:0x0010 C-string:'KEY_gt_ORIENT'
//      UNK_0xdf93  codep:0x224c parp:0xdf93 size:0x0018 C-string:'UNK_0xdf93'
//      UNK_0xdfad  codep:0x224c parp:0xdfad size:0x0008 C-string:'UNK_0xdfad'
//      UNK_0xdfb7  codep:0x224c parp:0xdfb7 size:0x000c C-string:'UNK_0xdfb7'
//      UNK_0xdfc5  codep:0x224c parp:0xdfc5 size:0x000c C-string:'UNK_0xdfc5'
//      UNK_0xdfd3  codep:0x224c parp:0xdfd3 size:0x0010 C-string:'UNK_0xdfd3'
//      UNK_0xdfe5  codep:0x224c parp:0xdfe5 size:0x000c C-string:'UNK_0xdfe5'
//      UNK_0xdff3  codep:0x224c parp:0xdff3 size:0x000c C-string:'UNK_0xdff3'
//      UNK_0xe001  codep:0x224c parp:0xe001 size:0x000c C-string:'UNK_0xe001'
//      UNK_0xe00f  codep:0x224c parp:0xe00f size:0x0008 C-string:'UNK_0xe00f'
//      UNK_0xe019  codep:0x224c parp:0xe019 size:0x001c C-string:'UNK_0xe019'
//      UNK_0xe037  codep:0x224c parp:0xe037 size:0x001c C-string:'UNK_0xe037'
//      UNK_0xe055  codep:0x224c parp:0xe055 size:0x003c C-string:'UNK_0xe055'
//      UNK_0xe093  codep:0x7420 parp:0xe093 size:0x0003 C-string:'UNK_0xe093'
//      UNK_0xe098  codep:0x224c parp:0xe098 size:0x0008 C-string:'UNK_0xe098'
//      UNK_0xe0a2  codep:0x224c parp:0xe0a2 size:0x000a C-string:'UNK_0xe0a2'
//      UNK_0xe0ae  codep:0x224c parp:0xe0ae size:0x0010 C-string:'UNK_0xe0ae'
//      UNK_0xe0c0  codep:0x3b74 parp:0xe0c0 size:0x0004 C-string:'UNK_0xe0c0'
//      UNK_0xe0c6  codep:0x1d29 parp:0xe0c6 size:0x0004 C-string:'UNK_0xe0c6'
//      UNK_0xe0cc  codep:0x224c parp:0xe0cc size:0x0010 C-string:'UNK_0xe0cc'
//      UNK_0xe0de  codep:0x224c parp:0xe0de size:0x000a C-string:'UNK_0xe0de'
//      UNK_0xe0ea  codep:0x224c parp:0xe0ea size:0x0008 C-string:'UNK_0xe0ea'
//      UNK_0xe0f4  codep:0x2214 parp:0xe0f4 size:0x0002 C-string:'UNK_0xe0f4'
//      UNK_0xe0f8  codep:0x2214 parp:0xe0f8 size:0x0002 C-string:'UNK_0xe0f8'
//      UNK_0xe0fc  codep:0x224c parp:0xe0fc size:0x0022 C-string:'UNK_0xe0fc'
//      UNK_0xe120  codep:0x224c parp:0xe120 size:0x0008 C-string:'UNK_0xe120'
//      UNK_0xe12a  codep:0x224c parp:0xe12a size:0x001c C-string:'UNK_0xe12a'
//      UNK_0xe148  codep:0x1d29 parp:0xe148 size:0x0002 C-string:'UNK_0xe148'
//      UNK_0xe14c  codep:0x1d29 parp:0xe14c size:0x0004 C-string:'UNK_0xe14c'
//      UNK_0xe152  codep:0x224c parp:0xe152 size:0x000e C-string:'UNK_0xe152'
//      UNK_0xe162  codep:0x224c parp:0xe162 size:0x0014 C-string:'UNK_0xe162'
//      UNK_0xe178  codep:0x224c parp:0xe178 size:0x0022 C-string:'UNK_0xe178'
//      UNK_0xe19c  codep:0x224c parp:0xe19c size:0x0022 C-string:'UNK_0xe19c'
//      UNK_0xe1c0  codep:0x224c parp:0xe1c0 size:0x000a C-string:'UNK_0xe1c0'
//      UNK_0xe1cc  codep:0x224c parp:0xe1cc size:0x000a C-string:'UNK_0xe1cc'
//      UNK_0xe1d8  codep:0x224c parp:0xe1d8 size:0x000c C-string:'UNK_0xe1d8'
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
//      UNK_0xe2ff  codep:0x224c parp:0xe2ff size:0x001c C-string:'UNK_0xe2ff'
//      UNK_0xe31d  codep:0x224c parp:0xe31d size:0x0016 C-string:'UNK_0xe31d'
//             C>C  codep:0x4b3b parp:0xe33b size:0x001a C-string:'C_gt_C'
//      UNK_0xe357  codep:0x224c parp:0xe357 size:0x0016 C-string:'UNK_0xe357'
//      UNK_0xe36f  codep:0x224c parp:0xe36f size:0x0006 C-string:'UNK_0xe36f'
//      UNK_0xe377  codep:0x224c parp:0xe377 size:0x000a C-string:'UNK_0xe377'
//      UNK_0xe383  codep:0x224c parp:0xe383 size:0x0012 C-string:'UNK_0xe383'
//      UNK_0xe397  codep:0x224c parp:0xe397 size:0x0020 C-string:'UNK_0xe397'
//      UNK_0xe3b9  codep:0x224c parp:0xe3b9 size:0x001e C-string:'UNK_0xe3b9'
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
//      UNK_0xe690  codep:0x224c parp:0xe690 size:0x0032 C-string:'UNK_0xe690'
//      UNK_0xe6c4  codep:0x224c parp:0xe6c4 size:0x0012 C-string:'UNK_0xe6c4'
//      UNK_0xe6d8  codep:0x224c parp:0xe6d8 size:0x002a C-string:'UNK_0xe6d8'
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
//      UNK_0xe9a2  codep:0x224c parp:0xe9a2 size:0x0030 C-string:'UNK_0xe9a2'
//      UNK_0xe9d4  codep:0x224c parp:0xe9d4 size:0x0056 C-string:'UNK_0xe9d4'
//      UNK_0xea2c  codep:0x1d29 parp:0xea2c size:0x0004 C-string:'UNK_0xea2c'
//      UNK_0xea32  codep:0x224c parp:0xea32 size:0x002a C-string:'UNK_0xea32'
//      UNK_0xea5e  codep:0x224c parp:0xea5e size:0x0030 C-string:'UNK_0xea5e'
//      UNK_0xea90  codep:0x224c parp:0xea90 size:0x0052 C-string:'UNK_0xea90'
//      UNK_0xeae4  codep:0x224c parp:0xeae4 size:0x0041 C-string:'UNK_0xeae4'
//      UNK_0xeb27  codep:0x224c parp:0xeb27 size:0x001c C-string:'UNK_0xeb27'
//      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0034 C-string:'UNK_0xeb45'
//      UNK_0xeb7b  codep:0x224c parp:0xeb7b size:0x001c C-string:'UNK_0xeb7b'
//      UNK_0xeb99  codep:0x224c parp:0xeb99 size:0x001e C-string:'UNK_0xeb99'
//      UNK_0xebb9  codep:0x224c parp:0xebb9 size:0x0022 C-string:'UNK_0xebb9'
//      UNK_0xebdd  codep:0x224c parp:0xebdd size:0x0036 C-string:'UNK_0xebdd'
//      UNK_0xec15  codep:0x224c parp:0xec15 size:0x0006 C-string:'UNK_0xec15'
//      UNK_0xec1d  codep:0x224c parp:0xec1d size:0x0012 C-string:'UNK_0xec1d'
//      UNK_0xec31  codep:0x224c parp:0xec31 size:0x0012 C-string:'UNK_0xec31'
//      UNK_0xec45  codep:0x224c parp:0xec45 size:0x001a C-string:'UNK_0xec45'
//      ?APPROACHI  codep:0x224c parp:0xec6e size:0x000a C-string:'_ask_APPROACHI'
//      UNK_0xec7a  codep:0x224c parp:0xec7a size:0x002e C-string:'UNK_0xec7a'
//      UNK_0xecaa  codep:0x224c parp:0xecaa size:0x002e C-string:'UNK_0xecaa'
//      UNK_0xecda  codep:0x224c parp:0xecda size:0x0008 C-string:'UNK_0xecda'
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
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__ask_A_dash_WEAP; // ?A-WEAP
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_INVIS_dash_I; // INVIS-I
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp__at__co_0_star_1_sc_; // @,0*1;
extern const unsigned short int pp__ask_UF; // ?UF
extern const unsigned short int pp__ask_AF; // ?AF
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp__i_UNNEST; // 'UNNEST
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp__ask_3; // ?3
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp__i__dot_BACKG; // '.BACKG
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IINDEX; // IINDEX
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp__ask_HEAL; // ?HEAL
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__ask_NEB; // ?NEB
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp__ask_COMBAT; // ?COMBAT
extern const unsigned short int pp_TIME_dash_PA; // TIME-PA
extern const unsigned short int pp__i__dot_VITAL; // '.VITAL
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHIC; // '.VEHIC
extern const unsigned short int pp__i_VEHICL; // 'VEHICL
extern const unsigned short int pp__i_CREW_dash_C; // 'CREW-C
extern const unsigned short int pp__i_EXTERN; // 'EXTERN
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp__i_TREATM; // 'TREATM
extern const unsigned short int pp_WEAPON_dash_; // WEAPON-
extern const unsigned short int pp__h_CRIT; // ^CRIT
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_ATIME; // ATIME
extern const unsigned short int pp_NTIME; // NTIME
extern const unsigned short int pp__i_UHL; // 'UHL
extern const unsigned short int pp_SMART; // SMART
extern const unsigned short int pp_LASTAP; // LASTAP
extern const unsigned short int pp__n_MISS; // #MISS
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void M_star__slash_(); // M*/
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void BEEP(); // BEEP
void _dot_(); // .
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void _ask_NULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_LAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void ILAST(); // ILAST
void IINSERT(); // IINSERT
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void ALL(); // ALL
void ICREATE(); // ICREATE
void SAVE_dash_OV(); // SAVE-OV
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void _ask_CGA(); // ?CGA
void NBCLR(); // NBCLR
void _ex_COLOR(); // !COLOR
void BFILL(); // BFILL
void LLINE(); // LLINE
void _dot_CIRCLE_1(); // .CIRCLE_1
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void _at_IX(); // @IX
void _at_IY(); // @IY
void _at_ID(); // @ID
void _at_IL(); // @IL
void _at_IH(); // @IH
void _ex_IX(); // !IX
void _ex_IY(); // !IY
void _ex_ID(); // !ID
void POINT_gt_I(); // POINT>I
void _dot_ICON(); // .ICON
void _dot_LOCAL_dash_(); // .LOCAL-
void _ask_ICONS_dash__2(); // ?ICONS-_2
void _ask_ICON_eq_I(); // ?ICON=I
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void BEEPON_2(); // BEEPON_2
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _i_KEY(); // 'KEY
void _ask_TRIG(); // ?TRIG
void _do__ex_(); // $!
void DISTRAC(); // DISTRAC
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
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _at_EXECUTE(); // @EXECUTE
void ON_1(); // ON_1
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void CI(); // CI
void DISPLAY(); // DISPLAY
void WLD_gt_SCR(); // WLD>SCR
void _ro_XYSCAN(); // (XYSCAN


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

const unsigned short int pp_UNK_0xe0c6 = 0xe0c6; // UNK_0xe0c6 size: 4
// {0x56, 0x3a, 0x20, 0x4f}

const unsigned short int pp_UNK_0xe148 = 0xe148; // UNK_0xe148 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe14c = 0xe14c; // UNK_0xe14c size: 4
// {0x56, 0x3a, 0x20, 0xca}

const unsigned short int pp_UNK_0xe2be = 0xe2be; // UNK_0xe2be size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xea2c = 0xea2c; // UNK_0xea2c size: 4
// {0x56, 0x3a, 0x20, 0xd0}

const unsigned short int pp_UNK_0xf052 = 0xf052; // UNK_0xf052 size: 32
// {0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00}

const unsigned short int pp_UNK_0xf158 = 0xf158; // UNK_0xf158 size: 4
// {0x56, 0x3a, 0x20, 0x00}


const unsigned short int cc_UNK_0xe0f4 = 0xe0f4; // UNK_0xe0f4
const unsigned short int cc_UNK_0xe0f8 = 0xe0f8; // UNK_0xe0f8
const unsigned short int cc_UNK_0xe1e6 = 0xe1e6; // UNK_0xe1e6
const unsigned short int cc_UNK_0xe2b6 = 0xe2b6; // UNK_0xe2b6
const unsigned short int cc_UNK_0xe2ba = 0xe2ba; // UNK_0xe2ba
const unsigned short int cc_UNK_0xe56e = 0xe56e; // UNK_0xe56e


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


// ================================================
// 0xdd34: WORD 'UNK_0xdd36' codep=0x224c parp=0xdd36
// ================================================

void UNK_0xdd36() // UNK_0xdd36
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xdd40: WORD 'UNK_0xdd42' codep=0x224c parp=0xdd42
// ================================================

void UNK_0xdd42() // UNK_0xdd42
{
  Push(0);
  Push(2);
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

// 0xdd7e: db 0x14 0x22 0x19 0x00 ' "  '

// ================================================
// 0xdd82: WORD 'UNK_0xdd84' codep=0x7394 parp=0xdd84
// ================================================
// 0xdd84: db 0x19 0x0b 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xdd8a: WORD 'UNK_0xdd8c' codep=0x7394 parp=0xdd8c
// ================================================
// 0xdd8c: db 0x19 0x0e 0x02 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xdd92: WORD 'UNK_0xdd94' codep=0x7394 parp=0xdd94
// ================================================
// 0xdd94: db 0x19 0x13 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xdd9a: WORD 'UNK_0xdd9c' codep=0x7394 parp=0xdd9c
// ================================================
// 0xdd9c: db 0x19 0x12 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xdda2: WORD 'UNK_0xdda4' codep=0x7394 parp=0xdda4
// ================================================
// 0xdda4: db 0x19 0x14 0x01 0x24 0x5d 0x6b '   $]k'

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
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
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
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xde79: WORD 'UNK_0xde7b' codep=0x224c parp=0xde7b
// ================================================

void UNK_0xde7b() // UNK_0xde7b
{
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
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
  do
  {
    Push(-1);
    Push(2);
    RRND(); // RRND
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
}


// ================================================
// 0xdead: WORD 'UNK_0xdeaf' codep=0x224c parp=0xdeaf
// ================================================

void UNK_0xdeaf() // UNK_0xdeaf
{
  Push(0);
  Push(4);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(0xfffa);
    Push(6);
    RRND(); // RRND
    return;
  }
  Push(0);
}


// ================================================
// 0xdecd: WORD 'UNK_0xdecf' codep=0x224c parp=0xdecf
// ================================================

void UNK_0xdecf() // UNK_0xdecf
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push2Words("0.");
    return;
  }
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  Push(a); // R>
}


// ================================================
// 0xdf09: WORD 'UNK_0xdf0b' codep=0x224c parp=0xdf0b
// ================================================

void UNK_0xdf0b() // UNK_0xdf0b
{
  _at_INST_dash_C(); // @INST-C
  Push(0x0019);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xdf15: WORD 'UNK_0xdf17' codep=0x224c parp=0xdf17
// ================================================

void UNK_0xdf17() // UNK_0xdf17
{
  UNK_0xdf0b(); // UNK_0xdf0b
  if (Pop() != 0)
  {
    Push(0x65ec); // IFIELD(UNK_0xddc0)
  } else
  {
    Push(0x662a); // IFIELD(UNK_0xde28)
  }
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xdf29: WORD 'X=-1' codep=0x4b3b parp=0xdf32
// ================================================

void X_eq__dash_1() // X=-1
{
  switch(Pop()) // X=-1
  {
  case 65535:
    Push(5);
    break;
  case 1:
    Push(3);
    break;
  case 0:
    Push(4);
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf42: WORD 'X=0' codep=0x4b3b parp=0xdf4a
// ================================================

void X_eq_0() // X=0
{
  switch(Pop()) // X=0
  {
  case 65535:
    Push(6);
    break;
  case 1:
    Push(2);
    break;
  case 0:
    UNK_0xdf17(); // UNK_0xdf17
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf5a: WORD 'X=1' codep=0x4b3b parp=0xdf62
// ================================================

void X_eq_1() // X=1
{
  switch(Pop()) // X=1
  {
  case 65535:
    Push(7);
    break;
  case 1:
    Push(1);
    break;
  case 0:
    Push(0);
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf72: WORD 'KEY>ORIENT' codep=0x4b3b parp=0xdf81
// ================================================

void KEY_gt_ORIENT() // KEY>ORIENT
{
  switch(Pop()) // KEY>ORIENT
  {
  case 65535:
    X_eq__dash_1(); // X=-1 case
    break;
  case 0:
    X_eq_0(); // X=0 case
    break;
  case 1:
    X_eq_1(); // X=1 case
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf91: WORD 'UNK_0xdf93' codep=0x224c parp=0xdf93
// ================================================

void UNK_0xdf93() // UNK_0xdf93
{
  Push(pp_UNK_0xde59); // UNK_0xde59
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(4);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xde59); // UNK_0xde59
  _ex__2(); // !_2
}


// ================================================
// 0xdfab: WORD 'UNK_0xdfad' codep=0x224c parp=0xdfad
// ================================================

void UNK_0xdfad() // UNK_0xdfad
{
  UNK_0xdd36(); // UNK_0xdd36
  Push(3);
  _st_(); // <
}


// ================================================
// 0xdfb5: WORD 'UNK_0xdfb7' codep=0x224c parp=0xdfb7
// ================================================

void UNK_0xdfb7() // UNK_0xdfb7
{
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xde5d(); // UNK_0xde5d
  Push(3);
  _st_(); // <
}


// ================================================
// 0xdfc3: WORD 'UNK_0xdfc5' codep=0x224c parp=0xdfc5
// ================================================

void UNK_0xdfc5() // UNK_0xdfc5
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  Push(6);
  _eq_SPECIE(); // =SPECIE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdfd1: WORD 'UNK_0xdfd3' codep=0x224c parp=0xdfd3
// ================================================

void UNK_0xdfd3() // UNK_0xdfd3
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(3);
  Push(6);
  WITHIN(); // WITHIN
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdfe3: WORD 'UNK_0xdfe5' codep=0x224c parp=0xdfe5
// ================================================

void UNK_0xdfe5() // UNK_0xdfe5
{
  Push(Read16(cc__ask_A_dash_WEAP)); // ?A-WEAP
  LoadData("UNK_0xdd9c"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdff1: WORD 'UNK_0xdff3' codep=0x224c parp=0xdff3
// ================================================

void UNK_0xdff3() // UNK_0xdff3
{
  Push(Read16(cc__ask_A_dash_WEAP)); // ?A-WEAP
  LoadData("UNK_0xdda4"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfff: WORD 'UNK_0xe001' codep=0x224c parp=0xe001
// ================================================

void UNK_0xe001() // UNK_0xe001
{
  Push(Read16(cc__ask_A_dash_WEAP)); // ?A-WEAP
  LoadData("UNK_0xdd94"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe00d: WORD 'UNK_0xe00f' codep=0x224c parp=0xe00f
// ================================================

void UNK_0xe00f() // UNK_0xe00f
{
  Push(Read16(cc_MPS)); // MPS
  Push(5);
  _star__slash_(); // */
}


// ================================================
// 0xe017: WORD 'UNK_0xe019' codep=0x224c parp=0xe019
// ================================================

void UNK_0xe019() // UNK_0xe019
{
  LoadData("UNK_0xdd84"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe00f(); // UNK_0xe00f
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(6);
  Push(Pop() * Pop()); // *
  Push(0x005a);
  MIN(); // MIN
  UNK_0xdd36(); // UNK_0xdd36
  _st_(); // <
}


// ================================================
// 0xe035: WORD 'UNK_0xe037' codep=0x224c parp=0xe037
// ================================================

void UNK_0xe037() // UNK_0xe037
{
  LoadData("UNK_0xdd84"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe00f(); // UNK_0xe00f
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(8);
  Push(Pop() * Pop()); // *
  Push(0x005a);
  MIN(); // MIN
  UNK_0xdd36(); // UNK_0xdd36
  _st_(); // <
}


// ================================================
// 0xe053: WORD 'UNK_0xe055' codep=0x224c parp=0xe055
// ================================================

void UNK_0xe055() // UNK_0xe055
{
  UNK_0xdd16(); // UNK_0xdd16
  Push(Read16(cc_TRUE)); // TRUE
  UNK_0xdfd3(); // UNK_0xdfd3
  if (Pop() != 0)
  {
    Push(0x001d);
    Push(7);
    IFIND(); // IFIND
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() & Pop()); // AND
  }
  UNK_0xdfc5(); // UNK_0xdfc5
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    IFIRST(); // IFIRST
    Push(0x001d);
    Push(6);
    IFIND(); // IFIND
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() & Pop()); // AND
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  UNK_0xe019(); // UNK_0xe019
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe091: WORD 'UNK_0xe093' codep=0x7420 parp=0xe093
// ================================================
// 0xe093: db 0x34 0x0c 0x01 '4  '

// ================================================
// 0xe096: WORD 'UNK_0xe098' codep=0x224c parp=0xe098
// ================================================

void UNK_0xe098() // UNK_0xe098
{
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0a0: WORD 'UNK_0xe0a2' codep=0x224c parp=0xe0a2
// ================================================

void UNK_0xe0a2() // UNK_0xe0a2
{
  UNK_0xdd36(); // UNK_0xdd36
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe0ac: WORD 'UNK_0xe0ae' codep=0x224c parp=0xe0ae
// ================================================

void UNK_0xe0ae() // UNK_0xe0ae
{
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x65ed); // IFIELD(UNK_0xe093)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0be: WORD 'UNK_0xe0c0' codep=0x3b74 parp=0xe0c0
// ================================================
// 0xe0c0: db 0x01 0x00 0xc0 0xd4 '    '

// ================================================
// 0xe0c4: WORD 'UNK_0xe0c6' codep=0x1d29 parp=0xe0c6
// ================================================
// 0xe0c6: db 0x56 0x3a 0x20 0x4f 'V: O'

// ================================================
// 0xe0ca: WORD 'UNK_0xe0cc' codep=0x224c parp=0xe0cc
// ================================================

void UNK_0xe0cc() // UNK_0xe0cc
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push2Words("UNK_0xe0c0");
  Push(pp_UNK_0xe0c6); // UNK_0xe0c6
  _2_at_(); // 2@
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe0dc: WORD 'UNK_0xe0de' codep=0x224c parp=0xe0de
// ================================================

void UNK_0xe0de() // UNK_0xe0de
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe0c6); // UNK_0xe0c6
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


// ================================================
// 0xe0f2: WORD 'UNK_0xe0f4' codep=0x2214 parp=0xe0f4
// ================================================
// 0xe0f4: db 0x0b 0x00 '  '

// ================================================
// 0xe0f6: WORD 'UNK_0xe0f8' codep=0x2214 parp=0xe0f8
// ================================================
// 0xe0f8: db 0x05 0x00 '  '

// ================================================
// 0xe0fa: WORD 'UNK_0xe0fc' codep=0x224c parp=0xe0fc
// ================================================

void UNK_0xe0fc() // UNK_0xe0fc
{
  unsigned short int a, b;
  a = Pop(); // >R
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xdd4c(); // UNK_0xdd4c
  ROT(); // ROT
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(a)); // R@
  _st_(); // <
  b = Pop(); // >R
  _dash_(); // -
  ABS(); // ABS
  Push(b); // R>
  SWAP(); // SWAP
  Push(a); // R>
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe11e: WORD 'UNK_0xe120' codep=0x224c parp=0xe120
// ================================================

void UNK_0xe120() // UNK_0xe120
{
  Push(Read16(cc_UNK_0xe0f4)); // UNK_0xe0f4
  UNK_0xe0fc(); // UNK_0xe0fc
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe128: WORD 'UNK_0xe12a' codep=0x224c parp=0xe12a
// ================================================

void UNK_0xe12a() // UNK_0xe12a
{
  Push(Read16(cc_UNK_0xe0f8)); // UNK_0xe0f8
  UNK_0xe0fc(); // UNK_0xe0fc
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
}

// 0xe138: db 0x4c 0x22 0x1e 0xe1 0x07 0x13 0x28 0xe1 0x07 0x13 0xf5 0x12 0x90 0x16 'L"    (       '

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
  Push(pp_UNK_0xe148); // UNK_0xe148
  _st__ex__gt_(); // <!>
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe14c); // UNK_0xe14c
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe160: WORD 'UNK_0xe162' codep=0x224c parp=0xe162
// ================================================

void UNK_0xe162() // UNK_0xe162
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe14c); // UNK_0xe14c
  _2_at_(); // 2@
  Push(pp_UNK_0xe148); // UNK_0xe148
  Push(Read16(Pop())); // @
  Push(0);
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


// ================================================
// 0xe1be: WORD 'UNK_0xe1c0' codep=0x224c parp=0xe1c0
// ================================================

void UNK_0xe1c0() // UNK_0xe1c0
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe1ca: WORD 'UNK_0xe1cc' codep=0x224c parp=0xe1cc
// ================================================

void UNK_0xe1cc() // UNK_0xe1cc
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push(8);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe1d6: WORD 'UNK_0xe1d8' codep=0x224c parp=0xe1d8
// ================================================

void UNK_0xe1d8() // UNK_0xe1d8
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0010);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe1e4: WORD 'UNK_0xe1e6' codep=0x2214 parp=0xe1e6
// ================================================
// 0xe1e6: db 0x1d 0x00 '  '

// ================================================
// 0xe1e8: WORD 'UNK_0xe1ea' codep=0x224c parp=0xe1ea
// ================================================

void UNK_0xe1ea() // UNK_0xe1ea
{
  Push(pp__n_MISS); // #MISS
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0);
  MAX(); // MAX
  Push(pp__n_MISS); // #MISS
  _ex__2(); // !_2
}


// ================================================
// 0xe1fa: WORD 'UNK_0xe1fc' codep=0x224c parp=0xe1fc
// ================================================

void UNK_0xe1fc() // UNK_0xe1fc
{
  Push(1);
  Push(pp__n_MISS); // #MISS
  _plus__ex__2(); // +!_2
  Push(pp__n_MISS); // #MISS
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xe1e6)); // UNK_0xe1e6
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe1ea(); // UNK_0xe1ea
  UNK_0xdd16(); // UNK_0xdd16
  ILAST(); // ILAST
  IDELETE(); // IDELETE
  Push(2);
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
  Push(8);
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
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe260: WORD 'UNK_0xe262' codep=0x224c parp=0xe262
// ================================================

void UNK_0xe262() // UNK_0xe262
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0xc0a1); // probable 'OV/STX'
    return;
  }
  Push(0xc090); // probable 'OV/STA'
}


// ================================================
// 0xe27c: WORD 'UNK_0xe27e' codep=0x224c parp=0xe27e
// ================================================

void UNK_0xe27e() // UNK_0xe27e
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(3);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0xbcb8); // probable 'OVDBA'
    return;
  }
  Push(0xbc98); // probable 'OV/DA'
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
  if (Pop() != 0)
  {
    UNK_0xe262(); // UNK_0xe262
  } else
  {
    UNK_0xe27e(); // UNK_0xe27e
  }
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
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(pp__n_MISS); // #MISS
  _099(); // 099
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe31b: WORD 'UNK_0xe31d' codep=0x224c parp=0xe31d
// ================================================

void UNK_0xe31d() // UNK_0xe31d
{
  Push(0x6602); // IFIELD(UNK_0xe2e5)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_UNK_0xe2ba)); // UNK_0xe2ba
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    SetColor("RED");
    return;
  }
  SetColor("LT-BLUE");
}


// ================================================
// 0xe333: WORD 'C>C' codep=0x4b3b parp=0xe33b
// ================================================

void C_gt_C() // C>C
{
  switch(Pop()) // C>C
  {
  case 6:
    SetColor("WHITE");
    break;
  case 7:
    SetColor("VIOLET");
    break;
  case 10:
    SetColor("PINK");
    break;
  default:
    UNK_0xe31d(); // UNK_0xe31d
    break;

  }
}
// 0xe34b: db 0x4c 0x22 0xf7 0xe2 0x39 0xe3 0x9d 0x86 0x90 0x16 'L"  9     '

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

// 0xe361: db 0x4c 0x22 0xca 0xe2 0xae 0x0b 0xcf 0xe2 0xae 0x0b 0x90 0x16 'L"          '

// ================================================
// 0xe36d: WORD 'UNK_0xe36f' codep=0x224c parp=0xe36f
// ================================================

void UNK_0xe36f() // UNK_0xe36f
{
  PRINT(".", 1); // (.")
}


// ================================================
// 0xe375: WORD 'UNK_0xe377' codep=0x224c parp=0xe377
// ================================================

void UNK_0xe377() // UNK_0xe377
{
  _gt_2FONT(); // >2FONT
  PRINT(".", 1); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe381: WORD 'UNK_0xe383' codep=0x224c parp=0xe383
// ================================================

void UNK_0xe383() // UNK_0xe383
{
  if (Pop() != 0)
  {
    PRINT("+", 1); // (.")
    return;
  }
  PRINT("*", 1); // (.")
}


// ================================================
// 0xe395: WORD 'UNK_0xe397' codep=0x224c parp=0xe397
// ================================================

void UNK_0xe397() // UNK_0xe397
{
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  if (Pop() != 0)
  {
    Push(5);
    _dot_CIRCLE_1(); // .CIRCLE_1
    return;
  }
  Push(4);
  _dot_CIRCLE_1(); // .CIRCLE_1
}


// ================================================
// 0xe3b7: WORD 'UNK_0xe3b9' codep=0x224c parp=0xe3b9
// ================================================

void UNK_0xe3b9() // UNK_0xe3b9
{
  Push(0x65ec); // IFIELD(UNK_0xe2c2)
  Push(Read16(Pop())); // @
  Push(2);
  MOD(); // MOD
  UNK_0xe2f9(); // UNK_0xe2f9
  Push(6);
  Push(8);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    UNK_0xe397(); // UNK_0xe397
    return;
  }
  UNK_0xe383(); // UNK_0xe383
}


// ================================================
// 0xe3d7: WORD 'SCALE>.MIS' codep=0x4b3b parp=0xe3e6
// ================================================

void SCALE_gt__dot_MIS() // SCALE>.MIS
{
  switch(Pop()) // SCALE>.MIS
  {
  case 2:
    UNK_0xe36f(); // UNK_0xe36f
    break;
  case 4:
    UNK_0xe377(); // UNK_0xe377
    break;
  case 8:
    UNK_0xe3b9(); // UNK_0xe3b9
    break;
  default:
    NOP(); // NOP
    break;

  }
}
// 0xe3f6: db 0x4c 0x22 0x55 0xe3 0xd3 0x92 0x17 0x93 0xf2 0x0e 0x7f 0x3b 0x72 0x0f 0xf2 0x0e 0x7b 0x9a 0x4b 0xe3 0x20 0x64 0xae 0x0b 0xe4 0xe3 0x90 0x16 'L"U       ;r   { K  d      '

// ================================================
// 0xe412: WORD 'UNK_0xe414' codep=0x224c parp=0xe414
// ================================================

void UNK_0xe414() // UNK_0xe414
{
  UNK_0xdd16(); // UNK_0xdd16
  Push(0xe3f8);
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe422: WORD 'UNK_0xe424' codep=0x224c parp=0xe424
// ================================================

void UNK_0xe424() // UNK_0xe424
{
  Push(0x6602); // IFIELD(UNK_0xe2e5)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_UNK_0xe2ba)); // UNK_0xe2ba
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push2Words("*SHIP");
  } else
  {
    Push(pp_UNK_0xdd28); // UNK_0xdd28
    _2_at_(); // 2@
  }
  Push(0x6607); // IFIELD(UNK_0xe2f4)
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe440: WORD 'UNK_0xe442' codep=0x224c parp=0xe442
// ================================================

void UNK_0xe442() // UNK_0xe442
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0);
  SWAP(); // SWAP
  Push(1);
  Push(a); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xe450: WORD 'UNK_0xe452' codep=0x224c parp=0xe452
// ================================================

void UNK_0xe452() // UNK_0xe452
{
  unsigned short int a;
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
  a = Pop(); // >R
  Push(Read16(a)); // R@
  UNK_0xe442(); // UNK_0xe442
  Push(0x65fc); // IFIELD(UNK_0xe2db)
  _2_ex__2(); // 2!_2
  Push(a); // R>
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
  unsigned short int a, i, imax;
  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      POINT_gt_I(); // POINT>I
      _dot_ICON(); // .ICON
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(a); // R>
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe4be: WORD 'UNK_0xe4c0' codep=0x224c parp=0xe4c0
// ================================================

void UNK_0xe4c0() // UNK_0xe4c0
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
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
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  Push(pp__ask_UF); // ?UF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
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
}


// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  Push(pp__ask_AF); // ?AF
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
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
  unsigned short int i, imax, j, jmax;
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x03e8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BEEPON_2(); // BEEPON_2
    Push(i); // I
    TONE(); // TONE
    DISPLAY(); // DISPLAY
    Push(0x000c);
    Push(Read16(cc_MPS)); // MPS
    Push(Pop() * Pop()); // *
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    Push(0x0014);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

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
  unsigned short int i, imax, j, jmax;
  Push(0x0064);
  Push(0x03e8);
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("RED");
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(0xe56e); // probable 'UNK_0xe56e'
  _ex__2(); // !_2
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BEEPON_2(); // BEEPON_2
    Push(i); // I
    Push(i); // I
    Push(Pop()*2); // 2*
    RRND(); // RRND
    TONE(); // TONE
    Push(3);
    Push(Read16(cc_MPS)); // MPS
    Push(Pop() * Pop()); // *
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    Push(Read16(cc_UNK_0xe56e)); // UNK_0xe56e
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe5bc: WORD 'UNK_0xe5be' codep=0x224c parp=0xe5be
// ================================================

void UNK_0xe5be() // UNK_0xe5be
{
  unsigned short int a;
  UNK_0xe1fc(); // UNK_0xe1fc
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
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
  Push(a); // R>
  Push(7);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0x0060);
  } else
  {
    Push(0x7fff);
  }
  Push(0x6605); // IFIELD(UNK_0xe2ef)
  _ex__2(); // !_2
  UNK_0xe536(); // UNK_0xe536
  Push(2);
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
  unsigned short int a, i, imax;
  UNK_0xe357(); // UNK_0xe357
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  OVER(); // OVER
  a = Pop(); // >R
  SWAP(); // SWAP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    SWAP(); // SWAP
    POINT_gt_I(); // POINT>I
    Push(0x6602); // IFIELD(UNK_0xe2e5)
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(cc_UNK_0xe2ba)); // UNK_0xe2ba
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      UNK_0xdd70(); // UNK_0xdd70
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(1);
      }
    } else
    {
      Pop(); // DROP
      Push(1);
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
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
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  UNK_0xdd64(); // UNK_0xdd64
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xe4c0(); // UNK_0xe4c0
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0017);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    UNK_0xe516(); // UNK_0xe516
  }
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe6c2: WORD 'UNK_0xe6c4' codep=0x224c parp=0xe6c4
// ================================================

void UNK_0xe6c4() // UNK_0xe6c4
{
  UNK_0xdecf(); // UNK_0xdecf
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(Pop() + Pop()); // +
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
}


// ================================================
// 0xe6d6: WORD 'UNK_0xe6d8' codep=0x224c parp=0xe6d8
// ================================================

void UNK_0xe6d8() // UNK_0xe6d8
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    UNK_0xde9f(); // UNK_0xde9f
    UNK_0xde9f(); // UNK_0xde9f
  } else
  {
    UNK_0xdecf(); // UNK_0xdecf
  }
  Push(-Pop()); // NEGATE
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(-Pop()); // NEGATE
  Push(Pop() + Pop()); // +
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
}


// ================================================
// 0xe702: WORD 'UNK_0xe704' codep=0x224c parp=0xe704
// ================================================

void UNK_0xe704() // UNK_0xe704
{
  do
  {
    _ask_LAST(); // ?LAST
    if (Pop() == 0) Push(1); else Push(0); // NOT
    UNK_0xe61a(); // UNK_0xe61a
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    INEXT(); // INEXT
  } while(1);
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
  Push(6);
  Push(8);
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
  Push(7);
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
  do
  {
    UNK_0xe2f9(); // UNK_0xe2f9
    Push(7);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(0x6603); // IFIELD(UNK_0xe2ea)
    Push(Read16(Pop())); // @
    Push(3);
    MOD(); // MOD
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xe72c(); // UNK_0xe72c
      UNK_0xe4d0(); // UNK_0xe4d0
    }
    Push(1);
    Push(0x6603); // IFIELD(UNK_0xe2ea)
    _plus__ex__2(); // +!_2
    Push(0x6605); // IFIELD(UNK_0xe2ef)
    Push(Read16(Pop())); // @
    Push(0x6603); // IFIELD(UNK_0xe2ea)
    Push(Read16(Pop())); // @
    _st_(); // <
    if (Pop() != 0)
    {
      UNK_0xe612(); // UNK_0xe612
      IPREV(); // IPREV
    }
    _ask_LAST(); // ?LAST
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() == 0) return;
    INEXT(); // INEXT
  } while(1);
}


// ================================================
// 0xe7a6: WORD 'UNK_0xe7a8' codep=0x224c parp=0xe7a8
// ================================================

void UNK_0xe7a8() // UNK_0xe7a8
{
  unsigned short int i, imax;
  UNK_0xdd16(); // UNK_0xdd16
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0xe764(); // UNK_0xe764
    UNK_0xe516(); // UNK_0xe516
    Push(pp_UNK_0xe2be); // UNK_0xe2be
    _099(); // 099
    UNK_0xe686(); // UNK_0xe686
    Push(pp_UNK_0xe2be); // UNK_0xe2be
    Push(Read16(Pop())); // @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        UNK_0xe704(); // UNK_0xe704
        UNK_0xe357(); // UNK_0xe357
        UNK_0xe2f9(); // UNK_0xe2f9
        Push(0x6602); // IFIELD(UNK_0xe2e5)
        Push(Read8(Pop())&0xFF); // C@
        Push(1);
        Push(0xc694); // probable 'DO-DA'
        MODULE(); // MODULE
        UNK_0xe754(); // UNK_0xe754
        i++;
      } while(i<imax); // (LOOP)

    }
  }
  UNK_0xe516(); // UNK_0xe516
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe7ea: WORD 'UNK_0xe7ec' codep=0x224c parp=0xe7ec
// ================================================

void UNK_0xe7ec() // UNK_0xe7ec
{
  Push(0);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0xdd64(); // UNK_0xdd64
    UNK_0xdecf(); // UNK_0xdecf
    SWAP(); // SWAP
    KEY_gt_ORIENT(); // KEY>ORIENT case
    Push(Read16(regsp)); // DUP
    Push(0x65ec); // IFIELD(UNK_0xddc0)
    C_ex__2(); // C!_2
    Push(0x0023);
    Push(Pop() + Pop()); // +
    _ex_ID(); // !ID
  }
  Pop(); Pop(); // 2DROP
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
  Push(4);
  Push(Pop() + Pop()); // +
  Push(8);
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
  Push(Read16(cc_INVIS_dash_I)); // INVIS-I
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe812(); // UNK_0xe812
}


// ================================================
// 0xe850: WORD 'UNK_0xe852' codep=0x224c parp=0xe852
// ================================================

void UNK_0xe852() // UNK_0xe852
{
  unsigned short int a;
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Read16(Pop())); // @
  Push(4);
  _slash_(); // /
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(a); // R>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e
// ================================================

void UNK_0xe86e() // UNK_0xe86e
{
  Push(2);
  Push(6);
  RRND(); // RRND
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe882: WORD 'UNK_0xe884' codep=0x224c parp=0xe884
// ================================================

void UNK_0xe884() // UNK_0xe884
{
  Push(4);
  Push(8);
  RRND(); // RRND
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe898: WORD 'UNK_0xe89a' codep=0x224c parp=0xe89a
// ================================================

void UNK_0xe89a() // UNK_0xe89a
{
  unsigned short int a;
  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  Push(0x662a); // IFIELD(UNK_0xde28)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x001b);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
  Push(a); // R>
  Push(pp_IINDEX); // IINDEX
  _st__ex__gt_(); // <!>
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xe8be: WORD 'UNK_0xe8c0' codep=0x224c parp=0xe8c0
// ================================================

void UNK_0xe8c0() // UNK_0xe8c0
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  Push(3);
  Push(6);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(0x0012);
  Push(0x0014);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("LT-BLUE");
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x224c parp=0xe8ec
// ================================================

void UNK_0xe8ec() // UNK_0xe8ec
{
  UNK_0xe4c0(); // UNK_0xe4c0
  Push(0xc7ce); // probable 'CSCALE'
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
  Push(pp_UNK_0xdd24); // UNK_0xdd24
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    LLINE(); // LLINE
    Push(5);
    Push(4);
    POS_dot_(); // POS.
    Push(0x661b); Push(0x0002);
    UNK_0xde37(); // UNK_0xde37
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
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
  Push(pp__10_star_END); // 10*END
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
  unsigned short int a, b;
  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  b = Pop(); // >R
  _gt_MAINVI(); // >MAINVI
  UNK_0xe4f0(); // UNK_0xe4f0
  UNK_0xe414(); // UNK_0xe414
  UNK_0xe852(); // UNK_0xe852
  _2SWAP(); // 2SWAP
  UNK_0xe852(); // UNK_0xe852
  Push(b); // R>
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
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xe572(); // UNK_0xe572
  }
  Push(a); // R>
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe9a0: WORD 'UNK_0xe9a2' codep=0x224c parp=0xe9a2
// ================================================

void UNK_0xe9a2() // UNK_0xe9a2
{
  UNK_0xe93e(); // UNK_0xe93e
  if (Pop() != 0)
  {
    UNK_0xe932(); // UNK_0xe932
    _2DUP(); // 2DUP
    Push(pp_XABS); // XABS
    _plus__ex__2(); // +!_2
    Push(pp_YABS); // YABS
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
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe9d2: WORD 'UNK_0xe9d4' codep=0x224c parp=0xe9d4
// ================================================

void UNK_0xe9d4() // UNK_0xe9d4
{
  unsigned short int a;
  _i_KEY(); // 'KEY
  Push(0x0143);
  Push((Pop()==Pop())?1:0); // =
  Push(pp_UNK_0xdd20); // UNK_0xdd20
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xdf0b(); // UNK_0xdf0b
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0xdd2e(); // UNK_0xdd2e
    UNK_0xdd64(); // UNK_0xdd64
    ICLOSE(); // ICLOSE
    UNK_0xe884(); // UNK_0xe884
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    UNK_0xe884(); // UNK_0xe884
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
  } else
  {
    UNK_0xdd64(); // UNK_0xdd64
  }
  UNK_0xdd2e(); // UNK_0xdd2e
  UNK_0xdd64(); // UNK_0xdd64
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  UNK_0xde5d(); // UNK_0xde5d
  a = Pop(); // >R
  UNK_0xdecf(); // UNK_0xdecf
  Push(Read16(a)); // R@
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(a); // R>
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  UNK_0xe9a2(); // UNK_0xe9a2
  UNK_0xe516(); // UNK_0xe516
  Pop(); Pop(); // 2DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea2a: WORD 'UNK_0xea2c' codep=0x1d29 parp=0xea2c
// ================================================
// 0xea2c: db 0x56 0x3a 0x20 0xd0 'V:  '

// ================================================
// 0xea30: WORD 'UNK_0xea32' codep=0x224c parp=0xea32
// ================================================

void UNK_0xea32() // UNK_0xea32
{
  _at_INST_dash_S(); // @INST-S
  Push(0x0019);
  Push(0x001b);
  WITHIN(); // WITHIN
  Push(0x001c);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  UNK_0xdf0b(); // UNK_0xdf0b
  Push(Pop() & Pop()); // AND
  Push(0);
  Push(Read16(cc_MPS)); // MPS
  Push(Pop()*2); // 2*
  Push(5);
  MAX(); // MAX
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xea5c: WORD 'UNK_0xea5e' codep=0x224c parp=0xea5e
// ================================================

void UNK_0xea5e() // UNK_0xea5e
{
  unsigned short int i, imax;
  UNK_0xdd2e(); // UNK_0xdd2e
  UNK_0xdd64(); // UNK_0xdd64
  Push(pp_UNK_0xea2c); // UNK_0xea2c
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
  Push(2);
  Push(Read16(cc_MPS)); // MPS
  Push(Pop() * Pop()); // *
  Push(5);
  MAX(); // MAX
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xe932(); // UNK_0xe932
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    _ex_ID(); // !ID
    UNK_0xe516(); // UNK_0xe516
    UNK_0xe932(); // UNK_0xe932
    UNK_0xe812(); // UNK_0xe812
    UNK_0xe516(); // UNK_0xe516
    UNK_0xe9d4(); // UNK_0xe9d4
    i++;
  } while(i<imax); // (LOOP)

  UNK_0xe932(); // UNK_0xe932
}


// ================================================
// 0xea8e: WORD 'UNK_0xea90' codep=0x224c parp=0xea90
// ================================================

void UNK_0xea90() // UNK_0xea90
{
  unsigned short int i, imax;
  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  _gt_MAINVI(); // >MAINVI
  UNK_0xe4f0(); // UNK_0xe4f0
  UNK_0xe414(); // UNK_0xe414
  _dot_LOCAL_dash_(); // .LOCAL-
  _1PIX(); // 1PIX
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xdd64(); // UNK_0xdd64
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_UNK_0xea2c); // UNK_0xea2c
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  Push(4);
  Push(-3);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2OVER(); // 2OVER
    _2OVER(); // 2OVER
    Push(i); // I
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    Push(i); // I
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    LLINE(); // LLINE
    V_gt_DISPL(); // V>DISPL
    Push(pp__at__co_0_star_1_sc_); // @,0*1;
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0xe572(); // UNK_0xe572
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  _gt_DISPLA(); // >DISPLA
  _2PIX(); // 2PIX
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xeae2: WORD 'UNK_0xeae4' codep=0x224c parp=0xeae4
// ================================================

void UNK_0xeae4() // UNK_0xeae4
{
  CTINIT(); // CTINIT
  UNK_0xdd2e(); // UNK_0xdd2e
  UNK_0xdd64(); // UNK_0xdd64
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xea2c); // UNK_0xea2c
  _2_at_(); // 2@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(0x7530);
    UNK_0xdd64(); // UNK_0xdd64
    Push(pp_UNK_0xea2c); // UNK_0xea2c
    _2_at_(); // 2@
    UNK_0xde5d(); // UNK_0xde5d
    _slash_(); // /
    Push(0xc6ca); // probable 'CREWD'
    MODULE(); // MODULE
  } else
  {
    UNK_0x3f09("RAY MISSED");
    _dot_TTY(); // .TTY
  }
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xeb25: WORD 'UNK_0xeb27' codep=0x224c parp=0xeb27
// ================================================

void UNK_0xeb27() // UNK_0xeb27
{
  UNK_0xea5e(); // UNK_0xea5e
  UNK_0xea90(); // UNK_0xea90
  UNK_0xeae4(); // UNK_0xeae4
  UNK_0xe8ec(); // UNK_0xe8ec
}

// 0xeb31: db 0x4c 0x22 0x5d 0x17 0x44 0x00 0x72 0x0f 0xf2 0x0e 0xa7 0x3b 0x72 0x0f 0xf2 0x0e 0x90 0x16 'L"] D r    ;r     '

// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  unsigned short int i, imax, j, jmax;
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0);
  Push(0x03e8);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BEEPON_2(); // BEEPON_2
    Push(i); // I
    TONE(); // TONE
    Push(0x00c8);
    Push(Read16(cc_MPS)); // MPS
    Push(Pop() * Pop()); // *
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    Push(0xffe2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xeb79: WORD 'UNK_0xeb7b' codep=0x224c parp=0xeb7b
// ================================================

void UNK_0xeb7b() // UNK_0xeb7b
{
  UNK_0xe86e(); // UNK_0xe86e
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  UNK_0xe86e(); // UNK_0xe86e
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  UNK_0xe690(); // UNK_0xe690
}


// ================================================
// 0xeb97: WORD 'UNK_0xeb99' codep=0x224c parp=0xeb99
// ================================================

void UNK_0xeb99() // UNK_0xeb99
{
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xe71c(); // UNK_0xe71c
  Push(Read16(cc_UNK_0xe2ba)); // UNK_0xe2ba
  LoadData("UNK_0xdd94"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe5be(); // UNK_0xe5be
  Push(3);
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  C_ex__2(); // C!_2
  Push(pp_UNK_0xde59); // UNK_0xde59
  ON_2(); // ON_2
  UNK_0xe840(); // UNK_0xe840
  UNK_0xe0de(); // UNK_0xe0de
}


// ================================================
// 0xebb7: WORD 'UNK_0xebb9' codep=0x224c parp=0xebb9
// ================================================

void UNK_0xebb9() // UNK_0xebb9
{
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xe71c(); // UNK_0xe71c
  Push(Read16(cc_UNK_0xe2ba)); // UNK_0xe2ba
  LoadData("UNK_0xdda4"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(5);
  Push(Pop() + Pop()); // +
  UNK_0xe5be(); // UNK_0xe5be
  Push(3);
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  C_ex__2(); // C!_2
  Push(pp_UNK_0xde59); // UNK_0xde59
  ON_2(); // ON_2
  UNK_0xe840(); // UNK_0xe840
  UNK_0xe0de(); // UNK_0xe0de
}


// ================================================
// 0xebdb: WORD 'UNK_0xebdd' codep=0x224c parp=0xebdd
// ================================================

void UNK_0xebdd() // UNK_0xebdd
{
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xdd4c(); // UNK_0xdd4c
  SetColor("RED");
  UNK_0xe966(); // UNK_0xe966
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x6638); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY
  LoadData("UNK_0xdd9c"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .
  Push(Read16(cc_UNK_0xe2ba)); // UNK_0xe2ba
  Push(0);
  Push(0xc694); // probable 'DO-DA'
  MODULE(); // MODULE
  Push(3);
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  C_ex__2(); // C!_2
  Push(pp_UNK_0xde59); // UNK_0xde59
  ON_2(); // ON_2
  UNK_0xe840(); // UNK_0xe840
  UNK_0xe0de(); // UNK_0xe0de
}


// ================================================
// 0xec13: WORD 'UNK_0xec15' codep=0x224c parp=0xec15
// ================================================

void UNK_0xec15() // UNK_0xec15
{
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xdd4c(); // UNK_0xdd4c
}


// ================================================
// 0xec1b: WORD 'UNK_0xec1d' codep=0x224c parp=0xec1d
// ================================================

void UNK_0xec1d() // UNK_0xec1d
{
  UNK_0xec15(); // UNK_0xec15
  UNK_0xe6d8(); // UNK_0xe6d8
  Push(4);
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  C_ex__2(); // C!_2
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xe690(); // UNK_0xe690
}


// ================================================
// 0xec2f: WORD 'UNK_0xec31' codep=0x224c parp=0xec31
// ================================================

void UNK_0xec31() // UNK_0xec31
{
  UNK_0xec15(); // UNK_0xec15
  UNK_0xe6c4(); // UNK_0xe6c4
  Push(3);
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  C_ex__2(); // C!_2
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xe690(); // UNK_0xe690
}


// ================================================
// 0xec43: WORD 'UNK_0xec45' codep=0x224c parp=0xec45
// ================================================

void UNK_0xec45() // UNK_0xec45
{
  if (Pop() != 0)
  {
    UNK_0xdd42(); // UNK_0xdd42
    if (Pop() != 0)
    {
      UNK_0xde9f(); // UNK_0xde9f
    } else
    {
      Push(0);
    }
    return;
  }
  UNK_0xde9f(); // UNK_0xde9f
}


// ================================================
// 0xec5f: WORD '?APPROACHI' codep=0x224c parp=0xec6e
// ================================================

void _ask_APPROACHI() // ?APPROACHI
{
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x224c parp=0xec7a
// ================================================

void UNK_0xec7a() // UNK_0xec7a
{
  unsigned short int a;
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(1);
  UNK_0xec45(); // UNK_0xec45
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(a); // R>
  UNK_0xec45(); // UNK_0xec45
  Push(Pop() + Pop()); // +
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xe690(); // UNK_0xe690
  Push(0);
  Push(0x65f2); // IFIELD(UNK_0xddbb)
  C_ex__2(); // C!_2
}


// ================================================
// 0xeca8: WORD 'UNK_0xecaa' codep=0x224c parp=0xecaa
// ================================================

void UNK_0xecaa() // UNK_0xecaa
{
  _at_INST_dash_S(); // @INST-S
  Push(4);
  Push(6);
  WITHIN(); // WITHIN
  UNK_0xdf0b(); // UNK_0xdf0b
  Push(Pop() & Pop()); // AND
  Push(0);
  Push(5);
  Push(Read16(cc_MPS)); // MPS
  Push(2);
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  RRND(); // RRND
  Push(6);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(0x0010);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecd8: WORD 'UNK_0xecda' codep=0x224c parp=0xecda
// ================================================

void UNK_0xecda() // UNK_0xecda
{
  Push(0xc746); // probable 'GNL'
  MODULE(); // MODULE
}


// ================================================
// 0xece2: WORD 'UNK_0xece4' codep=0x224c parp=0xece4
// ================================================

void UNK_0xece4() // UNK_0xece4
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(4);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xecee: WORD '?J' codep=0x224c parp=0xecf5
// ================================================
// entry

void _ask_J() // ?J
{
  Push(pp_UNK_0xdd20); // UNK_0xdd20
  Push(Read16(Pop())); // @
  UNK_0xece4(); // UNK_0xece4
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xdd2e(); // UNK_0xdd2e
    UNK_0xeb45(); // UNK_0xeb45
    UNK_0xe884(); // UNK_0xe884
    UNK_0xe884(); // UNK_0xe884
    UNK_0xe9a2(); // UNK_0xe9a2
    Push(0xc7ce); // probable 'CSCALE'
    MODULE(); // MODULE
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0xb7e7); // probable '.NOFUN'
    MODULE(); // MODULE
  }
  Push2Words("NULL");
}


// ================================================
// 0xed21: WORD '<COMBAT>' codep=0xaccc parp=0xed2e
// ================================================

void _st_COMBAT_gt_() // <COMBAT> rule
{
  int b;

  b = 1;
  UNK_0xea32(); // UNK_0xea32
  b = b && Pop();
  if (b)
  {
    UNK_0xeb27(); // UNK_0xeb27
  }

  b = 1;
  UNK_0xdf93(); // UNK_0xdf93
  b = b && Pop();
  UNK_0xe001(); // UNK_0xe001
  b = b && Pop();
  UNK_0xe019(); // UNK_0xe019
  b = b && Pop();
  if (b)
  {
    UNK_0xeb99(); // UNK_0xeb99
  }

  b = 1;
  UNK_0xdf93(); // UNK_0xdf93
  b = b && Pop();
  UNK_0xdff3(); // UNK_0xdff3
  b = b && Pop();
  UNK_0xe055(); // UNK_0xe055
  b = b && Pop();
  if (b)
  {
    UNK_0xebb9(); // UNK_0xebb9
  }

  b = 1;
  UNK_0xdf93(); // UNK_0xdf93
  b = b && !Pop();
  UNK_0xdfad(); // UNK_0xdfad
  b = b && Pop();
  UNK_0xe1cc(); // UNK_0xe1cc
  b = b && Pop();
  UNK_0xe001(); // UNK_0xe001
  b = b && Pop();
  if (b)
  {
    UNK_0xeb99(); // UNK_0xeb99
  }

  b = 1;
  UNK_0xdf93(); // UNK_0xdf93
  b = b && !Pop();
  UNK_0xe1d8(); // UNK_0xe1d8
  b = b && Pop();
  UNK_0xe001(); // UNK_0xe001
  b = b && Pop();
  if (b)
  {
    UNK_0xeb99(); // UNK_0xeb99
  }

  b = 1;
  UNK_0xdf93(); // UNK_0xdf93
  b = b && Pop();
  UNK_0xdfe5(); // UNK_0xdfe5
  b = b && Pop();
  UNK_0xe037(); // UNK_0xe037
  b = b && Pop();
  UNK_0xe12a(); // UNK_0xe12a
  b = b && Pop();
  if (b)
  {
    UNK_0xebdd(); // UNK_0xebdd
  }

  b = 1;
  UNK_0xdf93(); // UNK_0xdf93
  b = b && !Pop();
  UNK_0xdfad(); // UNK_0xdfad
  b = b && Pop();
  UNK_0xe1cc(); // UNK_0xe1cc
  b = b && Pop();
  UNK_0xe001(); // UNK_0xe001
  b = b && !Pop();
  UNK_0xdfe5(); // UNK_0xdfe5
  b = b && Pop();
  UNK_0xe12a(); // UNK_0xe12a
  b = b && Pop();
  if (b)
  {
    UNK_0xebdd(); // UNK_0xebdd
  }

  b = 1;
  UNK_0xdf93(); // UNK_0xdf93
  b = b && !Pop();
  UNK_0xe1d8(); // UNK_0xe1d8
  b = b && Pop();
  UNK_0xe001(); // UNK_0xe001
  b = b && !Pop();
  UNK_0xdfe5(); // UNK_0xdfe5
  b = b && Pop();
  UNK_0xe12a(); // UNK_0xe12a
  b = b && Pop();
  if (b)
  {
    UNK_0xebdd(); // UNK_0xebdd
  }

  b = 1;
  UNK_0xecaa(); // UNK_0xecaa
  b = b && Pop();
  if (b)
  {
    UNK_0xecda(); // UNK_0xecda
  }

  b = 1;
  UNK_0xe098(); // UNK_0xe098
  b = b && Pop();
  UNK_0xe1cc(); // UNK_0xe1cc
  b = b && !Pop();
  UNK_0xe1c0(); // UNK_0xe1c0
  b = b && !Pop();
  UNK_0xe0a2(); // UNK_0xe0a2
  b = b && Pop();
  UNK_0xe0ea(); // UNK_0xe0ea
  b = b && Pop();
  if (b)
  {
    UNK_0xec1d(); // UNK_0xec1d
  }

  b = 1;
  UNK_0xe1c0(); // UNK_0xe1c0
  b = b && Pop();
  UNK_0xe0ae(); // UNK_0xe0ae
  b = b && !Pop();
  UNK_0xe0ea(); // UNK_0xe0ea
  b = b && Pop();
  if (b)
  {
    UNK_0xec1d(); // UNK_0xec1d
  }

  b = 1;
  UNK_0xdfc5(); // UNK_0xdfc5
  b = b && Pop();
  UNK_0xe098(); // UNK_0xe098
  b = b && !Pop();
  if (b)
  {
    UNK_0xeb7b(); // UNK_0xeb7b
  }

  b = 1;
  UNK_0xdfc5(); // UNK_0xdfc5
  b = b && Pop();
  UNK_0xe1cc(); // UNK_0xe1cc
  b = b && Pop();
  if (b)
  {
    UNK_0xeb7b(); // UNK_0xeb7b
  }

  b = 1;
  UNK_0xdfc5(); // UNK_0xdfc5
  b = b && Pop();
  UNK_0xe1d8(); // UNK_0xe1d8
  b = b && Pop();
  if (b)
  {
    UNK_0xeb7b(); // UNK_0xeb7b
  }

  b = 1;
  UNK_0xe0ea(); // UNK_0xe0ea
  b = b && Pop();
  UNK_0xdf93(); // UNK_0xdf93
  b = b && Pop();
  UNK_0xe120(); // UNK_0xe120
  b = b && Pop();
  if (b)
  {
    UNK_0xec31(); // UNK_0xec31
  }

  b = 1;
  UNK_0xe0cc(); // UNK_0xe0cc
  b = b && Pop();
  UNK_0xe0ea(); // UNK_0xe0ea
  b = b && Pop();
  if (b)
  {
    UNK_0xec1d(); // UNK_0xec1d
  }

  b = 1;
  UNK_0xe0ea(); // UNK_0xe0ea
  b = b && Pop();
  UNK_0xe1cc(); // UNK_0xe1cc
  b = b && Pop();
  UNK_0xe120(); // UNK_0xe120
  b = b && Pop();
  if (b)
  {
    UNK_0xec31(); // UNK_0xec31
  }

  b = 1;
  UNK_0xe0ea(); // UNK_0xe0ea
  b = b && Pop();
  UNK_0xe1cc(); // UNK_0xe1cc
  b = b && Pop();
  UNK_0xdfb7(); // UNK_0xdfb7
  b = b && !Pop();
  UNK_0xdfe5(); // UNK_0xdfe5
  b = b && Pop();
  UNK_0xe001(); // UNK_0xe001
  b = b && !Pop();
  if (b)
  {
    UNK_0xec31(); // UNK_0xec31
  }

  b = 1;
  UNK_0xe0ea(); // UNK_0xe0ea
  b = b && Pop();
  UNK_0xe1cc(); // UNK_0xe1cc
  b = b && Pop();
  UNK_0xdfb7(); // UNK_0xdfb7
  b = b && !Pop();
  UNK_0xe001(); // UNK_0xe001
  b = b && Pop();
  if (b)
  {
    UNK_0xec31(); // UNK_0xec31
  }
}


// ================================================
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11
// ================================================

void UNK_0xee11() // UNK_0xee11
{
  Push(pp_NTIME); // NTIME
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NTIME); // NTIME
  _2_at_(); // 2@
  Push(0x32c8); Push(0x0000);
  D_plus_(); // D+
  D_gt_(); // D>
  if (Pop() == 0) return;
  Push2Words("NULL");
  Push(pp_NTIME); // NTIME
  D_ex_(); // D!
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(pp_NLR); // NLR
  _099(); // 099
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(1);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      CTINIT(); // CTINIT
    } else
    {
      SetColor("YELLOW");
      _ex_COLOR(); // !COLOR
    }
    Push(0x6651); Push(0x0002);
    UNK_0xde37(); // UNK_0xde37
    _dot_TTY(); // .TTY
    return;
  }
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
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  unsigned short int i, imax;
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0017);
  _eq_SPECIE(); // =SPECIE
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp__ask_UF); // ?UF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) return;
  Push(pp__h_CRIT); // ^CRIT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0);
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  Push(5);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(3);
  } else
  {
    Push(2);
  }
  RRND(); // RRND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    UNK_0xee6f(); // UNK_0xee6f
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        Push(Read16(cc_INVIS_dash_I)); // INVIS-I
        _ex_ID(); // !ID
      } else
      {
        UNK_0xe840(); // UNK_0xe840
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xef05: WORD 'UNK_0xef07' codep=0x224c parp=0xef07
// ================================================

void UNK_0xef07() // UNK_0xef07
{
  Push(pp__h_CRIT); // ^CRIT
  _099(); // 099
}


// ================================================
// 0xef0d: WORD 'UNK_0xef0f' codep=0x224c parp=0xef0f
// ================================================

void UNK_0xef0f() // UNK_0xef0f
{
  Push(pp__h_CRIT); // ^CRIT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  _ex__2(); // !_2
}


// ================================================
// 0xef21: WORD 'UNK_0xef23' codep=0x224c parp=0xef23
// ================================================

void UNK_0xef23() // UNK_0xef23
{
  Push(pp__h_CRIT); // ^CRIT
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
  if (Pop() != 0)
  {
    Push(0x6611); // IFIELD(UNK_0xde14)
    Push(Read16(Pop())); // @
    Push(0x0028);
    Push(Pop() + Pop()); // +
    Push(0x0dac);
    MIN(); // MIN
    Push(0x6611); // IFIELD(UNK_0xde14)
    _ex__2(); // !_2
    Push(pp__ask_COMBAT); // ?COMBAT
    Push(Read16(Pop())); // @
    Push(pp__n_AUX); // #AUX
    Push(Read16(Pop())); // @
    Push(1);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xe29a(); // UNK_0xe29a
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef7b: WORD 'UNK_0xef7d' codep=0x224c parp=0xef7d
// ================================================

void UNK_0xef7d() // UNK_0xef7d
{
  Push(pp_SMART); // SMART
  _099(); // 099
  Push(0xed2e); // probable '<COMBAT>'
  DISTRAC(); // DISTRAC
  _st_COMBAT_gt_(); // <COMBAT> rule
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
  Push(5);
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
  Push(Read16(cc_INVIS_dash_I)); // INVIS-I
  Push((Pop()==Pop())?1:0); // =
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
  Push(0xc7dc); // probable '@NF'
  MODULE(); // MODULE
  Pop(); // DROP
  Push(0x0016);
  _gt_(); // >
  Push(pp__ask_AF); // ?AF
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
  Push(0xc7ce); // probable 'CSCALE'
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ATIME); // ATIME
  _2_at_(); // 2@
  D_gt_(); // D>
  if (Pop() != 0)
  {
    UNK_0xef23(); // UNK_0xef23
    UNK_0xefb1(); // UNK_0xefb1
    if (Pop() != 0)
    {
      UNK_0xef7d(); // UNK_0xef7d
      UNK_0xe932(); // UNK_0xe932
      UNK_0xef99(); // UNK_0xef99
      UNK_0xee8f(); // UNK_0xee8f
    } else
    {
      UNK_0xdd70(); // UNK_0xdd70
      if (Pop() != 0)
      {
        UNK_0xef49(); // UNK_0xef49
      }
    }
    ICLOSE(); // ICLOSE
    UNK_0xef0f(); // UNK_0xef0f
    Push(pp__i_UHL); // 'UHL
    _at_EXECUTE(); // @EXECUTE
  }
  UNK_0xe7a8(); // UNK_0xe7a8
  UNK_0xefdb(); // UNK_0xefdb
  Push(pp__ask_COMBAT); // ?COMBAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_UNNEST); // 'UNNEST
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
  unsigned short int a;
  Push(0xc7dc); // probable '@NF'
  MODULE(); // MODULE
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(0x662a); // IFIELD(UNK_0xde28)
  Push(Read8(Pop())&0xFF); // C@
  _4_star_(); // 4*
  Push(pp_UNK_0xf052); // UNK_0xf052
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  a = Pop(); // >R
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(a); // R>
  ROT(); // ROT
  Push(Pop() * Pop()); // *
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xde49); // UNK_0xde49
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xf0a8: WORD 'UNK_0xf0aa' codep=0x224c parp=0xf0aa
// ================================================

void UNK_0xf0aa() // UNK_0xf0aa
{
  Push(0x6626); // IFIELD(UNK_0xde19)
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
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
  Push(6);
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
  Push(pp__10_star_END); // 10*END
  _2_ex__2(); // 2!_2
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf100: WORD 'UNK_0xf102' codep=0x224c parp=0xf102
// ================================================

void UNK_0xf102() // UNK_0xf102
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  ROT(); // ROT
  Push(0);
  D_dash_(); // D-
  Push2Words("0.");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  _2_ex__2(); // 2!_2
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x224c parp=0xf12a
// ================================================

void UNK_0xf12a() // UNK_0xf12a
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
}


// ================================================
// 0xf132: WORD 'UNK_0xf134' codep=0x224c parp=0xf134
// ================================================

void UNK_0xf134() // UNK_0xf134
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Push(5);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop()+1); // 1+
  }
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  Push(3);
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
  Push(0);
  Push(0x00fa);
  ROT(); // ROT
  _dash_(); // -
  RRND(); // RRND
  Push(0x0032);
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdd24); // UNK_0xdd24
  _ex__2(); // !_2
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xf184: WORD 'UNK_0xf186' codep=0x224c parp=0xf186
// ================================================

void UNK_0xf186() // UNK_0xf186
{
  unsigned short int a;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f8); // IFIELD(UNK_0xde2d)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fc); // IFIELD(UNK_0xde32)
  Push(Read8(Pop())&0xFF); // C@
  a = Pop(); // >R
  Push(pp_UNK_0xde53); // UNK_0xde53
  _2_at_(); // 2@
  Push(Read16(a)); // R@
  UNK_0xf15e(); // UNK_0xf15e
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_UNK_0xf158); // UNK_0xf158
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(a); // R>
  UNK_0xf15e(); // UNK_0xf15e
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_UNK_0xf158); // UNK_0xf158
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(2);
  _star_CLOSE(); // *CLOSE
  _2DUP(); // 2DUP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_UNK_0xde49); // UNK_0xde49
  D_ex_(); // D!
}


// ================================================
// 0xf1c8: WORD 'UNK_0xf1ca' codep=0x224c parp=0xf1ca
// ================================================

void UNK_0xf1ca() // UNK_0xf1ca
{
  unsigned short int i, imax;
  Push(0x2710);
  Push(pp_UNK_0xde4f); // UNK_0xde4f
  _ex__2(); // !_2
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      POINT_gt_I(); // POINT>I
      UNK_0xf0da(); // UNK_0xf0da
      _at_ID(); // @ID
      Push(0x0060);
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() | Pop()); // OR
      _at_ID(); // @ID
      Push(0x0062);
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(pp_UNK_0xde49); // UNK_0xde49
        _2_at_(); // 2@
        UNK_0xdd5c(); // UNK_0xdd5c
        UNK_0xde5d(); // UNK_0xde5d
        Push(Read16(regsp)); // DUP
        Push(pp_UNK_0xde4f); // UNK_0xde4f
        Push(Read16(Pop())); // @
        _st_(); // <
        if (Pop() != 0)
        {
          Push(pp_UNK_0xde4f); // UNK_0xde4f
          _st__ex__gt_(); // <!>
          UNK_0xdd5c(); // UNK_0xdd5c
          Push(pp_UNK_0xde53); // UNK_0xde53
          _2_ex__2(); // 2!_2
          _at_IL(); // @IL
          _at_IH(); // @IH
          _gt_C_plus_S(); // >C+S
          CI(); // CI
          ICLOSE(); // ICLOSE
          Push(pp_UNK_0xdd28); // UNK_0xdd28
          D_ex_(); // D!
        } else
        {
          Pop(); // DROP
        }
      }
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf240: WORD 'UNK_0xf242' codep=0x224c parp=0xf242
// ================================================

void UNK_0xf242() // UNK_0xf242
{
  Push(pp_UNK_0xde4f); // UNK_0xde4f
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
  Push(1);
  Push(0x5184); // probable '?FIRED-'
  _ex__2(); // !_2
}


// ================================================
// 0xf26c: WORD 'UNK_0xf26e' codep=0x224c parp=0xf26e
// ================================================

void UNK_0xf26e() // UNK_0xf26e
{
  Push(pp_WEAPON_dash_); // WEAPON-
  ON_2(); // ON_2
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xf186(); // UNK_0xf186
  Push(Read16(cc_UNK_0xe2b6)); // UNK_0xe2b6
  Push(0x65fd); // IFIELD(UNK_0xde05)
  UNK_0xde7b(); // UNK_0xde7b
  UNK_0xe5be(); // UNK_0xe5be
  Push(5);
  UNK_0xf102(); // UNK_0xf102
  UNK_0xe0de(); // UNK_0xe0de
  UNK_0xf262(); // UNK_0xf262
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  Push(pp_WEAPON_dash_); // WEAPON-
  ON_2(); // ON_2
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xf186(); // UNK_0xf186
  _2DUP(); // 2DUP
  Push(pp_UNK_0xde53); // UNK_0xde53
  _2_ex__2(); // 2!_2
  SetColor("LT-BLUE");
  UNK_0xe966(); // UNK_0xe966
  Push(pp_UNK_0xde53); // UNK_0xde53
  _2_at_(); // 2@
  Push(Read16(cc_UNK_0xe2b6)); // UNK_0xe2b6
  Push(0);
  Push(0xc694); // probable 'DO-DA'
  MODULE(); // MODULE
  Push(1);
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
  if (Pop() != 0)
  {
    UNK_0xdd4c(); // UNK_0xdd4c
    Push(pp_UNK_0xde53); // UNK_0xde53
    _2_at_(); // 2@
    UNK_0xde5d(); // UNK_0xde5d
    Push(7);
    _st_(); // <
    UNK_0xe19c(); // UNK_0xe19c
    Push(Pop() & Pop()); // AND
    Push(pp__ask_3); // ?3
    Push(Read16(Pop())); // @
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      UNK_0xf28a(); // UNK_0xf28a
    } else
    {
      UNK_0xe178(); // UNK_0xe178
      if (Pop() != 0)
      {
        UNK_0xf26e(); // UNK_0xf26e
      } else
      {
        UNK_0xe19c(); // UNK_0xe19c
        if (Pop() != 0)
        {
          UNK_0xf28a(); // UNK_0xf28a
        } else
        {
          SetColor("WHITE");
          _ex_COLOR(); // !COLOR
          Push(0x668d); Push(0x0002);
          UNK_0xde37(); // UNK_0xde37
          _dot_TTY(); // .TTY
        }
      }
    }
  } else
  {
    UNK_0xf250(); // UNK_0xf250
  }
  goto label7;

  label2:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x66ae); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  _dot_TTY(); // .TTY

  label7:
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
  Push(0xc39d); // probable '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  _ex__2(); // !_2
  Push(0xc3cf); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _ex__2(); // !_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _ex__2(); // !_2
  Push(0xf344);
  Push(pp__i_EXTERN); // 'EXTERN
  _ex__2(); // !_2
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _ex__2(); // !_2
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _2_ex__2(); // 2!_2
  Push(pp__ask_HEAL); // ?HEAL
  ON_2(); // ON_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _ex__2(); // !_2
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _ex__2(); // !_2
  Push(pp__ask_HEAL); // ?HEAL
  ON_2(); // ON_2
  Push(0xe414); // probable 'UNK_0xe414'
  Push(pp__i__dot_BACKG); // '.BACKG
  _ex__2(); // !_2
  Push(pp__ask_COMBAT); // ?COMBAT
  ON_1(); // ON_1
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_1(); // ON_1
}


// ================================================
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8
// ================================================

void UNK_0xf3a8() // UNK_0xf3a8
{
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x000d);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf3b4: WORD 'UNK_0xf3b6' codep=0x224c parp=0xf3b6
// ================================================

void UNK_0xf3b6() // UNK_0xf3b6
{
  Push(0xc39d); // probable '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  _ex__2(); // !_2
  Push(0xc3cf); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _ex__2(); // !_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _ex__2(); // !_2
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    _at_CRS(); // @CRS
    Push(0x0090);
    Push(0x005c);
    Push(0x0085);
    Push(0x0061);
    SetColor("BLACK");
    POLY_dash_WI(); // POLY-WI
    _ex_CRS(); // !CRS
  }
  Push(0xae81); // probable 'CEX+WAX'
  Push(pp__i_EXTERN); // 'EXTERN
  _ex__2(); // !_2
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _ex__2(); // !_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _ex__2(); // !_2
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _ex__2(); // !_2
  Push(0xc0e7); // probable '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  _ex__2(); // !_2
  UNK_0xf134(); // UNK_0xf134
  Push(pp_UNK_0xde59); // UNK_0xde59
  _099(); // 099
  Push(pp_FORCEPT); // FORCEPT
  OFF_2(); // OFF_2
  Push(pp__ask_COMBAT); // ?COMBAT
  OFF_2(); // OFF_2
  ICLOSE(); // ICLOSE
  UNK_0xefdb(); // UNK_0xefdb
  if (Pop() == 0) return;
  Push(pp__i_UNNEST); // 'UNNEST
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf438: WORD 'UNK_0xf43a' codep=0x224c parp=0xf43a
// ================================================

void UNK_0xf43a() // UNK_0xf43a
{
  _ro_XYSCAN(); // (XYSCAN case
  _2DUP(); // 2DUP
  KEY_gt_ORIENT(); // KEY>ORIENT case
  Push(0x662a); // IFIELD(UNK_0xde28)
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  Push(0x662a); // IFIELD(UNK_0xde28)
  C_ex__2(); // C!_2
  UNK_0xe89a(); // UNK_0xe89a
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xe162(); // UNK_0xe162
    Push(0x65f5); // IFIELD(UNK_0xddc5)
    Push(Read8(Pop())&0xFF); // C@
    Push(0x0080);
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      UNK_0xe9a2(); // UNK_0xe9a2
      Push(0xc7ce); // probable 'CSCALE'
      MODULE(); // MODULE
      Push(0x0fa0);
      Push(Read16(cc_MPS)); // MPS
      Push(0x6606); // IFIELD(UNK_0xde23)
      Push(Read16(Pop())); // @
      Push(Pop() * Pop()); // *
      _slash_(); // /
      UNK_0xe152(); // UNK_0xe152
    } else
    {
      Pop(); Pop(); // 2DROP
    }
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  _ask_TRIG(); // ?TRIG
  UNK_0xf3a8(); // UNK_0xf3a8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xf2b6(); // UNK_0xf2b6
    UNK_0xe29a(); // UNK_0xe29a
  }
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
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
  UNK_0xf34e(); // UNK_0xf34e
  UNK_0xe0de(); // UNK_0xe0de
  Push(pp_FORCEPT); // FORCEPT
  ON_2(); // ON_2
  UNK_0xf0ea(); // UNK_0xf0ea
  UNK_0xdd2e(); // UNK_0xdd2e
  UNK_0xe8ec(); // UNK_0xe8ec
  _gt_1FONT(); // >1FONT
  Push(pp__n_AUX); // #AUX
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
  if (Pop() != 0)
  {
    Push(0xf3b6); // probable 'UNK_0xf3b6'
    Push(0xf43a); // probable 'UNK_0xf43a'
    Push(0xf4a8); // probable 'UNK_0xf4a8'
    DOTASKS(UNK_0xf4a8, UNK_0xf4a8, UNK_0xf4a8);
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xf50a: WORD 'CLEAR-CO' codep=0x224c parp=0xf517
// ================================================
// entry

void CLEAR_dash_CO() // CLEAR-CO
{
  Push(pp_MOVED); // MOVED
  _099(); // 099
  UNK_0xe2ff(); // UNK_0xe2ff
  Push(pp_UNK_0xe2be); // UNK_0xe2be
  _099(); // 099
  UNK_0xe0de(); // UNK_0xe0de
  Push2Words("NULL");
  Push(pp_NTIME); // NTIME
  _2_ex__2(); // 2!_2
  Push(pp_NLR); // NLR
  _099(); // 099
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
  Push(0);
  UNK_0xe152(); // UNK_0xe152
  Push(0x0035);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(pp_UNK_0xdd20); // UNK_0xdd20
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

