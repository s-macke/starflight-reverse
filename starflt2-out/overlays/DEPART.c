// ====== OVERLAY 'DEPART' ======
// store offset = 0xf390
// overlay size   = 0x01d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WF3A6  codep:0x7394 parp:0xf3a6 size:0x0006 C-string:'WF3A6'
//           WF3AE  codep:0x224c parp:0xf3ae size:0x000a C-string:'WF3AE'
//           WF3BA  codep:0x224c parp:0xf3ba size:0x0036 C-string:'WF3BA'
//        DISPOSAL  codep:0x4b3b parp:0xf3fd size:0x0024 C-string:'DISPOSAL'
//           WF423  codep:0x224c parp:0xf423 size:0x0014 C-string:'WF423'
//           WF439  codep:0x224c parp:0xf439 size:0x000c C-string:'WF439'
//           WF447  codep:0x224c parp:0xf447 size:0x0044 C-string:'WF447'
//           WF48D  codep:0x224c parp:0xf48d size:0x0028 C-string:'WF48D'
//           WF4B7  codep:0x7420 parp:0xf4b7 size:0x0003 C-string:'WF4B7'
//           WF4BC  codep:0x224c parp:0xf4bc size:0x004a C-string:'WF4BC'
//          DEPART  codep:0x224c parp:0xf511 size:0x0000 C-string:'DEPART'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
extern const unsigned short int pp_IsLANDED; // ?LANDED
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_SUPER_dash_B; // SUPER-B
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp__ro_TRADER; // (TRADER
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void WITHIN(); // WITHIN
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _1_dot_5_ex__2(); // 1.5!_2
void _099(); // 099
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _st_(); // <
void _0_gt_(); // 0>
void _1_dot_5_at_(); // 1.5@


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf3a2: db 0x1d 0x00 '  '

// ================================================
// 0xf3a4: WORD 'WF3A6' codep=0x7394 parp=0xf3a6
// ================================================
LoadDataType WF3A6 = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xf3ac: WORD 'WF3AE' codep=0x224c parp=0xf3ae
// ================================================

void WF3AE() // WF3AE
{
  LoadData(WF3A6); // from 'ARTIFACT'
  Push((Read16(Pop())&0xFF)==2?1:0); //  C@ 2 =
}


// ================================================
// 0xf3b8: WORD 'WF3BA' codep=0x224c parp=0xf3ba
// ================================================

void WF3BA() // WF3BA
{
  GetINST_dash_S(); // @INST-S
  Push(3);
  _st_(); // <
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001b);
  Push(0);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  IFIRST(); // IFIRST
  Push(0x001c);
  Push(0);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  GetINST_dash_S(); // @INST-S
  Push(3);
  Push(5);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf3f0: WORD 'DISPOSAL' codep=0x4b3b parp=0xf3fd
// ================================================

void DISPOSAL() // DISPOSAL
{
  switch(Pop()) // DISPOSAL
  {
  case 68:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 26:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 21:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 31:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 33:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 28:
    WF3AE(); // WF3AE
    break;
  case 41:
    WF3BA(); // WF3BA
    break;
  case 9:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  default:
    Push(Read16(cc_FALSE)); // FALSE
    break;

  }
}

// ================================================
// 0xf421: WORD 'WF423' codep=0x224c parp=0xf423 params=0 returns=1
// ================================================

void WF423() // WF423
{
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    GetINST_dash_C(); // @INST-C
    DISPOSAL(); // DISPOSAL case
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf437: WORD 'WF439' codep=0x224c parp=0xf439 params=1 returns=0
// ================================================

void WF439() // WF439
{
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
    IPREV(); // IPREV
  }
  INEXT(); // INEXT
}


// ================================================
// 0xf445: WORD 'WF447' codep=0x224c parp=0xf447
// ================================================

void WF447() // WF447
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  while(1)
  {
    Push(0x000b);
    Push(0x000b);
    IFIND(); // IFIND
    if (Pop() == 0) break;

    IOPEN(); // IOPEN
    while(1)
    {
      IsLAST(); // ?LAST
      Push(!Pop()); //  NOT
      IsNULL(); // ?NULL
      Push(!Pop()); //  NOT
      Push(Pop() & Pop()); // AND
      if (Pop() == 0) break;

      WF423(); // WF423
      WF439(); // WF439
    }
    WF423(); // WF423
    if (Pop() != 0)
    {
      IDELETE(); // IDELETE
    }
    IsNULL(); // ?NULL
    ICLOSE(); // ICLOSE
    WF439(); // WF439
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf48b: WORD 'WF48D' codep=0x224c parp=0xf48d
// ================================================

void WF48D() // WF48D
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_SUPER_dash_B); // SUPER-B
  Get_gt_C_plus_S(); // @>C+S
  IDELETE(); // IDELETE
  IFIRST(); // IFIRST
  while(1)
  {
    Push(0x0043);
    Push(0);
    IFIND(); // IFIND
    if (Pop() == 0) break;

    IDELETE(); // IDELETE
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4b5: WORD 'WF4B7' codep=0x7420 parp=0xf4b7
// ================================================
IFieldType WF4B7 = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xf4ba: WORD 'WF4BC' codep=0x224c parp=0xf4bc params=0 returns=0
// ================================================

void WF4BC() // WF4BC
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL) - (Read16(0x65e1+WF4B7.offset)&0xFF)); // EDL @ WF4B7<IFIELD> C@ -
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    _0_gt_(); // 0>
    Push(Pop() * 2 - 1); //  2* 1-
    SWAP(); // SWAP
    ABS(); // ABS
    Push(3);
    _slash_(); // /
    Push(5);
    MAX(); // MAX
    Push(Pop() * Pop()); // *
    Push(Pop() + (Read16(0x65e1+WF4B7.offset)&0xFF)); //  WF4B7<IFIELD> C@ +
    Push(0x0064);
    MIN(); // MIN
    Push(0);
    MAX(); // MAX
    Push(0x65e1+WF4B7.offset); // WF4B7<IFIELD>
    C_ex__2(); // C!_2
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf506: WORD 'DEPART' codep=0x224c parp=0xf511 params=0 returns=0
// ================================================
// entry

void DEPART() // DEPART
{
  Push(pp_IsCRITIC); // ?CRITIC
  _099(); // 099
  Push(0x3a48); // 'NOP'
  Push(pp__i_THROW_dash_); // 'THROW-
  Store_2(); // !_2
  Push(Read16(pp_IsLANDED)); // ?LANDED @
  if (Pop() != 0)
  {
    WF447(); // WF447
    WF48D(); // WF48D
  }
  Push(-1);
  Push(pp_PLHI); // PLHI
  Store_2(); // !_2
  Push(pp_IsLANDED); // ?LANDED
  _099(); // 099
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WF4BC(); // WF4BC
  }
  Push2Words("NULL");
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  Push(0);
  StoreINST_dash_S(); // !INST-S
  ICLOSE(); // ICLOSE
}

// 0xf551: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DPART-VOC______ '

