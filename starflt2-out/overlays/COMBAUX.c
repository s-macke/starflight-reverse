// ====== OVERLAY 'COMBAUX' ======
// store offset = 0xf2b0
// overlay size   = 0x02b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf2c6  codep:0x224c parp:0xf2c6 size:0x0010 C-string:'UNK_0xf2c6'
//      UNK_0xf2d8  codep:0x224c parp:0xf2d8 size:0x002e C-string:'UNK_0xf2d8'
//      UNK_0xf308  codep:0x224c parp:0xf308 size:0x002c C-string:'UNK_0xf308'
//      UNK_0xf336  codep:0x224c parp:0xf336 size:0x0056 C-string:'UNK_0xf336'
//      UNK_0xf38e  codep:0x224c parp:0xf38e size:0x004a C-string:'UNK_0xf38e'
//      UNK_0xf3da  codep:0x224c parp:0xf3da size:0x0054 C-string:'UNK_0xf3da'
//      UNK_0xf430  codep:0x1d29 parp:0xf430 size:0x0002 C-string:'UNK_0xf430'
//      UNK_0xf434  codep:0x1d29 parp:0xf434 size:0x0002 C-string:'UNK_0xf434'
//      UNK_0xf438  codep:0x224c parp:0xf438 size:0x0022 C-string:'UNK_0xf438'
//      UNK_0xf45c  codep:0x224c parp:0xf45c size:0x0022 C-string:'UNK_0xf45c'
//      UNK_0xf480  codep:0x224c parp:0xf480 size:0x0044 C-string:'UNK_0xf480'
//      UNK_0xf4c6  codep:0x224c parp:0xf4c6 size:0x001c C-string:'UNK_0xf4c6'
//      UNK_0xf4e4  codep:0x224c parp:0xf4e4 size:0x0008 C-string:'UNK_0xf4e4'
//          SET-SC  codep:0x224c parp:0xf4f7 size:0x003c C-string:'SET_dash_SC'
//             @NF  codep:0x224c parp:0xf53b size:0x0000 C-string:'GetNF'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_INVIS_dash_I; // INVIS-I
extern const unsigned short int pp_IsUF; // ?UF
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void WITHIN(); // WITHIN
void SQRT(); // SQRT
void _099(); // 099
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreVISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void _gt_2ICONF(); // >2ICONF
void _gt_3ICONF(); // >3ICONF
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void POINT_gt_I(); // POINT>I
void ROT(); // ROT
void _dash_(); // -
void D_plus_(); // D+
void _st_(); // <
void _st__ex__gt_(); // <!>


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf430 = 0xf430; // UNK_0xf430 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf434 = 0xf434; // UNK_0xf434 size: 2
// {0x3a, 0x20}




// 0xf2c2: db 0x2a 0x00 '* '

// ================================================
// 0xf2c4: WORD 'UNK_0xf2c6' codep=0x224c parp=0xf2c6 params=0 returns=2
// ================================================

void UNK_0xf2c6() // UNK_0xf2c6
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2d6: WORD 'UNK_0xf2d8' codep=0x224c parp=0xf2d8
// ================================================

void UNK_0xf2d8() // UNK_0xf2d8
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
    Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  } else
  {
    Push(Read16(pp_XABS)); // XABS @
    Push(Read16(pp_YABS)); // YABS @
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf306: WORD 'UNK_0xf308' codep=0x224c parp=0xf308 params=0 returns=0
// ================================================

void UNK_0xf308() // UNK_0xf308
{
  Push(Read16(pp_IsUF)); // ?UF @
  if (Pop() != 0)
  {
    UNK_0xf2d8(); // UNK_0xf2d8
  } else
  {
    Push(Read16(pp_XABS)); // XABS @
    Push(Read16(pp_YABS)); // YABS @
  }
  Push(Pop() - 0x001e); //  0x001e -
  Push(pp_YVIS); // YVIS
  _st__ex__gt_(); // <!>
  Push(Pop() - 0x0012); //  0x0012 -
  Push(pp_XVIS); // XVIS
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf334: WORD 'UNK_0xf336' codep=0x224c parp=0xf336
// ================================================

void UNK_0xf336() // UNK_0xf336
{
  _gt_2ICONF(); // >2ICONF
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(4);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP + 2); // XWLD:XP 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP + 2); // YWLD:YP 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000a); // XVIS @ 0x000a +
  Push(Read16(pp_YVIS) + 0x000f); // YVIS @ 0x000f +
  Push(Read16(pp_XVIS) + 0x001a); // XVIS @ 0x001a +
  Push(Read16(pp_YVIS) + 0x002b); // YVIS @ 0x002b +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf38c: WORD 'UNK_0xf38e' codep=0x224c parp=0xf38e
// ================================================

void UNK_0xf38e() // UNK_0xf38e
{
  _gt_3ICONF(); // >3ICONF
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP + 2); // XWLD:XP 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP + 2); // YWLD:YP 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(pp_XVIS) + 0x0022); // XVIS @ 0x0022 +
  Push(Read16(pp_YVIS) + 0x003a); // YVIS @ 0x003a +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf3d8: WORD 'UNK_0xf3da' codep=0x224c parp=0xf3da
// ================================================

void UNK_0xf3da() // UNK_0xf3da
{
  _gt_1ICONF(); // >1ICONF
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP); // XWLD:XP
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP); // YWLD:YP
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XP + 2); // XWLD:XP 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YP + 2); // YWLD:YP 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0017); // YVIS @ 0x0017 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x002a); // YVIS @ 0x002a +
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x1d29 parp=0xf430
// ================================================
// 0xf430: db 0x3a 0x20 ': '

// ================================================
// 0xf432: WORD 'UNK_0xf434' codep=0x1d29 parp=0xf434
// ================================================
// 0xf434: db 0x3a 0x20 ': '

// ================================================
// 0xf436: WORD 'UNK_0xf438' codep=0x224c parp=0xf438
// ================================================

void UNK_0xf438() // UNK_0xf438
{
  Push(Read16(pp_XABS)); // XABS @
  GetIX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(pp_YABS)); // YABS @
  GetIY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_UNK_0xf434)); // UNK_0xf434 @
  MIN(); // MIN
  Push(pp_UNK_0xf434); // UNK_0xf434
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf45a: WORD 'UNK_0xf45c' codep=0x224c parp=0xf45c
// ================================================

void UNK_0xf45c() // UNK_0xf45c
{
  Push(Read16(pp_XABS)); // XABS @
  GetIX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(pp_YABS)); // YABS @
  GetIY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp_UNK_0xf430)); // UNK_0xf430 @
  MAX(); // MAX
  Push(pp_UNK_0xf430); // UNK_0xf430
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480() // UNK_0xf480
{
  unsigned short int i, imax;
  Push(pp_UNK_0xf430); // UNK_0xf430
  _099(); // 099
  Push(0x03e8);
  Push(pp_UNK_0xf434); // UNK_0xf434
  _st__ex__gt_(); // <!>
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(0x0023);
    Push(0x002c);
    WITHIN(); // WITHIN
    GetID(); // @ID
    Push(Pop()==Read16(cc_INVIS_dash_I)?1:0); //  INVIS-I =
    Push(Pop() | Pop()); // OR
    GetID(); // @ID
    Push(Pop()==0x0060?1:0); //  0x0060 =
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xf438(); // UNK_0xf438
      UNK_0xf45c(); // UNK_0xf45c
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf4c4: WORD 'UNK_0xf4c6' codep=0x224c parp=0xf4c6
// ================================================

void UNK_0xf4c6() // UNK_0xf4c6
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
  Push(0);
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xf4e2: WORD 'UNK_0xf4e4' codep=0x224c parp=0xf4e4
// ================================================

void UNK_0xf4e4() // UNK_0xf4e4
{
  UNK_0xf2d8(); // UNK_0xf2d8
  UNK_0xf2c6(); // UNK_0xf2c6
  UNK_0xf4c6(); // UNK_0xf4c6
}


// ================================================
// 0xf4ec: WORD 'SET-SC' codep=0x224c parp=0xf4f7
// ================================================
// entry

void SET_dash_SC() // SET-SC
{
  UNK_0xf308(); // UNK_0xf308
  Push(Read16(pp_IsUF)); // ?UF @
  if (Pop() != 0)
  {
    UNK_0xf4e4(); // UNK_0xf4e4
  } else
  {
    UNK_0xf480(); // UNK_0xf480
    Push(Read16(pp_UNK_0xf430)); // UNK_0xf430 @
  }
  Push(Read16(regsp)); // DUP
  Push(5);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    UNK_0xf3da(); // UNK_0xf3da
    return;
  }
  Push(5);
  Push(8);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    UNK_0xf336(); // UNK_0xf336
    return;
  }
  UNK_0xf38e(); // UNK_0xf38e
}


// ================================================
// 0xf533: WORD '@NF' codep=0x224c parp=0xf53b
// ================================================
// entry

void GetNF() // @NF
{
  UNK_0xf480(); // UNK_0xf480
  Push(Read16(pp_UNK_0xf434)); // UNK_0xf434 @
  Push(Read16(pp_UNK_0xf430)); // UNK_0xf430 @
}

// 0xf547: db 0x43 0x4f 0x4d 0x42 0x41 0x55 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'COMBAU___________________ '

