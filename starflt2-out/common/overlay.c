
#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"

#include"../overlays/CULTURE.h"
#include"../overlays/FX.h"
#include"../overlays/ENDING.h"
#include"../overlays/DEPART.h"
#include"../overlays/CHKFLIGHT-OV.h"
#include"../overlays/FRACT-OV.h"
#include"../overlays/ICONP-OV.h"
#include"../overlays/SITE-OV.h"
#include"../overlays/HYPERMSG-OV.h"
#include"../overlays/BLT-OV.h"
#include"../overlays/MISC-OV.h"
#include"../overlays/BANK-OV.h"
#include"../overlays/ASSCREW-OV.h"
#include"../overlays/PERSONNEL-OV.h"
#include"../overlays/SHIPGRPH-OV.h"
#include"../overlays/CONFIG-OV.h"
#include"../overlays/TDEPOT-OV.h"
#include"../overlays/EDIT-OV.h"
#include"../overlays/PORTMENU-OV.h"
#include"../overlays/VITA-OV.h"
#include"../overlays/EYE-OV.h"
#include"../overlays/DESCRIBE.h"
#include"../overlays/TV-OV.h"
#include"../overlays/COMM-OV.h"
#include"../overlays/COMMSPEC-OV.h"
#include"../overlays/SEED-OV.h"
#include"../overlays/LISTICONS.h"
#include"../overlays/MOVE-OV.h"
#include"../overlays/ENGINEER.h"
#include"../overlays/DOCTOR.h"
#include"../overlays/ORBIT-OV.h"
#include"../overlays/CAPTAIN.h"
#include"../overlays/SCIENCE.h"
#include"../overlays/NAVIGATR.h"
#include"../overlays/SHIPBUTTONS.h"
#include"../overlays/MAP-OV.h"
#include"../overlays/HYPER-OV.h"
#include"../overlays/ANALYZE-OV.h"
#include"../overlays/LAUNCH-OV.h"
#include"../overlays/FLUX-EFFECT.h"
#include"../overlays/OP-OV.h"
#include"../overlays/TVITEMS.h"
#include"../overlays/BEHAV-OV.h"
#include"../overlays/HEAL-OV.h"
#include"../overlays/REPAIR-OV.h"
#include"../overlays/PLSET-OV.h"
#include"../overlays/MAPS-OV.h"
#include"../overlays/STORM-OV.h"
#include"../overlays/COMBAT-OV.h"
#include"../overlays/DAMAGE-OV.h"
#include"../overlays/LAND-OV.h"
#include"../overlays/MUSIC.h"
#include"../overlays/MODGAME.h"
#include"../overlays/STP-OV.h"
#include"../overlays/COMBAUX.h"
#include"../overlays/IT-OV.h"
#include"../overlays/BLDLISTS.h"
#include"../overlays/BARTER.h"
#include"../overlays/MARKET.h"
#include"../overlays/TVCON-OV.h"
#include"../overlays/CLOUD-OV.h"
#include"../overlays/JUMP.h"
#include"../overlays/SHIPCON.h"
#include"../overlays/DRONE.h"
#include"../overlays/WEAPONS.h"

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp_REPAIRT; // REPAIRT
extern const unsigned short int pp_IsREPAIR; // ?REPAIR
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_SKIP2NE; // SKIP2NE
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_LASTREP; // LASTREP
extern const unsigned short int user_R_n_; // R#
extern const unsigned short int user_SCR; // SCR
void COUNT(); // COUNT
void DEPTH(); // DEPTH
void S0(); // S0
void ABS(); // ABS
void DABS(); // DABS
void M_slash_(); // M/
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void DrawR(); // .R
void D_dot_(); // D.
void SPACE(); // SPACE
void DR1(); // DR1
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void FILESIZ(); // FILESIZ
void USING(); // USING
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _2_ex__2(); // 2!_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void BLOCK_2(); // BLOCK_2
void THRU_2(); // THRU_2
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void OV_dash_CANC(); // OV-CANC
void SAVE_dash_OV(); // SAVE-OV
void CTINIT(); // CTINIT
void _2_at_(); // 2@
void OVER(); // OVER
void SWAP(); // SWAP
void SP_at_(); // SP@
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void EXECUTE(); // EXECUTE
void TIME(); // TIME
void MATCH(); // MATCH
void UNK_0xb43e(); // UNK_0xb43e


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_OTABL = 0xb63a; // OTABL size: 54
// {0x1c, 0x71, 0x01, 0xa7, 0x48, 0x01, 0x75, 0xd2, 0x00, 0x93, 0xd2, 0x00, 0xfd, 0xda, 0x00, 0x96, 0x2e, 0x01, 0x3a, 0x71, 0x01, 0x84, 0xfa, 0x00, 0xc7, 0xae, 0x00, 0x03, 0xaf, 0x00, 0x29, 0x20, 0x01, 0x20, 0x20, 0x20, 0xce, 0x9c, 0x00, 0x73, 0x97, 0x00, 0xa8, 0xab, 0x01, 0x6e, 0xae, 0x00, 0xe5, 0xae, 0x00, 0x8a, 0xab, 0x01}

const unsigned short int pp_BTADDR = 0xbae3; // BTADDR size: 2
// {0xfc, 0xbb}

const unsigned short int pp_UNK_0xbae7 = 0xbae7; // UNK_0xbae7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xbaeb = 0xbaeb; // UNK_0xbaeb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xbaef = 0xbaef; // UNK_0xbaef size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xbaf3 = 0xbaf3; // UNK_0xbaf3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_HEALTI = 0xc128; // HEALTI size: 2
// {0x20, 0x45}

const unsigned short int pp_LASTAP = 0xc135; // LASTAP size: 4
// {0x49, 0x4e, 0x54, 0x20}

const unsigned short int pp_ROSTER = 0xc144; // ROSTER size: 18
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp__n_MISS = 0xc6e9; // #MISS size: 2
// {0x00, 0x00}


const unsigned short int cc_SB = 0xb43a; // SB
const unsigned short int cc_UNK_0xbaf7 = 0xbaf7; // UNK_0xbaf7
const unsigned short int cc_UNK_0xbafb = 0xbafb; // UNK_0xbafb
const unsigned short int cc_UNK_0xbaff = 0xbaff; // UNK_0xbaff



// ================================================
// 0xb3e7: WORD '+EDIT' codep=0x1ab5 parp=0xb3f1
// ================================================
// 0xb3f1: db 0xff 0xb3 0x1c 0x08 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xb405: WORD 'EDIT-OV' codep=0x83dd parp=0xb411
// ================================================
// 0xb411: dw 0x0db5

// ================================================
// 0xb413: WORD 'EDIT' codep=0x224c parp=0xb41c
// ================================================

void EDIT() // EDIT
{
  LoadOverlay("EDIT-OV");
  DR1(); // DR1
  EDIT(); // Overlay EDIT-OV
}


// ================================================
// 0xb424: WORD 'USE"' codep=0x224c parp=0xb42d
// ================================================

void USE_qm_() // USE"
{
  USING(); // USING
  DR1(); // DR1
}


// ================================================
// 0xb433: WORD 'SB' codep=0x2214 parp=0xb43a
// ================================================
// 0xb43a: dw 0x0168

// ================================================
// 0xb43c: WORD 'UNK_0xb43e' codep=0xb43e parp=0xb43e
// ================================================
// 0xb43e: mov    ax,ds
// 0xb440: mov    es,ax
// 0xb442: lodsw
// 0xb443: mov    bx,ax
// 0xb445: jmp    word ptr [bx]

// ================================================
// 0xb447: WORD 'UNK_0xb449' codep=0x224c parp=0xb449
// ================================================

void UNK_0xb449() // UNK_0xb449
{
  BLOCK_2(); // BLOCK_2
  SWAP(); // SWAP
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xb457: WORD 'UNK_0xb459' codep=0x224c parp=0xb459
// ================================================

void UNK_0xb459() // UNK_0xb459
{
  PAD(); // PAD
  Push(0x0041);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  PAD(); // PAD
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xb471: WORD 'UNK_0xb473' codep=0x224c parp=0xb473
// ================================================

void UNK_0xb473() // UNK_0xb473
{
  Push(user_SCR); // SCR
  Push(Read16(Pop())); // @
  UNK_0xb449(); // UNK_0xb449
}


// ================================================
// 0xb47b: WORD 'UNK_0xb47d' codep=0x224c parp=0xb47d
// ================================================

void UNK_0xb47d() // UNK_0xb47d
{
  Push(user_R_n_); // R#
  Push(Read16(Pop())); // @
  Push(0x0040);
  _slash_MOD(); // /MOD
}


// ================================================
// 0xb489: WORD 'UNK_0xb48b' codep=0x224c parp=0xb48b
// ================================================

void UNK_0xb48b() // UNK_0xb48b
{
  UNK_0xb47d(); // UNK_0xb47d
  UNK_0xb473(); // UNK_0xb473
  SWAP(); // SWAP
}


// ================================================
// 0xb493: WORD 'UNK_0xb495' codep=0x224c parp=0xb495
// ================================================

void UNK_0xb495() // UNK_0xb495
{
  unsigned short int a;
  UNK_0xb48b(); // UNK_0xb48b
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(0x0040);
  Push(a); // R>
  _dash_(); // -
}


// ================================================
// 0xb4a7: WORD 'UNK_0xb4a9' codep=0x224c parp=0xb4a9
// ================================================

void UNK_0xb4a9() // UNK_0xb4a9
{
  Push(user_R_n_); // R#
  _plus__ex__2(); // +!_2
  Exec("CR"); // call of word 0x26ee '(CR)'
  SPACE(); // SPACE
  UNK_0xb48b(); // UNK_0xb48b
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x005f);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  UNK_0xb495(); // UNK_0xb495
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xb4c1: WORD 'UNK_0xb4c3' codep=0x224c parp=0xb4c3
// ================================================

void UNK_0xb4c3() // UNK_0xb4c3
{
  UNK_0xb495(); // UNK_0xb495
  PAD(); // PAD
  COUNT(); // COUNT
  Push(1);
  MAX(); // MAX
  UNK_0xb43e(); // UNK_0xb43e
  MATCH(); // MATCH
  Push(user_R_n_); // R#
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xb4d7: WORD 'UNK_0xb4d9' codep=0x224c parp=0xb4d9
// ================================================

void UNK_0xb4d9() // UNK_0xb4d9
{
  unsigned short int i, imax;
  Push(0x007c);
  UNK_0xb459(); // UNK_0xb459
  Push(Pop()+1); // 1+
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(user_SCR); // SCR
    Store_2(); // !_2
    PRINT(".", 1); // (.")
    Push(0);
    Push(user_R_n_); // R#
    Store_2(); // !_2
    do
    {
      UNK_0xb4c3(); // UNK_0xb4c3
      if (Pop() != 0)
      {
        Exec("CR"); // call of word 0x26ee '(CR)'
        Exec("CR"); // call of word 0x26ee '(CR)'
        Push(user_SCR); // SCR
        Push(Read16(Pop())); // @
        Push(3);
        DrawR(); // .R
        SPACE(); // SPACE
        UNK_0xb47d(); // UNK_0xb47d
        Push(2);
        DrawR(); // .R
        Pop(); // DROP
        Push(1);
        UNK_0xb4a9(); // UNK_0xb4a9
      }
      Push(0x03ff);
      Push(user_R_n_); // R#
      Push(Read16(Pop())); // @
      _st_(); // <
    } while(Pop() == 0);
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xb531: WORD 'UNK_0xb533' codep=0x224c parp=0xb533
// ================================================

void UNK_0xb533() // UNK_0xb533
{
  Push(0);
  Push(Read16(cc_SB)); // SB
  Push(Pop() + Pop()); // +
  FILESIZ(); // FILESIZ
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push(0x0400);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Pop()-1); // 1-
  Push(Read16(cc_SB)); // SB
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xb551: WORD 'WS' codep=0x224c parp=0xb558
// ================================================

void WS() // WS
{
  UNK_0xb533(); // UNK_0xb533
  UNK_0xb4d9(); // UNK_0xb4d9
}


// ================================================
// 0xb55e: WORD 'WL' codep=0x224c parp=0xb565
// ================================================

void WL() // WL
{
  UNK_0xb533(); // UNK_0xb533
  THRU_2(); // THRU_2
}


// ================================================
// 0xb56b: WORD 'UNK_0xb56d' codep=0x224c parp=0xb56d
// ================================================

void UNK_0xb56d() // UNK_0xb56d
{
  unsigned short int i, imax;
  Push(Pop()-2); // 2-

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(Read16(Pop())); // @
    Push(0);
    D_dot_(); // D.
    Push(-2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xb581: WORD '.S' codep=0x224c parp=0xb588
// ================================================

void DrawS() // .S
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  DEPTH(); // DEPTH
  if (Pop() == 0) return;
  SP_at_(); // SP@
  S0(); // S0
  UNK_0xb56d(); // UNK_0xb56d
}


// ================================================
// 0xb598: WORD 'MUSIC' codep=0x1ab5 parp=0xb5a2
// ================================================
// 0xb5a2: db 0xb0 0xb5 0xf3 0xb3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xb5b6: WORD 'MUSIC-OV' codep=0x83dd parp=0xb5c3
// ================================================
// 0xb5c3: dw 0x3bc4

// ================================================
// 0xb5c5: WORD 'INTROS' codep=0x224c parp=0xb5d0
// ================================================

void INTROS() // INTROS
{
  LoadOverlay("MUSIC-OV");
  INTROS(); // Overlay MUSIC
}


// ================================================
// 0xb5d6: WORD 'HIMUS' codep=0x224c parp=0xb5e0
// ================================================

void HIMUS() // HIMUS
{
  LoadOverlay("MUSIC-OV");
  HIMUS(); // Overlay MUSIC
}


// ================================================
// 0xb5e6: WORD 'TALLOC' codep=0x224c parp=0xb5f1
// ================================================

void TALLOC() // TALLOC
{
  LoadOverlay("MUSIC-OV");
  TANDY_dash_ALLOC(); // Overlay MUSIC
}


// ================================================
// 0xb5f7: WORD 'SETABLT' codep=0x224c parp=0xb603
// ================================================

void SETABLT() // SETABLT
{
  LoadOverlay("MUSIC-OV");
  SETABLT(); // Overlay MUSIC
}


// ================================================
// 0xb609: WORD '*OP' codep=0x3b74 parp=0xb611
// ================================================
// 0xb611: dw 0x0002 0x2b71

// ================================================
// 0xb615: WORD '*COMM' codep=0x3b74 parp=0xb61f
// ================================================
// 0xb61f: dw 0x0001 0xacba

// ================================================
// 0xb623: WORD '*EOL' codep=0x3b74 parp=0xb62c
// ================================================
// 0xb62c: dw 0x0002 0x522f

// ================================================
// 0xb630: WORD 'OTABL' codep=0x1d29 parp=0xb63a
// ================================================
// 0xb63a: db 0x1c 0x71 0x01 0xa7 0x48 0x01 0x75 0xd2 0x00 0x93 0xd2 0x00 0xfd 0xda 0x00 0x96 0x2e 0x01 0x3a 0x71 0x01 0x84 0xfa 0x00 0xc7 0xae 0x00 0x03 0xaf 0x00 0x29 0x20 0x01 0x20 0x20 0x20 0xce 0x9c 0x00 0x73 0x97 0x00 0xa8 0xab 0x01 0x6e 0xae 0x00 0xe5 0xae 0x00 0x8a 0xab 0x01 ' q  H u         . :q          )        s     n        '

// ================================================
// 0xb670: WORD '+ORG' codep=0x4b3b parp=0xb679
// ================================================

void _plus_ORG() // +ORG
{
  switch(Pop()) // +ORG
  {
  case 18:
    Push(0);
    break;
  case 19:
    Push(1);
    break;
  case 21:
    Push(2);
    break;
  case 22:
    Push(3);
    break;
  case 23:
    Push(4);
    break;
  case 24:
    Push(5);
    break;
  default:
    Push(-1);
    break;

  }
}

// ================================================
// 0xb695: WORD 'ORGIA' codep=0x224c parp=0xb69f
// ================================================

void ORGIA() // ORGIA
{
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  MIN(); // MIN
  SWAP(); // SWAP
  _plus_ORG(); // +ORG case
  Push(Pop() + Pop()); // +
  Push(3);
  Push(Pop() * Pop()); // *
  Push(pp_OTABL); // OTABL
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xb6b7: WORD 'MISC-VOC' codep=0x1ab5 parp=0xb6c1
// ================================================
// 0xb6c1: db 0xcf 0xb6 0xa4 0xb5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xb6d5: WORD 'MISC-OV' codep=0x83dd parp=0xb6df
// ================================================
// 0xb6df: dw 0x729c

// ================================================
// 0xb6e1: WORD '=CARGO' codep=0x224c parp=0xb6ec
// ================================================

void _eq_CARGO() // =CARGO
{
  LoadOverlay("MISC-OV");
  _eq_CARG(); // Overlay MISC-OV
}


// ================================================
// 0xb6f2: WORD 'OV#IN$' codep=0x224c parp=0xb6fd
// ================================================

void OV_n_IN_do_() // OV#IN$
{
  LoadOverlay("MISC-OV");
  _ro__n_IN_do_(); // Overlay MISC-OV
}


// ================================================
// 0xb703: WORD 'OVQUIT' codep=0x224c parp=0xb70e
// ================================================

void OVQUIT() // OVQUIT
{
  LoadOverlay("MISC-OV");
  _ro_QUIT(); // Overlay MISC-OV
}


// ================================================
// 0xb714: WORD 'OV.0$$' codep=0x224c parp=0xb71f
// ================================================

void OV_dot_0_do__do_() // OV.0$$
{
  LoadOverlay("MISC-OV");
  _ro__dot_0_do__do_(); // Overlay MISC-OV
}


// ================================================
// 0xb725: WORD 'OV0$$$' codep=0x224c parp=0xb730
// ================================================

void OV0_do__do__do_() // OV0$$$
{
  LoadOverlay("MISC-OV");
  _ro_0_do__do__do_(); // Overlay MISC-OV
}


// ================================================
// 0xb736: WORD 'OVTRIM_2' codep=0x224c parp=0xb741
// ================================================

void OVTRIM_2() // OVTRIM_2
{
  LoadOverlay("MISC-OV");
  _ro_TRIM(); // Overlay MISC-OV
}


// ================================================
// 0xb747: WORD 'OVTRIM_1' codep=0x224c parp=0xb752
// ================================================

void OVTRIM_1() // OVTRIM_1
{
  unsigned short int i, imax;
  LoadOverlay("MISC-OV");
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _ro_TRIM(); // Overlay MISC-OV
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xb760: WORD 'OV?ART' codep=0x224c parp=0xb76b
// ================================================

void OV_ask_ART() // OV?ART
{
  LoadOverlay("MISC-OV");
  _ro__ask_ART(); // Overlay MISC-OV
}


// ================================================
// 0xb771: WORD 'OV?.EQ' codep=0x224c parp=0xb77c
// ================================================

void OV_ask__dot_EQ() // OV?.EQ
{
  LoadOverlay("MISC-OV");
  _ro__ask__dot_EQ(); // Overlay MISC-OV
}


// ================================================
// 0xb782: WORD 'TV?ART' codep=0x224c parp=0xb78d
// ================================================

void TV_ask_ART() // TV?ART
{
  LoadOverlay("MISC-OV");
  TV_ask_AR(); // Overlay MISC-OV
}


// ================================================
// 0xb793: WORD 'RSTE' codep=0x224c parp=0xb79c
// ================================================

void RSTE() // RSTE
{
  LoadOverlay("MISC-OV");
  RSTE(); // Overlay MISC-OV
}


// ================================================
// 0xb7a2: WORD 'SCON-V' codep=0x1ab5 parp=0xb7ad
// ================================================
// 0xb7ad: db 0xbb 0xb7 0xc3 0xb6 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xb7c1: WORD 'SCON-O' codep=0x83dd parp=0xb7cc
// ================================================
// 0xb7cc: dw 0x95b0

// ================================================
// 0xb7ce: WORD 'TOW' codep=0x224c parp=0xb7d6
// ================================================

void TOW() // TOW
{
  LoadOverlay("SCON-O");
  TOW_dash_US(); // Overlay SHIPCON
}


// ================================================
// 0xb7dc: WORD '.NOFUN' codep=0x224c parp=0xb7e7
// ================================================

void DrawNOFUN() // .NOFUN
{
  LoadOverlay("SCON-O");
  DrawNOFUN(); // Overlay SHIPCON
}


// ================================================
// 0xb7ed: WORD 'FX-VOC' codep=0x1ab5 parp=0xb7f8
// ================================================
// 0xb7f8: db 0x06 0xb8 0xaf 0xb7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xb80c: WORD 'FX-OV' codep=0x83dd parp=0xb816
// ================================================
// 0xb816: dw 0x6d04

// ================================================
// 0xb818: WORD 'PSYCH' codep=0x224c parp=0xb822
// ================================================

void PSYCH() // PSYCH
{
  LoadOverlay("FX-OV");
  PSYCH(); // Overlay FX
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xb82a: WORD '.TMAP' codep=0x224c parp=0xb834
// ================================================

void DrawTMAP() // .TMAP
{
  LoadOverlay("FX-OV");
  DrawTMAP(); // Overlay FX
}


// ================================================
// 0xb83a: WORD 'IT-VOC' codep=0x1ab5 parp=0xb845
// ================================================
// 0xb845: db 0x53 0xb8 0xfa 0xb7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'S                   '

// ================================================
// 0xb859: WORD 'IT-OV' codep=0x83dd parp=0xb863
// ================================================
// 0xb863: dw 0x9155

// ================================================
// 0xb865: WORD 'UNK_0xb867' codep=0x224c parp=0xb867
// ================================================

void UNK_0xb867() // UNK_0xb867
{
  LoadOverlay("IT-OV");
  DATE_do__gt_AD(); // Overlay IT-OV
}


// ================================================
// 0xb86d: WORD 'UNK_0xb86f' codep=0x224c parp=0xb86f
// ================================================

void UNK_0xb86f() // UNK_0xb86f
{
  LoadOverlay("IT-OV");
  BOX_gt_LIST(); // Overlay IT-OV
}


// ================================================
// 0xb875: WORD 'UNK_0xb877' codep=0x224c parp=0xb877
// ================================================

void UNK_0xb877() // UNK_0xb877
{
  LoadOverlay("IT-OV");
  GET_dash_BOXE(); // Overlay IT-OV
}


// ================================================
// 0xb87d: WORD 'UNK_0xb87f' codep=0x224c parp=0xb87f
// ================================================

void UNK_0xb87f() // UNK_0xb87f
{
  LoadOverlay("IT-OV");
  MAKE_dash_SCR(); // Overlay IT-OV
}


// ================================================
// 0xb885: WORD 'UNK_0xb887' codep=0x224c parp=0xb887
// ================================================

void UNK_0xb887() // UNK_0xb887
{
  LoadOverlay("IT-OV");
  DELETE_dash_S(); // Overlay IT-OV
}


// ================================================
// 0xb88d: WORD 'UNK_0xb88f' codep=0x224c parp=0xb88f
// ================================================

void UNK_0xb88f() // UNK_0xb88f
{
  LoadOverlay("IT-OV");
  BOX_gt_TOCS(); // Overlay IT-OV
}


// ================================================
// 0xb895: WORD 'UNK_0xb897' codep=0x224c parp=0xb897
// ================================================

void UNK_0xb897() // UNK_0xb897
{
  LoadOverlay("IT-OV");
  _gt_BOX(); // Overlay IT-OV
}


// ================================================
// 0xb89d: WORD 'UNK_0xb89f' codep=0x224c parp=0xb89f
// ================================================

void UNK_0xb89f() // UNK_0xb89f
{
  LoadOverlay("IT-OV");
  BOX_gt_(); // Overlay IT-OV
}


// ================================================
// 0xb8a5: WORD 'UNK_0xb8a7' codep=0x224c parp=0xb8a7
// ================================================

void UNK_0xb8a7() // UNK_0xb8a7
{
  LoadOverlay("IT-OV");
  _ro_BOX_gt__rc_(); // Overlay IT-OV
}


// ================================================
// 0xb8ad: WORD 'UNK_0xb8af' codep=0x224c parp=0xb8af
// ================================================

void UNK_0xb8af() // UNK_0xb8af
{
  LoadOverlay("IT-OV");
  CLASS_gt_BO(); // Overlay IT-OV
}


// ================================================
// 0xb8b5: WORD 'UNK_0xb8b7' codep=0x224c parp=0xb8b7
// ================================================

void UNK_0xb8b7() // UNK_0xb8b7
{
  LoadOverlay("IT-OV");
  ITEM_gt_PAD(); // Overlay IT-OV
}


// ================================================
// 0xb8bd: WORD 'DATE$>A' codep=0x224c parp=0xb8c9
// ================================================

void DATE_do__gt_A() // DATE$>A
{
  Push(0xb867); // probable 'UNK_0xb867'
  MODULE(); // MODULE
}


// ================================================
// 0xb8d1: WORD 'BOX>LIS' codep=0x224c parp=0xb8dd
// ================================================

void BOX_gt_LIS() // BOX>LIS
{
  Push(0xb86f); // probable 'UNK_0xb86f'
  MODULE(); // MODULE
}


// ================================================
// 0xb8e5: WORD 'GET-BOX' codep=0x224c parp=0xb8f1
// ================================================

void GET_dash_BOX() // GET-BOX
{
  Push(0xb877); // probable 'UNK_0xb877'
  MODULE(); // MODULE
}


// ================================================
// 0xb8f9: WORD 'MAKE-SC' codep=0x224c parp=0xb905
// ================================================

void MAKE_dash_SC() // MAKE-SC
{
  Push(0xb87f); // probable 'UNK_0xb87f'
  MODULE(); // MODULE
}


// ================================================
// 0xb90d: WORD 'DELETE-' codep=0x224c parp=0xb919
// ================================================

void DELETE_dash_() // DELETE-
{
  Push(0xb887); // probable 'UNK_0xb887'
  MODULE(); // MODULE
}


// ================================================
// 0xb921: WORD 'BOX>TOC' codep=0x224c parp=0xb92d
// ================================================

void BOX_gt_TOC() // BOX>TOC
{
  Push(0xb88f); // probable 'UNK_0xb88f'
  MODULE(); // MODULE
}


// ================================================
// 0xb935: WORD '>BOX' codep=0x224c parp=0xb93e
// ================================================

void _gt_BOX() // >BOX
{
  Push(0xb897); // probable 'UNK_0xb897'
  MODULE(); // MODULE
}


// ================================================
// 0xb946: WORD 'BOX>' codep=0x224c parp=0xb94f
// ================================================

void BOX_gt_() // BOX>
{
  Push(0xb89f); // probable 'UNK_0xb89f'
  MODULE(); // MODULE
}


// ================================================
// 0xb957: WORD '(BOX>)' codep=0x224c parp=0xb962
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  Push(0xb8a7); // probable 'UNK_0xb8a7'
  MODULE(); // MODULE
}


// ================================================
// 0xb96a: WORD 'CLASS>B' codep=0x224c parp=0xb976
// ================================================

void CLASS_gt_B() // CLASS>B
{
  Push(0xb8af); // probable 'UNK_0xb8af'
  MODULE(); // MODULE
}


// ================================================
// 0xb97e: WORD 'ITEM>PA' codep=0x224c parp=0xb98a
// ================================================

void ITEM_gt_PA() // ITEM>PA
{
  Push(0xb8b7); // probable 'UNK_0xb8b7'
  MODULE(); // MODULE
}


// ================================================
// 0xb992: WORD 'BLT-VOC' codep=0x1ab5 parp=0xb99e
// ================================================
// 0xb99e: db 0xac 0xb9 0x47 0xb8 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  G                 '

// ================================================
// 0xb9b2: WORD 'BLT-' codep=0x83dd parp=0xb9bb
// ================================================
// 0xb9bb: dw 0x7244

// ================================================
// 0xb9bd: WORD '@.HYBR' codep=0x224c parp=0xb9c8
// ================================================

void Get_dot_HYBR() // @.HYBR
{
  LoadOverlay("BLT-");
  Get_dot_HY(); // Overlay BLT-OV
}


// ================================================
// 0xb9ce: WORD '.TPIC' codep=0x224c parp=0xb9d8
// ================================================

void DrawTPIC() // .TPIC
{
  LoadOverlay("BLT-");
  DrawTPI(); // Overlay BLT-OV
}


// ================================================
// 0xb9de: WORD '.APIC' codep=0x224c parp=0xb9e8
// ================================================

void DrawAPIC() // .APIC
{
  LoadOverlay("BLT-");
  DrawAPI(); // Overlay BLT-OV
}


// ================================================
// 0xb9ee: WORD 'SETBLT' codep=0x224c parp=0xb9f9
// ================================================

void SETBLT() // SETBLT
{
  LoadOverlay("BLT-");
  SETB(); // Overlay BLT-OV
}


// ================================================
// 0xb9ff: WORD 'LDAPIC' codep=0x224c parp=0xba0a
// ================================================

void LDAPIC() // LDAPIC
{
  LoadOverlay("BLT-");
  LDAP(); // Overlay BLT-OV
}


// ================================================
// 0xba10: WORD 'LDSYS' codep=0x224c parp=0xba1a
// ================================================

void LDSYS() // LDSYS
{
  LoadOverlay("BLT-");
  LDSY(); // Overlay BLT-OV
}


// ================================================
// 0xba20: WORD 'VICONP' codep=0x1ab5 parp=0xba2b
// ================================================
// 0xba2b: db 0x39 0xba 0xa0 0xb9 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '9                   '

// ================================================
// 0xba3f: WORD 'ICONP' codep=0x83dd parp=0xba49
// ================================================
// 0xba49: dw 0x70c6

// ================================================
// 0xba4b: WORD 'ICON-' codep=0x224c parp=0xba55
// ================================================

void ICON_dash_() // ICON-
{
  LoadOverlay("ICONP");
  ICON_dash_PARM(); // Overlay ICONP-OV
}


// ================================================
// 0xba5b: WORD '+ICON_1' codep=0x224c parp=0xba65
// ================================================

void _plus_ICON_1() // +ICON_1
{
  LoadOverlay("ICONP");
  _plus_ICONBOX(); // Overlay ICONP-OV
}


// ================================================
// 0xba6b: WORD 'FRACT' codep=0x1ab5 parp=0xba75
// ================================================
// 0xba75: db 0x83 0xba 0x2d 0xba 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  -                 '

// ================================================
// 0xba89: WORD 'FRACT-OV' codep=0x83dd parp=0xba96
// ================================================
// 0xba96: dw 0x6fa4

// ================================================
// 0xba98: WORD 'MERCA' codep=0x224c parp=0xbaa2
// ================================================

void MERCA() // MERCA
{
  LoadOverlay("FRACT-OV");
  MERCATOR_dash_GEN(); // Overlay FRACT-OV
}


// ================================================
// 0xbaa8: WORD 'NEWCO' codep=0x224c parp=0xbab2
// ================================================

void NEWCO() // NEWCO
{
  LoadOverlay("FRACT-OV");
  NEWCONTOUR(); // Overlay FRACT-OV
}


// ================================================
// 0xbab8: WORD 'MAKE-' codep=0x224c parp=0xbac2
// ================================================

void MAKE_dash_() // MAKE-
{
  LoadOverlay("FRACT-OV");
  MAKE_dash_GLOBE(); // Overlay FRACT-OV
}


// ================================================
// 0xbac8: WORD 'SCRLC' codep=0x224c parp=0xbad2
// ================================================

void SCRLC() // SCRLC
{
  LoadOverlay("FRACT-OV");
  SCRLCON(); // Overlay FRACT-OV
}


// ================================================
// 0xbad8: WORD 'BTADDR' codep=0x1d29 parp=0xbae3
// ================================================
// 0xbae3: db 0xfc 0xbb '  '

// ================================================
// 0xbae5: WORD 'UNK_0xbae7' codep=0x1d29 parp=0xbae7
// ================================================
// 0xbae7: db 0x3a 0x20 ': '

// ================================================
// 0xbae9: WORD 'UNK_0xbaeb' codep=0x1d29 parp=0xbaeb
// ================================================
// 0xbaeb: db 0x3a 0x20 ': '

// ================================================
// 0xbaed: WORD 'UNK_0xbaef' codep=0x1d29 parp=0xbaef
// ================================================
// 0xbaef: db 0x3a 0x20 ': '

// ================================================
// 0xbaf1: WORD 'UNK_0xbaf3' codep=0x1d29 parp=0xbaf3
// ================================================
// 0xbaf3: db 0x3a 0x20 ': '

// ================================================
// 0xbaf5: WORD 'UNK_0xbaf7' codep=0x2214 parp=0xbaf7
// ================================================
// 0xbaf7: dw 0xbbda

// ================================================
// 0xbaf9: WORD 'UNK_0xbafb' codep=0x2214 parp=0xbafb
// ================================================
// 0xbafb: dw 0xbbd2

// ================================================
// 0xbafd: WORD 'UNK_0xbaff' codep=0x2214 parp=0xbaff
// ================================================
// 0xbaff: dw 0xbbf0

// ================================================
// 0xbb01: WORD 'UNK_0xbb03' codep=0x224c parp=0xbb03
// ================================================

void UNK_0xbb03() // UNK_0xbb03
{
  Push(pp_UNK_0xbaf3); // UNK_0xbaf3
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  Push((Pop()==Pop())?1:0); // =
  Push(pp_UNK_0xbaeb); // UNK_0xbaeb
  _plus__ex__2(); // +!_2
  Push(Pop()>>1); // 2/
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0080);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xbaf3); // UNK_0xbaf3
  Store_2(); // !_2
}


// ================================================
// 0xbb27: WORD 'UNK_0xbb29' codep=0x224c parp=0xbb29
// ================================================

void UNK_0xbb29() // UNK_0xbb29
{
  Push(pp_UNK_0xbaf3); // UNK_0xbaf3
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() & Pop()); // AND
  _0_gt_(); // 0>
  Push(pp_BTADDR); // BTADDR
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xbae7); // UNK_0xbae7
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x007f);
    Push(Pop() & Pop()); // AND
    Push(Pop()*2); // 2*
    Push(pp_UNK_0xbae7); // UNK_0xbae7
    _plus__ex__2(); // +!_2
  } else
  {
    Push(1);
    Push(pp_UNK_0xbaef); // UNK_0xbaef
    _plus__ex__2(); // +!_2
    Push(Read16(cc_UNK_0xbaf7)); // UNK_0xbaf7
    EXECUTE(); // EXECUTE
    Push(pp_UNK_0xbae7); // UNK_0xbae7
    _099(); // 099
  }
  UNK_0xbb03(); // UNK_0xbb03
  Push(pp_UNK_0xbaf3); // UNK_0xbaf3
  Push(Read16(Pop())); // @
  Push(0x0080);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xbb77: WORD 'HUFF>' codep=0x224c parp=0xbb81
// ================================================

void HUFF_gt_() // HUFF>
{
  Push(pp_UNK_0xbae7); // UNK_0xbae7
  _099(); // 099
  Push(pp_UNK_0xbaef); // UNK_0xbaef
  _099(); // 099
  Push(pp_UNK_0xbaeb); // UNK_0xbaeb
  _099(); // 099
  Push(0x0080);
  Push(pp_UNK_0xbaf3); // UNK_0xbaf3
  Store_2(); // !_2
  Push(Read16(cc_UNK_0xbafb)); // UNK_0xbafb
  EXECUTE(); // EXECUTE

  label3:
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xbaef); // UNK_0xbaef
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) goto label1;
  do
  {
    OVER(); // OVER
    Push(pp_UNK_0xbaeb); // UNK_0xbaeb
    Push(Read16(Pop())); // @
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    UNK_0xbb29(); // UNK_0xbb29
  } while(Pop() == 0);
  goto label3;

  label1:
  Pop(); Pop(); // 2DROP
  Push(Read16(cc_UNK_0xbaff)); // UNK_0xbaff
  EXECUTE(); // EXECUTE
}


// ================================================
// 0xbbc1: WORD 'PHRASE$' codep=0x7420 parp=0xbbcd
// ================================================
IFieldType PHRASE_do_ = {STRINGIDX, 0x0b, 0x00};
// 0xbbd0: db 0x4c 0x22 0xf7 0x66 0x65 0x6d 0x90 0x16 0x4c 0x22 0xf7 0x66 0x41 0x0e 0x92 0x0c 0x72 0x0f 0xe7 0x0f 0x0a 0x6d 0x2e 0x0f 0xf7 0x66 0x23 0x6d 0x90 0x16 0x4c 0x22 0xcb 0xbb 0xe7 0x0f 0x92 0x0c 0xf7 0x66 0x0a 0x6d 0x90 0x16 0xa1 0x81 0x8b 0x81 0x5e 0x81 0x81 0x45 0x81 0x52 0x81 0x44 0x81 0x56 0x4b 0x81 0x81 0x30 0x81 0x2d 0x81 0x4a 0x36 0x38 0x81 0x20 0x83 0x81 0x81 0x48 0x59 0x43 0x82 0x81 0x4d 0x57 0x81 0x2e 0x81 0x42 0x84 0x81 0x31 0x81 0x5a 0x81 0x34 0x33 0x86 0x81 0x51 0x81 0x81 0x32 0x81 0x25 0x2b 0x81 0x23 0x28 0x81 0x3f 0x39 0x81 0x37 0x2a 0x86 0x81 0x84 0x81 0x54 0x81 0x81 0x4c 0x50 0x46 0x53 0x4f 0x82 0x81 0x4e 0x41 0x49 0x81 0x81 0x55 0x81 0x47 0x2c 0x81 0x81 0x58 0x27 0x81 0x81 0x21 0x35 0x81 0x26 0x81 0x29 0x2f 'L" fem  L" fA   r    m.  f#m  L"       f m      ^  E R D VK  0 - J68     HYC  MW . B  1 Z 43  Q  2 %+ #( ?9 7*    T  LPFSO  NAI  U G,  X'  !5 & )/'

// ================================================
// 0xbc62: WORD 'ENG-VOC' codep=0x1ab5 parp=0xbc6e
// ================================================
// 0xbc6e: db 0x7c 0xbc 0x77 0xba 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '| w                 '

// ================================================
// 0xbc82: WORD 'ENG-O' codep=0x83dd parp=0xbc8c
// ================================================
// 0xbc8c: dw 0x7f51

// ================================================
// 0xbc8e: WORD 'OV/DA' codep=0x224c parp=0xbc98
// ================================================

void OV_slash_DA() // OV/DA
{
  LoadOverlay("ENG-O");
  _ro__slash_DAMAGE_rc_(); // Overlay ENGINEER
}


// ================================================
// 0xbc9e: WORD 'OV/RE' codep=0x224c parp=0xbca8
// ================================================

void OV_slash_RE() // OV/RE
{
  LoadOverlay("ENG-O");
  _ro__slash_REPAIR_rc_(); // Overlay ENGINEER
}


// ================================================
// 0xbcae: WORD 'OVDBA' codep=0x224c parp=0xbcb8
// ================================================

void OVDBA() // OVDBA
{
  LoadOverlay("ENG-O");
  DBARS(); // Overlay ENGINEER
}


// ================================================
// 0xbcbe: WORD 'SETTER' codep=0x1ab5 parp=0xbcc9
// ================================================
// 0xbcc9: db 0xd7 0xbc 0x70 0xbc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  p                 '

// ================================================
// 0xbcdd: WORD 'PLSET-OV' codep=0x83dd parp=0xbcea
// ================================================
// 0xbcea: dw 0x8cdb

// ================================================
// 0xbcec: WORD 'SET-PLAN' codep=0x224c parp=0xbcf9
// ================================================

void SET_dash_PLAN() // SET-PLAN
{
  LoadOverlay("PLSET-OV");
  PLAN_dash_RUL(); // Overlay PLSET-OV
}


// ================================================
// 0xbcff: WORD 'ORBIT_2' codep=0x1ab5 parp=0xbd09
// ================================================
// 0xbd09: db 0x17 0xbd 0xcb 0xbc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xbd1d: WORD 'ORBIT_1' codep=0x83dd parp=0xbd27
// ================================================
// 0xbd27: dw 0x802d

// ================================================
// 0xbd29: WORD 'INIT-' codep=0x224c parp=0xbd33
// ================================================

void INIT_dash_() // INIT-
{
  LoadOverlay("ORBIT_1");
  INIT_dash_ORBIT(); // Overlay ORBIT-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbd3b: WORD 'SHOWS' codep=0x224c parp=0xbd45
// ================================================

void SHOWS() // SHOWS
{
  LoadOverlay("ORBIT_1");
  SHOWSITE(); // Overlay ORBIT-OV
}


// ================================================
// 0xbd4b: WORD 'DESCE' codep=0x224c parp=0xbd55
// ================================================

void DESCE() // DESCE
{
  LoadOverlay("ORBIT_1");
  DESCEND(); // Overlay ORBIT-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbd5d: WORD 'ASCEN' codep=0x224c parp=0xbd67
// ================================================

void ASCEN() // ASCEN
{
  LoadOverlay("ORBIT_1");
  ASCEND(); // Overlay ORBIT-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbd6f: WORD 'ROTAT' codep=0x224c parp=0xbd79
// ================================================

void ROTAT() // ROTAT
{
  LoadOverlay("ORBIT_1");
  ROTATE(); // Overlay ORBIT-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbd81: WORD 'SEEGR' codep=0x224c parp=0xbd8b
// ================================================

void SEEGR() // SEEGR
{
  LoadOverlay("ORBIT_1");
  SEEGRID(); // Overlay ORBIT-OV
}


// ================================================
// 0xbd91: WORD 'MROTA' codep=0x224c parp=0xbd9b
// ================================================

void MROTA() // MROTA
{
  Push(0xbd79); // probable 'ROTAT'
  MODULE(); // MODULE
}


// ================================================
// 0xbda3: WORD 'CULTURE' codep=0x1ab5 parp=0xbdaf
// ================================================
// 0xbdaf: db 0xbd 0xbd 0x0b 0xbd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xbdc3: WORD 'CULTUR' codep=0x83dd parp=0xbdce
// ================================================
// 0xbdce: dw 0x6ca2

// ================================================
// 0xbdd0: WORD '.CULT' codep=0x224c parp=0xbdda
// ================================================

void DrawCULT() // .CULT
{
  LoadOverlay("CULTUR");
  DrawCULTURE(); // Overlay CULTURE
}


// ================================================
// 0xbde0: WORD '.RACE' codep=0x224c parp=0xbdea
// ================================================

void DrawRACE() // .RACE
{
  LoadOverlay("CULTUR");
  DrawRACE(); // Overlay CULTURE
}


// ================================================
// 0xbdf0: WORD 'DESCRI' codep=0x1ab5 parp=0xbdfb
// ================================================
// 0xbdfb: db 0x09 0xbe 0xb1 0xbd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xbe0f: WORD 'DESCR' codep=0x83dd parp=0xbe19
// ================================================
// 0xbe19: dw 0x7923

// ================================================
// 0xbe1b: WORD 'DO-LO' codep=0x224c parp=0xbe25
// ================================================

void DO_dash_LO() // DO-LO
{
  LoadOverlay("DESCR");
  DESCRIBE(); // Overlay DESCRIBE
}


// ================================================
// 0xbe2b: WORD '.LIFE' codep=0x224c parp=0xbe35
// ================================================

void DrawLIFE() // .LIFE
{
  LoadOverlay("DESCR");
  CLASS_gt_TY(); // Overlay DESCRIBE
}


// ================================================
// 0xbe3b: WORD '.HUFF' codep=0x224c parp=0xbe45
// ================================================

void DrawHUFF() // .HUFF
{
  LoadOverlay("DESCR");
  DrawPHRASE(); // Overlay DESCRIBE
}


// ================================================
// 0xbe4b: WORD '.AHUF' codep=0x224c parp=0xbe55
// ================================================

void DrawAHUF() // .AHUF
{
  LoadOverlay("DESCR");
  DrawAPHRASE(); // Overlay DESCRIBE
}


// ================================================
// 0xbe5b: WORD 'SSCN' codep=0x224c parp=0xbe64
// ================================================

void SSCN() // SSCN
{
  LoadOverlay("DESCR");
  SYSCAN(); // Overlay DESCRIBE
}


// ================================================
// 0xbe6a: WORD '?COMS' codep=0x224c parp=0xbe74
// ================================================

void IsCOMS() // ?COMS
{
  LoadOverlay("DESCR");
  IsCOMSG(); // Overlay DESCRIBE
}


// ================================================
// 0xbe7a: WORD 'SSCAN' codep=0x224c parp=0xbe84
// ================================================

void SSCAN() // SSCAN
{
  Push(0xbe64); // probable 'SSCN'
  MODULE(); // MODULE
}


// ================================================
// 0xbe8c: WORD 'CPAUS' codep=0x224c parp=0xbe96
// ================================================

void CPAUS() // CPAUS
{
  LoadOverlay("DESCR");
  APAUSE(); // Overlay DESCRIBE
}


// ================================================
// 0xbe9c: WORD 'COMM-VOC' codep=0x1ab5 parp=0xbea9
// ================================================
// 0xbea9: db 0xb7 0xbe 0xfd 0xbd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xbebd: WORD 'COMM-OV' codep=0x83dd parp=0xbec9
// ================================================
// 0xbec9: dw 0x7b03

// ================================================
// 0xbecb: WORD 'OVINIT-_2' codep=0x224c parp=0xbed7
// ================================================

void OVINIT_dash__2() // OVINIT-_2
{
  LoadOverlay("COMM-OV");
  ICOMM(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
  Push(1);
  Push(0xb822); // probable 'PSYCH'
  MODULE(); // MODULE
}


// ================================================
// 0xbee7: WORD 'U-COMM' codep=0x224c parp=0xbef2
// ================================================

void U_dash_COMM() // U-COMM
{
  LoadOverlay("COMM-OV");
  CL1(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbefa: WORD 'COMM-EX' codep=0x224c parp=0xbf06
// ================================================

void COMM_dash_EX() // COMM-EX
{
  LoadOverlay("COMM-OV");
  COMM_dash_EXPERT(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbf0e: WORD 'A>O' codep=0x224c parp=0xbf16
// ================================================

void A_gt_O() // A>O
{
  LoadOverlay("COMM-OV");
  A_gt_ORIGINATO(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbf1e: WORD 'O>C' codep=0x224c parp=0xbf26
// ================================================

void O_gt_C() // O>C
{
  LoadOverlay("COMM-OV");
  ORIGINATOR_gt_(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbf2e: WORD '>HAIL' codep=0x224c parp=0xbf38
// ================================================

void _gt_HAIL() // >HAIL
{
  LoadOverlay("COMM-OV");
  _gt_HAIL_do_(); // Overlay COMM-OV
}


// ================================================
// 0xbf3e: WORD 'OV+!EDL' codep=0x224c parp=0xbf4a
// ================================================

void OV_plus__ex_EDL() // OV+!EDL
{
  LoadOverlay("COMM-OV");
  _plus__ex_EDL(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbf52: WORD 'OVEDL+A' codep=0x224c parp=0xbf5e
// ================================================

void OVEDL_plus_A() // OVEDL+A
{
  LoadOverlay("COMM-OV");
  EDL_plus_AUX(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbf66: WORD 'P>CT' codep=0x224c parp=0xbf6f
// ================================================

void P_gt_CT() // P>CT
{
  LoadOverlay("COMM-OV");
  _ro_PHRASE_gt_CT_rc_(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbf77: WORD 'CTUP' codep=0x224c parp=0xbf80
// ================================================

void CTUP() // CTUP
{
  LoadOverlay("COMM-OV");
  CTSCROLL(); // Overlay COMM-OV
}


// ================================================
// 0xbf86: WORD '1SYL' codep=0x224c parp=0xbf8f
// ================================================

void _1SYL() // 1SYL
{
  LoadOverlay("COMM-OV");
  _1SYL(); // Overlay COMM-OV
}


// ================================================
// 0xbf95: WORD 'MCOMM-E' codep=0x224c parp=0xbfa1
// ================================================

void MCOMM_dash_E() // MCOMM-E
{
  Push(0xbf06); // probable 'COMM-EX'
  MODULE(); // MODULE
}


// ================================================
// 0xbfa9: WORD 'MEDL+AU' codep=0x224c parp=0xbfb5
// ================================================

void MEDL_plus_AU() // MEDL+AU
{
  Push(0xbf5e); // probable 'OVEDL+A'
  MODULE(); // MODULE
}


// ================================================
// 0xbfbd: WORD 'DA-STR' codep=0x224c parp=0xbfc8
// ================================================

void DA_dash_STR() // DA-STR
{
  LoadOverlay("COMM-OV");
  IAPWR(); // Overlay COMM-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xbfd0: WORD 'EDL>P' codep=0x224c parp=0xbfda
// ================================================

void EDL_gt_P() // EDL>P
{
  LoadOverlay("COMM-OV");
  EDL_gt_P(); // Overlay COMM-OV
}


// ================================================
// 0xbfe0: WORD 'BLDLI-VOC' codep=0x1ab5 parp=0xbfea
// ================================================
// 0xbfea: db 0xf8 0xbf 0xab 0xbe 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xbffe: WORD 'BLDLI-OV' codep=0x83dd parp=0xc008
// ================================================
// 0xc008: dw 0x91c3

// ================================================
// 0xc00a: WORD 'BLDLI' codep=0x224c parp=0xc014
// ================================================

void BLDLI() // BLDLI
{
  LoadOverlay("BLDLI-OV");
  BLD_dash_LIST(); // Overlay BLDLISTS
}


// ================================================
// 0xc01a: WORD 'SET-C' codep=0x224c parp=0xc024
// ================================================

void SET_dash_C() // SET-C
{
  LoadOverlay("BLDLI-OV");
  SET_dash_CARG(); // Overlay BLDLISTS
}


// ================================================
// 0xc02a: WORD 'T>O' codep=0x224c parp=0xc032
// ================================================

void T_gt_O() // T>O
{
  LoadOverlay("BLDLI-OV");
  TRADE_gt_OR(); // Overlay BLDLISTS
}


// ================================================
// 0xc038: WORD '!TAMT' codep=0x224c parp=0xc042
// ================================================

void StoreTAMT() // !TAMT
{
  LoadOverlay("BLDLI-OV");
  StoreTAMT(); // Overlay BLDLISTS
}


// ================================================
// 0xc048: WORD '@TAMT' codep=0x224c parp=0xc052
// ================================================

void GetTAMT() // @TAMT
{
  LoadOverlay("BLDLI-OV");
  GetTAMT(); // Overlay BLDLISTS
}


// ================================================
// 0xc058: WORD 'SCI-VOC' codep=0x1ab5 parp=0xc064
// ================================================
// 0xc064: db 0x72 0xc0 0xec 0xbf 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'r                   '

// ================================================
// 0xc078: WORD 'SCI-OV' codep=0x83dd parp=0xc083
// ================================================
// 0xc083: dw 0x82e5

// ================================================
// 0xc085: WORD 'OV/STA' codep=0x224c parp=0xc090
// ================================================

void OV_slash_STA() // OV/STA
{
  LoadOverlay("SCI-OV");
  _ro__slash_STATUS_rc_(); // Overlay SCIENCE
}


// ================================================
// 0xc096: WORD 'OV/STX' codep=0x224c parp=0xc0a1
// ================================================

void OV_slash_STX() // OV/STX
{
  LoadOverlay("SCI-OV");
  DrawSTAT_dash_TEXT(); // Overlay SCIENCE
}


// ================================================
// 0xc0a7: WORD 'OVSTAR' codep=0x224c parp=0xc0b2
// ================================================

void OVSTAR() // OVSTAR
{
  LoadOverlay("SCI-OV");
  Push(0);
  DrawSTARDATE(); // Overlay SCIENCE
}


// ================================================
// 0xc0ba: WORD 'OV/SEN' codep=0x224c parp=0xc0c5
// ================================================

void OV_slash_SEN() // OV/SEN
{
  LoadOverlay("SCI-OV");
  _ro__slash_SENSORS_rc_(); // Overlay SCIENCE
}


// ================================================
// 0xc0cb: WORD '?HEAVY' codep=0x224c parp=0xc0d6
// ================================================

void IsHEAVY() // ?HEAVY
{
  LoadOverlay("SCI-OV");
  IsHEAVY(); // Overlay SCIENCE
}


// ================================================
// 0xc0dc: WORD '/STARD' codep=0x224c parp=0xc0e7
// ================================================

void _slash_STARD() // /STARD
{
  Push(0xc0b2); // probable 'OVSTAR'
  MODULE(); // MODULE
}


// ================================================
// 0xc0ef: WORD '.SORD' codep=0x224c parp=0xc0f9
// ================================================

void DrawSORD() // .SORD
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0xc0a1); // probable 'OV/STX'
    MODULE(); // MODULE
  }
  Push(3);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(0xbcb8); // probable 'OVDBA'
  MODULE(); // MODULE
}


// ================================================
// 0xc11d: WORD 'HEALTI' codep=0x1d29 parp=0xc128
// ================================================
// 0xc128: db 0x20 0x45 ' E'

// ================================================
// 0xc12a: WORD 'LASTAP' codep=0x1d29 parp=0xc135
// ================================================
// 0xc135: db 0x49 0x4e 0x54 0x20 'INT '

// ================================================
// 0xc139: WORD 'ROSTER' codep=0x1d29 parp=0xc144
// ================================================
// 0xc144: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '                  '

// ================================================
// 0xc156: WORD 'HEALER' codep=0x1ab5 parp=0xc161
// ================================================
// 0xc161: db 0x6f 0xc1 0x66 0xc0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'o f                 '

// ================================================
// 0xc175: WORD 'HEAL-O' codep=0x83dd parp=0xc180
// ================================================
// 0xc180: dw 0x8c24

// ================================================
// 0xc182: WORD '(OBI' codep=0x224c parp=0xc18b
// ================================================

void _ro_OBI() // (OBI
{
  LoadOverlay("HEAL-O");
  OBITS(); // Overlay HEAL-OV
}


// ================================================
// 0xc191: WORD '(.VI' codep=0x224c parp=0xc19a
// ================================================

void _ro__dot_VI() // (.VI
{
  LoadOverlay("HEAL-O");
  DrawVITS(); // Overlay HEAL-OV
}


// ================================================
// 0xc1a0: WORD '(HEA' codep=0x224c parp=0xc1a9
// ================================================

void _ro_HEA() // (HEA
{
  LoadOverlay("HEAL-O");
  HEAL(); // Overlay HEAL-OV
}


// ================================================
// 0xc1af: WORD '(ROL' codep=0x224c parp=0xc1b8
// ================================================

void _ro_ROL() // (ROL
{
  LoadOverlay("HEAL-O");
  ROLE_dash_C(); // Overlay HEAL-OV
}


// ================================================
// 0xc1be: WORD 'HEAL' codep=0x224c parp=0xc1c7
// ================================================

void HEAL() // HEAL
{
  Push(0xc1a9); // probable '(HEA'
  MODULE(); // MODULE
}


// ================================================
// 0xc1cf: WORD '.VIT' codep=0x224c parp=0xc1d8
// ================================================

void DrawVIT() // .VIT
{
  Push(0xc19a); // probable '(.VI'
  MODULE(); // MODULE
}


// ================================================
// 0xc1e0: WORD 'KILL' codep=0x224c parp=0xc1e9
// ================================================

void KILL() // KILL
{
  LoadOverlay("HEAL-O");
  KILL(); // Overlay HEAL-OV
}


// ================================================
// 0xc1ef: WORD '?APP' codep=0x224c parp=0xc1f8
// ================================================

void IsAPP() // ?APP
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTAP); // LASTAP
  _2_at_(); // 2@
  Push(pp_HEALTI); // HEALTI
  Push(Read16(Pop())); // @
  Push(0);
  D_plus_(); // D+
  D_gt_(); // D>
  Push(pp_IsHEAL); // ?HEAL
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_LASTAP); // LASTAP
    _2_ex__2(); // 2!_2
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xc226: WORD 'BANK-VOC' codep=0x1ab5 parp=0xc233
// ================================================
// 0xc233: db 0x41 0xc2 0x63 0xc1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'A c                 '

// ================================================
// 0xc247: WORD 'BANK-OV' codep=0x83dd parp=0xc253
// ================================================
// 0xc253: dw 0x730f

// ================================================
// 0xc255: WORD 'OVINIT-_1' codep=0x224c parp=0xc261
// ================================================

void OVINIT_dash__1() // OVINIT-_1
{
  LoadOverlay("BANK-OV");
  INIT_dash_BALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc267: WORD 'OVTRANS' codep=0x224c parp=0xc273
// ================================================

void OVTRANS() // OVTRANS
{
  LoadOverlay("BANK-OV");
  TRANSACT(); // Overlay BANK-OV
}


// ================================================
// 0xc279: WORD 'OVD@BAL' codep=0x224c parp=0xc285
// ================================================

void OVD_at_BAL() // OVD@BAL
{
  LoadOverlay("BANK-OV");
  GetDBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc28b: WORD 'OVD!BAL' codep=0x224c parp=0xc297
// ================================================

void OVD_ex_BAL() // OVD!BAL
{
  LoadOverlay("BANK-OV");
  StoreDBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc29d: WORD 'OV?BALA' codep=0x224c parp=0xc2a9
// ================================================

void OV_ask_BALA() // OV?BALA
{
  LoadOverlay("BANK-OV");
  IsBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc2af: WORD 'OV!TFLA' codep=0x224c parp=0xc2bb
// ================================================

void OV_ex_TFLA() // OV!TFLA
{
  LoadOverlay("BANK-OV");
  StoreTFLAG(); // Overlay BANK-OV
}


// ================================================
// 0xc2c1: WORD 'I-TRANS' codep=0x224c parp=0xc2cd
// ================================================

void I_dash_TRANS() // I-TRANS
{
  LoadOverlay("BANK-OV");
  INT_pe_(); // Overlay BANK-OV
}


// ================================================
// 0xc2d3: WORD 'U-B' codep=0x224c parp=0xc2db
// ================================================

void U_dash_B() // U-B
{
  LoadOverlay("BANK-OV");
  _ro_U_dash_BANK_rc_(); // Overlay BANK-OV
}


// ================================================
// 0xc2e1: WORD 'T+BALAN' codep=0x224c parp=0xc2ed
// ================================================

void T_plus_BALAN() // T+BALAN
{
  LoadOverlay("BANK-OV");
  GetDBALANCE(); // Overlay BANK-OV
  D_plus_(); // D+
  StoreDBALANCE(); // Overlay BANK-OV
  StoreTFLAG(); // Overlay BANK-OV
}


// ================================================
// 0xc2f9: WORD 'XCOM-VOC' codep=0x1ab5 parp=0xc306
// ================================================
// 0xc306: db 0x14 0xc3 0x35 0xc2 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  5                 '

// ================================================
// 0xc31a: WORD 'XCOM-OV' codep=0x83dd parp=0xc326
// ================================================
// 0xc326: dw 0x7cdb

// ================================================
// 0xc328: WORD 'XCOMM' codep=0x224c parp=0xc332
// ================================================

void XCOMM() // XCOMM
{
  LoadOverlay("XCOM-OV");
  _ro_XCOMM_rc_(); // Overlay COMMSPEC-OV
}


// ================================================
// 0xc338: WORD '#>PRO' codep=0x224c parp=0xc342
// ================================================

void _n__gt_PRO() // #>PRO
{
  LoadOverlay("XCOM-OV");
  _n__gt_PRO(); // Overlay COMMSPEC-OV
}


// ================================================
// 0xc348: WORD 'REPAIR' codep=0x1ab5 parp=0xc353
// ================================================
// 0xc353: db 0x61 0xc3 0x08 0xc3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'a                   '

// ================================================
// 0xc367: WORD 'REPAIR-' codep=0x83dd parp=0xc373
// ================================================
// 0xc373: dw 0x8c73

// ================================================
// 0xc375: WORD 'DO-REPA' codep=0x224c parp=0xc381
// ================================================

void DO_dash_REPA() // DO-REPA
{
  LoadOverlay("REPAIR-");
  DO_dash_REPA(); // Overlay REPAIR-OV
  SAVE_dash_OV(); // SAVE-OV
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTREP); // LASTREP
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xc391: WORD '?SHIP-R' codep=0x224c parp=0xc39d
// ================================================

void IsSHIP_dash_R() // ?SHIP-R
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTREP); // LASTREP
  _2_at_(); // 2@
  D_dash_(); // D-
  DABS(); // DABS
  Push(pp_REPAIRT); // REPAIRT
  Push(Read16(Pop())); // @
  Push(0);
  D_gt_(); // D>
  Push(pp_IsREPAIR); // ?REPAIR
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(pp_IsREPAIR); // ?REPAIR
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xc3c3: WORD 'MREPAIR' codep=0x224c parp=0xc3cf
// ================================================

void MREPAIR() // MREPAIR
{
  IsSHIP_dash_R(); // ?SHIP-R
  if (Pop() == 0) return;
  Push(0xc381); // probable 'DO-REPA'
  MODULE(); // MODULE
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(3);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(0xbcb8); // probable 'OVDBA'
  MODULE(); // MODULE
}


// ================================================
// 0xc3ef: WORD 'BARTE' codep=0x1ab5 parp=0xc3f9
// ================================================
// 0xc3f9: db 0x07 0xc4 0x55 0xc3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  U                 '

// ================================================
// 0xc40d: WORD 'BARTER-' codep=0x83dd parp=0xc419
// ================================================
// 0xc419: dw 0x9262

// ================================================
// 0xc41b: WORD 'DOENTER' codep=0x224c parp=0xc427
// ================================================

void DOENTER() // DOENTER
{
  LoadOverlay("BARTER-");
  DO_dash_ENTER(); // Overlay BARTER
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc42f: WORD 'DOOPEN' codep=0x224c parp=0xc43a
// ================================================

void DOOPEN() // DOOPEN
{
  LoadOverlay("BARTER-");
  DO_dash_OPEN_2(); // Overlay BARTER
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc442: WORD 'DOBARTE' codep=0x224c parp=0xc44e
// ================================================

void DOBARTE() // DOBARTE
{
  LoadOverlay("BARTER-");
  DO_dash_BARTER(); // Overlay BARTER
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc456: WORD '!PFLAGS' codep=0x224c parp=0xc462
// ================================================

void StorePFLAGS() // !PFLAGS
{
  LoadOverlay("BARTER-");
  StorePFLAGS(); // Overlay BARTER
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc46a: WORD 'L>P' codep=0x224c parp=0xc472
// ================================================

void L_gt_P() // L>P
{
  LoadOverlay("BARTER-");
  L_gt_P(); // Overlay BARTER
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc47a: WORD 'MAR' codep=0x1ab5 parp=0xc482
// ================================================
// 0xc482: db 0x90 0xc4 0xfb 0xc3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc496: WORD 'MARKE' codep=0x83dd parp=0xc4a0
// ================================================
// 0xc4a0: dw 0x93bc

// ================================================
// 0xc4a2: WORD 'TRADE' codep=0x224c parp=0xc4ac
// ================================================

void TRADE() // TRADE
{
  LoadOverlay("MARKE");
  TRADE(); // Overlay MARKET
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc4b4: WORD 'SITE-VOC' codep=0x1ab5 parp=0xc4c1
// ================================================
// 0xc4c1: db 0xcf 0xc4 0x84 0xc4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc4d5: WORD 'SITE-OV' codep=0x83dd parp=0xc4e1
// ================================================
// 0xc4e1: dw 0x7111

// ================================================
// 0xc4e3: WORD '(.MERC)' codep=0x224c parp=0xc4ef
// ================================================

void _ro__dot_MERC_rc_() // (.MERC)
{
  LoadOverlay("SITE-OV");
  DrawMERCATOR(); // Overlay SITE-OV
  OV_dash_CANC(); // OV-CANC
}


// ================================================
// 0xc4f7: WORD '(GETSITE)' codep=0x224c parp=0xc505
// ================================================

void _ro_GETSITE_rc_() // (GETSITE)
{
  LoadOverlay("SITE-OV");
  GETSITE_2(); // Overlay SITE-OV
  SAVE_dash_OV(); // SAVE-OV
  OV_dash_CANC(); // OV-CANC
}


// ================================================
// 0xc50f: WORD 'FLUX-VOC' codep=0x1ab5 parp=0xc51c
// ================================================
// 0xc51c: db 0x2a 0xc5 0xc3 0xc4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '*                   '

// ================================================
// 0xc530: WORD 'FLUX-OV' codep=0x83dd parp=0xc53c
// ================================================
// 0xc53c: dw 0x88d6

// ================================================
// 0xc53e: WORD 'OVFLU' codep=0x224c parp=0xc548
// ================================================

void OVFLU() // OVFLU
{
  LoadOverlay("FLUX-OV");
  FLUX(); // Overlay FLUX-EFFECT
}


// ================================================
// 0xc54e: WORD 'JUMPF' codep=0x224c parp=0xc558
// ================================================

void JUMPF() // JUMPF
{
  LoadOverlay("FLUX-OV");
  JUMPFX(); // Overlay FLUX-EFFECT
}


// ================================================
// 0xc55e: WORD 'DPART-VOC' codep=0x1ab5 parp=0xc56c
// ================================================
// 0xc56c: db 0x7a 0xc5 0x1e 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'z                   '

// ================================================
// 0xc580: WORD 'DPART-OV' codep=0x83dd parp=0xc58d
// ================================================
// 0xc58d: dw 0x6edf

// ================================================
// 0xc58f: WORD 'DEPART' codep=0x224c parp=0xc59a
// ================================================

void DEPART() // DEPART
{
  LoadOverlay("DPART-OV");
  DEPART(); // Overlay DEPART
}


// ================================================
// 0xc5a0: WORD 'CLOUD-V' codep=0x1ab5 parp=0xc5ac
// ================================================
// 0xc5ac: db 0xba 0xc5 0x6e 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  n                 '

// ================================================
// 0xc5c0: WORD 'CLOUD-O' codep=0x83dd parp=0xc5cc
// ================================================
// 0xc5cc: dw 0x9512

// ================================================
// 0xc5ce: WORD 'DO-CLOU' codep=0x224c parp=0xc5da
// ================================================

void DO_dash_CLOU() // DO-CLOU
{
  LoadOverlay("CLOUD-O");
  DO_dash_CLOUD(); // Overlay CLOUD-OV
}


// ================================================
// 0xc5e0: WORD 'NAV-VOC' codep=0x1ab5 parp=0xc5ec
// ================================================
// 0xc5ec: db 0xfa 0xc5 0xae 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc600: WORD 'NAV-O' codep=0x83dd parp=0xc60a
// ================================================
// 0xc60a: dw 0x8442

// ================================================
// 0xc60c: WORD 'OV/(D' codep=0x224c parp=0xc616
// ================================================

void OV_slash__ro_D() // OV/(D
{
  LoadOverlay("NAV-O");
  _ro__slash__ro_DIS_rc_ARM_rc_(); // Overlay NAVIGATR
}


// ================================================
// 0xc61c: WORD 'OV/(U' codep=0x224c parp=0xc626
// ================================================

void OV_slash__ro_U() // OV/(U
{
  LoadOverlay("NAV-O");
  _ro__slash__ro_UD_rc_SHIELD_rc_(); // Overlay NAVIGATR
}


// ================================================
// 0xc62c: WORD 'OV-SH' codep=0x224c parp=0xc636
// ================================================

void OV_dash_SH() // OV-SH
{
  CTINIT(); // CTINIT
  LoadOverlay("NAV-O");
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _gt_DOWN_dash_SHIELD(); // Overlay NAVIGATR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xc644: WORD 'OV-AR' codep=0x224c parp=0xc64e
// ================================================

void OV_dash_AR() // OV-AR
{
  CTINIT(); // CTINIT
  LoadOverlay("NAV-O");
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _gt_DISARM(); // Overlay NAVIGATR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xc65c: WORD 'DAMAGE-VOC' codep=0x1ab5 parp=0xc668
// ================================================
// 0xc668: db 0x76 0xc6 0xee 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'v                   '

// ================================================
// 0xc67c: WORD 'DAMAGE-OV' codep=0x83dd parp=0xc688
// ================================================
// 0xc688: dw 0x8faf

// ================================================
// 0xc68a: WORD 'DO-DA' codep=0x224c parp=0xc694
// ================================================

void DO_dash_DA() // DO-DA
{
  LoadOverlay("DAMAGE-OV");
  DO_dash_DAMA(); // Overlay DAMAGE-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc69c: WORD '>DAM' codep=0x224c parp=0xc6a5
// ================================================

void _gt_DAM() // >DAM
{
  LoadOverlay("DAMAGE-OV");
  _n_WOUNDE(); // Overlay DAMAGE-OV
  _099(); // 099
  DO_dash_ADAM(); // Overlay DAMAGE-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc6b1: WORD '.AUX' codep=0x224c parp=0xc6ba
// ================================================

void DrawAUX() // .AUX
{
  LoadOverlay("DAMAGE-OV");
  REFRESH(); // Overlay DAMAGE-OV
}


// ================================================
// 0xc6c0: WORD 'CREWD' codep=0x224c parp=0xc6ca
// ================================================

void CREWD() // CREWD
{
  LoadOverlay("DAMAGE-OV");
  CDAM(); // Overlay DAMAGE-OV
}


// ================================================
// 0xc6d0: WORD 'BLST' codep=0x224c parp=0xc6d9
// ================================================

void BLST() // BLST
{
  LoadOverlay("DAMAGE-OV");
  DOBLAST(); // Overlay DAMAGE-OV
}


// ================================================
// 0xc6df: WORD '#MISS' codep=0x1d29 parp=0xc6e9
// ================================================
// 0xc6e9: db 0x00 0x00 '  '

// ================================================
// 0xc6eb: WORD 'WEAP' codep=0x1ab5 parp=0xc6f4
// ================================================
// 0xc6f4: db 0x02 0xc7 0x6a 0xc6 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  j                 '

// ================================================
// 0xc708: WORD 'WEA' codep=0x83dd parp=0xc710
// ================================================
// 0xc710: dw 0x9668

// ================================================
// 0xc712: WORD 'TAR' codep=0x224c parp=0xc71a
// ================================================

void TAR() // TAR
{
  LoadOverlay("WEA");
  TARG(); // Overlay WEAPONS
}


// ================================================
// 0xc720: WORD 'DTA_2' codep=0x224c parp=0xc728
// ================================================

void DTA_2() // DTA_2
{
  Push(0xc71a); // probable 'TAR'
  MODULE(); // MODULE
}


// ================================================
// 0xc730: WORD 'DNL_2' codep=0x224c parp=0xc738
// ================================================

void DNL_2() // DNL_2
{
  LoadOverlay("WEA");
  DONULL(); // Overlay WEAPONS
}


// ================================================
// 0xc73e: WORD 'GNL' codep=0x224c parp=0xc746
// ================================================

void GNL() // GNL
{
  LoadOverlay("WEA");
  GNUNK_gt_NUL(); // Overlay WEAPONS
}


// ================================================
// 0xc74c: WORD 'DNL_1' codep=0x224c parp=0xc754
// ================================================

void DNL_1() // DNL_1
{
  Push(0xc738); // probable 'DNL_2'
  MODULE(); // MODULE
}


// ================================================
// 0xc75c: WORD 'EYE-VOC' codep=0x1ab5 parp=0xc768
// ================================================
// 0xc768: db 0x76 0xc7 0xf6 0xc6 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'v                   '

// ================================================
// 0xc77c: WORD 'EYE-O' codep=0x83dd parp=0xc786
// ================================================
// 0xc786: dw 0x7888

// ================================================
// 0xc788: WORD 'AI' codep=0x224c parp=0xc78f
// ================================================

void AI() // AI
{
  LoadOverlay("EYE-O");
  DO_dash_EYE(); // Overlay EYE-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc797: WORD 'COMBAU-VOC' codep=0x1ab5 parp=0xc7a2
// ================================================
// 0xc7a2: db 0xb0 0xc7 0x6a 0xc7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  j                 '

// ================================================
// 0xc7b6: WORD 'COMBAU-OV' codep=0x83dd parp=0xc7c1
// ================================================
// 0xc7c1: dw 0x912a

// ================================================
// 0xc7c3: WORD 'CSCALE' codep=0x224c parp=0xc7ce
// ================================================

void CSCALE() // CSCALE
{
  LoadOverlay("COMBAU-OV");
  SET_dash_SC(); // Overlay COMBAUX
}


// ================================================
// 0xc7d4: WORD '@NF' codep=0x224c parp=0xc7dc
// ================================================

void GetNF() // @NF
{
  LoadOverlay("COMBAU-OV");
  GetNF(); // Overlay COMBAUX
}


// ================================================
// 0xc7e2: WORD 'COMBAT-VOC' codep=0x1ab5 parp=0xc7f1
// ================================================
// 0xc7f1: db 0xff 0xc7 0xa4 0xc7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc805: WORD 'COMBAT-O' codep=0x83dd parp=0xc812
// ================================================
// 0xc812: dw 0x8e29

// ================================================
// 0xc814: WORD '(WAR' codep=0x224c parp=0xc81d
// ================================================

void _ro_WAR() // (WAR
{
  LoadOverlay("COMBAT-O");
  WAR(); // Overlay COMBAT-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc825: WORD '(COM' codep=0x224c parp=0xc82e
// ================================================

void _ro_COM() // (COM
{
  LoadOverlay("COMBAT-O");
  _ro_COMB_rc_(); // Overlay COMBAT-OV
}


// ================================================
// 0xc834: WORD 'C&C' codep=0x224c parp=0xc83c
// ================================================

void C_and_C() // C&C
{
  LoadOverlay("COMBAT-O");
  CLEAR_dash_CO(); // Overlay COMBAT-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xc844: WORD '?J' codep=0x224c parp=0xc84b
// ================================================

void IsJ() // ?J
{
  LoadOverlay("COMBAT-O");
  IsJ(); // Overlay COMBAT-OV
}


// ================================================
// 0xc851: WORD '?JMP' codep=0x224c parp=0xc85a
// ================================================

void IsJMP() // ?JMP
{
  Push(0xc84b); // probable '?J'
  MODULE(); // MODULE
}


// ================================================
// 0xc862: WORD 'COMB' codep=0x224c parp=0xc86b
// ================================================

void COMB() // COMB
{
  Push(0xc82e); // probable '(COM'
  MODULE(); // MODULE
}


// ================================================
// 0xc873: WORD 'WAR' codep=0x224c parp=0xc87b
// ================================================

void WAR() // WAR
{
  Push(0xc81d); // probable '(WAR'
  MODULE(); // MODULE
}


// ================================================
// 0xc883: WORD 'END-' codep=0x1ab5 parp=0xc88c
// ================================================
// 0xc88c: db 0x9a 0xc8 0xf3 0xc7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc8a0: WORD 'ENDI' codep=0x83dd parp=0xc8a9
// ================================================
// 0xc8a9: dw 0x6d80

// ================================================
// 0xc8ab: WORD 'HALL' codep=0x224c parp=0xc8b4
// ================================================

void HALL() // HALL
{
  LoadOverlay("ENDI");
  DO_dash_HALLS(); // Overlay ENDING
}


// ================================================
// 0xc8ba: WORD '?FRE' codep=0x224c parp=0xc8c3
// ================================================

void IsFRE() // ?FRE
{
  LoadOverlay("ENDI");
  FREEB(); // Overlay ENDING
}


// ================================================
// 0xc8c9: WORD 'DHL' codep=0x224c parp=0xc8d1
// ================================================

void DHL() // DHL
{
  LoadOverlay("ENDI");
  DUHL(); // Overlay ENDING
}


// ================================================
// 0xc8d7: WORD 'DUHL' codep=0x224c parp=0xc8e0
// ================================================

void DUHL() // DUHL
{
  Push(0xc8d1); // probable 'DHL'
  MODULE(); // MODULE
}


// ================================================
// 0xc8e8: WORD 'BOLT' codep=0x224c parp=0xc8f1
// ================================================

void BOLT() // BOLT
{
  LoadOverlay("ENDI");
  BOLT(); // Overlay ENDING
}


// ================================================
// 0xc8f7: WORD 'IUHL' codep=0x224c parp=0xc900
// ================================================

void IUHL() // IUHL
{
  LoadOverlay("ENDI");
  StoreINIT(); // Overlay ENDING
}


// ================================================
// 0xc906: WORD 'HMISC-VOC' codep=0x1ab5 parp=0xc914
// ================================================
// 0xc914: db 0x22 0xc9 0x8e 0xc8 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '"                   '

// ================================================
// 0xc928: WORD 'HMISC-O' codep=0x83dd parp=0xc934
// ================================================
// 0xc934: dw 0x7153

// ================================================
// 0xc936: WORD 'UFM' codep=0x224c parp=0xc93e
// ================================================

void UFM() // UFM
{
  LoadOverlay("HMISC-O");
  UF_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc944: WORD 'USM' codep=0x224c parp=0xc94c
// ================================================

void USM() // USM
{
  LoadOverlay("HMISC-O");
  US_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc952: WORD 'NFM' codep=0x224c parp=0xc95a
// ================================================

void NFM() // NFM
{
  LoadOverlay("HMISC-O");
  NF_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc960: WORD 'NSM' codep=0x224c parp=0xc968
// ================================================

void NSM() // NSM
{
  LoadOverlay("HMISC-O");
  NS_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc96e: WORD '.EX' codep=0x224c parp=0xc976
// ================================================

void DrawEX() // .EX
{
  LoadOverlay("HMISC-O");
  DrawEX(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc97c: WORD 'DMSG' codep=0x224c parp=0xc985
// ================================================

void DMSG() // DMSG
{
  LoadOverlay("HMISC-O");
  DMSG(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc98b: WORD 'D-UP' codep=0x224c parp=0xc994
// ================================================

void D_dash_UP() // D-UP
{
  LoadOverlay("HMISC-O");
  DISP_dash_SETUP(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc99a: WORD 'ORB>' codep=0x224c parp=0xc9a3
// ================================================

void ORB_gt_() // ORB>
{
  LoadOverlay("HMISC-O");
  ORBITS_gt_(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9a9: WORD '>ORB' codep=0x224c parp=0xc9b2
// ================================================

void _gt_ORB() // >ORB
{
  LoadOverlay("HMISC-O");
  _gt_ORBITS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9b8: WORD 'OSET' codep=0x224c parp=0xc9c1
// ================================================

void OSET() // OSET
{
  LoadOverlay("HMISC-O");
  OSET(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9c7: WORD 'ORBUP' codep=0x224c parp=0xc9d1
// ================================================

void ORBUP() // ORBUP
{
  Push(0xc9c1); // probable 'OSET'
  MODULE(); // MODULE
}


// ================================================
// 0xc9d9: WORD 'TRAK-EN' codep=0x224c parp=0xc9e5
// ================================================

void TRAK_dash_EN() // TRAK-EN
{
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(2);
  Push(0x0017);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  LoadOverlay("HMISC-O");
  TRAK_dash_E(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca03: WORD '!'EXT' codep=0x224c parp=0xca0d
// ================================================

void Store_i_EXT() // !'EXT
{
  LoadOverlay("HMISC-O");
  _ro__ex__i_EXT_rc_(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca13: WORD '(CTXT)' codep=0x224c parp=0xca1e
// ================================================

void _ro_CTXT_rc_() // (CTXT)
{
  LoadOverlay("HMISC-O");
  _ro_CTXT_rc_(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca24: WORD 'CONTEXT_2' codep=0x224c parp=0xca30
// ================================================

void CONTEXT_2() // CONTEXT_2
{
  Push(0xca1e); // probable '(CTXT)'
  MODULE(); // MODULE
}


// ================================================
// 0xca38: WORD '+A-VESS' codep=0x224c parp=0xca44
// ================================================

void _plus_A_dash_VESS() // +A-VESS
{
  LoadOverlay("HMISC-O");
  _plus_A_dash_VESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca4a: WORD 'MTRAK-E' codep=0x224c parp=0xca56
// ================================================

void MTRAK_dash_E() // MTRAK-E
{
  Push(0xc9e5); // probable 'TRAK-EN'
  MODULE(); // MODULE
}


// ================================================
// 0xca5e: WORD 'SHPMOV-' codep=0x1ab5 parp=0xca6a
// ================================================
// 0xca6a: db 0x78 0xca 0x16 0xc9 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'x                   '

// ================================================
// 0xca7e: WORD 'HYPER' codep=0x83dd parp=0xca88
// ================================================
// 0xca88: dw 0x863a

// ================================================
// 0xca8a: WORD 'FLY' codep=0x224c parp=0xca92
// ================================================

void FLY() // FLY
{
  LoadOverlay("HYPER");
  FLY(); // Overlay HYPER-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xca9a: WORD 'MAN' codep=0x224c parp=0xcaa2
// ================================================

void MAN() // MAN
{
  LoadOverlay("HYPER");
  CHK_dash_MOV(); // Overlay HYPER-OV
  if (Pop() != 0)
  {
    DrawAUXSYS(); // Overlay HYPER-OV
    Push(pp_SKIP2NE); // SKIP2NE
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNNEST(); // Overlay HYPER-OV
    } else
    {
      Push(0xf103); // probable 'CLEANUP'
      Push(0xefaf); // probable 'SET-DES'
      Push(0xf069); // probable 'SETUP-M'
      DOTASKS(SETUP_dash_M, SETUP_dash_M, SETUP_dash_M);
    }
    Push(pp_FTRIG); // FTRIG
    _099(); // 099
  }
  DrawSORD(); // .SORD
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xcad2: WORD '.AS' codep=0x224c parp=0xcada
// ================================================

void DrawAS() // .AS
{
  LoadOverlay("HYPER");
  DrawAUXSYS(); // Overlay HYPER-OV
}


// ================================================
// 0xcae0: WORD 'JMPSHP' codep=0x224c parp=0xcaeb
// ================================================

void JMPSHP() // JMPSHP
{
  LoadOverlay("HYPER");
  JMPSHP(); // Overlay HYPER-OV
}


// ================================================
// 0xcaf1: WORD 'UNNEST' codep=0x224c parp=0xcafc
// ================================================

void UNNEST() // UNNEST
{
  LoadOverlay("HYPER");
  UNNEST(); // Overlay HYPER-OV
}


// ================================================
// 0xcb02: WORD '>NEST' codep=0x224c parp=0xcb0c
// ================================================

void _gt_NEST() // >NEST
{
  LoadOverlay("HYPER");
  _plus_NEST(); // Overlay HYPER-OV
}


// ================================================
// 0xcb12: WORD 'GET-HA' codep=0x224c parp=0xcb1d
// ================================================

void GET_dash_HA() // GET-HA
{
  LoadOverlay("HYPER");
  _ro_GET_dash_AU(); // Overlay HYPER-OV
}


// ================================================
// 0xcb23: WORD 'OV.MVS' codep=0x224c parp=0xcb2e
// ================================================

void OV_dot_MVS() // OV.MVS
{
  LoadOverlay("HYPER");
  DrawMVS(); // Overlay HYPER-OV
}


// ================================================
// 0xcb34: WORD 'S>PORT' codep=0x224c parp=0xcb3f
// ================================================

void S_gt_PORT() // S>PORT
{
  LoadOverlay("HYPER");
  COME_dash_HI(); // Overlay HYPER-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xcb47: WORD 'USE-E' codep=0x224c parp=0xcb51
// ================================================

void USE_dash_E() // USE-E
{
  LoadOverlay("HYPER");
  USE_dash_E(); // Overlay HYPER-OV
}


// ================================================
// 0xcb57: WORD 'MUSE-E' codep=0x224c parp=0xcb62
// ================================================

void MUSE_dash_E() // MUSE-E
{
  Push(0xcb51); // probable 'USE-E'
  MODULE(); // MODULE
}


// ================================================
// 0xcb6a: WORD 'ACR-VOC' codep=0x1ab5 parp=0xcb72
// ================================================
// 0xcb72: db 0x80 0xcb 0x6c 0xca 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  l                 '

// ================================================
// 0xcb86: WORD 'ACR-OV' codep=0x83dd parp=0xcb8e
// ================================================
// 0xcb8e: dw 0x736d

// ================================================
// 0xcb90: WORD 'U-A' codep=0x224c parp=0xcb98
// ================================================

void U_dash_A() // U-A
{
  LoadOverlay("ACR-OV");
  _ro_U_dash_ASSCREW_rc_(); // Overlay ASSCREW-OV
}


// ================================================
// 0xcb9e: WORD 'PFIL-VOC' codep=0x1ab5 parp=0xcba7
// ================================================
// 0xcba7: db 0xb5 0xcb 0x74 0xcb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  t                 '

// ================================================
// 0xcbbb: WORD 'PFIL-OV' codep=0x83dd parp=0xcbc4
// ================================================
// 0xcbc4: dw 0x7418

// ================================================
// 0xcbc6: WORD 'U-PF' codep=0x224c parp=0xcbcf
// ================================================

void U_dash_PF() // U-PF
{
  LoadOverlay("PFIL-OV");
  _ro_U_dash_PFILE_rc_(); // Overlay PERSONNEL-OV
}


// ================================================
// 0xcbd5: WORD 'SHIP-GR-VOC' codep=0x1ab5 parp=0xcbe1
// ================================================
// 0xcbe1: db 0xef 0xcb 0xa9 0xcb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcbf5: WORD 'SHIP-GR-OV' codep=0x83dd parp=0xcc01
// ================================================
// 0xcc01: dw 0x7531

// ================================================
// 0xcc03: WORD 'OV.MASS' codep=0x224c parp=0xcc0f
// ================================================

void OV_dot_MASS() // OV.MASS
{
  LoadOverlay("SHIP-GR-OV");
  _ro__dot_MASS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xcc15: WORD 'OV.ACC' codep=0x224c parp=0xcc20
// ================================================

void OV_dot_ACC() // OV.ACC
{
  LoadOverlay("SHIP-GR-OV");
  _ro__dot_ACC_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xcc26: WORD 'OV.PODS' codep=0x224c parp=0xcc32
// ================================================

void OV_dot_PODS() // OV.PODS
{
  LoadOverlay("SHIP-GR-OV");
  _ro__dot_PODS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xcc38: WORD 'OV.SHIP' codep=0x224c parp=0xcc44
// ================================================

void OV_dot_SHIP() // OV.SHIP
{
  LoadOverlay("SHIP-GR-OV");
  _ro__dot_SHIP_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xcc4a: WORD 'OVBALAN' codep=0x224c parp=0xcc56
// ================================================

void OVBALAN() // OVBALAN
{
  LoadOverlay("SHIP-GR-OV");
  _ro_BALANC(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xcc5c: WORD 'OV.CONF' codep=0x224c parp=0xcc68
// ================================================

void OV_dot_CONF() // OV.CONF
{
  LoadOverlay("SHIP-GR-OV");
  _ro__dot_CONFI(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xcc6e: WORD 'CONFIG-' codep=0x1ab5 parp=0xcc7a
// ================================================
// 0xcc7a: db 0x88 0xcc 0xe3 0xcb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcc8e: WORD 'CONFIG-OV' codep=0x83dd parp=0xcc9c
// ================================================
// 0xcc9c: dw 0x75bc

// ================================================
// 0xcc9e: WORD 'U-SC' codep=0x224c parp=0xcca7
// ================================================

void U_dash_SC() // U-SC
{
  LoadOverlay("CONFIG-OV");
  _ro_U_dash_CONFIG_rc_(); // Overlay CONFIG-OV
}


// ================================================
// 0xccad: WORD 'TD-VOC' codep=0x1ab5 parp=0xccb8
// ================================================
// 0xccb8: db 0xc6 0xcc 0x7c 0xcc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  |                 '

// ================================================
// 0xcccc: WORD 'TD-OV' codep=0x83dd parp=0xccd6
// ================================================
// 0xccd6: dw 0x76a4

// ================================================
// 0xccd8: WORD 'U-TD' codep=0x224c parp=0xcce1
// ================================================

void U_dash_TD() // U-TD
{
  LoadOverlay("TD-OV");
  _ro_U_dash_DEPOT_rc_(); // Overlay TDEPOT-OV
}


// ================================================
// 0xcce7: WORD 'TOSS' codep=0x224c parp=0xccf0
// ================================================

void TOSS() // TOSS
{
  LoadOverlay("TD-OV");
  SELL_dash_IT(); // Overlay TDEPOT-OV
}


// ================================================
// 0xccf6: WORD 'KEY-EL' codep=0x224c parp=0xcd01
// ================================================

void KEY_dash_EL() // KEY-EL
{
  LoadOverlay("TD-OV");
  KEY_dash_ELEM_dash_AMT(); // Overlay TDEPOT-OV
}


// ================================================
// 0xcd07: WORD 'OP-VOC' codep=0x1ab5 parp=0xcd12
// ================================================
// 0xcd12: db 0x20 0xcd 0xba 0xcc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcd26: WORD 'OP-OV' codep=0x83dd parp=0xcd30
// ================================================
// 0xcd30: dw 0x88f9

// ================================================
// 0xcd32: WORD 'U-OP' codep=0x224c parp=0xcd3b
// ================================================

void U_dash_OP() // U-OP
{
  LoadOverlay("OP-OV");
  _ro_U_dash_OP_rc_(); // Overlay OP-OV
}


// ================================================
// 0xcd41: WORD 'VITA' codep=0x1ab5 parp=0xcd4a
// ================================================
// 0xcd4a: db 0x58 0xcd 0x14 0xcd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'X                   '

// ================================================
// 0xcd5e: WORD 'VITA-OV' codep=0x83dd parp=0xcd6a
// ================================================
// 0xcd6a: dw 0x7825

// ================================================
// 0xcd6c: WORD 'DIO' codep=0x224c parp=0xcd74
// ================================================

void DIO() // DIO
{
  LoadOverlay("VITA-OV");
  DIO(); // Overlay VITA-OV
}


// ================================================
// 0xcd7a: WORD 'MAPS-VOC' codep=0x1ab5 parp=0xcd87
// ================================================
// 0xcd87: db 0x95 0xcd 0x4c 0xcd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  L                 '

// ================================================
// 0xcd9b: WORD 'MAPS-' codep=0x83dd parp=0xcda5
// ================================================
// 0xcda5: dw 0x8d5c

// ================================================
// 0xcda7: WORD 'MAPS' codep=0x224c parp=0xcdb0
// ================================================

void MAPS() // MAPS
{
  LoadOverlay("MAPS-");
  MAPS(); // Overlay MAPS-OV
}


// ================================================
// 0xcdb6: WORD '.STOR' codep=0x224c parp=0xcdc0
// ================================================

void DrawSTOR() // .STOR
{
  LoadOverlay("MAPS-");
  DrawSTORM(); // Overlay MAPS-OV
}


// ================================================
// 0xcdc6: WORD '(2X2)' codep=0x224c parp=0xcdd0
// ================================================

void _ro_2X2_rc_() // (2X2)
{
  LoadOverlay("MAPS-");
  _2X2CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xcdd6: WORD '2X2CO' codep=0x224c parp=0xcde0
// ================================================

void _2X2CO() // 2X2CO
{
  Push(0xcdd0); // probable '(2X2)'
  MODULE(); // MODULE
}


// ================================================
// 0xcde8: WORD '(4X4)' codep=0x224c parp=0xcdf2
// ================================================

void _ro_4X4_rc_() // (4X4)
{
  LoadOverlay("MAPS-");
  _4X4CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xcdf8: WORD '4X4CO' codep=0x224c parp=0xce02
// ================================================

void _4X4CO() // 4X4CO
{
  Push(0xcdf2); // probable '(4X4)'
  MODULE(); // MODULE
}


// ================================================
// 0xce0a: WORD '(8X8)' codep=0x224c parp=0xce14
// ================================================

void _ro_8X8_rc_() // (8X8)
{
  LoadOverlay("MAPS-");
  _8X8CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xce1a: WORD '8X8CO' codep=0x224c parp=0xce24
// ================================================

void _8X8CO() // 8X8CO
{
  Push(0xce14); // probable '(8X8)'
  MODULE(); // MODULE
}


// ================================================
// 0xce2c: WORD 'STO-VOC' codep=0x1ab5 parp=0xce34
// ================================================
// 0xce34: db 0x42 0xce 0x89 0xcd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'B                   '

// ================================================
// 0xce48: WORD 'STO-OV' codep=0x83dd parp=0xce50
// ================================================
// 0xce50: dw 0x8de4

// ================================================
// 0xce52: WORD 'DO.' codep=0x224c parp=0xce5a
// ================================================

void DO_dot_() // DO.
{
  LoadOverlay("STO-OV");
  _ro_DO_dot_STORM(); // Overlay STORM-OV
}


// ================================================
// 0xce60: WORD 'INJ' codep=0x224c parp=0xce68
// ================================================

void INJ() // INJ
{
  LoadOverlay("STO-OV");
  INJURE_dash_PL(); // Overlay STORM-OV
}


// ================================================
// 0xce6e: WORD 'DRONE-V' codep=0x1ab5 parp=0xce7a
// ================================================
// 0xce7a: db 0x88 0xce 0x36 0xce 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  6                 '

// ================================================
// 0xce8e: WORD 'DRONE-O' codep=0x83dd parp=0xce9a
// ================================================
// 0xce9a: dw 0x95d0

// ================================================
// 0xce9c: WORD 'DRN' codep=0x224c parp=0xcea4
// ================================================

void DRN() // DRN
{
  LoadOverlay("DRONE-O");
  DRONE(); // Overlay DRONE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xceac: WORD 'RECAL' codep=0x224c parp=0xceb6
// ================================================

void RECAL() // RECAL
{
  LoadOverlay("DRONE-O");
  RECALL(); // Overlay DRONE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xcebe: WORD 'DRONE' codep=0x224c parp=0xcec8
// ================================================

void DRONE() // DRONE
{
  Push(0xcea4); // probable 'DRN'
  MODULE(); // MODULE
}


// ================================================
// 0xced0: WORD 'TVCON-V' codep=0x1ab5 parp=0xcedc
// ================================================
// 0xcedc: db 0xea 0xce 0x7c 0xce 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  |                 '

// ================================================
// 0xcef0: WORD 'TVCON-OV' codep=0x83dd parp=0xcefd
// ================================================
// 0xcefd: dw 0x9491

// ================================================
// 0xceff: WORD 'DOST' codep=0x224c parp=0xcf08
// ================================================

void DOST() // DOST
{
  LoadOverlay("TVCON-OV");
  DO_dash_STORM(); // Overlay TVCON-OV
}


// ================================================
// 0xcf0e: WORD 'DO-STORM' codep=0x224c parp=0xcf1b
// ================================================

void DO_dash_STORM() // DO-STORM
{
  Push(0xcf08); // probable 'DOST'
  MODULE(); // MODULE
}


// ================================================
// 0xcf23: WORD '.ST' codep=0x224c parp=0xcf2b
// ================================================

void DrawST() // .ST
{
  LoadOverlay("TVCON-OV");
  DrawSTATS(); // Overlay TVCON-OV
}


// ================================================
// 0xcf31: WORD '.WH' codep=0x224c parp=0xcf39
// ================================================

void DrawWH() // .WH
{
  LoadOverlay("TVCON-OV");
  DrawWHERE(); // Overlay TVCON-OV
}


// ================================================
// 0xcf3f: WORD '.DA' codep=0x224c parp=0xcf47
// ================================================

void DrawDA() // .DA
{
  LoadOverlay("TVCON-OV");
  DrawSTARDATE(); // Overlay TVCON-OV
}


// ================================================
// 0xcf4d: WORD '.EN' codep=0x224c parp=0xcf55
// ================================================

void DrawEN() // .EN
{
  LoadOverlay("TVCON-OV");
  DrawENERGY(); // Overlay TVCON-OV
}


// ================================================
// 0xcf5b: WORD '.CA' codep=0x224c parp=0xcf63
// ================================================

void DrawCA() // .CA
{
  LoadOverlay("TVCON-OV");
  DrawCARGO(); // Overlay TVCON-OV
}


// ================================================
// 0xcf69: WORD '.DI' codep=0x224c parp=0xcf71
// ================================================

void DrawDI() // .DI
{
  LoadOverlay("TVCON-OV");
  DrawDISTANCE(); // Overlay TVCON-OV
}


// ================================================
// 0xcf77: WORD 'SEED-VOC' codep=0x1ab5 parp=0xcf80
// ================================================
// 0xcf80: db 0x8e 0xcf 0xde 0xce 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcf94: WORD 'SEED-OV' codep=0x83dd parp=0xcf9d
// ================================================
// 0xcf9d: dw 0x7ddd

// ================================================
// 0xcf9f: WORD 'POPU' codep=0x224c parp=0xcfa8
// ================================================

void POPU() // POPU
{
  LoadOverlay("SEED-OV");
  POPULA(); // Overlay SEED-OV
}


// ================================================
// 0xcfae: WORD 'ITEMS' codep=0x1ab5 parp=0xcfb8
// ================================================
// 0xcfb8: db 0xc6 0xcf 0x82 0xcf 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcfcc: WORD 'ITEMS-OV' codep=0x83dd parp=0xcfd9
// ================================================
// 0xcfd9: dw 0x89f7

// ================================================
// 0xcfdb: WORD '/ITEMS' codep=0x224c parp=0xcfe6
// ================================================

void _slash_ITEMS() // /ITEMS
{
  LoadOverlay("ITEMS-OV");
  _ro__slash_ITEMS_rc_(); // Overlay TVITEMS
}


// ================================================
// 0xcfec: WORD '>DEBRIS' codep=0x224c parp=0xcff8
// ================================================

void _gt_DEBRIS() // >DEBRIS
{
  LoadOverlay("ITEMS-OV");
  _gt_DEBRIS(); // Overlay TVITEMS
}


// ================================================
// 0xcffe: WORD 'ICON-V' codep=0x1ab5 parp=0xd009
// ================================================
// 0xd009: db 0x17 0xd0 0xba 0xcf 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd01d: WORD 'LISTIC' codep=0x83dd parp=0xd028
// ================================================
// 0xd028: dw 0x7e72

// ================================================
// 0xd02a: WORD 'ICONS' codep=0x224c parp=0xd034
// ================================================

void ICONS() // ICONS
{
  LoadOverlay("LISTIC");
  ICONS(); // Overlay LISTICONS
}


// ================================================
// 0xd03a: WORD 'MOVE-VOC' codep=0x1ab5 parp=0xd047
// ================================================
// 0xd047: db 0x55 0xd0 0x0b 0xd0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'U                   '

// ================================================
// 0xd05b: WORD 'MOVE-OV' codep=0x83dd parp=0xd067
// ================================================
// 0xd067: dw 0x7e9d

// ================================================
// 0xd069: WORD 'TVMO' codep=0x224c parp=0xd072
// ================================================

void TVMO() // TVMO
{
  LoadOverlay("MOVE-OV");
  TV_dash_MOVE(); // Overlay MOVE-OV
}


// ================================================
// 0xd078: WORD '?POP' codep=0x224c parp=0xd081
// ================================================

void IsPOP() // ?POP
{
  LoadOverlay("MOVE-OV");
  IsPOPULA(); // Overlay MOVE-OV
}


// ================================================
// 0xd087: WORD '!E/M' codep=0x224c parp=0xd090
// ================================================

void StoreE_slash_M() // !E/M
{
  LoadOverlay("MOVE-OV");
  SET_dash_SPE(); // Overlay MOVE-OV
}


// ================================================
// 0xd096: WORD 'TELE_1' codep=0x224c parp=0xd09f
// ================================================

void TELE_1() // TELE_1
{
  LoadOverlay("MOVE-OV");
  TELE(); // Overlay MOVE-OV
}


// ================================================
// 0xd0a5: WORD 'TELE_2' codep=0x224c parp=0xd0ae
// ================================================

void TELE_2() // TELE_2
{
  Push(0xd09f); // probable 'TELE_1'
  MODULE(); // MODULE
}


// ================================================
// 0xd0b6: WORD 'T.V.' codep=0x1ab5 parp=0xd0bf
// ================================================
// 0xd0bf: db 0xcd 0xd0 0x49 0xd0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  I                 '

// ================================================
// 0xd0d3: WORD 'TV-OV' codep=0x83dd parp=0xd0dd
// ================================================
// 0xd0dd: dw 0x7a1a

// ================================================
// 0xd0df: WORD 'TV-DI' codep=0x224c parp=0xd0e9
// ================================================

void TV_dash_DI() // TV-DI
{
  LoadOverlay("TV-OV");
  TV_dash_DISP(); // Overlay TV-OV
}


// ================================================
// 0xd0ef: WORD '(TVSE' codep=0x224c parp=0xd0f9
// ================================================

void _ro_TVSE() // (TVSE
{
  LoadOverlay("TV-OV");
  TV_dash_SETUP(); // Overlay TV-OV
}


// ================================================
// 0xd0ff: WORD '(CLEA' codep=0x224c parp=0xd109
// ================================================

void _ro_CLEA() // (CLEA
{
  LoadOverlay("TV-OV");
  TV_dash_CLEANU(); // Overlay TV-OV
}


// ================================================
// 0xd10f: WORD '(HEAV' codep=0x224c parp=0xd119
// ================================================

void _ro_HEAV() // (HEAV
{
  LoadOverlay("TV-OV");
  HEAVEHO(); // Overlay TV-OV
}


// ================================================
// 0xd11f: WORD '(WEAP' codep=0x224c parp=0xd129
// ================================================

void _ro_WEAP() // (WEAP
{
  LoadOverlay("TV-OV");
  DO_dot_WEAPON(); // Overlay TV-OV
}


// ================================================
// 0xd12f: WORD '(TALK' codep=0x224c parp=0xd139
// ================================================

void _ro_TALK() // (TALK
{
  LoadOverlay("TV-OV");
  WALK_and_TALK(); // Overlay TV-OV
}


// ================================================
// 0xd13f: WORD 'HEAVE' codep=0x224c parp=0xd149
// ================================================

void HEAVE() // HEAVE
{
  SAVE_dash_OV(); // SAVE-OV
  Push(0xd119); // probable '(HEAV'
  MODULE(); // MODULE
}


// ================================================
// 0xd153: WORD 'BEHAVIO' codep=0x1ab5 parp=0xd15f
// ================================================
// 0xd15f: db 0x6d 0xd1 0xc1 0xd0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'm                   '

// ================================================
// 0xd173: WORD 'BEHAV' codep=0x83dd parp=0xd17d
// ================================================
// 0xd17d: dw 0x8aeb

// ================================================
// 0xd17f: WORD 'TVTAS' codep=0x224c parp=0xd189
// ================================================

void TVTAS() // TVTAS
{
  LoadOverlay("BEHAV");
  TV_dash_TASKS(); // Overlay BEHAV-OV
}


// ================================================
// 0xd18f: WORD 'TV' codep=0x224c parp=0xd196
// ================================================

void TV() // TV
{
  LoadOverlay("BEHAV");
  TV(); // Overlay BEHAV-OV
}


// ================================================
// 0xd19c: WORD '(SIMU' codep=0x224c parp=0xd1a6
// ================================================

void _ro_SIMU() // (SIMU
{
  LoadOverlay("BEHAV");
  _1SIMULATE(); // Overlay BEHAV-OV
}


// ================================================
// 0xd1ac: WORD 'SIMUL' codep=0x224c parp=0xd1b6
// ================================================

void SIMUL() // SIMUL
{
  Push(0xd1a6); // probable '(SIMU'
  MODULE(); // MODULE
}


// ================================================
// 0xd1be: WORD 'FSTN' codep=0x224c parp=0xd1c7
// ================================================

void FSTN() // FSTN
{
  LoadOverlay("BEHAV");
  CIRCLES(); // Overlay BEHAV-OV
}


// ================================================
// 0xd1cd: WORD 'DSTUN' codep=0x224c parp=0xd1d7
// ================================================

void DSTUN() // DSTUN
{
  Push(0xd1c7); // probable 'FSTN'
  MODULE(); // MODULE
}


// ================================================
// 0xd1df: WORD 'STP-VOC' codep=0x1ab5 parp=0xd1eb
// ================================================
// 0xd1eb: db 0xf9 0xd1 0x61 0xd1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  a                 '

// ================================================
// 0xd1ff: WORD 'STP-OV' codep=0x83dd parp=0xd20a
// ================================================
// 0xd20a: dw 0x90db

// ================================================
// 0xd20c: WORD 'SECUR' codep=0x224c parp=0xd216
// ================================================

void SECUR() // SECUR
{
  LoadOverlay("STP-OV");
  SP(); // Overlay STP-OV
}


// ================================================
// 0xd21c: WORD 'SIC'E' codep=0x224c parp=0xd226
// ================================================

void SIC_i_E() // SIC'E
{
  LoadOverlay("STP-OV");
  MP_i_ER(); // Overlay STP-OV
}


// ================================================
// 0xd22c: WORD '2NDS' codep=0x224c parp=0xd235
// ================================================

void _2NDS() // 2NDS
{
  LoadOverlay("STP-OV");
  _2N(); // Overlay STP-OV
}


// ================================================
// 0xd23b: WORD 'LAUNCH-V' codep=0x1ab5 parp=0xd248
// ================================================
// 0xd248: db 0x56 0xd2 0xed 0xd1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'V                   '

// ================================================
// 0xd25c: WORD 'LAUNC' codep=0x83dd parp=0xd266
// ================================================
// 0xd266: dw 0x8889

// ================================================
// 0xd268: WORD 'OVCOU' codep=0x224c parp=0xd272
// ================================================

void OVCOU() // OVCOU
{
  LoadOverlay("LAUNC");
  _and_LAUNCH(); // Overlay LAUNCH-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xd27a: WORD 'OVBAC' codep=0x224c parp=0xd284
// ================================================

void OVBAC() // OVBAC
{
  LoadOverlay("LAUNC");
  _and_RETURN(); // Overlay LAUNCH-OV
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xd28c: WORD '.AIRL' codep=0x224c parp=0xd296
// ================================================

void DrawAIRL() // .AIRL
{
  LoadOverlay("LAUNC");
  DrawAIRLOCK(); // Overlay LAUNCH-OV
}


// ================================================
// 0xd29c: WORD 'CAP-VOC' codep=0x1ab5 parp=0xd2a8
// ================================================
// 0xd2a8: db 0xb6 0xd2 0x4a 0xd2 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  J                 '

// ================================================
// 0xd2bc: WORD 'CAP-O' codep=0x83dd parp=0xd2c6
// ================================================
// 0xd2c6: dw 0x81d1

// ================================================
// 0xd2c8: WORD 'OV/IT' codep=0x224c parp=0xd2d2
// ================================================

void OV_slash_IT() // OV/IT
{
  LoadOverlay("CAP-O");
  _ro__slash_ITEMS_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd2d8: WORD 'OV/LA' codep=0x224c parp=0xd2e2
// ================================================

void OV_slash_LA() // OV/LA
{
  LoadOverlay("CAP-O");
  _ro__slash_LAUNCH_slash_LAND_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd2e8: WORD 'OV>DE' codep=0x224c parp=0xd2f2
// ================================================

void OV_gt_DE() // OV>DE
{
  LoadOverlay("CAP-O");
  _gt_DESCEND(); // Overlay CAPTAIN
}


// ================================================
// 0xd2f8: WORD 'OV/LO' codep=0x224c parp=0xd302
// ================================================

void OV_slash_LO() // OV/LO
{
  LoadOverlay("CAP-O");
  _ro__slash_LOG_dash_PLAN_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd308: WORD 'DOC-VOC' codep=0x1ab5 parp=0xd314
// ================================================
// 0xd314: db 0x22 0xd3 0xaa 0xd2 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '"                   '

// ================================================
// 0xd328: WORD 'DOC-OV' codep=0x83dd parp=0xd333
// ================================================
// 0xd333: dw 0x7fdd

// ================================================
// 0xd335: WORD 'OV/EX' codep=0x224c parp=0xd33f
// ================================================

void OV_slash_EX() // OV/EX
{
  LoadOverlay("DOC-OV");
  _ro__slash_EXAMINE_rc_(); // Overlay DOCTOR
}


// ================================================
// 0xd345: WORD 'OV/TR' codep=0x224c parp=0xd34f
// ================================================

void OV_slash_TR() // OV/TR
{
  LoadOverlay("DOC-OV");
  _ro__slash_TREAT_rc_(); // Overlay DOCTOR
}


// ================================================
// 0xd355: WORD 'AN-VOC' codep=0x1ab5 parp=0xd360
// ================================================
// 0xd360: db 0x6e 0xd3 0x16 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'n                   '

// ================================================
// 0xd374: WORD 'AN-OV' codep=0x83dd parp=0xd37e
// ================================================
// 0xd37e: dw 0x87f8

// ================================================
// 0xd380: WORD 'OV/AN' codep=0x224c parp=0xd38a
// ================================================

void OV_slash_AN() // OV/AN
{
  LoadOverlay("AN-OV");
  _ro__slash_ANALYSIS_rc_(); // Overlay ANALYZE-OV
}


// ================================================
// 0xd390: WORD '*MAP' codep=0x1ab5 parp=0xd399
// ================================================
// 0xd399: db 0xa7 0xd3 0x62 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  b                 '

// ================================================
// 0xd3ad: WORD '*MAP-OV' codep=0x83dd parp=0xd3b9
// ================================================
// 0xd3b9: dw 0x8518

// ================================================
// 0xd3bb: WORD 'OV/ST' codep=0x224c parp=0xd3c5
// ================================================

void OV_slash_ST() // OV/ST
{
  LoadOverlay("*MAP-OV");
  _ro__slash_STARMAP_rc_(); // Overlay MAP-OV
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xd3d1: WORD 'JUMP-VO' codep=0x1ab5 parp=0xd3dd
// ================================================
// 0xd3dd: db 0xeb 0xd3 0x9b 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd3f1: WORD 'JUMP-OV' codep=0x83dd parp=0xd3fd
// ================================================
// 0xd3fd: dw 0x952d

// ================================================
// 0xd3ff: WORD 'JUMP' codep=0x224c parp=0xd408
// ================================================

void JUMP() // JUMP
{
  LoadOverlay("JUMP-OV");
  JUMP(); // Overlay JUMP
}


// ================================================
// 0xd40e: WORD 'LAND-VO' codep=0x1ab5 parp=0xd41a
// ================================================
// 0xd41a: db 0x28 0xd4 0xdf 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '(                   '

// ================================================
// 0xd42e: WORD 'LAND-' codep=0x83dd parp=0xd438
// ================================================
// 0xd438: dw 0x9099

// ================================================
// 0xd43a: WORD 'TRY-L_2' codep=0x224c parp=0xd444
// ================================================

void TRY_dash_L_2() // TRY-L_2
{
  LoadOverlay("LAND-");
  IsLAND(); // Overlay LAND-OV
}


// ================================================
// 0xd44a: WORD 'TRY-L_1' codep=0x224c parp=0xd454
// ================================================

void TRY_dash_L_1() // TRY-L_1
{
  LoadOverlay("LAND-");
  IsLAUNCH(); // Overlay LAND-OV
}


// ================================================
// 0xd45a: WORD 'BTN-VOC' codep=0x1ab5 parp=0xd466
// ================================================
// 0xd466: db 0x74 0xd4 0x1c 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 't                   '

// ================================================
// 0xd47a: WORD 'BTN-OV' codep=0x83dd parp=0xd485
// ================================================
// 0xd485: dw 0x8480

// ================================================
// 0xd487: WORD 'OVFLT' codep=0x224c parp=0xd491
// ================================================

void OVFLT() // OVFLT
{
  LoadOverlay("BTN-OV");
  _gt_FLT(); // Overlay SHIPBUTTONS
}


// ================================================
// 0xd497: WORD 'CHKFLT' codep=0x1ab5 parp=0xd4a2
// ================================================
// 0xd4a2: db 0xb0 0xd4 0x68 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  h                 '

// ================================================
// 0xd4b6: WORD 'CHKFL' codep=0x83dd parp=0xd4c0
// ================================================
// 0xd4c0: dw 0x6f65

// ================================================
// 0xd4c2: WORD '?FLIG' codep=0x224c parp=0xd4cc
// ================================================

void IsFLIG() // ?FLIG
{
  LoadOverlay("CHKFL");
  IsCAN_dash_LEAVE(); // Overlay CHKFLIGHT-OV
}


// ================================================
// 0xd4d2: WORD 'PM-VOC' codep=0x1ab5 parp=0xd4dd
// ================================================
// 0xd4dd: db 0xeb 0xd4 0xa4 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd4f1: WORD 'PM-OV' codep=0x83dd parp=0xd4fb
// ================================================
// 0xd4fb: dw 0x779d

// ================================================
// 0xd4fd: WORD 'PORTM' codep=0x224c parp=0xd507
// ================================================

void PORTM() // PORTM
{
  LoadOverlay("PM-OV");
  WALKIES(); // Overlay PORTMENU-OV
}


// ================================================
// 0xd50d: WORD 'PPIC' codep=0x224c parp=0xd516
// ================================================

void PPIC() // PPIC
{
  LoadOverlay("PM-OV");
  PPIC(); // Overlay PORTMENU-OV
}


// ================================================
// 0xd51c: WORD 'GAME' codep=0x1ab5 parp=0xd525
// ================================================
// 0xd525: db 0x33 0xd5 0xdf 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '3                   '

// ================================================
// 0xd539: WORD 'GAME-OV' codep=0x83dd parp=0xd545
// ================================================
// 0xd545: dw 0x3c64

// ================================================
// 0xd547: WORD 'STARTGA' codep=0x224c parp=0xd553
// ================================================

void STARTGA() // STARTGA
{
  LoadOverlay("GAME-OV");
  START(); // Overlay MODGAME
}


// ================================================
// 0xd559: WORD 'ERR!' codep=0x224c parp=0xd562
// ================================================

void ERR_ex_() // ERR!
{
  LoadOverlay("GAME-OV");
  ERR_ex_(); // Overlay MODGAME
}


// ================================================
// 0xd568: WORD 'MERR' codep=0x224c parp=0xd571
// ================================================

void MERR() // MERR
{
  Push(0xd562); // probable 'ERR!'
  MODULE(); // MODULE
}


// ================================================
// 0xd579: WORD 'GAMEOPS' codep=0x224c parp=0xd585
// ================================================

void GAMEOPS() // GAMEOPS
{
  LoadOverlay("GAME-OV");
  GAMEO_1(); // Overlay MODGAME
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xd58d: WORD 'GAMEOPM' codep=0x224c parp=0xd599
// ================================================

void GAMEOPM() // GAMEOPM
{
  Push(0xd585); // probable 'GAMEOPS'
  MODULE(); // MODULE
}


// ================================================
// 0xd5a1: WORD 'BOSS' codep=0x224c parp=0xd5aa
// ================================================

void BOSS() // BOSS
{
  LoadOverlay("GAME-OV");
  BOSS(); // Overlay MODGAME
}


// ================================================
// 0xd5b0: WORD 'DBS' codep=0x224c parp=0xd5b8
// ================================================

void DBS() // DBS
{
  Push(0xd5aa); // probable 'BOSS'
  MODULE(); // MODULE
}


