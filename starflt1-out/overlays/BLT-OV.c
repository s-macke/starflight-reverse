// ====== OVERLAY 'BLT-OV' ======
// store offset = 0xf200
// overlay size   = 0x0360

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//         .RUNBIT  codep:0xf220 parp:0xf220 size:0x00cd C-string:'DrawRUNBIT'
//          .PARMS  codep:0x224c parp:0xf2f8 size:0x0059 C-string:'DrawPARMS'
//          BRIGHT  codep:0x1d29 parp:0xf35c size:0x0002 C-string:'BRIGHT'
//           2TEMP  codep:0x1d29 parp:0xf368 size:0x0002 C-string:'_2TEMP'
//      .EGARUNBIT  codep:0xf379 parp:0xf379 size:0x00e1 C-string:'DrawEGARUNBIT'
//         .HYBRID  codep:0x224c parp:0xf466 size:0x0094 C-string:'DrawHYBRID'
//          PADSEG  codep:0x224c parp:0xf505 size:0x0008 C-string:'PADSEG'
//        @.HYBRID  codep:0x224c parp:0xf51a size:0x000c C-string:'Get_dot_HYBRID'
//           SETUP  codep:0x224c parp:0xf530 size:0x0000 C-string:'SETUP'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_X1; // X1
extern const unsigned short int pp_X2; // X2
extern const unsigned short int pp_XSTART; // XSTART
extern const unsigned short int pp_XEND; // XEND
extern const unsigned short int pp_YLINE; // YLINE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_IsEGA; // ?EGA
void PAD(); // PAD
void QUIT(); // QUIT
void DrawR(); // .R
void NODRIVES(); // NODRIVES
void KEY_2(); // KEY_2
void Is_gt_EGA(); // ?>EGA
void Store_3(); // !_3
void _plus__ex_(); // +!
void MOUNTA(); // MOUNTA
void MOUNTB(); // MOUNTB
void FILE_st_(); // FILE<
void _gt_MONO(); // >MONO
void _gt_A(); // >A
void _gt_LORES(); // >LORES
void DARK(); // DARK
void POS_dot_(); // POS.
void ADDR_gt_SEG(); // ADDR>SEG
void SWAP(); // SWAP
void _dash_(); // -
void L_at_(); // L@
void LC_at_(); // LC@
void _co_BLT_cc_(); // {BLT}
void DrawRUNBIT(); // .RUNBIT
void DrawEGARUNBIT(); // .EGARUNBIT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_BRIGHT = 0xf35c; // BRIGHT size: 2
// {0x2e, 0x52}

const unsigned short int pp__2TEMP = 0xf368; // 2TEMP size: 2
// {0x20, 0x2e}




// 0xf212: db 0x35 0x00 '5 '

// ================================================
// 0xf214: WORD '.RUNBIT' codep=0xf220 parp=0xf220
// ================================================
// entry
// 0xf220: cli    
// 0xf221: push   word ptr [586E]
// 0xf225: pop    word ptr [561C]
// 0xf229: push   word ptr [5863]
// 0xf22d: pop    word ptr [5613]
// 0xf231: pop    bx
// 0xf232: pop    es
// 0xf233: es:    
// 0xf234: mov    cx,[bx]
// 0xf236: push   es
// 0xf237: pop    word ptr [58AA]
// 0xf23b: push   si
// 0xf23c: push   di
// 0xf23d: add    bx,02
// 0xf240: mov    [562E],bx
// 0xf244: mov    ax,[586E]
// 0xf248: add    ax,[5892]
// 0xf24c: mov    [5625],ax
// 0xf250: push   cx
// 0xf251: xor    cx,cx
// 0xf253: push   word ptr [58AA]
// 0xf257: pop    es
// 0xf258: es:    
// 0xf259: mov    cl,[bx]
// 0xf25b: inc    bx
// 0xf25c: or     cx,cx
// 0xf25e: jz     F2DC
// 0xf260: mov    ax,bx
// 0xf262: dec    ax
// 0xf263: sub    ax,[562E]
// 0xf267: and    ax,0001
// 0xf26a: jnz    F2BE
// 0xf26c: push   word ptr [5648]
// 0xf270: pop    es
// 0xf271: mov    dx,[5613]
// 0xf275: shl    dx,1
// 0xf277: mov    ax,[561C]
// 0xf27b: add    dx,[563A]
// 0xf27f: mov    di,dx
// 0xf281: shr    ax,1
// 0xf283: mov    dx,00F0
// 0xf286: jae    F28A
// 0xf288: mov    dl,0F
// 0xf28a: add    ax,[di]
// 0xf28c: mov    di,ax
// 0xf28e: es:    
// 0xf28f: mov    al,[di]
// 0xf291: mov    dh,[55F2]
// 0xf295: and    dh,dl
// 0xf297: not    dl
// 0xf299: and    al,dl
// 0xf29b: or     al,dh
// 0xf29d: es:    
// 0xf29e: mov    [di],al
// 0xf2a0: inc    word ptr [561C]
// 0xf2a4: mov    ax,[561C]
// 0xf2a8: cmp    ax,[5625]
// 0xf2ac: jnz    F2BA
// 0xf2ae: push   word ptr [586E]
// 0xf2b2: pop    word ptr [561C]
// 0xf2b6: dec    word ptr [5613]
// 0xf2ba: loop   F271
// 0xf2bc: jmp    F2DC
// 0xf2be: add    [561C],cx
// 0xf2c2: mov    ax,[561C]
// 0xf2c6: cmp    ax,[5625]
// 0xf2ca: js     F2D8
// 0xf2cc: sub    ax,[5892]
// 0xf2d0: dec    word ptr [5613]
// 0xf2d4: jmp    F2C6
// 0xf2d6: jmp    F2DC
// 0xf2d8: mov    [561C],ax
// 0xf2dc: pop    cx
// 0xf2dd: dec    cx
// 0xf2de: jz     F2E3
// 0xf2e0: jmp    F250
// 0xf2e3: pop    di
// 0xf2e4: pop    si
// 0xf2e5: push   ds
// 0xf2e6: pop    es
// 0xf2e7: sti    
// 0xf2e8: lodsw
// 0xf2e9: mov    bx,ax
// 0xf2eb: jmp    word ptr [bx]

// ================================================
// 0xf2ed: WORD '.PARMS' codep=0x224c parp=0xf2f8
// ================================================

void DrawPARMS() // .PARMS
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("x2= ", 4); // (.")
  Push(pp_X2); // X2
  Push(Read16(Pop())); // @
  Push(4);
  DrawR(); // .R
  PRINT("x1= ", 4); // (.")
  Push(pp_X1); // X1
  Push(Read16(Pop())); // @
  Push(4);
  DrawR(); // .R
  PRINT("st ", 3); // (.")
  Push(pp_XSTART); // XSTART
  Push(Read16(Pop())); // @
  Push(4);
  DrawR(); // .R
  PRINT("en ", 3); // (.")
  Push(pp_XEND); // XEND
  Push(Read16(Pop())); // @
  Push(4);
  DrawR(); // .R
  PRINT("y ", 2); // (.")
  Push(pp_YLINE); // YLINE
  Push(Read16(Pop())); // @
  Push(4);
  DrawR(); // .R
  KEY_2(); // KEY_2
  Push(0x000d);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  QUIT(); // QUIT
}


// ================================================
// 0xf351: WORD 'BRIGHT' codep=0x1d29 parp=0xf35c
// ================================================
// 0xf35c: db 0x2e 0x52 '.R'

// ================================================
// 0xf35e: WORD '2TEMP' codep=0x1d29 parp=0xf368
// ================================================
// 0xf368: db 0x20 0x2e ' .'

// ================================================
// 0xf36a: WORD '.EGARUNBIT' codep=0xf379 parp=0xf379
// ================================================
// entry
// 0xf379: mov    dx,03CE
// 0xf37c: mov    ah,[55F2]
// 0xf380: mov    al,00
// 0xf382: out    dx,al
// 0xf383: inc    dx
// 0xf384: xchg   ah,al
// 0xf386: out    dx,al
// 0xf387: mov    bx,[586E]
// 0xf38b: mov    [561C],bx
// 0xf38f: mov    ax,[5892]
// 0xf393: dec    ax
// 0xf394: add    bx,ax
// 0xf396: mov    [F35C],bx
// 0xf39a: mov    bx,[5863]
// 0xf39e: mov    [5613],bx
// 0xf3a2: mov    dx,es
// 0xf3a4: pop    bx
// 0xf3a5: pop    es
// 0xf3a6: push   dx
// 0xf3a7: es:    
// 0xf3a8: mov    cx,[bx]
// 0xf3aa: mov    [F368],cx
// 0xf3ae: sub    cx,cx
// 0xf3b0: push   bx
// 0xf3b1: push   cx
// 0xf3b2: add    bx,cx
// 0xf3b4: inc    bx
// 0xf3b5: inc    bx
// 0xf3b6: sub    ax,ax
// 0xf3b8: es:    
// 0xf3b9: mov    al,[bx]
// 0xf3bb: and    ax,00FF
// 0xf3be: jnz    F3C3
// 0xf3c0: jmp    F448
// 0xf3c3: mov    cx,[561C]
// 0xf3c7: add    cx,ax
// 0xf3c9: dec    cx
// 0xf3ca: mov    [562E],cx
// 0xf3ce: cmp    cx,[F35C]
// 0xf3d2: jbe    F41B
// 0xf3d4: mov    bx,sp
// 0xf3d6: mov    ax,[bx]
// 0xf3d8: and    ax,0001
// 0xf3db: jnz    F3F8
// 0xf3dd: mov    ax,[561C]
// 0xf3e1: mov    [57B7],ax
// 0xf3e5: mov    ax,[F35C]
// 0xf3e9: mov    [57C2],ax
// 0xf3ed: mov    ax,[5613]
// 0xf3f1: mov    [57CE],ax
// 0xf3f5: call   9125
// 0xf3f8: mov    ax,[562E]
// 0xf3fc: mov    cx,[5892]
// 0xf400: sub    ax,cx
// 0xf402: mov    [562E],ax
// 0xf406: mov    ax,[586E]
// 0xf40a: mov    [561C],ax
// 0xf40e: dec    word ptr [5613]
// 0xf412: mov    cx,[562E]
// 0xf416: jmp    F3CE
// 0xf419: jmp    F448
// 0xf41b: mov    bx,sp
// 0xf41d: mov    ax,[bx]
// 0xf41f: and    ax,0001
// 0xf422: jnz    F43F
// 0xf424: mov    ax,[561C]
// 0xf428: mov    [57B7],ax
// 0xf42c: mov    ax,[562E]
// 0xf430: mov    [57C2],ax
// 0xf434: mov    ax,[5613]
// 0xf438: mov    [57CE],ax
// 0xf43c: call   9125
// 0xf43f: mov    ax,[562E]
// 0xf443: inc    ax
// 0xf444: mov    [561C],ax
// 0xf448: pop    cx
// 0xf449: pop    bx
// 0xf44a: inc    cx
// 0xf44b: cmp    cx,[F368]
// 0xf44f: jz     F454
// 0xf451: jmp    F3B0
// 0xf454: pop    es
// 0xf455: lodsw
// 0xf456: mov    bx,ax
// 0xf458: jmp    word ptr [bx]

// ================================================
// 0xf45a: WORD '.HYBRID' codep=0x224c parp=0xf466 params=1 returns=0
// ================================================

void DrawHYBRID() // .HYBRID
{
  unsigned short int a, i, imax, b, c;
  Push(Read16(regsp)); // DUP
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  a = Pop(); // >R
  Push(5);
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(a); // I
  Push(2);
  LC_at_(); // LC@
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(a); // I
  Push(3);
  LC_at_(); // LC@
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(a); // R>
  Push(4);
  LC_at_(); // LC@
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_ABLT); // ABLT
    Push(Read16(Pop())); // @
    b = Pop(); // >R
    Push(pp_BLTSEG); // BLTSEG
    Push(Read16(Pop())); // @
    c = Pop(); // >R
    Push(4);
    Push(pp_ABLT); // ABLT
    _plus__ex_(); // +!
    Push(c); // I
    Push(b); // I'
    Push(Pop()+2); // 2+
    LC_at_(); // LC@
    Is_gt_EGA(); // ?>EGA
    Push(pp_COLOR); // COLOR
    Store_3(); // !_3
    Push(c); // R>
    Push(b); // R>
    Push(3);
    Push(Pop() + Pop()); // +
    LC_at_(); // LC@
    if (Pop() != 0)
    {
      Push(pp_BLTSEG); // BLTSEG
      Push(Read16(Pop())); // @
      Push(pp_ABLT); // ABLT
      Push(Read16(Pop())); // @
      Push(pp_IsEGA); // ?EGA
      Push(Read16(Pop())); // @
      if (Pop() != 0)
      {
        DrawEGARUNBIT(); // .EGARUNBIT
      } else
      {
        DrawRUNBIT(); // .RUNBIT
      }
    } else
    {
      _co_BLT_cc_(); // {BLT}
    }
    Push(pp_BLTSEG); // BLTSEG
    Push(Read16(Pop())); // @
    Push(pp_ABLT); // ABLT
    Push(Read16(Pop())); // @
    Push(4);
    _dash_(); // -
    L_at_(); // L@
    Push(4);
    _dash_(); // -
    Push(pp_ABLT); // ABLT
    _plus__ex_(); // +!
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf4fa: WORD 'PADSEG' codep=0x224c parp=0xf505 params=0 returns=1
// ================================================

void PADSEG() // PADSEG
{
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
}


// ================================================
// 0xf50d: WORD '@.HYBRID' codep=0x224c parp=0xf51a
// ================================================
// entry

void Get_dot_HYBRID() // @.HYBRID
{
  PADSEG(); // PADSEG
  SWAP(); // SWAP
  FILE_st_(); // FILE<
  PADSEG(); // PADSEG
  DrawHYBRID(); // .HYBRID
}


// ================================================
// 0xf526: WORD 'SETUP' codep=0x224c parp=0xf530
// ================================================

void SETUP() // SETUP
{
  _gt_LORES(); // >LORES
  _gt_MONO(); // >MONO
  _gt_A(); // >A
  DARK(); // DARK
  Push(0);
  Push(0x00c7);
  POS_dot_(); // POS.
  NODRIVES(); // NODRIVES
  MOUNTA(); // MOUNTA
  MOUNTB(); // MOUNTB
}

// 0xf548: db 0x42 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BLT-VOC_________________ '

