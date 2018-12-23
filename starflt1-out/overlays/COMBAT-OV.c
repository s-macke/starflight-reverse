// ====== OVERLAY 'COMBAT-OV' ======
// store offset = 0xdd30
// overlay size   = 0x1830

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WDD46  codep:0x224c wordp:0xdd46 size:0x0006 C-string:'WDD46'
//           WDD4E  codep:0x224c wordp:0xdd4e size:0x000a C-string:'WDD4E'
//           WDD5A  codep:0x224c wordp:0xdd5a size:0x0008 C-string:'WDD5A'
//           WDD64  codep:0x224c wordp:0xdd64 size:0x000a C-string:'WDD64'
//           WDD70  codep:0x224c wordp:0xdd70 size:0x0006 C-string:'WDD70'
//           WDD78  codep:0x224c wordp:0xdd78 size:0x000a C-string:'WDD78'
//           WDD84  codep:0x224c wordp:0xdd84 size:0x0006 C-string:'WDD84'
//           WDD8C  codep:0x2214 wordp:0xdd8c size:0x0002 C-string:'WDD8C'
//           WDD90  codep:0x73ea wordp:0xdd90 size:0x0006 C-string:'WDD90'
//           WDD98  codep:0x73ea wordp:0xdd98 size:0x0006 C-string:'WDD98'
//           WDDA0  codep:0x73ea wordp:0xdda0 size:0x0006 C-string:'WDDA0'
//           WDDA8  codep:0x73ea wordp:0xdda8 size:0x0006 C-string:'WDDA8'
//           WDDB0  codep:0x73ea wordp:0xddb0 size:0x0006 C-string:'WDDB0'
//           WDDB8  codep:0x744d wordp:0xddb8 size:0x0003 C-string:'WDDB8'
//           WDDBD  codep:0x744d wordp:0xddbd size:0x0003 C-string:'WDDBD'
//           WDDC2  codep:0x744d wordp:0xddc2 size:0x0003 C-string:'WDDC2'
//           WDDC7  codep:0x744d wordp:0xddc7 size:0x0003 C-string:'WDDC7'
//           WDDCC  codep:0x744d wordp:0xddcc size:0x0003 C-string:'WDDCC'
//           WDDD1  codep:0x2214 wordp:0xddd1 size:0x0002 C-string:'WDDD1'
//           WDDD5  codep:0x744d wordp:0xddd5 size:0x0003 C-string:'WDDD5'
//           WDDDA  codep:0x744d wordp:0xddda size:0x0003 C-string:'WDDDA'
//           WDDDF  codep:0x744d wordp:0xdddf size:0x0003 C-string:'WDDDF'
//           WDDE4  codep:0x744d wordp:0xdde4 size:0x0003 C-string:'WDDE4'
//           WDDE9  codep:0x744d wordp:0xdde9 size:0x0003 C-string:'WDDE9'
//           WDDEE  codep:0x744d wordp:0xddee size:0x0003 C-string:'WDDEE'
//           WDDF3  codep:0x744d wordp:0xddf3 size:0x0003 C-string:'WDDF3'
//           WDDF8  codep:0x744d wordp:0xddf8 size:0x0003 C-string:'WDDF8'
//           WDDFD  codep:0x744d wordp:0xddfd size:0x0003 C-string:'WDDFD'
//           WDE02  codep:0x744d wordp:0xde02 size:0x0003 C-string:'WDE02'
//           WDE07  codep:0x744d wordp:0xde07 size:0x0003 C-string:'WDE07'
//           WDE0C  codep:0x744d wordp:0xde0c size:0x0003 C-string:'WDE0C'
//           WDE11  codep:0x744d wordp:0xde11 size:0x0003 C-string:'WDE11'
//           WDE16  codep:0x744d wordp:0xde16 size:0x0003 C-string:'WDE16'
//           WDE1B  codep:0x744d wordp:0xde1b size:0x0003 C-string:'WDE1B'
//           WDE20  codep:0x744d wordp:0xde20 size:0x0003 C-string:'WDE20'
//           WDE25  codep:0x744d wordp:0xde25 size:0x0003 C-string:'WDE25'
//           WDE2A  codep:0x744d wordp:0xde2a size:0x0003 C-string:'WDE2A'
//           WDE2F  codep:0x744d wordp:0xde2f size:0x0003 C-string:'WDE2F'
//           WDE34  codep:0x744d wordp:0xde34 size:0x0003 C-string:'WDE34'
//           WDE39  codep:0x1d29 wordp:0xde39 size:0x0002 C-string:'WDE39'
//           WDE3D  codep:0x1d29 wordp:0xde3d size:0x0002 C-string:'WDE3D'
//           WDE41  codep:0x1d29 wordp:0xde41 size:0x0002 C-string:'WDE41'
//           WDE45  codep:0x1d29 wordp:0xde45 size:0x0004 C-string:'WDE45'
//           WDE4B  codep:0x1d29 wordp:0xde4b size:0x0002 C-string:'WDE4B'
//           WDE4F  codep:0x1d29 wordp:0xde4f size:0x0004 C-string:'WDE4F'
//           WDE55  codep:0x1d29 wordp:0xde55 size:0x0002 C-string:'WDE55'
//           WDE59  codep:0x224c wordp:0xde59 size:0x001c C-string:'WDE59'
//           WDE77  codep:0x224c wordp:0xde77 size:0x0008 C-string:'WDE77'
//           WDE81  codep:0x224c wordp:0xde81 size:0x0018 C-string:'WDE81'
//           WDE9B  codep:0x224c wordp:0xde9b size:0x000e C-string:'WDE9B'
//           WDEAB  codep:0x224c wordp:0xdeab size:0x0008 C-string:'WDEAB'
//           WDEB5  codep:0x224c wordp:0xdeb5 size:0x003a C-string:'WDEB5'
//           WDEF1  codep:0x224c wordp:0xdef1 size:0x0018 C-string:'WDEF1'
//            X=-1  codep:0x4a4f wordp:0xdf12 size:0x0010 C-string:'X_eq__dash_1'
//             X=0  codep:0x4a4f wordp:0xdf2a size:0x0010 C-string:'X_eq_0'
//             X=1  codep:0x4a4f wordp:0xdf42 size:0x0010 C-string:'X_eq_1'
//       KEY>ORIEN  codep:0x4a4f wordp:0xdf60 size:0x0010 C-string:'KEY_gt_ORIEN'
//           WDF72  codep:0x224c wordp:0xdf72 size:0x0018 C-string:'WDF72'
//           WDF8C  codep:0x224c wordp:0xdf8c size:0x0008 C-string:'WDF8C'
//           WDF96  codep:0x224c wordp:0xdf96 size:0x000c C-string:'WDF96'
//           WDFA4  codep:0x224c wordp:0xdfa4 size:0x000c C-string:'WDFA4'
//           WDFB2  codep:0x224c wordp:0xdfb2 size:0x000c C-string:'WDFB2'
//           WDFC0  codep:0x224c wordp:0xdfc0 size:0x0010 C-string:'WDFC0'
//           WDFD2  codep:0x224c wordp:0xdfd2 size:0x0020 C-string:'WDFD2'
//           WDFF4  codep:0x224c wordp:0xdff4 size:0x0014 C-string:'WDFF4'
//           WE00A  codep:0x744d wordp:0xe00a size:0x0003 C-string:'WE00A'
//           WE00F  codep:0x224c wordp:0xe00f size:0x0008 C-string:'WE00F'
//           WE019  codep:0x224c wordp:0xe019 size:0x000a C-string:'WE019'
//           WE025  codep:0x224c wordp:0xe025 size:0x0010 C-string:'WE025'
//           WE037  codep:0x3b68 wordp:0xe037 size:0x0004 C-string:'WE037'
//           WE03D  codep:0x1d29 wordp:0xe03d size:0x0004 C-string:'WE03D'
//           WE043  codep:0x224c wordp:0xe043 size:0x0010 C-string:'WE043'
//           WE055  codep:0x224c wordp:0xe055 size:0x000a C-string:'WE055'
//           WE061  codep:0x224c wordp:0xe061 size:0x0008 C-string:'WE061'
//           WE06B  codep:0x224c wordp:0xe06b size:0x0008 C-string:'WE06B'
//           WE075  codep:0x2214 wordp:0xe075 size:0x0002 C-string:'WE075'
//           WE079  codep:0x2214 wordp:0xe079 size:0x0002 C-string:'WE079'
//           WE07D  codep:0x224c wordp:0xe07d size:0x0022 C-string:'WE07D'
//           WE0A1  codep:0x224c wordp:0xe0a1 size:0x0008 C-string:'WE0A1'
//           WE0AB  codep:0x224c wordp:0xe0ab size:0x0006 C-string:'WE0AB'
//           WE0B3  codep:0x224c wordp:0xe0b3 size:0x000c C-string:'WE0B3'
//           WE0C1  codep:0x1d29 wordp:0xe0c1 size:0x0002 C-string:'WE0C1'
//           WE0C5  codep:0x1d29 wordp:0xe0c5 size:0x0004 C-string:'WE0C5'
//           WE0CB  codep:0x224c wordp:0xe0cb size:0x000e C-string:'WE0CB'
//           WE0DB  codep:0x224c wordp:0xe0db size:0x0014 C-string:'WE0DB'
//           WE0F1  codep:0x224c wordp:0xe0f1 size:0x0016 C-string:'WE0F1'
//           WE109  codep:0x224c wordp:0xe109 size:0x0016 C-string:'WE109'
//           WE121  codep:0x224c wordp:0xe121 size:0x000a C-string:'WE121'
//           WE12D  codep:0x224c wordp:0xe12d size:0x000a C-string:'WE12D'
//           WE139  codep:0x224c wordp:0xe139 size:0x000c C-string:'WE139'
//           WE147  codep:0x1d29 wordp:0xe147 size:0x0002 C-string:'WE147'
//           WE14B  codep:0x224c wordp:0xe14b size:0x001a C-string:'WE14B'
//           WE167  codep:0x224c wordp:0xe167 size:0x0018 C-string:'WE167'
//           WE181  codep:0x224c wordp:0xe181 size:0x000c C-string:'WE181'
//           WE18F  codep:0x224c wordp:0xe18f size:0x0014 C-string:'WE18F'
//           WE1A5  codep:0x224c wordp:0xe1a5 size:0x001a C-string:'WE1A5'
//           WE1C1  codep:0x224c wordp:0xe1c1 size:0x001a C-string:'WE1C1'
//           WE1DD  codep:0x224c wordp:0xe1dd size:0x0018 C-string:'WE1DD'
//           WE1F7  codep:0x1d29 wordp:0xe1f7 size:0x0002 C-string:'WE1F7'
//           WE1FB  codep:0x2214 wordp:0xe1fb size:0x0002 C-string:'WE1FB'
//           WE1FF  codep:0x2214 wordp:0xe1ff size:0x0002 C-string:'WE1FF'
//           WE203  codep:0x2214 wordp:0xe203 size:0x0002 C-string:'WE203'
//           WE207  codep:0x2214 wordp:0xe207 size:0x0002 C-string:'WE207'
//           WE20B  codep:0x224c wordp:0xe20b size:0x0013 C-string:'WE20B'
//           CURRX  codep:0xe211 wordp:0xe228 size:0x0001 C-string:'CURRX'
//           CURRY  codep:0xe211 wordp:0xe233 size:0x0001 C-string:'CURRY'
//           DESTX  codep:0xe211 wordp:0xe23e size:0x0001 C-string:'DESTX'
//           DESTY  codep:0xe211 wordp:0xe249 size:0x0001 C-string:'DESTY'
//           MORIG  codep:0xe211 wordp:0xe254 size:0x0001 C-string:'MORIG'
//          MCLASS  codep:0xe211 wordp:0xe260 size:0x0001 C-string:'MCLASS'
//          DELTAX  codep:0xe211 wordp:0xe26c size:0x0001 C-string:'DELTAX'
//          DELTAY  codep:0xe211 wordp:0xe278 size:0x0001 C-string:'DELTAY'
//           WE27B  codep:0x224c wordp:0xe27b size:0x000c C-string:'WE27B'
//          MARRAY  codep:0x1d29 wordp:0xe292 size:0x01ce C-string:'MARRAY'
//           WE462  codep:0x224c wordp:0xe462 size:0x000e C-string:'WE462'
//           WE472  codep:0x224c wordp:0xe472 size:0x000e C-string:'WE472'
//           WE482  codep:0x224c wordp:0xe482 size:0x000a C-string:'WE482'
//           WE48E  codep:0x224c wordp:0xe48e size:0x000a C-string:'WE48E'
//           WE49A  codep:0x224c wordp:0xe49a size:0x0006 C-string:'WE49A'
//           WE4A2  codep:0x224c wordp:0xe4a2 size:0x000a C-string:'WE4A2'
//           WE4AE  codep:0x224c wordp:0xe4ae size:0x001a C-string:'WE4AE'
//       SCALE>MIS  codep:0x4a4f wordp:0xe4d6 size:0x0010 C-string:'SCALE_gt_MIS'
//           WE4E8  codep:0x224c wordp:0xe4e8 size:0x0016 C-string:'WE4E8'
//           WE500  codep:0x224c wordp:0xe500 size:0x0034 C-string:'WE500'
//           WE536  codep:0x224c wordp:0xe536 size:0x000e C-string:'WE536'
//           WE546  codep:0x224c wordp:0xe546 size:0x0046 C-string:'WE546'
//           WE58E  codep:0x224c wordp:0xe58e size:0x001c C-string:'WE58E'
//           WE5AC  codep:0x224c wordp:0xe5ac size:0x000e C-string:'WE5AC'
//           WE5BC  codep:0x224c wordp:0xe5bc size:0x001e C-string:'WE5BC'
//           WE5DC  codep:0x224c wordp:0xe5dc size:0x0016 C-string:'WE5DC'
//           WE5F4  codep:0x224c wordp:0xe5f4 size:0x0014 C-string:'WE5F4'
//           WE60A  codep:0x224c wordp:0xe60a size:0x0018 C-string:'WE60A'
//           WE624  codep:0x224c wordp:0xe624 size:0x0036 C-string:'WE624'
//           WE65C  codep:0x2214 wordp:0xe65c size:0x0002 C-string:'WE65C'
//           WE660  codep:0x224c wordp:0xe660 size:0x004a C-string:'WE660'
//           WE6AC  codep:0x1d29 wordp:0xe6ac size:0x0002 C-string:'WE6AC'
//           WE6B0  codep:0x1d29 wordp:0xe6b0 size:0x0002 C-string:'WE6B0'
//           WE6B4  codep:0x224c wordp:0xe6b4 size:0x002e C-string:'WE6B4'
//           WE6E4  codep:0x224c wordp:0xe6e4 size:0x0046 C-string:'WE6E4'
//           WE72C  codep:0x224c wordp:0xe72c size:0x0016 C-string:'WE72C'
//           WE744  codep:0x224c wordp:0xe744 size:0x0052 C-string:'WE744'
//           WE798  codep:0x224c wordp:0xe798 size:0x0032 C-string:'WE798'
//           WE7CC  codep:0x224c wordp:0xe7cc size:0x00a0 C-string:'WE7CC'
//           WE86E  codep:0x224c wordp:0xe86e size:0x0031 C-string:'WE86E'
//           WE8A1  codep:0x224c wordp:0xe8a1 size:0x0012 C-string:'WE8A1'
//           WE8B5  codep:0x224c wordp:0xe8b5 size:0x002a C-string:'WE8B5'
//           WE8E1  codep:0x224c wordp:0xe8e1 size:0x002e C-string:'WE8E1'
//           WE911  codep:0x224c wordp:0xe911 size:0x0016 C-string:'WE911'
//           WE929  codep:0x224c wordp:0xe929 size:0x0022 C-string:'WE929'
//           WE94D  codep:0x224c wordp:0xe94d size:0x001c C-string:'WE94D'
//           WE96B  codep:0x224c wordp:0xe96b size:0x0010 C-string:'WE96B'
//           WE97D  codep:0x224c wordp:0xe97d size:0x0036 C-string:'WE97D'
//           WE9B5  codep:0x224c wordp:0xe9b5 size:0x0028 C-string:'WE9B5'
//           WE9DF  codep:0x224c wordp:0xe9df size:0x0020 C-string:'WE9DF'
//           WEA01  codep:0x224c wordp:0xea01 size:0x001e C-string:'WEA01'
//           WEA21  codep:0x224c wordp:0xea21 size:0x001a C-string:'WEA21'
//           WEA3D  codep:0x224c wordp:0xea3d size:0x0024 C-string:'WEA3D'
//           WEA63  codep:0x224c wordp:0xea63 size:0x001c C-string:'WEA63'
//           WEA81  codep:0x224c wordp:0xea81 size:0x0038 C-string:'WEA81'
//           WEABB  codep:0x224c wordp:0xeabb size:0x0058 C-string:'WEABB'
//           WEB15  codep:0x224c wordp:0xeb15 size:0x004c C-string:'WEB15'
//           WEB63  codep:0x224c wordp:0xeb63 size:0x0056 C-string:'WEB63'
//           WEBBB  codep:0x1d29 wordp:0xebbb size:0x0002 C-string:'WEBBB'
//           WEBBF  codep:0x1d29 wordp:0xebbf size:0x0002 C-string:'WEBBF'
//           WEBC3  codep:0x224c wordp:0xebc3 size:0x0022 C-string:'WEBC3'
//           WEBE7  codep:0x224c wordp:0xebe7 size:0x0022 C-string:'WEBE7'
//           WEC0B  codep:0x224c wordp:0xec0b size:0x0032 C-string:'WEC0B'
//       SET-SCALE  codep:0x224c wordp:0xec4b size:0x002e C-string:'SET_dash_SCALE'
//           WEC7B  codep:0x224c wordp:0xec7b size:0x0006 C-string:'WEC7B'
//           WEC83  codep:0x224c wordp:0xec83 size:0x0010 C-string:'WEC83'
//           WEC95  codep:0x224c wordp:0xec95 size:0x0030 C-string:'WEC95'
//           WECC7  codep:0x224c wordp:0xecc7 size:0x0021 C-string:'WECC7'
//           WECEA  codep:0x224c wordp:0xecea size:0x007e C-string:'WECEA'
//           WED6A  codep:0x224c wordp:0xed6a size:0x0006 C-string:'WED6A'
//           WED72  codep:0x224c wordp:0xed72 size:0x0012 C-string:'WED72'
//           WED86  codep:0x224c wordp:0xed86 size:0x0012 C-string:'WED86'
//           WED9A  codep:0x224c wordp:0xed9a size:0x001a C-string:'WED9A'
//       ?APPROACH  codep:0x224c wordp:0xedc2 size:0x000a C-string:'IsAPPROACH'
//           WEDCE  codep:0x224c wordp:0xedce size:0x002e C-string:'WEDCE'
//        <COMBAT>  codep:0xb869 wordp:0xee09 size:0x00b9 C-string:'_st_COMBAT_gt_'
//           WEEC4  codep:0x224c wordp:0xeec4 size:0x0012 C-string:'WEEC4'
//           WEED8  codep:0x224c wordp:0xeed8 size:0x000e C-string:'WEED8'
//           WEEE8  codep:0x224c wordp:0xeee8 size:0x0006 C-string:'WEEE8'
//           WEEF0  codep:0x224c wordp:0xeef0 size:0x0016 C-string:'WEEF0'
//           WEF08  codep:0x224c wordp:0xef08 size:0x0016 C-string:'WEF08'
//           WEF20  codep:0x224c wordp:0xef20 size:0x0010 C-string:'WEF20'
//          COMBAT  codep:0x224c wordp:0xef3b size:0x006c C-string:'COMBAT'
//        ORIENT>O  codep:0x1d29 wordp:0xefb4 size:0x0020 C-string:'ORIENT_gt_O'
//           WEFD6  codep:0x224c wordp:0xefd6 size:0x0036 C-string:'WEFD6'
//           WF00E  codep:0x224c wordp:0xf00e size:0x000a C-string:'WF00E'
//           WF01A  codep:0x224c wordp:0xf01a size:0x0022 C-string:'WF01A'
//           WF03E  codep:0x224c wordp:0xf03e size:0x0018 C-string:'WF03E'
//           WF058  codep:0x224c wordp:0xf058 size:0x0026 C-string:'WF058'
//           WF080  codep:0x224c wordp:0xf080 size:0x0008 C-string:'WF080'
//           WF08A  codep:0x224c wordp:0xf08a size:0x0024 C-string:'WF08A'
//           WF0B0  codep:0x1d29 wordp:0xf0b0 size:0x0004 C-string:'WF0B0'
//           WF0B6  codep:0x224c wordp:0xf0b6 size:0x0020 C-string:'WF0B6'
//           WF0D8  codep:0x224c wordp:0xf0d8 size:0x0044 C-string:'WF0D8'
//           WF11E  codep:0x224c wordp:0xf11e size:0x005e C-string:'WF11E'
//           WF17E  codep:0x224c wordp:0xf17e size:0x000c C-string:'WF17E'
//           WF18C  codep:0x224c wordp:0xf18c size:0x001c C-string:'WF18C'
//           WF1AA  codep:0x224c wordp:0xf1aa size:0x000a C-string:'WF1AA'
//           WF1B6  codep:0x224c wordp:0xf1b6 size:0x0024 C-string:'WF1B6'
//           WF1DC  codep:0x224c wordp:0xf1dc size:0x002a C-string:'WF1DC'
//           WF208  codep:0x224c wordp:0xf208 size:0x0036 C-string:'WF208'
//           WF240  codep:0x224c wordp:0xf240 size:0x00a8 C-string:'WF240'
//           WF2EA  codep:0x224c wordp:0xf2ea size:0x0008 C-string:'WF2EA'
//           WF2F4  codep:0x224c wordp:0xf2f4 size:0x005c C-string:'WF2F4'
//           WF352  codep:0x224c wordp:0xf352 size:0x005a C-string:'WF352'
//           WF3AE  codep:0x224c wordp:0xf3ae size:0x000c C-string:'WF3AE'
//           WF3BC  codep:0x224c wordp:0xf3bc size:0x0056 C-string:'WF3BC'
//           WF414  codep:0x224c wordp:0xf414 size:0x00a1 C-string:'WF414'
//             WAR  codep:0x224c wordp:0xf4bd size:0x0022 C-string:'WAR'
//        CLEAR-CO  codep:0x224c wordp:0xf4ec size:0x0000 C-string:'CLEAR_dash_CO'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_IsSOUND; // ?SOUND
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
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_IsROD; // ?ROD
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp__i_CEX; // 'CEX
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_IsCOMBAT; // ?COMBAT
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
extern const unsigned short int pp__ro_AORIGINATOR_rc_; // (AORIGINATOR)
extern const unsigned short int pp_LASTAP; // LASTAP
extern Color BLACK; // BLACK
extern Color DK_dash_GREEN; // DK-GREEN
extern Color RED; // RED
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void ABS(); // ABS
void M_star_(); // M*
void M_star__slash_(); // M*/
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void C_co_(); // C,
void PAD(); // PAD
void BEEP(); // BEEP
void Draw(); // .
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
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _2_ex_(); // 2!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void FILL_1(); // FILL_1
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void StoreVISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void _gt_2ICONF(); // >2ICONF
void _gt_3ICONFONT(); // >3ICONFONT
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void StoreID(); // !ID
void DrawICON(); // .ICON
void POINT_gt_ICON(); // POINT>ICON
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICONS_dash_AT(); // ?ICONS-AT
void IsICON_dash_IADDR(); // ?ICON-IADDR
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void BEEPON(); // BEEPON
void DrawTTY(); // .TTY
void IsTRIG(); // ?TRIG
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
void TOGGLE(); // TOGGLE
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void ON_2(); // ON_2
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st_C_ex__gt_(); // <C!>
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void CI(); // CI
void CLIPPER(); // CLIPPER
void DISPLAY_dash_WAIT(); // DISPLAY-WAIT
void BFILL(); // BFILL
void LLINE(); // LLINE
void V_gt_DISPLAY(); // V>DISPLAY
void IsINVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR
void SCR_gt_BLT(); // SCR>BLT
void _ro_XYSCAN_rc_(); // (XYSCAN)
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
const unsigned short int pp_WDE39 = 0xde39; // WDE39 size: 2
// {0x00, 0x00}

const unsigned short int pp_WDE3D = 0xde3d; // WDE3D size: 2
// {0x00, 0x00}

const unsigned short int pp_WDE41 = 0xde41; // WDE41 size: 2
// {0x00, 0x00}

const unsigned short int pp_WDE45 = 0xde45; // WDE45 size: 4
// {0x56, 0x3a, 0x20, 0x20}

const unsigned short int pp_WDE4B = 0xde4b; // WDE4B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE4F = 0xde4f; // WDE4F size: 4
// {0x56, 0x3a, 0x20, 0x45}

const unsigned short int pp_WDE55 = 0xde55; // WDE55 size: 2
// {0x00, 0x00}

const unsigned short int pp_WE03D = 0xe03d; // WE03D size: 4
// {0x56, 0x3a, 0x20, 0x3c}

const unsigned short int pp_WE0C1 = 0xe0c1; // WE0C1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE0C5 = 0xe0c5; // WE0C5 size: 4
// {0x56, 0x3a, 0x20, 0xa0}

const unsigned short int pp_WE147 = 0xe147; // WE147 size: 2
// {0x00, 0x00}

const unsigned short int pp_WE1F7 = 0xe1f7; // WE1F7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_MARRAY = 0xe292; // MARRAY size: 462
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xe4, 0xae, 0x0b, 0x90, 0x16, 0x4d, 0x74, 0x23, 0x0a, 0x02, 0x4d, 0x74, 0x30, 0x0b, 0xff, 0x4d, 0x74, 0x24, 0x0a, 0x01, 0x4d}

const unsigned short int pp_WE6AC = 0xe6ac; // WE6AC size: 2
// {0x00, 0x00}

const unsigned short int pp_WE6B0 = 0xe6b0; // WE6B0 size: 2
// {0x00, 0x00}

const unsigned short int pp_WEBBB = 0xebbb; // WEBBB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEBBF = 0xebbf; // WEBBF size: 2
// {0x3a, 0x20}

const unsigned short int pp_ORIENT_gt_O = 0xefb4; // ORIENT>O size: 32
// {0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00}

const unsigned short int pp_WF0B0 = 0xf0b0; // WF0B0 size: 4
// {0x56, 0x3a, 0x20, 0x20}


const unsigned short int cc_WDD8C = 0xdd8c; // WDD8C
const unsigned short int cc_WDDD1 = 0xddd1; // WDDD1
const unsigned short int cc_WE075 = 0xe075; // WE075
const unsigned short int cc_WE079 = 0xe079; // WE079
const unsigned short int cc_WE1FB = 0xe1fb; // WE1FB
const unsigned short int cc_WE1FF = 0xe1ff; // WE1FF
const unsigned short int cc_WE203 = 0xe203; // WE203
const unsigned short int cc_WE207 = 0xe207; // WE207
const unsigned short int cc_WE65C = 0xe65c; // WE65C


// 0xdd42: db 0x7f 0x01 ' '

// ================================================
// 0xdd44: WORD 'WDD46' codep=0x224c wordp=0xdd46 params=1 returns=1
// ================================================

void WDD46() // WDD46
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xdd4c: WORD 'WDD4E' codep=0x224c wordp=0xdd4e params=0 returns=1
// ================================================

void WDD4E() // WDD4E
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xdd58: WORD 'WDD5A' codep=0x224c wordp=0xdd5a params=0 returns=1
// ================================================

void WDD5A() // WDD5A
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xdd62: WORD 'WDD64' codep=0x224c wordp=0xdd64 params=0 returns=2
// ================================================

void WDD64() // WDD64
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xdd6e: WORD 'WDD70' codep=0x224c wordp=0xdd70
// ================================================

void WDD70() // WDD70
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xdd76: WORD 'WDD78' codep=0x224c wordp=0xdd78 params=0 returns=2
// ================================================

void WDD78() // WDD78
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xdd82: WORD 'WDD84' codep=0x224c wordp=0xdd84 params=0 returns=0
// ================================================
// orphan

void WDD84() // WDD84
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xdd8a: WORD 'WDD8C' codep=0x2214 wordp=0xdd8c
// ================================================
// orphan
// 0xdd8c: dw 0x0019

// ================================================
// 0xdd8e: WORD 'WDD90' codep=0x73ea wordp=0xdd90
// ================================================
LoadDataType WDD90 = {VESSELIDX, 0x0b, 0x01, 0x49, 0x6491};

// ================================================
// 0xdd96: WORD 'WDD98' codep=0x73ea wordp=0xdd98
// ================================================
LoadDataType WDD98 = {VESSELIDX, 0x0e, 0x02, 0x49, 0x6491};

// ================================================
// 0xdd9e: WORD 'WDDA0' codep=0x73ea wordp=0xdda0
// ================================================
LoadDataType WDDA0 = {VESSELIDX, 0x13, 0x01, 0x49, 0x6491};

// ================================================
// 0xdda6: WORD 'WDDA8' codep=0x73ea wordp=0xdda8
// ================================================
LoadDataType WDDA8 = {VESSELIDX, 0x12, 0x01, 0x49, 0x6491};

// ================================================
// 0xddae: WORD 'WDDB0' codep=0x73ea wordp=0xddb0
// ================================================
LoadDataType WDDB0 = {VESSELIDX, 0x14, 0x01, 0x49, 0x6491};

// ================================================
// 0xddb6: WORD 'WDDB8' codep=0x744d wordp=0xddb8
// ================================================
IFieldType WDDB8 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xddbb: WORD 'WDDBD' codep=0x744d wordp=0xddbd
// ================================================
// orphan
IFieldType WDDBD = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xddc0: WORD 'WDDC2' codep=0x744d wordp=0xddc2
// ================================================
IFieldType WDDC2 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xddc5: WORD 'WDDC7' codep=0x744d wordp=0xddc7
// ================================================
IFieldType WDDC7 = {VESSELIDX, 0x11, 0x01};

// ================================================
// 0xddca: WORD 'WDDCC' codep=0x744d wordp=0xddcc
// ================================================
IFieldType WDDCC = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xddcf: WORD 'WDDD1' codep=0x2214 wordp=0xddd1
// ================================================
// orphan
// 0xddd1: dw 0x0014

// ================================================
// 0xddd3: WORD 'WDDD5' codep=0x744d wordp=0xddd5
// ================================================
// orphan
IFieldType WDDD5 = {SHIPIDX, 0x11, 0x01};

// ================================================
// 0xddd8: WORD 'WDDDA' codep=0x744d wordp=0xddda
// ================================================
// orphan
IFieldType WDDDA = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xdddd: WORD 'WDDDF' codep=0x744d wordp=0xdddf
// ================================================
IFieldType WDDDF = {SHIPIDX, 0x13, 0x01};

// ================================================
// 0xdde2: WORD 'WDDE4' codep=0x744d wordp=0xdde4
// ================================================
// orphan
IFieldType WDDE4 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xdde7: WORD 'WDDE9' codep=0x744d wordp=0xdde9
// ================================================
// orphan
IFieldType WDDE9 = {SHIPIDX, 0x15, 0x01};

// ================================================
// 0xddec: WORD 'WDDEE' codep=0x744d wordp=0xddee
// ================================================
// orphan
IFieldType WDDEE = {SHIPIDX, 0x16, 0x01};

// ================================================
// 0xddf1: WORD 'WDDF3' codep=0x744d wordp=0xddf3
// ================================================
// orphan
IFieldType WDDF3 = {SHIPIDX, 0x17, 0x01};

// ================================================
// 0xddf6: WORD 'WDDF8' codep=0x744d wordp=0xddf8
// ================================================
// orphan
IFieldType WDDF8 = {SHIPIDX, 0x18, 0x01};

// ================================================
// 0xddfb: WORD 'WDDFD' codep=0x744d wordp=0xddfd
// ================================================
// orphan
IFieldType WDDFD = {SHIPIDX, 0x19, 0x01};

// ================================================
// 0xde00: WORD 'WDE02' codep=0x744d wordp=0xde02
// ================================================
IFieldType WDE02 = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xde05: WORD 'WDE07' codep=0x744d wordp=0xde07
// ================================================
IFieldType WDE07 = {SHIPIDX, 0x1b, 0x01};

// ================================================
// 0xde0a: WORD 'WDE0C' codep=0x744d wordp=0xde0c
// ================================================
IFieldType WDE0C = {SHIPIDX, 0x1c, 0x01};

// ================================================
// 0xde0f: WORD 'WDE11' codep=0x744d wordp=0xde11
// ================================================
IFieldType WDE11 = {SHIPIDX, 0x1d, 0x01};

// ================================================
// 0xde14: WORD 'WDE16' codep=0x744d wordp=0xde16
// ================================================
IFieldType WDE16 = {SHIPIDX, 0x1e, 0x01};

// ================================================
// 0xde19: WORD 'WDE1B' codep=0x744d wordp=0xde1b
// ================================================
IFieldType WDE1B = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xde1e: WORD 'WDE20' codep=0x744d wordp=0xde20
// ================================================
IFieldType WDE20 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xde23: WORD 'WDE25' codep=0x744d wordp=0xde25
// ================================================
IFieldType WDE25 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xde28: WORD 'WDE2A' codep=0x744d wordp=0xde2a
// ================================================
IFieldType WDE2A = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xde2d: WORD 'WDE2F' codep=0x744d wordp=0xde2f
// ================================================
IFieldType WDE2F = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xde32: WORD 'WDE34' codep=0x744d wordp=0xde34
// ================================================
IFieldType WDE34 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xde37: WORD 'WDE39' codep=0x1d29 wordp=0xde39
// ================================================
// 0xde39: db 0x00 0x00 '  '

// ================================================
// 0xde3b: WORD 'WDE3D' codep=0x1d29 wordp=0xde3d
// ================================================
// 0xde3d: db 0x00 0x00 '  '

// ================================================
// 0xde3f: WORD 'WDE41' codep=0x1d29 wordp=0xde41
// ================================================
// 0xde41: db 0x00 0x00 '  '

// ================================================
// 0xde43: WORD 'WDE45' codep=0x1d29 wordp=0xde45
// ================================================
// 0xde45: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xde49: WORD 'WDE4B' codep=0x1d29 wordp=0xde4b
// ================================================
// 0xde4b: db 0x3a 0x20 ': '

// ================================================
// 0xde4d: WORD 'WDE4F' codep=0x1d29 wordp=0xde4f
// ================================================
// 0xde4f: db 0x56 0x3a 0x20 0x45 'V: E'

// ================================================
// 0xde53: WORD 'WDE55' codep=0x1d29 wordp=0xde55
// ================================================
// 0xde55: db 0x00 0x00 '  '

// ================================================
// 0xde57: WORD 'WDE59' codep=0x224c wordp=0xde59 params=4 returns=1
// ================================================

void WDE59() // WDE59
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
// 0xde75: WORD 'WDE77' codep=0x224c wordp=0xde77 params=1 returns=1
// ================================================

void WDE77() // WDE77
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xde7f: WORD 'WDE81' codep=0x224c wordp=0xde81 params=1 returns=1
// ================================================

void WDE81() // WDE81
{
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x007f); //  0x007f AND
  SWAP(); // SWAP
  Push(!(Pop() & 0x0080)); //  0x0080 AND NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xde99: WORD 'WDE9B' codep=0x224c wordp=0xde9b params=0 returns=0
// ================================================

void WDE9B() // WDE9B
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
// 0xdea9: WORD 'WDEAB' codep=0x224c wordp=0xdeab params=0 returns=1
// ================================================

void WDEAB() // WDEAB
{
  Push(-1);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xdeb3: WORD 'WDEB5' codep=0x224c wordp=0xdeb5 params=2 returns=2
// ================================================

void WDEB5() // WDEB5
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
// 0xdeef: WORD 'WDEF1' codep=0x224c wordp=0xdef1 params=0 returns=1
// ================================================

void WDEF1() // WDEF1
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0019?1:0); //  0x0019 =
  if (Pop() != 0)
  {
    Push(0x63ef+WDDCC.offset); // WDDCC<IFIELD>
  } else
  {
    Push(0x63ef+WDE2A.offset); // WDE2A<IFIELD>
  }
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xdf09: WORD 'X=-1' codep=0x4a4f wordp=0xdf12
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
// 0xdf22: WORD 'X=0' codep=0x4a4f wordp=0xdf2a
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
    WDEF1(); // WDEF1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xdf3a: WORD 'X=1' codep=0x4a4f wordp=0xdf42
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
// 0xdf52: WORD 'KEY>ORIEN' codep=0x4a4f wordp=0xdf60
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
// 0xdf70: WORD 'WDF72' codep=0x224c wordp=0xdf72 params=0 returns=1
// ================================================

void WDF72() // WDF72
{
  Push(Read16(pp_WDE55)); // WDE55 @
  WDD46(); // WDD46
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(4);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_WDE55); // WDE55
  Store_3(); // !_3
}


// ================================================
// 0xdf8a: WORD 'WDF8C' codep=0x224c wordp=0xdf8c params=0 returns=1
// ================================================

void WDF8C() // WDF8C
{
  WDD4E(); // WDD4E
  Push(3);
  _st_(); // <
}


// ================================================
// 0xdf94: WORD 'WDF96' codep=0x224c wordp=0xdf96
// ================================================

void WDF96() // WDF96
{
  WDD70(); // WDD70
  WDD64(); // WDD64
  WDE59(); // WDE59
  Push(3);
  _st_(); // <
}


// ================================================
// 0xdfa2: WORD 'WDFA4' codep=0x224c wordp=0xdfa4
// ================================================

void WDFA4() // WDFA4
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(WDDA8); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  WDD46(); // WDD46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfb0: WORD 'WDFB2' codep=0x224c wordp=0xdfb2
// ================================================

void WDFB2() // WDFB2
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(WDDB0); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  WDD46(); // WDD46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfbe: WORD 'WDFC0' codep=0x224c wordp=0xdfc0
// ================================================

void WDFC0() // WDFC0
{
  Push(Read16(cc_IsA_dash_WEAP)); // ?A-WEAP
  LoadData(WDDA0); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  WDD46(); // WDD46
  WDFB2(); // WDFB2
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdfd0: WORD 'WDFD2' codep=0x224c wordp=0xdfd2
// ================================================

void WDFD2() // WDFD2
{
  LoadData(WDD90); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Pop() * 6); //  6 *
  WDD4E(); // WDD4E
  _st_(); // <
  Push(Read16(pp_WDE3D)); // WDE3D @
  Push(0x000a);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xdff2: WORD 'WDFF4' codep=0x224c wordp=0xdff4
// ================================================

void WDFF4() // WDFF4
{
  LoadData(WDD90); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(Pop() * 8); //  8 *
  WDD4E(); // WDD4E
  _st_(); // <
}


// ================================================
// 0xe008: WORD 'WE00A' codep=0x744d wordp=0xe00a
// ================================================
IFieldType WE00A = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xe00d: WORD 'WE00F' codep=0x224c wordp=0xe00f params=0 returns=1
// ================================================

void WE00F() // WE00F
{
  Push(Read16(pp_TERMINA)); // TERMINA @
  WDD46(); // WDD46
}


// ================================================
// 0xe017: WORD 'WE019' codep=0x224c wordp=0xe019 params=0 returns=1
// ================================================

void WE019() // WE019
{
  WDD4E(); // WDD4E
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe023: WORD 'WE025' codep=0x224c wordp=0xe025 params=0 returns=1
// ================================================

void WE025() // WE025
{
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WE00A.offset)&0xFF); // WE00A<IFIELD> C@
  ICLOSE(); // ICLOSE
  WDD46(); // WDD46
}


// ================================================
// 0xe035: WORD 'WE037' codep=0x3b68 wordp=0xe037
// ================================================
// 0xe037: dw 0x0001 0xd4c0

// ================================================
// 0xe03b: WORD 'WE03D' codep=0x1d29 wordp=0xe03d
// ================================================
// 0xe03d: db 0x56 0x3a 0x20 0x3c 'V: <'

// ================================================
// 0xe041: WORD 'WE043' codep=0x224c wordp=0xe043 params=0 returns=1
// ================================================
// orphan

void WE043() // WE043
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push2Words("WE037");
  Push(pp_WE03D); // WE03D
  _2_at_(); // 2@
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe053: WORD 'WE055' codep=0x224c wordp=0xe055 params=0 returns=0
// ================================================

void WE055() // WE055
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE03D); // WE03D
  StoreD(); // D!
}


// ================================================
// 0xe05f: WORD 'WE061' codep=0x224c wordp=0xe061 params=0 returns=1
// ================================================
// orphan

void WE061() // WE061
{
  WDD4E(); // WDD4E
  Push(5);
  _st_(); // <
}


// ================================================
// 0xe069: WORD 'WE06B' codep=0x224c wordp=0xe06b params=0 returns=1
// ================================================

void WE06B() // WE06B
{
  Push(Read16(0x63ef+WDDB8.offset)&0xFF); // WDDB8<IFIELD> C@
  WDD46(); // WDD46
}


// ================================================
// 0xe073: WORD 'WE075' codep=0x2214 wordp=0xe075
// ================================================
// 0xe075: dw 0x000b

// ================================================
// 0xe077: WORD 'WE079' codep=0x2214 wordp=0xe079
// ================================================
// 0xe079: dw 0x0005

// ================================================
// 0xe07b: WORD 'WE07D' codep=0x224c wordp=0xe07d params=1 returns=1
// ================================================

void WE07D() // WE07D
{
  unsigned short int a, b;
  a = Pop(); // >R
  WDD78(); // WDD78
  WDD64(); // WDD64
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
// 0xe09f: WORD 'WE0A1' codep=0x224c wordp=0xe0a1 params=0 returns=1
// ================================================

void WE0A1() // WE0A1
{
  Push(Read16(cc_WE075)); // WE075
  WE07D(); // WE07D
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe0a9: WORD 'WE0AB' codep=0x224c wordp=0xe0ab params=0 returns=1
// ================================================

void WE0AB() // WE0AB
{
  Push(Read16(cc_WE079)); // WE079
  WE07D(); // WE07D
}


// ================================================
// 0xe0b1: WORD 'WE0B3' codep=0x224c wordp=0xe0b3 params=0 returns=1
// ================================================
// orphan

void WE0B3() // WE0B3
{
  WE0A1(); // WE0A1
  Push(!Pop()); //  NOT
  WE0AB(); // WE0AB
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe0bf: WORD 'WE0C1' codep=0x1d29 wordp=0xe0c1
// ================================================
// 0xe0c1: db 0x3a 0x20 ': '

// ================================================
// 0xe0c3: WORD 'WE0C5' codep=0x1d29 wordp=0xe0c5
// ================================================
// 0xe0c5: db 0x56 0x3a 0x20 0xa0 'V:  '

// ================================================
// 0xe0c9: WORD 'WE0CB' codep=0x224c wordp=0xe0cb params=1 returns=0
// ================================================
// orphan

void WE0CB() // WE0CB
{
  Push(pp_WE0C1); // WE0C1
  _st__ex__gt_(); // <!>
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE0C5); // WE0C5
  _2_ex_(); // 2!
}


// ================================================
// 0xe0d9: WORD 'WE0DB' codep=0x224c wordp=0xe0db params=0 returns=1
// ================================================

void WE0DB() // WE0DB
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WE0C5); // WE0C5
  _2_at_(); // 2@
  Push(Read16(pp_WE0C1)); // WE0C1 @
  Push(0);
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe0ef: WORD 'WE0F1' codep=0x224c wordp=0xe0f1 params=0 returns=1
// ================================================

void WE0F1() // WE0F1
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WDE0C.offset); // WDE0C<IFIELD>
  WDE77(); // WDE77
  WDD46(); // WDD46
  Push(0x63ef+WDE07.offset); // WDE07<IFIELD>
  WDE81(); // WDE81
  WDD46(); // WDD46
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe107: WORD 'WE109' codep=0x224c wordp=0xe109 params=0 returns=1
// ================================================

void WE109() // WE109
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WDE16.offset); // WDE16<IFIELD>
  WDE77(); // WDE77
  WDD46(); // WDD46
  Push(0x63ef+WDE11.offset); // WDE11<IFIELD>
  WDE81(); // WDE81
  WDD46(); // WDD46
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe11f: WORD 'WE121' codep=0x224c wordp=0xe121 params=0 returns=1
// ================================================

void WE121() // WE121
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==1?1:0); // A-POSTU C@ 1 =
}


// ================================================
// 0xe12b: WORD 'WE12D' codep=0x224c wordp=0xe12d params=0 returns=1
// ================================================

void WE12D() // WE12D
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==8?1:0); // A-POSTU C@ 8 =
}


// ================================================
// 0xe137: WORD 'WE139' codep=0x224c wordp=0xe139 params=0 returns=1
// ================================================

void WE139() // WE139
{
  Push((Read16(pp_A_dash_POSTU)&0xFF)==0x0010?1:0); // A-POSTU C@ 0x0010 =
}


// ================================================
// 0xe145: WORD 'WE147' codep=0x1d29 wordp=0xe147
// ================================================
// orphan
// 0xe147: db 0x00 0x00 '  '

// ================================================
// 0xe149: WORD 'WE14B' codep=0x224c wordp=0xe14b params=0 returns=1
// ================================================
// orphan

void WE14B() // WE14B
{
  WDD4E(); // WDD4E
  Push(0x005a);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(pp_WE147); // WE147
    Push(-1);
    TOGGLE(); // TOGGLE
  }
  Push(Read16(pp_WE147)); // WE147 @
  WDD46(); // WDD46
}


// ================================================
// 0xe165: WORD 'WE167' codep=0x224c wordp=0xe167 params=1 returns=1
// ================================================

void WE167() // WE167
{
  Push(Read16(pp_WDE41)); // WDE41 @
  if (Pop() != 0)
  {
    Push(-1);
    Push(1);
    RRND(); // RRND
  } else
  {
    Push(0);
  }
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe17f: WORD 'WE181' codep=0x224c wordp=0xe181 params=0 returns=1
// ================================================

void WE181() // WE181
{
  Push((Read16(0x63ef+WDE20.offset)&0xFF) & 8); // WDE20<IFIELD> C@ 8 AND
  WDD46(); // WDD46
}


// ================================================
// 0xe18d: WORD 'WE18F' codep=0x224c wordp=0xe18f params=0 returns=1
// ================================================

void WE18F() // WE18F
{
  Push(Read16(0x63ef+WDE1B.offset)); // WDE1B<IFIELD> @
  WDD46(); // WDD46
  WE181(); // WE181
  Push(Pop() & Pop()); // AND
  Push(Pop() & (Read16(pp_IsNEB)==0?1:0)); //  ?NEB @ 0= AND
}


// ================================================
// 0xe1a3: WORD 'WE1A5' codep=0x224c wordp=0xe1a5 params=0 returns=1
// ================================================

void WE1A5() // WE1A5
{
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    Push(0xbf05); // 'OV/STXT'
    return;
  }
  Push(0xbef3); // 'OV/STATUS'
}


// ================================================
// 0xe1bf: WORD 'WE1C1' codep=0x224c wordp=0xe1c1 params=0 returns=1
// ================================================

void WE1C1() // WE1C1
{
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbe4b); // 'OVDBA'
    return;
  }
  Push(0xbe2b); // 'OV/DA'
}


// ================================================
// 0xe1db: WORD 'WE1DD' codep=0x224c wordp=0xe1dd params=0 returns=1
// ================================================

void WE1DD() // WE1DD
{
  Push(Read16(0x63ef+WDE25.offset)); // WDE25<IFIELD> @
  WDD46(); // WDD46
  WE18F(); // WE18F
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WE1A5(); // WE1A5
    return;
  }
  WE1C1(); // WE1C1
}


// ================================================
// 0xe1f5: WORD 'WE1F7' codep=0x1d29 wordp=0xe1f7
// ================================================
// 0xe1f7: db 0x3a 0x20 ': '

// ================================================
// 0xe1f9: WORD 'WE1FB' codep=0x2214 wordp=0xe1fb
// ================================================
// 0xe1fb: dw 0x0014

// ================================================
// 0xe1fd: WORD 'WE1FF' codep=0x2214 wordp=0xe1ff
// ================================================
// 0xe1ff: dw 0x0016

// ================================================
// 0xe201: WORD 'WE203' codep=0x2214 wordp=0xe203
// ================================================
// 0xe203: dw 0x0001

// ================================================
// 0xe205: WORD 'WE207' codep=0x2214 wordp=0xe207
// ================================================
// 0xe207: dw 0x0000

// ================================================
// 0xe209: WORD 'WE20B' codep=0x224c wordp=0xe20b
// ================================================
// orphan

void WE20B() // WE20B
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  C_co_(); // C,
  CODE(); // (;CODE) inlined assembler code
// 0xe211: call   1649
  Push((Read16(Pop())&0xFF) + Read16(pp_WE1F7)); //  C@ WE1F7 @ +
}


// ================================================
// 0xe21e: WORD 'CURRX' codep=0xe211 wordp=0xe228
// ================================================
// 0xe228: db 0x00 ' '

// ================================================
// 0xe229: WORD 'CURRY' codep=0xe211 wordp=0xe233
// ================================================
// 0xe233: db 0x04 ' '

// ================================================
// 0xe234: WORD 'DESTX' codep=0xe211 wordp=0xe23e
// ================================================
// 0xe23e: db 0x08 ' '

// ================================================
// 0xe23f: WORD 'DESTY' codep=0xe211 wordp=0xe249
// ================================================
// 0xe249: db 0x0a ' '

// ================================================
// 0xe24a: WORD 'MORIG' codep=0xe211 wordp=0xe254
// ================================================
// 0xe254: db 0x0c ' '

// ================================================
// 0xe255: WORD 'MCLASS' codep=0xe211 wordp=0xe260
// ================================================
// 0xe260: db 0x0d ' '

// ================================================
// 0xe261: WORD 'DELTAX' codep=0xe211 wordp=0xe26c
// ================================================
// 0xe26c: db 0x0e ' '

// ================================================
// 0xe26d: WORD 'DELTAY' codep=0xe211 wordp=0xe278
// ================================================
// 0xe278: db 0x12 ' '

// ================================================
// 0xe279: WORD 'WE27B' codep=0x224c wordp=0xe27b
// ================================================

void WE27B() // WE27B
{
  MCLASS(); // MCLASS
  Push((Read16(Pop())&0xFF) & 0x000f); //  C@ 0x000f AND
}


// ================================================
// 0xe287: WORD 'MARRAY' codep=0x1d29 wordp=0xe292
// ================================================
// 0xe292: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x44 0xe4 0xae 0x0b 0x90 0x16 0x4d 0x74 0x23 0x0a 0x02 0x4d 0x74 0x30 0x0b 0xff 0x4d 0x74 0x24 0x0a 0x01 0x4d '                                                                                                                                                                                                                                                                                                                                                                                                                                                        D     Mt#  Mt0  Mt$  M'

// ================================================
// 0xe460: WORD 'WE462' codep=0x224c wordp=0xe462 params=0 returns=0
// ================================================

void WE462() // WE462
{
  Push(pp_MARRAY); // MARRAY
  Push(Read16(cc_WE1FB) * Read16(cc_WE1FF)); // WE1FB WE1FF *
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0xe470: WORD 'WE472' codep=0x224c wordp=0xe472 params=1 returns=0
// ================================================

void WE472() // WE472
{
  Push(Pop() * Read16(cc_WE1FF) + pp_MARRAY); //  WE1FF * MARRAY +
  Push(pp_WE1F7); // WE1F7
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe480: WORD 'WE482' codep=0x224c wordp=0xe482
// ================================================

void WE482() // WE482
{
  CURRX(); // CURRX
  Push(Read16(Pop())); //  @
  CURRY(); // CURRY
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xe48c: WORD 'WE48E' codep=0x224c wordp=0xe48e
// ================================================
// orphan

void WE48E() // WE48E
{
  DESTX(); // DESTX
  Push(Read16(Pop())); //  @
  DESTY(); // DESTY
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xe498: WORD 'WE49A' codep=0x224c wordp=0xe49a params=0 returns=0
// ================================================

void WE49A() // WE49A
{
  PRINT(".", 1); // (.")
}


// ================================================
// 0xe4a0: WORD 'WE4A2' codep=0x224c wordp=0xe4a2 params=0 returns=0
// ================================================

void WE4A2() // WE4A2
{
  _gt_2FONT(); // >2FONT
  PRINT(".", 1); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe4ac: WORD 'WE4AE' codep=0x224c wordp=0xe4ae
// ================================================

void WE4AE() // WE4AE
{
  CURRX(); // CURRX
  Push(Read16(Pop())); //  @
  Push(2);
  MOD(); // MOD
  if (Pop() != 0)
  {
    PRINT("+", 1); // (.")
    return;
  }
  PRINT("*", 1); // (.")
}


// ================================================
// 0xe4c8: WORD 'SCALE>MIS' codep=0x4a4f wordp=0xe4d6
// ================================================

void SCALE_gt_MIS() // SCALE>MIS
{
  switch(Pop()) // SCALE>MIS
  {
  case 2:
    WE49A(); // WE49A
    break;
  case 4:
    WE4A2(); // WE4A2
    break;
  case 8:
    WE4AE(); // WE4AE
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe4e6: WORD 'WE4E8' codep=0x224c wordp=0xe4e8
// ================================================

void WE4E8() // WE4E8
{
  MORIG(); // MORIG
  Push((Read16(Pop())&0xFF)==Read16(cc_WE207)?1:0); //  C@ WE207 =
  if (Pop() != 0)
  {
    GetColor(RED);
    return;
  }
  GetColor(LT_dash_BLUE);
}


// ================================================
// 0xe4fe: WORD 'WE500' codep=0x224c wordp=0xe500
// ================================================

void WE500() // WE500
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(cc_WE1FB); // WE1FB
  do // (DO)
  {
    Push(i); // I
    WE472(); // WE472
    WE27B(); // WE27B
    if (Pop() != 0)
    {
      WE482(); // WE482
      WLD_gt_SCR(); // WLD>SCR
      SCR_gt_BLT(); // SCR>BLT
      SWAP(); // SWAP
      Push(Pop() + 3); //  3 +
      SWAP(); // SWAP
      POS_dot_(); // POS.
      WE4E8(); // WE4E8
      StoreCOLOR(); // !COLOR
      Push(Read16(pp_XWLD_c_XPIX)); // XWLD:XPIX @
      SCALE_gt_MIS(); // SCALE>MIS case
    }
    i++;
  } while(i<imax); // (LOOP)

  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe534: WORD 'WE536' codep=0x224c wordp=0xe536 params=2 returns=2
// ================================================

void WE536() // WE536
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
// 0xe544: WORD 'WE546' codep=0x224c wordp=0xe546
// ================================================

void WE546() // WE546
{
  unsigned short int a;
  DESTX(); // DESTX
  Push(Read16(Pop())); //  @
  CURRX(); // CURRX
  Push(Read16(Pop())); //  @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  DESTY(); // DESTY
  Push(Read16(Pop())); //  @
  CURRY(); // CURRY
  Push(Read16(Pop())); //  @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  a = Pop(); // >R
  Push(Read16(a)); // R@
  WE536(); // WE536
  DELTAY(); // DELTAY
  _2_ex_(); // 2!
  Push(a); // R>
  WE536(); // WE536
  DELTAX(); // DELTAX
  _2_ex_(); // 2!
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  CURRX(); // CURRX
  Push(Pop() + 2); //  2+
  _st__ex__gt_(); // <!>
  CURRY(); // CURRY
  Push(Pop() + 2); //  2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe58c: WORD 'WE58E' codep=0x224c wordp=0xe58e params=0 returns=0
// ================================================

void WE58E() // WE58E
{
  unsigned short int i, imax;
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  WE167(); // WE167
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_ICON(); // POINT>ICON
    DrawICON(); // .ICON
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe5aa: WORD 'WE5AC' codep=0x224c wordp=0xe5ac params=0 returns=0
// ================================================

void WE5AC() // WE5AC
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe5ba: WORD 'WE5BC' codep=0x224c wordp=0xe5bc
// ================================================

void WE5BC() // WE5BC
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
// 0xe5da: WORD 'WE5DC' codep=0x224c wordp=0xe5dc params=0 returns=0
// ================================================

void WE5DC() // WE5DC
{
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    GetColor(DK_dash_GREEN);
  } else
  {
    GetColor(BLACK);
  }
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
}


// ================================================
// 0xe5f2: WORD 'WE5F4' codep=0x224c wordp=0xe5f4
// ================================================

void WE5F4() // WE5F4
{
  WE5AC(); // WE5AC
  _gt_MAINVIEW(); // >MAINVIEW
  WE5DC(); // WE5DC
  VCLIPSET(); // VCLIPSET
  WE500(); // WE500
  WE58E(); // WE58E
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe608: WORD 'WE60A' codep=0x224c wordp=0xe60a
// ================================================

void WE60A() // WE60A
{
  MORIG(); // MORIG
  Push((Read16(Pop())&0xFF)==Read16(cc_WE207)?1:0); //  C@ WE207 =
  if (Pop() != 0)
  {
    Push(pp_WDE3D); // WDE3D
  } else
  {
    Push(pp_WDE39); // WDE39
  }
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe622: WORD 'WE624' codep=0x224c wordp=0xe624 params=0 returns=0
// ================================================

void WE624() // WE624
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_IsSOUND)); // ?SOUND @
  if (Pop() == 0) return;

  i = 0;
  imax = 0x03e8;
  do // (DO)
  {
    BEEPON(); // BEEPON
    Push(i); // I
    TONE(); // TONE
    DISPLAY_dash_WAIT(); // DISPLAY-WAIT

    j = 0;
    jmax = 0x000c * Read16(cc_MPS); // 0x000c MPS *
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
// 0xe65a: WORD 'WE65C' codep=0x2214 wordp=0xe65c
// ================================================
// 0xe65c: dw 0x0000

// ================================================
// 0xe65e: WORD 'WE660' codep=0x224c wordp=0xe660 params=0 returns=0
// ================================================

void WE660() // WE660
{
  unsigned short int i, imax, j, jmax;
  Push(0x0064);
  Push(0x03e8);
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(RED);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2 - 1); //  2* 1-
  Push(0xe65c); // 'WE65C'
  Store_3(); // !_3
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BEEPON(); // BEEPON
    Push(i); // I
    Push(i * 2); // I 2*
    RRND(); // RRND
    TONE(); // TONE

    j = 0;
    jmax = 3 * Read16(cc_MPS); // 3 MPS *
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    Push(Read16(cc_WE65C)); // WE65C
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe6aa: WORD 'WE6AC' codep=0x1d29 wordp=0xe6ac
// ================================================
// 0xe6ac: db 0x00 0x00 '  '

// ================================================
// 0xe6ae: WORD 'WE6B0' codep=0x1d29 wordp=0xe6b0
// ================================================
// 0xe6b0: db 0x00 0x00 '  '

// ================================================
// 0xe6b2: WORD 'WE6B4' codep=0x224c wordp=0xe6b4
// ================================================

void WE6B4() // WE6B4
{
  unsigned short int a, i, imax;
  Push(Read16(pp_WE1F7)); // WE1F7 @
  a = Pop(); // >R

  i = 0;
  imax = Read16(cc_WE1FB); // WE1FB
  do // (DO)
  {
    Push(i); // I
    WE472(); // WE472
    _2DUP(); // 2DUP
    WE482(); // WE482
    D_eq_(); // D=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  Push(Read16(pp_WE1F7)); // WE1F7 @
  Push(a); // R>
  Push(pp_WE1F7); // WE1F7
  Store_3(); // !_3
}


// ================================================
// 0xe6e2: WORD 'WE6E4' codep=0x224c wordp=0xe6e4 params=6 returns=0
// ================================================

void WE6E4() // WE6E4
{
  Push(Read16(pp_WE6AC)); // WE6AC @
  Push(Read16(cc_WE1FB)); // WE1FB
  _st_(); // <
  if (Pop() != 0)
  {
    Push2Words("0.");
    WE6B4(); // WE6B4
    Push(pp_WE1F7); // WE1F7
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
    WE546(); // WE546
    Push(1);
    Push(pp_WE6AC); // WE6AC
    _st__plus__ex__gt_(); // <+!>
    Push(1);
    WE60A(); // WE60A
    WE624(); // WE624
    return;
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe72a: WORD 'WE72C' codep=0x224c wordp=0xe72c
// ================================================

void WE72C() // WE72C
{
  Push(-1);
  WE60A(); // WE60A
  Push(Read16(pp_WE1F7)); // WE1F7 @
  Push(Read16(cc_WE1FF)); // WE1FF
  Push(0);
  FILL_1(); // FILL_1
  Push(-1);
  Push(pp_WE6AC); // WE6AC
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe742: WORD 'WE744' codep=0x224c wordp=0xe744
// ================================================

void WE744() // WE744
{
  unsigned short int a, i, imax;
  WE482(); // WE482
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  OVER(); // OVER
  a = Pop(); // >R
  SWAP(); // SWAP

  i = 0;
  imax = Pop();
  do // (DO)
  {
    SWAP(); // SWAP
    POINT_gt_ICON(); // POINT>ICON
    MORIG(); // MORIG
    Push((Read16(Pop())&0xFF)==Read16(cc_WE207)?1:0); //  C@ WE207 =
    if (Pop() != 0)
    {
      GetID(); // @ID
      Push(0x001b);
      Push(0x0023);
      WITHIN(); // WITHIN
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
  WDD46(); // WDD46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe796: WORD 'WE798' codep=0x224c wordp=0xe798
// ================================================

void WE798() // WE798
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(cc_WE1FB); // WE1FB
  do // (DO)
  {
    Push(i); // I
    WE472(); // WE472
    WE27B(); // WE27B
    if (Pop() != 0)
    {
      WE482(); // WE482
      IsINVIS(); // ?INVIS
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        WE72C(); // WE72C
      } else
      {
        WE744(); // WE744
        if (Pop() != 0)
        {
          Push(1);
          Push(pp_WE6B0); // WE6B0
          _plus__ex__2(); // +!_2
        }
      }
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe7ca: WORD 'WE7CC' codep=0x224c wordp=0xe7cc
// ================================================

void WE7CC() // WE7CC
{
  unsigned short int a, b;
  PAD(); // PAD
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  PAD(); // PAD
  Push(Pop() + 0x0014); //  0x0014 +
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  PAD(); // PAD
  Push(Pop() + 0x0028); //  0x0028 +
  Push(pp_OIN); // OIN
  Store_3(); // !_3
  PAD(); // PAD
  Push(Pop() + 0x003c); //  0x003c +
  Push(pp_OOUT); // OOUT
  Store_3(); // !_3
  Push(2);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  PAD(); // PAD
  a = Pop(); // >R
  Push(a); // I
  Store_3(); // !_3
  Push(a + 2); // I 2+
  Store_3(); // !_3
  Push(a + 4); // I 4 +
  Store_3(); // !_3
  Push(a + 6); // R> 6 +
  Store_3(); // !_3
  CLIPPER(); // CLIPPER
  Push(Read16(pp_VIN)); // VIN @
  b = Pop(); // >R
  Push(Read16(b + 6)); // I 6 + @
  Push(Read16(b + 4)); // I 4 + @
  Push(Read16(b + 2)); // I 2+ @
  Push(Read16(b)); // R> @
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  Push(Pop() & (Read16(pp__n_IN)==3?1:0)); //  #IN @ 3 = AND
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(Read16(pp_VIN) + 8); // VIN @ 8 +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    SWAP(); // SWAP
    Push(Read16(Pop() + 2)); //  2+ @
  }
  Push(!Read16(pp_TRJCT)); // TRJCT @ NOT
}


// ================================================
// 0xe86c: WORD 'WE86E' codep=0x224c wordp=0xe86e
// ================================================

void WE86E() // WE86E
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CI(); // CI
  IsICON_dash_IADDR(); // ?ICON-IADDR
  Push(Pop()==0?1:0); //  0=
  ABORT("ERR: MOVE-ICON", 14);// (ABORT")
  POINT_gt_ICON(); // POINT>ICON
  WDD78(); // WDD78
  StoreIY(); // !IY
  StoreIX(); // !IX
  WE5AC(); // WE5AC
  WE5F4(); // WE5F4
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe89f: WORD 'WE8A1' codep=0x224c wordp=0xe8a1 params=4 returns=0
// ================================================

void WE8A1() // WE8A1
{
  WDEB5(); // WDEB5
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xe8b3: WORD 'WE8B5' codep=0x224c wordp=0xe8b5 params=4 returns=0
// ================================================

void WE8B5() // WE8B5
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    WDE9B(); // WDE9B
    WDE9B(); // WDE9B
  } else
  {
    WDEB5(); // WDEB5
  }
  Push(-Pop()); //  NEGATE
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(-Pop()); //  NEGATE
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xe8df: WORD 'WE8E1' codep=0x224c wordp=0xe8e1
// ================================================

void WE8E1() // WE8E1
{
  unsigned short int a, i, imax;
  Push(Read16(pp_WE6B0)); // WE6B0 @
  a = Pop(); // >R
  Push(pp_WE6B0); // WE6B0
  OFF(); // OFF

  i = 0;
  imax = Read16(cc_WE1FB); // WE1FB
  do // (DO)
  {
    Push(i); // I
    WE472(); // WE472
    WE27B(); // WE27B
    if (Pop() != 0)
    {
      WE744(); // WE744
      if (Pop() != 0)
      {
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Push(pp_WE6B0); // WE6B0
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe90f: WORD 'WE911' codep=0x224c wordp=0xe911 params=0 returns=0
// ================================================

void WE911() // WE911
{
  Push(Read16(pp_WDE41)); // WDE41 @
  if (Pop() == 0) return;
  WDEAB(); // WDEAB
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WDEAB(); // WDEAB
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xe927: WORD 'WE929' codep=0x224c wordp=0xe929
// ================================================

void WE929() // WE929
{
  WE27B(); // WE27B
  Push(Pop()==6?1:0); //  6 =
  if (Pop() == 0) return;
  WDD64(); // WDD64
  WE911(); // WE911
  SWAP(); // SWAP
  DESTX(); // DESTX
  StoreD(); // D!
  WE546(); // WE546
  WE744(); // WE744
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WE5BC(); // WE5BC
}


// ================================================
// 0xe94b: WORD 'WE94D' codep=0x224c wordp=0xe94d
// ================================================

void WE94D() // WE94D
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(cc_WE1FB); // WE1FB
  do // (DO)
  {
    Push(i); // I
    WE472(); // WE472
    MCLASS(); // MCLASS
    Push(Read16(Pop())&0xFF); //  C@
    if (Pop() != 0)
    {
      WE929(); // WE929
      WE5BC(); // WE5BC
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe969: WORD 'WE96B' codep=0x224c wordp=0xe96b params=0 returns=0
// ================================================

void WE96B() // WE96B
{
  Push(0x000a);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(pp_WDE41); // WDE41
  Store_3(); // !_3
}


// ================================================
// 0xe97b: WORD 'WE97D' codep=0x224c wordp=0xe97d
// ================================================

void WE97D() // WE97D
{
  unsigned short int i, imax;
  WE94D(); // WE94D
  WE5F4(); // WE5F4
  WE798(); // WE798
  Push(Read16(pp_WE6B0)); // WE6B0 @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    WE8E1(); // WE8E1
    WE482(); // WE482
    WE27B(); // WE27B
    MORIG(); // MORIG
    Push(Read16(Pop())&0xFF); //  C@
    Push(1);
    Push(0xc8c3); // 'DO-DA'
    MODULE(); // MODULE
    WE72C(); // WE72C
    Push(-1);
    Push(pp_WE6B0); // WE6B0
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

  WE5F4(); // WE5F4
}


// ================================================
// 0xe9b3: WORD 'WE9B5' codep=0x224c wordp=0xe9b5 params=2 returns=0
// ================================================

void WE9B5() // WE9B5
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(!(Pop()==0x0018?1:0)); //  0x0018 = NOT
  if (Pop() != 0)
  {
    WDD78(); // WDD78
    WDEB5(); // WDEB5
    SWAP(); // SWAP
    KEY_gt_ORIEN(); // KEY>ORIEN case
    Push(Read16(regsp)); // DUP
    Push(0x63ef+WDDCC.offset); // WDDCC<IFIELD>
    C_ex_(); // C!
    Push(Pop() + 0x0023); //  0x0023 +
    StoreID(); // !ID
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe9dd: WORD 'WE9DF' codep=0x224c wordp=0xe9df
// ================================================

void WE9DF() // WE9DF
{
  WDD64(); // WDD64
  WE9B5(); // WE9B5
  Push((Read16(0x63ef+WDDCC.offset)&0xFF) + 4); // WDDCC<IFIELD> C@ 4 +
  Push(8);
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0x63ef+WDDCC.offset); // WDDCC<IFIELD>
  C_ex_(); // C!
  Push(Pop() + 0x0023); //  0x0023 +
  StoreID(); // !ID
}


// ================================================
// 0xe9ff: WORD 'WEA01' codep=0x224c wordp=0xea01 params=0 returns=0
// ================================================

void WEA01() // WEA01
{
  Push(Read16(pp_XABS) - 0x0012); // XABS @ 0x0012 -
  Push(pp_XVIS); // XVIS
  _st__ex__gt_(); // <!>
  Push(Read16(pp_YABS) - 0x001e); // YABS @ 0x001e -
  Push(pp_YVIS); // YVIS
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xea1f: WORD 'WEA21' codep=0x224c wordp=0xea21
// ================================================

void WEA21() // WEA21
{
  unsigned short int a;
  WLD_gt_SCR(); // WLD>SCR
  Push(Read16(pp_XWLD_c_XPIX)); // XWLD:XPIX @
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
// 0xea3b: WORD 'WEA3D' codep=0x224c wordp=0xea3d
// ================================================

void WEA3D() // WEA3D
{
  unsigned short int a;
  Push(Read16(pp_IINDEX)); // IINDEX @
  a = Pop(); // >R
  Push2Words("*SHIP");
  IsICON_dash_IADDR(); // ?ICON-IADDR
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
  Push((Read16(0x63ef+WDE2A.offset)&0xFF) + 0x001b); // WDE2A<IFIELD> C@ 0x001b +
  StoreID(); // !ID
  Push(a); // R>
  Push(pp_IINDEX); // IINDEX
  _st__ex__gt_(); // <!>
  WE5F4(); // WE5F4
}


// ================================================
// 0xea61: WORD 'WEA63' codep=0x224c wordp=0xea63 params=0 returns=1
// ================================================

void WEA63() // WEA63
{
  Push(0x63ef+WDDDF.offset); // WDDDF<IFIELD>
  Push(Read16(regsp)); // DUP
  WDE81(); // WDE81
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(((Read16(Pop() + 1)&0xFF) & 0x0080)==0?1:0); //  1+ C@ 0x0080 AND 0=
  WDD46(); // WDD46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xea7f: WORD 'WEA81' codep=0x224c wordp=0xea81
// ================================================

void WEA81() // WEA81
{
  unsigned short int a, b;
  Push(Read16(pp_IINDEX)); // IINDEX @
  a = Pop(); // >R
  b = Pop(); // >R
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  WE5DC(); // WE5DC
  WE500(); // WE500
  WEA21(); // WEA21
  _2SWAP(); // 2SWAP
  WEA21(); // WEA21
  Push(b); // R>
  StoreCOLOR(); // !COLOR
  WE7CC(); // WE7CC
  Pop(); // DROP
  LLINE(); // LLINE
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  Push(Read16(pp_IsSOUND)); // ?SOUND @
  if (Pop() != 0)
  {
    WE660(); // WE660
  }
  Push(a); // R>
  POINT_gt_ICON(); // POINT>ICON
}


// ================================================
// 0xeab9: WORD 'WEABB' codep=0x224c wordp=0xeabb params=0 returns=0
// ================================================

void WEABB() // WEABB
{
  WEA01(); // WEA01
  _gt_2ICONF(); // >2ICONF
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(4);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX + 2); // XWLD:XPIX 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX + 2); // YWLD:YPIX 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000a); // XVIS @ 0x000a +
  Push(Read16(pp_YVIS) + 0x000f); // YVIS @ 0x000f +
  Push(Read16(pp_XVIS) + 0x001a); // XVIS @ 0x001a +
  Push(Read16(pp_YVIS) + 0x002b); // YVIS @ 0x002b +
  StoreVISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xeb13: WORD 'WEB15' codep=0x224c wordp=0xeb15 params=0 returns=0
// ================================================

void WEB15() // WEB15
{
  WEA01(); // WEA01
  _gt_3ICONFONT(); // >3ICONFONT
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX + 2); // XWLD:XPIX 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX + 2); // YWLD:YPIX 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(pp_XVIS) + 0x0022); // XVIS @ 0x0022 +
  Push(Read16(pp_YVIS) + 0x003a); // YVIS @ 0x003a +
  StoreVISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xeb61: WORD 'WEB63' codep=0x224c wordp=0xeb63 params=0 returns=0
// ================================================

void WEB63() // WEB63
{
  WEA01(); // WEA01
  _gt_1ICONFONT(); // >1ICONFONT
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX + 2); // XWLD:XPIX 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX + 2); // YWLD:YPIX 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0017); // YVIS @ 0x0017 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x002a); // YVIS @ 0x002a +
  StoreVISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xebb9: WORD 'WEBBB' codep=0x1d29 wordp=0xebbb
// ================================================
// 0xebbb: db 0x3a 0x20 ': '

// ================================================
// 0xebbd: WORD 'WEBBF' codep=0x1d29 wordp=0xebbf
// ================================================
// 0xebbf: db 0x3a 0x20 ': '

// ================================================
// 0xebc1: WORD 'WEBC3' codep=0x224c wordp=0xebc3
// ================================================

void WEBC3() // WEBC3
{
  Push(Read16(pp_XABS)); // XABS @
  GetIX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(pp_YABS)); // YABS @
  GetIY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_WEBBF)); // WEBBF @
  MIN(); // MIN
  Push(pp_WEBBF); // WEBBF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xebe5: WORD 'WEBE7' codep=0x224c wordp=0xebe7
// ================================================

void WEBE7() // WEBE7
{
  Push(Read16(pp_XABS)); // XABS @
  GetIX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(pp_YABS)); // YABS @
  GetIY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_WEBBB)); // WEBBB @
  MAX(); // MAX
  Push(pp_WEBBB); // WEBBB
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec09: WORD 'WEC0B' codep=0x224c wordp=0xec0b
// ================================================

void WEC0B() // WEC0B
{
  unsigned short int i, imax;
  Push(pp_WEBBB); // WEBBB
  OFF(); // OFF
  Push(0x03e8);
  Push(pp_WEBBF); // WEBBF
  _st__ex__gt_(); // <!>

  i = 0;
  imax = Read16(pp_ILOCAL); // ILOCAL @
  do // (DO)
  {
    Push(i); // I
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(0x0023);
    Push(0x002c);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      WEBC3(); // WEBC3
      WEBE7(); // WEBE7
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec3d: WORD 'SET-SCALE' codep=0x224c wordp=0xec4b
// ================================================
// entry

void SET_dash_SCALE() // SET-SCALE
{
  WEC0B(); // WEC0B
  Push(Read16(pp_WEBBB)); // WEBBB @
  Push(Read16(regsp)); // DUP
  Push(5);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    WEB63(); // WEB63
  } else
  {
    Push(5);
    Push(8);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      WEABB(); // WEABB
    } else
    {
      WEB15(); // WEB15
    }
  }
  WE5F4(); // WE5F4
}


// ================================================
// 0xec79: WORD 'WEC7B' codep=0x224c wordp=0xec7b
// ================================================

void WEC7B() // WEC7B
{
  WE5AC(); // WE5AC
  SET_dash_SCALE(); // SET-SCALE
}


// ================================================
// 0xec81: WORD 'WEC83' codep=0x224c wordp=0xec83 params=2 returns=2
// ================================================
// orphan

void WEC83() // WEC83
{
  Push(Pop() + 0x0044); //  0x0044 +
  SWAP(); // SWAP
  Push(Pop() + 8); //  8 +
  SWAP(); // SWAP
}


// ================================================
// 0xec93: WORD 'WEC95' codep=0x224c wordp=0xec95
// ================================================

void WEC95() // WEC95
{
  WDD70(); // WDD70
  WDD64(); // WDD64
  WE911(); // WE911
  Push(Read16(cc_WE207)); // WE207
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0011?1:0); //  0x0011 =
  if (Pop() != 0)
  {
    Push(6);
  } else
  {
    LoadData(WDDA0); // from 'VESSEL'
    Push(Read16(Pop())&0xFF); //  C@
  }
  WE6E4(); // WE6E4
  Push(3);
  Push(0x63ef+WDDC7.offset); // WDDC7<IFIELD>
  C_ex_(); // C!
  Push(pp_WDE55); // WDE55
  ON_3(); // ON_3
  WE9DF(); // WE9DF
  WE055(); // WE055
}


// ================================================
// 0xecc5: WORD 'WECC7' codep=0x224c wordp=0xecc7 params=4 returns=1
// ================================================

void WECC7() // WECC7
{
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("LASER MISSED US!");
  DrawTTY(); // .TTY
}


// ================================================
// 0xece8: WORD 'WECEA' codep=0x224c wordp=0xecea
// ================================================

void WECEA() // WECEA
{
  unsigned short int a, b;
  WDD70(); // WDD70
  WDD64(); // WDD64
  WE911(); // WE911
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  GetColor(RED);
  WEA81(); // WEA81
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(b); // R>
  Push(a); // R>
  WDD64(); // WDD64
  WECC7(); // WECC7
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(pp_IsROD)); // ?ROD @
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM("LASER PARTIALLY DEFLECTED ");
      DrawTTY(); // .TTY
    } else
    {
      SET_STR_AS_PARAM("LASER CLASS ");
      DrawTTY(); // .TTY
      LoadData(WDDA8); // from 'VESSEL'
      Push(Read16(Pop())&0xFF); //  C@
      Draw(); // .
    }
    Push(Read16(cc_WE207)); // WE207
    Push(0);
    Push(0xc8c3); // 'DO-DA'
    MODULE(); // MODULE
  }
  Push(3);
  Push(0x63ef+WDDC7.offset); // WDDC7<IFIELD>
  C_ex_(); // C!
  Push(pp_WDE55); // WDE55
  ON_3(); // ON_3
  WE9DF(); // WE9DF
  WE055(); // WE055
}


// ================================================
// 0xed68: WORD 'WED6A' codep=0x224c wordp=0xed6a
// ================================================

void WED6A() // WED6A
{
  WDD70(); // WDD70
  WDD64(); // WDD64
}


// ================================================
// 0xed70: WORD 'WED72' codep=0x224c wordp=0xed72
// ================================================

void WED72() // WED72
{
  WED6A(); // WED6A
  WE8B5(); // WE8B5
  Push(4);
  Push(0x63ef+WDDC7.offset); // WDDC7<IFIELD>
  C_ex_(); // C!
  WDD70(); // WDD70
  WE9B5(); // WE9B5
  WE86E(); // WE86E
}


// ================================================
// 0xed84: WORD 'WED86' codep=0x224c wordp=0xed86
// ================================================

void WED86() // WED86
{
  WED6A(); // WED6A
  WE8A1(); // WE8A1
  Push(3);
  Push(0x63ef+WDDC7.offset); // WDDC7<IFIELD>
  C_ex_(); // C!
  WDD70(); // WDD70
  WE9B5(); // WE9B5
  WE86E(); // WE86E
}


// ================================================
// 0xed98: WORD 'WED9A' codep=0x224c wordp=0xed9a params=1 returns=0
// ================================================

void WED9A() // WED9A
{
  if (Pop() != 0)
  {
    WDD5A(); // WDD5A
    if (Pop() != 0)
    {
      WDE9B(); // WDE9B
    } else
    {
      Push(0);
    }
    return;
  }
  WDE9B(); // WDE9B
}


// ================================================
// 0xedb4: WORD '?APPROACH' codep=0x224c wordp=0xedc2 params=0 returns=1
// ================================================

void IsAPPROACH() // ?APPROACH
{
  Push((Read16(0x63ef+WDDC7.offset)&0xFF)==3?1:0); // WDDC7<IFIELD> C@ 3 =
}


// ================================================
// 0xedcc: WORD 'WEDCE' codep=0x224c wordp=0xedce
// ================================================

void WEDCE() // WEDCE
{
  unsigned short int a;
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(1);
  WED9A(); // WED9A
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(a); // R>
  WED9A(); // WED9A
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  WDD70(); // WDD70
  WE9B5(); // WE9B5
  WE86E(); // WE86E
  Push(0);
  Push(0x63ef+WDDC7.offset); // WDDC7<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xedfc: WORD '<COMBAT>' codep=0xb869 wordp=0xee09
// ================================================

void _st_COMBAT_gt_() // <COMBAT> rule
{
  int b;

  b = 1;
  WDF72(); // WDF72
  b = b && Pop();
  WDFC0(); // WDFC0
  b = b && Pop();
  WDFD2(); // WDFD2
  b = b && Pop();
  if (b)
  {
    WEC95(); // WEC95
  }

  b = 1;
  WDF72(); // WDF72
  b = b && !Pop();
  WDF8C(); // WDF8C
  b = b && Pop();
  WE12D(); // WE12D
  b = b && Pop();
  WDFC0(); // WDFC0
  b = b && Pop();
  if (b)
  {
    WEC95(); // WEC95
  }

  b = 1;
  WDF72(); // WDF72
  b = b && !Pop();
  WE139(); // WE139
  b = b && Pop();
  WDFC0(); // WDFC0
  b = b && Pop();
  if (b)
  {
    WEC95(); // WEC95
  }

  b = 1;
  WDF72(); // WDF72
  b = b && Pop();
  WDFA4(); // WDFA4
  b = b && Pop();
  WDFF4(); // WDFF4
  b = b && Pop();
  WE0AB(); // WE0AB
  b = b && Pop();
  if (b)
  {
    WECEA(); // WECEA
  }

  b = 1;
  WDF72(); // WDF72
  b = b && !Pop();
  WDF8C(); // WDF8C
  b = b && Pop();
  WE12D(); // WE12D
  b = b && Pop();
  WDFC0(); // WDFC0
  b = b && !Pop();
  WDFA4(); // WDFA4
  b = b && Pop();
  WE0AB(); // WE0AB
  b = b && Pop();
  if (b)
  {
    WECEA(); // WECEA
  }

  b = 1;
  WDF72(); // WDF72
  b = b && !Pop();
  WE139(); // WE139
  b = b && Pop();
  WDFC0(); // WDFC0
  b = b && !Pop();
  WDFA4(); // WDFA4
  b = b && Pop();
  WE0AB(); // WE0AB
  b = b && Pop();
  if (b)
  {
    WECEA(); // WECEA
  }

  b = 1;
  WE00F(); // WE00F
  b = b && Pop();
  WE12D(); // WE12D
  b = b && !Pop();
  WE121(); // WE121
  b = b && !Pop();
  WE019(); // WE019
  b = b && Pop();
  WE06B(); // WE06B
  b = b && Pop();
  if (b)
  {
    WED72(); // WED72
  }

  b = 1;
  WE121(); // WE121
  b = b && Pop();
  WE025(); // WE025
  b = b && !Pop();
  WE06B(); // WE06B
  b = b && Pop();
  if (b)
  {
    WED72(); // WED72
  }

  b = 1;
  WE043(); // WE043
  b = b && Pop();
  WE06B(); // WE06B
  b = b && Pop();
  if (b)
  {
    WED72(); // WED72
  }

  b = 1;
  WE06B(); // WE06B
  b = b && Pop();
  WE12D(); // WE12D
  b = b && Pop();
  WE0A1(); // WE0A1
  b = b && Pop();
  if (b)
  {
    WED86(); // WED86
  }

  b = 1;
  WE06B(); // WE06B
  b = b && Pop();
  WE12D(); // WE12D
  b = b && Pop();
  WDF96(); // WDF96
  b = b && !Pop();
  WDFA4(); // WDFA4
  b = b && Pop();
  WDFC0(); // WDFC0
  b = b && !Pop();
  if (b)
  {
    WED86(); // WED86
  }
}

// 0xee22: db 0x8f 0x90 0x16 0x4c 0x22 0xf0 0xed 0x39 0x3f 0x12 0x21 0x21 0x48 0x55 0x4c 0x4c 0x20 0x44 0x45 0x53 0x54 0x52 0x4f 0x59 0x45 0x44 0x31 0x31 0x37 0x33 '   L"  9? !!HULL DESTROYED1173'
// 0xee62: db 0x16 0x4c ' L'
// 0xee75: db 0x3b ';'

// ================================================
// 0xeec2: WORD 'WEEC4' codep=0x224c wordp=0xeec4 params=0 returns=1
// ================================================

void WEEC4() // WEEC4
{
  Push(Read16(0x63ef+WDE1B.offset)); // WDE1B<IFIELD> @
  Push(0x63ef+WDE02.offset); // WDE02<IFIELD>
  WDE77(); // WDE77
  Push(Pop() * 0x01f4); //  0x01f4 *
  _st_(); // <
}


// ================================================
// 0xeed6: WORD 'WEED8' codep=0x224c wordp=0xeed8
// ================================================

void WEED8() // WEED8
{
  Push(Read16(pp__h_VES)); // ^VES @
  POINT_gt_ICON(); // POINT>ICON
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeee6: WORD 'WEEE8' codep=0x224c wordp=0xeee8 params=0 returns=0
// ================================================

void WEEE8() // WEEE8
{
  Push(pp__h_VES); // ^VES
  OFF(); // OFF
}


// ================================================
// 0xeeee: WORD 'WEEF0' codep=0x224c wordp=0xeef0
// ================================================

void WEEF0() // WEEF0
{
  Push(0xee09); // '<COMBAT>'
  DISTRACT(); // DISTRACT
  _st_COMBAT_gt_(); // <COMBAT> rule
  Push(Pop()==0?1:0); //  0=
  WE06B(); // WE06B
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WEDCE(); // WEDCE
}


// ================================================
// 0xef06: WORD 'WEF08' codep=0x224c wordp=0xef08
// ================================================

void WEF08() // WEF08
{
  Push(Read16(0x63ef+WDDC2.offset)); // WDDC2<IFIELD> @
  LoadData(WDD98); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  _st_(); // <
  if (Pop() == 0) return;
  Push(5);
  LoadData(WDD98); // from 'VESSEL'
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xef1e: WORD 'WEF20' codep=0x224c wordp=0xef20 params=0 returns=0
// ================================================

void WEF20() // WEF20
{
  WEEC4(); // WEEC4
  if (Pop() == 0) return;
  Push(0x0014);
  Push(0x63ef+WDE1B.offset); // WDE1B<IFIELD>
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xef30: WORD 'COMBAT' codep=0x224c wordp=0xef3b
// ================================================
// entry

void COMBAT() // COMBAT
{
  SET_dash_SCALE(); // SET-SCALE
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    WEED8(); // WEED8
    GetID(); // @ID
    Push(0x0023);
    Push(0x002b);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      WEEF0(); // WEEF0
      WEF08(); // WEF08
    } else
    {
      GetID(); // @ID
      Push(0x001b);
      Push(0x0023);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        WEF20(); // WEF20
      }
    }
    ICLOSE(); // ICLOSE
    Push(Read16(pp__h_VES) + 1); // ^VES @ 1+
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    MOD(); // MOD
    Push(pp__h_VES); // ^VES
    Store_3(); // !_3
    WE97D(); // WE97D
  }
  Push(Read16(pp_WEBBF)); // WEBBF @
  Push(0x0016);
  _gt_(); // >
  Push(Pop() & (Read16(pp_IsCOMBAT)==0?1:0)); //  ?COMBAT @ 0= AND
  if (Pop() == 0) return;
  Push(Read16(pp__i_UNNEST)); // 'UNNEST @
  MODULE(); // MODULE
}


// ================================================
// 0xefa7: WORD 'ORIENT>O' codep=0x1d29 wordp=0xefb4
// ================================================
// 0xefb4: db 0x00 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0xff 0xff 0x00 0x00 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0x00 0x00 0xff 0xff 0x01 0x00 '                                '

// ================================================
// 0xefd4: WORD 'WEFD6' codep=0x224c wordp=0xefd6 params=0 returns=0
// ================================================

void WEFD6() // WEFD6
{
  unsigned short int a;
  Push(Read16(pp_WEBBB) + Read16(pp_WEBBF) >> 1); // WEBBB @ WEBBF @ + 2/
  Push(Read16(0x63ef+WDE2A.offset)&0xFF); // WDE2A<IFIELD> C@
  _4_star_(); // 4*
  Push(Pop() + pp_ORIENT_gt_O); //  ORIENT>O +
  _2_at_(); // 2@
  a = Pop(); // >R
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(Pop() + Read16(pp_XABS)); //  XABS @ +
  Push(a); // R>
  ROT(); // ROT
  Push(Pop() * Pop()); // *
  Push(Pop() + Read16(pp_YABS)); //  YABS @ +
  Push(pp_WDE45); // WDE45
  _2_ex_(); // 2!
}


// ================================================
// 0xf00c: WORD 'WF00E' codep=0x224c wordp=0xf00e params=0 returns=1
// ================================================

void WF00E() // WF00E
{
  Push((Read16(0x63ef+WDE20.offset)&0xFF) & 1); // WDE20<IFIELD> C@ 1 AND
}


// ================================================
// 0xf018: WORD 'WF01A' codep=0x224c wordp=0xf01a
// ================================================

void WF01A() // WF01A
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
  Push(6);
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf03c: WORD 'WF03E' codep=0x224c wordp=0xf03e
// ================================================

void WF03E() // WF03E
{
  WF01A(); // WF01A
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x000a);
  M_star_(); // M*
  Push(pp__10_star_END); // 10*END
  _2_ex_(); // 2!
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf056: WORD 'WF058' codep=0x224c wordp=0xf058 params=1 returns=0
// ================================================

void WF058() // WF058
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
  _2_ex_(); // 2!
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_at_(); // 2@
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_ex_(); // 2!
}


// ================================================
// 0xf07e: WORD 'WF080' codep=0x224c wordp=0xf080 params=0 returns=1
// ================================================

void WF080() // WF080
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
}


// ================================================
// 0xf088: WORD 'WF08A' codep=0x224c wordp=0xf08a
// ================================================

void WF08A() // WF08A
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
  WF01A(); // WF01A
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0ae: WORD 'WF0B0' codep=0x1d29 wordp=0xf0b0
// ================================================
// 0xf0b0: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xf0b4: WORD 'WF0B6' codep=0x224c wordp=0xf0b6 params=1 returns=2
// ================================================
// orphan

void WF0B6() // WF0B6
{
  Push(0);
  Push(0x00fa);
  ROT(); // ROT
  _dash_(); // -
  RRND(); // RRND
  Push(0x0032);
  _slash_(); // /
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xf0d6: WORD 'WF0D8' codep=0x224c wordp=0xf0d8
// ================================================

void WF0D8() // WF0D8
{
  unsigned short int a;
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WDE2F.offset); // WDE2F<IFIELD>
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WDE34.offset)&0xFF); // WDE34<IFIELD> C@
  a = Pop(); // >R
  Push(pp_WDE4F); // WDE4F
  _2_at_(); // 2@
  Push(Read16(a)); // R@
  WF0B6(); // WF0B6
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_WF0B0); // WF0B0
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(a); // R>
  WF0B6(); // WF0B6
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(pp_WF0B0 + 2); // WF0B0 2+
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  _2DUP(); // 2DUP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_WDE45); // WDE45
  StoreD(); // D!
}


// ================================================
// 0xf11c: WORD 'WF11E' codep=0x224c wordp=0xf11e params=0 returns=0
// ================================================

void WF11E() // WF11E
{
  unsigned short int i, imax;
  Push(0x2710);
  Push(pp_WDE4B); // WDE4B
  Store_3(); // !_3
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(Read16(regsp)); // DUP
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      POINT_gt_ICON(); // POINT>ICON
      GetID(); // @ID
      Push(0x0023);
      Push(0x002b);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        Push(pp_WDE45); // WDE45
        _2_at_(); // 2@
        WDD70(); // WDD70
        WDE59(); // WDE59
        Push(Read16(regsp)); // DUP
        Push(Read16(pp_WDE4B)); // WDE4B @
        _st_(); // <
        if (Pop() != 0)
        {
          Push(pp_WDE4B); // WDE4B
          _st__ex__gt_(); // <!>
          WDD70(); // WDD70
          Push(pp_WDE4F); // WDE4F
          _2_ex_(); // 2!
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
// 0xf17c: WORD 'WF17E' codep=0x224c wordp=0xf17e params=0 returns=1
// ================================================

void WF17E() // WF17E
{
  Push(Read16(pp_WDE4B) - 0x2710); // WDE4B @ 0x2710 -
}


// ================================================
// 0xf18a: WORD 'WF18C' codep=0x224c wordp=0xf18c params=0 returns=0
// ================================================

void WF18C() // WF18C
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("NO TARGET PRESENT");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf1a8: WORD 'WF1AA' codep=0x224c wordp=0xf1aa params=0 returns=0
// ================================================

void WF1AA() // WF1AA
{
  Push(1);
  Push(0x5098); // '?FIRED-'
  Store_3(); // !_3
}


// ================================================
// 0xf1b4: WORD 'WF1B6' codep=0x224c wordp=0xf1b6 params=0 returns=0
// ================================================

void WF1B6() // WF1B6
{
  Push(Read16(pp_WDE39)); // WDE39 @
  Push(Read16(cc_WE1FB) >> 1); // WE1FB 2/
  _st_(); // <
  if (Pop() == 0) return;
  WDD64(); // WDD64
  WF0D8(); // WF0D8
  Push(Read16(cc_WE203)); // WE203
  Push(0x63ef+WDE0C.offset); // WDE0C<IFIELD>
  WDE77(); // WDE77
  WE6E4(); // WE6E4
  Push(5);
  WF058(); // WF058
  WE055(); // WE055
  WF1AA(); // WF1AA
}


// ================================================
// 0xf1da: WORD 'WF1DC' codep=0x224c wordp=0xf1dc
// ================================================

void WF1DC() // WF1DC
{
  WDD64(); // WDD64
  WF0D8(); // WF0D8
  _2DUP(); // 2DUP
  Push(pp_WDE4F); // WDE4F
  _2_ex_(); // 2!
  VCLIPSET(); // VCLIPSET
  GetColor(LT_dash_BLUE);
  WEA81(); // WEA81
  DCLIPSET(); // DCLIPSET
  Push(pp_WDE4F); // WDE4F
  _2_at_(); // 2@
  Push(Read16(cc_WE203)); // WE203
  Push(0);
  Push(0xc8c3); // 'DO-DA'
  MODULE(); // MODULE
  Push(1);
  WF058(); // WF058
  WE055(); // WE055
  WF1AA(); // WF1AA
}


// ================================================
// 0xf206: WORD 'WF208' codep=0x224c wordp=0xf208 params=2 returns=0
// ================================================

void WF208() // WF208
{
  WEA63(); // WEA63
  if (Pop() != 0)
  {
    CI(); // CI
    IsICON_dash_IADDR(); // ?ICON-IADDR
    Pop(); // DROP
    POINT_gt_ICON(); // POINT>ICON
    _2DUP(); // 2DUP
    Push(pp_XABS); // XABS
    _plus__ex__2(); // +!_2
    Push(pp_YABS); // YABS
    _plus__ex__2(); // +!_2
    _2DUP(); // 2DUP
    Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
    _plus__ex__2(); // +!_2
    Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
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
// 0xf23e: WORD 'WF240' codep=0x224c wordp=0xf240 params=0 returns=0
// ================================================

void WF240() // WF240
{
  WF080(); // WF080
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WF00E(); // WF00E
    if (Pop() != 0)
    {
      WEFD6(); // WEFD6
      WF11E(); // WF11E
      WF17E(); // WF17E
      if (Pop() != 0)
      {
        WDD64(); // WDD64
        Push(pp_WDE4F); // WDE4F
        _2_at_(); // 2@
        WDE59(); // WDE59
        Push(7);
        _st_(); // <
        WE109(); // WE109
        Push(Pop() & Pop()); // AND
        if (Pop() != 0)
        {
          WF1DC(); // WF1DC
        } else
        {
          WE0F1(); // WE0F1
          if (Pop() != 0)
          {
            WF1B6(); // WF1B6
          } else
          {
            WE109(); // WE109
            if (Pop() != 0)
            {
              WF1DC(); // WF1DC
            } else
            {
              GetColor(WHITE);
              StoreCOLOR(); // !COLOR
              SET_STR_AS_PARAM("WEAPON NOT AVAILABLE");
              DrawTTY(); // .TTY
            }
          }
        }
      } else
      {
        WF18C(); // WF18C
      }
    } else
    {
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      SET_STR_AS_PARAM("WEAPONS NOT ARMED ");
      DrawTTY(); // .TTY
    }
    return;
  }
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("OUT OF FUEL! ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf2e8: WORD 'WF2EA' codep=0x224c wordp=0xf2ea
// ================================================

void WF2EA() // WF2EA
{
  Push(pp__i_CEX); // 'CEX
  GetEXECUTE(); // @EXECUTE
  COMBAT(); // COMBAT
}


// ================================================
// 0xf2f2: WORD 'WF2F4' codep=0x224c wordp=0xf2f4 params=0 returns=0
// ================================================

void WF2F4() // WF2F4
{
  Push(0xc104); // '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  Store_3(); // !_3
  Push(0xc136); // 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_3(); // !_3
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  Store_3(); // !_3
  Push(0x3a48); // 'NOP'
  Push(pp__i_DEATH); // 'DEATH
  Store_3(); // !_3
  Push(0xf2ea); // 'WF2EA'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Store_3(); // !_3
  Push(0x3a48); // 'NOP'
  Push(pp__i_ENDING); // 'ENDING
  Store_3(); // !_3
  Push(0xc081); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_3(); // !_3
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _2_ex_(); // 2!
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_3(); // !_3
  Push(0xc05f); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_3(); // !_3
  Push(pp_IsHEAL); // ?HEAL
  ON_3(); // ON_3
  Push(pp_IsCOMBAT); // ?COMBAT
  ON_2(); // ON_2
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_2(); // ON_2
}


// ================================================
// 0xf350: WORD 'WF352' codep=0x224c wordp=0xf352
// ================================================

void WF352() // WF352
{
  Push(0xc104); // '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  Store_3(); // !_3
  Push(0xc136); // 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_3(); // !_3
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  Store_3(); // !_3
  Push(0xc04e); // 'OBIT'
  Push(pp__i_DEATH); // 'DEATH
  Store_3(); // !_3
  Push(0xafa3); // 'CEX+WAX'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Store_3(); // !_3
  Push(0xc081); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_3(); // !_3
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_3(); // !_3
  Push(0xc05f); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_3(); // !_3
  Push(0xbf56); // '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  Store_3(); // !_3
  WF08A(); // WF08A
  Push(pp_WDE55); // WDE55
  OFF(); // OFF
  Push(pp_FORCEPTASK); // FORCEPTASK
  OFF_2(); // OFF_2
  Push(pp_IsCOMBAT); // ?COMBAT
  OFF_2(); // OFF_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3ac: WORD 'WF3AE' codep=0x224c wordp=0xf3ae params=0 returns=1
// ================================================

void WF3AE() // WF3AE
{
  Push(Read16(pp_LKEY)==0x000d?1:0); // LKEY @ 0x000d =
}


// ================================================
// 0xf3ba: WORD 'WF3BC' codep=0x224c wordp=0xf3bc
// ================================================

void WF3BC() // WF3BC
{
  _ro_XYSCAN_rc_(); // (XYSCAN) case
  _2DUP(); // 2DUP
  KEY_gt_ORIEN(); // KEY>ORIEN case
  Push(Read16(0x63ef+WDE2A.offset)&0xFF); // WDE2A<IFIELD> C@
  OVER(); // OVER
  Push(0x63ef+WDE2A.offset); // WDE2A<IFIELD>
  C_ex_(); // C!
  WEA3D(); // WEA3D
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    WE0DB(); // WE0DB
    if (Pop() != 0)
    {
      WF208(); // WF208
      SET_dash_SCALE(); // SET-SCALE
      Push(0x07d0);
      Push(Read16(cc_MPS)); // MPS
      _slash_(); // /
      WE0CB(); // WE0CB
    } else
    {
      Pop(); Pop(); // 2DROP
    }
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  IsTRIG(); // ?TRIG
  WF3AE(); // WF3AE
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WF240(); // WF240
    WE1DD(); // WE1DD
    MODULE(); // MODULE
  }
  WE5F4(); // WE5F4
  WF3AE(); // WF3AE
  if (Pop() == 0) return;
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf412: WORD 'WF414' codep=0x224c wordp=0xf414
// ================================================

void WF414() // WF414
{
  _gt_MAINVIEW(); // >MAINVIEW
  WE5DC(); // WE5DC
  _gt_DISPLAY(); // >DISPLAY
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("HIT SPACE BAR TO FIRE WEAPON");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("HIT RETURN TO EXIT COMBAT ");
  DrawTTY(); // .TTY
  Push(0xe500); // 'WE500'
  Push(pp__i__dot_BACKG); // '.BACKG
  Store_3(); // !_3
  WEEE8(); // WEEE8
  WE96B(); // WE96B
  Push(Read16(pp_WDE41)); // WDE41 @
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("CLOAKING DEVICE NOW ACTIVE");
    DrawTTY(); // .TTY
  }
  Push(0xc03f); // '(ROL'
  MODULE(); // MODULE
  WF2F4(); // WF2F4
  WE055(); // WE055
  Push(pp_FORCEPTASK); // FORCEPTASK
  ON_3(); // ON_3
  WF03E(); // WF03E
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WEC7B(); // WEC7B
  _gt_1FONT(); // >1FONT
  Push(pp__n_AUX); // #AUX
  OFF_2(); // OFF_2
  WE1DD(); // WE1DD
  MODULE(); // MODULE
  WE5F4(); // WE5F4
}


// ================================================
// 0xf4b5: WORD 'WAR' codep=0x224c wordp=0xf4bd params=0 returns=0
// ================================================
// entry

void WAR() // WAR
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)==4?1:0); // CONTEXT-ID# @ 4 =
  if (Pop() != 0)
  {
    Push(0xf352); // 'WF352'
    Push(0xf3bc); // 'WF3BC'
    Push(0xf414); // 'WF414'
    DOTASKS(WF414, WF414, WF414);
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xf4df: WORD 'CLEAR-CO' codep=0x224c wordp=0xf4ec params=0 returns=0
// ================================================
// entry

void CLEAR_dash_CO() // CLEAR-CO
{
  WE462(); // WE462
  Push(pp_WE6AC); // WE6AC
  OFF(); // OFF
  Push(pp_WE6B0); // WE6B0
  OFF(); // OFF
  Push(pp_WDE39); // WDE39
  OFF(); // OFF
  Push(pp_WDE3D); // WDE3D
  OFF(); // OFF
  WE055(); // WE055
  Push(0xc03f); // '(ROL'
  MODULE(); // MODULE
  Push(pp_WDE41); // WDE41
  OFF(); // OFF
  Push(0);
  WE0CB(); // WE0CB
  Push(6);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(pp_IsROD); // ?ROD
  _st__ex__gt_(); // <!>
}

// 0xf51e: db 0x43 0x4f 0x4d 0x42 0x41 0x54 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x5c 0x20 0x43 0x4f 0x4d 0x42 0x41 0x54 0x20 0x20 0x43 0x4d 0x50 0x2d 0x28 0x20 0x72 0x66 0x67 0x32 0x35 0x73 0x65 0x70 0x38 0x37 0x29 0x2d 0x32 0x33 0x00 'COMBAT-VO_______________________----\ COMBAT  CMP-( rfg25sep87)-23 '

