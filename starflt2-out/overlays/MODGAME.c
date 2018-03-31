// ====== OVERLAY 'MODGAME' ======
// store offset = 0xdcf0
// overlay size   = 0x1870

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xdd06  codep:0x2214 parp:0xdd06 size:0x0002 C-string:'UNK_0xdd06'
//      UNK_0xdd0a  codep:0x2214 parp:0xdd0a size:0x0002 C-string:'UNK_0xdd0a'
//      UNK_0xdd0e  codep:0x2214 parp:0xdd0e size:0x0002 C-string:'UNK_0xdd0e'
//      UNK_0xdd12  codep:0x2214 parp:0xdd12 size:0x0002 C-string:'UNK_0xdd12'
//      UNK_0xdd16  codep:0x2214 parp:0xdd16 size:0x0002 C-string:'UNK_0xdd16'
//      UNK_0xdd1a  codep:0x2214 parp:0xdd1a size:0x0002 C-string:'UNK_0xdd1a'
//      UNK_0xdd1e  codep:0x2214 parp:0xdd1e size:0x0002 C-string:'UNK_0xdd1e'
//      UNK_0xdd22  codep:0x2214 parp:0xdd22 size:0x0002 C-string:'UNK_0xdd22'
//      UNK_0xdd26  codep:0x2214 parp:0xdd26 size:0x0002 C-string:'UNK_0xdd26'
//      UNK_0xdd2a  codep:0x2214 parp:0xdd2a size:0x0002 C-string:'UNK_0xdd2a'
//      UNK_0xdd2e  codep:0x1d29 parp:0xdd2e size:0x0002 C-string:'UNK_0xdd2e'
//      UNK_0xdd32  codep:0x1d29 parp:0xdd32 size:0x00e2 C-string:'UNK_0xdd32'
//      UNK_0xde16  codep:0x1d29 parp:0xde16 size:0x0002 C-string:'UNK_0xde16'
//      UNK_0xde1a  codep:0x1d29 parp:0xde1a size:0x0002 C-string:'UNK_0xde1a'
//      UNK_0xde1e  codep:0x224c parp:0xde1e size:0x000c C-string:'UNK_0xde1e'
//      UNK_0xde2c  codep:0x224c parp:0xde2c size:0x0010 C-string:'UNK_0xde2c'
//      UNK_0xde3e  codep:0x1d29 parp:0xde3e size:0x0002 C-string:'UNK_0xde3e'
//      UNK_0xde42  codep:0x1d29 parp:0xde42 size:0x0002 C-string:'UNK_0xde42'
//      UNK_0xde46  codep:0x1d29 parp:0xde46 size:0x0002 C-string:'UNK_0xde46'
//      UNK_0xde4a  codep:0x1d29 parp:0xde4a size:0x0002 C-string:'UNK_0xde4a'
//      UNK_0xde4e  codep:0x1d29 parp:0xde4e size:0x0002 C-string:'UNK_0xde4e'
//      UNK_0xde52  codep:0x1d29 parp:0xde52 size:0x0002 C-string:'UNK_0xde52'
//      UNK_0xde56  codep:0x1d29 parp:0xde56 size:0x0002 C-string:'UNK_0xde56'
//      UNK_0xde5a  codep:0x1d29 parp:0xde5a size:0x0002 C-string:'UNK_0xde5a'
//      UNK_0xde5e  codep:0x1d29 parp:0xde5e size:0x0002 C-string:'UNK_0xde5e'
//      UNK_0xde62  codep:0x1d29 parp:0xde62 size:0x0006 C-string:'UNK_0xde62'
//      UNK_0xde6a  codep:0x1d29 parp:0xde6a size:0x0002 C-string:'UNK_0xde6a'
//      UNK_0xde6e  codep:0x1d29 parp:0xde6e size:0x0002 C-string:'UNK_0xde6e'
//      UNK_0xde72  codep:0x1d29 parp:0xde72 size:0x0002 C-string:'UNK_0xde72'
//      UNK_0xde76  codep:0x1d29 parp:0xde76 size:0x0002 C-string:'UNK_0xde76'
//      UNK_0xde7a  codep:0x1d29 parp:0xde7a size:0x0002 C-string:'UNK_0xde7a'
//      UNK_0xde7e  codep:0x224c parp:0xde7e size:0x007a C-string:'UNK_0xde7e'
//      UNK_0xdefa  codep:0x2214 parp:0xdefa size:0x0002 C-string:'UNK_0xdefa'
//            HOST  codep:0x53f7 parp:0xdf05 size:0x001e C-string:'HOST'
//      UNK_0xdf25  codep:0x2214 parp:0xdf25 size:0x0002 C-string:'UNK_0xdf25'
//         VECTORS  codep:0x53f7 parp:0xdf33 size:0x0024 C-string:'VECTORS'
//      UNK_0xdf59  codep:0x224c parp:0xdf59 size:0x002c C-string:'UNK_0xdf59'
//      UNK_0xdf87  codep:0x224c parp:0xdf87 size:0x002c C-string:'UNK_0xdf87'
//      UNK_0xdfb5  codep:0x1d29 parp:0xdfb5 size:0x0004 C-string:'UNK_0xdfb5'
//      UNK_0xdfbb  codep:0x224c parp:0xdfbb size:0x0022 C-string:'UNK_0xdfbb'
//      UNK_0xdfdf  codep:0x224c parp:0xdfdf size:0x0022 C-string:'UNK_0xdfdf'
//      UNK_0xe003  codep:0x224c parp:0xe003 size:0x0022 C-string:'UNK_0xe003'
//      UNK_0xe027  codep:0x1d29 parp:0xe027 size:0x0002 C-string:'UNK_0xe027'
//      UNK_0xe02b  codep:0x1d29 parp:0xe02b size:0x0002 C-string:'UNK_0xe02b'
//      UNK_0xe02f  codep:0x224c parp:0xe02f size:0x000a C-string:'UNK_0xe02f'
//      UNK_0xe03b  codep:0x224c parp:0xe03b size:0x0016 C-string:'UNK_0xe03b'
//           STARE  codep:0x2214 parp:0xe05b size:0x000d C-string:'STARE'
//           STARV  codep:0x2214 parp:0xe072 size:0x000d C-string:'STARV'
//      UNK_0xe081  codep:0x224c parp:0xe081 size:0x005e C-string:'UNK_0xe081'
//      UNK_0xe0e1  codep:0x224c parp:0xe0e1 size:0x0044 C-string:'UNK_0xe0e1'
//      UNK_0xe127  codep:0x224c parp:0xe127 size:0x001a C-string:'UNK_0xe127'
//      UNK_0xe143  codep:0x224c parp:0xe143 size:0x001d C-string:'UNK_0xe143'
//      UNK_0xe162  codep:0x224c parp:0xe162 size:0x0018 C-string:'UNK_0xe162'
//      UNK_0xe17c  codep:0x224c parp:0xe17c size:0x001b C-string:'UNK_0xe17c'
//      UNK_0xe199  codep:0x224c parp:0xe199 size:0x000a C-string:'UNK_0xe199'
//      UNK_0xe1a5  codep:0x224c parp:0xe1a5 size:0x0008 C-string:'UNK_0xe1a5'
//      UNK_0xe1af  codep:0x224c parp:0xe1af size:0x0094 C-string:'UNK_0xe1af'
//      UNK_0xe245  codep:0x224c parp:0xe245 size:0x000a C-string:'UNK_0xe245'
//      UNK_0xe251  codep:0x224c parp:0xe251 size:0x0016 C-string:'UNK_0xe251'
//      UNK_0xe269  codep:0x224c parp:0xe269 size:0x001c C-string:'UNK_0xe269'
//      UNK_0xe287  codep:0x224c parp:0xe287 size:0x0016 C-string:'UNK_0xe287'
//      UNK_0xe29f  codep:0x224c parp:0xe29f size:0x0040 C-string:'UNK_0xe29f'
//      UNK_0xe2e1  codep:0x224c parp:0xe2e1 size:0x0028 C-string:'UNK_0xe2e1'
//      UNK_0xe30b  codep:0x224c parp:0xe30b size:0x0042 C-string:'UNK_0xe30b'
//      UNK_0xe34f  codep:0x224c parp:0xe34f size:0x000e C-string:'UNK_0xe34f'
//      UNK_0xe35f  codep:0x224c parp:0xe35f size:0x006c C-string:'UNK_0xe35f'
//      UNK_0xe3cd  codep:0x224c parp:0xe3cd size:0x000a C-string:'UNK_0xe3cd'
//      UNK_0xe3d9  codep:0x224c parp:0xe3d9 size:0x0034 C-string:'UNK_0xe3d9'
//      UNK_0xe40f  codep:0x224c parp:0xe40f size:0x0020 C-string:'UNK_0xe40f'
//      UNK_0xe431  codep:0x224c parp:0xe431 size:0x001e C-string:'UNK_0xe431'
//      UNK_0xe451  codep:0x224c parp:0xe451 size:0x000c C-string:'UNK_0xe451'
//      UNK_0xe45f  codep:0x224c parp:0xe45f size:0x00de C-string:'UNK_0xe45f'
//      UNK_0xe53f  codep:0x224c parp:0xe53f size:0x0030 C-string:'UNK_0xe53f'
//      UNK_0xe571  codep:0x224c parp:0xe571 size:0x0084 C-string:'UNK_0xe571'
//      UNK_0xe5f7  codep:0x224c parp:0xe5f7 size:0x0013 C-string:'UNK_0xe5f7'
//      UNK_0xe60c  codep:0x224c parp:0xe60c size:0x0044 C-string:'UNK_0xe60c'
//      UNK_0xe652  codep:0x224c parp:0xe652 size:0x0020 C-string:'UNK_0xe652'
//      UNK_0xe674  codep:0x224c parp:0xe674 size:0x0006 C-string:'UNK_0xe674'
//      UNK_0xe67c  codep:0x224c parp:0xe67c size:0x0006 C-string:'UNK_0xe67c'
//      UNK_0xe684  codep:0x224c parp:0xe684 size:0x0008 C-string:'UNK_0xe684'
//      UNK_0xe68e  codep:0x224c parp:0xe68e size:0x0014 C-string:'UNK_0xe68e'
//      UNK_0xe6a4  codep:0x224c parp:0xe6a4 size:0x0016 C-string:'UNK_0xe6a4'
//      UNK_0xe6bc  codep:0x224c parp:0xe6bc size:0x000c C-string:'UNK_0xe6bc'
//      UNK_0xe6ca  codep:0x224c parp:0xe6ca size:0x00a4 C-string:'UNK_0xe6ca'
//      UNK_0xe770  codep:0x224c parp:0xe770 size:0x004f C-string:'UNK_0xe770'
//      UNK_0xe7c1  codep:0x224c parp:0xe7c1 size:0x0062 C-string:'UNK_0xe7c1'
//      UNK_0xe825  codep:0x224c parp:0xe825 size:0x0028 C-string:'UNK_0xe825'
//      UNK_0xe84f  codep:0x224c parp:0xe84f size:0x003c C-string:'UNK_0xe84f'
//      UNK_0xe88d  codep:0x224c parp:0xe88d size:0x0034 C-string:'UNK_0xe88d'
//      UNK_0xe8c3  codep:0x224c parp:0xe8c3 size:0x0047 C-string:'UNK_0xe8c3'
//      UNK_0xe90c  codep:0x224c parp:0xe90c size:0x0014 C-string:'UNK_0xe90c'
//      UNK_0xe922  codep:0x224c parp:0xe922 size:0x002d C-string:'UNK_0xe922'
//      UNK_0xe951  codep:0x224c parp:0xe951 size:0x0008 C-string:'UNK_0xe951'
//      UNK_0xe95b  codep:0x224c parp:0xe95b size:0x0078 C-string:'UNK_0xe95b'
//      UNK_0xe9d5  codep:0x224c parp:0xe9d5 size:0x001e C-string:'UNK_0xe9d5'
//           PRESE  codep:0x224c parp:0xe9fd size:0x0018 C-string:'PRESE'
//      UNK_0xea17  codep:0x224c parp:0xea17 size:0x0006 C-string:'UNK_0xea17'
//      UNK_0xea1f  codep:0x224c parp:0xea1f size:0x0006 C-string:'UNK_0xea1f'
//      UNK_0xea27  codep:0x224c parp:0xea27 size:0x0008 C-string:'UNK_0xea27'
//      UNK_0xea31  codep:0x224c parp:0xea31 size:0x000c C-string:'UNK_0xea31'
//      UNK_0xea3f  codep:0x224c parp:0xea3f size:0x001a C-string:'UNK_0xea3f'
//      UNK_0xea5b  codep:0x224c parp:0xea5b size:0x0012 C-string:'UNK_0xea5b'
//      UNK_0xea6f  codep:0x224c parp:0xea6f size:0x0008 C-string:'UNK_0xea6f'
//      UNK_0xea79  codep:0x224c parp:0xea79 size:0x001c C-string:'UNK_0xea79'
//      UNK_0xea97  codep:0x224c parp:0xea97 size:0x0014 C-string:'UNK_0xea97'
//      UNK_0xeaad  codep:0x224c parp:0xeaad size:0x0028 C-string:'UNK_0xeaad'
//      UNK_0xead7  codep:0x224c parp:0xead7 size:0x0034 C-string:'UNK_0xead7'
//      UNK_0xeb0d  codep:0x224c parp:0xeb0d size:0x003c C-string:'UNK_0xeb0d'
//      UNK_0xeb4b  codep:0x224c parp:0xeb4b size:0x0025 C-string:'UNK_0xeb4b'
//      UNK_0xeb72  codep:0x224c parp:0xeb72 size:0x002f C-string:'UNK_0xeb72'
//      UNK_0xeba3  codep:0x224c parp:0xeba3 size:0x001e C-string:'UNK_0xeba3'
//           PRMSA  codep:0xebcb parp:0xebcb size:0x001d C-string:'PRMSA'
//           PRMLO  codep:0xebf2 parp:0xebf2 size:0x002d C-string:'PRMLO'
//           RETSA  codep:0xec29 parp:0xec29 size:0x001d C-string:'RETSA'
//           RETJM  codep:0xec50 parp:0xec50 size:0x0028 C-string:'RETJM'
//      UNK_0xec7a  codep:0x224c parp:0xec7a size:0x0082 C-string:'UNK_0xec7a'
//      UNK_0xecfe  codep:0x224c parp:0xecfe size:0x0006 C-string:'UNK_0xecfe'
//      UNK_0xed06  codep:0x224c parp:0xed06 size:0x0006 C-string:'UNK_0xed06'
//      UNK_0xed0e  codep:0x224c parp:0xed0e size:0x0006 C-string:'UNK_0xed0e'
//      UNK_0xed16  codep:0x224c parp:0xed16 size:0x0014 C-string:'UNK_0xed16'
//      UNK_0xed2c  codep:0x224c parp:0xed2c size:0x000c C-string:'UNK_0xed2c'
//      UNK_0xed3a  codep:0x224c parp:0xed3a size:0x000c C-string:'UNK_0xed3a'
//      UNK_0xed48  codep:0x224c parp:0xed48 size:0x0014 C-string:'UNK_0xed48'
//      UNK_0xed5e  codep:0x224c parp:0xed5e size:0x0014 C-string:'UNK_0xed5e'
//      UNK_0xed74  codep:0x224c parp:0xed74 size:0x0006 C-string:'UNK_0xed74'
//      UNK_0xed7c  codep:0x224c parp:0xed7c size:0x001e C-string:'UNK_0xed7c'
//      UNK_0xed9c  codep:0x224c parp:0xed9c size:0x000a C-string:'UNK_0xed9c'
//      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x000c C-string:'UNK_0xeda8'
//      UNK_0xedb6  codep:0x224c parp:0xedb6 size:0x000c C-string:'UNK_0xedb6'
//      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x0024 C-string:'UNK_0xedc4'
//      UNK_0xedea  codep:0x224c parp:0xedea size:0x000a C-string:'UNK_0xedea'
//      UNK_0xedf6  codep:0x224c parp:0xedf6 size:0x000e C-string:'UNK_0xedf6'
//      UNK_0xee06  codep:0x224c parp:0xee06 size:0x000a C-string:'UNK_0xee06'
//      UNK_0xee12  codep:0x224c parp:0xee12 size:0x0008 C-string:'UNK_0xee12'
//      UNK_0xee1c  codep:0x224c parp:0xee1c size:0x0022 C-string:'UNK_0xee1c'
//      UNK_0xee40  codep:0x224c parp:0xee40 size:0x000e C-string:'UNK_0xee40'
//      UNK_0xee50  codep:0x224c parp:0xee50 size:0x0014 C-string:'UNK_0xee50'
//      UNK_0xee66  codep:0x224c parp:0xee66 size:0x001a C-string:'UNK_0xee66'
//      UNK_0xee82  codep:0x224c parp:0xee82 size:0x002e C-string:'UNK_0xee82'
//           LOAD.  codep:0x224c parp:0xeeba size:0x0026 C-string:'LOAD_dot_'
//      UNK_0xeee2  codep:0x224c parp:0xeee2 size:0x0022 C-string:'UNK_0xeee2'
//      UNK_0xef06  codep:0x224c parp:0xef06 size:0x0016 C-string:'UNK_0xef06'
//      UNK_0xef1e  codep:0x224c parp:0xef1e size:0x001c C-string:'UNK_0xef1e'
//      UNK_0xef3c  codep:0x224c parp:0xef3c size:0x0016 C-string:'UNK_0xef3c'
//      UNK_0xef54  codep:0x224c parp:0xef54 size:0x0032 C-string:'UNK_0xef54'
//      UNK_0xef88  codep:0x224c parp:0xef88 size:0x0012 C-string:'UNK_0xef88'
//      UNK_0xef9c  codep:0x224c parp:0xef9c size:0x003f C-string:'UNK_0xef9c'
//      UNK_0xefdd  codep:0x224c parp:0xefdd size:0x003a C-string:'UNK_0xefdd'
//      UNK_0xf019  codep:0x224c parp:0xf019 size:0x0121 C-string:'UNK_0xf019'
//      UNK_0xf13c  codep:0x224c parp:0xf13c size:0x002a C-string:'UNK_0xf13c'
//      UNK_0xf168  codep:0x224c parp:0xf168 size:0x002a C-string:'UNK_0xf168'
//      UNK_0xf194  codep:0x224c parp:0xf194 size:0x002f C-string:'UNK_0xf194'
//      UNK_0xf1c5  codep:0x224c parp:0xf1c5 size:0x002c C-string:'UNK_0xf1c5'
//           KEY>O  codep:0x4b3b parp:0xf1fb size:0x0014 C-string:'KEY_gt_O'
//           OPTIO  codep:0x1d29 parp:0xf219 size:0x0002 C-string:'OPTIO'
//      UNK_0xf21d  codep:0x224c parp:0xf21d size:0x001a C-string:'UNK_0xf21d'
//           NEW.G  codep:0x224c parp:0xf241 size:0x0016 C-string:'NEW_dot_G'
//      UNK_0xf259  codep:0x224c parp:0xf259 size:0x00fd C-string:'UNK_0xf259'
//      UNK_0xf358  codep:0x224c parp:0xf358 size:0x0016 C-string:'UNK_0xf358'
//      UNK_0xf370  codep:0x224c parp:0xf370 size:0x001c C-string:'UNK_0xf370'
//      UNK_0xf38e  codep:0x224c parp:0xf38e size:0x0006 C-string:'UNK_0xf38e'
//      UNK_0xf396  codep:0x224c parp:0xf396 size:0x001c C-string:'UNK_0xf396'
//         GAMEO_2  codep:0x4b3b parp:0xf3bc size:0x0014 C-string:'GAMEO_2'
//      UNK_0xf3d2  codep:0x224c parp:0xf3d2 size:0x000e C-string:'UNK_0xf3d2'
//      UNK_0xf3e2  codep:0x224c parp:0xf3e2 size:0x0006 C-string:'UNK_0xf3e2'
//      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x0016 C-string:'UNK_0xf3ea'
//      UNK_0xf402  codep:0x224c parp:0xf402 size:0x0025 C-string:'UNK_0xf402'
//      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0020 C-string:'UNK_0xf429'
//            ERR!  codep:0x224c parp:0xf452 size:0x002c C-string:'ERR_ex_'
//         GAMEO_1  codep:0x224c parp:0xf488 size:0x0030 C-string:'GAMEO_1'
//            BOSS  codep:0x224c parp:0xf4c1 size:0x003a C-string:'BOSS'
//           START  codep:0x224c parp:0xf505 size:0x0000 C-string:'START'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_CX; // CX
extern const unsigned short int cc_DX; // DX
extern const unsigned short int cc_DS; // DS
extern const unsigned short int cc__16K; // 16K
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp__n_CACHE; // #CACHE
extern const unsigned short int pp_DTA_1; // DTA_1
extern const unsigned short int pp_SYSK; // SYSK
extern const unsigned short int pp_OVA; // OVA
extern const unsigned short int pp_ASKMOUN; // ASKMOUN
extern const unsigned short int pp__i_BYE; // 'BYE
extern const unsigned short int pp_BMAP; // BMAP
extern const unsigned short int pp_FONTSEG; // FONTSEG
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_HUB; // HUB
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp_TIMESTA; // TIMESTA
extern const unsigned short int pp_HBUF_dash_SE; // HBUF-SE
extern const unsigned short int pp_DBUF_dash_SE; // DBUF-SE
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_BUF_dash_SEG; // BUF-SEG
extern const unsigned short int pp_MONITOR; // MONITOR
extern const unsigned short int pp_ICON_h_; // ICON^
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_LFSEG; // LFSEG
extern const unsigned short int pp_LSYSEG; // LSYSEG
extern const unsigned short int pp_MSYSEG; // MSYSEG
extern const unsigned short int pp_SSYSEG; // SSYSEG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__bo__n_CACHE; // [#CACHE
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp__3DSEG; // 3DSEG
extern const unsigned short int pp_DERROR; // DERROR
extern const unsigned short int pp__i_VERSIO; // 'VERSIO
extern const unsigned short int user_TIB; // TIB
extern const unsigned short int user_ROW; // ROW
extern const unsigned short int user_COL; // COL
extern Color BLACK; // BLACK
extern Color WHITE; // WHITE
void _ro_RESTORE_rc_(); // (RESTORE)
void AUTO_dash_CACHE(); // AUTO-CACHE
void _ro_SETUP_rc_(); // (SETUP)
void M_star__slash_(); // M*/
void MAX(); // MAX
void UMIN(); // UMIN
void PAD(); // PAD
void QUIT(); // QUIT
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void MS(); // MS
void UPDATE(); // UPDATE
void UNMOUNT(); // UNMOUNT
void NODRIVES(); // NODRIVES
void EMITS(); // EMITS
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void NOP(); // NOP
void IsUNRAVEL(); // ?UNRAVEL
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_TIB(); // >TIB
void DRV(); // DRV
void NAM(); // NAM
void TYP(); // TYP
void RECSIZE(); // RECSIZE
void RELREC(); // RELREC
void SYSTEM(); // SYSTEM
void SYSUTIL(); // SYSUTIL
void DOSCALL(); // DOSCALL
void SETFCB(); // SETFCB
void INIT(); // INIT
void FCBCALL(); // FCBCALL
void OPEN(); // OPEN
void CLOSE(); // CLOSE
void READNEX(); // READNEX
void WRITENE(); // WRITENE
void DOS_dash_DTA(); // DOS-DTA
void READ_dash_RA(); // READ-RA
void WRITE_dash_R(); // WRITE-R
void MAKE_st_NA(); // MAKE<NA
void USING(); // USING
void _ro_LDS_rc_(); // (LDS)
void KEY_2(); // KEY_2
void BMOFF(); // BMOFF
void BMSEG(); // BMSEG
void BMPAL(); // BMPAL
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _2_ex__2(); // 2!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void BLOCK_2(); // BLOCK_2
void MOUNTA(); // MOUNTA
void MOUNTB(); // MOUNTB
void FILE_st_(); // FILE<
void SET_dash_CUR(); // SET-CUR
void SAVE_dash_BU(); // SAVE-BU
void FLUSH_2(); // FLUSH_2
void PAD_v_16(); // PAD|16
void PAD_gt_SEG(); // PAD>SEG
void GetMODE(); // @MODE
void IsVGA(); // ?VGA
void StoreCOLOR(); // !COLOR
void SETDBUF(); // SETDBUF
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void LDPAL(); // LDPAL
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void DrawRAW(); // .RAW
void _gt_ALPHA(); // >ALPHA
void _gt_A(); // >A
void _gt_LORES(); // >LORES
void H_gt_D(); // H>D
void SCR_dash_RES(); // SCR-RES
void BYE_2(); // BYE_2
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WI(); // POLY-WI
void BEEPON_2(); // BEEPON_2
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void StorePAL(); // !PAL
void DOS(); // DOS
void PORTM(); // PORTM
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _0_gt_(); // 0>
void U_st_(); // U<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void L_ex_(); // L!
void LC_ex_(); // LC!
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void GRCALL(); // GRCALL
void L_at_PIXEL(); // L@PIXEL
void PRMSA(); // PRMSA
void PRMLO(); // PRMLO
void RETSA(); // RETSA
void RETJM(); // RETJM


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xdd2e = 0xdd2e; // UNK_0xdd2e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdd32 = 0xdd32; // UNK_0xdd32 size: 226
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xc7, 0x3f, 0x52, 0x45, 0x43, 0x41, 0x4c, 0xcc, 0xac, 0x3c, 0x32, 0x35, 0x34, 0xdd, 0xc8, 0x41, 0x52, 0x54, 0x2d, 0x54, 0x45, 0x58, 0xd4, 0xac, 0x3c, 0xa5, 0xe4, 0xed, 0xdc, 0xc9, 0x41, 0x52, 0x54, 0x2d, 0x41, 0x4e, 0x4c, 0x59, 0xda, 0xac, 0x3c, 0x00, 0x00, 0xcd, 0x3f, 0x45, 0x4e, 0x43, 0x35, 0x36, 0x32, 0x35, 0x35, 0x52, 0x2d, 0x4f, 0xce, 0xac, 0x3c, 0x54, 0xe3, 0x66, 0xdd, 0xc8, 0x45, 0x4e, 0x43, 0x2d, 0x50, 0x41, 0x53, 0xd4, 0xac, 0x3c, 0x59, 0xe3, 0x00, 0x00, 0xcb, 0x45, 0x4e, 0x43, 0x2d, 0x50, 0x52, 0x45, 0x53, 0x45, 0x4e, 0xd4, 0xac, 0x3c, 0x5e, 0xe3, 0x7a, 0xdd, 0xca, 0x43, 0x41, 0x4e, 0x2d, 0x53, 0x57, 0x49, 0x54, 0x43, 0xc8, 0xac, 0x3c, 0x63, 0xe3, 0x89, 0xdd, 0xc6, 0x4b, 0x45, 0x59, 0x49, 0x4e, 0xc3, 0xac, 0x3c, 0x68, 0xe3, 0xac, 0xdd, 0xc5, 0x53, 0x43, 0x41, 0x4e, 0xd2, 0xac, 0x3c, 0x6c, 0xe3, 0xb9, 0xdd, 0xc5, 0x44, 0x58, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x70, 0xe3, 0xc5, 0xdd, 0xc5, 0x44, 0x59, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x74, 0xe3, 0x9b, 0xdd, 0xc4, 0x58, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x78, 0xe3, 0xdd, 0xdd, 0xc4, 0x59, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x7c, 0xe3, 0xe8, 0xdd, 0xc4, 0x58, 0x53, 0x48, 0xd0, 0xac, 0x3c, 0x80, 0xe3, 0xf3, 0xdd, 0xc4, 0x59, 0x53, 0x48, 0xd0, 0xac, 0x3c, 0x84, 0xe3, 0xfe, 0xdd, 0xc8, 0x44, 0x49, 0x53, 0x54, 0x41, 0x4e, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xde16 = 0xde16; // UNK_0xde16 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde1a = 0xde1a; // UNK_0xde1a size: 2
// {0x37, 0x6f}

const unsigned short int pp_UNK_0xde3e = 0xde3e; // UNK_0xde3e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde42 = 0xde42; // UNK_0xde42 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde46 = 0xde46; // UNK_0xde46 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde4a = 0xde4a; // UNK_0xde4a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde4e = 0xde4e; // UNK_0xde4e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde52 = 0xde52; // UNK_0xde52 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde56 = 0xde56; // UNK_0xde56 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde5a = 0xde5a; // UNK_0xde5a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde5e = 0xde5e; // UNK_0xde5e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde62 = 0xde62; // UNK_0xde62 size: 6
// {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xde6a = 0xde6a; // UNK_0xde6a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde6e = 0xde6e; // UNK_0xde6e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde72 = 0xde72; // UNK_0xde72 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde76 = 0xde76; // UNK_0xde76 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde7a = 0xde7a; // UNK_0xde7a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdfb5 = 0xdfb5; // UNK_0xdfb5 size: 4
// {0x3a, 0x20, 0x05, 0x41}

const unsigned short int pp_UNK_0xe027 = 0xe027; // UNK_0xe027 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe02b = 0xe02b; // UNK_0xe02b size: 2
// {0x3a, 0x20}

const unsigned short int pp_OPTIO = 0xf219; // OPTIO size: 2
// {0x20, 0x20}


const unsigned short int cc_UNK_0xdd06 = 0xdd06; // UNK_0xdd06
const unsigned short int cc_UNK_0xdd0a = 0xdd0a; // UNK_0xdd0a
const unsigned short int cc_UNK_0xdd0e = 0xdd0e; // UNK_0xdd0e
const unsigned short int cc_UNK_0xdd12 = 0xdd12; // UNK_0xdd12
const unsigned short int cc_UNK_0xdd16 = 0xdd16; // UNK_0xdd16
const unsigned short int cc_UNK_0xdd1a = 0xdd1a; // UNK_0xdd1a
const unsigned short int cc_UNK_0xdd1e = 0xdd1e; // UNK_0xdd1e
const unsigned short int cc_UNK_0xdd22 = 0xdd22; // UNK_0xdd22
const unsigned short int cc_UNK_0xdd26 = 0xdd26; // UNK_0xdd26
const unsigned short int cc_UNK_0xdd2a = 0xdd2a; // UNK_0xdd2a
const unsigned short int cc_UNK_0xdefa = 0xdefa; // UNK_0xdefa
const unsigned short int cc_UNK_0xdf25 = 0xdf25; // UNK_0xdf25
const unsigned short int cc_STARE = 0xe05b; // STARE
const unsigned short int cc_STARV = 0xe072; // STARV


// 0xdd02: db 0x85 0x01 '  '

// ================================================
// 0xdd04: WORD 'UNK_0xdd06' codep=0x2214 parp=0xdd06
// ================================================
// orphan
// 0xdd06: dw 0x004b

// ================================================
// 0xdd08: WORD 'UNK_0xdd0a' codep=0x2214 parp=0xdd0a
// ================================================
// 0xdd0a: dw 0x004b

// ================================================
// 0xdd0c: WORD 'UNK_0xdd0e' codep=0x2214 parp=0xdd0e
// ================================================
// 0xdd0e: dw 0x007e

// ================================================
// 0xdd10: WORD 'UNK_0xdd12' codep=0x2214 parp=0xdd12
// ================================================
// 0xdd12: dw 0x00ae

// ================================================
// 0xdd14: WORD 'UNK_0xdd16' codep=0x2214 parp=0xdd16
// ================================================
// 0xdd16: dw 0x00af

// ================================================
// 0xdd18: WORD 'UNK_0xdd1a' codep=0x2214 parp=0xdd1a
// ================================================
// 0xdd1a: dw 0x00b0

// ================================================
// 0xdd1c: WORD 'UNK_0xdd1e' codep=0x2214 parp=0xdd1e
// ================================================
// orphan
// 0xdd1e: dw 0x0004

// ================================================
// 0xdd20: WORD 'UNK_0xdd22' codep=0x2214 parp=0xdd22
// ================================================
// orphan
// 0xdd22: dw 0x0000

// ================================================
// 0xdd24: WORD 'UNK_0xdd26' codep=0x2214 parp=0xdd26
// ================================================
// 0xdd26: dw 0x0400

// ================================================
// 0xdd28: WORD 'UNK_0xdd2a' codep=0x2214 parp=0xdd2a
// ================================================
// 0xdd2a: dw 0x3a48

// ================================================
// 0xdd2c: WORD 'UNK_0xdd2e' codep=0x1d29 parp=0xdd2e
// ================================================
// 0xdd2e: db 0x3a 0x20 ': '

// ================================================
// 0xdd30: WORD 'UNK_0xdd32' codep=0x1d29 parp=0xdd32
// ================================================
// 0xdd32: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xc7 0x3f 0x52 0x45 0x43 0x41 0x4c 0xcc 0xac 0x3c 0x32 0x35 0x34 0xdd 0xc8 0x41 0x52 0x54 0x2d 0x54 0x45 0x58 0xd4 0xac 0x3c 0xa5 0xe4 0xed 0xdc 0xc9 0x41 0x52 0x54 0x2d 0x41 0x4e 0x4c 0x59 0xda 0xac 0x3c 0x00 0x00 0xcd 0x3f 0x45 0x4e 0x43 0x35 0x36 0x32 0x35 0x35 0x52 0x2d 0x4f 0xce 0xac 0x3c 0x54 0xe3 0x66 0xdd 0xc8 0x45 0x4e 0x43 0x2d 0x50 0x41 0x53 0xd4 0xac 0x3c 0x59 0xe3 0x00 0x00 0xcb 0x45 0x4e 0x43 0x2d 0x50 0x52 0x45 0x53 0x45 0x4e 0xd4 0xac 0x3c 0x5e 0xe3 0x7a 0xdd 0xca 0x43 0x41 0x4e 0x2d 0x53 0x57 0x49 0x54 0x43 0xc8 0xac 0x3c 0x63 0xe3 0x89 0xdd 0xc6 0x4b 0x45 0x59 0x49 0x4e 0xc3 0xac 0x3c 0x68 0xe3 0xac 0xdd 0xc5 0x53 0x43 0x41 0x4e 0xd2 0xac 0x3c 0x6c 0xe3 0xb9 0xdd 0xc5 0x44 0x58 0x43 0x52 0xd3 0xac 0x3c 0x70 0xe3 0xc5 0xdd 0xc5 0x44 0x59 0x43 0x52 0xd3 0xac 0x3c 0x74 0xe3 0x9b 0xdd 0xc4 0x58 0x43 0x52 0xd3 0xac 0x3c 0x78 0xe3 0xdd 0xdd 0xc4 0x59 0x43 0x52 0xd3 0xac 0x3c 0x7c 0xe3 0xe8 0xdd 0xc4 0x58 0x53 0x48 0xd0 0xac 0x3c 0x80 0xe3 0xf3 0xdd 0xc4 0x59 0x53 0x48 0xd0 0xac 0x3c 0x84 0xe3 0xfe 0xdd 0xc8 0x44 0x49 0x53 0x54 0x41 0x4e 0x29 0x1d 0x3a 0x20 ':  ALLOT  ?RECAL  <254  ART-TEX  <     ART-ANLY  <   ?ENC56255R-O  <T f  ENC-PAS  <Y    ENC-PRESEN  <^ z  CAN-SWITC  <c    KEYIN  <h    SCAN  <l    DXCR  <p    DYCR  <t    XCR  <x    YCR  <|    XSH  <     YSH  <     DISTAN) : '

// ================================================
// 0xde14: WORD 'UNK_0xde16' codep=0x1d29 parp=0xde16
// ================================================
// 0xde16: db 0x3a 0x20 ': '

// ================================================
// 0xde18: WORD 'UNK_0xde1a' codep=0x1d29 parp=0xde1a
// ================================================
// 0xde1a: db 0x37 0x6f '7o'

// ================================================
// 0xde1c: WORD 'UNK_0xde1e' codep=0x224c parp=0xde1e
// ================================================

void UNK_0xde1e() // UNK_0xde1e
{
  Push(Read16(cc_DX)); // DX
  Store_2(); // !_2
  Push(0x001a);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0xde2a: WORD 'UNK_0xde2c' codep=0x224c parp=0xde2c
// ================================================

void UNK_0xde2c() // UNK_0xde2c
{
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(0x008f);
  Func6("FILE-#R");
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xde3c: WORD 'UNK_0xde3e' codep=0x1d29 parp=0xde3e
// ================================================
// 0xde3e: db 0x3a 0x20 ': '

// ================================================
// 0xde40: WORD 'UNK_0xde42' codep=0x1d29 parp=0xde42
// ================================================
// 0xde42: db 0x3a 0x20 ': '

// ================================================
// 0xde44: WORD 'UNK_0xde46' codep=0x1d29 parp=0xde46
// ================================================
// 0xde46: db 0x3a 0x20 ': '

// ================================================
// 0xde48: WORD 'UNK_0xde4a' codep=0x1d29 parp=0xde4a
// ================================================
// 0xde4a: db 0x3a 0x20 ': '

// ================================================
// 0xde4c: WORD 'UNK_0xde4e' codep=0x1d29 parp=0xde4e
// ================================================
// 0xde4e: db 0x3a 0x20 ': '

// ================================================
// 0xde50: WORD 'UNK_0xde52' codep=0x1d29 parp=0xde52
// ================================================
// 0xde52: db 0x3a 0x20 ': '

// ================================================
// 0xde54: WORD 'UNK_0xde56' codep=0x1d29 parp=0xde56
// ================================================
// 0xde56: db 0x3a 0x20 ': '

// ================================================
// 0xde58: WORD 'UNK_0xde5a' codep=0x1d29 parp=0xde5a
// ================================================
// 0xde5a: db 0x3a 0x20 ': '

// ================================================
// 0xde5c: WORD 'UNK_0xde5e' codep=0x1d29 parp=0xde5e
// ================================================
// 0xde5e: db 0x3a 0x20 ': '

// ================================================
// 0xde60: WORD 'UNK_0xde62' codep=0x1d29 parp=0xde62
// ================================================
// 0xde62: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : '

// ================================================
// 0xde68: WORD 'UNK_0xde6a' codep=0x1d29 parp=0xde6a
// ================================================
// 0xde6a: db 0x3a 0x20 ': '

// ================================================
// 0xde6c: WORD 'UNK_0xde6e' codep=0x1d29 parp=0xde6e
// ================================================
// 0xde6e: db 0x3a 0x20 ': '

// ================================================
// 0xde70: WORD 'UNK_0xde72' codep=0x1d29 parp=0xde72
// ================================================
// 0xde72: db 0x3a 0x20 ': '

// ================================================
// 0xde74: WORD 'UNK_0xde76' codep=0x1d29 parp=0xde76
// ================================================
// 0xde76: db 0x3a 0x20 ': '

// ================================================
// 0xde78: WORD 'UNK_0xde7a' codep=0x1d29 parp=0xde7a
// ================================================
// 0xde7a: db 0x3a 0x20 ': '

// ================================================
// 0xde7c: WORD 'UNK_0xde7e' codep=0x224c parp=0xde7e
// ================================================

void UNK_0xde7e() // UNK_0xde7e
{
  unsigned short int i, imax, j, jmax;
  USING(); // USING
  DOS(); // DOS
  Push(Read16(regsp)); // DUP
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  SYSUTIL(); // SYSUTIL
  MAKE_st_NA(); // MAKE<NA
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  Push(pp_UNK_0xde7a); // UNK_0xde7a
  _099(); // 099
  SYSTEM(); // SYSTEM
  SWAP(); // SWAP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      PAD(); // PAD
      UNK_0xde1e(); // UNK_0xde1e
      READNEX(); // READNEX
      Push(Read16(regsp)); // DUP
      Push(pp_UNK_0xde7a); // UNK_0xde7a
      Store_2(); // !_2
      if (Pop() != 0)
      {
        imax = i; // LEAVE
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(Read16(pp_UNK_0xde7a)); // UNK_0xde7a @
  if (Pop() != 0)
  {
    Pop(); // DROP
  } else
  {
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      PAD(); // PAD
      UNK_0xde1e(); // UNK_0xde1e
      SYSTEM(); // SYSTEM
      READNEX(); // READNEX
      Push(Read16(regsp)); // DUP
      Push(pp_UNK_0xde7a); // UNK_0xde7a
      Store_2(); // !_2
      if (Pop() != 0)
      {
        jmax = j; // LEAVE
      } else
      {
        SYSUTIL(); // SYSUTIL
        PAD(); // PAD
        UNK_0xde1e(); // UNK_0xde1e
        WRITENE(); // WRITENE
        IsUNRAVEL(); // ?UNRAVEL
      }
      j++;
    } while(j<jmax); // (LOOP)

  }
  SYSUTIL(); // SYSUTIL
  CLOSE(); // CLOSE
  Pop(); // DROP
}


// ================================================
// 0xdef8: WORD 'UNK_0xdefa' codep=0x2214 parp=0xdefa
// ================================================
// 0xdefa: dw 0x000f

// ================================================
// 0xdefc: WORD 'HOST' codep=0x53f7 parp=0xdf05
// ================================================
// 0xdf05: db 0xa8 0x2c 0xd4 0x40 0xef 0x09 0xc0 0x5e 0x3b 0x57 0x2d 0x57 0x2b 0x54 0xfe 0x59 0xa9 0x53 0xb8 0x51 0x1b 0x5f 0x08 0x52 0x36 0x54 0xc8 0x84 0x10 0x54 ' , @   ^;W-W+T Y S Q _ R6T   T'

// ================================================
// 0xdf23: WORD 'UNK_0xdf25' codep=0x2214 parp=0xdf25
// ================================================
// 0xdf25: dw 0x0012

// ================================================
// 0xdf27: WORD 'VECTORS' codep=0x53f7 parp=0xdf33
// ================================================
// 0xdf33: db 0x47 0x57 0x54 0x57 0x77 0x5a 0x6c 0x5a 0x61 0x5a 0x56 0x5a 0x48 0x5a 0x3d 0x5a 0x8f 0x57 0x0e 0x46 0xe6 0x07 0xfa 0x07 0x5b 0x6c 0x88 0x01 0x8a 0x01 0x12 0x64 0x14 0x64 0x84 0x5a 'GWTWwZlZaZVZHZ=Z W F    [l     d d Z'

// ================================================
// 0xdf57: WORD 'UNK_0xdf59' codep=0x224c parp=0xdf59
// ================================================

void UNK_0xdf59() // UNK_0xdf59
{
  unsigned short int a;
  Push(Read16(pp_ICON_h_)); // ICON^ @
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x003e);
  FILE_st_(); // FILE<
  Push(Read16(a)); // R@
  Push(Pop() + 0x0043); //  0x0043 +
  Push(0x003f);
  FILE_st_(); // FILE<
  Push(a + 0x0086); // R> 0x0086 +
  Push(0x0040);
  FILE_st_(); // FILE<
}


// ================================================
// 0xdf85: WORD 'UNK_0xdf87' codep=0x224c parp=0xdf87
// ================================================

void UNK_0xdf87() // UNK_0xdf87
{
  Push(0);
  Push(Read16(cc_DX)); // DX
  C_ex__2(); // C!_2
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_DX))); // DX @
  Push(0);
  Push(Read16(Read16(cc_AX))); // AX @
  Push(0x0400);
  Push(Read16(Read16(cc_CX))); // CX @
  _slash_(); // /
  M_star__slash_(); // M*/
  Push(0x05dc); Push(0x0000);
  D_gt_(); // D>
}


// ================================================
// 0xdfb3: WORD 'UNK_0xdfb5' codep=0x1d29 parp=0xdfb5
// ================================================
// orphan
// 0xdfb5: db 0x3a 0x20 0x05 0x41 ':  A'

// ================================================
// 0xdfb9: WORD 'UNK_0xdfbb' codep=0x224c parp=0xdfbb
// ================================================

void UNK_0xdfbb() // UNK_0xdfbb
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6b04); // probable 'GPOLY'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0164);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xdfdd: WORD 'UNK_0xdfdf' codep=0x224c parp=0xdfdf
// ================================================

void UNK_0xdfdf() // UNK_0xdfdf
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(Read16(regsp)); // DUP
  Push(0x004c);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6abb); // probable 'FACET'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0120);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe001: WORD 'UNK_0xe003' codep=0x224c parp=0xe003
// ================================================

void UNK_0xe003() // UNK_0xe003
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(Read16(regsp)); // DUP
  Push(0x004d);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6aa9); // probable 'VERTEX'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0192);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe025: WORD 'UNK_0xe027' codep=0x1d29 parp=0xe027
// ================================================
// orphan
// 0xe027: db 0x3a 0x20 ': '

// ================================================
// 0xe029: WORD 'UNK_0xe02b' codep=0x1d29 parp=0xe02b
// ================================================
// 0xe02b: db 0x3a 0x20 ': '

// ================================================
// 0xe02d: WORD 'UNK_0xe02f' codep=0x224c parp=0xe02f params=1 returns=0
// ================================================

void UNK_0xe02f() // UNK_0xe02f
{
  Push(pp_UNK_0xe027); // UNK_0xe027
  Store_2(); // !_2
  Push(pp_UNK_0xe02b); // UNK_0xe02b
  _099(); // 099
}


// ================================================
// 0xe039: WORD 'UNK_0xe03b' codep=0x224c parp=0xe03b params=2 returns=0
// ================================================

void UNK_0xe03b() // UNK_0xe03b
{
  Push(Read16(pp_UNK_0xe027) + Read16(pp_UNK_0xe02b)); // UNK_0xe027 @ UNK_0xe02b @ +
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe02b); // UNK_0xe02b
  _plus__ex__2(); // +!_2
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xe051: WORD 'STARE' codep=0x2214 parp=0xe05b
// ================================================
// 0xe05b: dw 0xe05e
// 0xe05d: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x65 0x67 0x61 0x00 ' stars.ega '

// ================================================
// 0xe068: WORD 'STARV' codep=0x2214 parp=0xe072
// ================================================
// 0xe072: dw 0xe075
// 0xe074: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x76 0x67 0x61 0x00 ' stars.vga '

// ================================================
// 0xe07f: WORD 'UNK_0xe081' codep=0x224c parp=0xe081 params=3 returns=0
// ================================================

void UNK_0xe081() // UNK_0xe081
{
  unsigned short int a;
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(0x060d);
  LCMOVE(); // LCMOVE
  Push(0xb603); // probable 'SETABLT'
  MODULE(); // MODULE
  a = Pop(); // >R
  Push(0x0012);
  BMOFF(); // BMOFF
  Store_2(); // !_2
  Push(Read16(a)); // R@
  BMSEG(); // BMSEG
  Store_2(); // !_2
  Push(0);
  BMPAL(); // BMPAL
  Push(Pop() - 1); //  1-
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp_BMAP); // BMAP
  Push(Read16(a)); // R@
  Push(0);
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    UNK_0xde2c(); // UNK_0xde2c
    Push(2);
  } else
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    Push(0x000d);
  }
  Push(a); // R>
  Push(0x0012);
  Push(0x078a);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe0df: WORD 'UNK_0xe0e1' codep=0x224c parp=0xe0e1
// ================================================

void UNK_0xe0e1() // UNK_0xe0e1
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(cc_STARV)); // STARV
  } else
  {
    Push(Read16(cc_STARE)); // STARE
  }
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  _ro_LDS_rc_(); // (LDS)
  MOUNTA(); // MOUNTA
  Push(Read16(pp_LSYSEG)); // LSYSEG @
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(0x04e2);
  UNK_0xe081(); // UNK_0xe081
  Push(Read16(pp_MSYSEG)); // MSYSEG @
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(0x018d);
  UNK_0xe081(); // UNK_0xe081
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(Read16(regsp)); // DUP
  Push(0);
  UNK_0xe081(); // UNK_0xe081
  UNK_0xdfbb(); // UNK_0xdfbb
  UNK_0xdfdf(); // UNK_0xdfdf
  UNK_0xe003(); // UNK_0xe003
}


// ================================================
// 0xe125: WORD 'UNK_0xe127' codep=0x224c parp=0xe127 params=0 returns=0
// ================================================

void UNK_0xe127() // UNK_0xe127
{
  PRINT("1. SAVE GAME & RESUME", 21); // (.")
}


// ================================================
// 0xe141: WORD 'UNK_0xe143' codep=0x224c parp=0xe143 params=0 returns=0
// ================================================

void UNK_0xe143() // UNK_0xe143
{
  PRINT("3. RESUME WITHOUT SAVING", 24); // (.")
}


// ================================================
// 0xe160: WORD 'UNK_0xe162' codep=0x224c parp=0xe162 params=0 returns=0
// ================================================

void UNK_0xe162() // UNK_0xe162
{
  PRINT("2. SAVE GAME & QUIT", 19); // (.")
}


// ================================================
// 0xe17a: WORD 'UNK_0xe17c' codep=0x224c parp=0xe17c params=0 returns=0
// ================================================

void UNK_0xe17c() // UNK_0xe17c
{
  PRINT("7. QUIT WITHOUT SAVING", 22); // (.")
}


// ================================================
// 0xe197: WORD 'UNK_0xe199' codep=0x224c parp=0xe199 params=0 returns=1
// ================================================

void UNK_0xe199() // UNK_0xe199
{
  GetDS(); // @DS
  Push(Pop() + 0x1000); //  0x1000 +
}


// ================================================
// 0xe1a3: WORD 'UNK_0xe1a5' codep=0x224c parp=0xe1a5 params=0 returns=0
// ================================================

void UNK_0xe1a5() // UNK_0xe1a5
{
  UNK_0xe199(); // UNK_0xe199
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Store_2(); // !_2
}


// ================================================
// 0xe1ad: WORD 'UNK_0xe1af' codep=0x224c parp=0xe1af
// ================================================

void UNK_0xe1af() // UNK_0xe1af
{
  unsigned short int i, imax, j, jmax;
  PAD(); // PAD
  Push(0x000e);
  Push(0);
  FILL_2(); // FILL_2
  GetDS(); // @DS
  PAD(); // PAD
  Push(Read16(pp_UNK_0xde1a)); // UNK_0xde1a @
  Push(0);
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(0x000c);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() - 0x0064); //  0x0064 -
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0140);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(Pop() + 1); //  1+
      Push(Read16(regsp)); // DUP
      Push(j); // I
      Push(i); // J
      L_at_PIXEL(); // L@PIXEL
      Push((Pop() & 0x000f) >> 4); //  0x000f AND 16*
      Push(j + 1); // I 1+
      Push(i); // J
      L_at_PIXEL(); // L@PIXEL
      Push(Pop() & 0x000f); //  0x000f AND
      Push(Pop() + Pop()); // +
      Push(Read16(pp_UNK_0xde1a)); // UNK_0xde1a @
      ROT(); // ROT
      LC_ex_(); // LC!
      Push(2);
      int step = Pop();
      j += step;
      if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
    } while(1); // (+LOOP)

    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
  Push(0x0140);
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_UNK_0xde1a)); // UNK_0xde1a @
  Push(3);
  L_ex_(); // L!
  Push(Pop() >> 1); //  2/
  Push(Read16(pp_UNK_0xde1a)); // UNK_0xde1a @
  Push(9);
  LC_ex_(); // LC!
  Push(0x0064);
  Push(Read16(pp_UNK_0xde1a)); // UNK_0xde1a @
  Push(0x000a);
  LC_ex_(); // LC!
}


// ================================================
// 0xe243: WORD 'UNK_0xe245' codep=0x224c parp=0xe245 params=2 returns=0
// ================================================

void UNK_0xe245() // UNK_0xe245
{
  Push(pp_UNK_0xe02b); // UNK_0xe02b
  Store_2(); // !_2
  Push(pp_UNK_0xde62); // UNK_0xde62
  Store_2(); // !_2
}


// ================================================
// 0xe24f: WORD 'UNK_0xe251' codep=0x224c parp=0xe251 params=0 returns=1
// ================================================

void UNK_0xe251() // UNK_0xe251
{
  Push(Read16(pp_UNK_0xde42) - Read16(pp_UNK_0xde3e)); // UNK_0xde42 @ UNK_0xde3e @ -
  Push(Read16(pp_UNK_0xde52)); // UNK_0xde52 @
  _slash_(); // /
  Push(pp_UNK_0xde5a); // UNK_0xde5a
  Store_2(); // !_2
}


// ================================================
// 0xe267: WORD 'UNK_0xe269' codep=0x224c parp=0xe269 params=0 returns=1
// ================================================

void UNK_0xe269() // UNK_0xe269
{
  Push(Read16(pp_UNK_0xde46) - Read16(pp_UNK_0xde4a)); // UNK_0xde46 @ UNK_0xde4a @ -
  Push(Read16(pp_UNK_0xde4e) + Read16(pp_UNK_0xde56)); // UNK_0xde4e @ UNK_0xde56 @ +
  _slash_(); // /
  Push(pp_UNK_0xde5e); // UNK_0xde5e
  Store_2(); // !_2
}


// ================================================
// 0xe285: WORD 'UNK_0xe287' codep=0x224c parp=0xe287 params=1 returns=1
// ================================================

void UNK_0xe287() // UNK_0xe287
{
  do
  {
    Push(Read16(regsp)); // DUP
    Push(!((Read16(Pop())&0xFF)==Read16(cc_BL)?1:0)); //  C@ BL = NOT
    if (Pop() == 0) return;
    Push(Pop() - 1); //  1-
  } while(1);
}


// ================================================
// 0xe29d: WORD 'UNK_0xe29f' codep=0x224c parp=0xe29f params=0 returns=0
// ================================================

void UNK_0xe29f() // UNK_0xe29f
{
  Push(Read16(pp_UNK_0xde62)); // UNK_0xde62 @
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Store_2(); // !_2
  Push(1);
  Push(pp_UNK_0xde6a); // UNK_0xde6a
  Store_2(); // !_2

  label2:
  Push(Read16(pp_UNK_0xde6e) + Read16(pp_UNK_0xde5a)); // UNK_0xde6e @ UNK_0xde5a @ +
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_UNK_0xde62) + Read16(pp_UNK_0xe02b)); // UNK_0xde62 @ UNK_0xe02b @ +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe287(); // UNK_0xe287
  Push(Pop() + 1); //  1+
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Store_2(); // !_2
  Push(1);
  Push(pp_UNK_0xde6a); // UNK_0xde6a
  _plus__ex__2(); // +!_2
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe2df: WORD 'UNK_0xe2e1' codep=0x224c parp=0xe2e1 params=0 returns=0
// ================================================

void UNK_0xe2e1() // UNK_0xe2e1
{
  UNK_0xe29f(); // UNK_0xe29f
  Push(-(Read16(pp_UNK_0xde5e) - Read16(pp_UNK_0xde6a) >> 1) * (Read16(pp_UNK_0xde4e) + Read16(pp_UNK_0xde56)) + Read16(pp_UNK_0xde46)); // UNK_0xde5e @ UNK_0xde6a @ - 2/ UNK_0xde4e @ UNK_0xde56 @ + * NEGATE UNK_0xde46 @ +
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
}


// ================================================
// 0xe309: WORD 'UNK_0xe30b' codep=0x224c parp=0xe30b
// ================================================

void UNK_0xe30b() // UNK_0xe30b
{
  _gt_HIDDEN(); // >HIDDEN
  Push(Read16(pp_YBLT)); // YBLT @
  Push(0x0384);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(0);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(Read16(pp_UNK_0xde6e)); // UNK_0xde6e @
  Push(Read16(pp_UNK_0xde72)); // UNK_0xde72 @
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push((Read16(pp_UNK_0xde42) + Read16(pp_UNK_0xde3e) >> 1) + -Read16(pp_XBLT) >> 1); // UNK_0xde42 @ UNK_0xde3e @ + 2/ XBLT @ 2/ NEGATE +
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe34d: WORD 'UNK_0xe34f' codep=0x224c parp=0xe34f
// ================================================

void UNK_0xe34f() // UNK_0xe34f
{
  UNK_0xe30b(); // UNK_0xe30b
  Push(Read16(pp_UNK_0xde6e)); // UNK_0xde6e @
  Push(Read16(pp_UNK_0xde72)); // UNK_0xde72 @
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe35d: WORD 'UNK_0xe35f' codep=0x224c parp=0xe35f
// ================================================

void UNK_0xe35f() // UNK_0xe35f
{
  UNK_0xe2e1(); // UNK_0xe2e1
  Push(Read16(pp_UNK_0xde62)); // UNK_0xde62 @
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Store_2(); // !_2

  label2:
  Push(Read16(pp_UNK_0xde6e) + Read16(pp_UNK_0xde5a)); // UNK_0xde6e @ UNK_0xde5a @ +
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_UNK_0xde62) + Read16(pp_UNK_0xe02b)); // UNK_0xde62 @ UNK_0xe02b @ +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe287(); // UNK_0xe287
  Push(Pop() - Read16(pp_UNK_0xde6e)); //  UNK_0xde6e @ -
  Push(pp_UNK_0xde72); // UNK_0xde72
  Store_2(); // !_2
  UNK_0xe34f(); // UNK_0xe34f
  Push(-Read16(pp_UNK_0xde4e) + Read16(pp_UNK_0xde56)); // UNK_0xde4e @ UNK_0xde56 @ + NEGATE
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(Read16(pp_UNK_0xde72) + 1); // UNK_0xde72 @ 1+
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  _plus__ex__2(); // +!_2
  goto label2;

  label1:
  Pop(); // DROP
  Push((Read16(pp_UNK_0xde62) + Read16(pp_UNK_0xe02b)) - Read16(pp_UNK_0xde6e)); // UNK_0xde62 @ UNK_0xe02b @ + UNK_0xde6e @ -
  Push(pp_UNK_0xde72); // UNK_0xde72
  Store_2(); // !_2
  UNK_0xe34f(); // UNK_0xe34f
}


// ================================================
// 0xe3cb: WORD 'UNK_0xe3cd' codep=0x224c parp=0xe3cd
// ================================================

void UNK_0xe3cd() // UNK_0xe3cd
{
  UNK_0xe245(); // UNK_0xe245
  UNK_0xe251(); // UNK_0xe251
  UNK_0xe269(); // UNK_0xe269
  UNK_0xe35f(); // UNK_0xe35f
}


// ================================================
// 0xe3d7: WORD 'UNK_0xe3d9' codep=0x224c parp=0xe3d9 params=0 returns=0
// ================================================

void UNK_0xe3d9() // UNK_0xe3d9
{
  Push(0x0014);
  Push(pp_UNK_0xde3e); // UNK_0xde3e
  Store_2(); // !_2
  Push(0x008c);
  Push(pp_UNK_0xde42); // UNK_0xde42
  Store_2(); // !_2
  Push(0x0028);
  Push(pp_UNK_0xde4a); // UNK_0xde4a
  Store_2(); // !_2
  Push(0x0096);
  Push(pp_UNK_0xde46); // UNK_0xde46
  Store_2(); // !_2
  Push(3);
  Push(pp_UNK_0xde56); // UNK_0xde56
  Store_2(); // !_2
  Push(9);
  Push(pp_UNK_0xde4e); // UNK_0xde4e
  Store_2(); // !_2
  Push(6);
  Push(pp_UNK_0xde52); // UNK_0xde52
  Store_2(); // !_2
}


// ================================================
// 0xe40d: WORD 'UNK_0xe40f' codep=0x224c parp=0xe40f
// ================================================

void UNK_0xe40f() // UNK_0xe40f
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_COLOR)); // COLOR @
  Push(0x0096);
  Push(0x0014);
  Push(0x001e);
  Push(0x0099);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe42f: WORD 'UNK_0xe431' codep=0x224c parp=0xe431
// ================================================

void UNK_0xe431() // UNK_0xe431
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_COLOR)); // COLOR @
  Push(0x0011);
  Push(0x0014);
  Push(5);
  Push(0x009f);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe44f: WORD 'UNK_0xe451' codep=0x224c parp=0xe451
// ================================================

void UNK_0xe451() // UNK_0xe451
{
  UNK_0xe3d9(); // UNK_0xe3d9
  _gt_DISPLA(); // >DISPLA
  UNK_0xe40f(); // UNK_0xe40f
  _gt_2FONT(); // >2FONT
  UNK_0xe3cd(); // UNK_0xe3cd
}


// ================================================
// 0xe45d: WORD 'UNK_0xe45f' codep=0x224c parp=0xe45f
// ================================================

void UNK_0xe45f() // UNK_0xe45f
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0x009b);
  Push(0x000a);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00a0);
  Push(0x0096);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x00a0);
  Push(0x009b);
  Push(0x009b);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x009b);
  Push(0x009b);
  Push(0x0019);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0019);
  Push(0x0096);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x0014);
  Push(0x0014);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0014);
  Push(0x0014);
  Push(0x0011);
  Push(0x0017);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x0017);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x001e);
  Push(0x000e);
  Push(0x0021);
  LLINE(); // LLINE
  Push(0x000e);
  Push(0x0021);
  Push(8);
  Push(0x0021);
  LLINE(); // LLINE
  Push(8);
  Push(0x0021);
  Push(5);
  Push(0x0024);
  LLINE(); // LLINE
  Push(5);
  Push(0x0024);
  Push(5);
  Push(0x009b);
  LLINE(); // LLINE
  Push(5);
  Push(0x001d);
  Push(Read16(pp_COLOR)); // COLOR @
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xe53d: WORD 'UNK_0xe53f' codep=0x224c parp=0xe53f
// ================================================

void UNK_0xe53f() // UNK_0xe53f
{
  _gt_2FONT(); // >2FONT
  Push(0x0014);
  Push(0x0011);
  POS_dot_(); // POS.
  UNK_0xe431(); // UNK_0xe431
  PRINT("PRESS ANY KEY TO CONTINUE", 25); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xe56f: WORD 'UNK_0xe571' codep=0x224c parp=0xe571
// ================================================

void UNK_0xe571() // UNK_0xe571
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  BEEPOFF(); // BEEPOFF
  _gt_3FONT(); // >3FONT
  Push(0x002e);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("GAME", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("OPTIONS", 7); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0027);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("SELECT AN OPTION", 16); // (.")
  UNK_0xdf87(); // UNK_0xdf87
  if (Pop() != 0)
  {
    Push(0x0021);
    Push(0x0082);
    POS_dot_(); // POS.
    UNK_0xe127(); // UNK_0xe127
  }
  Push(0x0021);
  Push(0x006e);
  POS_dot_(); // POS.
  UNK_0xe162(); // UNK_0xe162
  Push(0x0021);
  Push(0x005a);
  POS_dot_(); // POS.
  UNK_0xe143(); // UNK_0xe143
  Push(0x0021);
  Push(0x0046);
  POS_dot_(); // POS.
  UNK_0xe17c(); // UNK_0xe17c
}


// ================================================
// 0xe5f5: WORD 'UNK_0xe5f7' codep=0x224c parp=0xe5f7
// ================================================
// orphan

void UNK_0xe5f7() // UNK_0xe5f7
{
  SET_STR_AS_PARAM("LOADING GAME");
  UNK_0xe451(); // UNK_0xe451
}


// ================================================
// 0xe60a: WORD 'UNK_0xe60c' codep=0x224c parp=0xe60c
// ================================================

void UNK_0xe60c() // UNK_0xe60c
{
  _gt_2FONT(); // >2FONT
  SET_STR_AS_PARAM("COMPLETED");
  UNK_0xe451(); // UNK_0xe451
  Push(0x001e);
  Push(0x0011);
  POS_dot_(); // POS.
  UNK_0xe431(); // UNK_0xe431
  PRINT("PRESS ANY KEY TO EXIT", 21); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  _gt_A(); // >A
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  BYE_2(); // BYE_2
}


// ================================================
// 0xe650: WORD 'UNK_0xe652' codep=0x224c parp=0xe652
// ================================================

void UNK_0xe652() // UNK_0xe652
{
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Read16(regsp)); // DUP
    Push(pp_UNK_0xde76); // UNK_0xde76
    Store_2(); // !_2
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe672: WORD 'UNK_0xe674' codep=0x224c parp=0xe674 params=1 returns=0
// ================================================

void UNK_0xe674() // UNK_0xe674
{
  Push(pp_TIMESTA); // TIMESTA
  Store_2(); // !_2
}


// ================================================
// 0xe67a: WORD 'UNK_0xe67c' codep=0x224c parp=0xe67c params=0 returns=1
// ================================================

void UNK_0xe67c() // UNK_0xe67c
{
  Push(Read16(pp_TIMESTA)); // TIMESTA @
}


// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x224c parp=0xe684 params=1 returns=0
// ================================================

void UNK_0xe684() // UNK_0xe684
{
  Push(Read16(regsp)); // DUP
  SIGFLD(":TIMEST");
  Store_2(); // !_2
}


// ================================================
// 0xe68c: WORD 'UNK_0xe68e' codep=0x224c parp=0xe68e params=1 returns=0
// ================================================

void UNK_0xe68e() // UNK_0xe68e
{
  TIME(); // TIME
  Push(Read16(Pop() + 2)); //  2+ @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(2);
  }
  UNK_0xe674(); // UNK_0xe674
}


// ================================================
// 0xe6a2: WORD 'UNK_0xe6a4' codep=0x224c parp=0xe6a4
// ================================================

void UNK_0xe6a4() // UNK_0xe6a4
{
  UNK_0xe67c(); // UNK_0xe67c
  UNK_0xe68e(); // UNK_0xe68e
  UNK_0xe67c(); // UNK_0xe67c
  SWAP(); // SWAP
  UNK_0xe674(); // UNK_0xe674
  MOUNTA(); // MOUNTA
  UNK_0xe684(); // UNK_0xe684
  MOUNTB(); // MOUNTB
  UNK_0xe684(); // UNK_0xe684
  UNK_0xe674(); // UNK_0xe674
}


// ================================================
// 0xe6ba: WORD 'UNK_0xe6bc' codep=0x224c parp=0xe6bc params=0 returns=1
// ================================================
// orphan

void UNK_0xe6bc() // UNK_0xe6bc
{
  Push(Read16(pp_OVA) - 0x01f4); // OVA @ 0x01f4 -
}


// ================================================
// 0xe6c8: WORD 'UNK_0xe6ca' codep=0x224c parp=0xe6ca
// ================================================
// orphan

void UNK_0xe6ca() // UNK_0xe6ca
{
  UNK_0xe6bc(); // UNK_0xe6bc
  Push(Pop() + 0x0032); //  0x0032 +
  UNK_0xe02f(); // UNK_0xe02f
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  SET_STR_AS_PARAM("PLACE DISK CONTAINING FILE ");
  UNK_0xe03b(); // UNK_0xe03b
  NAM(); // NAM
  Push(8);
  _dash_TRAILING(); // -TRAILING
  UNK_0xe03b(); // UNK_0xe03b
  Push(0x002e);
  UNK_0xe6bc(); // UNK_0xe6bc
  C_ex__2(); // C!_2
  TYP(); // TYP
  UNK_0xe6bc(); // UNK_0xe6bc
  Push(Pop() + 1); //  1+
  Push(3);
  CMOVE_2(); // CMOVE_2
  UNK_0xe6bc(); // UNK_0xe6bc
  Push(4);
  UNK_0xe03b(); // UNK_0xe03b
  SET_STR_AS_PARAM(" INTO ");
  UNK_0xe03b(); // UNK_0xe03b
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("DRIVE ");
    UNK_0xe6bc(); // UNK_0xe6bc
    SWAP(); // SWAP
    CMOVE_2(); // CMOVE_2
    Push(Pop() + 0x0040); //  0x0040 +
    UNK_0xe6bc(); // UNK_0xe6bc
    Push(Pop() + 7); //  7 +
    C_ex__2(); // C!_2
    UNK_0xe6bc(); // UNK_0xe6bc
    Push(7);
  } else
  {
    SET_STR_AS_PARAM("ANY DRIVE");
  }
  UNK_0xe03b(); // UNK_0xe03b
  Push(Read16(pp_UNK_0xe027)); // UNK_0xe027 @
  Push(Read16(pp_UNK_0xe02b)); // UNK_0xe02b @
  UNK_0xe451(); // UNK_0xe451
  UNK_0xe53f(); // UNK_0xe53f
}


// ================================================
// 0xe76e: WORD 'UNK_0xe770' codep=0x224c parp=0xe770
// ================================================
// orphan

void UNK_0xe770() // UNK_0xe770
{
  UNK_0xe6bc(); // UNK_0xe6bc
  Push(Pop() + 0x0032); //  0x0032 +
  UNK_0xe02f(); // UNK_0xe02f
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  SET_STR_AS_PARAM("PLACE DISK CONTAINING THE CORRECT ");
  UNK_0xe03b(); // UNK_0xe03b
  UNK_0xe03b(); // UNK_0xe03b
  SET_STR_AS_PARAM(" FILE");
  UNK_0xe03b(); // UNK_0xe03b
  Push(Read16(pp_UNK_0xe027)); // UNK_0xe027 @
  Push(Read16(pp_UNK_0xe02b)); // UNK_0xe02b @
  UNK_0xe451(); // UNK_0xe451
  UNK_0xe53f(); // UNK_0xe53f
}


// ================================================
// 0xe7bf: WORD 'UNK_0xe7c1' codep=0x224c parp=0xe7c1 params=0 returns=0
// ================================================

void UNK_0xe7c1() // UNK_0xe7c1
{
  unsigned short int a;
  Push(Read16(pp_PIC_n_)); // PIC# @
  a = Pop(); // >R
  Push(Read16(a)); // R@
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    Push(0x000e);
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0xba0a); // probable 'LDAPIC'
      MODULE(); // MODULE
    }
    IsVGA(); // ?VGA
    if (Pop() != 0)
    {
      Push(Read16(a)); // R@
      Push(0x000f);
      Push(0x0022);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        Push(Read16(a)); // R@
        Push(Pop() - 0x000f); //  0x000f -
        Push(0xb9e8); // probable '.APIC'
        MODULE(); // MODULE
      } else
      {
        Push(Read16(a)); // R@
        Push(0);
        Push(0x000f);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          Push(Read16(a)); // R@
          Push(0xb9c8); // probable '@.HYBR'
          MODULE(); // MODULE
        }
      }
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe823: WORD 'UNK_0xe825' codep=0x224c parp=0xe825
// ================================================

void UNK_0xe825() // UNK_0xe825
{
  UNK_0xe431(); // UNK_0xe431
  BEEP(); // BEEP
  SET_STR_AS_PARAM("SAVED GAME INTEGRITY ERROR.");
  UNK_0xe451(); // UNK_0xe451
  UNK_0xe60c(); // UNK_0xe60c
}


// ================================================
// 0xe84d: WORD 'UNK_0xe84f' codep=0x224c parp=0xe84f params=1 returns=0
// ================================================

void UNK_0xe84f() // UNK_0xe84f
{
  SIGFLD(":SAVE");
  Push(!Read16(Pop())); //  @ NOT
  if (Pop() == 0) return;
  UNK_0xe431(); // UNK_0xe431
  BEEP(); // BEEP
  SET_STR_AS_PARAM("GAME IN PROGRESS WAS NOT SAVED.");
  UNK_0xe451(); // UNK_0xe451
  _i_KEY(); // 'KEY
  Pop(); // DROP
  UNK_0xe53f(); // UNK_0xe53f
  UNK_0xe60c(); // UNK_0xe60c
}


// ================================================
// 0xe88b: WORD 'UNK_0xe88d' codep=0x224c parp=0xe88d
// ================================================

void UNK_0xe88d() // UNK_0xe88d
{
  Push(0x00ff);
  Push(pp_DERROR); // DERROR
  Store_2(); // !_2
  GetDS(); // @DS
  PAD(); // PAD
  Push(Pop() + 0x0032); //  0x0032 +
  Push(pp_DTA_1); // DTA_1
  _2_ex__2(); // 2!_2
  DOS_dash_DTA(); // DOS-DTA
  Push(0);
  RELREC(); // RELREC
  Store_2(); // !_2
  Push(1);
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  READ_dash_RA(); // READ-RA
  WRITE_dash_R(); // WRITE-R
  Pop(); Pop(); // 2DROP
  INIT(); // INIT
  Push(Read16(pp_DERROR)==0?1:0); // DERROR @ 0=
}


// ================================================
// 0xe8c1: WORD 'UNK_0xe8c3' codep=0x224c parp=0xe8c3
// ================================================

void UNK_0xe8c3() // UNK_0xe8c3
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("MUST PLAY ON A WRITABLE COPY.");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("PRESS ANY KEY TO EXIT.");
  DrawTTY(); // .TTY
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xe90a: WORD 'UNK_0xe90c' codep=0x224c parp=0xe90c
// ================================================

void UNK_0xe90c() // UNK_0xe90c
{
  CTINIT(); // CTINIT
  Push(0xaa3b); // probable '<CTASKM'
  Push(pp_ASKMOUN); // ASKMOUN
  Store_2(); // !_2
  Push(0xaa1d); // probable '<CTVERS'
  Push(pp__i_VERSIO); // 'VERSIO
  Store_2(); // !_2
}


// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922
// ================================================

void UNK_0xe922() // UNK_0xe922
{
  SET_STR_AS_PARAM("RESUMING THE GAME IN PROGRESS...");
  UNK_0xe451(); // UNK_0xe451
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe94f: WORD 'UNK_0xe951' codep=0x224c parp=0xe951 params=1 returns=0
// ================================================

void UNK_0xe951() // UNK_0xe951
{
  if (Pop() == 0) return;
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe959: WORD 'UNK_0xe95b' codep=0x224c parp=0xe95b
// ================================================

void UNK_0xe95b() // UNK_0xe95b
{
  MOUNTA(); // MOUNTA
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    _gt_HIDDEN(); // >HIDDEN
  } else
  {
    _gt_HIDDEN(); // >HIDDEN
    DARK(); // DARK
    _gt_DISPLA(); // >DISPLA
  }
  DARK(); // DARK
  UNK_0xe1a5(); // UNK_0xe1a5
  Push(Read16(pp_UNK_0xde1a)); // UNK_0xde1a @
  Push(0);
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  OVER(); // OVER
  Push(Read16(cc__16K) + 0x0032); // 16K 0x0032 +
  LCMOVE(); // LCMOVE
  Push(0xb603); // probable 'SETABLT'
  MODULE(); // MODULE
  Push(0);
  Push(0x00c7);
  DrawRAW(); // .RAW
  UNK_0xe90c(); // UNK_0xe90c
  Push(Read16(pp_UNK_0xde1a) + 0x0400); // UNK_0xde1a @ 0x0400 +
  Push(0);
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  OVER(); // OVER
  Push(Read16(cc__16K) + 0x0032); // 16K 0x0032 +
  LCMOVE(); // LCMOVE
  Push(0xb603); // probable 'SETABLT'
  MODULE(); // MODULE
  Push(0);
  Push(0x0063);
  DrawRAW(); // .RAW
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    SCR_dash_RES(); // SCR-RES
  }
  UNK_0xe7c1(); // UNK_0xe7c1
}


// ================================================
// 0xe9d3: WORD 'UNK_0xe9d5' codep=0x224c parp=0xe9d5
// ================================================

void UNK_0xe9d5() // UNK_0xe9d5
{
  Push(Read16(pp_HUB)); // HUB @
  if (Pop() != 0)
  {
    MOUNTB(); // MOUNTB
    Push(0xd516); // probable 'PPIC'
    MODULE(); // MODULE
    UNK_0xe90c(); // UNK_0xe90c
  } else
  {
    UNK_0xe95b(); // UNK_0xe95b
  }
  H_gt_D(); // H>D
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe9f3: WORD 'PRESE' codep=0x224c parp=0xe9fd
// ================================================

void PRESE() // PRESE
{
  UNK_0xe1a5(); // UNK_0xe1a5
  Push(0x00c7);
  UNK_0xe1af(); // UNK_0xe1af
  Push(0x0400);
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  _plus__ex__2(); // +!_2
  Push(0x0063);
  UNK_0xe1af(); // UNK_0xe1af
}


// ================================================
// 0xea15: WORD 'UNK_0xea17' codep=0x224c parp=0xea17 params=0 returns=0
// ================================================

void UNK_0xea17() // UNK_0xea17
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
}


// ================================================
// 0xea1d: WORD 'UNK_0xea1f' codep=0x224c parp=0xea1f params=0 returns=0
// ================================================

void UNK_0xea1f() // UNK_0xea1f
{
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xea25: WORD 'UNK_0xea27' codep=0x224c parp=0xea27 params=0 returns=0
// ================================================

void UNK_0xea27() // UNK_0xea27
{
  Push(pp__n_CACHE); // #CACHE
  _099(); // 099
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xea2f: WORD 'UNK_0xea31' codep=0x224c parp=0xea31 params=0 returns=0
// ================================================

void UNK_0xea31() // UNK_0xea31
{
  Push(Read16(pp__bo__n_CACHE)); // [#CACHE @
  Push(pp__n_CACHE); // #CACHE
  Store_2(); // !_2
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xea3d: WORD 'UNK_0xea3f' codep=0x224c parp=0xea3f params=2 returns=0
// ================================================

void UNK_0xea3f() // UNK_0xea3f
{
  unsigned short int i, imax;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    Push(pp_UNK_0xde16); // UNK_0xde16
    _plus__ex__2(); // +!_2
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Pop(); // DROP
}


// ================================================
// 0xea59: WORD 'UNK_0xea5b' codep=0x224c parp=0xea5b params=0 returns=0
// ================================================

void UNK_0xea5b() // UNK_0xea5b
{
  Push(0xe6ca); // probable 'UNK_0xe6ca'
  Push(pp_ASKMOUN); // ASKMOUN
  Store_2(); // !_2
  Push(0xe770); // probable 'UNK_0xe770'
  Push(pp__i_VERSIO); // 'VERSIO
  Store_2(); // !_2
}


// ================================================
// 0xea6d: WORD 'UNK_0xea6f' codep=0x224c parp=0xea6f params=1 returns=1
// ================================================

void UNK_0xea6f() // UNK_0xea6f
{
  UNK_0xe199(); // UNK_0xe199
  _gt_(); // >
  Push(!Pop()); //  NOT
}


// ================================================
// 0xea77: WORD 'UNK_0xea79' codep=0x224c parp=0xea79 params=1 returns=2
// ================================================

void UNK_0xea79() // UNK_0xea79
{
  Push(Read16(regsp)); // DUP
  UNK_0xea6f(); // UNK_0xea6f
  if (Pop() != 0)
  {
    GetDS(); // @DS
    _dash_(); // -
    Push(1);
    return;
  }
  Push(Pop() - Read16(pp_LFSEG)); //  LFSEG @ -
  Push(0);
}


// ================================================
// 0xea95: WORD 'UNK_0xea97' codep=0x224c parp=0xea97 params=2 returns=1
// ================================================

void UNK_0xea97() // UNK_0xea97
{
  if (Pop() != 0)
  {
    GetDS(); // @DS
    Push(Pop() + Pop()); // +
    return;
  }
  Push(Pop() + Read16(pp_LFSEG)); //  LFSEG @ +
}


// ================================================
// 0xeaab: WORD 'UNK_0xeaad' codep=0x224c parp=0xeaad params=0 returns=6
// ================================================

void UNK_0xeaad() // UNK_0xeaad
{
  unsigned short int i, imax;
  Push(Read16(pp_BUF_dash_SEG)==Read16(pp_DBUF_dash_SE)?1:0); // BUF-SEG @ DBUF-SE @ =
  Push(Read16(pp_BLTSEG)); // BLTSEG @
  UNK_0xea79(); // UNK_0xea79
  Push(Read16(pp__3DSEG)); // 3DSEG @
  UNK_0xea79(); // UNK_0xea79
  Push(Read16(cc_UNK_0xdf25)); // UNK_0xdf25
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("VECTORS");
    Push(Read16(Pop())); //  @
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xead5: WORD 'UNK_0xead7' codep=0x224c parp=0xead7 params=6 returns=0
// ================================================

void UNK_0xead7() // UNK_0xead7
{
  unsigned short int i, imax;
  Push(0);
  Push(Read16(cc_UNK_0xdf25) - 1); // UNK_0xdf25 1-

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("VECTORS");
    Store_2(); // !_2
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  UNK_0xea97(); // UNK_0xea97
  Push(pp__3DSEG); // 3DSEG
  Store_2(); // !_2
  UNK_0xea97(); // UNK_0xea97
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  if (Pop() != 0)
  {
    Push(pp_DBUF_dash_SE); // DBUF-SE
  } else
  {
    Push(pp_HBUF_dash_SE); // HBUF-SE
  }
  Push(Read16(Pop())); //  @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Store_2(); // !_2
}


// ================================================
// 0xeb0b: WORD 'UNK_0xeb0d' codep=0x224c parp=0xeb0d
// ================================================

void UNK_0xeb0d() // UNK_0xeb0d
{
  UNK_0xe431(); // UNK_0xe431
  SET_STR_AS_PARAM("LOADING GAME IN PROGRESS...");
  UNK_0xe451(); // UNK_0xe451
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
}


// ================================================
// 0xeb49: WORD 'UNK_0xeb4b' codep=0x224c parp=0xeb4b
// ================================================

void UNK_0xeb4b() // UNK_0xeb4b
{
  UNK_0xe431(); // UNK_0xe431
  SET_STR_AS_PARAM("...GAME LOAD COMPLETE.");
  UNK_0xe451(); // UNK_0xe451
  Push(0x05dc);
  MS(); // MS
}


// ================================================
// 0xeb70: WORD 'UNK_0xeb72' codep=0x224c parp=0xeb72
// ================================================

void UNK_0xeb72() // UNK_0xeb72
{
  UNK_0xe431(); // UNK_0xe431
  SET_STR_AS_PARAM("SAVING GAME...");
  UNK_0xe451(); // UNK_0xe451
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
}


// ================================================
// 0xeba1: WORD 'UNK_0xeba3' codep=0x224c parp=0xeba3
// ================================================
// orphan

void UNK_0xeba3() // UNK_0xeba3
{
  UNK_0xe431(); // UNK_0xe431
  SET_STR_AS_PARAM("GAME SAVE COMPLETE.");
  UNK_0xe451(); // UNK_0xe451
  UNK_0xe60c(); // UNK_0xe60c
}


// ================================================
// 0xebc1: WORD 'PRMSA' codep=0xebcb parp=0xebcb
// ================================================
// 0xebcb: pop    bx
// 0xebcc: mov    [bx],sp
// 0xebce: inc    bx
// 0xebcf: inc    bx
// 0xebd0: push   si
// 0xebd1: push   di
// 0xebd2: mov    di,bx
// 0xebd4: mov    si,[078C] // OPERATOR
// 0xebd8: sub    si,03E8
// 0xebdc: mov    cx,03E8
// 0xebdf: repz   
// 0xebe0: movsb
// 0xebe1: pop    di
// 0xebe2: pop    si
// 0xebe3: lodsw
// 0xebe4: mov    bx,ax
// 0xebe6: jmp    word ptr [bx]

// ================================================
// 0xebe8: WORD 'PRMLO' codep=0xebf2 parp=0xebf2
// ================================================
// 0xebf2: pop    bx
// 0xebf3: mov    sp,[bx]
// 0xebf5: inc    bx
// 0xebf6: inc    bx
// 0xebf7: mov    [bp-02],si
// 0xebfa: mov    [bp-04],di
// 0xebfd: mov    si,bx
// 0xebff: cli    
// 0xec00: push   ds
// 0xec01: pop    es
// 0xec02: mov    di,[078C] // OPERATOR
// 0xec06: sub    di,03E8
// 0xec0a: mov    cx,03E8
// 0xec0d: repz   
// 0xec0e: movsb
// 0xec0f: add    sp,[DD22] // UNK_0xdd22
// 0xec13: mov    si,[bp-02]
// 0xec16: mov    di,[bp-04]
// 0xec19: sti    
// 0xec1a: lodsw
// 0xec1b: mov    bx,ax
// 0xec1d: jmp    word ptr [bx]

// ================================================
// 0xec1f: WORD 'RETSA' codep=0xec29 parp=0xec29
// ================================================
// 0xec29: pop    bx
// 0xec2a: mov    [bx],bp
// 0xec2c: inc    bx
// 0xec2d: inc    bx
// 0xec2e: push   si
// 0xec2f: push   di
// 0xec30: mov    di,bx
// 0xec32: mov    si,[078E] // OPERATOR
// 0xec36: sub    si,00DC
// 0xec3a: mov    cx,00DC
// 0xec3d: repz   
// 0xec3e: movsb
// 0xec3f: pop    di
// 0xec40: pop    si
// 0xec41: lodsw
// 0xec42: mov    bx,ax
// 0xec44: jmp    word ptr [bx]

// ================================================
// 0xec46: WORD 'RETJM' codep=0xec50 parp=0xec50
// ================================================
// 0xec50: cli    
// 0xec51: push   ds
// 0xec52: pop    es
// 0xec53: pop    bx
// 0xec54: mov    bp,[bx]
// 0xec56: inc    bx
// 0xec57: inc    bx
// 0xec58: mov    si,bx
// 0xec5a: push   di
// 0xec5b: mov    di,[078E] // OPERATOR
// 0xec5f: sub    di,00DC
// 0xec63: mov    cx,00DC
// 0xec66: repz   
// 0xec67: movsb
// 0xec68: pop    di
// 0xec69: add    bp,[DD1E] // UNK_0xdd1e
// 0xec6d: mov    si,[bp+00]
// 0xec70: inc    bp
// 0xec71: inc    bp
// 0xec72: sti    
// 0xec73: lodsw
// 0xec74: mov    bx,ax
// 0xec76: jmp    word ptr [bx]

// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x224c parp=0xec7a params=5 returns=0
// ================================================

void UNK_0xec7a() // UNK_0xec7a
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(0x0400);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(4);
      PICK(); // PICK
      Push(Pop() + i * 0x0040); //  I 0x0040 * +
      Push(4);
      PICK(); // PICK
      GetDS(); // @DS
      Push(5);
      PICK(); // PICK
      Push(Pop() + i); //  I +
      BLOCK_2(); // BLOCK_2
      _2OVER(); // 2OVER
      _2OVER(); // 2OVER
      Push(!a); // J NOT
      UNK_0xe951(); // UNK_0xe951
      Push(9);
      PICK(); // PICK
      Push(Read16(cc_UNK_0xdd26)); // UNK_0xdd26
      UMIN(); // UMIN
      LCMOVE(); // LCMOVE
      Push(a); // J
      if (Pop() != 0)
      {
        UPDATE(); // UPDATE
      }
      Push(5);
      PICK(); // PICK
      Push(Read16(cc_UNK_0xdd26)); // UNK_0xdd26
      UMIN(); // UMIN
      UNK_0xea3f(); // UNK_0xea3f
      Pop(); // DROP
      Pop(); Pop(); // 2DROP
      Push(Pop() - 0x0400); //  0x0400 -
      i++;
    } while(i<imax); // (LOOP)

    Push(a); // I
    if (Pop() != 0)
    {
      SAVE_dash_BU(); // SAVE-BU
    }
  }
  Push(a); // R>
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xecfc: WORD 'UNK_0xecfe' codep=0x224c parp=0xecfe params=4 returns=0
// ================================================

void UNK_0xecfe() // UNK_0xecfe
{
  Push(0);
  UNK_0xec7a(); // UNK_0xec7a
}


// ================================================
// 0xed04: WORD 'UNK_0xed06' codep=0x224c parp=0xed06 params=4 returns=0
// ================================================

void UNK_0xed06() // UNK_0xed06
{
  Push(1);
  UNK_0xec7a(); // UNK_0xec7a
}


// ================================================
// 0xed0c: WORD 'UNK_0xed0e' codep=0x224c parp=0xed0e params=0 returns=1
// ================================================

void UNK_0xed0e() // UNK_0xed0e
{
  Push(Read16(pp_SSYSEG)); // SSYSEG @
}


// ================================================
// 0xed14: WORD 'UNK_0xed16' codep=0x224c parp=0xed16 params=0 returns=1
// ================================================

void UNK_0xed16() // UNK_0xed16
{
  Push(Read16(pp_SYSK) * 0x0040 - 1); // SYSK @ 0x0040 * 1-
  UNK_0xed0e(); // UNK_0xed0e
  _dash_(); // -
  Push(Pop() >> 4); //  16*
}


// ================================================
// 0xed2a: WORD 'UNK_0xed2c' codep=0x224c parp=0xed2c params=0 returns=0
// ================================================

void UNK_0xed2c() // UNK_0xed2c
{
  UNK_0xed0e(); // UNK_0xed0e
  Push(0);
  Push(Read16(cc_UNK_0xdd1a)); // UNK_0xdd1a
  UNK_0xed16(); // UNK_0xed16
  UNK_0xed06(); // UNK_0xed06
}


// ================================================
// 0xed38: WORD 'UNK_0xed3a' codep=0x224c parp=0xed3a params=0 returns=0
// ================================================

void UNK_0xed3a() // UNK_0xed3a
{
  UNK_0xed0e(); // UNK_0xed0e
  Push(0);
  Push(Read16(cc_UNK_0xdd1a)); // UNK_0xdd1a
  UNK_0xed16(); // UNK_0xed16
  UNK_0xecfe(); // UNK_0xecfe
}


// ================================================
// 0xed46: WORD 'UNK_0xed48' codep=0x224c parp=0xed48 params=0 returns=0
// ================================================

void UNK_0xed48() // UNK_0xed48
{
  UNK_0xe199(); // UNK_0xe199
  Push(0);
  Push(Read16(cc_UNK_0xdd0e)); // UNK_0xdd0e
  Push(Read16(cc__16K) * 2 + 0x0064); // 16K 2* 0x0064 +
  UNK_0xed06(); // UNK_0xed06
}


// ================================================
// 0xed5c: WORD 'UNK_0xed5e' codep=0x224c parp=0xed5e params=0 returns=0
// ================================================

void UNK_0xed5e() // UNK_0xed5e
{
  UNK_0xe199(); // UNK_0xe199
  Push(0);
  Push(Read16(cc_UNK_0xdd0e)); // UNK_0xdd0e
  Push(Read16(cc__16K) * 2 + 0x0064); // 16K 2* 0x0064 +
  UNK_0xecfe(); // UNK_0xecfe
}


// ================================================
// 0xed72: WORD 'UNK_0xed74' codep=0x224c parp=0xed74 params=2 returns=0
// ================================================

void UNK_0xed74() // UNK_0xed74
{
  SIGFLD(":SAVE");
  Store_2(); // !_2
}


// ================================================
// 0xed7a: WORD 'UNK_0xed7c' codep=0x224c parp=0xed7c
// ================================================

void UNK_0xed7c() // UNK_0xed7c
{
  UNK_0xe67c(); // UNK_0xe67c
  UNK_0xe68e(); // UNK_0xe68e
  UNK_0xe67c(); // UNK_0xe67c
  UNK_0xe684(); // UNK_0xe684
  Push(1);
  UNK_0xed74(); // UNK_0xed74
  SWAP(); // SWAP
  UNK_0xe674(); // UNK_0xe674
  MOUNTA(); // MOUNTA
  UNK_0xe684(); // UNK_0xe684
  Push(1);
  UNK_0xed74(); // UNK_0xed74
  UNK_0xe674(); // UNK_0xe674
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xed9a: WORD 'UNK_0xed9c' codep=0x224c parp=0xed9c params=0 returns=1
// ================================================

void UNK_0xed9c() // UNK_0xed9c
{
  Push(Read16(pp_OVA) - Read16(cc_UNK_0xdd2a)); // OVA @ UNK_0xdd2a -
}


// ================================================
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8 params=0 returns=0
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  GetDS(); // @DS
  Push(Read16(cc_UNK_0xdd2a)); // UNK_0xdd2a
  Push(Read16(cc_UNK_0xdd0a)); // UNK_0xdd0a
  UNK_0xed9c(); // UNK_0xed9c
  UNK_0xecfe(); // UNK_0xecfe
}


// ================================================
// 0xedb4: WORD 'UNK_0xedb6' codep=0x224c parp=0xedb6 params=0 returns=0
// ================================================

void UNK_0xedb6() // UNK_0xedb6
{
  GetDS(); // @DS
  Push(Read16(cc_UNK_0xdd2a)); // UNK_0xdd2a
  Push(Read16(cc_UNK_0xdd0a)); // UNK_0xdd0a
  UNK_0xed9c(); // UNK_0xed9c
  UNK_0xed06(); // UNK_0xed06
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  IsVGA(); // ?VGA
  if (Pop() == 0) return;
  PAD_gt_SEG(); // PAD>SEG
  Push(0x0036);
  FILE_st_(); // FILE<
  GetDS(); // @DS
  Push(Read16(cc_DS)); // DS
  Store_2(); // !_2
  PAD_v_16(); // PAD|16
  Push(Read16(cc_BX)); // BX
  Store_2(); // !_2
  Push(9);
  Push(Read16(cc_AX)); // AX
  Store_2(); // !_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xede8: WORD 'UNK_0xedea' codep=0x224c parp=0xedea
// ================================================

void UNK_0xedea() // UNK_0xedea
{
  Push(Read16(cc_UNK_0xdd12)); // UNK_0xdd12
  BLOCK_2(); // BLOCK_2
  RETSA(); // RETSA
  UPDATE(); // UPDATE
}


// ================================================
// 0xedf4: WORD 'UNK_0xedf6' codep=0x224c parp=0xedf6 params=0 returns=1
// ================================================

void UNK_0xedf6() // UNK_0xedf6
{
  Push(Read16(cc_UNK_0xdd12)); // UNK_0xdd12
  BLOCK_2(); // BLOCK_2
  Push(pp_UNK_0xdd32); // UNK_0xdd32
  Push(0x00de);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xee04: WORD 'UNK_0xee06' codep=0x224c parp=0xee06
// ================================================

void UNK_0xee06() // UNK_0xee06
{
  Push(Read16(cc_UNK_0xdd16)); // UNK_0xdd16
  BLOCK_2(); // BLOCK_2
  PRMSA(); // PRMSA
  UPDATE(); // UPDATE
}


// ================================================
// 0xee10: WORD 'UNK_0xee12' codep=0x224c parp=0xee12
// ================================================

void UNK_0xee12() // UNK_0xee12
{
  Push(Read16(cc_UNK_0xdd16)); // UNK_0xdd16
  BLOCK_2(); // BLOCK_2
  PRMLO(); // PRMLO
}


// ================================================
// 0xee1a: WORD 'UNK_0xee1c' codep=0x224c parp=0xee1c
// ================================================

void UNK_0xee1c() // UNK_0xee1c
{
  UNK_0xeb72(); // UNK_0xeb72
  Push(pp_UNK_0xde16); // UNK_0xde16
  _099(); // 099
  _ro_RESTORE_rc_(); // (RESTORE)
  UNK_0xedb6(); // UNK_0xedb6
  UNK_0xed48(); // UNK_0xed48
  UNK_0xed2c(); // UNK_0xed2c
  UNK_0xee06(); // UNK_0xee06
  UNK_0xedea(); // UNK_0xedea
  Push(Read16(pp_UNK_0xde16)); // UNK_0xde16 @
  SIGFLD(":CKSUM");
  Store_2(); // !_2
  UNK_0xed7c(); // UNK_0xed7c
  _ro_SETUP_rc_(); // (SETUP)
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xee3e: WORD 'UNK_0xee40' codep=0x224c parp=0xee40
// ================================================

void UNK_0xee40() // UNK_0xee40
{
  Push(0);
  UNK_0xed74(); // UNK_0xed74
  MOUNTB(); // MOUNTB
  Push(0);
  UNK_0xed74(); // UNK_0xed74
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xee4e: WORD 'UNK_0xee50' codep=0x224c parp=0xee50 params=0 returns=1
// ================================================

void UNK_0xee50() // UNK_0xee50
{
  unsigned short int i, imax;
  Push(Read16(cc_UNK_0xdefa)); // UNK_0xdefa
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("HOST");
    Push(Read16(Pop())); //  @
    i++;
  } while(i<imax); // (LOOP)

  _ro_RESTORE_rc_(); // (RESTORE)
}


// ================================================
// 0xee64: WORD 'UNK_0xee66' codep=0x224c parp=0xee66
// ================================================

void UNK_0xee66() // UNK_0xee66
{
  unsigned short int i, imax;
  Push(0);
  Push(Read16(cc_UNK_0xdefa) - 1); // UNK_0xdefa 1-

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("HOST");
    Store_2(); // !_2
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  _ro_SETUP_rc_(); // (SETUP)
  SETDBUF(); // SETDBUF
}


// ================================================
// 0xee80: WORD 'UNK_0xee82' codep=0x224c parp=0xee82
// ================================================

void UNK_0xee82() // UNK_0xee82
{
  UNK_0xeb0d(); // UNK_0xeb0d
  Push(pp_UNK_0xde16); // UNK_0xde16
  _099(); // 099
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  UNK_0xee50(); // UNK_0xee50
  UNK_0xeda8(); // UNK_0xeda8
  UNK_0xee66(); // UNK_0xee66
  UNK_0xed5e(); // UNK_0xed5e
  UNK_0xed3a(); // UNK_0xed3a
  UNK_0xee12(); // UNK_0xee12
  UNK_0xedf6(); // UNK_0xedf6
  Push(Read16(pp_UNK_0xde16)); // UNK_0xde16 @
  SIGFLD(":CKSUM");
  Push(Read16(Pop())); //  @
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xeb4b(); // UNK_0xeb4b
    return;
  }
  UNK_0xe825(); // UNK_0xe825
}


// ================================================
// 0xeeb0: WORD 'LOAD.' codep=0x224c parp=0xeeba
// ================================================

void LOAD_dot_() // LOAD.
{
  UNK_0xea5b(); // UNK_0xea5b
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  UNK_0xea27(); // UNK_0xea27
  UNK_0xe84f(); // UNK_0xe84f
  MOUNTA(); // MOUNTA
  UNK_0xee82(); // UNK_0xee82
  UNK_0xee40(); // UNK_0xee40
  _gt_1FONT(); // >1FONT
  _gt_LORES(); // >LORES
  StorePAL(); // !PAL
  UNK_0xedc4(); // UNK_0xedc4
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  ON_2(); // ON_2
  Push(pp_UNK_0xdd32); // UNK_0xdd32
  RETJM(); // RETJM
}


// ================================================
// 0xeee0: WORD 'UNK_0xeee2' codep=0x224c parp=0xeee2
// ================================================
// orphan

void UNK_0xeee2() // UNK_0xeee2
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  UNK_0xed7c(); // UNK_0xed7c
  UNK_0xee1c(); // UNK_0xee1c
  Push(3);
  UNMOUNT(); // UNMOUNT
  MOUNTB(); // MOUNTB
  Push(0);
  BLOCK_2(); // BLOCK_2
  Pop(); // DROP
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
  Push(2);
  UNMOUNT(); // UNMOUNT
  UNK_0xeba3(); // UNK_0xeba3
}


// ================================================
// 0xef04: WORD 'UNK_0xef06' codep=0x224c parp=0xef06 params=1 returns=0
// ================================================

void UNK_0xef06() // UNK_0xef06
{
  Push(0x00c9);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bb);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef1c: WORD 'UNK_0xef1e' codep=0x224c parp=0xef1e params=1 returns=0
// ================================================

void UNK_0xef1e() // UNK_0xef1e
{
  Push(0x00ba);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(Read16(user_ROW)&0xFF); // ROW C@
  SWAP(); // SWAP
  Push(Pop() + (Read16(user_COL)&0xFF)); //  COL C@ +
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(0x00ba);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef3a: WORD 'UNK_0xef3c' codep=0x224c parp=0xef3c params=1 returns=0
// ================================================

void UNK_0xef3c() // UNK_0xef3c
{
  Push(0x00c8);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bc);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef52: WORD 'UNK_0xef54' codep=0x224c parp=0xef54 params=4 returns=0
// ================================================

void UNK_0xef54() // UNK_0xef54
{
  unsigned short int a, b, i, imax;
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(a); // I'
  UNK_0xef06(); // UNK_0xef06
  Push(b); // R>
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    SWAP(); // SWAP
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    _2DUP(); // 2DUP
    Exec("POSITION"); // call of word 0x2767 '(POSITION)'
    Push(a); // J
    UNK_0xef1e(); // UNK_0xef1e
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(a); // R>
  UNK_0xef3c(); // UNK_0xef3c
}


// ================================================
// 0xef86: WORD 'UNK_0xef88' codep=0x224c parp=0xef88
// ================================================

void UNK_0xef88() // UNK_0xef88
{
  UNK_0xed7c(); // UNK_0xed7c
  UNK_0xee1c(); // UNK_0xee1c
  MOUNTB(); // MOUNTB
  Push(0);
  BLOCK_2(); // BLOCK_2
  Pop(); // DROP
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xef9a: WORD 'UNK_0xef9c' codep=0x224c parp=0xef9c
// ================================================

void UNK_0xef9c() // UNK_0xef9c
{
  GetMODE(); // @MODE
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _gt_A(); // >A
    PRINT("needs Color Graphics", 20); // (.")
    Push(0x4e20); Push(0x0000);
    UNK_0xe652(); // UNK_0xe652
    BYE_2(); // BYE_2
    return;
  }
  Push(Read16(pp_MONITOR)); // MONITOR @
  LDPAL(); // LDPAL
  _gt_DISPLA(); // >DISPLA
  _gt_LORES(); // >LORES
  DARK(); // DARK
}


// ================================================
// 0xefdb: WORD 'UNK_0xefdd' codep=0x224c parp=0xefdd params=0 returns=1
// ================================================

void UNK_0xefdd() // UNK_0xefdd
{
  unsigned short int i, imax, j, jmax;
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0064);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x03e8);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(0x53a9); // probable 'MPS'
  Store_2(); // !_2
}


// ================================================
// 0xf017: WORD 'UNK_0xf019' codep=0x224c parp=0xf019
// ================================================

void UNK_0xf019() // UNK_0xf019
{
  _gt_ALPHA(); // >ALPHA
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  Push(1);
  Push(7);
  Push(4);
  Push(0x003e);
  UNK_0xef54(); // UNK_0xef54
  Push(2);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("WARNING:  Any  Being  caught with an unauthorized  copy or", 58); // (.")
  Push(3);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("version  of  this  Software  Product  will  be punished by", 58); // (.")
  Push(4);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Interstel Corporate Police.  Punishment  may  include  the", 58); // (.")
  Push(5);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("destruction of the offending Being.", 35); // (.")
  UNK_0xefdd(); // UNK_0xefdd
  Push(0x9c40); Push(0x0000);
  UNK_0xe652(); // UNK_0xe652
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  _gt_LORES(); // >LORES
  UNK_0xedc4(); // UNK_0xedc4
  DARK(); // DARK
}


// ================================================
// 0xf13a: WORD 'UNK_0xf13c' codep=0x224c parp=0xf13c
// ================================================

void UNK_0xf13c() // UNK_0xf13c
{
  Push(0);
  Push(0x00fa);
  Push(0x0400);
  SET_STR_AS_PARAM("star2a.com lastSAVE.sva");
  _gt_TIB(); // >TIB
  UNK_0xde7e(); // UNK_0xde7e
}


// ================================================
// 0xf166: WORD 'UNK_0xf168' codep=0x224c parp=0xf168
// ================================================

void UNK_0xf168() // UNK_0xf168
{
  Push(0);
  Push(0x0168);
  Push(0x0400);
  SET_STR_AS_PARAM("star2b.com lastSAVE.svb");
  _gt_TIB(); // >TIB
  UNK_0xde7e(); // UNK_0xde7e
}


// ================================================
// 0xf192: WORD 'UNK_0xf194' codep=0x224c parp=0xf194
// ================================================

void UNK_0xf194() // UNK_0xf194
{
  FLUSH_2(); // FLUSH_2
  INIT(); // INIT
  SET_STR_AS_PARAM("lastsave.svb");
  _gt_TIB(); // >TIB
  SETFCB(); // SETFCB
  Pop(); // DROP
  OPEN(); // OPEN
  Push(!(Pop()==0x00ff?1:0)); //  0x00ff = NOT
  Push(0x0013);
  FCBCALL(); // FCBCALL
  Pop(); // DROP
  MOUNTA(); // MOUNTA
}


// ================================================
// 0xf1c3: WORD 'UNK_0xf1c5' codep=0x224c parp=0xf1c5
// ================================================

void UNK_0xf1c5() // UNK_0xf1c5
{
  Push(0);
  Push(Read16(cc_DX)); // DX
  C_ex__2(); // C!_2
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_BX))); // BX @
  Push(0);
  Push(Read16(Read16(cc_AX))); // AX @
  Push(0x0400);
  Push(Read16(Read16(cc_CX))); // CX @
  _slash_(); // /
  M_star__slash_(); // M*/
  Push(0x026c); Push(0x0000);
  D_gt_(); // D>
}


// ================================================
// 0xf1f1: WORD 'KEY>O' codep=0x4b3b parp=0xf1fb
// ================================================

void KEY_gt_O() // KEY>O
{
  switch(Pop()) // KEY>O
  {
  case 1:
    UNK_0xdf87(); // UNK_0xdf87
    break;
  case 2:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 3:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 7:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  default:
    Push(Read16(cc_FALSE)); // FALSE
    break;

  }
}

// ================================================
// 0xf20f: WORD 'OPTIO' codep=0x1d29 parp=0xf219
// ================================================
// 0xf219: db 0x20 0x20 '  '

// ================================================
// 0xf21b: WORD 'UNK_0xf21d' codep=0x224c parp=0xf21d
// ================================================

void UNK_0xf21d() // UNK_0xf21d
{
  do
  {
    _i_KEY(); // 'KEY
    Push(Pop() - 0x0030); //  0x0030 -
    Push(Read16(regsp)); // DUP
    Push(pp_OPTIO); // OPTIO
    Store_2(); // !_2
    KEY_gt_O(); // KEY>O case
  } while(Pop() == 0);
  Push(Read16(pp_LKEY)); // LKEY @
}


// ================================================
// 0xf237: WORD 'NEW.G' codep=0x224c parp=0xf241
// ================================================

void NEW_dot_G() // NEW.G
{
  UNK_0xe90c(); // UNK_0xe90c
  UNK_0xe6a4(); // UNK_0xe6a4
  UNK_0xea1f(); // UNK_0xea1f
  Push(Read16(user_TIB)); // TIB @
  Push(0x0050);
  Push(0);
  FILL_2(); // FILL_2
  PORTM(); // PORTM
}


// ================================================
// 0xf257: WORD 'UNK_0xf259' codep=0x224c parp=0xf259
// ================================================

void UNK_0xf259() // UNK_0xf259
{
  FLUSH_2(); // FLUSH_2
  NODRIVES(); // NODRIVES
  SET_STR_AS_PARAM("SAVING AS 'LASTSAVE'");
  UNK_0xe451(); // UNK_0xe451
  UNK_0xf194(); // UNK_0xf194
  UNK_0xf1c5(); // UNK_0xf1c5
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNK_0xf13c(); // UNK_0xf13c
    UNK_0xf168(); // UNK_0xf168
    Push(pp_UNK_0xdd2e); // UNK_0xdd2e
    Push(Read16(pp_OPTIO)==1?1:0); // OPTIO @ 1 =
    if (Pop() != 0)
    {
      ON_2(); // ON_2
    } else
    {
      _099(); // 099
    }
  } else
  {
    MOUNTA(); // MOUNTA
    SET_STR_AS_PARAM("INSUFFICIENT DISK SPACE");
    UNK_0xe451(); // UNK_0xe451
    UNK_0xe53f(); // UNK_0xe53f
    _gt_A(); // >A
    Exec("PAGE"); // call of word 0x274c '(PAGE)'
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("Do the following:", 17); // (.")
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("1) Delete some files (650k needed)", 34); // (.")
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("2) Type STARFLT2.", 17); // (.")
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("3) Try save again.", 18); // (.")
    _i_KEY(); // 'KEY
    Pop(); // DROP
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("Press any key to exit", 21); // (.")
    KEY_2(); // KEY_2
    Pop(); // DROP
    BYE_2(); // BYE_2
  }
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
}


// ================================================
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358
// ================================================

void UNK_0xf358() // UNK_0xf358
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  UNK_0xef88(); // UNK_0xef88
  Push(!Read16(pp_UNK_0xdd2e)); // UNK_0xdd2e @ NOT
  if (Pop() == 0) return;
  UNK_0xf259(); // UNK_0xf259
}


// ================================================
// 0xf36e: WORD 'UNK_0xf370' codep=0x224c parp=0xf370
// ================================================

void UNK_0xf370() // UNK_0xf370
{
  UNK_0xdf87(); // UNK_0xdf87
  if (Pop() != 0)
  {
    UNK_0xf358(); // UNK_0xf358
  } else
  {
    UNK_0xef88(); // UNK_0xef88
  }
  Push(!Read16(pp_UNK_0xdd2e)); // UNK_0xdd2e @ NOT
  if (Pop() == 0) return;
  UNK_0xe60c(); // UNK_0xe60c
}


// ================================================
// 0xf38c: WORD 'UNK_0xf38e' codep=0x224c parp=0xf38e params=0 returns=0
// ================================================

void UNK_0xf38e() // UNK_0xf38e
{
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  ON_2(); // ON_2
}


// ================================================
// 0xf394: WORD 'UNK_0xf396' codep=0x224c parp=0xf396
// ================================================

void UNK_0xf396() // UNK_0xf396
{
  UNK_0xef88(); // UNK_0xef88
  Push(!Read16(pp_UNK_0xdd2e)); // UNK_0xdd2e @ NOT
  if (Pop() == 0) return;
  Push(Read16(pp__bo__n_CACHE)); // [#CACHE @
  Push(pp__n_CACHE); // #CACHE
  Store_2(); // !_2
  AUTO_dash_CACHE(); // AUTO-CACHE
  _gt_A(); // >A
  QUIT(); // QUIT
}


// ================================================
// 0xf3b2: WORD 'GAMEO_2' codep=0x4b3b parp=0xf3bc
// ================================================

void GAMEO_2() // GAMEO_2
{
  switch(Pop()) // GAMEO_2
  {
  case 49:
    UNK_0xf358(); // UNK_0xf358
    break;
  case 51:
    UNK_0xf38e(); // UNK_0xf38e
    break;
  case 50:
    UNK_0xf370(); // UNK_0xf370
    break;
  case 55:
    BYE_2(); // BYE_2
    break;
  default:
    UNK_0xf396(); // UNK_0xf396
    break;

  }
}

// ================================================
// 0xf3d0: WORD 'UNK_0xf3d2' codep=0x224c parp=0xf3d2
// ================================================

void UNK_0xf3d2() // UNK_0xf3d2
{
  UNK_0xea17(); // UNK_0xea17
  FLUSH_2(); // FLUSH_2
  UNK_0xea27(); // UNK_0xea27
  UNK_0xeaad(); // UNK_0xeaad
  UNK_0xea5b(); // UNK_0xea5b
  PRESE(); // PRESE
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2 params=1 returns=1
// ================================================

void UNK_0xf3e2() // UNK_0xf3e2
{
  SIGFLD(":TIMEST");
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xf3e8: WORD 'UNK_0xf3ea' codep=0x224c parp=0xf3ea
// ================================================

void UNK_0xf3ea() // UNK_0xf3ea
{
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  _099(); // 099
  do
  {
    UNK_0xe571(); // UNK_0xe571
    UNK_0xf21d(); // UNK_0xf21d
    GAMEO_2(); // GAMEO_2 case
    Push(Read16(pp_UNK_0xdd2e)); // UNK_0xdd2e @
  } while(Pop() == 0);
  UNK_0xe922(); // UNK_0xe922
}


// ================================================
// 0xf400: WORD 'UNK_0xf402' codep=0x224c parp=0xf402 params=0 returns=2
// ================================================

void UNK_0xf402() // UNK_0xf402
{
  PRINT("Thanks to TSCS for testing", 26); // (.")
  Push(0x0bb8);
  MS(); // MS
}


// ================================================
// 0xf427: WORD 'UNK_0xf429' codep=0x224c parp=0xf429
// ================================================

void UNK_0xf429() // UNK_0xf429
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    UNK_0xedc4(); // UNK_0xedc4
  }
  UNK_0xe9d5(); // UNK_0xe9d5
  UNK_0xe90c(); // UNK_0xe90c
  UNK_0xea31(); // UNK_0xea31
  UNK_0xead7(); // UNK_0xead7
  UNK_0xea1f(); // UNK_0xea1f
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
  Push(0xb5e0); // probable 'HIMUS'
  MODULE(); // MODULE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf449: WORD 'ERR!' codep=0x224c parp=0xf452
// ================================================
// entry

void ERR_ex_() // ERR!
{
  UNK_0xf3d2(); // UNK_0xf3d2
  DARK(); // DARK
  SET_STR_AS_PARAM("PROGRAM OR DISK ERROR");
  UNK_0xe451(); // UNK_0xe451
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  UNK_0xf3ea(); // UNK_0xf3ea
  UNK_0xf429(); // UNK_0xf429
}


// ================================================
// 0xf47e: WORD 'GAMEO_1' codep=0x224c parp=0xf488
// ================================================
// entry

void GAMEO_1() // GAMEO_1
{
  Push(0x03e8);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x0032);
  MS(); // MS
  Push(0x07d0);
  TONE(); // TONE
  Push(0x0032);
  MS(); // MS
  Push(0x05dc);
  TONE(); // TONE
  Push(0x0032);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  UNK_0xf3d2(); // UNK_0xf3d2
  UNK_0xf3ea(); // UNK_0xf3ea
  UNK_0xf429(); // UNK_0xf429
}


// ================================================
// 0xf4b8: WORD 'BOSS' codep=0x224c parp=0xf4c1
// ================================================
// entry

void BOSS() // BOSS
{
  UNK_0xf3d2(); // UNK_0xf3d2
  _gt_A(); // >A
  PRINT("A:>", 3); // (.")
  do
  {
    KEY_2(); // KEY_2
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    Push(Pop()==0x000d?1:0); //  0x000d =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Exec("CR"); // call of word 0x26ee '(CR)'
      PRINT("A:>", 3); // (.")
    } else
    {
      Exec("EMIT"); // call of word 0x2731 '(EMIT)'
    }
    Push(Pop()==2?1:0); //  2 =
  } while(Pop() == 0);
  _gt_LORES(); // >LORES
  DARK(); // DARK
  UNK_0xf429(); // UNK_0xf429
}


// ================================================
// 0xf4fb: WORD 'START' codep=0x224c parp=0xf505
// ================================================
// entry

void START() // START
{
  UNK_0xf402(); // UNK_0xf402
  UNK_0xef9c(); // UNK_0xef9c
  UNK_0xe90c(); // UNK_0xe90c
  UNK_0xe88d(); // UNK_0xe88d
  if (Pop() != 0)
  {
    UNK_0xe8c3(); // UNK_0xe8c3
  }
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
  Push(0x9021); // probable '(BYE)'
  Push(pp__i_BYE); // 'BYE
  Store_2(); // !_2
  Push(0xb5d0); // probable 'INTROS'
  MODULE(); // MODULE
  UNK_0xe0e1(); // UNK_0xe0e1
  UNK_0xdf59(); // UNK_0xdf59
  _gt_ALPHA(); // >ALPHA
  UNK_0xf019(); // UNK_0xf019
  UNK_0xf3e2(); // UNK_0xf3e2
  if (Pop() != 0)
  {
    LOAD_dot_(); // LOAD.
    return;
  }
  NEW_dot_G(); // NEW.G
}

// 0xf53d: db 0x47 0x41 0x4d 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x00 'GAME____________________________    '

