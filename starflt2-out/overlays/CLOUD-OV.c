// ====== OVERLAY 'CLOUD-OV' ======
// store offset = 0xf3b0
// overlay size   = 0x01b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xf3c6  codep:0x7420 parp:0xf3c6 size:0x0003 C-string:'UNK_0xf3c6'
//      UNK_0xf3cb  codep:0x7420 parp:0xf3cb size:0x0003 C-string:'UNK_0xf3cb'
//      UNK_0xf3d0  codep:0x7420 parp:0xf3d0 size:0x0003 C-string:'UNK_0xf3d0'
//      UNK_0xf3d5  codep:0x7420 parp:0xf3d5 size:0x0003 C-string:'UNK_0xf3d5'
//      UNK_0xf3da  codep:0x224c parp:0xf3da size:0x0006 C-string:'UNK_0xf3da'
//      UNK_0xf3e2  codep:0x224c parp:0xf3e2 size:0x0040 C-string:'UNK_0xf3e2'
//         #HUMANS  codep:0x224c parp:0xf42e size:0x0014 C-string:'_n_HUMANS'
//      UNK_0xf444  codep:0x224c parp:0xf444 size:0x0018 C-string:'UNK_0xf444'
//      UNK_0xf45e  codep:0x224c parp:0xf45e size:0x0012 C-string:'UNK_0xf45e'
//      UNK_0xf472  codep:0x224c parp:0xf472 size:0x0008 C-string:'UNK_0xf472'
//      UNK_0xf47c  codep:0x224c parp:0xf47c size:0x0034 C-string:'UNK_0xf47c'
//      UNK_0xf4b2  codep:0x224c parp:0xf4b2 size:0x0016 C-string:'UNK_0xf4b2'
//      UNK_0xf4ca  codep:0x224c parp:0xf4ca size:0x0008 C-string:'UNK_0xf4ca'
//      UNK_0xf4d4  codep:0x224c parp:0xf4d4 size:0x0002 C-string:'UNK_0xf4d4'
//      UNK_0xf4d8  codep:0x224c parp:0xf4d8 size:0x0008 C-string:'UNK_0xf4d8'
//      UNK_0xf4e2  codep:0x224c parp:0xf4e2 size:0x0008 C-string:'UNK_0xf4e2'
//      UNK_0xf4ec  codep:0x224c parp:0xf4ec size:0x0008 C-string:'UNK_0xf4ec'
//      (DO-CLOUD)  codep:0x4b3b parp:0xf503 size:0x001c C-string:'_ro_DO_dash_CLOUD_rc_'
//        DO-CLOUD  codep:0x224c parp:0xf52c size:0x0000 C-string:'DO_dash_CLOUD'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp__i__dot_HUFF; // '.HUFF
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern Color WHITE; // WHITE
void MS(); // MS
void _gt_FLAG(); // >FLAG
void Store_2(); // !_2
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void ALL(); // ALL
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void WUP(); // WUP
void SWAP(); // SWAP
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf3c2: db 0x1a 0x00 '  '

// ================================================
// 0xf3c4: WORD 'UNK_0xf3c6' codep=0x7420 parp=0xf3c6
// ================================================
IFieldType UNK_0xf3c6 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xf3c9: WORD 'UNK_0xf3cb' codep=0x7420 parp=0xf3cb
// ================================================
// orphan
IFieldType UNK_0xf3cb = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf3ce: WORD 'UNK_0xf3d0' codep=0x7420 parp=0xf3d0
// ================================================
// orphan
IFieldType UNK_0xf3d0 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf3d3: WORD 'UNK_0xf3d5' codep=0x7420 parp=0xf3d5
// ================================================
IFieldType UNK_0xf3d5 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf3d8: WORD 'UNK_0xf3da' codep=0x224c parp=0xf3da params=0 returns=1
// ================================================

void UNK_0xf3da() // UNK_0xf3da
{
  GetINST_dash_S(); // @INST-S
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2 params=1 returns=1
// ================================================
// orphan

void UNK_0xf3e2() // UNK_0xf3e2
{
  unsigned short int a;
  Push(Read16(0x65e1+UNK_0xf3d5.offset)); // UNK_0xf3d5<IFIELD> @
  a = Pop(); // >R
  UNK_0xf3da(); // UNK_0xf3da
  Push(Read16(a)); // R@
  Push(Pop() & 1); //  1 AND
  Push(Read16(a)); // R@
  Push(!(Pop() & 2)); //  2 AND NOT
  Push(Read16(a)); // R@
  Push(Pop() & 8); //  8 AND
  _gt_FLAG(); // >FLAG
  Push(Read16(a)); // R@
  Push(!(Pop() & 0x0010) | (Read16(pp_CONTEXT_3)==0?1:0)); //  0x0010 AND NOT CONTEXT_3 @ 0= OR
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf422: WORD '#HUMANS' codep=0x224c parp=0xf42e
// ================================================

void _n_HUMANS() // #HUMANS
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0);
  Push(0xf3e2); // probable 'UNK_0xf3e2'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf442: WORD 'UNK_0xf444' codep=0x224c parp=0xf444
// ================================================

void UNK_0xf444() // UNK_0xf444
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
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  UNK_0xf444(); // UNK_0xf444
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(pp__i__dot_HUFF)); // '.HUFF @
  MODULE(); // MODULE
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x224c parp=0xf472
// ================================================

void UNK_0xf472() // UNK_0xf472
{
  Push(0x005f);
  UNK_0xf45e(); // UNK_0xf45e
}


// ================================================
// 0xf47a: WORD 'UNK_0xf47c' codep=0x224c parp=0xf47c params=0 returns=0
// ================================================

void UNK_0xf47c() // UNK_0xf47c
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x0012);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x65e1+UNK_0xf3c6.offset) + i); // UNK_0xf3c6<IFIELD> I +
    Get_gt_C_plus_S(); // @>C+S
    UNK_0xf3da(); // UNK_0xf3da
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+UNK_0xf3d5.offset) | 0x0010); // UNK_0xf3d5<IFIELD> @ 0x0010 OR
      Push(0x65e1+UNK_0xf3d5.offset); // UNK_0xf3d5<IFIELD>
      Store_2(); // !_2
    }
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4b0: WORD 'UNK_0xf4b2' codep=0x224c parp=0xf4b2
// ================================================

void UNK_0xf4b2() // UNK_0xf4b2
{
  Push(0x005e);
  UNK_0xf45e(); // UNK_0xf45e
  UNK_0xf47c(); // UNK_0xf47c
  Push(0xc18b); // probable '(OBI'
  MODULE(); // MODULE
  Push(0x0bb8);
  MS(); // MS
}


// ================================================
// 0xf4c8: WORD 'UNK_0xf4ca' codep=0x224c parp=0xf4ca
// ================================================

void UNK_0xf4ca() // UNK_0xf4ca
{
  Push(0x005d);
  UNK_0xf45e(); // UNK_0xf45e
}


// ================================================
// 0xf4d2: WORD 'UNK_0xf4d4' codep=0x224c parp=0xf4d4 params=0 returns=0
// ================================================

void UNK_0xf4d4() // UNK_0xf4d4
{
}


// ================================================
// 0xf4d6: WORD 'UNK_0xf4d8' codep=0x224c parp=0xf4d8
// ================================================

void UNK_0xf4d8() // UNK_0xf4d8
{
  Push(0x005b);
  UNK_0xf45e(); // UNK_0xf45e
}


// ================================================
// 0xf4e0: WORD 'UNK_0xf4e2' codep=0x224c parp=0xf4e2
// ================================================

void UNK_0xf4e2() // UNK_0xf4e2
{
  Push(0x005a);
  UNK_0xf45e(); // UNK_0xf45e
}


// ================================================
// 0xf4ea: WORD 'UNK_0xf4ec' codep=0x224c parp=0xf4ec
// ================================================

void UNK_0xf4ec() // UNK_0xf4ec
{
  Push(0x0059);
  UNK_0xf45e(); // UNK_0xf45e
}


// ================================================
// 0xf4f4: WORD '(DO-CLOUD)' codep=0x4b3b parp=0xf503
// ================================================

void _ro_DO_dash_CLOUD_rc_() // (DO-CLOUD)
{
  switch(Pop()) // (DO-CLOUD)
  {
  case 1:
    UNK_0xf4e2(); // UNK_0xf4e2
    break;
  case 2:
    UNK_0xf4d8(); // UNK_0xf4d8
    break;
  case 3:
    UNK_0xf4d4(); // UNK_0xf4d4
    break;
  case 4:
    UNK_0xf4ca(); // UNK_0xf4ca
    break;
  case 5:
    UNK_0xf4b2(); // UNK_0xf4b2
    break;
  case 6:
    UNK_0xf472(); // UNK_0xf472
    break;
  default:
    UNK_0xf4ec(); // UNK_0xf4ec
    break;

  }
}

// ================================================
// 0xf51f: WORD 'DO-CLOUD' codep=0x224c parp=0xf52c
// ================================================
// entry

void DO_dash_CLOUD() // DO-CLOUD
{
  _n_HUMANS(); // #HUMANS
  if (Pop() != 0)
  {
    _gt_1FONT(); // >1FONT
    WUP(); // WUP
    GetColor(WHITE);
    StoreCOLOR(); // !COLOR
    _ro_DO_dash_CLOUD_rc_(); // (DO-CLOUD) case
    return;
  }
  Pop(); // DROP
}

// 0xf544: db 0x43 0x4c 0x4f 0x55 0x44 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CLOUD-V_____________________ '

