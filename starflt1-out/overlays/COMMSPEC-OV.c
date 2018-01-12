// ====== OVERLAY 'COMMSPEC-OV' ======
// store offset = 0xea30
// overlay size   = 0x0b30

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xea46  codep:0x224c parp:0xea46 size:0x0008 C-string:'UNK_0xea46'
//      UNK_0xea50  codep:0x224c parp:0xea50 size:0x001e C-string:'UNK_0xea50'
//      UNK_0xea70  codep:0x224c parp:0xea70 size:0x0008 C-string:'UNK_0xea70'
//      UNK_0xea7a  codep:0x224c parp:0xea7a size:0x0008 C-string:'UNK_0xea7a'
//      UNK_0xea84  codep:0x224c parp:0xea84 size:0x0008 C-string:'UNK_0xea84'
//      UNK_0xea8e  codep:0x224c parp:0xea8e size:0x0010 C-string:'UNK_0xea8e'
//      UNK_0xeaa0  codep:0x744d parp:0xeaa0 size:0x0003 C-string:'UNK_0xeaa0'
//      UNK_0xeaa5  codep:0x744d parp:0xeaa5 size:0x0003 C-string:'UNK_0xeaa5'
//      UNK_0xeaaa  codep:0x744d parp:0xeaaa size:0x0003 C-string:'UNK_0xeaaa'
//      UNK_0xeaaf  codep:0x3b68 parp:0xeaaf size:0x0004 C-string:'UNK_0xeaaf'
//      UNK_0xeab5  codep:0x3b68 parp:0xeab5 size:0x0004 C-string:'UNK_0xeab5'
//      UNK_0xeabb  codep:0x3b68 parp:0xeabb size:0x0004 C-string:'UNK_0xeabb'
//      UNK_0xeac1  codep:0x224c parp:0xeac1 size:0x0019 C-string:'UNK_0xeac1'
//      UNK_0xeadc  codep:0x224c parp:0xeadc size:0x0010 C-string:'UNK_0xeadc'
//      UNK_0xeaee  codep:0x224c parp:0xeaee size:0x004f C-string:'UNK_0xeaee'
//      UNK_0xeb3f  codep:0x224c parp:0xeb3f size:0x003a C-string:'UNK_0xeb3f'
//      UNK_0xeb7b  codep:0x224c parp:0xeb7b size:0x000e C-string:'UNK_0xeb7b'
//          ?VOWEL  codep:0x4a4f parp:0xeb94 size:0x0018 C-string:'IsVOWEL'
//      UNK_0xebae  codep:0x224c parp:0xebae size:0x0006 C-string:'UNK_0xebae'
//      UNK_0xebb6  codep:0x224c parp:0xebb6 size:0x000c C-string:'UNK_0xebb6'
//      UNK_0xebc4  codep:0x224c parp:0xebc4 size:0x0008 C-string:'UNK_0xebc4'
//      UNK_0xebce  codep:0x1d29 parp:0xebce size:0x0002 C-string:'UNK_0xebce'
//      UNK_0xebd2  codep:0x224c parp:0xebd2 size:0x0012 C-string:'UNK_0xebd2'
//      UNK_0xebe6  codep:0x224c parp:0xebe6 size:0x003c C-string:'UNK_0xebe6'
//      UNK_0xec24  codep:0x224c parp:0xec24 size:0x0010 C-string:'UNK_0xec24'
//      UNK_0xec36  codep:0x224c parp:0xec36 size:0x0016 C-string:'UNK_0xec36'
//      UNK_0xec4e  codep:0x224c parp:0xec4e size:0x001e C-string:'UNK_0xec4e'
//      UNK_0xec6e  codep:0x224c parp:0xec6e size:0x001e C-string:'UNK_0xec6e'
//      UNK_0xec8e  codep:0x224c parp:0xec8e size:0x002a C-string:'UNK_0xec8e'
//      UNK_0xecba  codep:0x224c parp:0xecba size:0x000e C-string:'UNK_0xecba'
//      UNK_0xecca  codep:0x1d29 parp:0xecca size:0x0002 C-string:'UNK_0xecca'
//      UNK_0xecce  codep:0x224c parp:0xecce size:0x00d7 C-string:'UNK_0xecce'
//      UNK_0xeda7  codep:0x224c parp:0xeda7 size:0x0032 C-string:'UNK_0xeda7'
//      UNK_0xeddb  codep:0x224c parp:0xeddb size:0x003a C-string:'UNK_0xeddb'
//      UNK_0xee17  codep:0x224c parp:0xee17 size:0x0026 C-string:'UNK_0xee17'
//      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x0032 C-string:'UNK_0xee3f'
//      UNK_0xee73  codep:0x224c parp:0xee73 size:0x003a C-string:'UNK_0xee73'
//            XY/N  codep:0x224c parp:0xeeb6 size:0x006e C-string:'XY_slash_N'
//      UNK_0xef26  codep:0x1d29 parp:0xef26 size:0x0002 C-string:'UNK_0xef26'
//      UNK_0xef2a  codep:0x224c parp:0xef2a size:0x000a C-string:'UNK_0xef2a'
//      UNK_0xef36  codep:0x224c parp:0xef36 size:0x007c C-string:'UNK_0xef36'
//      UNK_0xefb4  codep:0x224c parp:0xefb4 size:0x000a C-string:'UNK_0xefb4'
//      UNK_0xefc0  codep:0x224c parp:0xefc0 size:0x0040 C-string:'UNK_0xefc0'
//      UNK_0xf002  codep:0x1d29 parp:0xf002 size:0x0002 C-string:'UNK_0xf002'
//      UNK_0xf006  codep:0x224c parp:0xf006 size:0x000a C-string:'UNK_0xf006'
//      UNK_0xf012  codep:0x224c parp:0xf012 size:0x0076 C-string:'UNK_0xf012'
//      UNK_0xf08a  codep:0x2214 parp:0xf08a size:0x0002 C-string:'UNK_0xf08a'
//      UNK_0xf08e  codep:0x224c parp:0xf08e size:0x000a C-string:'UNK_0xf08e'
//      UNK_0xf09a  codep:0x224c parp:0xf09a size:0x000a C-string:'UNK_0xf09a'
//      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x007c C-string:'UNK_0xf0a6'
//      UNK_0xf124  codep:0x224c parp:0xf124 size:0x000a C-string:'UNK_0xf124'
//      UNK_0xf130  codep:0x224c parp:0xf130 size:0x002a C-string:'UNK_0xf130'
//      UNK_0xf15c  codep:0x224c parp:0xf15c size:0x000a C-string:'UNK_0xf15c'
//      UNK_0xf168  codep:0x224c parp:0xf168 size:0x000a C-string:'UNK_0xf168'
//      UNK_0xf174  codep:0x224c parp:0xf174 size:0x0050 C-string:'UNK_0xf174'
//      UNK_0xf1c6  codep:0x224c parp:0xf1c6 size:0x000a C-string:'UNK_0xf1c6'
//      UNK_0xf1d2  codep:0x224c parp:0xf1d2 size:0x007a C-string:'UNK_0xf1d2'
//      UNK_0xf24e  codep:0x224c parp:0xf24e size:0x000a C-string:'UNK_0xf24e'
//      UNK_0xf25a  codep:0x224c parp:0xf25a size:0x004e C-string:'UNK_0xf25a'
//      UNK_0xf2aa  codep:0x224c parp:0xf2aa size:0x0066 C-string:'UNK_0xf2aa'
//      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0082 C-string:'UNK_0xf312'
//      UNK_0xf396  codep:0x224c parp:0xf396 size:0x000a C-string:'UNK_0xf396'
//      UNK_0xf3a2  codep:0x224c parp:0xf3a2 size:0x0058 C-string:'UNK_0xf3a2'
//      UNK_0xf3fc  codep:0x224c parp:0xf3fc size:0x000a C-string:'UNK_0xf3fc'
//      UNK_0xf408  codep:0x224c parp:0xf408 size:0x000a C-string:'UNK_0xf408'
//      UNK_0xf414  codep:0x224c parp:0xf414 size:0x003e C-string:'UNK_0xf414'
//      UNK_0xf454  codep:0x1d29 parp:0xf454 size:0x0009 C-string:'UNK_0xf454'
//      UNK_0xf45f  codep:0x1d29 parp:0xf45f size:0x000b C-string:'UNK_0xf45f'
//      UNK_0xf46c  codep:0x1d29 parp:0xf46c size:0x0007 C-string:'UNK_0xf46c'
//      UNK_0xf475  codep:0x1d29 parp:0xf475 size:0x0003 C-string:'UNK_0xf475'
//      UNK_0xf47a  codep:0x1d29 parp:0xf47a size:0x0003 C-string:'UNK_0xf47a'
//      UNK_0xf47f  codep:0x1d29 parp:0xf47f size:0x0005 C-string:'UNK_0xf47f'
//      UNK_0xf486  codep:0x224c parp:0xf486 size:0x002e C-string:'UNK_0xf486'
//         SA-CASE  codep:0x4a4f parp:0xf4c0 size:0x001c C-string:'SA_dash_CASE'
//      UNK_0xf4de  codep:0x224c parp:0xf4de size:0x0014 C-string:'UNK_0xf4de'
//         (XCOMM)  codep:0x224c parp:0xf4fe size:0x0000 C-string:'_ro_XCOMM_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_P_dash_RACES; // P-RACES
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_IsELAN; // ?ELAN
extern const unsigned short int pp_IsSPHEXI; // ?SPHEXI
extern const unsigned short int pp__ro_STOP_dash_C; // (STOP-C
extern const unsigned short int pp_THIS_dash_BU; // THIS-BU
extern const unsigned short int pp_SKIP2NEST; // SKIP2NEST
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_Is12; // ?12
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_E_dash_USE; // E-USE
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern const unsigned short int pp__i_RSIDE; // 'RSIDE
extern const unsigned short int pp_TIRED_dash_T; // TIRED-T
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_AORIGINATOR; // (AORIGINATOR
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType ART_dash_NAME; // ART-NAME
extern LoadDataType ART_dash_VAL; // ART-VAL
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color BLUE; // BLUE
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void PAD(); // PAD
void MS(); // MS
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void D_gt_(); // D>
void KEY_2(); // KEY_2
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void _gt_C_plus_(); // >C+
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void IINSERT(); // IINSERT
void IFIND(); // IFIND
void _gt_INACTIVE(); // >INACTIVE
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void BYE(); // BYE
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void DrawON(); // .ON
void INIT_dash_BU(); // INIT-BU
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void DrawBTN_dash_TE(); // .BTN-TE
void NEW_dash_BUT(); // NEW-BUT
void _do__ex_(); // $!
void _dash_XTRAILING(); // -XTRAILING
void _gt_BOX(); // >BOX
void BOX_gt_(); // BOX>
void DrawSORD(); // .SORD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void C_gt_(); // C>
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xebce = 0xebce; // UNK_0xebce size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xecca = 0xecca; // UNK_0xecca size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xef26 = 0xef26; // UNK_0xef26 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf002 = 0xf002; // UNK_0xf002 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf454 = 0xf454; // UNK_0xf454 size: 9
// {0x04, 0x30, 0xf1, 0xa7, 0xed, 0xdb, 0xed, 0x74, 0xf1}

const unsigned short int pp_UNK_0xf45f = 0xf45f; // UNK_0xf45f size: 11
// {0x05, 0x3f, 0xee, 0x73, 0xee, 0x12, 0xf0, 0x12, 0xf3, 0xa6, 0xf0}

const unsigned short int pp_UNK_0xf46c = 0xf46c; // UNK_0xf46c size: 7
// {0x03, 0xc0, 0xef, 0x36, 0xef, 0xd2, 0xf1}

const unsigned short int pp_UNK_0xf475 = 0xf475; // UNK_0xf475 size: 3
// {0x01, 0x17, 0xee}

const unsigned short int pp_UNK_0xf47a = 0xf47a; // UNK_0xf47a size: 3
// {0x01, 0xce, 0xec}

const unsigned short int pp_UNK_0xf47f = 0xf47f; // UNK_0xf47f size: 5
// {0x02, 0x14, 0xf4, 0xa2, 0xf3}


const unsigned short int cc_UNK_0xf08a = 0xf08a; // UNK_0xf08a


// 0xea42: db 0xaf 0x00 '  '

// ================================================
// 0xea44: WORD 'UNK_0xea46' codep=0x224c parp=0xea46 params=0 returns=0
// ================================================

void UNK_0xea46() // UNK_0xea46
{
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
}


// ================================================
// 0xea4e: WORD 'UNK_0xea50' codep=0x224c parp=0xea50 params=0 returns=0
// ================================================

void UNK_0xea50() // UNK_0xea50
{
  Push(0x000d);
  UNK_0xea46(); // UNK_0xea46
  Push(pp_Is12); // ?12
  Store_3(); // !_3
  Push(Read16(pp_E_dash_USE)); // E-USE @
  Push(7);
  UNK_0xea46(); // UNK_0xea46
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
  }
  Push(pp__dash_END); // -END
  Store_3(); // !_3
}


// ================================================
// 0xea6e: WORD 'UNK_0xea70' codep=0x224c parp=0xea70 params=0 returns=0
// ================================================

void UNK_0xea70() // UNK_0xea70
{
  Push(0xc1d1); // probable 'A>O'
  MODULE(); // MODULE
}


// ================================================
// 0xea78: WORD 'UNK_0xea7a' codep=0x224c parp=0xea7a params=0 returns=0
// ================================================

void UNK_0xea7a() // UNK_0xea7a
{
  Push(0xc1e1); // probable 'O>C'
  MODULE(); // MODULE
}


// ================================================
// 0xea82: WORD 'UNK_0xea84' codep=0x224c parp=0xea84 params=0 returns=0
// ================================================

void UNK_0xea84() // UNK_0xea84
{
  Push(0xc205); // probable 'OV+!EDL'
  MODULE(); // MODULE
}


// ================================================
// 0xea8c: WORD 'UNK_0xea8e' codep=0x224c parp=0xea8e params=2 returns=2
// ================================================

void UNK_0xea8e() // UNK_0xea8e
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea9e: WORD 'UNK_0xeaa0' codep=0x744d parp=0xeaa0
// ================================================
IFieldType UNK_0xeaa0 = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xeaa3: WORD 'UNK_0xeaa5' codep=0x744d parp=0xeaa5
// ================================================
IFieldType UNK_0xeaa5 = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xeaa8: WORD 'UNK_0xeaaa' codep=0x744d parp=0xeaaa
// ================================================
IFieldType UNK_0xeaaa = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xeaad: WORD 'UNK_0xeaaf' codep=0x3b68 parp=0xeaaf
// ================================================
// 0xeaaf: dw 0x0001 0x6090

// ================================================
// 0xeab3: WORD 'UNK_0xeab5' codep=0x3b68 parp=0xeab5
// ================================================
// 0xeab5: dw 0x0001 0x8272

// ================================================
// 0xeab9: WORD 'UNK_0xeabb' codep=0x3b68 parp=0xeabb
// ================================================
// 0xeabb: dw 0x0000 0xdac0

// ================================================
// 0xeabf: WORD 'UNK_0xeac1' codep=0x224c parp=0xeac1 params=0 returns=2
// ================================================

void UNK_0xeac1() // UNK_0xeac1
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("RECEIVING:");
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xeada: WORD 'UNK_0xeadc' codep=0x224c parp=0xeadc params=0 returns=2
// ================================================

void UNK_0xeadc() // UNK_0xeadc
{
  UNK_0xeac1(); // UNK_0xeac1
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(0xc216); // probable 'P>CT'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeaec: WORD 'UNK_0xeaee' codep=0x224c parp=0xeaee params=1 returns=0
// ================================================

void UNK_0xeaee() // UNK_0xeaee
{
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    GetColor(BLUE);
    Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
    DrawON(); // .ON
    CTINIT(); // CTINIT
    Push(0x118a); Push(0x0002);
    UNK_0xea8e(); // UNK_0xea8e
    DrawTTY(); // .TTY
    Push(0x01f4);
    MS(); // MS
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM("YES.");
    } else
    {
      SET_STR_AS_PARAM("NO.");
    }
    DrawTTY(); // .TTY
    TTY_dash_SCR(); // TTY-SCR
  } else
  {
    Pop(); // DROP
  }
  GetColor(BLACK);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  DrawON(); // .ON
}


// ================================================
// 0xeb3d: WORD 'UNK_0xeb3f' codep=0x224c parp=0xeb3f
// ================================================

void UNK_0xeb3f() // UNK_0xeb3f
{
  _gt_C_plus_S(); // >C+S
  Push(0x02d5);
  Push(0x04de);
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  CI(); // CI
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==1?1:0); //  1 =
  ICLOSE(); // ICLOSE
  Push(Read16(pp_IsSPHEXI)); // ?SPHEXI @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_at_(); // 1.5@
  Push2Words("UNK_0xeabb");
  D_eq_(); // D=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push2Words("*SP");
    IINSERT(); // IINSERT
    return;
  }
  _gt_INACTIVE(); // >INACTIVE
}


// ================================================
// 0xeb79: WORD 'UNK_0xeb7b' codep=0x224c parp=0xeb7b
// ================================================

void UNK_0xeb7b() // UNK_0xeb7b
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xeb89: WORD '?VOWEL' codep=0x4a4f parp=0xeb94
// ================================================

void IsVOWEL() // ?VOWEL
{
  switch(Pop()) // ?VOWEL
  {
  case 65:
    Push(1);
    break;
  case 69:
    Push(1);
    break;
  case 73:
    Push(1);
    break;
  case 79:
    Push(1);
    break;
  case 85:
    Push(1);
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xebac: WORD 'UNK_0xebae' codep=0x224c parp=0xebae
// ================================================

void UNK_0xebae() // UNK_0xebae
{
  Push(Read16(Pop())&0xFF); //  C@
  IsVOWEL(); // ?VOWEL case
}


// ================================================
// 0xebb4: WORD 'UNK_0xebb6' codep=0x224c parp=0xebb6 params=0 returns=1
// ================================================

void UNK_0xebb6() // UNK_0xebb6
{
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_3(); // ON_3
  Push(0x0064);
  UNK_0xea84(); // UNK_0xea84
}


// ================================================
// 0xebc2: WORD 'UNK_0xebc4' codep=0x224c parp=0xebc4 params=0 returns=0
// ================================================

void UNK_0xebc4() // UNK_0xebc4
{
  Push(0xbd4a); // probable '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xebcc: WORD 'UNK_0xebce' codep=0x1d29 parp=0xebce
// ================================================
// 0xebce: db 0x3a 0x20 ': '

// ================================================
// 0xebd0: WORD 'UNK_0xebd2' codep=0x224c parp=0xebd2
// ================================================

void UNK_0xebd2() // UNK_0xebd2
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xebe4: WORD 'UNK_0xebe6' codep=0x224c parp=0xebe6
// ================================================

void UNK_0xebe6() // UNK_0xebe6
{
  UNK_0xebd2(); // UNK_0xebd2
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0);
    SWAP(); // SWAP
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
      Push(Read16(regsp)); // DUP
      Push(pp_UNK_0xebce); // UNK_0xebce
      Store_3(); // !_3
      SWAP(); // SWAP
      _dash_(); // -
      _0_st_(); // 0<
      Push(!Pop()); //  NOT
    } else
    {
      Pop(); // DROP
      Push(0);
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec22: WORD 'UNK_0xec24' codep=0x224c parp=0xec24
// ================================================

void UNK_0xec24() // UNK_0xec24
{
  UNK_0xebd2(); // UNK_0xebd2
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x224c parp=0xec36 params=0 returns=0
// ================================================

void UNK_0xec36() // UNK_0xec36
{

  label2:
  CI(); // CI
  Push2Words("*STARSHIP-HOLD");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec4c: WORD 'UNK_0xec4e' codep=0x224c parp=0xec4e
// ================================================

void UNK_0xec4e() // UNK_0xec4e
{
  UNK_0xec24(); // UNK_0xec24
  Push(-Pop()); //  NEGATE
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  UNK_0xec36(); // UNK_0xec36
  UNK_0xebc4(); // UNK_0xebc4
  DrawSORD(); // .SORD
}


// ================================================
// 0xec6c: WORD 'UNK_0xec6e' codep=0x224c parp=0xec6e
// ================================================

void UNK_0xec6e() // UNK_0xec6e
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  C_gt_(); // C>
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  UNK_0xebc4(); // UNK_0xebc4
  DrawSORD(); // .SORD
}


// ================================================
// 0xec8c: WORD 'UNK_0xec8e' codep=0x224c parp=0xec8e
// ================================================

void UNK_0xec8e() // UNK_0xec8e
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  BOX_gt_(); // BOX>
  UNK_0xeb3f(); // UNK_0xeb3f
  Pop(); // DROP
  UNK_0xec36(); // UNK_0xec36
  UNK_0xebc4(); // UNK_0xebc4
  UNK_0xea50(); // UNK_0xea50
}


// ================================================
// 0xecb8: WORD 'UNK_0xecba' codep=0x224c parp=0xecba params=1 returns=1
// ================================================

void UNK_0xecba() // UNK_0xecba
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xeaaa.offset)); // UNK_0xeaaa<IFIELD> @
  MIN(); // MIN
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecc8: WORD 'UNK_0xecca' codep=0x1d29 parp=0xecca
// ================================================
// 0xecca: db 0x3a 0x20 ': '

// ================================================
// 0xeccc: WORD 'UNK_0xecce' codep=0x224c parp=0xecce
// ================================================

void UNK_0xecce() // UNK_0xecce
{
  unsigned short int i, imax;
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(1);
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xeac1(); // UNK_0xeac1
    TTY_dash_SCR(); // TTY-SCR
    Push(0);
    Push(6);
    CTPOS_dot_(); // CTPOS.
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(0);
    _st__n_(); // <#
    _n_S(); // #S
    _n__gt_(); // #>
    _2DUP(); // 2DUP
    Push(Pop() + Pop()); // +
    Push(0x003f);
    SWAP(); // SWAP
    C_ex_(); // C!
    Push(Pop() + 1); //  1+
    GetColor(BLUE);
    StoreCOLOR(); // !COLOR
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x000a);
    DrawBTN_dash_TE(); // .BTN-TE
    INIT_dash_BU(); // INIT-BU
    TIME(); // TIME
    _2_at_(); // 2@
    Push(0x3a98); Push(0x0000);
    D_plus_(); // D+
    Push(pp_TIRED_dash_T); // TIRED-T
    StoreD(); // D!
    do
    {
      UNK_0xeb7b(); // UNK_0xeb7b
      Push(Read16(pp_FTRIG)); // FTRIG @
      TIME(); // TIME
      _2_at_(); // 2@
      Push(pp_TIRED_dash_T); // TIRED-T
      _2_at_(); // 2@
      D_gt_(); // D>
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
      Push(Read16(regsp)); // DUP
      Push(Pop()==0?1:0); //  0=
      UNK_0xeaee(); // UNK_0xeaee
    } else
    {
      Push(2);
    }
    SWAP(); // SWAP
    Push(6);
    MOD(); // MOD
    _0_gt_(); // 0>
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() * Pop()); // *
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x11a4); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
  DrawTTY(); // .TTY
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    PRINT("DENIED.", 7); // (.")
    UNK_0xebb6(); // UNK_0xebb6
    return;
  }
  PRINT("GRANTED.", 8); // (.")
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON_3(); // ON_3
  Push(pp_SKIP2NEST); // SKIP2NEST
  ON_3(); // ON_3
  Push(pp_TERMINA); // TERMINA
  ON_3(); // ON_3
}


// ================================================
// 0xeda5: WORD 'UNK_0xeda7' codep=0x224c parp=0xeda7 params=0 returns=0
// ================================================

void UNK_0xeda7() // UNK_0xeda7
{
  Push(!((Read16(pp_P_dash_RACES) & 4)==0?1:0)); // P-RACES @ 4 AND 0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
  UNK_0xebb6(); // UNK_0xebb6
  Push(0x11c5); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
  UNK_0xeadc(); // UNK_0xeadc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedd9: WORD 'UNK_0xeddb' codep=0x224c parp=0xeddb params=0 returns=0
// ================================================

void UNK_0xeddb() // UNK_0xeddb
{
  Push2Words("UNK_0xeab5");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xeaa0.offset)&0xFF); // UNK_0xeaa0<IFIELD> C@
  Push(Read16(0x63ef+UNK_0xeaa5.offset)&0xFF); // UNK_0xeaa5<IFIELD> C@
  _st_(); // <
  ICLOSE(); // ICLOSE
  Push(!(Pop()==0?1:0)); //  0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
  UNK_0xebb6(); // UNK_0xebb6
  Push(0x1252); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
  UNK_0xeadc(); // UNK_0xeadc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee15: WORD 'UNK_0xee17' codep=0x224c parp=0xee17 params=0 returns=0
// ================================================

void UNK_0xee17() // UNK_0xee17
{
  Push((Read16(pp_P_dash_RACES) & 1)==0?1:0); // P-RACES @ 1 AND 0=
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
  UNK_0xebb6(); // UNK_0xebb6
  Push(0x12cc); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
  UNK_0xeadc(); // UNK_0xeadc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f params=0 returns=0
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  Push(!((Read16(pp_P_dash_RACES) & 8)==0?1:0)); // P-RACES @ 8 AND 0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
  UNK_0xebb6(); // UNK_0xebb6
  Push(0x134e); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
  UNK_0xeadc(); // UNK_0xeadc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee71: WORD 'UNK_0xee73' codep=0x224c parp=0xee73 params=0 returns=0
// ================================================

void UNK_0xee73() // UNK_0xee73
{
  Push2Words("UNK_0xeaaf");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xeaa0.offset)&0xFF); // UNK_0xeaa0<IFIELD> C@
  Push(Read16(0x63ef+UNK_0xeaa5.offset)&0xFF); // UNK_0xeaa5<IFIELD> C@
  _st_(); // <
  ICLOSE(); // ICLOSE
  Push(!(Pop()==0?1:0)); //  0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
  UNK_0xebb6(); // UNK_0xebb6
  Push(0x1400); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
  UNK_0xeadc(); // UNK_0xeadc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeead: WORD 'XY/N' codep=0x224c parp=0xeeb6
// ================================================

void XY_slash_N() // XY/N
{
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(0x000a);
  DrawBTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xea60); Push(0x0000);
  D_plus_(); // D+
  Push(pp_TIRED_dash_T); // TIRED-T
  StoreD(); // D!
  do
  {
    UNK_0xeb7b(); // UNK_0xeb7b
    Push(Read16(pp_FTRIG)); // FTRIG @
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_TIRED_dash_T); // TIRED-T
    _2_at_(); // 2@
    D_gt_(); // D>
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(Read16(pp_THIS_dash_BU)); // THIS-BU @
  Push(Read16(regsp)); // DUP
  Push((Pop()==2?1:0) * Read16(pp_FTRIG)); //  2 = FTRIG @ *
  Push(pp__ro_STOP_dash_C); // (STOP-C
  Store_3(); // !_3
  IsTRIG(); // ?TRIG
  Push((Pop()==0?1:0) * 2); //  0= 2*
  Push(Pop() + Pop()); // +
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    UNK_0xea84(); // UNK_0xea84
    Push(1);
  } else
  {
    UNK_0xea84(); // UNK_0xea84
    Pop(); // DROP
    Push(0);
  }
  Push(Read16(regsp)); // DUP
  UNK_0xeaee(); // UNK_0xeaee
  Push(9);
  DrawBTN_dash_TE(); // .BTN-TE
}


// ================================================
// 0xef24: WORD 'UNK_0xef26' codep=0x1d29 parp=0xef26
// ================================================
// 0xef26: db 0x3a 0x20 ': '

// ================================================
// 0xef28: WORD 'UNK_0xef2a' codep=0x224c parp=0xef2a
// ================================================

void UNK_0xef2a() // UNK_0xef2a
{
  Push(0x1498); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xef34: WORD 'UNK_0xef36' codep=0x224c parp=0xef36 params=0 returns=0
// ================================================

void UNK_0xef36() // UNK_0xef36
{
  Push(0x000e);
  UNK_0xea46(); // UNK_0xea46
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  UNK_0xef2a(); // UNK_0xef2a
  UNK_0xeadc(); // UNK_0xeadc
  Push(0xffd8);
  Push(0x0032);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    Push(0x000e);
    UNK_0xec8e(); // UNK_0xec8e
    Push(0xffd8);
  } else
  {
    Push(pp_UNK_0xecca); // UNK_0xecca
    ON_3(); // ON_3
    UNK_0xebb6(); // UNK_0xebb6
    Push(0x0032);
  }
  Push(Read16(pp_UNK_0xef26)); // UNK_0xef26 @
  if (Pop() != 0)
  {
    Push(0xe979); Push(0x0000);
    _gt_C_plus_(); // >C+
    Push(0xec50); Push(0x0000);
    _gt_C_plus_S(); // >C+S
    IDELETE(); // IDELETE
    ICLOSE(); // ICLOSE
    ICLOSE(); // ICLOSE
    Push(pp_UNK_0xef26); // UNK_0xef26
    OFF(); // OFF
  }
  Push(Pop() + (Read16(0x63ef+UNK_0xeaa0.offset)&0xFF)); //  UNK_0xeaa0<IFIELD> C@ +
  Push(0x0064);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(0x63ef+UNK_0xeaa0.offset); // UNK_0xeaa0<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefb2: WORD 'UNK_0xefb4' codep=0x224c parp=0xefb4
// ================================================

void UNK_0xefb4() // UNK_0xefb4
{
  Push(0x150e); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xefbe: WORD 'UNK_0xefc0' codep=0x224c parp=0xefc0 params=0 returns=0
// ================================================

void UNK_0xefc0() // UNK_0xefc0
{
  Push(1);
  UNK_0xea46(); // UNK_0xea46
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  UNK_0xefb4(); // UNK_0xefb4
  UNK_0xeadc(); // UNK_0xeadc
  Push(0);
  Push(0x0064);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    Push(1);
    UNK_0xec8e(); // UNK_0xec8e
  } else
  {
    Push(pp_UNK_0xecca); // UNK_0xecca
    ON_3(); // ON_3
    UNK_0xebb6(); // UNK_0xebb6
    Push(0x0064);
    Push(0x63ef+UNK_0xeaa0.offset); // UNK_0xeaa0<IFIELD>
    C_ex_(); // C!
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf000: WORD 'UNK_0xf002' codep=0x1d29 parp=0xf002
// ================================================
// 0xf002: db 0x3a 0x20 ': '

// ================================================
// 0xf004: WORD 'UNK_0xf006' codep=0x224c parp=0xf006
// ================================================

void UNK_0xf006() // UNK_0xf006
{
  Push(0x15ad); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf010: WORD 'UNK_0xf012' codep=0x224c parp=0xf012
// ================================================

void UNK_0xf012() // UNK_0xf012
{
  Push(3);
  Push(0x000f);
  UNK_0xebe6(); // UNK_0xebe6
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  UNK_0xf006(); // UNK_0xf006
  Push(Read16(pp_UNK_0xebce)); // UNK_0xebce @
  Push(0x0054);
  Push(0x0064);
  _star__slash_(); // */
  UNK_0xecba(); // UNK_0xecba
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xf002); // UNK_0xf002
  Store_3(); // !_3
  Push(0x000a);
  _slash_(); // /
  Push(0);
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  _2OVER(); // 2OVER
  Pop(); // DROP
  Push(Pop() + 0x005d); //  0x005d +
  Push(Read16(regsp)); // DUP
  Push(3);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  UNK_0xeadc(); // UNK_0xeadc
  ICLOSE(); // ICLOSE
  Push(0);
  Push(5);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    Push(Read16(pp_UNK_0xebce)); // UNK_0xebce @
    Push(0x000f);
    UNK_0xec4e(); // UNK_0xec4e
    Push(Read16(pp_UNK_0xf002)); // UNK_0xf002 @
    Push(6);
    UNK_0xec6e(); // UNK_0xec6e
    return;
  }
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
}


// ================================================
// 0xf088: WORD 'UNK_0xf08a' codep=0x2214 parp=0xf08a
// ================================================
// 0xf08a: dw 0x0001

// ================================================
// 0xf08c: WORD 'UNK_0xf08e' codep=0x224c parp=0xf08e
// ================================================

void UNK_0xf08e() // UNK_0xf08e
{
  Push(0x163f); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf098: WORD 'UNK_0xf09a' codep=0x224c parp=0xf09a
// ================================================

void UNK_0xf09a() // UNK_0xf09a
{
  Push(0x1708); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6 params=0 returns=0
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push((Read16(pp_A_dash_POSTU)==2?1:0) & Read16(cc_UNK_0xf08a)); // A-POSTU @ 2 = UNK_0xf08a AND
  if (Pop() != 0)
  {
    UNK_0xf08e(); // UNK_0xf08e
    UNK_0xeadc(); // UNK_0xeadc
    Push(0);
    Push(0);
    XY_slash_N(); // XY/N
    if (Pop() != 0)
    {
      Push(0x012c);
      Push(6);
      UNK_0xebe6(); // UNK_0xebe6
      if (Pop() != 0)
      {
        Push(0x012c);
        Push(6);
        UNK_0xec4e(); // UNK_0xec4e
        Push(0x001c);
        Push(0x000f);
        ICREATE(); // ICREATE
        _gt_C_plus_S(); // >C+S
        LoadData(ART_dash_VOL); // from 'ARTIFACT'
        Push(Read16(Pop())); //  @
        Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
        Store_3(); // !_3
        CI(); // CI
        ICLOSE(); // ICLOSE
        Push2Words("*STARSHIP-HOLD");
        _gt_C_plus_S(); // >C+S
        _gt_BOX(); // >BOX
        ICLOSE(); // ICLOSE
        Push(0xf08a); // probable 'UNK_0xf08a'
        OFF(); // OFF
        UNK_0xebc4(); // UNK_0xebc4
      } else
      {
        UNK_0xf09a(); // UNK_0xf09a
        UNK_0xeadc(); // UNK_0xeadc
        Push(5);
        UNK_0xea84(); // UNK_0xea84
      }
    } else
    {
      Push(0x174e); Push(0x0002);
      UNK_0xea8e(); // UNK_0xea8e
      UNK_0xeadc(); // UNK_0xeadc
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf122: WORD 'UNK_0xf124' codep=0x224c parp=0xf124
// ================================================

void UNK_0xf124() // UNK_0xf124
{
  Push(0x1800); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf12e: WORD 'UNK_0xf130' codep=0x224c parp=0xf130 params=0 returns=0
// ================================================

void UNK_0xf130() // UNK_0xf130
{
  Push(!Read16(pp_IsELAN)); // ?ELAN @ NOT
  if (Pop() == 0) return;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
  UNK_0xebb6(); // UNK_0xebb6
  UNK_0xf124(); // UNK_0xf124
  UNK_0xeadc(); // UNK_0xeadc
  Push(0x0064);
  UNK_0xea84(); // UNK_0xea84
  Push(0x0064);
  Push(0x63ef+UNK_0xeaa0.offset); // UNK_0xeaa0<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf15a: WORD 'UNK_0xf15c' codep=0x224c parp=0xf15c
// ================================================

void UNK_0xf15c() // UNK_0xf15c
{
  Push(0x18fc); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf166: WORD 'UNK_0xf168' codep=0x224c parp=0xf168
// ================================================

void UNK_0xf168() // UNK_0xf168
{
  Push(0x1998); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf172: WORD 'UNK_0xf174' codep=0x224c parp=0xf174 params=0 returns=0
// ================================================

void UNK_0xf174() // UNK_0xf174
{
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(Read16(pp_A_dash_POSTU)==2?1:0); // A-POSTU @ 2 =
  if (Pop() != 0)
  {
    Push(0x19e5); Push(0x0002);
    UNK_0xea8e(); // UNK_0xea8e
    UNK_0xeadc(); // UNK_0xeadc
    Push(0);
    Push(0);
    XY_slash_N(); // XY/N
    if (Pop() != 0)
    {
      Push(0x00c8);
      Push(6);
      UNK_0xebe6(); // UNK_0xebe6
      if (Pop() != 0)
      {
        Push(8);
        UNK_0xea84(); // UNK_0xea84
        UNK_0xf15c(); // UNK_0xf15c
      } else
      {
        Push(pp_UNK_0xecca); // UNK_0xecca
        ON_3(); // ON_3
        UNK_0xf168(); // UNK_0xf168
        Push(0x0096);
        UNK_0xecba(); // UNK_0xecba
        Push(6);
        UNK_0xec6e(); // UNK_0xec6e
      }
      UNK_0xeadc(); // UNK_0xeadc
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1c4: WORD 'UNK_0xf1c6' codep=0x224c parp=0xf1c6
// ================================================

void UNK_0xf1c6() // UNK_0xf1c6
{
  Push(0x1a10); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf1d0: WORD 'UNK_0xf1d2' codep=0x224c parp=0xf1d2
// ================================================

void UNK_0xf1d2() // UNK_0xf1d2
{
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push(Read16(pp_A_dash_POSTU) & 0x000c); // A-POSTU @ 0x000c AND
  Push(0x0028);
  Push(6);
  UNK_0xebe6(); // UNK_0xebe6
  Push(Pop() * Pop()); // *
  if (Pop() != 0)
  {
    UNK_0xf1c6(); // UNK_0xf1c6
    Push(((Read16(pp_A_dash_POSTU)==8?1:0) * 6 + 3) + 0x0030); // A-POSTU @ 8 = 6 * 3 + 0x0030 +
    Push(3);
    PICK(); // PICK
    Push(Pop() + 0x0082); //  0x0082 +
    C_ex_(); // C!
    UNK_0xeadc(); // UNK_0xeadc
    Push(0);
    Push(0x0064);
    XY_slash_N(); // XY/N
    if (Pop() != 0)
    {
      Push(Read16(pp_UNK_0xebce)); // UNK_0xebce @
      Push((Read16(pp_A_dash_POSTU)==8?1:0) * 0x003c + 0x001e); // A-POSTU @ 8 = 0x003c * 0x001e +
      MIN(); // MIN
      Push(6);
      UNK_0xec4e(); // UNK_0xec4e
    } else
    {
      Push(pp_UNK_0xecca); // UNK_0xecca
      ON_3(); // ON_3
      UNK_0xebb6(); // UNK_0xebb6
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf24c: WORD 'UNK_0xf24e' codep=0x224c parp=0xf24e
// ================================================

void UNK_0xf24e() // UNK_0xf24e
{
  Push(0x1ad4); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf258: WORD 'UNK_0xf25a' codep=0x224c parp=0xf25a
// ================================================

void UNK_0xf25a() // UNK_0xf25a
{
  LoadData(ART_dash_NAME); // from 'ARTIFACT'
  Push(Read16(regsp)); // DUP
  PAD(); // PAD
  Push(0x0018);
  CMOVE(); // CMOVE
  UNK_0xebae(); // UNK_0xebae
  if (Pop() != 0)
  {
    Push(0x004e);
  } else
  {
    Push(Read16(cc_BL)); // BL
  }
  Push(pp_LSCAN + 0x003b); // LSCAN 0x003b +
  C_ex_(); // C!
  Push(pp_LSCAN + 0x003d); // LSCAN 0x003d +
  Push(Read16(regsp)); // DUP
  Push(0x0018);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  PAD(); // PAD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf2a8: WORD 'UNK_0xf2aa' codep=0x224c parp=0xf2aa
// ================================================

void UNK_0xf2aa() // UNK_0xf2aa
{
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0);
  Push(0x0021);
  U_slash_MOD(); // U/MOD
  Push(0x000a);
  MAX(); // MAX
  UNK_0xecba(); // UNK_0xecba
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xf002); // UNK_0xf002
  Store_3(); // !_3
  Push(0x000a);
  _slash_(); // /
  Push(0);
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  Push(pp_LSCAN + 0x009b); // LSCAN 0x009b +
  Push(Read16(regsp)); // DUP
  Push(4);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Pop(); // DROP
  Push(Read16(pp_UNK_0xf002)); // UNK_0xf002 @
  Push(0x000a);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x0053);
  } else
  {
    Push(Read16(cc_BL)); // BL
  }
  Push(pp_LSCAN + 0x00af); // LSCAN 0x00af +
  Push(2);
  ROT(); // ROT
  FILL_1(); // FILL_1
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{
  unsigned short int i, imax;
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(1);
    Push(0x000a);
    RRND(); // RRND
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      INEXT(); // INEXT
      i++;
    } while(i<imax); // (LOOP)

    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x000f?1:0); //  0x000f =
    if (Pop() != 0)
    {
      IFIRST(); // IFIRST
    }
    do
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(!(Pop()==0x000f?1:0)); //  0x000f = NOT
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        UNK_0xf24e(); // UNK_0xf24e
        Pop(); Pop(); // 2DROP
        UNK_0xf25a(); // UNK_0xf25a
        UNK_0xf2aa(); // UNK_0xf2aa
        Push(pp_LSCAN); // LSCAN
        COUNT(); // COUNT
        UNK_0xeadc(); // UNK_0xeadc
        Push(0);
        Push(5);
        XY_slash_N(); // XY/N
        if (Pop() != 0)
        {
          UNK_0xebc4(); // UNK_0xebc4
          BOX_gt_(); // BOX>
          _gt_INACTIVE(); // >INACTIVE
          Pop(); // DROP
          Push(Read16(pp_UNK_0xf002)); // UNK_0xf002 @
          Push(6);
          UNK_0xec6e(); // UNK_0xec6e
        }
      }
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
  }
  UNK_0xec36(); // UNK_0xec36
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf394: WORD 'UNK_0xf396' codep=0x224c parp=0xf396 orphan
// ================================================

void UNK_0xf396() // UNK_0xf396
{
  Push(0x1c00); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf3a0: WORD 'UNK_0xf3a2' codep=0x224c parp=0xf3a2 orphan
// ================================================

void UNK_0xf3a2() // UNK_0xf3a2
{
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  UNK_0xf396(); // UNK_0xf396
  UNK_0xeadc(); // UNK_0xeadc
  Push(0);
  Push(0x0064);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    GetColor(YELLOW);
    Push(0x4f0c); // probable 'BLACK'
    Store_3(); // !_3
    CTERASE(); // CTERASE
    SET_STR_AS_PARAM("CREW ARRESTED");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM("GAME OVER");
    DrawTTY(); // .TTY
    _i_KEY(); // 'KEY
    Pop(); // DROP
    KEY_2(); // KEY_2
    Pop(); // DROP
    BYE(); // BYE
  }
  Push(pp_UNK_0xecca); // UNK_0xecca
  ON_3(); // ON_3
  UNK_0xebb6(); // UNK_0xebb6
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3fa: WORD 'UNK_0xf3fc' codep=0x224c parp=0xf3fc
// ================================================

void UNK_0xf3fc() // UNK_0xf3fc
{
  Push(0x1cd8); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf406: WORD 'UNK_0xf408' codep=0x224c parp=0xf408
// ================================================

void UNK_0xf408() // UNK_0xf408
{
  Push(0x1d0f); Push(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414() // UNK_0xf414
{
  UNK_0xea70(); // UNK_0xea70
  UNK_0xea7a(); // UNK_0xea7a
  UNK_0xf3fc(); // UNK_0xf3fc
  UNK_0xeadc(); // UNK_0xeadc
  Push(0x09c4);
  MS(); // MS
  Push(Read16(pp__i_RSIDE)); // 'RSIDE @
  MODULE(); // MODULE
  Push(!Read16(pp_IsSECURE)); // ?SECURE @ NOT
  if (Pop() != 0)
  {
    UNK_0xf408(); // UNK_0xf408
    UNK_0xeadc(); // UNK_0xeadc
    Push(0x09c4);
    MS(); // MS
    Push(pp_UNK_0xecca); // UNK_0xecca
    ON_3(); // ON_3
    Push(pp__ro_STOP_dash_C); // (STOP-C
    ON_3(); // ON_3
    Push(0);
    Push(0x63ef+UNK_0xeaa0.offset); // UNK_0xeaa0<IFIELD>
    C_ex_(); // C!
    Push(pp_EDL); // EDL
    OFF(); // OFF
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x1d29 parp=0xf454
// ================================================
// 0xf454: db 0x04 0x30 0xf1 0xa7 0xed 0xdb 0xed 0x74 0xf1 ' 0     t '

// ================================================
// 0xf45d: WORD 'UNK_0xf45f' codep=0x1d29 parp=0xf45f
// ================================================
// 0xf45f: db 0x05 0x3f 0xee 0x73 0xee 0x12 0xf0 0x12 0xf3 0xa6 0xf0 ' ? s       '

// ================================================
// 0xf46a: WORD 'UNK_0xf46c' codep=0x1d29 parp=0xf46c
// ================================================
// 0xf46c: db 0x03 0xc0 0xef 0x36 0xef 0xd2 0xf1 '   6   '

// ================================================
// 0xf473: WORD 'UNK_0xf475' codep=0x1d29 parp=0xf475
// ================================================
// 0xf475: db 0x01 0x17 0xee '   '

// ================================================
// 0xf478: WORD 'UNK_0xf47a' codep=0x1d29 parp=0xf47a
// ================================================
// 0xf47a: db 0x01 0xce 0xec '   '

// ================================================
// 0xf47d: WORD 'UNK_0xf47f' codep=0x1d29 parp=0xf47f
// ================================================
// 0xf47f: db 0x02 0x14 0xf4 0xa2 0xf3 '     '

// ================================================
// 0xf484: WORD 'UNK_0xf486' codep=0x224c parp=0xf486 params=1 returns=0
// ================================================

void UNK_0xf486() // UNK_0xf486
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(pp_UNK_0xecca); // UNK_0xecca
  OFF(); // OFF
  COUNT(); // COUNT
  Push(Pop() * 2); //  2*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    GetEXECUTE(); // @EXECUTE
    Push(Read16(pp_UNK_0xecca)); // UNK_0xecca @
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    DrawSORD(); // .SORD
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf4b4: WORD 'SA-CASE' codep=0x4a4f parp=0xf4c0
// ================================================

void SA_dash_CASE() // SA-CASE
{
  switch(Pop()) // SA-CASE
  {
  case 1:
    Push(pp_UNK_0xf454); // UNK_0xf454
    break;
  case 7:
    Push(pp_UNK_0xf45f); // UNK_0xf45f
    break;
  case 8:
    Push(pp_UNK_0xf46c); // UNK_0xf46c
    break;
  case 3:
    Push(pp_UNK_0xf475); // UNK_0xf475
    break;
  case 10:
    Push(pp_UNK_0xf47a); // UNK_0xf47a
    break;
  case 21:
    Push(pp_UNK_0xf47f); // UNK_0xf47f
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf4dc: WORD 'UNK_0xf4de' codep=0x224c parp=0xf4de
// ================================================

void UNK_0xf4de() // UNK_0xf4de
{
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_OK_dash_TALK); // OK-TALK
    _2_at_(); // 2@
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
}


// ================================================
// 0xf4f2: WORD '(XCOMM)' codep=0x224c parp=0xf4fe
// ================================================
// entry

void _ro_XCOMM_rc_() // (XCOMM)
{
  UNK_0xf4de(); // UNK_0xf4de
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  SA_dash_CASE(); // SA-CASE case
  UNK_0xf486(); // UNK_0xf486
  UNK_0xf4de(); // UNK_0xf4de
}

// 0xf510: db 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x53 0x50 0x45 0x43 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x38 0x2f 0x31 0x33 0x2f 0x38 0x35 0x20 0x41 0x57 0x4b 0x20 0x29 0x31 0x31 0x37 0x35 0xcf 0x8b 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'XCOM-VOC________________________ SPEC -------------8/13/85 AWK )1175    COMM-VOC '

