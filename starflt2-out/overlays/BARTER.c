// ====== OVERLAY 'BARTER' ======
// store offset = 0xdfc0
// overlay size   = 0x15a0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WDFD6  codep:0x1d29 wordp:0xdfd6 size:0x0002 C-string:'WDFD6'
//           WDFDA  codep:0x1d29 wordp:0xdfda size:0x0002 C-string:'WDFDA'
//           WDFDE  codep:0x1d29 wordp:0xdfde size:0x0002 C-string:'WDFDE'
//           WDFE2  codep:0x1d29 wordp:0xdfe2 size:0x0002 C-string:'WDFE2'
//           WDFE6  codep:0x224c wordp:0xdfe6 size:0x0018 C-string:'WDFE6'
//           WE000  codep:0x224c wordp:0xe000 size:0x0008 C-string:'WE000'
//           WE00A  codep:0x224c wordp:0xe00a size:0x0008 C-string:'WE00A'
//           WE014  codep:0x224c wordp:0xe014 size:0x0008 C-string:'WE014'
//           WE01E  codep:0x224c wordp:0xe01e size:0x0008 C-string:'WE01E'
//           WE028  codep:0x224c wordp:0xe028 size:0x0008 C-string:'WE028'
//           WE032  codep:0x224c wordp:0xe032 size:0x0008 C-string:'WE032'
//           WE03C  codep:0x224c wordp:0xe03c size:0x0008 C-string:'WE03C'
//           WE046  codep:0x224c wordp:0xe046 size:0x0008 C-string:'WE046'
//           WE050  codep:0x224c wordp:0xe050 size:0x0008 C-string:'WE050'
//           WE05A  codep:0x224c wordp:0xe05a size:0x0008 C-string:'WE05A'
//           WE064  codep:0x224c wordp:0xe064 size:0x0008 C-string:'WE064'
//           WE06E  codep:0x224c wordp:0xe06e size:0x0008 C-string:'WE06E'
//           WE078  codep:0x224c wordp:0xe078 size:0x0008 C-string:'WE078'
//           WE082  codep:0x224c wordp:0xe082 size:0x0008 C-string:'WE082'
//           WE08C  codep:0x224c wordp:0xe08c size:0x0008 C-string:'WE08C'
//           WE096  codep:0x224c wordp:0xe096 size:0x0008 C-string:'WE096'
//           WE0A0  codep:0x224c wordp:0xe0a0 size:0x0008 C-string:'WE0A0'
//           WE0AA  codep:0x224c wordp:0xe0aa size:0x0008 C-string:'WE0AA'
//           WE0B4  codep:0x224c wordp:0xe0b4 size:0x0008 C-string:'WE0B4'
//           WE0BE  codep:0x224c wordp:0xe0be size:0x0008 C-string:'WE0BE'
//           WE0C8  codep:0x224c wordp:0xe0c8 size:0x0008 C-string:'WE0C8'
//           WE0D2  codep:0x224c wordp:0xe0d2 size:0x0008 C-string:'WE0D2'
//           WE0DC  codep:0x224c wordp:0xe0dc size:0x0008 C-string:'WE0DC'
//           WE0E6  codep:0x224c wordp:0xe0e6 size:0x0008 C-string:'WE0E6'
//           WE0F0  codep:0x224c wordp:0xe0f0 size:0x0008 C-string:'WE0F0'
//           WE0FA  codep:0x2214 wordp:0xe0fa size:0x0002 C-string:'WE0FA'
//           WE0FE  codep:0x2214 wordp:0xe0fe size:0x0002 C-string:'WE0FE'
//           WE102  codep:0x2214 wordp:0xe102 size:0x0002 C-string:'WE102'
//           WE106  codep:0x2214 wordp:0xe106 size:0x0002 C-string:'WE106'
//           WE10A  codep:0x7394 wordp:0xe10a size:0x0006 C-string:'WE10A'
//           WE112  codep:0x7394 wordp:0xe112 size:0x0006 C-string:'WE112'
//           WE11A  codep:0x7394 wordp:0xe11a size:0x0006 C-string:'WE11A'
//           WE122  codep:0x7394 wordp:0xe122 size:0x0006 C-string:'WE122'
//           WE12A  codep:0x7394 wordp:0xe12a size:0x0006 C-string:'WE12A'
//           WE132  codep:0x7394 wordp:0xe132 size:0x0006 C-string:'WE132'
//           WE13A  codep:0x7394 wordp:0xe13a size:0x0006 C-string:'WE13A'
//           WE142  codep:0x7394 wordp:0xe142 size:0x0006 C-string:'WE142'
//           WE14A  codep:0x7394 wordp:0xe14a size:0x0006 C-string:'WE14A'
//           WE152  codep:0x7420 wordp:0xe152 size:0x0003 C-string:'WE152'
//           WE157  codep:0x7420 wordp:0xe157 size:0x0003 C-string:'WE157'
//           WE15C  codep:0x224c wordp:0xe15c size:0x0006 C-string:'WE15C'
//           WE164  codep:0x224c wordp:0xe164 size:0x0006 C-string:'WE164'
//           WE16C  codep:0x224c wordp:0xe16c size:0x0010 C-string:'WE16C'
//           WE17E  codep:0x224c wordp:0xe17e size:0x0004 C-string:'WE17E'
//           WE184  codep:0x224c wordp:0xe184 size:0x0004 C-string:'WE184'
//           WE18A  codep:0x224c wordp:0xe18a size:0x0006 C-string:'WE18A'
//           WE192  codep:0x224c wordp:0xe192 size:0x0004 C-string:'WE192'
//           WE198  codep:0x224c wordp:0xe198 size:0x0010 C-string:'WE198'
//           WE1AA  codep:0x224c wordp:0xe1aa size:0x000c C-string:'WE1AA'
//           WE1B8  codep:0x224c wordp:0xe1b8 size:0x002e C-string:'WE1B8'
//           WE1E8  codep:0x224c wordp:0xe1e8 size:0x0016 C-string:'WE1E8'
//           WE200  codep:0x224c wordp:0xe200 size:0x0052 C-string:'WE200'
//           WE254  codep:0x224c wordp:0xe254 size:0x000a C-string:'WE254'
//           WE260  codep:0x1d29 wordp:0xe260 size:0x0002 C-string:'WE260'
//           WE264  codep:0x224c wordp:0xe264 size:0x0016 C-string:'WE264'
//           WE27C  codep:0x224c wordp:0xe27c size:0x000e C-string:'WE27C'
//           WE28C  codep:0x224c wordp:0xe28c size:0x0056 C-string:'WE28C'
//           WE2E4  codep:0x224c wordp:0xe2e4 size:0x0023 C-string:'WE2E4'
//           WE309  codep:0x224c wordp:0xe309 size:0x0025 C-string:'WE309'
//           WE330  codep:0x224c wordp:0xe330 size:0x0026 C-string:'WE330'
//          T>NAME  codep:0x4b3b wordp:0xe361 size:0x0014 C-string:'T_gt_NAME'
//           WE377  codep:0x224c wordp:0xe377 size:0x002e C-string:'WE377'
//           WE3A7  codep:0x224c wordp:0xe3a7 size:0x001b C-string:'WE3A7'
//           WE3C4  codep:0x224c wordp:0xe3c4 size:0x0028 C-string:'WE3C4'
//           WE3EE  codep:0x224c wordp:0xe3ee size:0x0008 C-string:'WE3EE'
//           WE3F8  codep:0x224c wordp:0xe3f8 size:0x0008 C-string:'WE3F8'
//           WE402  codep:0x224c wordp:0xe402 size:0x000c C-string:'WE402'
//           WE410  codep:0x224c wordp:0xe410 size:0x0010 C-string:'WE410'
//           WE422  codep:0x224c wordp:0xe422 size:0x0004 C-string:'WE422'
//             SPL  codep:0x4b3b wordp:0xe42e size:0x0024 C-string:'SPL'
//           WE454  codep:0x224c wordp:0xe454 size:0x001e C-string:'WE454'
//           WE474  codep:0x224c wordp:0xe474 size:0x001c C-string:'WE474'
//           WE492  codep:0x224c wordp:0xe492 size:0x0012 C-string:'WE492'
//           WE4A6  codep:0x1d29 wordp:0xe4a6 size:0x0002 C-string:'WE4A6'
//           WE4AA  codep:0x1d29 wordp:0xe4aa size:0x0002 C-string:'WE4AA'
//           WE4AE  codep:0x1d29 wordp:0xe4ae size:0x0002 C-string:'WE4AE'
//           WE4B2  codep:0x1d29 wordp:0xe4b2 size:0x0002 C-string:'WE4B2'
//           WE4B6  codep:0x1d29 wordp:0xe4b6 size:0x0002 C-string:'WE4B6'
//           WE4BA  codep:0x1d29 wordp:0xe4ba size:0x0002 C-string:'WE4BA'
//           WE4BE  codep:0x1d29 wordp:0xe4be size:0x0002 C-string:'WE4BE'
//           WE4C2  codep:0x2214 wordp:0xe4c2 size:0x0002 C-string:'WE4C2'
//           WE4C6  codep:0x7394 wordp:0xe4c6 size:0x0006 C-string:'WE4C6'
//           WE4CE  codep:0x7394 wordp:0xe4ce size:0x0006 C-string:'WE4CE'
//           WE4D6  codep:0x7394 wordp:0xe4d6 size:0x0006 C-string:'WE4D6'
//           WE4DE  codep:0x7394 wordp:0xe4de size:0x0006 C-string:'WE4DE'
//           WE4E6  codep:0x7394 wordp:0xe4e6 size:0x0006 C-string:'WE4E6'
//           WE4EE  codep:0x7394 wordp:0xe4ee size:0x0006 C-string:'WE4EE'
//           WE4F6  codep:0x7394 wordp:0xe4f6 size:0x0006 C-string:'WE4F6'
//           WE4FE  codep:0x7394 wordp:0xe4fe size:0x0006 C-string:'WE4FE'
//           WE506  codep:0x7394 wordp:0xe506 size:0x0006 C-string:'WE506'
//           WE50E  codep:0x7394 wordp:0xe50e size:0x0006 C-string:'WE50E'
//           WE516  codep:0x7394 wordp:0xe516 size:0x0006 C-string:'WE516'
//           WE51E  codep:0x7394 wordp:0xe51e size:0x0006 C-string:'WE51E'
//           WE526  codep:0x7394 wordp:0xe526 size:0x0006 C-string:'WE526'
//           WE52E  codep:0x7394 wordp:0xe52e size:0x0006 C-string:'WE52E'
//           WE536  codep:0x7394 wordp:0xe536 size:0x0006 C-string:'WE536'
//           WE53E  codep:0x7394 wordp:0xe53e size:0x0006 C-string:'WE53E'
//       TRADE.EDL  codep:0x7394 wordp:0xe552 size:0x0006 C-string:'TRADE_dot_EDL'
//           WE55A  codep:0x224c wordp:0xe55a size:0x000c C-string:'WE55A'
//           WE568  codep:0x224c wordp:0xe568 size:0x0026 C-string:'WE568'
//           WE590  codep:0x224c wordp:0xe590 size:0x0008 C-string:'WE590'
//           WE59A  codep:0x224c wordp:0xe59a size:0x0008 C-string:'WE59A'
//           WE5A4  codep:0x224c wordp:0xe5a4 size:0x0008 C-string:'WE5A4'
//           WE5AE  codep:0x224c wordp:0xe5ae size:0x0008 C-string:'WE5AE'
//           WE5B8  codep:0x224c wordp:0xe5b8 size:0x000c C-string:'WE5B8'
//           WE5C6  codep:0x224c wordp:0xe5c6 size:0x000c C-string:'WE5C6'
//           WE5D4  codep:0x224c wordp:0xe5d4 size:0x0014 C-string:'WE5D4'
//           WE5EA  codep:0x224c wordp:0xe5ea size:0x000c C-string:'WE5EA'
//           WE5F8  codep:0x224c wordp:0xe5f8 size:0x0004 C-string:'WE5F8'
//           WE5FE  codep:0x224c wordp:0xe5fe size:0x0010 C-string:'WE5FE'
//           WE610  codep:0x224c wordp:0xe610 size:0x000e C-string:'WE610'
//           WE620  codep:0x224c wordp:0xe620 size:0x001e C-string:'WE620'
//           WE640  codep:0x224c wordp:0xe640 size:0x0034 C-string:'WE640'
//           WE676  codep:0x1d29 wordp:0xe676 size:0x0002 C-string:'WE676'
//           WE67A  codep:0x224c wordp:0xe67a size:0x0008 C-string:'WE67A'
//           WE684  codep:0x224c wordp:0xe684 size:0x0018 C-string:'WE684'
//           WE69E  codep:0x224c wordp:0xe69e size:0x0020 C-string:'WE69E'
//           WE6C0  codep:0x224c wordp:0xe6c0 size:0x000e C-string:'WE6C0'
//           WE6D0  codep:0x224c wordp:0xe6d0 size:0x0014 C-string:'WE6D0'
//           WE6E6  codep:0x224c wordp:0xe6e6 size:0x000a C-string:'WE6E6'
//           WE6F2  codep:0x224c wordp:0xe6f2 size:0x0015 C-string:'WE6F2'
//     ENTER-TRADE  codep:0xaccc wordp:0xe717 size:0x0020 C-string:'ENTER_dash_TRADE'
//        DO-ENTER  codep:0x224c wordp:0xe744 size:0x0014 C-string:'DO_dash_ENTER'
//        (GETUSE)  codep:0x4b3b wordp:0xe765 size:0x0014 C-string:'_ro_GETUSE_rc_'
//           WE77B  codep:0x224c wordp:0xe77b size:0x0006 C-string:'WE77B'
//           WE783  codep:0x224c wordp:0xe783 size:0x0006 C-string:'WE783'
//           WE78B  codep:0x224c wordp:0xe78b size:0x0020 C-string:'WE78B'
//           WE7AD  codep:0x224c wordp:0xe7ad size:0x002c C-string:'WE7AD'
//           WE7DB  codep:0x224c wordp:0xe7db size:0x0024 C-string:'WE7DB'
//           WE801  codep:0x224c wordp:0xe801 size:0x0006 C-string:'WE801'
//           WE809  codep:0x224c wordp:0xe809 size:0x0008 C-string:'WE809'
//           WE813  codep:0x224c wordp:0xe813 size:0x0006 C-string:'WE813'
//           WE81B  codep:0x224c wordp:0xe81b size:0x0008 C-string:'WE81B'
//           WE825  codep:0x224c wordp:0xe825 size:0x0008 C-string:'WE825'
//           WE82F  codep:0x224c wordp:0xe82f size:0x0018 C-string:'WE82F'
//           WE849  codep:0x224c wordp:0xe849 size:0x0012 C-string:'WE849'
//           WE85D  codep:0x224c wordp:0xe85d size:0x001f C-string:'WE85D'
//           WE87E  codep:0x224c wordp:0xe87e size:0x001c C-string:'WE87E'
//           WE89C  codep:0x224c wordp:0xe89c size:0x0026 C-string:'WE89C'
//           WE8C4  codep:0x224c wordp:0xe8c4 size:0x0020 C-string:'WE8C4'
//           WE8E6  codep:0x224c wordp:0xe8e6 size:0x0038 C-string:'WE8E6'
//           WE920  codep:0x224c wordp:0xe920 size:0x0032 C-string:'WE920'
//           WE954  codep:0x224c wordp:0xe954 size:0x000a C-string:'WE954'
//           WE960  codep:0x224c wordp:0xe960 size:0x001a C-string:'WE960'
//           WE97C  codep:0x224c wordp:0xe97c size:0x002c C-string:'WE97C'
//           WE9AA  codep:0x224c wordp:0xe9aa size:0x0016 C-string:'WE9AA'
//           WE9C2  codep:0x224c wordp:0xe9c2 size:0x000a C-string:'WE9C2'
//           WE9CE  codep:0x224c wordp:0xe9ce size:0x0034 C-string:'WE9CE'
//           WEA04  codep:0x224c wordp:0xea04 size:0x002c C-string:'WEA04'
//           WEA32  codep:0x224c wordp:0xea32 size:0x0008 C-string:'WEA32'
//           WEA3C  codep:0x224c wordp:0xea3c size:0x002c C-string:'WEA3C'
//           WEA6A  codep:0x224c wordp:0xea6a size:0x0031 C-string:'WEA6A'
//           WEA9D  codep:0x224c wordp:0xea9d size:0x0026 C-string:'WEA9D'
//           WEAC5  codep:0x224c wordp:0xeac5 size:0x0028 C-string:'WEAC5'
//           WEAEF  codep:0x224c wordp:0xeaef size:0x0032 C-string:'WEAEF'
//           WEB23  codep:0x224c wordp:0xeb23 size:0x0020 C-string:'WEB23'
//           WEB45  codep:0x224c wordp:0xeb45 size:0x0026 C-string:'WEB45'
//           WEB6D  codep:0x224c wordp:0xeb6d size:0x0020 C-string:'WEB6D'
//           WEB8F  codep:0x1d29 wordp:0xeb8f size:0x0002 C-string:'WEB8F'
//           WEB93  codep:0x224c wordp:0xeb93 size:0x004a C-string:'WEB93'
//           WEBDF  codep:0x224c wordp:0xebdf size:0x002d C-string:'WEBDF'
//           WEC0E  codep:0x224c wordp:0xec0e size:0x001e C-string:'WEC0E'
//           WEC2E  codep:0x224c wordp:0xec2e size:0x005c C-string:'WEC2E'
//           WEC8C  codep:0x224c wordp:0xec8c size:0x0012 C-string:'WEC8C'
//           WECA0  codep:0x224c wordp:0xeca0 size:0x0036 C-string:'WECA0'
//           WECD8  codep:0x224c wordp:0xecd8 size:0x0024 C-string:'WECD8'
//           WECFE  codep:0x224c wordp:0xecfe size:0x0022 C-string:'WECFE'
//           WED22  codep:0x224c wordp:0xed22 size:0x001a C-string:'WED22'
//           WED3E  codep:0x224c wordp:0xed3e size:0x005a C-string:'WED3E'
//           WED9A  codep:0x224c wordp:0xed9a size:0x0018 C-string:'WED9A'
//           WEDB4  codep:0x224c wordp:0xedb4 size:0x0006 C-string:'WEDB4'
//           WEDBC  codep:0x224c wordp:0xedbc size:0x0006 C-string:'WEDBC'
//           WEDC4  codep:0x224c wordp:0xedc4 size:0x0020 C-string:'WEDC4'
//           WEDE6  codep:0x224c wordp:0xede6 size:0x004a C-string:'WEDE6'
//           WEE32  codep:0x224c wordp:0xee32 size:0x0016 C-string:'WEE32'
//           WEE4A  codep:0x224c wordp:0xee4a size:0x001a C-string:'WEE4A'
//           WEE66  codep:0x224c wordp:0xee66 size:0x0006 C-string:'WEE66'
//           WEE6E  codep:0x224c wordp:0xee6e size:0x0010 C-string:'WEE6E'
//           WEE80  codep:0x224c wordp:0xee80 size:0x0008 C-string:'WEE80'
//           WEE8A  codep:0x224c wordp:0xee8a size:0x000a C-string:'WEE8A'
//           WEE96  codep:0x224c wordp:0xee96 size:0x0016 C-string:'WEE96'
//           WEEAE  codep:0x224c wordp:0xeeae size:0x000e C-string:'WEEAE'
//           WEEBE  codep:0x224c wordp:0xeebe size:0x0016 C-string:'WEEBE'
//           WEED6  codep:0x224c wordp:0xeed6 size:0x0010 C-string:'WEED6'
//           WEEE8  codep:0x224c wordp:0xeee8 size:0x0020 C-string:'WEEE8'
//           WEF0A  codep:0x224c wordp:0xef0a size:0x0012 C-string:'WEF0A'
//           WEF1E  codep:0x224c wordp:0xef1e size:0x0010 C-string:'WEF1E'
//           WEF30  codep:0x224c wordp:0xef30 size:0x0014 C-string:'WEF30'
//           WEF46  codep:0x224c wordp:0xef46 size:0x001a C-string:'WEF46'
//     OPEN-EXPERT  codep:0xaccc wordp:0xef70 size:0x004a C-string:'OPEN_dash_EXPERT'
//       DO-OPEN_1  codep:0x224c wordp:0xefc6 size:0x0010 C-string:'DO_dash_OPEN_1'
//           WEFD8  codep:0x224c wordp:0xefd8 size:0x001c C-string:'WEFD8'
//           WEFF6  codep:0x224c wordp:0xeff6 size:0x0006 C-string:'WEFF6'
//           WEFFE  codep:0x224c wordp:0xeffe size:0x0008 C-string:'WEFFE'
//           WF008  codep:0x224c wordp:0xf008 size:0x000a C-string:'WF008'
//           WF014  codep:0x224c wordp:0xf014 size:0x0032 C-string:'WF014'
//           WF048  codep:0x224c wordp:0xf048 size:0x001c C-string:'WF048'
//           WF066  codep:0x224c wordp:0xf066 size:0x002e C-string:'WF066'
//           WF096  codep:0x224c wordp:0xf096 size:0x0006 C-string:'WF096'
//           WF09E  codep:0x224c wordp:0xf09e size:0x0006 C-string:'WF09E'
//           WF0A6  codep:0x224c wordp:0xf0a6 size:0x0012 C-string:'WF0A6'
//           WF0BA  codep:0x224c wordp:0xf0ba size:0x0010 C-string:'WF0BA'
//           WF0CC  codep:0x224c wordp:0xf0cc size:0x0006 C-string:'WF0CC'
//           WF0D4  codep:0x224c wordp:0xf0d4 size:0x0016 C-string:'WF0D4'
//           WF0EC  codep:0x224c wordp:0xf0ec size:0x0012 C-string:'WF0EC'
//           WF100  codep:0x224c wordp:0xf100 size:0x0014 C-string:'WF100'
//           WF116  codep:0x224c wordp:0xf116 size:0x000e C-string:'WF116'
//           WF126  codep:0x224c wordp:0xf126 size:0x002e C-string:'WF126'
//           WF156  codep:0x224c wordp:0xf156 size:0x0002 C-string:'WF156'
//           WF15A  codep:0x224c wordp:0xf15a size:0x002a C-string:'WF15A'
//           WF186  codep:0x224c wordp:0xf186 size:0x0028 C-string:'WF186'
//           WF1B0  codep:0x224c wordp:0xf1b0 size:0x000c C-string:'WF1B0'
//           WF1BE  codep:0x224c wordp:0xf1be size:0x0030 C-string:'WF1BE'
//           WF1F0  codep:0x224c wordp:0xf1f0 size:0x0032 C-string:'WF1F0'
//           WF224  codep:0x224c wordp:0xf224 size:0x0038 C-string:'WF224'
//           WF25E  codep:0x224c wordp:0xf25e size:0x0016 C-string:'WF25E'
//           WF276  codep:0x224c wordp:0xf276 size:0x0050 C-string:'WF276'
//           WF2C8  codep:0x224c wordp:0xf2c8 size:0x0006 C-string:'WF2C8'
//           WF2D0  codep:0x224c wordp:0xf2d0 size:0x0006 C-string:'WF2D0'
//           WF2D8  codep:0x224c wordp:0xf2d8 size:0x0010 C-string:'WF2D8'
//           WF2EA  codep:0x224c wordp:0xf2ea size:0x003e C-string:'WF2EA'
//           WF32A  codep:0x224c wordp:0xf32a size:0x0052 C-string:'WF32A'
//           WF37E  codep:0x224c wordp:0xf37e size:0x0006 C-string:'WF37E'
//           WF386  codep:0x224c wordp:0xf386 size:0x0012 C-string:'WF386'
//           WF39A  codep:0x224c wordp:0xf39a size:0x0024 C-string:'WF39A'
//     (DO-BARTER)  codep:0xaccc wordp:0xf3ce size:0x0082 C-string:'_ro_DO_dash_BARTER_rc_'
//       DO-BARTER  codep:0x224c wordp:0xf45e size:0x0026 C-string:'DO_dash_BARTER'
//           WF486  codep:0x224c wordp:0xf486 size:0x0018 C-string:'WF486'
//         N>REPLY  codep:0x4b3b wordp:0xf4aa size:0x0010 C-string:'N_gt_REPLY'
//           WF4BC  codep:0x224c wordp:0xf4bc size:0x0008 C-string:'WF4BC'
//         !PFLAGS  codep:0x224c wordp:0xf4d0 size:0x0030 C-string:'StorePFLAGS'
//             L>P  codep:0x224c wordp:0xf508 size:0x000e C-string:'L_gt_P'
//           WF518  codep:0x224c wordp:0xf518 size:0x0034 C-string:'WF518'
//       DO-OPEN_2  codep:0x224c wordp:0xf558 size:0x0000 C-string:'DO_dash_OPEN_2'

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
const unsigned short int pp_WDFD6 = 0xdfd6; // WDFD6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFDA = 0xdfda; // WDFDA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFDE = 0xdfde; // WDFDE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFE2 = 0xdfe2; // WDFE2 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE260 = 0xe260; // WE260 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4A6 = 0xe4a6; // WE4A6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4AA = 0xe4aa; // WE4AA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4AE = 0xe4ae; // WE4AE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4B2 = 0xe4b2; // WE4B2 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4B6 = 0xe4b6; // WE4B6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4BA = 0xe4ba; // WE4BA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4BE = 0xe4be; // WE4BE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE676 = 0xe676; // WE676 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEB8F = 0xeb8f; // WEB8F size: 2
// {0x01, 0x00}


const unsigned short int cc_WE0FA = 0xe0fa; // WE0FA
const unsigned short int cc_WE0FE = 0xe0fe; // WE0FE
const unsigned short int cc_WE102 = 0xe102; // WE102
const unsigned short int cc_WE106 = 0xe106; // WE106
const unsigned short int cc_WE4C2 = 0xe4c2; // WE4C2


// 0xdfd2: db 0x5a 0x01 'Z '

// ================================================
// 0xdfd4: WORD 'WDFD6' codep=0x1d29 wordp=0xdfd6
// ================================================
// 0xdfd6: db 0x3a 0x20 ': '

// ================================================
// 0xdfd8: WORD 'WDFDA' codep=0x1d29 wordp=0xdfda
// ================================================
// 0xdfda: db 0x3a 0x20 ': '

// ================================================
// 0xdfdc: WORD 'WDFDE' codep=0x1d29 wordp=0xdfde
// ================================================
// 0xdfde: db 0x3a 0x20 ': '

// ================================================
// 0xdfe0: WORD 'WDFE2' codep=0x1d29 wordp=0xdfe2
// ================================================
// 0xdfe2: db 0x3a 0x20 ': '

// ================================================
// 0xdfe4: WORD 'WDFE6' codep=0x224c wordp=0xdfe6
// ================================================

void WDFE6() // WDFE6
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
// 0xdffe: WORD 'WE000' codep=0x224c wordp=0xe000
// ================================================

void WE000() // WE000
{
  Push(0x0040);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe008: WORD 'WE00A' codep=0x224c wordp=0xe00a
// ================================================

void WE00A() // WE00A
{
  Push(0x0041);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe012: WORD 'WE014' codep=0x224c wordp=0xe014
// ================================================

void WE014() // WE014
{
  Push(0x0042);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe01c: WORD 'WE01E' codep=0x224c wordp=0xe01e
// ================================================

void WE01E() // WE01E
{
  Push(0x0043);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe026: WORD 'WE028' codep=0x224c wordp=0xe028
// ================================================

void WE028() // WE028
{
  Push(0x0044);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe030: WORD 'WE032' codep=0x224c wordp=0xe032
// ================================================

void WE032() // WE032
{
  Push(0x0045);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe03a: WORD 'WE03C' codep=0x224c wordp=0xe03c
// ================================================

void WE03C() // WE03C
{
  Push(0x0046);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe044: WORD 'WE046' codep=0x224c wordp=0xe046
// ================================================

void WE046() // WE046
{
  Push(0x0047);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe04e: WORD 'WE050' codep=0x224c wordp=0xe050
// ================================================

void WE050() // WE050
{
  Push(0x0048);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe058: WORD 'WE05A' codep=0x224c wordp=0xe05a
// ================================================

void WE05A() // WE05A
{
  Push(0x0049);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe062: WORD 'WE064' codep=0x224c wordp=0xe064
// ================================================

void WE064() // WE064
{
  Push(0x004a);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe06c: WORD 'WE06E' codep=0x224c wordp=0xe06e
// ================================================

void WE06E() // WE06E
{
  Push(0x004b);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe076: WORD 'WE078' codep=0x224c wordp=0xe078
// ================================================

void WE078() // WE078
{
  Push(0x004c);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe080: WORD 'WE082' codep=0x224c wordp=0xe082
// ================================================

void WE082() // WE082
{
  Push(0x004d);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe08a: WORD 'WE08C' codep=0x224c wordp=0xe08c
// ================================================

void WE08C() // WE08C
{
  Push(0x004e);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe094: WORD 'WE096' codep=0x224c wordp=0xe096
// ================================================

void WE096() // WE096
{
  Push(0x004f);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe09e: WORD 'WE0A0' codep=0x224c wordp=0xe0a0
// ================================================

void WE0A0() // WE0A0
{
  Push(0x0050);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0a8: WORD 'WE0AA' codep=0x224c wordp=0xe0aa
// ================================================

void WE0AA() // WE0AA
{
  Push(0x0051);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0b2: WORD 'WE0B4' codep=0x224c wordp=0xe0b4
// ================================================

void WE0B4() // WE0B4
{
  Push(0x0052);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0bc: WORD 'WE0BE' codep=0x224c wordp=0xe0be
// ================================================

void WE0BE() // WE0BE
{
  Push(0x0053);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0c6: WORD 'WE0C8' codep=0x224c wordp=0xe0c8
// ================================================

void WE0C8() // WE0C8
{
  Push(0x0054);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0d0: WORD 'WE0D2' codep=0x224c wordp=0xe0d2
// ================================================

void WE0D2() // WE0D2
{
  Push(0x0055);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0da: WORD 'WE0DC' codep=0x224c wordp=0xe0dc
// ================================================

void WE0DC() // WE0DC
{
  Push(0x0056);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0e4: WORD 'WE0E6' codep=0x224c wordp=0xe0e6
// ================================================

void WE0E6() // WE0E6
{
  Push(0x0057);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0ee: WORD 'WE0F0' codep=0x224c wordp=0xe0f0
// ================================================

void WE0F0() // WE0F0
{
  Push(0x0058);
  WDFE6(); // WDFE6
}


// ================================================
// 0xe0f8: WORD 'WE0FA' codep=0x2214 wordp=0xe0fa
// ================================================
// orphan
// 0xe0fa: dw 0x0009

// ================================================
// 0xe0fc: WORD 'WE0FE' codep=0x2214 wordp=0xe0fe
// ================================================
// orphan
// 0xe0fe: dw 0x001c

// ================================================
// 0xe100: WORD 'WE102' codep=0x2214 wordp=0xe102
// ================================================
// orphan
// 0xe102: dw 0x001a

// ================================================
// 0xe104: WORD 'WE106' codep=0x2214 wordp=0xe106
// ================================================
// orphan
// 0xe106: dw 0x0044

// ================================================
// 0xe108: WORD 'WE10A' codep=0x7394 wordp=0xe10a
// ================================================
LoadDataType WE10A = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe110: WORD 'WE112' codep=0x7394 wordp=0xe112
// ================================================
LoadDataType WE112 = {ARTIFACTIDX, 0x1f, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe118: WORD 'WE11A' codep=0x7394 wordp=0xe11a
// ================================================
LoadDataType WE11A = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};

// ================================================
// 0xe120: WORD 'WE122' codep=0x7394 wordp=0xe122
// ================================================
// orphan
LoadDataType WE122 = {CREATUREIDX, 0x14, 0x02, 0x22, 0x6f07};

// ================================================
// 0xe128: WORD 'WE12A' codep=0x7394 wordp=0xe12a
// ================================================
LoadDataType WE12A = {CREATUREIDX, 0x16, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe130: WORD 'WE132' codep=0x7394 wordp=0xe132
// ================================================
LoadDataType WE132 = {ELEMENTIDX, 0x16, 0x01, 0x17, 0x6ba9};

// ================================================
// 0xe138: WORD 'WE13A' codep=0x7394 wordp=0xe13a
// ================================================
// orphan
LoadDataType WE13A = {STISIDX, 0x18, 0x02, 0x1b, 0x6a54};

// ================================================
// 0xe140: WORD 'WE142' codep=0x7394 wordp=0xe142
// ================================================
LoadDataType WE142 = {STISIDX, 0x1a, 0x01, 0x1b, 0x6a54};

// ================================================
// 0xe148: WORD 'WE14A' codep=0x7394 wordp=0xe14a
// ================================================
LoadDataType WE14A = {STISIDX, 0x00, 0x20, 0x1b, 0x6a54};

// ================================================
// 0xe150: WORD 'WE152' codep=0x7420 wordp=0xe152
// ================================================
IFieldType WE152 = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe155: WORD 'WE157' codep=0x7420 wordp=0xe157
// ================================================
// orphan
IFieldType WE157 = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xe15a: WORD 'WE15C' codep=0x224c wordp=0xe15c params=0 returns=0
// ================================================

void WE15C() // WE15C
{
  Push(pp__ro_THING_rc_); // (THING)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe162: WORD 'WE164' codep=0x224c wordp=0xe164 params=0 returns=0
// ================================================

void WE164() // WE164
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe16a: WORD 'WE16C' codep=0x224c wordp=0xe16c
// ================================================

void WE16C() // WE16C
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    GetColor(BLUE);
    return;
  }
  GetColor(YELLOW);
}


// ================================================
// 0xe17c: WORD 'WE17E' codep=0x224c wordp=0xe17e params=0 returns=1
// ================================================

void WE17E() // WE17E
{
  GetColor(GREY1);
}


// ================================================
// 0xe182: WORD 'WE184' codep=0x224c wordp=0xe184 params=0 returns=1
// ================================================

void WE184() // WE184
{
  GetColor(WHITE);
}


// ================================================
// 0xe188: WORD 'WE18A' codep=0x224c wordp=0xe18a
// ================================================

void WE18A() // WE18A
{
  WE16C(); // WE16C
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe190: WORD 'WE192' codep=0x224c wordp=0xe192 params=0 returns=1
// ================================================

void WE192() // WE192
{
  GetColor(LT_dash_BLUE);
}


// ================================================
// 0xe196: WORD 'WE198' codep=0x224c wordp=0xe198
// ================================================

void WE198() // WE198
{
  Push(4);
  Push(Read16(pp_WBOTTOM) + 6); // WBOTTOM @ 6 +
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe1a8: WORD 'WE1AA' codep=0x224c wordp=0xe1aa
// ================================================

void WE1AA() // WE1AA
{
  WE198(); // WE198
  WE16C(); // WE16C
  StoreCOLOR(); // !COLOR
  WUP(); // WUP
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe1b6: WORD 'WE1B8' codep=0x224c wordp=0xe1b8
// ================================================

void WE1B8() // WE1B8
{
  unsigned short int i, imax, a;
  _2DUP(); // 2DUP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
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
  Push(Pop() - a); //  I -
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe1e6: WORD 'WE1E8' codep=0x224c wordp=0xe1e8
// ================================================

void WE1E8() // WE1E8
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
// 0xe1fe: WORD 'WE200' codep=0x224c wordp=0xe200
// ================================================

void WE200() // WE200
{
  unsigned short int i, imax;
  WE1B8(); // WE1B8
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
    Push(((Read16(i)&0xFF)==Read16(cc_BL)?1:0) | (i + 1==imax?1:0)); // I C@ BL = I 1+ I' = OR
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
// 0xe252: WORD 'WE254' codep=0x224c wordp=0xe254 params=2 returns=2
// ================================================

void WE254() // WE254
{
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
}


// ================================================
// 0xe25e: WORD 'WE260' codep=0x1d29 wordp=0xe260
// ================================================
// 0xe260: db 0x3a 0x20 ': '

// ================================================
// 0xe262: WORD 'WE264' codep=0x224c wordp=0xe264 params=2 returns=2
// ================================================

void WE264() // WE264
{
  OVER(); // OVER
  Push(!((Read16(Pop() + 1)&0xFF)==Read16(cc_BL)?1:0)); //  1+ C@ BL = NOT
  if (Pop() == 0) return;
  Push(pp_WE260); // WE260
  ON_2(); // ON_2
}


// ================================================
// 0xe27a: WORD 'WE27C' codep=0x224c wordp=0xe27c params=1 returns=1
// ================================================

void WE27C() // WE27C
{
  Push(Pop() + Read16(pp_WDFD6)); //  WDFD6 @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe28a: WORD 'WE28C' codep=0x224c wordp=0xe28c params=2 returns=0
// ================================================

void WE28C() // WE28C
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WE27C(); // WE27C
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WUP(); // WUP
      WE198(); // WE198
      Push(pp_WDFD6); // WDFD6
      _099(); // 099
    }
    OVER(); // OVER
    Push(!(((Read16(Pop())&0xFF)==0x002e?1:0) | (Read16(pp_WDFD6)==0?1:0))); //  C@ 0x002e = WDFD6 @ 0= OR NOT
    if (Pop() != 0)
    {
      SPACE(); // SPACE
    }
    Push(Read16(regsp)); // DUP
    Push(pp_WDFD6); // WDFD6
    _plus__ex__2(); // +!_2
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Read16(pp_WE260)); // WE260 @
    if (Pop() != 0)
    {
      Push(0xfffc);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(pp_WE260); // WE260
      _099(); // 099
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe2e2: WORD 'WE2E4' codep=0x224c wordp=0xe2e4 params=2 returns=4
// ================================================

void WE2E4() // WE2E4
{
  WE264(); // WE264
  Push(Read16(pp_SELLING) + Read16(pp_WDFE2)); // SELLING @ WDFE2 @ XOR
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("HIGH");
    return;
  }
  SET_STR_AS_PARAM("LOW");
}


// ================================================
// 0xe307: WORD 'WE309' codep=0x224c wordp=0xe309 params=2 returns=4
// ================================================

void WE309() // WE309
{
  WE264(); // WE264
  Push(Read16(pp_SELLING) + Read16(pp_WDFE2)); // SELLING @ WDFE2 @ XOR
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("PAY");
    return;
  }
  SET_STR_AS_PARAM("ACCEPT");
}


// ================================================
// 0xe32e: WORD 'WE330' codep=0x224c wordp=0xe330 params=2 returns=4
// ================================================

void WE330() // WE330
{
  WE264(); // WE264
  Push(Read16(pp_SELLING) + Read16(pp_WDFE2)); // SELLING @ WDFE2 @ XOR
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("OFFER");
    return;
  }
  SET_STR_AS_PARAM("PRICE");
}


// ================================================
// 0xe356: WORD 'T>NAME' codep=0x4b3b wordp=0xe361
// ================================================

void T_gt_NAME() // T>NAME
{
  switch(Pop()) // T>NAME
  {
  case 28:
    LoadData(ART_dash_NAM); // from 'ARTIFACT'
    break;
  case 68:
    LoadData(WE11A); // from 'CREATURE'
    break;
  case 9:
    LoadData(WE14A); // from 'STIS'
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
// 0xe375: WORD 'WE377' codep=0x224c wordp=0xe377 params=1 returns=1
// ================================================

void WE377() // WE377
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


// ================================================
// 0xe3a5: WORD 'WE3A7' codep=0x224c wordp=0xe3a7 params=0 returns=0
// ================================================
// orphan

void WE3A7() // WE3A7
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0044?1:0); //  0x0044 =
  if (Pop() == 0) return;
  PRINT(" LIFEFORMS", 10); // (.")
}


// ================================================
// 0xe3c2: WORD 'WE3C4' codep=0x224c wordp=0xe3c4
// ================================================

void WE3C4() // WE3C4
{
  WE15C(); // WE15C
  GetINST_dash_C(); // @INST-C
  Push(Read16(regsp)); // DUP
  WE377(); // WE377
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
// 0xe3ec: WORD 'WE3EE' codep=0x224c wordp=0xe3ee
// ================================================

void WE3EE() // WE3EE
{
  Push(Read16(pp_WDFDE)); // WDFDE @
  WE1E8(); // WE1E8
}


// ================================================
// 0xe3f6: WORD 'WE3F8' codep=0x224c wordp=0xe3f8
// ================================================

void WE3F8() // WE3F8
{
  Push(Read16(pp_PLAST)); // PLAST @
  WE1E8(); // WE1E8
}


// ================================================
// 0xe400: WORD 'WE402' codep=0x224c wordp=0xe402
// ================================================

void WE402() // WE402
{
  WE184(); // WE184
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WDFDA)); // WDFDA @
  WE1E8(); // WE1E8
}


// ================================================
// 0xe40e: WORD 'WE410' codep=0x224c wordp=0xe410
// ================================================

void WE410() // WE410
{
  WE15C(); // WE15C
  Push(Read16(0x65e1+ASKING.offset)); // ASKING<IFIELD> @
  WE1E8(); // WE1E8
  ICLOSE(); // ICLOSE
  WE184(); // WE184
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe420: WORD 'WE422' codep=0x224c wordp=0xe422 params=0 returns=1
// ================================================
// orphan

void WE422() // WE422
{
  Push(0);
}


// ================================================
// 0xe426: WORD 'SPL' codep=0x4b3b wordp=0xe42e
// ================================================

void SPL() // SPL
{
  switch(Pop()) // SPL
  {
  case 42:
    WE402(); // WE402
    break;
  case 38:
    WE3EE(); // WE3EE
    break;
  case 37:
    WE2E4(); // WE2E4
    break;
  case 47:
    WE3C4(); // WE3C4
    break;
  case 43:
    WE410(); // WE410
    break;
  case 35:
    WE3F8(); // WE3F8
    break;
  case 40:
    WE309(); // WE309
    break;
  case 41:
    WE330(); // WE330
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe452: WORD 'WE454' codep=0x224c wordp=0xe454
// ================================================

void WE454() // WE454
{
  unsigned short int a;
  Push(pp_WE260); // WE260
  _099(); // 099
  OVER(); // OVER
  Push(Read16(Pop())&0xFF); //  C@
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  SPL(); // SPL case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WE28C(); // WE28C
    WE254(); // WE254
  }
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe472: WORD 'WE474' codep=0x224c wordp=0xe474
// ================================================

void WE474() // WE474
{
  WE198(); // WE198
  WUP(); // WUP
  do
  {
    WE200(); // WE200
    WE454(); // WE454
    WE28C(); // WE28C
    Push(1);
    Push(pp_WDFD6); // WDFD6
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe490: WORD 'WE492' codep=0x224c wordp=0xe492
// ================================================

void WE492() // WE492
{
  Push(pp_WDFD6); // WDFD6
  _099(); // 099
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  WE474(); // WE474
}


// ================================================
// 0xe4a4: WORD 'WE4A6' codep=0x1d29 wordp=0xe4a6
// ================================================
// 0xe4a6: db 0x3a 0x20 ': '

// ================================================
// 0xe4a8: WORD 'WE4AA' codep=0x1d29 wordp=0xe4aa
// ================================================
// 0xe4aa: db 0x3a 0x20 ': '

// ================================================
// 0xe4ac: WORD 'WE4AE' codep=0x1d29 wordp=0xe4ae
// ================================================
// 0xe4ae: db 0x3a 0x20 ': '

// ================================================
// 0xe4b0: WORD 'WE4B2' codep=0x1d29 wordp=0xe4b2
// ================================================
// 0xe4b2: db 0x3a 0x20 ': '

// ================================================
// 0xe4b4: WORD 'WE4B6' codep=0x1d29 wordp=0xe4b6
// ================================================
// 0xe4b6: db 0x3a 0x20 ': '

// ================================================
// 0xe4b8: WORD 'WE4BA' codep=0x1d29 wordp=0xe4ba
// ================================================
// 0xe4ba: db 0x3a 0x20 ': '

// ================================================
// 0xe4bc: WORD 'WE4BE' codep=0x1d29 wordp=0xe4be
// ================================================
// 0xe4be: db 0x3a 0x20 ': '

// ================================================
// 0xe4c0: WORD 'WE4C2' codep=0x2214 wordp=0xe4c2
// ================================================
// 0xe4c2: dw 0x0015

// ================================================
// 0xe4c4: WORD 'WE4C6' codep=0x7394 wordp=0xe4c6
// ================================================
// orphan
LoadDataType WE4C6 = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe4cc: WORD 'WE4CE' codep=0x7394 wordp=0xe4ce
// ================================================
// orphan
LoadDataType WE4CE = {TRADERSIDX, 0x14, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe4d4: WORD 'WE4D6' codep=0x7394 wordp=0xe4d6
// ================================================
// orphan
LoadDataType WE4D6 = {TRADERSIDX, 0x15, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe4dc: WORD 'WE4DE' codep=0x7394 wordp=0xe4de
// ================================================
// orphan
LoadDataType WE4DE = {TRADERSIDX, 0x16, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe4e4: WORD 'WE4E6' codep=0x7394 wordp=0xe4e6
// ================================================
LoadDataType WE4E6 = {TRADERSIDX, 0x1a, 0x03, 0x32, 0x6ad1};

// ================================================
// 0xe4ec: WORD 'WE4EE' codep=0x7394 wordp=0xe4ee
// ================================================
LoadDataType WE4EE = {TRADERSIDX, 0x1d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe4f4: WORD 'WE4F6' codep=0x7394 wordp=0xe4f6
// ================================================
LoadDataType WE4F6 = {TRADERSIDX, 0x1e, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe4fc: WORD 'WE4FE' codep=0x7394 wordp=0xe4fe
// ================================================
// orphan
LoadDataType WE4FE = {TRADERSIDX, 0x1f, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe504: WORD 'WE506' codep=0x7394 wordp=0xe506
// ================================================
// orphan
LoadDataType WE506 = {TRADERSIDX, 0x20, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe50c: WORD 'WE50E' codep=0x7394 wordp=0xe50e
// ================================================
LoadDataType WE50E = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe514: WORD 'WE516' codep=0x7394 wordp=0xe516
// ================================================
LoadDataType WE516 = {TRADERSIDX, 0x22, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe51c: WORD 'WE51E' codep=0x7394 wordp=0xe51e
// ================================================
// orphan
LoadDataType WE51E = {TRADERSIDX, 0x23, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe524: WORD 'WE526' codep=0x7394 wordp=0xe526
// ================================================
// orphan
LoadDataType WE526 = {TRADERSIDX, 0x24, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe52c: WORD 'WE52E' codep=0x7394 wordp=0xe52e
// ================================================
// orphan
LoadDataType WE52E = {TRADERSIDX, 0x25, 0x02, 0x32, 0x6ad1};

// ================================================
// 0xe534: WORD 'WE536' codep=0x7394 wordp=0xe536
// ================================================
// orphan
LoadDataType WE536 = {TRADERSIDX, 0x27, 0x02, 0x32, 0x6ad1};

// ================================================
// 0xe53c: WORD 'WE53E' codep=0x7394 wordp=0xe53e
// ================================================
LoadDataType WE53E = {TRADERSIDX, 0x29, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe544: WORD 'TRADE.EDL' codep=0x7394 wordp=0xe552
// ================================================
LoadDataType TRADE_dot_EDL = {TRADERSIDX, 0x2a, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe558: WORD 'WE55A' codep=0x224c wordp=0xe55a
// ================================================

void WE55A() // WE55A
{
  WE15C(); // WE15C
  Push(0xa9ce); // 'ASKING'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe566: WORD 'WE568' codep=0x224c wordp=0xe568
// ================================================

void WE568() // WE568
{
  WE55A(); // WE55A
  WE15C(); // WE15C
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
// 0xe58e: WORD 'WE590' codep=0x224c wordp=0xe590 params=0 returns=1
// ================================================

void WE590() // WE590
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe598: WORD 'WE59A' codep=0x224c wordp=0xe59a params=3 returns=2
// ================================================

void WE59A() // WE59A
{
  Push(0x0064);
  M_star__slash_(); // M*/
}


// ================================================
// 0xe5a2: WORD 'WE5A4' codep=0x224c wordp=0xe5a4 params=0 returns=0
// ================================================

void WE5A4() // WE5A4
{
  Push(0);
  Push(pp_WDFE2); // WDFE2
  Store_2(); // !_2
}


// ================================================
// 0xe5ac: WORD 'WE5AE' codep=0x224c wordp=0xe5ae params=0 returns=0
// ================================================

void WE5AE() // WE5AE
{
  Push(1);
  Push(pp_WDFE2); // WDFE2
  Store_2(); // !_2
}


// ================================================
// 0xe5b6: WORD 'WE5B8' codep=0x224c wordp=0xe5b8
// ================================================

void WE5B8() // WE5B8
{
  WE164(); // WE164
  Push(0xe552); // 'TRADE.EDL'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5c4: WORD 'WE5C6' codep=0x224c wordp=0xe5c6
// ================================================

void WE5C6() // WE5C6
{
  WE164(); // WE164
  Push(0xe552); // 'TRADE.EDL'
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5d2: WORD 'WE5D4' codep=0x224c wordp=0xe5d4
// ================================================

void WE5D4() // WE5D4
{
  WE15C(); // WE15C
  Push(0xa9ce); // 'ASKING'
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
  WE568(); // WE568
  Push(0xc024); // 'SET-C'
  MODULE(); // MODULE
}


// ================================================
// 0xe5e8: WORD 'WE5EA' codep=0x224c wordp=0xe5ea
// ================================================

void WE5EA() // WE5EA
{
  WE15C(); // WE15C
  Push(0xa91b); // 'INST-VA'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5f6: WORD 'WE5F8' codep=0x224c wordp=0xe5f8
// ================================================

void WE5F8() // WE5F8
{
  WE492(); // WE492
}


// ================================================
// 0xe5fc: WORD 'WE5FE' codep=0x224c wordp=0xe5fe params=0 returns=0
// ================================================

void WE5FE() // WE5FE
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
// 0xe60e: WORD 'WE610' codep=0x224c wordp=0xe610
// ================================================

void WE610() // WE610
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WE5F8(); // WE5F8
  WE5FE(); // WE5FE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe61e: WORD 'WE620' codep=0x224c wordp=0xe620
// ================================================

void WE620() // WE620
{
  WE5B8(); // WE5B8
  Push(8);
  _gt_(); // >
  if (Pop() == 0) return;
  WE0AA(); // WE0AA
  WE610(); // WE610
  Push(0x0bb8);
  MS(); // MS
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
}


// ================================================
// 0xe63e: WORD 'WE640' codep=0x224c wordp=0xe640
// ================================================

void WE640() // WE640
{
  WE164(); // WE164
  Push(4);
  WE5B8(); // WE5B8
  MAX(); // MAX
  WE5C6(); // WE5C6
  LoadData(WE53E); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(4);
    WE5C6(); // WE5C6
  } else
  {
    Push(Pop()==4?1:0); //  4 =
    if (Pop() != 0)
    {
      Push(0x000a);
      WE5C6(); // WE5C6
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe674: WORD 'WE676' codep=0x1d29 wordp=0xe676
// ================================================
// 0xe676: db 0x3a 0x20 ': '

// ================================================
// 0xe678: WORD 'WE67A' codep=0x224c wordp=0xe67a params=0 returns=0
// ================================================

void WE67A() // WE67A
{
  WE590(); // WE590
  Push(pp_WE676); // WE676
  Store_2(); // !_2
}


// ================================================
// 0xe682: WORD 'WE684' codep=0x224c wordp=0xe684
// ================================================

void WE684() // WE684
{
  WE5B8(); // WE5B8
  Push(Pop()==0x000a?1:0); //  0x000a =
  WE164(); // WE164
  Push(0xe4de); // 'WE4DE'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
  Push(Pop()==0?1:0); //  0=
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe69c: WORD 'WE69E' codep=0x224c wordp=0xe69e
// ================================================

void WE69E() // WE69E
{
  WE5B8(); // WE5B8
  Push(Pop()==9?1:0); //  9 =
  if (Pop() != 0)
  {
    Push(Read16(pp_WE676)); // WE676 @
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(7);
      WE5C6(); // WE5C6
    }
    return;
  }
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xe6be: WORD 'WE6C0' codep=0x224c wordp=0xe6c0 params=1 returns=0
// ================================================

void WE6C0() // WE6C0
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_TERMINA); // TERMINA
  Store_2(); // !_2
  Push(pp_BARTERI); // BARTERI
  Store_2(); // !_2
}


// ================================================
// 0xe6ce: WORD 'WE6D0' codep=0x224c wordp=0xe6d0
// ================================================

void WE6D0() // WE6D0
{
  Push(Read16(cc_TRUE)); // TRUE
  WE6C0(); // WE6C0
  WE164(); // WE164
  LoadData(WE4E6); // from 'TRADERS'
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  WE5F8(); // WE5F8
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe6e4: WORD 'WE6E6' codep=0x224c wordp=0xe6e6
// ================================================

void WE6E6() // WE6E6
{
  Push(Read16(cc_FALSE)); // FALSE
  WE6C0(); // WE6C0
  WE0C8(); // WE0C8
  WE610(); // WE610
}


// ================================================
// 0xe6f0: WORD 'WE6F2' codep=0x224c wordp=0xe6f2 params=1 returns=0
// ================================================
// orphan

void WE6F2() // WE6F2
{
  Push(Pop()==0?1:0); //  0=
  ABORT("EXPERT FAILED!", 14);// (ABORT")
}


// ================================================
// 0xe707: WORD 'ENTER-TRADE' codep=0xaccc wordp=0xe717
// ================================================

void ENTER_dash_TRADE() // ENTER-TRADE rule
{
  int b;

  b = 1;
  WE684(); // WE684
  b = b && !Pop();
  WE69E(); // WE69E
  b = b && Pop();
  if (b)
  {
    WE6D0(); // WE6D0
  }

  b = 1;
  WE684(); // WE684
  b = b && !Pop();
  WE69E(); // WE69E
  b = b && !Pop();
  if (b)
  {
    WE6E6(); // WE6E6
  }

  b = 1;
  WE684(); // WE684
  b = b && Pop();
  if (b)
  {
    WE6E6(); // WE6E6
  }
}

// 0xe724: db 0x7a 0x5d 'z]'
// 0xe728: db 0x00 ' '

// ================================================
// 0xe737: WORD 'DO-ENTER' codep=0x224c wordp=0xe744
// ================================================
// entry

void DO_dash_ENTER() // DO-ENTER
{
  WE67A(); // WE67A
  WE640(); // WE640
  Push(0xe717); // 'ENTER-TRADE'
  DISTRAC(); // DISTRAC
  WE18A(); // WE18A
  do
  {
    ENTER_dash_TRADE(); // ENTER-TRADE rule
  } while(Pop() == 0);
}


// ================================================
// 0xe758: WORD '(GETUSE)' codep=0x4b3b wordp=0xe765
// ================================================

void _ro_GETUSE_rc_() // (GETUSE)
{
  switch(Pop()) // (GETUSE)
  {
  case 68:
    LoadData(WE12A); // from 'CREATURE'
    break;
  case 28:
    LoadData(WE112); // from 'ARTIFACT'
    break;
  case 26:
    LoadData(WE132); // from 'ELEMENT'
    break;
  case 9:
    LoadData(WE142); // from 'STIS'
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xe779: WORD 'WE77B' codep=0x224c wordp=0xe77b
// ================================================

void WE77B() // WE77B
{
  GetINST_dash_C(); // @INST-C
  _ro_GETUSE_rc_(); // (GETUSE) case
}


// ================================================
// 0xe781: WORD 'WE783' codep=0x224c wordp=0xe783
// ================================================

void WE783() // WE783
{
  WE77B(); // WE77B
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xe789: WORD 'WE78B' codep=0x224c wordp=0xe78b
// ================================================

void WE78B() // WE78B
{
  WE15C(); // WE15C
  WE783(); // WE783
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
// 0xe7ab: WORD 'WE7AD' codep=0x224c wordp=0xe7ad
// ================================================

void WE7AD() // WE7AD
{
  WE15C(); // WE15C
  WE783(); // WE783
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
  WE77B(); // WE77B
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7d9: WORD 'WE7DB' codep=0x224c wordp=0xe7db
// ================================================

void WE7DB() // WE7DB
{
  WE78B(); // WE78B
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
  WE7AD(); // WE7AD
}


// ================================================
// 0xe7ff: WORD 'WE801' codep=0x224c wordp=0xe801
// ================================================

void WE801() // WE801
{
  Push(3);
  WE7AD(); // WE7AD
}


// ================================================
// 0xe807: WORD 'WE809' codep=0x224c wordp=0xe809
// ================================================

void WE809() // WE809
{
  WE78B(); // WE78B
  Push(Pop()==1?1:0); //  1 =
}


// ================================================
// 0xe811: WORD 'WE813' codep=0x224c wordp=0xe813
// ================================================

void WE813() // WE813
{
  WE78B(); // WE78B
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xe819: WORD 'WE81B' codep=0x224c wordp=0xe81b
// ================================================

void WE81B() // WE81B
{
  WE78B(); // WE78B
  Push(Pop()==2?1:0); //  2 =
}


// ================================================
// 0xe823: WORD 'WE825' codep=0x224c wordp=0xe825
// ================================================

void WE825() // WE825
{
  WE78B(); // WE78B
  Push(Pop()==3?1:0); //  3 =
}


// ================================================
// 0xe82d: WORD 'WE82F' codep=0x224c wordp=0xe82f
// ================================================

void WE82F() // WE82F
{
  Push(0x003a);
  Push(0x0094);
  POS_dot_(); // POS.
  Push(0x0018);
  Push(0);
  POLY_dash_ER(); // POLY-ER
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe847: WORD 'WE849' codep=0x224c wordp=0xe849
// ================================================

void WE849() // WE849
{
  WE82F(); // WE82F
  Push(0xb71f); // 'OV.0$$'
  MODULE(); // MODULE
  Push(0x07d0);
  MS(); // MS
  WE82F(); // WE82F
}


// ================================================
// 0xe85b: WORD 'WE85D' codep=0x224c wordp=0xe85d
// ================================================

void WE85D() // WE85D
{
  WE82F(); // WE82F
  PRINT("NO ROOM IN CARGO", 16); // (.")
  Push(0x07d0);
  MS(); // MS
  WE82F(); // WE82F
}


// ================================================
// 0xe87c: WORD 'WE87E' codep=0x224c wordp=0xe87e params=4 returns=1
// ================================================

void WE87E() // WE87E
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
  _2SWAP(); // 2SWAP
  D_gt_(); // D>
}


// ================================================
// 0xe89a: WORD 'WE89C' codep=0x224c wordp=0xe89c params=1 returns=1
// ================================================

void WE89C() // WE89C
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
  Push(Read16(0x65e1+INST_dash_QT.offset) - Read16(0x65e1+WE152.offset)); // INST-QT<IFIELD> @ WE152<IFIELD> @ -
  _gt_(); // >
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8c2: WORD 'WE8C4' codep=0x224c wordp=0xe8c4 params=0 returns=1
// ================================================

void WE8C4() // WE8C4
{
  WE15C(); // WE15C
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    LoadData(WE10A); // from 'ARTIFACT'
    Push((Read16(Pop())&0xFF) - 1==0?1:0); //  C@ 1- 0=
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8e4: WORD 'WE8E6' codep=0x224c wordp=0xe8e6 params=0 returns=1
// ================================================

void WE8E6() // WE8E6
{
  WE8C4(); // WE8C4
  if (Pop() != 0)
  {
    WE55A(); // WE55A
    Push(0);
    WE87E(); // WE87E
    if (Pop() != 0)
    {
      WE15C(); // WE15C
      LoadData(ART_dash_VOL); // from 'ARTIFACT'
      Push(Read16(Pop())); //  @
      ICLOSE(); // ICLOSE
      WE89C(); // WE89C
      if (Pop() != 0)
      {
        Push(1);
      } else
      {
        Push(0);
        WE85D(); // WE85D
      }
    } else
    {
      Push(0);
      WE849(); // WE849
    }
    return;
  }
  Push(1);
}


// ================================================
// 0xe91e: WORD 'WE920' codep=0x224c wordp=0xe920 params=1 returns=0
// ================================================

void WE920() // WE920
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
  Push(Read16(0x65e1+WE152.offset)); // WE152<IFIELD> @
  SWAP(); // SWAP
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    _dash_(); // -
  } else
  {
    Push(Pop() + Pop()); // +
  }
  Push(0x65e1+WE152.offset); // WE152<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe952: WORD 'WE954' codep=0x224c wordp=0xe954 params=0 returns=0
// ================================================

void WE954() // WE954
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe95e: WORD 'WE960' codep=0x224c wordp=0xe960
// ================================================

void WE960() // WE960
{
  WE15C(); // WE15C
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
// 0xe97a: WORD 'WE97C' codep=0x224c wordp=0xe97c params=2 returns=1
// ================================================

void WE97C() // WE97C
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
// 0xe9a8: WORD 'WE9AA' codep=0x224c wordp=0xe9aa params=0 returns=1
// ================================================

void WE9AA() // WE9AA
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
  WE97C(); // WE97C
}


// ================================================
// 0xe9c0: WORD 'WE9C2' codep=0x224c wordp=0xe9c2 params=2 returns=2
// ================================================

void WE9C2() // WE9C2
{
  Push(1);
  Push(0x000a);
  M_star__slash_(); // M*/
}


// ================================================
// 0xe9cc: WORD 'WE9CE' codep=0x224c wordp=0xe9ce
// ================================================

void WE9CE() // WE9CE
{
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
  WE55A(); // WE55A
  Push(0);
  WE8C4(); // WE8C4
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    U_star_(); // U*
    WE9C2(); // WE9C2
  }
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    D_plus_(); // D+
  } else
  {
    D_dash_(); // D-
  }
  Push(0xc297); // 'OVD!BAL'
  MODULE(); // MODULE
}


// ================================================
// 0xea02: WORD 'WEA04' codep=0x224c wordp=0xea04
// ================================================

void WEA04() // WEA04
{
  WE55A(); // WE55A
  WE15C(); // WE15C
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
// 0xea30: WORD 'WEA32' codep=0x224c wordp=0xea32
// ================================================

void WEA32() // WEA32
{
  WE55A(); // WE55A
  U_star_(); // U*
  WE9C2(); // WE9C2
}


// ================================================
// 0xea3a: WORD 'WEA3C' codep=0x224c wordp=0xea3c
// ================================================

void WEA3C() // WEA3C
{
  Push(0x003a);
  Push(0x00aa);
  POS_dot_(); // POS.
  Push(0x0018);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WE192(); // WE192
  StoreCOLOR(); // !COLOR
  PRINT("SP = ", 5); // (.")
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  WEA32(); // WEA32
  WE184(); // WE184
  StoreCOLOR(); // !COLOR
  D_dot_(); // D.
}


// ================================================
// 0xea68: WORD 'WEA6A' codep=0x224c wordp=0xea6a
// ================================================

void WEA6A() // WEA6A
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
    GetColor(BLACK);
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
// 0xea9b: WORD 'WEA9D' codep=0x224c wordp=0xea9d params=0 returns=1
// ================================================

void WEA9D() // WEA9D
{
  WE15C(); // WE15C
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    LoadData(WE10A); // from 'ARTIFACT'
    Push((Read16(Pop())&0xFF)==2?1:0); //  C@ 2 =
  } else
  {
    Push(Read16(cc_FALSE)); // FALSE
  }
  Push(Pop() & !Read16(pp_SELLING)); //  SELLING @ NOT AND
}


// ================================================
// 0xeac3: WORD 'WEAC5' codep=0x224c wordp=0xeac5
// ================================================

void WEAC5() // WEAC5
{
  Push(0x003a);
  Push(0x00a3);
  POS_dot_(); // POS.
  Push(0x0018);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WE192(); // WE192
  StoreCOLOR(); // !COLOR
  PRINT("SET AMOUNT ", 11); // (.")
  WEA6A(); // WEA6A
}


// ================================================
// 0xeaed: WORD 'WEAEF' codep=0x224c wordp=0xeaef
// ================================================

void WEAEF() // WEAEF
{
  Push(0x0076);
  Push(0x00a3);
  POS_dot_(); // POS.
  Push(9);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WE184(); // WE184
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
// 0xeb21: WORD 'WEB23' codep=0x224c wordp=0xeb23
// ================================================

void WEB23() // WEB23
{
  WE82F(); // WE82F
  PRINT("NO MORE AVAILABLE", 17); // (.")
  Push(0x07d0);
  MS(); // MS
  WE82F(); // WE82F
}


// ================================================
// 0xeb43: WORD 'WEB45' codep=0x224c wordp=0xeb45 params=0 returns=0
// ================================================

void WEB45() // WEB45
{
  WEA9D(); // WEA9D
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(0xc052); // '@TAMT'
    MODULE(); // MODULE
    _2DUP(); // 2DUP
    _gt_(); // >
    if (Pop() != 0)
    {
      WEB23(); // WEB23
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
// 0xeb6b: WORD 'WEB6D' codep=0x224c wordp=0xeb6d params=0 returns=0
// ================================================

void WEB6D() // WEB6D
{
  WEA9D(); // WEA9D
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(0xc052); // '@TAMT'
    MODULE(); // MODULE
    Push(Pop() - Read16(pp_ELEM_dash_AM)); //  ELEM-AM @ -
    GetINST_dash_S(); // @INST-S
    Push(0xc042); // '!TAMT'
    MODULE(); // MODULE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb8d: WORD 'WEB8F' codep=0x1d29 wordp=0xeb8f
// ================================================
// 0xeb8f: db 0x01 0x00 '  '

// ================================================
// 0xeb91: WORD 'WEB93' codep=0x224c wordp=0xeb93
// ================================================

void WEB93() // WEB93
{
  Push(Read16(pp_ELEM_dash_AM) + Read16(pp_WEB8F)); // ELEM-AM @ WEB8F @ +
  WEB45(); // WEB45
  Push(Read16(regsp)); // DUP
  WE89C(); // WE89C
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WEA32(); // WEA32
    WE87E(); // WE87E
    if (Pop() != 0)
    {
      Push(1);
      MAX(); // MAX
      Push(Read16(pp_SELLING)); // SELLING @
      if (Pop() != 0)
      {
        WE15C(); // WE15C
        Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
        ICLOSE(); // ICLOSE
        MIN(); // MIN
      }
      Push(pp_ELEM_dash_AM); // ELEM-AM
      Store_2(); // !_2
    } else
    {
      Pop(); // DROP
      WE849(); // WE849
    }
    return;
  }
  Pop(); // DROP
  WE85D(); // WE85D
}


// ================================================
// 0xebdd: WORD 'WEBDF' codep=0x224c wordp=0xebdf
// ================================================

void WEBDF() // WEBDF
{
  Push(0x003a);
  Push(0x00a3);
  POS_dot_(); // POS.
  Push(0x0018);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WE192(); // WE192
  StoreCOLOR(); // !COLOR
  PRINT("SELL ALL\?  [N Y]", 16); // (.")
  Y_slash_N(); // Y/N
}


// ================================================
// 0xec0c: WORD 'WEC0E' codep=0x224c wordp=0xec0e params=0 returns=0
// ================================================

void WEC0E() // WEC0E
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
// 0xec2c: WORD 'WEC2E' codep=0x224c wordp=0xec2e params=0 returns=0
// ================================================

void WEC2E() // WEC2E
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    WEBDF(); // WEBDF
  } else
  {
    Push(0);
  }
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WEAC5(); // WEAC5
    Push(1);
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
    WEAEF(); // WEAEF
    Push(1);
    Push(pp_WEB8F); // WEB8F
    Store_2(); // !_2
    while(1)
    {
      XYSCAN(); // XYSCAN
      IsTRIG(); // ?TRIG
      Push(!Pop()); //  NOT
      if (Pop() == 0) break;

      Pop(); // DROP
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        WEC0E(); // WEC0E
        Push(pp_WEB8F); // WEB8F
        Store_2(); // !_2
        WEB93(); // WEB93
        WEAEF(); // WEAEF
        WEA3C(); // WEA3C
      }
    }
    Pop(); Pop(); // 2DROP
    return;
  }
  WE15C(); // WE15C
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
}


// ================================================
// 0xec8a: WORD 'WEC8C' codep=0x224c wordp=0xec8c
// ================================================

void WEC8C() // WEC8C
{
  Push(0x00fa);
  WDFE6(); // WDFE6
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WE492(); // WE492
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec9e: WORD 'WECA0' codep=0x224c wordp=0xeca0
// ================================================

void WECA0() // WECA0
{
  WE15C(); // WE15C
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  WE164(); // WE164
  LoadData(WE50E); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    LoadData(WE516); // from 'TRADERS'
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
// 0xecd6: WORD 'WECD8' codep=0x224c wordp=0xecd8
// ================================================

void WECD8() // WECD8
{
  WECA0(); // WECA0
  if (Pop() != 0)
  {
    Push(3);
    WE5C6(); // WE5C6
    WEC8C(); // WEC8C
  }
  WE825(); // WE825
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WE5B8(); // WE5B8
  Push(Read16(regsp)); // DUP
  Push(Pop() - 1); //  1-
  Push(4);
  MAX(); // MAX
  MIN(); // MIN
  WE5C6(); // WE5C6
}


// ================================================
// 0xecfc: WORD 'WECFE' codep=0x224c wordp=0xecfe
// ================================================

void WECFE() // WECFE
{
  WE15C(); // WE15C
  WEA04(); // WEA04
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    WE9AA(); // WE9AA
    _gt_INACTI(); // >INACTI
  } else
  {
    WE960(); // WE960
    WE954(); // WE954
  }
  ICLOSE(); // ICLOSE
  Push(0xc024); // 'SET-C'
  MODULE(); // MODULE
}


// ================================================
// 0xed20: WORD 'WED22' codep=0x224c wordp=0xed22 params=0 returns=0
// ================================================

void WED22() // WED22
{
  WE8C4(); // WE8C4
  if (Pop() != 0)
  {
    WE15C(); // WE15C
    LoadData(ART_dash_VOL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    ICLOSE(); // ICLOSE
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
    return;
  }
  WEC2E(); // WEC2E
}


// ================================================
// 0xed3c: WORD 'WED3E' codep=0x224c wordp=0xed3e
// ================================================

void WED3E() // WED3E
{
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  Push2Words("NULL");
  WE87E(); // WE87E
  if (Pop() == 0) goto label1;
  Push(0);
  WE89C(); // WE89C
  if (Pop() == 0) goto label2;
  WE8E6(); // WE8E6
  if (Pop() == 0) goto label3;
  WE801(); // WE801
  WECD8(); // WECD8
  WED22(); // WED22
  WE9CE(); // WE9CE
  SET_STR_AS_PARAM("DOING TRANSACTION");
  WE1AA(); // WE1AA
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  WE920(); // WE920
  WEB6D(); // WEB6D
  WECFE(); // WECFE
  Push(0xc2bb); // 'OV!TFLA'
  MODULE(); // MODULE
  goto label3;

  label3:
  goto label4;

  label2:
  WE85D(); // WE85D

  label4:
  return;

  label1:
  WE849(); // WE849
}


// ================================================
// 0xed98: WORD 'WED9A' codep=0x224c wordp=0xed9a
// ================================================

void WED9A() // WED9A
{
  WE164(); // WE164
  Push(0xe552); // 'TRADE.EDL'
  IFLD_at_(); // IFLD@
  Push(Pop() + Pop()); // +
  Push(9);
  MIN(); // MIN
  Push(0xe552); // 'TRADE.EDL'
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedb2: WORD 'WEDB4' codep=0x224c wordp=0xedb4
// ================================================

void WEDB4() // WEDB4
{
  Push(1);
  WED9A(); // WED9A
}


// ================================================
// 0xedba: WORD 'WEDBC' codep=0x224c wordp=0xedbc
// ================================================

void WEDBC() // WEDBC
{
  Push(3);
  WED9A(); // WED9A
}


// ================================================
// 0xedc2: WORD 'WEDC4' codep=0x224c wordp=0xedc4
// ================================================

void WEDC4() // WEDC4
{
  WE164(); // WE164
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
// 0xede4: WORD 'WEDE6' codep=0x224c wordp=0xede6
// ================================================

void WEDE6() // WEDE6
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  WE15C(); // WE15C
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  GetINST_dash_S(); // @INST-S
  WE164(); // WE164
  LoadData(WE4EE); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    LoadData(WE4F6); // from 'TRADERS'
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
// 0xee30: WORD 'WEE32' codep=0x224c wordp=0xee32 params=0 returns=1
// ================================================

void WEE32() // WEE32
{
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    WE55A(); // WE55A
    Push(!(Pop()==0?1:0)); //  0= NOT
    return;
  }
  Push(1);
}


// ================================================
// 0xee48: WORD 'WEE4A' codep=0x224c wordp=0xee4a params=0 returns=0
// ================================================

void WEE4A() // WEE4A
{
  Push(Read16(pp_PATIENC)==0?1:0); // PATIENC @ 0=
  if (Pop() == 0) return;
  WEDB4(); // WEDB4
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  WE7DB(); // WE7DB
  WE0A0(); // WE0A0
  WE610(); // WE610
  WE620(); // WE620
}


// ================================================
// 0xee64: WORD 'WEE66' codep=0x224c wordp=0xee66 params=0 returns=1
// ================================================

void WEE66() // WEE66
{
  Push(Read16(pp_SELLING)); // SELLING @
}


// ================================================
// 0xee6c: WORD 'WEE6E' codep=0x224c wordp=0xee6e
// ================================================

void WEE6E() // WEE6E
{
  WE000(); // WE000
  WE610(); // WE610
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  Push(0x0fa0);
  MS(); // MS
}


// ================================================
// 0xee7e: WORD 'WEE80' codep=0x224c wordp=0xee80
// ================================================

void WEE80() // WEE80
{
  WE55A(); // WE55A
  WE5EA(); // WE5EA
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xee88: WORD 'WEE8A' codep=0x224c wordp=0xee8a params=0 returns=0
// ================================================

void WEE8A() // WEE8A
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(pp_WE4BE); // WE4BE
  Store_2(); // !_2
}


// ================================================
// 0xee94: WORD 'WEE96' codep=0x224c wordp=0xee96 params=1 returns=0
// ================================================

void WEE96() // WEE96
{
  WEE8A(); // WEE8A
  Push(Pop() + Read16(pp_PATIENC)); //  PATIENC @ +
  Push(0);
  MAX(); // MAX
  Push(9);
  MIN(); // MIN
  Push(pp_PATIENC); // PATIENC
  Store_2(); // !_2
}


// ================================================
// 0xeeac: WORD 'WEEAE' codep=0x224c wordp=0xeeae params=0 returns=1
// ================================================

void WEEAE() // WEEAE
{
  Push(Read16(pp_PATIENC)); // PATIENC @
  Push(Read16(pp_WE4BE)); // WE4BE @
  _st_(); // <
  WEE8A(); // WEE8A
}


// ================================================
// 0xeebc: WORD 'WEEBE' codep=0x224c wordp=0xeebe
// ================================================

void WEEBE() // WEEBE
{
  Push(Read16(pp_BARTERI)); // BARTERI @
  if (Pop() != 0)
  {
    WE0B4(); // WE0B4
    WE610(); // WE610
  }
  WE620(); // WE620
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  WE7DB(); // WE7DB
}


// ================================================
// 0xeed4: WORD 'WEED6' codep=0x224c wordp=0xeed6
// ================================================

void WEED6() // WEED6
{
  WEDC4(); // WEDC4
  WEE8A(); // WEE8A
  WE5A4(); // WE5A4
  WE082(); // WE082
  WE610(); // WE610
  Push(pp_BARTERI); // BARTERI
  ON_2(); // ON_2
}


// ================================================
// 0xeee6: WORD 'WEEE8' codep=0x224c wordp=0xeee8
// ================================================

void WEEE8() // WEEE8
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
  WEE8A(); // WEE8A
  WE5A4(); // WE5A4
  WE08C(); // WE08C
  WE610(); // WE610
  Push(pp_BARTERI); // BARTERI
  ON_2(); // ON_2
}


// ================================================
// 0xef08: WORD 'WEF0A' codep=0x224c wordp=0xef0a
// ================================================

void WEF0A() // WEF0A
{
  WE5A4(); // WE5A4
  WE096(); // WE096
  WE610(); // WE610
  Push(-1);
  WEE96(); // WEE96
  WEE4A(); // WEE4A
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
}


// ================================================
// 0xef1c: WORD 'WEF1E' codep=0x224c wordp=0xef1e
// ================================================

void WEF1E() // WEF1E
{
  WE0F0(); // WE0F0
  WE610(); // WE610
  Push(0x0fa0);
  MS(); // MS
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
}


// ================================================
// 0xef2e: WORD 'WEF30' codep=0x224c wordp=0xef30
// ================================================

void WEF30() // WEF30
{
  Push(0x00da);
  WDFE6(); // WDFE6
  WE610(); // WE610
  Push(0x0fa0);
  MS(); // MS
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
}


// ================================================
// 0xef44: WORD 'WEF46' codep=0x224c wordp=0xef46 params=0 returns=1
// ================================================

void WEF46() // WEF46
{
  WEA9D(); // WEA9D
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(0xc052); // '@TAMT'
    MODULE(); // MODULE
    _0_gt_(); // 0>
  } else
  {
    Push(Read16(cc_TRUE)); // TRUE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef60: WORD 'OPEN-EXPERT' codep=0xaccc wordp=0xef70
// ================================================

void OPEN_dash_EXPERT() // OPEN-EXPERT rule
{
  int b;

  b = 1;
  WEF46(); // WEF46
  b = b && !Pop();
  if (b)
  {
    WEF30(); // WEF30
  }

  b = 1;
  WEDE6(); // WEDE6
  b = b && !Pop();
  if (b)
  {
    WEF1E(); // WEF1E
  }

  b = 1;
  WEE66(); // WEE66
  b = b && Pop();
  WEE32(); // WEE32
  b = b && !Pop();
  if (b)
  {
    WEE6E(); // WEE6E
  }

  b = 1;
  WE825(); // WE825
  b = b && Pop();
  WEE32(); // WEE32
  b = b && Pop();
  if (b)
  {
    WED3E(); // WED3E
  }

  b = 1;
  WE813(); // WE813
  b = b && Pop();
  WEE32(); // WEE32
  b = b && Pop();
  if (b)
  {
    WEED6(); // WEED6
  }

  b = 1;
  WE809(); // WE809
  b = b && Pop();
  WEE32(); // WEE32
  b = b && Pop();
  if (b)
  {
    WEEE8(); // WEEE8
  }

  b = 1;
  WE81B(); // WE81B
  b = b && Pop();
  WEE32(); // WEE32
  b = b && Pop();
  if (b)
  {
    WEF0A(); // WEF0A
  }
}


// ================================================
// 0xefba: WORD 'DO-OPEN_1' codep=0x224c wordp=0xefc6
// ================================================

void DO_dash_OPEN_1() // DO-OPEN_1
{
  Push(0xef70); // 'OPEN-EXPERT'
  DISTRAC(); // DISTRAC
  WE18A(); // WE18A
  do
  {
    OPEN_dash_EXPERT(); // OPEN-EXPERT rule
  } while(Pop() == 0);
}


// ================================================
// 0xefd6: WORD 'WEFD8' codep=0x224c wordp=0xefd8 params=2 returns=1
// ================================================

void WEFD8() // WEFD8
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
// 0xeff4: WORD 'WEFF6' codep=0x224c wordp=0xeff6
// ================================================

void WEFF6() // WEFF6
{
  WE5EA(); // WE5EA
  WEFD8(); // WEFD8
}


// ================================================
// 0xeffc: WORD 'WEFFE' codep=0x224c wordp=0xeffe params=1 returns=1
// ================================================

void WEFFE() // WEFFE
{
  Push(Read16(pp_PLAST)); // PLAST @
  WEFD8(); // WEFD8
}


// ================================================
// 0xf006: WORD 'WF008' codep=0x224c wordp=0xf008
// ================================================

void WF008() // WF008
{
  WE55A(); // WE55A
  Push(Pop()==Read16(pp_PLAST)?1:0); //  PLAST @ =
}


// ================================================
// 0xf012: WORD 'WF014' codep=0x224c wordp=0xf014
// ================================================

void WF014() // WF014
{
  WE55A(); // WE55A
  Push(Read16(regsp)); // DUP
  WE5EA(); // WE5EA
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
  WEFF6(); // WEFF6
  WEFFE(); // WEFFE
}


// ================================================
// 0xf046: WORD 'WF048' codep=0x224c wordp=0xf048
// ================================================

void WF048() // WF048
{
  WE55A(); // WE55A
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
// 0xf064: WORD 'WF066' codep=0x224c wordp=0xf066 params=0 returns=1
// ================================================

void WF066() // WF066
{
  Push(Read16(pp__1ST)==0?1:0); // 1ST @ 0=
  if (Pop() != 0)
  {
    Push(Read16(pp_PLAST)); // PLAST @
    Push(0);
    Push(Read16(pp_WDFDE)); // WDFDE @
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


// ================================================
// 0xf094: WORD 'WF096' codep=0x224c wordp=0xf096 params=0 returns=0
// ================================================
// orphan

void WF096() // WF096
{
  Push(pp_IsREPLY); // ?REPLY
  ON_2(); // ON_2
}


// ================================================
// 0xf09c: WORD 'WF09E' codep=0x224c wordp=0xf09e params=0 returns=0
// ================================================

void WF09E() // WF09E
{
  Push(pp_IsREPLY); // ?REPLY
  _099(); // 099
}


// ================================================
// 0xf0a4: WORD 'WF0A6' codep=0x224c wordp=0xf0a6
// ================================================

void WF0A6() // WF0A6
{
  WE00A(); // WE00A
  WE610(); // WE610
  Push(pp_WE4A6); // WE4A6
  ON_2(); // ON_2
  WF09E(); // WF09E
  Push(Read16(pp_PLAST)); // PLAST @
  WE5D4(); // WE5D4
}


// ================================================
// 0xf0b8: WORD 'WF0BA' codep=0x224c wordp=0xf0ba
// ================================================

void WF0BA() // WF0BA
{
  WE5A4(); // WE5A4
  WE014(); // WE014
  WE610(); // WE610
  Push(-3);
  WEE96(); // WEE96
  WEE4A(); // WEE4A
}


// ================================================
// 0xf0ca: WORD 'WF0CC' codep=0x224c wordp=0xf0cc
// ================================================

void WF0CC() // WF0CC
{
  WE01E(); // WE01E
  WE610(); // WE610
}


// ================================================
// 0xf0d2: WORD 'WF0D4' codep=0x224c wordp=0xf0d4
// ================================================

void WF0D4() // WF0D4
{
  WE5A4(); // WE5A4
  WE028(); // WE028
  WE610(); // WE610
  WF066(); // WF066
  if (Pop() != 0)
  {
    WF0CC(); // WF0CC
  }
  Push(-2);
  WEE96(); // WEE96
  WEE4A(); // WEE4A
}


// ================================================
// 0xf0ea: WORD 'WF0EC' codep=0x224c wordp=0xf0ec
// ================================================

void WF0EC() // WF0EC
{
  WE5A4(); // WE5A4
  WE032(); // WE032
  WE610(); // WE610
  WEDBC(); // WEDBC
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  WE7DB(); // WE7DB
  WE620(); // WE620
}


// ================================================
// 0xf0fe: WORD 'WF100' codep=0x224c wordp=0xf100
// ================================================

void WF100() // WF100
{
  WE5A4(); // WE5A4
  WE03C(); // WE03C
  WE610(); // WE610
  WEE80(); // WEE80
  if (Pop() == 0) return;
  Push(-2);
  WEE96(); // WEE96
  WEE4A(); // WEE4A
}


// ================================================
// 0xf114: WORD 'WF116' codep=0x224c wordp=0xf116
// ================================================

void WF116() // WF116
{
  WE5A4(); // WE5A4
  WE046(); // WE046
  WE610(); // WE610
  Push(pp_BARTERI); // BARTERI
  _099(); // 099
  WEEBE(); // WEEBE
}


// ================================================
// 0xf124: WORD 'WF126' codep=0x224c wordp=0xf126
// ================================================

void WF126() // WF126
{
  WE55A(); // WE55A
  WE5EA(); // WE5EA
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
  WE55A(); // WE55A
  Push(Pop() + Pop()); // +
  WEFF6(); // WEFF6
  WEFFE(); // WEFFE
}


// ================================================
// 0xf154: WORD 'WF156' codep=0x224c wordp=0xf156 params=0 returns=0
// ================================================

void WF156() // WF156
{
}


// ================================================
// 0xf158: WORD 'WF15A' codep=0x224c wordp=0xf15a
// ================================================

void WF15A() // WF15A
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() != 0)
  {
    WF116(); // WF116
    return;
  }
  WF126(); // WF126
  Push(Read16(regsp)); // DUP
  Push(pp_WDFDA); // WDFDA
  Store_2(); // !_2
  WE5A4(); // WE5A4
  WE050(); // WE050
  WE610(); // WE610
  WE5D4(); // WE5D4
}


// ================================================
// 0xf184: WORD 'WF186' codep=0x224c wordp=0xf186
// ================================================

void WF186() // WF186
{
  WEE80(); // WEE80
  if (Pop() != 0)
  {
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(pp_WE4BA)); // WE4BA @
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf1ae: WORD 'WF1B0' codep=0x224c wordp=0xf1b0
// ================================================

void WF1B0() // WF1B0
{
  WE5A4(); // WE5A4
  WE06E(); // WE06E
  WE610(); // WE610
  Push(pp_WE4B2); // WE4B2
  ON_2(); // ON_2
}


// ================================================
// 0xf1bc: WORD 'WF1BE' codep=0x224c wordp=0xf1be
// ================================================

void WF1BE() // WF1BE
{
  WF014(); // WF014
  Push(Read16(regsp)); // DUP
  WE5D4(); // WE5D4
  Push(Pop()==Read16(pp_PLAST)?1:0); //  PLAST @ =
  if (Pop() != 0)
  {
    WF0A6(); // WF0A6
    return;
  }
  WE590(); // WE590
  if (Pop() != 0)
  {
    WE5A4(); // WE5A4
    WE064(); // WE064
    WE610(); // WE610
  } else
  {
    WF156(); // WF156
  }
  WE5A4(); // WE5A4
  WE078(); // WE078
  WE610(); // WE610
}


// ================================================
// 0xf1ee: WORD 'WF1F0' codep=0x224c wordp=0xf1f0 params=0 returns=0
// ================================================

void WF1F0() // WF1F0
{
  Push((Read16(pp_BARTERI) & Read16(pp_IsREPLY)) & !Read16(pp_WE4B6)); // BARTERI @ ?REPLY @ AND WE4B6 @ NOT AND
  if (Pop() == 0) return;
  WEEAE(); // WEEAE
  if (Pop() != 0)
  {
    WF1B0(); // WF1B0
    return;
  }
  WF186(); // WF186
  if (Pop() != 0)
  {
    WF1B0(); // WF1B0
    return;
  }
  WF1BE(); // WF1BE
}


// ================================================
// 0xf222: WORD 'WF224' codep=0x224c wordp=0xf224
// ================================================

void WF224() // WF224
{
  WE590(); // WE590
  if (Pop() != 0)
  {
    WE5A4(); // WE5A4
    WE05A(); // WE05A
    WE610(); // WE610
  } else
  {
    WF156(); // WF156
  }
  Push(Read16(pp_WE4B2)); // WE4B2 @
  if (Pop() != 0)
  {
    Push(0x0028);
  } else
  {
    Push(0x003c);
  }
  Push(pp_WE4BA); // WE4BA
  Store_2(); // !_2
  WEE80(); // WEE80
  if (Pop() == 0) return;
  Push(-2);
  WEE96(); // WEE96
  WEE4A(); // WEE4A
}


// ================================================
// 0xf25c: WORD 'WF25E' codep=0x224c wordp=0xf25e
// ================================================

void WF25E() // WF25E
{
  Push(0x0014);
  Push(pp_WE4BA); // WE4BA
  Store_2(); // !_2
  WEE80(); // WEE80
  if (Pop() == 0) return;
  Push(-1);
  WEE96(); // WEE96
  WEE4A(); // WEE4A
}


// ================================================
// 0xf274: WORD 'WF276' codep=0x224c wordp=0xf276 params=0 returns=1
// ================================================

void WF276() // WF276
{
  unsigned short int a;
  Push(Read16(pp__1ST)); // 1ST @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(pp_PLAST)); // PLAST @
    WF014(); // WF014
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
    WE5EA(); // WE5EA
    Push(Read16(pp_SELLING)==0?1:0); // SELLING @ 0=
    if (Pop() != 0)
    {
      MAX(); // MAX
    }
    Push(a + 1); // R> 1+
    WITHIN(); // WITHIN
    WF048(); // WF048
    Push(Pop() | Pop()); // OR
    return;
  }
  Push(0);
}


// ================================================
// 0xf2c6: WORD 'WF2C8' codep=0x224c wordp=0xf2c8 params=0 returns=1
// ================================================

void WF2C8() // WF2C8
{
  Push(Read16(pp_WE4A6)); // WE4A6 @
}


// ================================================
// 0xf2ce: WORD 'WF2D0' codep=0x224c wordp=0xf2d0 params=0 returns=1
// ================================================

void WF2D0() // WF2D0
{
  Push(Read16(pp_WE4AA)); // WE4AA @
}


// ================================================
// 0xf2d6: WORD 'WF2D8' codep=0x224c wordp=0xf2d8 params=0 returns=1
// ================================================

void WF2D8() // WF2D8
{
  Push(Read16(pp_PLAST)); // PLAST @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  _0_st_(); // 0<
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf2e8: WORD 'WF2EA' codep=0x224c wordp=0xf2ea params=0 returns=1
// ================================================

void WF2EA() // WF2EA
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
    WE5EA(); // WE5EA
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
// 0xf328: WORD 'WF32A' codep=0x224c wordp=0xf32a params=0 returns=1
// ================================================

void WF32A() // WF32A
{
  unsigned short int a, b;
  Push(Read16(pp__1ST)==0?1:0); // 1ST @ 0=
  if (Pop() != 0)
  {
    Push(Read16(pp_PLAST)); // PLAST @
    Push(0);
    Push(Read16(pp_WDFDE)); // WDFDE @
    Push(0);
    _2OVER(); // 2OVER
    _2OVER(); // 2OVER
    Push(Read16(pp_SELLING)); // SELLING @
    if (Pop() != 0)
    {
      D_st_(); // D<
      a = Pop(); // >R
      Push(0x006b);
      WE59A(); // WE59A
      D_st_(); // D<
      Push(!Pop() & a); //  NOT R> AND
    } else
    {
      D_gt_(); // D>
      b = Pop(); // >R
      Push(0x006b);
      WE59A(); // WE59A
      D_gt_(); // D>
      Push(!Pop() & b); //  NOT R> AND
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xf37c: WORD 'WF37E' codep=0x224c wordp=0xf37e params=0 returns=1
// ================================================

void WF37E() // WF37E
{
  Push(Read16(pp_WE4B6)); // WE4B6 @
}


// ================================================
// 0xf384: WORD 'WF386' codep=0x224c wordp=0xf386 params=0 returns=1
// ================================================

void WF386() // WF386
{
  Push(Read16(pp_PLAST)==Read16(pp_WDFDE)?1:0); // PLAST @ WDFDE @ =
  Push(Read16(regsp)); // DUP
  Push(pp_WE4AE); // WE4AE
  Store_2(); // !_2
}


// ================================================
// 0xf398: WORD 'WF39A' codep=0x224c wordp=0xf39a params=0 returns=1
// ================================================

void WF39A() // WF39A
{
  Push(Read16(pp_WDFDE)); // WDFDE @
  Push(0);
  Push(Read16(pp_PLAST)); // PLAST @
  Push(0);
  Push(0x0050);
  WE59A(); // WE59A
  Push(Read16(pp_SELLING)); // SELLING @
  if (Pop() != 0)
  {
    D_gt_(); // D>
    return;
  }
  D_st_(); // D<
}


// ================================================
// 0xf3be: WORD '(DO-BARTER)' codep=0xaccc wordp=0xf3ce
// ================================================

void _ro_DO_dash_BARTER_rc_() // (DO-BARTER) rule
{
  int b;

  b = 1;
  WF276(); // WF276
  b = b && Pop();
  WF2C8(); // WF2C8
  b = b && !Pop();
  WF2D0(); // WF2D0
  b = b && !Pop();
  if (b)
  {
    WF0A6(); // WF0A6
  }

  b = 1;
  WF008(); // WF008
  b = b && Pop();
  WF2C8(); // WF2C8
  b = b && !Pop();
  WF2D0(); // WF2D0
  b = b && !Pop();
  if (b)
  {
    WF0A6(); // WF0A6
  }

  b = 1;
  WF2C8(); // WF2C8
  b = b && Pop();
  if (b)
  {
    WED3E(); // WED3E
  }

  b = 1;
  WF2D0(); // WF2D0
  b = b && Pop();
  if (b)
  {
    WED3E(); // WED3E
  }

  b = 1;
  WF066(); // WF066
  b = b && Pop();
  WF37E(); // WF37E
  b = b && !Pop();
  WF2D0(); // WF2D0
  b = b && !Pop();
  if (b)
  {
    WF0BA(); // WF0BA
  }

  b = 1;
  WF2EA(); // WF2EA
  b = b && Pop();
  WF37E(); // WF37E
  b = b && !Pop();
  WF2D0(); // WF2D0
  b = b && !Pop();
  if (b)
  {
    WF0D4(); // WF0D4
  }

  b = 1;
  WF2D8(); // WF2D8
  b = b && Pop();
  WF37E(); // WF37E
  b = b && !Pop();
  WF2D0(); // WF2D0
  b = b && !Pop();
  if (b)
  {
    WF0EC(); // WF0EC
  }

  b = 1;
  WF2EA(); // WF2EA
  b = b && !Pop();
  WF32A(); // WF32A
  b = b && Pop();
  WF2D0(); // WF2D0
  b = b && !Pop();
  WF37E(); // WF37E
  b = b && !Pop();
  if (b)
  {
    WF100(); // WF100
  }

  b = 1;
  WF37E(); // WF37E
  b = b && Pop();
  WEE80(); // WEE80
  b = b && Pop();
  if (b)
  {
    WF116(); // WF116
  }

  b = 1;
  WF37E(); // WF37E
  b = b && Pop();
  WEE80(); // WEE80
  b = b && !Pop();
  if (b)
  {
    WF15A(); // WF15A
  }

  b = 1;
  WF2D0(); // WF2D0
  b = b && !Pop();
  WF386(); // WF386
  b = b && Pop();
  if (b)
  {
    WF224(); // WF224
  }

  b = 1;
  WF2D0(); // WF2D0
  b = b && !Pop();
  WF39A(); // WF39A
  b = b && Pop();
  if (b)
  {
    WF25E(); // WF25E
  }
}

// 0xf3e9: db 0x90 0x16 '  '

// ================================================
// 0xf450: WORD 'DO-BARTER' codep=0x224c wordp=0xf45e
// ================================================
// entry

void DO_dash_BARTER() // DO-BARTER
{
  Push(Read16(pp_TRACE)); // TRACE @
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM(" ");
    DrawTTY(); // .TTY
    WE5EA(); // WE5EA
    Draw(); // .
    WE55A(); // WE55A
    Draw(); // .
  }
  WE18A(); // WE18A
  Push(0xf3ce); // '(DO-BARTER)'
  DISTRAC(); // DISTRAC
  _ro_DO_dash_BARTER_rc_(); // (DO-BARTER) rule
  Pop(); // DROP
  WF1F0(); // WF1F0
}


// ================================================
// 0xf484: WORD 'WF486' codep=0x224c wordp=0xf486
// ================================================

void WF486() // WF486
{
  Push(Read16(pp_PLAST)==Read16(pp_WDFDE)?1:0); // PLAST @ WDFDE @ =
  if (Pop() != 0)
  {
    WE0BE(); // WE0BE
    return;
  }
  WE0DC(); // WE0DC
}


// ================================================
// 0xf49e: WORD 'N>REPLY' codep=0x4b3b wordp=0xf4aa
// ================================================

void N_gt_REPLY() // N>REPLY
{
  switch(Pop()) // N>REPLY
  {
  case 0:
    WE0D2(); // WE0D2
    break;
  case 1:
    WE0E6(); // WE0E6
    break;
  case 2:
    WF486(); // WF486
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf4ba: WORD 'WF4BC' codep=0x224c wordp=0xf4bc
// ================================================

void WF4BC() // WF4BC
{
  WE5AE(); // WE5AE
  N_gt_REPLY(); // N>REPLY case
  WE610(); // WE610
}


// ================================================
// 0xf4c4: WORD '!PFLAGS' codep=0x224c wordp=0xf4d0
// ================================================
// entry

void StorePFLAGS() // !PFLAGS
{
  WE17E(); // WE17E
  StoreCOLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  WF4BC(); // WF4BC
  Push(Read16(regsp)); // DUP
  Push(Pop()==2?1:0); //  2 =
  if (Pop() != 0)
  {
    Push(Pop()==0?1:0); //  0=
    Push(Read16(regsp)); // DUP
    Push(pp_WE4B6); // WE4B6
    Store_2(); // !_2
    Push(pp_WE4AA); // WE4AA
    Store_2(); // !_2
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_WE4B6); // WE4B6
  Store_2(); // !_2
  Push(pp_WE4AA); // WE4AA
  Store_2(); // !_2
}


// ================================================
// 0xf500: WORD 'L>P' codep=0x224c wordp=0xf508 params=0 returns=0
// ================================================
// entry

void L_gt_P() // L>P
{
  Push(Read16(pp_PLAST)); // PLAST @
  Push(pp_WDFDE); // WDFDE
  Store_2(); // !_2
  Push(pp_WE4AE); // WE4AE
  _099(); // 099
}


// ================================================
// 0xf516: WORD 'WF518' codep=0x224c wordp=0xf518 params=0 returns=0
// ================================================

void WF518() // WF518
{
  Push(pp_WE4A6); // WE4A6
  _099(); // 099
  Push(pp_WE4AA); // WE4AA
  _099(); // 099
  Push(pp_WE4B2); // WE4B2
  _099(); // 099
  Push(pp_WE4AE); // WE4AE
  _099(); // 099
  Push(pp_WE4B6); // WE4B6
  _099(); // 099
  Push(pp_WE4BA); // WE4BA
  _099(); // 099
  Push(pp_PLAST); // PLAST
  _099(); // 099
  Push(pp_WDFDE); // WDFDE
  _099(); // 099
  Push(pp_WDFDA); // WDFDA
  _099(); // 099
  Push(2);
  Push(pp__1ST); // 1ST
  Store_2(); // !_2
  Push(0x0014);
  Push(pp_WE4BA); // WE4BA
  Store_2(); // !_2
}


// ================================================
// 0xf54c: WORD 'DO-OPEN_2' codep=0x224c wordp=0xf558
// ================================================
// entry

void DO_dash_OPEN_2() // DO-OPEN_2
{
  WF518(); // WF518
  DO_dash_OPEN_1(); // DO-OPEN_1
}

// 0xf55e: db 0x42 0x41 0x00 'BA '

