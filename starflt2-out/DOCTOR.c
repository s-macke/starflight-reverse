// store offset = 0xf060
// overlay size   = 0x0500
// name = 'DOC-VOC________________'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf076 bitfield: 0 0 0  codep:0x7394 parp:0xf076 size:0x0006
// 1870:      UNK_0xf07e bitfield: 0 0 0  codep:0x7420 parp:0xf07e size:0x0003
// 1871:      UNK_0xf083 bitfield: 0 0 0  codep:0x7420 parp:0xf083 size:0x0003
// 1872:      UNK_0xf088 bitfield: 0 0 0  codep:0x7420 parp:0xf088 size:0x0003
// 1873:      UNK_0xf08d bitfield: 0 0 0  codep:0x7420 parp:0xf08d size:0x0003
// 1874:      UNK_0xf092 bitfield: 0 0 0  codep:0x224c parp:0xf092 size:0x0012
// 1875:      UNK_0xf0a6 bitfield: 0 0 0  codep:0x224c parp:0xf0a6 size:0x003e
// 1876:      UNK_0xf0e6 bitfield: 0 0 0  codep:0x224c parp:0xf0e6 size:0x00c8
// 1877:      UNK_0xf1b0 bitfield: 0 0 0  codep:0x224c parp:0xf1b0 size:0x001c
// 1878:      UNK_0xf1ce bitfield: 0 0 0  codep:0x224c parp:0xf1ce size:0x0049
// 1879:      UNK_0xf219 bitfield: 0 0 0  codep:0x224c parp:0xf219 size:0x002d
// 1880:      UNK_0xf248 bitfield: 0 0 0  codep:0x224c parp:0xf248 size:0x0019
// 1881:      UNK_0xf263 bitfield: 0 0 0  codep:0x224c parp:0xf263 size:0x0029
// 1882:      UNK_0xf28e bitfield: 0 0 0  codep:0x224c parp:0xf28e size:0x003e
// 1883:      UNK_0xf2ce bitfield: 0 0 0  codep:0x224c parp:0xf2ce size:0x0028
// 1884:      UNK_0xf2f8 bitfield: 0 0 0  codep:0x224c parp:0xf2f8 size:0x0016
// 1885:      UNK_0xf310 bitfield: 0 0 0  codep:0x224c parp:0xf310 size:0x002b
// 1886:      UNK_0xf33d bitfield: 0 0 0  codep:0x224c parp:0xf33d size:0x003c
// 1887:          NPCREW bitfield: 0 0 0  codep:0x4b3b parp:0xf384 size:0x000c
// 1888:      UNK_0xf392 bitfield: 0 0 0  codep:0x224c parp:0xf392 size:0x00ac
// 1889:      UNK_0xf440 bitfield: 0 0 0  codep:0x224c parp:0xf440 size:0x00a5
// 1890:      (/EXAMINE) bitfield: 0 0 0  codep:0x224c parp:0xf4f4 size:0x000c
// 1891:        (/TREAT) bitfield: 0 0 0  codep:0x224c parp:0xf50d size:0x0053

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf072: db 0x4f 0x00 'O '
  
// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x7394 parp=0xf076
// ================================================
// 0xf076: db 0x10 0x13 0x01 0x14 0xc8 0x6a '     j'
  
// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x7420 parp=0xf07e
// ================================================
// 0xf07e: db 0x10 0x0b 0x0f '   '
  
// ================================================
// 0xf081: WORD 'UNK_0xf083' codep=0x7420 parp=0xf083
// ================================================
// 0xf083: db 0x10 0x1f 0x01 '   '
  
// ================================================
// 0xf086: WORD 'UNK_0xf088' codep=0x7420 parp=0xf088
// ================================================
// 0xf088: db 0x10 0x20 0x02 '   '
  
// ================================================
// 0xf08b: WORD 'UNK_0xf08d' codep=0x7420 parp=0xf08d
// ================================================
// 0xf08d: db 0x11 0x11 0x03 '   '
  
// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092
// ================================================

void UNK_0xf092()
{
  Push(0x0040); pp_XBLT !();
  
  (.") string 5 "[N Y]"
  
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6()
{
  >R *ASSIGN >C+S();
  Push(0); Push(cc_6); Push(0); 
  do // (DO)
  {
  UNK_0xf08d I Push(cc_3); * + @>C+S();
  UNK_0xf088 @ J AND 
  if (Pop() == 0) goto label1071;
  1+ >R CI R> LEAVE 
  label1071:
  ICLOSE();
  
  } while(...); // (LOOP) 0xffda
  ICLOSE();
  R> DROP 
}


// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================

void UNK_0xf0e6()
{
  UNK_0xf088 @ Push(0x0010); AND 
  if (Pop() == 0) goto label1085;
  
  (.") string 8 "COMATOSE"
  DROP 
  goto label1093;
  
  label1085:
  >R I 0= 
  if (Pop() == 0) goto label1086;
  
  (.") string 4 "DEAD"
  
  goto label1092;
  
  label1086:
  I Push(1); Push(0x0015); WITHIN();
  
  if (Pop() == 0) goto label1087;
  
  (.") string 10 "CRITICALLY"
  
  goto label1091;
  
  label1087:
  I Push(0x0015); Push(0x0033); WITHIN();
  
  if (Pop() == 0) goto label1088;
  
  (.") string 7 "HEAVILY"
  
  goto label1091;
  
  label1088:
  I Push(0x0033); Push(0x0051); WITHIN();
  
  if (Pop() == 0) goto label1089;
  
  (.") string 10 "MODERATELY"
  
  goto label1091;
  
  label1089:
  I Push(0x0051); Push(0x0064); WITHIN();
  
  if (Pop() == 0) goto label1090;
  
  (.") string 8 "SLIGHTLY"
  
  goto label1091;
  
  label1090:
  
  (.") string 3 "NOT"
  
  label1091:
  
  (.") string 8 " WOUNDED"
  
  label1092:
  R> DROP 
  label1093:
  
}


// ================================================
// 0xf1ae: WORD 'UNK_0xf1b0' codep=0x224c parp=0xf1b0
// ================================================

void UNK_0xf1b0()
{
  
  if (Pop() == 0) goto label1073;
  
  (.") string 5 "TREAT"
  
  goto label1074;
  
  label1073:
  
  (.") string 7 "EXAMINE"
  
  label1074:
  
}


// ================================================
// 0xf1cc: WORD 'UNK_0xf1ce' codep=0x224c parp=0xf1ce
// ================================================

void UNK_0xf1ce()
{
  >C+S();
  CTINIT();
  
  (.") string 23 "SHOULD I STOP TREATING "
  UNK_0xf07e $.();
  ICLOSE();
  CTCR();
  
  (.") string 3 "TO "
  UNK_0xf1b0();
  
  (.") string 14 " SOMEONE ELSE?"
  CTCR();
  UNK_0xf092();
  Y/N();
  CTERASE();
  
}


// ================================================
// 0xf217: WORD 'UNK_0xf219' codep=0x224c parp=0xf219
// ================================================

void UNK_0xf219()
{
  UNK_0xf07e $.();
  
  (.") string 21 " DOESN'T NEED MEDICAL"
  CTCR();
  
  (.") string 10 "TREATMENT."
  
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248
// ================================================

void UNK_0xf248()
{
  UNK_0xf07e $.();
  
  (.") string 16 " IS BEYOND HELP."
  
}


// ================================================
// 0xf261: WORD 'UNK_0xf263' codep=0x224c parp=0xf263
// ================================================

void UNK_0xf263()
{
  
  (.") string 26 "I AM STARTING TREATMENT ON"
  CTCR();
  UNK_0xf07e $.();
  
  (.") string 1 "."
  
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e()
{
  >C+S();
  UNK_0xf083 C@ Push(1); Push(0x0064); WITHIN();
  
  if (Pop() == 0) goto label1079;
  UNK_0xf263();
  UNK_0xf088 @ Push(cc_4); OR UNK_0xf088 !();
  
  goto label1081;
  
  label1079:
  UNK_0xf083 C@ Push(0x0064); = 
  if (Pop() == 0) goto label1080;
  UNK_0xf219();
  
  goto label1081;
  
  label1080:
  UNK_0xf248();
  
  label1081:
  ICLOSE();
  
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce()
{
  
  (.") string 25 "I AM CEASING TREATMENT ON"
  CTCR();
  UNK_0xf07e $.();
  
  (.") string 1 "."
  
}


// ================================================
// 0xf2f6: WORD 'UNK_0xf2f8' codep=0x224c parp=0xf2f8
// ================================================

void UNK_0xf2f8()
{
  >C+S();
  UNK_0xf2ce();
  UNK_0xf088 @ Push(0xfffb); AND UNK_0xf088 !();
  ICLOSE();
  
}


// ================================================
// 0xf30e: WORD 'UNK_0xf310' codep=0x224c parp=0xf310
// ================================================

void UNK_0xf310()
{
  
  (.") string 28 "I AM CONTINUING TREATMENT ON"
  CTCR();
  UNK_0xf07e $.();
  
  (.") string 1 "."
  
}


// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d
// ================================================

void UNK_0xf33d()
{
  >C+S();
  UNK_0xf310();
  UNK_0xf088 @ Push(cc_4); OR UNK_0xf088 !();
  ICLOSE();
  
}

// 0xf351: db 0x4c 0x22 0xb1 0x7a 0x86 0xf0 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 0x4c 0x22 0xc9 0x7a 0x86 0xf0 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 'L" z     ;      .   L" z     ;      .   '
  
// ================================================
// 0xf379: WORD 'NPCREW' codep=0x4b3b parp=0xf384
// ================================================
// 0xf384: db 0x02 0x00 0x22 0x0f 0x01 0x00 0x53 0xf3 0xff 0xff 0x67 0xf3 '  "   S   g '
  
// ================================================
// 0xf390: WORD 'UNK_0xf392' codep=0x224c parp=0xf392
// ================================================

void UNK_0xf392()
{
  CTINIT();
  CTERASE();
  
  (.") string 13 "WHO SHOULD I "
  UNK_0xf1b0();
  
  (.") string 1 "?"
  *PERSON >C+S();
  IOPEN();
  
  label1078:
  UNK_0xf088 C@ Push(cc_8); AND NOT 
  if (Pop() == 0) goto label1075;
  INEXT();
  
  goto label1078;
  
  label1075:
  Push(1); Push(0x0015); CMESS();
  
  (.") string 20 "CHOOSE CREWMEMBER ^\"
  !CRS();
  Push(2); Push(0x0012); CMESS();
  
  (.") string 18 "AND PRESS SPACEBAR"
  !CRS();
  Push(0x000b); Push(2); CTPOS.();
  UNK_0xf07e $.();
  
  label1077:
  XYSCAN();
  DROP NPCREW 
  if (Pop() == 0) goto label1076;
  Push(0x000b); Push(2); CTPOS.();
  Push(0x000f); BLACK POLY-ER();
  UNK_0xf07e $.();
  
  label1076:
  ?TRIG();
  
  if (Pop() == 0) goto label1077;
  CI CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440()
{
  CTINIT();
  CTERASE();
  >C+S();
  UNK_0xf07e $.();
  
  (.") string 4 " IS "
  UNK_0xf083 C@ DUP UNK_0xf0e6();
  
  if (Pop() == 0) goto label1094;
  
  (.") string 1 ","
  CTCR();
  
  (.") string 22 "AND HAS A VITALITY OF "
  UNK_0xf083 C@ Push(0); .R();
  
  (.") string 6 " AND A"
  CTCR();
  
  (.") string 14 "DURABILITY OF "
  UNK_0xf076 C@ Push(0); .R();
  
  label1094:
  
  (.") string 1 "."
  CTCR();
  UNK_0xf088 @ Push(cc_4); AND 
  if (Pop() == 0) goto label1095;
  UNK_0xf07e $.();
  
  (.") string 19 " IS CURRENTLY BEING"
  CTCR();
  
  (.") string 8 "TREATED."
  
  label1095:
  ICLOSE();
  
}


// ================================================
// 0xf4e5: WORD '(/EXAMINE)' codep=0x224c parp=0xf4f4
// ================================================

void (/EXAMINE)()
{
  CTERASE();
  >1FONT();
  Push(0); UNK_0xf392();
  UNK_0xf440();
  
}


// ================================================
// 0xf500: WORD '(/TREAT)' codep=0x224c parp=0xf50d
// ================================================

void (/TREAT)()
{
  CTERASE();
  Push(cc_4); UNK_0xf0a6();
  
  if (Pop() == 0) goto label1072;
  2DUP Push(1); ROT ROT UNK_0xf1ce();
  
  if (Pop() == 0) goto label1082;
  UNK_0xf2f8();
  Push(0x09c4); MS();
  Push(1); UNK_0xf392();
  CTERASE();
  UNK_0xf28e();
  
  goto label1084;
  
  label1082:
  UNK_0xf33d();
  
  label1084:
  
  goto label1083;
  
  label1072:
  Push(1); UNK_0xf392();
  CTERASE();
  UNK_0xf28e();
  
  label1083:
  
}

// 0xf549: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DOC-VOC________________ '
  