# Starflight-Reverse #

## What is Starflight? ##

![Starflight 1 for the PC](images/starflight-game.gif)

Back in the 80ths, an unknown company called Binary Systems published the game Starflight. The game puts the player in the role of a starship captain sent to explore the galaxy. There is no set path, allowing players to switch freely between mining, ship-to-ship combat, and alien diplomacy. The broader plot of the game emerges slowly, as the player discovers that an ancient race of beings is causing stars to flare and destroy all living creatures.
The game has been widely praised by both contemporary and modern critics, and is one of the earliest instances of a sandbox game.  The game influenced the design of numerous other games for decades after its release. 

To find out more about the game check the following links:

  * [Wikipedia](https://de.wikipedia.org/wiki/Starflight)
  * [The Digital Antiquarian](https://www.filfre.net/2014/10/starflight/)
  * [Starflight Resource Pages](http://starflt.com)
  * [Technical Articles Saved from Oblivion](https://github.com/s-macke/starflight-reverse/tree/master/webarchive)
  * [Review of Starflight 1](http://crpgaddict.blogspot.de/search/label/Starflight)
  * [Review of Starflight 2](http://crpgaddict.blogspot.de/search/label/Starflight%20II)
  * Other fan sites or projects [1](http://bravearmy.com/starflight/) [2](http://otherelectricities.com/neckdeep/starflight.html) [3](https://www.dosgameclub.com/starflight/) [4](http://blakessanctum.x10.mx/Games/Starflight/) [5](https://www.starflight3.com/)

You can buy the game at [GoG](https://www.gog.com/game/starflight_1_2)

## What is this project about? ##

The first time I heard about the game I wanted to play it. However, I was too young and could not speak English. 20 later I tried again and it was a very pleasant experience. The exploration is fun, the storyline is epic and ends with a surprise, that is one of the best I have experienced. Sure, the game hasn't aged well, but you can feel the devotion of the developers to the game. There’s an art aspect to this game as well as a craftman’s attention to detail.

As much as playing this truly amazing game is fun, so is reverse engineering this game. You follow in the footsteps of the developers and experience their thought processes as if it were the year 1985 again.
For this game expect the unexpected. Normally when you reverse engineer such an old game you have to receive ten thousands of lines of pure assembler code, which you can analyze with the usual tools such as IDA Pro. But not this time. Actually for this game you can throw the usual tools away. They are useless. You are on your own. The reason is that Starflight was written in [Forth](https://en.wikipedia.org/wiki/Forth_(programming_language)), a language I barely knew about.

## Forth ##

Forth is the language with the ultimate minimalism regarding syntax. There is no more syntax than the space between "words". You can write a Forth reader and interpreter basically in a few lines of code.

In a modern language you write something like

```PYTHON
print(2+3)
```
to print the result of 2+3. In Forth however it looks like this.

```FORTH
2 3 + .
```
Forth is a stack machine, with a [reverse Polish notation](https://en.wikipedia.org/wiki/Reverse_Polish_notation). The interpretation is as follows

* push 2 on top of the stack
* push 3 on top of the stack
* pop the last two stack entries and add them together. Push the result back on top of the stack. 
* pop the top value from the stack and print it

The syntax is simple and the interpreter is simple. "2", "3", "+" and "." are just called "words". There is no syntactic distinction between data and code. Certainly a language that lived up to the limitations of the early home computers.

## Disassembly description ##

When you dissect the executable STARFLT.COM it reveals some fantastic internals
 * The compiled code retains the structure of the Forth source code. No optimization by the compiler. A word in the source code are two bytes in the compiled code.
 * The x86-assembly code consumes less than 5% of the size of the exectuable
 * More than 90% of the executable are actually 16-Bit pointers.
 * 2000 of around 6000 word names, which you would call debugging symbols nowadays, are still in the code, but encrypted. This enables us to reverse engineer a high portion of the original source code.
 * The Forth interpreter (not compiler) is still part of the executable and can be enabled
 * The executable is slow. Besides of some assembler optimized routines, the code wastes at least 50% of the CPU cycles just by jumping around in the code.
 * The executable makes heavily use of code overlays, which makes the decoding much more complicated

## The main building block ##

As explained above Forth is a stack machine. As coding mechanic it uses [indirect threading](https://en.wikipedia.org/wiki/Threaded_code#Indirect_threading), a very space efficient method to store your compiled code. Threaded code has a form that essentially consists entirely of calls to subroutines. Indirect threading uses pointers to locations that in turn point to machine code.

Let's say your instruction pointer points to the address 0x1000 and contains the 16-Bit value Read16(0x1000)=0x0f72.

```Asm
0x1000: dw 0x0f72
```

The value 0x0f72 is the coded equivalent of the Forth word '+'. Remember the description above. The word '+' pops the last two stack entries, adds them together and pushes the result back on top of the stack. According to indirect threading this 16-Bit value 0x0f72 is a pointer to a location that in turn points to machine code. When you read the memory content Read16(0x0f72) you get the pointer to 0x0f74. And indeed, when you look at this memory location and disassemble it, you receive the following

```Asm
0x0f72: dw 0x0f74
0x0f74: pop    ax
0x0f75: pop    bx
0x0f76: add    ax, bx
0x0f78: push   ax
0x0f79: lodsw
0x0f7a: mov    bx, ax
0x0f7c: jmp    word ptr [bx]
```

The first four instructions perform exactly the operations that the word "+" should perform. The last three assembler instructions starting from the "lodsw" increase the instruction pointer and jump to the next code. 

Let us go on. Now the instruction pointer points to 0x1002

```Asm
0x1002: dw 0x53a3
```

Reading the address 0x53a3 reveals

```Asm
0x53a3: dw 0x1d29
0x53a5: dw 0x0001
```
and the corresponding code

```Asm
0x1d29: inc    bx
0x1d2a: inc    bx
0x1d2b: push   bx
0x1d2c: lodsw
0x1d2d: mov    bx,ax
0x1d2f: jmp    word ptr [bx]
```

At this time the register bx contains the word address 0x53a3. So this code just pushes the address 0x53a5 on top of the stack.  What we have done is to provide the program a pointer to a variable. The variable has the content 0x0001. The Forth word '@' would pop the address from the stack, reads its content and pushes it back on the stack.

So far I could identify 6256 words that contain either code or data.

* 3711 are words, which execute other words. I guess you can call them functions.
* 906 16-Bit variables or data arrays. In very rare cases (~20) the data array contains x86 machine code
* 356 data structures which define content of the tables stored on disk (see below)
* 346 data structures which define content of the instance tree data structure (see below)
* 278 words contain x86 machine code
* 235 16-Bit constants
* 127 switch-case expressions
* 105 words contain data structures to define the code overlays
* the other words are of different type

And that's actually all you need to know about the code structure.
As you can see this can be a space efficient encoding, but speedwise it is a catastrophe. Every few machine code instructions you have to jump to a different code block.

The equivalent of indirect threading in C would look like this.

```C
uint16_t instruction_pointer = start_of_program_pointer;
    
void Call(uint16_t word_adress)
{
    // the first two byte of the word's address contain 
    // the address of the corresponding code, which must be executed for this word
    uint16_t code_address = Read16(word_address);

    switch(code_address)
    {
        .
        .
        .
        case 0x0f74: // word '+'
            Push16(Pop16() + Pop16());
            break;
        .
        .
        .
    }
}

void Run()
{
    while(1)
    {
        uint16_t word_address = Read16(instruction_pointer);
        instruction_pointer += 2;
        Call(word_address);
    }
}

```

The code executed for a specific word has access to 5 major variables (16-Bit)

  * instruction pointer (register si): This points inside of a more complex function ("word") in Forth. It points to the address of the Forth "word" in memory which must be executed next. The instruction pointer can be altered by the word's code for branch and loop control.
  * stack pointer (register sp): This is a stack machine and therefore needs a stack pointer. Push will put an item on the stack. Pop retrieves an item from the top of the stack.
  * call stack pointer (register bp): contains the return addresses of the functions. Also used to temporarily store items.
  * word address (register bx): The first 2 byte contain the address to the x86 machine code of this word. Afterwards, there can be optional data such as constants, variables and arrays. In the above example for '+' it contains the machine code itself.
  * code address (register ip): The x86-machine code which must be executed

## Translation ##

The disassember transpiles the FORTH code into C-style code.. Most of the transpiled code compiles. To understand what the program does take a look at the following table. It takes the "bytecode" (which are mainly 16-Bit pointers) as input and transforms it into C.

Forth code:
```FORTH
: .C ( -- )
\ Display context stack contents.
  CR CDEPTH IF CXSP @ 3 + END-CX
               DO I 1.5@ .DRJ -3 +LOOP
            ELSE ." MT STK"
            THEN CR ;
  EXIT
```

Transformation:

| 16-Bit Pointers | FORTH       | C                                                                       |
|-----------------|-------------|-------------------------------------------------------------------------|
|                 | : .C ( -- ) | `void DrawC() { `                                                       |
|                 |             | `  unsigned short int i, imax; `                                        |
| 0x0642          | CR          | `  Exec("CR"); `                                                        |
| 0x75d5          | CDEPTH      | `  CDEPTH(); `                                                          |
| 0x15fa 0x0020   | IF          | `  if (Pop() != 0) { `                                                  |
| 0x54ae          | CXSP        | `    Push(Read16(pp_CXSP) + 3);`                                        |
| 0xbae           | @           |                                                                         |
| 0x3b73          | 3           |                                                                         |
| 0x0f72          | +           |                                                                         |
| 0x4ffd          | END-CX      | `    Push(Read16(cc_END_dash_CX));`                                     |
| 0x15b8          | DO          | `    i = Pop();`                                                        |
|                 |             | `    imax = Pop();`                                                     |
|                 |             | `    do {`                                                              |
| 0x50e0          | I           | `        Push(i);`                                                      |
| 0x4995          | 1.5@        | `        _1_dot_5_at_();`                                               |
| 0x81d5          | .DRJ        | `        DrawDRJ();`                                                    |
| 0x175d 0xfffd   | -3          | `        Push(-3);`                                                     |
| 0x155c 0xffff   | +LOOP       | `    int step = Pop();`                                                 |
|                 |             | `    i += step;`                                                        |
|                 |             | `    if (((step>=0) && (i>=imax)) \|\| ((step<0) && (i<=imax))) break;` |
|                 |             | `    } while(1);`                                                       |
| 0x1660 0x000b   | ELSE        | `  } else {`                                                            |
| 0x1bdc          | " MT STK"   | `    PRINT("MT STK", 6);`                                               |
| 0x06            |             |                                                                         |
| 0x4d            | 'M'         |                                                                         |
| 0x54            | 'T'         |                                                                         |
| 0x20            | ' '         |                                                                         |
| 0x53            | 'S'         |                                                                         |
| 0x54            | 'T'         |                                                                         |
| 0x4b            | 'K'         |                                                                         |
|                 | THEN        | `  }`                                                                   |
| 0x0642          | CR          | `  Exec("CR");`                                                         |
| 0x1690          | EXIT        | `}`                                                                     |

## Files ##

The game comes in 3 Files
* STARA.COM and STARB.COM: Both contain the game data and the game executable stored in a its own directory structure.
* STARFLT.COM: This file is a DOS executable and contains the initialitzation routines, general Forth routines and routines to read and write of the on-disk data structures in STARA.COM and STARB.COM. 

## Directory in STARA.COM and STARB.COM

Content of STARA.com

| entry     | size   | description                                     |
|-----------|--------|-------------------------------------------------|
| DIRECTORY | 4096   | contains directory of STARA and STARB           |
| ELO-CPIC  | 4816   |                                                 |
| GAZ-CPIC  | 3120   |                                                 |
| MEC-CPIC  | 2848   |                                                 |
| MYS-CPIC  | 6064   |                                                 |
| NOM-CPIC  | 1136   |                                                 |
| SPE-CPIC  | 1888   |                                                 |
| THR-CPIC  | 2480   |                                                 |
| VEL-CPIC  | 4672   |                                                 |
| VPR-CPIC  | 1248   |                                                 |
| MIN-CPIC  | 2096   |                                                 |
| SPLASH    | 16384  | Picture                                         |
| MED-PIC   | 2048   | Picture                                         |
| PHAZES    | 6144   |                                                 |
| HUM-PIC   | 480    | Picture                                         |
| VEL-PIC   | 432    | Picture                                         |
| THR-PIC   | 272    | Picture                                         |
| ELO-PIC   | 608    | Picture                                         |
| AND-PIC   | 640    | Picture                                         |
| SAVE      | 124000 |                                                 |
| MUSIC     | 4960   | Code Overlay                                    |
| EARTH     | 1152   | Map of the planet earth                         |
| GALAXY    | 6304   |                                                 |
| CREDITS   | 16384  | picture                                         |
| COP-CPIC  | 2928   |                                                 |
| FONTS     | 768    |                                                 |
| CGA       | 3600   | Machine Code routines for the CGA graphics card |
| EGA       | 3600   | Machine Code routines for the EGA graphics card |

Content of STARB.COM

| entry        | size   | description                                         |
|--------------|--------|-----------------------------------------------------|
| DIRECTORY    | 4096   | contains directory of STARA and STARB               |
| INSTANCE     | 150528 | Tree structure with most of the content of the game |
| BOX          | 1024   | Table                                               |
| BANK-TRANS   | 144    | Table                                               |
| CREWMEMBER   | 128    | Table                                               |
| VESSEL       | 1936   | Table                                               |
| ELEMENT      | 544    | Table                                               |
| ARTIFACT     | 1584   | Table                                               |
| PLANET       | 1360   | Table                                               |
| SPECIMEN     | 448    | Table                                               |
| BIO-DATA     | 448    | Table                                               |
| TPORT-PIC    | 2416   | Picture                                             |
| BPORT-PIC    | 3984   | Picture                                             |
| ANALYZE-TEXT | 3200   | Table                                               |
| BUTTONS      | 944    | Table                                               |
| ICON1:1      | 912    |                                                     |
| ICON1:2      | 912    |                                                     |
| ICON1:4      | 912    |                                                     |
| ICON-NAME    | 736    |                                                     |
| DPART-OV     | 1552   | Code Overlay                                        |
| REGIONS      | 176    | Table                                               |
| CREATURE     | 17024  | Table                                               |
| CHKFLIGHT-OV | 960    | Code Overlay                                        |
| FRACT-OV     | 4640   | Code Overlay                                        |
| ICONP-OV     | 832    | Code Overlay                                        |
| SITE-OV      | 1888   | Code Overlay                                        |
| HYPERMSG-OV  | 4112   | Code Overlay                                        |
| GPOLY        | 368    |                                                     |
| FACET        | 288    |                                                     |
| VERTEX       | 416    |                                                     |
| BLT-OV       | 864    | Code Overlay                                        |
| MISC-OV      | 1440   | Code Overlay                                        |
| BANK-OV      | 1520   | Code Overlay                                        |
| ASSCREW-OV   | 2800   | Code Overlay                                        |
| PERSONNEL-OV | 4192   | Code Overlay                                        |
| SHIPGRPH-OV  | 2112   | Code Overlay                                        |
| CONFIG-OV    | 3072   | Code Overlay                                        |
| TDEPOT-OV    | 4800   | Code Overlay                                        |
| PORTMENU-OV  | 3120   | Code Overlay                                        |
| VITA-OV      | 3552   | Code Overlay                                        |
| HP-OV        | 4832   | Code Overlay                                        |
| LP-OV        | 5280   | Code Overlay                                        |
| SENT-OV      | 4784   | Code Overlay                                        |
| TV-OV        | 3472   | Code Overlay                                        |
| COMM-OV      | 7232   | Code Overlay                                        |
| COMMSPEC-OV  | 2864   | Code Overlay                                        |
| SEED-OV      | 2400   | Code Overlay                                        |
| LISTICONS    | 720    | Code Overlay                                        |
| MOVE-OV      | 3808   | Code Overlay                                        |
| ENGINEER     | 2320   | Code Overlay                                        |
| DOCTOR       | 1280   | Code Overlay                                        |
| ORBIT-OV     | 6640   | Code Overlay                                        |
| CAPTAIN      | 5952   | Code Overlay                                        |
| SCIENCE      | 3952   | Code Overlay                                        |
| NAVIGATR     | 880    | Code Overlay                                        |
| SHIPBUTTONS  | 1984   |                                                     |
| MAP-OV       | 4160   | Code Overlay                                        |
| HYPER-OV     | 7168   | Code Overlay                                        |
| ANALYZE-OV   | 2560   | Code Overlay                                        |
| LAUNCH-OV    | 1360   | Code Overlay                                        |
| FLUX-EFFECT  | 464    |                                                     |
| OP-OV        | 4400   | Code Overlay                                        |
| ITEMS-OV     | 6016   | Code Overlay                                        |
| LSYSICON     | 752    |                                                     |
| MSYSICON     | 448    |                                                     |
| SSYSICON     | 176    |                                                     |
| BEHAV-OV     | 5360   |                                                     |
| CMAP         | 1008   |                                                     |
| INSTALL      | 800    |                                                     |
| HEAL-OV      | 1232   | Code Overlay                                        |
| REPAIR-OV    | 1696   | Code Overlay                                        |
| GAME-OV      | 5920   | Code Overlay                                        |
| PLSET-OV     | 2400   | Code Overlay                                        |
| MAPS-OV      | 2240   | Code Overlay                                        |
| VES-BLT      | 4528   |                                                     |
| STORM-OV     | 1232   | Code Overlay                                        |
| COMPOUNDS    | 176    | Table                                               |
| IT-OV        | 1936   | Code Overlay                                        |
| COMBAT-OV    | 6192   | Code Overlay                                        |
| DAMAGE-OV    | 2752   | Code Overlay                                        |
| LAND-OV      | 1088   | Code Overlay                                        |
| PSTATS       | 64     | Table                                               |
| STP-OV       | 1440   | Code Overlay                                        |


## Usage ##

Put the files of the original Starflight game into the folders `starflt1-in` and `starflt2-in` and run `make`. You should get two executables (`disasOV1` and `disasOV2`), which produces the content in the folders `starflt1-out` and `starflt2-out`. The generated output is part of this repository.

