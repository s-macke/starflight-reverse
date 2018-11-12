// ====== OVERLAY 'DPART-OV' ======
// store offset = 0xef50
// overlay size   = 0x0610

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//          HIBEEP  codep:0x2214 wordp:0xef66 size:0x0002 C-string:'HIBEEP'
//          LOBEEP  codep:0x2214 wordp:0xef6a size:0x0002 C-string:'LOBEEP'
//         PHRASE$  codep:0x744d wordp:0xef6e size:0x0003 C-string:'PHRASE_do_'
//      MESSPREFIX  codep:0x224c wordp:0xef73 size:0x0093 C-string:'MESSPREFIX'
//           WF008  codep:0x224c wordp:0xf008 size:0x0016 C-string:'WF008'
//           WF020  codep:0x224c wordp:0xf020 size:0x0004 C-string:'WF020'
//         .PHRASE  codep:0x224c wordp:0xf026 size:0x003c C-string:'DrawPHRASE'
//        .PHRASES  codep:0x224c wordp:0xf064 size:0x0028 C-string:'DrawPHRASES'
//           WF08E  codep:0x224c wordp:0xf08e size:0x000c C-string:'WF08E'
//           WF09C  codep:0x224c wordp:0xf09c size:0x0038 C-string:'WF09C'
//           WF0D6  codep:0x224c wordp:0xf0d6 size:0x0080 C-string:'WF0D6'
//         ?DELETE  codep:0x224c wordp:0xf158 size:0x000c C-string:'IsDELETE'
//           WF166  codep:0x224c wordp:0xf166 size:0x0044 C-string:'WF166'
//    OTHER-DELETE  codep:0x224c wordp:0xf1ac size:0x0028 C-string:'OTHER_dash_DELETE'
//       .BOMBMESS  codep:0x224c wordp:0xf1d6 size:0x007a C-string:'DrawBOMBMESS'
//      FLASHCOLOR  codep:0x224c wordp:0xf252 size:0x000a C-string:'FLASHCOLOR'
//       EXPLOSION  codep:0x224c wordp:0xf25e size:0x003e C-string:'EXPLOSION'
//        ?CRYSTAL  codep:0x224c wordp:0xf29e size:0x0010 C-string:'IsCRYSTAL'
//        ?ATNEXUS  codep:0x224c wordp:0xf2b0 size:0x0034 C-string:'IsATNEXUS'
//      ORBIT-MASK  codep:0x744d wordp:0xf2e6 size:0x0003 C-string:'ORBIT_dash_MASK'
//      CLRORBMASK  codep:0x224c wordp:0xf2eb size:0x001e C-string:'CLRORBMASK'
//           WF30B  codep:0x224c wordp:0xf30b size:0x0024 C-string:'WF30B'
//           WF331  codep:0x224c wordp:0xf331 size:0x006a C-string:'WF331'
//           WF39D  codep:0x224c wordp:0xf39d size:0x0087 C-string:'WF39D'
//           WF426  codep:0x224c wordp:0xf426 size:0x0008 C-string:'WF426'
//   ?DELETEPLANET  codep:0x224c wordp:0xf430 size:0x0053 C-string:'IsDELETEPLANET'
//          DEPART  codep:0x224c wordp:0xf48e size:0x0000 C-string:'DEPART'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp__i_THROW_dash_AWAY; // 'THROW-AWAY
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
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
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
void NEXT_dash_NODE(); // NEXT-NODE
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

const unsigned short int cc_HIBEEP = 0xef66; // HIBEEP
const unsigned short int cc_LOBEEP = 0xef6a; // LOBEEP


// 0xef62: db 0x5e 0x00 '^ '

// ================================================
// 0xef64: WORD 'HIBEEP' codep=0x2214 wordp=0xef66
// ================================================
// 0xef66: dw 0x03e8

// ================================================
// 0xef68: WORD 'LOBEEP' codep=0x2214 wordp=0xef6a
// ================================================
// 0xef6a: dw 0x0fa0

// ================================================
// 0xef6c: WORD 'PHRASE$' codep=0x744d wordp=0xef6e
// ================================================
IFieldType PHRASE_do_ = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xef71: WORD 'MESSPREFIX' codep=0x224c wordp=0xef73 params=0 returns=4
// ================================================

void MESSPREFIX() // MESSPREFIX
{
  unsigned short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  _gt_2FONT(); // >2FONT

  i = 0;
  imax = 3;
  do // (DO)
  {
    Push(Read16(cc_HIBEEP)); // HIBEEP
    TONE(); // TONE
    BEEPON(); // BEEPON
    GetColor(DK_dash_BLUE);
    StoreCOLOR(); // !COLOR
    BFILL(); // BFILL
    V_gt_DISPLAY(); // V>DISPLAY
    Push(0x00c8);
    MS(); // MS
    GetColor(LT_dash_BLUE);
    StoreCOLOR(); // !COLOR
    BFILL(); // BFILL
    GetColor(BLACK);
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
    Push(Read16(cc_LOBEEP)); // LOBEEP
    TONE(); // TONE
    V_gt_DISPLAY(); // V>DISPLAY
    Push(0x01f4);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf006: WORD 'WF008' codep=0x224c wordp=0xf008 params=0 returns=1
// ================================================

void WF008() // WF008
{
  _gt_DISPLAY(); // >DISPLAY
  Push(4);
  Push(0x00bf);
  POS_dot_(); // POS.
  Push(0x003c);
  Push(0xbe9d); // '@.HYBRID'
  MODULE(); // MODULE
}


// ================================================
// 0xf01e: WORD 'WF020' codep=0x224c wordp=0xf020 params=0 returns=0
// ================================================

void WF020() // WF020
{
  NOP(); // NOP
}


// ================================================
// 0xf024: WORD '.PHRASE' codep=0x224c wordp=0xf026
// ================================================

void DrawPHRASE() // .PHRASE
{
  Push((0x63ef+PHRASE_do_.offset) + 1); // PHRASE$<IFIELD> 1+
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
  Push(0xc216); // 'P>CT'
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
// 0xf062: WORD '.PHRASES' codep=0x224c wordp=0xf064
// ================================================

void DrawPHRASES() // .PHRASES
{
  unsigned short int i, imax;
  CDEPTH(); // CDEPTH
  while(1)
  {
    DrawPHRASE(); // .PHRASE
    IsCHILD(); // ?CHILD
    if (Pop() == 0) break;

    IOPEN(); // IOPEN
  }
  CDEPTH(); // CDEPTH
  SWAP(); // SWAP
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf08c: WORD 'WF08E' codep=0x224c wordp=0xf08e
// ================================================

void WF08E() // WF08E
{
  CTINIT(); // CTINIT
  Push(pp__ro_AWARD_rc_); // (AWARD)
  Get_gt_C_plus_S(); // @>C+S
  DrawPHRASES(); // .PHRASES
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf09a: WORD 'WF09C' codep=0x224c wordp=0xf09c
// ================================================

void WF09C() // WF09C
{
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
  MESSPREFIX(); // MESSPREFIX
  WF008(); // WF008
  Push(0);
  SONG(); // SONG
  WF08E(); // WF08E
  WF020(); // WF020
  Push(0xc52d); // 'OVINIT-BALANCE'
  MODULE(); // MODULE
  Push(0xa120); Push(0x0007);
  Push(0xc5ca); // 'T+BALANCE'
  MODULE(); // MODULE
  Push(3);
  Push(0xc542); // 'OVTRANSACT'
  MODULE(); // MODULE
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(pp_IsWIN); // ?WIN
  Store_3(); // !_3
}


// ================================================
// 0xf0d4: WORD 'WF0D6' codep=0x224c wordp=0xf0d6 params=0 returns=1
// ================================================

void WF0D6() // WF0D6
{
  unsigned short int a;
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    a = Pop(); // >R
    Push(a==0x0044?1:0); // I 0x0044 =
    Push(a==0x001a?1:0); // I 0x001a =
    Push(a==0x0029?1:0); // I 0x0029 =
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(3);
      _st_(); // <
      Push(Pop() & Pop()); // AND
    }
    Push(a==0x001c?1:0); // I 0x001c =
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(0x0010);
      Push(0x0033);
      WITHIN(); // WITHIN
      Push(Pop() & Pop()); // AND
    }
    Push(a==0x001c?1:0); // I 0x001c =
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(Pop()==3?1:0); //  3 =
      Push(Read16(pp_IsWIN)); // ?WIN @
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
// 0xf156: WORD '?DELETE' codep=0x224c wordp=0xf158 params=1 returns=0
// ================================================

void IsDELETE() // ?DELETE
{
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
    IPREV(); // IPREV
  }
  INEXT(); // INEXT
}


// ================================================
// 0xf164: WORD 'WF166' codep=0x224c wordp=0xf166
// ================================================

void WF166() // WF166
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
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

      WF0D6(); // WF0D6
      IsDELETE(); // ?DELETE
    }
    WF0D6(); // WF0D6
    if (Pop() != 0)
    {
      IDELETE(); // IDELETE
    }
    IsNULL(); // ?NULL
    ICLOSE(); // ICLOSE
    IsDELETE(); // ?DELETE
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1aa: WORD 'OTHER-DELETE' codep=0x224c wordp=0xf1ac
// ================================================

void OTHER_dash_DELETE() // OTHER-DELETE
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
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
// 0xf1d4: WORD '.BOMBMESS' codep=0x224c wordp=0xf1d6 params=0 returns=2
// ================================================

void DrawBOMBMESS() // .BOMBMESS
{
  unsigned short int i, imax;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN, WE ARE RECEIVING A ");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("COUNTDOWN TRANSMISSION FROM ");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("THE BLACK EGG... ");
  DrawTTY(); // .TTY

  i = 5;
  imax = 1;
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
// 0xf250: WORD 'FLASHCOLOR' codep=0x224c wordp=0xf252 params=1 returns=0
// ================================================

void FLASHCOLOR() // FLASHCOLOR
{
  StoreCOLOR(); // !COLOR
  _gt_MAINVIEW(); // >MAINVIEW
  BFILL(); // BFILL
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf25c: WORD 'EXPLOSION' codep=0x224c wordp=0xf25e params=0 returns=9
// ================================================

void EXPLOSION() // EXPLOSION
{
  unsigned short int i, imax, j, jmax;
  SET_STR_AS_PARAM("BOOM!");
  DrawTTY(); // .TTY

  i = 0;
  imax = 3 * Read16(cc_MPS); // 3 MPS *
  do // (DO)
  {
    GetColor(BLACK);
    GetColor(ORANGE);
    GetColor(RED);
    GetColor(ORANGE);
    GetColor(YELLOW);
    GetColor(ORANGE);
    GetColor(YELLOW);
    GetColor(WHITE);
    GetColor(YELLOW);
    GetColor(WHITE);

    j = 0;
    jmax = 0x000a;
    do // (DO)
    {
      FLASHCOLOR(); // FLASHCOLOR
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  _gt_DISPLAY(); // >DISPLAY
}


// ================================================
// 0xf29c: WORD '?CRYSTAL' codep=0x224c wordp=0xf29e params=0 returns=1
// ================================================

void IsCRYSTAL() // ?CRYSTAL
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  Push(Pop()==0x0017?1:0); //  0x0017 =
}


// ================================================
// 0xf2ae: WORD '?ATNEXUS' codep=0x224c wordp=0xf2b0 params=0 returns=1
// ================================================

void IsATNEXUS() // ?ATNEXUS
{
  Push(pp__ro_BOMB_rc_); // (BOMB)
  Get_gt_C_plus_S(); // @>C+S
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    Push(Read16(0x63ef+INST_dash_X.offset) - 0x05a0); // INST-X<IFIELD> @ 0x05a0 -
    ABS(); // ABS
    Push(Read16(0x63ef+INST_dash_Y.offset) - 0x02da); // INST-Y<IFIELD> @ 0x02da -
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
// 0xf2e4: WORD 'ORBIT-MASK' codep=0x744d wordp=0xf2e6
// ================================================
IFieldType ORBIT_dash_MASK = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xf2e9: WORD 'CLRORBMASK' codep=0x224c wordp=0xf2eb params=0 returns=0
// ================================================

void CLRORBMASK() // CLRORBMASK
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  BIT(); // BIT
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
  Push(Pop() + (Read16(0x63ef+ORBIT_dash_MASK.offset)&0xFF)); //  ORBIT-MASK<IFIELD> C@ XOR
  Push(0x63ef+ORBIT_dash_MASK.offset); // ORBIT-MASK<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf309: WORD 'WF30B' codep=0x224c wordp=0xf30b
// ================================================

void WF30B() // WF30B
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
// 0xf32f: WORD 'WF331' codep=0x224c wordp=0xf331
// ================================================

void WF331() // WF331
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN, I FELT A TREMOR AS IF");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("MILLIONS OF VOICES CRIED OUT AND WERE");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("SUDDENLY SILENCED.");
  DrawTTY(); // .TTY
  WF30B(); // WF30B
}


// ================================================
// 0xf39b: WORD 'WF39D' codep=0x224c wordp=0xf39d
// ================================================

void WF39D() // WF39D
{
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  SUBROOT(); // SUBROOT
  while(1)
  {
    NEXT_dash_NODE(); // NEXT-NODE
    CI(); // CI
    Push2Words("*SECS");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x003d?1:0); //  0x003d =
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==9?1:0); //  9 =
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(0);
      Push(0x63ef+PHRASE_do_.offset); // PHRASE$<IFIELD>
      C_ex_(); // C!
    }
  }
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN, ALL ALIEN COMMUNICATIONS IN");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("THE LOCAL VICINITY HAVE CEASED!");
  DrawTTY(); // .TTY
  WF30B(); // WF30B
}


// ================================================
// 0xf424: WORD 'WF426' codep=0x224c wordp=0xf426 params=2 returns=1
// ================================================

void WF426() // WF426
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
}


// ================================================
// 0xf42e: WORD '?DELETEPLANET' codep=0x224c wordp=0xf430
// ================================================

void IsDELETEPLANET() // ?DELETEPLANET
{
  Push2Words("*SPHEXI");
  WF426(); // WF426
  if (Pop() != 0)
  {
    Push(pp_IsSPHEXI); // ?SPHEXI
    OFF(); // OFF
  }
  Push2Words("*ELAN");
  WF426(); // WF426
  if (Pop() != 0)
  {
    Push(pp_IsELAN); // ?ELAN
    OFF(); // OFF
    WF331(); // WF331
  }
  Push2Words("*BRAIN");
  WF426(); // WF426
  if (Pop() != 0)
  {
    WF39D(); // WF39D
  }
  CLRORBMASK(); // CLRORBMASK
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
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
// 0xf483: WORD 'DEPART' codep=0x224c wordp=0xf48e params=0 returns=0
// ================================================
// entry

void DEPART() // DEPART
{
  Push(pp_IsCRITIC); // ?CRITIC
  OFF(); // OFF
  Push(0x3a48); // 'NOP'
  Push(pp__i_THROW_dash_AWAY); // 'THROW-AWAY
  Store_3(); // !_3
  Push(Read16(pp_IsLANDED)); // ?LANDED @
  if (Pop() != 0)
  {
    Push(Read16(pp_IsBOMB)); // ?BOMB @
    if (Pop() != 0)
    {
      DrawBOMBMESS(); // .BOMBMESS
      EXPLOSION(); // EXPLOSION
      IsCRYSTAL(); // ?CRYSTAL
      if (Pop() != 0)
      {
        IsATNEXUS(); // ?ATNEXUS
        if (Pop() != 0)
        {
          IsDELETEPLANET(); // ?DELETEPLANET
          WF09C(); // WF09C
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
          OTHER_dash_DELETE(); // OTHER-DELETE
        }
      } else
      {
        IsDELETEPLANET(); // ?DELETEPLANET
      }
      Push2Words("NULL");
      Push(pp__ro_BOMB_rc_); // (BOMB)
      _1_dot_5_ex_(); // 1.5!
      Push(pp_IsBOMB); // ?BOMB
      OFF(); // OFF
    } else
    {
      WF166(); // WF166
      OTHER_dash_DELETE(); // OTHER-DELETE
    }
  }
  Push(-1);
  Push(pp_PLHI); // PLHI
  Store_3(); // !_3
  Push(pp_IsLANDED); // ?LANDED
  OFF(); // OFF
}

// 0xf525: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x31 0x30 0x38 0x36 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'DPART-VOC_______________________________________1086        '

