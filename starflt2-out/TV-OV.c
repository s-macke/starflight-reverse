// ====== OVERLAY 'TV-OV' ======
// store offset = 0xe6d0
// overlay size   = 0x0e90

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe6e6  codep:0x2214 parp:0xe6e6 size:0x0002 C-string:'UNK_0xe6e6'
//      UNK_0xe6ea  codep:0x224c parp:0xe6ea size:0x004e C-string:'UNK_0xe6ea'
//      UNK_0xe73a  codep:0x7420 parp:0xe73a size:0x0003 C-string:'UNK_0xe73a'
//      UNK_0xe73f  codep:0x7420 parp:0xe73f size:0x0003 C-string:'UNK_0xe73f'
//      UNK_0xe744  codep:0x7420 parp:0xe744 size:0x0003 C-string:'UNK_0xe744'
//      UNK_0xe749  codep:0x7420 parp:0xe749 size:0x0003 C-string:'UNK_0xe749'
//      UNK_0xe74e  codep:0x7420 parp:0xe74e size:0x0010 C-string:'UNK_0xe74e'
//      UNK_0xe760  codep:0x7394 parp:0xe760 size:0x0006 C-string:'UNK_0xe760'
//      UNK_0xe768  codep:0x7420 parp:0xe768 size:0x0003 C-string:'UNK_0xe768'
//      UNK_0xe76d  codep:0x224c parp:0xe76d size:0x000a C-string:'UNK_0xe76d'
//      UNK_0xe779  codep:0x224c parp:0xe779 size:0x0036 C-string:'UNK_0xe779'
//        DISPOSAL  codep:0x4b3b parp:0xe7bc size:0x0024 C-string:'DISPOSAL'
//      UNK_0xe7e2  codep:0x224c parp:0xe7e2 size:0x0018 C-string:'UNK_0xe7e2'
//      UNK_0xe7fc  codep:0x224c parp:0xe7fc size:0x000c C-string:'UNK_0xe7fc'
//      UNK_0xe80a  codep:0x224c parp:0xe80a size:0x0018 C-string:'UNK_0xe80a'
//      UNK_0xe824  codep:0x224c parp:0xe824 size:0x002c C-string:'UNK_0xe824'
//      UNK_0xe852  codep:0x224c parp:0xe852 size:0x0008 C-string:'UNK_0xe852'
//      UNK_0xe85c  codep:0x224c parp:0xe85c size:0x0010 C-string:'UNK_0xe85c'
//      UNK_0xe86e  codep:0x224c parp:0xe86e size:0x0026 C-string:'UNK_0xe86e'
//      UNK_0xe896  codep:0x224c parp:0xe896 size:0x0030 C-string:'UNK_0xe896'
//      UNK_0xe8c8  codep:0x224c parp:0xe8c8 size:0x001e C-string:'UNK_0xe8c8'
//      UNK_0xe8e8  codep:0x224c parp:0xe8e8 size:0x0008 C-string:'UNK_0xe8e8'
//      UNK_0xe8f2  codep:0x224c parp:0xe8f2 size:0x0014 C-string:'UNK_0xe8f2'
//      UNK_0xe908  codep:0x224c parp:0xe908 size:0x0016 C-string:'UNK_0xe908'
//      UNK_0xe920  codep:0x224c parp:0xe920 size:0x0014 C-string:'UNK_0xe920'
//      UNK_0xe936  codep:0x224c parp:0xe936 size:0x0012 C-string:'UNK_0xe936'
//      UNK_0xe94a  codep:0x224c parp:0xe94a size:0x008e C-string:'UNK_0xe94a'
//      UNK_0xe9da  codep:0x224c parp:0xe9da size:0x001e C-string:'UNK_0xe9da'
//      UNK_0xe9fa  codep:0x224c parp:0xe9fa size:0x001c C-string:'UNK_0xe9fa'
//      UNK_0xea18  codep:0x224c parp:0xea18 size:0x002a C-string:'UNK_0xea18'
//      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0024 C-string:'UNK_0xea44'
//      UNK_0xea6a  codep:0x224c parp:0xea6a size:0x0028 C-string:'UNK_0xea6a'
//      UNK_0xea94  codep:0x224c parp:0xea94 size:0x007e C-string:'UNK_0xea94'
//      UNK_0xeb14  codep:0x224c parp:0xeb14 size:0x0014 C-string:'UNK_0xeb14'
//      UNK_0xeb2a  codep:0x224c parp:0xeb2a size:0x0078 C-string:'UNK_0xeb2a'
//      UNK_0xeba4  codep:0x224c parp:0xeba4 size:0x005d C-string:'UNK_0xeba4'
//      UNK_0xec03  codep:0x224c parp:0xec03 size:0x0028 C-string:'UNK_0xec03'
//      UNK_0xec2d  codep:0x224c parp:0xec2d size:0x001a C-string:'UNK_0xec2d'
//      UNK_0xec49  codep:0x224c parp:0xec49 size:0x0030 C-string:'UNK_0xec49'
//      UNK_0xec7b  codep:0x224c parp:0xec7b size:0x0024 C-string:'UNK_0xec7b'
//      UNK_0xeca1  codep:0x224c parp:0xeca1 size:0x000e C-string:'UNK_0xeca1'
//       FUNCTIONS  codep:0x1d29 parp:0xecbd size:0x0019 C-string:'FUNCTIONS'
//      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x0014 C-string:'UNK_0xecd8'
//      UNK_0xecee  codep:0x224c parp:0xecee size:0x004c C-string:'UNK_0xecee'
//      UNK_0xed3c  codep:0x224c parp:0xed3c size:0x000e C-string:'UNK_0xed3c'
//      UNK_0xed4c  codep:0x1d29 parp:0xed4c size:0x0006 C-string:'UNK_0xed4c'
//      UNK_0xed54  codep:0x224c parp:0xed54 size:0x0026 C-string:'UNK_0xed54'
//      UNK_0xed7c  codep:0x224c parp:0xed7c size:0x002a C-string:'UNK_0xed7c'
//      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x0074 C-string:'UNK_0xeda8'
//         HEAVEHO  codep:0x224c parp:0xee28 size:0x000a C-string:'HEAVEHO'
//      UNK_0xee34  codep:0x2214 parp:0xee34 size:0x0002 C-string:'UNK_0xee34'
//      UNK_0xee38  codep:0x224c parp:0xee38 size:0x002c C-string:'UNK_0xee38'
//        TV-SETUP  codep:0x224c parp:0xee71 size:0x000e C-string:'TV_dash_SETUP'
//      UNK_0xee81  codep:0x224c parp:0xee81 size:0x000c C-string:'UNK_0xee81'
//      UNK_0xee8f  codep:0x224c parp:0xee8f size:0x0010 C-string:'UNK_0xee8f'
//      UNK_0xeea1  codep:0x224c parp:0xeea1 size:0x0026 C-string:'UNK_0xeea1'
//      UNK_0xeec9  codep:0x224c parp:0xeec9 size:0x0024 C-string:'UNK_0xeec9'
//      UNK_0xeeef  codep:0x224c parp:0xeeef size:0x0058 C-string:'UNK_0xeeef'
//      UNK_0xef49  codep:0x224c parp:0xef49 size:0x004c C-string:'UNK_0xef49'
//      UNK_0xef97  codep:0x224c parp:0xef97 size:0x001c C-string:'UNK_0xef97'
//      UNK_0xefb5  codep:0x224c parp:0xefb5 size:0x0058 C-string:'UNK_0xefb5'
//      UNK_0xf00f  codep:0x224c parp:0xf00f size:0x005a C-string:'UNK_0xf00f'
//      UNK_0xf06b  codep:0x224c parp:0xf06b size:0x0012 C-string:'UNK_0xf06b'
//      UNK_0xf07f  codep:0x224c parp:0xf07f size:0x0092 C-string:'UNK_0xf07f'
//      UNK_0xf113  codep:0x224c parp:0xf113 size:0x003c C-string:'UNK_0xf113'
//      UNK_0xf151  codep:0x224c parp:0xf151 size:0x0010 C-string:'UNK_0xf151'
//      UNK_0xf163  codep:0x224c parp:0xf163 size:0x002c C-string:'UNK_0xf163'
//      UNK_0xf191  codep:0x1d29 parp:0xf191 size:0x0006 C-string:'UNK_0xf191'
//      UNK_0xf199  codep:0x224c parp:0xf199 size:0x004a C-string:'UNK_0xf199'
//      UNK_0xf1e5  codep:0x224c parp:0xf1e5 size:0x0034 C-string:'UNK_0xf1e5'
//      UNK_0xf21b  codep:0x224c parp:0xf21b size:0x0016 C-string:'UNK_0xf21b'
//      UNK_0xf233  codep:0x224c parp:0xf233 size:0x0058 C-string:'UNK_0xf233'
//       WALK&TALK  codep:0x224c parp:0xf299 size:0x0022 C-string:'WALK_and_TALK'
//      UNK_0xf2bd  codep:0x224c parp:0xf2bd size:0x0039 C-string:'UNK_0xf2bd'
//      UNK_0xf2f8  codep:0x224c parp:0xf2f8 size:0x002e C-string:'UNK_0xf2f8'
//      UNK_0xf328  codep:0x224c parp:0xf328 size:0x0010 C-string:'UNK_0xf328'
//      UNK_0xf33a  codep:0x224c parp:0xf33a size:0x000e C-string:'UNK_0xf33a'
//         TV-DISP  codep:0x224c parp:0xf354 size:0x0071 C-string:'TV_dash_DISP'
//       TV-CLEANU  codep:0x224c parp:0xf3d3 size:0x0004 C-string:'TV_dash_CLEANU'
//      UNK_0xf3d9  codep:0x1d29 parp:0xf3d9 size:0x0002 C-string:'UNK_0xf3d9'
//      UNK_0xf3dd  codep:0x224c parp:0xf3dd size:0x0016 C-string:'UNK_0xf3dd'
//      UNK_0xf3f5  codep:0x224c parp:0xf3f5 size:0x0018 C-string:'UNK_0xf3f5'
//      UNK_0xf40f  codep:0x224c parp:0xf40f size:0x0012 C-string:'UNK_0xf40f'
//      UNK_0xf423  codep:0x224c parp:0xf423 size:0x0049 C-string:'UNK_0xf423'
//      UNK_0xf46e  codep:0x1d29 parp:0xf46e size:0x0002 C-string:'UNK_0xf46e'
//      UNK_0xf472  codep:0x224c parp:0xf472 size:0x0080 C-string:'UNK_0xf472'
//       DO.WEAPON  codep:0x224c parp:0xf500 size:0x0000 C-string:'DO_dot_WEAPON'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_FUNCTIONS = 0xecbd; // FUNCTIONS size: 25
// {0x05, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x27, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}

const unsigned short int pp_UNK_0xed4c = 0xed4c; // UNK_0xed4c size: 6
// {0x56, 0x3a, 0x20, 0x0f, 0x05, 0x41}

const unsigned short int pp_UNK_0xf191 = 0xf191; // UNK_0xf191 size: 6
// {0x00, 0x42, 0x99, 0x99, 0x42, 0x00}

const unsigned short int pp_UNK_0xf3d9 = 0xf3d9; // UNK_0xf3d9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf46e = 0xf46e; // UNK_0xf46e size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xe6e6 = 0x0000; // UNK_0xe6e6
const unsigned short int cc_UNK_0xee34 = 0x7fff; // UNK_0xee34


// 0xe6e2: db 0xe9 0x00 '  '

// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x2214 parp=0xe6e6
// ================================================
// 0xe6e6: db 0x00 0x00 '  '

// ================================================
// 0xe6e8: WORD 'UNK_0xe6ea' codep=0x224c parp=0xe6ea
// ================================================

void UNK_0xe6ea() // UNK_0xe6ea
{
  Push(0x0064);
  Push(0x03e8);
  Push(pp_COLOR); // COLOR size: 2
  Push(Read16(Pop())); // @
  SetColor("RED");
  _eq_(); // =
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(0xe6e6);
  _ex__2(); // !_2
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP

  label1:

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

  Push(cc_UNK_0xe6e6); // UNK_0xe6e6
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}

// 0xe734: db 0x14 0x22 0x44 0x00 ' "D '

// ================================================
// 0xe738: WORD 'UNK_0xe73a' codep=0x7420 parp=0xe73a
// ================================================
// 0xe73a: db 0x2a 0x11 0x01 '*  '

// ================================================
// 0xe73d: WORD 'UNK_0xe73f' codep=0x7420 parp=0xe73f
// ================================================
// 0xe73f: db 0x0b 0x11 0x02 '   '

// ================================================
// 0xe742: WORD 'UNK_0xe744' codep=0x7420 parp=0xe744
// ================================================
// 0xe744: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe747: WORD 'UNK_0xe749' codep=0x7420 parp=0xe749
// ================================================
// 0xe749: db 0x11 0x17 0x03 '   '

// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x7420 parp=0xe74e
// ================================================
// 0xe74e: db 0x10 0x1b 0x01 0x94 0x73 0x15 0x2a 0x01 0x32 0xd1 0x6a 0x20 0x74 0x44 0x17 0x01 '    s * 2 j tD  '

// ================================================
// 0xe75e: WORD 'UNK_0xe760' codep=0x7394 parp=0xe760
// ================================================
// 0xe760: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b '     k'

// ================================================
// 0xe766: WORD 'UNK_0xe768' codep=0x7420 parp=0xe768
// ================================================
// 0xe768: db 0x44 0x18 0x01 'D  '

// ================================================
// 0xe76b: WORD 'UNK_0xe76d' codep=0x224c parp=0xe76d
// ================================================

void UNK_0xe76d() // UNK_0xe76d
{
  LoadData("UNK_0xe760"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _eq_(); // =
}


// ================================================
// 0xe777: WORD 'UNK_0xe779' codep=0x224c parp=0xe779
// ================================================

void UNK_0xe779() // UNK_0xe779
{
  _at_INST_dash_S(); // @INST-S
  Push(cc__3); // 3
  _st_(); // <
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001b);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  IFIRST(); // IFIRST
  Push(0x001c);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_S(); // @INST-S
  Push(cc__3); // 3
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe7af: WORD 'DISPOSAL' codep=0x4b3b parp=0xe7bc
// ================================================
// 0xe7bc: db 0x08 0x00 0xd1 0x51 0x44 0x00 0xc5 0x51 0x1a 0x00 0xc5 0x51 0x15 0x00 0xc5 0x51 0x1f 0x00 0xc5 0x51 0x21 0x00 0xc5 0x51 0x1c 0x00 0x6d 0xe7 0x29 0x00 0x79 0xe7 0x09 0x00 0xc5 0x51 '   QD  Q   Q   Q   Q!  Q  m ) y    Q'

// ================================================
// 0xe7e0: WORD 'UNK_0xe7e2' codep=0x224c parp=0xe7e2
// ================================================

void UNK_0xe7e2() // UNK_0xe7e2
{
  Push(2); // 2
  Push(0x000a);
  RRND(); // RRND
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
}


// ================================================
// 0xe7fa: WORD 'UNK_0xe7fc' codep=0x224c parp=0xe7fc
// ================================================

void UNK_0xe7fc() // UNK_0xe7fc
{
  _dash_ICON(); // -ICON
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x224c parp=0xe80a
// ================================================

void UNK_0xe80a() // UNK_0xe80a
{
  _at_ID(); // @ID
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0xe75b);
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xe822: WORD 'UNK_0xe824' codep=0x224c parp=0xe824
// ================================================

void UNK_0xe824() // UNK_0xe824
{
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xe80a(); // UNK_0xe80a
  goto label2;

  label1:
  _at_ID(); // @ID
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xe7e2(); // UNK_0xe7e2
  Push(0x65f9); // IFIELD(UNK_0xe768)
  C_ex__2(); // C!_2

  label2:
  UNK_0xe7fc(); // UNK_0xe7fc
}


// ================================================
// 0xe850: WORD 'UNK_0xe852' codep=0x224c parp=0xe852
// ================================================

void UNK_0xe852() // UNK_0xe852
{
  Push(0xcf39);
  MODULE(); // MODULE
}


// ================================================
// 0xe85a: WORD 'UNK_0xe85c' codep=0x224c parp=0xe85c
// ================================================

void UNK_0xe85c() // UNK_0xe85c
{
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  LLINE(); // LLINE
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e
// ================================================

void UNK_0xe86e() // UNK_0xe86e
{
  Push(0x0016);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x002a);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x0042);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x006a);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x0086);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x009e);
  UNK_0xe85c(); // UNK_0xe85c
}


// ================================================
// 0xe894: WORD 'UNK_0xe896' codep=0x224c parp=0xe896
// ================================================

void UNK_0xe896() // UNK_0xe896
{
  _gt_R(); // >R
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  R_gt_(); // R>
  POLY_dash_WI(); // POLY-WI
}

// 0xe8ae: db 0x4c 0x22 0x7e 0x5c 0xae 0x0b 0x41 0x0e 0x87 0x3b 0x46 0x12 0xf2 0x0e 0x5d 0x17 0x0b 0x00 0x2d 0x12 0x3e 0x13 0x90 0x16 'L"~\  A  ;F   ]   - >   '

// ================================================
// 0xe8c6: WORD 'UNK_0xe8c8' codep=0x224c parp=0xe8c8
// ================================================

void UNK_0xe8c8() // UNK_0xe8c8
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f8); // IFIELD(UNK_0xe749)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fc); // IFIELD(UNK_0xe74e)
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}

// 0xe8da: db 0x4c 0x22 0xc6 0xe8 0x5d 0x17 0xc7 0x00 0x2d 0x12 0x90 0x16 'L"  ]   -   '

// ================================================
// 0xe8e6: WORD 'UNK_0xe8e8' codep=0x224c parp=0xe8e8
// ================================================

void UNK_0xe8e8() // UNK_0xe8e8
{
  Push(cc__dash_1); // -1
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe8f0: WORD 'UNK_0xe8f2' codep=0x224c parp=0xe8f2
// ================================================

void UNK_0xe8f2() // UNK_0xe8f2
{
  Push(0x0083);
  Push(0x0053);
  Push(0x0009);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe906: WORD 'UNK_0xe908' codep=0x224c parp=0xe908
// ================================================

void UNK_0xe908() // UNK_0xe908
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe8e8(); // UNK_0xe8e8
  UNK_0xe8e8(); // UNK_0xe8e8
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe91e: WORD 'UNK_0xe920' codep=0x224c parp=0xe920
// ================================================

void UNK_0xe920() // UNK_0xe920
{
  Push(0x00c1);
  Push(0x0053);
  Push(0x0008);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe934: WORD 'UNK_0xe936' codep=0x224c parp=0xe936
// ================================================

void UNK_0xe936() // UNK_0xe936
{
  Push(0x00bf);
  Push(cc__3); // 3
  Push(0x0011);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe948: WORD 'UNK_0xe94a' codep=0x224c parp=0xe94a
// ================================================

void UNK_0xe94a() // UNK_0xe94a
{
  Push(0x000c);
  Push(pp_WTOP); // WTOP size: 2
  _st__ex__gt_(); // <!>
  Push(cc__3); // 3
  Push(pp_WLEFT); // WLEFT size: 2
  _st__ex__gt_(); // <!>
  Push(0x009b);
  Push(pp_WRIGHT); // WRIGHT size: 2
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  _st__ex__gt_(); // <!>
}

// 0xe968: db 0x4c 0x22 0x5d 0x17 0xe0 0x01 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x35 0x00 0xc4 0x0f 0xf2 0x0e 0x5d 0x17 0x80 0x04 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x40 0x00 0xc4 0x0f 0xf2 0x0e 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x57 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x45 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x53 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x4e 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 'L"]     ]   ] 5     ]     ]   ] @       L"      x        W`      E`         L"      x        S`      N`         '

// ================================================
// 0xe9d8: WORD 'UNK_0xe9da' codep=0x224c parp=0xe9da
// ================================================

void UNK_0xe9da() // UNK_0xe9da
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe9f8: WORD 'UNK_0xe9fa' codep=0x224c parp=0xe9fa
// ================================================

void UNK_0xe9fa() // UNK_0xe9fa
{
  Push(pp_TVEHICL); // TVEHICL size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}

// 0xea0a: db 0x4c 0x22 0xc9 0x74 0x16 0x6d 0xbb 0x74 0x16 0x6d 0x90 0x16 'L" t m t m  '

// ================================================
// 0xea16: WORD 'UNK_0xea18' codep=0x224c parp=0xea18
// ================================================

void UNK_0xea18() // UNK_0xea18
{
  Push(0x65f2); // IFIELD(UNK_0xe73f)
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6624); // IFIELD(UNK_0xe744)
  Push(Read16(Pop())); // @
  _st_(); // <
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Push(-Pop()); // NEGATE
  Push(0x6624); // IFIELD(UNK_0xe744)
  _plus__ex__2(); // +!_2
  goto label2;

  label1:
  SWAP(); // SWAP
  Pop(); // DROP

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  Push(pp_COLOR); // COLOR size: 2
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  Push(Read16(Pop())); // @
  Push(pp_WRIGHT); // WRIGHT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xea68: WORD 'UNK_0xea6a' codep=0x224c parp=0xea6a
// ================================================

void UNK_0xea6a() // UNK_0xea6a
{
  Push(0x2001);
  PAD(); // PAD
  _st__ex__gt_(); // <!>
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES size: 2
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PAD(); // PAD
  WLINE_dash_U(); // WLINE-U
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _099(); // 099
}


// ================================================
// 0xea92: WORD 'UNK_0xea94' codep=0x224c parp=0xea94
// ================================================

void UNK_0xea94() // UNK_0xea94
{
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  LLINE(); // LLINE
  Push(pp_WRIGHT); // WRIGHT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xffce

  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(pp_WRIGHT); // WRIGHT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_WRIGHT); // WRIGHT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WBOTTOM); // WBOTTOM size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeb12: WORD 'UNK_0xeb14' codep=0x224c parp=0xeb14
// ================================================

void UNK_0xeb14() // UNK_0xeb14
{
  UNK_0xe936(); // UNK_0xe936
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(cc__dash_1); // -1
  UNK_0xe9da(); // UNK_0xe9da
  SetColor("BLACK");
  UNK_0xe896(); // UNK_0xe896
  UNK_0xe852(); // UNK_0xe852
}


// ================================================
// 0xeb28: WORD 'UNK_0xeb2a' codep=0x224c parp=0xeb2a
// ================================================

void UNK_0xeb2a() // UNK_0xeb2a
{
  UNK_0xe920(); // UNK_0xe920
  UNK_0xea44(); // UNK_0xea44
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  _gt_2FONT(); // >2FONT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  Push(2); // 2
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("DATE  : ", 8); // (.")
  Push(0); // 0
  Push(cc__3); // 3
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("ENERGY: ", 8); // (.")
  Push(0); // 0
  Push(cc__4); // 4
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("EFF.  : ", 8); // (.")
  Push(0); // 0
  Push(cc__5); // 5
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("CARGO : ", 8); // (.")
  Push(0); // 0
  Push(cc__6); // 6
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("SHIP  : ", 8); // (.")
}


// ================================================
// 0xeba2: WORD 'UNK_0xeba4' codep=0x224c parp=0xeba4
// ================================================

void UNK_0xeba4() // UNK_0xeba4
{
  UNK_0xe94a(); // UNK_0xe94a
  UNK_0xea44(); // UNK_0xea44
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  UNK_0xe86e(); // UNK_0xe86e
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0xfffd);
  Push(pp_WTOP); // WTOP size: 2
  _st__plus__ex__gt_(); // <+!>
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  _gt_1FONT(); // >1FONT
  PRINT("MAPS MOVE CARGO ", 16); // (.")
  Push(2); // 2
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  PRINT("DESCRIBE ", 9); // (.")
  Push(2); // 2
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  PRINT("WEAPON ICONS ", 13); // (.")
}


// ================================================
// 0xec01: WORD 'UNK_0xec03' codep=0x224c parp=0xec03
// ================================================

void UNK_0xec03() // UNK_0xec03
{
  UNK_0xe8f2(); // UNK_0xe8f2
  UNK_0xea44(); // UNK_0xea44
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  _gt_2FONT(); // >2FONT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("CREW VITALITY", 13); // (.")
}


// ================================================
// 0xec2b: WORD 'UNK_0xec2d' codep=0x224c parp=0xec2d
// ================================================

void UNK_0xec2d() // UNK_0xec2d
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(0xfffd);
  Push(pp_WRIGHT); // WRIGHT size: 2
  _plus__ex__2(); // +!_2
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  Push(cc__3); // 3
  Push(pp_WRIGHT); // WRIGHT size: 2
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xec47: WORD 'UNK_0xec49' codep=0x224c parp=0xec49
// ================================================

void UNK_0xec49() // UNK_0xec49
{
  _gt_DISPLA(); // >DISPLA
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  Push(pp_XORMODE); // XORMODE size: 2
  _st__ex__gt_(); // <!>
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  SetColor("BLACK");
  VIEWSCR(); // VIEWSCR
  UNK_0xeb14(); // UNK_0xeb14
  UNK_0xeb2a(); // UNK_0xeb2a
  UNK_0xec03(); // UNK_0xec03
  UNK_0xeba4(); // UNK_0xeba4
  UNK_0xec2d(); // UNK_0xec2d
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
}

// 0xec71: db 0x4c 0x22 0x06 0xe9 0x68 0xea 0x90 0x16 'L"  h   '

// ================================================
// 0xec79: WORD 'UNK_0xec7b' codep=0x224c parp=0xec7b
// ================================================

void UNK_0xec7b() // UNK_0xec7b
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM size: 4
  _2_ex__2(); // 2!_2

  label1:
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(pp_LKEYTIM); // LKEYTIM size: 4
  _2_at_(); // 2@
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
  _i_KEY(); // 'KEY
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); // DROP
}


// ================================================
// 0xec9f: WORD 'UNK_0xeca1' codep=0x224c parp=0xeca1
// ================================================

void UNK_0xeca1() // UNK_0xeca1
{
  _ask_LAST(); // ?LAST
  _at_INST_dash_C(); // @INST-C
  Pop();
  switch(Pop()) // DISPOSAL
  {
  case 68:
    Push(cc_TRUE); // TRUE
    break;
  case 26:
    Push(cc_TRUE); // TRUE
    break;
  case 21:
    Push(cc_TRUE); // TRUE
    break;
  case 31:
    Push(cc_TRUE); // TRUE
    break;
  case 33:
    Push(cc_TRUE); // TRUE
    break;
  case 28:
    UNK_0xe76d(); // UNK_0xe76d
    break;
  case 41:
    UNK_0xe779(); // UNK_0xe779
    break;
  case 9:
    Push(cc_TRUE); // TRUE
    break;
  default:
    Push(cc_FALSE); // FALSE
    break;

  }
  Push(cc_FALSE); // FALSE
  _eq_(); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecaf: WORD 'FUNCTIONS' codep=0x1d29 parp=0xecbd
// ================================================
// 0xecbd: db 0x05 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x27 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C ' k      '

// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8
// ================================================

void UNK_0xecd8() // UNK_0xecd8
{
  _at_INST_dash_C(); // @INST-C
  Pop();
  switch(Pop()) // DISPOSAL
  {
  case 68:
    Push(cc_TRUE); // TRUE
    break;
  case 26:
    Push(cc_TRUE); // TRUE
    break;
  case 21:
    Push(cc_TRUE); // TRUE
    break;
  case 31:
    Push(cc_TRUE); // TRUE
    break;
  case 33:
    Push(cc_TRUE); // TRUE
    break;
  case 28:
    UNK_0xe76d(); // UNK_0xe76d
    break;
  case 41:
    UNK_0xe779(); // UNK_0xe779
    break;
  case 9:
    Push(cc_TRUE); // TRUE
    break;
  default:
    Push(cc_FALSE); // FALSE
    break;

  }
  if (Pop() == 0) goto label1;
  _dash_ICON(); // -ICON
  IDELETE(); // IDELETE
  return;

  label1:
  INEXT(); // INEXT
}


// ================================================
// 0xecec: WORD 'UNK_0xecee' codep=0x224c parp=0xecee
// ================================================

void UNK_0xecee() // UNK_0xecee
{
  if (Pop() == 0) return;
  Push(pp__ro_TRADER); // (TRADER size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(1); // 1
  Push(pp__n_SHOTS); // #SHOTS size: 2
  _plus__ex__2(); // +!_2
  Push(pp__n_SHOTS); // #SHOTS size: 2
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(cc__9); // 9
  goto label2;

  label1:
  Push(0x000a);
  _at_INST_dash_S(); // @INST-S
  Push(0xc032);
  MODULE(); // MODULE
  if (Pop() == 0) goto label2;
  Push(0x0064);
  Push(0xbf4a);
  MODULE(); // MODULE

  label2:
  Push(0xe753);
  IFLD_at_(); // IFLD@
  MAX(); // MAX
  Push(0xe753);
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed3a: WORD 'UNK_0xed3c' codep=0x224c parp=0xed3c
// ================================================

void UNK_0xed3c() // UNK_0xed3c
{
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f2); // IFIELD(UNK_0xe73f)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xed4a: WORD 'UNK_0xed4c' codep=0x1d29 parp=0xed4c
// ================================================
// 0xed4c: db 0x56 0x3a 0x20 0x0f 0x05 0x41 'V:   A'

// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x224c parp=0xed54
// ================================================

void UNK_0xed54() // UNK_0xed54
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS size: 2
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS size: 2
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xed7a: WORD 'UNK_0xed7c' codep=0x224c parp=0xed7c
// ================================================

void UNK_0xed7c() // UNK_0xed7c
{
  Push(pp__ro_PLANET); // (PLANET size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_UNK_0xed4c); // UNK_0xed4c size: 0
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label1:
  UNK_0xecd8(); // UNK_0xecd8
  _ask_NULL(); // ?NULL
  UNK_0xeca1(); // UNK_0xeca1
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label2;
  IDELETE(); // IDELETE

  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  Push(pp__ro_PLANET); // (PLANET size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xed4c); // UNK_0xed4c size: 0
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0); // 0
  Push(pp_UNK_0xed4c); // UNK_0xed4c size: 0
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _st__ex__gt_(); // <!>
  Push(0x000b);
  Push(0x000b);

  label4:
  Push(pp_SUPER_dash_B); // SUPER-B size: 4
  _1_dot_5_at_(); // 1.5@
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _ask_CLASS_slash_(); // ?CLASS/
  if (Pop() == 0) goto label2;
  UNK_0xed54(); // UNK_0xed54
  Push(pp_UNK_0xed4c); // UNK_0xed4c size: 0
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _st_(); // <
  IOPEN(); // IOPEN
  ILAST(); // ILAST
  UNK_0xeca1(); // UNK_0xeca1
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label3;
  CI(); // CI
  Push(pp_UNK_0xed4c); // UNK_0xed4c size: 0
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_UNK_0xed4c); // UNK_0xed4c size: 0
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _st__ex__gt_(); // <!>
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  INEXT(); // INEXT
  goto label4;

  label1:
  Pop(); Pop();// 2DROP
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xee1c: WORD 'HEAVEHO' codep=0x224c parp=0xee28
// ================================================
// entry

void HEAVEHO() // HEAVEHO
{
  Push(pp__ask_CRITIC); // ?CRITIC size: 2
  ON_2(); // ON_2
  UNK_0xeda8(); // UNK_0xeda8
  UNK_0xed7c(); // UNK_0xed7c
}


// ================================================
// 0xee32: WORD 'UNK_0xee34' codep=0x2214 parp=0xee34
// ================================================
// 0xee34: db 0xff 0x7f ' '

// ================================================
// 0xee36: WORD 'UNK_0xee38' codep=0x224c parp=0xee38
// ================================================

void UNK_0xee38() // UNK_0xee38
{
  Push(pp_TVEHICL); // TVEHICL size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_XABS); // XABS size: 2
  Push(Read16(Pop())); // @
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  Push(pp_YABS); // YABS size: 2
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(cc_UNK_0xee34); // UNK_0xee34
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(0x01f4);
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee64: WORD 'TV-SETUP' codep=0x224c parp=0xee71
// ================================================
// entry

void TV_dash_SETUP() // TV-SETUP
{
  UNK_0xec49(); // UNK_0xec49
  SetColor("DK-BLUE");
  Push(pp_CRSCOLO); // CRSCOLO size: 2
  _ex__2(); // !_2
  Push(pp_FUNCTIONS); // FUNCTIONS size: 351
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xee7f: WORD 'UNK_0xee81' codep=0x224c parp=0xee81
// ================================================

void UNK_0xee81() // UNK_0xee81
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6624); // IFIELD(UNK_0xe744)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  _ask_NULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  Push2Words("0.");
  _gt_C(); // >C
}


// ================================================
// 0xee9f: WORD 'UNK_0xeea1' codep=0x224c parp=0xeea1
// ================================================

void UNK_0xeea1() // UNK_0xeea1
{
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  R_at_(); // R@
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  IEXTRAC(); // IEXTRAC
  UNK_0xee8f(); // UNK_0xee8f
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _at__gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  R_at_(); // R@
  Push(0x65f2); // IFIELD(UNK_0xe73f)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Push(-Pop()); // NEGATE
  UNK_0xee81(); // UNK_0xee81
}


// ================================================
// 0xeec7: WORD 'UNK_0xeec9' codep=0x224c parp=0xeec9
// ================================================

void UNK_0xeec9() // UNK_0xeec9
{
  Push(Read16(regsp)); // DUP
  Push(0xb76b);
  MODULE(); // MODULE
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001c);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  UNK_0xeea1(); // UNK_0xeea1
  ICLOSE(); // ICLOSE
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xeeed: WORD 'UNK_0xeeef' codep=0x224c parp=0xeeef
// ================================================

void UNK_0xeeef() // UNK_0xeeef
{
  Push(0x002a);
  Push(0xb76b);
  MODULE(); // MODULE
  Push(0x002a);
  Push(0xb78d);
  MODULE(); // MODULE
  Push(Pop() | Pop()); // OR
  Push(pp__ask_FLAT); // ?FLAT size: 2
  _st__ex__gt_(); // <!>
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(0x002a);
  UNK_0xeec9(); // UNK_0xeec9
  Push(0x0034);
  UNK_0xeec9(); // UNK_0xeec9
  Push(0x000b);
  UNK_0xeec9(); // UNK_0xeec9
  Push(0x000c);
  UNK_0xeec9(); // UNK_0xeec9
  Push(0x000e);
  UNK_0xeec9(); // UNK_0xeec9

  label1:
  Push(0xb6ec);
  MODULE(); // MODULE
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xef47: WORD 'UNK_0xef49' codep=0x224c parp=0xef49
// ================================================

void UNK_0xef49() // UNK_0xef49
{
  Push(pp_TVEHICL); // TVEHICL size: 4
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xee38(); // UNK_0xee38
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _at__gt_C_plus_S(); // @>C+S
  IEXTRAC(); // IEXTRAC
  Push(pp_SUPER_dash_B); // SUPER-B size: 4
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _gt_INSERT(); // >INSERT
  Push(cc__4); // 4
  _star_CLOSE(); // *CLOSE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(pp_XABS); // XABS size: 2
  Push(Read16(Pop())); // @
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
  Push(pp_YABS); // YABS size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  ICLOSE(); // ICLOSE
  UNK_0xeeef(); // UNK_0xeeef
}


// ================================================
// 0xef95: WORD 'UNK_0xef97' codep=0x224c parp=0xef97
// ================================================

void UNK_0xef97() // UNK_0xef97
{
  Push(pp_SUPER_dash_B); // SUPER-B size: 4
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _at__gt_C_plus_S(); // @>C+S
  IEXTRAC(); // IEXTRAC
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp_TVEHICL); // TVEHICL size: 4
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  INIT_dash_IC(); // INIT-IC
}


// ================================================
// 0xefb3: WORD 'UNK_0xefb5' codep=0x224c parp=0xefb5
// ================================================

void UNK_0xefb5() // UNK_0xefb5
{
  Push(pp__ask_TV); // ?TV size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  GCR(); // GCR
  PRINT("REFUELING TERRAIN VEHICLE ", 26); // (.")
  GCR(); // GCR
  UNK_0xed3c(); // UNK_0xed3c
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xea18(); // UNK_0xea18
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  PRINT("AND TRANSFERRING ALL CARGO", 26); // (.")
}


// ================================================
// 0xf00d: WORD 'UNK_0xf00f' codep=0x224c parp=0xf00f
// ================================================

void UNK_0xf00f() // UNK_0xf00f
{
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IEXTRAC(); // IEXTRAC
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(0x000a);
  U_star_(); // U*
  CDROP(); // CDROP
  goto label4;

  label3:
  Push2Words("NULL");

  label4:
  Push(pp__10_star_END); // 10*END size: 4
  D_ex_(); // D!
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf069: WORD 'UNK_0xf06b' codep=0x224c parp=0xf06b
// ================================================

void UNK_0xf06b() // UNK_0xf06b
{

  label1:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf00f(); // UNK_0xf00f
  IDELETE(); // IDELETE
  goto label1;
}


// ================================================
// 0xf07d: WORD 'UNK_0xf07f' codep=0x224c parp=0xf07f
// ================================================

void UNK_0xf07f() // UNK_0xf07f
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(cc__dash_2); // -2
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  CTINIT(); // CTINIT
  Push(pp_TV_dash_HOLD); // TV-HOLD size: 4
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xefb5(); // UNK_0xefb5
  UNK_0xea18(); // UNK_0xea18
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  UNK_0xf06b(); // UNK_0xf06b
  ICLOSE(); // ICLOSE
  Push(0); // 0
  Push(0x65f2); // IFIELD(UNK_0xe73f)
  _ex__2(); // !_2
  goto label2;

  label1:
  Push(pp__ask_TV); // ?TV size: 2
  Push(Read16(Pop())); // @
  UNK_0xed3c(); // UNK_0xed3c
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  GCR(); // GCR
  PRINT("NOT ENOUGH ROOM IN SHIP'S HOLD", 30); // (.")
  GCR(); // GCR
  PRINT("ITEMS WILL STAY IN TERRAIN VEHICLE", 34); // (.")
  GCR(); // GCR
  Push(0x1194);
  UNK_0xec7b(); // UNK_0xec7b

  label2:
  Push(0x05dc);
  MS(); // MS
  ICLOSE(); // ICLOSE
  UNK_0xef97(); // UNK_0xef97
}


// ================================================
// 0xf111: WORD 'UNK_0xf113' codep=0x224c parp=0xf113
// ================================================

void UNK_0xf113() // UNK_0xf113
{
  UNK_0xe936(); // UNK_0xe936
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST size: 2
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST size: 2
  _st__ex__gt_(); // <!>
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  _099(); // 099
  _gt_1ICONF(); // >1ICONF
  Push(pp_MOVED); // MOVED size: 2
  _099(); // 099
  Push(0xce24);
  Push(pp__i__dot_BACKG); // '.BACKG size: 2
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP size: 4
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP size: 4
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP size: 4
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP size: 4
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf14f: WORD 'UNK_0xf151' codep=0x224c parp=0xf151
// ================================================

void UNK_0xf151() // UNK_0xf151
{
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
  _gt_MAINVI(); // >MAINVI
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf161: WORD 'UNK_0xf163' codep=0x224c parp=0xf163
// ================================================

void UNK_0xf163() // UNK_0xf163
{
  Push(pp_XVIS); // XVIS size: 2
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS size: 2
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS size: 2
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS size: 2
  Push(Read16(Pop())); // @
  Push(0x0029);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
}


// ================================================
// 0xf18f: WORD 'UNK_0xf191' codep=0x1d29 parp=0xf191
// ================================================
// 0xf191: db 0x00 0x42 0x99 0x99 0x42 0x00 ' B  B '

// ================================================
// 0xf197: WORD 'UNK_0xf199' codep=0x224c parp=0xf199
// ================================================

void UNK_0xf199() // UNK_0xf199
{
  Push(pp_EYEXY); // EYEXY size: 4
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  R_gt_(); // R>
  Push(0x000e);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY size: 4
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_EYEXY); // EYEXY size: 4
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS size: 2
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(0x0024);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  R_gt_(); // R>
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY size: 4
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf1e3: WORD 'UNK_0xf1e5' codep=0x224c parp=0xf1e5
// ================================================

void UNK_0xf1e5() // UNK_0xf1e5
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__6); // 6
  Push(pp_LBLT); // LBLT size: 2
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_WBLT); // WBLT size: 2
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0xf191); // UNK_0xf191 size: 0
  Push(pp_ABLT); // ABLT size: 2
  _st__ex__gt_(); // <!>
  UNK_0xe9fa(); // UNK_0xe9fa
  _2DUP(); // 2DUP
  Push(pp_EYEXY); // EYEXY size: 4
  _st_D_ex__gt_(); // <D!>
  WLD_gt_SCR(); // WLD>SCR
  Push(0x004e);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT size: 2
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT size: 2
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf219: WORD 'UNK_0xf21b' codep=0x224c parp=0xf21b
// ================================================

void UNK_0xf21b() // UNK_0xf21b
{
  Push(0x000b);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BLT(); // BLT
  Push(0x0032);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xfff6

}


// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG size: 2
  _st__ex__gt_(); // <!>
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  _099(); // 099
  Push(pp_XORMODE); // XORMODE size: 2
  ON_2(); // ON_2
  UNK_0xf1e5(); // UNK_0xf1e5
  UNK_0xf21b(); // UNK_0xf21b

  label3:
  XYSCAN(); // XYSCAN
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  CLICK(); // CLICK
  BLT(); // BLT
  Push(pp_EYEXY); // EYEXY size: 4
  Push(Pop()+2); // 2+
  _st__plus__ex__gt_(); // <+!>
  Push(pp_EYEXY); // EYEXY size: 4
  _st__plus__ex__gt_(); // <+!>
  UNK_0xf199(); // UNK_0xf199
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  Push(0x004e);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT size: 2
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT size: 2
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  Push(pp_ESC_dash_EN); // ESC-EN size: 2
  ON_2(); // ON_2
}


// ================================================
// 0xf28b: WORD 'WALK&TALK' codep=0x224c parp=0xf299
// ================================================
// entry

void WALK_and_TALK() // WALK&TALK
{
  UNK_0xf233(); // UNK_0xf233
  _at_CRS(); // @CRS
  UNK_0xe908(); // UNK_0xe908
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  UNK_0xea6a(); // UNK_0xea6a
  Push(0xbe25);
  MODULE(); // MODULE
  _ex_CRS(); // !CRS
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
}


// ================================================
// 0xf2bb: WORD 'UNK_0xf2bd' codep=0x224c parp=0xf2bd
// ================================================

void UNK_0xf2bd() // UNK_0xf2bd
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_WEAPXY); // WEAPXY size: 4
  _2_at_(); // 2@
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  PRINT("HIT!", 4); // (.")
  goto label2;

  label1:
  PRINT("MISSED!", 7); // (.")

  label2:
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf2f6: WORD 'UNK_0xf2f8' codep=0x224c parp=0xf2f8
// ================================================

void UNK_0xf2f8() // UNK_0xf2f8
{
  Push(pp_COLOR); // COLOR size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _ex_COLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  UNK_0xe9fa(); // UNK_0xe9fa
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop()+2); // 2+
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  SWAP(); // SWAP
  Push(pp_WEAPXY); // WEAPXY size: 4
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  _1PIX(); // 1PIX
  LLINE(); // LLINE
  _2PIX(); // 2PIX
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  UNK_0xe6ea(); // UNK_0xe6ea
}


// ================================================
// 0xf326: WORD 'UNK_0xf328' codep=0x224c parp=0xf328
// ================================================

void UNK_0xf328() // UNK_0xf328
{
  if (Pop() == 0) goto label1;
  SetColor("RED");
  goto label2;

  label1:
  SetColor("DK-BLUE");

  label2:
  UNK_0xf2f8(); // UNK_0xf2f8
}


// ================================================
// 0xf338: WORD 'UNK_0xf33a' codep=0x224c parp=0xf33a
// ================================================

void UNK_0xf33a() // UNK_0xf33a
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR size: 4
  _st_D_ex__gt_(); // <D!>
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xf348: WORD 'TV-DISP' codep=0x224c parp=0xf354
// ================================================
// entry

void TV_dash_DISP() // TV-DISP
{
  DCLIPSE(); // DCLIPSE
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f09("ACTIVATING TERRAIN VEHICLE");
  _dot_TTY(); // .TTY
  Push2Words("0.");
  Push(pp__ro_SCROLL_1); // (SCROLL_1 size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp__ask_NEW); // ?NEW size: 2
  ON_2(); // ON_2
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO size: 2
  _099(); // 099
  Push2Words("0.");
  Push(pp_NCRS); // NCRS size: 2
  _st__ex__gt_(); // <!>
  Push(pp_OCRS); // OCRS size: 2
  _st__ex__gt_(); // <!>
  INIT_dash_IC(); // INIT-IC
  Push(0x0014);
  Push(pp_LOCRADI); // LOCRADI size: 2
  _st__ex__gt_(); // <!>
  UNK_0xf163(); // UNK_0xf163
  UNK_0xf113(); // UNK_0xf113
  Push2Words("0.");
  Push(pp_THIS_dash_RE); // THIS-RE size: 4
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xd081);
  MODULE(); // MODULE
  UNK_0xef49(); // UNK_0xef49
  UNK_0xf33a(); // UNK_0xf33a
  TV_dash_SETUP(); // TV-SETUP
  UNK_0xf151(); // UNK_0xf151
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL size: 2
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf3c5: WORD 'TV-CLEANU' codep=0x224c parp=0xf3d3
// ================================================
// entry

void TV_dash_CLEANU() // TV-CLEANU
{
  UNK_0xf07f(); // UNK_0xf07f
}


// ================================================
// 0xf3d7: WORD 'UNK_0xf3d9' codep=0x1d29 parp=0xf3d9
// ================================================
// 0xf3d9: db 0x3a 0x20 ': '

// ================================================
// 0xf3db: WORD 'UNK_0xf3dd' codep=0x224c parp=0xf3dd
// ================================================

void UNK_0xf3dd() // UNK_0xf3dd
{
  Push(1); // 1
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label1;
  Push(Pop() + Pop()); // +
  return;

  label1:
  _dash_(); // -
}


// ================================================
// 0xf3f3: WORD 'UNK_0xf3f5' codep=0x224c parp=0xf3f5
// ================================================

void UNK_0xf3f5() // UNK_0xf3f5
{
  UNK_0xe8c8(); // UNK_0xe8c8
  Push(0x000a);
  _slash_(); // /
  Push(0); // 0
  Push(0x001b);
  RRND(); // RRND
  _st_(); // <
  Push(pp_UNK_0xf3d9); // UNK_0xf3d9 size: 0
  _ex__2(); // !_2
}


// ================================================
// 0xf40d: WORD 'UNK_0xf40f' codep=0x224c parp=0xf40f
// ================================================

void UNK_0xf40f() // UNK_0xf40f
{
  Push(pp_UNK_0xf3d9); // UNK_0xf3d9 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xf3dd(); // UNK_0xf3dd
  SWAP(); // SWAP
  UNK_0xf3dd(); // UNK_0xf3dd
  SWAP(); // SWAP
}


// ================================================
// 0xf421: WORD 'UNK_0xf423' codep=0x224c parp=0xf423
// ================================================

void UNK_0xf423() // UNK_0xf423
{
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0); // 0

  label1:
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  _gt_(); // >
  if (Pop() == 0) goto label2;
  Push(0); // 0
  goto label3;

  label2:
  Push(cc__dash_1); // -1

  label3:
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  Push(pp_WEAPON_dash_); // WEAPON- size: 2
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
  Push(1); // 1
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("AIM, THEN FIRE", 14); // (.")
}


// ================================================
// 0xf46c: WORD 'UNK_0xf46e' codep=0x1d29 parp=0xf46e
// ================================================
// 0xf46e: db 0x3a 0x20 ': '

// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x224c parp=0xf472
// ================================================

void UNK_0xf472() // UNK_0xf472
{
  Push(pp_UNK_0xf46e); // UNK_0xf46e size: 0
  _099(); // 099
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  Push(pp_ILOCAL); // ILOCAL size: 2
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(pp_IINDEX); // IINDEX size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(Read16(regsp)); // DUP
  Push(0x002f);
  Push(0x0031);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(0x005b);
  Push(0x005f);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x0044);
  _eq_(); // =
  Push(pp_UNK_0xf3d9); // UNK_0xf3d9 size: 0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  UNK_0xe824(); // UNK_0xe824

  label3:
  ICLOSE(); // ICLOSE

  label2:
  Push(pp_UNK_0xf46e); // UNK_0xf46e size: 0
  Push(Read16(Pop())); // @
  MAX(); // MAX
  Push(pp_UNK_0xf46e); // UNK_0xf46e size: 0
  _ex__2(); // !_2
  i++;
  } while(i<imax); // (LOOP) 0xffb0

  R_gt_(); // R>
  POINT_gt_I(); // POINT>I
  Push(pp_UNK_0xf46e); // UNK_0xf46e size: 0
  Push(Read16(Pop())); // @
  return;

  label1:
  Push(cc__dash_1); // -1
}


// ================================================
// 0xf4f2: WORD 'DO.WEAPON' codep=0x224c parp=0xf500
// ================================================
// entry

void DO_dot_WEAPON() // DO.WEAPON
{
  CTERASE(); // CTERASE
  UNK_0xf423(); // UNK_0xf423
  UNK_0xf3f5(); // UNK_0xf3f5
  UNK_0xf233(); // UNK_0xf233
  UNK_0xf472(); // UNK_0xf472
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_TVEHICL); // TVEHICL size: 4
  _at__gt_C_plus_S(); // @>C+S
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  R_at_(); // R@
  Push(0x65f2); // IFIELD(UNK_0xe73a)
  C_ex__2(); // C!_2
  Push(Pop()+1); // 1+
  Push(0xfed4);
  Push(Pop() * Pop()); // *
  Push(0x65ec); // IFIELD(INST-QT)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push(pp_EYEXY); // EYEXY size: 4
  _2_at_(); // 2@
  UNK_0xf40f(); // UNK_0xf40f
  Push(pp_WEAPXY); // WEAPXY size: 4
  _st_D_ex__gt_(); // <D!>
  UNK_0xf328(); // UNK_0xf328
  UNK_0xf2bd(); // UNK_0xf2bd
  R_gt_(); // R>
  UNK_0xecee(); // UNK_0xecee
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  UNK_0xf33a(); // UNK_0xf33a
  UNK_0xf151(); // UNK_0xf151
  CTERASE(); // CTERASE
}

// 0xf552: db 0x54 0x2e 0x56 0x2e 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'T.V.__________ '
  