// ====== OVERLAY 'COMBAT-OV' ======
// store offset = 0xdd00
// overlay size   = 0x1860

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
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
//      UNK_0xdd70  codep:0x224c parp:0xdd70 size:0x000e C-string:'UNK_0xdd70'
//      UNK_0xdd80  codep:0x2214 parp:0xdd80 size:0x0002 C-string:'UNK_0xdd80'
//      UNK_0xdd84  codep:0x7394 parp:0xdd84 size:0x0006 C-string:'UNK_0xdd84'
//      UNK_0xdd8c  codep:0x7394 parp:0xdd8c size:0x0006 C-string:'UNK_0xdd8c'
//      UNK_0xdd94  codep:0x7394 parp:0xdd94 size:0x0006 C-string:'UNK_0xdd94'
//      UNK_0xdd9c  codep:0x7394 parp:0xdd9c size:0x0006 C-string:'UNK_0xdd9c'
//      UNK_0xdda4  codep:0x7394 parp:0xdda4 size:0x0006 C-string:'UNK_0xdda4'
//      UNK_0xddac  codep:0x7420 parp:0xddac size:0x0003 C-string:'UNK_0xddac'
//      UNK_0xddb1  codep:0x7420 parp:0xddb1 size:0x0003 C-string:'UNK_0xddb1'
//      UNK_0xddb6  codep:0x7420 parp:0xddb6 size:0x0003 C-string:'UNK_0xddb6'
//      UNK_0xddbb  codep:0x7420 parp:0xddbb size:0x0003 C-string:'UNK_0xddbb'
//      UNK_0xddc0  codep:0x7420 parp:0xddc0 size:0x0003 C-string:'UNK_0xddc0'
//      UNK_0xddc5  codep:0x7420 parp:0xddc5 size:0x0003 C-string:'UNK_0xddc5'
//      UNK_0xddca  codep:0x2214 parp:0xddca size:0x0002 C-string:'UNK_0xddca'
//      UNK_0xddce  codep:0x7420 parp:0xddce size:0x0003 C-string:'UNK_0xddce'
//      UNK_0xddd3  codep:0x7420 parp:0xddd3 size:0x0003 C-string:'UNK_0xddd3'
//      UNK_0xddd8  codep:0x7420 parp:0xddd8 size:0x0003 C-string:'UNK_0xddd8'
//      UNK_0xdddd  codep:0x7420 parp:0xdddd size:0x0003 C-string:'UNK_0xdddd'
//      UNK_0xdde2  codep:0x7420 parp:0xdde2 size:0x0003 C-string:'UNK_0xdde2'
//      UNK_0xdde7  codep:0x7420 parp:0xdde7 size:0x0003 C-string:'UNK_0xdde7'
//      UNK_0xddec  codep:0x7420 parp:0xddec size:0x0003 C-string:'UNK_0xddec'
//      UNK_0xddf1  codep:0x7420 parp:0xddf1 size:0x0003 C-string:'UNK_0xddf1'
//      UNK_0xddf6  codep:0x7420 parp:0xddf6 size:0x0003 C-string:'UNK_0xddf6'
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
//      UNK_0xe12a  codep:0x224c parp:0xe12a size:0x000e C-string:'UNK_0xe12a'
//      UNK_0xe13a  codep:0x224c parp:0xe13a size:0x000c C-string:'UNK_0xe13a'
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
//      UNK_0xe1fc  codep:0x224c parp:0xe1fc size:0x0020 C-string:'UNK_0xe1fc'
//      UNK_0xe21e  codep:0x1d29 parp:0xe21e size:0x001e C-string:'UNK_0xe21e'
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
//      UNK_0xe2db  codep:0x7420 parp:0xe2db size:0x0003 C-string:'UNK_0xe2db'
//      UNK_0xe2e0  codep:0x7420 parp:0xe2e0 size:0x0003 C-string:'UNK_0xe2e0'
//      UNK_0xe2e5  codep:0x7420 parp:0xe2e5 size:0x0003 C-string:'UNK_0xe2e5'
//      UNK_0xe2ea  codep:0x7420 parp:0xe2ea size:0x0003 C-string:'UNK_0xe2ea'
//      UNK_0xe2ef  codep:0x7420 parp:0xe2ef size:0x0003 C-string:'UNK_0xe2ef'
//      UNK_0xe2f4  codep:0x7420 parp:0xe2f4 size:0x0003 C-string:'UNK_0xe2f4'
//      UNK_0xe2f9  codep:0x224c parp:0xe2f9 size:0x0004 C-string:'UNK_0xe2f9'
//      UNK_0xe2ff  codep:0x224c parp:0xe2ff size:0x001c C-string:'UNK_0xe2ff'
//      UNK_0xe31d  codep:0x224c parp:0xe31d size:0x0016 C-string:'UNK_0xe31d'
//             C>C  codep:0x4b3b parp:0xe33b size:0x0010 C-string:'C_gt_C'
//      UNK_0xe34d  codep:0x224c parp:0xe34d size:0x0008 C-string:'UNK_0xe34d'
//      UNK_0xe357  codep:0x224c parp:0xe357 size:0x000a C-string:'UNK_0xe357'
//      UNK_0xe363  codep:0x224c parp:0xe363 size:0x000a C-string:'UNK_0xe363'
//      UNK_0xe36f  codep:0x224c parp:0xe36f size:0x0006 C-string:'UNK_0xe36f'
//      UNK_0xe377  codep:0x224c parp:0xe377 size:0x000a C-string:'UNK_0xe377'
//      UNK_0xe383  codep:0x224c parp:0xe383 size:0x0012 C-string:'UNK_0xe383'
//      UNK_0xe397  codep:0x224c parp:0xe397 size:0x0020 C-string:'UNK_0xe397'
//      UNK_0xe3b9  codep:0x224c parp:0xe3b9 size:0x001e C-string:'UNK_0xe3b9'
//      SCALE>.MIS  codep:0x4b3b parp:0xe3e6 size:0x0010 C-string:'SCALE_gt__dot_MIS'
//      UNK_0xe3f8  codep:0x224c parp:0xe3f8 size:0x001a C-string:'UNK_0xe3f8'
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
//      UNK_0xe61a  codep:0x224c parp:0xe61a size:0x0048 C-string:'UNK_0xe61a'
//      UNK_0xe664  codep:0x224c parp:0xe664 size:0x0020 C-string:'UNK_0xe664'
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
//      UNK_0xeb27  codep:0x224c parp:0xeb27 size:0x000a C-string:'UNK_0xeb27'
//      UNK_0xeb33  codep:0x224c parp:0xeb33 size:0x0010 C-string:'UNK_0xeb33'
//      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0034 C-string:'UNK_0xeb45'
//      UNK_0xeb7b  codep:0x224c parp:0xeb7b size:0x001c C-string:'UNK_0xeb7b'
//      UNK_0xeb99  codep:0x224c parp:0xeb99 size:0x001e C-string:'UNK_0xeb99'
//      UNK_0xebb9  codep:0x224c parp:0xebb9 size:0x0022 C-string:'UNK_0xebb9'
//      UNK_0xebdd  codep:0x224c parp:0xebdd size:0x0036 C-string:'UNK_0xebdd'
//      UNK_0xec15  codep:0x224c parp:0xec15 size:0x0006 C-string:'UNK_0xec15'
//      UNK_0xec1d  codep:0x224c parp:0xec1d size:0x0012 C-string:'UNK_0xec1d'
//      UNK_0xec31  codep:0x224c parp:0xec31 size:0x0012 C-string:'UNK_0xec31'
//      UNK_0xec45  codep:0x224c parp:0xec45 size:0x001a C-string:'UNK_0xec45'
//      ?APPROACHI  codep:0x224c parp:0xec6e size:0x000a C-string:'IsAPPROACHI'
//      UNK_0xec7a  codep:0x224c parp:0xec7a size:0x002e C-string:'UNK_0xec7a'
//      UNK_0xecaa  codep:0x224c parp:0xecaa size:0x002e C-string:'UNK_0xecaa'
//      UNK_0xecda  codep:0x224c parp:0xecda size:0x0008 C-string:'UNK_0xecda'
//      UNK_0xece4  codep:0x224c parp:0xece4 size:0x000a C-string:'UNK_0xece4'
//              ?J  codep:0x224c parp:0xecf5 size:0x002c C-string:'IsJ'
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
//      UNK_0xf2b6  codep:0x224c parp:0xf2b6 size:0x008c C-string:'UNK_0xf2b6'
//      UNK_0xf344  codep:0x224c parp:0xf344 size:0x0008 C-string:'UNK_0xf344'
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
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_INVIS_dash_I; // INVIS-I
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_Get_co_0_star_1_sc_; // @,0*1;
extern const unsigned short int pp_IsUF; // ?UF
extern const unsigned short int pp_IsAF; // ?AF
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp__i_UNNEST; // 'UNNEST
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp__i__dot_BACKG; // '.BACKG
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IINDEX; // IINDEX
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp__i_CEX; // 'CEX
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_IsCOMBAT; // ?COMBAT
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
extern Color BLACK; // BLACK
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void M_star__slash_(); // M*/
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void BEEP(); // BEEP
void Draw(); // .
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
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
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
void IsCGA(); // ?CGA
void NBCLR(); // NBCLR
void StoreCOLOR(); // !COLOR
void BFILL(); // BFILL
void LLINE(); // LLINE
void DrawCIRCLE_1(); // .CIRCLE_1
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void StoreID(); // !ID
void POINT_gt_I(); // POINT>I
void DrawICON(); // .ICON
void DrawLOCAL_dash_(); // .LOCAL-
void IsICONS_dash__2(); // ?ICONS-_2
void IsICON_eq_I(); // ?ICON=I
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void BEEPON_2(); // BEEPON_2
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void IsTRIG(); // ?TRIG
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
void GetEXECUTE(); // @EXECUTE
void ON_1(); // ON_1
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void CI(); // CI
void DISPLAY(); // DISPLAY
void IsINVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR
void SCR_gt_BLT(); // SCR>BLT
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

const unsigned short int pp_UNK_0xe21e = 0xe21e; // UNK_0xe21e size: 30
// {0x00, 0x00, 0x4c, 0x22, 0x34, 0xdd, 0x5d, 0x17, 0x5a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x1c, 0xe2, 0xb8, 0x3b, 0x53, 0x13, 0x1c, 0xe2, 0xae, 0x0b, 0xdd, 0x4a, 0x90, 0x16}

const unsigned short int pp_UNK_0xe2be = 0xe2be; // UNK_0xe2be size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xea2c = 0xea2c; // UNK_0xea2c size: 4
// {0x56, 0x3a, 0x20, 0xd0}

const unsigned short int pp_UNK_0xf052 = 0xf052; // UNK_0xf052 size: 32
// {0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00}

const unsigned short int pp_UNK_0xf158 = 0xf158; // UNK_0xf158 size: 4
// {0x56, 0x3a, 0x20, 0x00}


const unsigned short int cc_UNK_0xdd80 = 0xdd80; // UNK_0xdd80
const unsigned short int cc_UNK_0xddca = 0xddca; // UNK_0xddca
const unsigned short int cc_UNK_0xe0f4 = 0xe0f4; // UNK_0xe0f4
const unsigned short int cc_UNK_0xe0f8 = 0xe0f8; // UNK_0xe0f8
const unsigned short int cc_UNK_0xe1e6 = 0xe1e6; // UNK_0xe1e6
const unsigned short int cc_UNK_0xe2b6 = 0xe2b6; // UNK_0xe2b6
const unsigned short int cc_UNK_0xe2ba = 0xe2ba; // UNK_0xe2ba
const unsigned short int cc_UNK_0xe56e = 0xe56e; // UNK_0xe56e


// 0xdd12: db 0x86 0x01 '  '

// ================================================
// 0xdd14: WORD 'UNK_0xdd16' codep=0x224c parp=0xdd16 params=0 returns=0
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
// 0xdd2c: WORD 'UNK_0xdd2e' codep=0x224c parp=0xdd2e params=0 returns=0
// ================================================

void UNK_0xdd2e() // UNK_0xdd2e
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xdd34: WORD 'UNK_0xdd36' codep=0x224c parp=0xdd36 params=0 returns=1
// ================================================

void UNK_0xdd36() // UNK_0xdd36
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xdd40: WORD 'UNK_0xdd42' codep=0x224c parp=0xdd42 params=0 returns=1
// ================================================

void UNK_0xdd42() // UNK_0xdd42
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xdd4a: WORD 'UNK_0xdd4c' codep=0x224c parp=0xdd4c params=0 returns=2
// ================================================

void UNK_0xdd4c() // UNK_0xdd4c
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdd5a: WORD 'UNK_0xdd5c' codep=0x224c parp=0xdd5c
// ================================================

void UNK_0xdd5c() // UNK_0xdd5c
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xdd62: WORD 'UNK_0xdd64' codep=0x224c parp=0xdd64 params=0 returns=2
// ================================================

void UNK_0xdd64() // UNK_0xdd64
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xdd6e: WORD 'UNK_0xdd70' codep=0x224c parp=0xdd70
// ================================================

void UNK_0xdd70() // UNK_0xdd70
{
  GetID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
}


// ================================================
// 0xdd7e: WORD 'UNK_0xdd80' codep=0x2214 parp=0xdd80
// ================================================
// orphan
// 0xdd80: dw 0x0019

// ================================================
// 0xdd82: WORD 'UNK_0xdd84' codep=0x7394 parp=0xdd84
// ================================================
LoadDataType UNK_0xdd84 = {VESSELIDX, 0x0b, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xdd8a: WORD 'UNK_0xdd8c' codep=0x7394 parp=0xdd8c
// ================================================
LoadDataType UNK_0xdd8c = {VESSELIDX, 0x0e, 0x02, 0x24, 0x6b5d};

// ================================================
// 0xdd92: WORD 'UNK_0xdd94' codep=0x7394 parp=0xdd94
// ================================================
LoadDataType UNK_0xdd94 = {VESSELIDX, 0x13, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xdd9a: WORD 'UNK_0xdd9c' codep=0x7394 parp=0xdd9c
// ================================================
LoadDataType UNK_0xdd9c = {VESSELIDX, 0x12, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xdda2: WORD 'UNK_0xdda4' codep=0x7394 parp=0xdda4
// ================================================
LoadDataType UNK_0xdda4 = {VESSELIDX, 0x14, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xddaa: WORD 'UNK_0xddac' codep=0x7420 parp=0xddac
// ================================================
IFieldType UNK_0xddac = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xddaf: WORD 'UNK_0xddb1' codep=0x7420 parp=0xddb1
// ================================================
// orphan
IFieldType UNK_0xddb1 = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xddb4: WORD 'UNK_0xddb6' codep=0x7420 parp=0xddb6
// ================================================
IFieldType UNK_0xddb6 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xddb9: WORD 'UNK_0xddbb' codep=0x7420 parp=0xddbb
// ================================================
IFieldType UNK_0xddbb = {VESSELIDX, 0x11, 0x01};

// ================================================
// 0xddbe: WORD 'UNK_0xddc0' codep=0x7420 parp=0xddc0
// ================================================
IFieldType UNK_0xddc0 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xddc3: WORD 'UNK_0xddc5' codep=0x7420 parp=0xddc5
// ================================================
IFieldType UNK_0xddc5 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xddc8: WORD 'UNK_0xddca' codep=0x2214 parp=0xddca
// ================================================
// orphan
// 0xddca: dw 0x0014

// ================================================
// 0xddcc: WORD 'UNK_0xddce' codep=0x7420 parp=0xddce
// ================================================
// orphan
IFieldType UNK_0xddce = {SHIPIDX, 0x11, 0x01};

// ================================================
// 0xddd1: WORD 'UNK_0xddd3' codep=0x7420 parp=0xddd3
// ================================================
// orphan
IFieldType UNK_0xddd3 = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xddd6: WORD 'UNK_0xddd8' codep=0x7420 parp=0xddd8
// ================================================
IFieldType UNK_0xddd8 = {SHIPIDX, 0x13, 0x01};

// ================================================
// 0xdddb: WORD 'UNK_0xdddd' codep=0x7420 parp=0xdddd
// ================================================
// orphan
IFieldType UNK_0xdddd = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xdde0: WORD 'UNK_0xdde2' codep=0x7420 parp=0xdde2
// ================================================
// orphan
IFieldType UNK_0xdde2 = {SHIPIDX, 0x15, 0x01};

// ================================================
// 0xdde5: WORD 'UNK_0xdde7' codep=0x7420 parp=0xdde7
// ================================================
// orphan
IFieldType UNK_0xdde7 = {SHIPIDX, 0x16, 0x01};

// ================================================
// 0xddea: WORD 'UNK_0xddec' codep=0x7420 parp=0xddec
// ================================================
// orphan
IFieldType UNK_0xddec = {SHIPIDX, 0x17, 0x01};

// ================================================
// 0xddef: WORD 'UNK_0xddf1' codep=0x7420 parp=0xddf1
// ================================================
// orphan
IFieldType UNK_0xddf1 = {SHIPIDX, 0x18, 0x01};

// ================================================
// 0xddf4: WORD 'UNK_0xddf6' codep=0x7420 parp=0xddf6
// ================================================
// orphan
IFieldType UNK_0xddf6 = {SHIPIDX, 0x19, 0x01};

// ================================================
// 0xddf9: WORD 'UNK_0xddfb' codep=0x7420 parp=0xddfb
// ================================================
IFieldType UNK_0xddfb = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xddfe: WORD 'UNK_0xde00' codep=0x7420 parp=0xde00
// ================================================
IFieldType UNK_0xde00 = {SHIPIDX, 0x1b, 0x01};

// ================================================
// 0xde03: WORD 'UNK_0xde05' codep=0x7420 parp=0xde05
// ================================================
IFieldType UNK_0xde05 = {SHIPIDX, 0x1c, 0x01};

// ================================================
// 0xde08: WORD 'UNK_0xde0a' codep=0x7420 parp=0xde0a
// ================================================
IFieldType UNK_0xde0a = {SHIPIDX, 0x1d, 0x01};

// ================================================
// 0xde0d: WORD 'UNK_0xde0f' codep=0x7420 parp=0xde0f
// ================================================
IFieldType UNK_0xde0f = {SHIPIDX, 0x1e, 0x01};

// ================================================
// 0xde12: WORD 'UNK_0xde14' codep=0x7420 parp=0xde14
// ================================================
IFieldType UNK_0xde14 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xde17: WORD 'UNK_0xde19' codep=0x7420 parp=0xde19
// ================================================
IFieldType UNK_0xde19 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xde1c: WORD 'UNK_0xde1e' codep=0x7420 parp=0xde1e
// ================================================
IFieldType UNK_0xde1e = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xde21: WORD 'UNK_0xde23' codep=0x7420 parp=0xde23
// ================================================
IFieldType UNK_0xde23 = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xde26: WORD 'UNK_0xde28' codep=0x7420 parp=0xde28
// ================================================
IFieldType UNK_0xde28 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xde2b: WORD 'UNK_0xde2d' codep=0x7420 parp=0xde2d
// ================================================
IFieldType UNK_0xde2d = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xde30: WORD 'UNK_0xde32' codep=0x7420 parp=0xde32
// ================================================
IFieldType UNK_0xde32 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xde35: WORD 'UNK_0xde37' codep=0x224c parp=0xde37 params=2 returns=2
// ================================================

void UNK_0xde37() // UNK_0xde37
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
// 0xde5b: WORD 'UNK_0xde5d' codep=0x224c parp=0xde5d params=4 returns=1
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
// 0xde79: WORD 'UNK_0xde7b' codep=0x224c parp=0xde7b params=1 returns=1
// ================================================

void UNK_0xde7b() // UNK_0xde7b
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xde83: WORD 'UNK_0xde85' codep=0x224c parp=0xde85 params=1 returns=1
// ================================================

void UNK_0xde85() // UNK_0xde85
{
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x007f); //  0x007f AND
  SWAP(); // SWAP
  Push(!(Pop() & 0x0080)); //  0x0080 AND NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xde9d: WORD 'UNK_0xde9f' codep=0x224c parp=0xde9f params=0 returns=0
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
// 0xdead: WORD 'UNK_0xdeaf' codep=0x224c parp=0xdeaf params=0 returns=1
// ================================================

void UNK_0xdeaf() // UNK_0xdeaf
{
  Push(0);
  Push(4);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
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
// 0xdecd: WORD 'UNK_0xdecf' codep=0x224c parp=0xdecf params=2 returns=2
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
// 0xdf09: WORD 'UNK_0xdf0b' codep=0x224c parp=0xdf0b params=0 returns=1
// ================================================

void UNK_0xdf0b() // UNK_0xdf0b
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0019?1:0); //  0x0019 =
}


// ================================================
// 0xdf15: WORD 'UNK_0xdf17' codep=0x224c parp=0xdf17 params=0 returns=1
// ================================================

void UNK_0xdf17() // UNK_0xdf17
{
  UNK_0xdf0b(); // UNK_0xdf0b
  if (Pop() != 0)
  {
    Push(0x65e1+UNK_0xddc0.offset); // UNK_0xddc0<IFIELD>
  } else
  {
    Push(0x65e1+UNK_0xde28.offset); // UNK_0xde28<IFIELD>
  }
  Push(Read16(Pop())&0xFF); //  C@
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
// 0xdf91: WORD 'UNK_0xdf93' codep=0x224c parp=0xdf93 params=0 returns=1
// ================================================

void UNK_0xdf93() // UNK_0xdf93
{
  Push(Read16(pp_UNK_0xde59)); // UNK_0xde59 @
  _gt_FLAG(); // >FLAG
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(4);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xde59); // UNK_0xde59
  Store_2(); // !_2
}


// ================================================
// 0xdfab: WORD 'UNK_0xdfad' codep=0x224c parp=0xdfad params=0 returns=1
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
// 0xdfc3: WORD 'UNK_0xdfc5' codep=0x224c parp=0xdfc5 params=0 returns=1
// ================================================

void UNK_0xdfc5() // UNK_0xdfc5
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(6);
  _eq_SPECIE(); // =SPECIE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdfd1: WORD 'UNK_0xdfd3' codep=0x224c parp=0xdfd3 params=0 returns=1
// ================================================

void UNK_0xdfd3() // UNK_0xdfd3
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
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
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(UNK_0xdd9c); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdff1: WORD 'UNK_0xdff3' codep=0x224c parp=0xdff3
// ================================================

void UNK_0xdff3() // UNK_0xdff3
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(UNK_0xdda4); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfff: WORD 'UNK_0xe001' codep=0x224c parp=0xe001
// ================================================

void UNK_0xe001() // UNK_0xe001
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(UNK_0xdd94); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe00d: WORD 'UNK_0xe00f' codep=0x224c parp=0xe00f params=1 returns=1
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
  LoadData(UNK_0xdd84); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xe00f(); // UNK_0xe00f
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Pop() * 6); //  6 *
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
  LoadData(UNK_0xdd84); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xe00f(); // UNK_0xe00f
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Pop() * 8); //  8 *
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
    Push(Pop()==0?1:0); //  0=
    Push(Pop() & Pop()); // AND
  }
  UNK_0xdfc5(); // UNK_0xdfc5
  Push(Pop() & (Read16(pp_Is3)==0?1:0)); //  ?3 @ 0= AND
  if (Pop() != 0)
  {
    IFIRST(); // IFIRST
    Push(0x001d);
    Push(6);
    IFIND(); // IFIND
    Push(Pop()==0?1:0); //  0=
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
IFieldType UNK_0xe093 = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xe096: WORD 'UNK_0xe098' codep=0x224c parp=0xe098 params=0 returns=1
// ================================================

void UNK_0xe098() // UNK_0xe098
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0a0: WORD 'UNK_0xe0a2' codep=0x224c parp=0xe0a2 params=0 returns=1
// ================================================

void UNK_0xe0a2() // UNK_0xe0a2
{
  UNK_0xdd36(); // UNK_0xdd36
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe0ac: WORD 'UNK_0xe0ae' codep=0x224c parp=0xe0ae params=0 returns=1
// ================================================

void UNK_0xe0ae() // UNK_0xe0ae
{
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xe093.offset)&0xFF); // UNK_0xe093<IFIELD> C@
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0be: WORD 'UNK_0xe0c0' codep=0x3b74 parp=0xe0c0
// ================================================
// 0xe0c0: dw 0x0001 0xd4c0

// ================================================
// 0xe0c4: WORD 'UNK_0xe0c6' codep=0x1d29 parp=0xe0c6
// ================================================
// 0xe0c6: db 0x56 0x3a 0x20 0x4f 'V: O'

// ================================================
// 0xe0ca: WORD 'UNK_0xe0cc' codep=0x224c parp=0xe0cc params=0 returns=1
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
// 0xe0dc: WORD 'UNK_0xe0de' codep=0x224c parp=0xe0de params=0 returns=0
// ================================================

void UNK_0xe0de() // UNK_0xe0de
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe0c6); // UNK_0xe0c6
  StoreD(); // D!
}


// ================================================
// 0xe0e8: WORD 'UNK_0xe0ea' codep=0x224c parp=0xe0ea params=0 returns=1
// ================================================

void UNK_0xe0ea() // UNK_0xe0ea
{
  Push(Read16(0x65e1+UNK_0xddac.offset)&0xFF); // UNK_0xddac<IFIELD> C@
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0f2: WORD 'UNK_0xe0f4' codep=0x2214 parp=0xe0f4
// ================================================
// 0xe0f4: dw 0x000b

// ================================================
// 0xe0f6: WORD 'UNK_0xe0f8' codep=0x2214 parp=0xe0f8
// ================================================
// 0xe0f8: dw 0x0005

// ================================================
// 0xe0fa: WORD 'UNK_0xe0fc' codep=0x224c parp=0xe0fc params=1 returns=1
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
// 0xe11e: WORD 'UNK_0xe120' codep=0x224c parp=0xe120 params=0 returns=1
// ================================================

void UNK_0xe120() // UNK_0xe120
{
  Push(Read16(cc_UNK_0xe0f4)); // UNK_0xe0f4
  UNK_0xe0fc(); // UNK_0xe0fc
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe128: WORD 'UNK_0xe12a' codep=0x224c parp=0xe12a params=0 returns=1
// ================================================

void UNK_0xe12a() // UNK_0xe12a
{
  Push(Read16(cc_UNK_0xe0f8)); // UNK_0xe0f8
  UNK_0xe0fc(); // UNK_0xe0fc
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe138: WORD 'UNK_0xe13a' codep=0x224c parp=0xe13a params=0 returns=1
// ================================================
// orphan

void UNK_0xe13a() // UNK_0xe13a
{
  UNK_0xe120(); // UNK_0xe120
  Push(!Pop()); //  NOT
  UNK_0xe12a(); // UNK_0xe12a
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe146: WORD 'UNK_0xe148' codep=0x1d29 parp=0xe148
// ================================================
// 0xe148: db 0x3a 0x20 ': '

// ================================================
// 0xe14a: WORD 'UNK_0xe14c' codep=0x1d29 parp=0xe14c
// ================================================
// 0xe14c: db 0x56 0x3a 0x20 0xca 'V:  '

// ================================================
// 0xe150: WORD 'UNK_0xe152' codep=0x224c parp=0xe152 params=1 returns=0
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
// 0xe160: WORD 'UNK_0xe162' codep=0x224c parp=0xe162 params=0 returns=1
// ================================================

void UNK_0xe162() // UNK_0xe162
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe14c); // UNK_0xe14c
  _2_at_(); // 2@
  Push(Read16(pp_UNK_0xe148)); // UNK_0xe148 @
  Push(0);
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe176: WORD 'UNK_0xe178' codep=0x224c parp=0xe178 params=0 returns=1
// ================================================

void UNK_0xe178() // UNK_0xe178
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(0x65e1+UNK_0xde05.offset); // UNK_0xde05<IFIELD>
  UNK_0xde7b(); // UNK_0xde7b
  _gt_FLAG(); // >FLAG
  Push(Pop() & (((Read16(0x65e1+UNK_0xde05.offset)&0xFF) & 0x0080)==0?1:0)); //  UNK_0xde05<IFIELD> C@ 0x0080 AND 0= AND
  Push(0x65e1+UNK_0xde00.offset); // UNK_0xde00<IFIELD>
  UNK_0xde85(); // UNK_0xde85
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe19a: WORD 'UNK_0xe19c' codep=0x224c parp=0xe19c params=0 returns=1
// ================================================

void UNK_0xe19c() // UNK_0xe19c
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(0x65e1+UNK_0xde0f.offset); // UNK_0xde0f<IFIELD>
  UNK_0xde7b(); // UNK_0xde7b
  _gt_FLAG(); // >FLAG
  Push(Pop() & (((Read16(0x65e1+UNK_0xde0f.offset)&0xFF) & 0x0080)==0?1:0)); //  UNK_0xde0f<IFIELD> C@ 0x0080 AND 0= AND
  Push(0x65e1+UNK_0xde0a.offset); // UNK_0xde0a<IFIELD>
  UNK_0xde85(); // UNK_0xde85
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe1be: WORD 'UNK_0xe1c0' codep=0x224c parp=0xe1c0 params=0 returns=1
// ================================================

void UNK_0xe1c0() // UNK_0xe1c0
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==1?1:0); // A-POSTU C@ 1 =
}


// ================================================
// 0xe1ca: WORD 'UNK_0xe1cc' codep=0x224c parp=0xe1cc params=0 returns=1
// ================================================

void UNK_0xe1cc() // UNK_0xe1cc
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==8?1:0); // A-POSTU C@ 8 =
}


// ================================================
// 0xe1d6: WORD 'UNK_0xe1d8' codep=0x224c parp=0xe1d8 params=0 returns=1
// ================================================

void UNK_0xe1d8() // UNK_0xe1d8
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==0x0010?1:0); // A-POSTU C@ 0x0010 =
}


// ================================================
// 0xe1e4: WORD 'UNK_0xe1e6' codep=0x2214 parp=0xe1e6
// ================================================
// 0xe1e6: dw 0x001d

// ================================================
// 0xe1e8: WORD 'UNK_0xe1ea' codep=0x224c parp=0xe1ea params=0 returns=0
// ================================================

void UNK_0xe1ea() // UNK_0xe1ea
{
  Push(Read16(pp__n_MISS) - 1); // #MISS @ 1-
  Push(0);
  MAX(); // MAX
  Push(pp__n_MISS); // #MISS
  Store_2(); // !_2
}


// ================================================
// 0xe1fa: WORD 'UNK_0xe1fc' codep=0x224c parp=0xe1fc params=0 returns=0
// ================================================

void UNK_0xe1fc() // UNK_0xe1fc
{
  Push(1);
  Push(pp__n_MISS); // #MISS
  _plus__ex__2(); // +!_2
  Push(Read16(pp__n_MISS)); // #MISS @
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


// ================================================
// 0xe21c: WORD 'UNK_0xe21e' codep=0x1d29 parp=0xe21e
// ================================================
// orphan
// 0xe21e: db 0x00 0x00 0x4c 0x22 0x34 0xdd 0x5d 0x17 0x5a 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x1c 0xe2 0xb8 0x3b 0x53 0x13 0x1c 0xe2 0xae 0x0b 0xdd 0x4a 0x90 0x16 '  L"4 ] Z F        ;S      J  '

// ================================================
// 0xe23c: WORD 'UNK_0xe23e' codep=0x224c parp=0xe23e params=0 returns=1
// ================================================

void UNK_0xe23e() // UNK_0xe23e
{
  Push((Read16(0x65e1+UNK_0xde19.offset)&0xFF) & 8); // UNK_0xde19<IFIELD> C@ 8 AND
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe24a: WORD 'UNK_0xe24c' codep=0x224c parp=0xe24c params=0 returns=1
// ================================================

void UNK_0xe24c() // UNK_0xe24c
{
  Push(Read16(0x65e1+UNK_0xde14.offset)); // UNK_0xde14<IFIELD> @
  _gt_FLAG(); // >FLAG
  UNK_0xe23e(); // UNK_0xe23e
  Push(Pop() & Pop()); // AND
  Push(Pop() & (Read16(pp_IsNEB)==0?1:0)); //  ?NEB @ 0= AND
}


// ================================================
// 0xe260: WORD 'UNK_0xe262' codep=0x224c parp=0xe262 params=0 returns=1
// ================================================

void UNK_0xe262() // UNK_0xe262
{
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    Push(0xc0a1); // probable 'OV/STX'
    return;
  }
  Push(0xc090); // probable 'OV/STA'
}


// ================================================
// 0xe27c: WORD 'UNK_0xe27e' codep=0x224c parp=0xe27e params=0 returns=1
// ================================================

void UNK_0xe27e() // UNK_0xe27e
{
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbcb8); // probable 'OVDBA'
    return;
  }
  Push(0xbc98); // probable 'OV/DA'
}


// ================================================
// 0xe298: WORD 'UNK_0xe29a' codep=0x224c parp=0xe29a params=0 returns=0
// ================================================

void UNK_0xe29a() // UNK_0xe29a
{
  Push(Read16(0x65e1+UNK_0xde1e.offset)); // UNK_0xde1e<IFIELD> @
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
// 0xe2b6: dw 0x0001

// ================================================
// 0xe2b8: WORD 'UNK_0xe2ba' codep=0x2214 parp=0xe2ba
// ================================================
// 0xe2ba: dw 0x0000

// ================================================
// 0xe2bc: WORD 'UNK_0xe2be' codep=0x1d29 parp=0xe2be
// ================================================
// 0xe2be: db 0x00 0x00 '  '

// ================================================
// 0xe2c0: WORD 'UNK_0xe2c2' codep=0x7420 parp=0xe2c2
// ================================================
IFieldType UNK_0xe2c2 = {PROJECTILEIDX, 0x0b, 0x04};

// ================================================
// 0xe2c5: WORD 'UNK_0xe2c7' codep=0x7420 parp=0xe2c7
// ================================================
IFieldType UNK_0xe2c7 = {PROJECTILEIDX, 0x0f, 0x04};

// ================================================
// 0xe2ca: WORD 'UNK_0xe2cc' codep=0x7420 parp=0xe2cc
// ================================================
IFieldType UNK_0xe2cc = {PROJECTILEIDX, 0x13, 0x02};

// ================================================
// 0xe2cf: WORD 'UNK_0xe2d1' codep=0x7420 parp=0xe2d1
// ================================================
IFieldType UNK_0xe2d1 = {PROJECTILEIDX, 0x15, 0x02};

// ================================================
// 0xe2d4: WORD 'UNK_0xe2d6' codep=0x7420 parp=0xe2d6
// ================================================
IFieldType UNK_0xe2d6 = {PROJECTILEIDX, 0x17, 0x02};

// ================================================
// 0xe2d9: WORD 'UNK_0xe2db' codep=0x7420 parp=0xe2db
// ================================================
IFieldType UNK_0xe2db = {PROJECTILEIDX, 0x1b, 0x02};

// ================================================
// 0xe2de: WORD 'UNK_0xe2e0' codep=0x7420 parp=0xe2e0
// ================================================
// orphan
IFieldType UNK_0xe2e0 = {PROJECTILEIDX, 0x1f, 0x02};

// ================================================
// 0xe2e3: WORD 'UNK_0xe2e5' codep=0x7420 parp=0xe2e5
// ================================================
IFieldType UNK_0xe2e5 = {PROJECTILEIDX, 0x21, 0x01};

// ================================================
// 0xe2e8: WORD 'UNK_0xe2ea' codep=0x7420 parp=0xe2ea
// ================================================
IFieldType UNK_0xe2ea = {PROJECTILEIDX, 0x22, 0x02};

// ================================================
// 0xe2ed: WORD 'UNK_0xe2ef' codep=0x7420 parp=0xe2ef
// ================================================
IFieldType UNK_0xe2ef = {PROJECTILEIDX, 0x24, 0x02};

// ================================================
// 0xe2f2: WORD 'UNK_0xe2f4' codep=0x7420 parp=0xe2f4
// ================================================
IFieldType UNK_0xe2f4 = {PROJECTILEIDX, 0x26, 0x03};

// ================================================
// 0xe2f7: WORD 'UNK_0xe2f9' codep=0x224c parp=0xe2f9 params=0 returns=1
// ================================================

void UNK_0xe2f9() // UNK_0xe2f9
{
  GetINST_dash_S(); // @INST-S
}


// ================================================
// 0xe2fd: WORD 'UNK_0xe2ff' codep=0x224c parp=0xe2ff params=0 returns=0
// ================================================

void UNK_0xe2ff() // UNK_0xe2ff
{
  UNK_0xdd16(); // UNK_0xdd16

  label2:
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
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
// 0xe31b: WORD 'UNK_0xe31d' codep=0x224c parp=0xe31d params=0 returns=1
// ================================================

void UNK_0xe31d() // UNK_0xe31d
{
  Push((Read16(0x65e1+UNK_0xe2e5.offset)&0xFF)==Read16(cc_UNK_0xe2ba)?1:0); // UNK_0xe2e5<IFIELD> C@ UNK_0xe2ba =
  if (Pop() != 0)
  {
    GetColor(RED);
    return;
  }
  GetColor(LT_dash_BLUE);
}


// ================================================
// 0xe333: WORD 'C>C' codep=0x4b3b parp=0xe33b
// ================================================

void C_gt_C() // C>C
{
  switch(Pop()) // C>C
  {
  case 6:
    GetColor(WHITE);
    break;
  case 7:
    GetColor(VIOLET);
    break;
  case 10:
    GetColor(PINK);
    break;
  default:
    UNK_0xe31d(); // UNK_0xe31d
    break;

  }
}

// ================================================
// 0xe34b: WORD 'UNK_0xe34d' codep=0x224c parp=0xe34d
// ================================================
// orphan

void UNK_0xe34d() // UNK_0xe34d
{
  UNK_0xe2f9(); // UNK_0xe2f9
  C_gt_C(); // C>C case
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe355: WORD 'UNK_0xe357' codep=0x224c parp=0xe357 params=0 returns=2
// ================================================

void UNK_0xe357() // UNK_0xe357
{
  Push(Read16(0x65e1+UNK_0xe2c2.offset)); // UNK_0xe2c2<IFIELD> @
  Push(Read16(0x65e1+UNK_0xe2c7.offset)); // UNK_0xe2c7<IFIELD> @
}


// ================================================
// 0xe361: WORD 'UNK_0xe363' codep=0x224c parp=0xe363 params=0 returns=2
// ================================================
// orphan

void UNK_0xe363() // UNK_0xe363
{
  Push(Read16(0x65e1+UNK_0xe2cc.offset)); // UNK_0xe2cc<IFIELD> @
  Push(Read16(0x65e1+UNK_0xe2d1.offset)); // UNK_0xe2d1<IFIELD> @
}


// ================================================
// 0xe36d: WORD 'UNK_0xe36f' codep=0x224c parp=0xe36f params=0 returns=0
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
// 0xe381: WORD 'UNK_0xe383' codep=0x224c parp=0xe383 params=1 returns=0
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
  Push(Read16(pp_XBLT) + 1); // XBLT @ 1+
  Push(Read16(pp_YBLT) - 1); // YBLT @ 1-
  ROT(); // ROT
  if (Pop() != 0)
  {
    Push(5);
    DrawCIRCLE_1(); // .CIRCLE_1
    return;
  }
  Push(4);
  DrawCIRCLE_1(); // .CIRCLE_1
}


// ================================================
// 0xe3b7: WORD 'UNK_0xe3b9' codep=0x224c parp=0xe3b9 params=0 returns=0
// ================================================

void UNK_0xe3b9() // UNK_0xe3b9
{
  Push(Read16(0x65e1+UNK_0xe2c2.offset)); // UNK_0xe2c2<IFIELD> @
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

// ================================================
// 0xe3f6: WORD 'UNK_0xe3f8' codep=0x224c parp=0xe3f8
// ================================================
// orphan

void UNK_0xe3f8() // UNK_0xe3f8
{
  UNK_0xe357(); // UNK_0xe357
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(Pop() + 3); //  3 +
  SWAP(); // SWAP
  POS_dot_(); // POS.
  UNK_0xe34d(); // UNK_0xe34d
  Push(Read16(pp_XWLD_c_XP)); // XWLD:XP @
  SCALE_gt__dot_MIS(); // SCALE>.MIS case
}


// ================================================
// 0xe412: WORD 'UNK_0xe414' codep=0x224c parp=0xe414
// ================================================

void UNK_0xe414() // UNK_0xe414
{
  UNK_0xdd16(); // UNK_0xdd16
  Push(0xe3f8); // probable 'UNK_0xe3f8'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe422: WORD 'UNK_0xe424' codep=0x224c parp=0xe424 params=0 returns=0
// ================================================

void UNK_0xe424() // UNK_0xe424
{
  Push((Read16(0x65e1+UNK_0xe2e5.offset)&0xFF)==Read16(cc_UNK_0xe2ba)?1:0); // UNK_0xe2e5<IFIELD> C@ UNK_0xe2ba =
  if (Pop() != 0)
  {
    Push2Words("*SHIP");
  } else
  {
    Push(pp_UNK_0xdd28); // UNK_0xdd28
    _2_at_(); // 2@
  }
  Push(0x65e1+UNK_0xe2f4.offset); // UNK_0xe2f4<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe440: WORD 'UNK_0xe442' codep=0x224c parp=0xe442 params=2 returns=2
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
// 0xe450: WORD 'UNK_0xe452' codep=0x224c parp=0xe452 params=0 returns=0
// ================================================

void UNK_0xe452() // UNK_0xe452
{
  unsigned short int a;
  Push(Read16(0x65e1+UNK_0xe2cc.offset) - Read16(0x65e1+UNK_0xe2c2.offset)); // UNK_0xe2cc<IFIELD> @ UNK_0xe2c2<IFIELD> @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(Read16(0x65e1+UNK_0xe2d1.offset) - Read16(0x65e1+UNK_0xe2c7.offset)); // UNK_0xe2d1<IFIELD> @ UNK_0xe2c7<IFIELD> @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  a = Pop(); // >R
  Push(Read16(a)); // R@
  UNK_0xe442(); // UNK_0xe442
  Push(0x65e1+UNK_0xe2db.offset); // UNK_0xe2db<IFIELD>
  _2_ex__2(); // 2!_2
  Push(a); // R>
  UNK_0xe442(); // UNK_0xe442
  Push(0x65e1+UNK_0xe2d6.offset); // UNK_0xe2d6<IFIELD>
  _2_ex__2(); // 2!_2
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  Push((0x65e1+UNK_0xe2c2.offset) + 2); // UNK_0xe2c2<IFIELD> 2+
  _st__ex__gt_(); // <!>
  Push((0x65e1+UNK_0xe2c7.offset) + 2); // UNK_0xe2c7<IFIELD> 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe498: WORD 'UNK_0xe49a' codep=0x224c parp=0xe49a params=0 returns=0
// ================================================

void UNK_0xe49a() // UNK_0xe49a
{
  unsigned short int a, i, imax;
  Push(Read16(pp_IINDEX)); // IINDEX @
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
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
      DrawICON(); // .ICON
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(a); // R>
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe4be: WORD 'UNK_0xe4c0' codep=0x224c parp=0xe4c0 params=0 returns=0
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
// 0xe4ce: WORD 'UNK_0xe4d0' codep=0x224c parp=0xe4d0 params=0 returns=0
// ================================================

void UNK_0xe4d0() // UNK_0xe4d0
{
  Push(0x65e1+UNK_0xe2c7.offset); // UNK_0xe2c7<IFIELD>
  _2_at_(); // 2@
  Push(0x65e1+UNK_0xe2db.offset); // UNK_0xe2db<IFIELD>
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x65e1+UNK_0xe2c7.offset); // UNK_0xe2c7<IFIELD>
  _2_ex__2(); // 2!_2
  Push(0x65e1+UNK_0xe2c2.offset); // UNK_0xe2c2<IFIELD>
  _2_at_(); // 2@
  Push(0x65e1+UNK_0xe2d6.offset); // UNK_0xe2d6<IFIELD>
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x65e1+UNK_0xe2c2.offset); // UNK_0xe2c2<IFIELD>
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe4ee: WORD 'UNK_0xe4f0' codep=0x224c parp=0xe4f0
// ================================================

void UNK_0xe4f0() // UNK_0xe4f0
{
  Push(Read16(pp_IsNEB) & !Read16(pp_IsUF)); // ?NEB @ ?UF @ NOT AND
  IsCGA(); // ?CGA
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    NBCLR(); // NBCLR
  } else
  {
    GetColor(BLACK);
  }
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
}


// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516 params=0 returns=0
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  Push(!(Read16(pp_IsAF)==1?1:0)); // ?AF @ 1 = NOT
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
// 0xe534: WORD 'UNK_0xe536' codep=0x224c parp=0xe536 params=0 returns=0
// ================================================

void UNK_0xe536() // UNK_0xe536
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
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
    Push(0x000c * Read16(cc_MPS)); // 0x000c MPS *
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
// 0xe56e: dw 0x0000

// ================================================
// 0xe570: WORD 'UNK_0xe572' codep=0x224c parp=0xe572 params=0 returns=0
// ================================================

void UNK_0xe572() // UNK_0xe572
{
  unsigned short int i, imax, j, jmax;
  Push(0x0064);
  Push(0x03e8);
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(RED);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2 - 1); //  2* 1-
  Push(0xe56e); // probable 'UNK_0xe56e'
  Store_2(); // !_2
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
    Push(i * 2); // I 2*
    RRND(); // RRND
    TONE(); // TONE
    Push(3 * Read16(cc_MPS)); // 3 MPS *
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
  Push(0x65e1+UNK_0xe2e5.offset); // UNK_0xe2e5<IFIELD>
  C_ex__2(); // C!_2
  UNK_0xe424(); // UNK_0xe424
  Push(0x65e1+UNK_0xe2d1.offset); // UNK_0xe2d1<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+UNK_0xe2cc.offset); // UNK_0xe2cc<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+UNK_0xe2c7.offset); // UNK_0xe2c7<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+UNK_0xe2c2.offset); // UNK_0xe2c2<IFIELD>
  Store_2(); // !_2
  UNK_0xe452(); // UNK_0xe452
  Push(0x65e1+UNK_0xe2ea.offset); // UNK_0xe2ea<IFIELD>
  _099(); // 099
  Push(a==7?1:0); // R> 7 =
  if (Pop() != 0)
  {
    Push(0x0060);
  } else
  {
    Push(0x7fff);
  }
  Push(0x65e1+UNK_0xe2ef.offset); // UNK_0xe2ef<IFIELD>
  Store_2(); // !_2
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
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
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
    Push((Read16(0x65e1+UNK_0xe2e5.offset)&0xFF)==Read16(cc_UNK_0xe2ba)?1:0); // UNK_0xe2e5<IFIELD> C@ UNK_0xe2ba =
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


// ================================================
// 0xe662: WORD 'UNK_0xe664' codep=0x224c parp=0xe664
// ================================================
// orphan

void UNK_0xe664() // UNK_0xe664
{
  UNK_0xe357(); // UNK_0xe357
  IsINVIS(); // ?INVIS
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    UNK_0xe612(); // UNK_0xe612
    IPREV(); // IPREV
    return;
  }
  UNK_0xe61a(); // UNK_0xe61a
  if (Pop() == 0) return;
  Push(1);
  Push(pp_UNK_0xe2be); // UNK_0xe2be
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe684: WORD 'UNK_0xe686' codep=0x224c parp=0xe686
// ================================================

void UNK_0xe686() // UNK_0xe686
{
  Push(0xe664); // probable 'UNK_0xe664'
  ALL(); // ALL
}


// ================================================
// 0xe68e: WORD 'UNK_0xe690' codep=0x224c parp=0xe690
// ================================================

void UNK_0xe690() // UNK_0xe690
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  UNK_0xdd64(); // UNK_0xdd64
  StoreIY(); // !IY
  StoreIX(); // !IX
  UNK_0xe4c0(); // UNK_0xe4c0
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0017);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    UNK_0xe516(); // UNK_0xe516
  }
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe6c2: WORD 'UNK_0xe6c4' codep=0x224c parp=0xe6c4 params=4 returns=0
// ================================================

void UNK_0xe6c4() // UNK_0xe6c4
{
  UNK_0xdecf(); // UNK_0xdecf
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xe6d6: WORD 'UNK_0xe6d8' codep=0x224c parp=0xe6d8 params=4 returns=0
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
  Push(-Pop()); //  NEGATE
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(-Pop()); //  NEGATE
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xe702: WORD 'UNK_0xe704' codep=0x224c parp=0xe704
// ================================================

void UNK_0xe704() // UNK_0xe704
{
  do
  {
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    UNK_0xe61a(); // UNK_0xe61a
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    INEXT(); // INEXT
  } while(1);
}


// ================================================
// 0xe71a: WORD 'UNK_0xe71c' codep=0x224c parp=0xe71c params=2 returns=2
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
// 0xe72a: WORD 'UNK_0xe72c' codep=0x224c parp=0xe72c params=0 returns=0
// ================================================

void UNK_0xe72c() // UNK_0xe72c
{
  UNK_0xe2f9(); // UNK_0xe2f9
  Push(6);
  Push(8);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(0x65e1+UNK_0xe2f4.offset); // UNK_0xe2f4<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  UNK_0xe71c(); // UNK_0xe71c
  SWAP(); // SWAP
  Push(0x65e1+UNK_0xe2cc.offset); // UNK_0xe2cc<IFIELD>
  StoreD(); // D!
  UNK_0xe452(); // UNK_0xe452
}


// ================================================
// 0xe752: WORD 'UNK_0xe754' codep=0x224c parp=0xe754 params=0 returns=0
// ================================================

void UNK_0xe754() // UNK_0xe754
{
  Push(7);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  UNK_0xe612(); // UNK_0xe612
}


// ================================================
// 0xe762: WORD 'UNK_0xe764' codep=0x224c parp=0xe764 params=0 returns=0
// ================================================

void UNK_0xe764() // UNK_0xe764
{
  do
  {
    UNK_0xe2f9(); // UNK_0xe2f9
    Push(!(Pop()==7?1:0)); //  7 = NOT
    Push(Read16(0x65e1+UNK_0xe2ea.offset)); // UNK_0xe2ea<IFIELD> @
    Push(3);
    MOD(); // MOD
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xe72c(); // UNK_0xe72c
      UNK_0xe4d0(); // UNK_0xe4d0
    }
    Push(1);
    Push(0x65e1+UNK_0xe2ea.offset); // UNK_0xe2ea<IFIELD>
    _plus__ex__2(); // +!_2
    Push(Read16(0x65e1+UNK_0xe2ef.offset)); // UNK_0xe2ef<IFIELD> @
    Push(Read16(0x65e1+UNK_0xe2ea.offset)); // UNK_0xe2ea<IFIELD> @
    _st_(); // <
    if (Pop() != 0)
    {
      UNK_0xe612(); // UNK_0xe612
      IPREV(); // IPREV
    }
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    if (Pop() == 0) return;
    INEXT(); // INEXT
  } while(1);
}


// ================================================
// 0xe7a6: WORD 'UNK_0xe7a8' codep=0x224c parp=0xe7a8 params=0 returns=0
// ================================================

void UNK_0xe7a8() // UNK_0xe7a8
{
  unsigned short int i, imax;
  UNK_0xdd16(); // UNK_0xdd16
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    UNK_0xe764(); // UNK_0xe764
    UNK_0xe516(); // UNK_0xe516
    Push(pp_UNK_0xe2be); // UNK_0xe2be
    _099(); // 099
    UNK_0xe686(); // UNK_0xe686
    Push(Read16(pp_UNK_0xe2be)); // UNK_0xe2be @
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
        Push(Read16(0x65e1+UNK_0xe2e5.offset)&0xFF); // UNK_0xe2e5<IFIELD> C@
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
// 0xe7ea: WORD 'UNK_0xe7ec' codep=0x224c parp=0xe7ec params=2 returns=0
// ================================================

void UNK_0xe7ec() // UNK_0xe7ec
{
  Push(0);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    UNK_0xdd64(); // UNK_0xdd64
    UNK_0xdecf(); // UNK_0xdecf
    SWAP(); // SWAP
    KEY_gt_ORIENT(); // KEY>ORIENT case
    Push(Read16(regsp)); // DUP
    Push(0x65e1+UNK_0xddc0.offset); // UNK_0xddc0<IFIELD>
    C_ex__2(); // C!_2
    Push(Pop() + 0x0023); //  0x0023 +
    StoreID(); // !ID
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe810: WORD 'UNK_0xe812' codep=0x224c parp=0xe812 params=0 returns=0
// ================================================

void UNK_0xe812() // UNK_0xe812
{
  Push(0x0014);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  UNK_0xdd4c(); // UNK_0xdd4c
  UNK_0xe7ec(); // UNK_0xe7ec
  Push((Read16(0x65e1+UNK_0xddc0.offset)&0xFF) + 4); // UNK_0xddc0<IFIELD> C@ 4 +
  Push(8);
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0x65e1+UNK_0xddc0.offset); // UNK_0xddc0<IFIELD>
  C_ex__2(); // C!_2
  Push(Pop() + 0x0023); //  0x0023 +
  StoreID(); // !ID
}


// ================================================
// 0xe83e: WORD 'UNK_0xe840' codep=0x224c parp=0xe840
// ================================================

void UNK_0xe840() // UNK_0xe840
{
  GetID(); // @ID
  Push(!(Pop()==Read16(cc_INVIS_dash_I)?1:0)); //  INVIS-I = NOT
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
  Push(Read16(pp_XWLD_c_XP)); // XWLD:XP @
  Push(4);
  _slash_(); // /
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(Pop() + a); //  R> +
  SWAP(); // SWAP
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e params=0 returns=1
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
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe882: WORD 'UNK_0xe884' codep=0x224c parp=0xe884 params=0 returns=1
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
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe898: WORD 'UNK_0xe89a' codep=0x224c parp=0xe89a
// ================================================

void UNK_0xe89a() // UNK_0xe89a
{
  unsigned short int a;
  Push(Read16(pp_IINDEX)); // IINDEX @
  a = Pop(); // >R
  Push2Words("*SHIP");
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  Push((Read16(0x65e1+UNK_0xde28.offset)&0xFF) + 0x001b); // UNK_0xde28<IFIELD> C@ 0x001b +
  StoreID(); // !ID
  Push(a); // R>
  Push(pp_IINDEX); // IINDEX
  _st__ex__gt_(); // <!>
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xe8be: WORD 'UNK_0xe8c0' codep=0x224c parp=0xe8c0 params=0 returns=1
// ================================================

void UNK_0xe8c0() // UNK_0xe8c0
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
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
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(LT_dash_BLUE);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x224c parp=0xe8ec params=0 returns=0
// ================================================

void UNK_0xe8ec() // UNK_0xe8ec
{
  UNK_0xe4c0(); // UNK_0xe4c0
  Push(0xc7ce); // probable 'CSCALE'
  MODULE(); // MODULE
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xe8f8: WORD 'UNK_0xe8fa' codep=0x224c parp=0xe8fa params=4 returns=0
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
  Push(Pop() & !Read16(pp_UNK_0xdd24)); //  UNK_0xdd24 @ NOT AND
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
// 0xe930: WORD 'UNK_0xe932' codep=0x224c parp=0xe932 params=0 returns=1
// ================================================

void UNK_0xe932() // UNK_0xe932
{
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe93c: WORD 'UNK_0xe93e' codep=0x224c parp=0xe93e params=0 returns=1
// ================================================

void UNK_0xe93e() // UNK_0xe93e
{
  Push(0x65e1+UNK_0xddd8.offset); // UNK_0xddd8<IFIELD>
  Push(Read16(regsp)); // DUP
  UNK_0xde85(); // UNK_0xde85
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(((Read16(Pop() + 1)&0xFF) & 0x0080)==0?1:0); //  1+ C@ 0x0080 AND 0=
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe964: WORD 'UNK_0xe966' codep=0x224c parp=0xe966
// ================================================

void UNK_0xe966() // UNK_0xe966
{
  unsigned short int a, b;
  Push(Read16(pp_IINDEX)); // IINDEX @
  a = Pop(); // >R
  b = Pop(); // >R
  _gt_MAINVI(); // >MAINVI
  UNK_0xe4f0(); // UNK_0xe4f0
  UNK_0xe414(); // UNK_0xe414
  UNK_0xe852(); // UNK_0xe852
  _2SWAP(); // 2SWAP
  UNK_0xe852(); // UNK_0xe852
  Push(b); // R>
  StoreCOLOR(); // !COLOR
  _1PIX(); // 1PIX
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  LLINE(); // LLINE
  UNK_0xe8fa(); // UNK_0xe8fa
  _2PIX(); // 2PIX
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
  if (Pop() != 0)
  {
    UNK_0xe572(); // UNK_0xe572
  }
  Push(a); // R>
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe9a0: WORD 'UNK_0xe9a2' codep=0x224c parp=0xe9a2 params=2 returns=0
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
    Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
    _plus__ex__2(); // +!_2
    Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
    _plus__ex__2(); // +!_2
    GetIX(); // @IX
    Push(Pop() + Pop()); // +
    StoreIX(); // !IX
    GetIY(); // @IY
    Push(Pop() + Pop()); // +
    StoreIY(); // !IY
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
  Push((Pop()==0x0143?1:0) & Read16(pp_UNK_0xdd20)); //  0x0143 = UNK_0xdd20 @ AND
  if (Pop() == 0) return;
  UNK_0xdf0b(); // UNK_0xdf0b
  Push(!Pop()); //  NOT
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
  Push(Pop() * a); //  R> *
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
// 0xea30: WORD 'UNK_0xea32' codep=0x224c parp=0xea32 params=0 returns=1
// ================================================

void UNK_0xea32() // UNK_0xea32
{
  GetINST_dash_S(); // @INST-S
  Push(0x0019);
  Push(0x001b);
  WITHIN(); // WITHIN
  Push(0x001c);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  UNK_0xdf0b(); // UNK_0xdf0b
  Push(Pop() & Pop()); // AND
  Push(0);
  Push(Read16(cc_MPS) * 2); // MPS 2*
  Push(5);
  MAX(); // MAX
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
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
  StoreD(); // D!
  ICLOSE(); // ICLOSE
  Push(2 * Read16(cc_MPS)); // 2 MPS *
  Push(5);
  MAX(); // MAX
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xe932(); // UNK_0xe932
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    StoreID(); // !ID
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
  Push(Read16(pp_IINDEX)); // IINDEX @
  _gt_MAINVI(); // >MAINVI
  UNK_0xe4f0(); // UNK_0xe4f0
  UNK_0xe414(); // UNK_0xe414
  DrawLOCAL_dash_(); // .LOCAL-
  _1PIX(); // 1PIX
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
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
    Push(Pop() + i); //  I +
    SWAP(); // SWAP
    Push(Pop() + i); //  I +
    SWAP(); // SWAP
    LLINE(); // LLINE
    V_gt_DISPL(); // V>DISPL
    Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
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
    SET_STR_AS_PARAM("RAY MISSED");
    DrawTTY(); // .TTY
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


// ================================================
// 0xeb31: WORD 'UNK_0xeb33' codep=0x224c parp=0xeb33 params=2 returns=2
// ================================================
// orphan

void UNK_0xeb33() // UNK_0xeb33
{
  Push(Pop() + 0x0044); //  0x0044 +
  SWAP(); // SWAP
  Push(Pop() + 8); //  8 +
  SWAP(); // SWAP
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45 params=0 returns=0
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
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
    Push(0x00c8 * Read16(cc_MPS)); // 0x00c8 MPS *
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
  Push(Pop() + Read16(pp_XABS)); //  XABS @ +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  UNK_0xe86e(); // UNK_0xe86e
  Push(Pop() + Read16(pp_YABS)); //  YABS @ +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
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
  LoadData(UNK_0xdd94); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xe5be(); // UNK_0xe5be
  Push(3);
  Push(0x65e1+UNK_0xddbb.offset); // UNK_0xddbb<IFIELD>
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
  LoadData(UNK_0xdda4); // from 'VESSEL'
  Push((Read16(Pop())&0xFF) + 5); //  C@ 5 +
  UNK_0xe5be(); // UNK_0xe5be
  Push(3);
  Push(0x65e1+UNK_0xddbb.offset); // UNK_0xddbb<IFIELD>
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
  GetColor(RED);
  UNK_0xe966(); // UNK_0xe966
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x6638); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  DrawTTY(); // .TTY
  LoadData(UNK_0xdd9c); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Draw(); // .
  Push(Read16(cc_UNK_0xe2ba)); // UNK_0xe2ba
  Push(0);
  Push(0xc694); // probable 'DO-DA'
  MODULE(); // MODULE
  Push(3);
  Push(0x65e1+UNK_0xddbb.offset); // UNK_0xddbb<IFIELD>
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
  Push(0x65e1+UNK_0xddbb.offset); // UNK_0xddbb<IFIELD>
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
  Push(0x65e1+UNK_0xddbb.offset); // UNK_0xddbb<IFIELD>
  C_ex__2(); // C!_2
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xe690(); // UNK_0xe690
}


// ================================================
// 0xec43: WORD 'UNK_0xec45' codep=0x224c parp=0xec45 params=1 returns=0
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
// 0xec5f: WORD '?APPROACHI' codep=0x224c parp=0xec6e params=0 returns=1
// ================================================

void IsAPPROACHI() // ?APPROACHI
{
  Push((Read16(0x65e1+UNK_0xddbb.offset)&0xFF)==3?1:0); // UNK_0xddbb<IFIELD> C@ 3 =
}


// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x224c parp=0xec7a
// ================================================

void UNK_0xec7a() // UNK_0xec7a
{
  unsigned short int a;
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(1);
  UNK_0xec45(); // UNK_0xec45
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(a); // R>
  UNK_0xec45(); // UNK_0xec45
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  UNK_0xdd5c(); // UNK_0xdd5c
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xe690(); // UNK_0xe690
  Push(0);
  Push(0x65e1+UNK_0xddbb.offset); // UNK_0xddbb<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xeca8: WORD 'UNK_0xecaa' codep=0x224c parp=0xecaa params=0 returns=1
// ================================================

void UNK_0xecaa() // UNK_0xecaa
{
  GetINST_dash_S(); // @INST-S
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
  Push(Pop() & (Read16(pp_A_dash_POSTU)==0x0010?1:0)); //  A-POSTU @ 0x0010 = AND
}


// ================================================
// 0xecd8: WORD 'UNK_0xecda' codep=0x224c parp=0xecda params=0 returns=0
// ================================================

void UNK_0xecda() // UNK_0xecda
{
  Push(0xc746); // probable 'GNL'
  MODULE(); // MODULE
}


// ================================================
// 0xece2: WORD 'UNK_0xece4' codep=0x224c parp=0xece4 params=0 returns=1
// ================================================

void UNK_0xece4() // UNK_0xece4
{
  Push(Read16(pp_CONTEXT_3)==4?1:0); // CONTEXT_3 @ 4 =
}


// ================================================
// 0xecee: WORD '?J' codep=0x224c parp=0xecf5 params=0 returns=2
// ================================================
// entry

void IsJ() // ?J
{
  Push(Read16(pp_UNK_0xdd20)); // UNK_0xdd20 @
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
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11 params=0 returns=0
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
  StoreD(); // D!
  Push(Read16(pp_NLR)); // NLR @
  Push(pp_NLR); // NLR
  _099(); // 099
  Push(!Read16(pp_IsNEB)); // ?NEB @ NOT
  if (Pop() != 0)
  {
    Push(Pop()==1?1:0); //  1 =
    if (Pop() != 0)
    {
      CTINIT(); // CTINIT
    } else
    {
      GetColor(YELLOW);
      StoreCOLOR(); // !COLOR
    }
    Push(0x6651); Push(0x0002);
    UNK_0xde37(); // UNK_0xde37
    DrawTTY(); // .TTY
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xee6d: WORD 'UNK_0xee6f' codep=0x224c parp=0xee6f
// ================================================

void UNK_0xee6f() // UNK_0xee6f
{
  GetID(); // @ID
  Push(Read16(regsp)); // DUP
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
  Push(!Pop()); //  NOT
  SWAP(); // SWAP
  Push(!(Pop()==0x002b?1:0)); //  0x002b = NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f params=0 returns=0
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  unsigned short int i, imax;
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0017);
  _eq_SPECIE(); // =SPECIE
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
  Push(Pop() | Pop()); // OR
  Push(Pop() & !Read16(pp_IsUF)); //  ?UF @ NOT AND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) return;
  Push(Read16(pp__h_CRIT)==0?1:0); // ^CRIT @ 0=
  Push(0);
  Push(Read16(pp__n_VESS)); // #VESS @
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
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
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
        StoreID(); // !ID
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
// 0xef05: WORD 'UNK_0xef07' codep=0x224c parp=0xef07 params=0 returns=0
// ================================================

void UNK_0xef07() // UNK_0xef07
{
  Push(pp__h_CRIT); // ^CRIT
  _099(); // 099
}


// ================================================
// 0xef0d: WORD 'UNK_0xef0f' codep=0x224c parp=0xef0f params=0 returns=0
// ================================================

void UNK_0xef0f() // UNK_0xef0f
{
  Push(Read16(pp__h_CRIT) + 1); // ^CRIT @ 1+
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  Store_2(); // !_2
}


// ================================================
// 0xef21: WORD 'UNK_0xef23' codep=0x224c parp=0xef23
// ================================================

void UNK_0xef23() // UNK_0xef23
{
  Push(Read16(pp__h_CRIT)); // ^CRIT @
  POINT_gt_I(); // POINT>I
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xef31: WORD 'UNK_0xef33' codep=0x224c parp=0xef33 params=0 returns=1
// ================================================

void UNK_0xef33() // UNK_0xef33
{
  UNK_0xdd2e(); // UNK_0xdd2e
  Push(Read16(0x65e1+UNK_0xde14.offset)); // UNK_0xde14<IFIELD> @
  Push(0x65e1+UNK_0xddfb.offset); // UNK_0xddfb<IFIELD>
  UNK_0xde7b(); // UNK_0xde7b
  Push(Pop() * 0x01f4); //  0x01f4 *
  _st_(); // <
}


// ================================================
// 0xef47: WORD 'UNK_0xef49' codep=0x224c parp=0xef49 params=0 returns=0
// ================================================

void UNK_0xef49() // UNK_0xef49
{
  UNK_0xef33(); // UNK_0xef33
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+UNK_0xde14.offset) + 0x0028); // UNK_0xde14<IFIELD> @ 0x0028 +
    Push(0x0dac);
    MIN(); // MIN
    Push(0x65e1+UNK_0xde14.offset); // UNK_0xde14<IFIELD>
    Store_2(); // !_2
    Push(Read16(pp_IsCOMBAT) | (Read16(pp__n_AUX)==1?1:0)); // ?COMBAT @ #AUX @ 1 = OR
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
  Push(Pop()==0?1:0); //  0=
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
  Push(Read16(0x65e1+UNK_0xddb6.offset)); // UNK_0xddb6<IFIELD> @
  LoadData(UNK_0xdd8c); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  _st_(); // <
  if (Pop() == 0) return;
  Push(5);
  LoadData(UNK_0xdd8c); // from 'VESSEL'
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xefaf: WORD 'UNK_0xefb1' codep=0x224c parp=0xefb1
// ================================================

void UNK_0xefb1() // UNK_0xefb1
{
  GetID(); // @ID
  Push(Read16(regsp)); // DUP
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(Pop()==Read16(cc_INVIS_dash_I)?1:0); //  INVIS-I =
  Push(Pop() | Pop()); // OR
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(0x0014);
  _eq_SPECIE(); // =SPECIE
  ICLOSE(); // ICLOSE
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x224c parp=0xefdb params=2 returns=1
// ================================================

void UNK_0xefdb() // UNK_0xefdb
{
  Push(0xc7dc); // probable '@NF'
  MODULE(); // MODULE
  Pop(); // DROP
  Push(0x0016);
  _gt_(); // >
  Push(Pop() & (Read16(pp_IsAF)==0?1:0)); //  ?AF @ 0= AND
}


// ================================================
// 0xeff3: WORD 'COMBAT' codep=0x224c parp=0xeffe params=2 returns=0
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
    GetEXECUTE(); // @EXECUTE
  }
  UNK_0xe7a8(); // UNK_0xe7a8
  UNK_0xefdb(); // UNK_0xefdb
  Push(Pop() & !Read16(pp_IsCOMBAT)); //  ?COMBAT @ NOT AND
  if (Pop() == 0) return;
  Push(Read16(pp__i_UNNEST)); // 'UNNEST @
  MODULE(); // MODULE
}


// ================================================
// 0xf050: WORD 'UNK_0xf052' codep=0x1d29 parp=0xf052
// ================================================
// 0xf052: db 0x00 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0xff 0xff 0x00 0x00 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0x00 0x00 0xff 0xff 0x01 0x00 '                                '

// ================================================
// 0xf072: WORD 'UNK_0xf074' codep=0x224c parp=0xf074 params=2 returns=0
// ================================================

void UNK_0xf074() // UNK_0xf074
{
  unsigned short int a;
  Push(0xc7dc); // probable '@NF'
  MODULE(); // MODULE
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  Push(Read16(0x65e1+UNK_0xde28.offset)&0xFF); // UNK_0xde28<IFIELD> C@
  _4_star_(); // 4*
  Push(Pop() + pp_UNK_0xf052); //  UNK_0xf052 +
  _2_at_(); // 2@
  a = Pop(); // >R
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(Pop() + Read16(pp_XABS)); //  XABS @ +
  Push(a); // R>
  ROT(); // ROT
  Push(Pop() * Pop()); // *
  Push(Pop() + Read16(pp_YABS)); //  YABS @ +
  Push(pp_UNK_0xde49); // UNK_0xde49
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xf0a8: WORD 'UNK_0xf0aa' codep=0x224c parp=0xf0aa params=0 returns=1
// ================================================

void UNK_0xf0aa() // UNK_0xf0aa
{
  Push((Read16(0x65e1+UNK_0xde19.offset)&0xFF) & 1); // UNK_0xde19<IFIELD> C@ 1 AND
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
  GetID(); // @ID
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
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(0x000a);
  M_star_(); // M*
  Push(pp__10_star_END); // 10*END
  _2_ex__2(); // 2!_2
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf100: WORD 'UNK_0xf102' codep=0x224c parp=0xf102 params=1 returns=0
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
// 0xf128: WORD 'UNK_0xf12a' codep=0x224c parp=0xf12a params=0 returns=1
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
    Push(Pop() + 1); //  1+
  }
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf156: WORD 'UNK_0xf158' codep=0x1d29 parp=0xf158
// ================================================
// 0xf158: db 0x56 0x3a 0x20 0x00 'V:  '

// ================================================
// 0xf15c: WORD 'UNK_0xf15e' codep=0x224c parp=0xf15e params=1 returns=2
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
  Store_2(); // !_2
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xf184: WORD 'UNK_0xf186' codep=0x224c parp=0xf186
// ================================================

void UNK_0xf186() // UNK_0xf186
{
  unsigned short int a;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xde2d.offset); // UNK_0xde2d<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+UNK_0xde32.offset)&0xFF); // UNK_0xde32<IFIELD> C@
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
  Push(pp_UNK_0xf158 + 2); // UNK_0xf158 2+
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(2);
  _star_CLOSE(); // *CLOSE
  _2DUP(); // 2DUP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_UNK_0xde49); // UNK_0xde49
  StoreD(); // D!
}


// ================================================
// 0xf1c8: WORD 'UNK_0xf1ca' codep=0x224c parp=0xf1ca params=0 returns=0
// ================================================

void UNK_0xf1ca() // UNK_0xf1ca
{
  unsigned short int i, imax;
  Push(0x2710);
  Push(pp_UNK_0xde4f); // UNK_0xde4f
  Store_2(); // !_2
  Push(Read16(pp_ILOCAL)); // ILOCAL @
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
      GetID(); // @ID
      Push(Pop()==0x0060?1:0); //  0x0060 =
      Push(Pop() | Pop()); // OR
      GetID(); // @ID
      Push(Pop()==0x0062?1:0); //  0x0062 =
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(pp_UNK_0xde49); // UNK_0xde49
        _2_at_(); // 2@
        UNK_0xdd5c(); // UNK_0xdd5c
        UNK_0xde5d(); // UNK_0xde5d
        Push(Read16(regsp)); // DUP
        Push(Read16(pp_UNK_0xde4f)); // UNK_0xde4f @
        _st_(); // <
        if (Pop() != 0)
        {
          Push(pp_UNK_0xde4f); // UNK_0xde4f
          _st__ex__gt_(); // <!>
          UNK_0xdd5c(); // UNK_0xdd5c
          Push(pp_UNK_0xde53); // UNK_0xde53
          _2_ex__2(); // 2!_2
          GetIL(); // @IL
          GetIH(); // @IH
          _gt_C_plus_S(); // >C+S
          CI(); // CI
          ICLOSE(); // ICLOSE
          Push(pp_UNK_0xdd28); // UNK_0xdd28
          StoreD(); // D!
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
// 0xf240: WORD 'UNK_0xf242' codep=0x224c parp=0xf242 params=0 returns=1
// ================================================

void UNK_0xf242() // UNK_0xf242
{
  Push(Read16(pp_UNK_0xde4f) - 0x2710); // UNK_0xde4f @ 0x2710 -
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250
// ================================================

void UNK_0xf250() // UNK_0xf250
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x666f); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  DrawTTY(); // .TTY
}


// ================================================
// 0xf260: WORD 'UNK_0xf262' codep=0x224c parp=0xf262 params=0 returns=0
// ================================================

void UNK_0xf262() // UNK_0xf262
{
  Push(1);
  Push(0x5184); // probable '?FIRED-'
  Store_2(); // !_2
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
  Push(0x65e1+UNK_0xde05.offset); // UNK_0xde05<IFIELD>
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
  GetColor(LT_dash_BLUE);
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
  Push(!Pop()); //  NOT
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
    Push(Pop() & (Read16(pp_Is3)==0?1:0)); //  ?3 @ 0= AND
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
          GetColor(WHITE);
          StoreCOLOR(); // !COLOR
          Push(0x668d); Push(0x0002);
          UNK_0xde37(); // UNK_0xde37
          DrawTTY(); // .TTY
        }
      }
    }
  } else
  {
    UNK_0xf250(); // UNK_0xf250
  }
  goto label7;

  label2:
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x66ae); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  DrawTTY(); // .TTY

  label7:
  return;

  label1:
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(0x66cd); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  DrawTTY(); // .TTY
}


// ================================================
// 0xf342: WORD 'UNK_0xf344' codep=0x224c parp=0xf344
// ================================================
// orphan

void UNK_0xf344() // UNK_0xf344
{
  Push(pp__i_CEX); // 'CEX
  GetEXECUTE(); // @EXECUTE
  COMBAT(); // COMBAT
}


// ================================================
// 0xf34c: WORD 'UNK_0xf34e' codep=0x224c parp=0xf34e
// ================================================

void UNK_0xf34e() // UNK_0xf34e
{
  Push(0xc39d); // probable '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  Store_2(); // !_2
  Push(0xc3cf); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_2(); // !_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  Store_2(); // !_2
  Push(0xf344); // probable 'UNK_0xf344'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_2(); // !_2
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _2_ex__2(); // 2!_2
  Push(pp_IsHEAL); // ?HEAL
  ON_2(); // ON_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_2(); // !_2
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_2(); // !_2
  Push(pp_IsHEAL); // ?HEAL
  ON_2(); // ON_2
  Push(0xe414); // probable 'UNK_0xe414'
  Push(pp__i__dot_BACKG); // '.BACKG
  Store_2(); // !_2
  Push(pp_IsCOMBAT); // ?COMBAT
  ON_1(); // ON_1
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_1(); // ON_1
}


// ================================================
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8 params=0 returns=1
// ================================================

void UNK_0xf3a8() // UNK_0xf3a8
{
  Push(Read16(pp_LKEY)==0x000d?1:0); // LKEY @ 0x000d =
}


// ================================================
// 0xf3b4: WORD 'UNK_0xf3b6' codep=0x224c parp=0xf3b6
// ================================================

void UNK_0xf3b6() // UNK_0xf3b6
{
  Push(0xc39d); // probable '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  Store_2(); // !_2
  Push(0xc3cf); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_2(); // !_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  Store_2(); // !_2
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    GetCRS(); // @CRS
    Push(0x0090);
    Push(0x005c);
    Push(0x0085);
    Push(0x0061);
    GetColor(BLACK);
    POLY_dash_WI(); // POLY-WI
    StoreCRS(); // !CRS
  }
  Push(0xae81); // probable 'CEX+WAX'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_2(); // !_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_2(); // !_2
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_2(); // !_2
  Push(0xc0e7); // probable '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  Store_2(); // !_2
  UNK_0xf134(); // UNK_0xf134
  Push(pp_UNK_0xde59); // UNK_0xde59
  _099(); // 099
  Push(pp_FORCEPT); // FORCEPT
  OFF_2(); // OFF_2
  Push(pp_IsCOMBAT); // ?COMBAT
  OFF_2(); // OFF_2
  ICLOSE(); // ICLOSE
  UNK_0xefdb(); // UNK_0xefdb
  if (Pop() == 0) return;
  Push(Read16(pp__i_UNNEST)); // 'UNNEST @
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
  Push(Read16(0x65e1+UNK_0xde28.offset)&0xFF); // UNK_0xde28<IFIELD> C@
  OVER(); // OVER
  Push(0x65e1+UNK_0xde28.offset); // UNK_0xde28<IFIELD>
  C_ex__2(); // C!_2
  UNK_0xe89a(); // UNK_0xe89a
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xe162(); // UNK_0xe162
    Push(Pop() & (((Read16(0x65e1+UNK_0xddc5.offset)&0xFF) & 0x0080)==0?1:0)); //  UNK_0xddc5<IFIELD> C@ 0x0080 AND 0= AND
    if (Pop() != 0)
    {
      UNK_0xe9a2(); // UNK_0xe9a2
      Push(0xc7ce); // probable 'CSCALE'
      MODULE(); // MODULE
      Push(0x0fa0);
      Push(Read16(cc_MPS) * Read16(0x65e1+UNK_0xde23.offset)); // MPS UNK_0xde23<IFIELD> @ *
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
  IsTRIG(); // ?TRIG
  UNK_0xf3a8(); // UNK_0xf3a8
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xf2b6(); // UNK_0xf2b6
    UNK_0xe29a(); // UNK_0xe29a
  }
  UNK_0xe516(); // UNK_0xe516
  UNK_0xf3a8(); // UNK_0xf3a8
  if (Pop() == 0) return;
  Push(Pop()==0?1:0); //  0=
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
  DrawTTY(); // .TTY
  Push(0x670c); Push(0x0002);
  UNK_0xde37(); // UNK_0xde37
  DrawTTY(); // .TTY
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
// 0xf4e6: WORD 'WAR' codep=0x224c parp=0xf4ee params=0 returns=0
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
// 0xf50a: WORD 'CLEAR-CO' codep=0x224c parp=0xf517 params=0 returns=0
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
  Store_2(); // !_2
}


// ================================================
// 0xf547: WORD '(COMB)' codep=0x224c parp=0xf552 params=2 returns=0
// ================================================
// entry

void _ro_COMB_rc_() // (COMB)
{
  COMBAT(); // COMBAT
  SAVE_dash_OV(); // SAVE-OV
}

// 0xf558: db 0x43 0x4f 0x4d 0x42 0x41 0x54 0x2d 0x56 0x00 'COMBAT-V '

