// store offset = 0xf060
// overlay size   = 0x0500
// name = 'DOC-VOC_________________________ for DOCTOR-----------'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf076 bitfield: 0 0 0  codep:0x73ea parp:0xf076 size:0x0006
// 1704:      UNK_0xf07e bitfield: 0 0 0  codep:0x744d parp:0xf07e size:0x0003
// 1705:      UNK_0xf083 bitfield: 0 0 0  codep:0x744d parp:0xf083 size:0x0003
// 1706:      UNK_0xf088 bitfield: 0 0 0  codep:0x744d parp:0xf088 size:0x0003
// 1707:      UNK_0xf08d bitfield: 0 0 0  codep:0x744d parp:0xf08d size:0x0003
// 1708:      UNK_0xf092 bitfield: 0 0 0  codep:0x224c parp:0xf092 size:0x0012
// 1709:      UNK_0xf0a6 bitfield: 0 0 0  codep:0x224c parp:0xf0a6 size:0x003e
// 1710:      UNK_0xf0e6 bitfield: 0 0 0  codep:0x224c parp:0xf0e6 size:0x00a9
// 1711:      UNK_0xf191 bitfield: 0 0 0  codep:0x224c parp:0xf191 size:0x001c
// 1712:      UNK_0xf1af bitfield: 0 0 0  codep:0x224c parp:0xf1af size:0x0049
// 1713:      UNK_0xf1fa bitfield: 0 0 0  codep:0x224c parp:0xf1fa size:0x002d
// 1714:      UNK_0xf229 bitfield: 0 0 0  codep:0x224c parp:0xf229 size:0x0019
// 1715:      UNK_0xf244 bitfield: 0 0 0  codep:0x224c parp:0xf244 size:0x0029
// 1716:      UNK_0xf26f bitfield: 0 0 0  codep:0x224c parp:0xf26f size:0x003e
// 1717:      UNK_0xf2af bitfield: 0 0 0  codep:0x224c parp:0xf2af size:0x0028
// 1718:      UNK_0xf2d9 bitfield: 0 0 0  codep:0x224c parp:0xf2d9 size:0x0016
// 1719:      UNK_0xf2f1 bitfield: 0 0 0  codep:0x224c parp:0xf2f1 size:0x002b
// 1720:      UNK_0xf31e bitfield: 0 0 0  codep:0x224c parp:0xf31e size:0x003c
// 1721:          NPCREW bitfield: 0 0 0  codep:0x4a4f parp:0xf365 size:0x000c
// 1722:      UNK_0xf373 bitfield: 0 0 0  codep:0x224c parp:0xf373 size:0x00ac
// 1723:      UNK_0xf421 bitfield: 0 0 0  codep:0x224c parp:0xf421 size:0x00a5
// 1724:      (/EXAMINE) bitfield: 0 0 0  codep:0x224c parp:0xf4d5 size:0x000c
// 1725:        (/TREAT) bitfield: 0 0 0  codep:0x224c parp:0xf4ee size:0x0072

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf072: db 0x4d 0x00 'M '
  
// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x73ea parp=0xf076
// ================================================
// 0xf076: db 0x10 0x13 0x01 0x14 0x89 0x64 '     d'
  
// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x744d parp=0xf07e
// ================================================
// 0xf07e: db 0x10 0x0b 0x0f '   '
  
// ================================================
// 0xf081: WORD 'UNK_0xf083' codep=0x744d parp=0xf083
// ================================================
// 0xf083: db 0x10 0x1f 0x01 '   '
  
// ================================================
// 0xf086: WORD 'UNK_0xf088' codep=0x744d parp=0xf088
// ================================================
// 0xf088: db 0x10 0x20 0x02 '   '
  
// ================================================
// 0xf08b: WORD 'UNK_0xf08d' codep=0x744d parp=0xf08d
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
  if (Pop() == 0) goto label1162;
  1+ >R CI R> LEAVE 
  label1162:
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
  >R I 0= 
  if (Pop() == 0) goto label1176;
  
  (.") string 4 "DEAD"
  
  goto label1182;
  
  label1176:
  I Push(1); Push(0x0015); WITHIN();
  
  if (Pop() == 0) goto label1177;
  
  (.") string 10 "CRITICALLY"
  
  goto label1181;
  
  label1177:
  I Push(0x0015); Push(0x0033); WITHIN();
  
  if (Pop() == 0) goto label1178;
  
  (.") string 7 "HEAVILY"
  
  goto label1181;
  
  label1178:
  I Push(0x0033); Push(0x0051); WITHIN();
  
  if (Pop() == 0) goto label1179;
  
  (.") string 10 "MODERATELY"
  
  goto label1181;
  
  label1179:
  I Push(0x0051); Push(0x0064); WITHIN();
  
  if (Pop() == 0) goto label1180;
  
  (.") string 8 "SLIGHTLY"
  
  goto label1181;
  
  label1180:
  
  (.") string 3 "NOT"
  
  label1181:
  
  (.") string 8 " WOUNDED"
  
  label1182:
  R> DROP 
}


// ================================================
// 0xf18f: WORD 'UNK_0xf191' codep=0x224c parp=0xf191
// ================================================

void UNK_0xf191()
{
  
  if (Pop() == 0) goto label1164;
  
  (.") string 5 "TREAT"
  
  goto label1165;
  
  label1164:
  
  (.") string 7 "EXAMINE"
  
  label1165:
  
}


// ================================================
// 0xf1ad: WORD 'UNK_0xf1af' codep=0x224c parp=0xf1af
// ================================================

void UNK_0xf1af()
{
  >C+S();
  CTINIT();
  
  (.") string 23 "SHOULD I STOP TREATING "
  UNK_0xf07e $.();
  ICLOSE();
  CTCR();
  
  (.") string 3 "TO "
  UNK_0xf191();
  
  (.") string 14 " SOMEONE ELSE?"
  CTCR();
  UNK_0xf092();
  Y/N();
  CTERASE();
  
}


// ================================================
// 0xf1f8: WORD 'UNK_0xf1fa' codep=0x224c parp=0xf1fa
// ================================================

void UNK_0xf1fa()
{
  UNK_0xf07e $.();
  
  (.") string 21 " DOESN'T NEED MEDICAL"
  CTCR();
  
  (.") string 10 "TREATMENT."
  
}


// ================================================
// 0xf227: WORD 'UNK_0xf229' codep=0x224c parp=0xf229
// ================================================

void UNK_0xf229()
{
  UNK_0xf07e $.();
  
  (.") string 16 " IS BEYOND HELP."
  
}


// ================================================
// 0xf242: WORD 'UNK_0xf244' codep=0x224c parp=0xf244
// ================================================

void UNK_0xf244()
{
  
  (.") string 26 "I AM STARTING TREATMENT ON"
  CTCR();
  UNK_0xf07e $.();
  
  (.") string 1 "."
  
}


// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x224c parp=0xf26f
// ================================================

void UNK_0xf26f()
{
  >C+S();
  UNK_0xf083 C@ Push(1); Push(0x0064); WITHIN();
  
  if (Pop() == 0) goto label1170;
  UNK_0xf244();
  UNK_0xf088 @ Push(cc_4); OR UNK_0xf088 !();
  
  goto label1172;
  
  label1170:
  UNK_0xf083 C@ Push(0x0064); = 
  if (Pop() == 0) goto label1171;
  UNK_0xf1fa();
  
  goto label1172;
  
  label1171:
  UNK_0xf229();
  
  label1172:
  ICLOSE();
  
}


// ================================================
// 0xf2ad: WORD 'UNK_0xf2af' codep=0x224c parp=0xf2af
// ================================================

void UNK_0xf2af()
{
  
  (.") string 25 "I AM CEASING TREATMENT ON"
  CTCR();
  UNK_0xf07e $.();
  
  (.") string 1 "."
  
}


// ================================================
// 0xf2d7: WORD 'UNK_0xf2d9' codep=0x224c parp=0xf2d9
// ================================================

void UNK_0xf2d9()
{
  >C+S();
  UNK_0xf2af();
  UNK_0xf088 @ Push(0xfffb); AND UNK_0xf088 !();
  ICLOSE();
  
}


// ================================================
// 0xf2ef: WORD 'UNK_0xf2f1' codep=0x224c parp=0xf2f1
// ================================================

void UNK_0xf2f1()
{
  
  (.") string 28 "I AM CONTINUING TREATMENT ON"
  CTCR();
  UNK_0xf07e $.();
  
  (.") string 1 "."
  
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e()
{
  >C+S();
  UNK_0xf2f1();
  UNK_0xf088 @ Push(cc_4); OR UNK_0xf088 !();
  ICLOSE();
  
}

// 0xf332: db 0x4c 0x22 0x84 0x7a 0x86 0xf0 0x92 0x0c 0x9b 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 0x4c 0x22 0x9c 0x7a 0x86 0xf0 0x92 0x0c 0x9b 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 'L" z     ;      .   L" z     ;      .   '
  
// ================================================
// 0xf35a: WORD 'NPCREW' codep=0x4a4f parp=0xf365
// ================================================
// 0xf365: db 0x02 0x00 0x22 0x0f 0x01 0x00 0x34 0xf3 0xff 0xff 0x48 0xf3 '  "   4   H '
  
// ================================================
// 0xf371: WORD 'UNK_0xf373' codep=0x224c parp=0xf373
// ================================================

void UNK_0xf373()
{
  CTINIT();
  CTERASE();
  
  (.") string 13 "WHO SHOULD I "
  UNK_0xf191();
  
  (.") string 1 "?"
  *PERSON >C+S();
  IOPEN();
  
  label1169:
  UNK_0xf088 C@ Push(cc_8); AND NOT 
  if (Pop() == 0) goto label1166;
  INEXT();
  
  goto label1169;
  
  label1166:
  Push(1); Push(0x0015); CMESS();
  
  (.") string 20 "CHOOSE CREWMEMBER ^\"
  !CRS();
  Push(2); Push(0x0012); CMESS();
  
  (.") string 18 "AND PRESS SPACEBAR"
  !CRS();
  Push(0x000b); Push(2); CTPOS.();
  UNK_0xf07e $.();
  
  label1168:
  XYSCAN();
  DROP NPCREW 
  if (Pop() == 0) goto label1167;
  Push(0x000b); Push(2); CTPOS.();
  Push(0x000f); BLACK POLY-ER();
  UNK_0xf07e $.();
  
  label1167:
  ?TRIG();
  
  if (Pop() == 0) goto label1168;
  CI CDROP();
  ICLOSE();
  
}


// ================================================
// 0xf41f: WORD 'UNK_0xf421' codep=0x224c parp=0xf421
// ================================================

void UNK_0xf421()
{
  CTINIT();
  CTERASE();
  >C+S();
  UNK_0xf07e $.();
  
  (.") string 4 " IS "
  UNK_0xf083 C@ DUP UNK_0xf0e6();
  
  if (Pop() == 0) goto label1183;
  
  (.") string 1 ","
  CTCR();
  
  (.") string 22 "AND HAS A VITALITY OF "
  UNK_0xf083 C@ Push(0); .R();
  
  (.") string 6 " AND A"
  CTCR();
  
  (.") string 14 "DURABILITY OF "
  UNK_0xf076 C@ Push(0); .R();
  
  label1183:
  
  (.") string 1 "."
  CTCR();
  UNK_0xf088 @ Push(cc_4); AND 
  if (Pop() == 0) goto label1184;
  UNK_0xf07e $.();
  
  (.") string 19 " IS CURRENTLY BEING"
  CTCR();
  
  (.") string 8 "TREATED."
  
  label1184:
  ICLOSE();
  
}


// ================================================
// 0xf4c6: WORD '(/EXAMINE)' codep=0x224c parp=0xf4d5
// ================================================

void (/EXAMINE)()
{
  CTERASE();
  >1FONT();
  Push(0); UNK_0xf373();
  UNK_0xf421();
  
}


// ================================================
// 0xf4e1: WORD '(/TREAT)' codep=0x224c parp=0xf4ee
// ================================================

void (/TREAT)()
{
  CTERASE();
  Push(cc_4); UNK_0xf0a6();
  
  if (Pop() == 0) goto label1163;
  2DUP Push(1); ROT ROT UNK_0xf1af();
  
  if (Pop() == 0) goto label1173;
  UNK_0xf2d9();
  Push(0x09c4); MS();
  Push(1); UNK_0xf373();
  CTERASE();
  UNK_0xf26f();
  
  goto label1175;
  
  label1173:
  UNK_0xf31e();
  
  label1175:
  
  goto label1174;
  
  label1163:
  Push(1); UNK_0xf373();
  CTERASE();
  UNK_0xf26f();
  
  label1174:
  
}

// 0xf52a: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'DOC-VOC_________________________ for DOCTOR----------- '
  