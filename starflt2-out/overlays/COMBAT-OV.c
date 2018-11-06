// ====== OVERLAY 'COMBAT-OV' ======
// store offset = 0xdd00
// overlay size   = 0x1860

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WDD16  codep:0x224c parp:0xdd16 size:0x0008 C-string:'WDD16'
//           WDD20  codep:0x1d29 parp:0xdd20 size:0x0002 C-string:'WDD20'
//           WDD24  codep:0x1d29 parp:0xdd24 size:0x0002 C-string:'WDD24'
//           WDD28  codep:0x1d29 parp:0xdd28 size:0x0004 C-string:'WDD28'
//           WDD2E  codep:0x224c parp:0xdd2e size:0x0006 C-string:'WDD2E'
//           WDD36  codep:0x224c parp:0xdd36 size:0x000a C-string:'WDD36'
//           WDD42  codep:0x224c parp:0xdd42 size:0x0008 C-string:'WDD42'
//           WDD4C  codep:0x224c parp:0xdd4c size:0x000e C-string:'WDD4C'
//           WDD5C  codep:0x224c parp:0xdd5c size:0x0006 C-string:'WDD5C'
//           WDD64  codep:0x224c parp:0xdd64 size:0x000a C-string:'WDD64'
//           WDD70  codep:0x224c parp:0xdd70 size:0x000e C-string:'WDD70'
//           WDD80  codep:0x2214 parp:0xdd80 size:0x0002 C-string:'WDD80'
//           WDD84  codep:0x7394 parp:0xdd84 size:0x0006 C-string:'WDD84'
//           WDD8C  codep:0x7394 parp:0xdd8c size:0x0006 C-string:'WDD8C'
//           WDD94  codep:0x7394 parp:0xdd94 size:0x0006 C-string:'WDD94'
//           WDD9C  codep:0x7394 parp:0xdd9c size:0x0006 C-string:'WDD9C'
//           WDDA4  codep:0x7394 parp:0xdda4 size:0x0006 C-string:'WDDA4'
//           WDDAC  codep:0x7420 parp:0xddac size:0x0003 C-string:'WDDAC'
//           WDDB1  codep:0x7420 parp:0xddb1 size:0x0003 C-string:'WDDB1'
//           WDDB6  codep:0x7420 parp:0xddb6 size:0x0003 C-string:'WDDB6'
//           WDDBB  codep:0x7420 parp:0xddbb size:0x0003 C-string:'WDDBB'
//           WDDC0  codep:0x7420 parp:0xddc0 size:0x0003 C-string:'WDDC0'
//           WDDC5  codep:0x7420 parp:0xddc5 size:0x0003 C-string:'WDDC5'
//           WDDCA  codep:0x2214 parp:0xddca size:0x0002 C-string:'WDDCA'
//           WDDCE  codep:0x7420 parp:0xddce size:0x0003 C-string:'WDDCE'
//           WDDD3  codep:0x7420 parp:0xddd3 size:0x0003 C-string:'WDDD3'
//           WDDD8  codep:0x7420 parp:0xddd8 size:0x0003 C-string:'WDDD8'
//           WDDDD  codep:0x7420 parp:0xdddd size:0x0003 C-string:'WDDDD'
//           WDDE2  codep:0x7420 parp:0xdde2 size:0x0003 C-string:'WDDE2'
//           WDDE7  codep:0x7420 parp:0xdde7 size:0x0003 C-string:'WDDE7'
//           WDDEC  codep:0x7420 parp:0xddec size:0x0003 C-string:'WDDEC'
//           WDDF1  codep:0x7420 parp:0xddf1 size:0x0003 C-string:'WDDF1'
//           WDDF6  codep:0x7420 parp:0xddf6 size:0x0003 C-string:'WDDF6'
//           WDDFB  codep:0x7420 parp:0xddfb size:0x0003 C-string:'WDDFB'
//           WDE00  codep:0x7420 parp:0xde00 size:0x0003 C-string:'WDE00'
//           WDE05  codep:0x7420 parp:0xde05 size:0x0003 C-string:'WDE05'
//           WDE0A  codep:0x7420 parp:0xde0a size:0x0003 C-string:'WDE0A'
//           WDE0F  codep:0x7420 parp:0xde0f size:0x0003 C-string:'WDE0F'
//           WDE14  codep:0x7420 parp:0xde14 size:0x0003 C-string:'WDE14'
//           WDE19  codep:0x7420 parp:0xde19 size:0x0003 C-string:'WDE19'
//           WDE1E  codep:0x7420 parp:0xde1e size:0x0003 C-string:'WDE1E'
//           WDE23  codep:0x7420 parp:0xde23 size:0x0003 C-string:'WDE23'
//           WDE28  codep:0x7420 parp:0xde28 size:0x0003 C-string:'WDE28'
//           WDE2D  codep:0x7420 parp:0xde2d size:0x0003 C-string:'WDE2D'
//           WDE32  codep:0x7420 parp:0xde32 size:0x0003 C-string:'WDE32'
//           WDE37  codep:0x224c parp:0xde37 size:0x0010 C-string:'WDE37'
//           WDE49  codep:0x1d29 parp:0xde49 size:0x0004 C-string:'WDE49'
//           WDE4F  codep:0x1d29 parp:0xde4f size:0x0002 C-string:'WDE4F'
//           WDE53  codep:0x1d29 parp:0xde53 size:0x0004 C-string:'WDE53'
//           WDE59  codep:0x1d29 parp:0xde59 size:0x0002 C-string:'WDE59'
//           WDE5D  codep:0x224c parp:0xde5d size:0x001c C-string:'WDE5D'
//           WDE7B  codep:0x224c parp:0xde7b size:0x0008 C-string:'WDE7B'
//           WDE85  codep:0x224c parp:0xde85 size:0x0018 C-string:'WDE85'
//           WDE9F  codep:0x224c parp:0xde9f size:0x000e C-string:'WDE9F'
//           WDEAF  codep:0x224c parp:0xdeaf size:0x001e C-string:'WDEAF'
//           WDECF  codep:0x224c parp:0xdecf size:0x003a C-string:'WDECF'
//           WDF0B  codep:0x224c parp:0xdf0b size:0x000a C-string:'WDF0B'
//           WDF17  codep:0x224c parp:0xdf17 size:0x0012 C-string:'WDF17'
//            X=-1  codep:0x4b3b parp:0xdf32 size:0x0010 C-string:'X_eq__dash_1'
//             X=0  codep:0x4b3b parp:0xdf4a size:0x0010 C-string:'X_eq_0'
//             X=1  codep:0x4b3b parp:0xdf62 size:0x0010 C-string:'X_eq_1'
//      KEY>ORIENT  codep:0x4b3b parp:0xdf81 size:0x0010 C-string:'KEY_gt_ORIENT'
//           WDF93  codep:0x224c parp:0xdf93 size:0x0018 C-string:'WDF93'
//           WDFAD  codep:0x224c parp:0xdfad size:0x0008 C-string:'WDFAD'
//           WDFB7  codep:0x224c parp:0xdfb7 size:0x000c C-string:'WDFB7'
//           WDFC5  codep:0x224c parp:0xdfc5 size:0x000c C-string:'WDFC5'
//           WDFD3  codep:0x224c parp:0xdfd3 size:0x0010 C-string:'WDFD3'
//           WDFE5  codep:0x224c parp:0xdfe5 size:0x000c C-string:'WDFE5'
//           WDFF3  codep:0x224c parp:0xdff3 size:0x000c C-string:'WDFF3'
//           WE001  codep:0x224c parp:0xe001 size:0x000c C-string:'WE001'
//           WE00F  codep:0x224c parp:0xe00f size:0x0008 C-string:'WE00F'
//           WE019  codep:0x224c parp:0xe019 size:0x001c C-string:'WE019'
//           WE037  codep:0x224c parp:0xe037 size:0x001c C-string:'WE037'
//           WE055  codep:0x224c parp:0xe055 size:0x003c C-string:'WE055'
//           WE093  codep:0x7420 parp:0xe093 size:0x0003 C-string:'WE093'
//           WE098  codep:0x224c parp:0xe098 size:0x0008 C-string:'WE098'
//           WE0A2  codep:0x224c parp:0xe0a2 size:0x000a C-string:'WE0A2'
//           WE0AE  codep:0x224c parp:0xe0ae size:0x0010 C-string:'WE0AE'
//           WE0C0  codep:0x3b74 parp:0xe0c0 size:0x0004 C-string:'WE0C0'
//           WE0C6  codep:0x1d29 parp:0xe0c6 size:0x0004 C-string:'WE0C6'
//           WE0CC  codep:0x224c parp:0xe0cc size:0x0010 C-string:'WE0CC'
//           WE0DE  codep:0x224c parp:0xe0de size:0x000a C-string:'WE0DE'
//           WE0EA  codep:0x224c parp:0xe0ea size:0x0008 C-string:'WE0EA'
//           WE0F4  codep:0x2214 parp:0xe0f4 size:0x0002 C-string:'WE0F4'
//           WE0F8  codep:0x2214 parp:0xe0f8 size:0x0002 C-string:'WE0F8'
//           WE0FC  codep:0x224c parp:0xe0fc size:0x0022 C-string:'WE0FC'
//           WE120  codep:0x224c parp:0xe120 size:0x0008 C-string:'WE120'
//           WE12A  codep:0x224c parp:0xe12a size:0x000e C-string:'WE12A'
//           WE13A  codep:0x224c parp:0xe13a size:0x000c C-string:'WE13A'
//           WE148  codep:0x1d29 parp:0xe148 size:0x0002 C-string:'WE148'
//           WE14C  codep:0x1d29 parp:0xe14c size:0x0004 C-string:'WE14C'
//           WE152  codep:0x224c parp:0xe152 size:0x000e C-string:'WE152'
//           WE162  codep:0x224c parp:0xe162 size:0x0014 C-string:'WE162'
//           WE178  codep:0x224c parp:0xe178 size:0x0022 C-string:'WE178'
//           WE19C  codep:0x224c parp:0xe19c size:0x0022 C-string:'WE19C'
//           WE1C0  codep:0x224c parp:0xe1c0 size:0x000a C-string:'WE1C0'
//           WE1CC  codep:0x224c parp:0xe1cc size:0x000a C-string:'WE1CC'
//           WE1D8  codep:0x224c parp:0xe1d8 size:0x000c C-string:'WE1D8'
//           WE1E6  codep:0x2214 parp:0xe1e6 size:0x0002 C-string:'WE1E6'
//           WE1EA  codep:0x224c parp:0xe1ea size:0x0010 C-string:'WE1EA'
//           WE1FC  codep:0x224c parp:0xe1fc size:0x0020 C-string:'WE1FC'
//           WE21E  codep:0x1d29 parp:0xe21e size:0x0002 C-string:'WE21E'
//           WE222  codep:0x224c parp:0xe222 size:0x001a C-string:'WE222'
//           WE23E  codep:0x224c parp:0xe23e size:0x000c C-string:'WE23E'
//           WE24C  codep:0x224c parp:0xe24c size:0x0014 C-string:'WE24C'
//           WE262  codep:0x224c parp:0xe262 size:0x001a C-string:'WE262'
//           WE27E  codep:0x224c parp:0xe27e size:0x001a C-string:'WE27E'
//           WE29A  codep:0x224c parp:0xe29a size:0x001a C-string:'WE29A'
//           WE2B6  codep:0x2214 parp:0xe2b6 size:0x0002 C-string:'WE2B6'
//           WE2BA  codep:0x2214 parp:0xe2ba size:0x0002 C-string:'WE2BA'
//           WE2BE  codep:0x1d29 parp:0xe2be size:0x0002 C-string:'WE2BE'
//           WE2C2  codep:0x7420 parp:0xe2c2 size:0x0003 C-string:'WE2C2'
//           WE2C7  codep:0x7420 parp:0xe2c7 size:0x0003 C-string:'WE2C7'
//           WE2CC  codep:0x7420 parp:0xe2cc size:0x0003 C-string:'WE2CC'
//           WE2D1  codep:0x7420 parp:0xe2d1 size:0x0003 C-string:'WE2D1'
//           WE2D6  codep:0x7420 parp:0xe2d6 size:0x0003 C-string:'WE2D6'
//           WE2DB  codep:0x7420 parp:0xe2db size:0x0003 C-string:'WE2DB'
//           WE2E0  codep:0x7420 parp:0xe2e0 size:0x0003 C-string:'WE2E0'
//           WE2E5  codep:0x7420 parp:0xe2e5 size:0x0003 C-string:'WE2E5'
//           WE2EA  codep:0x7420 parp:0xe2ea size:0x0003 C-string:'WE2EA'
//           WE2EF  codep:0x7420 parp:0xe2ef size:0x0003 C-string:'WE2EF'
//           WE2F4  codep:0x7420 parp:0xe2f4 size:0x0003 C-string:'WE2F4'
//           WE2F9  codep:0x224c parp:0xe2f9 size:0x0004 C-string:'WE2F9'
//           WE2FF  codep:0x224c parp:0xe2ff size:0x001c C-string:'WE2FF'
//           WE31D  codep:0x224c parp:0xe31d size:0x0016 C-string:'WE31D'
//             C>C  codep:0x4b3b parp:0xe33b size:0x0010 C-string:'C_gt_C'
//           WE34D  codep:0x224c parp:0xe34d size:0x0008 C-string:'WE34D'
//           WE357  codep:0x224c parp:0xe357 size:0x000a C-string:'WE357'
//           WE363  codep:0x224c parp:0xe363 size:0x000a C-string:'WE363'
//           WE36F  codep:0x224c parp:0xe36f size:0x0006 C-string:'WE36F'
//           WE377  codep:0x224c parp:0xe377 size:0x000a C-string:'WE377'
//           WE383  codep:0x224c parp:0xe383 size:0x0012 C-string:'WE383'
//           WE397  codep:0x224c parp:0xe397 size:0x0020 C-string:'WE397'
//           WE3B9  codep:0x224c parp:0xe3b9 size:0x001e C-string:'WE3B9'
//      SCALE>.MIS  codep:0x4b3b parp:0xe3e6 size:0x0010 C-string:'SCALE_gt__dot_MIS'
//           WE3F8  codep:0x224c parp:0xe3f8 size:0x001a C-string:'WE3F8'
//           WE414  codep:0x224c parp:0xe414 size:0x000e C-string:'WE414'
//           WE424  codep:0x224c parp:0xe424 size:0x001c C-string:'WE424'
//           WE442  codep:0x224c parp:0xe442 size:0x000e C-string:'WE442'
//           WE452  codep:0x224c parp:0xe452 size:0x0046 C-string:'WE452'
//           WE49A  codep:0x224c parp:0xe49a size:0x0024 C-string:'WE49A'
//           WE4C0  codep:0x224c parp:0xe4c0 size:0x000e C-string:'WE4C0'
//           WE4D0  codep:0x224c parp:0xe4d0 size:0x001e C-string:'WE4D0'
//           WE4F0  codep:0x224c parp:0xe4f0 size:0x0024 C-string:'WE4F0'
//           WE516  codep:0x224c parp:0xe516 size:0x001e C-string:'WE516'
//           WE536  codep:0x224c parp:0xe536 size:0x0036 C-string:'WE536'
//           WE56E  codep:0x2214 parp:0xe56e size:0x0002 C-string:'WE56E'
//           WE572  codep:0x224c parp:0xe572 size:0x004a C-string:'WE572'
//           WE5BE  codep:0x224c parp:0xe5be size:0x0052 C-string:'WE5BE'
//           WE612  codep:0x224c parp:0xe612 size:0x0006 C-string:'WE612'
//           WE61A  codep:0x224c parp:0xe61a size:0x0048 C-string:'WE61A'
//           WE664  codep:0x224c parp:0xe664 size:0x0020 C-string:'WE664'
//           WE686  codep:0x224c parp:0xe686 size:0x0008 C-string:'WE686'
//           WE690  codep:0x224c parp:0xe690 size:0x0032 C-string:'WE690'
//           WE6C4  codep:0x224c parp:0xe6c4 size:0x0012 C-string:'WE6C4'
//           WE6D8  codep:0x224c parp:0xe6d8 size:0x002a C-string:'WE6D8'
//           WE704  codep:0x224c parp:0xe704 size:0x0016 C-string:'WE704'
//           WE71C  codep:0x224c parp:0xe71c size:0x000e C-string:'WE71C'
//           WE72C  codep:0x224c parp:0xe72c size:0x0026 C-string:'WE72C'
//           WE754  codep:0x224c parp:0xe754 size:0x000e C-string:'WE754'
//           WE764  codep:0x224c parp:0xe764 size:0x0042 C-string:'WE764'
//           WE7A8  codep:0x224c parp:0xe7a8 size:0x0042 C-string:'WE7A8'
//           WE7EC  codep:0x224c parp:0xe7ec size:0x0024 C-string:'WE7EC'
//           WE812  codep:0x224c parp:0xe812 size:0x002c C-string:'WE812'
//           WE840  codep:0x224c parp:0xe840 size:0x0010 C-string:'WE840'
//           WE852  codep:0x224c parp:0xe852 size:0x001a C-string:'WE852'
//           WE86E  codep:0x224c parp:0xe86e size:0x0014 C-string:'WE86E'
//           WE884  codep:0x224c parp:0xe884 size:0x0014 C-string:'WE884'
//           WE89A  codep:0x224c parp:0xe89a size:0x0024 C-string:'WE89A'
//           WE8C0  codep:0x224c parp:0xe8c0 size:0x002a C-string:'WE8C0'
//           WE8EC  codep:0x224c parp:0xe8ec size:0x000c C-string:'WE8EC'
//           WE8FA  codep:0x224c parp:0xe8fa size:0x0036 C-string:'WE8FA'
//           WE932  codep:0x224c parp:0xe932 size:0x000a C-string:'WE932'
//           WE93E  codep:0x224c parp:0xe93e size:0x0026 C-string:'WE93E'
//           WE966  codep:0x224c parp:0xe966 size:0x003a C-string:'WE966'
//           WE9A2  codep:0x224c parp:0xe9a2 size:0x0030 C-string:'WE9A2'
//           WE9D4  codep:0x224c parp:0xe9d4 size:0x0056 C-string:'WE9D4'
//           WEA2C  codep:0x1d29 parp:0xea2c size:0x0004 C-string:'WEA2C'
//           WEA32  codep:0x224c parp:0xea32 size:0x002a C-string:'WEA32'
//           WEA5E  codep:0x224c parp:0xea5e size:0x0030 C-string:'WEA5E'
//           WEA90  codep:0x224c parp:0xea90 size:0x0052 C-string:'WEA90'
//           WEAE4  codep:0x224c parp:0xeae4 size:0x0041 C-string:'WEAE4'
//           WEB27  codep:0x224c parp:0xeb27 size:0x000a C-string:'WEB27'
//           WEB33  codep:0x224c parp:0xeb33 size:0x0010 C-string:'WEB33'
//           WEB45  codep:0x224c parp:0xeb45 size:0x0034 C-string:'WEB45'
//           WEB7B  codep:0x224c parp:0xeb7b size:0x001c C-string:'WEB7B'
//           WEB99  codep:0x224c parp:0xeb99 size:0x001e C-string:'WEB99'
//           WEBB9  codep:0x224c parp:0xebb9 size:0x0022 C-string:'WEBB9'
//           WEBDD  codep:0x224c parp:0xebdd size:0x0036 C-string:'WEBDD'
//           WEC15  codep:0x224c parp:0xec15 size:0x0006 C-string:'WEC15'
//           WEC1D  codep:0x224c parp:0xec1d size:0x0012 C-string:'WEC1D'
//           WEC31  codep:0x224c parp:0xec31 size:0x0012 C-string:'WEC31'
//           WEC45  codep:0x224c parp:0xec45 size:0x001a C-string:'WEC45'
//      ?APPROACHI  codep:0x224c parp:0xec6e size:0x000a C-string:'IsAPPROACHI'
//           WEC7A  codep:0x224c parp:0xec7a size:0x002e C-string:'WEC7A'
//           WECAA  codep:0x224c parp:0xecaa size:0x002e C-string:'WECAA'
//           WECDA  codep:0x224c parp:0xecda size:0x0008 C-string:'WECDA'
//           WECE4  codep:0x224c parp:0xece4 size:0x000a C-string:'WECE4'
//              ?J  codep:0x224c parp:0xecf5 size:0x002c C-string:'IsJ'
//        <COMBAT>  codep:0xaccc parp:0xed2e size:0x00e1 C-string:'_st_COMBAT_gt_'
//           WEE11  codep:0x224c parp:0xee11 size:0x005c C-string:'WEE11'
//           WEE6F  codep:0x224c parp:0xee6f size:0x001e C-string:'WEE6F'
//           WEE8F  codep:0x224c parp:0xee8f size:0x0076 C-string:'WEE8F'
//           WEF07  codep:0x224c parp:0xef07 size:0x0006 C-string:'WEF07'
//           WEF0F  codep:0x224c parp:0xef0f size:0x0012 C-string:'WEF0F'
//           WEF23  codep:0x224c parp:0xef23 size:0x000e C-string:'WEF23'
//           WEF33  codep:0x224c parp:0xef33 size:0x0014 C-string:'WEF33'
//           WEF49  codep:0x224c parp:0xef49 size:0x0032 C-string:'WEF49'
//           WEF7D  codep:0x224c parp:0xef7d size:0x001a C-string:'WEF7D'
//           WEF99  codep:0x224c parp:0xef99 size:0x0016 C-string:'WEF99'
//           WEFB1  codep:0x224c parp:0xefb1 size:0x0028 C-string:'WEFB1'
//           WEFDB  codep:0x224c parp:0xefdb size:0x0018 C-string:'WEFDB'
//          COMBAT  codep:0x224c parp:0xeffe size:0x0052 C-string:'COMBAT'
//           WF052  codep:0x1d29 parp:0xf052 size:0x0020 C-string:'WF052'
//           WF074  codep:0x224c parp:0xf074 size:0x0034 C-string:'WF074'
//           WF0AA  codep:0x224c parp:0xf0aa size:0x000a C-string:'WF0AA'
//           WF0B6  codep:0x224c parp:0xf0b6 size:0x0022 C-string:'WF0B6'
//           WF0DA  codep:0x224c parp:0xf0da size:0x000e C-string:'WF0DA'
//           WF0EA  codep:0x224c parp:0xf0ea size:0x0016 C-string:'WF0EA'
//           WF102  codep:0x224c parp:0xf102 size:0x0026 C-string:'WF102'
//           WF12A  codep:0x224c parp:0xf12a size:0x0008 C-string:'WF12A'
//           WF134  codep:0x224c parp:0xf134 size:0x0022 C-string:'WF134'
//           WF158  codep:0x1d29 parp:0xf158 size:0x0004 C-string:'WF158'
//           WF15E  codep:0x224c parp:0xf15e size:0x0026 C-string:'WF15E'
//           WF186  codep:0x224c parp:0xf186 size:0x0042 C-string:'WF186'
//           WF1CA  codep:0x224c parp:0xf1ca size:0x0076 C-string:'WF1CA'
//           WF242  codep:0x224c parp:0xf242 size:0x000c C-string:'WF242'
//           WF250  codep:0x224c parp:0xf250 size:0x0010 C-string:'WF250'
//           WF262  codep:0x224c parp:0xf262 size:0x000a C-string:'WF262'
//           WF26E  codep:0x224c parp:0xf26e size:0x001a C-string:'WF26E'
//           WF28A  codep:0x224c parp:0xf28a size:0x002a C-string:'WF28A'
//           WF2B6  codep:0x224c parp:0xf2b6 size:0x008c C-string:'WF2B6'
//           WF344  codep:0x224c parp:0xf344 size:0x0008 C-string:'WF344'
//           WF34E  codep:0x224c parp:0xf34e size:0x0058 C-string:'WF34E'
//           WF3A8  codep:0x224c parp:0xf3a8 size:0x000c C-string:'WF3A8'
//           WF3B6  codep:0x224c parp:0xf3b6 size:0x0082 C-string:'WF3B6'
//           WF43A  codep:0x224c parp:0xf43a size:0x006c C-string:'WF43A'
//           WF4A8  codep:0x224c parp:0xf4a8 size:0x003e C-string:'WF4A8'
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
void TOGGLE(); // TOGGLE
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
const unsigned short int pp_WDD20 = 0xdd20; // WDD20 size: 2
// {0x00, 0x00}

const unsigned short int pp_WDD24 = 0xdd24; // WDD24 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDD28 = 0xdd28; // WDD28 size: 4
// {0x56, 0x3a, 0x20, 0xde}

const unsigned short int pp_WDE49 = 0xde49; // WDE49 size: 4
// {0x56, 0x3a, 0x20, 0x53}

const unsigned short int pp_WDE4F = 0xde4f; // WDE4F size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE53 = 0xde53; // WDE53 size: 4
// {0x56, 0x3a, 0x20, 0x20}

const unsigned short int pp_WDE59 = 0xde59; // WDE59 size: 2
// {0x00, 0x00}

const unsigned short int pp_WE0C6 = 0xe0c6; // WE0C6 size: 4
// {0x56, 0x3a, 0x20, 0x4f}

const unsigned short int pp_WE148 = 0xe148; // WE148 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE14C = 0xe14c; // WE14C size: 4
// {0x56, 0x3a, 0x20, 0xca}

const unsigned short int pp_WE21E = 0xe21e; // WE21E size: 2
// {0x00, 0x00}

const unsigned short int pp_WE2BE = 0xe2be; // WE2BE size: 2
// {0x00, 0x00}

const unsigned short int pp_WEA2C = 0xea2c; // WEA2C size: 4
// {0x56, 0x3a, 0x20, 0xd0}

const unsigned short int pp_WF052 = 0xf052; // WF052 size: 32
// {0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00}

const unsigned short int pp_WF158 = 0xf158; // WF158 size: 4
// {0x56, 0x3a, 0x20, 0x00}


const unsigned short int cc_WDD80 = 0xdd80; // WDD80
const unsigned short int cc_WDDCA = 0xddca; // WDDCA
const unsigned short int cc_WE0F4 = 0xe0f4; // WE0F4
const unsigned short int cc_WE0F8 = 0xe0f8; // WE0F8
const unsigned short int cc_WE1E6 = 0xe1e6; // WE1E6
const unsigned short int cc_WE2B6 = 0xe2b6; // WE2B6
const unsigned short int cc_WE2BA = 0xe2ba; // WE2BA
const unsigned short int cc_WE56E = 0xe56e; // WE56E


// 0xdd12: db 0x86 0x01 '  '

// ================================================
// 0xdd14: WORD 'WDD16' codep=0x224c parp=0xdd16 params=0 returns=0
// ================================================

void WDD16() // WDD16
{
  Push2Words("*MISS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xdd1e: WORD 'WDD20' codep=0x1d29 parp=0xdd20
// ================================================
// 0xdd20: db 0x00 0x00 '  '

// ================================================
// 0xdd22: WORD 'WDD24' codep=0x1d29 parp=0xdd24
// ================================================
// 0xdd24: db 0x3a 0x20 ': '

// ================================================
// 0xdd26: WORD 'WDD28' codep=0x1d29 parp=0xdd28
// ================================================
// 0xdd28: db 0x56 0x3a 0x20 0xde 'V:  '

// ================================================
// 0xdd2c: WORD 'WDD2E' codep=0x224c parp=0xdd2e params=0 returns=0
// ================================================
// orphan

void WDD2E() // WDD2E
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xdd34: WORD 'WDD36' codep=0x224c parp=0xdd36 params=0 returns=1
// ================================================

void WDD36() // WDD36
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xdd40: WORD 'WDD42' codep=0x224c parp=0xdd42 params=0 returns=1
// ================================================

void WDD42() // WDD42
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xdd4a: WORD 'WDD4C' codep=0x224c parp=0xdd4c params=0 returns=2
// ================================================

void WDD4C() // WDD4C
{
  WDD2E(); // WDD2E
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdd5a: WORD 'WDD5C' codep=0x224c parp=0xdd5c
// ================================================

void WDD5C() // WDD5C
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xdd62: WORD 'WDD64' codep=0x224c parp=0xdd64 params=0 returns=2
// ================================================

void WDD64() // WDD64
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xdd6e: WORD 'WDD70' codep=0x224c parp=0xdd70
// ================================================

void WDD70() // WDD70
{
  GetID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
}


// ================================================
// 0xdd7e: WORD 'WDD80' codep=0x2214 parp=0xdd80
// ================================================
// orphan
// 0xdd80: dw 0x0019

// ================================================
// 0xdd82: WORD 'WDD84' codep=0x7394 parp=0xdd84
// ================================================
LoadDataType WDD84 = {VESSELIDX, 0x0b, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xdd8a: WORD 'WDD8C' codep=0x7394 parp=0xdd8c
// ================================================
LoadDataType WDD8C = {VESSELIDX, 0x0e, 0x02, 0x24, 0x6b5d};

// ================================================
// 0xdd92: WORD 'WDD94' codep=0x7394 parp=0xdd94
// ================================================
LoadDataType WDD94 = {VESSELIDX, 0x13, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xdd9a: WORD 'WDD9C' codep=0x7394 parp=0xdd9c
// ================================================
LoadDataType WDD9C = {VESSELIDX, 0x12, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xdda2: WORD 'WDDA4' codep=0x7394 parp=0xdda4
// ================================================
LoadDataType WDDA4 = {VESSELIDX, 0x14, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xddaa: WORD 'WDDAC' codep=0x7420 parp=0xddac
// ================================================
IFieldType WDDAC = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xddaf: WORD 'WDDB1' codep=0x7420 parp=0xddb1
// ================================================
// orphan
IFieldType WDDB1 = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xddb4: WORD 'WDDB6' codep=0x7420 parp=0xddb6
// ================================================
IFieldType WDDB6 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xddb9: WORD 'WDDBB' codep=0x7420 parp=0xddbb
// ================================================
IFieldType WDDBB = {VESSELIDX, 0x11, 0x01};

// ================================================
// 0xddbe: WORD 'WDDC0' codep=0x7420 parp=0xddc0
// ================================================
IFieldType WDDC0 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xddc3: WORD 'WDDC5' codep=0x7420 parp=0xddc5
// ================================================
IFieldType WDDC5 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xddc8: WORD 'WDDCA' codep=0x2214 parp=0xddca
// ================================================
// orphan
// 0xddca: dw 0x0014

// ================================================
// 0xddcc: WORD 'WDDCE' codep=0x7420 parp=0xddce
// ================================================
// orphan
IFieldType WDDCE = {SHIPIDX, 0x11, 0x01};

// ================================================
// 0xddd1: WORD 'WDDD3' codep=0x7420 parp=0xddd3
// ================================================
// orphan
IFieldType WDDD3 = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xddd6: WORD 'WDDD8' codep=0x7420 parp=0xddd8
// ================================================
IFieldType WDDD8 = {SHIPIDX, 0x13, 0x01};

// ================================================
// 0xdddb: WORD 'WDDDD' codep=0x7420 parp=0xdddd
// ================================================
// orphan
IFieldType WDDDD = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xdde0: WORD 'WDDE2' codep=0x7420 parp=0xdde2
// ================================================
// orphan
IFieldType WDDE2 = {SHIPIDX, 0x15, 0x01};

// ================================================
// 0xdde5: WORD 'WDDE7' codep=0x7420 parp=0xdde7
// ================================================
// orphan
IFieldType WDDE7 = {SHIPIDX, 0x16, 0x01};

// ================================================
// 0xddea: WORD 'WDDEC' codep=0x7420 parp=0xddec
// ================================================
// orphan
IFieldType WDDEC = {SHIPIDX, 0x17, 0x01};

// ================================================
// 0xddef: WORD 'WDDF1' codep=0x7420 parp=0xddf1
// ================================================
// orphan
IFieldType WDDF1 = {SHIPIDX, 0x18, 0x01};

// ================================================
// 0xddf4: WORD 'WDDF6' codep=0x7420 parp=0xddf6
// ================================================
// orphan
IFieldType WDDF6 = {SHIPIDX, 0x19, 0x01};

// ================================================
// 0xddf9: WORD 'WDDFB' codep=0x7420 parp=0xddfb
// ================================================
IFieldType WDDFB = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xddfe: WORD 'WDE00' codep=0x7420 parp=0xde00
// ================================================
IFieldType WDE00 = {SHIPIDX, 0x1b, 0x01};

// ================================================
// 0xde03: WORD 'WDE05' codep=0x7420 parp=0xde05
// ================================================
IFieldType WDE05 = {SHIPIDX, 0x1c, 0x01};

// ================================================
// 0xde08: WORD 'WDE0A' codep=0x7420 parp=0xde0a
// ================================================
IFieldType WDE0A = {SHIPIDX, 0x1d, 0x01};

// ================================================
// 0xde0d: WORD 'WDE0F' codep=0x7420 parp=0xde0f
// ================================================
IFieldType WDE0F = {SHIPIDX, 0x1e, 0x01};

// ================================================
// 0xde12: WORD 'WDE14' codep=0x7420 parp=0xde14
// ================================================
IFieldType WDE14 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xde17: WORD 'WDE19' codep=0x7420 parp=0xde19
// ================================================
IFieldType WDE19 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xde1c: WORD 'WDE1E' codep=0x7420 parp=0xde1e
// ================================================
IFieldType WDE1E = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xde21: WORD 'WDE23' codep=0x7420 parp=0xde23
// ================================================
IFieldType WDE23 = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xde26: WORD 'WDE28' codep=0x7420 parp=0xde28
// ================================================
IFieldType WDE28 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xde2b: WORD 'WDE2D' codep=0x7420 parp=0xde2d
// ================================================
IFieldType WDE2D = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xde30: WORD 'WDE32' codep=0x7420 parp=0xde32
// ================================================
IFieldType WDE32 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xde35: WORD 'WDE37' codep=0x224c parp=0xde37 params=2 returns=2
// ================================================

void WDE37() // WDE37
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
// 0xde47: WORD 'WDE49' codep=0x1d29 parp=0xde49
// ================================================
// 0xde49: db 0x56 0x3a 0x20 0x53 'V: S'

// ================================================
// 0xde4d: WORD 'WDE4F' codep=0x1d29 parp=0xde4f
// ================================================
// 0xde4f: db 0x3a 0x20 ': '

// ================================================
// 0xde51: WORD 'WDE53' codep=0x1d29 parp=0xde53
// ================================================
// 0xde53: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xde57: WORD 'WDE59' codep=0x1d29 parp=0xde59
// ================================================
// 0xde59: db 0x00 0x00 '  '

// ================================================
// 0xde5b: WORD 'WDE5D' codep=0x224c parp=0xde5d params=4 returns=1
// ================================================

void WDE5D() // WDE5D
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
// 0xde79: WORD 'WDE7B' codep=0x224c parp=0xde7b params=1 returns=1
// ================================================

void WDE7B() // WDE7B
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xde83: WORD 'WDE85' codep=0x224c parp=0xde85 params=1 returns=1
// ================================================

void WDE85() // WDE85
{
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x007f); //  0x007f AND
  SWAP(); // SWAP
  Push(!(Pop() & 0x0080)); //  0x0080 AND NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xde9d: WORD 'WDE9F' codep=0x224c parp=0xde9f params=0 returns=0
// ================================================

void WDE9F() // WDE9F
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
// 0xdead: WORD 'WDEAF' codep=0x224c parp=0xdeaf params=0 returns=1
// ================================================

void WDEAF() // WDEAF
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
// 0xdecd: WORD 'WDECF' codep=0x224c parp=0xdecf params=2 returns=2
// ================================================

void WDECF() // WDECF
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
// 0xdf09: WORD 'WDF0B' codep=0x224c parp=0xdf0b params=0 returns=1
// ================================================

void WDF0B() // WDF0B
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0019?1:0); //  0x0019 =
}


// ================================================
// 0xdf15: WORD 'WDF17' codep=0x224c parp=0xdf17 params=0 returns=1
// ================================================

void WDF17() // WDF17
{
  WDF0B(); // WDF0B
  if (Pop() != 0)
  {
    Push(0x65e1+WDDC0.offset); // WDDC0<IFIELD>
  } else
  {
    Push(0x65e1+WDE28.offset); // WDE28<IFIELD>
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
    WDF17(); // WDF17
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
// 0xdf91: WORD 'WDF93' codep=0x224c parp=0xdf93 params=0 returns=1
// ================================================

void WDF93() // WDF93
{
  Push(Read16(pp_WDE59)); // WDE59 @
  _gt_FLAG(); // >FLAG
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(4);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_WDE59); // WDE59
  Store_2(); // !_2
}


// ================================================
// 0xdfab: WORD 'WDFAD' codep=0x224c parp=0xdfad params=0 returns=1
// ================================================

void WDFAD() // WDFAD
{
  WDD36(); // WDD36
  Push(3);
  _st_(); // <
}


// ================================================
// 0xdfb5: WORD 'WDFB7' codep=0x224c parp=0xdfb7
// ================================================

void WDFB7() // WDFB7
{
  WDD5C(); // WDD5C
  WDD4C(); // WDD4C
  WDE5D(); // WDE5D
  Push(3);
  _st_(); // <
}


// ================================================
// 0xdfc3: WORD 'WDFC5' codep=0x224c parp=0xdfc5 params=0 returns=1
// ================================================

void WDFC5() // WDFC5
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(6);
  _eq_SPECIE(); // =SPECIE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdfd1: WORD 'WDFD3' codep=0x224c parp=0xdfd3 params=0 returns=1
// ================================================

void WDFD3() // WDFD3
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
// 0xdfe3: WORD 'WDFE5' codep=0x224c parp=0xdfe5
// ================================================

void WDFE5() // WDFE5
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(WDD9C); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdff1: WORD 'WDFF3' codep=0x224c parp=0xdff3
// ================================================

void WDFF3() // WDFF3
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(WDDA4); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfff: WORD 'WE001' codep=0x224c parp=0xe001
// ================================================

void WE001() // WE001
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(WDD94); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe00d: WORD 'WE00F' codep=0x224c parp=0xe00f params=1 returns=1
// ================================================

void WE00F() // WE00F
{
  Push(Read16(cc_MPS)); // MPS
  Push(5);
  _star__slash_(); // */
}


// ================================================
// 0xe017: WORD 'WE019' codep=0x224c parp=0xe019
// ================================================

void WE019() // WE019
{
  LoadData(WDD84); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  WE00F(); // WE00F
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Pop() * 6); //  6 *
  Push(0x005a);
  MIN(); // MIN
  WDD36(); // WDD36
  _st_(); // <
}


// ================================================
// 0xe035: WORD 'WE037' codep=0x224c parp=0xe037
// ================================================

void WE037() // WE037
{
  LoadData(WDD84); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  WE00F(); // WE00F
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Pop() * 8); //  8 *
  Push(0x005a);
  MIN(); // MIN
  WDD36(); // WDD36
  _st_(); // <
}


// ================================================
// 0xe053: WORD 'WE055' codep=0x224c parp=0xe055
// ================================================

void WE055() // WE055
{
  WDD16(); // WDD16
  Push(Read16(cc_TRUE)); // TRUE
  WDFD3(); // WDFD3
  if (Pop() != 0)
  {
    Push(0x001d);
    Push(7);
    IFIND(); // IFIND
    Push(Pop()==0?1:0); //  0=
    Push(Pop() & Pop()); // AND
  }
  WDFC5(); // WDFC5
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
  WE019(); // WE019
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe091: WORD 'WE093' codep=0x7420 parp=0xe093
// ================================================
IFieldType WE093 = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xe096: WORD 'WE098' codep=0x224c parp=0xe098 params=0 returns=1
// ================================================

void WE098() // WE098
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0a0: WORD 'WE0A2' codep=0x224c parp=0xe0a2 params=0 returns=1
// ================================================

void WE0A2() // WE0A2
{
  WDD36(); // WDD36
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe0ac: WORD 'WE0AE' codep=0x224c parp=0xe0ae params=0 returns=1
// ================================================

void WE0AE() // WE0AE
{
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WE093.offset)&0xFF); // WE093<IFIELD> C@
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0be: WORD 'WE0C0' codep=0x3b74 parp=0xe0c0
// ================================================
// 0xe0c0: dw 0x0001 0xd4c0

// ================================================
// 0xe0c4: WORD 'WE0C6' codep=0x1d29 parp=0xe0c6
// ================================================
// 0xe0c6: db 0x56 0x3a 0x20 0x4f 'V: O'

// ================================================
// 0xe0ca: WORD 'WE0CC' codep=0x224c parp=0xe0cc params=0 returns=1
// ================================================
// orphan

void WE0CC() // WE0CC
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push2Words("WE0C0");
  Push(pp_WE0C6); // WE0C6
  _2_at_(); // 2@
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe0dc: WORD 'WE0DE' codep=0x224c parp=0xe0de params=0 returns=0
// ================================================

void WE0DE() // WE0DE
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE0C6); // WE0C6
  StoreD(); // D!
}


// ================================================
// 0xe0e8: WORD 'WE0EA' codep=0x224c parp=0xe0ea params=0 returns=1
// ================================================

void WE0EA() // WE0EA
{
  Push(Read16(0x65e1+WDDAC.offset)&0xFF); // WDDAC<IFIELD> C@
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe0f2: WORD 'WE0F4' codep=0x2214 parp=0xe0f4
// ================================================
// 0xe0f4: dw 0x000b

// ================================================
// 0xe0f6: WORD 'WE0F8' codep=0x2214 parp=0xe0f8
// ================================================
// 0xe0f8: dw 0x0005

// ================================================
// 0xe0fa: WORD 'WE0FC' codep=0x224c parp=0xe0fc params=1 returns=1
// ================================================

void WE0FC() // WE0FC
{
  unsigned short int a, b;
  a = Pop(); // >R
  WDD64(); // WDD64
  WDD4C(); // WDD4C
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
// 0xe11e: WORD 'WE120' codep=0x224c parp=0xe120 params=0 returns=1
// ================================================

void WE120() // WE120
{
  Push(Read16(cc_WE0F4)); // WE0F4
  WE0FC(); // WE0FC
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe128: WORD 'WE12A' codep=0x224c parp=0xe12a params=0 returns=1
// ================================================

void WE12A() // WE12A
{
  Push(Read16(cc_WE0F8)); // WE0F8
  WE0FC(); // WE0FC
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe138: WORD 'WE13A' codep=0x224c parp=0xe13a params=0 returns=1
// ================================================
// orphan

void WE13A() // WE13A
{
  WE120(); // WE120
  Push(!Pop()); //  NOT
  WE12A(); // WE12A
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe146: WORD 'WE148' codep=0x1d29 parp=0xe148
// ================================================
// 0xe148: db 0x3a 0x20 ': '

// ================================================
// 0xe14a: WORD 'WE14C' codep=0x1d29 parp=0xe14c
// ================================================
// 0xe14c: db 0x56 0x3a 0x20 0xca 'V:  '

// ================================================
// 0xe150: WORD 'WE152' codep=0x224c parp=0xe152 params=1 returns=0
// ================================================
// orphan

void WE152() // WE152
{
  Push(pp_WE148); // WE148
  _st__ex__gt_(); // <!>
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE14C); // WE14C
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe160: WORD 'WE162' codep=0x224c parp=0xe162 params=0 returns=1
// ================================================

void WE162() // WE162
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE14C); // WE14C
  _2_at_(); // 2@
  Push(Read16(pp_WE148)); // WE148 @
  Push(0);
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe176: WORD 'WE178' codep=0x224c parp=0xe178 params=0 returns=1
// ================================================

void WE178() // WE178
{
  WDD2E(); // WDD2E
  Push(0x65e1+WDE05.offset); // WDE05<IFIELD>
  WDE7B(); // WDE7B
  _gt_FLAG(); // >FLAG
  Push(Pop() & (((Read16(0x65e1+WDE05.offset)&0xFF) & 0x0080)==0?1:0)); //  WDE05<IFIELD> C@ 0x0080 AND 0= AND
  Push(0x65e1+WDE00.offset); // WDE00<IFIELD>
  WDE85(); // WDE85
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe19a: WORD 'WE19C' codep=0x224c parp=0xe19c params=0 returns=1
// ================================================

void WE19C() // WE19C
{
  WDD2E(); // WDD2E
  Push(0x65e1+WDE0F.offset); // WDE0F<IFIELD>
  WDE7B(); // WDE7B
  _gt_FLAG(); // >FLAG
  Push(Pop() & (((Read16(0x65e1+WDE0F.offset)&0xFF) & 0x0080)==0?1:0)); //  WDE0F<IFIELD> C@ 0x0080 AND 0= AND
  Push(0x65e1+WDE0A.offset); // WDE0A<IFIELD>
  WDE85(); // WDE85
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe1be: WORD 'WE1C0' codep=0x224c parp=0xe1c0 params=0 returns=1
// ================================================

void WE1C0() // WE1C0
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==1?1:0); // A-POSTU C@ 1 =
}


// ================================================
// 0xe1ca: WORD 'WE1CC' codep=0x224c parp=0xe1cc params=0 returns=1
// ================================================

void WE1CC() // WE1CC
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==8?1:0); // A-POSTU C@ 8 =
}


// ================================================
// 0xe1d6: WORD 'WE1D8' codep=0x224c parp=0xe1d8 params=0 returns=1
// ================================================

void WE1D8() // WE1D8
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==0x0010?1:0); // A-POSTU C@ 0x0010 =
}


// ================================================
// 0xe1e4: WORD 'WE1E6' codep=0x2214 parp=0xe1e6
// ================================================
// 0xe1e6: dw 0x001d

// ================================================
// 0xe1e8: WORD 'WE1EA' codep=0x224c parp=0xe1ea params=0 returns=0
// ================================================

void WE1EA() // WE1EA
{
  Push(Read16(pp__n_MISS) - 1); // #MISS @ 1-
  Push(0);
  MAX(); // MAX
  Push(pp__n_MISS); // #MISS
  Store_2(); // !_2
}


// ================================================
// 0xe1fa: WORD 'WE1FC' codep=0x224c parp=0xe1fc params=0 returns=0
// ================================================

void WE1FC() // WE1FC
{
  Push(1);
  Push(pp__n_MISS); // #MISS
  _plus__ex__2(); // +!_2
  Push(Read16(pp__n_MISS)); // #MISS @
  Push(Read16(cc_WE1E6)); // WE1E6
  _gt_(); // >
  if (Pop() == 0) return;
  WE1EA(); // WE1EA
  WDD16(); // WDD16
  ILAST(); // ILAST
  IDELETE(); // IDELETE
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe21c: WORD 'WE21E' codep=0x1d29 parp=0xe21e
// ================================================
// orphan
// 0xe21e: db 0x00 0x00 '  '

// ================================================
// 0xe220: WORD 'WE222' codep=0x224c parp=0xe222 params=0 returns=1
// ================================================
// orphan

void WE222() // WE222
{
  WDD36(); // WDD36
  Push(0x005a);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(pp_WE21E); // WE21E
    Push(-1);
    TOGGLE(); // TOGGLE
  }
  Push(Read16(pp_WE21E)); // WE21E @
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe23c: WORD 'WE23E' codep=0x224c parp=0xe23e params=0 returns=1
// ================================================

void WE23E() // WE23E
{
  Push((Read16(0x65e1+WDE19.offset)&0xFF) & 8); // WDE19<IFIELD> C@ 8 AND
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xe24a: WORD 'WE24C' codep=0x224c parp=0xe24c params=0 returns=1
// ================================================

void WE24C() // WE24C
{
  Push(Read16(0x65e1+WDE14.offset)); // WDE14<IFIELD> @
  _gt_FLAG(); // >FLAG
  WE23E(); // WE23E
  Push(Pop() & Pop()); // AND
  Push(Pop() & (Read16(pp_IsNEB)==0?1:0)); //  ?NEB @ 0= AND
}


// ================================================
// 0xe260: WORD 'WE262' codep=0x224c parp=0xe262 params=0 returns=1
// ================================================

void WE262() // WE262
{
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    Push(0xc0a1); // 'OV/STX'
    return;
  }
  Push(0xc090); // 'OV/STA'
}


// ================================================
// 0xe27c: WORD 'WE27E' codep=0x224c parp=0xe27e params=0 returns=1
// ================================================

void WE27E() // WE27E
{
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbcb8); // 'OVDBA'
    return;
  }
  Push(0xbc98); // 'OV/DA'
}


// ================================================
// 0xe298: WORD 'WE29A' codep=0x224c parp=0xe29a params=0 returns=0
// ================================================

void WE29A() // WE29A
{
  Push(Read16(0x65e1+WDE1E.offset)); // WDE1E<IFIELD> @
  _gt_FLAG(); // >FLAG
  WE24C(); // WE24C
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WE262(); // WE262
  } else
  {
    WE27E(); // WE27E
  }
  MODULE(); // MODULE
}


// ================================================
// 0xe2b4: WORD 'WE2B6' codep=0x2214 parp=0xe2b6
// ================================================
// 0xe2b6: dw 0x0001

// ================================================
// 0xe2b8: WORD 'WE2BA' codep=0x2214 parp=0xe2ba
// ================================================
// 0xe2ba: dw 0x0000

// ================================================
// 0xe2bc: WORD 'WE2BE' codep=0x1d29 parp=0xe2be
// ================================================
// 0xe2be: db 0x00 0x00 '  '

// ================================================
// 0xe2c0: WORD 'WE2C2' codep=0x7420 parp=0xe2c2
// ================================================
IFieldType WE2C2 = {PROJECTILEIDX, 0x0b, 0x04};

// ================================================
// 0xe2c5: WORD 'WE2C7' codep=0x7420 parp=0xe2c7
// ================================================
IFieldType WE2C7 = {PROJECTILEIDX, 0x0f, 0x04};

// ================================================
// 0xe2ca: WORD 'WE2CC' codep=0x7420 parp=0xe2cc
// ================================================
IFieldType WE2CC = {PROJECTILEIDX, 0x13, 0x02};

// ================================================
// 0xe2cf: WORD 'WE2D1' codep=0x7420 parp=0xe2d1
// ================================================
IFieldType WE2D1 = {PROJECTILEIDX, 0x15, 0x02};

// ================================================
// 0xe2d4: WORD 'WE2D6' codep=0x7420 parp=0xe2d6
// ================================================
IFieldType WE2D6 = {PROJECTILEIDX, 0x17, 0x02};

// ================================================
// 0xe2d9: WORD 'WE2DB' codep=0x7420 parp=0xe2db
// ================================================
IFieldType WE2DB = {PROJECTILEIDX, 0x1b, 0x02};

// ================================================
// 0xe2de: WORD 'WE2E0' codep=0x7420 parp=0xe2e0
// ================================================
// orphan
IFieldType WE2E0 = {PROJECTILEIDX, 0x1f, 0x02};

// ================================================
// 0xe2e3: WORD 'WE2E5' codep=0x7420 parp=0xe2e5
// ================================================
IFieldType WE2E5 = {PROJECTILEIDX, 0x21, 0x01};

// ================================================
// 0xe2e8: WORD 'WE2EA' codep=0x7420 parp=0xe2ea
// ================================================
IFieldType WE2EA = {PROJECTILEIDX, 0x22, 0x02};

// ================================================
// 0xe2ed: WORD 'WE2EF' codep=0x7420 parp=0xe2ef
// ================================================
IFieldType WE2EF = {PROJECTILEIDX, 0x24, 0x02};

// ================================================
// 0xe2f2: WORD 'WE2F4' codep=0x7420 parp=0xe2f4
// ================================================
IFieldType WE2F4 = {PROJECTILEIDX, 0x26, 0x03};

// ================================================
// 0xe2f7: WORD 'WE2F9' codep=0x224c parp=0xe2f9 params=0 returns=1
// ================================================

void WE2F9() // WE2F9
{
  GetINST_dash_S(); // @INST-S
}


// ================================================
// 0xe2fd: WORD 'WE2FF' codep=0x224c parp=0xe2ff params=0 returns=0
// ================================================

void WE2FF() // WE2FF
{
  WDD16(); // WDD16
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    IDELETE(); // IDELETE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(pp__n_MISS); // #MISS
  _099(); // 099
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe31b: WORD 'WE31D' codep=0x224c parp=0xe31d params=0 returns=1
// ================================================

void WE31D() // WE31D
{
  Push((Read16(0x65e1+WE2E5.offset)&0xFF)==Read16(cc_WE2BA)?1:0); // WE2E5<IFIELD> C@ WE2BA =
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
    WE31D(); // WE31D
    break;

  }
}

// ================================================
// 0xe34b: WORD 'WE34D' codep=0x224c parp=0xe34d
// ================================================

void WE34D() // WE34D
{
  WE2F9(); // WE2F9
  C_gt_C(); // C>C case
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe355: WORD 'WE357' codep=0x224c parp=0xe357 params=0 returns=2
// ================================================

void WE357() // WE357
{
  Push(Read16(0x65e1+WE2C2.offset)); // WE2C2<IFIELD> @
  Push(Read16(0x65e1+WE2C7.offset)); // WE2C7<IFIELD> @
}


// ================================================
// 0xe361: WORD 'WE363' codep=0x224c parp=0xe363 params=0 returns=2
// ================================================
// orphan

void WE363() // WE363
{
  Push(Read16(0x65e1+WE2CC.offset)); // WE2CC<IFIELD> @
  Push(Read16(0x65e1+WE2D1.offset)); // WE2D1<IFIELD> @
}


// ================================================
// 0xe36d: WORD 'WE36F' codep=0x224c parp=0xe36f params=0 returns=0
// ================================================

void WE36F() // WE36F
{
  PRINT(".", 1); // (.")
}


// ================================================
// 0xe375: WORD 'WE377' codep=0x224c parp=0xe377
// ================================================

void WE377() // WE377
{
  _gt_2FONT(); // >2FONT
  PRINT(".", 1); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe381: WORD 'WE383' codep=0x224c parp=0xe383 params=1 returns=0
// ================================================

void WE383() // WE383
{
  if (Pop() != 0)
  {
    PRINT("+", 1); // (.")
    return;
  }
  PRINT("*", 1); // (.")
}


// ================================================
// 0xe395: WORD 'WE397' codep=0x224c parp=0xe397
// ================================================

void WE397() // WE397
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
// 0xe3b7: WORD 'WE3B9' codep=0x224c parp=0xe3b9 params=0 returns=0
// ================================================

void WE3B9() // WE3B9
{
  Push(Read16(0x65e1+WE2C2.offset)); // WE2C2<IFIELD> @
  Push(2);
  MOD(); // MOD
  WE2F9(); // WE2F9
  Push(6);
  Push(8);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    WE397(); // WE397
    return;
  }
  WE383(); // WE383
}


// ================================================
// 0xe3d7: WORD 'SCALE>.MIS' codep=0x4b3b parp=0xe3e6
// ================================================

void SCALE_gt__dot_MIS() // SCALE>.MIS
{
  switch(Pop()) // SCALE>.MIS
  {
  case 2:
    WE36F(); // WE36F
    break;
  case 4:
    WE377(); // WE377
    break;
  case 8:
    WE3B9(); // WE3B9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe3f6: WORD 'WE3F8' codep=0x224c parp=0xe3f8
// ================================================

void WE3F8() // WE3F8
{
  WE357(); // WE357
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(Pop() + 3); //  3 +
  SWAP(); // SWAP
  POS_dot_(); // POS.
  WE34D(); // WE34D
  Push(Read16(pp_XWLD_c_XP)); // XWLD:XP @
  SCALE_gt__dot_MIS(); // SCALE>.MIS case
}


// ================================================
// 0xe412: WORD 'WE414' codep=0x224c parp=0xe414
// ================================================

void WE414() // WE414
{
  WDD16(); // WDD16
  Push(0xe3f8); // 'WE3F8'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe422: WORD 'WE424' codep=0x224c parp=0xe424 params=0 returns=0
// ================================================

void WE424() // WE424
{
  Push((Read16(0x65e1+WE2E5.offset)&0xFF)==Read16(cc_WE2BA)?1:0); // WE2E5<IFIELD> C@ WE2BA =
  if (Pop() != 0)
  {
    Push2Words("*SHIP");
  } else
  {
    Push(pp_WDD28); // WDD28
    _2_at_(); // 2@
  }
  Push(0x65e1+WE2F4.offset); // WE2F4<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe440: WORD 'WE442' codep=0x224c parp=0xe442 params=2 returns=2
// ================================================

void WE442() // WE442
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
// 0xe450: WORD 'WE452' codep=0x224c parp=0xe452 params=0 returns=0
// ================================================

void WE452() // WE452
{
  unsigned short int a;
  Push(Read16(0x65e1+WE2CC.offset) - Read16(0x65e1+WE2C2.offset)); // WE2CC<IFIELD> @ WE2C2<IFIELD> @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(Read16(0x65e1+WE2D1.offset) - Read16(0x65e1+WE2C7.offset)); // WE2D1<IFIELD> @ WE2C7<IFIELD> @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  a = Pop(); // >R
  Push(Read16(a)); // R@
  WE442(); // WE442
  Push(0x65e1+WE2DB.offset); // WE2DB<IFIELD>
  _2_ex__2(); // 2!_2
  Push(a); // R>
  WE442(); // WE442
  Push(0x65e1+WE2D6.offset); // WE2D6<IFIELD>
  _2_ex__2(); // 2!_2
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  Push((0x65e1+WE2C2.offset) + 2); // WE2C2<IFIELD> 2+
  _st__ex__gt_(); // <!>
  Push((0x65e1+WE2C7.offset) + 2); // WE2C7<IFIELD> 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe498: WORD 'WE49A' codep=0x224c parp=0xe49a params=0 returns=0
// ================================================

void WE49A() // WE49A
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
// 0xe4be: WORD 'WE4C0' codep=0x224c parp=0xe4c0 params=0 returns=0
// ================================================

void WE4C0() // WE4C0
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe4ce: WORD 'WE4D0' codep=0x224c parp=0xe4d0 params=0 returns=0
// ================================================

void WE4D0() // WE4D0
{
  Push(0x65e1+WE2C7.offset); // WE2C7<IFIELD>
  _2_at_(); // 2@
  Push(0x65e1+WE2DB.offset); // WE2DB<IFIELD>
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x65e1+WE2C7.offset); // WE2C7<IFIELD>
  _2_ex__2(); // 2!_2
  Push(0x65e1+WE2C2.offset); // WE2C2<IFIELD>
  _2_at_(); // 2@
  Push(0x65e1+WE2D6.offset); // WE2D6<IFIELD>
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x65e1+WE2C2.offset); // WE2C2<IFIELD>
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe4ee: WORD 'WE4F0' codep=0x224c parp=0xe4f0
// ================================================

void WE4F0() // WE4F0
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
// 0xe514: WORD 'WE516' codep=0x224c parp=0xe516 params=0 returns=0
// ================================================

void WE516() // WE516
{
  Push(!(Read16(pp_IsAF)==1?1:0)); // ?AF @ 1 = NOT
  if (Pop() == 0) return;
  WE4C0(); // WE4C0
  _gt_MAINVI(); // >MAINVI
  WE4F0(); // WE4F0
  WE414(); // WE414
  WE49A(); // WE49A
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe534: WORD 'WE536' codep=0x224c parp=0xe536 params=0 returns=0
// ================================================

void WE536() // WE536
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
// 0xe56c: WORD 'WE56E' codep=0x2214 parp=0xe56e
// ================================================
// 0xe56e: dw 0x0000

// ================================================
// 0xe570: WORD 'WE572' codep=0x224c parp=0xe572 params=0 returns=0
// ================================================

void WE572() // WE572
{
  unsigned short int i, imax, j, jmax;
  Push(0x0064);
  Push(0x03e8);
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(RED);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2 - 1); //  2* 1-
  Push(0xe56e); // 'WE56E'
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

    Push(Read16(cc_WE56E)); // WE56E
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe5bc: WORD 'WE5BE' codep=0x224c parp=0xe5be
// ================================================

void WE5BE() // WE5BE
{
  unsigned short int a;
  WE1FC(); // WE1FC
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0x001d);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  Push2Words("*MISS");
  IINSERT(); // IINSERT
  WDD16(); // WDD16
  Push(0x65e1+WE2E5.offset); // WE2E5<IFIELD>
  C_ex__2(); // C!_2
  WE424(); // WE424
  Push(0x65e1+WE2D1.offset); // WE2D1<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+WE2CC.offset); // WE2CC<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+WE2C7.offset); // WE2C7<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+WE2C2.offset); // WE2C2<IFIELD>
  Store_2(); // !_2
  WE452(); // WE452
  Push(0x65e1+WE2EA.offset); // WE2EA<IFIELD>
  _099(); // 099
  Push(a==7?1:0); // R> 7 =
  if (Pop() != 0)
  {
    Push(0x0060);
  } else
  {
    Push(0x7fff);
  }
  Push(0x65e1+WE2EF.offset); // WE2EF<IFIELD>
  Store_2(); // !_2
  WE536(); // WE536
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe610: WORD 'WE612' codep=0x224c parp=0xe612
// ================================================

void WE612() // WE612
{
  IDELETE(); // IDELETE
  WE1EA(); // WE1EA
}


// ================================================
// 0xe618: WORD 'WE61A' codep=0x224c parp=0xe61a
// ================================================

void WE61A() // WE61A
{
  unsigned short int a, i, imax;
  WE357(); // WE357
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
    Push((Read16(0x65e1+WE2E5.offset)&0xFF)==Read16(cc_WE2BA)?1:0); // WE2E5<IFIELD> C@ WE2BA =
    if (Pop() != 0)
    {
      WDD70(); // WDD70
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
// 0xe662: WORD 'WE664' codep=0x224c parp=0xe664
// ================================================

void WE664() // WE664
{
  WE357(); // WE357
  IsINVIS(); // ?INVIS
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WE612(); // WE612
    IPREV(); // IPREV
    return;
  }
  WE61A(); // WE61A
  if (Pop() == 0) return;
  Push(1);
  Push(pp_WE2BE); // WE2BE
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe684: WORD 'WE686' codep=0x224c parp=0xe686
// ================================================

void WE686() // WE686
{
  Push(0xe664); // 'WE664'
  ALL(); // ALL
}


// ================================================
// 0xe68e: WORD 'WE690' codep=0x224c parp=0xe690
// ================================================

void WE690() // WE690
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  WDD64(); // WDD64
  StoreIY(); // !IY
  StoreIX(); // !IX
  WE4C0(); // WE4C0
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0017);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    WE516(); // WE516
  }
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe6c2: WORD 'WE6C4' codep=0x224c parp=0xe6c4 params=4 returns=0
// ================================================

void WE6C4() // WE6C4
{
  WDECF(); // WDECF
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xe6d6: WORD 'WE6D8' codep=0x224c parp=0xe6d8 params=4 returns=0
// ================================================

void WE6D8() // WE6D8
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    WDE9F(); // WDE9F
    WDE9F(); // WDE9F
  } else
  {
    WDECF(); // WDECF
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
// 0xe702: WORD 'WE704' codep=0x224c parp=0xe704
// ================================================

void WE704() // WE704
{
  while(1)
  {
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    WE61A(); // WE61A
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    INEXT(); // INEXT
  }
}


// ================================================
// 0xe71a: WORD 'WE71C' codep=0x224c parp=0xe71c params=2 returns=2
// ================================================

void WE71C() // WE71C
{
  WDEAF(); // WDEAF
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WDEAF(); // WDEAF
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xe72a: WORD 'WE72C' codep=0x224c parp=0xe72c params=0 returns=0
// ================================================

void WE72C() // WE72C
{
  WE2F9(); // WE2F9
  Push(6);
  Push(8);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(0x65e1+WE2F4.offset); // WE2F4<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  WE71C(); // WE71C
  SWAP(); // SWAP
  Push(0x65e1+WE2CC.offset); // WE2CC<IFIELD>
  StoreD(); // D!
  WE452(); // WE452
}


// ================================================
// 0xe752: WORD 'WE754' codep=0x224c parp=0xe754 params=0 returns=0
// ================================================

void WE754() // WE754
{
  Push(7);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WE612(); // WE612
}


// ================================================
// 0xe762: WORD 'WE764' codep=0x224c parp=0xe764 params=0 returns=0
// ================================================

void WE764() // WE764
{
  while(1)
  {
    WE2F9(); // WE2F9
    Push(!(Pop()==7?1:0)); //  7 = NOT
    Push(Read16(0x65e1+WE2EA.offset)); // WE2EA<IFIELD> @
    Push(3);
    MOD(); // MOD
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      WE72C(); // WE72C
      WE4D0(); // WE4D0
    }
    Push(1);
    Push(0x65e1+WE2EA.offset); // WE2EA<IFIELD>
    _plus__ex__2(); // +!_2
    Push(Read16(0x65e1+WE2EF.offset)); // WE2EF<IFIELD> @
    Push(Read16(0x65e1+WE2EA.offset)); // WE2EA<IFIELD> @
    _st_(); // <
    if (Pop() != 0)
    {
      WE612(); // WE612
      IPREV(); // IPREV
    }
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    if (Pop() == 0) return;
    INEXT(); // INEXT
  }
}


// ================================================
// 0xe7a6: WORD 'WE7A8' codep=0x224c parp=0xe7a8 params=0 returns=0
// ================================================

void WE7A8() // WE7A8
{
  unsigned short int i, imax;
  WDD16(); // WDD16
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WE764(); // WE764
    WE516(); // WE516
    Push(pp_WE2BE); // WE2BE
    _099(); // 099
    WE686(); // WE686
    Push(Read16(pp_WE2BE)); // WE2BE @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        WE704(); // WE704
        WE357(); // WE357
        WE2F9(); // WE2F9
        Push(Read16(0x65e1+WE2E5.offset)&0xFF); // WE2E5<IFIELD> C@
        Push(1);
        Push(0xc694); // 'DO-DA'
        MODULE(); // MODULE
        WE754(); // WE754
        i++;
      } while(i<imax); // (LOOP)

    }
  }
  WE516(); // WE516
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe7ea: WORD 'WE7EC' codep=0x224c parp=0xe7ec params=2 returns=0
// ================================================

void WE7EC() // WE7EC
{
  Push(0);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WDD64(); // WDD64
    WDECF(); // WDECF
    SWAP(); // SWAP
    KEY_gt_ORIENT(); // KEY>ORIENT case
    Push(Read16(regsp)); // DUP
    Push(0x65e1+WDDC0.offset); // WDDC0<IFIELD>
    C_ex__2(); // C!_2
    Push(Pop() + 0x0023); //  0x0023 +
    StoreID(); // !ID
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe810: WORD 'WE812' codep=0x224c parp=0xe812 params=0 returns=0
// ================================================

void WE812() // WE812
{
  Push(0x0014);
  _eq_SPECIE(); // =SPECIE
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WDD4C(); // WDD4C
  WE7EC(); // WE7EC
  Push((Read16(0x65e1+WDDC0.offset)&0xFF) + 4); // WDDC0<IFIELD> C@ 4 +
  Push(8);
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0x65e1+WDDC0.offset); // WDDC0<IFIELD>
  C_ex__2(); // C!_2
  Push(Pop() + 0x0023); //  0x0023 +
  StoreID(); // !ID
}


// ================================================
// 0xe83e: WORD 'WE840' codep=0x224c parp=0xe840
// ================================================

void WE840() // WE840
{
  GetID(); // @ID
  Push(!(Pop()==Read16(cc_INVIS_dash_I)?1:0)); //  INVIS-I = NOT
  if (Pop() == 0) return;
  WE812(); // WE812
}


// ================================================
// 0xe850: WORD 'WE852' codep=0x224c parp=0xe852
// ================================================

void WE852() // WE852
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
// 0xe86c: WORD 'WE86E' codep=0x224c parp=0xe86e params=0 returns=1
// ================================================

void WE86E() // WE86E
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
// 0xe882: WORD 'WE884' codep=0x224c parp=0xe884 params=0 returns=1
// ================================================

void WE884() // WE884
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
// 0xe898: WORD 'WE89A' codep=0x224c parp=0xe89a
// ================================================

void WE89A() // WE89A
{
  unsigned short int a;
  Push(Read16(pp_IINDEX)); // IINDEX @
  a = Pop(); // >R
  Push2Words("*SHIP");
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  Push((Read16(0x65e1+WDE28.offset)&0xFF) + 0x001b); // WDE28<IFIELD> C@ 0x001b +
  StoreID(); // !ID
  Push(a); // R>
  Push(pp_IINDEX); // IINDEX
  _st__ex__gt_(); // <!>
  WE516(); // WE516
}


// ================================================
// 0xe8be: WORD 'WE8C0' codep=0x224c parp=0xe8c0 params=0 returns=1
// ================================================

void WE8C0() // WE8C0
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
// 0xe8ea: WORD 'WE8EC' codep=0x224c parp=0xe8ec params=0 returns=0
// ================================================

void WE8EC() // WE8EC
{
  WE4C0(); // WE4C0
  Push(0xc7ce); // 'CSCALE'
  MODULE(); // MODULE
  WE516(); // WE516
}


// ================================================
// 0xe8f8: WORD 'WE8FA' codep=0x224c parp=0xe8fa params=4 returns=0
// ================================================

void WE8FA() // WE8FA
{
  WE86E(); // WE86E
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WE86E(); // WE86E
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WE8C0(); // WE8C0
  Push(Pop() & !Read16(pp_WDD24)); //  WDD24 @ NOT AND
  if (Pop() != 0)
  {
    LLINE(); // LLINE
    Push(5);
    Push(4);
    POS_dot_(); // POS.
    Push(0x661b); Push(0x0002);
    WDE37(); // WDE37
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe930: WORD 'WE932' codep=0x224c parp=0xe932 params=0 returns=1
// ================================================

void WE932() // WE932
{
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe93c: WORD 'WE93E' codep=0x224c parp=0xe93e params=0 returns=1
// ================================================

void WE93E() // WE93E
{
  Push(0x65e1+WDDD8.offset); // WDDD8<IFIELD>
  Push(Read16(regsp)); // DUP
  WDE85(); // WDE85
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
// 0xe964: WORD 'WE966' codep=0x224c parp=0xe966
// ================================================

void WE966() // WE966
{
  unsigned short int a, b;
  Push(Read16(pp_IINDEX)); // IINDEX @
  a = Pop(); // >R
  b = Pop(); // >R
  _gt_MAINVI(); // >MAINVI
  WE4F0(); // WE4F0
  WE414(); // WE414
  WE852(); // WE852
  _2SWAP(); // 2SWAP
  WE852(); // WE852
  Push(b); // R>
  StoreCOLOR(); // !COLOR
  _1PIX(); // 1PIX
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  LLINE(); // LLINE
  WE8FA(); // WE8FA
  _2PIX(); // 2PIX
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  Push(Read16(pp_Get_co_0_star_1_sc_)); // @,0*1; @
  if (Pop() != 0)
  {
    WE572(); // WE572
  }
  Push(a); // R>
  POINT_gt_I(); // POINT>I
}


// ================================================
// 0xe9a0: WORD 'WE9A2' codep=0x224c parp=0xe9a2 params=2 returns=0
// ================================================

void WE9A2() // WE9A2
{
  WE93E(); // WE93E
  if (Pop() != 0)
  {
    WE932(); // WE932
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
// 0xe9d2: WORD 'WE9D4' codep=0x224c parp=0xe9d4
// ================================================

void WE9D4() // WE9D4
{
  unsigned short int a;
  _i_KEY(); // 'KEY
  Push((Pop()==0x0143?1:0) & Read16(pp_WDD20)); //  0x0143 = WDD20 @ AND
  if (Pop() == 0) return;
  WDF0B(); // WDF0B
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WDD2E(); // WDD2E
    WDD64(); // WDD64
    ICLOSE(); // ICLOSE
    WE884(); // WE884
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    WE884(); // WE884
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
  } else
  {
    WDD64(); // WDD64
  }
  WDD2E(); // WDD2E
  WDD64(); // WDD64
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  WDE5D(); // WDE5D
  a = Pop(); // >R
  WDECF(); // WDECF
  Push(Read16(a)); // R@
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Pop() * a); //  R> *
  SWAP(); // SWAP
  WE9A2(); // WE9A2
  WE516(); // WE516
  Pop(); Pop(); // 2DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea2a: WORD 'WEA2C' codep=0x1d29 parp=0xea2c
// ================================================
// 0xea2c: db 0x56 0x3a 0x20 0xd0 'V:  '

// ================================================
// 0xea30: WORD 'WEA32' codep=0x224c parp=0xea32 params=0 returns=1
// ================================================
// orphan

void WEA32() // WEA32
{
  GetINST_dash_S(); // @INST-S
  Push(0x0019);
  Push(0x001b);
  WITHIN(); // WITHIN
  Push(0x001c);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  WDF0B(); // WDF0B
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
// 0xea5c: WORD 'WEA5E' codep=0x224c parp=0xea5e
// ================================================

void WEA5E() // WEA5E
{
  unsigned short int i, imax;
  WDD2E(); // WDD2E
  WDD64(); // WDD64
  Push(pp_WEA2C); // WEA2C
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
    WE932(); // WE932
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    StoreID(); // !ID
    WE516(); // WE516
    WE932(); // WE932
    WE812(); // WE812
    WE516(); // WE516
    WE9D4(); // WE9D4
    i++;
  } while(i<imax); // (LOOP)

  WE932(); // WE932
}


// ================================================
// 0xea8e: WORD 'WEA90' codep=0x224c parp=0xea90
// ================================================

void WEA90() // WEA90
{
  unsigned short int i, imax;
  Push(Read16(pp_IINDEX)); // IINDEX @
  _gt_MAINVI(); // >MAINVI
  WE4F0(); // WE4F0
  WE414(); // WE414
  DrawLOCAL_dash_(); // .LOCAL-
  _1PIX(); // 1PIX
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WDD64(); // WDD64
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_WEA2C); // WEA2C
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
      WE572(); // WE572
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
// 0xeae2: WORD 'WEAE4' codep=0x224c parp=0xeae4
// ================================================

void WEAE4() // WEAE4
{
  CTINIT(); // CTINIT
  WDD2E(); // WDD2E
  WDD64(); // WDD64
  ICLOSE(); // ICLOSE
  Push(pp_WEA2C); // WEA2C
  _2_at_(); // 2@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(0x7530);
    WDD64(); // WDD64
    Push(pp_WEA2C); // WEA2C
    _2_at_(); // 2@
    WDE5D(); // WDE5D
    _slash_(); // /
    Push(0xc6ca); // 'CREWD'
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
// 0xeb25: WORD 'WEB27' codep=0x224c parp=0xeb27
// ================================================

void WEB27() // WEB27
{
  WEA5E(); // WEA5E
  WEA90(); // WEA90
  WEAE4(); // WEAE4
  WE8EC(); // WE8EC
}


// ================================================
// 0xeb31: WORD 'WEB33' codep=0x224c parp=0xeb33 params=2 returns=2
// ================================================
// orphan

void WEB33() // WEB33
{
  Push(Pop() + 0x0044); //  0x0044 +
  SWAP(); // SWAP
  Push(Pop() + 8); //  8 +
  SWAP(); // SWAP
}


// ================================================
// 0xeb43: WORD 'WEB45' codep=0x224c parp=0xeb45 params=0 returns=0
// ================================================

void WEB45() // WEB45
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
// 0xeb79: WORD 'WEB7B' codep=0x224c parp=0xeb7b
// ================================================

void WEB7B() // WEB7B
{
  WE86E(); // WE86E
  Push(Pop() + Read16(pp_XABS)); //  XABS @ +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  WE86E(); // WE86E
  Push(Pop() + Read16(pp_YABS)); //  YABS @ +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  WE690(); // WE690
}


// ================================================
// 0xeb97: WORD 'WEB99' codep=0x224c parp=0xeb99
// ================================================

void WEB99() // WEB99
{
  WDD5C(); // WDD5C
  WDD4C(); // WDD4C
  WE71C(); // WE71C
  Push(Read16(cc_WE2BA)); // WE2BA
  LoadData(WDD94); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  WE5BE(); // WE5BE
  Push(3);
  Push(0x65e1+WDDBB.offset); // WDDBB<IFIELD>
  C_ex__2(); // C!_2
  Push(pp_WDE59); // WDE59
  ON_2(); // ON_2
  WE840(); // WE840
  WE0DE(); // WE0DE
}


// ================================================
// 0xebb7: WORD 'WEBB9' codep=0x224c parp=0xebb9
// ================================================

void WEBB9() // WEBB9
{
  WDD5C(); // WDD5C
  WDD4C(); // WDD4C
  WE71C(); // WE71C
  Push(Read16(cc_WE2BA)); // WE2BA
  LoadData(WDDA4); // from 'VESSEL'
  Push((Read16(Pop())&0xFF) + 5); //  C@ 5 +
  WE5BE(); // WE5BE
  Push(3);
  Push(0x65e1+WDDBB.offset); // WDDBB<IFIELD>
  C_ex__2(); // C!_2
  Push(pp_WDE59); // WDE59
  ON_2(); // ON_2
  WE840(); // WE840
  WE0DE(); // WE0DE
}


// ================================================
// 0xebdb: WORD 'WEBDD' codep=0x224c parp=0xebdd
// ================================================

void WEBDD() // WEBDD
{
  WDD5C(); // WDD5C
  WDD4C(); // WDD4C
  GetColor(RED);
  WE966(); // WE966
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x6638); Push(0x0002);
  WDE37(); // WDE37
  DrawTTY(); // .TTY
  LoadData(WDD9C); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Draw(); // .
  Push(Read16(cc_WE2BA)); // WE2BA
  Push(0);
  Push(0xc694); // 'DO-DA'
  MODULE(); // MODULE
  Push(3);
  Push(0x65e1+WDDBB.offset); // WDDBB<IFIELD>
  C_ex__2(); // C!_2
  Push(pp_WDE59); // WDE59
  ON_2(); // ON_2
  WE840(); // WE840
  WE0DE(); // WE0DE
}


// ================================================
// 0xec13: WORD 'WEC15' codep=0x224c parp=0xec15
// ================================================

void WEC15() // WEC15
{
  WDD5C(); // WDD5C
  WDD4C(); // WDD4C
}


// ================================================
// 0xec1b: WORD 'WEC1D' codep=0x224c parp=0xec1d
// ================================================

void WEC1D() // WEC1D
{
  WEC15(); // WEC15
  WE6D8(); // WE6D8
  Push(4);
  Push(0x65e1+WDDBB.offset); // WDDBB<IFIELD>
  C_ex__2(); // C!_2
  WDD5C(); // WDD5C
  WE7EC(); // WE7EC
  WE690(); // WE690
}


// ================================================
// 0xec2f: WORD 'WEC31' codep=0x224c parp=0xec31
// ================================================

void WEC31() // WEC31
{
  WEC15(); // WEC15
  WE6C4(); // WE6C4
  Push(3);
  Push(0x65e1+WDDBB.offset); // WDDBB<IFIELD>
  C_ex__2(); // C!_2
  WDD5C(); // WDD5C
  WE7EC(); // WE7EC
  WE690(); // WE690
}


// ================================================
// 0xec43: WORD 'WEC45' codep=0x224c parp=0xec45 params=1 returns=0
// ================================================

void WEC45() // WEC45
{
  if (Pop() != 0)
  {
    WDD42(); // WDD42
    if (Pop() != 0)
    {
      WDE9F(); // WDE9F
    } else
    {
      Push(0);
    }
    return;
  }
  WDE9F(); // WDE9F
}


// ================================================
// 0xec5f: WORD '?APPROACHI' codep=0x224c parp=0xec6e params=0 returns=1
// ================================================

void IsAPPROACHI() // ?APPROACHI
{
  Push((Read16(0x65e1+WDDBB.offset)&0xFF)==3?1:0); // WDDBB<IFIELD> C@ 3 =
}


// ================================================
// 0xec78: WORD 'WEC7A' codep=0x224c parp=0xec7a
// ================================================

void WEC7A() // WEC7A
{
  unsigned short int a;
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(1);
  WEC45(); // WEC45
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(a); // R>
  WEC45(); // WEC45
  Push(Pop() + Pop()); // +
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  WDD5C(); // WDD5C
  WE7EC(); // WE7EC
  WE690(); // WE690
  Push(0);
  Push(0x65e1+WDDBB.offset); // WDDBB<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xeca8: WORD 'WECAA' codep=0x224c parp=0xecaa params=0 returns=1
// ================================================

void WECAA() // WECAA
{
  GetINST_dash_S(); // @INST-S
  Push(4);
  Push(6);
  WITHIN(); // WITHIN
  WDF0B(); // WDF0B
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
// 0xecd8: WORD 'WECDA' codep=0x224c parp=0xecda params=0 returns=0
// ================================================

void WECDA() // WECDA
{
  Push(0xc746); // 'GNL'
  MODULE(); // MODULE
}


// ================================================
// 0xece2: WORD 'WECE4' codep=0x224c parp=0xece4 params=0 returns=1
// ================================================

void WECE4() // WECE4
{
  Push(Read16(pp_CONTEXT_3)==4?1:0); // CONTEXT_3 @ 4 =
}


// ================================================
// 0xecee: WORD '?J' codep=0x224c parp=0xecf5 params=0 returns=2
// ================================================
// entry

void IsJ() // ?J
{
  Push(Read16(pp_WDD20)); // WDD20 @
  WECE4(); // WECE4
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WDD2E(); // WDD2E
    WEB45(); // WEB45
    WE884(); // WE884
    WE884(); // WE884
    WE9A2(); // WE9A2
    Push(0xc7ce); // 'CSCALE'
    MODULE(); // MODULE
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0xb7e7); // '.NOFUN'
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
  WEA32(); // WEA32
  b = b && Pop();
  if (b)
  {
    WEB27(); // WEB27
  }

  b = 1;
  WDF93(); // WDF93
  b = b && Pop();
  WE001(); // WE001
  b = b && Pop();
  WE019(); // WE019
  b = b && Pop();
  if (b)
  {
    WEB99(); // WEB99
  }

  b = 1;
  WDF93(); // WDF93
  b = b && Pop();
  WDFF3(); // WDFF3
  b = b && Pop();
  WE055(); // WE055
  b = b && Pop();
  if (b)
  {
    WEBB9(); // WEBB9
  }

  b = 1;
  WDF93(); // WDF93
  b = b && !Pop();
  WDFAD(); // WDFAD
  b = b && Pop();
  WE1CC(); // WE1CC
  b = b && Pop();
  WE001(); // WE001
  b = b && Pop();
  if (b)
  {
    WEB99(); // WEB99
  }

  b = 1;
  WDF93(); // WDF93
  b = b && !Pop();
  WE1D8(); // WE1D8
  b = b && Pop();
  WE001(); // WE001
  b = b && Pop();
  if (b)
  {
    WEB99(); // WEB99
  }

  b = 1;
  WDF93(); // WDF93
  b = b && Pop();
  WDFE5(); // WDFE5
  b = b && Pop();
  WE037(); // WE037
  b = b && Pop();
  WE12A(); // WE12A
  b = b && Pop();
  if (b)
  {
    WEBDD(); // WEBDD
  }

  b = 1;
  WDF93(); // WDF93
  b = b && !Pop();
  WDFAD(); // WDFAD
  b = b && Pop();
  WE1CC(); // WE1CC
  b = b && Pop();
  WE001(); // WE001
  b = b && !Pop();
  WDFE5(); // WDFE5
  b = b && Pop();
  WE12A(); // WE12A
  b = b && Pop();
  if (b)
  {
    WEBDD(); // WEBDD
  }

  b = 1;
  WDF93(); // WDF93
  b = b && !Pop();
  WE1D8(); // WE1D8
  b = b && Pop();
  WE001(); // WE001
  b = b && !Pop();
  WDFE5(); // WDFE5
  b = b && Pop();
  WE12A(); // WE12A
  b = b && Pop();
  if (b)
  {
    WEBDD(); // WEBDD
  }

  b = 1;
  WECAA(); // WECAA
  b = b && Pop();
  if (b)
  {
    WECDA(); // WECDA
  }

  b = 1;
  WE098(); // WE098
  b = b && Pop();
  WE1CC(); // WE1CC
  b = b && !Pop();
  WE1C0(); // WE1C0
  b = b && !Pop();
  WE0A2(); // WE0A2
  b = b && Pop();
  WE0EA(); // WE0EA
  b = b && Pop();
  if (b)
  {
    WEC1D(); // WEC1D
  }

  b = 1;
  WE1C0(); // WE1C0
  b = b && Pop();
  WE0AE(); // WE0AE
  b = b && !Pop();
  WE0EA(); // WE0EA
  b = b && Pop();
  if (b)
  {
    WEC1D(); // WEC1D
  }

  b = 1;
  WDFC5(); // WDFC5
  b = b && Pop();
  WE098(); // WE098
  b = b && !Pop();
  if (b)
  {
    WEB7B(); // WEB7B
  }

  b = 1;
  WDFC5(); // WDFC5
  b = b && Pop();
  WE1CC(); // WE1CC
  b = b && Pop();
  if (b)
  {
    WEB7B(); // WEB7B
  }

  b = 1;
  WDFC5(); // WDFC5
  b = b && Pop();
  WE1D8(); // WE1D8
  b = b && Pop();
  if (b)
  {
    WEB7B(); // WEB7B
  }

  b = 1;
  WE0EA(); // WE0EA
  b = b && Pop();
  WDF93(); // WDF93
  b = b && Pop();
  WE120(); // WE120
  b = b && Pop();
  if (b)
  {
    WEC31(); // WEC31
  }

  b = 1;
  WE0CC(); // WE0CC
  b = b && Pop();
  WE0EA(); // WE0EA
  b = b && Pop();
  if (b)
  {
    WEC1D(); // WEC1D
  }

  b = 1;
  WE0EA(); // WE0EA
  b = b && Pop();
  WE1CC(); // WE1CC
  b = b && Pop();
  WE120(); // WE120
  b = b && Pop();
  if (b)
  {
    WEC31(); // WEC31
  }

  b = 1;
  WE0EA(); // WE0EA
  b = b && Pop();
  WE1CC(); // WE1CC
  b = b && Pop();
  WDFB7(); // WDFB7
  b = b && !Pop();
  WDFE5(); // WDFE5
  b = b && Pop();
  WE001(); // WE001
  b = b && !Pop();
  if (b)
  {
    WEC31(); // WEC31
  }

  b = 1;
  WE0EA(); // WE0EA
  b = b && Pop();
  WE1CC(); // WE1CC
  b = b && Pop();
  WDFB7(); // WDFB7
  b = b && !Pop();
  WE001(); // WE001
  b = b && Pop();
  if (b)
  {
    WEC31(); // WEC31
  }
}


// ================================================
// 0xee0f: WORD 'WEE11' codep=0x224c parp=0xee11 params=0 returns=0
// ================================================

void WEE11() // WEE11
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
    WDE37(); // WDE37
    DrawTTY(); // .TTY
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xee6d: WORD 'WEE6F' codep=0x224c parp=0xee6f
// ================================================

void WEE6F() // WEE6F
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
// 0xee8d: WORD 'WEE8F' codep=0x224c parp=0xee8f params=0 returns=0
// ================================================

void WEE8F() // WEE8F
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
    WEE6F(); // WEE6F
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        Push(Read16(cc_INVIS_dash_I)); // INVIS-I
        StoreID(); // !ID
      } else
      {
        WE840(); // WE840
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xef05: WORD 'WEF07' codep=0x224c parp=0xef07 params=0 returns=0
// ================================================

void WEF07() // WEF07
{
  Push(pp__h_CRIT); // ^CRIT
  _099(); // 099
}


// ================================================
// 0xef0d: WORD 'WEF0F' codep=0x224c parp=0xef0f params=0 returns=0
// ================================================

void WEF0F() // WEF0F
{
  Push(Read16(pp__h_CRIT) + 1); // ^CRIT @ 1+
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  Store_2(); // !_2
}


// ================================================
// 0xef21: WORD 'WEF23' codep=0x224c parp=0xef23
// ================================================

void WEF23() // WEF23
{
  Push(Read16(pp__h_CRIT)); // ^CRIT @
  POINT_gt_I(); // POINT>I
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xef31: WORD 'WEF33' codep=0x224c parp=0xef33 params=0 returns=1
// ================================================

void WEF33() // WEF33
{
  WDD2E(); // WDD2E
  Push(Read16(0x65e1+WDE14.offset)); // WDE14<IFIELD> @
  Push(0x65e1+WDDFB.offset); // WDDFB<IFIELD>
  WDE7B(); // WDE7B
  Push(Pop() * 0x01f4); //  0x01f4 *
  _st_(); // <
}


// ================================================
// 0xef47: WORD 'WEF49' codep=0x224c parp=0xef49 params=0 returns=0
// ================================================

void WEF49() // WEF49
{
  WEF33(); // WEF33
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+WDE14.offset) + 0x0028); // WDE14<IFIELD> @ 0x0028 +
    Push(0x0dac);
    MIN(); // MIN
    Push(0x65e1+WDE14.offset); // WDE14<IFIELD>
    Store_2(); // !_2
    Push(Read16(pp_IsCOMBAT) | (Read16(pp__n_AUX)==1?1:0)); // ?COMBAT @ #AUX @ 1 = OR
    if (Pop() != 0)
    {
      WE29A(); // WE29A
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef7b: WORD 'WEF7D' codep=0x224c parp=0xef7d
// ================================================

void WEF7D() // WEF7D
{
  Push(pp_SMART); // SMART
  _099(); // 099
  Push(0xed2e); // '<COMBAT>'
  DISTRAC(); // DISTRAC
  _st_COMBAT_gt_(); // <COMBAT> rule
  Push(Pop()==0?1:0); //  0=
  WE0EA(); // WE0EA
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WEC7A(); // WEC7A
}


// ================================================
// 0xef97: WORD 'WEF99' codep=0x224c parp=0xef99
// ================================================

void WEF99() // WEF99
{
  Push(Read16(0x65e1+WDDB6.offset)); // WDDB6<IFIELD> @
  LoadData(WDD8C); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  _st_(); // <
  if (Pop() == 0) return;
  Push(5);
  LoadData(WDD8C); // from 'VESSEL'
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xefaf: WORD 'WEFB1' codep=0x224c parp=0xefb1
// ================================================

void WEFB1() // WEFB1
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
// 0xefd9: WORD 'WEFDB' codep=0x224c parp=0xefdb params=2 returns=1
// ================================================

void WEFDB() // WEFDB
{
  Push(0xc7dc); // '@NF'
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
  WEE11(); // WEE11
  Push(0xc7ce); // 'CSCALE'
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ATIME); // ATIME
  _2_at_(); // 2@
  D_gt_(); // D>
  if (Pop() != 0)
  {
    WEF23(); // WEF23
    WEFB1(); // WEFB1
    if (Pop() != 0)
    {
      WEF7D(); // WEF7D
      WE932(); // WE932
      WEF99(); // WEF99
      WEE8F(); // WEE8F
    } else
    {
      WDD70(); // WDD70
      if (Pop() != 0)
      {
        WEF49(); // WEF49
      }
    }
    ICLOSE(); // ICLOSE
    WEF0F(); // WEF0F
    Push(pp__i_UHL); // 'UHL
    GetEXECUTE(); // @EXECUTE
  }
  WE7A8(); // WE7A8
  WEFDB(); // WEFDB
  Push(Pop() & !Read16(pp_IsCOMBAT)); //  ?COMBAT @ NOT AND
  if (Pop() == 0) return;
  Push(Read16(pp__i_UNNEST)); // 'UNNEST @
  MODULE(); // MODULE
}


// ================================================
// 0xf050: WORD 'WF052' codep=0x1d29 parp=0xf052
// ================================================
// 0xf052: db 0x00 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0xff 0xff 0x00 0x00 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0x00 0x00 0xff 0xff 0x01 0x00 '                                '

// ================================================
// 0xf072: WORD 'WF074' codep=0x224c parp=0xf074 params=2 returns=0
// ================================================

void WF074() // WF074
{
  unsigned short int a;
  Push(0xc7dc); // '@NF'
  MODULE(); // MODULE
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  Push(Read16(0x65e1+WDE28.offset)&0xFF); // WDE28<IFIELD> C@
  _4_star_(); // 4*
  Push(Pop() + pp_WF052); //  WF052 +
  _2_at_(); // 2@
  a = Pop(); // >R
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(Pop() + Read16(pp_XABS)); //  XABS @ +
  Push(a); // R>
  ROT(); // ROT
  Push(Pop() * Pop()); // *
  Push(Pop() + Read16(pp_YABS)); //  YABS @ +
  Push(pp_WDE49); // WDE49
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xf0a8: WORD 'WF0AA' codep=0x224c parp=0xf0aa params=0 returns=1
// ================================================

void WF0AA() // WF0AA
{
  Push((Read16(0x65e1+WDE19.offset)&0xFF) & 1); // WDE19<IFIELD> C@ 1 AND
}


// ================================================
// 0xf0b4: WORD 'WF0B6' codep=0x224c parp=0xf0b6
// ================================================

void WF0B6() // WF0B6
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
// 0xf0d8: WORD 'WF0DA' codep=0x224c parp=0xf0da
// ================================================

void WF0DA() // WF0DA
{
  GetID(); // @ID
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
}


// ================================================
// 0xf0e8: WORD 'WF0EA' codep=0x224c parp=0xf0ea
// ================================================

void WF0EA() // WF0EA
{
  WF0B6(); // WF0B6
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(0x000a);
  M_star_(); // M*
  Push(pp__10_star_END); // 10*END
  _2_ex__2(); // 2!_2
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf100: WORD 'WF102' codep=0x224c parp=0xf102 params=1 returns=0
// ================================================

void WF102() // WF102
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
// 0xf128: WORD 'WF12A' codep=0x224c parp=0xf12a params=0 returns=1
// ================================================

void WF12A() // WF12A
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
}


// ================================================
// 0xf132: WORD 'WF134' codep=0x224c parp=0xf134
// ================================================

void WF134() // WF134
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
  WF0B6(); // WF0B6
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf156: WORD 'WF158' codep=0x1d29 parp=0xf158
// ================================================
// 0xf158: db 0x56 0x3a 0x20 0x00 'V:  '

// ================================================
// 0xf15c: WORD 'WF15E' codep=0x224c parp=0xf15e params=1 returns=2
// ================================================
// orphan

void WF15E() // WF15E
{
  Push(0);
  Push(0x00fa);
  ROT(); // ROT
  _dash_(); // -
  RRND(); // RRND
  Push(0x0032);
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(pp_WDD24); // WDD24
  Store_2(); // !_2
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xf184: WORD 'WF186' codep=0x224c parp=0xf186
// ================================================

void WF186() // WF186
{
  unsigned short int a;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WDE2D.offset); // WDE2D<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WDE32.offset)&0xFF); // WDE32<IFIELD> C@
  a = Pop(); // >R
  Push(pp_WDE53); // WDE53
  _2_at_(); // 2@
  Push(Read16(a)); // R@
  WF15E(); // WF15E
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_WF158); // WF158
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(a); // R>
  WF15E(); // WF15E
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_WF158 + 2); // WF158 2+
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(2);
  _star_CLOSE(); // *CLOSE
  _2DUP(); // 2DUP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_WDE49); // WDE49
  StoreD(); // D!
}


// ================================================
// 0xf1c8: WORD 'WF1CA' codep=0x224c parp=0xf1ca params=0 returns=0
// ================================================

void WF1CA() // WF1CA
{
  unsigned short int i, imax;
  Push(0x2710);
  Push(pp_WDE4F); // WDE4F
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
      WF0DA(); // WF0DA
      GetID(); // @ID
      Push(Pop()==0x0060?1:0); //  0x0060 =
      Push(Pop() | Pop()); // OR
      GetID(); // @ID
      Push(Pop()==0x0062?1:0); //  0x0062 =
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        Push(pp_WDE49); // WDE49
        _2_at_(); // 2@
        WDD5C(); // WDD5C
        WDE5D(); // WDE5D
        Push(Read16(regsp)); // DUP
        Push(Read16(pp_WDE4F)); // WDE4F @
        _st_(); // <
        if (Pop() != 0)
        {
          Push(pp_WDE4F); // WDE4F
          _st__ex__gt_(); // <!>
          WDD5C(); // WDD5C
          Push(pp_WDE53); // WDE53
          _2_ex__2(); // 2!_2
          GetIL(); // @IL
          GetIH(); // @IH
          _gt_C_plus_S(); // >C+S
          CI(); // CI
          ICLOSE(); // ICLOSE
          Push(pp_WDD28); // WDD28
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
// 0xf240: WORD 'WF242' codep=0x224c parp=0xf242 params=0 returns=1
// ================================================

void WF242() // WF242
{
  Push(Read16(pp_WDE4F) - 0x2710); // WDE4F @ 0x2710 -
}


// ================================================
// 0xf24e: WORD 'WF250' codep=0x224c parp=0xf250
// ================================================

void WF250() // WF250
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x666f); Push(0x0002);
  WDE37(); // WDE37
  DrawTTY(); // .TTY
}


// ================================================
// 0xf260: WORD 'WF262' codep=0x224c parp=0xf262 params=0 returns=0
// ================================================

void WF262() // WF262
{
  Push(1);
  Push(0x5184); // '?FIRED-'
  Store_2(); // !_2
}


// ================================================
// 0xf26c: WORD 'WF26E' codep=0x224c parp=0xf26e
// ================================================

void WF26E() // WF26E
{
  Push(pp_WEAPON_dash_); // WEAPON-
  ON_2(); // ON_2
  WDD4C(); // WDD4C
  WF186(); // WF186
  Push(Read16(cc_WE2B6)); // WE2B6
  Push(0x65e1+WDE05.offset); // WDE05<IFIELD>
  WDE7B(); // WDE7B
  WE5BE(); // WE5BE
  Push(5);
  WF102(); // WF102
  WE0DE(); // WE0DE
  WF262(); // WF262
}


// ================================================
// 0xf288: WORD 'WF28A' codep=0x224c parp=0xf28a
// ================================================

void WF28A() // WF28A
{
  Push(pp_WEAPON_dash_); // WEAPON-
  ON_2(); // ON_2
  WDD4C(); // WDD4C
  WF186(); // WF186
  _2DUP(); // 2DUP
  Push(pp_WDE53); // WDE53
  _2_ex__2(); // 2!_2
  GetColor(LT_dash_BLUE);
  WE966(); // WE966
  Push(pp_WDE53); // WDE53
  _2_at_(); // 2@
  Push(Read16(cc_WE2B6)); // WE2B6
  Push(0);
  Push(0xc694); // 'DO-DA'
  MODULE(); // MODULE
  Push(1);
  WF102(); // WF102
  WE0DE(); // WE0DE
  WF262(); // WF262
}


// ================================================
// 0xf2b4: WORD 'WF2B6' codep=0x224c parp=0xf2b6
// ================================================

void WF2B6() // WF2B6
{
  WF12A(); // WF12A
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WF0AA(); // WF0AA
    if (Pop() != 0)
    {
      WF074(); // WF074
      WF1CA(); // WF1CA
      WF242(); // WF242
      if (Pop() != 0)
      {
        WDD4C(); // WDD4C
        Push(pp_WDE53); // WDE53
        _2_at_(); // 2@
        WDE5D(); // WDE5D
        Push(7);
        _st_(); // <
        WE19C(); // WE19C
        Push(Pop() & Pop()); // AND
        Push(Pop() & (Read16(pp_Is3)==0?1:0)); //  ?3 @ 0= AND
        if (Pop() != 0)
        {
          WF28A(); // WF28A
        } else
        {
          WE178(); // WE178
          if (Pop() != 0)
          {
            WF26E(); // WF26E
          } else
          {
            WE19C(); // WE19C
            if (Pop() != 0)
            {
              WF28A(); // WF28A
            } else
            {
              GetColor(WHITE);
              StoreCOLOR(); // !COLOR
              Push(0x668d); Push(0x0002);
              WDE37(); // WDE37
              DrawTTY(); // .TTY
            }
          }
        }
      } else
      {
        WF250(); // WF250
      }
    } else
    {
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      Push(0x66ae); Push(0x0002);
      WDE37(); // WDE37
      DrawTTY(); // .TTY
    }
    return;
  }
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(0x66cd); Push(0x0002);
  WDE37(); // WDE37
  DrawTTY(); // .TTY
}


// ================================================
// 0xf342: WORD 'WF344' codep=0x224c parp=0xf344
// ================================================

void WF344() // WF344
{
  Push(pp__i_CEX); // 'CEX
  GetEXECUTE(); // @EXECUTE
  COMBAT(); // COMBAT
}


// ================================================
// 0xf34c: WORD 'WF34E' codep=0x224c parp=0xf34e
// ================================================

void WF34E() // WF34E
{
  Push(0xc39d); // '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  Store_2(); // !_2
  Push(0xc3cf); // 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_2(); // !_2
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  Store_2(); // !_2
  Push(0xf344); // 'WF344'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
  Push(0xc1f8); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_2(); // !_2
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _2_ex__2(); // 2!_2
  Push(pp_IsHEAL); // ?HEAL
  ON_2(); // ON_2
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_2(); // !_2
  Push(0xc1c7); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_2(); // !_2
  Push(pp_IsHEAL); // ?HEAL
  ON_2(); // ON_2
  Push(0xe414); // 'WE414'
  Push(pp__i__dot_BACKG); // '.BACKG
  Store_2(); // !_2
  Push(pp_IsCOMBAT); // ?COMBAT
  ON_1(); // ON_1
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_1(); // ON_1
}


// ================================================
// 0xf3a6: WORD 'WF3A8' codep=0x224c parp=0xf3a8 params=0 returns=1
// ================================================

void WF3A8() // WF3A8
{
  Push(Read16(pp_LKEY)==0x000d?1:0); // LKEY @ 0x000d =
}


// ================================================
// 0xf3b4: WORD 'WF3B6' codep=0x224c parp=0xf3b6
// ================================================

void WF3B6() // WF3B6
{
  Push(0xc39d); // '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  Store_2(); // !_2
  Push(0xc3cf); // 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_2(); // !_2
  Push(0x3a48); // 'NOP'
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
  Push(0xae81); // 'CEX+WAX'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
  Push(0xc1f8); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_2(); // !_2
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_2(); // !_2
  Push(0xc1c7); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_2(); // !_2
  Push(0xc0e7); // '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  Store_2(); // !_2
  WF134(); // WF134
  Push(pp_WDE59); // WDE59
  _099(); // 099
  Push(pp_FORCEPT); // FORCEPT
  OFF_2(); // OFF_2
  Push(pp_IsCOMBAT); // ?COMBAT
  OFF_2(); // OFF_2
  ICLOSE(); // ICLOSE
  WEFDB(); // WEFDB
  if (Pop() == 0) return;
  Push(Read16(pp__i_UNNEST)); // 'UNNEST @
  MODULE(); // MODULE
}


// ================================================
// 0xf438: WORD 'WF43A' codep=0x224c parp=0xf43a
// ================================================

void WF43A() // WF43A
{
  _ro_XYSCAN(); // (XYSCAN case
  _2DUP(); // 2DUP
  KEY_gt_ORIENT(); // KEY>ORIENT case
  Push(Read16(0x65e1+WDE28.offset)&0xFF); // WDE28<IFIELD> C@
  OVER(); // OVER
  Push(0x65e1+WDE28.offset); // WDE28<IFIELD>
  C_ex__2(); // C!_2
  WE89A(); // WE89A
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    WE162(); // WE162
    Push(Pop() & (((Read16(0x65e1+WDDC5.offset)&0xFF) & 0x0080)==0?1:0)); //  WDDC5<IFIELD> C@ 0x0080 AND 0= AND
    if (Pop() != 0)
    {
      WE9A2(); // WE9A2
      Push(0xc7ce); // 'CSCALE'
      MODULE(); // MODULE
      Push(0x0fa0);
      Push(Read16(cc_MPS) * Read16(0x65e1+WDE23.offset)); // MPS WDE23<IFIELD> @ *
      _slash_(); // /
      WE152(); // WE152
    } else
    {
      Pop(); Pop(); // 2DROP
    }
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  IsTRIG(); // ?TRIG
  WF3A8(); // WF3A8
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WF2B6(); // WF2B6
    WE29A(); // WE29A
  }
  WE516(); // WE516
  WF3A8(); // WF3A8
  if (Pop() == 0) return;
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf4a6: WORD 'WF4A8' codep=0x224c parp=0xf4a8
// ================================================

void WF4A8() // WF4A8
{
  _gt_MAINVI(); // >MAINVI
  WE4F0(); // WE4F0
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  Push(0x66e3); Push(0x0002);
  WDE37(); // WDE37
  DrawTTY(); // .TTY
  Push(0x670c); Push(0x0002);
  WDE37(); // WDE37
  DrawTTY(); // .TTY
  WEF07(); // WEF07
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  WF34E(); // WF34E
  WE0DE(); // WE0DE
  Push(pp_FORCEPT); // FORCEPT
  ON_2(); // ON_2
  WF0EA(); // WF0EA
  WDD2E(); // WDD2E
  WE8EC(); // WE8EC
  _gt_1FONT(); // >1FONT
  Push(pp__n_AUX); // #AUX
  OFF_2(); // OFF_2
  WE29A(); // WE29A
  WE516(); // WE516
}


// ================================================
// 0xf4e6: WORD 'WAR' codep=0x224c parp=0xf4ee params=0 returns=0
// ================================================
// entry

void WAR() // WAR
{
  WECE4(); // WECE4
  if (Pop() != 0)
  {
    Push(0xf3b6); // 'WF3B6'
    Push(0xf43a); // 'WF43A'
    Push(0xf4a8); // 'WF4A8'
    DOTASKS(WF4A8, WF4A8, WF4A8);
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
  WE2FF(); // WE2FF
  Push(pp_WE2BE); // WE2BE
  _099(); // 099
  WE0DE(); // WE0DE
  Push2Words("NULL");
  Push(pp_NTIME); // NTIME
  _2_ex__2(); // 2!_2
  Push(pp_NLR); // NLR
  _099(); // 099
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  Push(0);
  WE152(); // WE152
  Push(0x0035);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(pp_WDD20); // WDD20
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

