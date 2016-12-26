// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xe6c0
// overlay size   = 0x0ea0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe6d6  codep:0x224c parp:0xe6d6 size:0x0008 C-string:'UNK_0xe6d6'
//      UNK_0xe6e0  codep:0x224c parp:0xe6e0 size:0x0044 C-string:'UNK_0xe6e0'
//      UNK_0xe726  codep:0x224c parp:0xe726 size:0x0006 C-string:'UNK_0xe726'
//      UNK_0xe72e  codep:0x224c parp:0xe72e size:0x000a C-string:'UNK_0xe72e'
//      UNK_0xe73a  codep:0x224c parp:0xe73a size:0x0012 C-string:'UNK_0xe73a'
//      UNK_0xe74e  codep:0x224c parp:0xe74e size:0x000a C-string:'UNK_0xe74e'
//      UNK_0xe75a  codep:0x224c parp:0xe75a size:0x001a C-string:'UNK_0xe75a'
//      UNK_0xe776  codep:0x7394 parp:0xe776 size:0x0016 C-string:'UNK_0xe776'
//      UNK_0xe78e  codep:0x7394 parp:0xe78e size:0x0006 C-string:'UNK_0xe78e'
//      UNK_0xe796  codep:0x7420 parp:0xe796 size:0x0003 C-string:'UNK_0xe796'
//      UNK_0xe79b  codep:0x7420 parp:0xe79b size:0x0003 C-string:'UNK_0xe79b'
//      UNK_0xe7a0  codep:0x7420 parp:0xe7a0 size:0x0003 C-string:'UNK_0xe7a0'
//      UNK_0xe7a5  codep:0x7420 parp:0xe7a5 size:0x0003 C-string:'UNK_0xe7a5'
//      UNK_0xe7aa  codep:0x7420 parp:0xe7aa size:0x0003 C-string:'UNK_0xe7aa'
//      UNK_0xe7af  codep:0x7420 parp:0xe7af size:0x0034 C-string:'UNK_0xe7af'
//      UNK_0xe7e5  codep:0x7420 parp:0xe7e5 size:0x0017 C-string:'UNK_0xe7e5'
//      UNK_0xe7fe  codep:0x7420 parp:0xe7fe size:0x0008 C-string:'UNK_0xe7fe'
//      UNK_0xe808  codep:0x7420 parp:0xe808 size:0x0008 C-string:'UNK_0xe808'
//      UNK_0xe812  codep:0x7420 parp:0xe812 size:0x0003 C-string:'UNK_0xe812'
//      UNK_0xe817  codep:0x7420 parp:0xe817 size:0x0003 C-string:'UNK_0xe817'
//      UNK_0xe81c  codep:0x7420 parp:0xe81c size:0x0003 C-string:'UNK_0xe81c'
//      UNK_0xe821  codep:0x7420 parp:0xe821 size:0x0003 C-string:'UNK_0xe821'
//      UNK_0xe826  codep:0x7394 parp:0xe826 size:0x0006 C-string:'UNK_0xe826'
//      UNK_0xe82e  codep:0x7420 parp:0xe82e size:0x0003 C-string:'UNK_0xe82e'
//      UNK_0xe833  codep:0x1d29 parp:0xe833 size:0x0009 C-string:'UNK_0xe833'
//      UNK_0xe83e  codep:0x1d29 parp:0xe83e size:0x0002 C-string:'UNK_0xe83e'
//      UNK_0xe842  codep:0x1d29 parp:0xe842 size:0x0002 C-string:'UNK_0xe842'
//      UNK_0xe846  codep:0x1d29 parp:0xe846 size:0x0004 C-string:'UNK_0xe846'
//      UNK_0xe84c  codep:0x224c parp:0xe84c size:0x000c C-string:'UNK_0xe84c'
//      UNK_0xe85a  codep:0x224c parp:0xe85a size:0x0022 C-string:'UNK_0xe85a'
//      UNK_0xe87e  codep:0x224c parp:0xe87e size:0x0006 C-string:'UNK_0xe87e'
//      UNK_0xe886  codep:0x224c parp:0xe886 size:0x001c C-string:'UNK_0xe886'
//      UNK_0xe8a4  codep:0x224c parp:0xe8a4 size:0x0046 C-string:'UNK_0xe8a4'
//      UNK_0xe8ec  codep:0x224c parp:0xe8ec size:0x0022 C-string:'UNK_0xe8ec'
//      UNK_0xe910  codep:0x224c parp:0xe910 size:0x001e C-string:'UNK_0xe910'
//      UNK_0xe930  codep:0x224c parp:0xe930 size:0x0020 C-string:'UNK_0xe930'
//      UNK_0xe952  codep:0x224c parp:0xe952 size:0x001a C-string:'UNK_0xe952'
//      UNK_0xe96e  codep:0x224c parp:0xe96e size:0x001a C-string:'UNK_0xe96e'
//      UNK_0xe98a  codep:0x224c parp:0xe98a size:0x0018 C-string:'UNK_0xe98a'
//         LDAMAGE  codep:0x1d29 parp:0xe9ae size:0x001a C-string:'LDAMAGE'
//      UNK_0xe9ca  codep:0x224c parp:0xe9ca size:0x0026 C-string:'UNK_0xe9ca'
//      UNK_0xe9f2  codep:0x224c parp:0xe9f2 size:0x000a C-string:'UNK_0xe9f2'
//      UNK_0xe9fe  codep:0x224c parp:0xe9fe size:0x000a C-string:'UNK_0xe9fe'
//         REFRESH  codep:0x224c parp:0xea14 size:0x0006 C-string:'REFRESH'
//      UNK_0xea1c  codep:0x1d29 parp:0xea1c size:0x0002 C-string:'UNK_0xea1c'
//      UNK_0xea20  codep:0x224c parp:0xea20 size:0x000a C-string:'UNK_0xea20'
//      UNK_0xea2c  codep:0x224c parp:0xea2c size:0x001c C-string:'UNK_0xea2c'
//      UNK_0xea4a  codep:0x224c parp:0xea4a size:0x0014 C-string:'UNK_0xea4a'
//         WOUNDED  codep:0x1d29 parp:0xea6a size:0x0006 C-string:'WOUNDED'
//         #WOUNDE  codep:0x1d29 parp:0xea7c size:0x0002 C-string:'_n_WOUNDE'
//      UNK_0xea80  codep:0x224c parp:0xea80 size:0x0010 C-string:'UNK_0xea80'
//      UNK_0xea92  codep:0x224c parp:0xea92 size:0x0040 C-string:'UNK_0xea92'
//      UNK_0xead4  codep:0x224c parp:0xead4 size:0x000c C-string:'UNK_0xead4'
//      UNK_0xeae2  codep:0x224c parp:0xeae2 size:0x0010 C-string:'UNK_0xeae2'
//      UNK_0xeaf4  codep:0x224c parp:0xeaf4 size:0x0021 C-string:'UNK_0xeaf4'
//      UNK_0xeb17  codep:0x224c parp:0xeb17 size:0x001d C-string:'UNK_0xeb17'
//      UNK_0xeb36  codep:0x224c parp:0xeb36 size:0x001d C-string:'UNK_0xeb36'
//      UNK_0xeb55  codep:0x224c parp:0xeb55 size:0x0028 C-string:'UNK_0xeb55'
//      UNK_0xeb7f  codep:0x224c parp:0xeb7f size:0x0027 C-string:'UNK_0xeb7f'
//      UNK_0xeba8  codep:0x224c parp:0xeba8 size:0x0010 C-string:'UNK_0xeba8'
//         ENGINE-  codep:0xeb87 parp:0xebc4 size:0x0004 C-string:'ENGINE_dash_'
//         SENSOR-  codep:0xeb87 parp:0xebd4 size:0x0004 C-string:'SENSOR_dash_'
//         COMM-CH  codep:0xeb87 parp:0xebe4 size:0x0004 C-string:'COMM_dash_CH'
//         MISS-CH  codep:0xeb87 parp:0xebf4 size:0x0004 C-string:'MISS_dash_CH'
//         LASER-C  codep:0xeb87 parp:0xec04 size:0x0004 C-string:'LASER_dash_C'
//         SHIELD-  codep:0xeb87 parp:0xec14 size:0x0004 C-string:'SHIELD_dash_'
//      UNK_0xec1a  codep:0x224c parp:0xec1a size:0x000a C-string:'UNK_0xec1a'
//         #>?FIEL  codep:0x4b3b parp:0xec30 size:0x0024 C-string:'_n__gt__ask_FIEL'
//      UNK_0xec56  codep:0x224c parp:0xec56 size:0x0038 C-string:'UNK_0xec56'
//      UNK_0xec90  codep:0x224c parp:0xec90 size:0x0036 C-string:'UNK_0xec90'
//      UNK_0xecc8  codep:0x224c parp:0xecc8 size:0x009e C-string:'UNK_0xecc8'
//      UNK_0xed68  codep:0x224c parp:0xed68 size:0x0051 C-string:'UNK_0xed68'
//      UNK_0xedbb  codep:0x1d29 parp:0xedbb size:0x0007 C-string:'UNK_0xedbb'
//      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x004b C-string:'UNK_0xedc4'
//      UNK_0xee11  codep:0x224c parp:0xee11 size:0x0054 C-string:'UNK_0xee11'
//      UNK_0xee67  codep:0x224c parp:0xee67 size:0x006c C-string:'UNK_0xee67'
//      UNK_0xeed5  codep:0x224c parp:0xeed5 size:0x0048 C-string:'UNK_0xeed5'
//      UNK_0xef1f  codep:0x224c parp:0xef1f size:0x0052 C-string:'UNK_0xef1f'
//      UNK_0xef73  codep:0x224c parp:0xef73 size:0x0056 C-string:'UNK_0xef73'
//         MDAMAGE  codep:0x1d29 parp:0xefd5 size:0x001a C-string:'MDAMAGE'
//      UNK_0xeff1  codep:0x224c parp:0xeff1 size:0x000c C-string:'UNK_0xeff1'
//      UNK_0xefff  codep:0x224c parp:0xefff size:0x0012 C-string:'UNK_0xefff'
//      UNK_0xf013  codep:0x224c parp:0xf013 size:0x003a C-string:'UNK_0xf013'
//      UNK_0xf04f  codep:0x224c parp:0xf04f size:0x0008 C-string:'UNK_0xf04f'
//      UNK_0xf059  codep:0x224c parp:0xf059 size:0x003a C-string:'UNK_0xf059'
//      UNK_0xf095  codep:0x224c parp:0xf095 size:0x0008 C-string:'UNK_0xf095'
//      UNK_0xf09f  codep:0x224c parp:0xf09f size:0x0008 C-string:'UNK_0xf09f'
//      UNK_0xf0a9  codep:0x224c parp:0xf0a9 size:0x0008 C-string:'UNK_0xf0a9'
//      UNK_0xf0b3  codep:0x224c parp:0xf0b3 size:0x0016 C-string:'UNK_0xf0b3'
//      UNK_0xf0cb  codep:0x224c parp:0xf0cb size:0x0008 C-string:'UNK_0xf0cb'
//         #>DAMAG  codep:0x4b3b parp:0xf0df size:0x0024 C-string:'_n__gt_DAMAG'
//      UNK_0xf105  codep:0x224c parp:0xf105 size:0x001e C-string:'UNK_0xf105'
//      UNK_0xf125  codep:0x224c parp:0xf125 size:0x0020 C-string:'UNK_0xf125'
//         DO-ADAM  codep:0x224c parp:0xf151 size:0x0048 C-string:'DO_dash_ADAM'
//      UNK_0xf19b  codep:0x224c parp:0xf19b size:0x000c C-string:'UNK_0xf19b'
//      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x000a C-string:'UNK_0xf1a9'
//      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x0046 C-string:'UNK_0xf1b5'
//      UNK_0xf1fd  codep:0x224c parp:0xf1fd size:0x0012 C-string:'UNK_0xf1fd'
//      UNK_0xf211  codep:0x224c parp:0xf211 size:0x001e C-string:'UNK_0xf211'
//      UNK_0xf231  codep:0x224c parp:0xf231 size:0x0015 C-string:'UNK_0xf231'
//          #>DISP  codep:0x4b3b parp:0xf251 size:0x000c C-string:'_n__gt_DISP'
//      UNK_0xf25f  codep:0x224c parp:0xf25f size:0x0022 C-string:'UNK_0xf25f'
//      UNK_0xf283  codep:0x224c parp:0xf283 size:0x0064 C-string:'UNK_0xf283'
//            CDAM  codep:0x224c parp:0xf2f0 size:0x0024 C-string:'CDAM'
//      UNK_0xf316  codep:0x224c parp:0xf316 size:0x0018 C-string:'UNK_0xf316'
//      UNK_0xf330  codep:0x224c parp:0xf330 size:0x0006 C-string:'UNK_0xf330'
//      UNK_0xf338  codep:0x224c parp:0xf338 size:0x0006 C-string:'UNK_0xf338'
//      UNK_0xf340  codep:0x224c parp:0xf340 size:0x001a C-string:'UNK_0xf340'
//      UNK_0xf35c  codep:0x224c parp:0xf35c size:0x001f C-string:'UNK_0xf35c'
//      UNK_0xf37d  codep:0x224c parp:0xf37d size:0x0016 C-string:'UNK_0xf37d'
//             .EX  codep:0x4b3b parp:0xf39b size:0x000c C-string:'_dot_EX'
//      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x008c C-string:'UNK_0xf3a9'
//      UNK_0xf437  codep:0x224c parp:0xf437 size:0x0070 C-string:'UNK_0xf437'
//      UNK_0xf4a9  codep:0x224c parp:0xf4a9 size:0x0040 C-string:'UNK_0xf4a9'
//      UNK_0xf4eb  codep:0x224c parp:0xf4eb size:0x000e C-string:'UNK_0xf4eb'
//      UNK_0xf4fb  codep:0x224c parp:0xf4fb size:0x000e C-string:'UNK_0xf4fb'
//         DO-DAMA  codep:0x224c parp:0xf515 size:0x000e C-string:'DO_dash_DAMA'
//         DOBLAST  codep:0x224c parp:0xf52f size:0x0000 C-string:'DOBLAST'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe833[9] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20}; // UNK_0xe833
unsigned char UNK_0xe83e[2] = {0x00, 0x00}; // UNK_0xe83e
unsigned char UNK_0xe842[2] = {0x3a, 0x20}; // UNK_0xe842
unsigned char UNK_0xe846[4] = {0x56, 0x3a, 0x20, 0x16}; // UNK_0xe846
unsigned char LDAMAGE[26] = {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xe8, 0x03, 0x4c, 0x04, 0xb0, 0x04}; // LDAMAGE
unsigned char UNK_0xea1c[2] = {0x3a, 0x20}; // UNK_0xea1c
unsigned char WOUNDED[6] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}; // WOUNDED
unsigned char _n_WOUNDE[2] = {0x00, 0x00}; // #WOUNDE
unsigned char UNK_0xedbb[7] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f}; // UNK_0xedbb
unsigned char MDAMAGE[26] = {0x00, 0x00, 0xc8, 0x00, 0x90, 0x01, 0xbc, 0x02, 0xe8, 0x03, 0xdc, 0x05, 0xa0, 0x0f, 0xf4, 0x01, 0x58, 0x02, 0xbc, 0x02, 0xd0, 0x07, 0x84, 0x03, 0xe8, 0x03}; // MDAMAGE



// 0xe6d2: db 0xea 0x00 '  '

// ================================================
// 0xe6d4: WORD 'UNK_0xe6d6' codep=0x224c parp=0xe6d6
// ================================================

void UNK_0xe6d6() // UNK_0xe6d6
{
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe6de: WORD 'UNK_0xe6e0' codep=0x224c parp=0xe6e0
// ================================================

void UNK_0xe6e0() // UNK_0xe6e0
{
  Push(0x5e8b); // pointer to ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _at_INST_dash_S(); // @INST-S
  _gt_R(); // >R
  R_at_(); // R@
  Push(2); // 2
  Push(cc__4); // 4
  WITHIN(); // WITHIN
  R_at_(); // R@
  Push(0x000e);
  Push(0x0014);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  R_at_(); // R@
  Push(0x0017);
  Push(0x001f);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(0x0020);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  return;

  label1:
  Push(cc_FALSE); // FALSE
}


// ================================================
// 0xe724: WORD 'UNK_0xe726' codep=0x224c parp=0xe726
// ================================================

void UNK_0xe726() // UNK_0xe726
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe72c: WORD 'UNK_0xe72e' codep=0x224c parp=0xe72e
// ================================================

void UNK_0xe72e() // UNK_0xe72e
{
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe738: WORD 'UNK_0xe73a' codep=0x224c parp=0xe73a
// ================================================

void UNK_0xe73a() // UNK_0xe73a
{
  Push(0x5f31); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5f3c); // pointer to YABS
  Push(Read16(Pop())); // @
}

// 0xe744: db 0x4c 0x22 0x29 0x94 0x39 0x94 0x90 0x16 'L") 9   '

// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x224c parp=0xe74e
// ================================================

void UNK_0xe74e() // UNK_0xe74e
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe758: WORD 'UNK_0xe75a' codep=0x224c parp=0xe75a
// ================================================

void UNK_0xe75a() // UNK_0xe75a
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}

// 0xe760: db 0x14 0x22 0x19 0x00 0x94 0x73 0x19 0x05 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x0c 0x04 0x24 0x5d 0x6b ' "   s   $]k s   $]k'

// ================================================
// 0xe774: WORD 'UNK_0xe776' codep=0x7394 parp=0xe776
// ================================================
// 0xe776: db 0x19 0x10 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x12 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x13 0x01 0x24 0x5d 0x6b '   $]k s   $]k s   $]k'

// ================================================
// 0xe78c: WORD 'UNK_0xe78e' codep=0x7394 parp=0xe78e
// ================================================
// 0xe78e: db 0x19 0x15 0x07 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe794: WORD 'UNK_0xe796' codep=0x7420 parp=0xe796
// ================================================
// 0xe796: db 0x19 0x0c 0x01 '   '

// ================================================
// 0xe799: WORD 'UNK_0xe79b' codep=0x7420 parp=0xe79b
// ================================================
// 0xe79b: db 0x19 0x12 0x02 '   '

// ================================================
// 0xe79e: WORD 'UNK_0xe7a0' codep=0x7420 parp=0xe7a0
// ================================================
// 0xe7a0: db 0x19 0x14 0x02 '   '

// ================================================
// 0xe7a3: WORD 'UNK_0xe7a5' codep=0x7420 parp=0xe7a5
// ================================================
// 0xe7a5: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xe7a8: WORD 'UNK_0xe7aa' codep=0x7420 parp=0xe7aa
// ================================================
// 0xe7aa: db 0x19 0x12 0x07 '   '

// ================================================
// 0xe7ad: WORD 'UNK_0xe7af' codep=0x7420 parp=0xe7af
// ================================================
// 0xe7af: db 0x34 0x0d 0x01 0x14 0x22 0x14 0x00 0x20 0x74 0x14 0x11 0x01 0x20 0x74 0x14 0x12 0x01 0x20 0x74 0x14 0x13 0x01 0x20 0x74 0x14 0x14 0x01 0x20 0x74 0x14 0x15 0x01 0x20 0x74 0x14 0x16 0x01 0x20 0x74 0x14 0x17 0x01 0x20 0x74 0x14 0x18 0x01 0x20 0x74 0x14 0x19 0x01 '4   "   t    t    t    t    t    t    t    t    t   '

// ================================================
// 0xe7e3: WORD 'UNK_0xe7e5' codep=0x7420 parp=0xe7e5
// ================================================
// 0xe7e5: db 0x14 0x1a 0x01 0x20 0x74 0x14 0x1b 0x01 0x20 0x74 0x14 0x1c 0x01 0x20 0x74 0x14 0x1d 0x01 0x20 0x74 0x14 0x1e 0x01 '    t    t    t    t   '

// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x7420 parp=0xe7fe
// ================================================
// 0xe7fe: db 0x14 0x30 0x02 0x20 0x74 0x14 0x45 0x04 ' 0  t E '

// ================================================
// 0xe806: WORD 'UNK_0xe808' codep=0x7420 parp=0xe808
// ================================================
// 0xe808: db 0x14 0x32 0x02 0x20 0x74 0x14 0x49 0x01 ' 2  t I '

// ================================================
// 0xe810: WORD 'UNK_0xe812' codep=0x7420 parp=0xe812
// ================================================
// 0xe812: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe815: WORD 'UNK_0xe817' codep=0x7420 parp=0xe817
// ================================================
// 0xe817: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xe81a: WORD 'UNK_0xe81c' codep=0x7420 parp=0xe81c
// ================================================
// 0xe81c: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xe81f: WORD 'UNK_0xe821' codep=0x7420 parp=0xe821
// ================================================
// 0xe821: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x7394 parp=0xe826
// ================================================
// 0xe826: db 0x10 0x13 0x01 0x14 0xc8 0x6a '     j'

// ================================================
// 0xe82c: WORD 'UNK_0xe82e' codep=0x7420 parp=0xe82e
// ================================================
// 0xe82e: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xe831: WORD 'UNK_0xe833' codep=0x1d29 parp=0xe833
// ================================================
// 0xe833: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 ':  ALLOT '

// ================================================
// 0xe83c: WORD 'UNK_0xe83e' codep=0x1d29 parp=0xe83e
// ================================================
// 0xe83e: db 0x00 0x00 '  '

// ================================================
// 0xe840: WORD 'UNK_0xe842' codep=0x1d29 parp=0xe842
// ================================================
// 0xe842: db 0x3a 0x20 ': '

// ================================================
// 0xe844: WORD 'UNK_0xe846' codep=0x1d29 parp=0xe846
// ================================================
// 0xe846: db 0x56 0x3a 0x20 0x16 'V:  '

// ================================================
// 0xe84a: WORD 'UNK_0xe84c' codep=0x224c parp=0xe84c
// ================================================

void UNK_0xe84c() // UNK_0xe84c
{
  Push(0xe842); // pointer to UNK_0xe842
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe858: WORD 'UNK_0xe85a' codep=0x224c parp=0xe85a
// ================================================

void UNK_0xe85a() // UNK_0xe85a
{
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}

// 0xe862: db 0x4c 0x22 0x01 0xe8 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0x24 0xe7 0xaa 0x61 0xae 0x0b 0xb8 0x3b 0x5f 0x12 0x07 0x13 0xf5 0x12 0x90 0x16 'L"     ;  $  a   ;_       '

// ================================================
// 0xe87c: WORD 'UNK_0xe87e' codep=0x224c parp=0xe87e
// ================================================

void UNK_0xe87e() // UNK_0xe87e
{
  Push(0xe846); // pointer to UNK_0xe846
  _2_at_(); // 2@
}


// ================================================
// 0xe884: WORD 'UNK_0xe886' codep=0x224c parp=0xe886
// ================================================

void UNK_0xe886() // UNK_0xe886
{
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xe8a2: WORD 'UNK_0xe8a4' codep=0x224c parp=0xe8a4
// ================================================

void UNK_0xe8a4() // UNK_0xe8a4
{
  Push(0x3b1b); // pointer to TRACE
  Push(Read16(Pop())); // @
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_C(); // @INST-C
  Push(0x0019);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT

  UNK_0x3f09(" ");
  _dot_TTY(); // .TTY
  OVER(); // OVER
  _dot_(); // .
  Push(0x65f5); // IFIELD(UNK_0xe7a0)
  _ask_(); // ?
  Push(0x65f3); // IFIELD(UNK_0xe79b)
  _ask_(); // ?
  Push(0x54d1); // pointer to A-STREN
  _ask_(); // ?

  label1:
  _gt_R(); // >R
  R_at_(); // R@
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x224c parp=0xe8ec
// ================================================

void UNK_0xe8ec() // UNK_0xe8ec
{
  _gt_R(); // >R
  R_at_(); // R@
  IFLD_at_(); // IFLD@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  _gt_R(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe90e: WORD 'UNK_0xe910' codep=0x224c parp=0xe910
// ================================================

void UNK_0xe910() // UNK_0xe910
{
  Push(0x64d1); // pointer to (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(cc__dash_1); // -1
  Push(0x593d); // pointer to #VESS
  _plus__ex__2(); // +!_2
  Push(1); // 1
  Push(0x65f5); // IFIELD(UNK_0xe817)
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe92e: WORD 'UNK_0xe930' codep=0x224c parp=0xe930
// ================================================

void UNK_0xe930() // UNK_0xe930
{
  Push(0x6611); // IFIELD(UNK_0xe7fe)
  Push(Read16(Pop())); // @
  UNK_0xe726(); // UNK_0xe726
  Push(0x6155); // pointer to ?SUP
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(0x5e8b); // pointer to ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x65fb); // IFIELD(UNK_0xe7e5)
  UNK_0xe85a(); // UNK_0xe85a
  Push(cc__7); // 7
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe950: WORD 'UNK_0xe952' codep=0x224c parp=0xe952
// ================================================

void UNK_0xe952() // UNK_0xe952
{
  Push(0x5f10); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xc0a1);
  return;

  label1:
  Push(0xc090);
}


// ================================================
// 0xe96c: WORD 'UNK_0xe96e' codep=0x224c parp=0xe96e
// ================================================

void UNK_0xe96e() // UNK_0xe96e
{
  Push(0x5f10); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xbcb8);
  return;

  label1:
  Push(0xbc98);
}


// ================================================
// 0xe988: WORD 'UNK_0xe98a' codep=0x224c parp=0xe98a
// ================================================

void UNK_0xe98a() // UNK_0xe98a
{
  Push(0x6613); // IFIELD(UNK_0xe808)
  Push(Read16(Pop())); // @
  UNK_0xe726(); // UNK_0xe726
  UNK_0xe930(); // UNK_0xe930
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe952(); // UNK_0xe952
  return;

  label1:
  UNK_0xe96e(); // UNK_0xe96e
}


// ================================================
// 0xe9a2: WORD 'LDAMAGE' codep=0x1d29 parp=0xe9ae
// ================================================
// 0xe9ae: db 0x00 0x00 0x5a 0x00 0xd2 0x00 0x68 0x01 0xfe 0x01 0x94 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xe8 0x03 0x4c 0x04 0xb0 0x04 '  Z   h               L   '

// ================================================
// 0xe9c8: WORD 'UNK_0xe9ca' codep=0x224c parp=0xe9ca
// ================================================

void UNK_0xe9ca() // UNK_0xe9ca
{
  _gt_R(); // >R
  UNK_0xe73a(); // UNK_0xe73a
  UNK_0xe886(); // UNK_0xe886
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  IFLD_at_(); // IFLD@
  Push(Pop()*2); // 2*
  Push(0xe9ae); // pointer to LDAMAGE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x000a);
  _star__slash_(); // */
}


// ================================================
// 0xe9f0: WORD 'UNK_0xe9f2' codep=0x224c parp=0xe9f2
// ================================================

void UNK_0xe9f2() // UNK_0xe9f2
{
  UNK_0xe74e(); // UNK_0xe74e
  Push(0xe77e);
  UNK_0xe9ca(); // UNK_0xe9ca
}


// ================================================
// 0xe9fc: WORD 'UNK_0xe9fe' codep=0x224c parp=0xe9fe
// ================================================

void UNK_0xe9fe() // UNK_0xe9fe
{
  _2DUP(); // 2DUP
  Push(0xe7f9);
  UNK_0xe9ca(); // UNK_0xe9ca
}


// ================================================
// 0xea08: WORD 'REFRESH' codep=0x224c parp=0xea14
// ================================================
// entry

void REFRESH() // REFRESH
{
  UNK_0xe98a(); // UNK_0xe98a
  MODULE(); // MODULE
}


// ================================================
// 0xea1a: WORD 'UNK_0xea1c' codep=0x1d29 parp=0xea1c
// ================================================
// 0xea1c: db 0x3a 0x20 ': '

// ================================================
// 0xea1e: WORD 'UNK_0xea20' codep=0x224c parp=0xea20
// ================================================

void UNK_0xea20() // UNK_0xea20
{
  UNK_0xe72e(); // UNK_0xe72e
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xea2a: WORD 'UNK_0xea2c' codep=0x224c parp=0xea2c
// ================================================

void UNK_0xea2c() // UNK_0xea2c
{
  Push(1); // 1
  Push(0xea1c); // pointer to UNK_0xea1c
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  RRND(); // RRND
  LoadData("UNK_0xe826"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  Push(0x000a);
  _slash_(); // /
  Push(cc__5); // 5
  MAX(); // MAX
}


// ================================================
// 0xea48: WORD 'UNK_0xea4a' codep=0x224c parp=0xea4a
// ================================================

void UNK_0xea4a() // UNK_0xea4a
{
  _at_INST_dash_S(); // @INST-S
  Push(cc__4); // 4
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1); // 1
  Push(0x61d4); // pointer to ?10
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xea5e: WORD 'WOUNDED' codep=0x1d29 parp=0xea6a
// ================================================
// 0xea6a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xea70: WORD '#WOUNDE' codep=0x1d29 parp=0xea7c
// ================================================
// entry
// 0xea7c: db 0x00 0x00 '  '

// ================================================
// 0xea7e: WORD 'UNK_0xea80' codep=0x224c parp=0xea80
// ================================================

void UNK_0xea80() // UNK_0xea80
{
  Push(0xea6a); // pointer to WOUNDED
  Push(cc__6); // 6
  Push(0x00ff);
  FILL_2(); // FILL_2
  Push(0xea7c); // pointer to #WOUNDE
  _099(); // 099
}


// ================================================
// 0xea90: WORD 'UNK_0xea92' codep=0x224c parp=0xea92
// ================================================

void UNK_0xea92() // UNK_0xea92
{
  Push(0xea6a); // pointer to WOUNDED
  Push(Read16(regsp)); // DUP
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  LEAVE(); // LEAVE
  goto label2;

  label1:
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00ff);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(i); // I
  C_ex__2(); // C!_2
  Push(1); // 1
  Push(0xea7c); // pointer to #WOUNDE
  _st__plus__ex__gt_(); // <+!>
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffd0

}


// ================================================
// 0xead2: WORD 'UNK_0xead4' codep=0x224c parp=0xead4
// ================================================

void UNK_0xead4() // UNK_0xead4
{
  Push(0x64f1); // pointer to (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ee); // IFIELD(UNK_0xe7af)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeae0: WORD 'UNK_0xeae2' codep=0x224c parp=0xeae2
// ================================================

void UNK_0xeae2() // UNK_0xeae2
{
  SetColor("YELLOW");
  Push(0x4fa9);
  _ex__2(); // !_2
  CTERASE(); // CTERASE
  Push(0); // 0
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xeaf2: WORD 'UNK_0xeaf4' codep=0x224c parp=0xeaf4
// ================================================

void UNK_0xeaf4() // UNK_0xeaf4
{

  UNK_0x3f09("**  GAME  OVER  **");
  _dot_TTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE_2(); // BYE_2
}


// ================================================
// 0xeb15: WORD 'UNK_0xeb17' codep=0x224c parp=0xeb17
// ================================================

void UNK_0xeb17() // UNK_0xeb17
{
  UNK_0xeae2(); // UNK_0xeae2

  UNK_0x3f09("!!HULL DESTROYED!!");
  _dot_TTY(); // .TTY
  UNK_0xeaf4(); // UNK_0xeaf4
}


// ================================================
// 0xeb34: WORD 'UNK_0xeb36' codep=0x224c parp=0xeb36
// ================================================

void UNK_0xeb36() // UNK_0xeb36
{
  UNK_0xeae2(); // UNK_0xeae2

  UNK_0x3f09("!!CREW  DECEASED!!");
  _dot_TTY(); // .TTY
  UNK_0xeaf4(); // UNK_0xeaf4
}


// ================================================
// 0xeb53: WORD 'UNK_0xeb55' codep=0x224c parp=0xeb55
// ================================================

void UNK_0xeb55() // UNK_0xeb55
{
  Push(0x64d1); // pointer to (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0012);
  _eq_SPECIE(); // =SPECIE
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  Push(0x0013);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(0x65fc); // IFIELD(UNK_0xe81c)
  C_ex__2(); // C!_2

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb7d: WORD 'UNK_0xeb7f' codep=0x224c parp=0xeb7f
// ================================================

void UNK_0xeb7f() // UNK_0xeb7f
{
  Exec(CREATE); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  _co_(); // ,
  (;CODE)();
// inlined assembler code
// 0xeb87: call   1649
  _2_at_(); // 2@
  IFLD_at_(); // IFLD@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  UNK_0xe726(); // UNK_0xe726
  _gt_R(); // >R
  IFLD_at_(); // IFLD@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xe726(); // UNK_0xe726
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xeba6: WORD 'UNK_0xeba8' codep=0x224c parp=0xeba8
// ================================================

void UNK_0xeba8() // UNK_0xeba8
{
  Push(0xe7b8);
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xe726(); // UNK_0xe726
}


// ================================================
// 0xebb8: WORD 'ENGINE-' codep=0xeb87 parp=0xebc4
// ================================================
// 0xebc4: db 0xc7 0xe7 0xc2 0xe7 '    '

// ================================================
// 0xebc8: WORD 'SENSOR-' codep=0xeb87 parp=0xebd4
// ================================================
// 0xebd4: db 0xd1 0xe7 0xcc 0xe7 '    '

// ================================================
// 0xebd8: WORD 'COMM-CH' codep=0xeb87 parp=0xebe4
// ================================================
// 0xebe4: db 0xdb 0xe7 0xd6 0xe7 '    '

// ================================================
// 0xebe8: WORD 'MISS-CH' codep=0xeb87 parp=0xebf4
// ================================================
// 0xebf4: db 0xef 0xe7 0xea 0xe7 '    '

// ================================================
// 0xebf8: WORD 'LASER-C' codep=0xeb87 parp=0xec04
// ================================================
// 0xec04: db 0xf9 0xe7 0xf4 0xe7 '    '

// ================================================
// 0xec08: WORD 'SHIELD-' codep=0xeb87 parp=0xec14
// ================================================
// 0xec14: db 0xe5 0xe7 0xe0 0xe7 '    '

// ================================================
// 0xec18: WORD 'UNK_0xec1a' codep=0x224c parp=0xec1a
// ================================================

void UNK_0xec1a() // UNK_0xec1a
{
  Push(0xc144); // pointer to ROSTER
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  UNK_0xe726(); // UNK_0xe726
}


// ================================================
// 0xec24: WORD '#>?FIEL' codep=0x4b3b parp=0xec30
// ================================================
// 0xec30: db 0x08 0x00 0x8b 0x12 0x01 0x00 0xa8 0xeb 0x02 0x00 0xc4 0xeb 0x03 0x00 0xd4 0xeb 0x04 0x00 0xe4 0xeb 0x05 0x00 0xf4 0xeb 0x06 0x00 0x04 0xec 0x07 0x00 0x14 0xec 0x08 0x00 0x1a 0xec '                                    '

// ================================================
// 0xec54: WORD 'UNK_0xec56' codep=0x224c parp=0xec56
// ================================================

void UNK_0xec56() // UNK_0xec56
{
  Push(0xe833); // pointer to UNK_0xe833
  Push(cc__9); // 9
  Push(0); // 0
  FILL_2(); // FILL_2
  Push(0xe83e); // pointer to UNK_0xe83e
  _099(); // 099
  Push(0); // 0
  Push(cc__9); // 9
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Pop();
  switch(Pop()) // #>?FIEL
  {
  case 1:
    UNK_0xeba8(); // UNK_0xeba8
    break;
  case 2:
    ENGINE_dash_(); // ENGINE-
    break;
  case 3:
    SENSOR_dash_(); // SENSOR-
    break;
  case 4:
    COMM_dash_CH(); // COMM-CH
    break;
  case 5:
    MISS_dash_CH(); // MISS-CH
    break;
  case 6:
    LASER_dash_C(); // LASER-C
    break;
  case 7:
    SHIELD_dash_(); // SHIELD-
    break;
  case 8:
    UNK_0xec1a(); // UNK_0xec1a
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // 0=
    break;

  }
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  Push(i); // I
  Push(0xe83e); // pointer to UNK_0xe83e
  Push(Read16(Pop())); // @
  Push(0xe833); // pointer to UNK_0xe833
  Push(Pop() + Pop()); // +
  _st_C_ex__gt_(); // <C!>
  Push(1); // 1
  Push(0xe83e); // pointer to UNK_0xe83e
  _st__plus__ex__gt_(); // <+!>

  label1:
  Push(Pop() | Pop()); // OR
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  UNK_0xec56(); // UNK_0xec56
  if (Pop() == 0) return;

  label2:
  Push(0); // 0
  Push(0xe83e); // pointer to UNK_0xe83e
  Push(Read16(Pop())); // @
  RRND(); // RRND
  Push(0xe833); // pointer to UNK_0xe833
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x5fc9); // pointer to ?COMBAT
  Push(Read16(Pop())); // @
  UNK_0xe726(); // UNK_0xe726
  OVER(); // OVER
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Pop(); // DROP

  label1:
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xecc6: WORD 'UNK_0xecc8' codep=0x224c parp=0xecc8
// ================================================

void UNK_0xecc8() // UNK_0xecc8
{
  Push(0x6600); // IFIELD(UNK_0xe821)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;

  UNK_0x3f09("KILLED");
  goto label2;

  label1:
  R_at_(); // R@
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;

  UNK_0x3f09("CRITICALLY ");
  goto label4;

  label3:
  R_at_(); // R@
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label5;

  UNK_0x3f09("HEAVILIY ");
  goto label4;

  label5:
  R_at_(); // R@
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label6;

  UNK_0x3f09("MODERATELY ");
  goto label4;

  label6:

  UNK_0x3f09("SLIGHTLY ");

  label4:
  Exec(TYPE); // call of word 0x2690 '(TYPE)'

  UNK_0x3f09("WOUNDED ");

  label2:
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xed66: WORD 'UNK_0xed68' codep=0x224c parp=0xed68
// ================================================

void UNK_0xed68() // UNK_0xed68
{
  Push(0xea7c); // pointer to #WOUNDE
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(0xea6a); // pointer to WOUNDED
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _3_star_(); // 3*
  Push(0xc144); // pointer to ROSTER
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(UNK_0xe82e)
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  _dot_TTY(); // .TTY
  PRINT(" IS ", 4); // (.")
  UNK_0xecc8(); // UNK_0xecc8
  ICLOSE(); // ICLOSE
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffcb

  Push(0x5d23); // pointer to ?HEAL
  ON_2(); // ON_2

  label1:
  Push(0xea7c); // pointer to #WOUNDE
  _099(); // 099
}


// ================================================
// 0xedb9: WORD 'UNK_0xedbb' codep=0x1d29 parp=0xedbb
// ================================================
// 0xedbb: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ':  ALLO'

// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  Push(0x002b);
  _ex_ID(); // !ID
  Push(cc__8); // 8
  Push(0x65ec); // IFIELD(UNK_0xe7a5)
  C_ex__2(); // C!_2
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA

  UNK_0x3f09("ALIEN SHIP DESTROYED");
  _dot_TTY(); // .TTY
  Push(0); // 0
  Push(0x65ed); // IFIELD(UNK_0xe796)
  C_ex__2(); // C!_2
  UNK_0xea4a(); // UNK_0xea4a
  UNK_0xeb55(); // UNK_0xeb55
  LoadData("UNK_0xe78e"); // from 'VESSEL      '
  Push(0xedbb); // pointer to UNK_0xedbb
  Push(cc__7); // 7
  CMOVE_2(); // CMOVE_2
  Push(0); // 0
  _ex_INST_dash_S(); // !INST-S
  Push(0xedbb); // pointer to UNK_0xedbb
  Push(0x65f3); // IFIELD(UNK_0xe7aa)
  Push(cc__7); // 7
  CMOVE_2(); // CMOVE_2
  UNK_0xe910(); // UNK_0xe910
}


// ================================================
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11
// ================================================

void UNK_0xee11() // UNK_0xee11
{
  Push(0xea1c); // pointer to UNK_0xea1c
  _st__ex__gt_(); // <!>
  UNK_0xea80(); // UNK_0xea80
  Push(0xc144); // pointer to ROSTER
  Push(Read16(regsp)); // DUP
  Push(0x0012);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xea20(); // UNK_0xea20
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  UNK_0xea2c(); // UNK_0xea2c
  Push(0xe821);
  UNK_0xe8a4(); // UNK_0xe8a4
  ICLOSE(); // ICLOSE
  Push(i); // I
  Push(0xc144); // pointer to ROSTER
  _dash_(); // -
  Push(cc__3); // 3
  _slash_(); // /
  UNK_0xea92(); // UNK_0xea92
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  goto label4;

  label1:
  Pop(); Pop();// 2DROP
  LEAVE(); // LEAVE

  label4:
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffc4

}


// ================================================
// 0xee65: WORD 'UNK_0xee67' codep=0x224c parp=0xee67
// ================================================

void UNK_0xee67() // UNK_0xee67
{
  Push(0x65f5); // IFIELD(UNK_0xe7a0)
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(cc__ask_A_dash_SHIE); // ?A-SHIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  UNK_0xe6e0(); // UNK_0xe6e0
  Push(Pop() | Pop()); // OR
  Push(0x61ac); // pointer to NLR
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0xe79b);
  UNK_0xe8a4(); // UNK_0xe8a4
  goto label2;

  label1:
  Push(0x65f5); // IFIELD(UNK_0xe7a0)
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dash_(); // -
  _gt_R(); // >R
  Push(0xe7a0);
  UNK_0xe8a4(); // UNK_0xe8a4
  R_gt_(); // R>
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label3;
  ABS(); // ABS
  Push(0xe79b);
  UNK_0xe8a4(); // UNK_0xe8a4
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  UNK_0xead4(); // UNK_0xead4
  if (Pop() == 0) goto label4;
  Push(0xbfc8);
  MODULE(); // MODULE

  label4:
  Push(0x65f3); // IFIELD(UNK_0xe79b)
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xedc4(); // UNK_0xedc4
}


// ================================================
// 0xeed3: WORD 'UNK_0xeed5' codep=0x224c parp=0xeed5
// ================================================

void UNK_0xeed5() // UNK_0xeed5
{
  Push(0x0a36); // pointer to @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
  Push(0x0082);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0x01f4);
  MAX(); // MAX
  Push(0x03e8);
  MIN(); // MIN
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(i); // I
  Push(0x03e8);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  TONE(); // TONE
  Push(cc__5); // 5
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
  } while(i<imax); // (LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xef1d: WORD 'UNK_0xef1f' codep=0x224c parp=0xef1f
// ================================================

void UNK_0xef1f() // UNK_0xef1f
{
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  OVER(); // OVER
  UNK_0xe726(); // UNK_0xe726
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x0a36); // pointer to @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  BEEPON_2(); // BEEPON_2
  Push(0x0514);
  Push(cc_MPS); // MPS
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(0x01f4);
  MAX(); // MAX
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(i); // I
  RRND(); // RRND
  TONE(); // TONE
  i++;
  } while(i<imax); // (LOOP) 0xfff6

  BEEPOFF(); // BEEPOFF

  label2:
  UNK_0xee67(); // UNK_0xee67
  goto label3;

  label1:
  Pop(); // DROP

  label3:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef71: WORD 'UNK_0xef73' codep=0x224c parp=0xef73
// ================================================

void UNK_0xef73() // UNK_0xef73
{
  UNK_0xe9fe(); // UNK_0xe9fe
  _gt_R(); // >R
  Push(0x5bc5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  LoadData("UNK_0xe776"); // from 'VESSEL      '
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  Push(0); // 0

  label3:
  UNK_0xef1f(); // UNK_0xef1f
  goto label4;

  label2:
  ICLOSE(); // ICLOSE

  label4:
  i++;
  } while(i<imax); // (LOOP) 0xffcc

  Pop(); // DROP

  label1:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xefc9: WORD 'MDAMAGE' codep=0x1d29 parp=0xefd5
// ================================================
// 0xefd5: db 0x00 0x00 0xc8 0x00 0x90 0x01 0xbc 0x02 0xe8 0x03 0xdc 0x05 0xa0 0x0f 0xf4 0x01 0x58 0x02 0xbc 0x02 0xd0 0x07 0x84 0x03 0xe8 0x03 '                X         '

// ================================================
// 0xefef: WORD 'UNK_0xeff1' codep=0x224c parp=0xeff1
// ================================================

void UNK_0xeff1() // UNK_0xeff1
{
  UNK_0xe84c(); // UNK_0xe84c
  Push(Pop()*2); // 2*
  Push(0xefd5); // pointer to MDAMAGE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  Push(0x6611); // IFIELD(UNK_0xe7fe)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x6611); // IFIELD(UNK_0xe7fe)
  _ex__2(); // !_2
}


// ================================================
// 0xf011: WORD 'UNK_0xf013' codep=0x224c parp=0xf013
// ================================================

void UNK_0xf013() // UNK_0xf013
{
  Push(0x6613); // IFIELD(UNK_0xe808)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x6613); // IFIELD(UNK_0xe808)
  _ex__2(); // !_2
  Push(0x6613); // IFIELD(UNK_0xe808)
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0xbc98);
  MODULE(); // MODULE
  Push(cc__3); // 3
  Push(0x5f10); // pointer to #AUX
  _st__ex__gt_(); // <!>
}

// 0xf03b: db 0x4c 0x22 0x01 0xe8 0x92 0x0c 0x5d 0x17 0xf7 0x00 0xf5 0x12 0x01 0xe8 0x0a 0x6d 0x90 0x16 'L"    ]        m  '

// ================================================
// 0xf04d: WORD 'UNK_0xf04f' codep=0x224c parp=0xf04f
// ================================================

void UNK_0xf04f() // UNK_0xf04f
{
  Push(0xe7b8);
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf057: WORD 'UNK_0xf059' codep=0x224c parp=0xf059
// ================================================

void UNK_0xf059() // UNK_0xf059
{
  Push(0xe7c2);
  UNK_0xe8ec(); // UNK_0xe8ec
  ENGINE_dash_(); // ENGINE-
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0x5531); // pointer to ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  Push(0xb77c);
  MODULE(); // MODULE
  Pop(); // DROP

  label1:
  Push(0xe7c7);
  IFLD_at_(); // IFLD@
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  Push(0xe7c7);
  IFLD_ex_(); // IFLD!
  Push(0x5531); // pointer to ?AUTO
  ON_2(); // ON_2
}


// ================================================
// 0xf093: WORD 'UNK_0xf095' codep=0x224c parp=0xf095
// ================================================

void UNK_0xf095() // UNK_0xf095
{
  Push(0xe7cc);
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf09d: WORD 'UNK_0xf09f' codep=0x224c parp=0xf09f
// ================================================

void UNK_0xf09f() // UNK_0xf09f
{
  Push(0xe7d6);
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf0a7: WORD 'UNK_0xf0a9' codep=0x224c parp=0xf0a9
// ================================================

void UNK_0xf0a9() // UNK_0xf0a9
{
  Push(0xe7ea);
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf0b1: WORD 'UNK_0xf0b3' codep=0x224c parp=0xf0b3
// ================================================

void UNK_0xf0b3() // UNK_0xf0b3
{
  Push(0xe7e0);
  UNK_0xe8ec(); // UNK_0xe8ec
  SHIELD_dash_(); // SHIELD-
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0xc636);
  MODULE(); // MODULE
}


// ================================================
// 0xf0c9: WORD 'UNK_0xf0cb' codep=0x224c parp=0xf0cb
// ================================================

void UNK_0xf0cb() // UNK_0xf0cb
{
  Push(0xe7f4);
  UNK_0xe8ec(); // UNK_0xe8ec
}


// ================================================
// 0xf0d3: WORD '#>DAMAG' codep=0x4b3b parp=0xf0df
// ================================================
// 0xf0df: db 0x08 0x00 0x34 0x0e 0x01 0x00 0x4f 0xf0 0x02 0x00 0x59 0xf0 0x03 0x00 0x95 0xf0 0x04 0x00 0x9f 0xf0 0x05 0x00 0xa9 0xf0 0x06 0x00 0xcb 0xf0 0x07 0x00 0xb3 0xf0 0x08 0x00 0x11 0xee '  4   O   Y                         '

// ================================================
// 0xf103: WORD 'UNK_0xf105' codep=0x224c parp=0xf105
// ================================================

void UNK_0xf105() // UNK_0xf105
{
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(0x000a);
  MAX(); // MAX
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
}


// ================================================
// 0xf123: WORD 'UNK_0xf125' codep=0x224c parp=0xf125
// ================================================

void UNK_0xf125() // UNK_0xf125
{
  UNK_0xe930(); // UNK_0xe930
  if (Pop() == 0) goto label1;
  UNK_0xefff(); // UNK_0xefff
  return;

  label1:
  Push(0x6613); // IFIELD(UNK_0xe808)
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf013(); // UNK_0xf013
  return;

  label2:
  UNK_0xec90(); // UNK_0xec90
  Pop();
  switch(Pop()) // #>DAMAG
  {
  case 1:
    UNK_0xf04f(); // UNK_0xf04f
    break;
  case 2:
    UNK_0xf059(); // UNK_0xf059
    break;
  case 3:
    UNK_0xf095(); // UNK_0xf095
    break;
  case 4:
    UNK_0xf09f(); // UNK_0xf09f
    break;
  case 5:
    UNK_0xf0a9(); // UNK_0xf0a9
    break;
  case 6:
    UNK_0xf0cb(); // UNK_0xf0cb
    break;
  case 7:
    UNK_0xf0b3(); // UNK_0xf0b3
    break;
  case 8:
    UNK_0xee11(); // UNK_0xee11
    break;
  default:
    Pop(); // DROP
    break;

  }
}


// ================================================
// 0xf145: WORD 'DO-ADAM' codep=0x224c parp=0xf151
// ================================================
// entry

void DO_dash_ADAM() // DO-ADAM
{
  UNK_0xeed5(); // UNK_0xeed5
  UNK_0xea80(); // UNK_0xea80

  label2:
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf105(); // UNK_0xf105
  UNK_0xf125(); // UNK_0xf125
  goto label2;

  label1:
  Push(0xea7c); // pointer to #WOUNDE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  UNK_0xed68(); // UNK_0xed68
  Push(0xc18b);
  MODULE(); // MODULE
  Push(0xc1b8);
  MODULE(); // MODULE

  label3:
  REFRESH(); // REFRESH
  Push(0xe7b8);
  IFLD_at_(); // IFLD@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  UNK_0xeb17(); // UNK_0xeb17

  label4:
  UNK_0xec1a(); // UNK_0xec1a
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xeb36(); // UNK_0xeb36
}


// ================================================
// 0xf199: WORD 'UNK_0xf19b' codep=0x224c parp=0xf19b
// ================================================

void UNK_0xf19b() // UNK_0xf19b
{
  UNK_0xe9f2(); // UNK_0xe9f2
  Push(Pop()*2); // 2*
  UNK_0xe75a(); // UNK_0xe75a
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
{
  Push(0xe842); // pointer to UNK_0xe842
  C_ex__2(); // C!_2
  Push(0xe846); // pointer to UNK_0xe846
  D_ex_(); // D!
}


// ================================================
// 0xf1b3: WORD 'UNK_0xf1b5' codep=0x224c parp=0xf1b5
// ================================================

void UNK_0xf1b5() // UNK_0xf1b5
{
  UNK_0xe84c(); // UNK_0xe84c
  Push(cc__7); // 7
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _gt_MAINVI(); // >MAINVI
  _ex_COLOR(); // !COLOR
  UNK_0xe87e(); // UNK_0xe87e
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__3); // 3
  _dash_(); // -
  Push(0x6422); // pointer to XWLD:XP
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  MIN(); // MIN
  Push(2); // 2

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2DUP(); // 2DUP
  Push(i); // I
  _dot_CIRCLE_1(); // .CIRCLE_1
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  Pop(); Pop();// 2DROP
  V_gt_DISPL(); // V>DISPL
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf1fb: WORD 'UNK_0xf1fd' codep=0x224c parp=0xf1fd
// ================================================

void UNK_0xf1fd() // UNK_0xf1fd
{

  UNK_0x3f09("PLASMA BOLT");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf20f: WORD 'UNK_0xf211' codep=0x224c parp=0xf211
// ================================================

void UNK_0xf211() // UNK_0xf211
{
  Push(0x633a); // pointer to 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;

  UNK_0x3f09("ENERGY LOSS");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf22f: WORD 'UNK_0xf231' codep=0x224c parp=0xf231
// ================================================

void UNK_0xf231() // UNK_0xf231
{

  UNK_0x3f09("MISSILE CLASS ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf246: WORD '#>DISP' codep=0x4b3b parp=0xf251
// ================================================
// 0xf251: db 0x02 0x00 0x31 0xf2 0x06 0x00 0xfd 0xf1 0x07 0x00 0x11 0xf2 '  1         '

// ================================================
// 0xf25d: WORD 'UNK_0xf25f' codep=0x224c parp=0xf25f
// ================================================

void UNK_0xf25f() // UNK_0xf25f
{
  UNK_0xf1b5(); // UNK_0xf1b5
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA
  UNK_0xe84c(); // UNK_0xe84c
  Push(Read16(regsp)); // DUP
  Pop();
  switch(Pop()) // #>DISP
  {
  case 6:
    UNK_0xf1fd(); // UNK_0xf1fd
    break;
  case 7:
    UNK_0xf211(); // UNK_0xf211
    break;
  default:
    UNK_0xf231(); // UNK_0xf231
    break;

  }
  Push(Read16(regsp)); // DUP
  Push(cc__6); // 6
  Push(cc__7); // 7
  UNK_0xe6d6(); // UNK_0xe6d6
  if (Pop() == 0) goto label1;
  _dot_(); // .
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  UNK_0xf1a9(); // UNK_0xf1a9
  UNK_0xe75a(); // UNK_0xe75a
  SetColor("LT-BLUE");
  UNK_0xf1b5(); // UNK_0xf1b5
  UNK_0xe87e(); // UNK_0xe87e
  UNK_0xeff1(); // UNK_0xeff1
  _gt_R(); // >R
  Push(0x5bc5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  LoadData("UNK_0xe776"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label3;
  UNK_0xef1f(); // UNK_0xef1f
  goto label4;

  label3:
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label4:
  goto label5;

  label2:
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label5:
  i++;
  } while(i<imax); // (LOOP) 0xffca

  Pop(); // DROP

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e7: WORD 'CDAM' codep=0x224c parp=0xf2f0
// ================================================
// entry

void CDAM() // CDAM
{
  UNK_0xee11(); // UNK_0xee11
  Push(0xea7c); // pointer to #WOUNDE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xed68(); // UNK_0xed68
  Push(0xc18b);
  MODULE(); // MODULE
  Push(0xc1b8);
  MODULE(); // MODULE

  label1:
  UNK_0xec1a(); // UNK_0xec1a
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xeb36(); // UNK_0xeb36
}


// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x224c parp=0xf316
// ================================================

void UNK_0xf316() // UNK_0xf316
{
  Push(cc__6); // 6
  PICK(); // PICK
  Push(cc__6); // 6
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  _gt_R(); // >R
  D_st_(); // D<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf32e: WORD 'UNK_0xf330' codep=0x224c parp=0xf330
// ================================================

void UNK_0xf330() // UNK_0xf330
{
  _ex_COLOR(); // !COLOR
  BEEP(); // BEEP
}


// ================================================
// 0xf336: WORD 'UNK_0xf338' codep=0x224c parp=0xf338
// ================================================

void UNK_0xf338() // UNK_0xf338
{
  _dot_TTY(); // .TTY
  _dot_SORD(); // .SORD
}


// ================================================
// 0xf33e: WORD 'UNK_0xf340' codep=0x224c parp=0xf340
// ================================================

void UNK_0xf340() // UNK_0xf340
{
  SetColor("YELLOW");
  UNK_0xf330(); // UNK_0xf330
  PRINT("FUEL SUPPLY LOW", 15); // (.")
  UNK_0xf338(); // UNK_0xf338
}


// ================================================
// 0xf35a: WORD 'UNK_0xf35c' codep=0x224c parp=0xf35c
// ================================================

void UNK_0xf35c() // UNK_0xf35c
{
  SetColor("PINK");
  UNK_0xf330(); // UNK_0xf330

  UNK_0x3f09("FUEL SUPPLY CRITICAL");
  UNK_0xf338(); // UNK_0xf338
}


// ================================================
// 0xf37b: WORD 'UNK_0xf37d' codep=0x224c parp=0xf37d
// ================================================

void UNK_0xf37d() // UNK_0xf37d
{
  SetColor("RED");
  UNK_0xf330(); // UNK_0xf330

  UNK_0x3f09("OUT OF FUEL");
  UNK_0xf338(); // UNK_0xf338
}


// ================================================
// 0xf393: WORD '.EX' codep=0x4b3b parp=0xf39b
// ================================================
// 0xf39b: db 0x02 0x00 0x7d 0xf3 0x02 0x00 0x5c 0xf3 0x03 0x00 0x40 0xf3 '  }   \   @ '

// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  Push(0x62fe); // pointer to 10*CARG
  _2_at_(); // 2@
  Push(0x5703); // pointer to -END
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x633a); // pointer to 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(0x62fe); // pointer to 10*CARG
  D_ex_(); // D!
  Push(0x633a); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x5703); // pointer to -END
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(0x633a); // pointer to 10*END
  D_ex_(); // D!
  Push(0x633a); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x5703); // pointer to -END
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0014);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf316(); // UNK_0xf316
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  Pop();
  switch(Pop()) // .EX
  {
  case 2:
    UNK_0xf35c(); // UNK_0xf35c
    break;
  case 3:
    UNK_0xf340(); // UNK_0xf340
    break;
  default:
    UNK_0xf37d(); // UNK_0xf37d
    break;

  }
  return;

  label1:
  Push(0x633a); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x5703); // pointer to -END
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(cc__6); // 6
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf316(); // UNK_0xf316
  if (Pop() == 0) goto label2;
  Push(2); // 2
  Pop();
  switch(Pop()) // .EX
  {
  case 2:
    UNK_0xf35c(); // UNK_0xf35c
    break;
  case 3:
    UNK_0xf340(); // UNK_0xf340
    break;
  default:
    UNK_0xf37d(); // UNK_0xf37d
    break;

  }
  return;

  label2:
  Push(0x633a); // pointer to 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(0x5531); // pointer to ?AUTO
  ON_2(); // ON_2
  Push(1); // 1
  Pop();
  switch(Pop()) // .EX
  {
  case 2:
    UNK_0xf35c(); // UNK_0xf35c
    break;
  case 3:
    UNK_0xf340(); // UNK_0xf340
    break;
  default:
    UNK_0xf37d(); // UNK_0xf37d
    break;

  }
}


// ================================================
// 0xf435: WORD 'UNK_0xf437' codep=0x224c parp=0xf437
// ================================================

void UNK_0xf437() // UNK_0xf437
{
  _gt_R(); // >R
  Push(0x633a); // pointer to 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0x5703); // pointer to -END
  Push(Read16(Pop())); // @
  R_at_(); // R@
  Push(0x5703); // pointer to -END
  _ex__2(); // !_2
  UNK_0xf3a9(); // UNK_0xf3a9
  Push(0x5703); // pointer to -END
  _ex__2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x000a);
  Push(0x6624); // IFIELD(UNK_0xe812)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  if (Pop() == 0) goto label3;
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  R_at_(); // R@
  Push(0x000a);
  _slash_(); // /
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2

  label3:
  CDROP(); // CDROP

  label2:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE

  label1:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf4a7: WORD 'UNK_0xf4a9' codep=0x224c parp=0xf4a9
// ================================================

void UNK_0xf4a9() // UNK_0xf4a9
{
  UNK_0xf1a9(); // UNK_0xf1a9
  SetColor("RED");
  UNK_0xf25f(); // UNK_0xf25f
  UNK_0xe84c(); // UNK_0xe84c
  Push(cc__7); // 7
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x0064);
  UNK_0xf437(); // UNK_0xf437
  Push(0x5f10); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0xc090);
  goto label3;

  label2:
  Push(0xc0a1);

  label3:
  MODULE(); // MODULE
  return;

  label1:
  UNK_0xeff1(); // UNK_0xeff1
  UNK_0xe75a(); // UNK_0xe75a
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e9: WORD 'UNK_0xf4eb' codep=0x224c parp=0xf4eb
// ================================================

void UNK_0xf4eb() // UNK_0xf4eb
{
  if (Pop() == 0) goto label1;
  UNK_0xf283(); // UNK_0xf283
  return;

  label1:
  UNK_0xf4a9(); // UNK_0xf4a9
}


// ================================================
// 0xf4f9: WORD 'UNK_0xf4fb' codep=0x224c parp=0xf4fb
// ================================================

void UNK_0xf4fb() // UNK_0xf4fb
{
  if (Pop() == 0) goto label1;
  UNK_0xef73(); // UNK_0xef73
  return;

  label1:
  UNK_0xf19b(); // UNK_0xf19b
}


// ================================================
// 0xf509: WORD 'DO-DAMA' codep=0x224c parp=0xf515
// ================================================
// entry

void DO_dash_DAMA() // DO-DAMA
{
  if (Pop() == 0) goto label1;
  UNK_0xf4eb(); // UNK_0xf4eb
  return;

  label1:
  UNK_0xf4fb(); // UNK_0xf4fb
}


// ================================================
// 0xf523: WORD 'DOBLAST' codep=0x224c parp=0xf52f
// ================================================
// entry

void DOBLAST() // DOBLAST
{
  if (Pop() == 0) goto label1;
  DO_dash_ADAM(); // DO-ADAM
  return;

  label1:
  LoadData("UNK_0xe776"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xee67(); // UNK_0xee67
  return;

  label2:
  Pop(); // DROP
}

// 0xf553: db 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DAMAGE-______ '
  