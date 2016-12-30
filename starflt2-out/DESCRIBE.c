// ====== OVERLAY 'DESCRIBE' ======
// store offset = 0xe5f0
// overlay size   = 0x0f70

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe606  codep:0x224c parp:0xe606 size:0x0042 C-string:'UNK_0xe606'
//      UNK_0xe64a  codep:0x7420 parp:0xe64a size:0x0017 C-string:'UNK_0xe64a'
//      UNK_0xe663  codep:0x7394 parp:0xe663 size:0x0006 C-string:'UNK_0xe663'
//      UNK_0xe66b  codep:0x7394 parp:0xe66b size:0x003e C-string:'UNK_0xe66b'
//      UNK_0xe6ab  codep:0x7394 parp:0xe6ab size:0x0006 C-string:'UNK_0xe6ab'
//      UNK_0xe6b3  codep:0x7420 parp:0xe6b3 size:0x0010 C-string:'UNK_0xe6b3'
//      UNK_0xe6c5  codep:0x7394 parp:0xe6c5 size:0x0006 C-string:'UNK_0xe6c5'
//      UNK_0xe6cd  codep:0x7394 parp:0xe6cd size:0x0023 C-string:'UNK_0xe6cd'
//          APAUSE  codep:0x224c parp:0xe6fb size:0x0068 C-string:'APAUSE'
//      UNK_0xe765  codep:0x224c parp:0xe765 size:0x000a C-string:'UNK_0xe765'
//      UNK_0xe771  codep:0x224c parp:0xe771 size:0x001c C-string:'UNK_0xe771'
//      UNK_0xe78f  codep:0x224c parp:0xe78f size:0x0006 C-string:'UNK_0xe78f'
//      UNK_0xe797  codep:0x224c parp:0xe797 size:0x0046 C-string:'UNK_0xe797'
//      UNK_0xe7df  codep:0x224c parp:0xe7df size:0x0052 C-string:'UNK_0xe7df'
//      UNK_0xe833  codep:0x224c parp:0xe833 size:0x000a C-string:'UNK_0xe833'
//      UNK_0xe83f  codep:0x1d29 parp:0xe83f size:0x0002 C-string:'UNK_0xe83f'
//      UNK_0xe843  codep:0x224c parp:0xe843 size:0x000e C-string:'UNK_0xe843'
//      UNK_0xe853  codep:0x224c parp:0xe853 size:0x00a0 C-string:'UNK_0xe853'
//      UNK_0xe8f5  codep:0x224c parp:0xe8f5 size:0x005f C-string:'UNK_0xe8f5'
//      UNK_0xe956  codep:0x224c parp:0xe956 size:0x001a C-string:'UNK_0xe956'
//      UNK_0xe972  codep:0x224c parp:0xe972 size:0x0019 C-string:'UNK_0xe972'
//      UNK_0xe98d  codep:0x224c parp:0xe98d size:0x001b C-string:'UNK_0xe98d'
//      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x000e C-string:'UNK_0xe9aa'
//      UNK_0xe9ba  codep:0x224c parp:0xe9ba size:0x001a C-string:'UNK_0xe9ba'
//        >SPECIAL  codep:0x4b3b parp:0xe9e1 size:0x0018 C-string:'_gt_SPECIAL'
//      UNK_0xe9fb  codep:0x224c parp:0xe9fb size:0x0036 C-string:'UNK_0xe9fb'
//      UNK_0xea33  codep:0x224c parp:0xea33 size:0x001c C-string:'UNK_0xea33'
//      UNK_0xea51  codep:0x224c parp:0xea51 size:0x0016 C-string:'UNK_0xea51'
//         .PHRASE  codep:0x224c parp:0xea73 size:0x000e C-string:'_dot_PHRASE'
//      UNK_0xea83  codep:0x224c parp:0xea83 size:0x0010 C-string:'UNK_0xea83'
//        .APHRASE  codep:0x224c parp:0xeaa0 size:0x0042 C-string:'_dot_APHRASE'
//      UNK_0xeae4  codep:0x2214 parp:0xeae4 size:0x0002 C-string:'UNK_0xeae4'
//      UNK_0xeae8  codep:0x2214 parp:0xeae8 size:0x0002 C-string:'UNK_0xeae8'
//      UNK_0xeaec  codep:0x2214 parp:0xeaec size:0x0002 C-string:'UNK_0xeaec'
//      UNK_0xeaf0  codep:0x2214 parp:0xeaf0 size:0x0002 C-string:'UNK_0xeaf0'
//      UNK_0xeaf4  codep:0x2214 parp:0xeaf4 size:0x0002 C-string:'UNK_0xeaf4'
//        RACE>TRA  codep:0x4b3b parp:0xeb03 size:0x0030 C-string:'RACE_gt_TRA'
//      UNK_0xeb35  codep:0x1d29 parp:0xeb35 size:0x001a C-string:'UNK_0xeb35'
//      UNK_0xeb51  codep:0x224c parp:0xeb51 size:0x0010 C-string:'UNK_0xeb51'
//      UNK_0xeb63  codep:0x1d29 parp:0xeb63 size:0x0002 C-string:'UNK_0xeb63'
//      UNK_0xeb67  codep:0x224c parp:0xeb67 size:0x0024 C-string:'UNK_0xeb67'
//      UNK_0xeb8d  codep:0x224c parp:0xeb8d size:0x0032 C-string:'UNK_0xeb8d'
//      UNK_0xebc1  codep:0x224c parp:0xebc1 size:0x000a C-string:'UNK_0xebc1'
//      UNK_0xebcd  codep:0x224c parp:0xebcd size:0x000c C-string:'UNK_0xebcd'
//      UNK_0xebdb  codep:0x1d29 parp:0xebdb size:0x0003 C-string:'UNK_0xebdb'
//      UNK_0xebe0  codep:0x224c parp:0xebe0 size:0x0008 C-string:'UNK_0xebe0'
//      UNK_0xebea  codep:0x224c parp:0xebea size:0x0006 C-string:'UNK_0xebea'
//      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x0008 C-string:'UNK_0xebf2'
//      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x0012 C-string:'UNK_0xebfc'
//      UNK_0xec10  codep:0x224c parp:0xec10 size:0x0012 C-string:'UNK_0xec10'
//      UNK_0xec24  codep:0x1d29 parp:0xec24 size:0x0003 C-string:'UNK_0xec24'
//      UNK_0xec29  codep:0x224c parp:0xec29 size:0x0008 C-string:'UNK_0xec29'
//      UNK_0xec33  codep:0x224c parp:0xec33 size:0x0006 C-string:'UNK_0xec33'
//      UNK_0xec3b  codep:0x224c parp:0xec3b size:0x0012 C-string:'UNK_0xec3b'
//      UNK_0xec4f  codep:0x224c parp:0xec4f size:0x0012 C-string:'UNK_0xec4f'
//      UNK_0xec63  codep:0x224c parp:0xec63 size:0x0012 C-string:'UNK_0xec63'
//      UNK_0xec77  codep:0x224c parp:0xec77 size:0x0010 C-string:'UNK_0xec77'
//      UNK_0xec89  codep:0x224c parp:0xec89 size:0x0032 C-string:'UNK_0xec89'
//      UNK_0xecbd  codep:0x224c parp:0xecbd size:0x0050 C-string:'UNK_0xecbd'
//      UNK_0xed0f  codep:0x224c parp:0xed0f size:0x0006 C-string:'UNK_0xed0f'
//      UNK_0xed17  codep:0x224c parp:0xed17 size:0x0032 C-string:'UNK_0xed17'
//      UNK_0xed4b  codep:0x224c parp:0xed4b size:0x0010 C-string:'UNK_0xed4b'
//      UNK_0xed5d  codep:0x224c parp:0xed5d size:0x000c C-string:'UNK_0xed5d'
//      UNK_0xed6b  codep:0x224c parp:0xed6b size:0x0008 C-string:'UNK_0xed6b'
//      UNK_0xed75  codep:0x224c parp:0xed75 size:0x0030 C-string:'UNK_0xed75'
//      UNK_0xeda7  codep:0x224c parp:0xeda7 size:0x0010 C-string:'UNK_0xeda7'
//      UNK_0xedb9  codep:0x224c parp:0xedb9 size:0x0016 C-string:'UNK_0xedb9'
//      UNK_0xedd1  codep:0x224c parp:0xedd1 size:0x0022 C-string:'UNK_0xedd1'
//        RACE-SCR  codep:0x4b3b parp:0xee00 size:0x000c C-string:'RACE_dash_SCR'
//      UNK_0xee0e  codep:0x224c parp:0xee0e size:0x007c C-string:'UNK_0xee0e'
//      UNK_0xee8c  codep:0x224c parp:0xee8c size:0x000a C-string:'UNK_0xee8c'
//          ?COMSG  codep:0x224c parp:0xeea1 size:0x001e C-string:'_ask_COMSG'
//      UNK_0xeec1  codep:0x224c parp:0xeec1 size:0x000a C-string:'UNK_0xeec1'
//      UNK_0xeecd  codep:0x224c parp:0xeecd size:0x000a C-string:'UNK_0xeecd'
//      UNK_0xeed9  codep:0x224c parp:0xeed9 size:0x000a C-string:'UNK_0xeed9'
//      UNK_0xeee5  codep:0x224c parp:0xeee5 size:0x000a C-string:'UNK_0xeee5'
//      UNK_0xeef1  codep:0x224c parp:0xeef1 size:0x000a C-string:'UNK_0xeef1'
//      UNK_0xeefd  codep:0x224c parp:0xeefd size:0x000a C-string:'UNK_0xeefd'
//      UNK_0xef09  codep:0x224c parp:0xef09 size:0x0012 C-string:'UNK_0xef09'
//      UNK_0xef1d  codep:0x224c parp:0xef1d size:0x0012 C-string:'UNK_0xef1d'
//      UNK_0xef31  codep:0x224c parp:0xef31 size:0x0012 C-string:'UNK_0xef31'
//      UNK_0xef45  codep:0x224c parp:0xef45 size:0x002e C-string:'UNK_0xef45'
//      UNK_0xef75  codep:0x224c parp:0xef75 size:0x000a C-string:'UNK_0xef75'
//      UNK_0xef81  codep:0x224c parp:0xef81 size:0x000a C-string:'UNK_0xef81'
//      UNK_0xef8d  codep:0x224c parp:0xef8d size:0x000a C-string:'UNK_0xef8d'
//      UNK_0xef99  codep:0x224c parp:0xef99 size:0x000a C-string:'UNK_0xef99'
//      UNK_0xefa5  codep:0x224c parp:0xefa5 size:0x000a C-string:'UNK_0xefa5'
//      UNK_0xefb1  codep:0x224c parp:0xefb1 size:0x000a C-string:'UNK_0xefb1'
//        #>SURFAC  codep:0x4b3b parp:0xefc8 size:0x00ca C-string:'_n__gt_SURFAC'
//      UNK_0xf094  codep:0x224c parp:0xf094 size:0x0016 C-string:'UNK_0xf094'
//      UNK_0xf0ac  codep:0x1d29 parp:0xf0ac size:0x0116 C-string:'UNK_0xf0ac'
//      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x00e0 C-string:'UNK_0xf1c4'
//      UNK_0xf2a6  codep:0x224c parp:0xf2a6 size:0x0012 C-string:'UNK_0xf2a6'
//          SYSCAN  codep:0x224c parp:0xf2c3 size:0x00a0 C-string:'SYSCAN'
//           RCASE  codep:0x4b3b parp:0xf36d size:0x001c C-string:'RCASE'
//      UNK_0xf38b  codep:0x224c parp:0xf38b size:0x0018 C-string:'UNK_0xf38b'
//      UNK_0xf3a5  codep:0x224c parp:0xf3a5 size:0x003a C-string:'UNK_0xf3a5'
//      UNK_0xf3e1  codep:0x224c parp:0xf3e1 size:0x0032 C-string:'UNK_0xf3e1'
//      UNK_0xf415  codep:0x224c parp:0xf415 size:0x000e C-string:'UNK_0xf415'
//      UNK_0xf425  codep:0x224c parp:0xf425 size:0x0010 C-string:'UNK_0xf425'
//      UNK_0xf437  codep:0x224c parp:0xf437 size:0x0028 C-string:'UNK_0xf437'
//      UNK_0xf461  codep:0x224c parp:0xf461 size:0x000c C-string:'UNK_0xf461'
//      UNK_0xf46f  codep:0x224c parp:0xf46f size:0x0008 C-string:'UNK_0xf46f'
//      UNK_0xf479  codep:0x224c parp:0xf479 size:0x0012 C-string:'UNK_0xf479'
//      UNK_0xf48d  codep:0x224c parp:0xf48d size:0x000e C-string:'UNK_0xf48d'
//        CLASS>TY  codep:0x4b3b parp:0xf4a8 size:0x002c C-string:'CLASS_gt_TY'
//        DESCRIBE  codep:0x224c parp:0xf4e1 size:0x0000 C-string:'DESCRIBE'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe83f = 0xe83f; // UNK_0xe83f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeb35 = 0xeb35; // UNK_0xeb35 size: 26
// {0x56, 0x3a, 0x20, 0x56, 0x4c, 0x22, 0x48, 0xe6, 0x83, 0x4a, 0x33, 0xeb, 0x83, 0x4a, 0x07, 0x40, 0xfa, 0x15, 0x06, 0x00, 0x32, 0x0e, 0xc3, 0x51, 0x90, 0x16}

const unsigned short int pp_UNK_0xeb63 = 0xeb63; // UNK_0xeb63 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xebdb = 0xebdb; // UNK_0xebdb size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_UNK_0xec24 = 0xec24; // UNK_0xec24 size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_UNK_0xf0ac = 0xf0ac; // UNK_0xf0ac size: 278
// {0x3a, 0x20, 0x4c, 0x22, 0x16, 0x16, 0x60, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0xaa, 0xf0, 0xae, 0x0b, 0xb8, 0x27, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0x75, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x20, 0xe6, 0x92, 0x0c, 0xc6, 0xef, 0xe6, 0x06, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0x97, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x52, 0xf0, 0xb8, 0x27, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0xb0, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x38, 0xe6, 0x92, 0x0c, 0xe0, 0xef, 0x5d, 0x17, 0x80, 0x04, 0xc4, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xad, 0x11, 0xb8, 0x27, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0xce, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x40, 0xe6, 0x92, 0x0c, 0xdd, 0x4a, 0x32, 0x62, 0xae, 0x0b, 0x07, 0x13, 0xf5, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x16, 0x16, 0xe6, 0x58, 0x02, 0x00, 0x04, 0xe6, 0x60, 0x16, 0x0a, 0x00, 0x16, 0x16, 0xfa, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xe6, 0x06, 0x90, 0x16, 0x4c, 0x22, 0x43, 0xef, 0xd2, 0x9f, 0x8b, 0x75, 0xaf, 0x64, 0x32, 0x6d, 0x5d, 0x17, 0xf9, 0xbc, 0xd9, 0x84, 0x4f, 0xef, 0xae, 0xf0, 0xc2, 0xf0, 0xd8, 0xf0, 0xea, 0xf0, 0x0c, 0xf1, 0x43, 0xef, 0x63, 0xe7, 0x90, 0x16, 0x4c, 0x22, 0x22, 0x75, 0x5d, 0x17, 0x20, 0x00, 0x5f, 0x12, 0x90, 0x16, 0x4c, 0x22, 0x22, 0x75, 0x5d, 0x17, 0x0b, 0x00, 0x5f, 0x12, 0xfa, 0x15, 0x1e, 0x00, 0x8b, 0x75, 0x9f, 0x64, 0x32, 0x6d, 0x3f, 0x7a, 0x66, 0xf1, 0xfa, 0x15, 0x0a, 0x00, 0x2e, 0x0f, 0xaa, 0xf0, 0x23, 0x6d, 0x42, 0xf1, 0xdf, 0x79, 0x60, 0x16, 0x10, 0x00, 0x66, 0xf1, 0xfa, 0x15, 0x0a, 0x00, 0x2e, 0x0f, 0xaa, 0xf0, 0x23, 0x6d, 0x42, 0xf1, 0x17, 0x5e, 0xae, 0x0b, 0xfa, 0x15, 0x04, 0x00, 0xf4, 0x7a, 0x90, 0x16, 0x4c, 0x22, 0xbb, 0x74, 0xae, 0x0b, 0xc9, 0x74, 0xae, 0x0b, 0x90, 0x16}


const unsigned short int cc_UNK_0xeae4 = 0x000a; // UNK_0xeae4
const unsigned short int cc_UNK_0xeae8 = 0x0011; // UNK_0xeae8
const unsigned short int cc_UNK_0xeaec = 0x0029; // UNK_0xeaec
const unsigned short int cc_UNK_0xeaf0 = 0x002a; // UNK_0xeaf0
const unsigned short int cc_UNK_0xeaf4 = 0x002b; // UNK_0xeaf4


// 0xe602: db 0xf4 0x00 '  '

// ================================================
// 0xe604: WORD 'UNK_0xe606' codep=0x224c parp=0xe606
// ================================================

void UNK_0xe606() // UNK_0xe606
{
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  Push(pp_LSCAN); // LSCAN size: 400
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN size: 400
  COUNT(); // COUNT
  Push(0); // 0
  _at_DS(); // @DS
  _2OVER(); // 2OVER
  _gt_XOR(); // >XOR
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}

// 0xe620: db 0x94 0x73 0x20 0x01 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x04 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x07 0x02 0x17 0x49 0x6c 0x94 0x73 0x20 0x09 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x16 0x01 0x17 0x49 0x6c ' s    Il s    Il s    Il s    Il s    Il'

// ================================================
// 0xe648: WORD 'UNK_0xe64a' codep=0x7420 parp=0xe64a
// ================================================
// 0xe64a: db 0x2b 0x0b 0x03 0x20 0x74 0x3d 0x1c 0x01 0x20 0x74 0x3d 0x1d 0x01 0x20 0x74 0x3d 0x1a 0x01 0x20 0x74 0x3d 0x1b 0x01 '+   t=   t=   t=   t=  '

// ================================================
// 0xe661: WORD 'UNK_0xe663' codep=0x7394 parp=0xe663
// ================================================
// 0xe663: db 0x15 0x00 0x10 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xe669: WORD 'UNK_0xe66b' codep=0x7394 parp=0xe66b
// ================================================
// 0xe66b: db 0x15 0x13 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x1d 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x1f 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x20 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x21 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x22 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x23 0x01 0x32 0xd1 0x6a 0x94 0x73 0x18 0x00 0x03 0x00 0x00 0x00 '   2 j s   2 j s   2 j s   2 j s ! 2 j s " 2 j s # 2 j s      '

// ================================================
// 0xe6a9: WORD 'UNK_0xe6ab' codep=0x7394 parp=0xe6ab
// ================================================
// 0xe6ab: db 0x1a 0x00 0x10 0x17 0xa9 0x6b '     k'

// ================================================
// 0xe6b1: WORD 'UNK_0xe6b3' codep=0x7420 parp=0xe6b3
// ================================================
// 0xe6b3: db 0x10 0x0b 0x0f 0x20 0x74 0x10 0x20 0x02 0x94 0x73 0x44 0x00 0x14 0x22 0x07 0x6f '    t    sD  " o'

// ================================================
// 0xe6c3: WORD 'UNK_0xe6c5' codep=0x7394 parp=0xe6c5
// ================================================
// 0xe6c5: db 0x44 0x17 0x03 0x22 0x07 0x6f 'D  " o'

// ================================================
// 0xe6cb: WORD 'UNK_0xe6cd' codep=0x7394 parp=0xe6cd
// ================================================
// 0xe6cd: db 0x44 0x1f 0x01 0x22 0x07 0x6f 0x20 0x74 0x44 0x17 0x01 0x4c 0x22 0x5d 0x17 0x1c 0x00 0xf2 0x0e 0x43 0x73 0x5d 0x17 0x18 0x00 0x5d 0x17 0x2e 0x00 0x25 0xab 0xe6 0x06 0x90 0x16 'D  " o tD  L"]     Cs]   ] . %     '

// ================================================
// 0xe6f0: WORD 'APAUSE' codep=0x224c parp=0xe6fb
// ================================================
// entry

void APAUSE() // APAUSE
{
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  _099(); // 099
  _at_COLOR(); // @COLOR
  _gt_R(); // >R
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  if (Pop() == 0) goto label1;
  SetColor("PINK");
  goto label2;

  label1:
  SetColor("BLUE");

  label2:
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  SetColor("WHITE");

  label3:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label4:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(Read16(regsp)); // DUP
  _ro_XYSCAN(); // (XYSCAN case
  Pop(); Pop();// 2DROP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  Push(h); // I
  if (Pop() == 0) goto label5;
  SetColor("RED");
  goto label6;

  label5:
  SetColor("DK-BLUE");

  label6:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
  Pop(); // DROP
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  ON_2(); // ON_2
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe763: WORD 'UNK_0xe765' codep=0x224c parp=0xe765
// ================================================

void UNK_0xe765() // UNK_0xe765
{
  Push(0x4e20); Push(0x0000);
  APAUSE(); // APAUSE
}


// ================================================
// 0xe76f: WORD 'UNK_0xe771' codep=0x224c parp=0xe771
// ================================================

void UNK_0xe771() // UNK_0xe771
{
  Push(1); // 1
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _plus__ex__2(); // +!_2
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES size: 2
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe765(); // UNK_0xe765
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _099(); // 099
}


// ================================================
// 0xe78d: WORD 'UNK_0xe78f' codep=0x224c parp=0xe78f
// ================================================

void UNK_0xe78f() // UNK_0xe78f
{
  UNK_0xe771(); // UNK_0xe771
  WUP(); // WUP
}


// ================================================
// 0xe795: WORD 'UNK_0xe797' codep=0x224c parp=0xe797
// ================================================

void UNK_0xe797() // UNK_0xe797
{
  _2DUP(); // 2DUP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_BL); // BL
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  goto label2;

  label1:
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffea

  _gt_R(); // >R
  SWAP(); // SWAP
  Push(i); // I
  _dash_(); // -
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  SWAP(); // SWAP
}

// 0xe7c5: db 0x4c 0x22 0x20 0x0f 0xf2 0x0e 0x7f 0x0e 0x41 0x0e 0x7c 0x10 0x5d 0x14 0xb4 0x13 0xb3 0x0e 0x1a 0x15 0x9f 0x13 0x90 0x16 'L"     A | ]           '

// ================================================
// 0xe7dd: WORD 'UNK_0xe7df' codep=0x224c parp=0xe7df
// ================================================

void UNK_0xe7df() // UNK_0xe7df
{
  UNK_0xe797(); // UNK_0xe797
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0); // 0
  ROT(); // ROT
  ROT(); // ROT

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_BL); // BL
  _eq_(); // =
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(i); // I'
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(i); // I
  Push(cc__3); // 3
  PICK(); // PICK
  _dash_(); // -
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Push(Read16(regsp)); // DUP
  Push(cc__4); // 4
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  ROT(); // ROT
  Push(cc__3); // 3
  PICK(); // PICK
  _dash_(); // -
  Push(Pop()-1); // 1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe831: WORD 'UNK_0xe833' codep=0x224c parp=0xe833
// ================================================

void UNK_0xe833() // UNK_0xe833
{
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
}


// ================================================
// 0xe83d: WORD 'UNK_0xe83f' codep=0x1d29 parp=0xe83f
// ================================================
// 0xe83f: db 0x3a 0x20 ': '

// ================================================
// 0xe841: WORD 'UNK_0xe843' codep=0x224c parp=0xe843
// ================================================

void UNK_0xe843() // UNK_0xe843
{
  Push(pp_CTX); // CTX size: 2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_WCHARS); // WCHARS size: 2
  Push(Read16(Pop())); // @
  _st_(); // <
}


// ================================================
// 0xe851: WORD 'UNK_0xe853' codep=0x224c parp=0xe853
// ================================================

void UNK_0xe853() // UNK_0xe853
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  UNK_0xe843(); // UNK_0xe843
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xe78f(); // UNK_0xe78f
  _gt_BOTT(); // >BOTT
  Push(pp_CTX); // CTX size: 2
  _099(); // 099

  label2:
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(0x002e);
  _eq_(); // =
  Push(pp_CTX); // CTX size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  SPACE(); // SPACE

  label3:
  Push(Read16(regsp)); // DUP
  Push(pp_CTX); // CTX size: 2
  _plus__ex__2(); // +!_2
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(pp_UNK_0xe83f); // UNK_0xe83f size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label4;
  Push(0xfffc);
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xe83f); // UNK_0xe83f size: 0
  _099(); // 099

  label4:
  return;

  label1:
  Pop(); // DROP
}

// 0xe8a9: db 0x4c 0x22 0x34 0x75 0x89 0x12 0x90 0x16 0x4c 0x22 0xb6 0xe6 0xae 0x0b 0xb4 0x0d 0xa9 0xe8 0xa2 0x0e 0x2e 0x0f 0xf5 0x12 0xa2 0x0e 0x3d 0x0f 0xf5 0x12 0x07 0x13 0xa2 0x0e 0xa7 0x3b 0xf5 0x12 0xdd 0x4a 0xa2 0x0e 0x5d 0x17 0x10 0x00 0xf5 0x12 0x07 0x13 0x2a 0x5c 0xae 0x0b 0x89 0x12 0x3e 0x13 0xf5 0x12 0xf5 0x12 0xf5 0x12 0xf5 0x12 0x72 0x0f 0x90 0x0e 0x32 0x0e 0x90 0x16 'L"4u    L"          .     =        ;   J  ]       *\    >         r   2   '

// ================================================
// 0xe8f3: WORD 'UNK_0xe8f5' codep=0x224c parp=0xe8f5
// ================================================

void UNK_0xe8f5() // UNK_0xe8f5
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0); // 0
  Push(0xe8b3);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}

// 0xe909: db 0x4c 0x22 0x20 0x0f 0xb1 0xe8 0xfa 0x15 0x41 0x00 0xb1 0xe6 0xcd 0x0c 0x51 0xe8 0x3d 0xe8 0x57 0x6d 0xf3 0xe8 0x2e 0x0f 0x2d 0x12 0xfa 0x15 0x2b 0x00 0x41 0x0e 0x3d 0x0f 0x5f 0x12 0xfa 0x15 0x10 0x00 0x07 0x3f 0x05 0x20 0x41 0x4e 0x44 0x20 0x51 0xe8 0x60 0x16 0x13 0x00 0x41 0x0e 0x2e 0x0f 0x2d 0x12 0xfa 0x15 0x09 0x00 0x07 0x3f 0x02 0x2c 0x20 0x51 0xe8 0xf6 0x0f 0x90 0x16 'L"      A     Q = Wm  . -   + A = _      ?  AND Q `   A . -      ? , Q     '

// ================================================
// 0xe954: WORD 'UNK_0xe956' codep=0x224c parp=0xe956
// ================================================

void UNK_0xe956() // UNK_0xe956
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(0xe90b);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Pop(); // DROP
  UNK_0xe833(); // UNK_0xe833
  Push(0); // 0
}


// ================================================
// 0xe970: WORD 'UNK_0xe972' codep=0x224c parp=0xe972
// ================================================

void UNK_0xe972() // UNK_0xe972
{
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(Pop()-1); // 1-
  if (Pop() == 0) goto label1;

  UNK_0x3f09("ARE");
  return;

  label1:

  UNK_0x3f09("IS");
}


// ================================================
// 0xe98b: WORD 'UNK_0xe98d' codep=0x224c parp=0xe98d
// ================================================

void UNK_0xe98d() // UNK_0xe98d
{
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(Pop()-1); // 1-
  if (Pop() == 0) goto label1;

  UNK_0x3f09("HAVE");
  return;

  label1:

  UNK_0x3f09("HAS");
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(Pop()-1); // 1-
  if (Pop() == 0) return;

  UNK_0x3f09("S");
}


// ================================================
// 0xe9b8: WORD 'UNK_0xe9ba' codep=0x224c parp=0xe9ba
// ================================================

void UNK_0xe9ba() // UNK_0xe9ba
{
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(UNK_0xe6b3)
  COUNT(); // COUNT
  UNK_0xe853(); // UNK_0xe853
  ICLOSE(); // ICLOSE
  UNK_0xe833(); // UNK_0xe833
  Push(0); // 0
}

// 0xe9cc: db 0x4c 0x22 0x32 0x0e 0x20 0x0f 0x90 0x16 'L"2     '

// ================================================
// 0xe9d4: WORD '>SPECIAL' codep=0x4b3b parp=0xe9e1
// ================================================

void _gt_SPECIAL() // >SPECIAL
{
  switch(Pop()) // >SPECIAL
  {
  case 37:
    UNK_0xe956(); // UNK_0xe956
    break;
  case 47:
    UNK_0xe972(); // UNK_0xe972
    break;
  case 35:
    UNK_0xe98d(); // UNK_0xe98d
    break;
  case 43:
    UNK_0xe9aa(); // UNK_0xe9aa
    break;
  case 42:
    UNK_0xe9ba(); // UNK_0xe9ba
    break;
  default:
    Push(0); // 0
    break;

  }
}

// ================================================
// 0xe9f9: WORD 'UNK_0xe9fb' codep=0x224c parp=0xe9fb
// ================================================

void UNK_0xe9fb() // UNK_0xe9fb
{
  Push(pp_UNK_0xe83f); // UNK_0xe83f size: 0
  _099(); // 099
  _at_COLOR(); // @COLOR
  _gt_R(); // >R
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _eq_(); // =
  Push(pp_HAZE); // HAZE size: 4
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  _gt_SPECIAL(); // >SPECIAL case
  goto label2;

  label1:
  Push(0); // 0

  label2:
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label3;
  UNK_0xe853(); // UNK_0xe853
  UNK_0xe833(); // UNK_0xe833

  label3:
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xea31: WORD 'UNK_0xea33' codep=0x224c parp=0xea33
// ================================================

void UNK_0xea33() // UNK_0xea33
{
  _gt_BOTT(); // >BOTT
  UNK_0xe78f(); // UNK_0xe78f

  label1:
  UNK_0xe7df(); // UNK_0xe7df
  UNK_0xe9fb(); // UNK_0xe9fb
  UNK_0xe853(); // UNK_0xe853
  Push(1); // 1
  Push(pp_CTX); // CTX size: 2
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xea4f: WORD 'UNK_0xea51' codep=0x224c parp=0xea51
// ================================================

void UNK_0xea51() // UNK_0xea51
{
  Push(pp_CTX); // CTX size: 2
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _099(); // 099
  Push(0x65ed); // IFIELD(PHRASE)
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN size: 400
  COUNT(); // COUNT
  UNK_0xea33(); // UNK_0xea33
}


// ================================================
// 0xea67: WORD '.PHRASE' codep=0x224c parp=0xea73
// ================================================
// entry

void _dot_PHRASE() // .PHRASE
{
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _gt_1FONT(); // >1FONT
  UNK_0xea51(); // UNK_0xea51
}


// ================================================
// 0xea81: WORD 'UNK_0xea83' codep=0x224c parp=0xea83
// ================================================

void UNK_0xea83() // UNK_0xea83
{
  ILAST(); // ILAST
  CI(); // CI
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0x65e7); // IFIELD(INST-OF)
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea93: WORD '.APHRASE' codep=0x224c parp=0xeaa0
// ================================================
// entry

void _dot_APHRASE() // .APHRASE
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _dot_PHRASE(); // .PHRASE
  UNK_0xea83(); // UNK_0xea83
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}

// 0xeaae: db 0x4c 0x22 0x5d 0x17 0x64 0x00 0xc4 0x0f 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x00 0x01 0xc4 0x4b 0x90 0x16 0x4c 0x22 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x90 0x16 0x4c 0x22 0xad 0x11 0x89 0x11 0x90 0x16 'L"] d     L"  ]    K  L"  =  K  L". ] d  K  L"      '

// ================================================
// 0xeae2: WORD 'UNK_0xeae4' codep=0x2214 parp=0xeae4
// ================================================
// 0xeae4: db 0x0a 0x00 '  '

// ================================================
// 0xeae6: WORD 'UNK_0xeae8' codep=0x2214 parp=0xeae8
// ================================================
// 0xeae8: db 0x11 0x00 '  '

// ================================================
// 0xeaea: WORD 'UNK_0xeaec' codep=0x2214 parp=0xeaec
// ================================================
// 0xeaec: db 0x29 0x00 ') '

// ================================================
// 0xeaee: WORD 'UNK_0xeaf0' codep=0x2214 parp=0xeaf0
// ================================================
// 0xeaf0: db 0x2a 0x00 '* '

// ================================================
// 0xeaf2: WORD 'UNK_0xeaf4' codep=0x2214 parp=0xeaf4
// ================================================
// 0xeaf4: db 0x2b 0x00 '+ '

// ================================================
// 0xeaf6: WORD 'RACE>TRA' codep=0x4b3b parp=0xeb03
// ================================================

void RACE_gt_TRA() // RACE>TRA
{
  switch(Pop()) // RACE>TRA
  {
  case 1:
    Push(1); // 1
    break;
  case 2:
    Push(2); // 2
    break;
  case 8:
    Push(cc__3); // 3
    break;
  case 11:
    Push(cc_UNK_0xeaf4); // UNK_0xeaf4
    break;
  case 10:
    Push(cc__6); // 6
    break;
  case 4:
    Push(cc__8); // 8
    break;
  case 5:
    Push(cc__9); // 9
    break;
  case 7:
    Push(cc_UNK_0xeae4); // UNK_0xeae4
    break;
  case 6:
    Push(cc_UNK_0xeae8); // UNK_0xeae8
    break;
  case 18:
    Push(cc_UNK_0xeaec); // UNK_0xeaec
    break;
  case 19:
    Push(cc_UNK_0xeaf0); // UNK_0xeaf0
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xeb33: WORD 'UNK_0xeb35' codep=0x1d29 parp=0xeb35
// ================================================
// 0xeb35: db 0x56 0x3a 0x20 0x56 0x4c 0x22 0x48 0xe6 0x83 0x4a 0x33 0xeb 0x83 0x4a 0x07 0x40 0xfa 0x15 0x06 0x00 0x32 0x0e 0xc3 0x51 0x90 0x16 'V: VL"H  J3  J @    2  Q  '

// ================================================
// 0xeb4f: WORD 'UNK_0xeb51' codep=0x224c parp=0xeb51
// ================================================

void UNK_0xeb51() // UNK_0xeb51
{
  Push(cc_FALSE); // FALSE
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xeb3b);
  ALL(); // ALL
}


// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x1d29 parp=0xeb63
// ================================================
// 0xeb63: db 0x3a 0x20 ': '

// ================================================
// 0xeb65: WORD 'UNK_0xeb67' codep=0x224c parp=0xeb67
// ================================================

void UNK_0xeb67() // UNK_0xeb67
{
  UNK_0xeb51(); // UNK_0xeb51
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xeaf4); // UNK_0xeaf4
  Push(pp_UNK_0xeb63); // UNK_0xeb63 size: 0
  Push(Read16(Pop())); // @
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(pp_UNK_0xeb35); // UNK_0xeb35 size: 0
  _1_dot_5_at_(); // 1.5@
  Push(0x65ec); // IFIELD(UNK_0xe64a)
  _1_dot_5_ex__2(); // 1.5!_2
  goto label1;

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeb8b: WORD 'UNK_0xeb8d' codep=0x224c parp=0xeb8d
// ================================================

void UNK_0xeb8d() // UNK_0xeb8d
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(cc__3); // 3
  R_gt_(); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT size: 2
  _st__ex__gt_(); // <!>
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT size: 2
  _st__ex__gt_(); // <!>
  Push(0x0099);
  Push(pp_WBLT); // WBLT size: 2
  _st__ex__gt_(); // <!>
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(pp_XORMODE); // XORMODE size: 2
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE size: 2
  OFF_2(); // OFF_2
}


// ================================================
// 0xebbf: WORD 'UNK_0xebc1' codep=0x224c parp=0xebc1
// ================================================

void UNK_0xebc1() // UNK_0xebc1
{
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  UNK_0xeb8d(); // UNK_0xeb8d
}


// ================================================
// 0xebcb: WORD 'UNK_0xebcd' codep=0x224c parp=0xebcd
// ================================================

void UNK_0xebcd() // UNK_0xebcd
{
  RACE_gt_TRA(); // RACE>TRA case
  Push(0x0015);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
}


// ================================================
// 0xebd9: WORD 'UNK_0xebdb' codep=0x1d29 parp=0xebdb
// ================================================
// 0xebdb: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xebde: WORD 'UNK_0xebe0' codep=0x224c parp=0xebe0
// ================================================

void UNK_0xebe0() // UNK_0xebe0
{
  CI(); // CI
  Push(pp_UNK_0xebdb); // UNK_0xebdb size: 0
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xebe8: WORD 'UNK_0xebea' codep=0x224c parp=0xebea
// ================================================

void UNK_0xebea() // UNK_0xebea
{
  Push(pp_UNK_0xebdb); // UNK_0xebdb size: 0
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1 size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xebe0(); // UNK_0xebe0
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec0e: WORD 'UNK_0xec10' codep=0x224c parp=0xec10
// ================================================

void UNK_0xec10() // UNK_0xec10
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xebe0(); // UNK_0xebe0
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec22: WORD 'UNK_0xec24' codep=0x1d29 parp=0xec24
// ================================================
// 0xec24: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xec27: WORD 'UNK_0xec29' codep=0x224c parp=0xec29
// ================================================

void UNK_0xec29() // UNK_0xec29
{
  CI(); // CI
  Push(pp_UNK_0xec24); // UNK_0xec24 size: 0
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xec31: WORD 'UNK_0xec33' codep=0x224c parp=0xec33
// ================================================

void UNK_0xec33() // UNK_0xec33
{
  Push(pp_UNK_0xec24); // UNK_0xec24 size: 0
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xec39: WORD 'UNK_0xec3b' codep=0x224c parp=0xec3b
// ================================================

void UNK_0xec3b() // UNK_0xec3b
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xec33(); // UNK_0xec33
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xec29(); // UNK_0xec29
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec4d: WORD 'UNK_0xec4f' codep=0x224c parp=0xec4f
// ================================================

void UNK_0xec4f() // UNK_0xec4f
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xec33(); // UNK_0xec33
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xec29(); // UNK_0xec29
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec61: WORD 'UNK_0xec63' codep=0x224c parp=0xec63
// ================================================

void UNK_0xec63() // UNK_0xec63
{
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(cc_UNK_0xeaf4); // UNK_0xeaf4
  SWAP(); // SWAP
  IFIND(); // IFIND
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec75: WORD 'UNK_0xec77' codep=0x224c parp=0xec77
// ================================================

void UNK_0xec77() // UNK_0xec77
{
  UNK_0xebf2(); // UNK_0xebf2
  Push(0x0038);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec87: WORD 'UNK_0xec89' codep=0x224c parp=0xec89
// ================================================

void UNK_0xec89() // UNK_0xec89
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1 size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  OVER(); // OVER
  Push(1); // 1
  _star_CREATE(); // *CREATE
  UNK_0xebcd(); // UNK_0xebcd
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(0x0026);
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(Pop()+1); // 1+
  Push(0x0010);
  CMOVE_2(); // CMOVE_2
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Push(1); // 1
  Push(pp_SCROLL_dash_); // SCROLL- size: 2
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xecbb: WORD 'UNK_0xecbd' codep=0x224c parp=0xecbd
// ================================================

void UNK_0xecbd() // UNK_0xecbd
{
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  _099(); // 099
  Push(pp_SCROLL_dash_); // SCROLL- size: 2
  _099(); // 099
  Push(1); // 1
  Push(2); // 2
  Push(cc__6); // 6
  Push(cc__4); // 4
  Push(cc__7); // 7
  Push(0x0012);
  Push(cc_UNK_0xeae4); // UNK_0xeae4
  Push(cc__8); // 8
  Push(0x000b);
  Push(0x0013);
  Push(cc__5); // 5
  Push(0x000b);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _gt_R(); // >R
  R_at_(); // R@
  UNK_0xec63(); // UNK_0xec63
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  UNK_0xec77(); // UNK_0xec77
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  UNK_0xec89(); // UNK_0xec89

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xffe2

}


// ================================================
// 0xed0d: WORD 'UNK_0xed0f' codep=0x224c parp=0xed0f
// ================================================

void UNK_0xed0f() // UNK_0xed0f
{
  Push(0x65f2); // IFIELD(TEXT-TE)
  _do__dot_(); // $.
}


// ================================================
// 0xed15: WORD 'UNK_0xed17' codep=0x224c parp=0xed17
// ================================================

void UNK_0xed17() // UNK_0xed17
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_WLINES); // WLINES size: 2
  Push(Read16(Pop())); // @
  Push(pp_SCROLL_dash_); // SCROLL- size: 2
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(2); // 2
  _dash_(); // -
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  UNK_0xed0f(); // UNK_0xed0f
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe4

}


// ================================================
// 0xed49: WORD 'UNK_0xed4b' codep=0x224c parp=0xed4b
// ================================================

void UNK_0xed4b() // UNK_0xed4b
{
  UNK_0xebf2(); // UNK_0xebf2
  UNK_0xebe0(); // UNK_0xebe0
  UNK_0xed17(); // UNK_0xed17
  IPREV(); // IPREV
  UNK_0xec29(); // UNK_0xec29
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xed5b: WORD 'UNK_0xed5d' codep=0x224c parp=0xed5d
// ================================================

void UNK_0xed5d() // UNK_0xed5d
{
  Push(0x53a4); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  _dot_TTY(); // .TTY
}


// ================================================
// 0xed69: WORD 'UNK_0xed6b' codep=0x224c parp=0xed6b
// ================================================

void UNK_0xed6b() // UNK_0xed6b
{
  UNK_0xebc1(); // UNK_0xebc1
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xed73: WORD 'UNK_0xed75' codep=0x224c parp=0xed75
// ================================================

void UNK_0xed75() // UNK_0xed75
{
  _gt_SSCT(); // >SSCT
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0xed5d(); // UNK_0xed5d
  Push(pp_SCROLL_dash_); // SCROLL- size: 2
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  MIN(); // MIN
  Push(pp_WLINES); // WLINES size: 2
  _ex__2(); // !_2
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES size: 2
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  _ex__2(); // !_2
  UNK_0xed4b(); // UNK_0xed4b
  UNK_0xed6b(); // UNK_0xed6b
}


// ================================================
// 0xeda5: WORD 'UNK_0xeda7' codep=0x224c parp=0xeda7
// ================================================

void UNK_0xeda7() // UNK_0xeda7
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1 size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedb7: WORD 'UNK_0xedb9' codep=0x224c parp=0xedb9
// ================================================

void UNK_0xedb9() // UNK_0xedb9
{
  CLICK(); // CLICK
  UNK_0xebfc(); // UNK_0xebfc
  UNK_0xec3b(); // UNK_0xec3b
  UNK_0xec33(); // UNK_0xec33
  _gt_C_plus_S(); // >C+S
  UNK_0xed6b(); // UNK_0xed6b
  Push(0x65f2); // IFIELD(TEXT-TE)
  WLINE_dash_U(); // WLINE-U
  UNK_0xed6b(); // UNK_0xed6b
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedcf: WORD 'UNK_0xedd1' codep=0x224c parp=0xedd1
// ================================================

void UNK_0xedd1() // UNK_0xedd1
{
  CLICK(); // CLICK
  UNK_0xec10(); // UNK_0xec10
  UNK_0xec4f(); // UNK_0xec4f
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  UNK_0xed6b(); // UNK_0xed6b
  Push(cc__dash_2); // -2
  Push(pp_WTOP); // WTOP size: 2
  _plus__ex__2(); // +!_2
  Push(0x65f2); // IFIELD(TEXT-TE)
  WLINE_dash_D(); // WLINE-D
  Push(2); // 2
  Push(pp_WTOP); // WTOP size: 2
  _plus__ex__2(); // +!_2
  UNK_0xed6b(); // UNK_0xed6b
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedf3: WORD 'RACE-SCR' codep=0x4b3b parp=0xee00
// ================================================

void RACE_dash_SCR() // RACE-SCR
{
  switch(Pop()) // RACE-SCR
  {
  case 65535:
    UNK_0xedd1(); // UNK_0xedd1
    break;
  case 1:
    UNK_0xedb9(); // UNK_0xedb9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xee0c: WORD 'UNK_0xee0e' codep=0x224c parp=0xee0e
// ================================================

void UNK_0xee0e() // UNK_0xee0e
{
  UNK_0xecbd(); // UNK_0xecbd
  UNK_0xeda7(); // UNK_0xeda7
  if (Pop() == 0) goto label1;
  UNK_0xed75(); // UNK_0xed75
  UNK_0xebf2(); // UNK_0xebf2

  label4:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  RACE_dash_SCR(); // RACE-SCR case
  goto label3;

  label2:
  Pop(); // DROP

  label3:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label4;
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  goto label1;

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  DELETE_dash_(); // DELETE-
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  ON_2(); // ON_2
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
}

// 0xee4c: db 0x4c 0x22 0x32 0x62 0xae 0x0b 0xdd 0x4a 0x4d 0xe6 0x92 0x0c 0xdd 0x4a 0xf5 0x12 0x32 0x62 0xae 0x0b 0x07 0x13 0x52 0xe6 0x92 0x0c 0xdd 0x4a 0xf5 0x12 0x3e 0x13 0x57 0xe6 0x92 0x0c 0xfa 0x15 0x10 0x00 0x8b 0x75 0x3e 0x13 0x00 0x60 0xae 0x0b 0xf5 0x12 0xdd 0x4a 0xf5 0x12 0x5c 0xe6 0x92 0x0c 0xf5 0x12 0x90 0x16 'L"2b   JM    J  2b    R    J  > W        u>  `     J  \       '

// ================================================
// 0xee8a: WORD 'UNK_0xee8c' codep=0x224c parp=0xee8c
// ================================================

void UNK_0xee8c() // UNK_0xee8c
{
  Push(0x5400); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xee96: WORD '?COMSG' codep=0x224c parp=0xeea1
// ================================================
// entry

void _ask_COMSG() // ?COMSG
{
  if (Pop() == 0) goto label1;
  UNK_0xee0e(); // UNK_0xee0e
  _gt_SSCT(); // >SSCT
  CTINIT(); // CTINIT
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _099(); // 099
  return;

  label1:
  Push(pp_UNK_0xeb63); // UNK_0xeb63 size: 0
  _ex__2(); // !_2
  Push(pp_UNK_0xeb35); // UNK_0xeb35 size: 0
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xeb67(); // UNK_0xeb67
}


// ================================================
// 0xeebf: WORD 'UNK_0xeec1' codep=0x224c parp=0xeec1
// ================================================

void UNK_0xeec1() // UNK_0xeec1
{
  Push(0x5478); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeecb: WORD 'UNK_0xeecd' codep=0x224c parp=0xeecd
// ================================================

void UNK_0xeecd() // UNK_0xeecd
{
  Push(0x54c0); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeed7: WORD 'UNK_0xeed9' codep=0x224c parp=0xeed9
// ================================================

void UNK_0xeed9() // UNK_0xeed9
{
  Push(0x5556); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x224c parp=0xeee5
// ================================================

void UNK_0xeee5() // UNK_0xeee5
{
  Push(0x55e5); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeeef: WORD 'UNK_0xeef1' codep=0x224c parp=0xeef1
// ================================================

void UNK_0xeef1() // UNK_0xeef1
{
  Push(0x5674); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(0x5707); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef07: WORD 'UNK_0xef09' codep=0x224c parp=0xef09
// ================================================

void UNK_0xef09() // UNK_0xef09
{
  Push(pp_PAST); // PAST size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xeef1(); // UNK_0xeef1
  return;

  label1:
  UNK_0xeefd(); // UNK_0xeefd
}


// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x224c parp=0xef1d
// ================================================

void UNK_0xef1d() // UNK_0xef1d
{
  Push(pp_PAST); // PAST size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xeec1(); // UNK_0xeec1
  return;

  label1:
  UNK_0xeee5(); // UNK_0xeee5
}


// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x224c parp=0xef31
// ================================================

void UNK_0xef31() // UNK_0xef31
{
  Push(pp_PAST); // PAST size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xee8c(); // UNK_0xee8c
  return;

  label1:
  UNK_0xeed9(); // UNK_0xeed9
}


// ================================================
// 0xef43: WORD 'UNK_0xef45' codep=0x224c parp=0xef45
// ================================================

void UNK_0xef45() // UNK_0xef45
{
  WUP(); // WUP
  Push(1); // 1
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _plus__ex__2(); // +!_2
}

// 0xef4f: db 0x4c 0x22 0x34 0x75 0x20 0x0f 0x5d 0x17 0x12 0x00 0x25 0x40 0xfa 0x15 0x0a 0x00 0x8b 0x75 0x32 0x0e 0x60 0x16 0x06 0x00 0x30 0xe6 0xae 0x0b 0x5d 0x17 0xa2 0xba 0xd9 0x84 0x90 0x16 'L"4u  ]   %@     u2 `   0   ]       '

// ================================================
// 0xef73: WORD 'UNK_0xef75' codep=0x224c parp=0xef75
// ================================================

void UNK_0xef75() // UNK_0xef75
{
  Push(0x578a); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef7f: WORD 'UNK_0xef81' codep=0x224c parp=0xef81
// ================================================

void UNK_0xef81() // UNK_0xef81
{
  Push(0x579a); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef8b: WORD 'UNK_0xef8d' codep=0x224c parp=0xef8d
// ================================================

void UNK_0xef8d() // UNK_0xef8d
{
  Push(0x57ad); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef97: WORD 'UNK_0xef99' codep=0x224c parp=0xef99
// ================================================

void UNK_0xef99() // UNK_0xef99
{
  Push(0x57c0); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xefa3: WORD 'UNK_0xefa5' codep=0x224c parp=0xefa5
// ================================================

void UNK_0xefa5() // UNK_0xefa5
{
  Push(0x57d3); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xefaf: WORD 'UNK_0xefb1' codep=0x224c parp=0xefb1
// ================================================

void UNK_0xefb1() // UNK_0xefb1
{
  Push(0x57e4); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xefbb: WORD '#>SURFAC' codep=0x4b3b parp=0xefc8
// ================================================

void _n__gt_SURFAC() // #>SURFAC
{
  switch(Pop()) // #>SURFAC
  {
  case 1:
    UNK_0xef75(); // UNK_0xef75
    break;
  case 2:
    UNK_0xef8d(); // UNK_0xef8d
    break;
  case 3:
    UNK_0xef81(); // UNK_0xef81
    break;
  case 4:
    UNK_0xef99(); // UNK_0xef99
    break;
  case 5:
    UNK_0xefa5(); // UNK_0xefa5
    break;
  default:
    UNK_0xefb1(); // UNK_0xefb1
    break;

  }
}
// 0xefe0: db 0x4c 0x22 0x5d 0x17 0x5a 0x6a 0x80 0x4e 0xe2 0x4e 0xfc 0x4e 0x20 0x0f 0xd4 0x4e 0xae 0x0b 0xe7 0x0f 0xc0 0x4e 0xae 0x0b 0xb8 0x15 0xca 0x4e 0xae 0x0b 0xe7 0x0f 0xb6 0x4e 0xae 0x0b 0xb8 0x15 0x50 0x0e 0x6e 0x0e 0xbd 0x4d 0xff 0x4d 0x5d 0x17 0x3f 0x00 0x2d 0x12 0xfa 0x15 0x08 0x00 0x2e 0x0f 0x60 0x16 0x04 0x00 0x20 0x0f 0x72 0x0f 0xd0 0x15 0xe2 0xff 0xd0 0x15 0xd2 0xff 0x90 0x16 0x4c 0x22 0xfc 0x25 0xae 0x0b 0x0b 0x26 0xae 0x0b 0x5d 0x17 0xd0 0x07 0x0b 0x26 0x16 0x6d 0x5d 0x17 0x32 0x00 0xfc 0x25 0x16 0x6d 0x69 0x26 0x0b 0x26 0x16 0x6d 0xfc 0x25 0x16 0x6d 0x90 0x16 0x4c 0x22 0x34 0x75 0x5d 0x17 0x12 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x20 0x0f 0x60 0x16 0x2c 0x00 0x28 0xe6 0x92 0x0c 0x5d 0x17 0x59 0x00 0xf2 0x0e 0x43 0x73 0x9f 0x3b 0x72 0x0f 0x20 0x0f 0x9f 0x3b 0x20 0x0f 0xb8 0x15 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x72 0x0f 0xd0 0x15 0xf4 0xff 0xf2 0x0e 0x32 0x0e 0x90 0x16 'L"] Zj N N N   N     N     N     N    P n  M M] ? -     . `     r           L" %   &  ]    & m] 2  % mi& & m % m  L"4u]   F       ` , (   ] Y   Cs ;r    ;     P r   r       2   '

// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x224c parp=0xf094
// ================================================

void UNK_0xf094() // UNK_0xf094
{
  Push(0x5800); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  _dot_TTY(); // .TTY
  Push(0x5830); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf0aa: WORD 'UNK_0xf0ac' codep=0x1d29 parp=0xf0ac
// ================================================
// 0xf0ac: db 0x3a 0x20 0x4c 0x22 0x16 0x16 0x60 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0xaa 0xf0 0xae 0x0b 0xb8 0x27 0x90 0x16 0x4c 0x22 0x16 0x16 0x75 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x20 0xe6 0x92 0x0c 0xc6 0xef 0xe6 0x06 0x90 0x16 0x4c 0x22 0x16 0x16 0x97 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x52 0xf0 0xb8 0x27 0x90 0x16 0x4c 0x22 0x16 0x16 0xb0 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x38 0xe6 0x92 0x0c 0xe0 0xef 0x5d 0x17 0x80 0x04 0xc4 0x0f 0x5d 0x17 0x64 0x00 0xad 0x11 0xb8 0x27 0x90 0x16 0x4c 0x22 0x16 0x16 0xce 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x40 0xe6 0x92 0x0c 0xdd 0x4a 0x32 0x62 0xae 0x0b 0x07 0x13 0xf5 0x12 0xfa 0x15 0x0e 0x00 0x16 0x16 0xe6 0x58 0x02 0x00 0x04 0xe6 0x60 0x16 0x0a 0x00 0x16 0x16 0xfa 0x58 0x02 0x00 0x04 0xe6 0xe6 0x06 0x90 0x16 0x4c 0x22 0x43 0xef 0xd2 0x9f 0x8b 0x75 0xaf 0x64 0x32 0x6d 0x5d 0x17 0xf9 0xbc 0xd9 0x84 0x4f 0xef 0xae 0xf0 0xc2 0xf0 0xd8 0xf0 0xea 0xf0 0x0c 0xf1 0x43 0xef 0x63 0xe7 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0xfa 0x15 0x1e 0x00 0x8b 0x75 0x9f 0x64 0x32 0x6d 0x3f 0x7a 0x66 0xf1 0xfa 0x15 0x0a 0x00 0x2e 0x0f 0xaa 0xf0 0x23 0x6d 0x42 0xf1 0xdf 0x79 0x60 0x16 0x10 0x00 0x66 0xf1 0xfa 0x15 0x0a 0x00 0x2e 0x0f 0xaa 0xf0 0x23 0x6d 0x42 0xf1 0x17 0x5e 0xae 0x0b 0xfa 0x15 0x04 0x00 0xf4 0x7a 0x90 0x16 0x4c 0x22 0xbb 0x74 0xae 0x0b 0xc9 0x74 0xae 0x0b 0x90 0x16 ': L"  `X           '  L"  uX                L"   X      R  '  L"   X      8     ]     ] d    '  L"   X      @    J2b             X    `      X        L"C    u d2m]     O           C c   L""u]   _   L""u]   _      u d2m?zf     .   #mB  y`   f     .   #mB  ^       z  L" t   t    '

// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  Push(pp_UNK_0xf0ac); // UNK_0xf0ac size: 0
  _099(); // 099
  Push(pp__ro_SYSTEM); // (SYSTEM size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf174);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT) size: 4
  _1_dot_5_ex__2(); // 1.5!_2
}

// 0xf1e6: db 0x14 0x22 0x90 0x01 0x4c 0x22 0x4c 0xee 0xfa 0x15 0x44 0x00 0x30 0x50 0x9d 0x86 0x45 0x8d 0x5d 0x17 0x24 0x00 0xe6 0xf1 0xc4 0x0f 0x5d 0x17 0xa1 0x00 0x72 0x0f 0xf2 0x0e 0x5d 0x17 0x24 0x00 0xe6 0xf1 0xc4 0x0f 0x5d 0x17 0x78 0x00 0x72 0x0f 0xf2 0x0e 0x2c 0xf0 0x97 0x3b 0x20 0x0f 0xb8 0x15 0xf0 0x0d 0x48 0x88 0x5d 0x17 0x2c 0x01 0xef 0x2a 0xd0 0x15 0xf4 0xff 0x16 0x88 0x60 0x16 0x04 0x00 0xde 0x0d 0x90 0x16 0x4c 0x22 0x22 0x75 0xb4 0x0d 0xa2 0x0e 0x5d 0x17 0x3d 0x00 0x5f 0x12 0xfa 0x15 0x0a 0x00 0xb6 0xf1 0xea 0xf1 0x60 0x16 0x4e 0x00 0xa2 0x0e 0x5d 0x17 0x0b 0x00 0x5f 0x12 0xfa 0x15 0x42 0x00 0x3f 0x7a 0x66 0xf1 0xfa 0x15 0x38 0x00 0x3f 0x7a 0x07 0x76 0x07 0x13 0xfa 0x15 0x2c 0x00 0x5d 0x17 0x3d 0x00 0x20 0x0f 0x4c 0x7e 0xfa 0x15 0x14 0x00 0xc6 0x75 0x1f 0x7a 0xb6 0xf1 0xdf 0x79 0xea 0xf1 0x7a 0x7a 0x07 0x13 0x60 0x16 0x04 0x00 0xcf 0x51 0xfa 0x15 0x08 0x00 0xb1 0x7a 0x60 0x16 0xd8 0xff 0xdf 0x79 0xdf 0x79 0x90 0x0e 0x32 0x0e 0x90 0x16 ' "  L"L   D 0P  E ] $     ]   r   ] $     ] x r   ,  ;      H ] ,  *      `       L""u    ] = _         ` N   ]   _   B ?zf   8 ?z v    , ] =   L~     u z   y  zz  `    Q     z`    y y  2   '

// ================================================
// 0xf2a4: WORD 'UNK_0xf2a6' codep=0x224c parp=0xf2a6
// ================================================

void UNK_0xf2a6() // UNK_0xf2a6
{
  Push(pp__ro_SYSTEM); // (SYSTEM size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf23a);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2b8: WORD 'SYSCAN' codep=0x224c parp=0xf2c3
// ================================================
// entry

void SYSCAN() // SYSCAN
{
  Push(cc__8); // 8
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(pp_NOF); // NOF size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(pp_NOF); // NOF size: 2
  ON_2(); // ON_2
  Push(pp_FQUIT); // FQUIT size: 2
  _099(); // 099
  CTINIT(); // CTINIT

  UNK_0x3f09("SCANNING...");
  _dot_TTY(); // .TTY
  Push(pp__i_ASYS); // 'ASYS size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  UNK_0xf2a6(); // UNK_0xf2a6
  UNK_0xf1c4(); // UNK_0xf1c4
  Push(pp_FTRIG); // FTRIG size: 2
  _099(); // 099
  goto label3;

  label2:
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _st_(); // <
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  BEEP(); // BEEP
  CTINIT(); // CTINIT
  UNK_0xf094(); // UNK_0xf094

  label3:
  goto label4;

  label1:
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) goto label4;
  Push(0xb7e7); // probable '.NOFUN'
  MODULE(); // MODULE

  label4:
  Push2Words("NULL");
  Push(pp_NOF); // NOF size: 2
  _099(); // 099
}

// 0xf347: db 0x4c 0x22 0xdc 0x1b 0x07 0x41 0x20 0x44 0x45 0x41 0x44 0x20 0xbb 0xe6 0x5d 0x17 0x14 0x00 0x5d 0x17 0x2e 0x00 0x25 0xab 0xe6 0x06 0x90 0x16 'L"   A DEAD   ]   ] . %     '

// ================================================
// 0xf363: WORD 'RCASE' codep=0x4b3b parp=0xf36d
// ================================================

void RCASE() // RCASE
{
  switch(Pop()) // RCASE
  {
  case 1:
    UNK_0xef31(); // UNK_0xef31
    break;
  case 2:
    UNK_0xeecd(); // UNK_0xeecd
    break;
  case 3:
    UNK_0xef31(); // UNK_0xef31
    break;
  case 4:
    UNK_0xeecd(); // UNK_0xeecd
    break;
  case 5:
    UNK_0xef09(); // UNK_0xef09
    break;
  case 6:
    UNK_0xef1d(); // UNK_0xef1d
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf389: WORD 'UNK_0xf38b' codep=0x224c parp=0xf38b
// ================================================

void UNK_0xf38b() // UNK_0xf38b
{
  LoadData("UNK_0xe6c5"); // from 'CREATURE    '
  _at__gt_C_plus_S(); // @>C+S
  _dot_PHRASE(); // .PHRASE
  ICLOSE(); // ICLOSE
  UNK_0xe765(); // UNK_0xe765
  UNK_0xe78f(); // UNK_0xe78f
  LoadData("UNK_0xe6cd"); // from 'CREATURE    '
  _at__gt_C_plus_S(); // @>C+S
  _dot_PHRASE(); // .PHRASE
  ICLOSE(); // ICLOSE
  UNK_0xe765(); // UNK_0xe765
}


// ================================================
// 0xf3a3: WORD 'UNK_0xf3a5' codep=0x224c parp=0xf3a5
// ================================================

void UNK_0xf3a5() // UNK_0xf3a5
{
  PRINT("SOME ", 5); // (.")
  LoadData("UNK_0xe663"); // from 'TRADERS     '
  Push(0x0010);
  _dash_TRAILING(); // -TRAILING
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  LoadData("UNK_0xe66b"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x590b); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  return;

  label1:
  PRINT(" ON FOOT.", 9); // (.")
}


// ================================================
// 0xf3df: WORD 'UNK_0xf3e1' codep=0x224c parp=0xf3e1
// ================================================

void UNK_0xf3e1() // UNK_0xf3e1
{
  Push(pp_CTX); // CTX size: 2
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _099(); // 099
  _at_INST_dash_S(); // @INST-S
  RCASE(); // RCASE case
  UNK_0xea33(); // UNK_0xea33
}

// 0xf3f1: db 0x4c 0x22 0xf2 0x0e 0x87 0x3b 0xb3 0x0f 0x83 0x5d 0xae 0x0b 0x15 0x10 0x72 0x0f 0x5c 0x5d 0xae 0x0b 0xf6 0x0f 0xb3 0x0e 0x9f 0x3b 0xb3 0x0f 0x92 0x0f 0x7b 0x9a 0x90 0x16 'L"   ;   ]    r \]       ;    {   '

// ================================================
// 0xf413: WORD 'UNK_0xf415' codep=0x224c parp=0xf415
// ================================================

void UNK_0xf415() // UNK_0xf415
{
  PRINT("YOUR SHIP", 9); // (.")
}


// ================================================
// 0xf423: WORD 'UNK_0xf425' codep=0x224c parp=0xf425
// ================================================

void UNK_0xf425() // UNK_0xf425
{
  LoadData("ART-NAM"); // from 'ARTIFACT    '
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf435: WORD 'UNK_0xf437' codep=0x224c parp=0xf437
// ================================================

void UNK_0xf437() // UNK_0xf437
{
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xeae4); // UNK_0xeae4
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  _dot_(); // .
  Push(0x5926); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  LoadData("UNK_0xe6ab"); // from 'ELEMENT     '
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf45f: WORD 'UNK_0xf461' codep=0x224c parp=0xf461
// ================================================

void UNK_0xf461() // UNK_0xf461
{
  Push(0x5942); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf46d: WORD 'UNK_0xf46f' codep=0x224c parp=0xf46f
// ================================================

void UNK_0xf46f() // UNK_0xf46f
{
  Push(0xbdda); // probable '.CULT'
  MODULE(); // MODULE
}


// ================================================
// 0xf477: WORD 'UNK_0xf479' codep=0x224c parp=0xf479
// ================================================

void UNK_0xf479() // UNK_0xf479
{
  Push(0xbdda); // probable '.CULT'
  MODULE(); // MODULE
}

// 0xf481: db 0x4c 0x22 0x5d 0x17 0xea 0xbd 0xd9 0x84 0x90 0x16 'L"]       '

// ================================================
// 0xf48b: WORD 'UNK_0xf48d' codep=0x224c parp=0xf48d
// ================================================

void UNK_0xf48d() // UNK_0xf48d
{
  PRINT("A MESSAGE", 9); // (.")
}


// ================================================
// 0xf49b: WORD 'CLASS>TY' codep=0x4b3b parp=0xf4a8
// ================================================
// entry

void CLASS_gt_TY() // CLASS>TY
{
  switch(Pop()) // CLASS>TY
  {
  case 68:
    UNK_0xf38b(); // UNK_0xf38b
    break;
  case 42:
    UNK_0xf461(); // UNK_0xf461
    break;
  case 20:
    UNK_0xf415(); // UNK_0xf415
    break;
  case 41:
    UNK_0xf3e1(); // UNK_0xf3e1
    break;
  case 26:
    UNK_0xf437(); // UNK_0xf437
    break;
  case 28:
    UNK_0xf425(); // UNK_0xf425
    break;
  case 21:
    UNK_0xf3a5(); // UNK_0xf3a5
    break;
  case 31:
    UNK_0xf46f(); // UNK_0xf46f
    break;
  case 33:
    UNK_0xf479(); // UNK_0xf479
    break;
  case 27:
    UNK_0xf48d(); // UNK_0xf48d
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf4d4: WORD 'DESCRIBE' codep=0x224c parp=0xf4e1
// ================================================
// entry

void DESCRIBE() // DESCRIBE
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(pp_COLOR); // COLOR size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  CTINIT(); // CTINIT
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  _gt_BOTT(); // >BOTT
  CLASS_gt_TY(); // CLASS>TY case
  ICLOSE(); // ICLOSE
  Push(i); // I'
  Push(1); // 1
  _gt_(); // >
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(i); // I'
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x05dc);
  MS(); // MS
  UNK_0xef45(); // UNK_0xef45
  UNK_0xef45(); // UNK_0xef45

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffce

  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
}

// 0xf52d: db 0x44 0x45 0x53 0x43 0x52 0x49 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x55 0x52 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DESCRI__________________________URE________________ '
  