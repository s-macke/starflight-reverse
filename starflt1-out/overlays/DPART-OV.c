// ====== OVERLAY 'DPART-OV' ======
// store offset = 0xef50
// overlay size   = 0x0610

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xef66  codep:0x2214 parp:0xef66 size:0x0002 C-string:'UNK_0xef66'
//      UNK_0xef6a  codep:0x2214 parp:0xef6a size:0x0002 C-string:'UNK_0xef6a'
//      UNK_0xef6e  codep:0x744d parp:0xef6e size:0x0003 C-string:'UNK_0xef6e'
//      UNK_0xef73  codep:0x224c parp:0xef73 size:0x0093 C-string:'UNK_0xef73'
//      UNK_0xf008  codep:0x224c parp:0xf008 size:0x0016 C-string:'UNK_0xf008'
//      UNK_0xf020  codep:0x224c parp:0xf020 size:0x0004 C-string:'UNK_0xf020'
//      UNK_0xf026  codep:0x224c parp:0xf026 size:0x003c C-string:'UNK_0xf026'
//      UNK_0xf064  codep:0x224c parp:0xf064 size:0x0028 C-string:'UNK_0xf064'
//      UNK_0xf08e  codep:0x224c parp:0xf08e size:0x000c C-string:'UNK_0xf08e'
//      UNK_0xf09c  codep:0x224c parp:0xf09c size:0x0038 C-string:'UNK_0xf09c'
//      UNK_0xf0d6  codep:0x224c parp:0xf0d6 size:0x0080 C-string:'UNK_0xf0d6'
//      UNK_0xf158  codep:0x224c parp:0xf158 size:0x000c C-string:'UNK_0xf158'
//      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0044 C-string:'UNK_0xf166'
//      UNK_0xf1ac  codep:0x224c parp:0xf1ac size:0x0028 C-string:'UNK_0xf1ac'
//      UNK_0xf1d6  codep:0x224c parp:0xf1d6 size:0x007a C-string:'UNK_0xf1d6'
//      UNK_0xf252  codep:0x224c parp:0xf252 size:0x000a C-string:'UNK_0xf252'
//      UNK_0xf25e  codep:0x224c parp:0xf25e size:0x003e C-string:'UNK_0xf25e'
//      UNK_0xf29e  codep:0x224c parp:0xf29e size:0x0010 C-string:'UNK_0xf29e'
//      UNK_0xf2b0  codep:0x224c parp:0xf2b0 size:0x0034 C-string:'UNK_0xf2b0'
//      UNK_0xf2e6  codep:0x744d parp:0xf2e6 size:0x0003 C-string:'UNK_0xf2e6'
//      UNK_0xf2eb  codep:0x224c parp:0xf2eb size:0x001e C-string:'UNK_0xf2eb'
//      UNK_0xf30b  codep:0x224c parp:0xf30b size:0x0024 C-string:'UNK_0xf30b'
//      UNK_0xf331  codep:0x224c parp:0xf331 size:0x006a C-string:'UNK_0xf331'
//      UNK_0xf39d  codep:0x224c parp:0xf39d size:0x0087 C-string:'UNK_0xf39d'
//      UNK_0xf426  codep:0x224c parp:0xf426 size:0x0008 C-string:'UNK_0xf426'
//      UNK_0xf430  codep:0x224c parp:0xf430 size:0x0053 C-string:'UNK_0xf430'
//          DEPART  codep:0x224c parp:0xf48e size:0x0000 C-string:'DEPART'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
extern const unsigned short int pp_IsBOMB; // ?BOMB
extern const unsigned short int pp_IsLANDED; // ?LANDED
extern const unsigned short int pp_IsELAN; // ?ELAN
extern const unsigned short int pp_IsSPHEXI; // ?SPHEXI
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_WMSG; // WMSG
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_TIME_dash_PASSING; // TIME-PASSING
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__ro_AWARD_rc_; // (AWARD)
extern const unsigned short int pp__ro_BOMB_rc_; // (BOMB)
extern const unsigned short int pp_SUPER_dash_BOX; // SUPER-BOX
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_LSCAN; // LSCAN
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color LT_dash_BLUE; // LT-BLUE
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void ABS(); // ABS
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void BIT(); // BIT
void C_ex_(); // C!
void Store_3(); // !_3
void _1_dot_5_ex_(); // 1.5!
void ON_3(); // ON_3
void OFF(); // OFF
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
void IsCHILD(); // ?CHILD
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void StoreCOLOR(); // !COLOR
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void BEEPON(); // BEEPON
void SONG(); // SONG
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void SUBROOT(); // SUBROOT
void NEXT_dash_NO(); // NEXT-NO
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void CDEPTH(); // CDEPTH
void BFILL(); // BFILL
void V_gt_DISPLAY(); // V>DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xef66 = 0xef66; // UNK_0xef66
const unsigned short int cc_UNK_0xef6a = 0xef6a; // UNK_0xef6a


// 0xef62: db 0x5e 0x00 '^ '

// ================================================
// 0xef64: WORD 'UNK_0xef66' codep=0x2214 parp=0xef66
// ================================================
// 0xef66: dw 0x03e8

// ================================================
// 0xef68: WORD 'UNK_0xef6a' codep=0x2214 parp=0xef6a
// ================================================
// 0xef6a: dw 0x0fa0

// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x744d parp=0xef6e
// ================================================
IFieldType UNK_0xef6e = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xef71: WORD 'UNK_0xef73' codep=0x224c parp=0xef73 params=0 returns=4
// ================================================

void UNK_0xef73() // UNK_0xef73
{
  unsigned short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  _gt_2FONT(); // >2FONT
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_UNK_0xef66)); // UNK_0xef66
    TONE(); // TONE
    BEEPON(); // BEEPON
    SetColor(DK_dash_BLUE);
    StoreCOLOR(); // !COLOR
    BFILL(); // BFILL
    V_gt_DISPLAY(); // V>DISPLAY
    Push(0x00c8);
    MS(); // MS
    SetColor(LT_dash_BLUE);
    StoreCOLOR(); // !COLOR
    BFILL(); // BFILL
    SetColor(BLACK);
    StoreCOLOR(); // !COLOR
    Push(0x000c);
    Push(0x0064);
    POS_dot_(); // POS.
    SET_STR_AS_PARAM("INCOMING");
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0018);
    Push(0x0050);
    POS_dot_(); // POS.
    SET_STR_AS_PARAM("HIGH");
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x000f);
    Push(0x003c);
    POS_dot_(); // POS.
    SET_STR_AS_PARAM("PRIORITY");
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0011);
    Push(0x0028);
    POS_dot_(); // POS.
    SET_STR_AS_PARAM("MESSAGE");
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Read16(cc_UNK_0xef6a)); // UNK_0xef6a
    TONE(); // TONE
    V_gt_DISPLAY(); // V>DISPLAY
    Push(0x01f4);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf006: WORD 'UNK_0xf008' codep=0x224c parp=0xf008 params=0 returns=1
// ================================================

void UNK_0xf008() // UNK_0xf008
{
  _gt_DISPLAY(); // >DISPLAY
  Push(4);
  Push(0x00bf);
  POS_dot_(); // POS.
  Push(0x003c);
  Push(0xbe9d); // probable '@.HYBRID'
  MODULE(); // MODULE
}


// ================================================
// 0xf01e: WORD 'UNK_0xf020' codep=0x224c parp=0xf020 params=0 returns=0
// ================================================

void UNK_0xf020() // UNK_0xf020
{
  NOP(); // NOP
}


// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  Push(0x63ef+PHRASE_do_.offset); // IFIELD
  Push(Pop()+1); // 1+
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  SetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
  Push(0xc216); // probable 'P>CT'
  MODULE(); // MODULE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x4e20); Push(0x0000);
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf062: WORD 'UNK_0xf064' codep=0x224c parp=0xf064
// ================================================

void UNK_0xf064() // UNK_0xf064
{
  unsigned short int i, imax;
  CDEPTH(); // CDEPTH

  label2:
  UNK_0xf026(); // UNK_0xf026
  IsCHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  goto label2;

  label1:
  CDEPTH(); // CDEPTH
  SWAP(); // SWAP
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf08c: WORD 'UNK_0xf08e' codep=0x224c parp=0xf08e
// ================================================

void UNK_0xf08e() // UNK_0xf08e
{
  CTINIT(); // CTINIT
  Push(pp__ro_AWARD_rc_); // (AWARD)
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xf064(); // UNK_0xf064
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf09a: WORD 'UNK_0xf09c' codep=0x224c parp=0xf09c
// ================================================

void UNK_0xf09c() // UNK_0xf09c
{
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
  UNK_0xef73(); // UNK_0xef73
  UNK_0xf008(); // UNK_0xf008
  Push(0);
  SONG(); // SONG
  UNK_0xf08e(); // UNK_0xf08e
  UNK_0xf020(); // UNK_0xf020
  Push(0xc52d); // probable 'OVINIT-BALANCE'
  MODULE(); // MODULE
  Push(0xa120); Push(0x0007);
  Push(0xc5ca); // probable 'T+BALANCE'
  MODULE(); // MODULE
  Push(3);
  Push(0xc542); // probable 'OVTRANSACT'
  MODULE(); // MODULE
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp_IsWIN); // ?WIN
  Store_3(); // !_3
}


// ================================================
// 0xf0d4: WORD 'UNK_0xf0d6' codep=0x224c parp=0xf0d6 params=0 returns=1
// ================================================

void UNK_0xf0d6() // UNK_0xf0d6
{
  unsigned short int a;
  IsNULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    a = Pop(); // >R
    Push(a); // I
    Push(0x0044);
    Push((Pop()==Pop())?1:0); // =
    Push(a); // I
    Push(0x001a);
    Push((Pop()==Pop())?1:0); // =
    Push(a); // I
    Push(0x0029);
    Push((Pop()==Pop())?1:0); // =
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(3);
      _st_(); // <
      Push(Pop() & Pop()); // AND
    }
    Push(a); // I
    Push(0x001c);
    Push((Pop()==Pop())?1:0); // =
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(0x0010);
      Push(0x0033);
      WITHIN(); // WITHIN
      Push(Pop() & Pop()); // AND
    }
    Push(a); // I
    Push(0x001c);
    Push((Pop()==Pop())?1:0); // =
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(3);
      Push((Pop()==Pop())?1:0); // =
      Push(pp_IsWIN); // ?WIN
      Push(Read16(Pop())); // @
      _0_gt_(); // 0>
      Push(Pop() & Pop()); // AND
      Push(Pop() & Pop()); // AND
    }
    Push(Pop() | Pop()); // OR
    Push(Pop() | Pop()); // OR
    Push(Pop() | Pop()); // OR
    Push(Pop() | Pop()); // OR
    Push(a); // R>
    Pop(); // DROP
    return;
  }
  Push(0);
}


// ================================================
// 0xf156: WORD 'UNK_0xf158' codep=0x224c parp=0xf158 params=1 returns=0
// ================================================

void UNK_0xf158() // UNK_0xf158
{
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
    IPREV(); // IPREV
  }
  INEXT(); // INEXT
}


// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166 params=3 returns=0
// ================================================

void UNK_0xf166() // UNK_0xf166
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label5:
  Push(0x000b);
  Push(0x000b);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label3:
  IsLAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  IsNULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf0d6(); // UNK_0xf0d6
  UNK_0xf158(); // UNK_0xf158
  goto label3;

  label2:
  UNK_0xf0d6(); // UNK_0xf0d6
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  IsNULL(); // ?NULL
  ICLOSE(); // ICLOSE
  UNK_0xf158(); // UNK_0xf158
  goto label5;

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x224c parp=0xf1ac params=3 returns=0
// ================================================

void UNK_0xf1ac() // UNK_0xf1ac
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  Get_gt_C_plus_S(); // @>C+S
  IDELETE(); // IDELETE
  IFIRST(); // IFIRST

  label2:
  Push(0x0043);
  Push(0);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE
  goto label2;

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1d4: WORD 'UNK_0xf1d6' codep=0x224c parp=0xf1d6 params=0 returns=2
// ================================================

void UNK_0xf1d6() // UNK_0xf1d6
{
  unsigned short int i, imax;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN, WE ARE RECEIVING A ");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("COUNTDOWN TRANSMISSION FROM ");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("THE BLACK EGG... ");
  DrawTTY(); // .TTY
  Push(1);
  Push(5);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(0);
    _st__n_(); // <#
    _n_S(); // #S
    _n__gt_(); // #>
    DrawTTY(); // .TTY
    Push(0x03e8);
    MS(); // MS
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf250: WORD 'UNK_0xf252' codep=0x224c parp=0xf252 params=1 returns=0
// ================================================

void UNK_0xf252() // UNK_0xf252
{
  StoreCOLOR(); // !COLOR
  _gt_MAINVIEW(); // >MAINVIEW
  BFILL(); // BFILL
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf25c: WORD 'UNK_0xf25e' codep=0x224c parp=0xf25e params=0 returns=9
// ================================================

void UNK_0xf25e() // UNK_0xf25e
{
  unsigned short int i, imax, j, jmax;
  SET_STR_AS_PARAM("BOOM!");
  DrawTTY(); // .TTY
  Push(3);
  Push(Read16(cc_MPS)); // MPS
  Push(Pop() * Pop()); // *
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    SetColor(BLACK);
    SetColor(ORANGE);
    SetColor(RED);
    SetColor(ORANGE);
    SetColor(YELLOW);
    SetColor(ORANGE);
    SetColor(YELLOW);
    SetColor(WHITE);
    SetColor(YELLOW);
    SetColor(WHITE);
    Push(0x000a);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      UNK_0xf252(); // UNK_0xf252
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  _gt_DISPLAY(); // >DISPLAY
}


// ================================================
// 0xf29c: WORD 'UNK_0xf29e' codep=0x224c parp=0xf29e params=0 returns=1
// ================================================

void UNK_0xf29e() // UNK_0xf29e
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  Push(0x0017);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf2ae: WORD 'UNK_0xf2b0' codep=0x224c parp=0xf2b0 params=0 returns=1
// ================================================

void UNK_0xf2b0() // UNK_0xf2b0
{
  Push(pp__ro_BOMB_rc_); // (BOMB)
  Get_gt_C_plus_S(); // @>C+S
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    Push(0x63ef+INST_dash_X.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(0x05a0);
    _dash_(); // -
    ABS(); // ABS
    Push(0x63ef+INST_dash_Y.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(0x02da);
    _dash_(); // -
    ABS(); // ABS
    Push(Pop() + Pop()); // +
    Push(0x000a);
    _st_(); // <
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e4: WORD 'UNK_0xf2e6' codep=0x744d parp=0xf2e6
// ================================================
IFieldType UNK_0xf2e6 = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xf2e9: WORD 'UNK_0xf2eb' codep=0x224c parp=0xf2eb params=0 returns=0
// ================================================

void UNK_0xf2eb() // UNK_0xf2eb
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  BIT(); // BIT
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xf2e6.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() ^ Pop()); // XOR
  Push(0x63ef+UNK_0xf2e6.offset); // IFIELD
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf309: WORD 'UNK_0xf30b' codep=0x224c parp=0xf30b
// ================================================

void UNK_0xf30b() // UNK_0xf30b
{
  _i_KEY(); // 'KEY
  Pop(); // DROP
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x1770); Push(0x0000);
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331() // UNK_0xf331
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN, I FELT A TREMOR AS IF");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("MILLIONS OF VOICES CRIED OUT AND WERE");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("SUDDENLY SILENCED.");
  DrawTTY(); // .TTY
  UNK_0xf30b(); // UNK_0xf30b
}


// ================================================
// 0xf39b: WORD 'UNK_0xf39d' codep=0x224c parp=0xf39d
// ================================================

void UNK_0xf39d() // UNK_0xf39d
{
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  SUBROOT(); // SUBROOT

  label3:
  NEXT_dash_NO(); // NEXT-NO
  CI(); // CI
  Push2Words("*SECS");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(0x003d);
  Push((Pop()==Pop())?1:0); // =
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(9);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0);
    Push(0x63ef+UNK_0xef6e.offset); // IFIELD
    C_ex_(); // C!
  }
  goto label3;

  label1:
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN, ALL ALIEN COMMUNICATIONS IN");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("THE LOCAL VICINITY HAVE CEASED!");
  DrawTTY(); // .TTY
  UNK_0xf30b(); // UNK_0xf30b
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x224c parp=0xf426 params=2 returns=1
// ================================================

void UNK_0xf426() // UNK_0xf426
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430 params=0 returns=0
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  Push2Words("*SPHEXI");
  UNK_0xf426(); // UNK_0xf426
  if (Pop() != 0)
  {
    Push(pp_IsSPHEXI); // ?SPHEXI
    OFF(); // OFF
  }
  Push2Words("*ELAN");
  UNK_0xf426(); // UNK_0xf426
  if (Pop() != 0)
  {
    Push(pp_IsELAN); // ?ELAN
    OFF(); // OFF
    UNK_0xf331(); // UNK_0xf331
  }
  Push2Words("*BRAIN");
  UNK_0xf426(); // UNK_0xf426
  if (Pop() != 0)
  {
    UNK_0xf39d(); // UNK_0xf39d
  }
  UNK_0xf2eb(); // UNK_0xf2eb
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("PLANET OBLITERATED");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf483: WORD 'DEPART' codep=0x224c parp=0xf48e params=0 returns=0
// ================================================
// entry

void DEPART() // DEPART
{
  Push(pp_IsCRITIC); // ?CRITIC
  OFF(); // OFF
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_THROW_dash_); // 'THROW-
  Store_3(); // !_3
  Push(pp_IsLANDED); // ?LANDED
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(pp_IsBOMB); // ?BOMB
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0xf1d6(); // UNK_0xf1d6
      UNK_0xf25e(); // UNK_0xf25e
      UNK_0xf29e(); // UNK_0xf29e
      if (Pop() != 0)
      {
        UNK_0xf2b0(); // UNK_0xf2b0
        if (Pop() != 0)
        {
          UNK_0xf430(); // UNK_0xf430
          UNK_0xf09c(); // UNK_0xf09c
          Push(pp_WMSG); // WMSG
          ON_3(); // ON_3
        } else
        {
          CTINIT(); // CTINIT
          SET_STR_AS_PARAM("CRYSTAL PLANET DAMAGED");
          DrawTTY(); // .TTY
          SET_STR_AS_PARAM("BUT NOT DESTROYED");
          DrawTTY(); // .TTY
          Push(0x1388);
          MS(); // MS
          UNK_0xf1ac(); // UNK_0xf1ac
        }
      } else
      {
        UNK_0xf430(); // UNK_0xf430
      }
      Push2Words("NULL");
      Push(pp__ro_BOMB_rc_); // (BOMB)
      _1_dot_5_ex_(); // 1.5!
      Push(pp_IsBOMB); // ?BOMB
      OFF(); // OFF
    } else
    {
      UNK_0xf166(); // UNK_0xf166
      UNK_0xf1ac(); // UNK_0xf1ac
    }
  }
  Push(-1);
  Push(pp_PLHI); // PLHI
  Store_3(); // !_3
  Push(pp_IsLANDED); // ?LANDED
  OFF(); // OFF
}

// 0xf525: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x31 0x30 0x38 0x36 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'DPART-VOC_______________________________________1086        '

