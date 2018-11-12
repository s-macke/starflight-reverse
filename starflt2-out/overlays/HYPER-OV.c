// ====== OVERLAY 'HYPER-OV' ======
// store offset = 0xd980
// overlay size   = 0x1be0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WD996  codep:0x224c wordp:0xd996 size:0x0008 C-string:'WD996'
//           WD9A0  codep:0x224c wordp:0xd9a0 size:0x0006 C-string:'WD9A0'
//           WD9A8  codep:0x224c wordp:0xd9a8 size:0x0006 C-string:'WD9A8'
//           WD9B0  codep:0x224c wordp:0xd9b0 size:0x0006 C-string:'WD9B0'
//           WD9B8  codep:0x224c wordp:0xd9b8 size:0x0006 C-string:'WD9B8'
//           WD9C0  codep:0x224c wordp:0xd9c0 size:0x0006 C-string:'WD9C0'
//           WD9C8  codep:0x224c wordp:0xd9c8 size:0x0006 C-string:'WD9C8'
//           WD9D0  codep:0x2214 wordp:0xd9d0 size:0x0002 C-string:'WD9D0'
//           WD9D4  codep:0x2214 wordp:0xd9d4 size:0x0002 C-string:'WD9D4'
//           WD9D8  codep:0x2214 wordp:0xd9d8 size:0x0002 C-string:'WD9D8'
//           WD9DC  codep:0x2214 wordp:0xd9dc size:0x0002 C-string:'WD9DC'
//           WD9E0  codep:0x2214 wordp:0xd9e0 size:0x0002 C-string:'WD9E0'
//           WD9E4  codep:0x2214 wordp:0xd9e4 size:0x0002 C-string:'WD9E4'
//           WD9E8  codep:0x2214 wordp:0xd9e8 size:0x0002 C-string:'WD9E8'
//           WD9EC  codep:0x2214 wordp:0xd9ec size:0x0002 C-string:'WD9EC'
//           WD9F0  codep:0x2214 wordp:0xd9f0 size:0x0002 C-string:'WD9F0'
//           WD9F4  codep:0x2214 wordp:0xd9f4 size:0x0002 C-string:'WD9F4'
//           WD9F8  codep:0x2214 wordp:0xd9f8 size:0x0002 C-string:'WD9F8'
//           WD9FC  codep:0x1d29 wordp:0xd9fc size:0x0002 C-string:'WD9FC'
//           WDA00  codep:0x1d29 wordp:0xda00 size:0x0002 C-string:'WDA00'
//           WDA04  codep:0x1d29 wordp:0xda04 size:0x0002 C-string:'WDA04'
//           WDA08  codep:0x1d29 wordp:0xda08 size:0x0002 C-string:'WDA08'
//           WDA0C  codep:0x1d29 wordp:0xda0c size:0x0002 C-string:'WDA0C'
//           WDA10  codep:0x1d29 wordp:0xda10 size:0x0002 C-string:'WDA10'
//           WDA14  codep:0x1d29 wordp:0xda14 size:0x0004 C-string:'WDA14'
//           WDA1A  codep:0x1d29 wordp:0xda1a size:0x0002 C-string:'WDA1A'
//           WDA1E  codep:0x1d29 wordp:0xda1e size:0x0002 C-string:'WDA1E'
//           WDA22  codep:0x1d29 wordp:0xda22 size:0x0002 C-string:'WDA22'
//           WDA26  codep:0x1d29 wordp:0xda26 size:0x0002 C-string:'WDA26'
//           WDA2A  codep:0x1d29 wordp:0xda2a size:0x0002 C-string:'WDA2A'
//           WDA2E  codep:0x1d29 wordp:0xda2e size:0x0002 C-string:'WDA2E'
//           WDA32  codep:0x7420 wordp:0xda32 size:0x0003 C-string:'WDA32'
//           WDA37  codep:0x7420 wordp:0xda37 size:0x0003 C-string:'WDA37'
//           WDA3C  codep:0x7420 wordp:0xda3c size:0x0003 C-string:'WDA3C'
//           WDA41  codep:0x7420 wordp:0xda41 size:0x0003 C-string:'WDA41'
//           WDA46  codep:0x7420 wordp:0xda46 size:0x0003 C-string:'WDA46'
//           WDA4B  codep:0x7420 wordp:0xda4b size:0x0003 C-string:'WDA4B'
//           WDA50  codep:0x7420 wordp:0xda50 size:0x0003 C-string:'WDA50'
//           WDA55  codep:0x7420 wordp:0xda55 size:0x0003 C-string:'WDA55'
//           WDA5A  codep:0x7420 wordp:0xda5a size:0x0003 C-string:'WDA5A'
//           WDA5F  codep:0x7420 wordp:0xda5f size:0x0003 C-string:'WDA5F'
//           WDA64  codep:0x7420 wordp:0xda64 size:0x0003 C-string:'WDA64'
//           WDA69  codep:0x7420 wordp:0xda69 size:0x0003 C-string:'WDA69'
//           WDA6E  codep:0x7420 wordp:0xda6e size:0x0003 C-string:'WDA6E'
//           WDA73  codep:0x7394 wordp:0xda73 size:0x0006 C-string:'WDA73'
//           WDA7B  codep:0x7420 wordp:0xda7b size:0x0003 C-string:'WDA7B'
//           WDA80  codep:0x7420 wordp:0xda80 size:0x0003 C-string:'WDA80'
//           WDA85  codep:0x7420 wordp:0xda85 size:0x0003 C-string:'WDA85'
//           WDA8A  codep:0x7420 wordp:0xda8a size:0x0003 C-string:'WDA8A'
//           WDA8F  codep:0x7420 wordp:0xda8f size:0x0003 C-string:'WDA8F'
//           WDA94  codep:0x224c wordp:0xda94 size:0x0008 C-string:'WDA94'
//           WDA9E  codep:0x224c wordp:0xda9e size:0x0008 C-string:'WDA9E'
//           WDAA8  codep:0x224c wordp:0xdaa8 size:0x000a C-string:'WDAA8'
//           WDAB4  codep:0x224c wordp:0xdab4 size:0x000a C-string:'WDAB4'
//           WDAC0  codep:0x224c wordp:0xdac0 size:0x0008 C-string:'WDAC0'
//           WDACA  codep:0x224c wordp:0xdaca size:0x0006 C-string:'WDACA'
//           WDAD2  codep:0x224c wordp:0xdad2 size:0x0008 C-string:'WDAD2'
//           WDADC  codep:0x224c wordp:0xdadc size:0x000a C-string:'WDADC'
//           WDAE8  codep:0x224c wordp:0xdae8 size:0x0008 C-string:'WDAE8'
//           WDAF2  codep:0x224c wordp:0xdaf2 size:0x000c C-string:'WDAF2'
//           WDB00  codep:0x224c wordp:0xdb00 size:0x000a C-string:'WDB00'
//           WDB0C  codep:0x224c wordp:0xdb0c size:0x000e C-string:'WDB0C'
//           WDB1C  codep:0x224c wordp:0xdb1c size:0x0008 C-string:'WDB1C'
//           WDB26  codep:0x224c wordp:0xdb26 size:0x002c C-string:'WDB26'
//           WDB54  codep:0x224c wordp:0xdb54 size:0x0028 C-string:'WDB54'
//           WDB7E  codep:0x224c wordp:0xdb7e size:0x005e C-string:'WDB7E'
//           WDBDE  codep:0x7420 wordp:0xdbde size:0x0003 C-string:'WDBDE'
//           WDBE3  codep:0x7420 wordp:0xdbe3 size:0x0003 C-string:'WDBE3'
//           WDBE8  codep:0x7420 wordp:0xdbe8 size:0x0003 C-string:'WDBE8'
//           WDBED  codep:0x7420 wordp:0xdbed size:0x0003 C-string:'WDBED'
//           WDBF2  codep:0x7420 wordp:0xdbf2 size:0x0003 C-string:'WDBF2'
//           WDBF7  codep:0x224c wordp:0xdbf7 size:0x002c C-string:'WDBF7'
//           WDC25  codep:0x224c wordp:0xdc25 size:0x001c C-string:'WDC25'
//           WDC43  codep:0x224c wordp:0xdc43 size:0x002c C-string:'WDC43'
//           WDC71  codep:0x224c wordp:0xdc71 size:0x0034 C-string:'WDC71'
//            PS>C  codep:0x4b3b wordp:0xdcae size:0x0018 C-string:'PS_gt_C'
//           WDCC8  codep:0x224c wordp:0xdcc8 size:0x0028 C-string:'WDCC8'
//           WDCF2  codep:0x224c wordp:0xdcf2 size:0x003c C-string:'WDCF2'
//           WDD30  codep:0x224c wordp:0xdd30 size:0x0026 C-string:'WDD30'
//           WDD58  codep:0x224c wordp:0xdd58 size:0x0024 C-string:'WDD58'
//           WDD7E  codep:0x224c wordp:0xdd7e size:0x002e C-string:'WDD7E'
//           WDDAE  codep:0x224c wordp:0xddae size:0x0064 C-string:'WDDAE'
//           WDE14  codep:0x224c wordp:0xde14 size:0x0058 C-string:'WDE14'
//           WDE6E  codep:0x224c wordp:0xde6e size:0x001a C-string:'WDE6E'
//           WDE8A  codep:0x224c wordp:0xde8a size:0x0014 C-string:'WDE8A'
//           WDEA0  codep:0x224c wordp:0xdea0 size:0x001e C-string:'WDEA0'
//           WDEC0  codep:0x224c wordp:0xdec0 size:0x0016 C-string:'WDEC0'
//           WDED8  codep:0x224c wordp:0xded8 size:0x0008 C-string:'WDED8'
//           WDEE2  codep:0x224c wordp:0xdee2 size:0x0008 C-string:'WDEE2'
//           WDEEC  codep:0x224c wordp:0xdeec size:0x0008 C-string:'WDEEC'
//           WDEF6  codep:0x224c wordp:0xdef6 size:0x001c C-string:'WDEF6'
//           WDF14  codep:0x224c wordp:0xdf14 size:0x0050 C-string:'WDF14'
//           WDF66  codep:0x224c wordp:0xdf66 size:0x0016 C-string:'WDF66'
//             >XY  codep:0x4b3b wordp:0xdf84 size:0x000c C-string:'_gt_XY'
//           WDF92  codep:0x224c wordp:0xdf92 size:0x001c C-string:'WDF92'
//            SC>C  codep:0x4b3b wordp:0xdfb7 size:0x001c C-string:'SC_gt_C'
//           WDFD5  codep:0x224c wordp:0xdfd5 size:0x0012 C-string:'WDFD5'
//           WDFE9  codep:0x224c wordp:0xdfe9 size:0x0060 C-string:'WDFE9'
//         .AUXSYS  codep:0x224c wordp:0xe055 size:0x0060 C-string:'DrawAUXSYS'
//           WE0B7  codep:0x224c wordp:0xe0b7 size:0x0020 C-string:'WE0B7'
//           WE0D9  codep:0x224c wordp:0xe0d9 size:0x0022 C-string:'WE0D9'
//           WE0FD  codep:0x224c wordp:0xe0fd size:0x004a C-string:'WE0FD'
//           WE149  codep:0x224c wordp:0xe149 size:0x000c C-string:'WE149'
//           WE157  codep:0x224c wordp:0xe157 size:0x001a C-string:'WE157'
//           WE173  codep:0x224c wordp:0xe173 size:0x0006 C-string:'WE173'
//           WE17B  codep:0x224c wordp:0xe17b size:0x000a C-string:'WE17B'
//           RADII  codep:0x4b3b wordp:0xe18f size:0x0014 C-string:'RADII'
//            IVAR  codep:0x4b3b wordp:0xe1ac size:0x0014 C-string:'IVAR'
//           WE1C2  codep:0x224c wordp:0xe1c2 size:0x001e C-string:'WE1C2'
//           WE1E2  codep:0x224c wordp:0xe1e2 size:0x0016 C-string:'WE1E2'
//           WE1FA  codep:0x224c wordp:0xe1fa size:0x0004 C-string:'WE1FA'
//           WE200  codep:0x224c wordp:0xe200 size:0x0008 C-string:'WE200'
//           WE20A  codep:0x224c wordp:0xe20a size:0x0018 C-string:'WE20A'
//          XYCASE  codep:0x4b3b wordp:0xe22d size:0x000c C-string:'XYCASE'
//           WE23B  codep:0x224c wordp:0xe23b size:0x0070 C-string:'WE23B'
//           WE2AD  codep:0x2214 wordp:0xe2ad size:0x0002 C-string:'WE2AD'
//           WE2B1  codep:0x2214 wordp:0xe2b1 size:0x0002 C-string:'WE2B1'
//           WE2B5  codep:0x2214 wordp:0xe2b5 size:0x0002 C-string:'WE2B5'
//           WE2B9  codep:0x2214 wordp:0xe2b9 size:0x0002 C-string:'WE2B9'
//           WE2BD  codep:0x1d29 wordp:0xe2bd size:0x0018 C-string:'WE2BD'
//           WE2D7  codep:0x224c wordp:0xe2d7 size:0x002a C-string:'WE2D7'
//           WE303  codep:0x224c wordp:0xe303 size:0x0022 C-string:'WE303'
//           WE327  codep:0x224c wordp:0xe327 size:0x0052 C-string:'WE327'
//           WE37B  codep:0x224c wordp:0xe37b size:0x0024 C-string:'WE37B'
//            .MVS  codep:0x224c wordp:0xe3a8 size:0x004c C-string:'DrawMVS'
//           WE3F6  codep:0x224c wordp:0xe3f6 size:0x006e C-string:'WE3F6'
//           WE466  codep:0x224c wordp:0xe466 size:0x003e C-string:'WE466'
//           WE4A6  codep:0x224c wordp:0xe4a6 size:0x006e C-string:'WE4A6'
//           WE516  codep:0x224c wordp:0xe516 size:0x000e C-string:'WE516'
//           WE526  codep:0x224c wordp:0xe526 size:0x001c C-string:'WE526'
//           WE544  codep:0x224c wordp:0xe544 size:0x000e C-string:'WE544'
//           WE554  codep:0x224c wordp:0xe554 size:0x004e C-string:'WE554'
//           WE5A4  codep:0x224c wordp:0xe5a4 size:0x006e C-string:'WE5A4'
//           WE614  codep:0x1d29 wordp:0xe614 size:0x0010 C-string:'WE614'
//           WE626  codep:0x224c wordp:0xe626 size:0x0012 C-string:'WE626'
//           WE63A  codep:0x224c wordp:0xe63a size:0x001a C-string:'WE63A'
//           WE656  codep:0x224c wordp:0xe656 size:0x001c C-string:'WE656'
//           WE674  codep:0x224c wordp:0xe674 size:0x0024 C-string:'WE674'
//           WE69A  codep:0x224c wordp:0xe69a size:0x0012 C-string:'WE69A'
//           WE6AE  codep:0x224c wordp:0xe6ae size:0x002e C-string:'WE6AE'
//           WE6DE  codep:0x224c wordp:0xe6de size:0x0018 C-string:'WE6DE'
//           WE6F8  codep:0x224c wordp:0xe6f8 size:0x00b6 C-string:'WE6F8'
//           WE7B0  codep:0x224c wordp:0xe7b0 size:0x0012 C-string:'WE7B0'
//           USE-E  codep:0x224c wordp:0xe7cc size:0x0054 C-string:'USE_dash_E'
//           WE822  codep:0x224c wordp:0xe822 size:0x001a C-string:'WE822'
//           WE83E  codep:0x224c wordp:0xe83e size:0x0034 C-string:'WE83E'
//           WE874  codep:0x224c wordp:0xe874 size:0x000c C-string:'WE874'
//           WE882  codep:0x224c wordp:0xe882 size:0x0012 C-string:'WE882'
//           WE896  codep:0x2214 wordp:0xe896 size:0x0002 C-string:'WE896'
//          CSPEED  codep:0x4b3b wordp:0xe8a3 size:0x000c C-string:'CSPEED'
//            #ACC  codep:0x1d29 wordp:0xe8b8 size:0x0002 C-string:'_n_ACC'
//          KEYINC  codep:0x1d29 wordp:0xe8c5 size:0x0002 C-string:'KEYINC'
//           WE8C9  codep:0x224c wordp:0xe8c9 size:0x0014 C-string:'WE8C9'
//           WE8DF  codep:0x224c wordp:0xe8df size:0x0024 C-string:'WE8DF'
//           WE905  codep:0x224c wordp:0xe905 size:0x003a C-string:'WE905'
//           WE941  codep:0x224c wordp:0xe941 size:0x0016 C-string:'WE941'
//           WE959  codep:0x224c wordp:0xe959 size:0x001c C-string:'WE959'
//           WE977  codep:0x224c wordp:0xe977 size:0x0014 C-string:'WE977'
//           WE98D  codep:0x224c wordp:0xe98d size:0x0010 C-string:'WE98D'
//             ?~C  codep:0x4b3b wordp:0xe9a5 size:0x0010 C-string:'Is_t_C'
//           WE9B7  codep:0x224c wordp:0xe9b7 size:0x0018 C-string:'WE9B7'
//         NEST-SE  codep:0x4b3b wordp:0xe9db size:0x0014 C-string:'NEST_dash_SE'
//           WE9F1  codep:0x224c wordp:0xe9f1 size:0x002c C-string:'WE9F1'
//            NEST  codep:0x224c wordp:0xea26 size:0x006c C-string:'NEST'
//           WEA94  codep:0x224c wordp:0xea94 size:0x0022 C-string:'WEA94'
//           WEAB8  codep:0x224c wordp:0xeab8 size:0x0020 C-string:'WEAB8'
//           WEADA  codep:0x224c wordp:0xeada size:0x0022 C-string:'WEADA'
//           WEAFE  codep:0x224c wordp:0xeafe size:0x001a C-string:'WEAFE'
//           WEB1A  codep:0x224c wordp:0xeb1a size:0x0034 C-string:'WEB1A'
//          JMPSHP  codep:0x224c wordp:0xeb59 size:0x0020 C-string:'JMPSHP'
//           WEB7B  codep:0x224c wordp:0xeb7b size:0x002a C-string:'WEB7B'
//           WEBA7  codep:0x224c wordp:0xeba7 size:0x000a C-string:'WEBA7'
//         COLLIDE  codep:0x4b3b wordp:0xebbd size:0x001c C-string:'COLLIDE'
//           WEBDB  codep:0x224c wordp:0xebdb size:0x00a4 C-string:'WEBDB'
//           WEC81  codep:0x224c wordp:0xec81 size:0x0022 C-string:'WEC81'
//           WECA5  codep:0x224c wordp:0xeca5 size:0x001a C-string:'WECA5'
//           WECC1  codep:0x224c wordp:0xecc1 size:0x004e C-string:'WECC1'
//           WED11  codep:0x224c wordp:0xed11 size:0x0061 C-string:'WED11'
//         UNNEST-  codep:0x4b3b wordp:0xed7e size:0x0014 C-string:'UNNEST_dash_'
//           WED94  codep:0x224c wordp:0xed94 size:0x0022 C-string:'WED94'
//           WEDB8  codep:0x224c wordp:0xedb8 size:0x005a C-string:'WEDB8'
//           WEE14  codep:0x224c wordp:0xee14 size:0x0026 C-string:'WEE14'
//          UNNEST  codep:0x224c wordp:0xee45 size:0x0074 C-string:'UNNEST'
//           WEEBB  codep:0x224c wordp:0xeebb size:0x0028 C-string:'WEEBB'
//         (GET-AU  codep:0x224c wordp:0xeeef size:0x0012 C-string:'_ro_GET_dash_AU'
//           WEF03  codep:0x224c wordp:0xef03 size:0x0030 C-string:'WEF03'
//           WEF35  codep:0x224c wordp:0xef35 size:0x0026 C-string:'WEF35'
//             FLY  codep:0x224c wordp:0xef63 size:0x0024 C-string:'FLY'
//           WEF89  codep:0x224c wordp:0xef89 size:0x001a C-string:'WEF89'
//         SET-DES  codep:0x224c wordp:0xefaf size:0x00ae C-string:'SET_dash_DES'
//         SETUP-M  codep:0x224c wordp:0xf069 size:0x008e C-string:'SETUP_dash_M'
//         CLEANUP  codep:0x224c wordp:0xf103 size:0x007a C-string:'CLEANUP'
//         CHK-MOV  codep:0x224c wordp:0xf189 size:0x008e C-string:'CHK_dash_MOV'
//           WF219  codep:0x224c wordp:0xf219 size:0x002f C-string:'WF219'
//           +NEST  codep:0x224c wordp:0xf252 size:0x000a C-string:'_plus_NEST'
//         COME-HI  codep:0x224c wordp:0xf268 size:0x0000 C-string:'COME_dash_HI'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_IsUF; // ?UF
extern const unsigned short int pp_IsAF; // ?AF
extern const unsigned short int pp_TCLR; // TCLR
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_IsFUEL_dash_D; // ?FUEL-D
extern const unsigned short int pp_IsG_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_FORCEPT; // FORCEPT
extern const unsigned short int pp_IsPORT; // ?PORT
extern const unsigned short int pp_SKIP2NE; // SKIP2NE
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_FORCEKE; // FORCEKE
extern const unsigned short int pp_SKEY; // SKEY
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_HEADING; // HEADING
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_TIME_dash_PA; // TIME-PA
extern const unsigned short int pp__i__dot_VEHIC; // '.VEHIC
extern const unsigned short int pp__i_VEHICL; // 'VEHICL
extern const unsigned short int pp__h_CRIT; // ^CRIT
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp_Is5; // ?5
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp_IsCALLIN; // ?CALLIN
extern const unsigned short int pp_VSTIME; // VSTIME
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp_SENSE_dash_A; // SENSE-A
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_ENC_dash_TIM; // ENC-TIM
extern const unsigned short int pp_NAV_dash_TIM; // NAV-TIM
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_SHIPBO; // (SHIPBO
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_NTIME; // NTIME
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_GREE; // DK-GREE
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void Draw(); // .
void DrawR(); // .R
void NOP(); // NOP
void PICK(); // PICK
void ROLL(); // ROLL
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void DMAX(); // DMAX
void BIT(); // BIT
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void IsCHILD(); // ?CHILD
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void IINSERT(); // IINSERT
void IEXTRAC(); // IEXTRAC
void IsCLASS_slash_(); // ?CLASS/
void SELECT_dash_(); // SELECT-
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void _star_CREATE(); // *CREATE
void SAVE_dash_OV(); // SAVE-OV
void IsCGA(); // ?CGA
void NBCLR(); // NBCLR
void StoreCOLOR(); // !COLOR
void BFILL(); // BFILL
void FILLCIR(); // FILLCIR
void DrawELLIPS(); // .ELLIPS
void _gt_1FONT(); // >1FONT
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void StoreVISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void StoreID(); // !ID
void StoreIC(); // !IC
void IsVCLIP(); // ?VCLIP
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICONS_dash__1(); // ?ICONS-_1
void IsICONS_dash__2(); // ?ICONS-_2
void IsICON_eq_I(); // ?ICON=I
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void _gt_SND(); // >SND
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void ERASE_dash_A(); // ERASE-A
void _i_KEY(); // 'KEY
void CURSORS(); // CURSORS
void ORGIA(); // ORGIA
void ORBUP(); // ORBUP
void CONTEXT_2(); // CONTEXT_2
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
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void U_st_(); // U<
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void _plus__dash__at_(); // +-@
void CI(); // CI
void _gt_V(); // >V
void V_gt_(); // V>
void L_at_PIXEL(); // L@PIXEL
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void BLT(); // BLT
void WLD_gt_SCR(); // WLD>SCR
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WD9FC = 0xd9fc; // WD9FC size: 2
// {0x00, 0x00}

const unsigned short int pp_WDA00 = 0xda00; // WDA00 size: 2
// {0x4b, 0x00}

const unsigned short int pp_WDA04 = 0xda04; // WDA04 size: 2
// {0x7e, 0x65}

const unsigned short int pp_WDA08 = 0xda08; // WDA08 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA0C = 0xda0c; // WDA0C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA10 = 0xda10; // WDA10 size: 2
// {0x00, 0x00}

const unsigned short int pp_WDA14 = 0xda14; // WDA14 size: 4
// {0x00, 0x00, 0x00, 0x62}

const unsigned short int pp_WDA1A = 0xda1a; // WDA1A size: 2
// {0x4a, 0x00}

const unsigned short int pp_WDA1E = 0xda1e; // WDA1E size: 2
// {0x00, 0x00}

const unsigned short int pp_WDA22 = 0xda22; // WDA22 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDA26 = 0xda26; // WDA26 size: 2
// {0x55, 0xe0}

const unsigned short int pp_WDA2A = 0xda2a; // WDA2A size: 2
// {0x02, 0x00}

const unsigned short int pp_WDA2E = 0xda2e; // WDA2E size: 2
// {0x00, 0x00}

const unsigned short int pp_WE2BD = 0xe2bd; // WE2BD size: 24
// {0x44, 0x7f, 0xf5, 0x87, 0xa5, 0xc0, 0x3c, 0xd2, 0xa5, 0x57, 0xf2, 0x7d, 0x78, 0xa7, 0xed, 0x0c, 0x90, 0x55, 0x41, 0x41, 0xa3, 0x43, 0x40, 0x22}

const unsigned short int pp_WE614 = 0xe614; // WE614 size: 16
// {0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x01, 0xff}

const unsigned short int pp__n_ACC = 0xe8b8; // #ACC size: 2
// {0x00, 0x00}

const unsigned short int pp_KEYINC = 0xe8c5; // KEYINC size: 2
// {0x00, 0x00}


const unsigned short int cc_WD9D0 = 0xd9d0; // WD9D0
const unsigned short int cc_WD9D4 = 0xd9d4; // WD9D4
const unsigned short int cc_WD9D8 = 0xd9d8; // WD9D8
const unsigned short int cc_WD9DC = 0xd9dc; // WD9DC
const unsigned short int cc_WD9E0 = 0xd9e0; // WD9E0
const unsigned short int cc_WD9E4 = 0xd9e4; // WD9E4
const unsigned short int cc_WD9E8 = 0xd9e8; // WD9E8
const unsigned short int cc_WD9EC = 0xd9ec; // WD9EC
const unsigned short int cc_WD9F0 = 0xd9f0; // WD9F0
const unsigned short int cc_WD9F4 = 0xd9f4; // WD9F4
const unsigned short int cc_WD9F8 = 0xd9f8; // WD9F8
const unsigned short int cc_WE2AD = 0xe2ad; // WE2AD
const unsigned short int cc_WE2B1 = 0xe2b1; // WE2B1
const unsigned short int cc_WE2B5 = 0xe2b5; // WE2B5
const unsigned short int cc_WE2B9 = 0xe2b9; // WE2B9
const unsigned short int cc_WE896 = 0xe896; // WE896


// 0xd992: db 0x96 0x01 '  '

// ================================================
// 0xd994: WORD 'WD996' codep=0x224c wordp=0xd996 params=0 returns=0
// ================================================

void WD996() // WD996
{
  Push(0xca0d); // '!'EXT'
  MODULE(); // MODULE
}


// ================================================
// 0xd99e: WORD 'WD9A0' codep=0x224c wordp=0xd9a0 params=0 returns=0
// ================================================

void WD9A0() // WD9A0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd9a6: WORD 'WD9A8' codep=0x224c wordp=0xd9a8 params=0 returns=0
// ================================================

void WD9A8() // WD9A8
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9ae: WORD 'WD9B0' codep=0x224c wordp=0xd9b0 params=0 returns=0
// ================================================

void WD9B0() // WD9B0
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9b6: WORD 'WD9B8' codep=0x224c wordp=0xd9b8 params=0 returns=0
// ================================================

void WD9B8() // WD9B8
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9be: WORD 'WD9C0' codep=0x224c wordp=0xd9c0 params=0 returns=0
// ================================================

void WD9C0() // WD9C0
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9c6: WORD 'WD9C8' codep=0x224c wordp=0xd9c8 params=0 returns=0
// ================================================

void WD9C8() // WD9C8
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9ce: WORD 'WD9D0' codep=0x2214 wordp=0xd9d0
// ================================================
// 0xd9d0: dw 0x0003

// ================================================
// 0xd9d2: WORD 'WD9D4' codep=0x2214 wordp=0xd9d4
// ================================================
// 0xd9d4: dw 0x0000

// ================================================
// 0xd9d6: WORD 'WD9D8' codep=0x2214 wordp=0xd9d8
// ================================================
// 0xd9d8: dw 0x004b

// ================================================
// 0xd9da: WORD 'WD9DC' codep=0x2214 wordp=0xd9dc
// ================================================
// 0xd9dc: dw 0x0000

// ================================================
// 0xd9de: WORD 'WD9E0' codep=0x2214 wordp=0xd9e0
// ================================================
// 0xd9e0: dw 0x0016

// ================================================
// 0xd9e2: WORD 'WD9E4' codep=0x2214 wordp=0xd9e4
// ================================================
// 0xd9e4: dw 0x0190

// ================================================
// 0xd9e6: WORD 'WD9E8' codep=0x2214 wordp=0xd9e8
// ================================================
// 0xd9e8: dw 0x0040

// ================================================
// 0xd9ea: WORD 'WD9EC' codep=0x2214 wordp=0xd9ec
// ================================================
// 0xd9ec: dw 0x003e

// ================================================
// 0xd9ee: WORD 'WD9F0' codep=0x2214 wordp=0xd9f0
// ================================================
// 0xd9f0: dw 0x0009

// ================================================
// 0xd9f2: WORD 'WD9F4' codep=0x2214 wordp=0xd9f4
// ================================================
// 0xd9f4: dw 0x0008

// ================================================
// 0xd9f6: WORD 'WD9F8' codep=0x2214 wordp=0xd9f8
// ================================================
// 0xd9f8: dw 0x0001

// ================================================
// 0xd9fa: WORD 'WD9FC' codep=0x1d29 wordp=0xd9fc
// ================================================
// 0xd9fc: db 0x00 0x00 '  '

// ================================================
// 0xd9fe: WORD 'WDA00' codep=0x1d29 wordp=0xda00
// ================================================
// 0xda00: db 0x4b 0x00 'K '

// ================================================
// 0xda02: WORD 'WDA04' codep=0x1d29 wordp=0xda04
// ================================================
// 0xda04: db 0x7e 0x65 '~e'

// ================================================
// 0xda06: WORD 'WDA08' codep=0x1d29 wordp=0xda08
// ================================================
// 0xda08: db 0x3a 0x20 ': '

// ================================================
// 0xda0a: WORD 'WDA0C' codep=0x1d29 wordp=0xda0c
// ================================================
// 0xda0c: db 0x3a 0x20 ': '

// ================================================
// 0xda0e: WORD 'WDA10' codep=0x1d29 wordp=0xda10
// ================================================
// 0xda10: db 0x00 0x00 '  '

// ================================================
// 0xda12: WORD 'WDA14' codep=0x1d29 wordp=0xda14
// ================================================
// 0xda14: db 0x00 0x00 0x00 0x62 '   b'

// ================================================
// 0xda18: WORD 'WDA1A' codep=0x1d29 wordp=0xda1a
// ================================================
// 0xda1a: db 0x4a 0x00 'J '

// ================================================
// 0xda1c: WORD 'WDA1E' codep=0x1d29 wordp=0xda1e
// ================================================
// 0xda1e: db 0x00 0x00 '  '

// ================================================
// 0xda20: WORD 'WDA22' codep=0x1d29 wordp=0xda22
// ================================================
// 0xda22: db 0x3a 0x20 ': '

// ================================================
// 0xda24: WORD 'WDA26' codep=0x1d29 wordp=0xda26
// ================================================
// 0xda26: db 0x55 0xe0 'U '

// ================================================
// 0xda28: WORD 'WDA2A' codep=0x1d29 wordp=0xda2a
// ================================================
// 0xda2a: db 0x02 0x00 '  '

// ================================================
// 0xda2c: WORD 'WDA2E' codep=0x1d29 wordp=0xda2e
// ================================================
// 0xda2e: db 0x00 0x00 '  '

// ================================================
// 0xda30: WORD 'WDA32' codep=0x7420 wordp=0xda32
// ================================================
IFieldType WDA32 = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xda35: WORD 'WDA37' codep=0x7420 wordp=0xda37
// ================================================
IFieldType WDA37 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xda3a: WORD 'WDA3C' codep=0x7420 wordp=0xda3c
// ================================================
IFieldType WDA3C = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xda3f: WORD 'WDA41' codep=0x7420 wordp=0xda41
// ================================================
IFieldType WDA41 = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xda44: WORD 'WDA46' codep=0x7420 wordp=0xda46
// ================================================
IFieldType WDA46 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xda49: WORD 'WDA4B' codep=0x7420 wordp=0xda4b
// ================================================
IFieldType WDA4B = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xda4e: WORD 'WDA50' codep=0x7420 wordp=0xda50
// ================================================
IFieldType WDA50 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xda53: WORD 'WDA55' codep=0x7420 wordp=0xda55
// ================================================
IFieldType WDA55 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xda58: WORD 'WDA5A' codep=0x7420 wordp=0xda5a
// ================================================
IFieldType WDA5A = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xda5d: WORD 'WDA5F' codep=0x7420 wordp=0xda5f
// ================================================
IFieldType WDA5F = {FLUX_NODEIDX, 0x0b, 0x02};

// ================================================
// 0xda62: WORD 'WDA64' codep=0x7420 wordp=0xda64
// ================================================
IFieldType WDA64 = {FLUX_NODEIDX, 0x11, 0x02};

// ================================================
// 0xda67: WORD 'WDA69' codep=0x7420 wordp=0xda69
// ================================================
IFieldType WDA69 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xda6c: WORD 'WDA6E' codep=0x7420 wordp=0xda6e
// ================================================
IFieldType WDA6E = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xda71: WORD 'WDA73' codep=0x7394 wordp=0xda73
// ================================================
LoadDataType WDA73 = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xda79: WORD 'WDA7B' codep=0x7420 wordp=0xda7b
// ================================================
// orphan
IFieldType WDA7B = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xda7e: WORD 'WDA80' codep=0x7420 wordp=0xda80
// ================================================
IFieldType WDA80 = {ENCOUNTERIDX, 0x1c, 0x01};

// ================================================
// 0xda83: WORD 'WDA85' codep=0x7420 wordp=0xda85
// ================================================
IFieldType WDA85 = {ENCOUNTERIDX, 0x1d, 0x01};

// ================================================
// 0xda88: WORD 'WDA8A' codep=0x7420 wordp=0xda8a
// ================================================
IFieldType WDA8A = {ENCOUNTERIDX, 0x1a, 0x01};

// ================================================
// 0xda8d: WORD 'WDA8F' codep=0x7420 wordp=0xda8f
// ================================================
IFieldType WDA8F = {ORIGINATORIDX, 0x0c, 0x01};

// ================================================
// 0xda92: WORD 'WDA94' codep=0x224c wordp=0xda94 params=0 returns=2
// ================================================

void WDA94() // WDA94
{
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
}


// ================================================
// 0xda9c: WORD 'WDA9E' codep=0x224c wordp=0xda9e params=2 returns=0
// ================================================

void WDA9E() // WDA9E
{
  SWAP(); // SWAP
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
}


// ================================================
// 0xdaa6: WORD 'WDAA8' codep=0x224c wordp=0xdaa8 params=2 returns=0
// ================================================

void WDAA8() // WDAA8
{
  Push(pp_WDA0C); // WDA0C
  Store_2(); // !_2
  Push(pp_WDA08); // WDA08
  Store_2(); // !_2
}


// ================================================
// 0xdab2: WORD 'WDAB4' codep=0x224c wordp=0xdab4 params=0 returns=2
// ================================================

void WDAB4() // WDAB4
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xdabe: WORD 'WDAC0' codep=0x224c wordp=0xdac0 params=0 returns=2
// ================================================

void WDAC0() // WDAC0
{
  WD9A0(); // WD9A0
  WDA94(); // WDA94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdac8: WORD 'WDACA' codep=0x224c wordp=0xdaca params=0 returns=1
// ================================================

void WDACA() // WDACA
{
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
}


// ================================================
// 0xdad0: WORD 'WDAD2' codep=0x224c wordp=0xdad2 params=2 returns=0
// ================================================

void WDAD2() // WDAD2
{
  WD9A0(); // WD9A0
  WDA9E(); // WDA9E
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdada: WORD 'WDADC' codep=0x224c wordp=0xdadc params=1 returns=0
// ================================================

void WDADC() // WDADC
{
  WD9A0(); // WD9A0
  Push(0x65e1+WDA37.offset); // WDA37<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdae6: WORD 'WDAE8' codep=0x224c wordp=0xdae8 params=0 returns=1
// ================================================

void WDAE8() // WDAE8
{
  WDACA(); // WDACA
  Push(Pop()==4?1:0); //  4 =
}


// ================================================
// 0xdaf0: WORD 'WDAF2' codep=0x224c wordp=0xdaf2 params=0 returns=0
// ================================================

void WDAF2() // WDAF2
{
  WDAB4(); // WDAB4
  Push(pp_WDA1E); // WDA1E
  Store_2(); // !_2
  Push(pp_WDA1A); // WDA1A
  Store_2(); // !_2
}


// ================================================
// 0xdafe: WORD 'WDB00' codep=0x224c wordp=0xdb00 params=0 returns=1
// ================================================

void WDB00() // WDB00
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0020?1:0); //  0x0020 =
}


// ================================================
// 0xdb0a: WORD 'WDB0C' codep=0x224c wordp=0xdb0c params=0 returns=1
// ================================================
// orphan

void WDB0C() // WDB0C
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0018?1:0); //  0x0018 =
  WDB00(); // WDB00
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xdb1a: WORD 'WDB1C' codep=0x224c wordp=0xdb1c params=0 returns=1
// ================================================

void WDB1C() // WDB1C
{
  WDACA(); // WDACA
  Push(Pop()==3?1:0); //  3 =
}


// ================================================
// 0xdb24: WORD 'WDB26' codep=0x224c wordp=0xdb26
// ================================================

void WDB26() // WDB26
{
  Push(pp_WDA14); // WDA14
  Get_gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
  IOPEN(); // IOPEN
  Push(0x0020);
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  WD9C8(); // WD9C8
  Push(pp_GWF); // GWF
  _099(); // 099
  Push(pp_IsG_dash_AWAR); // ?G-AWAR
  _099(); // 099
  Push(pp_IsFUEL_dash_D); // ?FUEL-D
  _099(); // 099
}


// ================================================
// 0xdb52: WORD 'WDB54' codep=0x224c wordp=0xdb54 params=0 returns=0
// ================================================

void WDB54() // WDB54
{
  Push(pp_IsPORT); // ?PORT
  _099(); // 099
  Push(pp_WDA10); // WDA10
  _099(); // 099
  WD9B0(); // WD9B0
  WDA94(); // WDA94
  WDAA8(); // WDAA8
  ICLOSE(); // ICLOSE
  Push(0xc59a); // 'DEPART'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_WDA10); // WDA10
  _099(); // 099
}


// ================================================
// 0xdb7c: WORD 'WDB7E' codep=0x224c wordp=0xdb7e params=0 returns=0
// ================================================

void WDB7E() // WDB7E
{
  unsigned short int a;
  WDACA(); // WDACA
  Push(3);
  _st_(); // <
  Push(Pop() & (Read16(pp__n_AUX)==5?1:0)); //  #AUX @ 5 = AND
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WDA00)); // WDA00 @
  a = Pop(); // >R
  Push(Read16(pp_XABS)); // XABS @
  Push(0x0024);
  Push(a); // I
  _star__slash_(); // */
  Push(0xffdb);
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(Pop() + 0x0078); //  0x0078 +
  Push(Read16(pp_YABS)); // YABS @
  Push(0x0024);
  Push(a); // R>
  _star__slash_(); // */
  Push(0xffdd);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(Pop() + 0x00a1); //  0x00a1 +
  LXPLOT(); // LXPLOT
}


// ================================================
// 0xdbdc: WORD 'WDBDE' codep=0x7420 wordp=0xdbde
// ================================================
// orphan
IFieldType WDBDE = {ENCOUNTERIDX, 0x13, 0x01};

// ================================================
// 0xdbe1: WORD 'WDBE3' codep=0x7420 wordp=0xdbe3
// ================================================
IFieldType WDBE3 = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xdbe6: WORD 'WDBE8' codep=0x7420 wordp=0xdbe8
// ================================================
IFieldType WDBE8 = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xdbeb: WORD 'WDBED' codep=0x7420 wordp=0xdbed
// ================================================
IFieldType WDBED = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xdbf0: WORD 'WDBF2' codep=0x7420 wordp=0xdbf2
// ================================================
IFieldType WDBF2 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xdbf5: WORD 'WDBF7' codep=0x224c wordp=0xdbf7 params=0 returns=0
// ================================================

void WDBF7() // WDBF7
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x0019?1:0); //  0x0019 =
    if (Pop() != 0)
    {
      IDELETE(); // IDELETE
      Push(0);
    } else
    {
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    }
    IsNULL(); // ?NULL
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc23: WORD 'WDC25' codep=0x224c wordp=0xdc25 params=1 returns=1
// ================================================

void WDC25() // WDC25
{
  Push(Read16(pp__n_VESS)); // #VESS @
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(0xff88);
    Push(0x0078);
    RRND(); // RRND
  }
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xdc41: WORD 'WDC43' codep=0x224c wordp=0xdc43 params=0 returns=0
// ================================================

void WDC43() // WDC43
{
  Push(6);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(0);
    Push(0x07d0);
    RRND(); // RRND
    Push(0);
    Push(0x06e0);
    RRND(); // RRND
  } else
  {
    Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
    WDC25(); // WDC25
    Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
    WDC25(); // WDC25
  }
  WDA9E(); // WDA9E
}


// ================================================
// 0xdc6f: WORD 'WDC71' codep=0x224c wordp=0xdc71 params=0 returns=0
// ================================================

void WDC71() // WDC71
{
  WD9A0(); // WD9A0
  Push(((Read16(0x65e1+WDA4B.offset)&0xFF) & 7) * 0x01f4); // WDA4B<IFIELD> C@ 7 AND 0x01f4 *
  Push(0x65e1+WDA46.offset); // WDA46<IFIELD>
  Store_2(); // !_2
  Push(Read16(0x65e1+WDA50.offset)); // WDA50<IFIELD> @
  Push((Read16(0x65e1+WDA41.offset)&0xFF) & 7); // WDA41<IFIELD> C@ 7 AND
  Push(Read16(regsp)); // DUP
  Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
  _star__slash_(); // */
  Push(0x65e1+WDA41.offset); // WDA41<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdca5: WORD 'PS>C' codep=0x4b3b wordp=0xdcae
// ================================================

void PS_gt_C() // PS>C
{
  switch(Pop()) // PS>C
  {
  case 0:
    GetColor(GREY2);
    break;
  case 1:
    GetColor(VIOLET);
    break;
  case 2:
    GetColor(BLUE);
    break;
  case 3:
    GetColor(WHITE);
    break;
  case 4:
    GetColor(RED);
    break;
  default:
    GetColor(ORANGE);
    break;

  }
}

// ================================================
// 0xdcc6: WORD 'WDCC8' codep=0x224c wordp=0xdcc8 params=0 returns=0
// ================================================

void WDCC8() // WDCC8
{
  WDAE8(); // WDAE8
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  _gt_1ICONF(); // >1ICONF
  Push(8);
  Push(0x0030);
  Push(pp_YWLD_c_YP); // YWLD:YP
  StoreD(); // D!
  Push(8);
  Push(0x0020);
  Push(pp_XWLD_c_XP); // XWLD:XP
  StoreD(); // D!
  Push(pp_XLLDEST); // XLLDEST
  _099(); // 099
  Push(pp_YLLDEST); // YLLDEST
  _099(); // 099
}


// ================================================
// 0xdcf0: WORD 'WDCF2' codep=0x224c wordp=0xdcf2 params=0 returns=1
// ================================================

void WDCF2() // WDCF2
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL) - (Read16(0x65e1+WDBE8.offset)&0xFF)); // EDL @ WDBE8<IFIELD> C@ -
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(Pop() * 2 - 1); //  2* 1-
  SWAP(); // SWAP
  ABS(); // ABS
  Push(3);
  _slash_(); // /
  Push(5);
  MIN(); // MIN
  Push(Pop() * Pop()); // *
  Push(Pop() + (Read16(0x65e1+WDBE8.offset)&0xFF)); //  WDBE8<IFIELD> C@ +
  Push(0x0064);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(0x65e1+WDBE8.offset); // WDBE8<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdd2e: WORD 'WDD30' codep=0x224c wordp=0xdd30 params=0 returns=0
// ================================================

void WDD30() // WDD30
{
  Push(Read16(pp_Is5)); // ?5 @
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  WD9C0(); // WD9C0
  Push(8);
  _eq_SPECIE(); // =SPECIE
  Push(0x000b);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_Is5); // ?5
    _plus__ex__2(); // +!_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdd56: WORD 'WDD58' codep=0x224c wordp=0xdd58 params=0 returns=0
// ================================================

void WDD58() // WDD58
{
  GetINST_dash_S(); // @INST-S
  Push(3);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(3);
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(0x001e);
  MOD(); // MOD
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  StoreINST_dash_S(); // !INST-S
}


// ================================================
// 0xdd7c: WORD 'WDD7E' codep=0x224c wordp=0xdd7e params=0 returns=1
// ================================================

void WDD7E() // WDD7E
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() & Read16(pp_PAST)); //  PAST @ AND
  if (Pop() != 0)
  {
    Push(0x002c);
    Push(0xb76b); // 'OV?ART'
    MODULE(); // MODULE
  } else
  {
    Push(0x0016);
    _eq_SPECIE(); // =SPECIE
    Push(!Pop()); //  NOT
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xddac: WORD 'WDDAE' codep=0x224c wordp=0xddae params=0 returns=1
// ================================================

void WDDAE() // WDDAE
{
  Push(0xb79c); // 'RSTE'
  MODULE(); // MODULE
  Push(pp_IsUF); // ?UF
  _099(); // 099
  WD9C0(); // WD9C0
  WDA94(); // WDA94
  WDAA8(); // WDAA8
  Push(Read16(pp_WDA10)); // WDA10 @
  WDD7E(); // WDD7E
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_SKIP2NE); // SKIP2NE
  Store_2(); // !_2
  Push(pp_WD9FC); // WD9FC
  Store_2(); // !_2
  WDCF2(); // WDCF2
  WDBF7(); // WDBF7
  WDC43(); // WDC43
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(0x0016);
    ORGIA(); // ORGIA
    Get_gt_C_plus_S(); // @>C+S
    Push(0);
    Push(0x65e1+WDA8F.offset); // WDA8F<IFIELD>
    C_ex__2(); // C!_2
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
  Push(0xbf38); // '>HAIL'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  WDC71(); // WDC71
  Push(pp_NLR); // NLR
  _099(); // 099
  Push2Words("NULL");
  Push(pp_NTIME); // NTIME
  StoreD(); // D!
}


// ================================================
// 0xde12: WORD 'WDE14' codep=0x224c wordp=0xde14
// ================================================

void WDE14() // WDE14
{
  Push(pp_WDA14); // WDA14
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Push(0x3a48); // 'NOP'
    Push(pp_WDA26); // WDA26
    Store_2(); // !_2
  }
  WDD30(); // WDD30
  WDD58(); // WDD58
  Push(pp_AVCNT); // AVCNT
  _099(); // 099
  Push(0);
  Push(0x65e1+WDBE3.offset); // WDBE3<IFIELD>
  C_ex__2(); // C!_2
  WD9C0(); // WD9C0
  GetINST_dash_S(); // @INST-S
  ORGIA(); // ORGIA
  _1_dot_5_at_(); // 1.5@
  Push(pp__n_VESS); // #VESS
  _099(); // 099
  Push(pp_IsCALLIN); // ?CALLIN
  _099(); // 099
  Push(0xca44); // '+A-VESS'
  MODULE(); // MODULE
  Push(pp_IsCALLIN); // ?CALLIN
  ON_2(); // ON_2
  ICLOSE(); // ICLOSE
  Push(pp__h_CRIT); // ^CRIT
  _099(); // 099
  Push(1);
  Push(0xbed7); // 'OVINIT-_2'
  MODULE(); // MODULE
  Push(0xc83c); // 'C&C'
  MODULE(); // MODULE
}


// ================================================
// 0xde6c: WORD 'WDE6E' codep=0x224c wordp=0xde6e params=0 returns=0
// ================================================

void WDE6E() // WDE6E
{
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
  Push(Read16(pp_PAST)==0?1:0); // PAST @ 0=
  Push(pp_IsPORT); // ?PORT
  Store_2(); // !_2
  Push(2);
  WDADC(); // WDADC
  Push(2);
  Push(pp_HEADING); // HEADING
  Store_2(); // !_2
}


// ================================================
// 0xde88: WORD 'WDE8A' codep=0x224c wordp=0xde8a params=0 returns=0
// ================================================

void WDE8A() // WDE8A
{
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
  Push(2);
  WDADC(); // WDADC
  Push(2);
  Push(pp_HEADING); // HEADING
  Store_2(); // !_2
  Push2Words("NULL");
  WDAA8(); // WDAA8
}


// ================================================
// 0xde9e: WORD 'WDEA0' codep=0x224c wordp=0xdea0
// ================================================

void WDEA0() // WDEA0
{
  WD9B8(); // WD9B8
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(0x0018);
  GetINST_dash_S(); // @INST-S
  IOPEN(); // IOPEN
  Push(1);
  _star_CREATE(); // *CREATE
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push2Words("NULL");
  WDA9E(); // WDA9E
  WD9C8(); // WD9C8
}


// ================================================
// 0xdebe: WORD 'WDEC0' codep=0x224c wordp=0xdec0
// ================================================

void WDEC0() // WDEC0
{
  WD9B8(); // WD9B8
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  WD9C8(); // WD9C8
}


// ================================================
// 0xded6: WORD 'WDED8' codep=0x224c wordp=0xded8 params=0 returns=0
// ================================================

void WDED8() // WDED8
{
  Push(0xc9a3); // 'ORB>'
  MODULE(); // MODULE
}


// ================================================
// 0xdee0: WORD 'WDEE2' codep=0x224c wordp=0xdee2 params=0 returns=0
// ================================================

void WDEE2() // WDEE2
{
  Push(0xc9b2); // '>ORB'
  MODULE(); // MODULE
}


// ================================================
// 0xdeea: WORD 'WDEEC' codep=0x224c wordp=0xdeec params=0 returns=2
// ================================================
// orphan

void WDEEC() // WDEEC
{
  WD9B8(); // WD9B8
  WDA94(); // WDA94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdef4: WORD 'WDEF6' codep=0x224c wordp=0xdef6 params=0 returns=0
// ================================================

void WDEF6() // WDEF6
{
  Push(Read16(cc_WD9E4) - 5); // WD9E4 5 -
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  RRND(); // RRND
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  RRND(); // RRND
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xdf12: WORD 'WDF14' codep=0x224c wordp=0xdf14 params=0 returns=0
// ================================================

void WDF14() // WDF14
{
  unsigned short int a;
  Push(Read16(0x65e1+INST_dash_QT.offset) * 4 + 2); // INST-QT<IFIELD> @ 4 * 2+
  a = Pop(); // >R
  Push(-a); // I NEGATE
  Push(a + 1); // I 1+
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_WD9E4)); // WD9E4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  Push(a * a); // I R> *
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0);
  SQRT(); // SQRT
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() * 2 - 1); //  2* 1-
  Push(Pop() * Pop()); // *
  Push(Read16(cc_WD9E4)); // WD9E4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xdf64: WORD 'WDF66' codep=0x224c wordp=0xdf66 params=0 returns=0
// ================================================

void WDF66() // WDF66
{
  IOPEN(); // IOPEN
  WDB00(); // WDB00
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    WDF14(); // WDF14
    return;
  }
  Push2Words("NULL");
  WDA9E(); // WDA9E
}


// ================================================
// 0xdf7c: WORD '>XY' codep=0x4b3b wordp=0xdf84
// ================================================

void _gt_XY() // >XY
{
  switch(Pop()) // >XY
  {
  case 11:
    WDF66(); // WDF66
    break;
  case 61:
    WDEF6(); // WDEF6
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xdf90: WORD 'WDF92' codep=0x224c wordp=0xdf92 params=0 returns=0
// ================================================

void WDF92() // WDF92
{
  WD9B8(); // WD9B8
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      GetINST_dash_C(); // @INST-C
      _gt_XY(); // >XY case
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdfae: WORD 'SC>C' codep=0x4b3b wordp=0xdfb7
// ================================================

void SC_gt_C() // SC>C
{
  switch(Pop()) // SC>C
  {
  case 77:
    GetColor(RED);
    break;
  case 75:
    GetColor(ORANGE);
    break;
  case 71:
    GetColor(YELLOW);
    break;
  case 70:
    GetColor(WHITE);
    break;
  case 65:
    GetColor(GREEN);
    break;
  case 66:
    GetColor(BLUE);
    break;
  default:
    GetColor(LT_dash_BLUE);
    break;

  }
}

// ================================================
// 0xdfd3: WORD 'WDFD5' codep=0x224c wordp=0xdfd5
// ================================================

void WDFD5() // WDFD5
{
  SC_gt_C(); // SC>C case
  StoreCOLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(3);
  FILLCIR(); // FILLCIR
}


// ================================================
// 0xdfe7: WORD 'WDFE9' codep=0x224c wordp=0xdfe9
// ================================================

void WDFE9() // WDFE9
{
  do
  {
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x000b?1:0); //  0x000b =
    IOPEN(); // IOPEN
    WDB00(); // WDB00
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      LoadData(WDA73); // from 'PLANET'
      Push(Read16(Pop())&0xFF); //  C@
      PS_gt_C(); // PS>C case
      StoreCOLOR(); // !COLOR
    }
    ICLOSE(); // ICLOSE
    Push(Read16(regsp)); // DUP
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
      Push(Pop() | Pop()); // OR
    } else
    {
      Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(0x0024);
      Push(Read16(cc_WD9E4)); // WD9E4
      _star__slash_(); // */
      Push(Pop() + 0x0078); //  0x0078 +
      Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      Push(0x0024);
      Push(Read16(cc_WD9E4)); // WD9E4
      _star__slash_(); // */
      Push(Pop() + 0x00a1); //  0x00a1 +
      Push(2);
      FILLCIR(); // FILLCIR
      INEXT(); // INEXT
    }
  } while(Pop() == 0);
}


// ================================================
// 0xe049: WORD '.AUXSYS' codep=0x224c wordp=0xe055 params=0 returns=0
// ================================================
// entry

void DrawAUXSYS() // .AUXSYS
{
  unsigned short int i, imax;
  Push(Read16(pp_CONTEXT_3)==2?1:0); // CONTEXT_3 @ 2 =
  if (Pop() == 0) return;
  _gt_DISPLA(); // >DISPLA
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
  Push(5);
  Push(pp__n_AUX); // #AUX
  Store_2(); // !_2
  WD9B8(); // WD9B8
  GetINST_dash_S(); // @INST-S
  WDFD5(); // WDFD5
  Push(Read16(0x65e1+WDA6E.offset)&0xFF); // WDA6E<IFIELD> C@
  IOPEN(); // IOPEN

  i = 1;
  imax = 9;
  do // (DO)
  {
    Push(i); // I
    BIT(); // BIT
    OVER(); // OVER
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GetColor(GREY1);
      StoreCOLOR(); // !COLOR
      Push(0x0078);
      Push(0x00a1);
      Push(i * 4 + 1); // I 4 * 1+
      Push(1);
      Push(1);
      DrawELLIPS(); // .ELLIPS
      WDFE9(); // WDFE9
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  IFIRST(); // IFIRST
  WD9C8(); // WD9C8
  WDB7E(); // WDB7E
}


// ================================================
// 0xe0b5: WORD 'WE0B7' codep=0x224c wordp=0xe0b7
// ================================================

void WE0B7() // WE0B7
{
  Push(Read16(pp_WDA2E)); // WDA2E @
  Push(pp_IsNEB); // ?NEB
  Store_2(); // !_2
  Push(pp_WDA14); // WDA14
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xe055); // '.AUXSYS'
  Push(pp_WDA26); // WDA26
  Store_2(); // !_2
  WDEA0(); // WDEA0
  WDEE2(); // WDEE2
  WDF92(); // WDF92
}


// ================================================
// 0xe0d7: WORD 'WE0D9' codep=0x224c wordp=0xe0d9
// ================================================

void WE0D9() // WE0D9
{
  WD9B8(); // WD9B8
  WDA94(); // WDA94
  WDAA8(); // WDAA8
  ICLOSE(); // ICLOSE
  WDED8(); // WDED8
  WDEC0(); // WDEC0
  Push2Words("NULL");
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xc090); // 'OV/STA'
  MODULE(); // MODULE
  Push(0x3a48); // 'NOP'
  Push(pp_WDA26); // WDA26
  Store_2(); // !_2
}


// ================================================
// 0xe0fb: WORD 'WE0FD' codep=0x224c wordp=0xe0fd params=1 returns=2
// ================================================
// orphan

void WE0FD() // WE0FD
{
  Push(0);
  OVER(); // OVER
  Push(3);
  Push(2);
  _star__slash_(); // */
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  Push(2);
  Push(3);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0);
  SQRT(); // SQRT
  Push(0);
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  SWAP(); // SWAP
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe147: WORD 'WE149' codep=0x224c wordp=0xe149 params=0 returns=1
// ================================================

void WE149() // WE149
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe155: WORD 'WE157' codep=0x224c wordp=0xe157 params=0 returns=0
// ================================================

void WE157() // WE157
{
  Push(Read16(pp_WDA04)); // WDA04 @
  while(1)
  {
    Push(Read16(pp_CXSP)); // CXSP @
    OVER(); // OVER
    U_st_(); // U<
    if (Pop() == 0) break;

    ICLOSE(); // ICLOSE
  }
  Pop(); // DROP
}


// ================================================
// 0xe171: WORD 'WE173' codep=0x224c wordp=0xe173 params=0 returns=0
// ================================================
// orphan

void WE173() // WE173
{
  Push(pp__ro_SHIPBO); // (SHIPBO
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe179: WORD 'WE17B' codep=0x224c wordp=0xe17b params=0 returns=0
// ================================================

void WE17B() // WE17B
{
  Push(Read16(pp_CXSP)); // CXSP @
  Push(pp_WDA04); // WDA04
  Store_2(); // !_2
}


// ================================================
// 0xe185: WORD 'RADII' codep=0x4b3b wordp=0xe18f
// ================================================

void RADII() // RADII
{
  switch(Pop()) // RADII
  {
  case 1:
    Push(Read16(cc_WD9DC)); // WD9DC
    break;
  case 2:
    Push(Read16(cc_WD9E4)); // WD9E4
    break;
  case 4:
    Push(Read16(cc_WD9E0)); // WD9E0
    break;
  case 5:
    Push(Read16(cc_WD9D4)); // WD9D4
    break;
  default:
    Push(Read16(cc_WD9D8)); // WD9D8
    break;

  }
}

// ================================================
// 0xe1a3: WORD 'IVAR' codep=0x4b3b wordp=0xe1ac
// ================================================

void IVAR() // IVAR
{
  switch(Pop()) // IVAR
  {
  case 0:
    Push(pp__ro_PLANET); // (PLANET
    break;
  case 1:
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    break;
  case 2:
    Push(pp__ro_SYSTEM); // (SYSTEM
    break;
  case 4:
    Push(pp__ro_ENCOUN); // (ENCOUN
    break;
  default:
    Push(pp__ro_SHIPBO); // (SHIPBO
    break;

  }
}

// ================================================
// 0xe1c0: WORD 'WE1C2' codep=0x224c wordp=0xe1c2
// ================================================

void WE1C2() // WE1C2
{
  unsigned short int a, b;
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_S(); // @INST-S
  GetINST_dash_C(); // @INST-C
  CONTEXT_2(); // CONTEXT_2
  Push(Read16(regsp)); // DUP
  RADII(); // RADII case
  a = Pop(); // >R
  b = Pop(); // >R
  Push(b); // I
  IVAR(); // IVAR case
  Push(b); // R>
  Push(a); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe1e0: WORD 'WE1E2' codep=0x224c wordp=0xe1e2 params=5 returns=0
// ================================================

void WE1E2() // WE1E2
{
  unsigned short int a;
  Push(pp_WDA00); // WDA00
  Store_2(); // !_2
  Push(pp_CONTEXT_3); // CONTEXT_3
  Store_2(); // !_2
  a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(a); // R>
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp__ro_SHIPBO); // (SHIPBO
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe1f8: WORD 'WE1FA' codep=0x224c wordp=0xe1fa params=0 returns=2
// ================================================

void WE1FA() // WE1FA
{
  WDAB4(); // WDAB4
}


// ================================================
// 0xe1fe: WORD 'WE200' codep=0x224c wordp=0xe200 params=0 returns=2
// ================================================

void WE200() // WE200
{
  WD9B8(); // WD9B8
  WDA94(); // WDA94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe208: WORD 'WE20A' codep=0x224c wordp=0xe20a params=0 returns=2
// ================================================

void WE20A() // WE20A
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WE200(); // WE200
    return;
  }
  WD9C0(); // WD9C0
  WDA94(); // WDA94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe222: WORD 'XYCASE' codep=0x4b3b wordp=0xe22d
// ================================================

void XYCASE() // XYCASE
{
  switch(Pop()) // XYCASE
  {
  case 3:
    WE1FA(); // WE1FA
    break;
  case 4:
    WE20A(); // WE20A
    break;
  default:
    WE200(); // WE200
    break;

  }
}

// ================================================
// 0xe239: WORD 'WE23B' codep=0x224c wordp=0xe23b
// ================================================

void WE23B() // WE23B
{
  _gt_DISPLA(); // >DISPLA
  Push(3);
  GetColor(GREY1);
  Push(0x00c6);
  Push(0x0016);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(3);
  GetColor(GREY1);
  Push(0x00c6);
  Push(0x0030);
  POS_dot_PXT(); // POS.PXT
  GetColor(WHITE);
  GetColor(BLACK);
  GetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  WE149(); // WE149
  _gt_1FONT(); // >1FONT
  if (Pop() != 0)
  {
    WDACA(); // WDACA
    XYCASE(); // XYCASE case
  } else
  {
    Push(0);
    Push(0x06dd); // 'R/W'
    RRND(); // RRND
    Push(0);
    Push(0x07cd);
    RRND(); // RRND
  }
  Push(Pop() + 3); //  3 +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  SWAP(); // SWAP
  Push(Pop() + 3); //  3 +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x0030);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Draw(); // .
}


// ================================================
// 0xe2ab: WORD 'WE2AD' codep=0x2214 wordp=0xe2ad
// ================================================
// 0xe2ad: dw 0x0048

// ================================================
// 0xe2af: WORD 'WE2B1' codep=0x2214 wordp=0xe2b1
// ================================================
// 0xe2b1: dw 0x0078

// ================================================
// 0xe2b3: WORD 'WE2B5' codep=0x2214 wordp=0xe2b5
// ================================================
// 0xe2b5: dw 0x00ff

// ================================================
// 0xe2b7: WORD 'WE2B9' codep=0x2214 wordp=0xe2b9
// ================================================
// 0xe2b9: dw 0x00ff

// ================================================
// 0xe2bb: WORD 'WE2BD' codep=0x1d29 wordp=0xe2bd
// ================================================
// 0xe2bd: db 0x44 0x7f 0xf5 0x87 0xa5 0xc0 0x3c 0xd2 0xa5 0x57 0xf2 0x7d 0x78 0xa7 0xed 0x0c 0x90 0x55 0x41 0x41 0xa3 0x43 0x40 0x22 'D    <  W }x    UAA C@"'

// ================================================
// 0xe2d5: WORD 'WE2D7' codep=0x224c wordp=0xe2d7 params=0 returns=0
// ================================================

void WE2D7() // WE2D7
{
  unsigned short int i, imax;

  i = pp_WE2BD; // WE2BD
  imax = pp_WE2BD + 0x0018; // WE2BD 0x0018 +
  do // (DO)
  {
    Push(0);
    Push(Read16(cc_WE2B5)); // WE2B5
    RRND(); // RRND
    Push(i); // I
    C_ex__2(); // C!_2
    Push(0);
    Push(Read16(cc_WE2B9)); // WE2B9
    RRND(); // RRND
    Push(i + 1); // I 1+
    C_ex__2(); // C!_2
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe301: WORD 'WE303' codep=0x224c wordp=0xe303 params=2 returns=2
// ================================================

void WE303() // WE303
{
  Push(Read16(cc_WE2B9)); // WE2B9
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_WE2B1)); // WE2B1
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(cc_WE2B5)); // WE2B5
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_WE2AD)); // WE2AD
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xe325: WORD 'WE327' codep=0x224c wordp=0xe327 params=2 returns=0
// ================================================

void WE327() // WE327
{
  unsigned short int a;
  Push(Read16(pp_XABS) + 0x01f4); // XABS @ 0x01f4 +
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(Read16(pp_YABS) + 0x01f4); // YABS @ 0x01f4 +
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
  WE303(); // WE303
  _2DUP(); // 2DUP
  Push(Pop() * Pop()); // *
  if (Pop() != 0)
  {
    Push(-(Pop() - Read16(cc_WE2B1))); //  WE2B1 - NEGATE
    SWAP(); // SWAP
    Push(-(Pop() - Read16(cc_WE2AD))); //  WE2AD - NEGATE
    SWAP(); // SWAP
    LPLOT(); // LPLOT
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe379: WORD 'WE37B' codep=0x224c wordp=0xe37b
// ================================================

void WE37B() // WE37B
{
  unsigned short int i, imax;
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR

  i = pp_WE2BD; // WE2BD
  imax = pp_WE2BD + 0x0021; // WE2BD 0x0021 +
  do // (DO)
  {
    Push(Read16(i)&0xFF); // I C@
    Push(Read16(i + 1)&0xFF); // I 1+ C@
    WE327(); // WE327
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe39f: WORD '.MVS' codep=0x224c wordp=0xe3a8 params=0 returns=0
// ================================================
// entry

void DrawMVS() // .MVS
{
  WDAE8(); // WDAE8
  WDACA(); // WDACA
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  _gt_MAINVI(); // >MAINVI
  Push(Read16(pp_IsNEB)); // ?NEB @
  WDACA(); // WDACA
  Push(Pop()==2?1:0); //  2 =
  Push(Pop() & Pop()); // AND
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
  WDACA(); // WDACA
  Push(2);
  Push(4);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    WE37B(); // WE37B
  }
  ORGLIST(); // ORGLIST
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe3f4: WORD 'WE3F6' codep=0x224c wordp=0xe3f6
// ================================================
// orphan

void WE3F6() // WE3F6
{
  unsigned short int i, imax;
  GetCRS(); // @CRS
  GetIX(); // @IX
  GetIY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(1);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(1);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  IsVCLIP(); // ?VCLIP
  Push(Read16(pp_WDA22)); // WDA22 @
  Push(0x0096);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(pp_WDA22) - 0x0096); // WDA22 @ 0x0096 -
    Push(6);
    Push(0x0064);
    _star__slash_(); // */

    i = 0;
    imax = Pop() + 1; //  1+
    do // (DO)
    {
      _2DUP(); // 2DUP
      Push(0x000f);
      WE0FD(); // WE0FD
      ROT(); // ROT
      Push(Pop() + Pop()); // +
      Push(pp_YBLT); // YBLT
      Store_2(); // !_2
      Push(Pop() + Pop()); // +
      Push(pp_XBLT); // XBLT
      Store_2(); // !_2
      BLT(); // BLT
      i++;
    } while(i<imax); // (LOOP)

  }
  Pop(); Pop(); // 2DROP
  StoreCRS(); // !CRS
}


// ================================================
// 0xe464: WORD 'WE466' codep=0x224c wordp=0xe466 params=3 returns=3
// ================================================

void WE466() // WE466
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(!(((c==Read16(pp_HEADING)?1:0) & (b==Read16(pp_XABS)?1:0)) & (a==Read16(pp_YABS)?1:0))); // I HEADING @ = I' XABS @ = AND J YABS @ = AND NOT
  _gt_V(); // >V
  Push(c); // R>
  Push(b); // R>
  Push(a); // R>
  V_gt_(); // V>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Pop(); Pop(); // 2DROP
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe4a4: WORD 'WE4A6' codep=0x224c wordp=0xe4a6
// ================================================

void WE4A6() // WE4A6
{
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  Store_2(); // !_2
  Push(pp_XABS); // XABS
  Store_2(); // !_2
  _2DUP(); // 2DUP
  WDAD2(); // WDAD2
  _2DUP(); // 2DUP
  Push2Words("*SHIP");
  IsICON_eq_I(); // ?ICON=I
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  }
  POINT_gt_I(); // POINT>I
  StoreIY(); // !IY
  StoreIX(); // !IX
  WDAE8(); // WDAE8
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    Push(Pop() - Read16(cc_WD9F0)); //  WD9F0 -
    SWAP(); // SWAP
    Push(Pop() - Read16(cc_WD9F4)); //  WD9F4 -
    SWAP(); // SWAP
    _2SWAP(); // 2SWAP
    Push(Pop() + Read16(cc_WD9E8)); //  WD9E8 +
    SWAP(); // SWAP
    Push(Pop() + Read16(cc_WD9EC)); //  WD9EC +
    SWAP(); // SWAP
    StoreVISWIN(); // !VISWIN
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  WDB1C(); // WDB1C
  if (Pop() != 0)
  {
    WE23B(); // WE23B
  }
  Push(Read16(regsp)); // DUP
  Push(pp_HEADING); // HEADING
  Store_2(); // !_2
  Push(Read16(regsp)); // DUP
  WDADC(); // WDADC
  Push(Pop() + 0x001b); //  0x001b +
  StoreID(); // !ID
}


// ================================================
// 0xe514: WORD 'WE516' codep=0x224c wordp=0xe516 params=3 returns=2
// ================================================

void WE516() // WE516
{
  WE466(); // WE466
  if (Pop() == 0) return;
  WDB7E(); // WDB7E
  WE4A6(); // WE4A6
  WDB7E(); // WDB7E
}


// ================================================
// 0xe524: WORD 'WE526' codep=0x224c wordp=0xe526 params=2 returns=1
// ================================================

void WE526() // WE526
{
  SWAP(); // SWAP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0064);
    SWAP(); // SWAP
    _star__slash_(); // */
    Push(1);
    return;
  }
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe542: WORD 'WE544' codep=0x224c wordp=0xe544 params=4 returns=2
// ================================================

void WE544() // WE544
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  a = Pop(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  Push(a); // R>
}


// ================================================
// 0xe552: WORD 'WE554' codep=0x224c wordp=0xe554 params=2 returns=1
// ================================================

void WE554() // WE554
{
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(3);
  } else
  {
    Push(0x000c);
  }
  SWAP(); // SWAP
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(9);
  } else
  {
    Push(6);
  }
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(Pop() & 8); //  8 AND
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() & 4); //  4 AND
  if (Pop() == 0) return;
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe5a2: WORD 'WE5A4' codep=0x224c wordp=0xe5a4 params=4 returns=1
// ================================================

void WE5A4() // WE5A4
{
  unsigned short int a;
  WE544(); // WE544
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    WE554(); // WE554
    a = Pop(); // >R
    Push(!(a & 1)); // I 1 AND NOT
    if (Pop() != 0)
    {
      SWAP(); // SWAP
    }
    ABS(); // ABS
    SWAP(); // SWAP
    ABS(); // ABS
    SWAP(); // SWAP
    WE526(); // WE526
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(0x0029);
      _st_(); // <
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(0);
      } else
      {
        Push(0x00f1);
        _gt_(); // >
        if (Pop() != 0)
        {
          Push(2);
        } else
        {
          Push(1);
        }
      }
    } else
    {
      Push(2);
    }
    Push(Pop() + (a - 1) * 2); //  R> 1- 2* +
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_HEADING)); // HEADING @
}


// ================================================
// 0xe612: WORD 'WE614' codep=0x1d29 wordp=0xe614
// ================================================
// 0xe614: db 0x01 0x00 0x01 0x01 0x00 0x01 0xff 0x01 0xff 0x00 0xff 0xff 0x00 0xff 0x01 0xff '                '

// ================================================
// 0xe624: WORD 'WE626' codep=0x224c wordp=0xe626 params=1 returns=2
// ================================================

void WE626() // WE626
{
  Push(Pop() * 2 + pp_WE614); //  2* WE614 +
  Push(Read16(regsp)); // DUP
  _plus__dash__at_(); // +-@
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  _plus__dash__at_(); // +-@
}


// ================================================
// 0xe638: WORD 'WE63A' codep=0x224c wordp=0xe63a params=2 returns=2
// ================================================

void WE63A() // WE63A
{
  unsigned short int a, b;
  WE626(); // WE626
  a = Pop(); // >R
  b = Pop(); // >R
  Push(Pop() - 1); //  1-
  Push(b); // R>
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(-Pop()); //  NEGATE
  SWAP(); // SWAP
  Push(-(Pop() * a)); //  R> * NEGATE
}


// ================================================
// 0xe654: WORD 'WE656' codep=0x224c wordp=0xe656 params=4 returns=2
// ================================================

void WE656() // WE656
{
  unsigned short int a, b;
  a = Pop(); // >R
  WE626(); // WE626
  Push(Pop() * a); //  I *
  SWAP(); // SWAP
  Push(Pop() * a); //  R> *
  SWAP(); // SWAP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  b = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(b); // R>
}


// ================================================
// 0xe672: WORD 'WE674' codep=0x224c wordp=0xe674 params=4 returns=1
// ================================================

void WE674() // WE674
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
  Push(Pop() + a); //  R> +
  Push(0);
  SQRT(); // SQRT
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe698: WORD 'WE69A' codep=0x224c wordp=0xe69a params=0 returns=1
// ================================================

void WE69A() // WE69A
{
  WDAB4(); // WDAB4
  Push(Read16(pp_WDA1A)); // WDA1A @
  Push(Read16(pp_WDA1E)); // WDA1E @
  WE674(); // WE674
  Push(Read16(cc_WD9F8)); // WD9F8
  MIN(); // MIN
}


// ================================================
// 0xe6ac: WORD 'WE6AE' codep=0x224c wordp=0xe6ae params=0 returns=3
// ================================================

void WE6AE() // WE6AE
{
  unsigned short int a;
  WDAB4(); // WDAB4
  _2DUP(); // 2DUP
  Push(Read16(pp_WDA1A)); // WDA1A @
  Push(Read16(pp_WDA1E)); // WDA1E @
  WE5A4(); // WE5A4
  Push(Read16(regsp)); // DUP
  Push(Pop()==8?1:0); //  8 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_HEADING)); // HEADING @
  }
  a = Pop(); // >R
  Push(a); // I
  WE69A(); // WE69A
  WE656(); // WE656
  Push(a); // R>
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xe6dc: WORD 'WE6DE' codep=0x224c wordp=0xe6de params=6 returns=1
// ================================================

void WE6DE() // WE6DE
{
  unsigned short int a;
  Push(6);
  PICK(); // PICK
  Push(6);
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  a = Pop(); // >R
  D_st_(); // D<
  Push(!Pop() & a); //  NOT R> AND
}


// ================================================
// 0xe6f6: WORD 'WE6F8' codep=0x224c wordp=0xe6f8 params=0 returns=2
// ================================================

void WE6F8() // WE6F8
{
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x01f4);
  OVER(); // OVER
  _slash_(); // /
  Push(Pop() * 4); //  4 *
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  WE6DE(); // WE6DE
  if (Pop() != 0)
  {
    Push(3);
    Push(0xc976); // '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x0096);
  OVER(); // OVER
  _slash_(); // /
  _4_star_(); // 4*
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  WE6DE(); // WE6DE
  if (Pop() != 0)
  {
    Push(2);
    Push(0xc976); // '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp_IsAUTO); // ?AUTO
  ON_2(); // ON_2
  Push(1);
  Push(0xc976); // '.EX'
  MODULE(); // MODULE
  Push(Read16(pp_IsSUP)); // ?SUP @
  if (Pop() == 0) return;
  Push(0xc636); // 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xe7ae: WORD 'WE7B0' codep=0x224c wordp=0xe7b0 params=0 returns=0
// ================================================

void WE7B0() // WE7B0
{
  WDB1C(); // WDB1C
  Push(Pop() & !Read16(pp_IsAUTO)); //  ?AUTO @ NOT AND
  if (Pop() == 0) return;
  WE6F8(); // WE6F8
}


// ================================================
// 0xe7c2: WORD 'USE-E' codep=0x224c wordp=0xe7cc
// ================================================
// entry

void USE_dash_E() // USE-E
{
  Push(Read16(pp__dash_END)); // -END @
  Push(0x000a);
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  WE6F8(); // WE6F8
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  WD9A0(); // WD9A0
  Push(1);
  Push(0x65e1+WDA55.offset); // WDA55<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset) - 1); // INST-QT<IFIELD> @ 1-
      Push(0);
      MAX(); // MAX
      Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
      Store_2(); // !_2
    }
    CDROP(); // CDROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe820: WORD 'WE822' codep=0x224c wordp=0xe822
// ================================================

void WE822() // WE822
{
  SWAP(); // SWAP
  Push(Pop() * 2); //  2*
  SWAP(); // SWAP
  L_at_PIXEL(); // L@PIXEL
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    Push(2);
  } else
  {
    GetColor(DK_dash_GREE);
  }
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe83c: WORD 'WE83E' codep=0x224c wordp=0xe83e
// ================================================

void WE83E() // WE83E
{
  Push(0x0022);
  Push(0x0089);
  WE822(); // WE822
  Push(0x002c);
  Push(0x0089);
  WE822(); // WE822
  Push(Pop() + Pop()); // +
  Push(0x0022);
  Push(0x007f);
  WE822(); // WE822
  Push(Pop() + Pop()); // +
  Push(0x002c);
  Push(0x007f);
  WE822(); // WE822
  Push(Pop() + Pop()); // +
  Push(2);
  _gt_(); // >
}


// ================================================
// 0xe872: WORD 'WE874' codep=0x224c wordp=0xe874 params=0 returns=1
// ================================================

void WE874() // WE874
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIM); // ENC-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe880: WORD 'WE882' codep=0x224c wordp=0xe882 params=0 returns=2
// ================================================

void WE882() // WE882
{
  Push(6);
  Push(Read16(pp__n_VESS)); // #VESS @
  Push(1);
  MAX(); // MAX
  _slash_(); // /
  Push(2);
  MAX(); // MAX
}


// ================================================
// 0xe894: WORD 'WE896' codep=0x2214 wordp=0xe896
// ================================================
// 0xe896: dw 0x000c

// ================================================
// 0xe898: WORD 'CSPEED' codep=0x4b3b wordp=0xe8a3
// ================================================

void CSPEED() // CSPEED
{
  switch(Pop()) // CSPEED
  {
  case 3:
    Push(1);
    break;
  case 4:
    WE882(); // WE882
    break;
  default:
    Push(Read16(cc_WE896)); // WE896
    break;

  }
}

// ================================================
// 0xe8af: WORD '#ACC' codep=0x1d29 wordp=0xe8b8
// ================================================
// 0xe8b8: db 0x00 0x00 '  '

// ================================================
// 0xe8ba: WORD 'KEYINC' codep=0x1d29 wordp=0xe8c5
// ================================================
// 0xe8c5: db 0x00 0x00 '  '

// ================================================
// 0xe8c7: WORD 'WE8C9' codep=0x224c wordp=0xe8c9
// ================================================

void WE8C9() // WE8C9
{
  Push(pp_KEYINC); // KEYINC
  _099(); // 099
  Push(pp__n_ACC); // #ACC
  _099(); // 099
  WDACA(); // WDACA
  CSPEED(); // CSPEED case
  Push(0xd9f8); // 'WD9F8'
  Store_2(); // !_2
}


// ================================================
// 0xe8dd: WORD 'WE8DF' codep=0x224c wordp=0xe8df
// ================================================

void WE8DF() // WE8DF
{
  WD9A0(); // WD9A0
  Push(Read16(0x65e1+WDA32.offset) * 5); // WDA32<IFIELD> @ 5 *
  Push(Read16(0x65e1+WDA3C.offset)&0xFF); // WDA3C<IFIELD> C@
  Push(0x0064);
  _star__slash_(); // */
  Push(2);
  MAX(); // MAX
  Push(pp_WDA2A); // WDA2A
  Store_2(); // !_2
  WE8C9(); // WE8C9
  ICLOSE(); // ICLOSE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe903: WORD 'WE905' codep=0x224c wordp=0xe905 params=0 returns=0
// ================================================

void WE905() // WE905
{
  Push(Read16(pp__n_ACC)); // #ACC @
  Push(1);
  _st_(); // <
  WDAE8(); // WDAE8
  Push(!Pop()); //  NOT
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(Read16(pp_KEYINC) + 1); // KEYINC @ 1+
    Push(Read16(cc_WD9F8)); // WD9F8
    MIN(); // MIN
    Push(pp_KEYINC); // KEYINC
    Store_2(); // !_2
    Push(0x0060);
    Push(Read16(pp_WDA2A)); // WDA2A @
    _slash_(); // /
    Push(pp__n_ACC); // #ACC
    Store_2(); // !_2
    return;
  }
  Push(-1);
  Push(pp__n_ACC); // #ACC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe93f: WORD 'WE941' codep=0x224c wordp=0xe941 params=0 returns=1
// ================================================

void WE941() // WE941
{
  Push(1);
  Push(pp_KEYINC); // KEYINC
  Store_2(); // !_2
  Push(0x0060);
  Push(Read16(pp_WDA2A)); // WDA2A @
  _slash_(); // /
  Push(pp__n_ACC); // #ACC
  Store_2(); // !_2
}


// ================================================
// 0xe957: WORD 'WE959' codep=0x224c wordp=0xe959 params=0 returns=0
// ================================================

void WE959() // WE959
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x00fa - Read16(pp_WDA22)); // 0x00fa WDA22 @ -
  Push(0x01f4);
  U_star_(); // U*
  D_plus_(); // D+
  Push(pp_NAV_dash_TIM); // NAV-TIM
  StoreD(); // D!
}


// ================================================
// 0xe975: WORD 'WE977' codep=0x224c wordp=0xe977 params=0 returns=1
// ================================================

void WE977() // WE977
{
  Push(Read16(cc_WD9D0)); // WD9D0
  Push(5);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(cc_TRUE)); // TRUE
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xe98b: WORD 'WE98D' codep=0x224c wordp=0xe98d
// ================================================

void WE98D() // WE98D
{
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe99d: WORD '?~C' codep=0x4b3b wordp=0xe9a5
// ================================================

void Is_t_C() // ?~C
{
  switch(Pop()) // ?~C
  {
  case 11:
    WE98D(); // WE98D
    break;
  case 18:
    WE977(); // WE977
    break;
  case 23:
    WE977(); // WE977
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe9b5: WORD 'WE9B7' codep=0x224c wordp=0xe9b7 params=0 returns=0
// ================================================

void WE9B7() // WE9B7
{
  Push(Read16(0x65e1+WDA8A.offset)&0xFF); // WDA8A<IFIELD> C@
  if (Pop() == 0) return;
  CI(); // CI
  Push(Pop() | Pop()); // OR
  Push(Pop() & Read16(pp_STARDAT)); //  STARDAT @ AND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe9cf: WORD 'NEST-SE' codep=0x4b3b wordp=0xe9db
// ================================================

void NEST_dash_SE() // NEST-SE
{
  switch(Pop()) // NEST-SE
  {
  case 1:
    WDB26(); // WDB26
    break;
  case 2:
    WE0B7(); // WE0B7
    break;
  case 4:
    WDE14(); // WDE14
    break;
  case 5:
    WDE6E(); // WDE6E
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe9ef: WORD 'WE9F1' codep=0x224c wordp=0xe9f1 params=1 returns=0
// ================================================

void WE9F1() // WE9F1
{
  unsigned short int a, b;
  Push(!(Pop()==1?1:0)); //  1 = NOT
  if (Pop() == 0) return;
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(pp_WDA00)); // WDA00 @
  OVER(); // OVER
  WE63A(); // WE63A
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  WE516(); // WE516
  Push(b); // R>
  Push(a); // R>
  Push(pp_WDA1E); // WDA1E
  Store_2(); // !_2
  Push(pp_WDA1A); // WDA1A
  Store_2(); // !_2
}


// ================================================
// 0xea1d: WORD 'NEST' codep=0x224c wordp=0xea26
// ================================================

void NEST() // NEST
{
  Push(pp_WD9FC); // WD9FC
  _099(); // 099
  Push(pp__ro_SHIPBO); // (SHIPBO
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  WD9A0(); // WD9A0
  IEXTRAC(); // IEXTRAC
  WE157(); // WE157
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  IINSERT(); // IINSERT
  WE17B(); // WE17B
  CI(); // CI
  WE1C2(); // WE1C2
  WE1E2(); // WE1E2
  WDACA(); // WDACA
  Push(Read16(regsp)); // DUP
  Push(0xc968); // 'NSM'
  MODULE(); // MODULE
  Push(Read16(regsp)); // DUP
  WE9F1(); // WE9F1
  Push(Read16(regsp)); // DUP
  NEST_dash_SE(); // NEST-SE case
  Push(Read16(regsp)); // DUP
  Push(0xc994); // 'D-UP'
  MODULE(); // MODULE
  WD996(); // WD996
  WDCC8(); // WDCC8
  WE2D7(); // WE2D7
  Push(0xc95a); // 'NFM'
  MODULE(); // MODULE
  WDACA(); // WDACA
  Push(!(Pop()==5?1:0)); //  5 = NOT
  if (Pop() != 0)
  {
    DrawMVS(); // .MVS
  }
  WE23B(); // WE23B
  Push2Words("NULL");
  Push(pp_WDA14); // WDA14
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  WE8DF(); // WE8DF
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
}


// ================================================
// 0xea92: WORD 'WEA94' codep=0x224c wordp=0xea94 params=0 returns=1
// ================================================

void WEA94() // WEA94
{
  Push(Read16(pp_PAST)); // PAST @
  _gt_FLAG(); // >FLAG
  Push(Read16(0x65e1+WDA80.offset)&0xFF); // WDA80<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(Read16(0x65e1+WDA85.offset)&0xFF); // WDA85<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  WE9B7(); // WE9B7
}


// ================================================
// 0xeab6: WORD 'WEAB8' codep=0x224c wordp=0xeab8 params=2 returns=0
// ================================================

void WEAB8() // WEAB8
{
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  WE874(); // WE874
  WEA94(); // WEA94
  Push(Pop() & Pop()); // AND
  Push(Pop() & (Read16(0x65e1+WDA69.offset)&0xFF)); //  WDA69<IFIELD> C@ AND
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    NEST(); // NEST
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xead8: WORD 'WEADA' codep=0x224c wordp=0xeada params=2 returns=0
// ================================================

void WEADA() // WEADA
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  GetINST_dash_C(); // @INST-C
  Push(!(Pop()==0x0018?1:0)); //  0x0018 = NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    CI(); // CI
    ICLOSE(); // ICLOSE
    NEST(); // NEST
    return;
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeafc: WORD 'WEAFE' codep=0x224c wordp=0xeafe params=0 returns=1
// ================================================

void WEAFE() // WEAFE
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    WE874(); // WE874
    WEA94(); // WEA94
    Push(Pop() & Pop()); // AND
    return;
  }
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xeb18: WORD 'WEB1A' codep=0x224c wordp=0xeb1a
// ================================================

void WEB1A() // WEB1A
{
  unsigned short int i, imax;
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(Pop()==0x00ff?1:0); //  0x00ff =
    if (Pop() != 0)
    {
      Push(3);
      StoreIC(); // !IC
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(1);
      StoreINST_dash_S(); // !INST-S
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeb4e: WORD 'JMPSHP' codep=0x224c wordp=0xeb59
// ================================================
// entry

void JMPSHP() // JMPSHP
{
  WE959(); // WE959
  Push(0);
  Push(8);
  RRND(); // RRND
  Push(Read16(cc_WD9D0) + 1); // WD9D0 1+
  WE656(); // WE656
  WE516(); // WE516
  WDAB4(); // WDAB4
  WDAA8(); // WDAA8
  WE83E(); // WE83E
  Push(pp_IsNEB); // ?NEB
  Store_2(); // !_2
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb79: WORD 'WEB7B' codep=0x224c wordp=0xeb7b
// ================================================

void WEB7B() // WEB7B
{
  _gt_C_plus_S(); // >C+S
  WDA94(); // WDA94
  WEB1A(); // WEB1A
  Push(Read16(0x65e1+WDA5F.offset)); // WDA5F<IFIELD> @
  Push(Read16(0x65e1+WDA64.offset)); // WDA64<IFIELD> @
  WEB1A(); // WEB1A
  Push(0xc548); // 'OVFLU'
  MODULE(); // MODULE
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(0x65e1+WDA5F.offset)); // WDA5F<IFIELD> @
  Push(Read16(0x65e1+WDA64.offset)); // WDA64<IFIELD> @
  ICLOSE(); // ICLOSE
  JMPSHP(); // JMPSHP
  DrawMVS(); // .MVS
}


// ================================================
// 0xeba5: WORD 'WEBA7' codep=0x224c wordp=0xeba7 params=2 returns=0
// ================================================

void WEBA7() // WEBA7
{
  Pop(); Pop(); // 2DROP
  Push(0xc78f); // 'AI'
  MODULE(); // MODULE
}


// ================================================
// 0xebb1: WORD 'COLLIDE' codep=0x4b3b wordp=0xebbd
// ================================================

void COLLIDE() // COLLIDE
{
  switch(Pop()) // COLLIDE
  {
  case 11:
    WEADA(); // WEADA
    break;
  case 18:
    NEST(); // NEST
    break;
  case 23:
    NEST(); // NEST
    break;
  case 45:
    WEB7B(); // WEB7B
    break;
  case 61:
    WEAB8(); // WEAB8
    break;
  case 60:
    WEBA7(); // WEBA7
    break;
  default:
    Pop(); Pop(); // 2DROP
    break;

  }
}

// ================================================
// 0xebd9: WORD 'WEBDB' codep=0x224c wordp=0xebdb
// ================================================

void WEBDB() // WEBDB
{
  unsigned short int i, imax;
  WDAC0(); // WDAC0
  Push(Read16(cc_WD9D0)); // WD9D0
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    Push(pp_WDA14); // WDA14
    _1_dot_5_ex__2(); // 1.5!_2

    i = 0;
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      Push2Words("*SHIP");
      D_eq_(); // D=
      GetID(); // @ID
      Push(0x0033);
      Push(0x0083);
      WITHIN(); // WITHIN
      GetIC(); // @IC
      NBCLR(); // NBCLR
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() & Pop()); // AND
      Push(Pop() | Pop()); // OR
      Push(!Pop()); //  NOT
      WDACA(); // WDACA
      Push(!(Pop()==1?1:0)); //  1 = NOT
      Push(Pop() & Pop()); // AND
      WEAFE(); // WEAFE
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        Push(pp_WDA14); // WDA14
        _1_dot_5_ex__2(); // 1.5!_2
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(pp_WDA14); // WDA14
    _1_dot_5_at_(); // 1.5@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(pp_WDA14); // WDA14
      Get_gt_C_plus_S(); // @>C+S
      CI(); // CI
      GetINST_dash_C(); // @INST-C
      Push(Read16(regsp)); // DUP
      Push(!(Pop()==0x0019?1:0)); //  0x0019 = NOT
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        Is_t_C(); // ?~C case
        if (Pop() != 0)
        {
          Push(0x0096);
          Push(0x0fa0);
          Push(1);
          _gt_SND(); // >SND
        }
        WDA94(); // WDA94
        WDAA8(); // WDAA8
      }
      ICLOSE(); // ICLOSE
      Push(1);
    } else
    {
      Push(0);
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xec7f: WORD 'WEC81' codep=0x224c wordp=0xec81 params=0 returns=2
// ================================================

void WEC81() // WEC81
{
  Push(pp_WDA14); // WDA14
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  Push((Pop() & (Read16(pp_WDA10)==0?1:0)) & (Read16(pp_IsPORT)==0?1:0)); //  WDA10 @ 0= AND ?PORT @ 0= AND
  WDACA(); // WDACA
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xeca3: WORD 'WECA5' codep=0x224c wordp=0xeca5 params=2 returns=3
// ================================================

void WECA5() // WECA5
{
  IsNULL(); // ?NULL
  if (Pop() != 0)
  {
    Push(Read16(cc_FALSE)); // FALSE
    return;
  }
  IsCLASS_slash_(); // ?CLASS/
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  WEA94(); // WEA94
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecbf: WORD 'WECC1' codep=0x224c wordp=0xecc1 params=0 returns=1
// ================================================

void WECC1() // WECC1
{
  WEC81(); // WEC81
  if (Pop() != 0)
  {
    WD9A8(); // WD9A8
    IOPEN(); // IOPEN
    Push(0x003d);
    Push(0);
    Push(0xeca5); // 'WECA5'
    SELECT_dash_(); // SELECT-
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+WDA69.offset)&0xFF); // WDA69<IFIELD> C@
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        CI(); // CI
        Push(pp_WDA14); // WDA14
        _1_dot_5_ex__2(); // 1.5!_2
        Push(pp_WDA10); // WDA10
        ON_2(); // ON_2
      }
      Push(Pop() & Pop()); // AND
    }
    WD9C8(); // WD9C8
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push(pp_WDA14); // WDA14
    Get_gt_C_plus_S(); // @>C+S
    CI(); // CI
    GetINST_dash_C(); // @INST-C
    ICLOSE(); // ICLOSE
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xed0f: WORD 'WED11' codep=0x224c wordp=0xed11 params=0 returns=1
// ================================================

void WED11() // WED11
{
  WEC81(); // WEC81
  if (Pop() != 0)
  {
    Push(!Read16(pp_PAST)); // PAST @ NOT
    WD9A8(); // WD9A8
    IOPEN(); // IOPEN
    Push(0x000c);
    Push(0);
    IFIND(); // IFIND
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_WDA14); // WDA14
      _1_dot_5_ex__2(); // 1.5!_2
      Push(pp_WDA10); // WDA10
      ON_2(); // ON_2
    }
    WD9C8(); // WD9C8
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push2Words("*SHIP-C");
    Push(0x0012);
    Push(1);
    Push(0x003a);
    Push(pp_FILE_n_); // FILE#
    Store_2(); // !_2
    Push(1);
    Push(pp_RECORD_n_); // RECORD#
    Store_2(); // !_2
    SET_STR_AS_PARAM("LAUNCH");
    LoadData(_1BTN); // from 'BUTTONS'
    SWAP(); // SWAP
    CMOVE_2(); // CMOVE_2
    SET_dash_CUR(); // SET-CUR
    return;
  }
  Push(0);
}


// ================================================
// 0xed72: WORD 'UNNEST-' codep=0x4b3b wordp=0xed7e
// ================================================

void UNNEST_dash_() // UNNEST-
{
  switch(Pop()) // UNNEST-
  {
  case 1:
    WDB54(); // WDB54
    break;
  case 2:
    WE0D9(); // WE0D9
    break;
  case 4:
    WDDAE(); // WDDAE
    break;
  case 5:
    WDE8A(); // WDE8A
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed92: WORD 'WED94' codep=0x224c wordp=0xed94 params=1 returns=0
// ================================================

void WED94() // WED94
{
  Push(5);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(pp_WDA08)); // WDA08 @
  Push(Read16(pp_WDA0C)); // WDA0C @
  Push(3);
  PICK(); // PICK
  Push(Read16(cc_WD9D0) + 1); // WD9D0 1+
  WE656(); // WE656
  WE516(); // WE516
}


// ================================================
// 0xedb6: WORD 'WEDB8' codep=0x224c wordp=0xedb8 params=0 returns=1
// ================================================

void WEDB8() // WEDB8
{
  unsigned short int a, i, imax;
  WDB1C(); // WDB1C
  Push(Pop() | Read16(pp_IsAF)); //  ?AF @ OR
  if (Pop() != 0)
  {
    Push(Read16(cc_FALSE)); // FALSE
    return;
  }
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    WDAB4(); // WDAB4
    Push(Read16(pp_WDA00)); // WDA00 @
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    IsICONS_dash__1(); // ?ICONS-_1
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {

      i = 0;
      imax = Pop();
      do // (DO)
      {
        Pop(); // DROP
        i++;
      } while(i<imax); // (LOOP)

    }
    Push(a==1?1:0); // R> 1 =
    return;
  }
  WDAB4(); // WDAB4
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_WDA00)); // WDA00 @
  _gt_(); // >
}


// ================================================
// 0xee12: WORD 'WEE14' codep=0x224c wordp=0xee14 params=0 returns=1
// ================================================

void WEE14() // WEE14
{
  Push(Read16(pp_WDA10) & !Read16(pp_SKIP2NE)); // WDA10 @ SKIP2NE @ NOT AND
  WDACA(); // WDACA
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() & Pop()); // AND
  Push((Pop() & !Read16(pp_WD9FC)) & (Read16(pp_IsAF)==0?1:0)); //  WD9FC @ NOT AND ?AF @ 0= AND
}


// ================================================
// 0xee3a: WORD 'UNNEST' codep=0x224c wordp=0xee45
// ================================================
// entry

void UNNEST() // UNNEST
{
  unsigned short int a;
  Push(pp__ro_SHIPBO); // (SHIPBO
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  WD9A0(); // WD9A0
  IEXTRAC(); // IEXTRAC
  ICLOSE(); // ICLOSE
  WDACA(); // WDACA
  a = Pop(); // >R
  Push(a); // I
  Push(0xc94c); // 'USM'
  MODULE(); // MODULE
  Push(a); // I
  UNNEST_dash_(); // UNNEST- case
  WE157(); // WE157
  ICLOSE(); // ICLOSE
  CI(); // CI
  IINSERT(); // IINSERT
  WE17B(); // WE17B
  CI(); // CI
  WE1C2(); // WE1C2
  WE1E2(); // WE1E2
  WDCC8(); // WDCC8
  Push(a); // I
  WED94(); // WED94
  WDAF2(); // WDAF2
  WD996(); // WD996
  WDACA(); // WDACA
  Push(0xc994); // 'D-UP'
  MODULE(); // MODULE
  WE2D7(); // WE2D7
  Push(a); // R>
  Push(0xc93e); // 'UFM'
  MODULE(); // MODULE
  DrawMVS(); // .MVS
  WE23B(); // WE23B
  Push(pp_WDA26); // WDA26
  GetEXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_SKIP2NE); // SKIP2NE
  _099(); // 099
  WE8DF(); // WE8DF
  Push(-Read16(pp_FORCEKE)); // FORCEKE @ NEGATE
  Push(pp_FORCEKE); // FORCEKE
  Store_2(); // !_2
  Push2Words("NULL");
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xeeb9: WORD 'WEEBB' codep=0x224c wordp=0xeebb params=0 returns=0
// ================================================

void WEEBB() // WEEBB
{
  WDB1C(); // WDB1C
  if (Pop() == 0) return;
  Push(0);
  MAX(); // MAX
  Push(0x00db * Read16(cc__star_MAPSCA)); // 0x00db *MAPSCA *
  MIN(); // MIN
  SWAP(); // SWAP
  Push(0);
  MAX(); // MAX
  Push(0x00f9 * Read16(cc__star_MAPSCA)); // 0x00f9 *MAPSCA *
  MIN(); // MIN
  SWAP(); // SWAP
}


// ================================================
// 0xeee3: WORD '(GET-AU' codep=0x224c wordp=0xeeef params=0 returns=0
// ================================================
// entry

void _ro_GET_dash_AU() // (GET-AU
{
  Push(!(Read16(pp__n_AUX)==5?1:0)); // #AUX @ 5 = NOT
  if (Pop() == 0) return;
  DrawAUXSYS(); // .AUXSYS
}


// ================================================
// 0xef01: WORD 'WEF03' codep=0x224c wordp=0xef03 params=0 returns=0
// ================================================

void WEF03() // WEF03
{
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    WD9A0(); // WD9A0
    Push((Read16(0x65e1+WDA5A.offset)&0xFF) & 8); // WDA5A<IFIELD> C@ 8 AND
    _gt_FLAG(); // >FLAG
    Push(Pop() & !Read16(pp_Is3)); //  ?3 @ NOT AND
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  if (Pop() == 0) return;
  Push(0xc636); // 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xef33: WORD 'WEF35' codep=0x224c wordp=0xef35
// ================================================

void WEF35() // WEF35
{
  unsigned short int a, b;
  WEDB8(); // WEDB8
  WEE14(); // WEE14
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNNEST(); // UNNEST
  }
  WEBDB(); // WEBDB
  a = Pop(); // >R
  WECC1(); // WECC1
  Push(Pop() | a); //  R> OR
  b = Pop(); // >R
  WED11(); // WED11
  Push(Pop() | b); //  R> OR
  if (Pop() == 0) return;
  COLLIDE(); // COLLIDE case
}


// ================================================
// 0xef5b: WORD 'FLY' codep=0x224c wordp=0xef63
// ================================================
// entry

void FLY() // FLY
{
  WE6AE(); // WE6AE
  WEEBB(); // WEEBB
  WE516(); // WE516
  WE7B0(); // WE7B0
  WDB1C(); // WDB1C
  if (Pop() != 0)
  {
    Push(Read16(pp_IsNEB)); // ?NEB @
    Push(pp_WDA2E); // WDA2E
    Store_2(); // !_2
    WE83E(); // WE83E
    Push(pp_IsNEB); // ?NEB
    Store_2(); // !_2
  }
  WEF03(); // WEF03
  DrawMVS(); // .MVS
  WEF35(); // WEF35
}


// ================================================
// 0xef87: WORD 'WEF89' codep=0x224c wordp=0xef89 params=2 returns=2
// ================================================

void WEF89() // WEF89
{
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
  Push(-Read16(cc_WD9E4) - 0x000c); // WD9E4 NEGATE 0x000c -
  WDB1C(); // WDB1C
  Push(!Pop()); //  NOT
  Push(Pop() * Pop()); // *
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
}


// ================================================
// 0xefa3: WORD 'SET-DES' codep=0x224c wordp=0xefaf
// ================================================

void SET_dash_DES() // SET-DES
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0152?1:0); //  0x0152 =
  OVER(); // OVER
  Push((Pop()==0?1:0) & Read16(pp_FORCEKE)); //  0= FORCEKE @ AND
  Push(Pop() | Pop()); // OR
  Push(Read16(pp_SKEY)); // SKEY @
  Push(0x005b);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_FORCEKE); // FORCEKE
  Store_2(); // !_2
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_SKEY)); // SKEY @
    Push(Read16(regsp)); // DUP
    Push(pp_LKEY); // LKEY
    Store_2(); // !_2
  }
  _ro_XYSCAN(); // (XYSCAN case
  Push(Read16(pp_SKEY)); // SKEY @
  Push(0x005b);
  _gt_(); // >
  if (Pop() != 0)
  {
    WE905(); // WE905
  } else
  {
    WE941(); // WE941
  }
  Push(Read16(pp_KEYINC)); // KEYINC @
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(pp_XABS); // XABS
  WEF89(); // WEF89
  Push(Pop() * 0x00f9); //  0x00f9 *
  MIN(); // MIN
  Push(pp_WDA1A); // WDA1A
  Store_2(); // !_2
  Push(Pop() * Pop()); // *
  Push(pp_YABS); // YABS
  WEF89(); // WEF89
  Push(Pop() * 0x00db); //  0x00db *
  MIN(); // MIN
  Push(pp_WDA1E); // WDA1E
  Store_2(); // !_2
  Push(Read16(pp_FORCEKE)); // FORCEKE @
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(pp_FORCEKE); // FORCEKE
    _099(); // 099
  }
  Push(Read16(pp_FTRIG)); // FTRIG @
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D_eq_(); // D=
  WDB1C(); // WDB1C
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Pop() | Read16(pp_IsAUTO)); //  ?AUTO @ OR
  if (Pop() != 0)
  {
    Push(!Pop()); //  NOT
    _i_KEY(); // 'KEY
    Pop(); // DROP
  }
  FLY(); // FLY
}


// ================================================
// 0xf05d: WORD 'SETUP-M' codep=0x224c wordp=0xf069
// ================================================

void SETUP_dash_M() // SETUP-M
{
  Push(pp_FORCEPT); // FORCEPT
  ON_2(); // ON_2
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_VSTIME); // VSTIME
  StoreD(); // D!
  Push(0xb033); // '?VCYCLE'
  Push(pp__i_VEHICL); // 'VEHICL
  Store_2(); // !_2
  Push(0xc0f9); // '.SORD'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  Store_2(); // !_2
  Push(pp_IsAUTO); // ?AUTO
  _099(); // 099
  WD9A0(); // WD9A0
  Push(Read16(0x65e1+WDA37.offset)&0xFF); // WDA37<IFIELD> C@
  Push(pp_HEADING); // HEADING
  Store_2(); // !_2
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  WE8DF(); // WE8DF
  WDACA(); // WDACA
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc94c); // 'USM'
    MODULE(); // MODULE
  }
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WDBED.offset); // WDBED<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WDBF2.offset)&0xFF); // WDBF2<IFIELD> C@
  Push(pp_WDA22); // WDA22
  Store_2(); // !_2
  WD9C8(); // WD9C8
  WD996(); // WD996
  WDCC8(); // WDCC8
  Push(Read16(pp_HEADING)); // HEADING @
  WDAB4(); // WDAB4
  WDACA(); // WDACA
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc93e); // 'UFM'
    MODULE(); // MODULE
    Push(Read16(pp_HEADING)); // HEADING @
    Push(1);
    WE656(); // WE656
    WE516(); // WE516
  } else
  {
    WE4A6(); // WE4A6
  }
  WDAF2(); // WDAF2
  FLY(); // FLY
}


// ================================================
// 0xf0f7: WORD 'CLEANUP' codep=0x224c wordp=0xf103
// ================================================

void CLEANUP() // CLEANUP
{
  Push(pp_FORCEPT); // FORCEPT
  _099(); // 099
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
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
  if (Pop() != 0)
  {
    Push(pp__10_star_END); // 10*END
    _2_at_(); // 2@
    Push(0x000a);
    U_slash_MOD(); // U/MOD
    SWAP(); // SWAP
    _0_gt_(); // 0>
    Push(Pop() + Pop()); // +
    Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
    Store_2(); // !_2
  }
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(!Read16(pp_WD9FC)); // WD9FC @ NOT
  WDACA(); // WDACA
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    ORBUP(); // ORBUP
  }
  Push(pp_WD9FC); // WD9FC
  _099(); // 099
  WDAE8(); // WDAE8
  if (Pop() != 0)
  {
    Push(0xc985); // 'DMSG'
    MODULE(); // MODULE
  }
  Push(0xc39d); // '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  Store_2(); // !_2
  Push(pp_IsAUTO); // ?AUTO
  ON_2(); // ON_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf17d: WORD 'CHK-MOV' codep=0x224c wordp=0xf189
// ================================================
// entry

void CHK_dash_MOV() // CHK-MOV
{
  Push(0);
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(Pop() * Read16(0x65e1+INST_dash_QT.offset)); //  INST-QT<IFIELD> @ *
    Push(0x000a);
    U_star_(); // U*
    CDROP(); // CDROP
  } else
  {
    Push2Words("NULL");
  }
  _2DUP(); // 2DUP
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  WD9C8(); // WD9C8
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(5);
    Push(0xb77c); // 'OV?.EQ'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      WDACA(); // WDACA
      Push(1);
      Push(5);
      WITHIN(); // WITHIN
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        CTINIT(); // CTINIT
        SET_STR_AS_PARAM("STANDING BY TO LAUNCH");
        DrawTTY(); // .TTY
      } else
      {
        Push(Pop() + 1); //  1+
      }
    }
    return;
  }
  Push(1);
  Push(0xc976); // '.EX'
  MODULE(); // MODULE
}


// ================================================
// 0xf217: WORD 'WF219' codep=0x224c wordp=0xf219
// ================================================

void WF219() // WF219
{
  WDACA(); // WDACA
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_CONTEXT_3); // CONTEXT_3
    Store_2(); // !_2
  }
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  SET_STR_AS_PARAM("LAUNCH");
  LoadData(_1BTN); // from 'BUTTONS'
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf248: WORD '+NEST' codep=0x224c wordp=0xf252
// ================================================
// entry

void _plus_NEST() // +NEST
{
  _2DUP(); // 2DUP
  Push(pp_WDA14); // WDA14
  _1_dot_5_ex__2(); // 1.5!_2
  NEST(); // NEST
}


// ================================================
// 0xf25c: WORD 'COME-HI' codep=0x224c wordp=0xf268
// ================================================
// entry

void COME_dash_HI() // COME-HI
{
  GetColor(BLUE);
  Push(pp_TCLR); // TCLR
  Store_2(); // !_2
  WF219(); // WF219
  Push2Words("NULL");
  Push(pp_HAZE); // HAZE
  StoreD(); // D!
  while(1)
  {
    WDB1C(); // WDB1C
    Push(!Pop()); //  NOT
    Push(pp__ro_SYSTEM); // (SYSTEM
    _1_dot_5_at_(); // 1.5@
    Push2Words("*ASYS");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    WDACA(); // WDACA
    Push(2);
    _st_(); // <
    Push(Pop() | Pop()); // OR
    if (Pop() == 0) break;

    UNNEST(); // UNNEST
  }
  Push(pp_IsNEB); // ?NEB
  _099(); // 099
  WDB1C(); // WDB1C
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _plus_NEST(); // +NEST
  }
  WD9B8(); // WD9B8
  IOPEN(); // IOPEN
  while(1)
  {
    Push(!(Read16(0x65e1+INST_dash_QT.offset)==8?1:0)); // INST-QT<IFIELD> @ 8 = NOT
    if (Pop() == 0) break;

    INEXT(); // INEXT
  }
  CI(); // CI
  WD9C8(); // WD9C8
  _plus_NEST(); // +NEST
  Push2Words("*SHIP-C");
  _plus_NEST(); // +NEST
  GetColor(WHITE);
  Push(pp_TCLR); // TCLR
  Store_2(); // !_2
}

// 0xf2d0: db 0x53 0x48 0x50 0x4d 0x4f 0x56 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x5c 0x20 0x48 0x59 0x50 0x45 0x52 0x20 0x20 0x20 0x4f 0x56 0x52 0x2d 0x20 0x72 0x66 0x67 0x31 0x33 0x73 0x65 0x70 0x38 0x39 0x20 0x29 0x8e 0x32 0x34 0x34 0x30 0x15 0xc0 0xff 0xf2 0x5f 0xae 0x0b 0xc1 0x54 0x16 0x6d 0x8e 0xf2 0xae 0x0b 0xfa 0x15 0x08 0x00 0x09 0x59 0xae 0x0b 0xd9 0x84 0x90 0x16 0x4c 0x22 0xb3 0x54 0xae 0x0b 0x90 0x16 0x14 0x22 0x48 0x3a 0x4c 0x22 0x5d 0x17 0x81 0xae 0x90 0x16 0x30 0xef 0x85 0x40 0x27 0x45 0x58 0xd4 0x3b 0x4b 0x03 0x00 0x39 0xf3 0x02 0x00 0x31 0xf3 0x03 0x00 0x31 0xf3 0x04 0x00 0x3d 0xf3 0xb3 0xf0 0x87 0x28 0x21 0x27 0x45 0x58 0x54 0xa9 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x4b 0xf3 0xf1 0x60 0x16 0x6d 0x90 0x16 0x94 0xf2 0x87 0x2b 0x41 0x2d 0x56 0x45 0x53 0xd3 0x4c 0x22 0xcf 0x64 0x2f 0x7a 0xc1 0xe6 0x92 0x0c 0x41 0x0e 0x25 0x10 0xf2 0x0e 0xe7 0x0f 0xc4 0x4b 0x2e 0x0f 0x89 0x11 0xda 0xe6 0x92 0x0c 0x41 0x0e 0xdf 0xe6 0x92 0x0c 0xb3 0x0e 0x5d 0x17 0xff 0x00 0x46 0x12 0xb3 0x0f 0x92 0x0f 0xad 0x11 0x5d 0x17 0x14 0x00 0xe8 0x55 0xae 0x0b 0x92 0x0f 0xad 0x11 0x41 0x0e 0xe8 0x55 0x23 0x6d 0x41 0x0e 0x3b 0x59 0x23 0x6d 0x20 0x0f 0xb8 0x15 0x5d 0x17 0x19 0x00 0x20 0x0f 0x87 0x3b 0xc4 0x4b 0x02 0xe7 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0xf2 0xff 0x9a 0xe7 0xd0 0x15 0xe8 0xff 0xca 0xe7 0xdf 0x79 0x4d 0x62 0xae 0x0b 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x78 0xec 0x41 0x0e 0x3f 0x64 0x4c 0x6d 0x96 0x99 0x90 0x16 0x4c 0x22 0x8f 0x64 0x2f 0x7a 0x90 0x16 0x4c 0x22 0xf2 0x0e 0xbb 0x74 0x4c 0x6d 0x90 0x16 0x4c 0x22 0x22 0x75 0x41 0x0e 0x5d 0x17 0x18 0x00 0x5f 0x12 0xf2 0x0e 0x5d 0x17 0x20 0x00 0x5f 0x12 0x3e 0x13 0x90 0x16 0x20 0x74 0x17 0x11 0x01 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x4c 0x22 0xaf 0x3b 0x2e 0xf4 0xae 0x0b 0xe7 0x0f 0xb8 0x15 0x50 0x0e 0x13 0x4a 0x32 0xf4 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x2e 0xf4 0x16 0x6d 0x4a 0x17 0xd0 0x15 0xe8 0xff 0x2e 0xf4 0xae 0x0b 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x36 0xf4 0x60 0x16 0x04 0x00 0x20 0x0f 0x5d 0x17 0x0b 0x00 0x87 0x3b 0xa9 0x81 0x2d 0x7c 0xdb 0x3f 0xa9 0x7b 0x07 0x76 0xfa 0x15 0x0c 0x00 0xb5 0x75 0xa9 0x7b 0xe2 0x7a 0x60 0x16 0x16 0x00 0x8b 0x75 0xf1 0x7b 0x8d 0x7a 0xfa 0x15 0x0a 0x00 0xc9 0x7a 0x9e 0x7e 0x60 0x16 0x04 0x00 0xc9 0x7a 0xad 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0x3f 0x7a 0x18 0x76 0xfa 0x15 0x1c 0x00 0x2d 0x7c 0xb5 0x75 0xf1 0x7b 0xdf 0x79 0x8d 0x7a 0xfa 0x15 0x08 0x00 0xc9 0x7a 0x9e 0x7e 0xb1 0x7a 0x3f 0x7a 0x60 0x16 0xe2 0xff 0xdf 0x79 0x1e 0x7f 0x90 0x16 0x45 0xf3 0x87 0x3e 0x4f 0x52 0x42 0x49 0x54 0xd3 0x4c 0x22 0x2e 0xf4 0x65 0x6d 0xff 0xf3 0x29 0xf4 0x92 0x0c 0x32 0xf4 0x16 0x6d 0x3f 0x7a 0x5d 0x17 0x13 0xf4 0x5d 0x17 0x64 0xf4 0xa9 0x7f 0x64 0xe6 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0x34 0x75 0x87 0x3b 0x5f 0x12 0xf5 0x12 0xfa 0x15 0x08 0x00 0xb0 0xf4 0x60 0x16 0x04 0x00 0xb1 0x7a 0x90 0x16 0x5f 0xf3 0x87 0x4f 0x52 0x42 0x49 0x54 0x53 0xbe 0x4c 0x22 0xff 0xf3 0x3f 0x7a 0x7a 0x7a 0x07 0x13 0xfa 0x15 0x08 0x00 0x04 0xf5 0x60 0x16 0xf4 0xff 0x18 0x76 0xfa 0x15 0x04 0x00 0x04 0xf5 0x64 0xe6 0x90 0x16 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SHPMOV-_________________________IX -\ HYPER   OVR- rfg13sep89 ) 2440    _   T m         Y      L" T     "H:L"]     0  @'EX ;K  9   1   1   =    (!'EXT L"*\  K  ` m     +A-VES L" d/z    A %      K.       A       ]   F       ]    U      A  U#mA ;Y#m    ]      ; K                   yMb      ] x A ?dLm    L" d/z  L"   tLm  L""uA ]   _   ]   _ >    t   ) : ) : L" ;.       P  J2         P .  mJ     .     L""u]   _     6 `     ]    ;  -| ? { v     u { z`    u { z     z ~`    z t m  L"?z v    -| u { y z     z ~ z?z`    y   E  >ORBIT L". em  )   2  m?z]   ] d  d   L""u]   _ 4u ;_         `    z  _  ORBITS L"  ?zzz        `    v      d   HMISC-VOC_________ '

