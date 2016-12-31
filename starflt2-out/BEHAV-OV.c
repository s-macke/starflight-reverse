// ====== OVERLAY 'BEHAV-OV' ======
// store offset = 0xe470
// overlay size   = 0x10f0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe4a8  codep:0x224c parp:0xe4a8 size:0x0008 C-string:'UNK_0xe4a8'
//      UNK_0xe4b2  codep:0x224c parp:0xe4b2 size:0x000a C-string:'UNK_0xe4b2'
//      UNK_0xe4be  codep:0x224c parp:0xe4be size:0x0006 C-string:'UNK_0xe4be'
//      UNK_0xe4c6  codep:0x224c parp:0xe4c6 size:0x000c C-string:'UNK_0xe4c6'
//      UNK_0xe4d4  codep:0x1d29 parp:0xe4d4 size:0x0002 C-string:'UNK_0xe4d4'
//      UNK_0xe4d8  codep:0x224c parp:0xe4d8 size:0x0012 C-string:'UNK_0xe4d8'
//      UNK_0xe4ec  codep:0x224c parp:0xe4ec size:0x0012 C-string:'UNK_0xe4ec'
//      UNK_0xe500  codep:0x224c parp:0xe500 size:0x0012 C-string:'UNK_0xe500'
//      UNK_0xe514  codep:0x224c parp:0xe514 size:0x003c C-string:'UNK_0xe514'
//      UNK_0xe552  codep:0x224c parp:0xe552 size:0x0008 C-string:'UNK_0xe552'
//      UNK_0xe55c  codep:0x224c parp:0xe55c size:0x0008 C-string:'UNK_0xe55c'
//      UNK_0xe566  codep:0x224c parp:0xe566 size:0x0008 C-string:'UNK_0xe566'
//      UNK_0xe570  codep:0x7420 parp:0xe570 size:0x000b C-string:'UNK_0xe570'
//      UNK_0xe57d  codep:0x7420 parp:0xe57d size:0x0003 C-string:'UNK_0xe57d'
//      UNK_0xe582  codep:0x7420 parp:0xe582 size:0x0003 C-string:'UNK_0xe582'
//      UNK_0xe587  codep:0x7420 parp:0xe587 size:0x0010 C-string:'UNK_0xe587'
//      UNK_0xe599  codep:0x7420 parp:0xe599 size:0x0003 C-string:'UNK_0xe599'
//      UNK_0xe59e  codep:0x7394 parp:0xe59e size:0x0006 C-string:'UNK_0xe59e'
//      UNK_0xe5a6  codep:0x7394 parp:0xe5a6 size:0x000e C-string:'UNK_0xe5a6'
//      UNK_0xe5b6  codep:0x7420 parp:0xe5b6 size:0x0003 C-string:'UNK_0xe5b6'
//      UNK_0xe5bb  codep:0x7420 parp:0xe5bb size:0x0003 C-string:'UNK_0xe5bb'
//      UNK_0xe5c0  codep:0x7420 parp:0xe5c0 size:0x0003 C-string:'UNK_0xe5c0'
//      UNK_0xe5c5  codep:0x7420 parp:0xe5c5 size:0x0003 C-string:'UNK_0xe5c5'
//      UNK_0xe5ca  codep:0x7420 parp:0xe5ca size:0x000b C-string:'UNK_0xe5ca'
//      UNK_0xe5d7  codep:0x7394 parp:0xe5d7 size:0x0006 C-string:'UNK_0xe5d7'
//      UNK_0xe5df  codep:0x7420 parp:0xe5df size:0x0003 C-string:'UNK_0xe5df'
//      UNK_0xe5e4  codep:0x7420 parp:0xe5e4 size:0x0008 C-string:'UNK_0xe5e4'
//      UNK_0xe5ee  codep:0x224c parp:0xe5ee size:0x000a C-string:'UNK_0xe5ee'
//      UNK_0xe5fa  codep:0x224c parp:0xe5fa size:0x000a C-string:'UNK_0xe5fa'
//      UNK_0xe606  codep:0x224c parp:0xe606 size:0x0010 C-string:'UNK_0xe606'
//      UNK_0xe618  codep:0x224c parp:0xe618 size:0x000c C-string:'UNK_0xe618'
//      UNK_0xe626  codep:0x224c parp:0xe626 size:0x001e C-string:'UNK_0xe626'
//      UNK_0xe646  codep:0x224c parp:0xe646 size:0x000c C-string:'UNK_0xe646'
//      UNK_0xe654  codep:0x224c parp:0xe654 size:0x000a C-string:'UNK_0xe654'
//      UNK_0xe660  codep:0x224c parp:0xe660 size:0x0008 C-string:'UNK_0xe660'
//      UNK_0xe66a  codep:0x224c parp:0xe66a size:0x0008 C-string:'UNK_0xe66a'
//      UNK_0xe674  codep:0x224c parp:0xe674 size:0x0008 C-string:'UNK_0xe674'
//      UNK_0xe67e  codep:0x224c parp:0xe67e size:0x0008 C-string:'UNK_0xe67e'
//      UNK_0xe688  codep:0x224c parp:0xe688 size:0x0008 C-string:'UNK_0xe688'
//      UNK_0xe692  codep:0x224c parp:0xe692 size:0x0008 C-string:'UNK_0xe692'
//      UNK_0xe69c  codep:0x224c parp:0xe69c size:0x0008 C-string:'UNK_0xe69c'
//      UNK_0xe6a6  codep:0x224c parp:0xe6a6 size:0x0006 C-string:'UNK_0xe6a6'
//      UNK_0xe6ae  codep:0x224c parp:0xe6ae size:0x000a C-string:'UNK_0xe6ae'
//      UNK_0xe6ba  codep:0x224c parp:0xe6ba size:0x0010 C-string:'UNK_0xe6ba'
//      UNK_0xe6cc  codep:0x224c parp:0xe6cc size:0x003c C-string:'UNK_0xe6cc'
//      UNK_0xe70a  codep:0x224c parp:0xe70a size:0x0022 C-string:'UNK_0xe70a'
//      UNK_0xe72e  codep:0x224c parp:0xe72e size:0x001a C-string:'UNK_0xe72e'
//      UNK_0xe74a  codep:0x224c parp:0xe74a size:0x000c C-string:'UNK_0xe74a'
//      UNK_0xe758  codep:0x224c parp:0xe758 size:0x0008 C-string:'UNK_0xe758'
//      UNK_0xe762  codep:0x224c parp:0xe762 size:0x0022 C-string:'UNK_0xe762'
//      UNK_0xe786  codep:0x224c parp:0xe786 size:0x0012 C-string:'UNK_0xe786'
//      UNK_0xe79a  codep:0x224c parp:0xe79a size:0x001a C-string:'UNK_0xe79a'
//      UNK_0xe7b6  codep:0x224c parp:0xe7b6 size:0x0008 C-string:'UNK_0xe7b6'
//      UNK_0xe7c0  codep:0x224c parp:0xe7c0 size:0x0016 C-string:'UNK_0xe7c0'
//      UNK_0xe7d8  codep:0x224c parp:0xe7d8 size:0x001f C-string:'UNK_0xe7d8'
//      UNK_0xe7f9  codep:0x224c parp:0xe7f9 size:0x0026 C-string:'UNK_0xe7f9'
//      UNK_0xe821  codep:0x224c parp:0xe821 size:0x0020 C-string:'UNK_0xe821'
//           >WEAP  codep:0x4b3b parp:0xe84b size:0x0014 C-string:'_gt_WEAP'
//      UNK_0xe861  codep:0x224c parp:0xe861 size:0x000c C-string:'UNK_0xe861'
//      UNK_0xe86f  codep:0x224c parp:0xe86f size:0x000c C-string:'UNK_0xe86f'
//      UNK_0xe87d  codep:0x224c parp:0xe87d size:0x0014 C-string:'UNK_0xe87d'
//      UNK_0xe893  codep:0x224c parp:0xe893 size:0x0034 C-string:'UNK_0xe893'
//      UNK_0xe8c9  codep:0x224c parp:0xe8c9 size:0x0018 C-string:'UNK_0xe8c9'
//      UNK_0xe8e3  codep:0x224c parp:0xe8e3 size:0x0016 C-string:'UNK_0xe8e3'
//      UNK_0xe8fb  codep:0x224c parp:0xe8fb size:0x002a C-string:'UNK_0xe8fb'
//      UNK_0xe927  codep:0x224c parp:0xe927 size:0x0012 C-string:'UNK_0xe927'
//      UNK_0xe93b  codep:0x224c parp:0xe93b size:0x000a C-string:'UNK_0xe93b'
//      UNK_0xe947  codep:0x224c parp:0xe947 size:0x0026 C-string:'UNK_0xe947'
//      UNK_0xe96f  codep:0x224c parp:0xe96f size:0x001e C-string:'UNK_0xe96f'
//      UNK_0xe98f  codep:0x224c parp:0xe98f size:0x0008 C-string:'UNK_0xe98f'
//      UNK_0xe999  codep:0x224c parp:0xe999 size:0x005c C-string:'UNK_0xe999'
//      UNK_0xe9f7  codep:0x224c parp:0xe9f7 size:0x0008 C-string:'UNK_0xe9f7'
//      UNK_0xea01  codep:0x224c parp:0xea01 size:0x0028 C-string:'UNK_0xea01'
//      UNK_0xea2b  codep:0x224c parp:0xea2b size:0x0018 C-string:'UNK_0xea2b'
//      UNK_0xea45  codep:0x224c parp:0xea45 size:0x003f C-string:'UNK_0xea45'
//      UNK_0xea86  codep:0x224c parp:0xea86 size:0x002e C-string:'UNK_0xea86'
//      UNK_0xeab6  codep:0x224c parp:0xeab6 size:0x000c C-string:'UNK_0xeab6'
//      UNK_0xeac4  codep:0x224c parp:0xeac4 size:0x001a C-string:'UNK_0xeac4'
//      UNK_0xeae0  codep:0x224c parp:0xeae0 size:0x0051 C-string:'UNK_0xeae0'
//      UNK_0xeb33  codep:0x224c parp:0xeb33 size:0x0018 C-string:'UNK_0xeb33'
//      UNK_0xeb4d  codep:0x224c parp:0xeb4d size:0x0008 C-string:'UNK_0xeb4d'
//      UNK_0xeb57  codep:0x224c parp:0xeb57 size:0x0006 C-string:'UNK_0xeb57'
//      UNK_0xeb5f  codep:0x224c parp:0xeb5f size:0x0030 C-string:'UNK_0xeb5f'
//          SENT2P  codep:0xaccc parp:0xeb9a size:0x0031 C-string:'SENT2P'
//          P2SENT  codep:0xaccc parp:0xebd6 size:0x0036 C-string:'P2SENT'
//          CRIT2P  codep:0xaccc parp:0xec17 size:0x0045 C-string:'CRIT2P'
//          P2CRIT  codep:0xaccc parp:0xec67 size:0x003b C-string:'P2CRIT'
//      UNK_0xeca4  codep:0x224c parp:0xeca4 size:0x003a C-string:'UNK_0xeca4'
//      UNK_0xece0  codep:0x224c parp:0xece0 size:0x005e C-string:'UNK_0xece0'
//      UNK_0xed40  codep:0x224c parp:0xed40 size:0x001a C-string:'UNK_0xed40'
//      UNK_0xed5c  codep:0x224c parp:0xed5c size:0x0008 C-string:'UNK_0xed5c'
//      UNK_0xed66  codep:0x224c parp:0xed66 size:0x0006 C-string:'UNK_0xed66'
//         CIRCLES  codep:0x224c parp:0xed78 size:0x00b0 C-string:'CIRCLES'
//      UNK_0xee2a  codep:0x224c parp:0xee2a size:0x0020 C-string:'UNK_0xee2a'
//      UNK_0xee4c  codep:0x224c parp:0xee4c size:0x0016 C-string:'UNK_0xee4c'
//      UNK_0xee64  codep:0x224c parp:0xee64 size:0x000e C-string:'UNK_0xee64'
//      UNK_0xee74  codep:0x224c parp:0xee74 size:0x0008 C-string:'UNK_0xee74'
//        ?ANYBODY  codep:0x224c parp:0xee89 size:0x0004 C-string:'_ask_ANYBODY'
//      UNK_0xee8f  codep:0x224c parp:0xee8f size:0x0012 C-string:'UNK_0xee8f'
//      UNK_0xeea3  codep:0x224c parp:0xeea3 size:0x0014 C-string:'UNK_0xeea3'
//      (SIMULATE)  codep:0x4b3b parp:0xeec6 size:0x000c C-string:'_ro_SIMULATE_rc_'
//       1SIMULATE  codep:0x224c parp:0xeee0 size:0x0042 C-string:'_1SIMULATE'
//      UNK_0xef24  codep:0x224c parp:0xef24 size:0x0012 C-string:'UNK_0xef24'
//      UNK_0xef38  codep:0x224c parp:0xef38 size:0x0012 C-string:'UNK_0xef38'
//      UNK_0xef4c  codep:0x224c parp:0xef4c size:0x004c C-string:'UNK_0xef4c'
//      UNK_0xef9a  codep:0x224c parp:0xef9a size:0x0034 C-string:'UNK_0xef9a'
//      UNK_0xefd0  codep:0x224c parp:0xefd0 size:0x0030 C-string:'UNK_0xefd0'
//      UNK_0xf002  codep:0x224c parp:0xf002 size:0x000e C-string:'UNK_0xf002'
//      UNK_0xf012  codep:0x224c parp:0xf012 size:0x0012 C-string:'UNK_0xf012'
//      UNK_0xf026  codep:0x224c parp:0xf026 size:0x001e C-string:'UNK_0xf026'
//       FUNCTIONS  codep:0x1d29 parp:0xf052 size:0x0019 C-string:'FUNCTIONS'
//      UNK_0xf06d  codep:0x224c parp:0xf06d size:0x000a C-string:'UNK_0xf06d'
//      UNK_0xf079  codep:0x224c parp:0xf079 size:0x000a C-string:'UNK_0xf079'
//            MAPS  codep:0x224c parp:0xf08c size:0x0008 C-string:'MAPS'
//       WALK&TALK  codep:0x224c parp:0xf0a2 size:0x0008 C-string:'WALK_and_TALK'
//          TVMOVE  codep:0x224c parp:0xf0b5 size:0x0010 C-string:'TVMOVE'
//      DO.WEAPONS  codep:0x224c parp:0xf0d4 size:0x0018 C-string:'DO_dot_WEAPONS'
//          /ITEMS  codep:0x224c parp:0xf0f7 size:0x0008 C-string:'_slash_ITEMS'
//           ICONS  codep:0x224c parp:0xf109 size:0x000a C-string:'ICONS'
//        >BUTTONS  codep:0x4b3b parp:0xf120 size:0x001c C-string:'_gt_BUTTONS'
//           ?FUNC  codep:0x224c parp:0xf146 size:0x0052 C-string:'_ask_FUNC'
//      UNK_0xf19a  codep:0x224c parp:0xf19a size:0x005a C-string:'UNK_0xf19a'
//          TV-KEY  codep:0x224c parp:0xf1ff size:0x0074 C-string:'TV_dash_KEY'
//      UNK_0xf275  codep:0x224c parp:0xf275 size:0x0012 C-string:'UNK_0xf275'
//      UNK_0xf289  codep:0x224c parp:0xf289 size:0x004a C-string:'UNK_0xf289'
//      UNK_0xf2d5  codep:0x224c parp:0xf2d5 size:0x003b C-string:'UNK_0xf2d5'
//      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0040 C-string:'UNK_0xf312'
//      UNK_0xf354  codep:0x224c parp:0xf354 size:0x00a0 C-string:'UNK_0xf354'
//      GNUNK-CHEC  codep:0x224c parp:0xf403 size:0x0028 C-string:'GNUNK_dash_CHEC'
//        TV-TASKS  codep:0x224c parp:0xf438 size:0x0054 C-string:'TV_dash_TASKS'
//      UNK_0xf48e  codep:0x224c parp:0xf48e size:0x0062 C-string:'UNK_0xf48e'
//      UNK_0xf4f2  codep:0x224c parp:0xf4f2 size:0x000c C-string:'UNK_0xf4f2'
//      UNK_0xf500  codep:0x224c parp:0xf500 size:0x003c C-string:'UNK_0xf500'
//              TV  codep:0x224c parp:0xf543 size:0x0000 C-string:'TV'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe4d4 = 0xe4d4; // UNK_0xe4d4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_FUNCTIONS = 0xf052; // FUNCTIONS size: 25
// {0x05, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x27, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}




// 0xe482: db 0x0f 0x01 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x4c 0x7e 0x90 0x16 0x4c 0x22 0xed 0x22 0x7f 0x3b 0x8c 0x21 0x32 0x6d 0x90 0x16 '  L"  >         L"  L~  L" "; !2m  '

// ================================================
// 0xe4a6: WORD 'UNK_0xe4a8' codep=0x224c parp=0xe4a8
// ================================================

void UNK_0xe4a8() // UNK_0xe4a8
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xe4b0: WORD 'UNK_0xe4b2' codep=0x224c parp=0xe4b2
// ================================================

void UNK_0xe4b2() // UNK_0xe4b2
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe4bc: WORD 'UNK_0xe4be' codep=0x224c parp=0xe4be
// ================================================

void UNK_0xe4be() // UNK_0xe4be
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe4c4: WORD 'UNK_0xe4c6' codep=0x224c parp=0xe4c6
// ================================================

void UNK_0xe4c6() // UNK_0xe4c6
{
  Push(0); // 0
  Push(0); // 0
  CTPOS_dot_(); // CTPOS.
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe4d2: WORD 'UNK_0xe4d4' codep=0x1d29 parp=0xe4d4
// ================================================
// 0xe4d4: db 0x3a 0x20 ': '

// ================================================
// 0xe4d6: WORD 'UNK_0xe4d8' codep=0x224c parp=0xe4d8
// ================================================

void UNK_0xe4d8() // UNK_0xe4d8
{
  Push(pp_TVEHICL); // TVEHICL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe4ea: WORD 'UNK_0xe4ec' codep=0x224c parp=0xe4ec
// ================================================

void UNK_0xe4ec() // UNK_0xe4ec
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}

// 0xe4f6: db 0x4c 0x22 0x29 0x94 0x39 0x94 0x90 0x16 'L") 9   '

// ================================================
// 0xe4fe: WORD 'UNK_0xe500' codep=0x224c parp=0xe500
// ================================================

void UNK_0xe500() // UNK_0xe500
{
  Push(1); // 1
  UNK_0xe4a8(); // UNK_0xe4a8
  if (Pop() == 0) goto label1;
  _dash_(); // -
  return;

  label1:
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe512: WORD 'UNK_0xe514' codep=0x224c parp=0xe514
// ================================================

void UNK_0xe514() // UNK_0xe514
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
}

// 0xe51a: db 0x4c 0x22 0x5d 0x17 0x82 0x6a 0x80 0x4e 0xbb 0x74 0xae 0x0b 0xe4 0x5a 0xae 0x0b 0xe7 0x0f 0x92 0x0f 0xc9 0x74 0xae 0x0b 0xef 0x5a 0xae 0x0b 0x92 0x0f 0xe7 0x0f 0xbd 0x4d 0xff 0x4d 0x5d 0x17 0x20 0x00 0x46 0x12 0x90 0x16 0x4c 0x22 0x5d 0x17 0x71 0xcf 0xd9 0x84 0x90 0x16 'L"]  j N t   Z       t   Z       M M]   F   L"] q     '

// ================================================
// 0xe550: WORD 'UNK_0xe552' codep=0x224c parp=0xe552
// ================================================

void UNK_0xe552() // UNK_0xe552
{
  Push(0xcf2b); // probable '.ST'
  MODULE(); // MODULE
}


// ================================================
// 0xe55a: WORD 'UNK_0xe55c' codep=0x224c parp=0xe55c
// ================================================

void UNK_0xe55c() // UNK_0xe55c
{
  Push(0xcf47); // probable '.DA'
  MODULE(); // MODULE
}


// ================================================
// 0xe564: WORD 'UNK_0xe566' codep=0x224c parp=0xe566
// ================================================

void UNK_0xe566() // UNK_0xe566
{
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
}


// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x7420 parp=0xe570
// ================================================
// 0xe570: db 0x10 0x0b 0x0f 0x94 0x73 0x10 0x13 0x01 0x14 0xc8 0x6a '    s     j'

// ================================================
// 0xe57b: WORD 'UNK_0xe57d' codep=0x7420 parp=0xe57d
// ================================================
// 0xe57d: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xe580: WORD 'UNK_0xe582' codep=0x7420 parp=0xe582
// ================================================
// 0xe582: db 0x10 0x20 0x01 '   '

// ================================================
// 0xe585: WORD 'UNK_0xe587' codep=0x7420 parp=0xe587
// ================================================
// 0xe587: db 0x2a 0x11 0x01 0x20 0x74 0x0b 0x11 0x02 0x94 0x73 0x20 0x11 0x01 0x17 0x49 0x6c '*   t    s    Il'

// ================================================
// 0xe597: WORD 'UNK_0xe599' codep=0x7420 parp=0xe599
// ================================================
// 0xe599: db 0x11 0x11 0x03 '   '

// ================================================
// 0xe59c: WORD 'UNK_0xe59e' codep=0x7394 parp=0xe59e
// ================================================
// 0xe59e: db 0x15 0x00 0x10 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xe5a4: WORD 'UNK_0xe5a6' codep=0x7394 parp=0xe5a6
// ================================================
// 0xe5a6: db 0x44 0x1b 0x01 0x22 0x07 0x6f 0x94 0x73 0x44 0x1d 0x02 0x22 0x07 0x6f 'D  " o sD  " o'

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x7420 parp=0xe5b6
// ================================================
// 0xe5b6: db 0x44 0x15 0x01 'D  '

// ================================================
// 0xe5b9: WORD 'UNK_0xe5bb' codep=0x7420 parp=0xe5bb
// ================================================
// 0xe5bb: db 0x44 0x16 0x01 'D  '

// ================================================
// 0xe5be: WORD 'UNK_0xe5c0' codep=0x7420 parp=0xe5c0
// ================================================
// 0xe5c0: db 0x44 0x17 0x01 'D  '

// ================================================
// 0xe5c3: WORD 'UNK_0xe5c5' codep=0x7420 parp=0xe5c5
// ================================================
// 0xe5c5: db 0x44 0x18 0x01 'D  '

// ================================================
// 0xe5c8: WORD 'UNK_0xe5ca' codep=0x7420 parp=0xe5ca
// ================================================
// 0xe5ca: db 0x44 0x19 0x01 0x94 0x73 0x15 0x2a 0x01 0x32 0xd1 0x6a 'D   s * 2 j'

// ================================================
// 0xe5d5: WORD 'UNK_0xe5d7' codep=0x7394 parp=0xe5d7
// ================================================
// 0xe5d7: db 0x15 0x13 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xe5dd: WORD 'UNK_0xe5df' codep=0x7420 parp=0xe5df
// ================================================
// 0xe5df: db 0x15 0x0b 0x01 '   '

// ================================================
// 0xe5e2: WORD 'UNK_0xe5e4' codep=0x7420 parp=0xe5e4
// ================================================
// 0xe5e4: db 0x15 0x0c 0x01 0x20 0x74 0x15 0x11 0x03 '    t   '

// ================================================
// 0xe5ec: WORD 'UNK_0xe5ee' codep=0x224c parp=0xe5ee
// ================================================

void UNK_0xe5ee() // UNK_0xe5ee
{
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
}


// ================================================
// 0xe5f8: WORD 'UNK_0xe5fa' codep=0x224c parp=0xe5fa
// ================================================

void UNK_0xe5fa() // UNK_0xe5fa
{
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  D_eq_(); // D=
}


// ================================================
// 0xe604: WORD 'UNK_0xe606' codep=0x224c parp=0xe606
// ================================================

void UNK_0xe606() // UNK_0xe606
{
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f2); // IFIELD(UNK_0xe587)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  _eq_(); // =
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe616: WORD 'UNK_0xe618' codep=0x224c parp=0xe618
// ================================================

void UNK_0xe618() // UNK_0xe618
{
  LoadData("UNK_0xe5a6"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe624: WORD 'UNK_0xe626' codep=0x224c parp=0xe626
// ================================================

void UNK_0xe626() // UNK_0xe626
{
  UNK_0xe4d8(); // UNK_0xe4d8
  UNK_0xe4ec(); // UNK_0xe4ec
  ROT(); // ROT
  _dash_(); // -
  ABS(); // ABS
  Push(2); // 2
  _st_(); // <
  unsigned short int a = Pop(); // >R
  _dash_(); // -
  ABS(); // ABS
  Push(2); // 2
  _st_(); // <
  Push(a); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe644: WORD 'UNK_0xe646' codep=0x224c parp=0xe646
// ================================================

void UNK_0xe646() // UNK_0xe646
{
  UNK_0xe514(); // UNK_0xe514
  Push(0xe5cf);
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe652: WORD 'UNK_0xe654' codep=0x224c parp=0xe654
// ================================================

void UNK_0xe654() // UNK_0xe654
{
  LoadData("UNK_0xe5a6"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe65e: WORD 'UNK_0xe660' codep=0x224c parp=0xe660
// ================================================

void UNK_0xe660() // UNK_0xe660
{
  UNK_0xe646(); // UNK_0xe646
  Push(cc__9); // 9
  _gt_(); // >
}


// ================================================
// 0xe668: WORD 'UNK_0xe66a' codep=0x224c parp=0xe66a
// ================================================

void UNK_0xe66a() // UNK_0xe66a
{
  Push(0x65fa); // IFIELD(UNK_0xe5ca)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe672: WORD 'UNK_0xe674' codep=0x224c parp=0xe674
// ================================================

void UNK_0xe674() // UNK_0xe674
{
  Push(0x65ed); // IFIELD(UNK_0xe5e4)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe67c: WORD 'UNK_0xe67e' codep=0x224c parp=0xe67e
// ================================================

void UNK_0xe67e() // UNK_0xe67e
{
  Push(0x65f8); // IFIELD(UNK_0xe5c0)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe686: WORD 'UNK_0xe688' codep=0x224c parp=0xe688
// ================================================

void UNK_0xe688() // UNK_0xe688
{
  Push(0x65f9); // IFIELD(UNK_0xe5c5)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe690: WORD 'UNK_0xe692' codep=0x224c parp=0xe692
// ================================================

void UNK_0xe692() // UNK_0xe692
{
  Push(0x65ec); // IFIELD(UNK_0xe5df)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe69a: WORD 'UNK_0xe69c' codep=0x224c parp=0xe69c
// ================================================

void UNK_0xe69c() // UNK_0xe69c
{
  Push(pp_WEAPON_dash_); // WEAPON-
  Push(Read16(Pop())); // @
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xe6a4: WORD 'UNK_0xe6a6' codep=0x224c parp=0xe6a6
// ================================================

void UNK_0xe6a6() // UNK_0xe6a6
{
  UNK_0xe4ec(); // UNK_0xe4ec
  _ask_INVIS(); // ?INVIS
}


// ================================================
// 0xe6ac: WORD 'UNK_0xe6ae' codep=0x224c parp=0xe6ae
// ================================================

void UNK_0xe6ae() // UNK_0xe6ae
{
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _eq_(); // =
}


// ================================================
// 0xe6b8: WORD 'UNK_0xe6ba' codep=0x224c parp=0xe6ba
// ================================================

void UNK_0xe6ba() // UNK_0xe6ba
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _gt_MAINVI(); // >MAINVI
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe6ca: WORD 'UNK_0xe6cc' codep=0x224c parp=0xe6cc
// ================================================

void UNK_0xe6cc() // UNK_0xe6cc
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(0); // 0
  Push(0); // 0
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
  unsigned short int a = Pop(); // >R
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
// 0xe708: WORD 'UNK_0xe70a' codep=0x224c parp=0xe70a
// ================================================

void UNK_0xe70a() // UNK_0xe70a
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) goto label1;
  POINT_gt_I(); // POINT>I
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  _ex_IY(); // !IY
  _ex_IX(); // !IX

  label1:
  UNK_0xe6ba(); // UNK_0xe6ba
  Push(pp_XORMODE); // XORMODE
  _ex__2(); // !_2
}


// ================================================
// 0xe72c: WORD 'UNK_0xe72e' codep=0x224c parp=0xe72e
// ================================================

void UNK_0xe72e() // UNK_0xe72e
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}

// 0xe73c: db 0x4c 0x22 0x8b 0x75 0xea 0x97 0x32 0x0e 0xe4 0x96 0x90 0x16 'L" u  2     '

// ================================================
// 0xe748: WORD 'UNK_0xe74a' codep=0x224c parp=0xe74a
// ================================================

void UNK_0xe74a() // UNK_0xe74a
{
  _dash_ICON(); // -ICON
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe756: WORD 'UNK_0xe758' codep=0x224c parp=0xe758
// ================================================

void UNK_0xe758() // UNK_0xe758
{
  UNK_0xe74a(); // UNK_0xe74a
  UNK_0xe72e(); // UNK_0xe72e
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xe760: WORD 'UNK_0xe762' codep=0x224c parp=0xe762
// ================================================

void UNK_0xe762() // UNK_0xe762
{
  UNK_0xe6cc(); // UNK_0xe6cc
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(Pop() + Pop()); // +
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  UNK_0xe70a(); // UNK_0xe70a
}

// 0xe776: db 0x4c 0x22 0xc9 0x74 0x23 0x6d 0xbb 0x74 0x23 0x6d 0x08 0xe7 0x90 0x16 'L" t#m t#m    '

// ================================================
// 0xe784: WORD 'UNK_0xe786' codep=0x224c parp=0xe786
// ================================================

void UNK_0xe786() // UNK_0xe786
{
  unsigned short int a = Pop(); // >R
  UNK_0xe4ec(); // UNK_0xe4ec
  Push(a); // R>
  IFLD_at_(); // IFLD@
  _gt_C_plus_S(); // >C+S
  UNK_0xe4ec(); // UNK_0xe4ec
  ICLOSE(); // ICLOSE
  UNK_0xe762(); // UNK_0xe762
}


// ================================================
// 0xe798: WORD 'UNK_0xe79a' codep=0x224c parp=0xe79a
// ================================================

void UNK_0xe79a() // UNK_0xe79a
{
  UNK_0xe660(); // UNK_0xe660
  if (Pop() == 0) goto label1;
  UNK_0xe4ec(); // UNK_0xe4ec
  UNK_0xe4d8(); // UNK_0xe4d8
  UNK_0xe762(); // UNK_0xe762
  goto label2;

  label1:
  Push(0xe5e9);
  UNK_0xe786(); // UNK_0xe786

  label2:
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe7b4: WORD 'UNK_0xe7b6' codep=0x224c parp=0xe7b6
// ================================================

void UNK_0xe7b6() // UNK_0xe7b6
{
  UNK_0xe4ec(); // UNK_0xe4ec
  UNK_0xe4d8(); // UNK_0xe4d8
  UNK_0xe762(); // UNK_0xe762
}


// ================================================
// 0xe7be: WORD 'UNK_0xe7c0' codep=0x224c parp=0xe7c0
// ================================================

void UNK_0xe7c0() // UNK_0xe7c0
{

  UNK_0x3f09("STONES AND STICKS");
}


// ================================================
// 0xe7d6: WORD 'UNK_0xe7d8' codep=0x224c parp=0xe7d8
// ================================================

void UNK_0xe7d8() // UNK_0xe7d8
{

  UNK_0x3f09("METAL WEAPONS OF SOME SORT");
}


// ================================================
// 0xe7f7: WORD 'UNK_0xe7f9' codep=0x224c parp=0xe7f9
// ================================================

void UNK_0xe7f9() // UNK_0xe7f9
{

  UNK_0x3f09("CHEMICAL PROJECTILES OF SOME SORT");
}


// ================================================
// 0xe81f: WORD 'UNK_0xe821' codep=0x224c parp=0xe821
// ================================================

void UNK_0xe821() // UNK_0xe821
{

  UNK_0x3f09("ENERGY WEAPONS OF SOME SORT");
}


// ================================================
// 0xe841: WORD '>WEAP' codep=0x4b3b parp=0xe84b
// ================================================

void _gt_WEAP() // >WEAP
{
  switch(Pop()) // >WEAP
  {
  case 1:
    UNK_0xe7c0(); // UNK_0xe7c0
    break;
  case 2:
    UNK_0xe7d8(); // UNK_0xe7d8
    break;
  case 3:
    UNK_0xe7f9(); // UNK_0xe7f9
    break;
  case 4:
    UNK_0xe821(); // UNK_0xe821
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe85f: WORD 'UNK_0xe861' codep=0x224c parp=0xe861
// ================================================

void UNK_0xe861() // UNK_0xe861
{
  Push(0); // 0
  Push(0xe5e4); // probable 'UNK_0xe5e4'
  IFLD_ex_(); // IFLD!
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe86d: WORD 'UNK_0xe86f' codep=0x224c parp=0xe86f
// ================================================

void UNK_0xe86f() // UNK_0xe86f
{
  Push(0); // 0
  Push(0xe5ca); // probable 'UNK_0xe5ca'
  IFLD_ex_(); // IFLD!
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe87b: WORD 'UNK_0xe87d' codep=0x224c parp=0xe87d
// ================================================

void UNK_0xe87d() // UNK_0xe87d
{
  Push(Read16(regsp)); // DUP
  Push(0x007f);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(0x0100);
  _dash_(); // -
}


// ================================================
// 0xe891: WORD 'UNK_0xe893' codep=0x224c parp=0xe893
// ================================================

void UNK_0xe893() // UNK_0xe893
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(0x65f6); // IFIELD(UNK_0xe5b6)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe87d(); // UNK_0xe87d
  Push(0x65ee); // IFIELD(INST-X)
  _plus__ex__2(); // +!_2
  Push(0x65f7); // IFIELD(UNK_0xe5bb)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe87d(); // UNK_0xe87d
  Push(0x65f0); // IFIELD(INST-Y)
  _plus__ex__2(); // +!_2
  Push(0); // 0
  if (Pop() == 0) goto label1;
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  UNK_0xe70a(); // UNK_0xe70a
}


// ================================================
// 0xe8c7: WORD 'UNK_0xe8c9' codep=0x224c parp=0xe8c9
// ================================================

void UNK_0xe8c9() // UNK_0xe8c9
{
  _at_ID(); // @ID
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0xe5c0);
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe8e1: WORD 'UNK_0xe8e3' codep=0x224c parp=0xe8e3
// ================================================

void UNK_0xe8e3() // UNK_0xe8e3
{
  Push(1); // 1
  Push(cc__5); // 5
  RRND(); // RRND
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
}


// ================================================
// 0xe8f9: WORD 'UNK_0xe8fb' codep=0x224c parp=0xe8fb
// ================================================

void UNK_0xe8fb() // UNK_0xe8fb
{
  UNK_0xe4b2(); // UNK_0xe4b2
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label1;
  UNK_0xe8c9(); // UNK_0xe8c9
  goto label2;

  label1:
  _at_ID(); // @ID
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xe8e3(); // UNK_0xe8e3
  Push(0x65f9); // IFIELD(UNK_0xe5c5)
  C_ex__2(); // C!_2

  label2:
  UNK_0xe74a(); // UNK_0xe74a
}


// ================================================
// 0xe925: WORD 'UNK_0xe927' codep=0x224c parp=0xe927
// ================================================

void UNK_0xe927() // UNK_0xe927
{
  unsigned short int a = Pop(); // >R
  Push(a); // I
  IFLD_at_(); // IFLD@
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  Push(a); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe939: WORD 'UNK_0xe93b' codep=0x224c parp=0xe93b
// ================================================

void UNK_0xe93b() // UNK_0xe93b
{
  Push(0xe5c5); // probable 'UNK_0xe5c5'
  UNK_0xe927(); // UNK_0xe927
  UNK_0xe758(); // UNK_0xe758
}


// ================================================
// 0xe945: WORD 'UNK_0xe947' codep=0x224c parp=0xe947
// ================================================

void UNK_0xe947() // UNK_0xe947
{
  _at_INST_dash_S(); // @INST-S
  Push(0x0015);
  Push(0x0019);
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0xe5df);
  SWAP(); // SWAP
  if (Pop() == 0) goto label1;
  Push(0); // 0
  SWAP(); // SWAP
  IFLD_ex_(); // IFLD!
  return;

  label1:
  UNK_0xe927(); // UNK_0xe927
}


// ================================================
// 0xe96d: WORD 'UNK_0xe96f' codep=0x224c parp=0xe96f
// ================================================

void UNK_0xe96f() // UNK_0xe96f
{
  UNK_0xe4b2(); // UNK_0xe4b2
  Push(0x004b);
  _st_(); // <
  Push(pp__ask_FLAT); // ?FLAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe98d: WORD 'UNK_0xe98f' codep=0x224c parp=0xe98f
// ================================================

void UNK_0xe98f() // UNK_0xe98f
{
  Push(0xe5ae);
  IFLD_at_(); // IFLD@
}


// ================================================
// 0xe997: WORD 'UNK_0xe999' codep=0x224c parp=0xe999
// ================================================

void UNK_0xe999() // UNK_0xe999
{
  Push(0xe575);
  IFLD_at_(); // IFLD@
  _slash_(); // /
  Push(0xe57d); // probable 'UNK_0xe57d'
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  Push(0xe57d); // probable 'UNK_0xe57d'
  IFLD_ex_(); // IFLD!
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  UNK_0xe566(); // UNK_0xe566
  Push(pp__ask_HEAL); // ?HEAL
  ON_2(); // ON_2
}

// 0xe9c9: db 0x4c 0x22 0x7e 0x5c 0xae 0x0b 0x97 0x3b 0x5d 0x17 0x0b 0x00 0x25 0x40 0xfa 0x15 0x1a 0x00 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x5d 0x17 0x1e 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x67 0x55 0xae 0x0b 0xd9 0x84 0x90 0x16 'L"~\   ;]   %@    . ] d  K]   F     gU      '

// ================================================
// 0xe9f5: WORD 'UNK_0xe9f7' codep=0x224c parp=0xe9f7
// ================================================

void UNK_0xe9f7() // UNK_0xe9f7
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  UNK_0xe4c6(); // UNK_0xe4c6
}


// ================================================
// 0xe9ff: WORD 'UNK_0xea01' codep=0x224c parp=0xea01
// ================================================

void UNK_0xea01() // UNK_0xea01
{
  UNK_0xe9f7(); // UNK_0xe9f7
  PRINT("THE ", 4); // (.")
  PRINT(" LIFEFORM ATTACKS ", 18); // (.")
  GCR(); // GCR
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(UNK_0xe570)
  _do__dot_(); // $.
}


// ================================================
// 0xea29: WORD 'UNK_0xea2b' codep=0x224c parp=0xea2b
// ================================================

void UNK_0xea2b() // UNK_0xea2b
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(UNK_0xe599)
  Push(0); // 0
  Push(cc__6); // 6
  RRND(); // RRND
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea43: WORD 'UNK_0xea45' codep=0x224c parp=0xea45
// ================================================

void UNK_0xea45() // UNK_0xea45
{
  UNK_0xe96f(); // UNK_0xe96f
  UNK_0xe98f(); // UNK_0xe98f
  UNK_0xea2b(); // UNK_0xea2b
  UNK_0xea01(); // UNK_0xea01
  SWAP(); // SWAP
  if (Pop() == 0) goto label1;
  UNK_0xe999(); // UNK_0xe999
  goto label2;

  label1:
  Pop(); // DROP
  PRINT(", BUT MISSES", 12); // (.")

  label2:
  PRINT(".", 1); // (.")
  ICLOSE(); // ICLOSE
  Push(0x03e8);
  MS(); // MS
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  UNK_0xe566(); // UNK_0xe566
  Push(pp__i__dot_VITAL); // '.VITAL
  _at_EXECUTE(); // @EXECUTE
}


// ================================================
// 0xea84: WORD 'UNK_0xea86' codep=0x224c parp=0xea86
// ================================================

void UNK_0xea86() // UNK_0xea86
{
  Push(0x03e8);
  Push(0x0064);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BEEPON_2(); // BEEPON_2
  Push(i); // I
  Push(i); // I
  Push(Pop()*2); // 2*
  RRND(); // RRND
  TONE(); // TONE
  Push(cc__3); // 3
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  i++;
  } while(i<imax); // (LOOP) 0xffe2

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xeab4: WORD 'UNK_0xeab6' codep=0x224c parp=0xeab6
// ================================================

void UNK_0xeab6() // UNK_0xeab6
{
  WLD_gt_SCR(); // WLD>SCR
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
}


// ================================================
// 0xeac2: WORD 'UNK_0xeac4' codep=0x224c parp=0xeac4
// ================================================

void UNK_0xeac4() // UNK_0xeac4
{
  _gt_MAINVI(); // >MAINVI
  UNK_0xeab6(); // UNK_0xeab6
  UNK_0xe4ec(); // UNK_0xe4ec
  UNK_0xeab6(); // UNK_0xeab6
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  _1PIX(); // 1PIX
  LLINE(); // LLINE
  V_gt_DISPL(); // V>DISPL
  UNK_0xea86(); // UNK_0xea86
  _2PIX(); // 2PIX
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeade: WORD 'UNK_0xeae0' codep=0x224c parp=0xeae0
// ================================================

void UNK_0xeae0() // UNK_0xeae0
{
  PRINT("COMMANDER, WE HAVE BEEN HIT WITH", 32); // (.")
  GCR(); // GCR
  UNK_0xe514(); // UNK_0xe514
  LoadData("UNK_0xe5d7"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  _gt_WEAP(); // >WEAP case
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  GCR(); // GCR
  PRINT("BY THE ", 7); // (.")
  UNK_0xe514(); // UNK_0xe514
  LoadData("UNK_0xe59e"); // from 'TRADERS     '
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb31: WORD 'UNK_0xeb33' codep=0x224c parp=0xeb33
// ================================================

void UNK_0xeb33() // UNK_0xeb33
{
  UNK_0xe514(); // UNK_0xe514
  LoadData("UNK_0xe5d7"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0019);
  Push(Pop() * Pop()); // *
  ICLOSE(); // ICLOSE
  UNK_0xea2b(); // UNK_0xea2b
  _gt_C_plus_S(); // >C+S
  UNK_0xe999(); // UNK_0xe999
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb4b: WORD 'UNK_0xeb4d' codep=0x224c parp=0xeb4d
// ================================================

void UNK_0xeb4d() // UNK_0xeb4d
{
  Push(pp_FSTUN); // FSTUN
  Push(Read16(Pop())); // @
  UNK_0xe4be(); // UNK_0xe4be
}


// ================================================
// 0xeb55: WORD 'UNK_0xeb57' codep=0x224c parp=0xeb57
// ================================================

void UNK_0xeb57() // UNK_0xeb57
{
  UNK_0xe9f7(); // UNK_0xe9f7
  UNK_0xeae0(); // UNK_0xeae0
}


// ================================================
// 0xeb5d: WORD 'UNK_0xeb5f' codep=0x224c parp=0xeb5f
// ================================================

void UNK_0xeb5f() // UNK_0xeb5f
{
  UNK_0xe4d8(); // UNK_0xe4d8
  UNK_0xe4a8(); // UNK_0xe4a8
  Push(Read16(regsp)); // DUP
  unsigned short int a = Pop(); // >R
  if (Pop() == 0) goto label1;
  UNK_0xe500(); // UNK_0xe500
  SWAP(); // SWAP
  UNK_0xe500(); // UNK_0xe500
  SWAP(); // SWAP

  label1:
  UNK_0xeac4(); // UNK_0xeac4
  Push(a); // R>
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xeb57(); // UNK_0xeb57
  UNK_0xeb33(); // UNK_0xeb33
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  UNK_0xe566(); // UNK_0xe566
  _dot_VIT(); // .VIT

  label2:
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xeb8f: WORD 'SENT2P' codep=0xaccc parp=0xeb9a
// ================================================
// 0xeb9a: db 0x05 0x05 0x05 0xb6 0xeb 0xba 0xeb 0xbe 0xeb 0xc2 0xeb 0xc6 0xeb 0x74 0xe6 0x4d 0xeb 0x60 0xe6 0xa6 0xe6 0xae 0xe6 0x50 0x9d 0x86 0x5d 0x17 0x01 0x48 0x3a 0x00 0x01 0x58 0xe7 0x81 0x01 0x9a 0xe7 0x02 0x01 0x9a 0xe7 0x03 0x02 0x5f 0xeb 0x83 0x84 '             t M `     P  ]  H:  X           _   '

// ================================================
// 0xebcb: WORD 'P2SENT' codep=0xaccc parp=0xebd6
// ================================================
// 0xebd6: db 0x06 0x05 0x06 0xf4 0xeb 0xf8 0xeb 0xfc 0xeb 0x00 0xec 0x04 0xec 0x08 0xec 0x74 0xe6 0x92 0xe6 0x9c 0xe6 0xfa 0xe5 0x06 0xe6 0xdc 0x1b 0x0d 0x57 0x45 0x01 0x48 0x3a 0x00 0x01 0x61 0xe8 0x01 0x01 0x48 0x3a 0x02 0x01 0x48 0x3a 0x03 0x01 0x48 0x3a 0x04 0x01 0x47 0xe9 0x84 '               t            WE H:  a   H:  H:  H:  G  '

// ================================================
// 0xec0c: WORD 'CRIT2P' codep=0xaccc parp=0xec17
// ================================================
// 0xec17: db 0x07 0x05 0x07 0x37 0xec 0x3b 0xec 0x3f 0xec 0x45 0xec 0x4b 0xec 0x50 0xec 0x56 0xec 0x6a 0xe6 0x88 0xe6 0x18 0xe6 0x54 0xe6 0x26 0xe6 0x17 0xfd 0xff 0x77 0x5d 0x01 0x48 0x3a 0x00 0x01 0x48 0x3a 0x81 0x03 0x48 0x3a 0x02 0x83 0x04 0x03 0x45 0xea 0x02 0x83 0x84 0x02 0x93 0xe8 0x82 0x03 0x03 0xb6 0xe7 0x82 0x83 0x04 0x03 0x45 0xea 0x82 0x83 0x84 '   7 ; ? E K P V j     T &    w] H:  H:  H:    E                E    '

// ================================================
// 0xec5c: WORD 'P2CRIT' codep=0xaccc parp=0xec67
// ================================================
// 0xec67: db 0x07 0x06 0x06 0x8a 0xec 0x8e 0xec 0x92 0xec 0x96 0xec 0x9a 0xec 0x9e 0xec 0xea 0x90 0x6a 0xe6 0x7e 0xe6 0x88 0xe6 0x9c 0xe6 0xee 0xe5 0x06 0xe6 0x0e 0x20 0x0f 0xc0 0x63 0x38 0x01 0x48 0x3a 0x00 0x01 0x6f 0xe8 0x01 0x01 0x3b 0xe9 0x82 0x01 0x48 0x3a 0x03 0x01 0x48 0x3a 0x04 0x01 0xc9 0xe8 0x85 '                 j ~             c8 H:  o   ;   H:  H:     '

// ================================================
// 0xeca2: WORD 'UNK_0xeca4' codep=0x224c parp=0xeca4
// ================================================

void UNK_0xeca4() // UNK_0xeca4
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x00fa);
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
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
  Push(0x0015);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe758(); // UNK_0xe758

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffe6

}


// ================================================
// 0xecde: WORD 'UNK_0xece0' codep=0x224c parp=0xece0
// ================================================

void UNK_0xece0() // UNK_0xece0
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x001e);
  Push(pp_IGLOBAL); // IGLOBAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
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
  Push(Read16(regsp)); // DUP
  Push(0x0044);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(0x002a);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  UNK_0xe8fb(); // UNK_0xe8fb

  label3:
  goto label4;

  label2:
  Push(0x0015);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  UNK_0xe758(); // UNK_0xe758

  label4:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffc6


  label1:
  UNK_0xe72e(); // UNK_0xe72e
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xed3e: WORD 'UNK_0xed40' codep=0x224c parp=0xed40
// ================================================

void UNK_0xed40() // UNK_0xed40
{
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(0x0bb8);
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed5a: WORD 'UNK_0xed5c' codep=0x224c parp=0xed5c
// ================================================

void UNK_0xed5c() // UNK_0xed5c
{
  UNK_0xe8e3(); // UNK_0xe8e3
  Push(pp_FSTUN); // FSTUN
  _ex__2(); // !_2
}


// ================================================
// 0xed64: WORD 'UNK_0xed66' codep=0x224c parp=0xed66
// ================================================

void UNK_0xed66() // UNK_0xed66
{
  UNK_0xed5c(); // UNK_0xed5c
  UNK_0xece0(); // UNK_0xece0
}


// ================================================
// 0xed6c: WORD 'CIRCLES' codep=0x224c parp=0xed78
// ================================================
// entry

void CIRCLES() // CIRCLES
{
  Push(0x000b);
  Push(0xb78d); // probable 'TV?ART'
  MODULE(); // MODULE
  if (Pop() == 0) goto label1;
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  Push(pp_XORMODE); // XORMODE
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  unsigned short int a = Pop(); // >R
  _099(); // 099
  BEEPON_2(); // BEEPON_2
  _gt_MAINVI(); // >MAINVI
  UNK_0xe6ba(); // UNK_0xe6ba
  Push(0x0064);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  RNDCLR(); // RNDCLR
  _gt_MAINVI(); // >MAINVI
  Push(0x0023);
  Push(0x0040);
  Push(i); // I
  _dot_CIRCLE_1(); // .CIRCLE_1
  V_gt_DISPL(); // V>DISPL
  _at_COLOR(); // @COLOR
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(i); // I
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  TONE(); // TONE
  Push(cc__5); // 5
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffd6

  BEEPOFF(); // BEEPOFF
  UNK_0xed66(); // UNK_0xed66
  UNK_0xed40(); // UNK_0xed40
  UNK_0xe72e(); // UNK_0xe72e
  UNK_0xe6ba(); // UNK_0xe6ba
  Push(0xcf55); // probable '.EN'
  MODULE(); // MODULE
  _gt_DISPLA(); // >DISPLA
  Push(a); // R>
  Push(pp_XORMODE); // XORMODE
  _ex__2(); // !_2
  goto label3;

  label2:
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) goto label3;

  UNK_0x3f09("STUNNER WORKS ON PLANETSIDE");
  _dot_TTY(); // .TTY

  label3:
  goto label4;

  label1:
  Push(0xb7e7); // probable '.NOFUN'
  MODULE(); // MODULE

  label4:
  Push2Words("NULL");
}


// ================================================
// 0xee28: WORD 'UNK_0xee2a' codep=0x224c parp=0xee2a
// ================================================

void UNK_0xee2a() // UNK_0xee2a
{
  Push(pp_FSTUN); // FSTUN
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0xebd6); // probable 'P2SENT'
  DISTRAC(); // DISTRAC
  Rule(P2SENT);
  Pop(); // DROP
  Push(0xeb9a); // probable 'SENT2P'
  DISTRAC(); // DISTRAC
  Rule(SENT2P);
  Pop(); // DROP
}


// ================================================
// 0xee4a: WORD 'UNK_0xee4c' codep=0x224c parp=0xee4c
// ================================================

void UNK_0xee4c() // UNK_0xee4c
{
  Push(0xec67); // probable 'P2CRIT'
  DISTRAC(); // DISTRAC
  Rule(P2CRIT);
  Pop(); // DROP
  Push(0xec17); // probable 'CRIT2P'
  DISTRAC(); // DISTRAC
  Rule(CRIT2P);
  Pop(); // DROP
}


// ================================================
// 0xee62: WORD 'UNK_0xee64' codep=0x224c parp=0xee64
// ================================================

void UNK_0xee64() // UNK_0xee64
{
  Push(pp__h_CRIT); // ^CRIT
  Push(Read16(Pop())); // @
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xee72: WORD 'UNK_0xee74' codep=0x224c parp=0xee74
// ================================================

void UNK_0xee74() // UNK_0xee74
{
  Push(0); // 0
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xee7c: WORD '?ANYBODY' codep=0x224c parp=0xee89
// ================================================

void _ask_ANYBODY() // ?ANYBODY
{
  Push(1); // 1
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  Push(pp_WEAPON_dash_); // WEAPON-
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Pop()-1); // 1-
  Push(pp_WEAPON_dash_); // WEAPON-
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeea1: WORD 'UNK_0xeea3' codep=0x224c parp=0xeea3
// ================================================

void UNK_0xeea3() // UNK_0xeea3
{
  Push(pp__h_CRIT); // ^CRIT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeeb7: WORD '(SIMULATE)' codep=0x4b3b parp=0xeec6
// ================================================

void _ro_SIMULATE_rc_() // (SIMULATE)
{
  switch(Pop()) // (SIMULATE)
  {
  case 68:
    UNK_0xee4c(); // UNK_0xee4c
    break;
  case 21:
    UNK_0xee2a(); // UNK_0xee2a
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeed2: WORD '1SIMULATE' codep=0x224c parp=0xeee0
// ================================================
// entry

void _1SIMULATE() // 1SIMULATE
{
  Push(pp_FSTUN); // FSTUN
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-
  Push(Read16(regsp)); // DUP
  Push(pp_FSTUN); // FSTUN
  _st__ex__gt_(); // <!>
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xeca4(); // UNK_0xeca4

  label1:
  Push(pp__ask_NEW); // ?NEW
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xee74(); // UNK_0xee74
  Push(pp__ask_NEW); // ?NEW
  OFF_2(); // OFF_2

  label2:
  _ask_ANYBODY(); // ?ANYBODY
  if (Pop() == 0) return;
  UNK_0xee64(); // UNK_0xee64
  Push(1); // 1
  if (Pop() == 0) goto label3;
  _at_INST_dash_C(); // @INST-C
  _ro_SIMULATE_rc_(); // (SIMULATE) case

  label3:
  ICLOSE(); // ICLOSE
  UNK_0xee8f(); // UNK_0xee8f
  UNK_0xeea3(); // UNK_0xeea3
}


// ================================================
// 0xef22: WORD 'UNK_0xef24' codep=0x224c parp=0xef24
// ================================================

void UNK_0xef24() // UNK_0xef24
{
  Push(0xd0f9); // probable '(TVSE'
  MODULE(); // MODULE
  UNK_0xe55c(); // UNK_0xe55c
  UNK_0xe552(); // UNK_0xe552
  Push(pp__i__dot_VITAL); // '.VITAL
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xef36: WORD 'UNK_0xef38' codep=0x224c parp=0xef38
// ================================================

void UNK_0xef38() // UNK_0xef38
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__1(); // ?ICONS-_1
}


// ================================================
// 0xef4a: WORD 'UNK_0xef4c' codep=0x224c parp=0xef4c
// ================================================

void UNK_0xef4c() // UNK_0xef4c
{
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xef38(); // UNK_0xef38
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
  Push(0); // 0
  goto label2;

  label3:
  Push(0); // 0
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x002e);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(1); // 1

  label4:
  i++;
  } while(i<imax); // (LOOP) 0xffea


  label2:
  return;

  label1:
  Push(cc_FALSE); // FALSE
}


// ================================================
// 0xef98: WORD 'UNK_0xef9a' codep=0x224c parp=0xef9a
// ================================================

void UNK_0xef9a() // UNK_0xef9a
{
  UNK_0xe9f7(); // UNK_0xe9f7
  PRINT("DO YOU WANT TO TRADE?   [ NO YES ] ", 35); // (.")
  Y_slash_N(); // Y/N
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  _ex__2(); // !_2
}


// ================================================
// 0xefce: WORD 'UNK_0xefd0' codep=0x224c parp=0xefd0
// ================================================

void UNK_0xefd0() // UNK_0xefd0
{
  DEPTH(); // DEPTH
  unsigned short int a = Pop(); // >R
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  unsigned short int b = Pop(); // >R
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  unsigned short int c = Pop(); // >R
  Push(0xc4ac); // probable 'TRADE'
  MODULE(); // MODULE
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  ON_2(); // ON_2
  Push(c); // R>
  Push(pp_OCRS); // OCRS
  _ex__2(); // !_2
  Push(b); // R>
  Push(pp_NCRS); // NCRS
  _ex__2(); // !_2
  Push(a); // R>
  _ask_ENOUGH(); // ?ENOUGH
  UNK_0xef24(); // UNK_0xef24
  UNK_0xe6ba(); // UNK_0xe6ba
}


// ================================================
// 0xf000: WORD 'UNK_0xf002' codep=0x224c parp=0xf002
// ================================================

void UNK_0xf002() // UNK_0xf002
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe4ec(); // UNK_0xe4ec
  ICLOSE(); // ICLOSE
  UNK_0xe4d8(); // UNK_0xe4d8
  D_eq_(); // D=
}


// ================================================
// 0xf010: WORD 'UNK_0xf012' codep=0x224c parp=0xf012
// ================================================

void UNK_0xf012() // UNK_0xf012
{
  Push(0x1388);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x003c);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  Push(cc__dash_1); // -1
  Push(Read16(regsp)); // DUP
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(cc__dash_1); // -1
  Push(0x65f0); // IFIELD(INST-Y)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf044: WORD 'FUNCTIONS' codep=0x1d29 parp=0xf052
// ================================================
// 0xf052: db 0x05 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x27 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C ' k      '

// ================================================
// 0xf06b: WORD 'UNK_0xf06d' codep=0x224c parp=0xf06d
// ================================================

void UNK_0xf06d() // UNK_0xf06d
{
  _gt_TVCT(); // >TVCT
  Push(pp_FUNCTIONS); // FUNCTIONS
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
}


// ================================================
// 0xf077: WORD 'UNK_0xf079' codep=0x224c parp=0xf079
// ================================================

void UNK_0xf079() // UNK_0xf079
{
  CLICK(); // CLICK
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  UNK_0xf06d(); // UNK_0xf06d
}


// ================================================
// 0xf083: WORD 'MAPS' codep=0x224c parp=0xf08c
// ================================================

void MAPS() // MAPS
{
  Push(0xcdb0); // probable 'MAPS'
  MODULE(); // MODULE
}


// ================================================
// 0xf094: WORD 'WALK&TALK' codep=0x224c parp=0xf0a2
// ================================================

void WALK_and_TALK() // WALK&TALK
{
  Push(0xd139); // probable '(TALK'
  MODULE(); // MODULE
}


// ================================================
// 0xf0aa: WORD 'TVMOVE' codep=0x224c parp=0xf0b5
// ================================================

void TVMOVE() // TVMOVE
{
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  _099(); // 099
  Push(0xd072); // probable 'TVMO'
  MODULE(); // MODULE
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}


// ================================================
// 0xf0c5: WORD 'DO.WEAPONS' codep=0x224c parp=0xf0d4
// ================================================

void DO_dot_WEAPONS() // DO.WEAPONS
{
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  Push(0xd129); // probable '(WEAP'
  MODULE(); // MODULE
}


// ================================================
// 0xf0ec: WORD '/ITEMS' codep=0x224c parp=0xf0f7
// ================================================

void _slash_ITEMS() // /ITEMS
{
  Push(0xcfe6); // probable '/ITEMS'
  MODULE(); // MODULE
}


// ================================================
// 0xf0ff: WORD 'ICONS' codep=0x224c parp=0xf109
// ================================================

void ICONS() // ICONS
{
  Push(0xd034); // probable 'ICONS'
  MODULE(); // MODULE
  UNK_0xef24(); // UNK_0xef24
}


// ================================================
// 0xf113: WORD '>BUTTONS' codep=0x4b3b parp=0xf120
// ================================================

void _gt_BUTTONS() // >BUTTONS
{
  switch(Pop()) // >BUTTONS
  {
  case 0:
    MAPS(); // MAPS
    break;
  case 1:
    TVMOVE(); // TVMOVE
    break;
  case 2:
    _slash_ITEMS(); // /ITEMS
    break;
  case 3:
    WALK_and_TALK(); // WALK&TALK
    break;
  case 4:
    DO_dot_WEAPONS(); // DO.WEAPONS
    break;
  case 5:
    ICONS(); // ICONS
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf13c: WORD '?FUNC' codep=0x224c parp=0xf146
// ================================================

void _ask_FUNC() // ?FUNC
{
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x013e);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  CIRCLES(); // CIRCLES
  Push(1); // 1
  return;

  label1:
  Push(0x013b);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  BEEP(); // BEEP
  Push(1); // 1
  return;

  label2:
  Push(0x013d);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  Push(0xd0ae); // probable 'TELE_2'
  MODULE(); // MODULE
  Push(1); // 1
  return;

  label3:
  Push(0); // 0
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf198: WORD 'UNK_0xf19a' codep=0x224c parp=0xf19a
// ================================================

void UNK_0xf19a() // UNK_0xf19a
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xef38(); // UNK_0xef38
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
  Push(0); // 0
  goto label2;

  label3:
  Push(0); // 0
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x0031);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(1); // 1

  label4:
  i++;
  } while(i<imax); // (LOOP) 0xffea


  label2:
  return;

  label1:
  Push(cc_FALSE); // FALSE
}


// ================================================
// 0xf1f4: WORD 'TV-KEY' codep=0x224c parp=0xf1ff
// ================================================

void TV_dash_KEY() // TV-KEY
{
  _ro_XYSCAN(); // (XYSCAN case
  Push(0); // 0
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(1); // 1
  UNK_0xf079(); // UNK_0xf079
  goto label2;

  label1:
  Push(0); // 0
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label6;
  Pop(); Pop();// 2DROP
  Push(cc__dash_1); // -1
  UNK_0xf079(); // UNK_0xf079
  goto label2;

  label6:
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label7;
  UNK_0xf012(); // UNK_0xf012
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  _gt_BUTTONS(); // >BUTTONS case
  UNK_0xe6ba(); // UNK_0xe6ba

  label7:
  _1SIMULATE(); // 1SIMULATE
  Pop(); // DROP

  label2:
  UNK_0xef4c(); // UNK_0xef4c
  if (Pop() == 0) goto label3;
  UNK_0xef9a(); // UNK_0xef9a
  if (Pop() == 0) goto label4;
  UNK_0xefd0(); // UNK_0xefd0

  label4:
  UNK_0xe9f7(); // UNK_0xe9f7

  label3:
  UNK_0xf19a(); // UNK_0xf19a
  if (Pop() == 0) goto label5;
  Push(0xc8b4); // probable 'HALL'
  MODULE(); // MODULE
  Push(pp_UNK_0xe4d4); // UNK_0xe4d4
  ON_2(); // ON_2
  UNK_0xe6ba(); // UNK_0xe6ba
  UNK_0xe9f7(); // UNK_0xe9f7

  label5:
  UNK_0xf002(); // UNK_0xf002
  if (Pop() == 0) return;
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xf026(); // UNK_0xf026
}


// ================================================
// 0xf273: WORD 'UNK_0xf275' codep=0x224c parp=0xf275
// ================================================

void UNK_0xf275() // UNK_0xf275
{
  Push(0x001a);
  Push(0x0012);
  Push(Pop() * Pop()); // *
  Push(cc__9); // 9
  Push(Pop() + Pop()); // +
  LC_ex_(); // LC!
}


// ================================================
// 0xf287: WORD 'UNK_0xf289' codep=0x224c parp=0xf289
// ================================================

void UNK_0xf289() // UNK_0xf289
{
  Push(pp__ask_FLAT); // ?FLAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SetColor("PINK");
  goto label2;

  label1:
  SetColor("LT-BLUE");

  label2:
  unsigned short int a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(pp_ICON_h_); // ICON^
  Push(Read16(Pop())); // @
  UNK_0xf275(); // UNK_0xf275
  Push(Read16(a)); // R@
  Push(pp_ICON_h_); // ICON^
  Push(Read16(Pop())); // @
  Push(0x0043);
  Push(Pop() + Pop()); // +
  UNK_0xf275(); // UNK_0xf275
  Push(a); // R>
  Push(pp_ICON_h_); // ICON^
  Push(Read16(Pop())); // @
  Push(0x0086);
  Push(Pop() + Pop()); // +
  UNK_0xf275(); // UNK_0xf275
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  _dash_ICON(); // -ICON
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
  UNK_0xe72e(); // UNK_0xe72e
}


// ================================================
// 0xf2d3: WORD 'UNK_0xf2d5' codep=0x224c parp=0xf2d5
// ================================================

void UNK_0xf2d5() // UNK_0xf2d5
{
  Push(pp__ask_FLAT); // ?FLAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _gt_TVCT(); // >TVCT

  UNK_0x3f09("THE T.V. LIFEFORM SHIELD IS ACTIVE");
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS

  label1:
  UNK_0xf289(); // UNK_0xf289
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{
  Push2Words("NULL");
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1); // IFIELD(INST-SI)
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(0x0012);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  unsigned short int a = Pop(); // >R
  Pop(); Pop();// 2DROP
  CI(); // CI
  Push(a); // R>
  LEAVE(); // LEAVE

  label1:
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffde

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf352: WORD 'UNK_0xf354' codep=0x224c parp=0xf354
// ================================================

void UNK_0xf354() // UNK_0xf354
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x007d);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  _2DUP(); // 2DUP
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  _at_COLOR(); // @COLOR
  unsigned short int a = Pop(); // >R
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
  Push(0xbe55); // probable '.AHUF'
  MODULE(); // MODULE
  Push(0x1f40); Push(0x0000);
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
  Push(0x0010);
  Push(0x6601); // IFIELD(UNK_0xe582)
  _ex__2(); // !_2
  Push(0); // 0
  Push(0x6600); // IFIELD(UNK_0xe57d)
  C_ex__2(); // C!_2
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
  _dot_VIT(); // .VIT
  CTINIT(); // CTINIT
  Push(0); // 0
  Push(0x6601); // IFIELD(UNK_0xe582)
  _ex__2(); // !_2
  Push(0xbe55); // probable '.AHUF'
  MODULE(); // MODULE
  Push(0x1f40); Push(0x0000);
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  _ex_COLOR(); // !COLOR
}

// 0xf3c8: db 0x4c 0x22 0xdc 0x55 0xae 0x0b 0xf2 0x5f 0xae 0x0b 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x0a 0x00 0xf2 0x5f 0xae 0x0b 0xdc 0x55 0x16 0x6d 0x90 0x16 0x4c 0x22 0xc8 0xf3 0x2f 0x59 0xae 0x0b 0x3e 0x13 0x2f 0x59 0x65 0x6d 0x90 0x16 'L" U   _    A      _   U m  L"  /Y  > /Yem  '

// ================================================
// 0xf3f4: WORD 'GNUNK-CHEC' codep=0x224c parp=0xf403
// ================================================

void GNUNK_dash_CHEC() // GNUNK-CHEC
{
  UNK_0xf312(); // UNK_0xf312
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp__ask_5_c__ro_); // ?5:(
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _gt_(); // >
  if (Pop() == 0) goto label2;
  _gt_TVCT(); // >TVCT
  UNK_0xf354(); // UNK_0xf354
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf42b: WORD 'TV-TASKS' codep=0x224c parp=0xf438
// ================================================
// entry

void TV_dash_TASKS() // TV-TASKS
{
  Push(0xf3e6);
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xcf1b); // probable 'DO-STORM'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xe552);
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(0xeee0); // probable '1SIMULATE'
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _st_D_ex__gt_(); // <D!>
  Push(0xc1d8); // probable '.VIT'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xe55c);
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_1(); // ON_1
  Push(0xce24); // probable '8X8CO'
  Push(pp__i__dot_BACKG); // '.BACKG
  _ex__2(); // !_2
}


// ================================================
// 0xf48c: WORD 'UNK_0xf48e' codep=0x224c parp=0xf48e
// ================================================

void UNK_0xf48e() // UNK_0xf48e
{
  Push(0xb033); // probable '?VCYCLE'
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xc3cf); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xc0f9); // probable '.SORD'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xc0e7); // probable '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp__ask_CRITIC); // ?CRITIC
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0xd149); // probable 'HEAVE'
  goto label2;

  label1:
  Push(0x3a48); // probable 'NOP'

  label2:
  Push(pp__i_THROW_dash_); // 'THROW-
  _st__ex__gt_(); // <!>
  Push(pp_WEAPON_dash_); // WEAPON-
  _099(); // 099
  Push(pp_MOVED); // MOVED
  _099(); // 099
}


// ================================================
// 0xf4f0: WORD 'UNK_0xf4f2' codep=0x224c parp=0xf4f2
// ================================================

void UNK_0xf4f2() // UNK_0xf4f2
{
  Push(0xd109); // probable '(CLEA'
  MODULE(); // MODULE
  UNK_0xf48e(); // UNK_0xf48e
  _gt_SSCT(); // >SSCT
}


// ================================================
// 0xf4fe: WORD 'UNK_0xf500' codep=0x224c parp=0xf500
// ================================================

void UNK_0xf500() // UNK_0xf500
{
  Push(pp_WEAPON_dash_); // WEAPON-
  _099(); // 099
  Push(pp_STORM); // STORM
  _099(); // 099
  Push(pp_FSTUN); // FSTUN
  _099(); // 099
  Push(pp_SMART); // SMART
  _099(); // 099
  Push(0xd149); // probable 'HEAVE'
  Push(pp__i_THROW_dash_); // 'THROW-
  _ex__2(); // !_2
  Push(0xd0e9); // probable 'TV-DI'
  MODULE(); // MODULE
  UNK_0xe55c(); // UNK_0xe55c
  UNK_0xe566(); // UNK_0xe566
  Push(0xd090); // probable '!E/M'
  MODULE(); // MODULE
  UNK_0xe552(); // UNK_0xe552
  _dot_VIT(); // .VIT
  TV_dash_TASKS(); // TV-TASKS
  SetColor("BLACK");
  Push(pp_LCOLOR); // LCOLOR
  _ex__2(); // !_2
  UNK_0xf2d5(); // UNK_0xf2d5
  UNK_0xe6ba(); // UNK_0xe6ba
  GNUNK_dash_CHEC(); // GNUNK-CHEC
}


// ================================================
// 0xf53c: WORD 'TV' codep=0x224c parp=0xf543
// ================================================
// entry

void TV() // TV
{
  Push(0xf4f2);
  Push(0xf1ff); // probable 'TV-KEY'
  Push(0xf500);
  DOTASKS(UNK_0xf500, TV-KEY, UNK_0xf4f2);
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}

// 0xf557: db 0x42 0x45 0x48 0x41 0x56 0x49 0x4f 0x5f 0x5f 0x00 'BEHAVIO__ '
  