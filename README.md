# Starflight-Reverse

Reversed engineered game Starflight (1986)

## What is Starflight? ##

Starflight developed by Binary Systems was one of the best exploration and role playing games in the 90s. It influenced a whole game genre.

To find out more about the game check the following links:

[Wikipedia](https://de.wikipedia.org/wiki/Starflight)

[Review of Starflight 1](http://crpgaddict.blogspot.de/search/label/Starflight)

[Review of Starflight 2](http://crpgaddict.blogspot.de/search/label/Starflight%20II)

[Starflight ressource page](http://starflt.com)

You can buy the game at [GoG](https://www.gog.com/game/starflight_1_2)

## What is this project about? ##

This project is a fun project trying to reverse engineer the old code. Starflight was written in FORTH which enables us to extract most of the original source code. Take a look at the [technical articles](https://github.com/s-macke/starflight-reverse/tree/master/webarchive)
The disassember transpiles the FORTH code into C-style code, because more people are familiar with this style. Most of the transpiled code compiles.

## Usage ##

Just put the content of the original Starflight folders into the folders `starflt1-in` and `starflt2-in` and run `make`. You should get two executables (`disasOV1` and `disasOV2`), which produces the content in the folders `starflt1-out` `starflt2-out`. The generated output is part of this repository.

## Translation ##

To understand what the program does take a look at the following table. It take the bytecode as input and transforms it into C.

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

| BYTECODE |   FORTH     | C      |
| -------- | ----------- | ------ |
|          | : .C ( -- ) |`void DrawC() { `|
|          |             |`  unsigned short int i, imax; `|
| 0x0642   | CR          |`  Exec("CR"); `|
| 0x75d5   | CDEPTH      |`  CDEPTH(); `|
| 0x15fa   | IF          |`  if (Pop() != 0) { `|
| 0x0020   |             | |
| 0x54ae   | CXSP        |`    Push(Read16(pp_CXSP) + 3);`|
| 0xbae    | @           | |
| 0x3b73   | 3           | |
| 0x0f72   | +           | |
| 0x4ffd   | END-CX      |`    Push(Read16(cc_END_dash_CX));`|
| 0x15b8   | DO          |`    i = Pop();`|
|          |             |`    imax = Pop();`|
|          |             |`    do {`|
| 0x50e0   | I           |`        Push(i);`|
| 0x4995   | 1.5@        |`        _1_dot_5_at_();`|
| 0x81d5   | .DRJ        |`        DrawDRJ();`|
| 0x175d   | -3          |`        Push(-3);`|
| 0xfffd   |             ||
| 0x155c   | +LOOP       |`    int step = Pop();`|
| 0xffff   |             |`    i += step;`|
|          |             |`    if (((step>=0) && (i>=imax)) \|\| ((step<0) && (i<=imax))) break;`|
|          |             |`    } while(1);`|
| 0x1660   | ELSE        |`  } else {`|
| 0x000b   |             ||
| 0x1bdc   | " MT STK"   |`    PRINT("MT STK", 6);`|
| 0x6      |             ||
| 0x4d     | 'M'         ||
| 0x54     | 'T'         ||
| 0x20     | ' '         ||
| 0x53     | 'S'         ||
| 0x54     | 'T'         ||
| 0x4b     | 'K'         ||
|          | THEN        |`  }`|
| 0x0642   | CR          |`  Exec("CR");`|
| 0x1690   | EXIT        |`}`|
