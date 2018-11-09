// ====== OVERLAY 'VITA-OV' ======
// store offset = 0xf170
// overlay size   = 0x03f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF186  codep:0x2214 wordp:0xf186 size:0x0002 C-string:'WF186'
//           WF18A  codep:0x2214 wordp:0xf18a size:0x0002 C-string:'WF18A'
//           WF18E  codep:0x2214 wordp:0xf18e size:0x0002 C-string:'WF18E'
//           WF192  codep:0x7394 wordp:0xf192 size:0x0006 C-string:'WF192'
//           WF19A  codep:0x7394 wordp:0xf19a size:0x0006 C-string:'WF19A'
//           WF1A2  codep:0x7394 wordp:0xf1a2 size:0x0006 C-string:'WF1A2'
//           WF1AA  codep:0x7394 wordp:0xf1aa size:0x0006 C-string:'WF1AA'
//           WF1B2  codep:0x7394 wordp:0xf1b2 size:0x0006 C-string:'WF1B2'
//           WF1BA  codep:0x7394 wordp:0xf1ba size:0x0006 C-string:'WF1BA'
//           WF1C2  codep:0x7394 wordp:0xf1c2 size:0x0006 C-string:'WF1C2'
//           WF1CA  codep:0x7394 wordp:0xf1ca size:0x0006 C-string:'WF1CA'
//           WF1D2  codep:0x7394 wordp:0xf1d2 size:0x0006 C-string:'WF1D2'
//           WF1DA  codep:0x7394 wordp:0xf1da size:0x0006 C-string:'WF1DA'
//           WF1E2  codep:0x7394 wordp:0xf1e2 size:0x0006 C-string:'WF1E2'
//           WF1EA  codep:0x7394 wordp:0xf1ea size:0x0006 C-string:'WF1EA'
//           WF1F2  codep:0x7394 wordp:0xf1f2 size:0x0006 C-string:'WF1F2'
//           WF1FA  codep:0x7394 wordp:0xf1fa size:0x0006 C-string:'WF1FA'
//           WF202  codep:0x7394 wordp:0xf202 size:0x0006 C-string:'WF202'
//           WF20A  codep:0x7394 wordp:0xf20a size:0x0006 C-string:'WF20A'
//           WF212  codep:0x7394 wordp:0xf212 size:0x0006 C-string:'WF212'
//           WF21A  codep:0x7394 wordp:0xf21a size:0x0006 C-string:'WF21A'
//           WF222  codep:0x7394 wordp:0xf222 size:0x0006 C-string:'WF222'
//           WF22A  codep:0x7394 wordp:0xf22a size:0x0006 C-string:'WF22A'
//           WF232  codep:0x7394 wordp:0xf232 size:0x0006 C-string:'WF232'
//           WF23A  codep:0x7394 wordp:0xf23a size:0x0006 C-string:'WF23A'
//           WF242  codep:0x7394 wordp:0xf242 size:0x0006 C-string:'WF242'
//           WF24A  codep:0x7394 wordp:0xf24a size:0x0006 C-string:'WF24A'
//           WF252  codep:0x7394 wordp:0xf252 size:0x0006 C-string:'WF252'
//           WF25A  codep:0x7394 wordp:0xf25a size:0x0006 C-string:'WF25A'
//           WF262  codep:0x7394 wordp:0xf262 size:0x0006 C-string:'WF262'
//           WF26A  codep:0x7394 wordp:0xf26a size:0x0006 C-string:'WF26A'
//           WF272  codep:0x7420 wordp:0xf272 size:0x0003 C-string:'WF272'
//           WF277  codep:0x224c wordp:0xf277 size:0x0006 C-string:'WF277'
//           WF27F  codep:0x224c wordp:0xf27f size:0x000a C-string:'WF27F'
//           WF28B  codep:0x224c wordp:0xf28b size:0x0008 C-string:'WF28B'
//           WF295  codep:0x224c wordp:0xf295 size:0x000a C-string:'WF295'
//           WF2A1  codep:0x224c wordp:0xf2a1 size:0x0014 C-string:'WF2A1'
//           WF2B7  codep:0x224c wordp:0xf2b7 size:0x0015 C-string:'WF2B7'
//           WF2CE  codep:0x224c wordp:0xf2ce size:0x000c C-string:'WF2CE'
//           WF2DC  codep:0x224c wordp:0xf2dc size:0x0096 C-string:'WF2DC'
//           WF374  codep:0x224c wordp:0xf374 size:0x0026 C-string:'WF374'
//           WF39C  codep:0x224c wordp:0xf39c size:0x000c C-string:'WF39C'
//           WF3AA  codep:0x224c wordp:0xf3aa size:0x0036 C-string:'WF3AA'
//        A.DENSIT  codep:0xf2bf wordp:0xf3ed size:0x000e C-string:'A_dot_DENSIT'
//        PLANET.G  codep:0xf2bf wordp:0xf408 size:0x000e C-string:'PLANET_dot_G'
//           WF418  codep:0x224c wordp:0xf418 size:0x0026 C-string:'WF418'
//           WF440  codep:0x224c wordp:0xf440 size:0x001c C-string:'WF440'
//           WF45E  codep:0x224c wordp:0xf45e size:0x0014 C-string:'WF45E'
//           WF474  codep:0x224c wordp:0xf474 size:0x004c C-string:'WF474'
//             DIO  codep:0x224c wordp:0xf4c8 size:0x0000 C-string:'DIO'

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

const unsigned short int cc_WF186 = 0xf186; // WF186
const unsigned short int cc_WF18A = 0xf18a; // WF18A
const unsigned short int cc_WF18E = 0xf18e; // WF18E


// 0xf182: db 0x3e 0x00 '> '

// ================================================
// 0xf184: WORD 'WF186' codep=0x2214 wordp=0xf186
// ================================================
// orphan
// 0xf186: dw 0x0020

// ================================================
// 0xf188: WORD 'WF18A' codep=0x2214 wordp=0xf18a
// ================================================
// 0xf18a: dw 0x0043

// ================================================
// 0xf18c: WORD 'WF18E' codep=0x2214 wordp=0xf18e
// ================================================
// orphan
// 0xf18e: dw 0x0044

// ================================================
// 0xf190: WORD 'WF192' codep=0x7394 wordp=0xf192
// ================================================
// orphan
LoadDataType WF192 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf198: WORD 'WF19A' codep=0x7394 wordp=0xf19a
// ================================================
// orphan
LoadDataType WF19A = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1a0: WORD 'WF1A2' codep=0x7394 wordp=0xf1a2
// ================================================
// orphan
LoadDataType WF1A2 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1a8: WORD 'WF1AA' codep=0x7394 wordp=0xf1aa
// ================================================
// orphan
LoadDataType WF1AA = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1b0: WORD 'WF1B2' codep=0x7394 wordp=0xf1b2
// ================================================
LoadDataType WF1B2 = {BOXIDX, 0x11, 0x02, 0x10, 0x6a7d};

// ================================================
// 0xf1b8: WORD 'WF1BA' codep=0x7394 wordp=0xf1ba
// ================================================
// orphan
LoadDataType WF1BA = {PLANETIDX, 0x00, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1c0: WORD 'WF1C2' codep=0x7394 wordp=0xf1c2
// ================================================
// orphan
LoadDataType WF1C2 = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf1c8: WORD 'WF1CA' codep=0x7394 wordp=0xf1ca
// ================================================
LoadDataType WF1CA = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1d0: WORD 'WF1D2' codep=0x7394 wordp=0xf1d2
// ================================================
// orphan
LoadDataType WF1D2 = {PLANETIDX, 0x05, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf1d8: WORD 'WF1DA' codep=0x7394 wordp=0xf1da
// ================================================
// orphan
LoadDataType WF1DA = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1e0: WORD 'WF1E2' codep=0x7394 wordp=0xf1e2
// ================================================
// orphan
LoadDataType WF1E2 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1e8: WORD 'WF1EA' codep=0x7394 wordp=0xf1ea
// ================================================
// orphan
LoadDataType WF1EA = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf1f0: WORD 'WF1F2' codep=0x7394 wordp=0xf1f2
// ================================================
// orphan
LoadDataType WF1F2 = {PLANETIDX, 0x13, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf1f8: WORD 'WF1FA' codep=0x7394 wordp=0xf1fa
// ================================================
// orphan
LoadDataType WF1FA = {PLANETIDX, 0x14, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf200: WORD 'WF202' codep=0x7394 wordp=0xf202
// ================================================
// orphan
LoadDataType WF202 = {PLANETIDX, 0x15, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf208: WORD 'WF20A' codep=0x7394 wordp=0xf20a
// ================================================
// orphan
LoadDataType WF20A = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf210: WORD 'WF212' codep=0x7394 wordp=0xf212
// ================================================
// orphan
LoadDataType WF212 = {REGIONSIDX, 0x02, 0x02, 0x1c, 0x6efc};

// ================================================
// 0xf218: WORD 'WF21A' codep=0x7394 wordp=0xf21a
// ================================================
LoadDataType WF21A = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x6efc};

// ================================================
// 0xf220: WORD 'WF222' codep=0x7394 wordp=0xf222
// ================================================
LoadDataType WF222 = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf228: WORD 'WF22A' codep=0x7394 wordp=0xf22a
// ================================================
// orphan
LoadDataType WF22A = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf230: WORD 'WF232' codep=0x7394 wordp=0xf232
// ================================================
// orphan
LoadDataType WF232 = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf238: WORD 'WF23A' codep=0x7394 wordp=0xf23a
// ================================================
// orphan
LoadDataType WF23A = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf240: WORD 'WF242' codep=0x7394 wordp=0xf242
// ================================================
// orphan
LoadDataType WF242 = {REGIONSIDX, 0x11, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf248: WORD 'WF24A' codep=0x7394 wordp=0xf24a
// ================================================
// orphan
LoadDataType WF24A = {REGIONSIDX, 0x11, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf250: WORD 'WF252' codep=0x7394 wordp=0xf252
// ================================================
// orphan
LoadDataType WF252 = {REGIONSIDX, 0x12, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf258: WORD 'WF25A' codep=0x7394 wordp=0xf25a
// ================================================
// orphan
LoadDataType WF25A = {REGIONSIDX, 0x12, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf260: WORD 'WF262' codep=0x7394 wordp=0xf262
// ================================================
LoadDataType WF262 = {REGIONSIDX, 0x13, 0x08, 0x1c, 0x6efc};

// ================================================
// 0xf268: WORD 'WF26A' codep=0x7394 wordp=0xf26a
// ================================================
LoadDataType WF26A = {REGIONSIDX, 0x1b, 0x01, 0x1c, 0x6efc};

// ================================================
// 0xf270: WORD 'WF272' codep=0x7420 wordp=0xf272
// ================================================
IFieldType WF272 = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xf275: WORD 'WF277' codep=0x224c wordp=0xf277
// ================================================
// orphan

void WF277() // WF277
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xf27d: WORD 'WF27F' codep=0x224c wordp=0xf27f params=0 returns=1
// ================================================
// orphan

void WF27F() // WF27F
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xf289: WORD 'WF28B' codep=0x224c wordp=0xf28b params=0 returns=1
// ================================================
// orphan

void WF28B() // WF28B
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xf293: WORD 'WF295' codep=0x224c wordp=0xf295 params=0 returns=1
// ================================================
// orphan

void WF295() // WF295
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xf29f: WORD 'WF2A1' codep=0x224c wordp=0xf2a1 params=3 returns=1
// ================================================
// orphan

void WF2A1() // WF2A1
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
// 0xf2b5: WORD 'WF2B7' codep=0x224c wordp=0xf2b7
// ================================================
// orphan

void WF2B7() // WF2B7
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
// 0xf2cc: WORD 'WF2CE' codep=0x224c wordp=0xf2ce params=1 returns=2
// ================================================
// orphan

void WF2CE() // WF2CE
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xf2da: WORD 'WF2DC' codep=0x224c wordp=0xf2dc
// ================================================
// orphan

void WF2DC() // WF2DC
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
  WF2CE(); // WF2CE

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
// 0xf372: WORD 'WF374' codep=0x224c wordp=0xf374 params=2 returns=2
// ================================================
// orphan

void WF374() // WF374
{
  unsigned short int a;
  while(1)
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
  }
}


// ================================================
// 0xf39a: WORD 'WF39C' codep=0x224c wordp=0xf39c params=2 returns=2
// ================================================
// orphan

void WF39C() // WF39C
{
  WF374(); // WF374
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xf3a8: WORD 'WF3AA' codep=0x224c wordp=0xf3aa
// ================================================

void WF3AA() // WF3AA
{
  unsigned short int i, imax;
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_WF18A)); // WF18A
  Push(0);
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  Push(0xf1e2); // 'WF1E2'
  IFLD_at_(); // IFLD@
  Push(Pop() + 1); //  1+
  Push(0xf1da); // 'WF1DA'
  IFLD_at_(); // IFLD@
  IOPEN(); // IOPEN

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_WF18A)); // WF18A
    Push(i); // I
    Push(1);
    _star_CREATE(); // *CREATE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf3e0: WORD 'A.DENSIT' codep=0xf2bf wordp=0xf3ed
// ================================================
// 0xf3ed: db 0x00 0x00 0x9c 0xff 0xe2 0xff 0xf1 0xff 0x00 0x00 0x00 0x00 0xe2 0xff '              '

// ================================================
// 0xf3fb: WORD 'PLANET.G' codep=0xf2bf wordp=0xf408
// ================================================
// 0xf408: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xf6 0xff 0xe2 0xff 0xb0 0xff '              '

// ================================================
// 0xf416: WORD 'WF418' codep=0x224c wordp=0xf418
// ================================================

void WF418() // WF418
{
  Push(0);
  Push(0x65e1+WF272.offset); // WF272<IFIELD>
  Store_2(); // !_2
  LoadData(WF222); // from 'REGIONS'
  Push(4);
  Push(0);
  FILL_2(); // FILL_2
  LoadData(WF21A); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_2(); // FILL_2
  LoadData(WF262); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_2(); // FILL_2
  Push(0);
  LoadData(WF26A); // from 'REGIONS'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf43e: WORD 'WF440' codep=0x224c wordp=0xf440
// ================================================

void WF440() // WF440
{
  unsigned short int i, imax;
  Push(Read16(cc_WF18A)); // WF18A
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
    WF418(); // WF418
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf45c: WORD 'WF45E' codep=0x224c wordp=0xf45e
// ================================================

void WF45E() // WF45E
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
// 0xf472: WORD 'WF474' codep=0x224c wordp=0xf474
// ================================================

void WF474() // WF474
{
  WF45E(); // WF45E
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
    WF45E(); // WF45E
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
  LoadData(WF1B2); // from 'BOX'
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c0: WORD 'DIO' codep=0x224c wordp=0xf4c8
// ================================================
// entry

void DIO() // DIO
{
  Push(pp_PLHI); // PLHI
  _099(); // 099
  Push(pp_FSTUN); // FSTUN
  _099(); // 099
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("AUTO SAMPLING DEVICES ACTIVATED");
  DrawTTY(); // .TTY
  WF3AA(); // WF3AA
  WF440(); // WF440
  WF474(); // WF474
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  LoadData(WF1CA); // from 'PLANET'
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

