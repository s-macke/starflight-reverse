// ====== OVERLAY 'COMBAT-OV' ======
// store offset = 0xdd30
// overlay size   = 0x1830

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xdd46  codep:0x224c parp:0xdd46 size:0x0006 C-string:'UNK_0xdd46'
//      UNK_0xdd4e  codep:0x224c parp:0xdd4e size:0x000a C-string:'UNK_0xdd4e'
//      UNK_0xdd5a  codep:0x224c parp:0xdd5a size:0x0008 C-string:'UNK_0xdd5a'
//      UNK_0xdd64  codep:0x224c parp:0xdd64 size:0x000a C-string:'UNK_0xdd64'
//      UNK_0xdd70  codep:0x224c parp:0xdd70 size:0x0006 C-string:'UNK_0xdd70'
//      UNK_0xdd78  codep:0x224c parp:0xdd78 size:0x0016 C-string:'UNK_0xdd78'
//      UNK_0xdd90  codep:0x73ea parp:0xdd90 size:0x0006 C-string:'UNK_0xdd90'
//      UNK_0xdd98  codep:0x73ea parp:0xdd98 size:0x0006 C-string:'UNK_0xdd98'
//      UNK_0xdda0  codep:0x73ea parp:0xdda0 size:0x0006 C-string:'UNK_0xdda0'
//      UNK_0xdda8  codep:0x73ea parp:0xdda8 size:0x0006 C-string:'UNK_0xdda8'
//      UNK_0xddb0  codep:0x73ea parp:0xddb0 size:0x0006 C-string:'UNK_0xddb0'
//      UNK_0xddb8  codep:0x744d parp:0xddb8 size:0x0008 C-string:'UNK_0xddb8'
//      UNK_0xddc2  codep:0x744d parp:0xddc2 size:0x0003 C-string:'UNK_0xddc2'
//      UNK_0xddc7  codep:0x744d parp:0xddc7 size:0x0003 C-string:'UNK_0xddc7'
//      UNK_0xddcc  codep:0x744d parp:0xddcc size:0x0011 C-string:'UNK_0xddcc'
//      UNK_0xdddf  codep:0x744d parp:0xdddf size:0x0021 C-string:'UNK_0xdddf'
//      UNK_0xde02  codep:0x744d parp:0xde02 size:0x0003 C-string:'UNK_0xde02'
//      UNK_0xde07  codep:0x744d parp:0xde07 size:0x0003 C-string:'UNK_0xde07'
//      UNK_0xde0c  codep:0x744d parp:0xde0c size:0x0003 C-string:'UNK_0xde0c'
//      UNK_0xde11  codep:0x744d parp:0xde11 size:0x0003 C-string:'UNK_0xde11'
//      UNK_0xde16  codep:0x744d parp:0xde16 size:0x0003 C-string:'UNK_0xde16'
//      UNK_0xde1b  codep:0x744d parp:0xde1b size:0x0003 C-string:'UNK_0xde1b'
//      UNK_0xde20  codep:0x744d parp:0xde20 size:0x0003 C-string:'UNK_0xde20'
//      UNK_0xde25  codep:0x744d parp:0xde25 size:0x0003 C-string:'UNK_0xde25'
//      UNK_0xde2a  codep:0x744d parp:0xde2a size:0x0003 C-string:'UNK_0xde2a'
//      UNK_0xde2f  codep:0x744d parp:0xde2f size:0x0003 C-string:'UNK_0xde2f'
//      UNK_0xde34  codep:0x744d parp:0xde34 size:0x0003 C-string:'UNK_0xde34'
//      UNK_0xde39  codep:0x1d29 parp:0xde39 size:0x0002 C-string:'UNK_0xde39'
//      UNK_0xde3d  codep:0x1d29 parp:0xde3d size:0x0002 C-string:'UNK_0xde3d'
//      UNK_0xde41  codep:0x1d29 parp:0xde41 size:0x0002 C-string:'UNK_0xde41'
//      UNK_0xde45  codep:0x1d29 parp:0xde45 size:0x0004 C-string:'UNK_0xde45'
//      UNK_0xde4b  codep:0x1d29 parp:0xde4b size:0x0002 C-string:'UNK_0xde4b'
//      UNK_0xde4f  codep:0x1d29 parp:0xde4f size:0x0004 C-string:'UNK_0xde4f'
//      UNK_0xde55  codep:0x1d29 parp:0xde55 size:0x0002 C-string:'UNK_0xde55'
//      UNK_0xde59  codep:0x224c parp:0xde59 size:0x001c C-string:'UNK_0xde59'
//      UNK_0xde77  codep:0x224c parp:0xde77 size:0x0008 C-string:'UNK_0xde77'
//      UNK_0xde81  codep:0x224c parp:0xde81 size:0x0018 C-string:'UNK_0xde81'
//      UNK_0xde9b  codep:0x224c parp:0xde9b size:0x000e C-string:'UNK_0xde9b'
//      UNK_0xdeab  codep:0x224c parp:0xdeab size:0x0008 C-string:'UNK_0xdeab'
//      UNK_0xdeb5  codep:0x224c parp:0xdeb5 size:0x003a C-string:'UNK_0xdeb5'
//      UNK_0xdef1  codep:0x224c parp:0xdef1 size:0x0018 C-string:'UNK_0xdef1'
//            X=-1  codep:0x4a4f parp:0xdf12 size:0x0010 C-string:'X_eq__dash_1'
//             X=0  codep:0x4a4f parp:0xdf2a size:0x0010 C-string:'X_eq_0'
//             X=1  codep:0x4a4f parp:0xdf42 size:0x0010 C-string:'X_eq_1'
//       KEY>ORIEN  codep:0x4a4f parp:0xdf60 size:0x0010 C-string:'KEY_gt_ORIEN'
//      UNK_0xdf72  codep:0x224c parp:0xdf72 size:0x0018 C-string:'UNK_0xdf72'
//      UNK_0xdf8c  codep:0x224c parp:0xdf8c size:0x0008 C-string:'UNK_0xdf8c'
//      UNK_0xdf96  codep:0x224c parp:0xdf96 size:0x000c C-string:'UNK_0xdf96'
//      UNK_0xdfa4  codep:0x224c parp:0xdfa4 size:0x000c C-string:'UNK_0xdfa4'
//      UNK_0xdfb2  codep:0x224c parp:0xdfb2 size:0x000c C-string:'UNK_0xdfb2'
//      UNK_0xdfc0  codep:0x224c parp:0xdfc0 size:0x0010 C-string:'UNK_0xdfc0'
//      UNK_0xdfd2  codep:0x224c parp:0xdfd2 size:0x0020 C-string:'UNK_0xdfd2'
//      UNK_0xdff4  codep:0x224c parp:0xdff4 size:0x0014 C-string:'UNK_0xdff4'
//      UNK_0xe00a  codep:0x744d parp:0xe00a size:0x0003 C-string:'UNK_0xe00a'
//      UNK_0xe00f  codep:0x224c parp:0xe00f size:0x0008 C-string:'UNK_0xe00f'
//      UNK_0xe019  codep:0x224c parp:0xe019 size:0x000a C-string:'UNK_0xe019'
//      UNK_0xe025  codep:0x224c parp:0xe025 size:0x0010 C-string:'UNK_0xe025'
//      UNK_0xe037  codep:0x3b68 parp:0xe037 size:0x0004 C-string:'UNK_0xe037'
//      UNK_0xe03d  codep:0x1d29 parp:0xe03d size:0x0004 C-string:'UNK_0xe03d'
//      UNK_0xe043  codep:0x224c parp:0xe043 size:0x0010 C-string:'UNK_0xe043'
//      UNK_0xe055  codep:0x224c parp:0xe055 size:0x0014 C-string:'UNK_0xe055'
//      UNK_0xe06b  codep:0x224c parp:0xe06b size:0x0008 C-string:'UNK_0xe06b'
//      UNK_0xe075  codep:0x2214 parp:0xe075 size:0x0002 C-string:'UNK_0xe075'
//      UNK_0xe079  codep:0x2214 parp:0xe079 size:0x0002 C-string:'UNK_0xe079'
//      UNK_0xe07d  codep:0x224c parp:0xe07d size:0x0022 C-string:'UNK_0xe07d'
//      UNK_0xe0a1  codep:0x224c parp:0xe0a1 size:0x0008 C-string:'UNK_0xe0a1'
//      UNK_0xe0ab  codep:0x224c parp:0xe0ab size:0x0014 C-string:'UNK_0xe0ab'
//      UNK_0xe0c1  codep:0x1d29 parp:0xe0c1 size:0x0002 C-string:'UNK_0xe0c1'
//      UNK_0xe0c5  codep:0x1d29 parp:0xe0c5 size:0x0004 C-string:'UNK_0xe0c5'
//      UNK_0xe0cb  codep:0x224c parp:0xe0cb size:0x000e C-string:'UNK_0xe0cb'
//      UNK_0xe0db  codep:0x224c parp:0xe0db size:0x0014 C-string:'UNK_0xe0db'
//      UNK_0xe0f1  codep:0x224c parp:0xe0f1 size:0x0016 C-string:'UNK_0xe0f1'
//      UNK_0xe109  codep:0x224c parp:0xe109 size:0x0016 C-string:'UNK_0xe109'
//      UNK_0xe121  codep:0x224c parp:0xe121 size:0x000a C-string:'UNK_0xe121'
//      UNK_0xe12d  codep:0x224c parp:0xe12d size:0x000a C-string:'UNK_0xe12d'
//      UNK_0xe139  codep:0x224c parp:0xe139 size:0x002c C-string:'UNK_0xe139'
//      UNK_0xe167  codep:0x224c parp:0xe167 size:0x0018 C-string:'UNK_0xe167'
//      UNK_0xe181  codep:0x224c parp:0xe181 size:0x000c C-string:'UNK_0xe181'
//      UNK_0xe18f  codep:0x224c parp:0xe18f size:0x0014 C-string:'UNK_0xe18f'
//      UNK_0xe1a5  codep:0x224c parp:0xe1a5 size:0x001a C-string:'UNK_0xe1a5'
//      UNK_0xe1c1  codep:0x224c parp:0xe1c1 size:0x001a C-string:'UNK_0xe1c1'
//      UNK_0xe1dd  codep:0x224c parp:0xe1dd size:0x0018 C-string:'UNK_0xe1dd'
//      UNK_0xe1f7  codep:0x1d29 parp:0xe1f7 size:0x0002 C-string:'UNK_0xe1f7'
//      UNK_0xe1fb  codep:0x2214 parp:0xe1fb size:0x0002 C-string:'UNK_0xe1fb'
//      UNK_0xe1ff  codep:0x2214 parp:0xe1ff size:0x0002 C-string:'UNK_0xe1ff'
//      UNK_0xe203  codep:0x2214 parp:0xe203 size:0x0002 C-string:'UNK_0xe203'
//      UNK_0xe207  codep:0x2214 parp:0xe207 size:0x0002 C-string:'UNK_0xe207'
//      UNK_0xe20b  codep:0x224c parp:0xe20b size:0x0013 C-string:'UNK_0xe20b'
//           CURRX  codep:0xe211 parp:0xe228 size:0x0001 C-string:'CURRX'
//           CURRY  codep:0xe211 parp:0xe233 size:0x0001 C-string:'CURRY'
//           DESTX  codep:0xe211 parp:0xe23e size:0x0001 C-string:'DESTX'
//           DESTY  codep:0xe211 parp:0xe249 size:0x0001 C-string:'DESTY'
//           MORIG  codep:0xe211 parp:0xe254 size:0x0001 C-string:'MORIG'
//          MCLASS  codep:0xe211 parp:0xe260 size:0x0001 C-string:'MCLASS'
//          DELTAX  codep:0xe211 parp:0xe26c size:0x0001 C-string:'DELTAX'
//          DELTAY  codep:0xe211 parp:0xe278 size:0x0001 C-string:'DELTAY'
//      UNK_0xe27b  codep:0x224c parp:0xe27b size:0x000c C-string:'UNK_0xe27b'
//          MARRAY  codep:0x1d29 parp:0xe292 size:0x01ce C-string:'MARRAY'
//      UNK_0xe462  codep:0x224c parp:0xe462 size:0x000e C-string:'UNK_0xe462'
//      UNK_0xe472  codep:0x224c parp:0xe472 size:0x000e C-string:'UNK_0xe472'
//      UNK_0xe482  codep:0x224c parp:0xe482 size:0x0016 C-string:'UNK_0xe482'
//      UNK_0xe49a  codep:0x224c parp:0xe49a size:0x0006 C-string:'UNK_0xe49a'
//      UNK_0xe4a2  codep:0x224c parp:0xe4a2 size:0x000a C-string:'UNK_0xe4a2'
//      UNK_0xe4ae  codep:0x224c parp:0xe4ae size:0x001a C-string:'UNK_0xe4ae'
//       SCALE>MIS  codep:0x4a4f parp:0xe4d6 size:0x0010 C-string:'SCALE_gt_MIS'
//      UNK_0xe4e8  codep:0x224c parp:0xe4e8 size:0x0016 C-string:'UNK_0xe4e8'
//      UNK_0xe500  codep:0x224c parp:0xe500 size:0x0034 C-string:'UNK_0xe500'
//      UNK_0xe536  codep:0x224c parp:0xe536 size:0x000e C-string:'UNK_0xe536'
//      UNK_0xe546  codep:0x224c parp:0xe546 size:0x0046 C-string:'UNK_0xe546'
//      UNK_0xe58e  codep:0x224c parp:0xe58e size:0x001c C-string:'UNK_0xe58e'
//      UNK_0xe5ac  codep:0x224c parp:0xe5ac size:0x000e C-string:'UNK_0xe5ac'
//      UNK_0xe5bc  codep:0x224c parp:0xe5bc size:0x001e C-string:'UNK_0xe5bc'
//      UNK_0xe5dc  codep:0x224c parp:0xe5dc size:0x0016 C-string:'UNK_0xe5dc'
//      UNK_0xe5f4  codep:0x224c parp:0xe5f4 size:0x0014 C-string:'UNK_0xe5f4'
//      UNK_0xe60a  codep:0x224c parp:0xe60a size:0x0018 C-string:'UNK_0xe60a'
//      UNK_0xe624  codep:0x224c parp:0xe624 size:0x0036 C-string:'UNK_0xe624'
//      UNK_0xe65c  codep:0x2214 parp:0xe65c size:0x0002 C-string:'UNK_0xe65c'
//      UNK_0xe660  codep:0x224c parp:0xe660 size:0x004a C-string:'UNK_0xe660'
//      UNK_0xe6ac  codep:0x1d29 parp:0xe6ac size:0x0002 C-string:'UNK_0xe6ac'
//      UNK_0xe6b0  codep:0x1d29 parp:0xe6b0 size:0x0002 C-string:'UNK_0xe6b0'
//      UNK_0xe6b4  codep:0x224c parp:0xe6b4 size:0x002e C-string:'UNK_0xe6b4'
//      UNK_0xe6e4  codep:0x224c parp:0xe6e4 size:0x0046 C-string:'UNK_0xe6e4'
//      UNK_0xe72c  codep:0x224c parp:0xe72c size:0x0016 C-string:'UNK_0xe72c'
//      UNK_0xe744  codep:0x224c parp:0xe744 size:0x0052 C-string:'UNK_0xe744'
//      UNK_0xe798  codep:0x224c parp:0xe798 size:0x0032 C-string:'UNK_0xe798'
//      UNK_0xe7cc  codep:0x224c parp:0xe7cc size:0x00a0 C-string:'UNK_0xe7cc'
//      UNK_0xe86e  codep:0x224c parp:0xe86e size:0x0031 C-string:'UNK_0xe86e'
//      UNK_0xe8a1  codep:0x224c parp:0xe8a1 size:0x0012 C-string:'UNK_0xe8a1'
//      UNK_0xe8b5  codep:0x224c parp:0xe8b5 size:0x002a C-string:'UNK_0xe8b5'
//      UNK_0xe8e1  codep:0x224c parp:0xe8e1 size:0x002e C-string:'UNK_0xe8e1'
//      UNK_0xe911  codep:0x224c parp:0xe911 size:0x0016 C-string:'UNK_0xe911'
//      UNK_0xe929  codep:0x224c parp:0xe929 size:0x0022 C-string:'UNK_0xe929'
//      UNK_0xe94d  codep:0x224c parp:0xe94d size:0x001c C-string:'UNK_0xe94d'
//      UNK_0xe96b  codep:0x224c parp:0xe96b size:0x0010 C-string:'UNK_0xe96b'
//      UNK_0xe97d  codep:0x224c parp:0xe97d size:0x0036 C-string:'UNK_0xe97d'
//      UNK_0xe9b5  codep:0x224c parp:0xe9b5 size:0x0028 C-string:'UNK_0xe9b5'
//      UNK_0xe9df  codep:0x224c parp:0xe9df size:0x0020 C-string:'UNK_0xe9df'
//      UNK_0xea01  codep:0x224c parp:0xea01 size:0x001e C-string:'UNK_0xea01'
//      UNK_0xea21  codep:0x224c parp:0xea21 size:0x001a C-string:'UNK_0xea21'
//      UNK_0xea3d  codep:0x224c parp:0xea3d size:0x0024 C-string:'UNK_0xea3d'
//      UNK_0xea63  codep:0x224c parp:0xea63 size:0x001c C-string:'UNK_0xea63'
//      UNK_0xea81  codep:0x224c parp:0xea81 size:0x0038 C-string:'UNK_0xea81'
//      UNK_0xeabb  codep:0x224c parp:0xeabb size:0x0058 C-string:'UNK_0xeabb'
//      UNK_0xeb15  codep:0x224c parp:0xeb15 size:0x004c C-string:'UNK_0xeb15'
//      UNK_0xeb63  codep:0x224c parp:0xeb63 size:0x0056 C-string:'UNK_0xeb63'
//      UNK_0xebbb  codep:0x1d29 parp:0xebbb size:0x0002 C-string:'UNK_0xebbb'
//      UNK_0xebbf  codep:0x1d29 parp:0xebbf size:0x0002 C-string:'UNK_0xebbf'
//      UNK_0xebc3  codep:0x224c parp:0xebc3 size:0x0022 C-string:'UNK_0xebc3'
//      UNK_0xebe7  codep:0x224c parp:0xebe7 size:0x0022 C-string:'UNK_0xebe7'
//      UNK_0xec0b  codep:0x224c parp:0xec0b size:0x0032 C-string:'UNK_0xec0b'
//       SET-SCALE  codep:0x224c parp:0xec4b size:0x002e C-string:'SET_dash_SCALE'
//      UNK_0xec7b  codep:0x224c parp:0xec7b size:0x0018 C-string:'UNK_0xec7b'
//      UNK_0xec95  codep:0x224c parp:0xec95 size:0x0030 C-string:'UNK_0xec95'
//      UNK_0xecc7  codep:0x224c parp:0xecc7 size:0x0021 C-string:'UNK_0xecc7'
//      UNK_0xecea  codep:0x224c parp:0xecea size:0x007e C-string:'UNK_0xecea'
//      UNK_0xed6a  codep:0x224c parp:0xed6a size:0x0006 C-string:'UNK_0xed6a'
//      UNK_0xed72  codep:0x224c parp:0xed72 size:0x0012 C-string:'UNK_0xed72'
//      UNK_0xed86  codep:0x224c parp:0xed86 size:0x0012 C-string:'UNK_0xed86'
//      UNK_0xed9a  codep:0x224c parp:0xed9a size:0x001a C-string:'UNK_0xed9a'
//       ?APPROACH  codep:0x224c parp:0xedc2 size:0x000a C-string:'_ask_APPROACH'
//      UNK_0xedce  codep:0x224c parp:0xedce size:0x002e C-string:'UNK_0xedce'
//        <COMBAT>  codep:0xb869 parp:0xee09 size:0x00b9 C-string:'_st_COMBAT_gt_'
//      UNK_0xeec4  codep:0x224c parp:0xeec4 size:0x0012 C-string:'UNK_0xeec4'
//      UNK_0xeed8  codep:0x224c parp:0xeed8 size:0x000e C-string:'UNK_0xeed8'
//      UNK_0xeee8  codep:0x224c parp:0xeee8 size:0x0006 C-string:'UNK_0xeee8'
//      UNK_0xeef0  codep:0x224c parp:0xeef0 size:0x0016 C-string:'UNK_0xeef0'
//      UNK_0xef08  codep:0x224c parp:0xef08 size:0x0016 C-string:'UNK_0xef08'
//      UNK_0xef20  codep:0x224c parp:0xef20 size:0x0010 C-string:'UNK_0xef20'
//          COMBAT  codep:0x224c parp:0xef3b size:0x006c C-string:'COMBAT'
//        ORIENT>O  codep:0x1d29 parp:0xefb4 size:0x0020 C-string:'ORIENT_gt_O'
//      UNK_0xefd6  codep:0x224c parp:0xefd6 size:0x0036 C-string:'UNK_0xefd6'
//      UNK_0xf00e  codep:0x224c parp:0xf00e size:0x000a C-string:'UNK_0xf00e'
//      UNK_0xf01a  codep:0x224c parp:0xf01a size:0x0022 C-string:'UNK_0xf01a'
//      UNK_0xf03e  codep:0x224c parp:0xf03e size:0x0018 C-string:'UNK_0xf03e'
//      UNK_0xf058  codep:0x224c parp:0xf058 size:0x0026 C-string:'UNK_0xf058'
//      UNK_0xf080  codep:0x224c parp:0xf080 size:0x0008 C-string:'UNK_0xf080'
//      UNK_0xf08a  codep:0x224c parp:0xf08a size:0x0024 C-string:'UNK_0xf08a'
//      UNK_0xf0b0  codep:0x1d29 parp:0xf0b0 size:0x0004 C-string:'UNK_0xf0b0'
//      UNK_0xf0b6  codep:0x224c parp:0xf0b6 size:0x0020 C-string:'UNK_0xf0b6'
//      UNK_0xf0d8  codep:0x224c parp:0xf0d8 size:0x0044 C-string:'UNK_0xf0d8'
//      UNK_0xf11e  codep:0x224c parp:0xf11e size:0x005e C-string:'UNK_0xf11e'
//      UNK_0xf17e  codep:0x224c parp:0xf17e size:0x000c C-string:'UNK_0xf17e'
//      UNK_0xf18c  codep:0x224c parp:0xf18c size:0x001c C-string:'UNK_0xf18c'
//      UNK_0xf1aa  codep:0x224c parp:0xf1aa size:0x000a C-string:'UNK_0xf1aa'
//      UNK_0xf1b6  codep:0x224c parp:0xf1b6 size:0x0024 C-string:'UNK_0xf1b6'
//      UNK_0xf1dc  codep:0x224c parp:0xf1dc size:0x002a C-string:'UNK_0xf1dc'
//      UNK_0xf208  codep:0x224c parp:0xf208 size:0x0036 C-string:'UNK_0xf208'
//      UNK_0xf240  codep:0x224c parp:0xf240 size:0x00b2 C-string:'UNK_0xf240'
//      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x005c C-string:'UNK_0xf2f4'
//      UNK_0xf352  codep:0x224c parp:0xf352 size:0x005a C-string:'UNK_0xf352'
//      UNK_0xf3ae  codep:0x224c parp:0xf3ae size:0x000c C-string:'UNK_0xf3ae'
//      UNK_0xf3bc  codep:0x224c parp:0xf3bc size:0x0056 C-string:'UNK_0xf3bc'
//      UNK_0xf414  codep:0x224c parp:0xf414 size:0x00a1 C-string:'UNK_0xf414'
//             WAR  codep:0x224c parp:0xf4bd size:0x0022 C-string:'WAR'
//        CLEAR-CO  codep:0x224c parp:0xf4ec size:0x0000 C-string:'CLEAR_dash_CO'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__7; // 7
extern const unsigned short int cc__8; // 8
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int cc__ask_A_dash_WEAP; // ?A-WEAP
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp__ask_SOUND; // ?SOUND
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp__h_VES; // ^VES
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp_TRJCT; // TRJCT
extern const unsigned short int pp__i_UNNEST; // 'UNNEST
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp__i__dot_BACKG; // '.BACKG
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IINDEX; // IINDEX
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_FORCEPTASK; // FORCEPTASK
extern const unsigned short int pp__ask_HEAL; // ?HEAL
extern const unsigned short int pp__ask_ROD; // ?ROD
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__ask_NEB; // ?NEB
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp__ask_COMBAT; // ?COMBAT
extern const unsigned short int pp_TIME_dash_PASSING; // TIME-PASSING
extern const unsigned short int pp__i_DEATH; // 'DEATH
extern const unsigned short int pp__i_ENDING; // 'ENDING
extern const unsigned short int pp__i__dot_VITAL; // '.VITAL
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHICLE_dash_STATUS; // '.VEHICLE-STATUS
extern const unsigned short int pp__i_VEHICLE_dash_CYCLE; // 'VEHICLE-CYCLE
extern const unsigned short int pp__i_CREW_dash_C; // 'CREW-C
extern const unsigned short int pp__i_EXTERNAL_dash_EVENTS; // 'EXTERNAL-EVENTS
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp__i_TREATM; // 'TREATM
extern const unsigned short int pp__10_star_CARGO; // 10*CARGO
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp_YWLD_c_YPIX; // YWLD:YPIX
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp__ro_AORIGINATOR; // (AORIGINATOR
extern const unsigned short int pp_LASTAP; // LASTAP
void ABS(); // ABS
void M_star_(); // M*
void M_star__slash_(); // M*/
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void C_co_(); // C,
void PAD(); // PAD
void BEEP(); // BEEP
void _dot_(); // .
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void _ex__3(); // !_3
void _plus__ex_(); // +!
void _2_ex_(); // 2!
void D_ex_(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void FILL_1(); // FILL_1
void _at_INST_dash_CLASS(); // @INST-CLASS
void _at_INST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void MODULE(); // MODULE
void _ex_COLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _ex_VISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void _gt_2ICONF(); // >2ICONF
void _gt_3ICONF(); // >3ICONF
void _at_IX(); // @IX
void _at_IY(); // @IY
void _at_ID(); // @ID
void _at_IL(); // @IL
void _at_IH(); // @IH
void _ex_IX(); // !IX
void _ex_IY(); // !IY
void _ex_ID(); // !ID
void _dot_ICON(); // .ICON
void POINT_gt_ICON(); // POINT>ICON
void _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
void _ask_ICONS_dash_AT(); // ?ICONS-AT
void _ask_ICON_eq_I(); // ?ICON=I
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void BEEPON(); // BEEPON
void _dot_TTY(); // .TTY
void _ask_TRIG(); // ?TRIG
void DISTRACT(); // DISTRACT
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
void ON_2(); // ON_2
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st_C_ex__gt_(); // <C!>
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void CI(); // CI
void CLIPPER(); // CLIPPER
void DISPLAY(); // DISPLAY
void BFILL(); // BFILL
void LLINE(); // LLINE
void V_gt_DISPLAY(); // V>DISPLAY
void _ask_INVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR
void SCR_gt_BLT(); // SCR>BLT
void _ro_XYSCAN(); // (XYSCAN
void CURRX(); // CURRX
void CURRY(); // CURRY
void DESTX(); // DESTX
void DESTY(); // DESTY
void MORIG(); // MORIG
void MCLASS(); // MCLASS
void DELTAX(); // DELTAX
void DELTAY(); // DELTAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xde39 = 0xde39; // UNK_0xde39 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xde3d = 0xde3d; // UNK_0xde3d size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xde41 = 0xde41; // UNK_0xde41 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xde45 = 0xde45; // UNK_0xde45 size: 4
// {0x56, 0x3a, 0x20, 0x20}

const unsigned short int pp_UNK_0xde4b = 0xde4b; // UNK_0xde4b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xde4f = 0xde4f; // UNK_0xde4f size: 4
// {0x56, 0x3a, 0x20, 0x45}

const unsigned short int pp_UNK_0xde55 = 0xde55; // UNK_0xde55 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe03d = 0xe03d; // UNK_0xe03d size: 4
// {0x56, 0x3a, 0x20, 0x3c}

const unsigned short int pp_UNK_0xe0c1 = 0xe0c1; // UNK_0xe0c1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe0c5 = 0xe0c5; // UNK_0xe0c5 size: 4
// {0x56, 0x3a, 0x20, 0xa0}

const unsigned short int pp_UNK_0xe1f7 = 0xe1f7; // UNK_0xe1f7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_MARRAY = 0xe292; // MARRAY size: 462
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xe4, 0xae, 0x0b, 0x90, 0x16, 0x4d, 0x74, 0x23, 0x0a, 0x02, 0x4d, 0x74, 0x30, 0x0b, 0xff, 0x4d, 0x74, 0x24, 0x0a, 0x01, 0x4d}

const unsigned short int pp_UNK_0xe6ac = 0xe6ac; // UNK_0xe6ac size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe6b0 = 0xe6b0; // UNK_0xe6b0 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xebbb = 0xebbb; // UNK_0xebbb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xebbf = 0xebbf; // UNK_0xebbf size: 2
// {0x3a, 0x20}

const unsigned short int pp_ORIENT_gt_O = 0xefb4; // ORIENT>O size: 32
// {0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00}

const unsigned short int pp_UNK_0xf0b0 = 0xf0b0; // UNK_0xf0b0 size: 4
// {0x56, 0x3a, 0x20, 0x20}


const unsigned short int cc_UNK_0xe075 = 0xe075; // UNK_0xe075
const unsigned short int cc_UNK_0xe079 = 0xe079; // UNK_0xe079
const unsigned short int cc_UNK_0xe1fb = 0xe1fb; // UNK_0xe1fb
const unsigned short int cc_UNK_0xe1ff = 0xe1ff; // UNK_0xe1ff
const unsigned short int cc_UNK_0xe203 = 0xe203; // UNK_0xe203
const unsigned short int cc_UNK_0xe207 = 0xe207; // UNK_0xe207
const unsigned short int cc_UNK_0xe65c = 0xe65c; // UNK_0xe65c


// 0xdd42: db 0x7f 0x01 ' '

// ================================================
// 0xdd44: WORD 'UNK_0xdd46' codep=0x224c parp=0xdd46
// ================================================

void UNK_0xdd46() // UNK_0xdd46
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xdd4c: WORD 'UNK_0xdd4e' codep=0x224c parp=0xdd4e
// ================================================

void UNK_0xdd4e() // UNK_0xdd4e
{
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xdd58: WORD 'UNK_0xdd5a' codep=0x224c parp=0xdd5a
// ================================================

void UNK_0xdd5a() // UNK_0xdd5a
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xdd62: WORD 'UNK_0xdd64' codep=0x224c parp=0xdd64
// ================================================

void UNK_0xdd64() // UNK_0xdd64
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdd6e: WORD 'UNK_0xdd70' codep=0x224c parp=0xdd70
// ================================================

void UNK_0xdd70() // UNK_0xdd70
{
  _at_IX(); // @IX
  _at_IY(); // @IY
}


// ================================================
// 0xdd76: WORD 'UNK_0xdd78' codep=0x224c parp=0xdd78
// ================================================

void UNK_0xdd78() // UNK_0xdd78
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}

// 0xdd82: db 0x4c 0x22 0xc2 0x51 0xf2 0x79 0x90 0x16 0x14 0x22 0x19 0x00 'L" Q y   "  '

// ================================================
// 0xdd8e: WORD 'UNK_0xdd90' codep=0x73ea parp=0xdd90
// ================================================
// 0xdd90: db 0x19 0x0b 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xdd96: WORD 'UNK_0xdd98' codep=0x73ea parp=0xdd98
// ================================================
// 0xdd98: db 0x19 0x0e 0x02 0x49 0x91 0x64 '   I d'

// ================================================
// 0xdd9e: WORD 'UNK_0xdda0' codep=0x73ea parp=0xdda0
// ================================================
// 0xdda0: db 0x19 0x13 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xdda6: WORD 'UNK_0xdda8' codep=0x73ea parp=0xdda8
// ================================================
// 0xdda8: db 0x19 0x12 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xddae: WORD 'UNK_0xddb0' codep=0x73ea parp=0xddb0
// ================================================
// 0xddb0: db 0x19 0x14 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xddb6: WORD 'UNK_0xddb8' codep=0x744d parp=0xddb8
// ================================================
// 0xddb8: db 0x19 0x0c 0x01 0x4d 0x74 0x19 0x12 0x02 '   Mt   '

// ================================================
// 0xddc0: WORD 'UNK_0xddc2' codep=0x744d parp=0xddc2
// ================================================
// 0xddc2: db 0x19 0x14 0x02 '   '

// ================================================
// 0xddc5: WORD 'UNK_0xddc7' codep=0x744d parp=0xddc7
// ================================================
// 0xddc7: db 0x19 0x11 0x01 '   '

// ================================================
// 0xddca: WORD 'UNK_0xddcc' codep=0x744d parp=0xddcc
// ================================================
// 0xddcc: db 0x19 0x0b 0x01 0x14 0x22 0x14 0x00 0x4d 0x74 0x14 0x11 0x01 0x4d 0x74 0x14 0x12 0x01 '    "  Mt   Mt   '

// ================================================
// 0xdddd: WORD 'UNK_0xdddf' codep=0x744d parp=0xdddf
// ================================================
// 0xdddf: db 0x14 0x13 0x01 0x4d 0x74 0x14 0x14 0x01 0x4d 0x74 0x14 0x15 0x01 0x4d 0x74 0x14 0x16 0x01 0x4d 0x74 0x14 0x17 0x01 0x4d 0x74 0x14 0x18 0x01 0x4d 0x74 0x14 0x19 0x01 '   Mt   Mt   Mt   Mt   Mt   Mt   '

// ================================================
// 0xde00: WORD 'UNK_0xde02' codep=0x744d parp=0xde02
// ================================================
// 0xde02: db 0x14 0x1a 0x01 '   '

// ================================================
// 0xde05: WORD 'UNK_0xde07' codep=0x744d parp=0xde07
// ================================================
// 0xde07: db 0x14 0x1b 0x01 '   '

// ================================================
// 0xde0a: WORD 'UNK_0xde0c' codep=0x744d parp=0xde0c
// ================================================
// 0xde0c: db 0x14 0x1c 0x01 '   '

// ================================================
// 0xde0f: WORD 'UNK_0xde11' codep=0x744d parp=0xde11
// ================================================
// 0xde11: db 0x14 0x1d 0x01 '   '

// ================================================
// 0xde14: WORD 'UNK_0xde16' codep=0x744d parp=0xde16
// ================================================
// 0xde16: db 0x14 0x1e 0x01 '   '

// ================================================
// 0xde19: WORD 'UNK_0xde1b' codep=0x744d parp=0xde1b
// ================================================
// 0xde1b: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xde1e: WORD 'UNK_0xde20' codep=0x744d parp=0xde20
// ================================================
// 0xde20: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xde23: WORD 'UNK_0xde25' codep=0x744d parp=0xde25
// ================================================
// 0xde25: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xde28: WORD 'UNK_0xde2a' codep=0x744d parp=0xde2a
// ================================================
// 0xde2a: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xde2d: WORD 'UNK_0xde2f' codep=0x744d parp=0xde2f
// ================================================
// 0xde2f: db 0x11 0x17 0x03 '   '

// ================================================
// 0xde32: WORD 'UNK_0xde34' codep=0x744d parp=0xde34
// ================================================
// 0xde34: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xde37: WORD 'UNK_0xde39' codep=0x1d29 parp=0xde39
// ================================================
// 0xde39: db 0x00 0x00 '  '

// ================================================
// 0xde3b: WORD 'UNK_0xde3d' codep=0x1d29 parp=0xde3d
// ================================================
// 0xde3d: db 0x00 0x00 '  '

// ================================================
// 0xde3f: WORD 'UNK_0xde41' codep=0x1d29 parp=0xde41
// ================================================
// 0xde41: db 0x00 0x00 '  '

// ================================================
// 0xde43: WORD 'UNK_0xde45' codep=0x1d29 parp=0xde45
// ================================================
// 0xde45: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xde49: WORD 'UNK_0xde4b' codep=0x1d29 parp=0xde4b
// ================================================
// 0xde4b: db 0x3a 0x20 ': '

// ================================================
// 0xde4d: WORD 'UNK_0xde4f' codep=0x1d29 parp=0xde4f
// ================================================
// 0xde4f: db 0x56 0x3a 0x20 0x45 'V: E'

// ================================================
// 0xde53: WORD 'UNK_0xde55' codep=0x1d29 parp=0xde55
// ================================================
// 0xde55: db 0x00 0x00 '  '

// ================================================
// 0xde57: WORD 'UNK_0xde59' codep=0x224c parp=0xde59
// ================================================

void UNK_0xde59() // UNK_0xde59
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
  Push(0); // 0
  Push(a); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xde75: WORD 'UNK_0xde77' codep=0x224c parp=0xde77
// ================================================

void UNK_0xde77() // UNK_0xde77
{
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__7)); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xde7f: WORD 'UNK_0xde81' codep=0x224c parp=0xde81
// ================================================

void UNK_0xde81() // UNK_0xde81
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
// 0xde99: WORD 'UNK_0xde9b' codep=0x224c parp=0xde9b
// ================================================

void UNK_0xde9b() // UNK_0xde9b
{

  label1:
  Push(Read16(cc__dash_1)); // -1
  Push(2); // 2
  RRND(); // RRND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xdea9: WORD 'UNK_0xdeab' codep=0x224c parp=0xdeab
// ================================================

void UNK_0xdeab() // UNK_0xdeab
{
  Push(Read16(cc__dash_1)); // -1
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xdeb3: WORD 'UNK_0xdeb5' codep=0x224c parp=0xdeb5
// ================================================

void UNK_0xdeb5() // UNK_0xdeb5
{
  unsigned short int a;
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
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label3:
  Push(a); // R>
}


// ================================================
// 0xdeef: WORD 'UNK_0xdef1' codep=0x224c parp=0xdef1
// ================================================

void UNK_0xdef1() // UNK_0xdef1
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0019);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(0x63fa); // IFIELD(UNK_0xddcc)
  goto label2;

  label1:
  Push(0x6438); // IFIELD(UNK_0xde2a)

  label2:
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xdf09: WORD 'X=-1' codep=0x4a4f parp=0xdf12
// ================================================

void X_eq__dash_1() // X=-1
{
  switch(Pop()) // X=-1
  {
  case 65535:
    Push(Read16(cc__5)); // 5
    break;
  case 1:
    Push(Read16(cc__3)); // 3
    break;
  case 0:
    Push(Read16(cc__4)); // 4
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf22: WORD 'X=0' codep=0x4a4f parp=0xdf2a
// ================================================

void X_eq_0() // X=0
{
  switch(Pop()) // X=0
  {
  case 65535:
    Push(Read16(cc__6)); // 6
    break;
  case 1:
    Push(2); // 2
    break;
  case 0:
    UNK_0xdef1(); // UNK_0xdef1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf3a: WORD 'X=1' codep=0x4a4f parp=0xdf42
// ================================================

void X_eq_1() // X=1
{
  switch(Pop()) // X=1
  {
  case 65535:
    Push(Read16(cc__7)); // 7
    break;
  case 1:
    Push(1); // 1
    break;
  case 0:
    Push(0); // 0
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf52: WORD 'KEY>ORIEN' codep=0x4a4f parp=0xdf60
// ================================================

void KEY_gt_ORIEN() // KEY>ORIEN
{
  switch(Pop()) // KEY>ORIEN
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
// 0xdf70: WORD 'UNK_0xdf72' codep=0x224c parp=0xdf72
// ================================================

void UNK_0xdf72() // UNK_0xdf72
{
  Push(pp_UNK_0xde55); // UNK_0xde55
  Push(Read16(Pop())); // @
  UNK_0xdd46(); // UNK_0xdd46
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xde55); // UNK_0xde55
  _ex__3(); // !_3
}


// ================================================
// 0xdf8a: WORD 'UNK_0xdf8c' codep=0x224c parp=0xdf8c
// ================================================

void UNK_0xdf8c() // UNK_0xdf8c
{
  UNK_0xdd4e(); // UNK_0xdd4e
  Push(Read16(cc__3)); // 3
  _st_(); // <
}


// ================================================
// 0xdf94: WORD 'UNK_0xdf96' codep=0x224c parp=0xdf96
// ================================================

void UNK_0xdf96() // UNK_0xdf96
{
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xde59(); // UNK_0xde59
  Push(Read16(cc__3)); // 3
  _st_(); // <
}


// ================================================
// 0xdfa2: WORD 'UNK_0xdfa4' codep=0x224c parp=0xdfa4
// ================================================

void UNK_0xdfa4() // UNK_0xdfa4
{
  Push(Read16(cc__ask_A_dash_WEAP)); // ?A-WEAP
  LoadData("UNK_0xdda8"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfb0: WORD 'UNK_0xdfb2' codep=0x224c parp=0xdfb2
// ================================================

void UNK_0xdfb2() // UNK_0xdfb2
{
  Push(Read16(cc__ask_A_dash_WEAP)); // ?A-WEAP
  LoadData("UNK_0xddb0"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfbe: WORD 'UNK_0xdfc0' codep=0x224c parp=0xdfc0
// ================================================

void UNK_0xdfc0() // UNK_0xdfc0
{
  Push(Read16(cc__ask_A_dash_WEAP)); // ?A-WEAP
  LoadData("UNK_0xdda0"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xdd46(); // UNK_0xdd46
  UNK_0xdfb2(); // UNK_0xdfb2
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfd0: WORD 'UNK_0xdfd2' codep=0x224c parp=0xdfd2
// ================================================

void UNK_0xdfd2() // UNK_0xdfd2
{
  LoadData("UNK_0xdd90"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  UNK_0xdd4e(); // UNK_0xdd4e
  _st_(); // <
  Push(pp_UNK_0xde3d); // UNK_0xde3d
  Push(Read16(Pop())); // @
  Push(0x000a);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdff2: WORD 'UNK_0xdff4' codep=0x224c parp=0xdff4
// ================================================

void UNK_0xdff4() // UNK_0xdff4
{
  LoadData("UNK_0xdd90"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Read16(cc__8)); // 8
  Push(Pop() * Pop()); // *
  UNK_0xdd4e(); // UNK_0xdd4e
  _st_(); // <
}


// ================================================
// 0xe008: WORD 'UNK_0xe00a' codep=0x744d parp=0xe00a
// ================================================
// 0xe00a: db 0x34 0x0c 0x01 '4  '

// ================================================
// 0xe00d: WORD 'UNK_0xe00f' codep=0x224c parp=0xe00f
// ================================================

void UNK_0xe00f() // UNK_0xe00f
{
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  UNK_0xdd46(); // UNK_0xdd46
}


// ================================================
// 0xe017: WORD 'UNK_0xe019' codep=0x224c parp=0xe019
// ================================================

void UNK_0xe019() // UNK_0xe019
{
  UNK_0xdd4e(); // UNK_0xdd4e
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe023: WORD 'UNK_0xe025' codep=0x224c parp=0xe025
// ================================================

void UNK_0xe025() // UNK_0xe025
{
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x63fb); // IFIELD(UNK_0xe00a)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  UNK_0xdd46(); // UNK_0xdd46
}


// ================================================
// 0xe035: WORD 'UNK_0xe037' codep=0x3b68 parp=0xe037
// ================================================
// 0xe037: db 0x01 0x00 0xc0 0xd4 '    '

// ================================================
// 0xe03b: WORD 'UNK_0xe03d' codep=0x1d29 parp=0xe03d
// ================================================
// 0xe03d: db 0x56 0x3a 0x20 0x3c 'V: <'

// ================================================
// 0xe041: WORD 'UNK_0xe043' codep=0x224c parp=0xe043
// ================================================

void UNK_0xe043() // UNK_0xe043
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push2Words("UNK_0xe037");
  Push(pp_UNK_0xe03d); // UNK_0xe03d
  _2_at_(); // 2@
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe053: WORD 'UNK_0xe055' codep=0x224c parp=0xe055
// ================================================

void UNK_0xe055() // UNK_0xe055
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe03d); // UNK_0xe03d
  D_ex_(); // D!
}

// 0xe05f: db 0x4c 0x22 0x4c 0xdd 0x83 0x3b 0x46 0x12 0x90 0x16 'L"L  ;F   '

// ================================================
// 0xe069: WORD 'UNK_0xe06b' codep=0x224c parp=0xe06b
// ================================================

void UNK_0xe06b() // UNK_0xe06b
{
  Push(0x63fb); // IFIELD(UNK_0xddb8)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xdd46(); // UNK_0xdd46
}


// ================================================
// 0xe073: WORD 'UNK_0xe075' codep=0x2214 parp=0xe075
// ================================================
// 0xe075: db 0x0b 0x00 '  '

// ================================================
// 0xe077: WORD 'UNK_0xe079' codep=0x2214 parp=0xe079
// ================================================
// 0xe079: db 0x05 0x00 '  '

// ================================================
// 0xe07b: WORD 'UNK_0xe07d' codep=0x224c parp=0xe07d
// ================================================

void UNK_0xe07d() // UNK_0xe07d
{
  unsigned short int a;
  unsigned short int b;
  a = Pop(); // >R
  UNK_0xdd78(); // UNK_0xdd78
  UNK_0xdd64(); // UNK_0xdd64
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
// 0xe09f: WORD 'UNK_0xe0a1' codep=0x224c parp=0xe0a1
// ================================================

void UNK_0xe0a1() // UNK_0xe0a1
{
  Push(Read16(cc_UNK_0xe075)); // UNK_0xe075
  UNK_0xe07d(); // UNK_0xe07d
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe0a9: WORD 'UNK_0xe0ab' codep=0x224c parp=0xe0ab
// ================================================

void UNK_0xe0ab() // UNK_0xe0ab
{
  Push(Read16(cc_UNK_0xe079)); // UNK_0xe079
  UNK_0xe07d(); // UNK_0xe07d
}

// 0xe0b1: db 0x4c 0x22 0x9f 0xe0 0x07 0x13 0xa9 0xe0 0x07 0x13 0xf5 0x12 0x90 0x16 'L"            '

// ================================================
// 0xe0bf: WORD 'UNK_0xe0c1' codep=0x1d29 parp=0xe0c1
// ================================================
// 0xe0c1: db 0x3a 0x20 ': '

// ================================================
// 0xe0c3: WORD 'UNK_0xe0c5' codep=0x1d29 parp=0xe0c5
// ================================================
// 0xe0c5: db 0x56 0x3a 0x20 0xa0 'V:  '

// ================================================
// 0xe0c9: WORD 'UNK_0xe0cb' codep=0x224c parp=0xe0cb
// ================================================

void UNK_0xe0cb() // UNK_0xe0cb
{
  Push(pp_UNK_0xe0c1); // UNK_0xe0c1
  _st__ex__gt_(); // <!>
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe0c5); // UNK_0xe0c5
  _2_ex_(); // 2!
}


// ================================================
// 0xe0d9: WORD 'UNK_0xe0db' codep=0x224c parp=0xe0db
// ================================================

void UNK_0xe0db() // UNK_0xe0db
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe0c5); // UNK_0xe0c5
  _2_at_(); // 2@
  Push(pp_UNK_0xe0c1); // UNK_0xe0c1
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe0ef: WORD 'UNK_0xe0f1' codep=0x224c parp=0xe0f1
// ================================================

void UNK_0xe0f1() // UNK_0xe0f1
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x640b); // IFIELD(UNK_0xde0c)
  UNK_0xde77(); // UNK_0xde77
  UNK_0xdd46(); // UNK_0xdd46
  Push(0x640a); // IFIELD(UNK_0xde07)
  UNK_0xde81(); // UNK_0xde81
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe107: WORD 'UNK_0xe109' codep=0x224c parp=0xe109
// ================================================

void UNK_0xe109() // UNK_0xe109
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x640d); // IFIELD(UNK_0xde16)
  UNK_0xde77(); // UNK_0xde77
  UNK_0xdd46(); // UNK_0xdd46
  Push(0x640c); // IFIELD(UNK_0xde11)
  UNK_0xde81(); // UNK_0xde81
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe11f: WORD 'UNK_0xe121' codep=0x224c parp=0xe121
// ================================================

void UNK_0xe121() // UNK_0xe121
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe12b: WORD 'UNK_0xe12d' codep=0x224c parp=0xe12d
// ================================================

void UNK_0xe12d() // UNK_0xe12d
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__8)); // 8
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe137: WORD 'UNK_0xe139' codep=0x224c parp=0xe139
// ================================================

void UNK_0xe139() // UNK_0xe139
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0010);
  Push((Pop()==Pop())?1:0); // =
}

// 0xe145: db 0x29 0x1d 0x00 0x00 0x4c 0x22 0x4c 0xdd 0x5d 0x17 0x5a 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x45 0xe1 0xac 0x3b 0x53 0x13 0x45 0xe1 0xae 0x0b 0x44 0xdd 0x90 0x16 ')   L"L ] Z F     E  ;S E   D   '

// ================================================
// 0xe165: WORD 'UNK_0xe167' codep=0x224c parp=0xe167
// ================================================

void UNK_0xe167() // UNK_0xe167
{
  Push(pp_UNK_0xde41); // UNK_0xde41
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(Read16(cc__dash_1)); // -1
  Push(1); // 1
  RRND(); // RRND
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe17f: WORD 'UNK_0xe181' codep=0x224c parp=0xe181
// ================================================

void UNK_0xe181() // UNK_0xe181
{
  Push(0x6434); // IFIELD(UNK_0xde20)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__8)); // 8
  Push(Pop() & Pop()); // AND
  UNK_0xdd46(); // UNK_0xdd46
}


// ================================================
// 0xe18d: WORD 'UNK_0xe18f' codep=0x224c parp=0xe18f
// ================================================

void UNK_0xe18f() // UNK_0xe18f
{
  Push(0x641f); // IFIELD(UNK_0xde1b)
  Push(Read16(Pop())); // @
  UNK_0xdd46(); // UNK_0xdd46
  UNK_0xe181(); // UNK_0xe181
  Push(Pop() & Pop()); // AND
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe1a3: WORD 'UNK_0xe1a5' codep=0x224c parp=0xe1a5
// ================================================

void UNK_0xe1a5() // UNK_0xe1a5
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(0xbf05); // probable 'OV/STXT'
  return;

  label1:
  Push(0xbef3); // probable 'OV/STATUS'
}


// ================================================
// 0xe1bf: WORD 'UNK_0xe1c1' codep=0x224c parp=0xe1c1
// ================================================

void UNK_0xe1c1() // UNK_0xe1c1
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(Read16(cc__3)); // 3
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(0xbe4b); // probable 'OVDBA'
  return;

  label1:
  Push(0xbe2b); // probable 'OV/DA'
}


// ================================================
// 0xe1db: WORD 'UNK_0xe1dd' codep=0x224c parp=0xe1dd
// ================================================

void UNK_0xe1dd() // UNK_0xe1dd
{
  Push(0x6421); // IFIELD(UNK_0xde25)
  Push(Read16(Pop())); // @
  UNK_0xdd46(); // UNK_0xdd46
  UNK_0xe18f(); // UNK_0xe18f
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe1a5(); // UNK_0xe1a5
  return;

  label1:
  UNK_0xe1c1(); // UNK_0xe1c1
}


// ================================================
// 0xe1f5: WORD 'UNK_0xe1f7' codep=0x1d29 parp=0xe1f7
// ================================================
// 0xe1f7: db 0x3a 0x20 ': '

// ================================================
// 0xe1f9: WORD 'UNK_0xe1fb' codep=0x2214 parp=0xe1fb
// ================================================
// 0xe1fb: db 0x14 0x00 '  '

// ================================================
// 0xe1fd: WORD 'UNK_0xe1ff' codep=0x2214 parp=0xe1ff
// ================================================
// 0xe1ff: db 0x16 0x00 '  '

// ================================================
// 0xe201: WORD 'UNK_0xe203' codep=0x2214 parp=0xe203
// ================================================
// 0xe203: db 0x01 0x00 '  '

// ================================================
// 0xe205: WORD 'UNK_0xe207' codep=0x2214 parp=0xe207
// ================================================
// 0xe207: db 0x00 0x00 '  '

// ================================================
// 0xe209: WORD 'UNK_0xe20b' codep=0x224c parp=0xe20b
// ================================================

void UNK_0xe20b() // UNK_0xe20b
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  C_co_(); // C,
  CODE(); // (;CODE) inlined assembler code
// 0xe211: call   1649
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xe1f7); // UNK_0xe1f7
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe21e: WORD 'CURRX' codep=0xe211 parp=0xe228
// ================================================
// 0xe228: db 0x00 ' '

// ================================================
// 0xe229: WORD 'CURRY' codep=0xe211 parp=0xe233
// ================================================
// 0xe233: db 0x04 ' '

// ================================================
// 0xe234: WORD 'DESTX' codep=0xe211 parp=0xe23e
// ================================================
// 0xe23e: db 0x08 ' '

// ================================================
// 0xe23f: WORD 'DESTY' codep=0xe211 parp=0xe249
// ================================================
// 0xe249: db 0x0a ' '

// ================================================
// 0xe24a: WORD 'MORIG' codep=0xe211 parp=0xe254
// ================================================
// 0xe254: db 0x0c ' '

// ================================================
// 0xe255: WORD 'MCLASS' codep=0xe211 parp=0xe260
// ================================================
// 0xe260: db 0x0d ' '

// ================================================
// 0xe261: WORD 'DELTAX' codep=0xe211 parp=0xe26c
// ================================================
// 0xe26c: db 0x0e ' '

// ================================================
// 0xe26d: WORD 'DELTAY' codep=0xe211 parp=0xe278
// ================================================
// 0xe278: db 0x12 ' '

// ================================================
// 0xe279: WORD 'UNK_0xe27b' codep=0x224c parp=0xe27b
// ================================================

void UNK_0xe27b() // UNK_0xe27b
{
  MCLASS(); // MCLASS
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe287: WORD 'MARRAY' codep=0x1d29 parp=0xe292
// ================================================
// 0xe292: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x44 0xe4 0xae 0x0b 0x90 0x16 0x4d 0x74 0x23 0x0a 0x02 0x4d 0x74 0x30 0x0b 0xff 0x4d 0x74 0x24 0x0a 0x01 0x4d '                                                                                                                                                                                                                                                                                                                                                                                                                                                        D     Mt#  Mt0  Mt$  M'

// ================================================
// 0xe460: WORD 'UNK_0xe462' codep=0x224c parp=0xe462
// ================================================

void UNK_0xe462() // UNK_0xe462
{
  Push(pp_MARRAY); // MARRAY
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  Push(Read16(cc_UNK_0xe1ff)); // UNK_0xe1ff
  Push(Pop() * Pop()); // *
  Push(0); // 0
  FILL_1(); // FILL_1
}


// ================================================
// 0xe470: WORD 'UNK_0xe472' codep=0x224c parp=0xe472
// ================================================

void UNK_0xe472() // UNK_0xe472
{
  Push(Read16(cc_UNK_0xe1ff)); // UNK_0xe1ff
  Push(Pop() * Pop()); // *
  Push(pp_MARRAY); // MARRAY
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe1f7); // UNK_0xe1f7
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe480: WORD 'UNK_0xe482' codep=0x224c parp=0xe482
// ================================================

void UNK_0xe482() // UNK_0xe482
{
  CURRX(); // CURRX
  Push(Read16(Pop())); // @
  CURRY(); // CURRY
  Push(Read16(Pop())); // @
}

// 0xe48c: db 0x4c 0x22 0x3c 0xe2 0xae 0x0b 0x47 0xe2 0xae 0x0b 0x90 0x16 'L"<   G     '

// ================================================
// 0xe498: WORD 'UNK_0xe49a' codep=0x224c parp=0xe49a
// ================================================

void UNK_0xe49a() // UNK_0xe49a
{
  PRINT(".", 1); // (.")
}


// ================================================
// 0xe4a0: WORD 'UNK_0xe4a2' codep=0x224c parp=0xe4a2
// ================================================

void UNK_0xe4a2() // UNK_0xe4a2
{
  _gt_2FONT(); // >2FONT
  PRINT(".", 1); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe4ac: WORD 'UNK_0xe4ae' codep=0x224c parp=0xe4ae
// ================================================

void UNK_0xe4ae() // UNK_0xe4ae
{
  CURRX(); // CURRX
  Push(Read16(Pop())); // @
  Push(2); // 2
  MOD(); // MOD
  if (Pop() == 0) goto label1;
  PRINT("+", 1); // (.")
  return;

  label1:
  PRINT("*", 1); // (.")
}


// ================================================
// 0xe4c8: WORD 'SCALE>MIS' codep=0x4a4f parp=0xe4d6
// ================================================

void SCALE_gt_MIS() // SCALE>MIS
{
  switch(Pop()) // SCALE>MIS
  {
  case 2:
    UNK_0xe49a(); // UNK_0xe49a
    break;
  case 4:
    UNK_0xe4a2(); // UNK_0xe4a2
    break;
  case 8:
    UNK_0xe4ae(); // UNK_0xe4ae
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe4e6: WORD 'UNK_0xe4e8' codep=0x224c parp=0xe4e8
// ================================================

void UNK_0xe4e8() // UNK_0xe4e8
{
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_UNK_0xe207)); // UNK_0xe207
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  SetColor("RED");
  return;

  label1:
  SetColor("LT-BLUE");
}


// ================================================
// 0xe4fe: WORD 'UNK_0xe500' codep=0x224c parp=0xe500
// ================================================

void UNK_0xe500() // UNK_0xe500
{
  signed short int i, imax;
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  UNK_0xe27b(); // UNK_0xe27b
  if (Pop() == 0) goto label1;
  UNK_0xe482(); // UNK_0xe482
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(Read16(cc__3)); // 3
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  POS_dot_(); // POS.
  UNK_0xe4e8(); // UNK_0xe4e8
  _ex_COLOR(); // !COLOR
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  Push(Read16(Pop())); // @
  SCALE_gt_MIS(); // SCALE>MIS case

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffda

  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe534: WORD 'UNK_0xe536' codep=0x224c parp=0xe536
// ================================================

void UNK_0xe536() // UNK_0xe536
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0); // 0
  SWAP(); // SWAP
  Push(1); // 1
  Push(a); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xe544: WORD 'UNK_0xe546' codep=0x224c parp=0xe546
// ================================================

void UNK_0xe546() // UNK_0xe546
{
  unsigned short int a;
  DESTX(); // DESTX
  Push(Read16(Pop())); // @
  CURRX(); // CURRX
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  DESTY(); // DESTY
  Push(Read16(Pop())); // @
  CURRY(); // CURRY
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  a = Pop(); // >R
  Push(Read16(a)); // R@
  UNK_0xe536(); // UNK_0xe536
  DELTAY(); // DELTAY
  _2_ex_(); // 2!
  Push(a); // R>
  UNK_0xe536(); // UNK_0xe536
  DELTAX(); // DELTAX
  _2_ex_(); // 2!
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  CURRX(); // CURRX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  CURRY(); // CURRY
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe58c: WORD 'UNK_0xe58e' codep=0x224c parp=0xe58e
// ================================================

void UNK_0xe58e() // UNK_0xe58e
{
  signed short int i, imax;
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  UNK_0xe167(); // UNK_0xe167
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _dot_ICON(); // .ICON
  i++;
  } while(i<imax); // (LOOP) 0xfff8

}


// ================================================
// 0xe5aa: WORD 'UNK_0xe5ac' codep=0x224c parp=0xe5ac
// ================================================

void UNK_0xe5ac() // UNK_0xe5ac
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe5ba: WORD 'UNK_0xe5bc' codep=0x224c parp=0xe5bc
// ================================================

void UNK_0xe5bc() // UNK_0xe5bc
{
  CURRY(); // CURRY
  _2_at_(); // 2@
  DELTAY(); // DELTAY
  _2_at_(); // 2@
  D_plus_(); // D+
  CURRY(); // CURRY
  _2_ex_(); // 2!
  CURRX(); // CURRX
  _2_at_(); // 2@
  DELTAX(); // DELTAX
  _2_at_(); // 2@
  D_plus_(); // D+
  CURRX(); // CURRX
  _2_ex_(); // 2!
}


// ================================================
// 0xe5da: WORD 'UNK_0xe5dc' codep=0x224c parp=0xe5dc
// ================================================

void UNK_0xe5dc() // UNK_0xe5dc
{
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SetColor("DK-GREEN");
  goto label2;

  label1:
  SetColor("BLACK");

  label2:
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
}


// ================================================
// 0xe5f2: WORD 'UNK_0xe5f4' codep=0x224c parp=0xe5f4
// ================================================

void UNK_0xe5f4() // UNK_0xe5f4
{
  UNK_0xe5ac(); // UNK_0xe5ac
  _gt_MAINVIEW(); // >MAINVIEW
  UNK_0xe5dc(); // UNK_0xe5dc
  VCLIPSET(); // VCLIPSET
  UNK_0xe500(); // UNK_0xe500
  UNK_0xe58e(); // UNK_0xe58e
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe608: WORD 'UNK_0xe60a' codep=0x224c parp=0xe60a
// ================================================

void UNK_0xe60a() // UNK_0xe60a
{
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_UNK_0xe207)); // UNK_0xe207
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xde3d); // UNK_0xde3d
  goto label2;

  label1:
  Push(pp_UNK_0xde39); // UNK_0xde39

  label2:
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe622: WORD 'UNK_0xe624' codep=0x224c parp=0xe624
// ================================================

void UNK_0xe624() // UNK_0xe624
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp__ask_SOUND); // ?SOUND
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x03e8);
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  BEEPON(); // BEEPON
  Push(i); // I
  TONE(); // TONE
  DISPLAY(); // DISPLAY
  Push(0x000c);
  Push(Read16(cc_MPS)); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  Push(0x0014);
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe65a: WORD 'UNK_0xe65c' codep=0x2214 parp=0xe65c
// ================================================
// 0xe65c: db 0x00 0x00 '  '

// ================================================
// 0xe65e: WORD 'UNK_0xe660' codep=0x224c parp=0xe660
// ================================================

void UNK_0xe660() // UNK_0xe660
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(0x0064);
  Push(0x03e8);
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("RED");
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(0xe65c);
  _ex__3(); // !_3
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP

  label1:

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  BEEPON(); // BEEPON
  Push(i); // I
  Push(i); // I
  Push(Pop()*2); // 2*
  RRND(); // RRND
  TONE(); // TONE
  Push(Read16(cc__3)); // 3
  Push(Read16(cc_MPS)); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  Push(Read16(cc_UNK_0xe65c)); // UNK_0xe65c
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe6aa: WORD 'UNK_0xe6ac' codep=0x1d29 parp=0xe6ac
// ================================================
// 0xe6ac: db 0x00 0x00 '  '

// ================================================
// 0xe6ae: WORD 'UNK_0xe6b0' codep=0x1d29 parp=0xe6b0
// ================================================
// 0xe6b0: db 0x00 0x00 '  '

// ================================================
// 0xe6b2: WORD 'UNK_0xe6b4' codep=0x224c parp=0xe6b4
// ================================================

void UNK_0xe6b4() // UNK_0xe6b4
{
  unsigned short int a;
  signed short int i, imax;
  Push(pp_UNK_0xe1f7); // UNK_0xe1f7
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  _2DUP(); // 2DUP
  UNK_0xe482(); // UNK_0xe482
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  imax = i; // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffee

  Pop(); Pop();// 2DROP
  Push(pp_UNK_0xe1f7); // UNK_0xe1f7
  Push(Read16(Pop())); // @
  Push(a); // R>
  Push(pp_UNK_0xe1f7); // UNK_0xe1f7
  _ex__3(); // !_3
}


// ================================================
// 0xe6e2: WORD 'UNK_0xe6e4' codep=0x224c parp=0xe6e4
// ================================================

void UNK_0xe6e4() // UNK_0xe6e4
{
  Push(pp_UNK_0xe6ac); // UNK_0xe6ac
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push2Words("0.");
  UNK_0xe6b4(); // UNK_0xe6b4
  Push(pp_UNK_0xe1f7); // UNK_0xe1f7
  _st__ex__gt_(); // <!>
  MCLASS(); // MCLASS
  _st_C_ex__gt_(); // <C!>
  MORIG(); // MORIG
  _st_C_ex__gt_(); // <C!>
  DESTY(); // DESTY
  _st__ex__gt_(); // <!>
  DESTX(); // DESTX
  _st__ex__gt_(); // <!>
  CURRY(); // CURRY
  _st__ex__gt_(); // <!>
  CURRX(); // CURRX
  _st__ex__gt_(); // <!>
  UNK_0xe546(); // UNK_0xe546
  Push(1); // 1
  Push(pp_UNK_0xe6ac); // UNK_0xe6ac
  _st__plus__ex__gt_(); // <+!>
  Push(1); // 1
  UNK_0xe60a(); // UNK_0xe60a
  UNK_0xe624(); // UNK_0xe624
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe72a: WORD 'UNK_0xe72c' codep=0x224c parp=0xe72c
// ================================================

void UNK_0xe72c() // UNK_0xe72c
{
  Push(Read16(cc__dash_1)); // -1
  UNK_0xe60a(); // UNK_0xe60a
  Push(pp_UNK_0xe1f7); // UNK_0xe1f7
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xe1ff)); // UNK_0xe1ff
  Push(0); // 0
  FILL_1(); // FILL_1
  Push(Read16(cc__dash_1)); // -1
  Push(pp_UNK_0xe6ac); // UNK_0xe6ac
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe742: WORD 'UNK_0xe744' codep=0x224c parp=0xe744
// ================================================

void UNK_0xe744() // UNK_0xe744
{
  unsigned short int a;
  signed short int i, imax;
  UNK_0xe482(); // UNK_0xe482
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_AT(); // ?ICONS-AT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0); // 0
  OVER(); // OVER
  a = Pop(); // >R
  SWAP(); // SWAP
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  POINT_gt_ICON(); // POINT>ICON
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_UNK_0xe207)); // UNK_0xe207
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  _at_ID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
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
  } while(i<imax); // (LOOP) 0xffd2

  Push(a); // R>
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe796: WORD 'UNK_0xe798' codep=0x224c parp=0xe798
// ================================================

void UNK_0xe798() // UNK_0xe798
{
  signed short int i, imax;
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  UNK_0xe27b(); // UNK_0xe27b
  if (Pop() == 0) goto label1;
  UNK_0xe482(); // UNK_0xe482
  _ask_INVIS(); // ?INVIS
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xe72c(); // UNK_0xe72c
  goto label1;

  label2:
  UNK_0xe744(); // UNK_0xe744
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(pp_UNK_0xe6b0); // UNK_0xe6b0
  _plus__ex_(); // +!

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd8

}


// ================================================
// 0xe7ca: WORD 'UNK_0xe7cc' codep=0x224c parp=0xe7cc
// ================================================

void UNK_0xe7cc() // UNK_0xe7cc
{
  unsigned short int a;
  unsigned short int b;
  PAD(); // PAD
  Push(pp_VIN); // VIN
  _ex__3(); // !_3
  PAD(); // PAD
  Push(0x0014);
  Push(Pop() + Pop()); // +
  Push(pp_VOUT); // VOUT
  _ex__3(); // !_3
  PAD(); // PAD
  Push(0x0028);
  Push(Pop() + Pop()); // +
  Push(pp_OIN); // OIN
  _ex__3(); // !_3
  PAD(); // PAD
  Push(0x003c);
  Push(Pop() + Pop()); // +
  Push(pp_OOUT); // OOUT
  _ex__3(); // !_3
  Push(2); // 2
  Push(pp__n_IN); // #IN
  _ex__3(); // !_3
  PAD(); // PAD
  a = Pop(); // >R
  Push(a); // I
  _ex__3(); // !_3
  Push(a); // I
  Push(Pop()+2); // 2+
  _ex__3(); // !_3
  Push(a); // I
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  _ex__3(); // !_3
  Push(a); // R>
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  _ex__3(); // !_3
  CLIPPER(); // CLIPPER
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  b = Pop(); // >R
  Push(b); // I
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(b); // I
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(b); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(b); // R>
  Push(Read16(Pop())); // @
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(Read16(cc__3)); // 3
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  Push(Read16(cc__8)); // 8
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @

  label1:
  Push(pp_TRJCT); // TRJCT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e
// ================================================

void UNK_0xe86e() // UNK_0xe86e
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  ABORT("ERR: MOVE-ICON", 14);// (ABORT")
  POINT_gt_ICON(); // POINT>ICON
  UNK_0xdd78(); // UNK_0xdd78
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xe5ac(); // UNK_0xe5ac
  UNK_0xe5f4(); // UNK_0xe5f4
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe89f: WORD 'UNK_0xe8a1' codep=0x224c parp=0xe8a1
// ================================================

void UNK_0xe8a1() // UNK_0xe8a1
{
  UNK_0xdeb5(); // UNK_0xdeb5
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
  Push(Pop() + Pop()); // +
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
}


// ================================================
// 0xe8b3: WORD 'UNK_0xe8b5' codep=0x224c parp=0xe8b5
// ================================================

void UNK_0xe8b5() // UNK_0xe8b5
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xde9b(); // UNK_0xde9b
  UNK_0xde9b(); // UNK_0xde9b
  goto label2;

  label1:
  UNK_0xdeb5(); // UNK_0xdeb5

  label2:
  Push(-Pop()); // NEGATE
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
  Push(-Pop()); // NEGATE
  Push(Pop() + Pop()); // +
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
}


// ================================================
// 0xe8df: WORD 'UNK_0xe8e1' codep=0x224c parp=0xe8e1
// ================================================

void UNK_0xe8e1() // UNK_0xe8e1
{
  unsigned short int a;
  signed short int i, imax;
  Push(pp_UNK_0xe6b0); // UNK_0xe6b0
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(pp_UNK_0xe6b0); // UNK_0xe6b0
  OFF(); // OFF
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  UNK_0xe27b(); // UNK_0xe27b
  if (Pop() == 0) goto label1;
  UNK_0xe744(); // UNK_0xe744
  if (Pop() == 0) goto label1;
  imax = i; // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffec

  Push(a); // R>
  Push(pp_UNK_0xe6b0); // UNK_0xe6b0
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe90f: WORD 'UNK_0xe911' codep=0x224c parp=0xe911
// ================================================

void UNK_0xe911() // UNK_0xe911
{
  Push(pp_UNK_0xde41); // UNK_0xde41
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xdeab(); // UNK_0xdeab
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xdeab(); // UNK_0xdeab
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xe927: WORD 'UNK_0xe929' codep=0x224c parp=0xe929
// ================================================

void UNK_0xe929() // UNK_0xe929
{
  UNK_0xe27b(); // UNK_0xe27b
  Push(Read16(cc__6)); // 6
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xe911(); // UNK_0xe911
  SWAP(); // SWAP
  DESTX(); // DESTX
  D_ex_(); // D!
  UNK_0xe546(); // UNK_0xe546
  UNK_0xe744(); // UNK_0xe744
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xe5bc(); // UNK_0xe5bc
}


// ================================================
// 0xe94b: WORD 'UNK_0xe94d' codep=0x224c parp=0xe94d
// ================================================

void UNK_0xe94d() // UNK_0xe94d
{
  signed short int i, imax;
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  MCLASS(); // MCLASS
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  UNK_0xe929(); // UNK_0xe929
  UNK_0xe5bc(); // UNK_0xe5bc

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffee

}


// ================================================
// 0xe969: WORD 'UNK_0xe96b' codep=0x224c parp=0xe96b
// ================================================

void UNK_0xe96b() // UNK_0xe96b
{
  Push(0x000a);
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(pp_UNK_0xde41); // UNK_0xde41
  _ex__3(); // !_3
}


// ================================================
// 0xe97b: WORD 'UNK_0xe97d' codep=0x224c parp=0xe97d
// ================================================

void UNK_0xe97d() // UNK_0xe97d
{
  signed short int i, imax;
  UNK_0xe94d(); // UNK_0xe94d
  UNK_0xe5f4(); // UNK_0xe5f4
  UNK_0xe798(); // UNK_0xe798
  Push(pp_UNK_0xe6b0); // UNK_0xe6b0
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  UNK_0xe8e1(); // UNK_0xe8e1
  UNK_0xe482(); // UNK_0xe482
  UNK_0xe27b(); // UNK_0xe27b
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(0xc8c3); // probable 'DO-DA'
  MODULE(); // MODULE
  UNK_0xe72c(); // UNK_0xe72c
  Push(Read16(cc__dash_1)); // -1
  Push(pp_UNK_0xe6b0); // UNK_0xe6b0
  _plus__ex_(); // +!
  i++;
  } while(i<imax); // (LOOP) 0xffe4

  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xe9b3: WORD 'UNK_0xe9b5' codep=0x224c parp=0xe9b5
// ================================================

void UNK_0xe9b5() // UNK_0xe9b5
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0018);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xdd78(); // UNK_0xdd78
  UNK_0xdeb5(); // UNK_0xdeb5
  SWAP(); // SWAP
  KEY_gt_ORIEN(); // KEY>ORIEN case
  Push(Read16(regsp)); // DUP
  Push(0x63fa); // IFIELD(UNK_0xddcc)
  C_ex_(); // C!
  Push(0x0023);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe9dd: WORD 'UNK_0xe9df' codep=0x224c parp=0xe9df
// ================================================

void UNK_0xe9df() // UNK_0xe9df
{
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xe9b5(); // UNK_0xe9b5
  Push(0x63fa); // IFIELD(UNK_0xddcc)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(cc__8)); // 8
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0x63fa); // IFIELD(UNK_0xddcc)
  C_ex_(); // C!
  Push(0x0023);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
}


// ================================================
// 0xe9ff: WORD 'UNK_0xea01' codep=0x224c parp=0xea01
// ================================================

void UNK_0xea01() // UNK_0xea01
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0012);
  _dash_(); // -
  Push(pp_XVIS); // XVIS
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x001e);
  _dash_(); // -
  Push(pp_YVIS); // YVIS
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xea1f: WORD 'UNK_0xea21' codep=0x224c parp=0xea21
// ================================================

void UNK_0xea21() // UNK_0xea21
{
  unsigned short int a;
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
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
// 0xea3b: WORD 'UNK_0xea3d' codep=0x224c parp=0xea3d
// ================================================

void UNK_0xea3d() // UNK_0xea3d
{
  unsigned short int a;
  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
  Push(0x6438); // IFIELD(UNK_0xde2a)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x001b);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
  Push(a); // R>
  Push(pp_IINDEX); // IINDEX
  _st__ex__gt_(); // <!>
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xea61: WORD 'UNK_0xea63' codep=0x224c parp=0xea63
// ================================================

void UNK_0xea63() // UNK_0xea63
{
  Push(0x6402); // IFIELD(UNK_0xdddf)
  Push(Read16(regsp)); // DUP
  UNK_0xde81(); // UNK_0xde81
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xea7f: WORD 'UNK_0xea81' codep=0x224c parp=0xea81
// ================================================

void UNK_0xea81() // UNK_0xea81
{
  unsigned short int a;
  unsigned short int b;
  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  b = Pop(); // >R
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  UNK_0xe5dc(); // UNK_0xe5dc
  UNK_0xe500(); // UNK_0xe500
  UNK_0xea21(); // UNK_0xea21
  _2SWAP(); // 2SWAP
  UNK_0xea21(); // UNK_0xea21
  Push(b); // R>
  _ex_COLOR(); // !COLOR
  UNK_0xe7cc(); // UNK_0xe7cc
  Pop(); // DROP
  LLINE(); // LLINE
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  Push(pp__ask_SOUND); // ?SOUND
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe660(); // UNK_0xe660

  label1:
  Push(a); // R>
  POINT_gt_ICON(); // POINT>ICON
}


// ================================================
// 0xeab9: WORD 'UNK_0xeabb' codep=0x224c parp=0xeabb
// ================================================

void UNK_0xeabb() // UNK_0xeabb
{
  UNK_0xea01(); // UNK_0xea01
  _gt_2ICONF(); // >2ICONF
  Push(2); // 2
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(Read16(cc__4)); // 4
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xeb13: WORD 'UNK_0xeb15' codep=0x224c parp=0xeb15
// ================================================

void UNK_0xeb15() // UNK_0xeb15
{
  UNK_0xea01(); // UNK_0xea01
  _gt_3ICONF(); // >3ICONF
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(2); // 2
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0022);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x003a);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x224c parp=0xeb63
// ================================================

void UNK_0xeb63() // UNK_0xeb63
{
  UNK_0xea01(); // UNK_0xea01
  _gt_1ICONFONT(); // >1ICONFONT
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(Read16(cc__8)); // 8
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0017);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x002a);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xebb9: WORD 'UNK_0xebbb' codep=0x1d29 parp=0xebbb
// ================================================
// 0xebbb: db 0x3a 0x20 ': '

// ================================================
// 0xebbd: WORD 'UNK_0xebbf' codep=0x1d29 parp=0xebbf
// ================================================
// 0xebbf: db 0x3a 0x20 ': '

// ================================================
// 0xebc1: WORD 'UNK_0xebc3' codep=0x224c parp=0xebc3
// ================================================

void UNK_0xebc3() // UNK_0xebc3
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _at_IX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _at_IY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(pp_UNK_0xebbf); // UNK_0xebbf
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_UNK_0xebbf); // UNK_0xebbf
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xebe5: WORD 'UNK_0xebe7' codep=0x224c parp=0xebe7
// ================================================

void UNK_0xebe7() // UNK_0xebe7
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _at_IX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _at_IY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(pp_UNK_0xebbb); // UNK_0xebbb
  Push(Read16(Pop())); // @
  MAX(); // MAX
  Push(pp_UNK_0xebbb); // UNK_0xebbb
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec09: WORD 'UNK_0xec0b' codep=0x224c parp=0xec0b
// ================================================

void UNK_0xec0b() // UNK_0xec0b
{
  signed short int i, imax;
  Push(pp_UNK_0xebbb); // UNK_0xebbb
  OFF(); // OFF
  Push(0x03e8);
  Push(pp_UNK_0xebbf); // UNK_0xebbf
  _st__ex__gt_(); // <!>
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002c);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  UNK_0xebc3(); // UNK_0xebc3
  UNK_0xebe7(); // UNK_0xebe7

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe6

}


// ================================================
// 0xec3d: WORD 'SET-SCALE' codep=0x224c parp=0xec4b
// ================================================
// entry

void SET_dash_SCALE() // SET-SCALE
{
  UNK_0xec0b(); // UNK_0xec0b
  Push(pp_UNK_0xebbb); // UNK_0xebbb
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(Read16(cc__5)); // 5
  _st_(); // <
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  UNK_0xeb63(); // UNK_0xeb63
  goto label2;

  label1:
  Push(Read16(cc__5)); // 5
  Push(Read16(cc__8)); // 8
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0xeabb(); // UNK_0xeabb
  goto label2;

  label3:
  UNK_0xeb15(); // UNK_0xeb15

  label2:
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xec79: WORD 'UNK_0xec7b' codep=0x224c parp=0xec7b
// ================================================

void UNK_0xec7b() // UNK_0xec7b
{
  UNK_0xe5ac(); // UNK_0xe5ac
  SET_dash_SCALE(); // SET-SCALE
}

// 0xec81: db 0x4c 0x22 0x5d 0x17 0x44 0x00 0x72 0x0f 0xf2 0x0e 0x9b 0x3b 0x72 0x0f 0xf2 0x0e 0x90 0x16 'L"] D r    ;r     '

// ================================================
// 0xec93: WORD 'UNK_0xec95' codep=0x224c parp=0xec95
// ================================================

void UNK_0xec95() // UNK_0xec95
{
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xe911(); // UNK_0xe911
  Push(Read16(cc_UNK_0xe207)); // UNK_0xe207
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0011);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(Read16(cc__6)); // 6
  goto label2;

  label1:
  LoadData("UNK_0xdda0"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@

  label2:
  UNK_0xe6e4(); // UNK_0xe6e4
  Push(Read16(cc__3)); // 3
  Push(0x6400); // IFIELD(UNK_0xddc7)
  C_ex_(); // C!
  Push(pp_UNK_0xde55); // UNK_0xde55
  ON_3(); // ON_3
  UNK_0xe9df(); // UNK_0xe9df
  UNK_0xe055(); // UNK_0xe055
}


// ================================================
// 0xecc5: WORD 'UNK_0xecc7' codep=0x224c parp=0xecc7
// ================================================

void UNK_0xecc7() // UNK_0xecc7
{
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;

  UNK_0x3f3b("LASER MISSED US!");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xece8: WORD 'UNK_0xecea' codep=0x224c parp=0xecea
// ================================================

void UNK_0xecea() // UNK_0xecea
{
  unsigned short int a;
  unsigned short int b;
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xe911(); // UNK_0xe911
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  SetColor("RED");
  UNK_0xea81(); // UNK_0xea81
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(b); // R>
  Push(a); // R>
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xecc7(); // UNK_0xecc7
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp__ask_ROD); // ?ROD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;

  UNK_0x3f3b("LASER PARTIALLY DEFLECTED ");
  _dot_TTY(); // .TTY
  goto label3;

  label2:

  UNK_0x3f3b("LASER CLASS ");
  _dot_TTY(); // .TTY
  LoadData("UNK_0xdda8"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .

  label3:
  Push(Read16(cc_UNK_0xe207)); // UNK_0xe207
  Push(0); // 0
  Push(0xc8c3); // probable 'DO-DA'
  MODULE(); // MODULE

  label1:
  Push(Read16(cc__3)); // 3
  Push(0x6400); // IFIELD(UNK_0xddc7)
  C_ex_(); // C!
  Push(pp_UNK_0xde55); // UNK_0xde55
  ON_3(); // ON_3
  UNK_0xe9df(); // UNK_0xe9df
  UNK_0xe055(); // UNK_0xe055
}


// ================================================
// 0xed68: WORD 'UNK_0xed6a' codep=0x224c parp=0xed6a
// ================================================

void UNK_0xed6a() // UNK_0xed6a
{
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xdd64(); // UNK_0xdd64
}


// ================================================
// 0xed70: WORD 'UNK_0xed72' codep=0x224c parp=0xed72
// ================================================

void UNK_0xed72() // UNK_0xed72
{
  UNK_0xed6a(); // UNK_0xed6a
  UNK_0xe8b5(); // UNK_0xe8b5
  Push(Read16(cc__4)); // 4
  Push(0x6400); // IFIELD(UNK_0xddc7)
  C_ex_(); // C!
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xe9b5(); // UNK_0xe9b5
  UNK_0xe86e(); // UNK_0xe86e
}


// ================================================
// 0xed84: WORD 'UNK_0xed86' codep=0x224c parp=0xed86
// ================================================

void UNK_0xed86() // UNK_0xed86
{
  UNK_0xed6a(); // UNK_0xed6a
  UNK_0xe8a1(); // UNK_0xe8a1
  Push(Read16(cc__3)); // 3
  Push(0x6400); // IFIELD(UNK_0xddc7)
  C_ex_(); // C!
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xe9b5(); // UNK_0xe9b5
  UNK_0xe86e(); // UNK_0xe86e
}


// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x224c parp=0xed9a
// ================================================

void UNK_0xed9a() // UNK_0xed9a
{
  if (Pop() == 0) goto label1;
  UNK_0xdd5a(); // UNK_0xdd5a
  if (Pop() == 0) goto label2;
  UNK_0xde9b(); // UNK_0xde9b
  goto label3;

  label2:
  Push(0); // 0

  label3:
  return;

  label1:
  UNK_0xde9b(); // UNK_0xde9b
}


// ================================================
// 0xedb4: WORD '?APPROACH' codep=0x224c parp=0xedc2
// ================================================

void _ask_APPROACH() // ?APPROACH
{
  Push(0x6400); // IFIELD(UNK_0xddc7)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__3)); // 3
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xedcc: WORD 'UNK_0xedce' codep=0x224c parp=0xedce
// ================================================

void UNK_0xedce() // UNK_0xedce
{
  unsigned short int a;
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(1); // 1
  UNK_0xed9a(); // UNK_0xed9a
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(a); // R>
  UNK_0xed9a(); // UNK_0xed9a
  Push(Pop() + Pop()); // +
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xe9b5(); // UNK_0xe9b5
  UNK_0xe86e(); // UNK_0xe86e
  Push(0); // 0
  Push(0x6400); // IFIELD(UNK_0xddc7)
  C_ex_(); // C!
}


// ================================================
// 0xedfc: WORD '<COMBAT>' codep=0xb869 parp=0xee09
// ================================================
// 0xee09: db 0x1a 0x12 0x0b 0x76 0xee 0x7c 0xee 0x83 0xee 0x89 0xee 0x90 0xee 0x99 0xee 0xa1 0xee 0xa9 0xee 0xaf 0xee 0xb4 0xee 0xba 0xee 0x8f 0x90 0x16 0x4c 0x22 0xf0 0xed 0x39 0x3f 0x12 0x21 0x21 0x48 0x55 0x4c 0x4c 0x20 0x44 0x45 0x53 0x54 0x52 0x4f 0x59 0x45 0x44 0x31 0x31 0x37 0x33 0x72 0xdf 0xc0 0xdf 0xd2 0xdf 0x8c 0xdf 0x2d 0xe1 0x39 0xe1 0xa4 0xdf 0xf4 0xdf 0xab 0xe0 0x0f 0xe0 0x21 0xe1 0x19 0xe0 0x6b 0xe0 0x25 0xe0 0x43 0xe0 0xa1 0xe0 0x96 0xdf 0x16 0x4c 0x22 0x4f 0x06 0x93 0x1f 0x93 0x1f 0xfa 0x1b 0xe8 0xd9 0x27 0x38 0x0c 0xd3 0x7c 0x93 0x3b 0x03 0x95 0xec 0x80 0x81 0x82 0x04 0x95 0xec 0x00 0x83 0x84 0x81 0x03 0x95 0xec 0x00 0x85 0x81 0x04 0xea 0xec 0x80 0x86 0x87 0x88 0x06 0xea 0xec 0x00 0x83 0x84 0x01 0x86 0x88 0x05 0xea 0xec 0x00 0x85 0x01 0x86 0x88 0x05 0x72 0xed 0x89 0x04 0x0a 0x8b 0x8c 0x03 0x72 0xed 0x8a 0x0d 0x8c 0x02 0x72 0xed 0x8e 0x8c 0x03 0x86 0xed 0x8c 0x84 0x8f 0x05 0x86 0xed 0x8c 0x84 0x10 0x86 0x01 '   v |                      L"  9? !!HULL DESTROYED1173r       - 9         !   k % C      L"O         '8  | ;                                            r       r     r                 '

// ================================================
// 0xeec2: WORD 'UNK_0xeec4' codep=0x224c parp=0xeec4
// ================================================

void UNK_0xeec4() // UNK_0xeec4
{
  Push(0x641f); // IFIELD(UNK_0xde1b)
  Push(Read16(Pop())); // @
  Push(0x6409); // IFIELD(UNK_0xde02)
  UNK_0xde77(); // UNK_0xde77
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  _st_(); // <
}


// ================================================
// 0xeed6: WORD 'UNK_0xeed8' codep=0x224c parp=0xeed8
// ================================================

void UNK_0xeed8() // UNK_0xeed8
{
  Push(pp__h_VES); // ^VES
  Push(Read16(Pop())); // @
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeee6: WORD 'UNK_0xeee8' codep=0x224c parp=0xeee8
// ================================================

void UNK_0xeee8() // UNK_0xeee8
{
  Push(pp__h_VES); // ^VES
  OFF(); // OFF
}


// ================================================
// 0xeeee: WORD 'UNK_0xeef0' codep=0x224c parp=0xeef0
// ================================================

void UNK_0xeef0() // UNK_0xeef0
{
  Push(0xee09); // probable '<COMBAT>'
  DISTRACT(); // DISTRACT
  Rule("<COMBAT>");
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xe06b(); // UNK_0xe06b
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xedce(); // UNK_0xedce
}


// ================================================
// 0xef06: WORD 'UNK_0xef08' codep=0x224c parp=0xef08
// ================================================

void UNK_0xef08() // UNK_0xef08
{
  Push(0x6403); // IFIELD(UNK_0xddc2)
  Push(Read16(Pop())); // @
  LoadData("UNK_0xdd98"); // from 'VESSEL      '
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(cc__5)); // 5
  LoadData("UNK_0xdd98"); // from 'VESSEL      '
  _plus__ex_(); // +!
}


// ================================================
// 0xef1e: WORD 'UNK_0xef20' codep=0x224c parp=0xef20
// ================================================

void UNK_0xef20() // UNK_0xef20
{
  UNK_0xeec4(); // UNK_0xeec4
  if (Pop() == 0) return;
  Push(0x0014);
  Push(0x641f); // IFIELD(UNK_0xde1b)
  _plus__ex_(); // +!
}


// ================================================
// 0xef30: WORD 'COMBAT' codep=0x224c parp=0xef3b
// ================================================
// entry

void COMBAT() // COMBAT
{
  SET_dash_SCALE(); // SET-SCALE
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label1;
  UNK_0xeed8(); // UNK_0xeed8
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  UNK_0xeef0(); // UNK_0xeef0
  UNK_0xef08(); // UNK_0xef08
  goto label3;

  label2:
  _at_ID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0xef20(); // UNK_0xef20

  label3:
  ICLOSE(); // ICLOSE
  Push(pp__h_VES); // ^VES
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  MOD(); // MOD
  Push(pp__h_VES); // ^VES
  _ex__3(); // !_3
  UNK_0xe97d(); // UNK_0xe97d

  label1:
  Push(pp_UNK_0xebbf); // UNK_0xebbf
  Push(Read16(Pop())); // @
  Push(0x0016);
  _gt_(); // >
  Push(pp__ask_COMBAT); // ?COMBAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_UNNEST); // 'UNNEST
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xefa7: WORD 'ORIENT>O' codep=0x1d29 parp=0xefb4
// ================================================
// 0xefb4: db 0x00 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0xff 0xff 0x00 0x00 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0x00 0x00 0xff 0xff 0x01 0x00 '                                '

// ================================================
// 0xefd4: WORD 'UNK_0xefd6' codep=0x224c parp=0xefd6
// ================================================

void UNK_0xefd6() // UNK_0xefd6
{
  unsigned short int a;
  Push(pp_UNK_0xebbb); // UNK_0xebbb
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xebbf); // UNK_0xebbf
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(0x6438); // IFIELD(UNK_0xde2a)
  Push(Read8(Pop())&0xFF); // C@
  _4_star_(); // 4*
  Push(pp_ORIENT_gt_O); // ORIENT>O
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
  Push(pp_UNK_0xde45); // UNK_0xde45
  _2_ex_(); // 2!
}


// ================================================
// 0xf00c: WORD 'UNK_0xf00e' codep=0x224c parp=0xf00e
// ================================================

void UNK_0xf00e() // UNK_0xf00e
{
  Push(0x6434); // IFIELD(UNK_0xde20)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf018: WORD 'UNK_0xf01a' codep=0x224c parp=0xf01a
// ================================================

void UNK_0xf01a() // UNK_0xf01a
{
  Push2Words("*STARSHIP-HOLD");
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
// 0xf03c: WORD 'UNK_0xf03e' codep=0x224c parp=0xf03e
// ================================================

void UNK_0xf03e() // UNK_0xf03e
{
  UNK_0xf01a(); // UNK_0xf01a
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(0x000a);
  M_star_(); // M*
  Push(pp__10_star_END); // 10*END
  _2_ex_(); // 2!
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf056: WORD 'UNK_0xf058' codep=0x224c parp=0xf058
// ================================================

void UNK_0xf058() // UNK_0xf058
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  ROT(); // ROT
  Push(0); // 0
  D_dash_(); // D-
  Push2Words("0.");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  _2_ex_(); // 2!
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_at_(); // 2@
  Push(a); // R>
  Push(0); // 0
  D_plus_(); // D+
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_ex_(); // 2!
}


// ================================================
// 0xf07e: WORD 'UNK_0xf080' codep=0x224c parp=0xf080
// ================================================

void UNK_0xf080() // UNK_0xf080
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
}


// ================================================
// 0xf088: WORD 'UNK_0xf08a' codep=0x224c parp=0xf08a
// ================================================

void UNK_0xf08a() // UNK_0xf08a
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Push(Read16(cc__5)); // 5
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  UNK_0xf01a(); // UNK_0xf01a
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0ae: WORD 'UNK_0xf0b0' codep=0x1d29 parp=0xf0b0
// ================================================
// 0xf0b0: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xf0b4: WORD 'UNK_0xf0b6' codep=0x224c parp=0xf0b6
// ================================================

void UNK_0xf0b6() // UNK_0xf0b6
{
  Push(0); // 0
  Push(0x00fa);
  ROT(); // ROT
  _dash_(); // -
  RRND(); // RRND
  Push(0x0032);
  _slash_(); // /
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xf0d6: WORD 'UNK_0xf0d8' codep=0x224c parp=0xf0d8
// ================================================

void UNK_0xf0d8() // UNK_0xf0d8
{
  unsigned short int a;
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6406); // IFIELD(UNK_0xde2f)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x640a); // IFIELD(UNK_0xde34)
  Push(Read8(Pop())&0xFF); // C@
  a = Pop(); // >R
  Push(pp_UNK_0xde4f); // UNK_0xde4f
  _2_at_(); // 2@
  Push(Read16(a)); // R@
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_UNK_0xf0b0); // UNK_0xf0b0
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(a); // R>
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_UNK_0xf0b0); // UNK_0xf0b0
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  _2DUP(); // 2DUP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_UNK_0xde45); // UNK_0xde45
  D_ex_(); // D!
}


// ================================================
// 0xf11c: WORD 'UNK_0xf11e' codep=0x224c parp=0xf11e
// ================================================

void UNK_0xf11e() // UNK_0xf11e
{
  signed short int i, imax;
  Push(0x2710);
  Push(pp_UNK_0xde4b); // UNK_0xde4b
  _ex__3(); // !_3
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xde45); // UNK_0xde45
  _2_at_(); // 2@
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xde59(); // UNK_0xde59
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xde4b); // UNK_0xde4b
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(pp_UNK_0xde4b); // UNK_0xde4b
  _st__ex__gt_(); // <!>
  UNK_0xdd70(); // UNK_0xdd70
  Push(pp_UNK_0xde4f); // UNK_0xde4f
  _2_ex_(); // 2!
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc6

  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf17c: WORD 'UNK_0xf17e' codep=0x224c parp=0xf17e
// ================================================

void UNK_0xf17e() // UNK_0xf17e
{
  Push(pp_UNK_0xde4b); // UNK_0xde4b
  Push(Read16(Pop())); // @
  Push(0x2710);
  _dash_(); // -
}


// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x224c parp=0xf18c
// ================================================

void UNK_0xf18c() // UNK_0xf18c
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("NO TARGET PRESENT");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf1a8: WORD 'UNK_0xf1aa' codep=0x224c parp=0xf1aa
// ================================================

void UNK_0xf1aa() // UNK_0xf1aa
{
  Push(1); // 1
  Push(0x5098); // probable '?FIRED-'
  _ex__3(); // !_3
}


// ================================================
// 0xf1b4: WORD 'UNK_0xf1b6' codep=0x224c parp=0xf1b6
// ================================================

void UNK_0xf1b6() // UNK_0xf1b6
{
  Push(pp_UNK_0xde39); // UNK_0xde39
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xe1fb)); // UNK_0xe1fb
  Push(Pop()>>1); // 2/
  _st_(); // <
  if (Pop() == 0) return;
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xf0d8(); // UNK_0xf0d8
  Push(Read16(cc_UNK_0xe203)); // UNK_0xe203
  Push(0x640b); // IFIELD(UNK_0xde0c)
  UNK_0xde77(); // UNK_0xde77
  UNK_0xe6e4(); // UNK_0xe6e4
  Push(Read16(cc__5)); // 5
  UNK_0xf058(); // UNK_0xf058
  UNK_0xe055(); // UNK_0xe055
  UNK_0xf1aa(); // UNK_0xf1aa
}


// ================================================
// 0xf1da: WORD 'UNK_0xf1dc' codep=0x224c parp=0xf1dc
// ================================================

void UNK_0xf1dc() // UNK_0xf1dc
{
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xf0d8(); // UNK_0xf0d8
  _2DUP(); // 2DUP
  Push(pp_UNK_0xde4f); // UNK_0xde4f
  _2_ex_(); // 2!
  VCLIPSET(); // VCLIPSET
  SetColor("LT-BLUE");
  UNK_0xea81(); // UNK_0xea81
  DCLIPSET(); // DCLIPSET
  Push(pp_UNK_0xde4f); // UNK_0xde4f
  _2_at_(); // 2@
  Push(Read16(cc_UNK_0xe203)); // UNK_0xe203
  Push(0); // 0
  Push(0xc8c3); // probable 'DO-DA'
  MODULE(); // MODULE
  Push(1); // 1
  UNK_0xf058(); // UNK_0xf058
  UNK_0xe055(); // UNK_0xe055
  UNK_0xf1aa(); // UNK_0xf1aa
}


// ================================================
// 0xf206: WORD 'UNK_0xf208' codep=0x224c parp=0xf208
// ================================================

void UNK_0xf208() // UNK_0xf208
{
  UNK_0xea63(); // UNK_0xea63
  if (Pop() == 0) goto label1;
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
  _2DUP(); // 2DUP
  Push(pp_XABS); // XABS
  _plus__ex_(); // +!
  Push(pp_YABS); // YABS
  _plus__ex_(); // +!
  _2DUP(); // 2DUP
  Push(0x63fc); // IFIELD(INST-X)
  _plus__ex_(); // +!
  Push(0x63fe); // IFIELD(INST-Y)
  _plus__ex_(); // +!
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


// ================================================
// 0xf23e: WORD 'UNK_0xf240' codep=0x224c parp=0xf240
// ================================================

void UNK_0xf240() // UNK_0xf240
{
  UNK_0xf080(); // UNK_0xf080
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf00e(); // UNK_0xf00e
  if (Pop() == 0) goto label2;
  UNK_0xefd6(); // UNK_0xefd6
  UNK_0xf11e(); // UNK_0xf11e
  UNK_0xf17e(); // UNK_0xf17e
  if (Pop() == 0) goto label3;
  UNK_0xdd64(); // UNK_0xdd64
  Push(pp_UNK_0xde4f); // UNK_0xde4f
  _2_at_(); // 2@
  UNK_0xde59(); // UNK_0xde59
  Push(Read16(cc__7)); // 7
  _st_(); // <
  UNK_0xe109(); // UNK_0xe109
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  UNK_0xf1dc(); // UNK_0xf1dc
  goto label5;

  label4:
  UNK_0xe0f1(); // UNK_0xe0f1
  if (Pop() == 0) goto label8;
  UNK_0xf1b6(); // UNK_0xf1b6
  goto label5;

  label8:
  UNK_0xe109(); // UNK_0xe109
  if (Pop() == 0) goto label9;
  UNK_0xf1dc(); // UNK_0xf1dc
  goto label5;

  label9:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("WEAPON NOT AVAILABLE");
  _dot_TTY(); // .TTY

  label5:
  goto label6;

  label3:
  UNK_0xf18c(); // UNK_0xf18c

  label6:
  goto label7;

  label2:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("WEAPONS NOT ARMED ");
  _dot_TTY(); // .TTY

  label7:
  return;

  label1:
  SetColor("RED");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("OUT OF FUEL! ");
  _dot_TTY(); // .TTY
}

// 0xf2e8: db 0x4c 0x22 0x1d 0x5e 0x37 0x3a 0x39 0xef 0x90 0x16 'L" ^7:9   '

// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  Push(0xc104); // probable '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0xc136); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _ex__3(); // !_3
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _ex__3(); // !_3
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_DEATH); // 'DEATH
  _ex__3(); // !_3
  Push(0xf2ea);
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _ex__3(); // !_3
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_ENDING); // 'ENDING
  _ex__3(); // !_3
  Push(0xc081); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _ex__3(); // !_3
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _2_ex_(); // 2!
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _ex__3(); // !_3
  Push(0xc05f); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _ex__3(); // !_3
  Push(pp__ask_HEAL); // ?HEAL
  ON_3(); // ON_3
  Push(pp__ask_COMBAT); // ?COMBAT
  ON_2(); // ON_2
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_2(); // ON_2
}


// ================================================
// 0xf350: WORD 'UNK_0xf352' codep=0x224c parp=0xf352
// ================================================

void UNK_0xf352() // UNK_0xf352
{
  Push(0xc104); // probable '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0xc136); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _ex__3(); // !_3
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _ex__3(); // !_3
  Push(0xc04e); // probable 'OBIT'
  Push(pp__i_DEATH); // 'DEATH
  _ex__3(); // !_3
  Push(0xafa3); // probable 'CEX+WAX'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _ex__3(); // !_3
  Push(0xc081); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _ex__3(); // !_3
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _ex__3(); // !_3
  Push(0xc05f); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _ex__3(); // !_3
  Push(0xbf56); // probable '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  _ex__3(); // !_3
  UNK_0xf08a(); // UNK_0xf08a
  Push(pp_UNK_0xde55); // UNK_0xde55
  OFF(); // OFF
  Push(pp_FORCEPTASK); // FORCEPTASK
  OFF_2(); // OFF_2
  Push(pp__ask_COMBAT); // ?COMBAT
  OFF_2(); // OFF_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3ac: WORD 'UNK_0xf3ae' codep=0x224c parp=0xf3ae
// ================================================

void UNK_0xf3ae() // UNK_0xf3ae
{
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x000d);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf3ba: WORD 'UNK_0xf3bc' codep=0x224c parp=0xf3bc
// ================================================

void UNK_0xf3bc() // UNK_0xf3bc
{
  _ro_XYSCAN(); // (XYSCAN case
  _2DUP(); // 2DUP
  KEY_gt_ORIEN(); // KEY>ORIEN case
  Push(0x6438); // IFIELD(UNK_0xde2a)
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  Push(0x6438); // IFIELD(UNK_0xde2a)
  C_ex_(); // C!
  UNK_0xea3d(); // UNK_0xea3d
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  UNK_0xe0db(); // UNK_0xe0db
  if (Pop() == 0) goto label2;
  UNK_0xf208(); // UNK_0xf208
  SET_dash_SCALE(); // SET-SCALE
  Push(0x07d0);
  Push(Read16(cc_MPS)); // MPS
  _slash_(); // /
  UNK_0xe0cb(); // UNK_0xe0cb
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  goto label4;

  label1:
  Pop(); Pop();// 2DROP

  label4:
  _ask_TRIG(); // ?TRIG
  UNK_0xf3ae(); // UNK_0xf3ae
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  UNK_0xf240(); // UNK_0xf240
  UNK_0xe1dd(); // UNK_0xe1dd
  MODULE(); // MODULE

  label5:
  UNK_0xe5f4(); // UNK_0xe5f4
  UNK_0xf3ae(); // UNK_0xf3ae
  if (Pop() == 0) return;
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414() // UNK_0xf414
{
  _gt_MAINVIEW(); // >MAINVIEW
  UNK_0xe5dc(); // UNK_0xe5dc
  _gt_DISPLAY(); // >DISPLAY
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("HIT SPACE BAR TO FIRE WEAPON");
  _dot_TTY(); // .TTY

  UNK_0x3f3b("HIT RETURN TO EXIT COMBAT ");
  _dot_TTY(); // .TTY
  Push(0xe500); // probable 'UNK_0xe500'
  Push(pp__i__dot_BACKG); // '.BACKG
  _ex__3(); // !_3
  UNK_0xeee8(); // UNK_0xeee8
  UNK_0xe96b(); // UNK_0xe96b
  Push(pp_UNK_0xde41); // UNK_0xde41
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;

  UNK_0x3f3b("CLOAKING DEVICE NOW ACTIVE");
  _dot_TTY(); // .TTY

  label1:
  Push(0xc03f); // probable '(ROL'
  MODULE(); // MODULE
  UNK_0xf2f4(); // UNK_0xf2f4
  UNK_0xe055(); // UNK_0xe055
  Push(pp_FORCEPTASK); // FORCEPTASK
  ON_3(); // ON_3
  UNK_0xf03e(); // UNK_0xf03e
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xec7b(); // UNK_0xec7b
  _gt_1FONT(); // >1FONT
  Push(pp__n_AUX); // #AUX
  OFF_2(); // OFF_2
  UNK_0xe1dd(); // UNK_0xe1dd
  MODULE(); // MODULE
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xf4b5: WORD 'WAR' codep=0x224c parp=0xf4bd
// ================================================
// entry

void WAR() // WAR
{
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(0xf352);
  Push(0xf3bc);
  Push(0xf414);
  DOTASKS(UNK_0xf414, UNK_0xf3bc, UNK_0xf352);
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf4df: WORD 'CLEAR-CO' codep=0x224c parp=0xf4ec
// ================================================
// entry

void CLEAR_dash_CO() // CLEAR-CO
{
  UNK_0xe462(); // UNK_0xe462
  Push(pp_UNK_0xe6ac); // UNK_0xe6ac
  OFF(); // OFF
  Push(pp_UNK_0xe6b0); // UNK_0xe6b0
  OFF(); // OFF
  Push(pp_UNK_0xde39); // UNK_0xde39
  OFF(); // OFF
  Push(pp_UNK_0xde3d); // UNK_0xde3d
  OFF(); // OFF
  UNK_0xe055(); // UNK_0xe055
  Push(0xc03f); // probable '(ROL'
  MODULE(); // MODULE
  Push(pp_UNK_0xde41); // UNK_0xde41
  OFF(); // OFF
  Push(0); // 0
  UNK_0xe0cb(); // UNK_0xe0cb
  Push(0x0006);
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(pp__ask_ROD); // ?ROD
  _st__ex__gt_(); // <!>
}

// 0xf51e: db 0x43 0x4f 0x4d 0x42 0x41 0x54 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x5c 0x20 0x43 0x4f 0x4d 0x42 0x41 0x54 0x20 0x20 0x43 0x4d 0x50 0x2d 0x28 0x20 0x72 0x66 0x67 0x32 0x35 0x73 0x65 0x70 0x38 0x37 0x29 0x2d 0x32 0x33 0x00 'COMBAT-VO_______________________----\ COMBAT  CMP-( rfg25sep87)-23 '
  