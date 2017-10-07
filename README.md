# starflight-reverse

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

This project is a fun project trying to reverse engineer the old code. Starflight was written in FORTH which enables us to extract most of the original source code. Take a look at the [technical articles](http://migblog.blog.com/starflight-home/)
The disassember transpiles the FORTH code into C-style code, because more people are familiar with this style. Most of the transpiled code compiles.

## Usage ##

Just put the content of the original Starflight folders into the folders `starflt1-in` and `starflt2-in` and run `make`. You should get two executables (`disasOV1` and `disasOV2`), which produces the content in the folders `starflt1-out` `starflt2-out`. The generated output is part of this repository.
