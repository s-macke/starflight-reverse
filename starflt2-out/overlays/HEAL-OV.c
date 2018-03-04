// ====== OVERLAY 'HEAL-OV' ======
// store offset = 0xf070
// overlay size   = 0x04f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf086  codep:0x224c parp:0xf086 size:0x0014 C-string:'UNK_0xf086'
//      UNK_0xf09c  codep:0x224c parp:0xf09c size:0x0020 C-string:'UNK_0xf09c'
//      UNK_0xf0be  codep:0x7420 parp:0xf0be size:0x0003 C-string:'UNK_0xf0be'
//      UNK_0xf0c3  codep:0x7420 parp:0xf0c3 size:0x0003 C-string:'UNK_0xf0c3'
//      UNK_0xf0c8  codep:0x7420 parp:0xf0c8 size:0x0003 C-string:'UNK_0xf0c8'
//      UNK_0xf0cd  codep:0x7420 parp:0xf0cd size:0x0003 C-string:'UNK_0xf0cd'
//      UNK_0xf0d2  codep:0x7420 parp:0xf0d2 size:0x0003 C-string:'UNK_0xf0d2'
//      UNK_0xf0d7  codep:0x7420 parp:0xf0d7 size:0x0003 C-string:'UNK_0xf0d7'
//      UNK_0xf0dc  codep:0x7420 parp:0xf0dc size:0x0003 C-string:'UNK_0xf0dc'
//      UNK_0xf0e1  codep:0x7420 parp:0xf0e1 size:0x0003 C-string:'UNK_0xf0e1'
//      UNK_0xf0e6  codep:0x7420 parp:0xf0e6 size:0x0003 C-string:'UNK_0xf0e6'
//      UNK_0xf0eb  codep:0x7420 parp:0xf0eb size:0x0003 C-string:'UNK_0xf0eb'
//      UNK_0xf0f0  codep:0x7420 parp:0xf0f0 size:0x0003 C-string:'UNK_0xf0f0'
//      UNK_0xf0f5  codep:0x7394 parp:0xf0f5 size:0x0006 C-string:'UNK_0xf0f5'
//      UNK_0xf0fd  codep:0x224c parp:0xf0fd size:0x0008 C-string:'UNK_0xf0fd'
//      UNK_0xf107  codep:0x224c parp:0xf107 size:0x000c C-string:'UNK_0xf107'
//      UNK_0xf115  codep:0x224c parp:0xf115 size:0x003a C-string:'UNK_0xf115'
//      UNK_0xf151  codep:0x224c parp:0xf151 size:0x006a C-string:'UNK_0xf151'
//          ROLE-C  codep:0x224c parp:0xf1c6 size:0x004a C-string:'ROLE_dash_C'
//      UNK_0xf212  codep:0x224c parp:0xf212 size:0x0042 C-string:'UNK_0xf212'
//      UNK_0xf256  codep:0x224c parp:0xf256 size:0x0010 C-string:'UNK_0xf256'
//      UNK_0xf268  codep:0x224c parp:0xf268 size:0x0020 C-string:'UNK_0xf268'
//      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0017 C-string:'UNK_0xf28a'
//      UNK_0xf2a3  codep:0x224c parp:0xf2a3 size:0x0084 C-string:'UNK_0xf2a3'
//           .VITS  codep:0x224c parp:0xf331 size:0x0096 C-string:'DrawVITS'
//          >SKILL  codep:0x4b3b parp:0xf3d2 size:0x0018 C-string:'_gt_SKILL'
//      UNK_0xf3ec  codep:0x224c parp:0xf3ec size:0x001e C-string:'UNK_0xf3ec'
//      UNK_0xf40c  codep:0x224c parp:0xf40c size:0x0012 C-string:'UNK_0xf40c'
//      UNK_0xf420  codep:0x1d29 parp:0xf420 size:0x0002 C-string:'UNK_0xf420'
//      UNK_0xf424  codep:0x1d29 parp:0xf424 size:0x0003 C-string:'UNK_0xf424'
//      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0058 C-string:'UNK_0xf429'
//      UNK_0xf483  codep:0x224c parp:0xf483 size:0x001c C-string:'UNK_0xf483'
//      UNK_0xf4a1  codep:0x224c parp:0xf4a1 size:0x000a C-string:'UNK_0xf4a1'
//      UNK_0xf4ad  codep:0x224c parp:0xf4ad size:0x0024 C-string:'UNK_0xf4ad'
//      UNK_0xf4d3  codep:0x224c parp:0xf4d3 size:0x0050 C-string:'UNK_0xf4d3'
//           OBITS  codep:0x224c parp:0xf52d size:0x0006 C-string:'OBITS'
//            KILL  codep:0x224c parp:0xf53c size:0x000c C-string:'KILL'
//            HEAL  codep:0x224c parp:0xf551 size:0x0000 C-string:'HEAL'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WCHARS; // WCHARS
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_Is10; // ?10
extern const unsigned short int pp_HEALTI; // HEALTI
extern const unsigned short int pp_ROSTER; // ROSTER
extern Color BLACK; // BLACK
extern Color RED; // RED
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SI; // INST-SI
void COUNT(); // COUNT
void MIN(); // MIN
void DrawR(); // .R
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _099(); // 099
void FILL_2(); // FILL_2
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void CI_i_(); // CI'
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void BYE_2(); // BYE_2
void POS_dot_(); // POS.
void WINDOW(); // WINDOW
void _gt_SSCT(); // >SSCT
void _gt_TVCT(); // >TVCT
void CTERASE(); // CTERASE
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void GCR(); // GCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st_1_dot_5_ex__gt_(); // <1.5!>
void _gt_C(); // >C
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf420 = 0xf420; // UNK_0xf420 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf424 = 0xf424; // UNK_0xf424 size: 3
// {0x3a, 0x20, 0x05}




// 0xf082: db 0x4f 0x00 'O '

// ================================================
// 0xf084: WORD 'UNK_0xf086' codep=0x224c parp=0xf086 params=0 returns=0
// ================================================

void UNK_0xf086() // UNK_0xf086
{
  Push(0x0083);
  Push(0x0053);
  Push(9);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xf09a: WORD 'UNK_0xf09c' codep=0x224c parp=0xf09c params=2 returns=0
// ================================================

void UNK_0xf09c() // UNK_0xf09c
{
  SWAP(); // SWAP
  Push(Pop() * 4 + (Read16(pp_WLEFT) + 2)); //  4 * WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf0bc: WORD 'UNK_0xf0be' codep=0x7420 parp=0xf0be
// ================================================
IFieldType UNK_0xf0be = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf0c1: WORD 'UNK_0xf0c3' codep=0x7420 parp=0xf0c3
// ================================================
IFieldType UNK_0xf0c3 = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xf0c6: WORD 'UNK_0xf0c8' codep=0x7420 parp=0xf0c8
// ================================================
IFieldType UNK_0xf0c8 = {ASSIGN_CREWIDX, 0x20, 0x03};

// ================================================
// 0xf0cb: WORD 'UNK_0xf0cd' codep=0x7420 parp=0xf0cd
// ================================================
IFieldType UNK_0xf0cd = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf0d0: WORD 'UNK_0xf0d2' codep=0x7420 parp=0xf0d2
// ================================================
IFieldType UNK_0xf0d2 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xf0d5: WORD 'UNK_0xf0d7' codep=0x7420 parp=0xf0d7
// ================================================
IFieldType UNK_0xf0d7 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xf0da: WORD 'UNK_0xf0dc' codep=0x7420 parp=0xf0dc
// ================================================
IFieldType UNK_0xf0dc = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xf0df: WORD 'UNK_0xf0e1' codep=0x7420 parp=0xf0e1
// ================================================
IFieldType UNK_0xf0e1 = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x7420 parp=0xf0e6
// ================================================
IFieldType UNK_0xf0e6 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xf0e9: WORD 'UNK_0xf0eb' codep=0x7420 parp=0xf0eb
// ================================================
IFieldType UNK_0xf0eb = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf0ee: WORD 'UNK_0xf0f0' codep=0x7420 parp=0xf0f0
// ================================================
IFieldType UNK_0xf0f0 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf0f3: WORD 'UNK_0xf0f5' codep=0x7394 parp=0xf0f5
// ================================================
// orphan
LoadDataType UNK_0xf0f5 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xf0fb: WORD 'UNK_0xf0fd' codep=0x224c parp=0xf0fd params=1 returns=1
// ================================================

void UNK_0xf0fd() // UNK_0xf0fd
{
  _3_star_(); // 3*
  Push(Pop() + pp_ROSTER); //  ROSTER +
}


// ================================================
// 0xf105: WORD 'UNK_0xf107' codep=0x224c parp=0xf107 params=0 returns=0
// ================================================

void UNK_0xf107() // UNK_0xf107
{
  Push(pp_ROSTER); // ROSTER
  Push(0x0012);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xf113: WORD 'UNK_0xf115' codep=0x224c parp=0xf115 params=2 returns=0
// ================================================

void UNK_0xf115() // UNK_0xf115
{
  unsigned short int i, imax;
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf0fd(); // UNK_0xf0fd
    _1_dot_5_at_(); // 1.5@
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    } else
    {
      Push(i); // I
      UNK_0xf0fd(); // UNK_0xf0fd
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        _2DUP(); // 2DUP
        Push(i); // I
        UNK_0xf0fd(); // UNK_0xf0fd
        _st_1_dot_5_ex__gt_(); // <1.5!>
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf14f: WORD 'UNK_0xf151' codep=0x224c parp=0xf151 params=0 returns=0
// ================================================

void UNK_0xf151() // UNK_0xf151
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  if (Pop() != 0)
  {
    _gt_TVCT(); // >TVCT
  } else
  {
    _gt_SSCT(); // >SSCT
  }
  _gt_DISPLA(); // >DISPLA
  GetColor(YELLOW);
  Push(0x4fa9); // probable 'BLACK'
  Store_2(); // !_2
  CTERASE(); // CTERASE
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(1);
  UNK_0xf09c(); // UNK_0xf09c
  _gt_1FONT(); // >1FONT
  GCR(); // GCR
  PRINT("!!CREW DECEASED!! ", 18); // (.")
  GCR(); // GCR
  PRINT("  **GAME OVER** ", 16); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE_2(); // BYE_2
}


// ================================================
// 0xf1bb: WORD 'ROLE-C' codep=0x224c parp=0xf1c6 params=0 returns=0
// ================================================
// entry

void ROLE_dash_C() // ROLE-C
{
  unsigned short int i, imax;
  UNK_0xf107(); // UNK_0xf107
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(!((Read16(0x65e1+UNK_0xf0eb.offset)&0xFF)==0?1:0) & !(Read16(0x65e1+UNK_0xf0f0.offset) & 0x0010)); // UNK_0xf0eb<IFIELD> C@ 0= NOT UNK_0xf0f0<IFIELD> @ 0x0010 AND NOT AND
    if (Pop() != 0)
    {
      CI(); // CI
      UNK_0xf115(); // UNK_0xf115
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
  UNK_0xf151(); // UNK_0xf151
}


// ================================================
// 0xf210: WORD 'UNK_0xf212' codep=0x224c parp=0xf212 params=1 returns=1
// ================================================

void UNK_0xf212() // UNK_0xf212
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(1);
  Push(pp_ROSTER); // ROSTER
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      _gt_C_plus_S(); // >C+S
      Push(Read16(0x65e1+UNK_0xf0eb.offset)&0xFF); // UNK_0xf0eb<IFIELD> C@
      ICLOSE(); // ICLOSE
      Push(Pop()==a?1:0); //  J =
    } else
    {
      Pop(); Pop(); // 2DROP
      Push(1);
    }
    ROT(); // ROT
    Push(Pop() & Pop()); // AND
    SWAP(); // SWAP
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf254: WORD 'UNK_0xf256' codep=0x224c parp=0xf256 params=0 returns=1
// ================================================

void UNK_0xf256() // UNK_0xf256
{
  Push(0x0064);
  UNK_0xf212(); // UNK_0xf212
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_IsHEAL); // ?HEAL
  Store_2(); // !_2
}


// ================================================
// 0xf266: WORD 'UNK_0xf268' codep=0x224c parp=0xf268 params=0 returns=1
// ================================================

void UNK_0xf268() // UNK_0xf268
{
  Push2Words("*ASSIGN");
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  Push(0x65e1+UNK_0xf0c8.offset); // UNK_0xf0c8<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push((0x0104 - (Read16(0x65e1+UNK_0xf0e6.offset)&0xFF)) * 0x00fa); // 0x0104 UNK_0xf0e6<IFIELD> C@ - 0x00fa *
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  CTINIT(); // CTINIT
  Push(0x65e1+UNK_0xf0cd.offset); // UNK_0xf0cd<IFIELD>
  COUNT(); // COUNT
  DrawTTY(); // .TTY
  PRINT(" IS HEALED", 10); // (.")
}


// ================================================
// 0xf2a1: WORD 'UNK_0xf2a3' codep=0x224c parp=0xf2a3 params=0 returns=0
// ================================================

void UNK_0xf2a3() // UNK_0xf2a3
{
  unsigned short int i, imax;
  ROLE_dash_C(); // ROLE-C
  UNK_0xf256(); // UNK_0xf256
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf0fd(); // UNK_0xf0fd
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      _gt_C_plus_S(); // >C+S
      Push(Read16(0x65e1+UNK_0xf0eb.offset)&0xFF); // UNK_0xf0eb<IFIELD> C@
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(Read16(0x65e1+UNK_0xf0f0.offset) & 4); // UNK_0xf0f0<IFIELD> @ 4 AND
        _gt_FLAG(); // >FLAG
        Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
        _0_gt_(); // 0>
        Push(Pop() & Pop()); // AND
        if (Pop() != 0)
        {
          Push(Pop() + 2); //  2+
          Push(Read16(regsp)); // DUP
          Push(0x0064);
          _st_(); // <
          Push(!Pop()); //  NOT
          if (Pop() != 0)
          {
            Push(Read16(0x65e1+UNK_0xf0f0.offset) & 0x00fb); // UNK_0xf0f0<IFIELD> @ 0x00fb AND
            Push(0x65e1+UNK_0xf0f0.offset); // UNK_0xf0f0<IFIELD>
            C_ex__2(); // C!_2
            UNK_0xf28a(); // UNK_0xf28a
          }
        } else
        {
          Push(Pop() + 1); //  1+
        }
        Push(0x0064);
        MIN(); // MIN
        Push(0x65e1+UNK_0xf0eb.offset); // UNK_0xf0eb<IFIELD>
        C_ex__2(); // C!_2
      }
      ICLOSE(); // ICLOSE
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    i++;
  } while(i<imax); // (LOOP)


  label1:
  UNK_0xf268(); // UNK_0xf268
  Push(pp_HEALTI); // HEALTI
  Store_2(); // !_2
}


// ================================================
// 0xf327: WORD '.VITS' codep=0x224c parp=0xf331
// ================================================
// entry

void DrawVITS() // .VITS
{
  unsigned short int a, b, i, imax, j, jmax;
  Push(Read16(pp_XORMODE)); // XORMODE @
  a = Pop(); // >R
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_COLOR)); // COLOR @
  b = Pop(); // >R
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  UNK_0xf086(); // UNK_0xf086
  Push(0);
  Push(1);
  UNK_0xf09c(); // UNK_0xf09c
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    GCR(); // GCR
    Push(Read16(pp_WCHARS)); // WCHARS @
    GetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(i); // I
    UNK_0xf0fd(); // UNK_0xf0fd
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(1);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(0x65e1+UNK_0xf0cd.offset); // UNK_0xf0cd<IFIELD>
      _do__dot_(); // $.
      Push(0x000e - (Read16(0x65e1+UNK_0xf0cd.offset)&0xFF)); // 0x000e UNK_0xf0cd<IFIELD> C@ -
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(0);

        j = Pop();
        jmax = Pop();
        do // (DO)
        {
          PRINT(".", 1); // (.")
          j++;
        } while(j<jmax); // (LOOP)

      }
      Push(Read16(pp_XBLT)); // XBLT @
      Push(-1);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(4);
      GetColor(BLACK);
      POLY_dash_ER(); // POLY-ER
      Push(pp_XBLT); // XBLT
      Store_2(); // !_2
      Push(Read16(0x65e1+UNK_0xf0eb.offset)&0xFF); // UNK_0xf0eb<IFIELD> C@
      Push(3);
      DrawR(); // .R
      PRINT("%", 1); // (.")
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Push(b); // R>
  StoreCOLOR(); // !COLOR
  Push(a); // R>
  Push(pp_XORMODE); // XORMODE
  Store_2(); // !_2
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xf3c7: WORD '>SKILL' codep=0x4b3b parp=0xf3d2
// ================================================

void _gt_SKILL() // >SKILL
{
  switch(Pop()) // >SKILL
  {
  case 1:
    Push(0x65e1+UNK_0xf0d2.offset); // IFIELD
    break;
  case 2:
    Push(0x65e1+UNK_0xf0d7.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+UNK_0xf0dc.offset); // IFIELD
    break;
  case 4:
    Push(0x65e1+UNK_0xf0e1.offset); // IFIELD
    break;
  case 5:
    Push(0x65e1+UNK_0xf0e6.offset); // IFIELD
    break;
  default:
    Exec("ABORT"); // call of word 0x1c45 '(ABORT)'
    break;

  }
}

// ================================================
// 0xf3ea: WORD 'UNK_0xf3ec' codep=0x224c parp=0xf3ec params=0 returns=0
// ================================================

void UNK_0xf3ec() // UNK_0xf3ec
{
  Push((Read16(0x65e1+UNK_0xf0f0.offset) & 0x0010)==0?1:0); // UNK_0xf0f0<IFIELD> @ 0x0010 AND 0=
  if (Pop() == 0) return;
  Push(Read16(0x65e1+UNK_0xf0f0.offset) | 2); // UNK_0xf0f0<IFIELD> @ 2 OR
  Push(0x65e1+UNK_0xf0f0.offset); // UNK_0xf0f0<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf40a: WORD 'UNK_0xf40c' codep=0x224c parp=0xf40c params=0 returns=0
// ================================================

void UNK_0xf40c() // UNK_0xf40c
{
  Push(6);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(0x000a);
  Push(pp_Is10); // ?10
  Store_2(); // !_2
}


// ================================================
// 0xf41e: WORD 'UNK_0xf420' codep=0x1d29 parp=0xf420
// ================================================
// 0xf420: db 0x3a 0x20 ': '

// ================================================
// 0xf422: WORD 'UNK_0xf424' codep=0x1d29 parp=0xf424
// ================================================
// 0xf424: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xf427: WORD 'UNK_0xf429' codep=0x224c parp=0xf429
// ================================================

void UNK_0xf429() // UNK_0xf429
{
  unsigned short int i, imax;
  Push(0);
  Push(pp_UNK_0xf420); // UNK_0xf420
  Store_2(); // !_2
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xf0be.offset); // UNK_0xf0be<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xf424); // UNK_0xf424
  _1_dot_5_ex__2(); // 1.5!_2
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    OVER(); // OVER
    _gt_SKILL(); // >SKILL case
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(Read16(pp_UNK_0xf420)); // UNK_0xf420 @
    _gt_(); // >
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_UNK_0xf424); // UNK_0xf424
      _st_1_dot_5_ex__gt_(); // <1.5!>
      Push(pp_UNK_0xf420); // UNK_0xf420
      _st__ex__gt_(); // <!>
    } else
    {
      Pop(); // DROP
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf481: WORD 'UNK_0xf483' codep=0x224c parp=0xf483 params=0 returns=1
// ================================================

void UNK_0xf483() // UNK_0xf483
{
  Push(((Read16(0x65e1+UNK_0xf0eb.offset)&0xFF)==0?1:0) | Read16(0x65e1+UNK_0xf0f0.offset) & 0x0010); // UNK_0xf0eb<IFIELD> C@ 0= UNK_0xf0f0<IFIELD> @ 0x0010 AND OR
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  UNK_0xf40c(); // UNK_0xf40c
}


// ================================================
// 0xf49f: WORD 'UNK_0xf4a1' codep=0x224c parp=0xf4a1 params=0 returns=0
// ================================================

void UNK_0xf4a1() // UNK_0xf4a1
{
  Push(0x65e1+UNK_0xf0d2.offset); // UNK_0xf0d2<IFIELD>
  Push(6);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xf4ab: WORD 'UNK_0xf4ad' codep=0x224c parp=0xf4ad params=0 returns=0
// ================================================

void UNK_0xf4ad() // UNK_0xf4ad
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xf0be.offset); // UNK_0xf0be<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xf483(); // UNK_0xf483
  if (Pop() != 0)
  {
    UNK_0xf4a1(); // UNK_0xf4a1
    CI_i_(); // CI'
    _gt_C_plus_S(); // >C+S
    Push(0x65e1+UNK_0xf0c3.offset); // UNK_0xf0c3<IFIELD>
    _1_dot_5_at_(); // 1.5@
    Push(0x65e1+UNK_0xf0be.offset); // UNK_0xf0be<IFIELD>
    _1_dot_5_ex__2(); // 1.5!_2
    ICLOSE(); // ICLOSE
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4d1: WORD 'UNK_0xf4d3' codep=0x224c parp=0xf4d3 params=0 returns=0
// ================================================

void UNK_0xf4d3() // UNK_0xf4d3
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xf0be.offset); // UNK_0xf0be<IFIELD>
  Push(6);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    UNK_0xf483(); // UNK_0xf483
    if (Pop() != 0)
    {
      UNK_0xf4a1(); // UNK_0xf4a1
      Push((Read16(0x65e1+UNK_0xf0eb.offset)&0xFF)==0?1:0); // UNK_0xf0eb<IFIELD> C@ 0=
      if (Pop() != 0)
      {
        UNK_0xf3ec(); // UNK_0xf3ec
      }
      ICLOSE(); // ICLOSE
      Push(i); // I
      UNK_0xf429(); // UNK_0xf429
      Push(pp_UNK_0xf424); // UNK_0xf424
      _1_dot_5_at_(); // 1.5@
      Push(i); // I
      _3_star_(); // 3*
      Push(4);
      PICK(); // PICK
      Push(Pop() + Pop()); // +
      _1_dot_5_ex__2(); // 1.5!_2
    } else
    {
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf523: WORD 'OBITS' codep=0x224c parp=0xf52d params=0 returns=0
// ================================================
// entry

void OBITS() // OBITS
{
  UNK_0xf4d3(); // UNK_0xf4d3
  UNK_0xf4ad(); // UNK_0xf4ad
}


// ================================================
// 0xf533: WORD 'KILL' codep=0x224c parp=0xf53c params=0 returns=0
// ================================================
// entry

void KILL() // KILL
{
  Push(0);
  Push(0x65e1+UNK_0xf0eb.offset); // UNK_0xf0eb<IFIELD>
  C_ex__2(); // C!_2
  OBITS(); // OBITS
  UNK_0xf40c(); // UNK_0xf40c
}


// ================================================
// 0xf548: WORD 'HEAL' codep=0x224c parp=0xf551 params=0 returns=0
// ================================================
// entry

void HEAL() // HEAL
{
  OBITS(); // OBITS
  UNK_0xf2a3(); // UNK_0xf2a3
}

// 0xf557: db 0x48 0x45 0x41 0x4c 0x45 0x52 0x5f 0x5f 0x5f 0x00 'HEALER___ '

