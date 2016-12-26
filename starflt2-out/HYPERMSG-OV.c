// ====== OVERLAY 'HYPERMSG-OV' ======
// store offset = 0xe650
// overlay size   = 0x0f10

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe666  codep:0x224c parp:0xe666 size:0x0006 C-string:'UNK_0xe666'
//      UNK_0xe66e  codep:0x224c parp:0xe66e size:0x0014 C-string:'UNK_0xe66e'
//      UNK_0xe684  codep:0x2214 parp:0xe684 size:0x0016 C-string:'UNK_0xe684'
//      UNK_0xe69c  codep:0x7420 parp:0xe69c size:0x0003 C-string:'UNK_0xe69c'
//      UNK_0xe6a1  codep:0x7394 parp:0xe6a1 size:0x0006 C-string:'UNK_0xe6a1'
//      UNK_0xe6a9  codep:0x7420 parp:0xe6a9 size:0x0003 C-string:'UNK_0xe6a9'
//      UNK_0xe6ae  codep:0x7394 parp:0xe6ae size:0x0006 C-string:'UNK_0xe6ae'
//      UNK_0xe6b6  codep:0x7394 parp:0xe6b6 size:0x0006 C-string:'UNK_0xe6b6'
//      UNK_0xe6be  codep:0x7420 parp:0xe6be size:0x0003 C-string:'UNK_0xe6be'
//      UNK_0xe6c3  codep:0x7420 parp:0xe6c3 size:0x0003 C-string:'UNK_0xe6c3'
//      UNK_0xe6c8  codep:0x7420 parp:0xe6c8 size:0x0003 C-string:'UNK_0xe6c8'
//      UNK_0xe6cd  codep:0x7420 parp:0xe6cd size:0x0003 C-string:'UNK_0xe6cd'
//      UNK_0xe6d2  codep:0x7420 parp:0xe6d2 size:0x0003 C-string:'UNK_0xe6d2'
//      UNK_0xe6d7  codep:0x7420 parp:0xe6d7 size:0x0003 C-string:'UNK_0xe6d7'
//      UNK_0xe6dc  codep:0x7420 parp:0xe6dc size:0x0003 C-string:'UNK_0xe6dc'
//      UNK_0xe6e1  codep:0x7420 parp:0xe6e1 size:0x0003 C-string:'UNK_0xe6e1'
//      UNK_0xe6e6  codep:0x7420 parp:0xe6e6 size:0x0003 C-string:'UNK_0xe6e6'
//      UNK_0xe6eb  codep:0x7420 parp:0xe6eb size:0x0003 C-string:'UNK_0xe6eb'
//      UNK_0xe6f0  codep:0x7420 parp:0xe6f0 size:0x0003 C-string:'UNK_0xe6f0'
//      UNK_0xe6f5  codep:0x7420 parp:0xe6f5 size:0x0003 C-string:'UNK_0xe6f5'
//         GET-VES  codep:0x4b3b parp:0xe704 size:0x0010 C-string:'GET_dash_VES'
//      UNK_0xe716  codep:0x224c parp:0xe716 size:0x0070 C-string:'UNK_0xe716'
//      UNK_0xe788  codep:0x224c parp:0xe788 size:0x0012 C-string:'UNK_0xe788'
//      UNK_0xe79c  codep:0x224c parp:0xe79c size:0x002e C-string:'UNK_0xe79c'
//      UNK_0xe7cc  codep:0x224c parp:0xe7cc size:0x0022 C-string:'UNK_0xe7cc'
//      UNK_0xe7f0  codep:0x224c parp:0xe7f0 size:0x0056 C-string:'UNK_0xe7f0'
//         ?LIQUID  codep:0x224c parp:0xe852 size:0x0136 C-string:'_ask_LIQUID'
//      UNK_0xe98a  codep:0x224c parp:0xe98a size:0x0032 C-string:'UNK_0xe98a'
//      DISP-SETUP  codep:0x4b3b parp:0xe9cb size:0x0018 C-string:'DISP_dash_SETUP'
//      UNK_0xe9e5  codep:0x1d29 parp:0xe9e5 size:0x0002 C-string:'UNK_0xe9e5'
//      UNK_0xe9e9  codep:0x224c parp:0xe9e9 size:0x002e C-string:'UNK_0xe9e9'
//      UNK_0xea19  codep:0x224c parp:0xea19 size:0x002c C-string:'UNK_0xea19'
//      UNK_0xea47  codep:0x224c parp:0xea47 size:0x000e C-string:'UNK_0xea47'
//      UNK_0xea57  codep:0x224c parp:0xea57 size:0x0021 C-string:'UNK_0xea57'
//      UNK_0xea7a  codep:0x224c parp:0xea7a size:0x000a C-string:'UNK_0xea7a'
//      UNK_0xea86  codep:0x224c parp:0xea86 size:0x000b C-string:'UNK_0xea86'
//      UNK_0xea93  codep:0x224c parp:0xea93 size:0x000d C-string:'UNK_0xea93'
//      UNK_0xeaa2  codep:0x224c parp:0xeaa2 size:0x000e C-string:'UNK_0xeaa2'
//      UNK_0xeab2  codep:0x224c parp:0xeab2 size:0x0016 C-string:'UNK_0xeab2'
//      UNK_0xeaca  codep:0x224c parp:0xeaca size:0x0015 C-string:'UNK_0xeaca'
//      UNK_0xeae1  codep:0x224c parp:0xeae1 size:0x002c C-string:'UNK_0xeae1'
//      UNK_0xeb0f  codep:0x224c parp:0xeb0f size:0x001c C-string:'UNK_0xeb0f'
//      UNK_0xeb2d  codep:0x224c parp:0xeb2d size:0x0023 C-string:'UNK_0xeb2d'
//      UNK_0xeb52  codep:0x224c parp:0xeb52 size:0x0021 C-string:'UNK_0xeb52'
//      UNK_0xeb75  codep:0x224c parp:0xeb75 size:0x0017 C-string:'UNK_0xeb75'
//      UNK_0xeb8e  codep:0x224c parp:0xeb8e size:0x0020 C-string:'UNK_0xeb8e'
//            NF-M  codep:0x4b3b parp:0xebb7 size:0x0018 C-string:'NF_dash_M'
//         NF-MESS  codep:0x224c parp:0xebdb size:0x0006 C-string:'NF_dash_MESS'
//      UNK_0xebe3  codep:0x224c parp:0xebe3 size:0x002c C-string:'UNK_0xebe3'
//      UNK_0xec11  codep:0x224c parp:0xec11 size:0x0027 C-string:'UNK_0xec11'
//      UNK_0xec3a  codep:0x224c parp:0xec3a size:0x0028 C-string:'UNK_0xec3a'
//      UNK_0xec64  codep:0x224c parp:0xec64 size:0x0026 C-string:'UNK_0xec64'
//      UNK_0xec8c  codep:0x224c parp:0xec8c size:0x0045 C-string:'UNK_0xec8c'
//            NS-M  codep:0x4b3b parp:0xecda size:0x0018 C-string:'NS_dash_M'
//         NS-MESS  codep:0x224c parp:0xecfe size:0x0006 C-string:'NS_dash_MESS'
//      UNK_0xed06  codep:0x7394 parp:0xed06 size:0x0006 C-string:'UNK_0xed06'
//         P-LSEED  codep:0x7394 parp:0xed18 size:0x0006 C-string:'P_dash_LSEED'
//      UNK_0xed20  codep:0x7394 parp:0xed20 size:0x0006 C-string:'UNK_0xed20'
//      UNK_0xed28  codep:0x7420 parp:0xed28 size:0x0003 C-string:'UNK_0xed28'
//      UNK_0xed2d  codep:0x7420 parp:0xed2d size:0x0003 C-string:'UNK_0xed2d'
//      UNK_0xed32  codep:0x224c parp:0xed32 size:0x0012 C-string:'UNK_0xed32'
//            S>CM  codep:0x4b3b parp:0xed4d size:0x0010 C-string:'S_gt_CM'
//      UNK_0xed5f  codep:0x224c parp:0xed5f size:0x0008 C-string:'UNK_0xed5f'
//            OSET  codep:0x224c parp:0xed70 size:0x0058 C-string:'OSET'
//      UNK_0xedca  codep:0x224c parp:0xedca size:0x0006 C-string:'UNK_0xedca'
//      UNK_0xedd2  codep:0x224c parp:0xedd2 size:0x0014 C-string:'UNK_0xedd2'
//      UNK_0xede8  codep:0x224c parp:0xede8 size:0x001f C-string:'UNK_0xede8'
//      UNK_0xee09  codep:0x224c parp:0xee09 size:0x0072 C-string:'UNK_0xee09'
//      UNK_0xee7d  codep:0x224c parp:0xee7d size:0x0028 C-string:'UNK_0xee7d'
//            UF-M  codep:0x4b3b parp:0xeeae size:0x0018 C-string:'UF_dash_M'
//         UF-MESS  codep:0x224c parp:0xeed2 size:0x0006 C-string:'UF_dash_MESS'
//      UNK_0xeeda  codep:0x224c parp:0xeeda size:0x0017 C-string:'UNK_0xeeda'
//      UNK_0xeef3  codep:0x224c parp:0xeef3 size:0x0006 C-string:'UNK_0xeef3'
//      UNK_0xeefb  codep:0x224c parp:0xeefb size:0x0006 C-string:'UNK_0xeefb'
//      UNK_0xef03  codep:0x224c parp:0xef03 size:0x0006 C-string:'UNK_0xef03'
//      UNK_0xef0b  codep:0x224c parp:0xef0b size:0x0006 C-string:'UNK_0xef0b'
//            US-M  codep:0x4b3b parp:0xef1a size:0x0014 C-string:'US_dash_M'
//         US-MESS  codep:0x224c parp:0xef3a size:0x006b C-string:'US_dash_MESS'
//             .EX  codep:0x4b3b parp:0xefad size:0x000c C-string:'_dot_EX'
//      UNK_0xefbb  codep:0x224c parp:0xefbb size:0x0018 C-string:'UNK_0xefbb'
//      UNK_0xefd5  codep:0x7420 parp:0xefd5 size:0x0003 C-string:'UNK_0xefd5'
//      UNK_0xefda  codep:0x1d29 parp:0xefda size:0x0002 C-string:'UNK_0xefda'
//            DMSG  codep:0x224c parp:0xefe5 size:0x00a8 C-string:'DMSG'
//      UNK_0xf08f  codep:0x224c parp:0xf08f size:0x0022 C-string:'UNK_0xf08f'
//          (CTXT)  codep:0x4b3b parp:0xf0bc size:0x0018 C-string:'_ro_CTXT_rc_'
//      UNK_0xf0d6  codep:0x1d29 parp:0xf0d6 size:0x0002 C-string:'UNK_0xf0d6'
//      UNK_0xf0da  codep:0x1d29 parp:0xf0da size:0x0002 C-string:'UNK_0xf0da'
//      UNK_0xf0de  codep:0x1d29 parp:0xf0de size:0x0002 C-string:'UNK_0xf0de'
//      UNK_0xf0e2  codep:0x1d29 parp:0xf0e2 size:0x0002 C-string:'UNK_0xf0e2'
//      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x007f C-string:'UNK_0xf0e6'
//      UNK_0xf167  codep:0x7420 parp:0xf167 size:0x0003 C-string:'UNK_0xf167'
//      UNK_0xf16c  codep:0x7420 parp:0xf16c size:0x0003 C-string:'UNK_0xf16c'
//      UNK_0xf171  codep:0x7420 parp:0xf171 size:0x0003 C-string:'UNK_0xf171'
//      UNK_0xf176  codep:0x224c parp:0xf176 size:0x0016 C-string:'UNK_0xf176'
//      UNK_0xf18e  codep:0x224c parp:0xf18e size:0x0070 C-string:'UNK_0xf18e'
//      UNK_0xf200  codep:0x224c parp:0xf200 size:0x0046 C-string:'UNK_0xf200'
//      UNK_0xf248  codep:0x224c parp:0xf248 size:0x002e C-string:'UNK_0xf248'
//      UNK_0xf278  codep:0x224c parp:0xf278 size:0x0016 C-string:'UNK_0xf278'
//      UNK_0xf290  codep:0x1d29 parp:0xf290 size:0x0002 C-string:'UNK_0xf290'
//          TRAK-E  codep:0x224c parp:0xf29d size:0x0092 C-string:'TRAK_dash_E'
//      UNK_0xf331  codep:0x224c parp:0xf331 size:0x0006 C-string:'UNK_0xf331'
//      UNK_0xf339  codep:0x2214 parp:0xf339 size:0x0002 C-string:'UNK_0xf339'
//      UNK_0xf33d  codep:0x224c parp:0xf33d size:0x0006 C-string:'UNK_0xf33d'
//           @'EXT  codep:0x4b3b parp:0xf34d size:0x0010 C-string:'_at__i_EXT'
//         (!'EXT)  codep:0x224c parp:0xf369 size:0x000c C-string:'_ro__ex__i_EXT_rc_'
//         +A-VESS  codep:0x224c parp:0xf381 size:0x007e C-string:'_plus_A_dash_VESS'
//      UNK_0xf401  codep:0x224c parp:0xf401 size:0x0028 C-string:'UNK_0xf401'
//      UNK_0xf42b  codep:0x7420 parp:0xf42b size:0x0003 C-string:'UNK_0xf42b'
//      UNK_0xf430  codep:0x1d29 parp:0xf430 size:0x0002 C-string:'UNK_0xf430'
//      UNK_0xf434  codep:0x1d29 parp:0xf434 size:0x007c C-string:'UNK_0xf434'
//      UNK_0xf4b2  codep:0x224c parp:0xf4b2 size:0x0028 C-string:'UNK_0xf4b2'
//         >ORBITS  codep:0x224c parp:0xf4e6 size:0x001e C-string:'_gt_ORBITS'
//      UNK_0xf506  codep:0x224c parp:0xf506 size:0x001e C-string:'UNK_0xf506'
//         ORBITS>  codep:0x224c parp:0xf530 size:0x0000 C-string:'ORBITS_gt_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe9e5[2] = {0x00, 0x00}; // UNK_0xe9e5
unsigned char UNK_0xefda[2] = {0x3a, 0x20}; // UNK_0xefda
unsigned char UNK_0xf0d6[2] = {0x3a, 0x20}; // UNK_0xf0d6
unsigned char UNK_0xf0da[2] = {0x3a, 0x20}; // UNK_0xf0da
unsigned char UNK_0xf0de[2] = {0x3a, 0x20}; // UNK_0xf0de
unsigned char UNK_0xf0e2[2] = {0x3a, 0x20}; // UNK_0xf0e2
unsigned char UNK_0xf290[2] = {0x3a, 0x20}; // UNK_0xf290
unsigned char UNK_0xf430[2] = {0x3a, 0x20}; // UNK_0xf430
unsigned char UNK_0xf434[124] = {0x3a, 0x20, 0x4c, 0x22, 0xaf, 0x3b, 0x2e, 0xf4, 0xae, 0x0b, 0xe7, 0x0f, 0xb8, 0x15, 0x50, 0x0e, 0x13, 0x4a, 0x32, 0xf4, 0xae, 0x0b, 0xf5, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x50, 0x0e, 0x2e, 0xf4, 0x16, 0x6d, 0x4a, 0x17, 0xd0, 0x15, 0xe8, 0xff, 0x2e, 0xf4, 0xae, 0x0b, 0x90, 0x16, 0x4c, 0x22, 0x22, 0x75, 0x5d, 0x17, 0x20, 0x00, 0x5f, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x36, 0xf4, 0x60, 0x16, 0x04, 0x00, 0x20, 0x0f, 0x5d, 0x17, 0x0b, 0x00, 0x87, 0x3b, 0xa9, 0x81, 0x2d, 0x7c, 0xdb, 0x3f, 0xa9, 0x7b, 0x07, 0x76, 0xfa, 0x15, 0x0c, 0x00, 0xb5, 0x75, 0xa9, 0x7b, 0xe2, 0x7a, 0x60, 0x16, 0x16, 0x00, 0x8b, 0x75, 0xf1, 0x7b, 0x8d, 0x7a, 0xfa, 0x15, 0x0a, 0x00, 0xc9, 0x7a, 0x9e, 0x7e, 0x60, 0x16, 0x04, 0x00, 0xc9, 0x7a, 0xad, 0x74, 0x16, 0x6d, 0x90, 0x16}; // UNK_0xf434

const unsigned short int cc_UNK_0xe684 = 0x0016; // UNK_0xe684
const unsigned short int cc_UNK_0xf339 = 0x3a48; // UNK_0xf339


// 0xe662: db 0xf0 0x00 '  '

// ================================================
// 0xe664: WORD 'UNK_0xe666' codep=0x224c parp=0xe666
// ================================================

void UNK_0xe666() // UNK_0xe666
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe66c: WORD 'UNK_0xe66e' codep=0x224c parp=0xe66e
// ================================================

void UNK_0xe66e() // UNK_0xe66e
{
  Push(0x54a9); // pointer to TCLR
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
}

// 0xe676: db 0x14 0x22 0x00 0x00 0x14 0x22 0x4b 0x00 0x14 0x22 0x00 0x00 ' "   "K  "  '

// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x2214 parp=0xe684
// ================================================
// 0xe684: db 0x16 0x00 0x14 0x22 0x90 0x01 0x4c 0x22 0x2e 0x53 0x1f 0x7a 0xa6 0x49 0xbb 0x74 0x4c 0x6d 0xdf 0x79 0x90 0x16 '   "  L".S z I tLm y  '

// ================================================
// 0xe69a: WORD 'UNK_0xe69c' codep=0x7420 parp=0xe69c
// ================================================
// 0xe69c: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xe69f: WORD 'UNK_0xe6a1' codep=0x7394 parp=0xe6a1
// ================================================
// 0xe6a1: db 0x19 0x05 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe6a7: WORD 'UNK_0xe6a9' codep=0x7420 parp=0xe6a9
// ================================================
// 0xe6a9: db 0x19 0x0c 0x01 '   '

// ================================================
// 0xe6ac: WORD 'UNK_0xe6ae' codep=0x7394 parp=0xe6ae
// ================================================
// 0xe6ae: db 0x19 0x06 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe6b4: WORD 'UNK_0xe6b6' codep=0x7394 parp=0xe6b6
// ================================================
// 0xe6b6: db 0x19 0x0c 0x04 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe6bc: WORD 'UNK_0xe6be' codep=0x7420 parp=0xe6be
// ================================================
// 0xe6be: db 0x19 0x12 0x04 '   '

// ================================================
// 0xe6c1: WORD 'UNK_0xe6c3' codep=0x7420 parp=0xe6c3
// ================================================
// 0xe6c3: db 0x3d 0x15 0x01 '=  '

// ================================================
// 0xe6c6: WORD 'UNK_0xe6c8' codep=0x7420 parp=0xe6c8
// ================================================
// 0xe6c8: db 0x3d 0x16 0x01 '=  '

// ================================================
// 0xe6cb: WORD 'UNK_0xe6cd' codep=0x7420 parp=0xe6cd
// ================================================
// 0xe6cd: db 0x3d 0x17 0x01 '=  '

// ================================================
// 0xe6d0: WORD 'UNK_0xe6d2' codep=0x7420 parp=0xe6d2
// ================================================
// 0xe6d2: db 0x3d 0x18 0x01 '=  '

// ================================================
// 0xe6d5: WORD 'UNK_0xe6d7' codep=0x7420 parp=0xe6d7
// ================================================
// 0xe6d7: db 0x3d 0x19 0x01 '=  '

// ================================================
// 0xe6da: WORD 'UNK_0xe6dc' codep=0x7420 parp=0xe6dc
// ================================================
// 0xe6dc: db 0x3d 0x13 0x01 '=  '

// ================================================
// 0xe6df: WORD 'UNK_0xe6e1' codep=0x7420 parp=0xe6e1
// ================================================
// 0xe6e1: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x7420 parp=0xe6e6
// ================================================
// 0xe6e6: db 0x3d 0x1c 0x01 '=  '

// ================================================
// 0xe6e9: WORD 'UNK_0xe6eb' codep=0x7420 parp=0xe6eb
// ================================================
// 0xe6eb: db 0x3d 0x1d 0x01 '=  '

// ================================================
// 0xe6ee: WORD 'UNK_0xe6f0' codep=0x7420 parp=0xe6f0
// ================================================
// 0xe6f0: db 0x3d 0x1a 0x01 '=  '

// ================================================
// 0xe6f3: WORD 'UNK_0xe6f5' codep=0x7420 parp=0xe6f5
// ================================================
// 0xe6f5: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xe6f8: WORD 'GET-VES' codep=0x4b3b parp=0xe704
// ================================================
// 0xe704: db 0x03 0x00 0xc8 0xe6 0x00 0x00 0xd7 0xe6 0x01 0x00 0xd2 0xe6 0x02 0x00 0xcd 0xe6 '                '

// ================================================
// 0xe714: WORD 'UNK_0xe716' codep=0x224c parp=0xe716
// ================================================

void UNK_0xe716() // UNK_0xe716
{
  Push(cc_UNK_0xe684); // UNK_0xe684
  Push(0x624f); // pointer to ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(cc__7); // 7
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label2;
  SWAP(); // SWAP

  label2:
  goto label3;

  label1:
  Push(cc__3); // 3
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  _2DUP(); // 2DUP
  RRND(); // RRND
  _gt_R(); // >R
  RRND(); // RRND
  R_gt_(); // R>

  label3:
  Push(0x624f); // pointer to ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  LoadData("UNK_0xe6a1"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x54d1); // pointer to A-STREN
  _plus__ex__2(); // +!_2
  Push(0x5f31); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5f3c); // pointer to YABS
  Push(Read16(Pop())); // @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
}


// ================================================
// 0xe786: WORD 'UNK_0xe788' codep=0x224c parp=0xe788
// ================================================

void UNK_0xe788() // UNK_0xe788
{
  Push(0x624f); // pointer to ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe79a: WORD 'UNK_0xe79c' codep=0x224c parp=0xe79c
// ================================================

void UNK_0xe79c() // UNK_0xe79c
{
  IOPEN(); // IOPEN
  Push(1); // 1
  _star_CREATE(); // *CREATE
  UNK_0xe716(); // UNK_0xe716
  SWAP(); // SWAP
  Push(0x65ee); // IFIELD(INST-X)
  D_ex_(); // D!
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(0x65ec); // IFIELD(UNK_0xe69c)
  C_ex__2(); // C!_2
  LoadData("UNK_0xe6ae"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x65ed); // IFIELD(UNK_0xe6a9)
  C_ex__2(); // C!_2
  LoadData("UNK_0xe6b6"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(0x65f3); // IFIELD(UNK_0xe6be)
  D_ex_(); // D!
  UNK_0xe788(); // UNK_0xe788
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7ca: WORD 'UNK_0xe7cc' codep=0x224c parp=0xe7cc
// ================================================

void UNK_0xe7cc() // UNK_0xe7cc
{
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1;
  Push(0xc900);
  MODULE(); // MODULE
  Push(0x6060); // pointer to 'ENDING
  Push(Read16(Pop())); // @
  goto label2;

  label1:
  Push(0x3a48);

  label2:
  Push(0x6a4c); // pointer to 'UHL
  _ex__2(); // !_2
}


// ================================================
// 0xe7ee: WORD 'UNK_0xe7f0' codep=0x224c parp=0xe7f0
// ================================================

void UNK_0xe7f0() // UNK_0xe7f0
{
  Push(0x6a5a);
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  Push(0); // 0
  Push(0x4ed6); // pointer to YUR
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x4ec2); // pointer to YLL
  Push(Read16(Pop())); // @

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x4ecc); // pointer to XUR
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x4eb8); // pointer to XLL
  Push(Read16(Pop())); // @

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x001f);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(1); // 1
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(Pop() + Pop()); // +
  j++;
  } while(j<jmax); // (LOOP) 0xffe2

  i++;
  } while(i<imax); // (LOOP) 0xffd2

}

// 0xe83a: db 0x4c 0x22 0x41 0x0e 0xf8 0x74 0x1f 0x56 0x16 0x6d 0x90 0x16 'L"A  t V m  '

// ================================================
// 0xe846: WORD '?LIQUID' codep=0x224c parp=0xe852
// ================================================

void _ask_LIQUID() // ?LIQUID
{
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(0x0064);
  Push(0x0480);
  _star__slash_(); // */
  Push(0x001f);
  _st_(); // <
}

// 0xe866: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0x34 0x75 0x8f 0x3b 0x5d 0x17 0x0d 0x00 0x25 0x40 0xf5 0x12 0x90 0x16 0x4c 0x22 0x8b 0x75 0xaf 0x64 0x32 0x6d 0x8b 0x75 0x32 0x0e 0x5d 0x17 0xa2 0xba 0xd9 0x84 0x50 0xe8 0xfa 0x15 0x1a 0x00 0x34 0x75 0x8f 0x3b 0xaf 0x3b 0x25 0x40 0xfa 0x15 0x0a 0x00 0x34 0x75 0x87 0x3b 0x72 0x0f 0x3a 0xe8 0x60 0x16 0x18 0x00 0x34 0x75 0xaf 0x3b 0x5d 0x17 0x0d 0x00 0x25 0x40 0xfa 0x15 0x0a 0x00 0x34 0x75 0x87 0x3b 0x92 0x0f 0x3a 0xe8 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0xfa 0x15 0x14 0x00 0x8b 0x75 0x9f 0x64 0x32 0x6d 0x3f 0x7a 0x66 0xe8 0xfa 0x15 0x04 0x00 0x7e 0xe8 0xdf 0x79 0x90 0x16 0x4c 0x22 0x8f 0x64 0x2f 0x7a 0x3f 0x7a 0x5d 0x17 0xc8 0xe8 0x8c 0x7f 0x3d 0x0f 0x0a 0x7a 0xa6 0x49 0x9f 0x64 0x32 0x6d 0xa6 0x49 0xaf 0x64 0x32 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x78 0xec 0x41 0x0e 0x3f 0x64 0x4c 0x6d 0x0a 0x5a 0x16 0x6d 0x90 0x16 0x4c 0x22 0x8a 0xe6 0x2f 0x5f 0x65 0x6d 0x3a 0x5f 0x65 0x6d 0xed 0x94 0x9f 0x64 0x2f 0x7a 0x3f 0x7a 0x82 0x99 0x64 0xe6 0x7e 0xe6 0x08 0xe9 0x90 0x16 0x4c 0x22 0x2f 0x5f 0x65 0x6d 0x3a 0x5f 0x65 0x6d 0x8a 0xe6 0xed 0x94 0xcf 0x64 0x2f 0x7a 0x3f 0x7a 0x82 0x99 0x64 0xe6 0x82 0xe6 0x08 0xe9 0x96 0x99 0x5d 0x17 0xce 0xc7 0xd9 0x84 0x90 0x16 0x4c 0x22 0xed 0x94 0xe8 0xe8 0x8f 0x64 0x2f 0x7a 0x3f 0x7a 0x82 0x99 0x64 0xe6 0x86 0xe6 0x08 0xe9 0x90 0x16 0x4c 0x22 0xed 0x94 0x2e 0x53 0x1f 0x7a 0x5d 0x17 0x55 0xba 0xd9 0x84 0x50 0x99 0xdf 0x79 0x90 0x16 'L""u]   _ 4u ;]   %@    L" u d2m u2 ]     P     4u ; ;%@    4u ;r : `   4u ;]   %@    4u ;  :   L""u]   _      u d2m?zf     ~  y  L" d/z?z]    =  z I d2m I d2m  L"] x A ?dLm Z m  L"  /_em:_em   d/z?z  d ~     L"/_em:_em     d/z?z  d       ]       L"     d/z?z  d       L"  .S z] U   P  y  '

// ================================================
// 0xe988: WORD 'UNK_0xe98a' codep=0x224c parp=0xe98a
// ================================================

void UNK_0xe98a() // UNK_0xe98a
{
  CI(); // CI
  Push2Words("*ARTH");
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Push(0x6234); // pointer to PAST
  Push(Read16(Pop())); // @
  return;

  label1:
  Push(1); // 1
}

// 0xe9a0: db 0x4c 0x22 0x10 0x53 0x1f 0x7a 0x3f 0x7a 0xed 0x94 0x82 0x99 0xb6 0x5b 0xae 0x0b 0x0a 0x5c 0x16 0x6d 0x64 0xe6 0x7a 0xe6 0x08 0xe9 0x90 0x16 'L" S z?z     [   \ md z     '

// ================================================
// 0xe9bc: WORD 'DISP-SETUP' codep=0x4b3b parp=0xe9cb
// ================================================
// entry
// 0xe9cb: db 0x05 0x00 0x48 0x3a 0x01 0x00 0x1c 0xe9 0x02 0x00 0x60 0xe9 0x03 0x00 0xa2 0xe9 0x04 0x00 0x3a 0xe9 0x05 0x00 0x76 0xe9 '  H:      `       :   v '

// ================================================
// 0xe9e3: WORD 'UNK_0xe9e5' codep=0x1d29 parp=0xe9e5
// ================================================
// 0xe9e5: db 0x00 0x00 '  '

// ================================================
// 0xe9e7: WORD 'UNK_0xe9e9' codep=0x224c parp=0xe9e9
// ================================================

void UNK_0xe9e9() // UNK_0xe9e9
{
  Push(0x03e8);
  MS(); // MS
  Push(0x6491); // pointer to (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(0x630e); // pointer to SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xe9e5); // pointer to UNK_0xe9e5
  _099(); // 099
  Push(0); // 0
  Push(cc__i_ANSYS); // 'ANSYS
  MODULE(); // MODULE
}

// 0xea03: db 0x4c 0x22 0x5d 0x17 0x0a 0x00 0x3b 0x5a 0xae 0x0b 0x5d 0x17 0x0b 0x00 0x92 0x0f 0x7b 0x9a 0x90 0x16 'L"]   ;Z  ]     {   '

// ================================================
// 0xea17: WORD 'UNK_0xea19' codep=0x224c parp=0xea19
// ================================================

void UNK_0xea19() // UNK_0xea19
{
  Push(0x64b1); // pointer to (PLANET
  _1_dot_5_at_(); // 1.5@
  Push2Words("*LH");
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x00c8);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0xbe45);
  MODULE(); // MODULE
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xea45: WORD 'UNK_0xea47' codep=0x224c parp=0xea47
// ================================================

void UNK_0xea47() // UNK_0xea47
{
  PRINT(" COMPLETE", 9); // (.")
}


// ================================================
// 0xea55: WORD 'UNK_0xea57' codep=0x224c parp=0xea57
// ================================================

void UNK_0xea57() // UNK_0xea57
{

  UNK_0x3f09("...COMMENCING ");
  _dot_TTY(); // .TTY
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" TRAVEL", 7); // (.")
}


// ================================================
// 0xea78: WORD 'UNK_0xea7a' codep=0x224c parp=0xea7a
// ================================================

void UNK_0xea7a() // UNK_0xea7a
{

  UNK_0x3f09("ORBIT");
}


// ================================================
// 0xea84: WORD 'UNK_0xea86' codep=0x224c parp=0xea86
// ================================================

void UNK_0xea86() // UNK_0xea86
{

  UNK_0x3f09("SYSTEM");
}


// ================================================
// 0xea91: WORD 'UNK_0xea93' codep=0x224c parp=0xea93
// ================================================

void UNK_0xea93() // UNK_0xea93
{

  UNK_0x3f09("STARPORT");
}


// ================================================
// 0xeaa0: WORD 'UNK_0xeaa2' codep=0x224c parp=0xeaa2
// ================================================

void UNK_0xeaa2() // UNK_0xeaa2
{

  UNK_0x3f09("ENCOUNTER");
}


// ================================================
// 0xeab0: WORD 'UNK_0xeab2' codep=0x224c parp=0xeab2
// ================================================

void UNK_0xeab2() // UNK_0xeab2
{

  UNK_0x3f09("STANDING BY TO ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xeac8: WORD 'UNK_0xeaca' codep=0x224c parp=0xeaca
// ================================================

void UNK_0xeaca() // UNK_0xeaca
{
  UNK_0xeab2(); // UNK_0xeab2
  PRINT("DOCK WITH ", 10); // (.")
  UNK_0xea93(); // UNK_0xea93
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xeadf: WORD 'UNK_0xeae1' codep=0x224c parp=0xeae1
// ================================================

void UNK_0xeae1() // UNK_0xeae1
{
  UNK_0xeab2(); // UNK_0xeab2
  UNK_0xea7a(); // UNK_0xea7a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x635a); // pointer to ENC-TIM
  D_ex_(); // D!

  UNK_0x3f09("PRESS SPACEBAR TO ORBIT");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xeb0d: WORD 'UNK_0xeb0f' codep=0x224c parp=0xeb0f
// ================================================

void UNK_0xeb0f() // UNK_0xeb0f
{
  Push(0x64b1); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe98a(); // UNK_0xe98a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  UNK_0xeaca(); // UNK_0xeaca
  goto label2;

  label1:
  UNK_0xeae1(); // UNK_0xeae1

  label2:
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb2b: WORD 'UNK_0xeb2d' codep=0x224c parp=0xeb2d
// ================================================

void UNK_0xeb2d() // UNK_0xeb2d
{

  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" ESTABLISHED", 12); // (.")
  Push(0x5aab); // pointer to ?FUEL-D
  _099(); // 099
  UNK_0xea19(); // UNK_0xea19
}


// ================================================
// 0xeb50: WORD 'UNK_0xeb52' codep=0x224c parp=0xeb52
// ================================================

void UNK_0xeb52() // UNK_0xeb52
{

  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xea86(); // UNK_0xea86
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" ENTRY", 6); // (.")
  UNK_0xea47(); // UNK_0xea47
  Push(0x51fe); // pointer to 'ASYS
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  UNK_0xe9e9(); // UNK_0xe9e9
}


// ================================================
// 0xeb73: WORD 'UNK_0xeb75' codep=0x224c parp=0xeb75
// ================================================

void UNK_0xeb75() // UNK_0xeb75
{

  UNK_0x3f09("...DOCKING");
  _dot_TTY(); // .TTY
  UNK_0xea47(); // UNK_0xea47
  Push(cc__i_OVBACK); // 'OVBACK
  MODULE(); // MODULE
}


// ================================================
// 0xeb8c: WORD 'UNK_0xeb8e' codep=0x224c parp=0xeb8e
// ================================================

void UNK_0xeb8e() // UNK_0xeb8e
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(0x03e8); Push(0x0000);
  D_plus_(); // D+
  Push(0x63b2); // pointer to KEYTIME
  D_ex_(); // D!
  Push(0x0fa0); Push(0x0000);
  D_plus_(); // D+
  Push(0x69e4); // pointer to ATIME
  D_ex_(); // D!
}


// ================================================
// 0xebae: WORD 'NF-M' codep=0x4b3b parp=0xebb7
// ================================================
// 0xebb7: db 0x05 0x00 0x48 0x3a 0x01 0x00 0x0f 0xeb 0x02 0x00 0x52 0xeb 0x04 0x00 0x8e 0xeb 0x05 0x00 0x75 0xeb 0x06 0x00 0x2d 0xeb '  H:      R       u   - '

// ================================================
// 0xebcf: WORD 'NF-MESS' codep=0x224c parp=0xebdb
// ================================================
// entry

void NF_dash_MESS() // NF-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  Pop();
  switch(Pop()) // NF-M
  {
  case 1:
    UNK_0xeb0f(); // UNK_0xeb0f
    break;
  case 2:
    UNK_0xeb52(); // UNK_0xeb52
    break;
  case 4:
    UNK_0xeb8e(); // UNK_0xeb8e
    break;
  case 5:
    UNK_0xeb75(); // UNK_0xeb75
    break;
  case 6:
    UNK_0xeb2d(); // UNK_0xeb2d
    break;
  default:
    NOP(); // NOP
    break;

  }
}


// ================================================
// 0xebe1: WORD 'UNK_0xebe3' codep=0x224c parp=0xebe3
// ================================================

void UNK_0xebe3() // UNK_0xebe3
{

  UNK_0x3f09("COMPUTING SUB-");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("AL TRAJECTORY...", 16); // (.")
}


// ================================================
// 0xec0f: WORD 'UNK_0xec11' codep=0x224c parp=0xec11
// ================================================

void UNK_0xec11() // UNK_0xec11
{

  UNK_0x3f09("INITIATING ");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("AL MANEUVER...", 14); // (.")
}


// ================================================
// 0xec38: WORD 'UNK_0xec3a' codep=0x224c parp=0xec3a
// ================================================

void UNK_0xec3a() // UNK_0xec3a
{

  UNK_0x3f09("COMMENCING ");
  _dot_TTY(); // .TTY
  UNK_0xea86(); // UNK_0xea86
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" PENETRATION...", 15); // (.")
}


// ================================================
// 0xec62: WORD 'UNK_0xec64' codep=0x224c parp=0xec64
// ================================================

void UNK_0xec64() // UNK_0xec64
{

  UNK_0x3f09("INITIATING DOCKING PROCEDURE...");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xec8a: WORD 'UNK_0xec8c' codep=0x224c parp=0xec8c
// ================================================

void UNK_0xec8c() // UNK_0xec8c
{

  UNK_0x3f09("SCANNERS INDICATE UNIDENTIFIED OBJECT!");
  _dot_TTY(); // .TTY
  Push(0x02bc);
  Push(0x1e78);
  Push(0x007d);
  Push(cc__3); // 3
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(cc__5); // 5
  _gt_SND(); // >SND
}


// ================================================
// 0xecd1: WORD 'NS-M' codep=0x4b3b parp=0xecda
// ================================================
// 0xecda: db 0x05 0x00 0x48 0x3a 0x00 0x00 0xe3 0xeb 0x02 0x00 0x3a 0xec 0x04 0x00 0x8c 0xec 0x05 0x00 0x64 0xec 0x06 0x00 0x11 0xec '  H:      :       d     '

// ================================================
// 0xecf2: WORD 'NS-MESS' codep=0x224c parp=0xecfe
// ================================================
// entry

void NS_dash_MESS() // NS-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  Pop();
  switch(Pop()) // NS-M
  {
  case 0:
    UNK_0xebe3(); // UNK_0xebe3
    break;
  case 2:
    UNK_0xec3a(); // UNK_0xec3a
    break;
  case 4:
    UNK_0xec8c(); // UNK_0xec8c
    break;
  case 5:
    UNK_0xec64(); // UNK_0xec64
    break;
  case 6:
    UNK_0xec11(); // UNK_0xec11
    break;
  default:
    NOP(); // NOP
    break;

  }
}


// ================================================
// 0xed04: WORD 'UNK_0xed06' codep=0x7394 parp=0xed06
// ================================================
// 0xed06: db 0x20 0x07 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed0c: WORD 'P-LSEED' codep=0x7394 parp=0xed18
// ================================================
// 0xed18: db 0x20 0x04 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed1e: WORD 'UNK_0xed20' codep=0x7394 parp=0xed20
// ================================================
// 0xed20: db 0x20 0x01 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed26: WORD 'UNK_0xed28' codep=0x7420 parp=0xed28
// ================================================
// 0xed28: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xed2b: WORD 'UNK_0xed2d' codep=0x7420 parp=0xed2d
// ================================================
// 0xed2d: db 0x11 0x14 0x03 '   '

// ================================================
// 0xed30: WORD 'UNK_0xed32' codep=0x224c parp=0xed32
// ================================================

void UNK_0xed32() // UNK_0xed32
{
  LoadData("P-LSEED"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(1); // 1
  return;

  label1:
  Push(2); // 2
}


// ================================================
// 0xed44: WORD 'S>CM' codep=0x4b3b parp=0xed4d
// ================================================
// 0xed4d: db 0x03 0x00 0x32 0xed 0x04 0x00 0x89 0x3b 0x01 0x00 0x91 0x3b 0x03 0x00 0x81 0x3b '  2    ;   ;   ;'

// ================================================
// 0xed5d: WORD 'UNK_0xed5f' codep=0x224c parp=0xed5f
// ================================================

void UNK_0xed5f() // UNK_0xed5f
{
  LoadData("UNK_0xed20"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Pop();
  switch(Pop()) // S>CM
  {
  case 4:
    Push(cc__4); // 4
    break;
  case 1:
    Push(cc__5); // 5
    break;
  case 3:
    Push(cc__3); // 3
    break;
  default:
    UNK_0xed32(); // UNK_0xed32
    break;

  }
}


// ================================================
// 0xed67: WORD 'OSET' codep=0x224c parp=0xed70
// ================================================
// entry

void OSET() // OSET
{
  Push(cc__6); // 6
  NS_dash_MESS(); // NS-MESS
  Push(0x64b1); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
  Push(0xe9e5); // pointer to UNK_0xe9e5
  ON_2(); // ON_2
  UNK_0xed5f(); // UNK_0xed5f
  _at_INST_dash_S(); // @INST-S
  Push(0); // 0
  Push(0x0012);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  CI(); // CI
  Pop(); // DROP
  goto label2;

  label1:
  LoadData("UNK_0xed06"); // from 'PLANET      '
  Push(Read16(Pop())); // @

  label2:
  Push(Read16(regsp)); // DUP
  Push(0x5b49); // pointer to GLOBALS
  _ex__2(); // !_2
  Push(0xbcf9);
  MODULE(); // MODULE
  Push(0xbd33);
  MODULE(); // MODULE
  MROTA(); // MROTA
  Push(0xbd9b);
  Push(0x60f3); // pointer to 'EXTERN
  _ex__2(); // !_2
  Push(cc__dash_1); // -1
  Push(0x6029); // pointer to PLHI
  _ex__2(); // !_2
  Push(0xc014);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(cc__6); // 6
  NF_dash_MESS(); // NF-MESS
}


// ================================================
// 0xedc8: WORD 'UNK_0xedca' codep=0x224c parp=0xedca
// ================================================

void UNK_0xedca() // UNK_0xedca
{
  UNK_0xea86(); // UNK_0xea86
  UNK_0xea57(); // UNK_0xea57
}


// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x224c parp=0xedd2
// ================================================

void UNK_0xedd2() // UNK_0xedd2
{

  UNK_0x3f09("INTER-STELLAR");
  UNK_0xea57(); // UNK_0xea57
}


// ================================================
// 0xede6: WORD 'UNK_0xede8' codep=0x224c parp=0xede8
// ================================================

void UNK_0xede8() // UNK_0xede8
{
  Push(0xc548);
  MODULE(); // MODULE
  CTINIT(); // CTINIT

  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xea93(); // UNK_0xea93
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" CLEAR", 6); // (.")
}


// ================================================
// 0xee07: WORD 'UNK_0xee09' codep=0x224c parp=0xee09
// ================================================

void UNK_0xee09() // UNK_0xee09
{

  UNK_0x3f09("...");
  _dot_TTY(); // .TTY
  UNK_0xeaa2(); // UNK_0xeaa2
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" TERMINATED", 11); // (.")
  Push(0xc090);
  MODULE(); // MODULE
  Push(0x5dad); // pointer to SKIP2NE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  OSET(); // OSET
  Push(0x64d1); // pointer to (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fc); // IFIELD(UNK_0xe6f5)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  Push(0x5531); // pointer to ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(0); // 0

  label2:
  Push(0x5c73); // pointer to FORCEPT
  _099(); // 099
  Push(0x5531); // pointer to ?AUTO
  ON_2(); // ON_2

  label1:
  Push(0x5c2c); // pointer to CONTEXT_3
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(0xea60); Push(0x0000);
  goto label4;

  label3:
  Push2Words("NULL");

  label4:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x635a); // pointer to ENC-TIM
  D_ex_(); // D!
}


// ================================================
// 0xee7b: WORD 'UNK_0xee7d' codep=0x224c parp=0xee7d
// ================================================

void UNK_0xee7d() // UNK_0xee7d
{

  UNK_0x3f09("OUTSIDE ");
  _dot_TTY(); // .TTY
  UNK_0xea7a(); // UNK_0xea7a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("AL RANGE", 8); // (.")
  Push(0xe9e5); // pointer to UNK_0xe9e5
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xe9e9(); // UNK_0xe9e9
}


// ================================================
// 0xeea5: WORD 'UF-M' codep=0x4b3b parp=0xeeae
// ================================================
// 0xeeae: db 0x05 0x00 0x48 0x3a 0x06 0x00 0xca 0xed 0x02 0x00 0xd2 0xed 0x04 0x00 0x09 0xee 0x05 0x00 0xe8 0xed 0x01 0x00 0x7d 0xee '  H:                  } '

// ================================================
// 0xeec6: WORD 'UF-MESS' codep=0x224c parp=0xeed2
// ================================================
// entry

void UF_dash_MESS() // UF-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  Pop();
  switch(Pop()) // UF-M
  {
  case 6:
    UNK_0xedca(); // UNK_0xedca
    break;
  case 2:
    UNK_0xedd2(); // UNK_0xedd2
    break;
  case 4:
    UNK_0xee09(); // UNK_0xee09
    break;
  case 5:
    UNK_0xede8(); // UNK_0xede8
    break;
  case 1:
    UNK_0xee7d(); // UNK_0xee7d
    break;
  default:
    NOP(); // NOP
    break;

  }
}


// ================================================
// 0xeed8: WORD 'UNK_0xeeda' codep=0x224c parp=0xeeda
// ================================================

void UNK_0xeeda() // UNK_0xeeda
{

  UNK_0x3f09("LEAVING ");
  _dot_TTY(); // .TTY
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("...", 3); // (.")
}


// ================================================
// 0xeef1: WORD 'UNK_0xeef3' codep=0x224c parp=0xeef3
// ================================================

void UNK_0xeef3() // UNK_0xeef3
{
  UNK_0xea86(); // UNK_0xea86
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xeef9: WORD 'UNK_0xeefb' codep=0x224c parp=0xeefb
// ================================================

void UNK_0xeefb() // UNK_0xeefb
{
  UNK_0xea93(); // UNK_0xea93
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xef01: WORD 'UNK_0xef03' codep=0x224c parp=0xef03
// ================================================

void UNK_0xef03() // UNK_0xef03
{
  UNK_0xeaa2(); // UNK_0xeaa2
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xef09: WORD 'UNK_0xef0b' codep=0x224c parp=0xef0b
// ================================================

void UNK_0xef0b() // UNK_0xef0b
{
  UNK_0xea7a(); // UNK_0xea7a
  UNK_0xeeda(); // UNK_0xeeda
}


// ================================================
// 0xef11: WORD 'US-M' codep=0x4b3b parp=0xef1a
// ================================================
// 0xef1a: db 0x04 0x00 0x48 0x3a 0x06 0x00 0x0b 0xef 0x02 0x00 0xf3 0xee 0x04 0x00 0x03 0xef 0x05 0x00 0xfb 0xee '  H:                '

// ================================================
// 0xef2e: WORD 'US-MESS' codep=0x224c parp=0xef3a
// ================================================
// entry

void US_dash_MESS() // US-MESS
{
  UNK_0xe66e(); // UNK_0xe66e
  Pop();
  switch(Pop()) // US-M
  {
  case 6:
    UNK_0xef0b(); // UNK_0xef0b
    break;
  case 2:
    UNK_0xeef3(); // UNK_0xeef3
    break;
  case 4:
    UNK_0xef03(); // UNK_0xef03
    break;
  case 5:
    UNK_0xeefb(); // UNK_0xeefb
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// 0xef40: db 0x4c 0x22 0x9d 0x86 0x69 0x26 0x90 0x16 0x4c 0x22 0xf1 0x9f 0xf7 0xc0 0x90 0x16 0x4c 0x22 0x48 0x50 0x40 0xef 0x07 0x3f 0x0f 0x46 0x55 0x45 0x4c 0x20 0x53 0x55 0x50 0x50 0x4c 0x59 0x20 0x4c 0x4f 0x57 0x48 0xef 0x90 0x16 0x4c 0x22 0x30 0x50 0x40 0xef 0x07 0x3f 0x14 0x46 0x55 0x45 0x4c 0x20 0x53 0x55 0x50 0x50 0x4c 0x59 0x20 0x43 0x52 0x49 0x54 0x49 0x43 0x41 0x4c 0x48 0xef 0x90 0x16 0x4c 0x22 0xd5 0x4f 0x40 0xef 0x07 0x3f 0x0b 0x4f 0x55 0x54 0x20 0x4f 0x46 0x20 0x46 0x55 0x45 0x4c 0x48 0xef 0x90 0x16 'L"  i&  L"      L"HP@  ? FUEL SUPPLY LOWH   L"0P@  ? FUEL SUPPLY CRITICALH   L" O@  ? OUT OF FUELH   '

// ================================================
// 0xefa5: WORD '.EX' codep=0x4b3b parp=0xefad
// ================================================
// entry
// 0xefad: db 0x02 0x00 0x8f 0xef 0x02 0x00 0x6e 0xef 0x03 0x00 0x52 0xef '      n   R '

// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x224c parp=0xefbb
// ================================================

void UNK_0xefbb() // UNK_0xefbb
{
  Push(0x65fb); // IFIELD(UNK_0xe6f0)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) return;
  CI(); // CI
  Push(Pop() | Pop()); // OR
  Push(0x6002); // pointer to STARDAT
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xefd3: WORD 'UNK_0xefd5' codep=0x7420 parp=0xefd5
// ================================================
// 0xefd5: db 0x19 0x15 0x04 '   '

// ================================================
// 0xefd8: WORD 'UNK_0xefda' codep=0x1d29 parp=0xefda
// ================================================
// 0xefda: db 0x3a 0x20 ': '

// ================================================
// 0xefdc: WORD 'DMSG' codep=0x224c parp=0xefe5
// ================================================
// entry

void DMSG() // DMSG
{
  Push(0xefda); // pointer to UNK_0xefda
  _099(); // 099
  Push(0x5f31); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5f3c); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(0x5bc5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(0x65f6); // IFIELD(UNK_0xefd5)
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  Push(0xefda); // pointer to UNK_0xefda
  ON_2(); // ON_2

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffda

  Push(0xefda); // pointer to UNK_0xefda
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT

  UNK_0x3f09("READY TO PICK UP DEBRIS");
  _dot_TTY(); // .TTY
}

// 0xf04b: db 0x4c 0x22 0x32 0x0e 0x20 0x0f 0x90 0x16 0x4c 0x22 0x87 0x3b 0x5f 0x12 0xfa 0x15 0x08 0x00 0x2e 0x0f 0x60 0x16 0x04 0x00 0x7f 0x3b 0x90 0x16 0x4c 0x22 0x32 0x0e 0x3d 0x0f 0x90 0x16 0x4c 0x22 0x32 0x0e 0x87 0x3b 0x90 0x16 0x4c 0x22 0x32 0x0e 0x32 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x7f 0x3b 0x60 0x16 0x04 0x00 0x8f 0x3b 0x90 0x16 'L"2     L" ;_     . `   ;  L"2 =   L"2  ;  L"2 2b      ;`    ;  '

// ================================================
// 0xf08d: WORD 'UNK_0xf08f' codep=0x224c parp=0xf08f
// ================================================

void UNK_0xf08f() // UNK_0xf08f
{
  Push(0x6234); // pointer to PAST
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Push(0x65fd); // IFIELD(UNK_0xe6e6)
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(0x6234); // pointer to PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x65fe); // IFIELD(UNK_0xe6eb)
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  UNK_0xefbb(); // UNK_0xefbb
}


// ================================================
// 0xf0b1: WORD '(CTXT)' codep=0x4b3b parp=0xf0bc
// ================================================
// entry
// 0xf0bc: db 0x05 0x00 0x6e 0x3a 0x20 0x00 0x4d 0xf0 0x0b 0x00 0x55 0xf0 0x17 0x00 0x69 0xf0 0x3d 0x00 0x71 0xf0 0x12 0x00 0x79 0xf0 '  n:  M   U   i = q   y '

// ================================================
// 0xf0d4: WORD 'UNK_0xf0d6' codep=0x1d29 parp=0xf0d6
// ================================================
// 0xf0d6: db 0x3a 0x20 ': '

// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x1d29 parp=0xf0da
// ================================================
// 0xf0da: db 0x3a 0x20 ': '

// ================================================
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x1d29 parp=0xf0de
// ================================================
// 0xf0de: db 0x3a 0x20 ': '

// ================================================
// 0xf0e0: WORD 'UNK_0xf0e2' codep=0x1d29 parp=0xf0e2
// ================================================
// 0xf0e2: db 0x3a 0x20 ': '

// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================

void UNK_0xf0e6() // UNK_0xf0e6
{
  Push(0xf0d6); // pointer to UNK_0xf0d6
  Push(Read16(Pop())); // @
  Push(0x0096);
  _gt_(); // >
  Push(0xf0de); // pointer to UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(0xf0e2); // pointer to UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xf0da); // pointer to UNK_0xf0da
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT

  UNK_0x3f09("MOTION DETECTED AT");
  _dot_TTY(); // .TTY
  Push(0xf0da); // pointer to UNK_0xf0da
  _099(); // 099

  label1:

  UNK_0x3f09(" X:");
  _dot_TTY(); // .TTY
  Push(0xf0de); // pointer to UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(0xfff8);
  _slash_(); // /
  _dot_(); // .
  Push(cc__7); // 7
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT(" Y:", 3); // (.")
  Push(0xf0e2); // pointer to UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(0xfff8);
  _slash_(); // /
  _dot_(); // .
}


// ================================================
// 0xf165: WORD 'UNK_0xf167' codep=0x7420 parp=0xf167
// ================================================
// 0xf167: db 0x3d 0x11 0x01 '=  '

// ================================================
// 0xf16a: WORD 'UNK_0xf16c' codep=0x7420 parp=0xf16c
// ================================================
// 0xf16c: db 0x3d 0x12 0x01 '=  '

// ================================================
// 0xf16f: WORD 'UNK_0xf171' codep=0x7420 parp=0xf171
// ================================================
// 0xf171: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xf174: WORD 'UNK_0xf176' codep=0x224c parp=0xf176
// ================================================

void UNK_0xf176() // UNK_0xf176
{
  _star__slash_(); // */
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf18c: WORD 'UNK_0xf18e' codep=0x224c parp=0xf18e
// ================================================

void UNK_0xf18e() // UNK_0xf18e
{
  Push(0x5c2c); // pointer to CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  Push(cc__4); // 4
  goto label2;

  label1:
  Push(1); // 1
  Push(2); // 2

  label2:
  Push(0); // 0
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Push(Read16(regsp)); // DUP
  Push(h); // I
  Push(h); // I'
  UNK_0xf176(); // UNK_0xf176

  label3:
  Push(0xf0e2); // pointer to UNK_0xf0e2
  _ex__2(); // !_2
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label4;
  Push(Read16(regsp)); // DUP
  Push(h); // I
  Push(h); // I'
  UNK_0xf176(); // UNK_0xf176

  label4:
  Push(0xf0de); // pointer to UNK_0xf0de
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
  UNK_0xf0e6(); // UNK_0xf0e6
}


// ================================================
// 0xf1fe: WORD 'UNK_0xf200' codep=0x224c parp=0xf200
// ================================================

void UNK_0xf200() // UNK_0xf200
{
  _at_INST_dash_C(); // @INST-C
  Push(0x003d);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x65f2); // IFIELD(UNK_0xf167)
  _plus__dash__at_(); // +-@
  Push(0xffc1);
  Push(0x0040);
  WITHIN(); // WITHIN
  Push(0x65f3); // IFIELD(UNK_0xf16c)
  _plus__dash__at_(); // +-@
  Push(0xffc0);
  Push(0x0040);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(0x5c2c); // pointer to CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(0x65fc); // IFIELD(UNK_0xf171)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() & Pop()); // AND
  UNK_0xf08f(); // UNK_0xf08f
  Push(Pop() & Pop()); // AND
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248
// ================================================

void UNK_0xf248() // UNK_0xf248
{
  Push(0x65f2); // IFIELD(UNK_0xf167)
  _plus__dash__at_(); // +-@
  Push(0xf0de); // pointer to UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x65f2); // IFIELD(UNK_0xf167)
  C_ex__2(); // C!_2
  Push(0x65f3); // IFIELD(UNK_0xf16c)
  _plus__dash__at_(); // +-@
  Push(0xf0e2); // pointer to UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x65f3); // IFIELD(UNK_0xf16c)
  C_ex__2(); // C!_2
  Push(0xf0de); // pointer to UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(0x65ee); // IFIELD(INST-X)
  _plus__ex__2(); // +!_2
  Push(0xf0e2); // pointer to UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf276: WORD 'UNK_0xf278' codep=0x224c parp=0xf278
// ================================================

void UNK_0xf278() // UNK_0xf278
{
  _at_IX(); // @IX
  Push(0xf0de); // pointer to UNK_0xf0de
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _ex_IX(); // !IX
  _at_IY(); // @IY
  Push(0xf0e2); // pointer to UNK_0xf0e2
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _ex_IY(); // !IY
}


// ================================================
// 0xf28e: WORD 'UNK_0xf290' codep=0x1d29 parp=0xf290
// ================================================
// 0xf290: db 0x3a 0x20 ': '

// ================================================
// 0xf292: WORD 'TRAK-E' codep=0x224c parp=0xf29d
// ================================================
// entry

void TRAK_dash_E() // TRAK-E
{
  Push(0xf290); // pointer to UNK_0xf290
  _099(); // 099
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f5); // IFIELD(UNK_0xed2d)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fb); // IFIELD(UNK_0xed28)
  Push(Read8(Pop())&0xFF); // C@
  Push(0xf0d6); // pointer to UNK_0xf0d6
  _ex__2(); // !_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0xf0da); // pointer to UNK_0xf0da
  ON_2(); // ON_2
  Push(0x5c2c); // pointer to CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x5bb8); // pointer to IGLOBAL
  goto label2;

  label1:
  Push(0x5bc5); // pointer to ILOCAL

  label2:
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x00fe);
  _eq_(); // =
  if (Pop() == 0) goto label3;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  UNK_0xf200(); // UNK_0xf200
  if (Pop() == 0) goto label4;
  UNK_0xf18e(); // UNK_0xf18e
  UNK_0xf278(); // UNK_0xf278
  UNK_0xf248(); // UNK_0xf248

  label4:
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(0x5f31); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5f3c); // pointer to YABS
  Push(Read16(Pop())); // @
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  Push(0xf290); // pointer to UNK_0xf290
  ON_2(); // ON_2

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffc0

  Push(0x5ff4); // pointer to STAR-HR
  Push(Read16(Pop())); // @
  Push(0x54c3); // pointer to TRAK-HR
  _ex__2(); // !_2
  Push(0xf290); // pointer to UNK_0xf290
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x590b); // pointer to 'FLY
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331() // UNK_0xf331
{
  Push(0x54b5); // pointer to 'TRAK
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf337: WORD 'UNK_0xf339' codep=0x2214 parp=0xf339
// ================================================
// 0xf339: db 0x48 0x3a 'H:'

// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d
// ================================================

void UNK_0xf33d() // UNK_0xf33d
{
  Push(0xae81);
}


// ================================================
// 0xf343: WORD '@'EXT' codep=0x4b3b parp=0xf34d
// ================================================
// 0xf34d: db 0x03 0x00 0x39 0xf3 0x02 0x00 0x31 0xf3 0x03 0x00 0x31 0xf3 0x04 0x00 0x3d 0xf3 '  9   1   1   = '

// ================================================
// 0xf35d: WORD '(!'EXT)' codep=0x224c parp=0xf369
// ================================================
// entry

void _ro__ex__i_EXT_rc_() // (!'EXT)
{
  Push(0x5c2c); // pointer to CONTEXT_3
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // @'EXT
  {
  case 2:
    UNK_0xf331(); // UNK_0xf331
    break;
  case 3:
    UNK_0xf331(); // UNK_0xf331
    break;
  case 4:
    UNK_0xf33d(); // UNK_0xf33d
    break;
  default:
    Push(cc_UNK_0xf339); // UNK_0xf339
    break;

  }
  Push(0x60f3); // pointer to 'EXTERN
  _ex__2(); // !_2
}


// ================================================
// 0xf375: WORD '+A-VESS' codep=0x224c parp=0xf381
// ================================================
// entry

void _plus_A_dash_VESS() // +A-VESS
{
  Push(0x64d1); // pointer to (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f6); // IFIELD(UNK_0xe6c3)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(Pop()-2); // 2-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(1); // 1
  MAX(); // MAX
  Push(0x65f4); // IFIELD(UNK_0xe6dc)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x65f5); // IFIELD(UNK_0xe6e1)
  Push(Read8(Pop())&0xFF); // C@
  ROT(); // ROT
  Push(0x00ff);
  _st_(); // <
  Push(Pop() * Pop()); // *
  _dash_(); // -
  MIN(); // MIN
  Push(0x0014);
  Push(0x55ea); // pointer to AVCNT
  Push(Read16(Pop())); // @
  _dash_(); // -
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0x55ea); // pointer to AVCNT
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  Push(0x593d); // pointer to #VESS
  _plus__ex__2(); // +!_2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0019);

  label1:
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  Pop();
  switch(Pop()) // GET-VES
  {
  case 0:
    UNK_0xe6d7(); // UNK_0xe6d7
    break;
  case 1:
    UNK_0xe6d2(); // UNK_0xe6d2
    break;
  case 2:
    UNK_0xe6cd(); // UNK_0xe6cd
    break;
  default:
    UNK_0xe6c8(); // UNK_0xe6c8
    break;

  }
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  UNK_0xe79c(); // UNK_0xe79c
  i++;
  } while(i<imax); // (LOOP) 0xffe8

  UNK_0xe7cc(); // UNK_0xe7cc
  ICLOSE(); // ICLOSE
  Push(0x624f); // pointer to ?CALLIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(0x6441); // pointer to ANCHOR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xf3ff: WORD 'UNK_0xf401' codep=0x224c parp=0xf401
// ================================================

void UNK_0xf401() // UNK_0xf401
{
  Push(0x6491); // pointer to (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
}

// 0xf407: db 0x4c 0x22 0xf2 0x0e 0xbb 0x74 0x4c 0x6d 0x90 0x16 0x4c 0x22 0x22 0x75 0x41 0x0e 0x5d 0x17 0x18 0x00 0x5f 0x12 0xf2 0x0e 0x5d 0x17 0x20 0x00 0x5f 0x12 0x3e 0x13 0x90 0x16 'L"   tLm  L""uA ]   _   ]   _ >   '

// ================================================
// 0xf429: WORD 'UNK_0xf42b' codep=0x7420 parp=0xf42b
// ================================================
// 0xf42b: db 0x17 0x11 0x01 '   '

// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x1d29 parp=0xf430
// ================================================
// 0xf430: db 0x3a 0x20 ': '

// ================================================
// 0xf432: WORD 'UNK_0xf434' codep=0x1d29 parp=0xf434
// ================================================
// 0xf434: db 0x3a 0x20 0x4c 0x22 0xaf 0x3b 0x2e 0xf4 0xae 0x0b 0xe7 0x0f 0xb8 0x15 0x50 0x0e 0x13 0x4a 0x32 0xf4 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x2e 0xf4 0x16 0x6d 0x4a 0x17 0xd0 0x15 0xe8 0xff 0x2e 0xf4 0xae 0x0b 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x36 0xf4 0x60 0x16 0x04 0x00 0x20 0x0f 0x5d 0x17 0x0b 0x00 0x87 0x3b 0xa9 0x81 0x2d 0x7c 0xdb 0x3f 0xa9 0x7b 0x07 0x76 0xfa 0x15 0x0c 0x00 0xb5 0x75 0xa9 0x7b 0xe2 0x7a 0x60 0x16 0x16 0x00 0x8b 0x75 0xf1 0x7b 0x8d 0x7a 0xfa 0x15 0x0a 0x00 0xc9 0x7a 0x9e 0x7e 0x60 0x16 0x04 0x00 0xc9 0x7a 0xad 0x74 0x16 0x6d 0x90 0x16 ': L" ;.       P  J2         P .  mJ     .     L""u]   _     6 `     ]    ;  -| ? { v     u { z`    u { z     z ~`    z t m  '

// ================================================
// 0xf4b0: WORD 'UNK_0xf4b2' codep=0x224c parp=0xf4b2
// ================================================

void UNK_0xf4b2() // UNK_0xf4b2
{
  IOPEN(); // IOPEN

  label3:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label1;
  IEXTRAC(); // IEXTRAC
  CI_i_(); // CI'
  _st_INSERT(); // <INSERT
  ICLOSE(); // ICLOSE
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  IPREV(); // IPREV
  MAKE1ST(); // MAKE1ST
  INEXT(); // INEXT

  label2:
  IOPEN(); // IOPEN
  goto label3;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
}


// ================================================
// 0xf4da: WORD '>ORBITS' codep=0x224c parp=0xf4e6
// ================================================
// entry

void _gt_ORBITS() // >ORBITS
{
  Push(0xf430); // pointer to UNK_0xf430
  _099(); // 099
  UNK_0xf401(); // UNK_0xf401
  Push(0x65f2); // IFIELD(UNK_0xf42b)
  Push(Read8(Pop())&0xFF); // C@
  Push(0xf434); // pointer to UNK_0xf434
  _ex__2(); // !_2
  IOPEN(); // IOPEN
  Push(0xf413);
  Push(0xf464);
  EACH(); // EACH
  UNK_0xe666(); // UNK_0xe666
}


// ================================================
// 0xf504: WORD 'UNK_0xf506' codep=0x224c parp=0xf506
// ================================================

void UNK_0xf506() // UNK_0xf506
{
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  Push(cc__4); // 4
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf4b2(); // UNK_0xf4b2
  return;

  label1:
  INEXT(); // INEXT
}


// ================================================
// 0xf524: WORD 'ORBITS>' codep=0x224c parp=0xf530
// ================================================
// entry

void ORBITS_gt_() // ORBITS>
{
  UNK_0xf401(); // UNK_0xf401
  IOPEN(); // IOPEN

  label2:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf506(); // UNK_0xf506
  goto label2;

  label1:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label3;
  UNK_0xf506(); // UNK_0xf506

  label3:
  UNK_0xe666(); // UNK_0xe666
}

// 0xf54e: db 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'HMISC-VOC_________ '
  