// ====== OVERLAY 'CLOUD-OV' ======
// store offset = 0xf3b0
// overlay size   = 0x01b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF3C6  codep:0x7420 wordp:0xf3c6 size:0x0003 C-string:'WF3C6'
//           WF3CB  codep:0x7420 wordp:0xf3cb size:0x0003 C-string:'WF3CB'
//           WF3D0  codep:0x7420 wordp:0xf3d0 size:0x0003 C-string:'WF3D0'
//           WF3D5  codep:0x7420 wordp:0xf3d5 size:0x0003 C-string:'WF3D5'
//           WF3DA  codep:0x224c wordp:0xf3da size:0x0006 C-string:'WF3DA'
//           WF3E2  codep:0x224c wordp:0xf3e2 size:0x0040 C-string:'WF3E2'
//         #HUMANS  codep:0x224c wordp:0xf42e size:0x0014 C-string:'_n_HUMANS'
//           WF444  codep:0x224c wordp:0xf444 size:0x0018 C-string:'WF444'
//           WF45E  codep:0x224c wordp:0xf45e size:0x0012 C-string:'WF45E'
//           WF472  codep:0x224c wordp:0xf472 size:0x0008 C-string:'WF472'
//           WF47C  codep:0x224c wordp:0xf47c size:0x0034 C-string:'WF47C'
//           WF4B2  codep:0x224c wordp:0xf4b2 size:0x0016 C-string:'WF4B2'
//           WF4CA  codep:0x224c wordp:0xf4ca size:0x0008 C-string:'WF4CA'
//           WF4D4  codep:0x224c wordp:0xf4d4 size:0x0002 C-string:'WF4D4'
//           WF4D8  codep:0x224c wordp:0xf4d8 size:0x0008 C-string:'WF4D8'
//           WF4E2  codep:0x224c wordp:0xf4e2 size:0x0008 C-string:'WF4E2'
//           WF4EC  codep:0x224c wordp:0xf4ec size:0x0008 C-string:'WF4EC'
//      (DO-CLOUD)  codep:0x4b3b wordp:0xf503 size:0x001c C-string:'_ro_DO_dash_CLOUD_rc_'
//        DO-CLOUD  codep:0x224c wordp:0xf52c size:0x0000 C-string:'DO_dash_CLOUD'

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
// 0xf3c4: WORD 'WF3C6' codep=0x7420 wordp=0xf3c6
// ================================================
IFieldType WF3C6 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xf3c9: WORD 'WF3CB' codep=0x7420 wordp=0xf3cb
// ================================================
// orphan
IFieldType WF3CB = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf3ce: WORD 'WF3D0' codep=0x7420 wordp=0xf3d0
// ================================================
// orphan
IFieldType WF3D0 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf3d3: WORD 'WF3D5' codep=0x7420 wordp=0xf3d5
// ================================================
IFieldType WF3D5 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf3d8: WORD 'WF3DA' codep=0x224c wordp=0xf3da params=0 returns=1
// ================================================

void WF3DA() // WF3DA
{
  GetINST_dash_S(); // @INST-S
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf3e0: WORD 'WF3E2' codep=0x224c wordp=0xf3e2 params=1 returns=1
// ================================================

void WF3E2() // WF3E2
{
  unsigned short int a;
  Push(Read16(0x65e1+WF3D5.offset)); // WF3D5<IFIELD> @
  a = Pop(); // >R
  WF3DA(); // WF3DA
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
// 0xf422: WORD '#HUMANS' codep=0x224c wordp=0xf42e
// ================================================

void _n_HUMANS() // #HUMANS
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0);
  Push(0xf3e2); // 'WF3E2'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf442: WORD 'WF444' codep=0x224c wordp=0xf444
// ================================================

void WF444() // WF444
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
// 0xf45c: WORD 'WF45E' codep=0x224c wordp=0xf45e
// ================================================

void WF45E() // WF45E
{
  WF444(); // WF444
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(pp__i__dot_HUFF)); // '.HUFF @
  MODULE(); // MODULE
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf470: WORD 'WF472' codep=0x224c wordp=0xf472
// ================================================

void WF472() // WF472
{
  Push(0x005f);
  WF45E(); // WF45E
}


// ================================================
// 0xf47a: WORD 'WF47C' codep=0x224c wordp=0xf47c params=0 returns=0
// ================================================

void WF47C() // WF47C
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S

  i = 0;
  imax = 0x0012;
  do // (DO)
  {
    Push((0x65e1+WF3C6.offset) + i); // WF3C6<IFIELD> I +
    Get_gt_C_plus_S(); // @>C+S
    WF3DA(); // WF3DA
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+WF3D5.offset) | 0x0010); // WF3D5<IFIELD> @ 0x0010 OR
      Push(0x65e1+WF3D5.offset); // WF3D5<IFIELD>
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
// 0xf4b0: WORD 'WF4B2' codep=0x224c wordp=0xf4b2
// ================================================

void WF4B2() // WF4B2
{
  Push(0x005e);
  WF45E(); // WF45E
  WF47C(); // WF47C
  Push(0xc18b); // '(OBI'
  MODULE(); // MODULE
  Push(0x0bb8);
  MS(); // MS
}


// ================================================
// 0xf4c8: WORD 'WF4CA' codep=0x224c wordp=0xf4ca
// ================================================

void WF4CA() // WF4CA
{
  Push(0x005d);
  WF45E(); // WF45E
}


// ================================================
// 0xf4d2: WORD 'WF4D4' codep=0x224c wordp=0xf4d4 params=0 returns=0
// ================================================

void WF4D4() // WF4D4
{
}


// ================================================
// 0xf4d6: WORD 'WF4D8' codep=0x224c wordp=0xf4d8
// ================================================

void WF4D8() // WF4D8
{
  Push(0x005b);
  WF45E(); // WF45E
}


// ================================================
// 0xf4e0: WORD 'WF4E2' codep=0x224c wordp=0xf4e2
// ================================================

void WF4E2() // WF4E2
{
  Push(0x005a);
  WF45E(); // WF45E
}


// ================================================
// 0xf4ea: WORD 'WF4EC' codep=0x224c wordp=0xf4ec
// ================================================

void WF4EC() // WF4EC
{
  Push(0x0059);
  WF45E(); // WF45E
}


// ================================================
// 0xf4f4: WORD '(DO-CLOUD)' codep=0x4b3b wordp=0xf503
// ================================================

void _ro_DO_dash_CLOUD_rc_() // (DO-CLOUD)
{
  switch(Pop()) // (DO-CLOUD)
  {
  case 1:
    WF4E2(); // WF4E2
    break;
  case 2:
    WF4D8(); // WF4D8
    break;
  case 3:
    WF4D4(); // WF4D4
    break;
  case 4:
    WF4CA(); // WF4CA
    break;
  case 5:
    WF4B2(); // WF4B2
    break;
  case 6:
    WF472(); // WF472
    break;
  default:
    WF4EC(); // WF4EC
    break;

  }
}

// ================================================
// 0xf51f: WORD 'DO-CLOUD' codep=0x224c wordp=0xf52c
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

