// ====== OVERLAY 'VITA-OV' ======
// store offset = 0xf170
// overlay size   = 0x03f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf18a  codep:0x2214 parp:0xf18a size:0x0002 C-string:'UNK_0xf18a'
//      UNK_0xf18e  codep:0x2214 parp:0xf18e size:0x0002 C-string:'UNK_0xf18e'
//      UNK_0xf192  codep:0x7394 parp:0xf192 size:0x0006 C-string:'UNK_0xf192'
//      UNK_0xf19a  codep:0x7394 parp:0xf19a size:0x0006 C-string:'UNK_0xf19a'
//      UNK_0xf1a2  codep:0x7394 parp:0xf1a2 size:0x000e C-string:'UNK_0xf1a2'
//      UNK_0xf1b2  codep:0x7394 parp:0xf1b2 size:0x0006 C-string:'UNK_0xf1b2'
//      UNK_0xf1ba  codep:0x7394 parp:0xf1ba size:0x0006 C-string:'UNK_0xf1ba'
//      UNK_0xf1c2  codep:0x7394 parp:0xf1c2 size:0x0006 C-string:'UNK_0xf1c2'
//      UNK_0xf1ca  codep:0x7394 parp:0xf1ca size:0x0006 C-string:'UNK_0xf1ca'
//      UNK_0xf1d2  codep:0x7394 parp:0xf1d2 size:0x0006 C-string:'UNK_0xf1d2'
//      UNK_0xf1da  codep:0x7394 parp:0xf1da size:0x0006 C-string:'UNK_0xf1da'
//      UNK_0xf1e2  codep:0x7394 parp:0xf1e2 size:0x0006 C-string:'UNK_0xf1e2'
//      UNK_0xf1ea  codep:0x7394 parp:0xf1ea size:0x002e C-string:'UNK_0xf1ea'
//      UNK_0xf21a  codep:0x7394 parp:0xf21a size:0x0006 C-string:'UNK_0xf21a'
//      UNK_0xf222  codep:0x7394 parp:0xf222 size:0x0006 C-string:'UNK_0xf222'
//      UNK_0xf22a  codep:0x7394 parp:0xf22a size:0x0006 C-string:'UNK_0xf22a'
//      UNK_0xf232  codep:0x7394 parp:0xf232 size:0x0006 C-string:'UNK_0xf232'
//      UNK_0xf23a  codep:0x7394 parp:0xf23a size:0x0006 C-string:'UNK_0xf23a'
//      UNK_0xf242  codep:0x7394 parp:0xf242 size:0x001e C-string:'UNK_0xf242'
//      UNK_0xf262  codep:0x7394 parp:0xf262 size:0x0006 C-string:'UNK_0xf262'
//      UNK_0xf26a  codep:0x7394 parp:0xf26a size:0x0006 C-string:'UNK_0xf26a'
//      UNK_0xf272  codep:0x7420 parp:0xf272 size:0x0003 C-string:'UNK_0xf272'
//      UNK_0xf277  codep:0x224c parp:0xf277 size:0x0006 C-string:'UNK_0xf277'
//      UNK_0xf27f  codep:0x224c parp:0xf27f size:0x000a C-string:'UNK_0xf27f'
//      UNK_0xf28b  codep:0x224c parp:0xf28b size:0x0008 C-string:'UNK_0xf28b'
//      UNK_0xf295  codep:0x224c parp:0xf295 size:0x000a C-string:'UNK_0xf295'
//      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x0014 C-string:'UNK_0xf2a1'
//      UNK_0xf2b7  codep:0x224c parp:0xf2b7 size:0x0015 C-string:'UNK_0xf2b7'
//      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x000c C-string:'UNK_0xf2ce'
//      UNK_0xf2dc  codep:0x224c parp:0xf2dc size:0x0096 C-string:'UNK_0xf2dc'
//      UNK_0xf374  codep:0x224c parp:0xf374 size:0x0026 C-string:'UNK_0xf374'
//      UNK_0xf39c  codep:0x224c parp:0xf39c size:0x000c C-string:'UNK_0xf39c'
//      UNK_0xf3aa  codep:0x224c parp:0xf3aa size:0x0036 C-string:'UNK_0xf3aa'
//        A.DENSIT  codep:0xf2bf parp:0xf3ed size:0x000e C-string:'A_dot_DENSIT'
//        PLANET.G  codep:0xf2bf parp:0xf408 size:0x000e C-string:'PLANET_dot_G'
//      UNK_0xf418  codep:0x224c parp:0xf418 size:0x0026 C-string:'UNK_0xf418'
//      UNK_0xf440  codep:0x224c parp:0xf440 size:0x001c C-string:'UNK_0xf440'
//      UNK_0xf45e  codep:0x224c parp:0xf45e size:0x0014 C-string:'UNK_0xf45e'
//      UNK_0xf474  codep:0x224c parp:0xf474 size:0x004c C-string:'UNK_0xf474'
//             DIO  codep:0x224c parp:0xf4c8 size:0x0000 C-string:'DIO'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp__n_SHOTS; // #SHOTS
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_FSTUN; // FSTUN
extern const unsigned short int pp_SUPER_dash_B; // SUPER-B
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_SURFAC; // (SURFAC
extern Color WHITE; // WHITE
void _star__slash_(); // */
void _co_(); // ,
void ALLOT(); // ALLOT
void HERE(); // HERE
void UNRAVEL(); // UNRAVEL
void RANGE(); // RANGE
void PICK(); // PICK
void ROLL(); // ROLL
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void CDROP(); // CDROP
void CI_i_(); // CI'
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IINSERT(); // IINSERT
void IFLD_at_(); // IFLD@
void IFIND(); // IFIND
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void StoreCOLOR(); // !COLOR
void BYE_2(); // BYE_2
void DrawTTY(); // .TTY
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _gt_(); // >
void _1_dot_5_at_(); // 1.5@
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xf18a = 0xf18a; // UNK_0xf18a
const unsigned short int cc_UNK_0xf18e = 0xf18e; // UNK_0xf18e


// 0xf182: db 0x3e 0x00 0x14 0x22 0x20 0x00 '>  "  '

// ================================================
// 0xf188: WORD 'UNK_0xf18a' codep=0x2214 parp=0xf18a
// ================================================
// 0xf18a: dw 0x0043

// ================================================
// 0xf18c: WORD 'UNK_0xf18e' codep=0x2214 parp=0xf18e orphan
// ================================================
// 0xf18e: dw 0x0044

// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x7394 parp=0xf192 orphan
// ================================================
LoadDataType UNK_0xf192 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf198: WORD 'UNK_0xf19a' codep=0x7394 parp=0xf19a orphan
// ================================================
LoadDataType UNK_0xf19a = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1a0: WORD 'UNK_0xf1a2' codep=0x7394 parp=0xf1a2 orphan
// ================================================
LoadDataType UNK_0xf1a2 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};
// 0xf1a8: db 0x94 0x73 0x20 0x09 0x01 0x17 0x49 0x6c ' s    Il'

// ================================================
// 0xf1b0: WORD 'UNK_0xf1b2' codep=0x7394 parp=0xf1b2
// ================================================
LoadDataType UNK_0xf1b2 = {BOXIDX, 0x11, 0x02, 0x10, 0x6a7d};

// ================================================
// 0xf1b8: WORD 'UNK_0xf1ba' codep=0x7394 parp=0xf1ba orphan
// ================================================
LoadDataType UNK_0xf1ba = {PLANETIDX, 0x00, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1c0: WORD 'UNK_0xf1c2' codep=0x7394 parp=0xf1c2 orphan
// ================================================
LoadDataType UNK_0xf1c2 = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf1c8: WORD 'UNK_0xf1ca' codep=0x7394 parp=0xf1ca
// ================================================
LoadDataType UNK_0xf1ca = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1d0: WORD 'UNK_0xf1d2' codep=0x7394 parp=0xf1d2 orphan
// ================================================
LoadDataType UNK_0xf1d2 = {PLANETIDX, 0x05, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf1d8: WORD 'UNK_0xf1da' codep=0x7394 parp=0xf1da orphan
// ================================================
LoadDataType UNK_0xf1da = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1e0: WORD 'UNK_0xf1e2' codep=0x7394 parp=0xf1e2 orphan
// ================================================
LoadDataType UNK_0xf1e2 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1e8: WORD 'UNK_0xf1ea' codep=0x7394 parp=0xf1ea orphan
// ================================================
LoadDataType UNK_0xf1ea = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};
// 0xf1f0: db 0x94 0x73 0x20 0x13 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x14 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x15 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x16 0x01 0x17 0x49 0x6c 0x94 0x73 0x43 0x02 0x02 0x1c 0xfc 0x6e ' s    Il s    Il s    Il s    Il sC    n'

// ================================================
// 0xf218: WORD 'UNK_0xf21a' codep=0x7394 parp=0xf21a
// ================================================
LoadDataType UNK_0xf21a = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x6efc};

// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x7394 parp=0xf222
// ================================================
LoadDataType UNK_0xf222 = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf228: WORD 'UNK_0xf22a' codep=0x7394 parp=0xf22a orphan
// ================================================
LoadDataType UNK_0xf22a = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf230: WORD 'UNK_0xf232' codep=0x7394 parp=0xf232 orphan
// ================================================
LoadDataType UNK_0xf232 = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf238: WORD 'UNK_0xf23a' codep=0x7394 parp=0xf23a orphan
// ================================================
LoadDataType UNK_0xf23a = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf240: WORD 'UNK_0xf242' codep=0x7394 parp=0xf242 orphan
// ================================================
LoadDataType UNK_0xf242 = {REGIONSIDX, 0x11, 0x01, 0x1c, 0x6efc};
// 0xf248: db 0x94 0x73 0x43 0x11 0x01 0x1c 0xfc 0x6e 0x94 0x73 0x43 0x12 0x01 0x1c 0xfc 0x6e 0x94 0x73 0x43 0x12 0x01 0x1c 0xfc 0x6e ' sC    n sC    n sC    n'

// ================================================
// 0xf260: WORD 'UNK_0xf262' codep=0x7394 parp=0xf262
// ================================================
LoadDataType UNK_0xf262 = {REGIONSIDX, 0x13, 0x08, 0x1c, 0x6efc};

// ================================================
// 0xf268: WORD 'UNK_0xf26a' codep=0x7394 parp=0xf26a
// ================================================
LoadDataType UNK_0xf26a = {REGIONSIDX, 0x1b, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf270: WORD 'UNK_0xf272' codep=0x7420 parp=0xf272
// ================================================
IFieldType UNK_0xf272 = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xf275: WORD 'UNK_0xf277' codep=0x224c parp=0xf277 params=3 returns=1
// ================================================

void UNK_0xf277() // UNK_0xf277
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x224c parp=0xf27f orphan
// ================================================

void UNK_0xf27f() // UNK_0xf27f
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xf289: WORD 'UNK_0xf28b' codep=0x224c parp=0xf28b orphan
// ================================================

void UNK_0xf28b() // UNK_0xf28b
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xf293: WORD 'UNK_0xf295' codep=0x224c parp=0xf295 orphan
// ================================================

void UNK_0xf295() // UNK_0xf295
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1 orphan params=3 returns=1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  _dash_(); // -
  Push(a); // R>
  Push(0x0100);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf2b5: WORD 'UNK_0xf2b7' codep=0x224c parp=0xf2b7 orphan
// ================================================

void UNK_0xf2b7() // UNK_0xf2b7
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xf2bf: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce orphan params=1 returns=2
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xf2da: WORD 'UNK_0xf2dc' codep=0x224c parp=0xf2dc orphan
// ================================================

void UNK_0xf2dc() // UNK_0xf2dc
{
  unsigned short int i, imax, a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(Pop() * 6); //  6 *
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  HERE(); // HERE
  OVER(); // OVER
  ALLOT(); // ALLOT
  SWAP(); // SWAP
  Push(0);
  FILL_2(); // FILL_2
  CODE(); // (;CODE) inlined assembler code
// 0xf2f4: call   1649
  Push(0);
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  UNK_0xf2ce(); // UNK_0xf2ce

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _2_at_(); // 2@
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    a = Pop(); // >R
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(4);
      ROLL(); // ROLL
      Pop(); // DROP
      ROT(); // ROT
      ROT(); // ROT
      imax = i; // LEAVE
    }
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(Pop() + 4)); //  4 + @
    return;
  }
  PRINT("INDEX NOT IN PROBABILITY ARRAY! ", 32); // (.")
  UNRAVEL(); // UNRAVEL
  BYE_2(); // BYE_2
}


// ================================================
// 0xf372: WORD 'UNK_0xf374' codep=0x224c parp=0xf374 orphan params=2 returns=2
// ================================================

void UNK_0xf374() // UNK_0xf374
{
  unsigned short int a;
  do
  {
    OVER(); // OVER
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x0064?1:0)); //  0x0064 = NOT
    a = Pop(); // >R
    _gt_(); // >
    Push(Pop() & a); //  R> AND
    if (Pop() == 0) return;
    Push((Pop() + 1) + 3); //  1+ 3+
  } while(1);
}


// ================================================
// 0xf39a: WORD 'UNK_0xf39c' codep=0x224c parp=0xf39c orphan params=2 returns=2
// ================================================

void UNK_0xf39c() // UNK_0xf39c
{
  UNK_0xf374(); // UNK_0xf374
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xf3a8: WORD 'UNK_0xf3aa' codep=0x224c parp=0xf3aa params=3 returns=0
// ================================================

void UNK_0xf3aa() // UNK_0xf3aa
{
  unsigned short int i, imax;
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_UNK_0xf18a)); // UNK_0xf18a
  Push(0);
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  Push(0xf1e2); // probable 'UNK_0xf1e2'
  IFLD_at_(); // IFLD@
  Push(Pop() + 1); //  1+
  Push(0xf1da); // probable 'UNK_0xf1da'
  IFLD_at_(); // IFLD@
  IOPEN(); // IOPEN

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_UNK_0xf18a)); // UNK_0xf18a
    Push(i); // I
    Push(1);
    _star_CREATE(); // *CREATE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf3e0: WORD 'A.DENSIT' codep=0xf2bf parp=0xf3ed
// ================================================
// 0xf3ed: db 0x00 0x00 0x9c 0xff 0xe2 0xff 0xf1 0xff 0x00 0x00 0x00 0x00 0xe2 0xff '              '

// ================================================
// 0xf3fb: WORD 'PLANET.G' codep=0xf2bf parp=0xf408
// ================================================
// 0xf408: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xf6 0xff 0xe2 0xff 0xb0 0xff '              '

// ================================================
// 0xf416: WORD 'UNK_0xf418' codep=0x224c parp=0xf418
// ================================================

void UNK_0xf418() // UNK_0xf418
{
  Push(0);
  Push(0x65e1+UNK_0xf272.offset); // UNK_0xf272<IFIELD>
  Store_2(); // !_2
  LoadData(UNK_0xf222); // from 'REGIONS'
  Push(4);
  Push(0);
  FILL_2(); // FILL_2
  LoadData(UNK_0xf21a); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_2(); // FILL_2
  LoadData(UNK_0xf262); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_2(); // FILL_2
  Push(0);
  LoadData(UNK_0xf26a); // from 'REGIONS'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  unsigned short int i, imax;
  Push(Read16(cc_UNK_0xf18a)); // UNK_0xf18a
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_RECORD_n_); // RECORD#
    Store_2(); // !_2
    UNK_0xf418(); // UNK_0xf418
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e params=3 returns=1
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002e);
  IFIND(); // IFIND
}


// ================================================
// 0xf472: WORD 'UNK_0xf474' codep=0x224c parp=0xf474
// ================================================

void UNK_0xf474() // UNK_0xf474
{
  UNK_0xf45e(); // UNK_0xf45e
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0x000b);
    Push(0x002e);
    ICREATE(); // ICREATE
    _2DUP(); // 2DUP
    Push(pp__ro_PLANET); // (PLANET
    _1_dot_5_at_(); // 1.5@
    IINSERT(); // IINSERT
    Push(0x000b);
    Push(0x002c);
    ICREATE(); // ICREATE
    _2SWAP(); // 2SWAP
    IINSERT(); // IINSERT
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    UNK_0xf45e(); // UNK_0xf45e
    Pop(); // DROP
  }
  CI(); // CI
  Push(pp_SUPER_dash_B); // SUPER-B
  _1_dot_5_ex__2(); // 1.5!_2
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_SURFAC); // (SURFAC
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0);
  LoadData(UNK_0xf1b2); // from 'BOX'
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c0: WORD 'DIO' codep=0x224c parp=0xf4c8
// ================================================
// entry

void DIO() // DIO
{
  Push(pp_PLHI); // PLHI
  _099(); // 099
  Push(pp_FSTUN); // FSTUN
  _099(); // 099
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("AUTO SAMPLING DEVICES ACTIVATED");
  DrawTTY(); // .TTY
  UNK_0xf3aa(); // UNK_0xf3aa
  UNK_0xf440(); // UNK_0xf440
  UNK_0xf474(); // UNK_0xf474
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  LoadData(UNK_0xf1ca); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  Push(pp_PLHI); // PLHI
  ON_2(); // ON_2
  goto label1;

  label1:
  SET_STR_AS_PARAM("PERFORMING HULL INTEGRITY CHECK");
  DrawTTY(); // .TTY
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp__n_SHOTS); // #SHOTS
  _099(); // 099
}

// 0xf542: db 0x56 0x49 0x54 0x41 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'VITA__________________________ '

