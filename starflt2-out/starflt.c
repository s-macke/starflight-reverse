
// =================================
// =========== DICTIONARY ==========
// =================================
//    0:      UNK_0x0002 bitfield: 0 0 0  codep:0x0000 parp:0x0002 size:0x0041
//    1:      UNK_0x0045 bitfield: 0 0 0  codep:0x0000 parp:0x0045 size:0x00e8
//    2:          (!SET) bitfield: 0 0 0  codep:0x0138 parp:0x0138 size:0x001d
//    3:          (!OLD) bitfield: 0 0 0  codep:0x0160 parp:0x0160 size:0x001d
//    4:          (TIME) bitfield: 0 0 0  codep:0x1d29 parp:0x0188 size:0x0068
//    5:           SET0/ bitfield: 0 0 0  codep:0x01fa parp:0x01fa size:0x001a
//    6:       (RESTORE) bitfield: 0 0 0  codep:0x224c parp:0x0222 size:0xfffffff4
//    7:      UNK_0x0218 bitfield: 0 0 0  codep:0x2889 parp:0x0218 size:0x0052
//    8:      AUTO-CACHE bitfield: 0 0 0  codep:0x224c parp:0x0279 size:0x003a
//    9:      AUTO-LIMIT bitfield: 0 0 0  codep:0x224c parp:0x02c2 size:0x0024
//   10:     AUTO-SCREEN bitfield: 0 0 0  codep:0x224c parp:0x02f6 size:0x003a
//   11:            COLD bitfield: 0 0 0  codep:0x224c parp:0x0339 size:0x0008
//   12:      UNK_0x0343 bitfield: 0 0 0  codep:0x224c parp:0x0343 size:0x007e
//   13:      UNK_0x03c3 bitfield: 0 0 0  codep:0x224c parp:0x03c3 size:0x0008
//   14:     SET-BUFFERS bitfield: 0 0 0  codep:0x224c parp:0x03db size:0x002a
//   15:             SP0 bitfield: 0 0 0  codep:0x1792 parp:0x040d size:0x0002
//   16:              R0 bitfield: 0 0 0  codep:0x1792 parp:0x0416 size:0x0002
//   17:              DP bitfield: 0 0 0  codep:0x1792 parp:0x041f size:0x0002
//   18:           FENCE bitfield: 0 0 0  codep:0x1792 parp:0x042b size:0x0002
//   19:          (INTO) bitfield: 0 0 0  codep:0x1792 parp:0x0438 size:0x0002
//   20:        MSGFLAGS bitfield: 0 0 0  codep:0x1792 parp:0x0447 size:0x0002
//   21:        VOC-LINK bitfield: 0 0 0  codep:0x1792 parp:0x0456 size:0x0002
//   22:        USERSIZE bitfield: 0 0 0  codep:0x1792 parp:0x0465 size:0x0002
//   23:        USERNEXT bitfield: 0 0 0  codep:0x1792 parp:0x0474 size:0x0002
//   24:             >IN bitfield: 0 0 0  codep:0x1792 parp:0x047e size:0x0002
//   25:             TIB bitfield: 0 0 0  codep:0x1792 parp:0x0488 size:0x0002
//   26:       VIDEOPORT bitfield: 0 0 0  codep:0x1792 parp:0x0498 size:0x0002
//   27:        VIDEOMEM bitfield: 0 0 0  codep:0x1792 parp:0x04a7 size:0x0002
//   28:       CURSORLOC bitfield: 0 0 0  codep:0x1792 parp:0x04b7 size:0x0002
//   29:             ROW bitfield: 0 0 0  codep:0x1792 parp:0x04c1 size:0x0002
//   30:             COL bitfield: 0 0 0  codep:0x1792 parp:0x04cb size:0x0002
//   31:          ROWMIN bitfield: 0 0 0  codep:0x1792 parp:0x04d8 size:0x0002
//   32:          COLMIN bitfield: 0 0 0  codep:0x1792 parp:0x04e5 size:0x0002
//   33:          ROWMAX bitfield: 0 0 0  codep:0x1792 parp:0x04f2 size:0x0002
//   34:          COLMAX bitfield: 0 0 0  codep:0x1792 parp:0x04ff size:0x0002
//   35:       ATTRIBUTE bitfield: 0 0 0  codep:0x1792 parp:0x050f size:0x0002
//   36:         DOFFSET bitfield: 0 0 0  codep:0x1792 parp:0x051d size:0x0002
//   37:      SERIALPORT bitfield: 0 0 0  codep:0x1792 parp:0x052e size:0x0002
//   38:    PARALLELPORT bitfield: 0 0 0  codep:0x1792 parp:0x0541 size:0x0002
//   39:            BASE bitfield: 0 0 0  codep:0x1792 parp:0x054c size:0x0002
//   40:             BLK bitfield: 0 0 0  codep:0x1792 parp:0x0556 size:0x0002
//   41:             DPL bitfield: 0 0 0  codep:0x1792 parp:0x0560 size:0x0002
//   42:             FLD bitfield: 0 0 0  codep:0x1792 parp:0x056a size:0x0002
//   43:             HLD bitfield: 0 0 0  codep:0x1792 parp:0x0574 size:0x0002
//   44:              R# bitfield: 0 0 0  codep:0x1792 parp:0x057d size:0x0002
//   45:             SCR bitfield: 0 0 0  codep:0x1792 parp:0x0587 size:0x0002
//   46:            SSCR bitfield: 0 0 0  codep:0x1792 parp:0x0592 size:0x0002
//   47:           STATE bitfield: 0 0 0  codep:0x1792 parp:0x059e size:0x0002
//   48:         CONTEXT bitfield: 0 0 0  codep:0x1792 parp:0x05ac size:0x0002
//   49:             CSP bitfield: 0 0 0  codep:0x1792 parp:0x05b6 size:0x0002
//   50:         CURRENT bitfield: 0 0 0  codep:0x1792 parp:0x05c4 size:0x0002
//   51:          LFALEN bitfield: 0 0 0  codep:0x1792 parp:0x05d1 size:0x0002
//   52:       LOWERCASE bitfield: 0 0 0  codep:0x1792 parp:0x05e1 size:0x0002
//   53:     SEARCHORDER bitfield: 0 0 0  codep:0x1792 parp:0x05f3 size:0x0002
//   54:           WIDTH bitfield: 0 0 0  codep:0x1792 parp:0x05ff size:0x0002
//   55:           -FIND bitfield: 0 0 0  codep:0x17b7 parp:0x060b size:0x0002
//   56:       ?TERMINAL bitfield: 0 0 0  codep:0x17b7 parp:0x061b size:0xfffffffa
//   57:      UNK_0x0617 bitfield: 0 0 0  codep:0x4e49 parp:0x0617 size:0x0006
//   58:           ABORT bitfield: 0 0 0  codep:0x17b7 parp:0x0627 size:0x0002
//   59:            BELL bitfield: 0 0 0  codep:0x17b7 parp:0x0632 size:0x0002
//   60:              BS bitfield: 0 0 0  codep:0x17b7 parp:0x063b size:0x0002
//   61:              CR bitfield: 0 0 0  codep:0x17b7 parp:0x0644 size:0x0002
//   62:          CREATE bitfield: 0 0 0  codep:0x17b7 parp:0x0651 size:0x0002
//   63:      DISKERROR? bitfield: 0 0 0  codep:0x17b7 parp:0x0662 size:0x0002
//   64:            EMIT bitfield: 0 0 0  codep:0x17b7 parp:0x066d size:0x0002
//   65:          EXPECT bitfield: 0 0 0  codep:0x17b7 parp:0x067a size:0x0002
//   66:       INTERPRET bitfield: 0 0 0  codep:0x17b7 parp:0x068a size:0x0002
//   67:          LINKS> bitfield: 0 0 0  codep:0x17b7 parp:0x0697 size:0x0002
//   68:            LOAD bitfield: 0 0 0  codep:0x17b7 parp:0x06a2 size:0x0002
//   69:             KEY bitfield: 0 0 0  codep:0x17b7 parp:0x06ac size:0x0002
//   70:          NUMBER bitfield: 0 0 0  codep:0x17b7 parp:0x06b9 size:0x0002
//   71:            PAGE bitfield: 0 0 0  codep:0x17b7 parp:0x06c4 size:0x0002
//   72:        POSITION bitfield: 0 0 0  codep:0x17b7 parp:0x06d3 size:0x0002
//   73:             R/W bitfield: 0 0 0  codep:0x17b7 parp:0x06dd size:0x0002
//   74:            TYPE bitfield: 0 0 0  codep:0x17b7 parp:0x06e8 size:0x0002
//   75:           WHERE bitfield: 0 0 0  codep:0x17b7 parp:0x06f4 size:0x0002
//   76:            WORD bitfield: 0 0 0  codep:0x17b7 parp:0x06ff size:0x0013
//   77:      UNK_0x0714 bitfield: 0 0 0  codep:0x0000 parp:0x0714 size:0x002d
//   78:      UNK_0x0743 bitfield: 0 0 0  codep:0x081a parp:0x0743 size:0x003c
//   79:        OPERATOR bitfield: 0 0 0  codep:0x1d29 parp:0x078c size:0x0084
//   80:           FORTH bitfield: 0 0 0  codep:0x1ab5 parp:0x081a size:0xfffffffb
//   81:      UNK_0x0817 bitfield: 0 0 0  codep:0x5452 parp:0x0817 size:0x0011
//   82:          FREEZE bitfield: 0 0 0  codep:0x224c parp:0x0833 size:0x0022
//   83:             BYE bitfield: 0 0 0  codep:0x224c parp:0x085d size:0x0000
//   84:      UNK_0x085f bitfield: 0 0 0  codep:0x0831 parp:0x085f size:0x0008
//   85:          CHANGE bitfield: 0 0 0  codep:0x224c parp:0x0872 size:0x005f
//   86:         (SETUP) bitfield: 0 0 0  codep:0x224c parp:0x08dd size:0x005a
//   87:      UNK_0x0939 bitfield: 0 0 0  codep:0x224c parp:0x0939 size:0x005a
//   88:              BL bitfield: 0 0 0  codep:0x2214 parp:0x099a size:0x0002 = 0x20
//   89:             C/L bitfield: 0 0 0  codep:0x2214 parp:0x09a4 size:0x0002 = 0x40
//   90:      INIT-FORTH bitfield: 0 0 0  codep:0x2214 parp:0x09b5 size:0x0002 = 0x775
//   91:       INIT-USER bitfield: 0 0 0  codep:0x2214 parp:0x09c5 size:0x0002 = 0x701
//   92:      INITIAL-DP bitfield: 0 0 0  codep:0x2214 parp:0x09d6 size:0x0002 = 0x705
//   93:           LIMIT bitfield: 0 0 0  codep:0x2214 parp:0x09e2 size:0x0002 = 0xfffe
//   94:          #CACHE bitfield: 0 0 0  codep:0x1d29 parp:0x09ef size:0x0002
//   95:        #BUFFERS bitfield: 0 0 0  codep:0x1d29 parp:0x09fe size:0x0002
//   96:          #SPACE bitfield: 0 0 0  codep:0x1d29 parp:0x0a0b size:0x0002
//   97:       'RESTORE+ bitfield: 0 0 0  codep:0x1d29 parp:0x0a1b size:0x0002
//   98:         'SETUP+ bitfield: 0 0 0  codep:0x1d29 parp:0x0a29 size:0x0002
//   99:          @,0*1; bitfield: 0 0 0  codep:0x1d29 parp:0x0a36 size:0x0002
//  100:          >BREAK bitfield: 0 0 0  codep:0x1d29 parp:0x0a43 size:0x0002
//  101:       BOOT-HOOK bitfield: 0 0 0  codep:0x1d29 parp:0x0a53 size:0x0002
//  102:       BOOT-LOAD bitfield: 0 0 0  codep:0x1d29 parp:0x0a63 size:0x0002
//  103:    BUFFER-BEGIN bitfield: 0 0 0  codep:0x1d29 parp:0x0a76 size:0x0002
//  104:     BUFFER-HEAD bitfield: 0 0 0  codep:0x1d29 parp:0x0a88 size:0x0002
//  105:     CACHE-BEGIN bitfield: 0 0 0  codep:0x1d29 parp:0x0a9a size:0x0002
//  106:      CACHE-HEAD bitfield: 0 0 0  codep:0x1d29 parp:0x0aab size:0x0002
//  107:          'FORTH bitfield: 0 0 0  codep:0x224c parp:0x0ab8 size:0x0012
//  108:              ME bitfield: 0 0 0  codep:0x0ad1 parp:0x0ad1 size:0x0006
//  109:      UNK_0x0ad9 bitfield: 0 0 0  codep:0x224c parp:0x0ad9 size:0x003d
//  110:      UNK_0x0b18 bitfield: 0 0 0  codep:0x0ef2 parp:0x0b18 size:0x0016
//  111:      UNK_0x0b30 bitfield: 0 0 0  codep:0x224c parp:0x0b30 size:0x000f
//  112:      UNK_0x0b41 bitfield: 0 0 0  codep:0x1312 parp:0x0b41 size:0x001a
//  113:      UNK_0x0b5d bitfield: 0 0 0  codep:0x224c parp:0x0b5d size:0x0013
//  114:         ?ENOUGH bitfield: 0 0 0  codep:0x224c parp:0x0b7c size:0x002e
//  115:               @ bitfield: 0 0 0  codep:0x0bb0 parp:0x0bb0 size:0x0008
//  116:              @L bitfield: 0 0 0  codep:0x0bbf parp:0x0bbf size:0x001c
//  117:               ! bitfield: 0 0 0  codep:0x0be1 parp:0x0be1 size:0x0009
//  118:              !L bitfield: 0 0 0  codep:0x0bf1 parp:0x0bf1 size:0x001c
//  119:           (CS?) bitfield: 0 0 0  codep:0x0c17 parp:0x0c17 size:0x0006
//  120:              2! bitfield: 0 0 0  codep:0x0c24 parp:0x0c24 size:0x000f
//  121:              2@ bitfield: 0 0 0  codep:0x0c3a parp:0x0c3a size:0x000f
//  122:           BLANK bitfield: 0 0 0  codep:0x224c parp:0x0c53 size:0x0006
//  123:              C! bitfield: 0 0 0  codep:0x0c60 parp:0x0c60 size:0x0009
//  124:             C!L bitfield: 0 0 0  codep:0x0c71 parp:0x0c71 size:0x001c
//  125:              C@ bitfield: 0 0 0  codep:0x0c94 parp:0x0c94 size:0x000b
//  126:             C@L bitfield: 0 0 0  codep:0x0ca7 parp:0x0ca7 size:0x001e
//  127:           COUNT bitfield: 0 0 0  codep:0x224c parp:0x0ccf size:0x000a
//  128:          CMOVE> bitfield: 0 0 0  codep:0x0ce4 parp:0x0ce4 size:0x0022
//  129:           CMOVE bitfield: 0 0 0  codep:0x0d10 parp:0x0d10 size:0x001c
//  130:            FILL bitfield: 0 0 0  codep:0x0d35 parp:0x0d35 size:0x001a
//  131:              P! bitfield: 0 0 0  codep:0x0d56 parp:0x0d56 size:0x0008
//  132:              P@ bitfield: 0 0 0  codep:0x0d65 parp:0x0d65 size:0x000a
//  133:        SEG>ADDR bitfield: 0 0 0  codep:0x0d7c parp:0x0d7c size:0x0013
//  134:        ADDR>SEG bitfield: 0 0 0  codep:0x0d9c parp:0x0d9c size:0x0013
//  135:              >R bitfield: 0 0 0  codep:0x0db6 parp:0x0db6 size:0x000b
//  136:            ?DUP bitfield: 0 0 0  codep:0x0dca parp:0x0dca size:0x000c
//  137:           2DROP bitfield: 0 0 0  codep:0x0de0 parp:0x0de0 size:0x0009
//  138:            2DUP bitfield: 0 0 0  codep:0x0df2 parp:0x0df2 size:0x000c
//  139:           2SWAP bitfield: 0 0 0  codep:0x0e08 parp:0x0e08 size:0x0006
//  140:      UNK_0x0e10 bitfield: 0 0 0  codep:0x5152 parp:0x0e10 size:0x0005
//  141:           DEPTH bitfield: 0 0 0  codep:0x224c parp:0x0e1f size:0x000c
//  142:            DROP bitfield: 0 0 0  codep:0x0e34 parp:0x0e34 size:0x0007
//  143:             DUP bitfield: 0 0 0  codep:0x0e43 parp:0x0e43 size:0x0009
//  144:               I bitfield: 0 0 0  codep:0x0e52 parp:0x0e52 size:0x0009
//  145:              I' bitfield: 0 0 0  codep:0x0e62 parp:0x0e62 size:0x0008
//  146:               J bitfield: 0 0 0  codep:0x0e70 parp:0x0e70 size:0x0008
//  147:            OVER bitfield: 0 0 0  codep:0x0e81 parp:0x0e81 size:0x000a
//  148:              R> bitfield: 0 0 0  codep:0x0e92 parp:0x0e92 size:0x000b
//  149:              R@ bitfield: 0 0 0  codep:0x0ea4 parp:0x0ea4 size:0x0009
//  150:             ROT bitfield: 0 0 0  codep:0x0eb5 parp:0x0eb5 size:0x000b
//  151:             RP! bitfield: 0 0 0  codep:0x0ec8 parp:0x0ec8 size:0x0008
//  152:             RP@ bitfield: 0 0 0  codep:0x0ed8 parp:0x0ed8 size:0x0006
//  153:              S0 bitfield: 0 0 0  codep:0x224c parp:0x0ee5 size:0x0006
//  154:            SWAP bitfield: 0 0 0  codep:0x0ef4 parp:0x0ef4 size:0x0009
//  155:             SP! bitfield: 0 0 0  codep:0x0f05 parp:0x0f05 size:0x0007
//  156:             SP@ bitfield: 0 0 0  codep:0x0f14 parp:0x0f14 size:0x0008
//  157:               0 bitfield: 0 0 0  codep:0x0f22 parp:0x0f22 size:0x0008
//  158:               1 bitfield: 0 0 0  codep:0x0f30 parp:0x0f30 size:0x0009
//  159:               2 bitfield: 0 0 0  codep:0x0f3f parp:0x0f3f size:0x0009
//  160:               / bitfield: 0 0 0  codep:0x0f4e parp:0x0f4e size:0x000b
//  161:            /MOD bitfield: 0 0 0  codep:0x0f62 parp:0x0f62 size:0x000c
//  162:               + bitfield: 0 0 0  codep:0x0f74 parp:0x0f74 size:0x000a
//  163:              +! bitfield: 0 0 0  codep:0x0f85 parp:0x0f85 size:0x0009
//  164:               - bitfield: 0 0 0  codep:0x0f94 parp:0x0f94 size:0x000a
//  165:              +- bitfield: 0 0 0  codep:0x224c parp:0x0fa5 size:0x000a
//  166:               * bitfield: 0 0 0  codep:0x0fb5 parp:0x0fb5 size:0x000a
//  167:              */ bitfield: 0 0 0  codep:0x224c parp:0x0fc6 size:0x0008
//  168:           */MOD bitfield: 0 0 0  codep:0x224c parp:0x0fd8 size:0x000a
//  169:              1+ bitfield: 0 0 0  codep:0x0fe9 parp:0x0fe9 size:0x0008
//  170:              1- bitfield: 0 0 0  codep:0x0ff8 parp:0x0ff8 size:0x0008
//  171:              2* bitfield: 0 0 0  codep:0x1007 parp:0x1007 size:0x0009
//  172:              2+ bitfield: 0 0 0  codep:0x1017 parp:0x1017 size:0x0009
//  173:              2- bitfield: 0 0 0  codep:0x1027 parp:0x1027 size:0x0009
//  174:              2/ bitfield: 0 0 0  codep:0x1037 parp:0x1037 size:0x0009
//  175:              4* bitfield: 0 0 0  codep:0x1047 parp:0x1047 size:0x000b
//  176:             ABS bitfield: 0 0 0  codep:0x224c parp:0x105a size:0x0006
//  177:              D+ bitfield: 0 0 0  codep:0x1067 parp:0x1067 size:0x000f
//  178:             D+- bitfield: 0 0 0  codep:0x224c parp:0x107e size:0x000a
//  179:         DECIMAL bitfield: 0 0 0  codep:0x224c parp:0x1094 size:0x000a
//  180:            DABS bitfield: 0 0 0  codep:0x224c parp:0x10a7 size:0x0006
//  181:         DNEGATE bitfield: 0 0 0  codep:0x10b9 parp:0x10b9 size:0x000f
//  182:              M* bitfield: 0 0 0  codep:0x224c parp:0x10cf size:0x0014
//  183:             M*/ bitfield: 0 0 0  codep:0x224c parp:0x10eb size:0x0044
//  184:              M+ bitfield: 0 0 0  codep:0x224c parp:0x1136 size:0x0006
//  185:              M/ bitfield: 0 0 0  codep:0x224c parp:0x1143 size:0x0022
//  186:           M/MOD bitfield: 0 0 0  codep:0x224c parp:0x116f size:0x0014
//  187:             MAX bitfield: 0 0 0  codep:0x224c parp:0x118b size:0x000e
//  188:             MOD bitfield: 0 0 0  codep:0x224c parp:0x11a1 size:0x0006
//  189:             MIN bitfield: 0 0 0  codep:0x224c parp:0x11af size:0x000e
//  190:          NEGATE bitfield: 0 0 0  codep:0x11c8 parp:0x11c8 size:0x0009
//  191:              U* bitfield: 0 0 0  codep:0x11d8 parp:0x11d8 size:0x000b
//  192:           U/MOD bitfield: 0 0 0  codep:0x11ed parp:0x11ed size:0x000c
//  193:            UMAX bitfield: 0 0 0  codep:0x224c parp:0x1202 size:0x000e
//  194:            UMIN bitfield: 0 0 0  codep:0x224c parp:0x1219 size:0xfffffffc
//  195:      UNK_0x1217 bitfield: 0 0 0  codep:0xce49 parp:0x1217 size:0x0012
//  196:               > bitfield: 0 0 0  codep:0x122f parp:0x122f size:0x0013
//  197:               < bitfield: 0 0 0  codep:0x1248 parp:0x1248 size:0x0013
//  198:               = bitfield: 0 0 0  codep:0x1261 parp:0x1261 size:0x0012
//  199:              0< bitfield: 0 0 0  codep:0x127a parp:0x127a size:0x000a
//  200:              0= bitfield: 0 0 0  codep:0x128b parp:0x128b size:0x000f
//  201:              0> bitfield: 0 0 0  codep:0x12a1 parp:0x12a1 size:0x000c
//  202:              D< bitfield: 0 0 0  codep:0x224c parp:0x12b4 size:0x0026
//  203:              U< bitfield: 0 0 0  codep:0x12e1 parp:0x12e1 size:0x000e
//  204:             AND bitfield: 0 0 0  codep:0x12f7 parp:0x12f7 size:0x000a
//  205:             NOT bitfield: 0 0 0  codep:0x1309 parp:0x1309 size:0x000f
//  206:             OFF bitfield: 0 0 0  codep:0x224c parp:0x1320 size:0x0008
//  207:              ON bitfield: 0 0 0  codep:0x224c parp:0x132f size:0x000a
//  208:              OR bitfield: 0 0 0  codep:0x1340 parp:0x1340 size:0x000a
//  209:          TOGGLE bitfield: 0 0 0  codep:0x1355 parp:0x1355 size:0x0009
//  210:             XOR bitfield: 0 0 0  codep:0x1366 parp:0x1366 size:0x000a
//  211:               # bitfield: 0 0 0  codep:0x224c parp:0x1376 size:0x0024
//  212:              #> bitfield: 0 0 0  codep:0x224c parp:0x13a1 size:0x000e
//  213:              #S bitfield: 0 0 0  codep:0x224c parp:0x13b6 size:0x000e
//  214:        (NUMBER) bitfield: 0 0 0  codep:0x224c parp:0x13d1 size:0x005a
//  215:      >UPPERCASE bitfield: 0 0 0  codep:0x143a parp:0x143a size:0x001e
//  216:              <# bitfield: 0 0 0  codep:0x224c parp:0x145f size:0x0008
//  217:         CONVERT bitfield: 0 0 0  codep:0x224c parp:0x1473 size:0x0040
//  218:           DIGIT bitfield: 0 0 0  codep:0x14bd parp:0x14bd size:0x0029
//  219:            HOLD bitfield: 0 0 0  codep:0x224c parp:0x14ef size:0x0010
//  220:            S->D bitfield: 0 0 0  codep:0x1508 parp:0x1508 size:0xfffffff8
//  221:      UNK_0x1502 bitfield: 0 0 0  codep:0x8414 parp:0x1502 size:0x000a
//  222:      UNK_0x150e bitfield: 0 0 0  codep:0x5299 parp:0x150e size:0xffffffff
//  223:      UNK_0x150f bitfield: 0 0 0  codep:0xad52 parp:0x150f size:0x0000
//  224:      UNK_0x1511 bitfield: 0 0 0  codep:0xd88b parp:0x1511 size:0x0002
//  225:            SIGN bitfield: 0 0 0  codep:0x224c parp:0x151c size:0x0006
//  226:      UNK_0x1524 bitfield: 0 0 0  codep:0x175d parp:0x1524 size:0x0006
//  227:         (>CODE) bitfield: 0 0 0  codep:0x1536 parp:0x1536 size:0x0007
//  228:          (;VIA) bitfield: 0 0 0  codep:0x1548 parp:0x1548 size:0xfffffffc
//  229:      UNK_0x1546 bitfield: 0 0 0  codep:0xa941 parp:0x1546 size:0xffffffff
//  230:      UNK_0x1547 bitfield: 0 0 0  codep:0x48a9 parp:0x1547 size:0x000b
//  231:         (+LOOP) bitfield: 0 0 0  codep:0x155e parp:0x155e size:0x0029
//  232:         (/LOOP) bitfield: 0 0 0  codep:0x1593 parp:0x1593 size:0x001e
//  233:            (DO) bitfield: 0 0 0  codep:0x15ba parp:0x15ba size:0x000d
//  234:          (LOOP) bitfield: 0 0 0  codep:0x15d2 parp:0x15d2 size:0x001e
//  235:         0BRANCH bitfield: 0 0 0  codep:0x15fc parp:0x15fc size:0x0013
//  236:            2LIT bitfield: 0 0 0  codep:0x1618 parp:0x1618 size:0x0009
//  237:        ABORT-IT bitfield: 0 0 0  codep:0x224c parp:0x162e size:0x0029
//  238:          BRANCH bitfield: 0 0 0  codep:0x1662 parp:0x1662 size:0x0007
//  239:         CFAEXEC bitfield: 0 0 0  codep:0x1675 parp:0x1675 size:0x0003
//  240:         EXECUTE bitfield: 0 0 0  codep:0x1684 parp:0x1684 size:0x0005
//  241:            EXIT bitfield: 0 0 0  codep:0x1692 parp:0x1692 size:0x000a
//  242:              GO bitfield: 0 0 0  codep:0x16a3 parp:0x16a3 size:0x0003
//  243:       REGISTERS bitfield: 0 0 0  codep:0x1d29 parp:0x16b4 size:0x0017
//  244:       INTERRUPT bitfield: 0 0 0  codep:0x16d9 parp:0x16d9 size:0x0069
//  245:           LEAVE bitfield: 0 0 0  codep:0x174c parp:0x174c size:0x000b
//  246:             LIT bitfield: 0 0 0  codep:0x175f parp:0x175f size:0x0007
//  247:         SYSCALL bitfield: 0 0 0  codep:0x1772 parp:0x1772 size:0x000f
//  248:            USER bitfield: 0 0 0  codep:0x224c parp:0x178a size:0x0014
//  249:    USEREXECUTOR bitfield: 0 0 0  codep:0x224c parp:0x17af size:0x0012
//  250:           +FIND bitfield: 0 0 0  codep:0x224c parp:0x17cb size:0x000a
//  251:         (-FIND) bitfield: 0 0 0  codep:0x224c parp:0x17e1 size:0x002c
//  252:          (FIND) bitfield: 0 0 0  codep:0x1818 parp:0x1818 size:0x0049
//  253:        (FORGET) bitfield: 0 0 0  codep:0x224c parp:0x186e size:0x00a0
//  254:         (LINKS) bitfield: 0 0 0  codep:0x224c parp:0x191a size:0xfffffffd
//  255:      UNK_0x1919 bitfield: 0 0 0  codep:0x4ca9 parp:0x1919 size:0x001b
//  256:          <NAME> bitfield: 0 0 0  codep:0x224c parp:0x193f size:0x0018
//  257:           ?FIND bitfield: 0 0 0  codep:0x224c parp:0x1961 size:0x0016
//  258:          ?[PTR] bitfield: 0 0 0  codep:0x224c parp:0x1982 size:0x000a
//  259:     DEFINITIONS bitfield: 0 0 0  codep:0x224c parp:0x199c size:0x000a
//  260:           EMPTY bitfield: 0 0 0  codep:0x224c parp:0x19b0 size:0x001a
//  261:            FIND bitfield: 0 0 0  codep:0x224c parp:0x19d3 size:0x0014
//  262:          FORGET bitfield: 0 0 0  codep:0x224c parp:0x19f2 size:0x007a
//  263:      UNK_0x1a6e bitfield: 0 0 0  codep:0x224c parp:0x1a6e size:0x000c
//  264:      VOCABULARY bitfield: 0 0 0  codep:0x224c parp:0x1a89 size:0x0035
//  265:      UNK_0x1ac0 bitfield: 0 0 0  codep:0x1ac0 parp:0x1ac0 size:0x0014
//  266:         WITHIN? bitfield: 0 0 0  codep:0x224c parp:0x1ae0 size:0x0020
//  267:         [-FIND] bitfield: 0 0 0  codep:0x224c parp:0x1b0c size:0x001c
//  268:        [-FINDS] bitfield: 0 0 0  codep:0x224c parp:0x1b35 size:0x0042
//  269:               ' bitfield: 0 0 0  codep:0x224c parp:0x1b7d size:0x0006
//  270:         'STREAM bitfield: 0 0 0  codep:0x224c parp:0x1b8f size:0x001c
//  271:               ( bitfield: 0 0 0  codep:0x224c parp:0x1bb1 size:0x0024
//  272:            (.") bitfield: 0 0 0  codep:0x224c parp:0x1bde size:0x0012
//  273:         (;CODE) bitfield: 0 0 0  codep:0x224c parp:0x1bfc size:0x0004
//  274:      UNK_0x1c02 bitfield: 0 0 0  codep:0x23ed parp:0x1c02 size:0x0006
//  275:        (ABORT") bitfield: 0 0 0  codep:0x224c parp:0x1c15 size:0x0024
//  276:         (ABORT) bitfield: 0 0 0  codep:0x224c parp:0x1c45 size:0x000a
//  277:              ." bitfield: 0 0 0  codep:0x224c parp:0x1c56 size:0x0058
//  278:        (CREATE) bitfield: 0 0 0  codep:0x224c parp:0x1cbb size:0x006e
//  279:      UNK_0x1d2b bitfield: 0 0 0  codep:0x4343 parp:0x1d2b size:0x0006
//  280:        (EXPECT) bitfield: 0 0 0  codep:0x224c parp:0x1d3e size:0x008a
//  281:     (INTERPRET) bitfield: 0 0 0  codep:0x224c parp:0x1dd8 size:0x0040
//  282:          (LOAD) bitfield: 0 0 0  codep:0x224c parp:0x1e23 size:0x0039
//  283:         (WHERE) bitfield: 0 0 0  codep:0x224c parp:0x1e68 size:0x0093
//  284:          (WORD) bitfield: 0 0 0  codep:0x224c parp:0x1f06 size:0x006d
//  285:           +LOOP bitfield: 0 0 0  codep:0x224c parp:0x1f7d size:0x0012
//  286:               , bitfield: 0 0 0  codep:0x224c parp:0x1f95 size:0x000e
//  287:           /LOOP bitfield: 0 0 0  codep:0x224c parp:0x1fad size:0x0012
//  288:               ; bitfield: 0 0 0  codep:0x224c parp:0x1fc5 size:0x000c
//  289:           ?COMP bitfield: 0 0 0  codep:0x224c parp:0x1fdb size:0x0017
//  290:      UNK_0x1ff4 bitfield: 0 0 0  codep:0x224c parp:0x1ff4 size:0x000c
//  291:      UNK_0x2002 bitfield: 0 0 0  codep:0x175d parp:0x2002 size:0x000b
//  292:      UNK_0x200f bitfield: 0 0 0  codep:0x2075 parp:0x200f size:0x0011
//  293:      UNK_0x2022 bitfield: 0 0 0  codep:0x7465 parp:0x2022 size:0x0006
//  294:            ?CSP bitfield: 0 0 0  codep:0x224c parp:0x2031 size:0x0011
//  295:      UNK_0x2044 bitfield: 0 0 0  codep:0x6974 parp:0x2044 size:0x0011
//  296:      UNK_0x2057 bitfield: 0 0 0  codep:0x224c parp:0x2057 size:0x0020
//  297:        ?LOADING bitfield: 0 0 0  codep:0x224c parp:0x2084 size:0x0017
//  298:          ?PAIRS bitfield: 0 0 0  codep:0x224c parp:0x20a6 size:0x001e
//  299:      UNK_0x20c6 bitfield: 0 0 0  codep:0x224c parp:0x20c6 size:0x0055
//  300:          ABORT" bitfield: 0 0 0  codep:0x224c parp:0x2126 size:0x0044
//  301:           AGAIN bitfield: 0 0 0  codep:0x224c parp:0x2174 size:0x0010
//  302:           ALLOT bitfield: 0 0 0  codep:0x224c parp:0x218e size:0x000a
//  303:           BEGIN bitfield: 0 0 0  codep:0x224c parp:0x21a2 size:0x0008
//  304:              C, bitfield: 0 0 0  codep:0x224c parp:0x21b1 size:0x000a
//  305:             CFA bitfield: 0 0 0  codep:0x224c parp:0x21c3 size:0x0004
//  306:      UNK_0x21c9 bitfield: 0 0 0  codep:0x21c9 parp:0x21c9 size:0x001c
//  307:         COMPILE bitfield: 0 0 0  codep:0x224c parp:0x21f1 size:0x0010
//  308:        CONSTANT bitfield: 0 0 0  codep:0x224c parp:0x220e size:0x000f
//  309:              DO bitfield: 0 0 0  codep:0x224c parp:0x2224 size:0x0008
//  310:      UNK_0x222e bitfield: 0 0 0  codep:0x0003 parp:0x222e size:0x0002
//  311:               : bitfield: 0 0 0  codep:0x224c parp:0x2236 size:0x0016
//  312:      UNK_0x224e bitfield: 0 0 0  codep:0x4343 parp:0x224e size:0x000c
//  313:           DOES> bitfield: 0 0 0  codep:0x224c parp:0x2264 size:0x001a
//  314:            ELSE bitfield: 0 0 0  codep:0x224c parp:0x2287 size:0x0018
//  315:         ENCLOSE bitfield: 0 0 0  codep:0x22ab parp:0x22ab size:0x003b
//  316:            HERE bitfield: 0 0 0  codep:0x224c parp:0x22ef size:0x0006
//  317:             HEX bitfield: 0 0 0  codep:0x224c parp:0x22fd size:0x0003
//  318:      UNK_0x2302 bitfield: 0 0 0  codep:0x4a00 parp:0x2302 size:0x0005
//  319:              IF bitfield: 0 0 0  codep:0x224c parp:0x230e size:0x000e
//  320:       IMMEDIATE bitfield: 0 0 0  codep:0x224c parp:0x232a size:0x000a
//  321:          LATEST bitfield: 0 0 0  codep:0x224c parp:0x233f size:0x000e
//  322:             LFA bitfield: 0 0 0  codep:0x224c parp:0x2355 size:0xfffffff8
//  323:      UNK_0x234f bitfield: 0 0 0  codep:0x221f parp:0x234f size:0x000c
//  324:         LITERAL bitfield: 0 0 0  codep:0x224c parp:0x2367 size:0x0016
//  325:            LOOP bitfield: 0 0 0  codep:0x224c parp:0x2386 size:0x0012
//  326:        2LITERAL bitfield: 0 0 0  codep:0x224c parp:0x23a5 size:0x001a
//  327:             NFA bitfield: 0 0 0  codep:0x224c parp:0x23c7 size:0x000e
//  328:             PAD bitfield: 0 0 0  codep:0x224c parp:0x23dd size:0x000a
//  329:             PFA bitfield: 0 0 0  codep:0x224c parp:0x23ef size:0x000c
//  330:           QUERY bitfield: 0 0 0  codep:0x224c parp:0x2405 size:0x0012
//  331:            QUIT bitfield: 0 0 0  codep:0x224c parp:0x2420 size:0x003c
//  332:          REPEAT bitfield: 0 0 0  codep:0x224c parp:0x2467 size:0x0010
//  333:          SMUDGE bitfield: 0 0 0  codep:0x224c parp:0x2482 size:0x000a
//  334:            TEXT bitfield: 0 0 0  codep:0x224c parp:0x2495 size:0x0022
//  335:            THEN bitfield: 0 0 0  codep:0x224c parp:0x24c0 size:0x0012
//  336:        TRAVERSE bitfield: 0 0 0  codep:0x224c parp:0x24df size:0x001a
//  337:           UNTIL bitfield: 0 0 0  codep:0x224c parp:0x2503 size:0x0010
//  338:        VARIABLE bitfield: 0 0 0  codep:0x224c parp:0x2520 size:0x0008
//  339:           WHILE bitfield: 0 0 0  codep:0x224c parp:0x2532 size:0x0006
//  340:                bitfield: 0 0 0  codep:0x224c parp:0x253e size:0x0014
//  341:               [ bitfield: 0 0 0  codep:0x224c parp:0x2558 size:0x0008
//  342:       [COMPILE] bitfield: 0 0 0  codep:0x224c parp:0x256e size:0x000a
//  343:               \ bitfield: 0 0 0  codep:0x224c parp:0x257e size:0x001e
//  344:               ] bitfield: 0 0 0  codep:0x224c parp:0x25a2 size:0x000a
//  345:     (?TERMINAL) bitfield: 0 0 0  codep:0x25bc parp:0x25bc size:0x0011
//  346:           (KEY) bitfield: 0 0 0  codep:0x25d7 parp:0x25d7 size:0x001c
//  347:          BEEPMS bitfield: 0 0 0  codep:0x1d29 parp:0x25fe size:0x0002
//  348:        BEEPTONE bitfield: 0 0 0  codep:0x1d29 parp:0x260d size:0x0002
//  349:            TONE bitfield: 0 0 0  codep:0x2618 parp:0x2618 size:0x0015
//  350:          BEEPON bitfield: 0 0 0  codep:0x2638 parp:0x2638 size:0x000f
//  351:         BEEPOFF bitfield: 0 0 0  codep:0x2653 parp:0x2653 size:0x000f
//  352:            BEEP bitfield: 0 0 0  codep:0x224c parp:0x266b size:0x001a
//  353:          (TYPE) bitfield: 0 0 0  codep:0x224c parp:0x2690 size:0x0036
//  354:            (BS) bitfield: 0 0 0  codep:0x224c parp:0x26cf size:0x0016
//  355:            (CR) bitfield: 0 0 0  codep:0x224c parp:0x26ee size:0x0038
//  356:          (EMIT) bitfield: 0 0 0  codep:0x224c parp:0x2731 size:0x0010
//  357:          (PAGE) bitfield: 0 0 0  codep:0x224c parp:0x274c size:0x000c
//  358:      (POSITION) bitfield: 0 0 0  codep:0x2767 parp:0x2767 size:0x001b
//  359:       -TRAILING bitfield: 0 0 0  codep:0x224c parp:0x2790 size:0x0024
//  360:               . bitfield: 0 0 0  codep:0x224c parp:0x27ba size:0x0006
//  361:           .LINE bitfield: 0 0 0  codep:0x224c parp:0x27ca size:0x0012
//  362:              .R bitfield: 0 0 0  codep:0x224c parp:0x27e3 size:0x000a
//  363:          >VMOVE bitfield: 0 0 0  codep:0x27f8 parp:0x27f8 size:0x0024
//  364:               ? bitfield: 0 0 0  codep:0x224c parp:0x2822 size:0x0006
//  365:       ?POSITION bitfield: 0 0 0  codep:0x2836 parp:0x2836 size:0x000f
//  366:        CUR>ADDR bitfield: 0 0 0  codep:0x2852 parp:0x2852 size:0x000b
//  367:          CURFWD bitfield: 0 0 0  codep:0x224c parp:0x2868 size:0x0026
//  368:              D. bitfield: 0 0 0  codep:0x224c parp:0x2895 size:0x0008
//  369:             D.R bitfield: 0 0 0  codep:0x224c parp:0x28a5 size:0x0026
//  370:             ID. bitfield: 0 0 0  codep:0x224c parp:0x28d3 size:0x004c
//  371:            LIST bitfield: 0 0 0  codep:0x224c parp:0x2928 size:0x003e
//  372:        SCROLLUP bitfield: 0 0 0  codep:0x2973 parp:0x2973 size:0x0019
//  373:           SPACE bitfield: 0 0 0  codep:0x224c parp:0x2996 size:0x0006
//  374:          SPACES bitfield: 0 0 0  codep:0x224c parp:0x29a7 size:0x0016
//  375:              U. bitfield: 0 0 0  codep:0x224c parp:0x29c4 size:0x0006
//  376:             U.R bitfield: 0 0 0  codep:0x224c parp:0x29d2 size:0xfffffffc
//  377:      UNK_0x29d0 bitfield: 0 0 0  codep:0xd22e parp:0x29d0 size:0x000a
//  378:              V@ bitfield: 0 0 0  codep:0x29e1 parp:0x29e1 size:0x0014
//  379:              V! bitfield: 0 0 0  codep:0x29fc parp:0x29fc size:0x0012
//  380:           VFILL bitfield: 0 0 0  codep:0x2a18 parp:0x2a18 size:0x0014
//  381:           VMOVE bitfield: 0 0 0  codep:0x2a36 parp:0x2a36 size:0x001e
//  382:          VMOVE- bitfield: 0 0 0  codep:0x2a5f parp:0x2a5f size:0x0007
//  383:         MS/TICK bitfield: 0 0 0  codep:0x2214 parp:0x2a72 size:0x0002 = 0x1a0
//  384:       TICKS/ADJ bitfield: 0 0 0  codep:0x2214 parp:0x2a82 size:0x0002 = 0x1ae
//  385:          MS/ADJ bitfield: 0 0 0  codep:0x2214 parp:0x2a8f size:0x0002 = 0x1b5
//  386:            TIME bitfield: 0 0 0  codep:0x2a9a parp:0x2a9a size:0x0050
//  387:              MS bitfield: 0 0 0  codep:0x224c parp:0x2af1 size:0x0024
//  388:         #DRIVES bitfield: 0 0 0  codep:0x2214 parp:0x2b21 size:0x0002 = 0x3
//  389:           #FCBS bitfield: 0 0 0  codep:0x2214 parp:0x2b2d size:0x0002 = 0x2
//  390:          #FILES bitfield: 0 0 0  codep:0x2214 parp:0x2b3a size:0x0002 = 0x4
//  391:        #SEC/TRK bitfield: 0 0 0  codep:0x2214 parp:0x2b49 size:0x0002 = 0x9
//  392:        DOS-FILE bitfield: 0 0 0  codep:0x2214 parp:0x2b58 size:0x0002 = 0x2
//  393:         RETRIES bitfield: 0 0 0  codep:0x2214 parp:0x2b66 size:0x0002 = 0x8
//  394:       SECORIGIN bitfield: 0 0 0  codep:0x2214 parp:0x2b76 size:0x0002 = 0x1
//  395:          'SVBUF bitfield: 0 0 0  codep:0x1d29 parp:0x2b83 size:0x0002
//  396:          'MTBUF bitfield: 0 0 0  codep:0x1d29 parp:0x2b90 size:0x0002
//  397:           #SECS bitfield: 0 0 0  codep:0x1d29 parp:0x2b9c size:0x0002
//  398:            'FCB bitfield: 0 0 0  codep:0x1d29 parp:0x2ba7 size:0x0002
//  399:          'CACHE bitfield: 0 0 0  codep:0x1d29 parp:0x2bb4 size:0x0002
//  400:       'DOSMOUNT bitfield: 0 0 0  codep:0x1d29 parp:0x2bc4 size:0x0002
//  401:     'DOSUNMOUNT bitfield: 0 0 0  codep:0x1d29 parp:0x2bd6 size:0x0002
//  402:          REUSEC bitfield: 0 0 0  codep:0x1d29 parp:0x2be3 size:0x0002
//  403:     1STCACHEBUF bitfield: 0 0 0  codep:0x1d29 parp:0x2bf5 size:0x0002
//  404:        BLKCACHE bitfield: 0 0 0  codep:0x1d29 parp:0x2c04 size:0x0002
//  405:      DEFAULTDRV bitfield: 0 0 0  codep:0x1d29 parp:0x2c15 size:0x0002
//  406:      DISK-ERROR bitfield: 0 0 0  codep:0x1d29 parp:0x2c26 size:0x0002
//  407:           DRIVE bitfield: 0 0 0  codep:0x1d29 parp:0x2c32 size:0x0002
//  408:             DTA bitfield: 0 0 0  codep:0x1d29 parp:0x2c3c size:0x0004
//  409:            FILE bitfield: 0 0 0  codep:0x1d29 parp:0x2c49 size:0x0002
//  410:           FRESH bitfield: 0 0 0  codep:0x1d29 parp:0x2c55 size:0x0002
//  411:            HEAD bitfield: 0 0 0  codep:0x1d29 parp:0x2c60 size:0x0002
//  412:           LPREV bitfield: 0 0 0  codep:0x1d29 parp:0x2c6c size:0x0002
//  413:          OFFSET bitfield: 0 0 0  codep:0x1d29 parp:0x2c79 size:0x0002
//  414:            PREV bitfield: 0 0 0  codep:0x1d29 parp:0x2c84 size:0x0002
//  415:             SEC bitfield: 0 0 0  codep:0x1d29 parp:0x2c8e size:0x0002
//  416:        SEGCACHE bitfield: 0 0 0  codep:0x1d29 parp:0x2c9d size:0x0002
//  417:            SYSK bitfield: 0 0 0  codep:0x1d29 parp:0x2ca8 size:0x0002
//  418:           TRACK bitfield: 0 0 0  codep:0x1d29 parp:0x2cb4 size:0x0002
//  419:             USE bitfield: 0 0 0  codep:0x1d29 parp:0x2cbe size:0x0002
//  420:     =DRIVESIZES bitfield: 0 0 0  codep:0x1d29 parp:0x2cd0 size:0x0006
//  421:      DRIVESIZES bitfield: 0 0 0  codep:0x224c parp:0x2ce5 size:0x000a
//  422:          BARRAY bitfield: 0 0 0  codep:0x224c parp:0x2cfa size:0x0004
//  423:          WARRAY bitfield: 0 0 0  codep:0x224c parp:0x2d09 size:0x0008
//  424:   =DRIVENUMBERS bitfield: 0 0 0  codep:0x1d29 parp:0x2d23 size:0x0004
//  425:        =FCBPFAS bitfield: 0 0 0  codep:0x1d29 parp:0x2d34 size:0x0008
//  426:     =FILEBLOCKS bitfield: 0 0 0  codep:0x1d29 parp:0x2d4c size:0x0008
//  427:      =FILETYPES bitfield: 0 0 0  codep:0x1d29 parp:0x2d63 size:0x0004
//  428:        =OFFSETS bitfield: 0 0 0  codep:0x1d29 parp:0x2d74 size:0x0008
//  429:          =R/W'S bitfield: 0 0 0  codep:0x1d29 parp:0x2d87 size:0x0008
//  430:             FCB bitfield: 0 0 0  codep:0x1d29 parp:0x2d97 size:0x0058
//  431:       FILENAMES bitfield: 0 0 0  codep:0x1d29 parp:0x2dfd size:0x0003
//  432:      UNK_0x2e02 bitfield: 0 0 0  codep:0x2020 parp:0x2e02 size:0x000c
//  433:      UNK_0x2e10 bitfield: 0 0 0  codep:0x2020 parp:0x2e10 size:0x0000
//  434:      UNK_0x2e12 bitfield: 0 0 0  codep:0x2020 parp:0x2e12 size:0x0017
//  435:    DRIVENUMBERS bitfield: 0 0 0  codep:0x224c parp:0x2e3a size:0x0006
//  436:         FCBPFAS bitfield: 0 0 0  codep:0x224c parp:0x2e4c size:0xfffffff4
//  437:      UNK_0x2e42 bitfield: 0 0 0  codep:0x2d69 parp:0x2e42 size:0xffffffff
//  438:      UNK_0x2e43 bitfield: 0 0 0  codep:0x872d parp:0x2e43 size:0xffffffff
//  439:      UNK_0x2e44 bitfield: 0 0 0  codep:0x4687 parp:0x2e44 size:0x000e
//  440:      FILEBLOCKS bitfield: 0 0 0  codep:0x224c parp:0x2e61 size:0x0006
//  441:       FILETYPES bitfield: 0 0 0  codep:0x224c parp:0x2e75 size:0x0006
//  442:         OFFSETS bitfield: 0 0 0  codep:0x224c parp:0x2e87 size:0x0006
//  443:           R/W'S bitfield: 0 0 0  codep:0x224c parp:0x2e97 size:0x0006
//  444:              L@ bitfield: 0 0 0  codep:0x2ea4 parp:0x2ea4 size:0x000d
//  445:              L! bitfield: 0 0 0  codep:0x2eb8 parp:0x2eb8 size:0x000d
//  446:             LC@ bitfield: 0 0 0  codep:0x2ecd parp:0x2ecd size:0x0010
//  447:             LC! bitfield: 0 0 0  codep:0x2ee5 parp:0x2ee5 size:0x000e
//  448:          LCMOVE bitfield: 0 0 0  codep:0x2efe parp:0x2efe size:0x002c
//  449:         {LXCHG} bitfield: 0 0 0  codep:0x1d29 parp:0x2f36 size:0x0010
//  450:          LWSCAN bitfield: 0 0 0  codep:0x2f51 parp:0x2f51 size:0x0029
//  451:      [SEGCACHE] bitfield: 0 0 0  codep:0x224c parp:0x2f89 size:0x000e
//  452:      [BLKCACHE] bitfield: 0 0 0  codep:0x224c parp:0x2fa6 size:0x000e
//  453:          UPDATE bitfield: 0 0 0  codep:0x224c parp:0x2fbf size:0x000e
//  454:         REFRESH bitfield: 0 0 0  codep:0x224c parp:0x2fd9 size:0x0006
//  455:           MTBUF bitfield: 0 0 0  codep:0x224c parp:0x2fe9 size:0x0036
//  456:       MTBUFFERS bitfield: 0 0 0  codep:0x224c parp:0x302d size:0x000e
//  457:        (BUFFER) bitfield: 0 0 0  codep:0x3048 parp:0x3048 size:0x0054
//  458:         ADVANCE bitfield: 0 0 0  codep:0x30a8 parp:0x30a8 size:0x0021
//  459:         MTCACHE bitfield: 0 0 0  codep:0x224c parp:0x30d5 size:0x0032
//  460:       INITCACHE bitfield: 0 0 0  codep:0x224c parp:0x3115 size:0x002a
//  461:      UNK_0x3141 bitfield: 0 0 0  codep:0x2bf3 parp:0x3141 size:0x002a
//  462:         (CACHE) bitfield: 0 0 0  codep:0x224c parp:0x3177 size:0x0036
//  463:       CACHE>USE bitfield: 0 0 0  codep:0x224c parp:0x31bb size:0x001c
//  464:       ?INBCACHE bitfield: 0 0 0  codep:0x224c parp:0x31e5 size:0x001b
//  465:      UNK_0x3202 bitfield: 0 0 0  codep:0x6012 parp:0x3202 size:0x0009
//  466:     [BUF>CACHE] bitfield: 0 0 0  codep:0x224c parp:0x321b size:0xfffffff3
//  467:      UNK_0x3210 bitfield: 0 0 0  codep:0x425b parp:0x3210 size:0x0007
//  468:      UNK_0x3219 bitfield: 0 0 0  codep:0xdd45 parp:0x3219 size:0x001e
//  469:       BUF>CACHE bitfield: 0 0 0  codep:0x224c parp:0x3245 size:0x000d
//  470:      UNK_0x3254 bitfield: 0 0 0  codep:0x0815 parp:0x3254 size:0x000b
//  471:         SEC-I/O bitfield: 0 0 0  codep:0x224c parp:0x326b size:0x005e
//  472:         T&SCALC bitfield: 0 0 0  codep:0x224c parp:0x32d5 size:0x001e
//  473:           [R/W] bitfield: 0 0 0  codep:0x224c parp:0x32fd size:0x003a
//  474:        [DIRECT] bitfield: 0 0 0  codep:0x224c parp:0x3344 size:0x0048
//  475:         <MOUNT> bitfield: 0 0 0  codep:0x224c parp:0x3398 size:0x0064
//  476:         DIRNAME bitfield: 0 0 0  codep:0x1d29 parp:0x3408 size:0x000b
//  477:             DR0 bitfield: 0 0 0  codep:0x224c parp:0x341b size:0x0016
//  478:             DR1 bitfield: 0 0 0  codep:0x224c parp:0x3439 size:0x0018
//  479:       <UNMOUNT> bitfield: 0 0 0  codep:0x224c parp:0x345f size:0x005e
//  480:         UNMOUNT bitfield: 0 0 0  codep:0x224c parp:0x34c9 size:0x0017
//  481:         NOFILES bitfield: 0 0 0  codep:0x224c parp:0x34ec size:0x0014
//  482:        NODRIVES bitfield: 0 0 0  codep:0x224c parp:0x350d size:0x0004
//  483:           EMITS bitfield: 0 0 0  codep:0x224c parp:0x351b size:0x0016
//  484:           FILES bitfield: 0 0 0  codep:0x224c parp:0x353b size:0x00dc
//  485:      UNK_0x3619 bitfield: 0 0 0  codep:0x6215 parp:0x3619 size:0x000f
//  486:          DRIVES bitfield: 0 0 0  codep:0x224c parp:0x3633 size:0x0004
//  487:    (DISKERROR?) bitfield: 0 0 0  codep:0x224c parp:0x3648 size:0x0028
//  488:      UNK_0x3672 bitfield: 0 0 0  codep:0x3672 parp:0x3672 size:0x00a1
//  489:      UNK_0x3715 bitfield: 0 0 0  codep:0x224c parp:0x3715 size:0x003c
//  490:      UNK_0x3753 bitfield: 0 0 0  codep:0x224c parp:0x3753 size:0x002e
//  491:      UNK_0x3783 bitfield: 0 0 0  codep:0x224c parp:0x3783 size:0x002a
//  492:      UNK_0x37af bitfield: 0 0 0  codep:0x224c parp:0x37af size:0x0022
//  493:      UNK_0x37d3 bitfield: 0 0 0  codep:0x224c parp:0x37d3 size:0x0042
//  494:      UNK_0x3817 bitfield: 0 0 0  codep:0x3751 parp:0x3817 size:0x000a
//  495:      UNK_0x3823 bitfield: 0 0 0  codep:0x224c parp:0x3823 size:0x0024
//  496:      UNK_0x3849 bitfield: 0 0 0  codep:0x224c parp:0x3849 size:0x000c
//  497:           BLOCK bitfield: 0 0 0  codep:0x224c parp:0x385f size:0x0016
//  498:          LBLOCK bitfield: 0 0 0  codep:0x224c parp:0x3880 size:0x001c
//  499:    SAVE-BUFFERS bitfield: 0 0 0  codep:0x224c parp:0x38ad size:0x003e
//  500:   EMPTY-BUFFERS bitfield: 0 0 0  codep:0x224c parp:0x38fd size:0x000c
//  501:           FLUSH bitfield: 0 0 0  codep:0x224c parp:0x3913 size:0x0006
//  502:            COPY bitfield: 0 0 0  codep:0x224c parp:0x3922 size:0x0012
//  503:          BLOCKS bitfield: 0 0 0  codep:0x224c parp:0x393f size:0x004a
//  504:             PSW bitfield: 0 0 0  codep:0x2214 parp:0x3991 size:0x0002 = 0x16b4
//  505:              AX bitfield: 0 0 0  codep:0x2214 parp:0x399a size:0x0002 = 0x16b6
//  506:              BX bitfield: 0 0 0  codep:0x2214 parp:0x39a3 size:0x0002 = 0x16b8
//  507:              CX bitfield: 0 0 0  codep:0x2214 parp:0x39ac size:0x0002 = 0x16ba
//  508:              DX bitfield: 0 0 0  codep:0x2214 parp:0x39b5 size:0x0002 = 0x16bc
//  509:              BP bitfield: 0 0 0  codep:0x2214 parp:0x39be size:0x0002 = 0x16be
//  510:              DI bitfield: 0 0 0  codep:0x2214 parp:0x39c7 size:0x0002 = 0x16c0
//  511:              SI bitfield: 0 0 0  codep:0x2214 parp:0x39d0 size:0x0002 = 0x16c2
//  512:              DS bitfield: 0 0 0  codep:0x2214 parp:0x39d9 size:0x0002 = 0x16c4
//  513:              ES bitfield: 0 0 0  codep:0x2214 parp:0x39e2 size:0x0002 = 0x16c6
//  514:           MATCH bitfield: 0 0 0  codep:0x39ee parp:0x39ee size:0x0021
//  515:      UNK_0x3a11 bitfield: 0 0 0  codep:0x0374 parp:0x3a11 size:0x001b
//  516:        @EXECUTE bitfield: 0 0 0  codep:0x3a39 parp:0x3a39 size:0x0007
//  517:             NOP bitfield: 0 0 0  codep:0x224c parp:0x3a48 size:0x0002
//  518:              ** bitfield: 0 0 0  codep:0x224c parp:0x3a51 size:0x0002
//  519:        'UNRAVEL bitfield: 0 0 0  codep:0x1d29 parp:0x3a60 size:0x0002
//  520:         UNRAVEL bitfield: 0 0 0  codep:0x224c parp:0x3a6e size:0x0044
//  521:        ?UNRAVEL bitfield: 0 0 0  codep:0x224c parp:0x3abf size:0x0008
//  522:             SYN bitfield: 0 0 0  codep:0x224c parp:0x3acf size:0x0042
//  523:           TRACE bitfield: 0 0 0  codep:0x1d29 parp:0x3b1b size:0x0002
//  524:          [TRACE bitfield: 0 0 0  codep:0x1d29 parp:0x3b28 size:0xfffffff5
//  525:      UNK_0x3b1f bitfield: 0 0 0  codep:0x3b13 parp:0x3b1f size:0x000b
//  526:          TRACE] bitfield: 0 0 0  codep:0x1d29 parp:0x3b35 size:0x0002
//  527:              D@ bitfield: 0 0 0  codep:0x3af8 parp:0x3b3e size:0x0002
//  528:              V= bitfield: 0 0 0  codep:0x3af8 parp:0x3b47 size:0x0002
//  529:              C= bitfield: 0 0 0  codep:0x3af8 parp:0x3b50 size:0x0002
//  530:             2V= bitfield: 0 0 0  codep:0x224c parp:0x3b5a size:0x000a
//  531:             2C= bitfield: 0 0 0  codep:0x224c parp:0x3b6c size:0x000f
//  532:               3 bitfield: 0 0 0  codep:0x2214 parp:0x3b81 size:0x0002 = 0x3
//  533:               4 bitfield: 0 0 0  codep:0x2214 parp:0x3b89 size:0x0002 = 0x4
//  534:               5 bitfield: 0 0 0  codep:0x2214 parp:0x3b91 size:0x0002 = 0x5
//  535:               6 bitfield: 0 0 0  codep:0x2214 parp:0x3b99 size:0x0002 = 0x6
//  536:               7 bitfield: 0 0 0  codep:0x2214 parp:0x3ba1 size:0x0002 = 0x7
//  537:               8 bitfield: 0 0 0  codep:0x2214 parp:0x3ba9 size:0x0002 = 0x8
//  538:               9 bitfield: 0 0 0  codep:0x2214 parp:0x3bb1 size:0x0002 = 0x9
//  539:              -1 bitfield: 0 0 0  codep:0x2214 parp:0x3bba size:0x0002 = 0xffff
//  540:              -2 bitfield: 0 0 0  codep:0x2214 parp:0x3bc3 size:0x0002 = 0xfffe
//  541:            THRU bitfield: 0 0 0  codep:0x224c parp:0x3bce size:0x0020
//  542:         (TRACE) bitfield: 0 0 0  codep:0x224c parp:0x3bfa size:0x0002
//  543:             OVA bitfield: 0 0 0  codep:0x1d29 parp:0x3c04 size:0x0002
//  544:            T-DP bitfield: 0 0 0  codep:0x1d29 parp:0x3c0f size:0x0006
//  545:     TRANS-ALLOT bitfield: 0 0 0  codep:0x224c parp:0x3c25 size:0x000e
//  546:         NEWT-DP bitfield: 0 0 0  codep:0x224c parp:0x3c3f size:0x000e
//  547:       TRANSIENT bitfield: 0 0 0  codep:0x224c parp:0x3c5b size:0x0016
//  548:        RESIDENT bitfield: 0 0 0  codep:0x224c parp:0x3c7e size:0x000c
//  549:      UNK_0x3c8c bitfield: 0 0 0  codep:0x1015 parp:0x3c8c size:0x0008
//  550:           HEAD: bitfield: 0 0 0  codep:0x224c parp:0x3c9e size:0x0027
//  551:              T: bitfield: 0 0 0  codep:0x224c parp:0x3ccc size:0x0018
//  552:              T; bitfield: 0 0 0  codep:0x224c parp:0x3ceb size:0x000a
//  553:      UNK_0x3cf7 bitfield: 0 0 0  codep:0x224c parp:0x3cf7 size:0x0014
//  554:      UNK_0x3d0d bitfield: 0 0 0  codep:0x1307 parp:0x3d0d size:0x0033
//  555:      UNK_0x3d42 bitfield: 0 0 0  codep:0x900e parp:0x3d42 size:0x0001
//  556:      UNK_0x3d45 bitfield: 0 0 0  codep:0x224c parp:0x3d45 size:0x004a
//  557:         DISPOSE bitfield: 0 0 0  codep:0x224c parp:0x3d9b size:0x0062
//  558:               ' bitfield: 0 0 0  codep:0x224c parp:0x3e03 size:0x0012
//  559:      UNK_0x3e17 bitfield: 0 0 0  codep:0x125f parp:0x3e17 size:0x000c
//  560:           (2V:) bitfield: 0 0 0  codep:0x1d29 parp:0x3e2d size:0x0004
//  561:            (C:) bitfield: 0 0 0  codep:0x2214 parp:0x3e3a size:0x0002 = 0x0
//  562:           (2C:) bitfield: 0 0 0  codep:0x3b74 parp:0x3e46 size:0xfffffffc
//  563:      UNK_0x3e44 bitfield: 0 0 0  codep:0xa93a parp:0x3e44 size:0x0001
//  564:      UNK_0x3e47 bitfield: 0 0 0  codep:0x003b parp:0x3e47 size:0x0003
//  565:              V: bitfield: 0 0 0  codep:0x224c parp:0x3e51 size:0x000e
//  566:             2V: bitfield: 0 0 0  codep:0x224c parp:0x3e67 size:0x000e
//  567:              C: bitfield: 0 0 0  codep:0x224c parp:0x3e7c size:0x000c
//  568:             2C: bitfield: 0 0 0  codep:0x224c parp:0x3e90 size:0x000e
//  569:        EXECUTES bitfield: 0 0 0  codep:0x224c parp:0x3eab size:0x000a
//  570:          BINARY bitfield: 0 0 0  codep:0x224c parp:0x3ec0 size:0x0008
//  571:              H. bitfield: 0 0 0  codep:0x224c parp:0x3ecf size:0x0010
//  572:           RANGE bitfield: 0 0 0  codep:0x224c parp:0x3ee9 size:0x0008
//  573:           ASCII bitfield: 0 0 0  codep:0x224c parp:0x3efb size:0x000c
//  574:      UNK_0x3f09 bitfield: 0 0 0  codep:0x224c parp:0x3f09 size:0x0010
//  575:               " bitfield: 0 0 0  codep:0x224c parp:0x3f1f size:0x0036
//  576:             DU< bitfield: 0 0 0  codep:0x224c parp:0x3f5d size:0x0018
//  577:            PICK bitfield: 0 0 0  codep:0x224c parp:0x3f7e size:0x0016
//  578:            ROLL bitfield: 0 0 0  codep:0x224c parp:0x3f9d size:0x0036
//  579:           2OVER bitfield: 0 0 0  codep:0x224c parp:0x3fdd size:0x000a
//  580:              D- bitfield: 0 0 0  codep:0x224c parp:0x3fee size:0x0006
//  581:             D0= bitfield: 0 0 0  codep:0x224c parp:0x3ffc size:0x0006
//  582:              D= bitfield: 0 0 0  codep:0x224c parp:0x4009 size:0x0006
//  583:              D> bitfield: 0 0 0  codep:0x224c parp:0x4016 size:0x0006
//  584:          WITHIN bitfield: 0 0 0  codep:0x224c parp:0x4027 size:0x0014
//  585:            DMIN bitfield: 0 0 0  codep:0x224c parp:0x4044 size:0x0010
//  586:            DMAX bitfield: 0 0 0  codep:0x224c parp:0x405d size:0x0010
//  587:          MYSELF bitfield: 0 0 0  codep:0x224c parp:0x4078 size:0x001c
//  588:            >TIB bitfield: 0 0 0  codep:0x224c parp:0x409d size:0x0014
//  589:         DOSPARM bitfield: 0 0 0  codep:0x224c parp:0x40bd size:0x000c
//  590:          MAXDRV bitfield: 0 0 0  codep:0x1d29 parp:0x40d4 size:0x0002
//  591:         ?#DETTE bitfield: 0 0 0  codep:0x224c parp:0x40e2 size:0x001a
//  592:            XFCB bitfield: 0 0 0  codep:0x224c parp:0x4105 size:0x0009
//  593:      UNK_0x4110 bitfield: 0 0 0  codep:0xd816 parp:0x4110 size:0xffffffff
//  594:             DRV bitfield: 0 0 0  codep:0x224c parp:0x4117 size:0x0006
//  595:             NAM bitfield: 0 0 0  codep:0x224c parp:0x4125 size:0x0008
//  596:             TYP bitfield: 0 0 0  codep:0x224c parp:0x4135 size:0xfffffffd
//  597:      UNK_0x4134 bitfield: 0 0 0  codep:0x4cd0 parp:0x4134 size:0x000d
//  598:          CURBLK bitfield: 0 0 0  codep:0x224c parp:0x414c size:0xfffffff6
//  599:      UNK_0x4144 bitfield: 0 0 0  codep:0x8641 parp:0x4144 size:0x0010
//  600:      UNK_0x4156 bitfield: 0 0 0  codep:0x0f72 parp:0x4156 size:0x0002
//  601:         RECSIZE bitfield: 0 0 0  codep:0x224c parp:0x4164 size:0x000c
//  602:         FILESIZ bitfield: 0 0 0  codep:0x224c parp:0x417c size:0x000c
//  603:          CURREC bitfield: 0 0 0  codep:0x224c parp:0x4193 size:0x000c
//  604:          RELREC bitfield: 0 0 0  codep:0x224c parp:0x41aa size:0x000c
//  605:          CLRFCB bitfield: 0 0 0  codep:0x224c parp:0x41c1 size:0x001c
//  606:          SYSTEM bitfield: 0 0 0  codep:0x224c parp:0x41e8 size:0x000e
//  607:         SYSUTIL bitfield: 0 0 0  codep:0x224c parp:0x4202 size:0x0010
//  608:         DOSCALL bitfield: 0 0 0  codep:0x224c parp:0x421e size:0xfffffff9
//  609:      UNK_0x4219 bitfield: 0 0 0  codep:0x4353 parp:0x4219 size:0x000e
//  610:      UNK_0x4229 bitfield: 0 0 0  codep:0xd700 parp:0x4229 size:0x0003
//  611:            >FCB bitfield: 0 0 0  codep:0x224c parp:0x4235 size:0x0034
//  612:          SETFCB bitfield: 0 0 0  codep:0x224c parp:0x4274 size:0x0024
//  613:            INIT bitfield: 0 0 0  codep:0x224c parp:0x42a1 size:0x0008
//  614:         FCBCALL bitfield: 0 0 0  codep:0x224c parp:0x42b5 size:0x0016
//  615:            OPEN bitfield: 0 0 0  codep:0x224c parp:0x42d4 size:0x0008
//  616:           CLOSE bitfield: 0 0 0  codep:0x224c parp:0x42e6 size:0x0008
//  617:         SEARCH1 bitfield: 0 0 0  codep:0x224c parp:0x42fa size:0x0008
//  618:         READNEX bitfield: 0 0 0  codep:0x224c parp:0x430e size:0x0008
//  619:         WRITENE bitfield: 0 0 0  codep:0x224c parp:0x4322 size:0x0008
//  620:            MAKE bitfield: 0 0 0  codep:0x224c parp:0x4333 size:0x0008
//  621:         DOS-DTA bitfield: 0 0 0  codep:0x224c parp:0x4347 size:0x0014
//  622:         READ-RA bitfield: 0 0 0  codep:0x224c parp:0x4367 size:0x0008
//  623:         WRITE-R bitfield: 0 0 0  codep:0x224c parp:0x437b size:0x0008
//  624:      UNK_0x4385 bitfield: 0 0 0  codep:0x224c parp:0x4385 size:0x0002
//  625:      UNK_0x4389 bitfield: 0 0 0  codep:0x4208 parp:0x4389 size:0x0009
//  626:         MAKE<NA bitfield: 0 0 0  codep:0x224c parp:0x439e size:0xfffffff6
//  627:      UNK_0x4396 bitfield: 0 0 0  codep:0x4d8a parp:0x4396 size:0x0020
//  628:         OPEN<NA bitfield: 0 0 0  codep:0x224c parp:0x43c2 size:0x0016
//  629:          [FILE] bitfield: 0 0 0  codep:0x224c parp:0x43e3 size:0x0026
//  630:          SYSGEN bitfield: 0 0 0  codep:0x224c parp:0x4414 size:0x0030
//  631:         4TH>DOS bitfield: 0 0 0  codep:0x224c parp:0x4450 size:0x00b0
//  632:         SETMAXD bitfield: 0 0 0  codep:0x224c parp:0x450c size:0x0000
//  633:      UNK_0x450e bitfield: 0 0 0  codep:0x40e0 parp:0x450e size:0x0045
//  634:      UNK_0x4555 bitfield: 0 0 0  codep:0xdf40 parp:0x4555 size:0x0003
//  635:      UNK_0x455a bitfield: 0 0 0  codep:0x224c parp:0x455a size:0x0012
//  636:           ?1DRV bitfield: 0 0 0  codep:0x224c parp:0x4576 size:0x0016
//  637:      UNK_0x458e bitfield: 0 0 0  codep:0x224c parp:0x458e size:0x0018
//  638:         SMARTOP bitfield: 0 0 0  codep:0x224c parp:0x45b2 size:0x0050
//  639:         ASKMOUN bitfield: 0 0 0  codep:0x1d29 parp:0x460e size:0x0000
//  640:      UNK_0x4610 bitfield: 0 0 0  codep:0xaa3b parp:0x4610 size:0x0000
//  641:            'BYE bitfield: 0 0 0  codep:0x1d29 parp:0x4619 size:0xfffffff9
//  642:      UNK_0x4614 bitfield: 0 0 0  codep:0x2784 parp:0x4614 size:0x0007
//  643:         SKIPPED bitfield: 0 0 0  codep:0x1d29 parp:0x4627 size:0xfffffff6
//  644:      UNK_0x461f bitfield: 0 0 0  codep:0x5387 parp:0x461f size:0x000a
//  645:         CANSKIP bitfield: 0 0 0  codep:0x1d29 parp:0x4635 size:0x0002
//  646:         <ASKMOU bitfield: 0 0 0  codep:0x224c parp:0x4643 size:0x0067
//  647:      UNK_0x46ac bitfield: 0 0 0  codep:0x7365 parp:0x46ac size:0x0022
//  648:         DOSMOUN bitfield: 0 0 0  codep:0x224c parp:0x46da size:0x005e
//  649:         DOSUNMO bitfield: 0 0 0  codep:0x224c parp:0x4744 size:0x0010
//  650:             DR2 bitfield: 0 0 0  codep:0x224c parp:0x475c size:0x001e
//  651:             DR3 bitfield: 0 0 0  codep:0x224c parp:0x4782 size:0x0020
//  652:           USING bitfield: 0 0 0  codep:0x224c parp:0x47ac size:0x000e
//  653:         SETBLOC bitfield: 0 0 0  codep:0x224c parp:0x47c6 size:0xfffffff6
//  654:      UNK_0x47be bitfield: 0 0 0  codep:0x5388 parp:0x47be size:0x003a
//  655:         SETSYSK bitfield: 0 0 0  codep:0x224c parp:0x4804 size:0x0011
//  656:      UNK_0x4817 bitfield: 0 0 0  codep:0x5d0f parp:0x4817 size:0x0035
//  657:      UNK_0x484e bitfield: 0 0 0  codep:0x1d29 parp:0x484e size:0x0002
//  658:      UNK_0x4852 bitfield: 0 0 0  codep:0x1d29 parp:0x4852 size:0x0002
//  659:      UNK_0x4856 bitfield: 0 0 0  codep:0x1d29 parp:0x4856 size:0x0004
//  660:            ?ERR bitfield: 0 0 0  codep:0x224c parp:0x4863 size:0x000a
//  661:      UNK_0x486f bitfield: 0 0 0  codep:0x224c parp:0x486f size:0x0032
//  662:           [LDS] bitfield: 0 0 0  codep:0x224c parp:0x48ab size:0x0054
//  663:      UNK_0x4901 bitfield: 0 0 0  codep:0x1d29 parp:0x4901 size:0x0011
//  664:           (LDS) bitfield: 0 0 0  codep:0x224c parp:0x491c size:0x002f
//  665:      UNK_0x494d bitfield: 0 0 0  codep:0xa50e parp:0x494d size:0x000d
//  666:              ON bitfield: 0 0 0  codep:0x4961 parp:0x4961 size:0x000b
//  667:             OFF bitfield: 0 0 0  codep:0x4974 parp:0x4974 size:0x000a
//  668:      UNK_0x4980 bitfield: 0 0 0  codep:0x4980 parp:0x4980 size:0x0011
//  669:             KEY bitfield: 0 0 0  codep:0x224c parp:0x4999 size:0x0006
//  670:            NULL bitfield: 0 0 0  codep:0x3b74 parp:0x49a8 size:0x0004
//  671:             ZZZ bitfield: 0 0 0  codep:0x1d29 parp:0x49b4 size:0x000a
//  672:         <LCMOVE bitfield: 0 0 0  codep:0x49ca parp:0x49ca size:0x002c
//  673:             2^N bitfield: 0 0 0  codep:0x49fe parp:0x49fe size:0x000f
//  674:             BIT bitfield: 0 0 0  codep:0x224c parp:0x4a15 size:0x0006
//  675:             16/ bitfield: 0 0 0  codep:0x4a23 parp:0x4a23 size:0x000c
//  676:             16* bitfield: 0 0 0  codep:0x4a37 parp:0x4a37 size:0x000c
//  677:            D16* bitfield: 0 0 0  codep:0x4a4c parp:0x4a4c size:0x0012
//  678:              3* bitfield: 0 0 0  codep:0x224c parp:0x4a65 size:0x0006
//  679:              3+ bitfield: 0 0 0  codep:0x4a72 parp:0x4a72 size:0x000a
//  680:            1.5@ bitfield: 0 0 0  codep:0x4a85 parp:0x4a85 size:0x000e
//  681:            1.5! bitfield: 0 0 0  codep:0x4a9c parp:0x4a9c size:0x000c
//  682:             @DS bitfield: 0 0 0  codep:0x4ab0 parp:0x4ab0 size:0x0018
//  683:              +@ bitfield: 0 0 0  codep:0x224c parp:0x4acf size:0x0006
//  684:           >FLAG bitfield: 0 0 0  codep:0x224c parp:0x4adf size:0x0006
//  685:            L+-@ bitfield: 0 0 0  codep:0x4aee parp:0x4aee size:0x0036
//  686:            CASE bitfield: 0 0 0  codep:0x224c parp:0x4b2d size:0x0017
//  687:              IS bitfield: 0 0 0  codep:0x224c parp:0x4b4b size:0x0008
//  688:      UNK_0x4b55 bitfield: 0 0 0  codep:0x1690 parp:0x4b55 size:0x0000
//  689:          OTHERS bitfield: 0 0 0  codep:0x224c parp:0x4b60 size:0x0010
//  690:           CASE: bitfield: 0 0 0  codep:0x224c parp:0x4b7a size:0x0019
//  691:            SEED bitfield: 0 0 0  codep:0x1d29 parp:0x4b9c size:0x0002
//  692:            FRND bitfield: 0 0 0  codep:0x4ba7 parp:0x4ba7 size:0x0016
//  693:            RRND bitfield: 0 0 0  codep:0x224c parp:0x4bc6 size:0x0010
//  694:            +BIT bitfield: 0 0 0  codep:0x4bdf parp:0x4bdf size:0x0013
//  695:      UNK_0x4bf4 bitfield: 0 0 0  codep:0x4bf4 parp:0x4bf4 size:0x000d
//  696:      UNK_0x4c03 bitfield: 0 0 0  codep:0x4c03 parp:0x4c03 size:0x0013
//  697:      UNK_0x4c18 bitfield: 0 0 0  codep:0x48e0 parp:0x4c18 size:0x0010
//  698:      UNK_0x4c2a bitfield: 0 0 0  codep:0x224c parp:0x4c2a size:0x0038
//  699:      UNK_0x4c64 bitfield: 0 0 0  codep:0x224c parp:0x4c64 size:0x0026
//  700:            SQRT bitfield: 0 0 0  codep:0x224c parp:0x4c93 size:0x0016
//  701:             +-@ bitfield: 0 0 0  codep:0x4cb1 parp:0x4cb1 size:0x000a
//  702:           L1.5@ bitfield: 0 0 0  codep:0x4cc5 parp:0x4cc5 size:0xffffffff
//  703:      UNK_0x4cc6 bitfield: 0 0 0  codep:0x5b4c parp:0x4cc6 size:0x000a
//  704:      UNK_0x4cd2 bitfield: 0 0 0  codep:0x024f parp:0x4cd2 size:0x0004
//  705:      UNK_0x4cd8 bitfield: 0 0 0  codep:0xd88b parp:0x4cd8 size:0x0002
//  706:            <C!> bitfield: 0 0 0  codep:0x0c60 parp:0x4ce3 size:0x0000
//  707:             <!> bitfield: 0 0 0  codep:0x0be1 parp:0x4ceb size:0x0000
//  708:          <1.5!> bitfield: 0 0 0  codep:0x4a9c parp:0x4cf6 size:0x0000
//  709:            <+!> bitfield: 0 0 0  codep:0x0f85 parp:0x4cff size:0x0000
//  710:            <D!> bitfield: 0 0 0  codep:0x0c24 parp:0x4d08 size:0x0000
//  711:           <OFF> bitfield: 0 0 0  codep:0x3af8 parp:0x4d12 size:0x0002
//  712:            <ON> bitfield: 0 0 0  codep:0x3af8 parp:0x4d1d size:0x0002
//  713:         <BLOCK> bitfield: 0 0 0  codep:0x3af8 parp:0x4d2b size:0x0002
//  714:         SPHEREW bitfield: 0 0 0  codep:0x1d29 parp:0x4d39 size:0x0002
//  715:         SIGNEXT bitfield: 0 0 0  codep:0x1d29 parp:0x4d47 size:0x0002
//  716:      UNK_0x4d4b bitfield: 0 0 0  codep:0x1d29 parp:0x4d4b size:0x0000
//  717:      UNK_0x4d4d bitfield: 0 0 0  codep:0x203a parp:0x4d4d size:0x0000
//  718:      UNK_0x4d4f bitfield: 0 0 0  codep:0x1d29 parp:0x4d4f size:0x0002
//  719:      UNK_0x4d53 bitfield: 0 0 0  codep:0x1d29 parp:0x4d53 size:0x0000
//  720:      UNK_0x4d55 bitfield: 0 0 0  codep:0x203a parp:0x4d55 size:0xffffffff
//  721:      UNK_0x4d56 bitfield: 0 0 0  codep:0x3d20 parp:0x4d56 size:0xffffffff
//  722:          'ARRAY bitfield: 0 0 0  codep:0x1d29 parp:0x4d60 size:0x0002
//  723:         ARRAYSE bitfield: 0 0 0  codep:0x224c parp:0x4d6e size:0x000a
//  724:          #BYTES bitfield: 0 0 0  codep:0x224c parp:0x4d83 size:0x000a
//  725:           #COLZ bitfield: 0 0 0  codep:0x224c parp:0x4d97 size:0x0008
//  726:           #ROWZ bitfield: 0 0 0  codep:0x224c parp:0x4da9 size:0x000a
//  727:         ACELLAD bitfield: 0 0 0  codep:0x224c parp:0x4dbf size:0x002e
//  728:              A! bitfield: 0 0 0  codep:0x224c parp:0x4df4 size:0x0006
//  729:              A@ bitfield: 0 0 0  codep:0x224c parp:0x4e01 size:0x0006
//  730:         !OFFSET bitfield: 0 0 0  codep:0x4e13 parp:0x4e13 size:0x002c
//  731:           ARRAY bitfield: 0 0 0  codep:0x224c parp:0x4e49 size:0xfffffff8
//  732:      UNK_0x4e43 bitfield: 0 0 0  codep:0x4185 parp:0x4e43 size:0x0012
//  733:      UNK_0x4e57 bitfield: 0 0 0  codep:0x1f93 parp:0x4e57 size:0x001f
//  734:         SETLARR bitfield: 0 0 0  codep:0x224c parp:0x4e82 size:0x002e
//  735:             XLL bitfield: 0 0 0  codep:0x1d29 parp:0x4eb8 size:0x0002
//  736:             YLL bitfield: 0 0 0  codep:0x1d29 parp:0x4ec2 size:0x0002
//  737:             XUR bitfield: 0 0 0  codep:0x1d29 parp:0x4ecc size:0x0002
//  738:             YUR bitfield: 0 0 0  codep:0x1d29 parp:0x4ed6 size:0x0002
//  739:         FULLARR bitfield: 0 0 0  codep:0x224c parp:0x4ee4 size:0x000e
//  740:         SETREGI bitfield: 0 0 0  codep:0x224c parp:0x4efe size:0x0012
//  741:         FILLREG bitfield: 0 0 0  codep:0x224c parp:0x4f1c size:0x0027
//  742:      UNK_0x4f45 bitfield: 0 0 0  codep:0xe415 parp:0x4f45 size:0x0005
//  743:           FONT# bitfield: 0 0 0  codep:0x1d29 parp:0x4f54 size:0xfffffff9
//  744:      UNK_0x4f4f bitfield: 0 0 0  codep:0x4f46 parp:0x4f4f size:0x0005
//  745:      UNK_0x4f56 bitfield: 0 0 0  codep:0x0000 parp:0x4f56 size:0x0000
//  746:           TANDY bitfield: 0 0 0  codep:0x1d29 parp:0x4f60 size:0x0002
//  747:          COLORT bitfield: 0 0 0  codep:0x1d29 parp:0x4f6d size:0x0011
//  748:             I>C bitfield: 0 0 0  codep:0x224c parp:0x4f86 size:0x0019
//  749:           BLACK bitfield: 0 0 0  codep:0x4f96 parp:0x4fa9 size:0x0001
//  750:         DK-BLUE bitfield: 0 0 0  codep:0x4f96 parp:0x4fb6 size:0x0001
//  751:         DK-GREE bitfield: 0 0 0  codep:0x4f96 parp:0x4fc3 size:0x0001
//  752:           GREEN bitfield: 0 0 0  codep:0x4f96 parp:0x4fce size:0x0001
//  753:             RED bitfield: 0 0 0  codep:0x4f96 parp:0x4fd7 size:0x0001
//  754:          VIOLET bitfield: 0 0 0  codep:0x4f96 parp:0x4fe3 size:0x0001
//  755:           BROWN bitfield: 0 0 0  codep:0x4f96 parp:0x4fee size:0x0001
//  756:           GREY1 bitfield: 0 0 0  codep:0x4f96 parp:0x4ff9 size:0x0001
//  757:           GREY2 bitfield: 0 0 0  codep:0x4f96 parp:0x5004 size:0xfffffffc
//  758:      UNK_0x5002 bitfield: 0 0 0  codep:0xb259 parp:0x5002 size:0x0003
//  759:            BLUE bitfield: 0 0 0  codep:0x4f96 parp:0x500e size:0x0001
//  760:         LT-GREE bitfield: 0 0 0  codep:0x4f96 parp:0x501b size:0xfffffff8
//  761:      UNK_0x5015 bitfield: 0 0 0  codep:0x2d54 parp:0x5015 size:0x0000
//  762:      UNK_0x5017 bitfield: 0 0 0  codep:0x5247 parp:0x5017 size:0x0005
//  763:         LT-BLUE bitfield: 0 0 0  codep:0x4f96 parp:0x5028 size:0x0001
//  764:            PINK bitfield: 0 0 0  codep:0x4f96 parp:0x5032 size:0x0001
//  765:          ORANGE bitfield: 0 0 0  codep:0x4f96 parp:0x503e size:0x0001
//  766:          YELLOW bitfield: 0 0 0  codep:0x4f96 parp:0x504a size:0x0001
//  767:           WHITE bitfield: 0 0 0  codep:0x4f96 parp:0x5055 size:0xfffffffb
//  768:      UNK_0x5052 bitfield: 0 0 0  codep:0x5449 parp:0x5052 size:0x0004
//  769:            ?NID bitfield: 0 0 0  codep:0x1d29 parp:0x505f size:0x0002
//  770:            BMAP bitfield: 0 0 0  codep:0x1d29 parp:0x506a size:0x000e
//  771:      UNK_0x507a bitfield: 0 0 0  codep:0x224c parp:0x507a size:0x0006
//  772:           BMOFF bitfield: 0 0 0  codep:0x224c parp:0x508a size:0x0006
//  773:           BMSEG bitfield: 0 0 0  codep:0x224c parp:0x509a size:0x0006
//  774:          BMWIDE bitfield: 0 0 0  codep:0x224c parp:0x50ab size:0x0006
//  775:         BMBYTES bitfield: 0 0 0  codep:0x224c parp:0x50bd size:0x0008
//  776:          BMHIGH bitfield: 0 0 0  codep:0x224c parp:0x50d0 size:0x0008
//  777:           BMPAL bitfield: 0 0 0  codep:0x224c parp:0x50e2 size:0x0008
//  778:         IHEADLE bitfield: 0 0 0  codep:0x2214 parp:0x50f6 size:0x0002 = 0xb
//  779:      UNK_0x50fa bitfield: 0 0 0  codep:0x2214 parp:0x50fa size:0x0002 = 0x658a
//  780:      UNK_0x50fe bitfield: 0 0 0  codep:0x2214 parp:0x50fe size:0x0002 = 0x65d1
//  781:      UNK_0x5102 bitfield: 0 0 0  codep:0x2214 parp:0x5102 size:0x0002 = 0xf560
//  782:         *MAPSCA bitfield: 0 0 0  codep:0x2214 parp:0x5110 size:0x0002 = 0x8
//  783:          SIGBLK bitfield: 0 0 0  codep:0x2214 parp:0x511d size:0x0002 = 0x3
//  784:          ALOVSA bitfield: 0 0 0  codep:0x2214 parp:0x512a size:0x0002 = 0x0
//  785:          AHIVSA bitfield: 0 0 0  codep:0x2214 parp:0x5137 size:0x0002 = 0x3e7f
//  786:          BLOVSA bitfield: 0 0 0  codep:0x2214 parp:0x5144 size:0x0002 = 0x3e80
//  787:          BHIVSA bitfield: 0 0 0  codep:0x2214 parp:0x5151 size:0x0002 = 0x96ff
//  788:         'OVBACK bitfield: 0 0 0  codep:0x2214 parp:0x515f size:0x0002 = 0xd284
//  789:          MUSSEG bitfield: 0 0 0  codep:0x2214 parp:0x516c size:0x0002 = 0x84c8
//  790:             WIN bitfield: 0 0 0  codep:0x1d29 parp:0x5176 size:0x0002
//  791:         ?FIRED- bitfield: 0 0 0  codep:0x2214 parp:0x5184 size:0x0002 = 0x0
//  792:         ?A-SHIE bitfield: 0 0 0  codep:0x2214 parp:0x5192 size:0x0002 = 0x0
//  793:         ?A-WEAP bitfield: 0 0 0  codep:0x2214 parp:0x51a0 size:0x0002 = 0x0
//  794:             16K bitfield: 0 0 0  codep:0x2214 parp:0x51aa size:0x0002 = 0x4000
//  795:         DBUF-SI bitfield: 0 0 0  codep:0x3b74 parp:0x51b8 size:0x0004
//  796:            TRUE bitfield: 0 0 0  codep:0x2214 parp:0x51c5 size:0x0002 = 0x1
//  797:           FALSE bitfield: 0 0 0  codep:0x2214 parp:0x51d1 size:0x0002 = 0x0
//  798:             ?UF bitfield: 0 0 0  codep:0x1d29 parp:0x51db size:0x0002
//  799:             ?AF bitfield: 0 0 0  codep:0x1d29 parp:0x51e5 size:0x0002
//  800:          #SHOTS bitfield: 0 0 0  codep:0x1d29 parp:0x51f2 size:0x0002
//  801:           'ASYS bitfield: 0 0 0  codep:0x1d29 parp:0x51fe size:0x0002
//  802:             P/B bitfield: 0 0 0  codep:0x1d29 parp:0x5208 size:0x0002
//  803:           'BOSS bitfield: 0 0 0  codep:0x1d29 parp:0x5214 size:0x0002
//  804:           %TALK bitfield: 0 0 0  codep:0x1d29 parp:0x5220 size:0x0002
//  805:         NULL-IC bitfield: 0 0 0  codep:0x2214 parp:0x522e size:0x0002 = 0x32
//  806:         SYS-ICO bitfield: 0 0 0  codep:0x2214 parp:0x523c size:0x0002 = 0xfd
//  807:         INVIS-I bitfield: 0 0 0  codep:0x2214 parp:0x524a size:0xfffffff7 = 0xfe
//  808:      UNK_0x5243 bitfield: 0 0 0  codep:0x4e49 parp:0x5243 size:0x0001
//  809:      UNK_0x5246 bitfield: 0 0 0  codep:0x5349 parp:0x5246 size:0x0006
//  810:         FLUX-IC bitfield: 0 0 0  codep:0x2214 parp:0x5258 size:0x0002 = 0xff
//  811:         DEAD-IC bitfield: 0 0 0  codep:0x2214 parp:0x5266 size:0x0002 = 0x2
//  812:         DEFAULT bitfield: 0 0 0  codep:0x2214 parp:0x5274 size:0x0002 = 0x1
//  813:         TEXTC/L bitfield: 0 0 0  codep:0x2214 parp:0x5282 size:0x0002 = 0x26
//  814:      UNK_0x5286 bitfield: 0 0 0  codep:0x2214 parp:0x5286 size:0x0002 = 0x2d0
//  815:         FUEL/SE bitfield: 0 0 0  codep:0x2214 parp:0x5294 size:0x0002 = 0x5
//  816:         POLYSEG bitfield: 0 0 0  codep:0x2214 parp:0x52a2 size:0x0002 = 0x9e43
//  817:          'ANSYS bitfield: 0 0 0  codep:0x2214 parp:0x52af size:0x0002 = 0xd38a
//  818:         ?CALLED bitfield: 0 0 0  codep:0x2214 parp:0x52bd size:0x0002 = 0x0
//  819:              0. bitfield: 0 0 0  codep:0x3b74 parp:0x52c6 size:0x0004
//  820:         VANEWSP bitfield: 0 0 0  codep:0x3b74 parp:0x52d6 size:0x0004
//  821:           IROOT bitfield: 0 0 0  codep:0x3b74 parp:0x52e4 size:0x0004
//  822:         INACTIV bitfield: 0 0 0  codep:0x3b74 parp:0x52f4 size:0x0004
//  823:         FRAGMEN bitfield: 0 0 0  codep:0x3b74 parp:0x5304 size:0x0004
//  824:           *SECS bitfield: 0 0 0  codep:0x3b74 parp:0x5312 size:0xfffffff8
//  825:      UNK_0x530c bitfield: 0 0 0  codep:0x2a85 parp:0x530c size:0x000a
//  826:         *ASSIGN bitfield: 0 0 0  codep:0x3b74 parp:0x5322 size:0x0004
//  827:           *SHIP bitfield: 0 0 0  codep:0x3b74 parp:0x5330 size:0x0004
//  828:           *ASYS bitfield: 0 0 0  codep:0x3b74 parp:0x533e size:0x0003
//  829:      UNK_0x5343 bitfield: 0 0 0  codep:0x36bf parp:0x5343 size:0xffffffff
//  830:           *ARTH bitfield: 0 0 0  codep:0x3b74 parp:0x534c size:0x0004
//  831:         *ARREST bitfield: 0 0 0  codep:0x3b74 parp:0x535c size:0x0004
//  832:             *HL bitfield: 0 0 0  codep:0x3b74 parp:0x5368 size:0x0004
//  833:             *LH bitfield: 0 0 0  codep:0x3b74 parp:0x5374 size:0x0004
//  834:             *GD bitfield: 0 0 0  codep:0x3b74 parp:0x5380 size:0x0004
//  835:          *4SALE bitfield: 0 0 0  codep:0x3b74 parp:0x538f size:0xfffffff8
//  836:      UNK_0x5389 bitfield: 0 0 0  codep:0x342a parp:0x5389 size:0x000a
//  837:           *2BUY bitfield: 0 0 0  codep:0x3b74 parp:0x539d size:0x0004
//  838:             MPS bitfield: 0 0 0  codep:0x2214 parp:0x53a9 size:0x0002 = 0x1
//  839:         BOX-IAD bitfield: 0 0 0  codep:0x3b74 parp:0x53b7 size:0x0004
//  840:           *DICT bitfield: 0 0 0  codep:0x3b74 parp:0x53c5 size:0x0004
//  841:         CLIP-TA bitfield: 0 0 0  codep:0x1d29 parp:0x53d5 size:0x0014
//  842:           TABLE bitfield: 0 0 0  codep:0x224c parp:0x53f3 size:0x0011
//  843:         FONTSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5410 size:0x0002
//  844:          REMSEG bitfield: 0 0 0  codep:0x1d29 parp:0x541d size:0x0002
//  845:         XBUF-SE bitfield: 0 0 0  codep:0x1d29 parp:0x542b size:0x0002
//  846:            DICT bitfield: 0 0 0  codep:0x1d29 parp:0x5436 size:0x0002
//  847:            ?ALL bitfield: 0 0 0  codep:0x1d29 parp:0x5441 size:0x0002
//  848:            ?YOK bitfield: 0 0 0  codep:0x1d29 parp:0x544c size:0xfffffff9
//  849:      UNK_0x5447 bitfield: 0 0 0  codep:0x3f84 parp:0x5447 size:0x0007
//  850:             HUB bitfield: 0 0 0  codep:0x1d29 parp:0x5456 size:0xfffffffd
//  851:      UNK_0x5455 bitfield: 0 0 0  codep:0x29c2 parp:0x5455 size:0x0003
//  852:            PIC# bitfield: 0 0 0  codep:0x1d29 parp:0x5461 size:0x0002
//  853:           1LOGO bitfield: 0 0 0  codep:0x1d29 parp:0x546d size:0x000e
//  854:      UNK_0x547d bitfield: 0 0 0  codep:0x1d29 parp:0x547d size:0x000a
//  855:      UNK_0x5489 bitfield: 0 0 0  codep:0x1d29 parp:0x5489 size:0x0006
//  856:      UNK_0x5491 bitfield: 0 0 0  codep:0x1d29 parp:0x5491 size:0x0002
//  857:          'XCOMM bitfield: 0 0 0  codep:0x1d29 parp:0x549e size:0x0002
//  858:            TCLR bitfield: 0 0 0  codep:0x1d29 parp:0x54a9 size:0x0002
//  859:           'TRAK bitfield: 0 0 0  codep:0x1d29 parp:0x54b5 size:0x0002
//  860:         TRAK-HR bitfield: 0 0 0  codep:0x1d29 parp:0x54c3 size:0x0002
//  861:         A-STREN bitfield: 0 0 0  codep:0x1d29 parp:0x54d1 size:0x0002
//  862:          DIRBLK bitfield: 0 0 0  codep:0x1d29 parp:0x54de size:0x0002
//  863:         TIMESTA bitfield: 0 0 0  codep:0x1d29 parp:0x54ec size:0x0002
//  864:         RELAXTI bitfield: 0 0 0  codep:0x1d29 parp:0x54fa size:0x0002
//  865:         ):-,601 bitfield: 0 0 0  codep:0x1d29 parp:0x5508 size:0x0004
//  866:         ICONFON bitfield: 0 0 0  codep:0x1d29 parp:0x5518 size:0x0002
//  867:          LFRAME bitfield: 0 0 0  codep:0x1d29 parp:0x5525 size:0x0002
//  868:           ?AUTO bitfield: 0 0 0  codep:0x1d29 parp:0x5531 size:0x0002
//  869:         ?CRITIC bitfield: 0 0 0  codep:0x1d29 parp:0x553f size:0x0002
//  870:         P-POSTU bitfield: 0 0 0  codep:0x1d29 parp:0x554d size:0x0002
//  871:         ELEM-AM bitfield: 0 0 0  codep:0x1d29 parp:0x555b size:0xfffffff4
//  872:      UNK_0x5551 bitfield: 0 0 0  codep:0x5529 parp:0x5551 size:0x000c
//  873:         'INJURE bitfield: 0 0 0  codep:0x1d29 parp:0x5569 size:0x0002
//  874:         P-COLOR bitfield: 0 0 0  codep:0x1d29 parp:0x5577 size:0x0003
//  875:         P-PHRAS bitfield: 0 0 0  codep:0x1d29 parp:0x5586 size:0x0003
//  876:          P-CARP bitfield: 0 0 0  codep:0x1d29 parp:0x5594 size:0x0003
//  877:         O-COLOR bitfield: 0 0 0  codep:0x1d29 parp:0x55a3 size:0x0003
//  878:           HYDRO bitfield: 0 0 0  codep:0x1d29 parp:0x55b0 size:0x0002
//  879:            ATMO bitfield: 0 0 0  codep:0x1d29 parp:0x55bb size:0x0002
//  880:          LCOLOR bitfield: 0 0 0  codep:0x1d29 parp:0x55c8 size:0x0002
//  881:             ?TV bitfield: 0 0 0  codep:0x1d29 parp:0x55d2 size:0x0002
//  882:           OLDHR bitfield: 0 0 0  codep:0x1d29 parp:0x55de size:0x0002
//  883:           AVCNT bitfield: 0 0 0  codep:0x1d29 parp:0x55ea size:0x0002
//  884:      UNK_0x55ee bitfield: 0 0 0  codep:0x1d29 parp:0x55ee size:0x0002
//  885:           ?BOMB bitfield: 0 0 0  codep:0x1d29 parp:0x55fa size:0x0003
//  886:      UNK_0x55ff bitfield: 0 0 0  codep:0x1d29 parp:0x55ff size:0x0002
//  887:      UNK_0x5603 bitfield: 0 0 0  codep:0x1d29 parp:0x5603 size:0x0002
//  888:      UNK_0x5607 bitfield: 0 0 0  codep:0x1d29 parp:0x5607 size:0x0002
//  889:           FILE# bitfield: 0 0 0  codep:0x1d29 parp:0x5613 size:0x0002
//  890:         RECORD# bitfield: 0 0 0  codep:0x1d29 parp:0x5621 size:0x0002
//  891:      UNK_0x5625 bitfield: 0 0 0  codep:0x1d29 parp:0x5625 size:0x0002
//  892:      UNK_0x5629 bitfield: 0 0 0  codep:0x1d29 parp:0x5629 size:0x0002
//  893:            CXSP bitfield: 0 0 0  codep:0x1d29 parp:0x5634 size:0x0002
//  894:      UNK_0x5638 bitfield: 0 0 0  codep:0x1d29 parp:0x5638 size:0x0006
//  895:             EDL bitfield: 0 0 0  codep:0x1d29 parp:0x5646 size:0x0002
//  896:         A-POSTU bitfield: 0 0 0  codep:0x1d29 parp:0x5654 size:0x0002
//  897:      UNK_0x5658 bitfield: 0 0 0  codep:0x1d29 parp:0x5658 size:0x0002
//  898:         P-RACES bitfield: 0 0 0  codep:0x1d29 parp:0x5666 size:0x0002
//  899:      UNK_0x566a bitfield: 0 0 0  codep:0x1d29 parp:0x566a size:0x0002
//  900:      UNK_0x566e bitfield: 0 0 0  codep:0x1d29 parp:0x566e size:0x0002
//  901:      UNK_0x5672 bitfield: 0 0 0  codep:0x1d29 parp:0x5672 size:0x0002
//  902:      UNK_0x5676 bitfield: 0 0 0  codep:0x1d29 parp:0x5676 size:0x0006
//  903:         'THROW- bitfield: 0 0 0  codep:0x1d29 parp:0x5688 size:0x0002
//  904:            'MAP bitfield: 0 0 0  codep:0x1d29 parp:0x5693 size:0x0002
//  905:         'TRAVER bitfield: 0 0 0  codep:0x1d29 parp:0x56a1 size:0x0002
//  906:          '?EXIT bitfield: 0 0 0  codep:0x1d29 parp:0x56ae size:0x0002
//  907:      UNK_0x56b2 bitfield: 0 0 0  codep:0x1d29 parp:0x56b2 size:0x0002
//  908:         '.FLUX- bitfield: 0 0 0  codep:0x1d29 parp:0x56c0 size:0x0002
//  909:             ?TD bitfield: 0 0 0  codep:0x1d29 parp:0x56ca size:0x0002
//  910:         ?LANDED bitfield: 0 0 0  codep:0x1d29 parp:0x56d8 size:0x0002
//  911:      UNK_0x56dc bitfield: 0 0 0  codep:0x1d29 parp:0x56dc size:0x0002
//  912:      UNK_0x56e0 bitfield: 0 0 0  codep:0x1d29 parp:0x56e0 size:0x0002
//  913:      UNK_0x56e4 bitfield: 0 0 0  codep:0x1d29 parp:0x56e4 size:0x0002
//  914:      UNK_0x56e8 bitfield: 0 0 0  codep:0x1d29 parp:0x56e8 size:0x0002
//  915:      UNK_0x56ec bitfield: 0 0 0  codep:0x1d29 parp:0x56ec size:0x0002
//  916:      UNK_0x56f0 bitfield: 0 0 0  codep:0x1d29 parp:0x56f0 size:0x0002
//  917:      UNK_0x56f4 bitfield: 0 0 0  codep:0x1d29 parp:0x56f4 size:0x0002
//  918:      UNK_0x56f8 bitfield: 0 0 0  codep:0x1d29 parp:0x56f8 size:0x0002
//  919:            -END bitfield: 0 0 0  codep:0x1d29 parp:0x5703 size:0x0002
//  920:             OV# bitfield: 0 0 0  codep:0x1d29 parp:0x570d size:0x0002
//  921:      UNK_0x5711 bitfield: 0 0 0  codep:0x1d29 parp:0x5711 size:0x0002
//  922:         REPAIRT bitfield: 0 0 0  codep:0x1d29 parp:0x571f size:0x0002
//  923:         HBUF-SE bitfield: 0 0 0  codep:0x1d29 parp:0x572d size:0x0002
//  924:         DBUF-SE bitfield: 0 0 0  codep:0x1d29 parp:0x573b size:0x0002
//  925:           COLOR bitfield: 0 0 0  codep:0x1d29 parp:0x5747 size:0x0002
//  926:          DCOLOR bitfield: 0 0 0  codep:0x1d29 parp:0x5754 size:0x0002
//  927:            YTAB bitfield: 0 0 0  codep:0x1d29 parp:0x575f size:0x0002
//  928:              Y1 bitfield: 0 0 0  codep:0x1d29 parp:0x5768 size:0x0002
//  929:              X1 bitfield: 0 0 0  codep:0x1d29 parp:0x5771 size:0x0002
//  930:              Y2 bitfield: 0 0 0  codep:0x1d29 parp:0x577a size:0x0002
//  931:              X2 bitfield: 0 0 0  codep:0x1d29 parp:0x5783 size:0x0002
//  932:           YTABL bitfield: 0 0 0  codep:0x1d29 parp:0x578f size:0x0002
//  933:         BUF-SEG bitfield: 0 0 0  codep:0x1d29 parp:0x579d size:0x0002
//  934:          RETURN bitfield: 0 0 0  codep:0x1d29 parp:0x57aa size:0x0002
//  935:            ?WIN bitfield: 0 0 0  codep:0x1d29 parp:0x57b5 size:0x0002
//  936:             #IN bitfield: 0 0 0  codep:0x1d29 parp:0x57bf size:0x0002
//  937:            #OUT bitfield: 0 0 0  codep:0x1d29 parp:0x57ca size:0x0002
//  938:             VIN bitfield: 0 0 0  codep:0x1d29 parp:0x57d4 size:0x0002
//  939:            VOUT bitfield: 0 0 0  codep:0x1d29 parp:0x57df size:0x0002
//  940:             OIN bitfield: 0 0 0  codep:0x1d29 parp:0x57e9 size:0x0002
//  941:            OOUT bitfield: 0 0 0  codep:0x1d29 parp:0x57f4 size:0x0002
//  942:           IVPTR bitfield: 0 0 0  codep:0x1d29 parp:0x5800 size:0x0002
//  943:           OVPTR bitfield: 0 0 0  codep:0x1d29 parp:0x580c size:0xffffffff
//  944:      UNK_0x580d bitfield: 0 0 0  codep:0xeb1d parp:0x580d size:0x0000
//  945:      UNK_0x580f bitfield: 0 0 0  codep:0xf806 parp:0x580f size:0xffffffff
//  946:           ICPTR bitfield: 0 0 0  codep:0x1d29 parp:0x5818 size:0x0002
//  947:           OCPTR bitfield: 0 0 0  codep:0x1d29 parp:0x5824 size:0x0002
//  948:            FLIP bitfield: 0 0 0  codep:0x1d29 parp:0x582f size:0x0002
//  949:          TACCPT bitfield: 0 0 0  codep:0x1d29 parp:0x583c size:0x0002
//  950:           TRJCT bitfield: 0 0 0  codep:0x1d29 parp:0x5848 size:0xfffffff9
//  951:      UNK_0x5843 bitfield: 0 0 0  codep:0x5254 parp:0x5843 size:0x0007
//  952:           ?OPEN bitfield: 0 0 0  codep:0x1d29 parp:0x5854 size:0x0002
//  953:           ?EVAL bitfield: 0 0 0  codep:0x1d29 parp:0x5860 size:0x0002
//  954:              SX bitfield: 0 0 0  codep:0x1d29 parp:0x5869 size:0x0002
//  955:              SY bitfield: 0 0 0  codep:0x1d29 parp:0x5872 size:0x0002
//  956:              SO bitfield: 0 0 0  codep:0x1d29 parp:0x587b size:0x0002
//  957:              PX bitfield: 0 0 0  codep:0x1d29 parp:0x5884 size:0x0002
//  958:              PY bitfield: 0 0 0  codep:0x1d29 parp:0x588d size:0x0002
//  959:              PO bitfield: 0 0 0  codep:0x1d29 parp:0x5896 size:0x0002
//  960:              IX bitfield: 0 0 0  codep:0x1d29 parp:0x589f size:0x0002
//  961:              IY bitfield: 0 0 0  codep:0x1d29 parp:0x58a8 size:0x0002
//  962:              IO bitfield: 0 0 0  codep:0x1d29 parp:0x58b1 size:0x0002
//  963:         COMPARE bitfield: 0 0 0  codep:0x1d29 parp:0x58bf size:0x0002
//  964:         X-INTER bitfield: 0 0 0  codep:0x1d29 parp:0x58cd size:0x0002
//  965:           ILEFT bitfield: 0 0 0  codep:0x1d29 parp:0x58d9 size:0x0002
//  966:          IRIGHT bitfield: 0 0 0  codep:0x1d29 parp:0x58e6 size:0x0002
//  967:          IBELOW bitfield: 0 0 0  codep:0x1d29 parp:0x58f3 size:0x0002
//  968:          IABOVE bitfield: 0 0 0  codep:0x1d29 parp:0x5900 size:0x0002
//  969:            'FLY bitfield: 0 0 0  codep:0x1d29 parp:0x590b size:0x0002
//  970:         'UNNEST bitfield: 0 0 0  codep:0x1d29 parp:0x5919 size:0x0002
//  971:            ?NEW bitfield: 0 0 0  codep:0x1d29 parp:0x5924 size:0x0002
//  972:          FORCED bitfield: 0 0 0  codep:0x1d29 parp:0x5931 size:0x0002
//  973:           #VESS bitfield: 0 0 0  codep:0x1d29 parp:0x593d size:0x0002
//  974:         CTCOLOR bitfield: 0 0 0  codep:0x1d29 parp:0x594b size:0x0002
//  975:          XSTART bitfield: 0 0 0  codep:0x1d29 parp:0x5958 size:0xfffffffb
//  976:      UNK_0x5955 bitfield: 0 0 0  codep:0x5241 parp:0x5955 size:0x0005
//  977:            XEND bitfield: 0 0 0  codep:0x1d29 parp:0x5963 size:0x0002
//  978:           YLINE bitfield: 0 0 0  codep:0x1d29 parp:0x596f size:0x0002
//  979:              ?3 bitfield: 0 0 0  codep:0x1d29 parp:0x5978 size:0x0002
//  980:          '.HUFF bitfield: 0 0 0  codep:0x1d29 parp:0x5985 size:0x0002
//  981:            SCAN bitfield: 0 0 0  codep:0x1d29 parp:0x5990 size:0x0002
//  982:            LMNT bitfield: 0 0 0  codep:0x1d29 parp:0x599b size:0x0002
//  983:           SCAN+ bitfield: 0 0 0  codep:0x1d29 parp:0x59a7 size:0x0002
//  984:            YMIN bitfield: 0 0 0  codep:0x1d29 parp:0x59b2 size:0x0002
//  985:            YMAX bitfield: 0 0 0  codep:0x1d29 parp:0x59bd size:0x0002
//  986:          #HORIZ bitfield: 0 0 0  codep:0x1d29 parp:0x59ca size:0x0002
//  987:           MOVED bitfield: 0 0 0  codep:0x1d29 parp:0x59d6 size:0x0002
//  988:          MEMSEG bitfield: 0 0 0  codep:0x1d29 parp:0x59e3 size:0x0002
//  989:          MEMOFF bitfield: 0 0 0  codep:0x1d29 parp:0x59f0 size:0x0002
//  990:         MONITOR bitfield: 0 0 0  codep:0x1d29 parp:0x59fe size:0x0002
//  991:         LOCRADI bitfield: 0 0 0  codep:0x1d29 parp:0x5a0c size:0x0002
//  992:         (ELIST) bitfield: 0 0 0  codep:0x1d29 parp:0x5a1a size:0x0003
//  993:           ICON^ bitfield: 0 0 0  codep:0x1d29 parp:0x5a27 size:0x0002
//  994:            PAL^ bitfield: 0 0 0  codep:0x1d29 parp:0x5a32 size:0x0002
//  995:            YBLT bitfield: 0 0 0  codep:0x1d29 parp:0x5a3d size:0x0002
//  996:            XBLT bitfield: 0 0 0  codep:0x1d29 parp:0x5a48 size:0x0002
//  997:         XORMODE bitfield: 0 0 0  codep:0x1d29 parp:0x5a56 size:0x0002
//  998:            LBLT bitfield: 0 0 0  codep:0x1d29 parp:0x5a61 size:0x0002
//  999:            WBLT bitfield: 0 0 0  codep:0x1d29 parp:0x5a6c size:0x0002
// 1000:            ABLT bitfield: 0 0 0  codep:0x1d29 parp:0x5a77 size:0x0002
// 1001:          BLTSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5a84 size:0x0002
// 1002:            BLT> bitfield: 0 0 0  codep:0x1d29 parp:0x5a8f size:0x0002
// 1003:         TILE-PT bitfield: 0 0 0  codep:0x1d29 parp:0x5a9d size:0x0002
// 1004:         ?FUEL-D bitfield: 0 0 0  codep:0x1d29 parp:0x5aab size:0x0002
// 1005:         ?G-AWAR bitfield: 0 0 0  codep:0x1d29 parp:0x5ab9 size:0x0002
// 1006:             GWF bitfield: 0 0 0  codep:0x1d29 parp:0x5ac3 size:0x0002
// 1007:           DXVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5acf size:0x0002
// 1008:           DYVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5adb size:0x0002
// 1009:            XCON bitfield: 0 0 0  codep:0x1d29 parp:0x5ae6 size:0x0002
// 1010:            YCON bitfield: 0 0 0  codep:0x1d29 parp:0x5af1 size:0x0002
// 1011:           DXCON bitfield: 0 0 0  codep:0x1d29 parp:0x5afd size:0x0002
// 1012:           DYCON bitfield: 0 0 0  codep:0x1d29 parp:0x5b09 size:0x0002
// 1013:            XVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5b14 size:0x0002
// 1014:            YVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5b1f size:0x0002
// 1015:         XLLDEST bitfield: 0 0 0  codep:0x1d29 parp:0x5b2d size:0x0002
// 1016:         YLLDEST bitfield: 0 0 0  codep:0x1d29 parp:0x5b3b size:0x0002
// 1017:         GLOBALS bitfield: 0 0 0  codep:0x1d29 parp:0x5b49 size:0x0002
// 1018:          '.CELL bitfield: 0 0 0  codep:0x1d29 parp:0x5b56 size:0x0002
// 1019:         '.BACKG bitfield: 0 0 0  codep:0x1d29 parp:0x5b64 size:0x0002
// 1020:         'ICON-P bitfield: 0 0 0  codep:0x1d29 parp:0x5b72 size:0x0002
// 1021:         'ICONBO bitfield: 0 0 0  codep:0x1d29 parp:0x5b80 size:0x0002
// 1022:             'CC bitfield: 0 0 0  codep:0x1d29 parp:0x5b8a size:0x0002
// 1023:      UNK_0x5b8e bitfield: 0 0 0  codep:0x1d29 parp:0x5b8e size:0x0002
// 1024:      UNK_0x5b92 bitfield: 0 0 0  codep:0x1d29 parp:0x5b92 size:0x0002
// 1025:      UNK_0x5b96 bitfield: 0 0 0  codep:0x1d29 parp:0x5b96 size:0x0002
// 1026:      UNK_0x5b9a bitfield: 0 0 0  codep:0x1d29 parp:0x5b9a size:0x0002
// 1027:      UNK_0x5b9e bitfield: 0 0 0  codep:0x1d29 parp:0x5b9e size:0x0002
// 1028:           IHSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5baa size:0x0002
// 1029:         IGLOBAL bitfield: 0 0 0  codep:0x1d29 parp:0x5bb8 size:0x0002
// 1030:          ILOCAL bitfield: 0 0 0  codep:0x1d29 parp:0x5bc5 size:0x0002
// 1031:          IINDEX bitfield: 0 0 0  codep:0x1d29 parp:0x5bd2 size:0x0002
// 1032:            XWLL bitfield: 0 0 0  codep:0x1d29 parp:0x5bdd size:0x0002
// 1033:            YWLL bitfield: 0 0 0  codep:0x1d29 parp:0x5be8 size:0x0002
// 1034:            XWUR bitfield: 0 0 0  codep:0x1d29 parp:0x5bf3 size:0x0002
// 1035:            YWUR bitfield: 0 0 0  codep:0x1d29 parp:0x5bfe size:0x0002
// 1036:         *GLOBAL bitfield: 0 0 0  codep:0x1d29 parp:0x5c0c size:0x0002
// 1037:         (STOP-C bitfield: 0 0 0  codep:0x1d29 parp:0x5c1a size:0x0002
// 1038:      UNK_0x5c1e bitfield: 0 0 0  codep:0x1d29 parp:0x5c1e size:0x0002
// 1039:         CONTEXT bitfield: 0 0 0  codep:0x1d29 parp:0x5c2c size:0x0002
// 1040:            %EFF bitfield: 0 0 0  codep:0x1d29 parp:0x5c37 size:0x0002
// 1041:           STORM bitfield: 0 0 0  codep:0x1d29 parp:0x5c43 size:0x0002
// 1042:            'TVT bitfield: 0 0 0  codep:0x1d29 parp:0x5c4e size:0x0002
// 1043:          'STORM bitfield: 0 0 0  codep:0x1d29 parp:0x5c5b size:0x0002
// 1044:             E/M bitfield: 0 0 0  codep:0x1d29 parp:0x5c65 size:0x0002
// 1045:         FORCEPT bitfield: 0 0 0  codep:0x1d29 parp:0x5c73 size:0x0002
// 1046:          #STORM bitfield: 0 0 0  codep:0x1d29 parp:0x5c80 size:0x000e
// 1047:      UNK_0x5c90 bitfield: 0 0 0  codep:0x1d29 parp:0x5c90 size:0x0002
// 1048:         PORTDAT bitfield: 0 0 0  codep:0x1d29 parp:0x5c9e size:0x0002
// 1049:           ?PORT bitfield: 0 0 0  codep:0x1d29 parp:0x5caa size:0x0002
// 1050:            TVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5cb5 size:0x0002
// 1051:            RVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5cc0 size:0x0002
// 1052:            BVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5ccb size:0x0002
// 1053:            LVIS bitfield: 0 0 0  codep:0x1d29 parp:0x5cd6 size:0x0002
// 1054:           LFSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5ce2 size:0x0002
// 1055:          LSYSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5cef size:0x0002
// 1056:          MSYSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5cfc size:0x0002
// 1057:          SSYSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5d09 size:0x0002
// 1058:         ?REPAIR bitfield: 0 0 0  codep:0x1d29 parp:0x5d17 size:0xfffffff4
// 1059:      UNK_0x5d0d bitfield: 0 0 0  codep:0x5cc4 parp:0x5d0d size:0x0005
// 1060:      UNK_0x5d14 bitfield: 0 0 0  codep:0x4941 parp:0x5d14 size:0x0002
// 1061:      UNK_0x5d18 bitfield: 0 0 0  codep:0x001d parp:0x5d18 size:0x0001
// 1062:           ?HEAL bitfield: 0 0 0  codep:0x1d29 parp:0x5d23 size:0xffffffff
// 1063:      UNK_0x5d24 bitfield: 0 0 0  codep:0x001d parp:0x5d24 size:0xffffffff
// 1064:      UNK_0x5d25 bitfield: 0 0 0  codep:0x0000 parp:0x5d25 size:0x0000
// 1065:           MXNEB bitfield: 0 0 0  codep:0x1d29 parp:0x5d2f size:0x0002
// 1066:         THIS-BU bitfield: 0 0 0  codep:0x1d29 parp:0x5d3d size:0x0002
// 1067:            NCRS bitfield: 0 0 0  codep:0x1d29 parp:0x5d48 size:0xfffffffa
// 1068:      UNK_0x5d44 bitfield: 0 0 0  codep:0x434e parp:0x5d44 size:0x0006
// 1069:            OCRS bitfield: 0 0 0  codep:0x1d29 parp:0x5d53 size:0x0002
// 1070:            WTOP bitfield: 0 0 0  codep:0x1d29 parp:0x5d5e size:0x0002
// 1071:         WBOTTOM bitfield: 0 0 0  codep:0x1d29 parp:0x5d6c size:0x0002
// 1072:          WRIGHT bitfield: 0 0 0  codep:0x1d29 parp:0x5d79 size:0x0002
// 1073:           WLEFT bitfield: 0 0 0  codep:0x1d29 parp:0x5d85 size:0x0002
// 1074:          WLINES bitfield: 0 0 0  codep:0x1d29 parp:0x5d92 size:0x0002
// 1075:          WCHARS bitfield: 0 0 0  codep:0x1d29 parp:0x5d9f size:0x0002
// 1076:         SKIP2NE bitfield: 0 0 0  codep:0x1d29 parp:0x5dad size:0x0002
// 1077:            -AIN bitfield: 0 0 0  codep:0x1d29 parp:0x5db8 size:0x0002
// 1078:         'LAUNCH bitfield: 0 0 0  codep:0x1d29 parp:0x5dc6 size:0x0002
// 1079:         ?ON-PLA bitfield: 0 0 0  codep:0x1d29 parp:0x5dd4 size:0x0002
// 1080:         ?RECALL bitfield: 0 0 0  codep:0x1d29 parp:0x5de2 size:0x0002
// 1081:            WMSG bitfield: 0 0 0  codep:0x1d29 parp:0x5ded size:0x0002
// 1082:             CTX bitfield: 0 0 0  codep:0x1d29 parp:0x5df7 size:0x0002
// 1083:             CTY bitfield: 0 0 0  codep:0x1d29 parp:0x5e01 size:0x0002
// 1084:           FTRIG bitfield: 0 0 0  codep:0x1d29 parp:0x5e0d size:0x0002
// 1085:           FQUIT bitfield: 0 0 0  codep:0x1d29 parp:0x5e19 size:0xfffffff6
// 1086:      UNK_0x5e11 bitfield: 0 0 0  codep:0x5e05 parp:0x5e11 size:0x000a
// 1087:            LKEY bitfield: 0 0 0  codep:0x1d29 parp:0x5e24 size:0xffffffff
// 1088:      UNK_0x5e25 bitfield: 0 0 0  codep:0x731d parp:0x5e25 size:0x0001
// 1089:         'BUTTON bitfield: 0 0 0  codep:0x1d29 parp:0x5e32 size:0x0002
// 1090:         BTN-REC bitfield: 0 0 0  codep:0x1d29 parp:0x5e40 size:0x0001
// 1091:      UNK_0x5e43 bitfield: 0 0 0  codep:0x3674 parp:0x5e43 size:0xffffffff
// 1092:         CRSCOLO bitfield: 0 0 0  codep:0x1d29 parp:0x5e4e size:0x0002
// 1093:      UNK_0x5e52 bitfield: 0 0 0  codep:0x1d29 parp:0x5e52 size:0x0002
// 1094:            ?>OP bitfield: 0 0 0  codep:0x1d29 parp:0x5e5d size:0x0002
// 1095:           'YANK bitfield: 0 0 0  codep:0x1d29 parp:0x5e69 size:0x0002
// 1096:             ?12 bitfield: 0 0 0  codep:0x1d29 parp:0x5e73 size:0x0002
// 1097:          '+VESS bitfield: 0 0 0  codep:0x1d29 parp:0x5e80 size:0x0002
// 1098:            ?NEB bitfield: 0 0 0  codep:0x1d29 parp:0x5e8b size:0x0002
// 1099:         FORCEKE bitfield: 0 0 0  codep:0x1d29 parp:0x5e99 size:0x0002
// 1100:            %VAL bitfield: 0 0 0  codep:0x1d29 parp:0x5ea4 size:0x0002
// 1101:         SCROLL- bitfield: 0 0 0  codep:0x1d29 parp:0x5eb2 size:0x0002
// 1102:         [#CACHE bitfield: 0 0 0  codep:0x1d29 parp:0x5ec0 size:0x0002
// 1103:          ESC-EN bitfield: 0 0 0  codep:0x1d29 parp:0x5ecd size:0x0002
// 1104:         ESC-PFA bitfield: 0 0 0  codep:0x1d29 parp:0x5edb size:0x0002
// 1105:         LINE-CO bitfield: 0 0 0  codep:0x1d29 parp:0x5ee9 size:0x0002
// 1106:          PM-PTR bitfield: 0 0 0  codep:0x1d29 parp:0x5ef6 size:0x0002
// 1107:      UNK_0x5efa bitfield: 0 0 0  codep:0x1d29 parp:0x5efa size:0x0002
// 1108:            SKEY bitfield: 0 0 0  codep:0x1d29 parp:0x5f05 size:0x0002
// 1109:            #AUX bitfield: 0 0 0  codep:0x1d29 parp:0x5f10 size:0xfffffffd
// 1110:      UNK_0x5f0f bitfield: 0 0 0  codep:0x29d8 parp:0x5f0f size:0x0000
// 1111:      UNK_0x5f11 bitfield: 0 0 0  codep:0x051d parp:0x5f11 size:0x0001
// 1112:            ?EGA bitfield: 0 0 0  codep:0x1d29 parp:0x5f1b size:0x0002
// 1113:            ?5:( bitfield: 0 0 0  codep:0x1d29 parp:0x5f26 size:0x0002
// 1114:            XABS bitfield: 0 0 0  codep:0x1d29 parp:0x5f31 size:0x0002
// 1115:            YABS bitfield: 0 0 0  codep:0x1d29 parp:0x5f3c size:0x0002
// 1116:         HEADING bitfield: 0 0 0  codep:0x1d29 parp:0x5f4a size:0x0002
// 1117:           3DSEG bitfield: 0 0 0  codep:0x1d29 parp:0x5f56 size:0x0002
// 1118:            VIN' bitfield: 0 0 0  codep:0x1d29 parp:0x5f61 size:0x0002
// 1119:         YSCREEN bitfield: 0 0 0  codep:0x1d29 parp:0x5f6f size:0x0002
// 1120:         XSCREEN bitfield: 0 0 0  codep:0x1d29 parp:0x5f7d size:0x0002
// 1121:         'COMBAT bitfield: 0 0 0  codep:0x1d29 parp:0x5f8b size:0x0002
// 1122:           'CEX+ bitfield: 0 0 0  codep:0x1d29 parp:0x5f97 size:0x0002
// 1123:            'CEX bitfield: 0 0 0  codep:0x1d29 parp:0x5fa2 size:0x0002
// 1124:            'WAX bitfield: 0 0 0  codep:0x1d29 parp:0x5fad size:0x0002
// 1125:         TERMINA bitfield: 0 0 0  codep:0x1d29 parp:0x5fbb size:0x0002
// 1126:         ?COMBAT bitfield: 0 0 0  codep:0x1d29 parp:0x5fc9 size:0x0002
// 1127:         ?ATTACK bitfield: 0 0 0  codep:0x1d29 parp:0x5fd7 size:0x0002
// 1128:            TBOX bitfield: 0 0 0  codep:0x1d29 parp:0x5fe2 size:0x0002
// 1129:      UNK_0x5fe6 bitfield: 0 0 0  codep:0x1d29 parp:0x5fe6 size:0x0002
// 1130:         STAR-HR bitfield: 0 0 0  codep:0x1d29 parp:0x5ff4 size:0x0002
// 1131:         STARDAT bitfield: 0 0 0  codep:0x1d29 parp:0x6002 size:0x0002
// 1132:         TIME-PA bitfield: 0 0 0  codep:0x1d29 parp:0x6010 size:0xfffffffd
// 1133:      UNK_0x600f bitfield: 0 0 0  codep:0x29c1 parp:0x600f size:0x0003
// 1134:         #CLRMAP bitfield: 0 0 0  codep:0x1d29 parp:0x601e size:0x0002
// 1135:            PLHI bitfield: 0 0 0  codep:0x1d29 parp:0x6029 size:0x0002
// 1136:         'PROCES bitfield: 0 0 0  codep:0x1d29 parp:0x6037 size:0x0002
// 1137:          CURSEG bitfield: 0 0 0  codep:0x1d29 parp:0x6044 size:0x0002
// 1138:         'SIMULA bitfield: 0 0 0  codep:0x1d29 parp:0x6052 size:0x0002
// 1139:         'ENDING bitfield: 0 0 0  codep:0x1d29 parp:0x6060 size:0x0002
// 1140:         [KEYINT bitfield: 0 0 0  codep:0x1d29 parp:0x606e size:0x0002
// 1141:            SIL^ bitfield: 0 0 0  codep:0x1d29 parp:0x6079 size:0x0002
// 1142:            PIC^ bitfield: 0 0 0  codep:0x1d29 parp:0x6084 size:0x0002
// 1143:         'CLEANU bitfield: 0 0 0  codep:0x1d29 parp:0x6092 size:0x0002
// 1144:         'KEY-CA bitfield: 0 0 0  codep:0x1d29 parp:0x60a0 size:0x0002
// 1145:         '.VITAL bitfield: 0 0 0  codep:0x1d29 parp:0x60ae size:0x0002
// 1146:          '.DATE bitfield: 0 0 0  codep:0x1d29 parp:0x60bb size:0x0002
// 1147:         '.VEHIC bitfield: 0 0 0  codep:0x1d29 parp:0x60c9 size:0x0002
// 1148:         'VEHICL bitfield: 0 0 0  codep:0x1d29 parp:0x60d7 size:0x0002
// 1149:         'CREW-C bitfield: 0 0 0  codep:0x1d29 parp:0x60e5 size:0x0002
// 1150:         'EXTERN bitfield: 0 0 0  codep:0x1d29 parp:0x60f3 size:0x0002
// 1151:         'REPAIR bitfield: 0 0 0  codep:0x1d29 parp:0x6101 size:0x0002
// 1152:         'TREATM bitfield: 0 0 0  codep:0x1d29 parp:0x610f size:0x0002
// 1153:         WEAPON- bitfield: 0 0 0  codep:0x1d29 parp:0x611d size:0x0002
// 1154:           ^CRIT bitfield: 0 0 0  codep:0x1d29 parp:0x6129 size:0x0002
// 1155:           ?FLAT bitfield: 0 0 0  codep:0x1d29 parp:0x6135 size:0x0002
// 1156:             1ST bitfield: 0 0 0  codep:0x1d29 parp:0x613f size:0x0002
// 1157:            ?MVT bitfield: 0 0 0  codep:0x1d29 parp:0x614a size:0x0002
// 1158:            ?SUP bitfield: 0 0 0  codep:0x1d29 parp:0x6155 size:0x0002
// 1159:           E-USE bitfield: 0 0 0  codep:0x1d29 parp:0x6161 size:0x0002
// 1160:         'ENERGY bitfield: 0 0 0  codep:0x1d29 parp:0x616f size:0x0002
// 1161:         ?SECURE bitfield: 0 0 0  codep:0x1d29 parp:0x617d size:0x0002
// 1162:            'STP bitfield: 0 0 0  codep:0x1d29 parp:0x6188 size:0x0002
// 1163:          'RSIDE bitfield: 0 0 0  codep:0x1d29 parp:0x6195 size:0x0002
// 1164:          DERROR bitfield: 0 0 0  codep:0x1d29 parp:0x61a2 size:0x0002
// 1165:             NLR bitfield: 0 0 0  codep:0x1d29 parp:0x61ac size:0x0002
// 1166:             OVT bitfield: 0 0 0  codep:0x53f7 parp:0x61b6 size:0x0016
// 1167:             ?10 bitfield: 0 0 0  codep:0x1d29 parp:0x61d4 size:0x0002
// 1168:            BITS bitfield: 0 0 0  codep:0x1d29 parp:0x61df size:0x0002
// 1169:           #BITS bitfield: 0 0 0  codep:0x1d29 parp:0x61eb size:0x0002
// 1170:              ?5 bitfield: 0 0 0  codep:0x1d29 parp:0x61f4 size:0x0002
// 1171:         SELLING bitfield: 0 0 0  codep:0x1d29 parp:0x6202 size:0x0002
// 1172:         BARTERI bitfield: 0 0 0  codep:0x1d29 parp:0x6210 size:0x0002
// 1173:          ?REPLY bitfield: 0 0 0  codep:0x1d29 parp:0x621d size:0x0002
// 1174:           PLAST bitfield: 0 0 0  codep:0x1d29 parp:0x6229 size:0x0002
// 1175:            PAST bitfield: 0 0 0  codep:0x1d29 parp:0x6234 size:0x0002
// 1176:            HAZE bitfield: 0 0 0  codep:0x1d29 parp:0x623f size:0x0004
// 1177:         ?CALLIN bitfield: 0 0 0  codep:0x1d29 parp:0x624f size:0x0002
// 1178:          STAGES bitfield: 0 0 0  codep:0x1d29 parp:0x625c size:0x000e
// 1179:           %SLUG bitfield: 0 0 0  codep:0x1d29 parp:0x6274 size:0x0002
// 1180:            ITEM bitfield: 0 0 0  codep:0x1d29 parp:0x627f size:0x0004
// 1181:           FSTUN bitfield: 0 0 0  codep:0x1d29 parp:0x628d size:0x0002
// 1182:         PATIENC bitfield: 0 0 0  codep:0x1d29 parp:0x629b size:0x0002
// 1183:            TMAP bitfield: 0 0 0  codep:0x1d29 parp:0x62a6 size:0x0004
// 1184:              :( bitfield: 0 0 0  codep:0x1d29 parp:0x62b1 size:0x0002
// 1185:         TIRED-T bitfield: 0 0 0  codep:0x1d29 parp:0x62bf size:0x0004
// 1186:         LASTREP bitfield: 0 0 0  codep:0x1d29 parp:0x62cf size:0x0004
// 1187:         TALKCOU bitfield: 0 0 0  codep:0x1d29 parp:0x62df size:0x0004
// 1188:          VSTIME bitfield: 0 0 0  codep:0x1d29 parp:0x62ee size:0x0004
// 1189:         10*CARG bitfield: 0 0 0  codep:0x1d29 parp:0x62fe size:0x0004
// 1190:         SENSE-A bitfield: 0 0 0  codep:0x1d29 parp:0x630e size:0x0004
// 1191:           EYEXY bitfield: 0 0 0  codep:0x1d29 parp:0x631c size:0x0004
// 1192:          WEAPXY bitfield: 0 0 0  codep:0x1d29 parp:0x632b size:0x0004
// 1193:          10*END bitfield: 0 0 0  codep:0x1d29 parp:0x633a size:0x0004
// 1194:         TOWFINE bitfield: 0 0 0  codep:0x1d29 parp:0x634a size:0x0004
// 1195:         ENC-TIM bitfield: 0 0 0  codep:0x1d29 parp:0x635a size:0x0004
// 1196:         NAV-TIM bitfield: 0 0 0  codep:0x1d29 parp:0x636a size:0x000a
// 1197:           STIME bitfield: 0 0 0  codep:0x1d29 parp:0x637e size:0x0004
// 1198:           ETIME bitfield: 0 0 0  codep:0x1d29 parp:0x638c size:0x0002
// 1199:      UNK_0x6390 bitfield: 0 0 0  codep:0x1d29 parp:0x6390 size:0x0004
// 1200:      UNK_0x6396 bitfield: 0 0 0  codep:0x1d29 parp:0x6396 size:0x0004
// 1201:      UNK_0x639c bitfield: 0 0 0  codep:0x1d29 parp:0x639c size:0x0004
// 1202:      UNK_0x63a2 bitfield: 0 0 0  codep:0x1d29 parp:0x63a2 size:0x0004
// 1203:         KEYTIME bitfield: 0 0 0  codep:0x1d29 parp:0x63b2 size:0x0004
// 1204:         LKEYTIM bitfield: 0 0 0  codep:0x1d29 parp:0x63c2 size:0x0004
// 1205:         (SCROLL bitfield: 0 0 0  codep:0x1d29 parp:0x63d2 size:0x0004
// 1206:         (ORIGIN bitfield: 0 0 0  codep:0x1d29 parp:0x63e2 size:0x0004
// 1207:         (SCROLL bitfield: 0 0 0  codep:0x1d29 parp:0x63f2 size:0x0004
// 1208:         REAL-MS bitfield: 0 0 0  codep:0x1d29 parp:0x6402 size:0x0004
// 1209:         LAST-UP bitfield: 0 0 0  codep:0x1d29 parp:0x6412 size:0x0004
// 1210:         XWLD:XP bitfield: 0 0 0  codep:0x1d29 parp:0x6422 size:0x0004
// 1211:         YWLD:YP bitfield: 0 0 0  codep:0x1d29 parp:0x6432 size:0x0004
// 1212:          ANCHOR bitfield: 0 0 0  codep:0x1d29 parp:0x6441 size:0x0004
// 1213:         OK-TALK bitfield: 0 0 0  codep:0x1d29 parp:0x6451 size:0x0004
// 1214:         TVEHICL bitfield: 0 0 0  codep:0x1d29 parp:0x6461 size:0x0004
// 1215:         TV-HOLD bitfield: 0 0 0  codep:0x1d29 parp:0x6471 size:0x0004
// 1216:         SUPER-B bitfield: 0 0 0  codep:0x1d29 parp:0x6481 size:0x0004
// 1217:         (SYSTEM bitfield: 0 0 0  codep:0x1d29 parp:0x6491 size:0x0004
// 1218:         (ORBIT) bitfield: 0 0 0  codep:0x1d29 parp:0x64a1 size:0x0004
// 1219:         (PLANET bitfield: 0 0 0  codep:0x1d29 parp:0x64b1 size:0x0004
// 1220:         (SURFAC bitfield: 0 0 0  codep:0x1d29 parp:0x64c1 size:0x0004
// 1221:         (ENCOUN bitfield: 0 0 0  codep:0x1d29 parp:0x64d1 size:0x0004
// 1222:         (SHIPBO bitfield: 0 0 0  codep:0x1d29 parp:0x64e1 size:0x0004
// 1223:         (AORIGI bitfield: 0 0 0  codep:0x1d29 parp:0x64f1 size:0x0004
// 1224:         THIS-RE bitfield: 0 0 0  codep:0x1d29 parp:0x6501 size:0x0004
// 1225:         (THIS-I bitfield: 0 0 0  codep:0x1d29 parp:0x6511 size:0x0004
// 1226:      UNK_0x6517 bitfield: 0 0 0  codep:0x1d29 parp:0x6517 size:0x0002
// 1227:      UNK_0x651b bitfield: 0 0 0  codep:0x1d29 parp:0x651b size:0x00ba
// 1228:            IBFR bitfield: 0 0 0  codep:0x1d29 parp:0x65de size:0x0111
// 1229:           LSCAN bitfield: 0 0 0  codep:0x1d29 parp:0x66f9 size:0x0054
// 1230:      UNK_0x674f bitfield: 0 0 0  codep:0x9c03 parp:0x674f size:0x013a
// 1231:      UNK_0x688b bitfield: 0 0 0  codep:0x1d29 parp:0x688b size:0x0040
// 1232:      UNK_0x68cd bitfield: 0 0 0  codep:0x1d29 parp:0x68cd size:0x0040
// 1233:      UNK_0x690f bitfield: 0 0 0  codep:0x1d29 parp:0x690f size:0x0040
// 1234:      UNK_0x6951 bitfield: 0 0 0  codep:0x1d29 parp:0x6951 size:0x0040
// 1235:            CMAP bitfield: 0 0 0  codep:0x1d29 parp:0x699a size:0x0040
// 1236:           ATIME bitfield: 0 0 0  codep:0x1d29 parp:0x69e4 size:0x0004
// 1237:           LRTRN bitfield: 0 0 0  codep:0x1d29 parp:0x69f2 size:0x0004
// 1238:         (TRADER bitfield: 0 0 0  codep:0x1d29 parp:0x6a02 size:0x0004
// 1239:         (THING) bitfield: 0 0 0  codep:0x1d29 parp:0x6a12 size:0x0004
// 1240:         BUY-LIS bitfield: 0 0 0  codep:0x3b74 parp:0x6a22 size:0x0004
// 1241:          #ETIME bitfield: 0 0 0  codep:0x1d29 parp:0x6a31 size:0x0004
// 1242:           NTIME bitfield: 0 0 0  codep:0x1d29 parp:0x6a3f size:0x0004
// 1243:            'UHL bitfield: 0 0 0  codep:0x1d29 parp:0x6a4c size:0x0002
// 1244:         MERCATO bitfield: 0 0 0  codep:0x4e6f parp:0x6a5a size:0x0008
// 1245:         CONANCH bitfield: 0 0 0  codep:0x4e6f parp:0x6a6e size:0x0008
// 1246:         CONTOUR bitfield: 0 0 0  codep:0x4e6f parp:0x6a82 size:0x0008
// 1247:         ICONIMA bitfield: 0 0 0  codep:0x4e6f parp:0x6a96 size:0x0008
// 1248:          VERTEX bitfield: 0 0 0  codep:0x4e6f parp:0x6aa9 size:0x0008
// 1249:           FACET bitfield: 0 0 0  codep:0x4e6f parp:0x6abb size:0x0008
// 1250:            FACE bitfield: 0 0 0  codep:0x4e6f parp:0x6acc size:0x0008
// 1251:           PPOLY bitfield: 0 0 0  codep:0x4e6f parp:0x6ade size:0x0008
// 1252:         GVERTEX bitfield: 0 0 0  codep:0x4e6f parp:0x6af2 size:0x0008
// 1253:           GPOLY bitfield: 0 0 0  codep:0x4e6f parp:0x6b04 size:0x0008
// 1254:         GRIDCOL bitfield: 0 0 0  codep:0x4e6f parp:0x6b18 size:0x0008
// 1255:          G1VERT bitfield: 0 0 0  codep:0x4e6f parp:0x6b2b size:0x0008
// 1256:         9X9COAR bitfield: 0 0 0  codep:0x4e6f parp:0x6b3f size:0x0008
// 1257:         9X9FINE bitfield: 0 0 0  codep:0x4e6f parp:0x6b53 size:0x0008
// 1258:         XFORMVE bitfield: 0 0 0  codep:0x4e6f parp:0x6b67 size:0x0008
// 1259:         IARRAYS bitfield: 0 0 0  codep:0x53f7 parp:0x6b7b size:0x001e
// 1260:         *STARPO bitfield: 0 0 0  codep:0x3b74 parp:0x6ba5 size:0x0004
// 1261:         *PERSON bitfield: 0 0 0  codep:0x3b74 parp:0x6bb5 size:0x0004
// 1262:         *SHIP-C bitfield: 0 0 0  codep:0x3b74 parp:0x6bc5 size:0x0004
// 1263:         *TRADE- bitfield: 0 0 0  codep:0x3b74 parp:0x6bd5 size:0x0004
// 1264:         *ITEMS- bitfield: 0 0 0  codep:0x3b74 parp:0x6be5 size:0x0004
// 1265:         *OPERAT bitfield: 0 0 0  codep:0x3b74 parp:0x6bf5 size:0x0004
// 1266:           *BANK bitfield: 0 0 0  codep:0x3b74 parp:0x6c03 size:0x0004
// 1267:         *STARSH bitfield: 0 0 0  codep:0x3b74 parp:0x6c13 size:0x0004
// 1268:            *EYE bitfield: 0 0 0  codep:0x3b74 parp:0x6c20 size:0x0004
// 1269:          *PLIST bitfield: 0 0 0  codep:0x3b74 parp:0x6c2f size:0x0004
// 1270:           *MISS bitfield: 0 0 0  codep:0x3b74 parp:0x6c3d size:0x0004
// 1271:           *MESS bitfield: 0 0 0  codep:0x3b74 parp:0x6c4b size:0x0004
// 1272:         'VERSIO bitfield: 0 0 0  codep:0x1d29 parp:0x6c5b size:0x0002
// 1273:           CTTOP bitfield: 0 0 0  codep:0x1d29 parp:0x6c67 size:0x0002
// 1274:           CTBOT bitfield: 0 0 0  codep:0x1d29 parp:0x6c73 size:0x0002
// 1275:          >0FONT bitfield: 0 0 0  codep:0x224c parp:0x6c80 size:0x0026
// 1276:         ?UPDATE bitfield: 0 0 0  codep:0x6cb2 parp:0x6cb2 size:0x0053
// 1277:              C! bitfield: 0 0 0  codep:0x224c parp:0x6d0c size:0x0006
// 1278:               ! bitfield: 0 0 0  codep:0x224c parp:0x6d18 size:0x0006
// 1279:              +! bitfield: 0 0 0  codep:0x224c parp:0x6d25 size:0x0006
// 1280:            1.5! bitfield: 0 0 0  codep:0x224c parp:0x6d34 size:0x0006
// 1281:              2! bitfield: 0 0 0  codep:0x224c parp:0x6d41 size:0x0006
// 1282:              D! bitfield: 0 0 0  codep:0x224c parp:0x6d4e size:0x0004
// 1283:              ON bitfield: 0 0 0  codep:0x224c parp:0x6d59 size:0x0006
// 1284:             099 bitfield: 0 0 0  codep:0x224c parp:0x6d67 size:0x0006
// 1285:            2OFF bitfield: 0 0 0  codep:0x224c parp:0x6d76 size:0x000c
// 1286:           CMOVE bitfield: 0 0 0  codep:0x224c parp:0x6d8c size:0x000a
// 1287:            FILL bitfield: 0 0 0  codep:0x224c parp:0x6d9f size:0x000c
// 1288:      UNK_0x6dad bitfield: 0 0 0  codep:0x224c parp:0x6dad size:0x000a
// 1289:           BLOCK bitfield: 0 0 0  codep:0x224c parp:0x6dc1 size:0x0006
// 1290:          LBLOCK bitfield: 0 0 0  codep:0x224c parp:0x6dd2 size:0x0006
// 1291:            LOAD bitfield: 0 0 0  codep:0x224c parp:0x6de1 size:0x000c
// 1292:           -TEXT bitfield: 0 0 0  codep:0x224c parp:0x6df7 size:0x001f
// 1293:      UNK_0x6e18 bitfield: 0 0 0  codep:0x0712 parp:0x6e18 size:0x0015
// 1294:              $= bitfield: 0 0 0  codep:0x224c parp:0x6e34 size:0x0022
// 1295:          SIGFLD bitfield: 0 0 0  codep:0x224c parp:0x6e61 size:0x0013
// 1296:         :SIGNAT bitfield: 0 0 0  codep:0x6e67 parp:0x6e80 size:0x0002
// 1297:         :TIMEST bitfield: 0 0 0  codep:0x6e67 parp:0x6e8e size:0x0002
// 1298:          :CKSUM bitfield: 0 0 0  codep:0x6e67 parp:0x6e9b size:0x0002
// 1299:           :SAVE bitfield: 0 0 0  codep:0x6e67 parp:0x6ea7 size:0x0002
// 1300:         :VERSIO bitfield: 0 0 0  codep:0x6e67 parp:0x6eb5 size:0x0002
// 1301:            THRU bitfield: 0 0 0  codep:0x224c parp:0x6ec0 size:0x0024
// 1302:          VA>BLK bitfield: 0 0 0  codep:0x6eef parp:0x6eef size:0x0019
// 1303:          VA>BUF bitfield: 0 0 0  codep:0x224c parp:0x6f13 size:0x0008
// 1304:      UNK_0x6f1d bitfield: 0 0 0  codep:0x224c parp:0x6f1d size:0x0008
// 1305:      UNK_0x6f27 bitfield: 0 0 0  codep:0x224c parp:0x6f27 size:0x002e
// 1306:      UNK_0x6f57 bitfield: 0 0 0  codep:0x224c parp:0x6f57 size:0x0006
// 1307:         MOUNTFI bitfield: 0 0 0  codep:0x224c parp:0x6f69 size:0x0032
// 1308:          MOUNTA bitfield: 0 0 0  codep:0x224c parp:0x6fa6 size:0x0019
// 1309:          MOUNTB bitfield: 0 0 0  codep:0x224c parp:0x6fca size:0x0019
// 1310:      UNK_0x6fe5 bitfield: 0 0 0  codep:0x224c parp:0x6fe5 size:0x0016
// 1311:      UNK_0x6ffd bitfield: 0 0 0  codep:0x224c parp:0x6ffd size:0x0010
// 1312:      UNK_0x700f bitfield: 0 0 0  codep:0x224c parp:0x700f size:0x0010
// 1313:      UNK_0x7021 bitfield: 0 0 0  codep:0x224c parp:0x7021 size:0x0052
// 1314:      UNK_0x7075 bitfield: 0 0 0  codep:0x224c parp:0x7075 size:0x000c
// 1315:      UNK_0x7083 bitfield: 0 0 0  codep:0x224c parp:0x7083 size:0x008e
// 1316:         MEM>DSK bitfield: 0 0 0  codep:0x224c parp:0x711d size:0x0006
// 1317:         MEM<DSK bitfield: 0 0 0  codep:0x224c parp:0x712f size:0x0006
// 1318:      UNK_0x7137 bitfield: 0 0 0  codep:0x7137 parp:0x7137 size:0x00ab
// 1319:         FILE-NA bitfield: 0 0 0  codep:0x71d1 parp:0x71ee size:0x0001
// 1320:         FILE-TY bitfield: 0 0 0  codep:0x71d1 parp:0x71fb size:0x0001
// 1321:         FILE-ST bitfield: 0 0 0  codep:0x71d1 parp:0x7208 size:0xfffffff8
// 1322:      UNK_0x7202 bitfield: 0 0 0  codep:0x4c49 parp:0x7202 size:0x0007
// 1323:         FILE-EN bitfield: 0 0 0  codep:0x71d1 parp:0x7215 size:0x0001
// 1324:         FILE-#R bitfield: 0 0 0  codep:0x71d1 parp:0x7222 size:0x0001
// 1325:         FILE-RL bitfield: 0 0 0  codep:0x71d1 parp:0x722f size:0x0001
// 1326:         FILE-SL bitfield: 0 0 0  codep:0x71d1 parp:0x723c size:0xffffffff
// 1327:      UNK_0x723d bitfield: 0 0 0  codep:0x1471 parp:0x723d size:0x0000
// 1328:      UNK_0x723f bitfield: 0 0 0  codep:0x723f parp:0x723f size:0x001a
// 1329:           FILE: bitfield: 0 0 0  codep:0x224c parp:0x7263 size:0x005c
// 1330:           >FILE bitfield: 0 0 0  codep:0x224c parp:0x72c9 size:0x0010
// 1331:           FILE< bitfield: 0 0 0  codep:0x224c parp:0x72e3 size:0x0010
// 1332:      UNK_0x72f5 bitfield: 0 0 0  codep:0x224c parp:0x72f5 size:0x000a
// 1333:      UNK_0x7301 bitfield: 0 0 0  codep:0x224c parp:0x7301 size:0x0020
// 1334:      UNK_0x7323 bitfield: 0 0 0  codep:0x224c parp:0x7323 size:0x0016
// 1335:         @RECORD bitfield: 0 0 0  codep:0x224c parp:0x7345 size:0x0022
// 1336:          AFIELD bitfield: 0 0 0  codep:0x224c parp:0x7372 size:0x0095
// 1337:          IFIELD bitfield: 0 0 0  codep:0x224c parp:0x7412 size:0x0000
// 1338:      UNK_0x7414 bitfield: 0 0 0  codep:0x064f parp:0x7414 size:0x0044
// 1339:         INST-SI bitfield: 0 0 0  codep:0x7420 parp:0x7464 size:0x0003
// 1340:         INST-PR bitfield: 0 0 0  codep:0x7420 parp:0x7473 size:0x0003
// 1341:         INST-OF bitfield: 0 0 0  codep:0x7420 parp:0x7482 size:0x0003
// 1342:         INST-CL bitfield: 0 0 0  codep:0x7420 parp:0x7491 size:0x0003
// 1343:         INST-SP bitfield: 0 0 0  codep:0x7420 parp:0x74a0 size:0x0003
// 1344:         INST-QT bitfield: 0 0 0  codep:0x7420 parp:0x74af size:0x0003
// 1345:          INST-X bitfield: 0 0 0  codep:0x7420 parp:0x74bd size:0x0003
// 1346:          INST-Y bitfield: 0 0 0  codep:0x7420 parp:0x74cb size:0x0003
// 1347:      UNK_0x74d0 bitfield: 0 0 0  codep:0x224c parp:0x74d0 size:0x0006
// 1348:      UNK_0x74d8 bitfield: 0 0 0  codep:0x224c parp:0x74d8 size:0x0006
// 1349:      UNK_0x74e0 bitfield: 0 0 0  codep:0x224c parp:0x74e0 size:0x0006
// 1350:      UNK_0x74e8 bitfield: 0 0 0  codep:0x224c parp:0x74e8 size:0x0006
// 1351:         !INST-S bitfield: 0 0 0  codep:0x224c parp:0x74fa size:0x0006
// 1352:      UNK_0x7502 bitfield: 0 0 0  codep:0x224c parp:0x7502 size:0x0006
// 1353:      UNK_0x750a bitfield: 0 0 0  codep:0x224c parp:0x750a size:0x0006
// 1354:      UNK_0x7512 bitfield: 0 0 0  codep:0x224c parp:0x7512 size:0x0006
// 1355:         @INST-C bitfield: 0 0 0  codep:0x224c parp:0x7524 size:0x0006
// 1356:         @INST-S bitfield: 0 0 0  codep:0x224c parp:0x7536 size:0x0006
// 1357:         =SPECIE bitfield: 0 0 0  codep:0x224c parp:0x7548 size:0x0006
// 1358:              >C bitfield: 0 0 0  codep:0x7555 parp:0x7555 size:0x0014
// 1359:              C> bitfield: 0 0 0  codep:0x7570 parp:0x7570 size:0x0016
// 1360:              CI bitfield: 0 0 0  codep:0x758d parp:0x758d size:0x0012
// 1361:           CDROP bitfield: 0 0 0  codep:0x224c parp:0x75a9 size:0x0006
// 1362:             CI' bitfield: 0 0 0  codep:0x224c parp:0x75b7 size:0x000a
// 1363:              CJ bitfield: 0 0 0  codep:0x224c parp:0x75c8 size:0x000a
// 1364:           COVER bitfield: 0 0 0  codep:0x224c parp:0x75dc size:0x0006
// 1365:          CDEPTH bitfield: 0 0 0  codep:0x75ed parp:0x75ed size:0x0012
// 1366:           ?NULL bitfield: 0 0 0  codep:0x224c parp:0x7609 size:0x0006
// 1367:          ?-NULL bitfield: 0 0 0  codep:0x224c parp:0x761a size:0x0006
// 1368:          ?CHILD bitfield: 0 0 0  codep:0x224c parp:0x762b size:0x0008
// 1369:      UNK_0x7635 bitfield: 0 0 0  codep:0x224c parp:0x7635 size:0x0008
// 1370:          !IADDR bitfield: 0 0 0  codep:0x224c parp:0x7648 size:0x0006
// 1371:      UNK_0x7650 bitfield: 0 0 0  codep:0x7650 parp:0x7650 size:0x000a
// 1372:      UNK_0x765c bitfield: 0 0 0  codep:0x224c parp:0x765c size:0x0014
// 1373:      UNK_0x7672 bitfield: 0 0 0  codep:0x224c parp:0x7672 size:0x0014
// 1374:      UNK_0x7688 bitfield: 0 0 0  codep:0x224c parp:0x7688 size:0x0006
// 1375:         PRIORIT bitfield: 0 0 0  codep:0x769a parp:0x769a size:0x0032
// 1376:      UNK_0x76ce bitfield: 0 0 0  codep:0x224c parp:0x76ce size:0x0032
// 1377:      UNK_0x7702 bitfield: 0 0 0  codep:0x224c parp:0x7702 size:0x0032
// 1378:      UNK_0x7736 bitfield: 0 0 0  codep:0x224c parp:0x7736 size:0x0066
// 1379:      UNK_0x779e bitfield: 0 0 0  codep:0x224c parp:0x779e size:0x0006
// 1380:      UNK_0x77a6 bitfield: 0 0 0  codep:0x224c parp:0x77a6 size:0x0012
// 1381:      UNK_0x77ba bitfield: 0 0 0  codep:0x224c parp:0x77ba size:0x001a
// 1382:      UNK_0x77d6 bitfield: 0 0 0  codep:0x224c parp:0x77d6 size:0x003e
// 1383:      UNK_0x7816 bitfield: 0 0 0  codep:0x224c parp:0x7816 size:0x007a
// 1384:      UNK_0x7892 bitfield: 0 0 0  codep:0x224c parp:0x7892 size:0x001c
// 1385:            1BTN bitfield: 0 0 0  codep:0x7394 parp:0x78b7 size:0x0006
// 1386:         AFIELD: bitfield: 0 0 0  codep:0x224c parp:0x78c9 size:0x0028
// 1387:         IFIELD: bitfield: 0 0 0  codep:0x224c parp:0x78fd size:0x0014
// 1388:            #BTN bitfield: 0 0 0  codep:0x7394 parp:0x791a size:0x0006
// 1389:      UNK_0x7922 bitfield: 0 0 0  codep:0x224c parp:0x7922 size:0x0074
// 1390:         SET-CUR bitfield: 0 0 0  codep:0x224c parp:0x79a2 size:0x0034
// 1391:          ICLOSE bitfield: 0 0 0  codep:0x224c parp:0x79e1 size:0x0020
// 1392:          *CLOSE bitfield: 0 0 0  codep:0x224c parp:0x7a0c size:0x000c
// 1393:            >C+S bitfield: 0 0 0  codep:0x224c parp:0x7a21 size:0x0006
// 1394:           @>C+S bitfield: 0 0 0  codep:0x224c parp:0x7a31 size:0x0006
// 1395:           IOPEN bitfield: 0 0 0  codep:0x224c parp:0x7a41 size:0x000c
// 1396:            CCLR bitfield: 0 0 0  codep:0x224c parp:0x7a56 size:0x0014
// 1397:      UNK_0x7a6c bitfield: 0 0 0  codep:0x224c parp:0x7a6c size:0x0006
// 1398:           ?LAST bitfield: 0 0 0  codep:0x224c parp:0x7a7c size:0x0008
// 1399:          ?FIRST bitfield: 0 0 0  codep:0x224c parp:0x7a8f size:0x0008
// 1400:             >C+ bitfield: 0 0 0  codep:0x224c parp:0x7a9f size:0x000a
// 1401:           INEXT bitfield: 0 0 0  codep:0x224c parp:0x7ab3 size:0x000e
// 1402:           IPREV bitfield: 0 0 0  codep:0x224c parp:0x7acb size:0x000e
// 1403:          IFIRST bitfield: 0 0 0  codep:0x224c parp:0x7ae4 size:0x0008
// 1404:           ILAST bitfield: 0 0 0  codep:0x224c parp:0x7af6 size:0x0006
// 1405:            VCLR bitfield: 0 0 0  codep:0x224c parp:0x7b05 size:0x0008
// 1406:              >V bitfield: 0 0 0  codep:0x7b14 parp:0x7b14 size:0x0010
// 1407:              V> bitfield: 0 0 0  codep:0x7b2b parp:0x7b2b size:0x0010
// 1408:              VI bitfield: 0 0 0  codep:0x7b42 parp:0x7b42 size:0x002e
// 1409:         SAVE-BU bitfield: 0 0 0  codep:0x224c parp:0x7b7c size:0x0006
// 1410:           FLUSH bitfield: 0 0 0  codep:0x224c parp:0x7b8c size:0x0006
// 1411:              MT bitfield: 0 0 0  codep:0x224c parp:0x7b99 size:0x0006
// 1412:         IINSERT bitfield: 0 0 0  codep:0x224c parp:0x7bab size:0x003c
// 1413:         <INSERT bitfield: 0 0 0  codep:0x224c parp:0x7bf3 size:0x001a
// 1414:         >INSERT bitfield: 0 0 0  codep:0x224c parp:0x7c19 size:0x000a
// 1415:         IEXTRAC bitfield: 0 0 0  codep:0x224c parp:0x7c2f size:0x0040
// 1416:      UNK_0x7c71 bitfield: 0 0 0  codep:0x224c parp:0x7c71 size:0x0006
// 1417:         @NEWSPA bitfield: 0 0 0  codep:0x224c parp:0x7c83 size:0x0006
// 1418:         !NEWSPA bitfield: 0 0 0  codep:0x224c parp:0x7c95 size:0x0006
// 1419:      UNK_0x7c9d bitfield: 0 0 0  codep:0x224c parp:0x7c9d size:0x000a
// 1420:         MAXSPAC bitfield: 0 0 0  codep:0x224c parp:0x7cb3 size:0x000e
// 1421:      UNK_0x7cc3 bitfield: 0 0 0  codep:0x224c parp:0x7cc3 size:0x0010
// 1422:            FLD@ bitfield: 0 0 0  codep:0x4b3b parp:0x7cdc size:0x0010
// 1423:            FLD! bitfield: 0 0 0  codep:0x4b3b parp:0x7cf5 size:0x0010
// 1424:           IFLD@ bitfield: 0 0 0  codep:0x224c parp:0x7d0f size:0x0010
// 1425:           IFLD! bitfield: 0 0 0  codep:0x224c parp:0x7d29 size:0x001c
// 1426:         ?CLASS/ bitfield: 0 0 0  codep:0x224c parp:0x7d51 size:0x0020
// 1427:      UNK_0x7d73 bitfield: 0 0 0  codep:0x224c parp:0x7d73 size:0x0006
// 1428:      UNK_0x7d7b bitfield: 0 0 0  codep:0x224c parp:0x7d7b size:0x0006
// 1429:      UNK_0x7d83 bitfield: 0 0 0  codep:0x224c parp:0x7d83 size:0x0006
// 1430:             MAP bitfield: 0 0 0  codep:0x224c parp:0x7d91 size:0x0006
// 1431:      UNK_0x7d99 bitfield: 0 0 0  codep:0x224c parp:0x7d99 size:0x000a
// 1432:      UNK_0x7da5 bitfield: 0 0 0  codep:0x224c parp:0x7da5 size:0x0008
// 1433:          SELECT bitfield: 0 0 0  codep:0x224c parp:0x7db8 size:0x0028
// 1434:         ?>FIRST bitfield: 0 0 0  codep:0x224c parp:0x7dec size:0x000c
// 1435:         SELECT- bitfield: 0 0 0  codep:0x224c parp:0x7e04 size:0x0007
// 1436:      UNK_0x7e0d bitfield: 0 0 0  codep:0xac7d parp:0x7e0d size:0x002d
// 1437:      UNK_0x7e3c bitfield: 0 0 0  codep:0x224c parp:0x7e3c size:0x0008
// 1438:           IFIND bitfield: 0 0 0  codep:0x224c parp:0x7e4e size:0x0008
// 1439:      UNK_0x7e58 bitfield: 0 0 0  codep:0x224c parp:0x7e58 size:0x0018
// 1440:         MAP>LEA bitfield: 0 0 0  codep:0x224c parp:0x7e7c size:0x0018
// 1441:         MAKE1ST bitfield: 0 0 0  codep:0x224c parp:0x7ea0 size:0x0012
// 1442:      UNK_0x7eb4 bitfield: 0 0 0  codep:0x224c parp:0x7eb4 size:0x0032
// 1443:         >INACTI bitfield: 0 0 0  codep:0x224c parp:0x7ef2 size:0x0019
// 1444:      UNK_0x7f0d bitfield: 0 0 0  codep:0x4c16 parp:0x7f0d size:0x0007
// 1445:         IDELETE bitfield: 0 0 0  codep:0x224c parp:0x7f20 size:0x002a
// 1446:      UNK_0x7f4c bitfield: 0 0 0  codep:0x224c parp:0x7f4c size:0x003a
// 1447:             ALL bitfield: 0 0 0  codep:0x224c parp:0x7f8e size:0x0014
// 1448:            EACH bitfield: 0 0 0  codep:0x224c parp:0x7fab size:0x0010
// 1449:      UNK_0x7fbd bitfield: 0 0 0  codep:0x224c parp:0x7fbd size:0x0006
// 1450:         NULLPOI bitfield: 0 0 0  codep:0x224c parp:0x7fcf size:0x000e
// 1451:      UNK_0x7fdf bitfield: 0 0 0  codep:0x224c parp:0x7fdf size:0x0014
// 1452:      UNK_0x7ff5 bitfield: 0 0 0  codep:0x224c parp:0x7ff5 size:0x0034
// 1453:      UNK_0x802b bitfield: 0 0 0  codep:0x224c parp:0x802b size:0x0040
// 1454:         ?>MAXSP bitfield: 0 0 0  codep:0x224c parp:0x8077 size:0x0014
// 1455:      UNK_0x808d bitfield: 0 0 0  codep:0x224c parp:0x808d size:0x0038
// 1456:      UNK_0x80c7 bitfield: 0 0 0  codep:0x224c parp:0x80c7 size:0x0042
// 1457:         SET?REU bitfield: 0 0 0  codep:0x4b3b parp:0x8115 size:0x0044
// 1458:         VICREAT bitfield: 0 0 0  codep:0x224c parp:0x8165 size:0x003a
// 1459:         ICREATE bitfield: 0 0 0  codep:0x224c parp:0x81ab size:0x0048
// 1460:         BOX-NAM bitfield: 0 0 0  codep:0x7394 parp:0x81ff size:0x0006
// 1461:         *CREATE bitfield: 0 0 0  codep:0x224c parp:0x8211 size:0x0026
// 1462:              .C bitfield: 0 0 0  codep:0x224c parp:0x823e size:0x0039
// 1463:      UNK_0x8279 bitfield: 0 0 0  codep:0x224c parp:0x8279 size:0x0006
// 1464:         OV-CANC bitfield: 0 0 0  codep:0x224c parp:0x828b size:0x003a
// 1465:      UNK_0x82c7 bitfield: 0 0 0  codep:0x224c parp:0x82c7 size:0x000a
// 1466:      UNK_0x82d3 bitfield: 0 0 0  codep:0x224c parp:0x82d3 size:0x0019
// 1467:      UNK_0x82ee bitfield: 0 0 0  codep:0x224c parp:0x82ee size:0x0027
// 1468:      UNK_0x8317 bitfield: 0 0 0  codep:0x224c parp:0x8317 size:0x006c
// 1469:         SAVE-OV bitfield: 0 0 0  codep:0x224c parp:0x838f size:0x0034
// 1470:         OVERLAY bitfield: 0 0 0  codep:0x224c parp:0x83cf size:0x0017
// 1471:      UNK_0x83e8 bitfield: 0 0 0  codep:0x224c parp:0x83e8 size:0x0018
// 1472:         OPEN-OV bitfield: 0 0 0  codep:0x224c parp:0x840c size:0x0038
// 1473:      UNK_0x8446 bitfield: 0 0 0  codep:0x1f93 parp:0x8446 size:0x0018
// 1474:      UNK_0x8460 bitfield: 0 0 0  codep:0x224c parp:0x8460 size:0x0058
// 1475:         CLOSE-O bitfield: 0 0 0  codep:0x224c parp:0x84c4 size:0x000c
// 1476:          MODULE bitfield: 0 0 0  codep:0x224c parp:0x84db size:0x0010
// 1477:           GRSEG bitfield: 0 0 0  codep:0x1d29 parp:0x84f5 size:0x0002
// 1478:         SHL-BIT bitfield: 0 0 0  codep:0x8503 parp:0x8503 size:0x000c
// 1479:      UNK_0x8511 bitfield: 0 0 0  codep:0x1d29 parp:0x8511 size:0x0005
// 1480:            1PIX bitfield: 0 0 0  codep:0x224c parp:0x851f size:0x000e
// 1481:            2PIX bitfield: 0 0 0  codep:0x224c parp:0x8536 size:0x000e
// 1482:          GRCALL bitfield: 0 0 0  codep:0x854f parp:0x854f size:0xfffffff6
// 1483:      UNK_0x8547 bitfield: 0 0 0  codep:0x8685 parp:0x8547 size:0x0027
// 1484:          PAD|16 bitfield: 0 0 0  codep:0x224c parp:0x8579 size:0x000a
// 1485:         PAD>SEG bitfield: 0 0 0  codep:0x224c parp:0x858f size:0x0006
// 1486:      UNK_0x8597 bitfield: 0 0 0  codep:0x224c parp:0x8597 size:0x000c
// 1487:           @MODE bitfield: 0 0 0  codep:0x224c parp:0x85ad size:0x0034
// 1488:         ?HERCUL bitfield: 0 0 0  codep:0x224c parp:0x85ed size:0x000a
// 1489:            ?VGA bitfield: 0 0 0  codep:0x224c parp:0x8600 size:0x0008
// 1490:            ?CGA bitfield: 0 0 0  codep:0x224c parp:0x8611 size:0x0008
// 1491:            CCGA bitfield: 0 0 0  codep:0x1d29 parp:0x8622 size:0x0010
// 1492:            PCGA bitfield: 0 0 0  codep:0x1d29 parp:0x863b size:0x0010
// 1493:           NBCLR bitfield: 0 0 0  codep:0x224c parp:0x8655 size:0x0010
// 1494:            ?XOR bitfield: 0 0 0  codep:0x866e parp:0x866e size:0x0001
// 1495:      UNK_0x8671 bitfield: 0 0 0  codep:0x36ff parp:0x8671 size:0x0023
// 1496:          !COLOR bitfield: 0 0 0  codep:0x224c parp:0x869f size:0x0048
// 1497:          @COLOR bitfield: 0 0 0  codep:0x224c parp:0x86f2 size:0x0006
// 1498:      UNK_0x86fa bitfield: 0 0 0  codep:0x224c parp:0x86fa size:0x0008
// 1499:          RNDCLR bitfield: 0 0 0  codep:0x224c parp:0x870d size:0x0034
// 1500:      UNK_0x8743 bitfield: 0 0 0  codep:0x0f20 parp:0x8743 size:0x002a
// 1501:         MON>MEM bitfield: 0 0 0  codep:0x4b3b parp:0x8779 size:0x0010
// 1502:         SETDBUF bitfield: 0 0 0  codep:0x224c parp:0x8795 size:0x0026
// 1503:      UNK_0x87bd bitfield: 0 0 0  codep:0x224c parp:0x87bd size:0x000c
// 1504:      UNK_0x87cb bitfield: 0 0 0  codep:0x224c parp:0x87cb size:0x0026
// 1505:         L@PIXEL bitfield: 0 0 0  codep:0x87fd parp:0x87fd size:0x0011
// 1506:           LPLOT bitfield: 0 0 0  codep:0x8818 parp:0x8818 size:0x0027
// 1507:          LXPLOT bitfield: 0 0 0  codep:0x884a parp:0x884a size:0xfffffffa
// 1508:      UNK_0x8846 bitfield: 0 0 0  codep:0x4c50 parp:0x8846 size:0x002b
// 1509:      UNK_0x8873 bitfield: 0 0 0  codep:0x224c parp:0x8873 size:0x0020
// 1510:           BFILL bitfield: 0 0 0  codep:0x224c parp:0x889d size:0x0014
// 1511:            DARK bitfield: 0 0 0  codep:0x224c parp:0x88ba size:0x0018
// 1512:      UNK_0x88d4 bitfield: 0 0 0  codep:0x224c parp:0x88d4 size:0x001e
// 1513:           LLINE bitfield: 0 0 0  codep:0x224c parp:0x88fc size:0x000e
// 1514:           FCIRC bitfield: 0 0 0  codep:0x8914 parp:0x8914 size:0xfffffff8
// 1515:      UNK_0x890e bitfield: 0 0 0  codep:0x4685 parp:0x890e size:0x0001
// 1516:      UNK_0x8911 bitfield: 0 0 0  codep:0x5249 parp:0x8911 size:0x0018
// 1517:      UNK_0x892b bitfield: 0 0 0  codep:0x224c parp:0x892b size:0x0010
// 1518:      UNK_0x893d bitfield: 0 0 0  codep:0x224c parp:0x893d size:0x0006
// 1519:      UNK_0x8945 bitfield: 0 0 0  codep:0x6d0a parp:0x8945 size:0xffffffff
// 1520:      UNK_0x8946 bitfield: 0 0 0  codep:0x976d parp:0x8946 size:0xffffffff
// 1521:      UNK_0x8947 bitfield: 0 0 0  codep:0x3b97 parp:0x8947 size:0x000a
// 1522:      UNK_0x8953 bitfield: 0 0 0  codep:0x8953 parp:0x8953 size:0x0015
// 1523:         .CIRCLE bitfield: 0 0 0  codep:0x224c parp:0x8974 size:0x0006
// 1524:         FILLCIR bitfield: 0 0 0  codep:0x224c parp:0x8986 size:0x0006
// 1525:         .ELLIPS bitfield: 0 0 0  codep:0x224c parp:0x8998 size:0x0006
// 1526:         FILLELL bitfield: 0 0 0  codep:0x224c parp:0x89aa size:0x003b
// 1527:           HLINE bitfield: 0 0 0  codep:0x89ef parp:0x89ef size:0x0058
// 1528:      UNK_0x8a49 bitfield: 0 0 0  codep:0x224c parp:0x8a49 size:0x002c
// 1529:          >1FONT bitfield: 0 0 0  codep:0x224c parp:0x8a80 size:0x0006
// 1530:          >2FONT bitfield: 0 0 0  codep:0x224c parp:0x8a91 size:0x0006
// 1531:          >3FONT bitfield: 0 0 0  codep:0x224c parp:0x8aa2 size:0x0006
// 1532:          >0FONT bitfield: 0 0 0  codep:0x224c parp:0x8ab3 size:0x0008
// 1533:           LDPAL bitfield: 0 0 0  codep:0x224c parp:0x8ac5 size:0x001c
// 1534:      UNK_0x8ae3 bitfield: 0 0 0  codep:0x224c parp:0x8ae3 size:0x000c
// 1535:             :8> bitfield: 0 0 0  codep:0x224c parp:0x8af7 size:0x0006
// 1536:             )8> bitfield: 0 0 0  codep:0x224c parp:0x8b05 size:0x0006
// 1537:            2<8> bitfield: 0 0 0  codep:0x224c parp:0x8b14 size:0x0006
// 1538:             <8> bitfield: 0 0 0  codep:0x224c parp:0x8b22 size:0x0006
// 1539:            HERC bitfield: 0 0 0  codep:0x224c parp:0x8b31 size:0x0010
// 1540:         #VECTOR bitfield: 0 0 0  codep:0x2214 parp:0x8b4d size:0x0002 = 0x6
// 1541:         TREJECT bitfield: 0 0 0  codep:0x1d29 parp:0x8b5b size:0x0006
// 1542:         CLIPPER bitfield: 0 0 0  codep:0x8b6d parp:0x8b6d size:0x000a
// 1543:         SCANPOL bitfield: 0 0 0  codep:0x8b83 parp:0x8b83 size:0x000a
// 1544:         >PLANES bitfield: 0 0 0  codep:0x8b99 parp:0x8b99 size:0x000a
// 1545:           LFILL bitfield: 0 0 0  codep:0x8bad parp:0x8bad size:0x000a
// 1546:             BLT bitfield: 0 0 0  codep:0x8bbf parp:0x8bbf size:0x000a
// 1547:         LFILLPO bitfield: 0 0 0  codep:0x224c parp:0x8bd5 size:0x000e
// 1548:      UNK_0x8be5 bitfield: 0 0 0  codep:0x224c parp:0x8be5 size:0x0020
// 1549:         SETCLIP bitfield: 0 0 0  codep:0x224c parp:0x8c11 size:0xfffffffb
// 1550:      UNK_0x8c0e bitfield: 0 0 0  codep:0x494c parp:0x8c0e size:0x0047
// 1551:         VDCLIPS bitfield: 0 0 0  codep:0x224c parp:0x8c61 size:0x0012
// 1552:         VCLIPSE bitfield: 0 0 0  codep:0x224c parp:0x8c7f size:0x0010
// 1553:         DCLIPSE bitfield: 0 0 0  codep:0x224c parp:0x8c9b size:0x0010
// 1554:      UNK_0x8cad bitfield: 0 0 0  codep:0x1d29 parp:0x8cad size:0x000c
// 1555:      UNK_0x8cbb bitfield: 0 0 0  codep:0x224c parp:0x8cbb size:0x0022
// 1556:      UNK_0x8cdf bitfield: 0 0 0  codep:0x224c parp:0x8cdf size:0x0024
// 1557:      UNK_0x8d05 bitfield: 0 0 0  codep:0x224c parp:0x8d05 size:0x0010
// 1558:         >MAINVI bitfield: 0 0 0  codep:0x224c parp:0x8d21 size:0x001a
// 1559:         >DISPLA bitfield: 0 0 0  codep:0x224c parp:0x8d47 size:0x0018
// 1560:         >HIDDEN bitfield: 0 0 0  codep:0x224c parp:0x8d6b size:0x0018
// 1561:           R2OVL bitfield: 0 0 0  codep:0x2214 parp:0x8d8d size:0x000a = 0x8d90
// 1562:      UNK_0x8d99 bitfield: 0 0 0  codep:0x8d99 parp:0x8d99 size:0x000a
// 1563:      UNK_0x8da5 bitfield: 0 0 0  codep:0x224c parp:0x8da5 size:0x001e
// 1564:      UNK_0x8dc5 bitfield: 0 0 0  codep:0x224c parp:0x8dc5 size:0x000c
// 1565:             SRC bitfield: 0 0 0  codep:0x1d29 parp:0x8dd9 size:0x0002
// 1566:             DST bitfield: 0 0 0  codep:0x1d29 parp:0x8de3 size:0x0002
// 1567:           SEGME bitfield: 0 0 0  codep:0x1d29 parp:0x8def size:0x0002
// 1568:             PLZ bitfield: 0 0 0  codep:0x1d29 parp:0x8df9 size:0x0002
// 1569:           XPCOL bitfield: 0 0 0  codep:0x1d29 parp:0x8e05 size:0x0002
// 1570:            .RAW bitfield: 0 0 0  codep:0x224c parp:0x8e10 size:0x0036
// 1571:         DISPLAY bitfield: 0 0 0  codep:0x8e52 parp:0x8e52 size:0x0018
// 1572:          >ALPHA bitfield: 0 0 0  codep:0x224c parp:0x8e75 size:0x000e
// 1573:              >A bitfield: 0 0 0  codep:0x224c parp:0x8e8a size:0x0004
// 1574:          >LORES bitfield: 0 0 0  codep:0x224c parp:0x8e99 size:0x0026
// 1575:      UNK_0x8ec1 bitfield: 0 0 0  codep:0x224c parp:0x8ec1 size:0x0038
// 1576:      UNK_0x8efb bitfield: 0 0 0  codep:0x224c parp:0x8efb size:0x0016
// 1577:             D>H bitfield: 0 0 0  codep:0x224c parp:0x8f19 size:0x000c
// 1578:             H>D bitfield: 0 0 0  codep:0x224c parp:0x8f2d size:0x000c
// 1579:         SAVE-SC bitfield: 0 0 0  codep:0x224c parp:0x8f45 size:0x0006
// 1580:         SCR-RES bitfield: 0 0 0  codep:0x224c parp:0x8f57 size:0x0006
// 1581:         V>DISPL bitfield: 0 0 0  codep:0x224c parp:0x8f69 size:0x003a
// 1582:      UNK_0x8fa5 bitfield: 0 0 0  codep:0x224c parp:0x8fa5 size:0x0026
// 1583:      UNK_0x8fcd bitfield: 0 0 0  codep:0x224c parp:0x8fcd size:0x0010
// 1584:         LCOPYBL bitfield: 0 0 0  codep:0x224c parp:0x8fe9 size:0x0022
// 1585:      UNK_0x900d bitfield: 0 0 0  codep:0x0bae parp:0x900d size:0xffffffff
// 1586:      UNK_0x900e bitfield: 0 0 0  codep:0x410b parp:0x900e size:0xffffffff
// 1587:      UNK_0x900f bitfield: 0 0 0  codep:0x0e41 parp:0x900f size:0x0000
// 1588:      UNK_0x9011 bitfield: 0 0 0  codep:0x8ef9 parp:0x9011 size:0x0001
// 1589:      UNK_0x9014 bitfield: 0 0 0  codep:0x458f parp:0x9014 size:0xffffffff
// 1590:      UNK_0x9015 bitfield: 0 0 0  codep:0x8d45 parp:0x9015 size:0x0002
// 1591:           (BYE) bitfield: 0 0 0  codep:0x224c parp:0x9021 size:0x0018
// 1592:             BYE bitfield: 0 0 0  codep:0x224c parp:0x9041 size:0xfffffff9
// 1593:      UNK_0x903c bitfield: 0 0 0  codep:0x8390 parp:0x903c size:0x0006
// 1594:      UNK_0x9044 bitfield: 0 0 0  codep:0x3746 parp:0x9044 size:0x0003
// 1595:      UNK_0x9049 bitfield: 0 0 0  codep:0x224c parp:0x9049 size:0x0020
// 1596:         SET-COL bitfield: 0 0 0  codep:0x224c parp:0x9075 size:0xfffffffa
// 1597:      UNK_0x9071 bitfield: 0 0 0  codep:0x432d parp:0x9071 size:0x0032
// 1598:         COLORMA bitfield: 0 0 0  codep:0x90af parp:0x90af size:0x002d
// 1599:         COLORMA bitfield: 0 0 0  codep:0x224c parp:0x90e8 size:0x000a
// 1600:         CELLCOL bitfield: 0 0 0  codep:0x224c parp:0x90fe size:0x0008
// 1601:         !XYSEED bitfield: 0 0 0  codep:0x224c parp:0x9112 size:0x001c
// 1602:         SQLPLOT bitfield: 0 0 0  codep:0x224c parp:0x913a size:0x0014
// 1603:         BUFFERX bitfield: 0 0 0  codep:0x915a parp:0x915a size:0x002b
// 1604:      UNK_0x9187 bitfield: 0 0 0  codep:0x224c parp:0x9187 size:0x0006
// 1605:         .1X2CEL bitfield: 0 0 0  codep:0x224c parp:0x9199 size:0x000e
// 1606:         TILEFIL bitfield: 0 0 0  codep:0x224c parp:0x91b3 size:0x0040
// 1607:         .2X2CEL bitfield: 0 0 0  codep:0x224c parp:0x91ff size:0x0018
// 1608:         .4X4CEL bitfield: 0 0 0  codep:0x224c parp:0x9223 size:0x0012
// 1609:         .8X8CEL bitfield: 0 0 0  codep:0x224c parp:0x9241 size:0xfffffff8
// 1610:      UNK_0x923b bitfield: 0 0 0  codep:0x5838 parp:0x923b size:0x0006
// 1611:      UNK_0x9243 bitfield: 0 0 0  codep:0x0df0 parp:0x9243 size:0x0010
// 1612:         .REGION bitfield: 0 0 0  codep:0x224c parp:0x925f size:0x0028
// 1613:          ?INVIS bitfield: 0 0 0  codep:0x9292 parp:0x9292 size:0x0037
// 1614:         WLD>SCR bitfield: 0 0 0  codep:0x92d5 parp:0x92d5 size:0x0038
// 1615:         SCR>BLT bitfield: 0 0 0  codep:0x9319 parp:0x9319 size:0x0014
// 1616:         !VISWIN bitfield: 0 0 0  codep:0x224c parp:0x9339 size:0x0012
// 1617:      UNK_0x934d bitfield: 0 0 0  codep:0x224c parp:0x934d size:0x001c
// 1618:         >1ICONF bitfield: 0 0 0  codep:0x224c parp:0x9375 size:0x0010
// 1619:         >2ICONF bitfield: 0 0 0  codep:0x224c parp:0x9391 size:0x0012
// 1620:         >3ICONF bitfield: 0 0 0  codep:0x224c parp:0x93af size:0x0012
// 1621:      UNK_0x93c3 bitfield: 0 0 0  codep:0x93c3 parp:0x93c3 size:0x0014
// 1622:      UNK_0x93d9 bitfield: 0 0 0  codep:0x93d9 parp:0x93d9 size:0x0014
// 1623:             !IW bitfield: 0 0 0  codep:0x93f5 parp:0x93f5 size:0x0014
// 1624:             !IB bitfield: 0 0 0  codep:0x9411 parp:0x9411 size:0x0012
// 1625:             @IX bitfield: 0 0 0  codep:0x224c parp:0x942b size:0x0008
// 1626:             @IY bitfield: 0 0 0  codep:0x224c parp:0x943b size:0x0008
// 1627:             @ID bitfield: 0 0 0  codep:0x224c parp:0x944b size:0x0008
// 1628:             @IC bitfield: 0 0 0  codep:0x224c parp:0x945b size:0x0008
// 1629:             @IL bitfield: 0 0 0  codep:0x224c parp:0x946b size:0x0008
// 1630:             @IH bitfield: 0 0 0  codep:0x224c parp:0x947b size:0x0008
// 1631:             !IX bitfield: 0 0 0  codep:0x224c parp:0x948b size:0x0008
// 1632:             !IY bitfield: 0 0 0  codep:0x224c parp:0x949b size:0x0008
// 1633:             !ID bitfield: 0 0 0  codep:0x224c parp:0x94ab size:0x0008
// 1634:             !IC bitfield: 0 0 0  codep:0x224c parp:0x94bb size:0x0008
// 1635:             !IL bitfield: 0 0 0  codep:0x224c parp:0x94cb size:0x0008
// 1636:             !IH bitfield: 0 0 0  codep:0x224c parp:0x94db size:0x0008
// 1637:         INIT-IC bitfield: 0 0 0  codep:0x224c parp:0x94ef size:0x000a
// 1638:         .BACKGR bitfield: 0 0 0  codep:0x224c parp:0x9505 size:0x0006
// 1639:          ?VCLIP bitfield: 0 0 0  codep:0x224c parp:0x9516 size:0x0030
// 1640:      UNK_0x9548 bitfield: 0 0 0  codep:0x224c parp:0x9548 size:0x0050
// 1641:      UNK_0x959a bitfield: 0 0 0  codep:0x224c parp:0x959a size:0x004e
// 1642:         .CIRCLE bitfield: 0 0 0  codep:0x224c parp:0x95f4 size:0x0030
// 1643:         SYSCASE bitfield: 0 0 0  codep:0x4b3b parp:0x9630 size:0x008a
// 1644:         .ICONCA bitfield: 0 0 0  codep:0x4b3b parp:0x96c6 size:0x0014
// 1645:         POINT>I bitfield: 0 0 0  codep:0x224c parp:0x96e6 size:0x0006
// 1646:           .ICON bitfield: 0 0 0  codep:0x224c parp:0x96f6 size:0x003c
// 1647:         .LOCAL- bitfield: 0 0 0  codep:0x224c parp:0x973e size:0x001a
// 1648:      UNK_0x975a bitfield: 0 0 0  codep:0x975a parp:0x975a size:0x005e
// 1649:         ?ICONS- bitfield: 0 0 0  codep:0x224c parp:0x97c4 size:0x0008
// 1650:         ?ICONS- bitfield: 0 0 0  codep:0x224c parp:0x97d8 size:0x0008
// 1651:         ?ICON=I bitfield: 0 0 0  codep:0x224c parp:0x97ec size:0x0056
// 1652:      UNK_0x9844 bitfield: 0 0 0  codep:0x15fa parp:0x9844 size:0x0010
// 1653:      UNK_0x9856 bitfield: 0 0 0  codep:0x9856 parp:0x9856 size:0x003d
// 1654:      UNK_0x9895 bitfield: 0 0 0  codep:0x224c parp:0x9895 size:0x001e
// 1655:           -ICON bitfield: 0 0 0  codep:0x224c parp:0x98bd size:0x0034
// 1656:      UNK_0x98f3 bitfield: 0 0 0  codep:0x98f3 parp:0x98f3 size:0x0041
// 1657:         ?ICONSI bitfield: 0 0 0  codep:0x224c parp:0x9940 size:0x0008
// 1658:           +ICON bitfield: 0 0 0  codep:0x224c parp:0x9952 size:0x0026
// 1659:         +ICONBO bitfield: 0 0 0  codep:0x224c parp:0x9984 size:0x0008
// 1660:         ORGLIST bitfield: 0 0 0  codep:0x224c parp:0x9998 size:0x00ce
// 1661:           SFILL bitfield: 0 0 0  codep:0x224c parp:0x9a70 size:0x0004
// 1662:            POS. bitfield: 0 0 0  codep:0x224c parp:0x9a7d size:0x000a
// 1663:          WINDOW bitfield: 0 0 0  codep:0x224c parp:0x9a92 size:0x0038
// 1664:          .1LOGO bitfield: 0 0 0  codep:0x224c parp:0x9ad5 size:0x003e
// 1665:      UNK_0x9b15 bitfield: 0 0 0  codep:0x224c parp:0x9b15 size:0x001a
// 1666:      UNK_0x9b31 bitfield: 0 0 0  codep:0x224c parp:0x9b31 size:0x0058
// 1667:         POLY-WI bitfield: 0 0 0  codep:0x224c parp:0x9b95 size:0x0008
// 1668:           >SSCT bitfield: 0 0 0  codep:0x224c parp:0x9ba7 size:0x002c
// 1669:           >TVCT bitfield: 0 0 0  codep:0x224c parp:0x9bdd size:0x0030
// 1670:          CTPOS. bitfield: 0 0 0  codep:0x224c parp:0x9c18 size:0x0024
// 1671:         CTERASE bitfield: 0 0 0  codep:0x224c parp:0x9c48 size:0x0024
// 1672:      UNK_0x9c6e bitfield: 0 0 0  codep:0x224c parp:0x9c6e size:0x000a
// 1673:      UNK_0x9c7a bitfield: 0 0 0  codep:0x224c parp:0x9c7a size:0x000a
// 1674:           CLICK bitfield: 0 0 0  codep:0x224c parp:0x9c8e size:0x0018
// 1675:            >SND bitfield: 0 0 0  codep:0x224c parp:0x9caf size:0x002a
// 1676:          BEEPON bitfield: 0 0 0  codep:0x224c parp:0x9ce4 size:0x000c
// 1677:      UNK_0x9cf2 bitfield: 0 0 0  codep:0x224c parp:0x9cf2 size:0x0006
// 1678:      UNK_0x9cfa bitfield: 0 0 0  codep:0x224c parp:0x9cfa size:0x0006
// 1679:      UNK_0x9d02 bitfield: 0 0 0  codep:0x224c parp:0x9d02 size:0x0006
// 1680:      UNK_0x9d0a bitfield: 0 0 0  codep:0x224c parp:0x9d0a size:0x0006
// 1681:      UNK_0x9d12 bitfield: 0 0 0  codep:0x224c parp:0x9d12 size:0x0004
// 1682:      UNK_0x9d18 bitfield: 0 0 0  codep:0x1690 parp:0x9d18 size:0x0000
// 1683:      UNK_0x9d1a bitfield: 0 0 0  codep:0x224c parp:0x9d1a size:0x0008
// 1684:      UNK_0x9d24 bitfield: 0 0 0  codep:0x224c parp:0x9d24 size:0x000a
// 1685:            SONG bitfield: 0 0 0  codep:0x224c parp:0x9d37 size:0x004a
// 1686:            @CRS bitfield: 0 0 0  codep:0x224c parp:0x9d8a size:0x002c
// 1687:            !CRS bitfield: 0 0 0  codep:0x224c parp:0x9dbf size:0x002a
// 1688:              $. bitfield: 0 0 0  codep:0x224c parp:0x9df0 size:0x0006
// 1689:         POLY-ER bitfield: 0 0 0  codep:0x224c parp:0x9e02 size:0x0028
// 1690:         POS.PXT bitfield: 0 0 0  codep:0x224c parp:0x9e36 size:0x001c
// 1691:      UNK_0x9e54 bitfield: 0 0 0  codep:0x224c parp:0x9e54 size:0x0020
// 1692:      UNK_0x9e76 bitfield: 0 0 0  codep:0x224c parp:0x9e76 size:0x001c
// 1693:             WUP bitfield: 0 0 0  codep:0x224c parp:0x9e9a size:0x0028
// 1694:             WDN bitfield: 0 0 0  codep:0x224c parp:0x9eca size:0x0028
// 1695:         WLINE-U bitfield: 0 0 0  codep:0x224c parp:0x9efe size:0x0002
// 1696:      UNK_0x9f02 bitfield: 0 0 0  codep:0x9e52 parp:0x9f02 size:0x0002
// 1697:         WLINE-D bitfield: 0 0 0  codep:0x224c parp:0x9f10 size:0x0006
// 1698:             GCR bitfield: 0 0 0  codep:0x224c parp:0x9f1e size:0x0005
// 1699:      UNK_0x9f25 bitfield: 0 0 0  codep:0x235a parp:0x9f25 size:0x000b
// 1700:         WSHORTE bitfield: 0 0 0  codep:0x224c parp:0x9f3c size:0x0020
// 1701:      UNK_0x9f5e bitfield: 0 0 0  codep:0x224c parp:0x9f5e size:0x0012
// 1702:           >BOTT bitfield: 0 0 0  codep:0x224c parp:0x9f7a size:0x001c
// 1703:            CTCR bitfield: 0 0 0  codep:0x224c parp:0x9f9f size:0x0010
// 1704:         TTY-SCR bitfield: 0 0 0  codep:0x224c parp:0x9fbb size:0x0004
// 1705:      UNK_0x9fc1 bitfield: 0 0 0  codep:0x224c parp:0x9fc1 size:0x0008
// 1706:          CTINIT bitfield: 0 0 0  codep:0x224c parp:0x9fd4 size:0x0016
// 1707:            .TTY bitfield: 0 0 0  codep:0x224c parp:0x9ff3 size:0x0006
// 1708:         VIEWSCR bitfield: 0 0 0  codep:0x224c parp:0xa005 size:0x0092
// 1709:         TXT-WIN bitfield: 0 0 0  codep:0x224c parp:0xa0a3 size:0x005e
// 1710:         AUXSCRE bitfield: 0 0 0  codep:0x224c parp:0xa10d size:0x0054
// 1711:         BTN-WIN bitfield: 0 0 0  codep:0x224c parp:0xa16d size:0x0054
// 1712:         .BUTTON bitfield: 0 0 0  codep:0x224c parp:0xa1cd size:0x0048
// 1713:            ?MRC bitfield: 0 0 0  codep:0x224c parp:0xa21e size:0x0030
// 1714:      UNK_0xa250 bitfield: 0 0 0  codep:0x224c parp:0xa250 size:0x001c
// 1715:         ERASE-A bitfield: 0 0 0  codep:0x224c parp:0xa278 size:0x001c
// 1716:         ERASE-T bitfield: 0 0 0  codep:0x224c parp:0xa2a0 size:0x001e
// 1717:      UNK_0xa2c0 bitfield: 0 0 0  codep:0x224c parp:0xa2c0 size:0x001c
// 1718:         .HIGHLI bitfield: 0 0 0  codep:0x224c parp:0xa2e8 size:0x001e
// 1719:      UNK_0xa308 bitfield: 0 0 0  codep:0x224c parp:0xa308 size:0x002a
// 1720:             .ON bitfield: 0 0 0  codep:0x224c parp:0xa33a size:0x0016
// 1721:         CLR-BUT bitfield: 0 0 0  codep:0x224c parp:0xa35c size:0x0016
// 1722:         INIT-BU bitfield: 0 0 0  codep:0x224c parp:0xa37e size:0x000e
// 1723:         (SHIP-C bitfield: 0 0 0  codep:0x224c parp:0xa398 size:0x002a
// 1724:         SHIP-CO bitfield: 0 0 0  codep:0x224c parp:0xa3ce size:0x0008
// 1725:            'KEY bitfield: 0 0 0  codep:0x224c parp:0xa3df size:0x00a2
// 1726:             NOF bitfield: 0 0 0  codep:0x1d29 parp:0xa489 size:0x0002
// 1727:            FKEY bitfield: 0 0 0  codep:0x224c parp:0xa494 size:0x0023
// 1728:             'F1 bitfield: 0 0 0  codep:0xa49a parp:0xa4bf size:0x0002
// 1729:             'F2 bitfield: 0 0 0  codep:0xa49a parp:0xa4c9 size:0x0002
// 1730:             'F3 bitfield: 0 0 0  codep:0xa49a parp:0xa4d3 size:0x0002
// 1731:             'F4 bitfield: 0 0 0  codep:0xa49a parp:0xa4dd size:0x0002
// 1732:             'F5 bitfield: 0 0 0  codep:0xa49a parp:0xa4e7 size:0x0002
// 1733:             'F6 bitfield: 0 0 0  codep:0xa49a parp:0xa4f1 size:0x0002
// 1734:             'F7 bitfield: 0 0 0  codep:0xa49a parp:0xa4fb size:0x0002
// 1735:             'F8 bitfield: 0 0 0  codep:0xa49a parp:0xa505 size:0x0002
// 1736:             'F9 bitfield: 0 0 0  codep:0xa49a parp:0xa50f size:0xffffffff
// 1737:      UNK_0xa510 bitfield: 0 0 0  codep:0x5aa4 parp:0xa510 size:0xffffffff
// 1738:      UNK_0xa511 bitfield: 0 0 0  codep:0xc85a parp:0xa511 size:0x0000
// 1739:            'F10 bitfield: 0 0 0  codep:0xa49a parp:0xa51a size:0x0008
// 1740:      UNK_0xa524 bitfield: 0 0 0  codep:0x5e17 parp:0xa524 size:0x002c
// 1741:         DOTRACE bitfield: 0 0 0  codep:0x224c parp:0xa55c size:0x001c
// 1742:          'TRACE bitfield: 0 0 0  codep:0x1d29 parp:0xa583 size:0x000a
// 1743:         (XYSCAN bitfield: 0 0 0  codep:0x4b3b parp:0xa599 size:0x0074
// 1744:          XYSCAN bitfield: 0 0 0  codep:0x224c parp:0xa618 size:0x000e
// 1745:           ?TRIG bitfield: 0 0 0  codep:0x224c parp:0xa630 size:0x0010
// 1746:           ?QUIT bitfield: 0 0 0  codep:0x224c parp:0xa64a size:0x0010
// 1747:             Y/N bitfield: 0 0 0  codep:0x224c parp:0xa662 size:0x0012
// 1748:      UNK_0xa676 bitfield: 0 0 0  codep:0x224c parp:0xa676 size:0x001a
// 1749:           .ABTN bitfield: 0 0 0  codep:0x224c parp:0xa69a size:0x0054
// 1750:      UNK_0xa6f0 bitfield: 0 0 0  codep:0x224c parp:0xa6f0 size:0x0020
// 1751:         .BTN-TE bitfield: 0 0 0  codep:0x224c parp:0xa71c size:0x004e
// 1752:         NEW-BUT bitfield: 0 0 0  codep:0x224c parp:0xa776 size:0x0044
// 1753:         CURSORS bitfield: 0 0 0  codep:0x224c parp:0xa7c6 size:0x000c
// 1754:         BLD-CRS bitfield: 0 0 0  codep:0x224c parp:0xa7de size:0x0052
// 1755:         SET-CRS bitfield: 0 0 0  codep:0x224c parp:0xa83c size:0x005a
// 1756:              $! bitfield: 0 0 0  codep:0x224c parp:0xa89d size:0x000a
// 1757:         SUBROOT bitfield: 0 0 0  codep:0x224c parp:0xa8b3 size:0x0008
// 1758:         SRDEPTH bitfield: 0 0 0  codep:0x224c parp:0xa8c7 size:0x000a
// 1759:      UNK_0xa8d3 bitfield: 0 0 0  codep:0x224c parp:0xa8d3 size:0x0014
// 1760:         NEXT-NO bitfield: 0 0 0  codep:0x224c parp:0xa8f3 size:0x001c
// 1761:         INST-VA bitfield: 0 0 0  codep:0x7420 parp:0xa91b size:0x0003
// 1762:         INST-DA bitfield: 0 0 0  codep:0x7420 parp:0xa92a size:0x0003
// 1763:           %NAME bitfield: 0 0 0  codep:0x7420 parp:0xa937 size:0x0003
// 1764:         ORIG-NA bitfield: 0 0 0  codep:0x7394 parp:0xa946 size:0x0006
// 1765:         ELEM-NA bitfield: 0 0 0  codep:0x7394 parp:0xa958 size:0x0006
// 1766:         ELEM-VA bitfield: 0 0 0  codep:0x7394 parp:0xa96a size:0x0006
// 1767:         ART-NAM bitfield: 0 0 0  codep:0x7394 parp:0xa97c size:0x0006
// 1768:         ART-VAL bitfield: 0 0 0  codep:0x7394 parp:0xa98e size:0x0006
// 1769:         ART-VOL bitfield: 0 0 0  codep:0x7394 parp:0xa9a0 size:0x0006
// 1770:         PHR-CNT bitfield: 0 0 0  codep:0x7420 parp:0xa9b2 size:0x0003
// 1771:          PHRASE bitfield: 0 0 0  codep:0x7420 parp:0xa9c0 size:0x0003
// 1772:          ASKING bitfield: 0 0 0  codep:0x7420 parp:0xa9ce size:0x0003
// 1773:             U>$ bitfield: 0 0 0  codep:0x224c parp:0xa9d9 size:0x000a
// 1774:      UNK_0xa9e5 bitfield: 0 0 0  codep:0x224c parp:0xa9e5 size:0x0014
// 1775:      UNK_0xa9fb bitfield: 0 0 0  codep:0x224c parp:0xa9fb size:0x0016
// 1776:         <CTVERS bitfield: 0 0 0  codep:0x224c parp:0xaa1d size:0x0012
// 1777:         <CTASKM bitfield: 0 0 0  codep:0x224c parp:0xaa3b size:0x0012
// 1778:         TEXT-CO bitfield: 0 0 0  codep:0x7420 parp:0xaa59 size:0x0003
// 1779:         TEXT-IN bitfield: 0 0 0  codep:0x7420 parp:0xaa68 size:0x0003
// 1780:         TEXT-TE bitfield: 0 0 0  codep:0x7420 parp:0xaa77 size:0x0003
// 1781:         TEXT>PA bitfield: 0 0 0  codep:0x224c parp:0xaa86 size:0x0016
// 1782:           CMESS bitfield: 0 0 0  codep:0x224c parp:0xaaa6 size:0x002c
// 1783:          X0MESS bitfield: 0 0 0  codep:0x224c parp:0xaadd size:0x002a
// 1784:           0MESS bitfield: 0 0 0  codep:0x224c parp:0xab11 size:0x000a
// 1785:         -XTRAIL bitfield: 0 0 0  codep:0x224c parp:0xab27 size:0x002e
// 1786:      UNK_0xab57 bitfield: 0 0 0  codep:0x1d29 parp:0xab57 size:0x0002
// 1787:           SMART bitfield: 0 0 0  codep:0x1d29 parp:0xab63 size:0x0002
// 1788:      UNK_0xab67 bitfield: 0 0 0  codep:0x2214 parp:0xab67 size:0x0002 = 0xff
// 1789:      UNK_0xab6b bitfield: 0 0 0  codep:0x2214 parp:0xab6b size:0x0002 = 0xec67
// 1790:      UNK_0xab6f bitfield: 0 0 0  codep:0x2214 parp:0xab6f size:0x0002 = 0xec68
// 1791:      UNK_0xab73 bitfield: 0 0 0  codep:0x2214 parp:0xab73 size:0x0002 = 0xec69
// 1792:      UNK_0xab77 bitfield: 0 0 0  codep:0x2214 parp:0xab77 size:0x0002 = 0xec6a
// 1793:      UNK_0xab7b bitfield: 0 0 0  codep:0x2214 parp:0xab7b size:0x0002 = 0xec78
// 1794:      UNK_0xab7f bitfield: 0 0 0  codep:0x2214 parp:0xab7f size:0x000e = 0xec84
// 1795:             C+! bitfield: 0 0 0  codep:0x224c parp:0xab95 size:0x000e
// 1796:      UNK_0xaba5 bitfield: 0 0 0  codep:0x224c parp:0xaba5 size:0x004c
// 1797:         DISTRAC bitfield: 0 0 0  codep:0x224c parp:0xabfd size:0x0090
// 1798:          EXPERT bitfield: 0 0 0  codep:0x224c parp:0xac98 size:0x0099
// 1799:             --> bitfield: 0 0 0  codep:0x224c parp:0xad39 size:0x0004
// 1800:      UNK_0xad3f bitfield: 0 0 0  codep:0x224c parp:0xad3f size:0x0032
// 1801:      UNK_0xad73 bitfield: 0 0 0  codep:0x224c parp:0xad73 size:0x0063
// 1802:           RULE: bitfield: 0 0 0  codep:0x224c parp:0xade0 size:0x004b
// 1803:      UNK_0xae2d bitfield: 0 0 0  codep:0x141c parp:0xae2d size:0x000c
// 1804:      UNK_0xae3b bitfield: 0 0 0  codep:0x2045 parp:0xae3b size:0x0005
// 1805:      UNK_0xae42 bitfield: 0 0 0  codep:0x8264 parp:0xae42 size:0x0033
// 1806:         CEX+WAX bitfield: 0 0 0  codep:0x224c parp:0xae81 size:0x000a
// 1807:      UNK_0xae8d bitfield: 0 0 0  codep:0x224c parp:0xae8d size:0x0006
// 1808:      UNK_0xae95 bitfield: 0 0 0  codep:0x224c parp:0xae95 size:0x0006
// 1809:      UNK_0xae9d bitfield: 0 0 0  codep:0x224c parp:0xae9d size:0x0006
// 1810:      UNK_0xaea5 bitfield: 0 0 0  codep:0x224c parp:0xaea5 size:0x0006
// 1811:      UNK_0xaead bitfield: 0 0 0  codep:0x224c parp:0xaead size:0x000c
// 1812:      UNK_0xaebb bitfield: 0 0 0  codep:0x224c parp:0xaebb size:0x0006
// 1813:      UNK_0xaec3 bitfield: 0 0 0  codep:0x224c parp:0xaec3 size:0x0006
// 1814:      UNK_0xaecb bitfield: 0 0 0  codep:0x224c parp:0xaecb size:0x0006
// 1815:      UNK_0xaed3 bitfield: 0 0 0  codep:0x224c parp:0xaed3 size:0x000c
// 1816:         ?NEW-HO bitfield: 0 0 0  codep:0x224c parp:0xaeeb size:0x0014
// 1817:      UNK_0xaf01 bitfield: 0 0 0  codep:0x224c parp:0xaf01 size:0x0006
// 1818:      UNK_0xaf09 bitfield: 0 0 0  codep:0x224c parp:0xaf09 size:0x006c
// 1819:         PARALLE bitfield: 0 0 0  codep:0x224c parp:0xaf81 size:0x0012
// 1820:      UNK_0xaf95 bitfield: 0 0 0  codep:0x224c parp:0xaf95 size:0x000e
// 1821:      UNK_0xafa5 bitfield: 0 0 0  codep:0x224c parp:0xafa5 size:0x000e
// 1822:      UNK_0xafb5 bitfield: 0 0 0  codep:0x224c parp:0xafb5 size:0x0006
// 1823:         DOTASKS bitfield: 0 0 0  codep:0x224c parp:0xafc7 size:0x0060
// 1824:         ?VCYCLE bitfield: 0 0 0  codep:0x224c parp:0xb033 size:0x0059
// 1825:            >XOR bitfield: 0 0 0  codep:0x224c parp:0xb095 size:0x002a
// 1826:      UNK_0xb0c1 bitfield: 0 0 0  codep:0x224c parp:0xb0c1 size:0x0010
// 1827:      UNK_0xb0d3 bitfield: 0 0 0  codep:0x224c parp:0xb0d3 size:0x0020
// 1828:      UNK_0xb0f5 bitfield: 0 0 0  codep:0x224c parp:0xb0f5 size:0x0008
// 1829:      UNK_0xb0ff bitfield: 0 0 0  codep:0x224c parp:0xb0ff size:0x0024
// 1830:      UNK_0xb125 bitfield: 0 0 0  codep:0x224c parp:0xb125 size:0x001a
// 1831:      UNK_0xb141 bitfield: 0 0 0  codep:0x224c parp:0xb141 size:0x0088
// 1832:          ICINIT bitfield: 0 0 0  codep:0x224c parp:0xb1d4 size:0x002a
// 1833:      UNK_0xb200 bitfield: 0 0 0  codep:0x224c parp:0xb200 size:0x001e
// 1834:         XKEYINT bitfield: 0 0 0  codep:0xb22a parp:0xb22a size:0x001f
// 1835:         INSTALL bitfield: 0 0 0  codep:0x224c parp:0xb255 size:0x0040
// 1836:         RESTORE bitfield: 0 0 0  codep:0x224c parp:0xb2a1 size:0x0020
// 1837:      UNK_0xb2c3 bitfield: 0 0 0  codep:0x224c parp:0xb2c3 size:0x0022
// 1838:      UNK_0xb2e7 bitfield: 0 0 0  codep:0x224c parp:0xb2e7 size:0x000a
// 1839:         LOAD-DI bitfield: 0 0 0  codep:0x224c parp:0xb2fd size:0x0020
// 1840:          LDSILS bitfield: 0 0 0  codep:0x224c parp:0xb328 size:0xfffffffa
// 1841:      UNK_0xb324 bitfield: 0 0 0  codep:0x4953 parp:0xb324 size:0x0010
// 1842:            !PAL bitfield: 0 0 0  codep:0x224c parp:0xb33d size:0x0012
// 1843:         CONFIGU bitfield: 0 0 0  codep:0x224c parp:0xb35b size:0x006c
// 1844:         STARTER bitfield: 0 0 0  codep:0x224c parp:0xb3d3 size:0x000a
// 1845:             DOS bitfield: 0 0 0  codep:0x224c parp:0xb3e5 size:0x0002
// 1846:           +EDIT bitfield: 0 0 0  codep:0x1ab5 parp:0xb3f1 size:0x000f
// 1847:      UNK_0xb402 bitfield: 0 0 0  codep:0xff00 parp:0xb402 size:0x0003
// 1848:         EDIT-OV bitfield: 0 0 0  codep:0x83dd parp:0xb411 size:0xfffffffa
// 1849:      UNK_0xb40d bitfield: 0 0 0  codep:0x2d54 parp:0xb40d size:0x0001
// 1850:      UNK_0xb410 bitfield: 0 0 0  codep:0xddd6 parp:0xb410 size:0x0003
// 1851:            EDIT bitfield: 0 0 0  codep:0x224c parp:0xb41c size:0x0008
// 1852:            USE" bitfield: 0 0 0  codep:0x224c parp:0xb42d size:0x0006
// 1853:              SB bitfield: 0 0 0  codep:0x2214 parp:0xb43a size:0x0002 = 0x168
// 1854:      UNK_0xb43e bitfield: 0 0 0  codep:0xb43e parp:0xb43e size:0x0009
// 1855:      UNK_0xb449 bitfield: 0 0 0  codep:0x224c parp:0xb449 size:0x000e
// 1856:      UNK_0xb459 bitfield: 0 0 0  codep:0x224c parp:0xb459 size:0x0018
// 1857:      UNK_0xb473 bitfield: 0 0 0  codep:0x224c parp:0xb473 size:0x0008
// 1858:      UNK_0xb47d bitfield: 0 0 0  codep:0x224c parp:0xb47d size:0x000c
// 1859:      UNK_0xb48b bitfield: 0 0 0  codep:0x224c parp:0xb48b size:0x0008
// 1860:      UNK_0xb495 bitfield: 0 0 0  codep:0x224c parp:0xb495 size:0x0012
// 1861:      UNK_0xb4a9 bitfield: 0 0 0  codep:0x224c parp:0xb4a9 size:0x0018
// 1862:      UNK_0xb4c3 bitfield: 0 0 0  codep:0x224c parp:0xb4c3 size:0x0014
// 1863:      UNK_0xb4d9 bitfield: 0 0 0  codep:0x224c parp:0xb4d9 size:0x0058
// 1864:      UNK_0xb533 bitfield: 0 0 0  codep:0x224c parp:0xb533 size:0x001e
// 1865:              WS bitfield: 0 0 0  codep:0x224c parp:0xb558 size:0x0006
// 1866:              WL bitfield: 0 0 0  codep:0x224c parp:0xb565 size:0x0006
// 1867:      UNK_0xb56d bitfield: 0 0 0  codep:0x224c parp:0xb56d size:0x0014
// 1868:              .S bitfield: 0 0 0  codep:0x224c parp:0xb588 size:0x0010
// 1869:           MUSIC bitfield: 0 0 0  codep:0x1ab5 parp:0xb5a2 size:0x0014
// 1870:        MUSIC-OV bitfield: 0 0 0  codep:0x83dd parp:0xb5c3 size:0x0002
// 1871:          INTROS bitfield: 0 0 0  codep:0x224c parp:0xb5d0 size:0x0006
// 1872:           HIMUS bitfield: 0 0 0  codep:0x224c parp:0xb5e0 size:0x0006
// 1873:          TALLOC bitfield: 0 0 0  codep:0x224c parp:0xb5f1 size:0x0006
// 1874:         SETABLT bitfield: 0 0 0  codep:0x224c parp:0xb603 size:0x0006
// 1875:             *OP bitfield: 0 0 0  codep:0x3b74 parp:0xb611 size:0x0004
// 1876:           *COMM bitfield: 0 0 0  codep:0x3b74 parp:0xb61f size:0x0004
// 1877:            *EOL bitfield: 0 0 0  codep:0x3b74 parp:0xb62c size:0x0004
// 1878:           OTABL bitfield: 0 0 0  codep:0x1d29 parp:0xb63a size:0x0036
// 1879:            +ORG bitfield: 0 0 0  codep:0x4b3b parp:0xb679 size:0x001c
// 1880:           ORGIA bitfield: 0 0 0  codep:0x224c parp:0xb69f size:0x0018
// 1881:           MISC- bitfield: 0 0 0  codep:0x1ab5 parp:0xb6c1 size:0x0014
// 1882:           MISC- bitfield: 0 0 0  codep:0x83dd parp:0xb6df size:0x0002
// 1883:          =CARGO bitfield: 0 0 0  codep:0x224c parp:0xb6ec size:0x0006
// 1884:          OV#IN$ bitfield: 0 0 0  codep:0x224c parp:0xb6fd size:0x0006
// 1885:          OVQUIT bitfield: 0 0 0  codep:0x224c parp:0xb70e size:0x0006
// 1886:          OV.0$$ bitfield: 0 0 0  codep:0x224c parp:0xb71f size:0x0006
// 1887:          OV0$$$ bitfield: 0 0 0  codep:0x224c parp:0xb730 size:0x0006
// 1888:          OVTRIM bitfield: 0 0 0  codep:0x224c parp:0xb741 size:0x0006
// 1889:          OVTRIM bitfield: 0 0 0  codep:0x224c parp:0xb752 size:0x000e
// 1890:          OV?ART bitfield: 0 0 0  codep:0x224c parp:0xb76b size:0x0006
// 1891:          OV?.EQ bitfield: 0 0 0  codep:0x224c parp:0xb77c size:0x0006
// 1892:          TV?ART bitfield: 0 0 0  codep:0x224c parp:0xb78d size:0x0006
// 1893:            RSTE bitfield: 0 0 0  codep:0x224c parp:0xb79c size:0x0006
// 1894:          SCON-V bitfield: 0 0 0  codep:0x1ab5 parp:0xb7ad size:0x0014
// 1895:          SCON-O bitfield: 0 0 0  codep:0x83dd parp:0xb7cc size:0x0002
// 1896:             TOW bitfield: 0 0 0  codep:0x224c parp:0xb7d6 size:0x0006
// 1897:          .NOFUN bitfield: 0 0 0  codep:0x224c parp:0xb7e7 size:0x0006
// 1898:          FX-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xb7f8 size:0x0014
// 1899:           FX-OV bitfield: 0 0 0  codep:0x83dd parp:0xb816 size:0xfffffff9
// 1900:      UNK_0xb811 bitfield: 0 0 0  codep:0x5846 parp:0xb811 size:0x0007
// 1901:           PSYCH bitfield: 0 0 0  codep:0x224c parp:0xb822 size:0x0008
// 1902:           .TMAP bitfield: 0 0 0  codep:0x224c parp:0xb834 size:0x0006
// 1903:          IT-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xb845 size:0x0014
// 1904:           IT-OV bitfield: 0 0 0  codep:0x83dd parp:0xb863 size:0x005a
// 1905:         DATE$>A bitfield: 0 0 0  codep:0x224c parp:0xb8c9 size:0x0008
// 1906:         BOX>LIS bitfield: 0 0 0  codep:0x224c parp:0xb8dd size:0x0008
// 1907:         GET-BOX bitfield: 0 0 0  codep:0x224c parp:0xb8f1 size:0x0008
// 1908:         MAKE-SC bitfield: 0 0 0  codep:0x224c parp:0xb905 size:0x0008
// 1909:         DELETE- bitfield: 0 0 0  codep:0x224c parp:0xb919 size:0x0008
// 1910:         BOX>TOC bitfield: 0 0 0  codep:0x224c parp:0xb92d size:0x0008
// 1911:            >BOX bitfield: 0 0 0  codep:0x224c parp:0xb93e size:0x0008
// 1912:            BOX> bitfield: 0 0 0  codep:0x224c parp:0xb94f size:0x0008
// 1913:          (BOX>) bitfield: 0 0 0  codep:0x224c parp:0xb962 size:0x0008
// 1914:         CLASS>B bitfield: 0 0 0  codep:0x224c parp:0xb976 size:0x0008
// 1915:         ITEM>PA bitfield: 0 0 0  codep:0x224c parp:0xb98a size:0x0008
// 1916:         BLT-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xb99e size:0x0014
// 1917:            BLT- bitfield: 0 0 0  codep:0x83dd parp:0xb9bb size:0x0002
// 1918:          @.HYBR bitfield: 0 0 0  codep:0x224c parp:0xb9c8 size:0x0006
// 1919:           .TPIC bitfield: 0 0 0  codep:0x224c parp:0xb9d8 size:0x0006
// 1920:           .APIC bitfield: 0 0 0  codep:0x224c parp:0xb9e8 size:0x0006
// 1921:          SETBLT bitfield: 0 0 0  codep:0x224c parp:0xb9f9 size:0x0006
// 1922:          LDAPIC bitfield: 0 0 0  codep:0x224c parp:0xba0a size:0x0006
// 1923:           LDSYS bitfield: 0 0 0  codep:0x224c parp:0xba1a size:0x0006
// 1924:          VICONP bitfield: 0 0 0  codep:0x1ab5 parp:0xba2b size:0x0014
// 1925:           ICONP bitfield: 0 0 0  codep:0x83dd parp:0xba49 size:0x0002
// 1926:           ICON- bitfield: 0 0 0  codep:0x224c parp:0xba55 size:0x0006
// 1927:           +ICON bitfield: 0 0 0  codep:0x224c parp:0xba65 size:0x0006
// 1928:           FRACT bitfield: 0 0 0  codep:0x1ab5 parp:0xba75 size:0x0014
// 1929:        FRACT-OV bitfield: 0 0 0  codep:0x83dd parp:0xba96 size:0x0002
// 1930:           MERCA bitfield: 0 0 0  codep:0x224c parp:0xbaa2 size:0x0006
// 1931:           NEWCO bitfield: 0 0 0  codep:0x224c parp:0xbab2 size:0x0006
// 1932:           MAKE- bitfield: 0 0 0  codep:0x224c parp:0xbac2 size:0x0006
// 1933:           SCRLC bitfield: 0 0 0  codep:0x224c parp:0xbad2 size:0x0006
// 1934:          BTADDR bitfield: 0 0 0  codep:0x1d29 parp:0xbae3 size:0x0002
// 1935:      UNK_0xbae7 bitfield: 0 0 0  codep:0x1d29 parp:0xbae7 size:0x0002
// 1936:      UNK_0xbaeb bitfield: 0 0 0  codep:0x1d29 parp:0xbaeb size:0x0002
// 1937:      UNK_0xbaef bitfield: 0 0 0  codep:0x1d29 parp:0xbaef size:0x0002
// 1938:      UNK_0xbaf3 bitfield: 0 0 0  codep:0x1d29 parp:0xbaf3 size:0x0002
// 1939:      UNK_0xbaf7 bitfield: 0 0 0  codep:0x2214 parp:0xbaf7 size:0x0002 = 0xbbda
// 1940:      UNK_0xbafb bitfield: 0 0 0  codep:0x2214 parp:0xbafb size:0x0002 = 0xbbd2
// 1941:      UNK_0xbaff bitfield: 0 0 0  codep:0x2214 parp:0xbaff size:0x0002 = 0xbbf0
// 1942:      UNK_0xbb03 bitfield: 0 0 0  codep:0x224c parp:0xbb03 size:0x0024
// 1943:      UNK_0xbb29 bitfield: 0 0 0  codep:0x224c parp:0xbb29 size:0x004e
// 1944:           HUFF> bitfield: 0 0 0  codep:0x224c parp:0xbb81 size:0x0040
// 1945:         PHRASE$ bitfield: 0 0 0  codep:0x7420 parp:0xbbcd size:0x0095
// 1946:         ENG-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xbc6e size:0x0014
// 1947:           ENG-O bitfield: 0 0 0  codep:0x83dd parp:0xbc8c size:0x0002
// 1948:           OV/DA bitfield: 0 0 0  codep:0x224c parp:0xbc98 size:0x0006
// 1949:           OV/RE bitfield: 0 0 0  codep:0x224c parp:0xbca8 size:0x0006
// 1950:           OVDBA bitfield: 0 0 0  codep:0x224c parp:0xbcb8 size:0x0006
// 1951:          SETTER bitfield: 0 0 0  codep:0x1ab5 parp:0xbcc9 size:0x0014
// 1952:        PLSET-OV bitfield: 0 0 0  codep:0x83dd parp:0xbcea size:0x0002
// 1953:        SET-PLAN bitfield: 0 0 0  codep:0x224c parp:0xbcf9 size:0x0006
// 1954:           ORBIT bitfield: 0 0 0  codep:0x1ab5 parp:0xbd09 size:0x0014
// 1955:           ORBIT bitfield: 0 0 0  codep:0x83dd parp:0xbd27 size:0x0002
// 1956:           INIT- bitfield: 0 0 0  codep:0x224c parp:0xbd33 size:0x0008
// 1957:           SHOWS bitfield: 0 0 0  codep:0x224c parp:0xbd45 size:0xfffffffd
// 1958:      UNK_0xbd44 bitfield: 0 0 0  codep:0x4cd3 parp:0xbd44 size:0x0007
// 1959:           DESCE bitfield: 0 0 0  codep:0x224c parp:0xbd55 size:0x0008
// 1960:           ASCEN bitfield: 0 0 0  codep:0x224c parp:0xbd67 size:0x0008
// 1961:           ROTAT bitfield: 0 0 0  codep:0x224c parp:0xbd79 size:0x0008
// 1962:           SEEGR bitfield: 0 0 0  codep:0x224c parp:0xbd8b size:0x0006
// 1963:           MROTA bitfield: 0 0 0  codep:0x224c parp:0xbd9b size:0x0008
// 1964:         CULTURE bitfield: 0 0 0  codep:0x1ab5 parp:0xbdaf size:0x0014
// 1965:          CULTUR bitfield: 0 0 0  codep:0x83dd parp:0xbdce size:0x0002
// 1966:           .CULT bitfield: 0 0 0  codep:0x224c parp:0xbdda size:0x0006
// 1967:           .RACE bitfield: 0 0 0  codep:0x224c parp:0xbdea size:0x0006
// 1968:          DESCRI bitfield: 0 0 0  codep:0x1ab5 parp:0xbdfb size:0x0014
// 1969:           DESCR bitfield: 0 0 0  codep:0x83dd parp:0xbe19 size:0x0002
// 1970:           DO-LO bitfield: 0 0 0  codep:0x224c parp:0xbe25 size:0x0006
// 1971:           .LIFE bitfield: 0 0 0  codep:0x224c parp:0xbe35 size:0x0006
// 1972:           .HUFF bitfield: 0 0 0  codep:0x224c parp:0xbe45 size:0x0006
// 1973:           .AHUF bitfield: 0 0 0  codep:0x224c parp:0xbe55 size:0x0006
// 1974:            SSCN bitfield: 0 0 0  codep:0x224c parp:0xbe64 size:0x0006
// 1975:           ?COMS bitfield: 0 0 0  codep:0x224c parp:0xbe74 size:0x0006
// 1976:           SSCAN bitfield: 0 0 0  codep:0x224c parp:0xbe84 size:0x0008
// 1977:           CPAUS bitfield: 0 0 0  codep:0x224c parp:0xbe96 size:0x0006
// 1978:        COMM-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xbea9 size:0x0014
// 1979:         COMM-OV bitfield: 0 0 0  codep:0x83dd parp:0xbec9 size:0x0002
// 1980:         OVINIT- bitfield: 0 0 0  codep:0x224c parp:0xbed7 size:0x0010
// 1981:          U-COMM bitfield: 0 0 0  codep:0x224c parp:0xbef2 size:0x0008
// 1982:         COMM-EX bitfield: 0 0 0  codep:0x224c parp:0xbf06 size:0x0005
// 1983:      UNK_0xbf0d bitfield: 0 0 0  codep:0x9083 parp:0xbf0d size:0x0001
// 1984:             A>O bitfield: 0 0 0  codep:0x224c parp:0xbf16 size:0x0008
// 1985:             O>C bitfield: 0 0 0  codep:0x224c parp:0xbf26 size:0x0008
// 1986:           >HAIL bitfield: 0 0 0  codep:0x224c parp:0xbf38 size:0x0006
// 1987:         OV+!EDL bitfield: 0 0 0  codep:0x224c parp:0xbf4a size:0x0008
// 1988:         OVEDL+A bitfield: 0 0 0  codep:0x224c parp:0xbf5e size:0x0008
// 1989:            P>CT bitfield: 0 0 0  codep:0x224c parp:0xbf6f size:0x0008
// 1990:            CTUP bitfield: 0 0 0  codep:0x224c parp:0xbf80 size:0x0006
// 1991:            1SYL bitfield: 0 0 0  codep:0x224c parp:0xbf8f size:0x0006
// 1992:         MCOMM-E bitfield: 0 0 0  codep:0x224c parp:0xbfa1 size:0x0008
// 1993:         MEDL+AU bitfield: 0 0 0  codep:0x224c parp:0xbfb5 size:0x0008
// 1994:          DA-STR bitfield: 0 0 0  codep:0x224c parp:0xbfc8 size:0x0008
// 1995:           EDL>P bitfield: 0 0 0  codep:0x224c parp:0xbfda size:0x0006
// 1996:           BLDLI bitfield: 0 0 0  codep:0x1ab5 parp:0xbfea size:0x0014
// 1997:           BLDLI bitfield: 0 0 0  codep:0x83dd parp:0xc008 size:0x0002
// 1998:           BLDLI bitfield: 0 0 0  codep:0x224c parp:0xc014 size:0x0006
// 1999:           SET-C bitfield: 0 0 0  codep:0x224c parp:0xc024 size:0x0006
// 2000:             T>O bitfield: 0 0 0  codep:0x224c parp:0xc032 size:0x0006
// 2001:           !TAMT bitfield: 0 0 0  codep:0x224c parp:0xc042 size:0x0006
// 2002:           @TAMT bitfield: 0 0 0  codep:0x224c parp:0xc052 size:0x0006
// 2003:         SCI-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc064 size:0x0014
// 2004:          SCI-OV bitfield: 0 0 0  codep:0x83dd parp:0xc083 size:0x0002
// 2005:          OV/STA bitfield: 0 0 0  codep:0x224c parp:0xc090 size:0x0006
// 2006:          OV/STX bitfield: 0 0 0  codep:0x224c parp:0xc0a1 size:0x0006
// 2007:          OVSTAR bitfield: 0 0 0  codep:0x224c parp:0xc0b2 size:0x0008
// 2008:          OV/SEN bitfield: 0 0 0  codep:0x224c parp:0xc0c5 size:0x0006
// 2009:          ?HEAVY bitfield: 0 0 0  codep:0x224c parp:0xc0d6 size:0x0006
// 2010:          /STARD bitfield: 0 0 0  codep:0x224c parp:0xc0e7 size:0x0008
// 2011:           .SORD bitfield: 0 0 0  codep:0x224c parp:0xc0f9 size:0x0024
// 2012:          HEALTI bitfield: 0 0 0  codep:0x1d29 parp:0xc128 size:0x0002
// 2013:          LASTAP bitfield: 0 0 0  codep:0x1d29 parp:0xc135 size:0x0004
// 2014:          ROSTER bitfield: 0 0 0  codep:0x1d29 parp:0xc144 size:0x0012
// 2015:          HEALER bitfield: 0 0 0  codep:0x1ab5 parp:0xc161 size:0x0014
// 2016:          HEAL-O bitfield: 0 0 0  codep:0x83dd parp:0xc180 size:0x0002
// 2017:            (OBI bitfield: 0 0 0  codep:0x224c parp:0xc18b size:0x0006
// 2018:            (.VI bitfield: 0 0 0  codep:0x224c parp:0xc19a size:0x0006
// 2019:            (HEA bitfield: 0 0 0  codep:0x224c parp:0xc1a9 size:0x0006
// 2020:            (ROL bitfield: 0 0 0  codep:0x224c parp:0xc1b8 size:0x0006
// 2021:            HEAL bitfield: 0 0 0  codep:0x224c parp:0xc1c7 size:0x0008
// 2022:            .VIT bitfield: 0 0 0  codep:0x224c parp:0xc1d8 size:0x0008
// 2023:            KILL bitfield: 0 0 0  codep:0x224c parp:0xc1e9 size:0x0006
// 2024:            ?APP bitfield: 0 0 0  codep:0x224c parp:0xc1f8 size:0x002e
// 2025:        BANK-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc233 size:0x0014
// 2026:         BANK-OV bitfield: 0 0 0  codep:0x83dd parp:0xc253 size:0x0001
// 2027:      UNK_0xc256 bitfield: 0 0 0  codep:0xc073 parp:0xc256 size:0xffffffff
// 2028:         OVINIT- bitfield: 0 0 0  codep:0x224c parp:0xc261 size:0x0006
// 2029:         OVTRANS bitfield: 0 0 0  codep:0x224c parp:0xc273 size:0x0006
// 2030:         OVD@BAL bitfield: 0 0 0  codep:0x224c parp:0xc285 size:0x0006
// 2031:         OVD!BAL bitfield: 0 0 0  codep:0x224c parp:0xc297 size:0x0006
// 2032:         OV?BALA bitfield: 0 0 0  codep:0x224c parp:0xc2a9 size:0x0006
// 2033:         OV!TFLA bitfield: 0 0 0  codep:0x224c parp:0xc2bb size:0x0006
// 2034:         I-TRANS bitfield: 0 0 0  codep:0x224c parp:0xc2cd size:0x0006
// 2035:             U-B bitfield: 0 0 0  codep:0x224c parp:0xc2db size:0x0006
// 2036:         T+BALAN bitfield: 0 0 0  codep:0x224c parp:0xc2ed size:0x000c
// 2037:        XCOM-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc306 size:0x0014
// 2038:         XCOM-OV bitfield: 0 0 0  codep:0x83dd parp:0xc326 size:0x0002
// 2039:           XCOMM bitfield: 0 0 0  codep:0x224c parp:0xc332 size:0x0006
// 2040:           #>PRO bitfield: 0 0 0  codep:0x224c parp:0xc342 size:0x0006
// 2041:          REPAIR bitfield: 0 0 0  codep:0x1ab5 parp:0xc353 size:0x0014
// 2042:         REPAIR- bitfield: 0 0 0  codep:0x83dd parp:0xc373 size:0x0002
// 2043:         DO-REPA bitfield: 0 0 0  codep:0x224c parp:0xc381 size:0x0010
// 2044:         ?SHIP-R bitfield: 0 0 0  codep:0x224c parp:0xc39d size:0x0026
// 2045:         MREPAIR bitfield: 0 0 0  codep:0x224c parp:0xc3cf size:0x0020
// 2046:           BARTE bitfield: 0 0 0  codep:0x1ab5 parp:0xc3f9 size:0x0014
// 2047:         BARTER- bitfield: 0 0 0  codep:0x83dd parp:0xc419 size:0x0002
// 2048:         DOENTER bitfield: 0 0 0  codep:0x224c parp:0xc427 size:0x0008
// 2049:          DOOPEN bitfield: 0 0 0  codep:0x224c parp:0xc43a size:0x0008
// 2050:         DOBARTE bitfield: 0 0 0  codep:0x224c parp:0xc44e size:0xfffffff7
// 2051:      UNK_0xc447 bitfield: 0 0 0  codep:0x4f44 parp:0xc447 size:0x000f
// 2052:         !PFLAGS bitfield: 0 0 0  codep:0x224c parp:0xc462 size:0x0008
// 2053:             L>P bitfield: 0 0 0  codep:0x224c parp:0xc472 size:0x0008
// 2054:             MAR bitfield: 0 0 0  codep:0x1ab5 parp:0xc482 size:0x0014
// 2055:           MARKE bitfield: 0 0 0  codep:0x83dd parp:0xc4a0 size:0x0002
// 2056:           TRADE bitfield: 0 0 0  codep:0x224c parp:0xc4ac size:0x0008
// 2057:        SITE-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc4c1 size:0x0014
// 2058:         SITE-OV bitfield: 0 0 0  codep:0x83dd parp:0xc4e1 size:0x0002
// 2059:         (.MERC) bitfield: 0 0 0  codep:0x224c parp:0xc4ef size:0x0008
// 2060:       (GETSITE) bitfield: 0 0 0  codep:0x224c parp:0xc505 size:0x000a
// 2061:        FLUX-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc51c size:0x0014
// 2062:         FLUX-OV bitfield: 0 0 0  codep:0x83dd parp:0xc53c size:0x0002
// 2063:           OVFLU bitfield: 0 0 0  codep:0x224c parp:0xc548 size:0x0006
// 2064:           JUMPF bitfield: 0 0 0  codep:0x224c parp:0xc558 size:0x0001
// 2065:      UNK_0xc55b bitfield: 0 0 0  codep:0x12c5 parp:0xc55b size:0x0003
// 2066:       DPART-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc56c size:0x0014
// 2067:        DPART-OV bitfield: 0 0 0  codep:0x83dd parp:0xc58d size:0x0002
// 2068:          DEPART bitfield: 0 0 0  codep:0x224c parp:0xc59a size:0x0006
// 2069:         CLOUD-V bitfield: 0 0 0  codep:0x1ab5 parp:0xc5ac size:0x0014
// 2070:         CLOUD-O bitfield: 0 0 0  codep:0x83dd parp:0xc5cc size:0x0002
// 2071:         DO-CLOU bitfield: 0 0 0  codep:0x224c parp:0xc5da size:0x0006
// 2072:         NAV-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc5ec size:0x0014
// 2073:           NAV-O bitfield: 0 0 0  codep:0x83dd parp:0xc60a size:0x0002
// 2074:           OV/(D bitfield: 0 0 0  codep:0x224c parp:0xc616 size:0x0006
// 2075:           OV/(U bitfield: 0 0 0  codep:0x224c parp:0xc626 size:0x0006
// 2076:           OV-SH bitfield: 0 0 0  codep:0x224c parp:0xc636 size:0x000e
// 2077:           OV-AR bitfield: 0 0 0  codep:0x224c parp:0xc64e size:0x000e
// 2078:         DAMAGE- bitfield: 0 0 0  codep:0x1ab5 parp:0xc668 size:0x0014
// 2079:         DAMAGE- bitfield: 0 0 0  codep:0x83dd parp:0xc688 size:0x0002
// 2080:           DO-DA bitfield: 0 0 0  codep:0x224c parp:0xc694 size:0x0008
// 2081:            >DAM bitfield: 0 0 0  codep:0x224c parp:0xc6a5 size:0x000c
// 2082:            .AUX bitfield: 0 0 0  codep:0x224c parp:0xc6ba size:0x0006
// 2083:           CREWD bitfield: 0 0 0  codep:0x224c parp:0xc6ca size:0x0006
// 2084:            BLST bitfield: 0 0 0  codep:0x224c parp:0xc6d9 size:0x0006
// 2085:           #MISS bitfield: 0 0 0  codep:0x1d29 parp:0xc6e9 size:0x0002
// 2086:            WEAP bitfield: 0 0 0  codep:0x1ab5 parp:0xc6f4 size:0x0014
// 2087:             WEA bitfield: 0 0 0  codep:0x83dd parp:0xc710 size:0x0002
// 2088:             TAR bitfield: 0 0 0  codep:0x224c parp:0xc71a size:0x0006
// 2089:             DTA bitfield: 0 0 0  codep:0x224c parp:0xc728 size:0x0008
// 2090:             DNL bitfield: 0 0 0  codep:0x224c parp:0xc738 size:0x0006
// 2091:             GNL bitfield: 0 0 0  codep:0x224c parp:0xc746 size:0x0006
// 2092:             DNL bitfield: 0 0 0  codep:0x224c parp:0xc754 size:0x0008
// 2093:         EYE-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc768 size:0x0014
// 2094:           EYE-O bitfield: 0 0 0  codep:0x83dd parp:0xc786 size:0x0002
// 2095:              AI bitfield: 0 0 0  codep:0x224c parp:0xc78f size:0x0008
// 2096:          COMBAU bitfield: 0 0 0  codep:0x1ab5 parp:0xc7a2 size:0x0014
// 2097:          COMBAU bitfield: 0 0 0  codep:0x83dd parp:0xc7c1 size:0x0002
// 2098:          CSCALE bitfield: 0 0 0  codep:0x224c parp:0xc7ce size:0x0006
// 2099:             @NF bitfield: 0 0 0  codep:0x224c parp:0xc7dc size:0x0006
// 2100:      COMBAT-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc7f1 size:0x0014
// 2101:        COMBAT-O bitfield: 0 0 0  codep:0x83dd parp:0xc812 size:0x0002
// 2102:            (WAR bitfield: 0 0 0  codep:0x224c parp:0xc81d size:0x0008
// 2103:            (COM bitfield: 0 0 0  codep:0x224c parp:0xc82e size:0x0006
// 2104:             C&C bitfield: 0 0 0  codep:0x224c parp:0xc83c size:0x0008
// 2105:              ?J bitfield: 0 0 0  codep:0x224c parp:0xc84b size:0x0006
// 2106:            ?JMP bitfield: 0 0 0  codep:0x224c parp:0xc85a size:0x0008
// 2107:            COMB bitfield: 0 0 0  codep:0x224c parp:0xc86b size:0x0008
// 2108:             WAR bitfield: 0 0 0  codep:0x224c parp:0xc87b size:0x0008
// 2109:            END- bitfield: 0 0 0  codep:0x1ab5 parp:0xc88c size:0x0014
// 2110:            ENDI bitfield: 0 0 0  codep:0x83dd parp:0xc8a9 size:0x0002
// 2111:            HALL bitfield: 0 0 0  codep:0x224c parp:0xc8b4 size:0x0006
// 2112:            ?FRE bitfield: 0 0 0  codep:0x224c parp:0xc8c3 size:0x0006
// 2113:             DHL bitfield: 0 0 0  codep:0x224c parp:0xc8d1 size:0x0006
// 2114:            DUHL bitfield: 0 0 0  codep:0x224c parp:0xc8e0 size:0x0008
// 2115:            BOLT bitfield: 0 0 0  codep:0x224c parp:0xc8f1 size:0x0006
// 2116:            IUHL bitfield: 0 0 0  codep:0x224c parp:0xc900 size:0x0006
// 2117:       HMISC-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xc914 size:0x0014
// 2118:         HMISC-O bitfield: 0 0 0  codep:0x83dd parp:0xc934 size:0x0002
// 2119:             UFM bitfield: 0 0 0  codep:0x224c parp:0xc93e size:0x0006
// 2120:             USM bitfield: 0 0 0  codep:0x224c parp:0xc94c size:0x0006
// 2121:             NFM bitfield: 0 0 0  codep:0x224c parp:0xc95a size:0x0006
// 2122:             NSM bitfield: 0 0 0  codep:0x224c parp:0xc968 size:0x0006
// 2123:             .EX bitfield: 0 0 0  codep:0x224c parp:0xc976 size:0x0006
// 2124:            DMSG bitfield: 0 0 0  codep:0x224c parp:0xc985 size:0x0006
// 2125:            D-UP bitfield: 0 0 0  codep:0x224c parp:0xc994 size:0x0006
// 2126:            ORB> bitfield: 0 0 0  codep:0x224c parp:0xc9a3 size:0x0006
// 2127:            >ORB bitfield: 0 0 0  codep:0x224c parp:0xc9b2 size:0x0006
// 2128:            OSET bitfield: 0 0 0  codep:0x224c parp:0xc9c1 size:0x0006
// 2129:           ORBUP bitfield: 0 0 0  codep:0x224c parp:0xc9d1 size:0x0008
// 2130:         TRAK-EN bitfield: 0 0 0  codep:0x224c parp:0xc9e5 size:0x001e
// 2131:           !'EXT bitfield: 0 0 0  codep:0x224c parp:0xca0d size:0x0006
// 2132:          (CTXT) bitfield: 0 0 0  codep:0x224c parp:0xca1e size:0x0006
// 2133:         CONTEXT bitfield: 0 0 0  codep:0x224c parp:0xca30 size:0x0008
// 2134:         +A-VESS bitfield: 0 0 0  codep:0x224c parp:0xca44 size:0x0006
// 2135:         MTRAK-E bitfield: 0 0 0  codep:0x224c parp:0xca56 size:0x0008
// 2136:         SHPMOV- bitfield: 0 0 0  codep:0x1ab5 parp:0xca6a size:0x0014
// 2137:           HYPER bitfield: 0 0 0  codep:0x83dd parp:0xca88 size:0x0002
// 2138:             FLY bitfield: 0 0 0  codep:0x224c parp:0xca92 size:0x0008
// 2139:             MAN bitfield: 0 0 0  codep:0x224c parp:0xcaa2 size:0x0030
// 2140:             .AS bitfield: 0 0 0  codep:0x224c parp:0xcada size:0x0006
// 2141:          JMPSHP bitfield: 0 0 0  codep:0x224c parp:0xcaeb size:0x0006
// 2142:          UNNEST bitfield: 0 0 0  codep:0x224c parp:0xcafc size:0x0006
// 2143:           >NEST bitfield: 0 0 0  codep:0x224c parp:0xcb0c size:0x0006
// 2144:          GET-HA bitfield: 0 0 0  codep:0x224c parp:0xcb1d size:0x0006
// 2145:          OV.MVS bitfield: 0 0 0  codep:0x224c parp:0xcb2e size:0x0006
// 2146:          S>PORT bitfield: 0 0 0  codep:0x224c parp:0xcb3f size:0x0008
// 2147:           USE-E bitfield: 0 0 0  codep:0x224c parp:0xcb51 size:0x0002
// 2148:      UNK_0xcb55 bitfield: 0 0 0  codep:0xe7ca parp:0xcb55 size:0x0002
// 2149:          MUSE-E bitfield: 0 0 0  codep:0x224c parp:0xcb62 size:0x0008
// 2150:             ACR bitfield: 0 0 0  codep:0x1ab5 parp:0xcb72 size:0x0014
// 2151:             ACR bitfield: 0 0 0  codep:0x83dd parp:0xcb8e size:0x0002
// 2152:             U-A bitfield: 0 0 0  codep:0x224c parp:0xcb98 size:0x0006
// 2153:            PFIL bitfield: 0 0 0  codep:0x1ab5 parp:0xcba7 size:0x0014
// 2154:            PFIL bitfield: 0 0 0  codep:0x83dd parp:0xcbc4 size:0x0002
// 2155:            U-PF bitfield: 0 0 0  codep:0x224c parp:0xcbcf size:0x0006
// 2156:         SHIP-GR bitfield: 0 0 0  codep:0x1ab5 parp:0xcbe1 size:0x0014
// 2157:         SHIP-GR bitfield: 0 0 0  codep:0x83dd parp:0xcc01 size:0x0002
// 2158:         OV.MASS bitfield: 0 0 0  codep:0x224c parp:0xcc0f size:0x0006
// 2159:          OV.ACC bitfield: 0 0 0  codep:0x224c parp:0xcc20 size:0x0006
// 2160:         OV.PODS bitfield: 0 0 0  codep:0x224c parp:0xcc32 size:0x0006
// 2161:         OV.SHIP bitfield: 0 0 0  codep:0x224c parp:0xcc44 size:0x0006
// 2162:         OVBALAN bitfield: 0 0 0  codep:0x224c parp:0xcc56 size:0x0006
// 2163:         OV.CONF bitfield: 0 0 0  codep:0x224c parp:0xcc68 size:0x0006
// 2164:         CONFIG- bitfield: 0 0 0  codep:0x1ab5 parp:0xcc7a size:0x0014
// 2165:       CONFIG-OV bitfield: 0 0 0  codep:0x83dd parp:0xcc9c size:0x0002
// 2166:            U-SC bitfield: 0 0 0  codep:0x224c parp:0xcca7 size:0x0006
// 2167:          TD-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xccb8 size:0x0014
// 2168:           TD-OV bitfield: 0 0 0  codep:0x83dd parp:0xccd6 size:0x0002
// 2169:            U-TD bitfield: 0 0 0  codep:0x224c parp:0xcce1 size:0x0006
// 2170:            TOSS bitfield: 0 0 0  codep:0x224c parp:0xccf0 size:0x0006
// 2171:          KEY-EL bitfield: 0 0 0  codep:0x224c parp:0xcd01 size:0x0006
// 2172:          OP-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xcd12 size:0x0014
// 2173:           OP-OV bitfield: 0 0 0  codep:0x83dd parp:0xcd30 size:0x0002
// 2174:            U-OP bitfield: 0 0 0  codep:0x224c parp:0xcd3b size:0x0006
// 2175:            VITA bitfield: 0 0 0  codep:0x1ab5 parp:0xcd4a size:0x0014
// 2176:         VITA-OV bitfield: 0 0 0  codep:0x83dd parp:0xcd6a size:0x0002
// 2177:             DIO bitfield: 0 0 0  codep:0x224c parp:0xcd74 size:0x0006
// 2178:        MAPS-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xcd87 size:0x0014
// 2179:           MAPS- bitfield: 0 0 0  codep:0x83dd parp:0xcda5 size:0x0002
// 2180:            MAPS bitfield: 0 0 0  codep:0x224c parp:0xcdb0 size:0x0006
// 2181:           .STOR bitfield: 0 0 0  codep:0x224c parp:0xcdc0 size:0x0006
// 2182:           (2X2) bitfield: 0 0 0  codep:0x224c parp:0xcdd0 size:0x0006
// 2183:           2X2CO bitfield: 0 0 0  codep:0x224c parp:0xcde0 size:0x0008
// 2184:           (4X4) bitfield: 0 0 0  codep:0x224c parp:0xcdf2 size:0x0006
// 2185:           4X4CO bitfield: 0 0 0  codep:0x224c parp:0xce02 size:0x0008
// 2186:           (8X8) bitfield: 0 0 0  codep:0x224c parp:0xce14 size:0x0006
// 2187:           8X8CO bitfield: 0 0 0  codep:0x224c parp:0xce24 size:0x0008
// 2188:             STO bitfield: 0 0 0  codep:0x1ab5 parp:0xce34 size:0x0014
// 2189:             STO bitfield: 0 0 0  codep:0x83dd parp:0xce50 size:0x0002
// 2190:             DO. bitfield: 0 0 0  codep:0x224c parp:0xce5a size:0x0006
// 2191:             INJ bitfield: 0 0 0  codep:0x224c parp:0xce68 size:0x0006
// 2192:         DRONE-V bitfield: 0 0 0  codep:0x1ab5 parp:0xce7a size:0x0014
// 2193:         DRONE-O bitfield: 0 0 0  codep:0x83dd parp:0xce9a size:0x0002
// 2194:             DRN bitfield: 0 0 0  codep:0x224c parp:0xcea4 size:0x0008
// 2195:           RECAL bitfield: 0 0 0  codep:0x224c parp:0xceb6 size:0x0008
// 2196:           DRONE bitfield: 0 0 0  codep:0x224c parp:0xcec8 size:0x0008
// 2197:         TVCON-V bitfield: 0 0 0  codep:0x1ab5 parp:0xcedc size:0x0014
// 2198:        TVCON-OV bitfield: 0 0 0  codep:0x83dd parp:0xcefd size:0x0002
// 2199:            DOST bitfield: 0 0 0  codep:0x224c parp:0xcf08 size:0x0006
// 2200:        DO-STORM bitfield: 0 0 0  codep:0x224c parp:0xcf1b size:0x0008
// 2201:             .ST bitfield: 0 0 0  codep:0x224c parp:0xcf2b size:0x0006
// 2202:             .WH bitfield: 0 0 0  codep:0x224c parp:0xcf39 size:0x0006
// 2203:             .DA bitfield: 0 0 0  codep:0x224c parp:0xcf47 size:0x0006
// 2204:             .EN bitfield: 0 0 0  codep:0x224c parp:0xcf55 size:0x0006
// 2205:             .CA bitfield: 0 0 0  codep:0x224c parp:0xcf63 size:0x0006
// 2206:             .DI bitfield: 0 0 0  codep:0x224c parp:0xcf71 size:0x0006
// 2207:            SEED bitfield: 0 0 0  codep:0x1ab5 parp:0xcf80 size:0x0014
// 2208:            SEED bitfield: 0 0 0  codep:0x83dd parp:0xcf9d size:0x0002
// 2209:            POPU bitfield: 0 0 0  codep:0x224c parp:0xcfa8 size:0x0006
// 2210:           ITEMS bitfield: 0 0 0  codep:0x1ab5 parp:0xcfb8 size:0x0014
// 2211:        ITEMS-OV bitfield: 0 0 0  codep:0x83dd parp:0xcfd9 size:0x0002
// 2212:          /ITEMS bitfield: 0 0 0  codep:0x224c parp:0xcfe6 size:0x0006
// 2213:         >DEBRIS bitfield: 0 0 0  codep:0x224c parp:0xcff8 size:0x0006
// 2214:          ICON-V bitfield: 0 0 0  codep:0x1ab5 parp:0xd009 size:0x0002
// 2215:      UNK_0xd00d bitfield: 0 0 0  codep:0xcfba parp:0xd00d size:0x0010
// 2216:          LISTIC bitfield: 0 0 0  codep:0x83dd parp:0xd028 size:0x0002
// 2217:           ICONS bitfield: 0 0 0  codep:0x224c parp:0xd034 size:0x0006
// 2218:        MOVE-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xd047 size:0xfffffff3
// 2219:      UNK_0xd03c bitfield: 0 0 0  codep:0xcfee parp:0xd03c size:0x000d
// 2220:      UNK_0xd04b bitfield: 0 0 0  codep:0xd00b parp:0xd04b size:0x0010
// 2221:         MOVE-OV bitfield: 0 0 0  codep:0x83dd parp:0xd067 size:0x0002
// 2222:            TVMO bitfield: 0 0 0  codep:0x224c parp:0xd072 size:0x0006
// 2223:            ?POP bitfield: 0 0 0  codep:0x224c parp:0xd081 size:0x0006
// 2224:            !E/M bitfield: 0 0 0  codep:0x224c parp:0xd090 size:0x0006
// 2225:            TELE bitfield: 0 0 0  codep:0x224c parp:0xd09f size:0x0006
// 2226:            TELE bitfield: 0 0 0  codep:0x224c parp:0xd0ae size:0x0008
// 2227:            T.V. bitfield: 0 0 0  codep:0x1ab5 parp:0xd0bf size:0x0014
// 2228:           TV-OV bitfield: 0 0 0  codep:0x83dd parp:0xd0dd size:0x0002
// 2229:           TV-DI bitfield: 0 0 0  codep:0x224c parp:0xd0e9 size:0x0006
// 2230:           (TVSE bitfield: 0 0 0  codep:0x224c parp:0xd0f9 size:0x0006
// 2231:           (CLEA bitfield: 0 0 0  codep:0x224c parp:0xd109 size:0x0006
// 2232:           (HEAV bitfield: 0 0 0  codep:0x224c parp:0xd119 size:0x0006
// 2233:           (WEAP bitfield: 0 0 0  codep:0x224c parp:0xd129 size:0x0006
// 2234:           (TALK bitfield: 0 0 0  codep:0x224c parp:0xd139 size:0x0006
// 2235:           HEAVE bitfield: 0 0 0  codep:0x224c parp:0xd149 size:0x000a
// 2236:         BEHAVIO bitfield: 0 0 0  codep:0x1ab5 parp:0xd15f size:0x0014
// 2237:           BEHAV bitfield: 0 0 0  codep:0x83dd parp:0xd17d size:0x0002
// 2238:           TVTAS bitfield: 0 0 0  codep:0x224c parp:0xd189 size:0x0006
// 2239:              TV bitfield: 0 0 0  codep:0x224c parp:0xd196 size:0x0006
// 2240:           (SIMU bitfield: 0 0 0  codep:0x224c parp:0xd1a6 size:0x0006
// 2241:           SIMUL bitfield: 0 0 0  codep:0x224c parp:0xd1b6 size:0x0008
// 2242:            FSTN bitfield: 0 0 0  codep:0x224c parp:0xd1c7 size:0x0006
// 2243:           DSTUN bitfield: 0 0 0  codep:0x224c parp:0xd1d7 size:0x0008
// 2244:         STP-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xd1eb size:0x0014
// 2245:          STP-OV bitfield: 0 0 0  codep:0x83dd parp:0xd20a size:0x0002
// 2246:           SECUR bitfield: 0 0 0  codep:0x224c parp:0xd216 size:0xfffffff6
// 2247:      UNK_0xd20e bitfield: 0 0 0  codep:0xd201 parp:0xd20e size:0x0000
// 2248:      UNK_0xd210 bitfield: 0 0 0  codep:0x5386 parp:0xd210 size:0xffffffff
// 2249:      UNK_0xd211 bitfield: 0 0 0  codep:0x4553 parp:0xd211 size:0x0000
// 2250:      UNK_0xd213 bitfield: 0 0 0  codep:0x5543 parp:0xd213 size:0x0009
// 2251:           SIC'E bitfield: 0 0 0  codep:0x224c parp:0xd226 size:0xfffffffc
// 2252:      UNK_0xd224 bitfield: 0 0 0  codep:0xc527 parp:0xd224 size:0x0008
// 2253:            2NDS bitfield: 0 0 0  codep:0x224c parp:0xd235 size:0x0006
// 2254:        LAUNCH-V bitfield: 0 0 0  codep:0x1ab5 parp:0xd248 size:0xfffffff3
// 2255:      UNK_0xd23d bitfield: 0 0 0  codep:0xd22e parp:0xd23d size:0x001f
// 2256:           LAUNC bitfield: 0 0 0  codep:0x83dd parp:0xd266 size:0x0002
// 2257:           OVCOU bitfield: 0 0 0  codep:0x224c parp:0xd272 size:0x0008
// 2258:           OVBAC bitfield: 0 0 0  codep:0x224c parp:0xd284 size:0x0008
// 2259:           .AIRL bitfield: 0 0 0  codep:0x224c parp:0xd296 size:0x0006
// 2260:         CAP-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xd2a8 size:0x0014
// 2261:           CAP-O bitfield: 0 0 0  codep:0x83dd parp:0xd2c6 size:0x0002
// 2262:           OV/IT bitfield: 0 0 0  codep:0x224c parp:0xd2d2 size:0x0006
// 2263:           OV/LA bitfield: 0 0 0  codep:0x224c parp:0xd2e2 size:0x0006
// 2264:           OV>DE bitfield: 0 0 0  codep:0x224c parp:0xd2f2 size:0x0006
// 2265:           OV/LO bitfield: 0 0 0  codep:0x224c parp:0xd302 size:0xfffffffd
// 2266:      UNK_0xd301 bitfield: 0 0 0  codep:0x4ccf parp:0xd301 size:0x0007
// 2267:         DOC-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xd314 size:0x0014
// 2268:          DOC-OV bitfield: 0 0 0  codep:0x83dd parp:0xd333 size:0x0002
// 2269:           OV/EX bitfield: 0 0 0  codep:0x224c parp:0xd33f size:0x0006
// 2270:           OV/TR bitfield: 0 0 0  codep:0x224c parp:0xd34f size:0x0006
// 2271:          AN-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xd360 size:0x0014
// 2272:           AN-OV bitfield: 0 0 0  codep:0x83dd parp:0xd37e size:0x0002
// 2273:           OV/AN bitfield: 0 0 0  codep:0x224c parp:0xd38a size:0x0006
// 2274:            *MAP bitfield: 0 0 0  codep:0x1ab5 parp:0xd399 size:0x0014
// 2275:         *MAP-OV bitfield: 0 0 0  codep:0x83dd parp:0xd3b9 size:0x0002
// 2276:           OV/ST bitfield: 0 0 0  codep:0x224c parp:0xd3c5 size:0x000c
// 2277:         JUMP-VO bitfield: 0 0 0  codep:0x1ab5 parp:0xd3dd size:0x0014
// 2278:         JUMP-OV bitfield: 0 0 0  codep:0x83dd parp:0xd3fd size:0x0002
// 2279:            JUMP bitfield: 0 0 0  codep:0x224c parp:0xd408 size:0x0006
// 2280:         LAND-VO bitfield: 0 0 0  codep:0x1ab5 parp:0xd41a size:0x0014
// 2281:           LAND- bitfield: 0 0 0  codep:0x83dd parp:0xd438 size:0x0002
// 2282:           TRY-L bitfield: 0 0 0  codep:0x224c parp:0xd444 size:0x0006
// 2283:           TRY-L bitfield: 0 0 0  codep:0x224c parp:0xd454 size:0x0006
// 2284:         BTN-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xd466 size:0x0014
// 2285:          BTN-OV bitfield: 0 0 0  codep:0x83dd parp:0xd485 size:0x0002
// 2286:           OVFLT bitfield: 0 0 0  codep:0x224c parp:0xd491 size:0x0006
// 2287:          CHKFLT bitfield: 0 0 0  codep:0x1ab5 parp:0xd4a2 size:0x0014
// 2288:           CHKFL bitfield: 0 0 0  codep:0x83dd parp:0xd4c0 size:0x0002
// 2289:           ?FLIG bitfield: 0 0 0  codep:0x224c parp:0xd4cc size:0x0006
// 2290:          PM-VOC bitfield: 0 0 0  codep:0x1ab5 parp:0xd4dd size:0x0014
// 2291:           PM-OV bitfield: 0 0 0  codep:0x83dd parp:0xd4fb size:0x0002
// 2292:           PORTM bitfield: 0 0 0  codep:0x224c parp:0xd507 size:0x0006
// 2293:            PPIC bitfield: 0 0 0  codep:0x224c parp:0xd516 size:0x0006
// 2294:            GAME bitfield: 0 0 0  codep:0x1ab5 parp:0xd525 size:0x0014
// 2295:         GAME-OV bitfield: 0 0 0  codep:0x83dd parp:0xd545 size:0x0002
// 2296:         STARTGA bitfield: 0 0 0  codep:0x224c parp:0xd553 size:0xfffffffc
// 2297:      UNK_0xd551 bitfield: 0 0 0  codep:0xc147 parp:0xd551 size:0x0008
// 2298:            ERR! bitfield: 0 0 0  codep:0x224c parp:0xd562 size:0x0006
// 2299:            MERR bitfield: 0 0 0  codep:0x224c parp:0xd571 size:0x0008
// 2300:         GAMEOPS bitfield: 0 0 0  codep:0x224c parp:0xd585 size:0x0008
// 2301:         GAMEOPM bitfield: 0 0 0  codep:0x224c parp:0xd599 size:0x0008
// 2302:            BOSS bitfield: 0 0 0  codep:0x224c parp:0xd5aa size:0x0006
// 2303:             DBS bitfield: 0 0 0  codep:0x224c parp:0xd5b8 size:0x0008
// 2304:         LET-THE bitfield: 0 0 0  codep:0x224c parp:0xd5cc size:0x0042
// 2305:      UNK_0xd610 bitfield: 0 0 0  codep:0x0000 parp:0xd610 size:0x04a6
// 2306:      UNK_0xdab8 bitfield: 0 0 0  codep:0x0000 parp:0xdab8 size:0x0024
// 2307:      UNK_0xdade bitfield: 0 0 0  codep:0x0000 parp:0xdade size:0x002e
// 2308:      UNK_0xdb0e bitfield: 0 0 0  codep:0x0000 parp:0xdb0e size:0x0001
// 2309:      UNK_0xdb11 bitfield: 0 0 0  codep:0x0000 parp:0xdb11 size:0x01cc
// 2310:      UNK_0xdcdf bitfield: 0 0 0  codep:0x0000 parp:0xdcdf size:0x0014
// 2311:      UNK_0xdcf5 bitfield: 0 0 0  codep:0x0000 parp:0xdcf5 size:0x0121
// 2312:      UNK_0xde18 bitfield: 0 0 0  codep:0x0000 parp:0xde18 size:0x0062
// 2313:      UNK_0xde7c bitfield: 0 0 0  codep:0x0000 parp:0xde7c size:0x0083
// 2314:      UNK_0xdf01 bitfield: 0 0 0  codep:0x0000 parp:0xdf01 size:0x002a
// 2315:      UNK_0xdf2d bitfield: 0 0 0  codep:0x0000 parp:0xdf2d size:0x000c
// 2316:      UNK_0xdf3b bitfield: 0 0 0  codep:0x0000 parp:0xdf3b size:0x0005
// 2317:      UNK_0xdf42 bitfield: 0 0 0  codep:0x0000 parp:0xdf42 size:0x0063
// 2318:      UNK_0xdfa7 bitfield: 0 0 0  codep:0x0000 parp:0xdfa7 size:0x006b
// 2319:      UNK_0xe014 bitfield: 0 0 0  codep:0x0000 parp:0xe014 size:0x000e
// 2320:      UNK_0xe024 bitfield: 0 0 0  codep:0x0000 parp:0xe024 size:0x002f
// 2321:      UNK_0xe055 bitfield: 0 0 0  codep:0x0000 parp:0xe055 size:0x0191
// 2322:      UNK_0xe1e8 bitfield: 0 0 0  codep:0x0000 parp:0xe1e8 size:0x00f0
// 2323:      UNK_0xe2da bitfield: 0 0 0  codep:0x0000 parp:0xe2da size:0x00cc
// 2324:      UNK_0xe3a8 bitfield: 0 0 0  codep:0x0000 parp:0xe3a8 size:0x0061
// 2325:      UNK_0xe40b bitfield: 0 0 0  codep:0x0000 parp:0xe40b size:0x00f4
// 2326:      UNK_0xe501 bitfield: 0 0 0  codep:0x0000 parp:0xe501 size:0x0144
// 2327:      UNK_0xe647 bitfield: 0 0 0  codep:0x0000 parp:0xe647 size:0x00b2
// 2328:      UNK_0xe6fb bitfield: 0 0 0  codep:0x0000 parp:0xe6fb size:0x0010
// 2329:      UNK_0xe70d bitfield: 0 0 0  codep:0x0000 parp:0xe70d size:0xffffffff
// 2330:      UNK_0xe70e bitfield: 0 0 0  codep:0x0000 parp:0xe70e size:0x0014
// 2331:      UNK_0xe724 bitfield: 0 0 0  codep:0x0000 parp:0xe724 size:0x001e
// 2332:      UNK_0xe744 bitfield: 0 0 0  codep:0x0000 parp:0xe744 size:0x0073
// 2333:      UNK_0xe7b9 bitfield: 0 0 0  codep:0x0000 parp:0xe7b9 size:0x0011
// 2334:      UNK_0xe7cc bitfield: 0 0 0  codep:0x0000 parp:0xe7cc size:0x00e8
// 2335:      UNK_0xe8b6 bitfield: 0 0 0  codep:0x0000 parp:0xe8b6 size:0x0113
// 2336:      UNK_0xe9cb bitfield: 0 0 0  codep:0x0000 parp:0xe9cb size:0x0047
// 2337:      UNK_0xea14 bitfield: 0 0 0  codep:0x0000 parp:0xea14 size:0x005d
// 2338:      UNK_0xea73 bitfield: 0 0 0  codep:0x0000 parp:0xea73 size:0x0007
// 2339:      UNK_0xea7c bitfield: 0 0 0  codep:0x0000 parp:0xea7c size:0x0022
// 2340:      UNK_0xeaa0 bitfield: 0 0 0  codep:0x0000 parp:0xeaa0 size:0x00b7
// 2341:      UNK_0xeb59 bitfield: 0 0 0  codep:0x0000 parp:0xeb59 size:0x0002
// 2342:      UNK_0xeb5d bitfield: 0 0 0  codep:0x0000 parp:0xeb5d size:0x0048
// 2343:      UNK_0xeba7 bitfield: 0 0 0  codep:0x0000 parp:0xeba7 size:0x0032
// 2344:      UNK_0xebdb bitfield: 0 0 0  codep:0x0000 parp:0xebdb size:0x003a
// 2345:      UNK_0xec17 bitfield: 0 0 0  codep:0x0000 parp:0xec17 size:0x00dc
// 2346:      UNK_0xecf5 bitfield: 0 0 0  codep:0x0000 parp:0xecf5 size:0x0007
// 2347:      UNK_0xecfe bitfield: 0 0 0  codep:0x0000 parp:0xecfe size:0x000c
// 2348:      UNK_0xed0c bitfield: 0 0 0  codep:0x0000 parp:0xed0c size:0x001a
// 2349:      UNK_0xed28 bitfield: 0 0 0  codep:0x0000 parp:0xed28 size:0x0046
// 2350:      UNK_0xed70 bitfield: 0 0 0  codep:0x0000 parp:0xed70 size:0x0006
// 2351:      UNK_0xed78 bitfield: 0 0 0  codep:0x0000 parp:0xed78 size:0x00ae
// 2352:      UNK_0xee28 bitfield: 0 0 0  codep:0x0000 parp:0xee28 size:0x001b
// 2353:      UNK_0xee45 bitfield: 0 0 0  codep:0x0000 parp:0xee45 size:0x000b
// 2354:      UNK_0xee52 bitfield: 0 0 0  codep:0x0000 parp:0xee52 size:0x0017
// 2355:      UNK_0xee6b bitfield: 0 0 0  codep:0x0000 parp:0xee6b size:0x0004
// 2356:      UNK_0xee71 bitfield: 0 0 0  codep:0x0000 parp:0xee71 size:0x0016
// 2357:      UNK_0xee89 bitfield: 0 0 0  codep:0x0000 parp:0xee89 size:0x0016
// 2358:      UNK_0xeea1 bitfield: 0 0 0  codep:0x0000 parp:0xeea1 size:0x0001
// 2359:      UNK_0xeea4 bitfield: 0 0 0  codep:0x0000 parp:0xeea4 size:0x002c
// 2360:      UNK_0xeed2 bitfield: 0 0 0  codep:0x0000 parp:0xeed2 size:0x000c
// 2361:      UNK_0xeee0 bitfield: 0 0 0  codep:0x0000 parp:0xeee0 size:0x000d
// 2362:      UNK_0xeeef bitfield: 0 0 0  codep:0x0000 parp:0xeeef size:0x0011
// 2363:      UNK_0xef02 bitfield: 0 0 0  codep:0x0000 parp:0xef02 size:0x0027
// 2364:      UNK_0xef2b bitfield: 0 0 0  codep:0x0000 parp:0xef2b size:0x0006
// 2365:      UNK_0xef33 bitfield: 0 0 0  codep:0x0000 parp:0xef33 size:0x0005
// 2366:      UNK_0xef3a bitfield: 0 0 0  codep:0x0000 parp:0xef3a size:0x0027
// 2367:      UNK_0xef63 bitfield: 0 0 0  codep:0x0000 parp:0xef63 size:0x0009
// 2368:      UNK_0xef6e bitfield: 0 0 0  codep:0x0000 parp:0xef6e size:0x001b
// 2369:      UNK_0xef8b bitfield: 0 0 0  codep:0x0000 parp:0xef8b size:0x0020
// 2370:      UNK_0xefad bitfield: 0 0 0  codep:0x0000 parp:0xefad size:0x0004
// 2371:      UNK_0xefb3 bitfield: 0 0 0  codep:0x0000 parp:0xefb3 size:0x002c
// 2372:      UNK_0xefe1 bitfield: 0 0 0  codep:0x0000 parp:0xefe1 size:0x0002
// 2373:      UNK_0xefe5 bitfield: 0 0 0  codep:0x0000 parp:0xefe5 size:0xffffffff
// 2374:      UNK_0xefe6 bitfield: 0 0 0  codep:0x0000 parp:0xefe6 size:0x0018
// 2375:      UNK_0xf000 bitfield: 0 0 0  codep:0x0000 parp:0xf000 size:0x0000
// 2376:      UNK_0xf002 bitfield: 0 0 0  codep:0x0000 parp:0xf002 size:0x000c
// 2377:      UNK_0xf010 bitfield: 0 0 0  codep:0x0000 parp:0xf010 size:0x0001
// 2378:      UNK_0xf013 bitfield: 0 0 0  codep:0x0000 parp:0xf013 size:0x0002
// 2379:      UNK_0xf017 bitfield: 0 0 0  codep:0x0000 parp:0xf017 size:0xffffffff
// 2380:      UNK_0xf018 bitfield: 0 0 0  codep:0x0000 parp:0xf018 size:0x0012
// 2381:      UNK_0xf02c bitfield: 0 0 0  codep:0x0000 parp:0xf02c size:0x0001
// 2382:      UNK_0xf02f bitfield: 0 0 0  codep:0x0000 parp:0xf02f size:0x0016
// 2383:      UNK_0xf047 bitfield: 0 0 0  codep:0x0000 parp:0xf047 size:0xffffffff
// 2384:      UNK_0xf048 bitfield: 0 0 0  codep:0x0000 parp:0xf048 size:0x0019
// 2385:      UNK_0xf063 bitfield: 0 0 0  codep:0x0000 parp:0xf063 size:0x0057
// 2386:      UNK_0xf0bc bitfield: 0 0 0  codep:0x0000 parp:0xf0bc size:0x0002
// 2387:      UNK_0xf0c0 bitfield: 0 0 0  codep:0x0000 parp:0xf0c0 size:0x0009
// 2388:      UNK_0xf0cb bitfield: 0 0 0  codep:0x0000 parp:0xf0cb size:0x0004
// 2389:      UNK_0xf0d1 bitfield: 0 0 0  codep:0x0000 parp:0xf0d1 size:0x0004
// 2390:      UNK_0xf0d7 bitfield: 0 0 0  codep:0x0000 parp:0xf0d7 size:0x0002
// 2391:      UNK_0xf0db bitfield: 0 0 0  codep:0x0000 parp:0xf0db size:0x0001
// 2392:      UNK_0xf0de bitfield: 0 0 0  codep:0x0000 parp:0xf0de size:0x0010
// 2393:      UNK_0xf0f0 bitfield: 0 0 0  codep:0x0000 parp:0xf0f0 size:0x0016
// 2394:      UNK_0xf108 bitfield: 0 0 0  codep:0x0000 parp:0xf108 size:0x0010
// 2395:      UNK_0xf11a bitfield: 0 0 0  codep:0x0000 parp:0xf11a size:0x0008
// 2396:      UNK_0xf124 bitfield: 0 0 0  codep:0x0000 parp:0xf124 size:0x002b
// 2397:      UNK_0xf151 bitfield: 0 0 0  codep:0x0000 parp:0xf151 size:0x0006
// 2398:      UNK_0xf159 bitfield: 0 0 0  codep:0x0000 parp:0xf159 size:0x0005
// 2399:      UNK_0xf160 bitfield: 0 0 0  codep:0x0000 parp:0xf160 size:0x0018
// 2400:      UNK_0xf17a bitfield: 0 0 0  codep:0x0000 parp:0xf17a size:0x000d
// 2401:      UNK_0xf189 bitfield: 0 0 0  codep:0x0000 parp:0xf189 size:0x0006
// 2402:      UNK_0xf191 bitfield: 0 0 0  codep:0x0000 parp:0xf191 size:0xffffffff
// 2403:      UNK_0xf192 bitfield: 0 0 0  codep:0x0000 parp:0xf192 size:0x0020
// 2404:      UNK_0xf1b4 bitfield: 0 0 0  codep:0x0000 parp:0xf1b4 size:0x0010
// 2405:      UNK_0xf1c6 bitfield: 0 0 0  codep:0x0000 parp:0xf1c6 size:0x001c
// 2406:      UNK_0xf1e4 bitfield: 0 0 0  codep:0x0000 parp:0xf1e4 size:0x002c
// 2407:      UNK_0xf212 bitfield: 0 0 0  codep:0x0000 parp:0xf212 size:0x0002
// 2408:      UNK_0xf216 bitfield: 0 0 0  codep:0x0000 parp:0xf216 size:0x0005
// 2409:      UNK_0xf21d bitfield: 0 0 0  codep:0x0000 parp:0xf21d size:0x0019
// 2410:      UNK_0xf238 bitfield: 0 0 0  codep:0x0000 parp:0xf238 size:0x0000
// 2411:      UNK_0xf23a bitfield: 0 0 0  codep:0x0000 parp:0xf23a size:0x0007
// 2412:      UNK_0xf243 bitfield: 0 0 0  codep:0x0000 parp:0xf243 size:0x0002
// 2413:      UNK_0xf247 bitfield: 0 0 0  codep:0x0000 parp:0xf247 size:0x0009
// 2414:      UNK_0xf252 bitfield: 0 0 0  codep:0x0000 parp:0xf252 size:0x000b
// 2415:      UNK_0xf25f bitfield: 0 0 0  codep:0x0000 parp:0xf25f size:0x0007
// 2416:      UNK_0xf268 bitfield: 0 0 0  codep:0x0000 parp:0xf268 size:0x0000
// 2417:      UNK_0xf26a bitfield: 0 0 0  codep:0x0000 parp:0xf26a size:0xffffffff
// 2418:      UNK_0xf26b bitfield: 0 0 0  codep:0x0000 parp:0xf26b size:0x0029
// 2419:      UNK_0xf296 bitfield: 0 0 0  codep:0x0000 parp:0xf296 size:0x0001
// 2420:      UNK_0xf299 bitfield: 0 0 0  codep:0x0000 parp:0xf299 size:0x0002
// 2421:      UNK_0xf29d bitfield: 0 0 0  codep:0x0000 parp:0xf29d size:0x000c
// 2422:      UNK_0xf2ab bitfield: 0 0 0  codep:0x0000 parp:0xf2ab size:0x000c
// 2423:      UNK_0xf2b9 bitfield: 0 0 0  codep:0x0000 parp:0xf2b9 size:0x0008
// 2424:      UNK_0xf2c3 bitfield: 0 0 0  codep:0x0000 parp:0xf2c3 size:0x002b
// 2425:      UNK_0xf2f0 bitfield: 0 0 0  codep:0x0000 parp:0xf2f0 size:0x003f
// 2426:      UNK_0xf331 bitfield: 0 0 0  codep:0x0000 parp:0xf331 size:0x0019
// 2427:      UNK_0xf34c bitfield: 0 0 0  codep:0x0000 parp:0xf34c size:0x0004
// 2428:      UNK_0xf352 bitfield: 0 0 0  codep:0x0000 parp:0xf352 size:0x0000
// 2429:      UNK_0xf354 bitfield: 0 0 0  codep:0x0000 parp:0xf354 size:0x0001
// 2430:      UNK_0xf357 bitfield: 0 0 0  codep:0x0000 parp:0xf357 size:0x000b
// 2431:      UNK_0xf364 bitfield: 0 0 0  codep:0x0000 parp:0xf364 size:0x0003
// 2432:      UNK_0xf369 bitfield: 0 0 0  codep:0x0000 parp:0xf369 size:0x0010
// 2433:      UNK_0xf37b bitfield: 0 0 0  codep:0x0000 parp:0xf37b size:0x0004
// 2434:      UNK_0xf381 bitfield: 0 0 0  codep:0x0000 parp:0xf381 size:0x0013
// 2435:      UNK_0xf396 bitfield: 0 0 0  codep:0x0000 parp:0xf396 size:0x0001
// 2436:      UNK_0xf399 bitfield: 0 0 0  codep:0x0000 parp:0xf399 size:0x0004
// 2437:      UNK_0xf39f bitfield: 0 0 0  codep:0x0000 parp:0xf39f size:0x0008
// 2438:      UNK_0xf3a9 bitfield: 0 0 0  codep:0x0000 parp:0xf3a9 size:0x0009
// 2439:      UNK_0xf3b4 bitfield: 0 0 0  codep:0x0000 parp:0xf3b4 size:0x0002
// 2440:      UNK_0xf3b8 bitfield: 0 0 0  codep:0x0000 parp:0xf3b8 size:0x0019
// 2441:      UNK_0xf3d3 bitfield: 0 0 0  codep:0x0000 parp:0xf3d3 size:0x003f
// 2442:      UNK_0xf414 bitfield: 0 0 0  codep:0x0000 parp:0xf414 size:0xffffffff
// 2443:      UNK_0xf415 bitfield: 0 0 0  codep:0x0000 parp:0xf415 size:0x0000
// 2444:      UNK_0xf417 bitfield: 0 0 0  codep:0x0000 parp:0xf417 size:0x0005
// 2445:      UNK_0xf41e bitfield: 0 0 0  codep:0x0000 parp:0xf41e size:0x0018
// 2446:      UNK_0xf438 bitfield: 0 0 0  codep:0x0000 parp:0xf438 size:0x000c
// 2447:      UNK_0xf446 bitfield: 0 0 0  codep:0x0000 parp:0xf446 size:0x0009
// 2448:      UNK_0xf451 bitfield: 0 0 0  codep:0x0000 parp:0xf451 size:0xffffffff
// 2449:      UNK_0xf452 bitfield: 0 0 0  codep:0x0000 parp:0xf452 size:0x0008
// 2450:      UNK_0xf45c bitfield: 0 0 0  codep:0x0000 parp:0xf45c size:0x0000
// 2451:      UNK_0xf45e bitfield: 0 0 0  codep:0x0000 parp:0xf45e size:0x0003
// 2452:      UNK_0xf463 bitfield: 0 0 0  codep:0x0000 parp:0xf463 size:0x0000
// 2453:      UNK_0xf465 bitfield: 0 0 0  codep:0x0000 parp:0xf465 size:0x0002
// 2454:      UNK_0xf469 bitfield: 0 0 0  codep:0x0000 parp:0xf469 size:0x0006
// 2455:      UNK_0xf471 bitfield: 0 0 0  codep:0x0000 parp:0xf471 size:0x000b
// 2456:      UNK_0xf47e bitfield: 0 0 0  codep:0x0000 parp:0xf47e size:0x0008
// 2457:      UNK_0xf488 bitfield: 0 0 0  codep:0x0000 parp:0xf488 size:0x0007
// 2458:      UNK_0xf491 bitfield: 0 0 0  codep:0x0000 parp:0xf491 size:0x0005
// 2459:      UNK_0xf498 bitfield: 0 0 0  codep:0x0000 parp:0xf498 size:0x0000
// 2460:      UNK_0xf49a bitfield: 0 0 0  codep:0x0000 parp:0xf49a size:0x000c
// 2461:      UNK_0xf4a8 bitfield: 0 0 0  codep:0x0000 parp:0xf4a8 size:0x0001
// 2462:      UNK_0xf4ab bitfield: 0 0 0  codep:0x0000 parp:0xf4ab size:0x000c
// 2463:      UNK_0xf4b9 bitfield: 0 0 0  codep:0x0000 parp:0xf4b9 size:0x0006
// 2464:      UNK_0xf4c1 bitfield: 0 0 0  codep:0x0000 parp:0xf4c1 size:0x0004
// 2465:      UNK_0xf4c7 bitfield: 0 0 0  codep:0x0000 parp:0xf4c7 size:0xffffffff
// 2466:      UNK_0xf4c8 bitfield: 0 0 0  codep:0x0000 parp:0xf4c8 size:0x0000
// 2467:      UNK_0xf4ca bitfield: 0 0 0  codep:0x0000 parp:0xf4ca size:0x0004
// 2468:      UNK_0xf4d0 bitfield: 0 0 0  codep:0x0000 parp:0xf4d0 size:0xffffffff
// 2469:      UNK_0xf4d1 bitfield: 0 0 0  codep:0x0000 parp:0xf4d1 size:0x0000
// 2470:      UNK_0xf4d3 bitfield: 0 0 0  codep:0x0000 parp:0xf4d3 size:0x0002
// 2471:      UNK_0xf4d7 bitfield: 0 0 0  codep:0x0000 parp:0xf4d7 size:0x0000
// 2472:      UNK_0xf4d9 bitfield: 0 0 0  codep:0x0000 parp:0xf4d9 size:0x0000
// 2473:      UNK_0xf4db bitfield: 0 0 0  codep:0x0000 parp:0xf4db size:0xffffffff
// 2474:      UNK_0xf4dc bitfield: 0 0 0  codep:0x0000 parp:0xf4dc size:0x0003
// 2475:      UNK_0xf4e1 bitfield: 0 0 0  codep:0x0000 parp:0xf4e1 size:0x0003
// 2476:      UNK_0xf4e6 bitfield: 0 0 0  codep:0x0000 parp:0xf4e6 size:0x0006
// 2477:      UNK_0xf4ee bitfield: 0 0 0  codep:0x0000 parp:0xf4ee size:0x0001
// 2478:      UNK_0xf4f1 bitfield: 0 0 0  codep:0x0000 parp:0xf4f1 size:0xffffffff
// 2479:      UNK_0xf4f2 bitfield: 0 0 0  codep:0x0000 parp:0xf4f2 size:0x0000
// 2480:      UNK_0xf4f4 bitfield: 0 0 0  codep:0x0000 parp:0xf4f4 size:0xffffffff
// 2481:      UNK_0xf4f5 bitfield: 0 0 0  codep:0x0000 parp:0xf4f5 size:0x0000
// 2482:      UNK_0xf4f7 bitfield: 0 0 0  codep:0x0000 parp:0xf4f7 size:0xffffffff
// 2483:      UNK_0xf4f8 bitfield: 0 0 0  codep:0x0000 parp:0xf4f8 size:0x0002
// 2484:      UNK_0xf4fc bitfield: 0 0 0  codep:0x0000 parp:0xf4fc size:0xffffffff
// 2485:      UNK_0xf4fd bitfield: 0 0 0  codep:0x0000 parp:0xf4fd size:0x0000
// 2486:      UNK_0xf4ff bitfield: 0 0 0  codep:0x0000 parp:0xf4ff size:0xffffffff
// 2487:      UNK_0xf500 bitfield: 0 0 0  codep:0x0000 parp:0xf500 size:0xffffffff
// 2488:      UNK_0xf501 bitfield: 0 0 0  codep:0x0000 parp:0xf501 size:0xffffffff
// 2489:      UNK_0xf502 bitfield: 0 0 0  codep:0x0000 parp:0xf502 size:0x0001
// 2490:      UNK_0xf505 bitfield: 0 0 0  codep:0x0000 parp:0xf505 size:0xffffffff
// 2491:      UNK_0xf506 bitfield: 0 0 0  codep:0x0000 parp:0xf506 size:0x0000
// 2492:      UNK_0xf508 bitfield: 0 0 0  codep:0x0000 parp:0xf508 size:0xffffffff
// 2493:      UNK_0xf509 bitfield: 0 0 0  codep:0x0000 parp:0xf509 size:0x0000
// 2494:      UNK_0xf50b bitfield: 0 0 0  codep:0x0000 parp:0xf50b size:0x0000
// 2495:      UNK_0xf50d bitfield: 0 0 0  codep:0x0000 parp:0xf50d size:0xffffffff
// 2496:      UNK_0xf50e bitfield: 0 0 0  codep:0x0000 parp:0xf50e size:0x0000
// 2497:      UNK_0xf510 bitfield: 0 0 0  codep:0x0000 parp:0xf510 size:0xffffffff
// 2498:      UNK_0xf511 bitfield: 0 0 0  codep:0x0000 parp:0xf511 size:0x0000
// 2499:      UNK_0xf513 bitfield: 0 0 0  codep:0x0000 parp:0xf513 size:0xffffffff
// 2500:      UNK_0xf514 bitfield: 0 0 0  codep:0x0000 parp:0xf514 size:0xffffffff
// 2501:      UNK_0xf515 bitfield: 0 0 0  codep:0x0000 parp:0xf515 size:0xffffffff
// 2502:      UNK_0xf516 bitfield: 0 0 0  codep:0x0000 parp:0xf516 size:0xffffffff
// 2503:      UNK_0xf517 bitfield: 0 0 0  codep:0x0000 parp:0xf517 size:0x0003
// 2504:      UNK_0xf51c bitfield: 0 0 0  codep:0x0000 parp:0xf51c size:0x0002
// 2505:      UNK_0xf520 bitfield: 0 0 0  codep:0x0000 parp:0xf520 size:0x0006
// 2506:      UNK_0xf528 bitfield: 0 0 0  codep:0x0000 parp:0xf528 size:0x0001
// 2507:      UNK_0xf52b bitfield: 0 0 0  codep:0x0000 parp:0xf52b size:0xffffffff
// 2508:      UNK_0xf52c bitfield: 0 0 0  codep:0x0000 parp:0xf52c size:0xffffffff
// 2509:      UNK_0xf52d bitfield: 0 0 0  codep:0x0000 parp:0xf52d size:0xffffffff
// 2510:      UNK_0xf52e bitfield: 0 0 0  codep:0x0000 parp:0xf52e size:0xffffffff
// 2511:      UNK_0xf52f bitfield: 0 0 0  codep:0x0000 parp:0xf52f size:0xffffffff
// 2512:      UNK_0xf530 bitfield: 0 0 0  codep:0x0000 parp:0xf530 size:0x0000
// 2513:      UNK_0xf532 bitfield: 0 0 0  codep:0x0000 parp:0xf532 size:0xffffffff
// 2514:      UNK_0xf533 bitfield: 0 0 0  codep:0x0000 parp:0xf533 size:0x0001
// 2515:      UNK_0xf536 bitfield: 0 0 0  codep:0x0000 parp:0xf536 size:0xffffffff
// 2516:      UNK_0xf537 bitfield: 0 0 0  codep:0x0000 parp:0xf537 size:0x0001
// 2517:      UNK_0xf53a bitfield: 0 0 0  codep:0x0000 parp:0xf53a size:0xffffffff
// 2518:      UNK_0xf53b bitfield: 0 0 0  codep:0x0000 parp:0xf53b size:0xffffffff
// 2519:      UNK_0xf53c bitfield: 0 0 0  codep:0x0000 parp:0xf53c size:0xffffffff
// 2520:      UNK_0xf53d bitfield: 0 0 0  codep:0x0000 parp:0xf53d size:0x0004
// 2521:      UNK_0xf543 bitfield: 0 0 0  codep:0x0000 parp:0xf543 size:0xffffffff
// 2522:      UNK_0xf544 bitfield: 0 0 0  codep:0x0000 parp:0xf544 size:0xffffffff
// 2523:      UNK_0xf545 bitfield: 0 0 0  codep:0x0000 parp:0xf545 size:0x0000
// 2524:      UNK_0xf547 bitfield: 0 0 0  codep:0x0000 parp:0xf547 size:0x0004
// 2525:      UNK_0xf54d bitfield: 0 0 0  codep:0x0000 parp:0xf54d size:0x0002
// 2526:      UNK_0xf551 bitfield: 0 0 0  codep:0x0000 parp:0xf551 size:0xffffffff
// 2527:      UNK_0xf552 bitfield: 0 0 0  codep:0x0000 parp:0xf552 size:0x0000
// 2528:      UNK_0xf554 bitfield: 0 0 0  codep:0x0000 parp:0xf554 size:0xffffffff
// 2529:      UNK_0xf555 bitfield: 0 0 0  codep:0x0000 parp:0xf555 size:0x0001
// 2530:      UNK_0xf558 bitfield: 0 0 0  codep:0x0000 parp:0xf558 size:0x02b4
// 2531:      UNK_0xf80e bitfield: 0 0 0  codep:0x0000 parp:0xf80e size:0x0035
// 2532:      UNK_0xf845 bitfield: 0 0 0  codep:0x0000 parp:0xf845 size:0x01c9
// 2533:      UNK_0xfa10 bitfield: 0 0 0  codep:0x0000 parp:0xfa10 size:0x0002
// 2534:      UNK_0xfa14 bitfield: 0 0 0  codep:0x0000 parp:0xfa14 size:0xffffffff
// 2535:      UNK_0xfa15 bitfield: 0 0 0  codep:0x0000 parp:0xfa15 size:0x002f
// 2536:      UNK_0xfa46 bitfield: 0 0 0  codep:0x0000 parp:0xfa46 size:0xffffdbaa

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char (TIME)[104] = {0x00, 0x00, 0xbf, 0x35, 0x08, 0x00, 0x2e, 0x81, 0x06, 0x8a, 0x01, 0x37, 0x00, 0x2e, 0x83, 0x16, 0x88, 0x01, 0x00, 0x2e, 0xc7, 0x06, 0x93, 0x01, 0x37, 0x00, 0x2e, 0xff, 0x0e, 0x8c, 0x01, 0x75, 0x0e, 0x2e, 0xc7, 0x06, 0x8c, 0x01, 0x0f, 0x00, 0x2e, 0xc7, 0x06, 0x93, 0x01, 0x36, 0x00, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x80, 0x05, 0x8b, 0x2c, 0x62, 0x66, 0xc4, 0x02, 0x58, 0x40, 0x50, 0x29, 0xc0, 0x29, 0xd2, 0xcf, 0x31, 0xdb, 0xf7, 0xf3, 0xc3, 0x58, 0x8b, 0xc8, 0x81, 0xe8, 0xd0, 0x01, 0x75, 0x06, 0xb8, 0xc7, 0x01, 0xe9, 0x04, 0x00, 0xb8, 0xc4, 0x01, 0x41, 0x8c, 0xda, 0x31, 0xdb, 0x8e, 0xdb, 0x89, 0x07, 0x8e, 0xda, 0x51, 0xcf};
unsigned char OPERATOR[132] = {0xf4, 0xf6, 0xd0, 0xf7, 0xf0, 0xd5, 0xe6, 0x39, 0x00, 0x00, 0x31, 0x00, 0x27, 0xd5, 0x84, 0x00, 0x74, 0x00, 0x0c, 0x00, 0xf4, 0xf6, 0xd4, 0x03, 0x00, 0xb8, 0x18, 0x00, 0x00, 0x00, 0x18, 0x4f, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x03, 0xbc, 0x03, 0x0a, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x81, 0xd7, 0x00, 0x00, 0x82, 0x01, 0x03, 0x00, 0x00, 0x00, 0x1a, 0x08, 0xf4, 0xf6, 0x1a, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0xe1, 0x17, 0xbc, 0x25, 0x45, 0x1c, 0x6b, 0x26, 0xcf, 0x26, 0xee, 0x26, 0xbb, 0x1c, 0x48, 0x36, 0x31, 0x27, 0x3e, 0x1d, 0xd8, 0x1d, 0x5c, 0x1a, 0x23, 0x1e, 0xd7, 0x25, 0xd1, 0x13, 0x4c, 0x27, 0x67, 0x27, 0xd7, 0x36, 0x90, 0x26, 0x68, 0x1e, 0x06, 0x1f, 0xa9, 0x0f, 0x75, 0x95, 0xb1, 0x24, 0xa9, 0x7b, 0x07, 0xc0, 0xab, 0xbc, 0xb1, 0xad, 0xb4, 0x20};
unsigned char #CACHE[2] = {0x99, 0x00};
unsigned char #BUFFERS[2] = {0x02, 0x00};
unsigned char #SPACE[2] = {0x00, 0x01};
unsigned char 'RESTORE+[2] = {0xbb, 0xb2};
unsigned char 'SETUP+[2] = {0x8b, 0xb2};
unsigned char @,0*1;[2] = {0x01, 0x00};
unsigned char >BREAK[2] = {0x2c, 0x16};
unsigned char BOOT-HOOK[2] = {0xcc, 0xd5};
unsigned char BOOT-LOAD[2] = {0x00, 0x00};
unsigned char BUFFER-BEGIN[2] = {0xe0, 0x42};
unsigned char BUFFER-HEAD[2] = {0x00, 0x00};
unsigned char CACHE-BEGIN[2] = {0x00, 0x00};
unsigned char CACHE-HEAD[2] = {0x00, 0x00};
unsigned char REGISTERS[23] = {0x02, 0x02, 0x00, 0x15, 0x56, 0x48, 0xc6, 0x07, 0xca, 0x2d, 0x38, 0xd3, 0xca, 0x2d, 0xf1, 0xd5, 0x63, 0x33, 0x63, 0x33, 0xcd, 0x21, 0xc3};
unsigned char BEEPMS[2] = {0xfa, 0x00};
unsigned char BEEPTONE[2] = {0xf4, 0x01};
unsigned char 'SVBUF[2] = {0x50, 0x7b};
unsigned char 'MTBUF[2] = {0xd4, 0xb1};
unsigned char #SECS[2] = {0x02, 0x00};
unsigned char 'FCB[2] = {0xca, 0x2d};
unsigned char 'CACHE[2] = {0x98, 0x00};
unsigned char 'DOSMOUNT[2] = {0xda, 0x46};
unsigned char 'DOSUNMOUNT[2] = {0x44, 0x47};
unsigned char REUSEC[2] = {0x98, 0x00};
unsigned char 1STCACHEBUF[2] = {0x8b, 0x43};
unsigned char BLKCACHE[2] = {0x63, 0x43};
unsigned char DEFAULTDRV[2] = {0x2c, 0x6f};
unsigned char DISK-ERROR[2] = {0x00, 0x00};
unsigned char DRIVE[2] = {0x04, 0x00};
unsigned char DTA[4] = {0x00, 0x01, 0x63, 0x33};
unsigned char FILE[2] = {0x02, 0x00};
unsigned char FRESH[2] = {0x4c, 0xc5};
unsigned char HEAD[2] = {0x00, 0x00};
unsigned char LPREV[2] = {0xe0, 0x42};
unsigned char OFFSET[2] = {0x68, 0x01};
unsigned char PREV[2] = {0xe0, 0x42};
unsigned char SEC[2] = {0x05, 0x00};
unsigned char SEGCACHE[2] = {0x77, 0x43};
unsigned char SYSK[2] = {0x80, 0x02};
unsigned char TRACK[2] = {0x00, 0x00};
unsigned char USE[2] = {0x21, 0x43};
unsigned char =DRIVESIZES[6] = {0x68, 0x01, 0x68, 0x01, 0x00, 0x50};
unsigned char =DRIVENUMBERS[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char =FCBPFAS[8] = {0x00, 0x27, 0x00, 0x00, 0x9e, 0x2d, 0xca, 0x2d};
unsigned char =FILEBLOCKS[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char =FILETYPES[4] = {0xff, 0xff, 0xff, 0xff};
unsigned char =OFFSETS[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
unsigned char =R/W'S[8] = {0x31, 0x36, 0x44, 0x33, 0xe3, 0x43, 0xe3, 0x43};
unsigned char FCB[88] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x50, 0x52, 0x4f, 0x54, 0x45, 0x43, 0x54, 0x20, 0x42, 0x4c, 0x4b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x6c, 0x00, 0x00, 0x49, 0x13, 0x02, 0x8e, 0x03, 0x04, 0x42, 0xef, 0x25, 0x0a, 0x66, 0x0b, 0x1a, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x53, 0x54, 0x41, 0x52, 0x46, 0x4c, 0x54, 0x32, 0x43, 0x4f, 0x4d, 0x00, 0x00, 0xf0, 0xd4, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x14, 0x85, 0x8a, 0x01, 0x04, 0x42, 0x00, 0x00, 0x07, 0x66, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char FILENAMES[3] = {0x20, 0x20, 0x20};
unsigned char {LXCHG}[16] = {0x51, 0x26, 0x8b, 0x0f, 0x87, 0xd8, 0x26, 0x87, 0x0f, 0x87, 0xd8, 0x26, 0x89, 0x0f, 0x59, 0xc3};
unsigned char DIRNAME[11] = {0x2d, 0x2d, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x2d, 0x2d, 0x20};
unsigned char 'UNRAVEL[2] = {0x8a, 0x8e};
unsigned char TRACE[2] = {0x00, 0x00};
unsigned char [TRACE[-11] = {0x48};
unsigned char TRACE][2] = {0x48, 0x3a};
unsigned char OVA[2] = {0x60, 0xeb};
unsigned char T-DP[6] = {0x3e, 0xd5, 0x27, 0xf4, 0x3e, 0xd5};
unsigned char (2V:)[4] = {0x54, 0x20, 0x2d, 0x20};
unsigned char MAXDRV[2] = {0x05, 0x00};
unsigned char ASKMOUN[0] = {0x3b};
unsigned char 'BYE[-7] = {0x5d};
unsigned char SKIPPED[-10] = {0x00};
unsigned char CANSKIP[2] = {0x00, 0x00};
unsigned char UNK_0x484e[2] = {0x90, 0x8d};
unsigned char UNK_0x4852[2] = {0x4e, 0x95};
unsigned char UNK_0x4856[4] = {0x4e, 0x95, 0x00, 0x00};
unsigned char UNK_0x4901[17] = {0x00, 0x52, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x41};
unsigned char ZZZ[10] = {0x76, 0x02, 0x19, 0x00, 0x4f, 0x54, 0x20, 0x20, 0x6d, 0x65};
unsigned char SEED[2] = {0xdf, 0x97};
unsigned char SPHEREW[2] = {0x50, 0x20};
unsigned char SIGNEXT[2] = {0x44, 0x20};
unsigned char UNK_0x4d4b[0] = {0x3a};
unsigned char UNK_0x4d4f[2] = {0x3a, 0x20};
unsigned char UNK_0x4d53[0] = {0x3a};
unsigned char 'ARRAY[2] = {0x82, 0x6a};
unsigned char XLL[2] = {0x41, 0x44};
unsigned char YLL[2] = {0x72, 0x65};
unsigned char XUR[2] = {0x72, 0x65};
unsigned char YUR[2] = {0x72, 0x65};
unsigned char FONT#[-7] = {0x00};
unsigned char TANDY[2] = {0x10, 0x00};
unsigned char COLORT[17] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x00};
unsigned char ?NID[2] = {0x5d, 0x02};
unsigned char BMAP[14] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char WIN[2] = {0x00, 0x00};
unsigned char ?UF[2] = {0x00, 0x00};
unsigned char ?AF[2] = {0x00, 0x00};
unsigned char #SHOTS[2] = {0x75, 0x02};
unsigned char 'ASYS[2] = {0xda, 0xca};
unsigned char P/B[2] = {0x02, 0x00};
unsigned char 'BOSS[2] = {0xb8, 0xd5};
unsigned char %TALK[2] = {0xe8, 0x29};
unsigned char CLIP-TA[20] = {0x08, 0x08, 0x01, 0xc7, 0x00, 0x02, 0x02, 0x00, 0x9f, 0x00, 0x04, 0x04, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00};
unsigned char FONTSEG[2] = {0x37, 0x7f};
unsigned char REMSEG[2] = {0x3e, 0x95};
unsigned char XBUF-SE[2] = {0x37, 0x6f};
unsigned char DICT[2] = {0xfa, 0x84};
unsigned char ?ALL[2] = {0xff, 0x00};
unsigned char ?YOK[-7] = {0xff};
unsigned char HUB[-3] = {0x01};
unsigned char PIC#[2] = {0x5d, 0x5e};
unsigned char 1LOGO[14] = {0x1f, 0x3f, 0xdf, 0xee, 0x0c, 0x33, 0x0c, 0x03, 0xb7, 0xcf, 0x8f, 0x7f, 0x00, 0xc0};
unsigned char UNK_0x547d[10] = {0xc3, 0x7e, 0xa5, 0xbd, 0xa5, 0xa5, 0xc3, 0xbd, 0x00, 0x7e};
unsigned char UNK_0x5489[6] = {0x18, 0x7a, 0x86, 0x61, 0x80, 0x17};
unsigned char UNK_0x5491[2] = {0x00, 0xfc};
unsigned char 'XCOMM[2] = {0x32, 0xc3};
unsigned char TCLR[2] = {0x0f, 0x00};
unsigned char 'TRAK[2] = {0x56, 0xca};
unsigned char TRAK-HR[2] = {0x4e, 0x20};
unsigned char A-STREN[2] = {0x48, 0x20};
unsigned char DIRBLK[2] = {0x00, 0x00};
unsigned char TIMESTA[2] = {0x20, 0x01};
unsigned char RELAXTI[2] = {0x20, 0x74};
unsigned char ):-,601[4] = {0x0a, 0x05, 0x01, 0x00};
unsigned char ICONFON[2] = {0x01, 0x00};
unsigned char LFRAME[2] = {0x53, 0x51};
unsigned char ?AUTO[2] = {0x5d, 0xdf};
unsigned char ?CRITIC[2] = {0x20, 0x81};
unsigned char P-POSTU[2] = {0x20, 0x1e};
unsigned char ELEM-AM[-12] = {0x14};
unsigned char 'INJURE[2] = {0x68, 0xce};
unsigned char P-COLOR[3] = {0x41, 0x4e, 0x05};
unsigned char P-PHRAS[3] = {0x31, 0x35, 0x05};
unsigned char P-CARP[3] = {0x2e, 0x8a, 0x05};
unsigned char O-COLOR[3] = {0xeb, 0x0e, 0x05};
unsigned char HYDRO[2] = {0x5d, 0x40};
unsigned char ATMO[2] = {0x5d, 0x00};
unsigned char LCOLOR[2] = {0x8e, 0xde};
unsigned char ?TV[2] = {0x01, 0x00};
unsigned char OLDHR[2] = {0x36, 0x75};
unsigned char AVCNT[2] = {0x5d, 0x2e};
unsigned char UNK_0x55ee[2] = {0x01, 0x00};
unsigned char ?BOMB[3] = {0x00, 0x00, 0x00};
unsigned char UNK_0x55ff[2] = {0x00, 0x00};
unsigned char UNK_0x5603[2] = {0x00, 0x00};
unsigned char UNK_0x5607[2] = {0xef, 0xf9};
unsigned char FILE#[2] = {0x12, 0x00};
unsigned char RECORD#[2] = {0x00, 0x00};
unsigned char UNK_0x5625[2] = {0xd0, 0xf7};
unsigned char UNK_0x5629[2] = {0xe0, 0xfb};
unsigned char CXSP[2] = {0x7e, 0x65};
unsigned char UNK_0x5638[6] = {0xd1, 0x65, 0x29, 0x1d, 0x3a, 0x20};
unsigned char EDL[2] = {0x00, 0x74};
unsigned char A-POSTU[2] = {0x20, 0xa4};
unsigned char UNK_0x5658[2] = {0xc8, 0x00};
unsigned char P-RACES[2] = {0x20, 0x2d};
unsigned char UNK_0x566a[2] = {0x8c, 0x93};
unsigned char UNK_0x566e[2] = {0x6d, 0x93};
unsigned char UNK_0x5672[2] = {0xca, 0x93};
unsigned char UNK_0x5676[6] = {0x08, 0x94, 0x29, 0x1d, 0x3a, 0x20};
unsigned char 'THROW-[2] = {0x6e, 0x3a};
unsigned char 'MAP[2] = {0x48, 0x3a};
unsigned char 'TRAVER[2] = {0xb3, 0x7a};
unsigned char '?EXIT[2] = {0xec, 0x7d};
unsigned char UNK_0x56b2[2] = {0x3a, 0x20};
unsigned char '.FLUX-[2] = {0xf6, 0xe3};
unsigned char ?TD[2] = {0x00, 0x00};
unsigned char ?LANDED[2] = {0x00, 0x00};
unsigned char UNK_0x56dc[2] = {0xf0, 0x01};
unsigned char UNK_0x56e0[2] = {0x00, 0x00};
unsigned char UNK_0x56e4[2] = {0x60, 0x13};
unsigned char UNK_0x56e8[2] = {0x00, 0x00};
unsigned char UNK_0x56ec[2] = {0x5a, 0x0f};
unsigned char UNK_0x56f0[2] = {0x4d, 0x12};
unsigned char UNK_0x56f4[2] = {0x00, 0x00};
unsigned char UNK_0x56f8[2] = {0x0e, 0x00};
unsigned char -END[2] = {0x04, 0x00};
unsigned char OV#[2] = {0x00, 0x00};
unsigned char UNK_0x5711[2] = {0x85, 0x6f};
unsigned char REPAIRT[2] = {0xff, 0xff};
unsigned char HBUF-SE[2] = {0x37, 0x6f};
unsigned char DBUF-SE[2] = {0x00, 0xa0};
unsigned char COLOR[2] = {0x0f, 0x00};
unsigned char DCOLOR[2] = {0x0f, 0x00};
unsigned char YTAB[2] = {0x29, 0x4c};
unsigned char Y1[2] = {0x5e, 0x89};
unsigned char X1[2] = {0x89, 0x3e};
unsigned char Y2[2] = {0x5e, 0x5e};
unsigned char X2[2] = {0xb2, 0x08};
unsigned char YTABL[2] = {0xe8, 0xc7};
unsigned char BUF-SEG[2] = {0x00, 0xa0};
unsigned char RETURN[2] = {0x1e, 0xb8};
unsigned char ?WIN[2] = {0x00, 0x00};
unsigned char #IN[2] = {0x04, 0x00};
unsigned char #OUT[2] = {0x41, 0x42};
unsigned char VIN[2] = {0x8b, 0x68};
unsigned char VOUT[2] = {0xcd, 0x68};
unsigned char OIN[2] = {0x0f, 0x69};
unsigned char OOUT[2] = {0x51, 0x69};
unsigned char IVPTR[2] = {0x0d, 0x3d};
unsigned char OVPTR[-1] = {0xeb};
unsigned char ICPTR[2] = {0x16, 0x80};
unsigned char OCPTR[2] = {0xb8, 0xff};
unsigned char FLIP[2] = {0x83, 0xfb};
unsigned char TACCPT[2] = {0x06, 0x0b};
unsigned char TRJCT[-7] = {0x29};
unsigned char ?OPEN[2] = {0x00, 0x00};
unsigned char ?EVAL[2] = {0x00, 0x00};
unsigned char SX[2] = {0x3c, 0x00};
unsigned char SY[2] = {0xc2, 0x00};
unsigned char SO[2] = {0x20, 0x53};
unsigned char PX[2] = {0x3c, 0x00};
unsigned char PY[2] = {0xc6, 0x00};
unsigned char PO[2] = {0x72, 0x66};
unsigned char IX[2] = {0x39, 0x29};
unsigned char IY[2] = {0x1e, 0x70};
unsigned char IO[2] = {0xff, 0x74};
unsigned char COMPARE[2] = {0x4f, 0x44};
unsigned char X-INTER[2] = {0x19, 0x80};
unsigned char ILEFT[2] = {0x00, 0x00};
unsigned char IRIGHT[2] = {0x9f, 0x00};
unsigned char IBELOW[2] = {0x00, 0x00};
unsigned char IABOVE[2] = {0xc7, 0x00};
unsigned char 'FLY[2] = {0x92, 0xca};
unsigned char 'UNNEST[2] = {0xfc, 0xca};
unsigned char ?NEW[2] = {0x00, 0x00};
unsigned char FORCED[2] = {0x21, 0x5a};
unsigned char #VESS[2] = {0x00, 0x00};
unsigned char CTCOLOR[2] = {0x5a, 0x5b};
unsigned char XSTART[-5] = {0x60};
unsigned char XEND[2] = {0x79, 0x00};
unsigned char YLINE[2] = {0xc6, 0x00};
unsigned char ?3[2] = {0x00, 0x00};
unsigned char '.HUFF[2] = {0x45, 0xbe};
unsigned char SCAN[2] = {0xf9, 0x66};
unsigned char LMNT[2] = {0x00, 0x00};
unsigned char SCAN+[2] = {0xf9, 0x66};
unsigned char YMIN[2] = {0xc2, 0x00};
unsigned char YMAX[2] = {0xc6, 0x00};
unsigned char #HORIZ[2] = {0x02, 0x00};
unsigned char MOVED[2] = {0x69, 0x7a};
unsigned char MEMSEG[2] = {0x19, 0x42};
unsigned char MEMOFF[2] = {0x00, 0x0a};
unsigned char MONITOR[2] = {0x06, 0x00};
unsigned char LOCRADI[2] = {0x4b, 0x00};
unsigned char (ELIST)[3] = {0xe8, 0x10, 0x00};
unsigned char ICON^[2] = {0x78, 0x69};
unsigned char PAL^[2] = {0x41, 0x6a};
unsigned char YBLT[2] = {0xc6, 0x00};
unsigned char XBLT[2] = {0x40, 0x00};
unsigned char XORMODE[2] = {0x00, 0x00};
unsigned char LBLT[2] = {0x08, 0x00};
unsigned char WBLT[2] = {0x08, 0x00};
unsigned char ABLT[2] = {0x40, 0x02};
unsigned char BLTSEG[2] = {0xf2, 0x9d};
unsigned char BLT>[2] = {0x42, 0x02};
unsigned char TILE-PT[2] = {0x9a, 0x69};
unsigned char ?FUEL-D[2] = {0x00, 0x00};
unsigned char ?G-AWAR[2] = {0x00, 0x00};
unsigned char GWF[2] = {0x00, 0x00};
unsigned char DXVIS[2] = {0x41, 0x53};
unsigned char DYVIS[2] = {0x45, 0x20};
unsigned char XCON[2] = {0x56, 0x20};
unsigned char YCON[2] = {0x65, 0x72};
unsigned char DXCON[2] = {0x72, 0x20};
unsigned char DYCON[2] = {0x6e, 0x20};
unsigned char XVIS[2] = {0x69, 0x6e};
unsigned char YVIS[2] = {0x65, 0x72};
unsigned char XLLDEST[2] = {0x00, 0x00};
unsigned char YLLDEST[2] = {0x00, 0x00};
unsigned char GLOBALS[2] = {0x44, 0x20};
unsigned char '.CELL[2] = {0x72, 0x72};
unsigned char '.BACKG[2] = {0x55, 0x4e};
unsigned char 'ICON-P[2] = {0x55, 0xba};
unsigned char 'ICONBO[2] = {0x65, 0xba};
unsigned char 'CC[2] = {0x3c, 0xc8};
unsigned char UNK_0x5b8e[2] = {0x13, 0x93};
unsigned char UNK_0x5b92[2] = {0xb9, 0x92};
unsigned char UNK_0x5b96[2] = {0x8c, 0x92};
unsigned char UNK_0x5b9a[2] = {0x5f, 0x92};
unsigned char UNK_0x5b9e[2] = {0x05, 0x92};
unsigned char IHSEG[2] = {0xd8, 0x91};
unsigned char IGLOBAL[2] = {0x00, 0x00};
unsigned char ILOCAL[2] = {0x00, 0x00};
unsigned char IINDEX[2] = {0x00, 0x00};
unsigned char XWLL[2] = {0x64, 0x65};
unsigned char YWLL[2] = {0x20, 0x74};
unsigned char XWUR[2] = {0x72, 0x64};
unsigned char YWUR[2] = {0x20, 0x77};
unsigned char *GLOBAL[2] = {0xa9, 0x01};
unsigned char (STOP-C[2] = {0x4d, 0x29};
unsigned char UNK_0x5c1e[2] = {0x00, 0x00};
unsigned char CONTEXT[2] = {0x03, 0x00};
unsigned char %EFF[2] = {0x64, 0x00};
unsigned char STORM[2] = {0x00, 0x00};
unsigned char 'TVT[2] = {0x89, 0xd1};
unsigned char 'STORM[2] = {0x5a, 0xce};
unsigned char E/M[2] = {0x66, 0x6f};
unsigned char FORCEPT[2] = {0x00, 0x00};
unsigned char #STORM[14] = {0x00, 0x00, 0x29, 0x1d, 0x4a, 0x00, 0x29, 0x1d, 0x00, 0x00, 0x29, 0x1d, 0x4b, 0x00};
unsigned char UNK_0x5c90[2] = {0x00, 0x00};
unsigned char PORTDAT[2] = {0x00, 0x00};
unsigned char ?PORT[2] = {0x01, 0x00};
unsigned char TVIS[2] = {0x40, 0x00};
unsigned char RVIS[2] = {0x88, 0x00};
unsigned char BVIS[2] = {0xf7, 0xff};
unsigned char LVIS[2] = {0x42, 0x00};
unsigned char LFSEG[2] = {0x3e, 0x95};
unsigned char LSYSEG[2] = {0x51, 0x91};
unsigned char MSYSEG[2] = {0xd7, 0x90};
unsigned char SSYSEG[2] = {0x5d, 0x90};
unsigned char ?REPAIR[-12] = {0x00};
unsigned char ?HEAL[-1] = {0x00};
unsigned char MXNEB[2] = {0x41, 0x53};
unsigned char THIS-BU[2] = {0x00, 0x00};
unsigned char NCRS[-6] = {0x20};
unsigned char OCRS[2] = {0x73, 0x6f};
unsigned char WTOP[2] = {0x33, 0x00};
unsigned char WBOTTOM[2] = {0x01, 0x00};
unsigned char WRIGHT[2] = {0x9e, 0x00};
unsigned char WLEFT[2] = {0x03, 0x00};
unsigned char WLINES[2] = {0x07, 0x00};
unsigned char WCHARS[2] = {0x26, 0x00};
unsigned char SKIP2NE[2] = {0x00, 0x00};
unsigned char -AIN[2] = {0x74, 0x20};
unsigned char 'LAUNCH[2] = {0x54, 0xd4};
unsigned char ?ON-PLA[2] = {0x00, 0x00};
unsigned char ?RECALL[2] = {0x00, 0x00};
unsigned char WMSG[2] = {0x00, 0x00};
unsigned char CTX[2] = {0x00, 0x00};
unsigned char CTY[2] = {0x00, 0x00};
unsigned char FTRIG[2] = {0x00, 0x00};
unsigned char FQUIT[-10] = {0x74};
unsigned char LKEY[-1] = {0x73};
unsigned char 'BUTTON[2] = {0x65, 0x20};
unsigned char BTN-REC[1] = {0x63};
unsigned char CRSCOLO[2] = {0x6c, 0x65};
unsigned char UNK_0x5e52[2] = {0x3a, 0x20};
unsigned char ?>OP[2] = {0x00, 0x00};
unsigned char 'YANK[2] = {0x3f, 0xcb};
unsigned char ?12[2] = {0x76, 0x61};
unsigned char '+VESS[2] = {0x44, 0xca};
unsigned char ?NEB[2] = {0x00, 0x00};
unsigned char FORCEKE[2] = {0x00, 0x00};
unsigned char %VAL[2] = {0x64, 0x00};
unsigned char SCROLL-[2] = {0x4e, 0x20};
unsigned char [#CACHE[2] = {0x99, 0x00};
unsigned char ESC-EN[2] = {0x00, 0x00};
unsigned char ESC-PFA[2] = {0x99, 0xd5};
unsigned char LINE-CO[2] = {0x54, 0x20};
unsigned char PM-PTR[2] = {0x6f, 0x75};
unsigned char UNK_0x5efa[2] = {0x01, 0x00};
unsigned char SKEY[2] = {0x63, 0x72};
unsigned char #AUX[-3] = {0x05};
unsigned char ?EGA[2] = {0x00, 0x00};
unsigned char ?5:([2] = {0x00, 0x00};
unsigned char XABS[2] = {0x4a, 0x00};
unsigned char YABS[2] = {0x00, 0x00};
unsigned char HEADING[2] = {0x04, 0x00};
unsigned char 3DSEG[2] = {0x69, 0x70};
unsigned char VIN'[2] = {0x67, 0x20};
unsigned char YSCREEN[2] = {0x20, 0x74};
unsigned char XSCREEN[2] = {0x6f, 0x72};
unsigned char 'COMBAT[2] = {0x7b, 0xc8};
unsigned char 'CEX+[2] = {0xa1, 0xbf};
unsigned char 'CEX[2] = {0xb5, 0xbf};
unsigned char 'WAX[2] = {0x6b, 0xc8};
unsigned char TERMINA[2] = {0x44, 0x20};
unsigned char ?COMBAT[2] = {0x00, 0x00};
unsigned char ?ATTACK[2] = {0x74, 0x6f};
unsigned char TBOX[2] = {0x65, 0x61};
unsigned char UNK_0x5fe6[2] = {0x00, 0x00};
unsigned char STAR-HR[2] = {0x00, 0x00};
unsigned char STARDAT[2] = {0x00, 0x00};
unsigned char TIME-PA[-3] = {0x49};
unsigned char #CLRMAP[2] = {0x01, 0x00};
unsigned char PLHI[2] = {0xff, 0xff};
unsigned char 'PROCES[2] = {0x75, 0x72};
unsigned char CURSEG[2] = {0xcb, 0x91};
unsigned char 'SIMULA[2] = {0xb6, 0xd1};
unsigned char 'ENDING[2] = {0xe0, 0xc8};
unsigned char [KEYINT[2] = {0x00, 0x00};
unsigned char SIL^[2] = {0x69, 0x6a};
unsigned char PIC^[2] = {0x37, 0x6b};
unsigned char 'CLEANU[2] = {0x20, 0x2d};
unsigned char 'KEY-CA[2] = {0x20, 0x6d};
unsigned char '.VITAL[2] = {0x49, 0x47};
unsigned char '.DATE[2] = {0x69, 0x74};
unsigned char '.VEHIC[2] = {0x2d, 0x53};
unsigned char 'VEHICL[2] = {0x43, 0x59};
unsigned char 'CREW-C[2] = {0x4c, 0x45};
unsigned char 'EXTERN[2] = {0x56, 0xca};
unsigned char 'REPAIR[2] = {0x74, 0x65};
unsigned char 'TREATM[2] = {0x54, 0x20};
unsigned char WEAPON-[2] = {0x52, 0x45};
unsigned char ^CRIT[2] = {0x45, 0x20};
unsigned char ?FLAT[2] = {0x74, 0x6f};
unsigned char 1ST[2] = {0x66, 0x20};
unsigned char ?MVT[2] = {0x00, 0x00};
unsigned char ?SUP[2] = {0x00, 0x00};
unsigned char E-USE[2] = {0x4c, 0x45};
unsigned char 'ENERGY[2] = {0x62, 0xcb};
unsigned char ?SECURE[2] = {0x00, 0x00};
unsigned char 'STP[2] = {0x26, 0xd2};
unsigned char 'RSIDE[2] = {0x35, 0xd2};
unsigned char DERROR[2] = {0x65, 0x20};
unsigned char NLR[2] = {0x00, 0x00};
unsigned char ?10[2] = {0x00, 0x00};
unsigned char BITS[2] = {0x50, 0x03};
unsigned char #BITS[2] = {0x10, 0x00};
unsigned char ?5[2] = {0x00, 0x00};
unsigned char SELLING[2] = {0x20, 0x2d};
unsigned char BARTERI[2] = {0x20, 0x49};
unsigned char ?REPLY[2] = {0x52, 0x41};
unsigned char PLAST[2] = {0x20, 0x72};
unsigned char PAST[2] = {0x00, 0x00};
unsigned char HAZE[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char ?CALLIN[2] = {0x01, 0x00};
unsigned char STAGES[14] = {0x63, 0x65, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x65, 0x64, 0x20, 0x0d, 0x0a};
unsigned char %SLUG[2] = {0x64, 0x00};
unsigned char ITEM[4] = {0xeb, 0x63, 0x02, 0x6c};
unsigned char FSTUN[2] = {0x00, 0x00};
unsigned char PATIENC[2] = {0x64, 0x20};
unsigned char TMAP[4] = {0x6f, 0x72, 0x20, 0x66};
unsigned char :([2] = {0x42, 0xc3};
unsigned char TIRED-T[4] = {0x45, 0x20, 0x28, 0x73};
unsigned char LASTREP[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char TALKCOU[4] = {0x20, 0x69, 0x74, 0x69};
unsigned char VSTIME[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char 10*CARG[4] = {0x00, 0x00, 0xb0, 0x36};
unsigned char SENSE-A[4] = {0x00, 0x00, 0x00, 0x29};
unsigned char EYEXY[4] = {0x52, 0x20, 0x64, 0x64};
unsigned char WEAPXY[4] = {0x74, 0x20, 0x53, 0x45};
unsigned char 10*END[4] = {0x00, 0x00, 0x98, 0x3a};
unsigned char TOWFINE[4] = {0x16, 0x41, 0x63, 0x74};
unsigned char ENC-TIM[4] = {0x12, 0x00, 0x23, 0x17};
unsigned char NAV-TIM[10] = {0x6e, 0x6f, 0x74, 0x20, 0x29, 0x1d, 0xbf, 0x05, 0xe3, 0x31};
unsigned char STIME[4] = {0x65, 0x6e, 0x74, 0x20};
unsigned char ETIME[2] = {0x00, 0x00};
unsigned char UNK_0x6390[4] = {0x03, 0x00, 0x40, 0xc6};
unsigned char UNK_0x6396[4] = {0x03, 0x00, 0x40, 0xc6};
unsigned char UNK_0x639c[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char UNK_0x63a2[4] = {0xe5, 0xbf, 0x01, 0x72};
unsigned char KEYTIME[4] = {0x74, 0x20, 0x6f, 0x66};
unsigned char LKEYTIM[4] = {0x69, 0x63, 0x68, 0x20};
unsigned char (SCROLL[4] = {0x4f, 0x58, 0x29, 0x20};
unsigned char (ORIGIN[4] = {0x4f, 0x52, 0x29, 0x20};
unsigned char (SCROLL[4] = {0x4f, 0x4e, 0x54, 0x29};
unsigned char REAL-MS[4] = {0x00, 0x00, 0x10, 0x27};
unsigned char LAST-UP[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char XWLD:XP[4] = {0x20, 0x00, 0x08, 0x00};
unsigned char YWLD:YP[4] = {0x30, 0x00, 0x08, 0x00};
unsigned char ANCHOR[4] = {0x00, 0x00, 0x4a, 0x00};
unsigned char OK-TALK[4] = {0x49, 0x4d, 0x45, 0x20};
unsigned char TVEHICL[4] = {0xd4, 0x2b, 0x02, 0x56};
unsigned char TV-HOLD[4] = {0x00, 0x2c, 0x02, 0x61};
unsigned char SUPER-B[4] = {0xaf, 0x10, 0x00, 0x61};
unsigned char (SYSTEM[4] = {0xd1, 0xbf, 0x01, 0x65};
unsigned char (ORBIT)[4] = {0xd1, 0x67, 0x02, 0x65};
unsigned char (PLANET[4] = {0xe5, 0xbf, 0x01, 0x65};
unsigned char (SURFAC[4] = {0x9c, 0x10, 0x00, 0x65};
unsigned char (ENCOUN[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char (SHIPBO[4] = {0x48, 0x2b, 0x02, 0x65};
unsigned char (AORIGI[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char THIS-RE[4] = {0x4f, 0x4e, 0x20, 0x6e};
unsigned char (THIS-I[4] = {0x4d, 0x29, 0x20, 0x68};
unsigned char UNK_0x6517[2] = {0x45, 0xb2};
unsigned char UNK_0x651b[186] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb2, 0x17, 0x00, 0x32, 0x7d, 0x02, 0xb2, 0x17, 0x00, 0xba, 0x6c, 0x02, 0x48, 0x2b, 0x02, 0xd1, 0x67, 0x02, 0x48, 0x2b, 0x02, 0xd1, 0x67, 0x02, 0xd1, 0xbf, 0x01, 0x0e, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x1d, 0x3a, 0x20, 0x01, 0x00, 0x96, 0xc9, 0x01, 0x00, 0xc3, 0xc9, 0x01, 0x00, 0xa5, 0xc9, 0x01, 0x00, 0xe1, 0xc9, 0x01, 0x00, 0x2c, 0xca, 0x01, 0x00, 0x77, 0xca, 0x01, 0x00, 0xb3, 0xca, 0x01, 0x00, 0xe0, 0xca, 0x01, 0x00, 0x0d, 0xcb, 0x01, 0x00, 0x67, 0xcb, 0x01, 0x00, 0x01, 0x00, 0xb3, 0x7a, 0x00, 0x00, 0x48, 0x3a, 0x09, 0x76, 0x01, 0x00, 0xb3, 0x7a, 0xec, 0x7d, 0x00, 0x00, 0x6e, 0x00};
unsigned char IBFR[273] = {0x0e, 0x00, 0x00, 0x00, 0x2b, 0x02, 0x25, 0x2b, 0x02, 0x7c, 0x2b, 0x02, 0x12, 0x00, 0x08, 0x00, 0x7b, 0xff, 0xa8, 0xfe, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0b, 0x41, 0x2b, 0xaa, 0xd8, 0x07, 0xac, 0xeb, 0xab, 0x5a, 0xb4, 0xac, 0x36, 0x8f, 0x1f, 0x61, 0x14, 0x20, 0x57, 0x49, 0x4c, 0x4c, 0x20, 0x42, 0x45, 0x20, 0x4d, 0x45, 0x54, 0x20, 0x57, 0x49, 0x54, 0x48, 0x20, 0x46, 0x4f, 0x52, 0x43, 0x45, 0x2e, 0x20, 0x44, 0x4f, 0x20, 0x59, 0x4f, 0x55, 0x20, 0x41, 0x47, 0x52, 0x45, 0x45, 0x20, 0x54, 0x4f, 0x20, 0x43, 0x4f, 0x4d, 0x45, 0x20, 0x41, 0x4c, 0x4f, 0x4e, 0x47, 0x20, 0x50, 0x45, 0x41, 0x43, 0x45, 0x46, 0x55, 0x4c, 0x4c, 0x59, 0x3f, 0x20, 0x20, 0x25, 0x31, 0x0e, 0x07, 0x8d, 0x3e, 0x34, 0x58, 0x83, 0xc1, 0x5e, 0xc3, 0x02, 0x04, 0x00, 0x01, 0xff, 0xff, 0x04, 0x00, 0x0e, 0x50, 0x61, 0x72, 0x73, 0x65, 0x20, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x25, 0x31, 0x0e, 0x07, 0x8d, 0x3e, 0x96, 0x58, 0x83, 0xc1, 0x1d, 0xc3, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x16};
unsigned char LSCAN[84] = {0x50, 0x4f, 0x4c, 0x59, 0x43, 0x4f, 0x4e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c, 0x03, 0x9c};
unsigned char UNK_0x688b[64] = {0xc2, 0x00, 0x3c, 0x00, 0xc2, 0x00, 0x30, 0x00, 0xc6, 0x00, 0x30, 0x00, 0xc6, 0x00, 0x3c, 0x00, 0x49, 0x41, 0x42, 0x4c, 0x45, 0x20, 0x2d, 0x20, 0x41, 0x52, 0x52, 0x41, 0x59, 0x20, 0x2d, 0x20, 0x53, 0x48, 0x5c, 0x20, 0x56, 0x41, 0x52, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4b, 0x52, 0x4e, 0x20, 0x20, 0x72, 0x66, 0x67, 0x32, 0x32, 0x61, 0x75, 0x67, 0x38, 0x39, 0x20, 0x29, 0x2e, 0x04, 0x00};
unsigned char UNK_0x68cd[64] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x02, 0x0b, 0x00, 0x92, 0x63, 0x00, 0x00, 0x01, 0x10, 0x03, 0x03, 0x20, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x34, 0x0a, 0x08, 0x20, 0x34, 0x04, 0x01, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xa6, 0x0b, 0x0b, 0x20, 0x35, 0x04, 0x02, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xa4, 0x0a, 0x08, 0x20, 0x0b, 0x00, 0x00, 0x00};
unsigned char UNK_0x690f[64] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x54, 0x48, 0x3d, 0x50, 0x52, 0x4f, 0x4d, 0x50, 0x54, 0x3d, 0x43, 0x4f, 0x4d, 0x53, 0x50, 0x45, 0x43, 0x3d, 0x04, 0x1b, 0x5b, 0x32, 0x4a, 0x42, 0xa8, 0x16, 0x44, 0xad, 0x2f, 0x45, 0x9c, 0x16, 0x47, 0xa0, 0x16, 0x48, 0x92, 0x16, 0x4c, 0xa4, 0x16, 0x4e, 0xb9, 0x16, 0x50, 0xc3, 0x16, 0x51, 0x98, 0x16, 0x54, 0x40, 0x28, 0x56};
unsigned char UNK_0x6951[64] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x54, 0x4e, 0x0a, 0x0a, 0x45, 0x52, 0x52, 0x4f, 0x52, 0x4c, 0x45, 0x56, 0x45, 0x4c, 0x12, 0x0b, 0x05, 0x45, 0x58, 0x49, 0x53, 0x54, 0xa5, 0x0a, 0x00, 0x03, 0x44, 0x49, 0x52, 0x03, 0xaf, 0x0f, 0x04, 0x43, 0x41, 0x4c, 0x4c, 0x02, 0x87, 0x0b, 0x04, 0x43, 0x48, 0x43, 0x50, 0x02, 0x0d, 0x19, 0x06, 0x52, 0x45, 0x4e, 0x41, 0x4d};
unsigned char CMAP[64] = {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f};
unsigned char ATIME[4] = {0x70, 0x20, 0x61, 0x72};
unsigned char LRTRN[4] = {0x48, 0x44, 0x49, 0x52};
unsigned char (TRADER[4] = {0xec, 0x13, 0x00, 0x03};
unsigned char (THING)[4] = {0x49, 0x52, 0x03, 0x46};
unsigned char #ETIME[4] = {0x06, 0x50, 0x52, 0x4f};
unsigned char NTIME[4] = {0x00, 0x00, 0x00, 0x00};
unsigned char 'UHL[2] = {0x48, 0x3a};
unsigned char 'VERSIO[2] = {0x1d, 0xaa};
unsigned char CTTOP[2] = {0x32, 0x00};
unsigned char CTBOT[2] = {0x02, 0x00};
unsigned char GRSEG[2] = {0x3e, 0x95};
unsigned char UNK_0x8511[5] = {0x00, 0x06, 0x05, 0x07, 0x03};
unsigned char CCGA[16] = {0x00, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x03, 0x00, 0x01, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03};
unsigned char PCGA[16] = {0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x01, 0x01, 0x03, 0x01, 0x01, 0x03, 0x03};
unsigned char TREJECT[6] = {0x9a, 0x41, 0x00, 0x37, 0x7f, 0xc3};
unsigned char UNK_0x8cad[12] = {0x5b, 0x8b, 0x6d, 0x8b, 0x83, 0x8b, 0x99, 0x8b, 0xad, 0x8b, 0xbf, 0x8b};
unsigned char SRC[2] = {0x20, 0x33};
unsigned char DST[2] = {0x00, 0x83};
unsigned char SEGME[2] = {0x20, 0x8d};
unsigned char PLZ[2] = {0x22, 0x5d};
unsigned char XPCOL[2] = {0x00, 0x00};
unsigned char NOF[2] = {0x00, 0x00};
unsigned char 'TRACE[10] = {0xa8, 0x49, 0x4c, 0x22, 0x81, 0xa5, 0x37, 0x3a, 0x90, 0x16};
unsigned char UNK_0xab57[2] = {0x06, 0x00};
unsigned char SMART[2] = {0x00, 0x00};
unsigned char OTABL[54] = {0x1c, 0x71, 0x01, 0xa7, 0x48, 0x01, 0x75, 0xd2, 0x00, 0x93, 0xd2, 0x00, 0xfd, 0xda, 0x00, 0x96, 0x2e, 0x01, 0x3a, 0x71, 0x01, 0x84, 0xfa, 0x00, 0xc7, 0xae, 0x00, 0x03, 0xaf, 0x00, 0x29, 0x20, 0x01, 0x20, 0x20, 0x20, 0xce, 0x9c, 0x00, 0x73, 0x97, 0x00, 0xa8, 0xab, 0x01, 0x6e, 0xae, 0x00, 0xe5, 0xae, 0x00, 0x8a, 0xab, 0x01};
unsigned char BTADDR[2] = {0xfc, 0xbb};
unsigned char UNK_0xbae7[2] = {0x3a, 0x20};
unsigned char UNK_0xbaeb[2] = {0x3a, 0x20};
unsigned char UNK_0xbaef[2] = {0x3a, 0x20};
unsigned char UNK_0xbaf3[2] = {0x3a, 0x20};
unsigned char HEALTI[2] = {0x20, 0x45};
unsigned char LASTAP[4] = {0x49, 0x4e, 0x54, 0x20};
unsigned char ROSTER[18] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char #MISS[2] = {0x00, 0x00};

const unsigned short int cc_BL = 0x0020;
const unsigned short int cc_C/L = 0x0040;
const unsigned short int cc_INIT-FORTH = 0x0775;
const unsigned short int cc_INIT-USER = 0x0701;
const unsigned short int cc_INITIAL-DP = 0x0705;
const unsigned short int cc_LIMIT = 0xfffe;
const unsigned short int cc_MS/TICK = 0x01a0;
const unsigned short int cc_TICKS/ADJ = 0x01ae;
const unsigned short int cc_MS/ADJ = 0x01b5;
const unsigned short int cc_#DRIVES = 0x0003;
const unsigned short int cc_#FCBS = 0x0002;
const unsigned short int cc_#FILES = 0x0004;
const unsigned short int cc_#SEC/TRK = 0x0009;
const unsigned short int cc_DOS-FILE = 0x0002;
const unsigned short int cc_RETRIES = 0x0008;
const unsigned short int cc_SECORIGIN = 0x0001;
const unsigned short int cc_PSW = 0x16b4;
const unsigned short int cc_AX = 0x16b6;
const unsigned short int cc_BX = 0x16b8;
const unsigned short int cc_CX = 0x16ba;
const unsigned short int cc_DX = 0x16bc;
const unsigned short int cc_BP = 0x16be;
const unsigned short int cc_DI = 0x16c0;
const unsigned short int cc_SI = 0x16c2;
const unsigned short int cc_DS = 0x16c4;
const unsigned short int cc_ES = 0x16c6;
const unsigned short int cc_3 = 0x0003;
const unsigned short int cc_4 = 0x0004;
const unsigned short int cc_5 = 0x0005;
const unsigned short int cc_6 = 0x0006;
const unsigned short int cc_7 = 0x0007;
const unsigned short int cc_8 = 0x0008;
const unsigned short int cc_9 = 0x0009;
const unsigned short int cc_-1 = 0xffff;
const unsigned short int cc_-2 = 0xfffe;
const unsigned short int cc_(C:) = 0x0000;
const unsigned short int cc_IHEADLE = 0x000b;
const unsigned short int cc_UNK_0x50fa = 0x658a;
const unsigned short int cc_UNK_0x50fe = 0x65d1;
const unsigned short int cc_UNK_0x5102 = 0xf560;
const unsigned short int cc_*MAPSCA = 0x0008;
const unsigned short int cc_SIGBLK = 0x0003;
const unsigned short int cc_ALOVSA = 0x0000;
const unsigned short int cc_AHIVSA = 0x3e7f;
const unsigned short int cc_BLOVSA = 0x3e80;
const unsigned short int cc_BHIVSA = 0x96ff;
const unsigned short int cc_'OVBACK = 0xd284;
const unsigned short int cc_MUSSEG = 0x84c8;
const unsigned short int cc_?FIRED- = 0x0000;
const unsigned short int cc_?A-SHIE = 0x0000;
const unsigned short int cc_?A-WEAP = 0x0000;
const unsigned short int cc_16K = 0x4000;
const unsigned short int cc_TRUE = 0x0001;
const unsigned short int cc_FALSE = 0x0000;
const unsigned short int cc_NULL-IC = 0x0032;
const unsigned short int cc_SYS-ICO = 0x00fd;
const unsigned short int cc_INVIS-I = 0x00fe;
const unsigned short int cc_FLUX-IC = 0x00ff;
const unsigned short int cc_DEAD-IC = 0x0002;
const unsigned short int cc_DEFAULT = 0x0001;
const unsigned short int cc_TEXTC/L = 0x0026;
const unsigned short int cc_UNK_0x5286 = 0x02d0;
const unsigned short int cc_FUEL/SE = 0x0005;
const unsigned short int cc_POLYSEG = 0x9e43;
const unsigned short int cc_'ANSYS = 0xd38a;
const unsigned short int cc_?CALLED = 0x0000;
const unsigned short int cc_MPS = 0x0001;
const unsigned short int cc_#VECTOR = 0x0006;
const unsigned short int cc_R2OVL = 0x8d90;
const unsigned short int cc_UNK_0xab67 = 0x00ff;
const unsigned short int cc_UNK_0xab6b = 0xec67;
const unsigned short int cc_UNK_0xab6f = 0xec68;
const unsigned short int cc_UNK_0xab73 = 0xec69;
const unsigned short int cc_UNK_0xab77 = 0xec6a;
const unsigned short int cc_UNK_0xab7b = 0xec78;
const unsigned short int cc_UNK_0xab7f = 0xec84;
const unsigned short int cc_SB = 0x0168;
const unsigned short int cc_UNK_0xbaf7 = 0xbbda;
const unsigned short int cc_UNK_0xbafb = 0xbbd2;
const unsigned short int cc_UNK_0xbaff = 0xbbf0;

const unsigned short int SP0 = 0xf6f4; // accessed via di (in WORD OPERATOR)
const unsigned short int R0 = 0xf7d0; // accessed via di (in WORD OPERATOR)
const unsigned short int DP = 0xd5f0; // accessed via di (in WORD OPERATOR)
const unsigned short int FENCE = 0x39e6; // accessed via di (in WORD OPERATOR)
const unsigned short int (INTO) = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int MSGFLAGS = 0x0031; // accessed via di (in WORD OPERATOR)
const unsigned short int VOC-LINK = 0xd527; // accessed via di (in WORD OPERATOR)
const unsigned short int USERSIZE = 0x0084; // accessed via di (in WORD OPERATOR)
const unsigned short int USERNEXT = 0x0074; // accessed via di (in WORD OPERATOR)
const unsigned short int >IN = 0x000c; // accessed via di (in WORD OPERATOR)
const unsigned short int TIB = 0xf6f4; // accessed via di (in WORD OPERATOR)
const unsigned short int VIDEOPORT = 0x03d4; // accessed via di (in WORD OPERATOR)
const unsigned short int VIDEOMEM = 0xb800; // accessed via di (in WORD OPERATOR)
const unsigned short int CURSORLOC = 0x0018; // accessed via di (in WORD OPERATOR)
const unsigned short int ROW = 0x0018; // accessed via di (in WORD OPERATOR)
const unsigned short int COL = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int ROWMIN = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int COLMIN = 0x1800; // accessed via di (in WORD OPERATOR)
const unsigned short int ROWMAX = 0x4f18; // accessed via di (in WORD OPERATOR)
const unsigned short int COLMAX = 0x004f; // accessed via di (in WORD OPERATOR)
const unsigned short int ATTRIBUTE = 0x0700; // accessed via di (in WORD OPERATOR)
const unsigned short int DOFFSET = 0xffff; // accessed via di (in WORD OPERATOR)
const unsigned short int SERIALPORT = 0x03f8; // accessed via di (in WORD OPERATOR)
const unsigned short int PARALLELPORT = 0x03bc; // accessed via di (in WORD OPERATOR)
const unsigned short int BASE = 0x000a; // accessed via di (in WORD OPERATOR)
const unsigned short int BLK = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int DPL = 0xffff; // accessed via di (in WORD OPERATOR)
const unsigned short int FLD = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int HLD = 0xd781; // accessed via di (in WORD OPERATOR)
const unsigned short int R# = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int SCR = 0x0182; // accessed via di (in WORD OPERATOR)
const unsigned short int SSCR = 0x0003; // accessed via di (in WORD OPERATOR)
const unsigned short int STATE = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int CONTEXT = 0x081a; // accessed via di (in WORD OPERATOR)
const unsigned short int CSP = 0xf6f4; // accessed via di (in WORD OPERATOR)
const unsigned short int CURRENT = 0x081a; // accessed via di (in WORD OPERATOR)
const unsigned short int LFALEN = 0x0002; // accessed via di (in WORD OPERATOR)
const unsigned short int LOWERCASE = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int SEARCHORDER = 0x0000; // accessed via di (in WORD OPERATOR)
const unsigned short int WIDTH = 0x001f; // accessed via di (in WORD OPERATOR)

// 0x0100: db 0xfa 0x8c 0xc8 0x8e 0xd0 0x8e 0xc0 0x8e 0xd8 0xbe 0x29 0x01 0x8b 0x7c 0x02 0x47 0x47 0xbb 0x05 0x07 0x8b 0x1f 0x81 0xc3 0x00 0x01 0x8b 0xe3 0x81 0xc3 0x80 0x00 0x8b 0xeb 0xfb 0xfc 0xad 0x8b 0xd8 0xff 0x27 0x37 0x09 0x8a 0x07 '          )  | GG                       '7   '
  
// ====================================================
// 0x012d: WORD '(!SET)' codep=0x0138 parp=0x0138
// ====================================================
// 0x0138: mov    dx,ds
// 0x013a: mov    ax,0000
// 0x013d: mov    ds,ax
// 0x013f: pop    bx
// 0x0140: add    bx,bx
// 0x0142: add    bx,bx
// 0x0144: cli    
// 0x0145: pop    ax
// 0x0146: mov    [bx],ax
// 0x0148: inc    bx
// 0x0149: inc    bx
// 0x014a: pop    ax
// 0x014b: mov    [bx],ax
// 0x014d: sti    
// 0x014e: mov    ds,dx
// 0x0150: lodsw
// 0x0151: mov    bx,ax
// 0x0153: jmp    word ptr [bx]

// ====================================================
// 0x0155: WORD '(!OLD)' codep=0x0160 parp=0x0160
// ====================================================
// 0x0160: mov    dx,ds
// 0x0162: mov    ax,0000
// 0x0165: mov    ds,ax
// 0x0167: pop    bx
// 0x0168: add    bx,bx
// 0x016a: add    bx,bx
// 0x016c: cli    
// 0x016d: mov    ax,[bx]
// 0x016f: inc    bx
// 0x0170: inc    bx
// 0x0171: mov    bx,[bx]
// 0x0173: sti    
// 0x0174: push   bx
// 0x0175: push   ax
// 0x0176: mov    ds,dx
// 0x0178: lodsw
// 0x0179: mov    bx,ax
// 0x017b: jmp    word ptr [bx]

// ====================================================
// 0x017d: WORD '(TIME)' codep=0x1d29 parp=0x0188
// ====================================================
// 0x0188: db 0x00 0x00 0xbf 0x35 0x08 0x00 0x2e 0x81 0x06 0x8a 0x01 0x37 0x00 0x2e 0x83 0x16 0x88 0x01 0x00 0x2e 0xc7 0x06 0x93 0x01 0x37 0x00 0x2e 0xff 0x0e 0x8c 0x01 0x75 0x0e 0x2e 0xc7 0x06 0x8c 0x01 0x0f 0x00 0x2e 0xc7 0x06 0x93 0x01 0x36 0x00 0xcf 0x00 0x00 0x00 0x00 0x80 0x05 0x8b 0x2c 0x62 0x66 0xc4 0x02 0x58 0x40 0x50 0x29 0xc0 0x29 0xd2 0xcf '   5  .    7 .     .    7 .    u .      .    6         ,bf  X@P) )  '
  // 0x01cc: xor    bx,bx
// 0x01ce: div    bx
// 0x01d0: ret    

// 0x01d1: db 0x58 0x8b 0xc8 0x81 0xe8 0xd0 0x01 0x75 0x06 0xb8 0xc7 0x01 0xe9 0x04 0x00 0xb8 0xc4 0x01 0x41 0x8c 0xda 0x31 0xdb 0x8e 0xdb 0x89 0x07 0x8e 0xda 0x51 0xcf 'X      u          A  1       Q '
  
// ====================================================
// 0x01f0: WORD 'SET0/' codep=0x01fa parp=0x01fa
// ====================================================
// 0x01fa: mov    ax,ds
// 0x01fc: xor    bx,bx
// 0x01fe: mov    ds,bx
// 0x0200: mov    word ptr [bx],01D1
// 0x0204: add    bx,0002
// 0x0208: mov    [bx],ax
// 0x020a: mov    ds,ax
// 0x020c: call   01CC
// 0x020f: lodsw
// 0x0210: mov    bx,ax
// 0x0212: jmp    word ptr [bx]

// ====================================================
// 0x0214: WORD '(RESTORE)' codep=0x224c parp=0x0222
// ====================================================

// ====================================================
// 0x0216: WORD 'UNK_0x0218' codep=0x2889 parp=0x0218
// ====================================================

void (RESTORE)()
{
  Push(0x01b8); 2@ OR 
  if (Pop() == 0) goto label1;
  Push(0x01b8); 2@ Push(0x001b); (!SET) Push(0x01bc); 2@ Push(0x001c); (!SET) Push(0x01c0); 2@ Push(0x0000); (!SET) Push(0); Push(0); Push(0x01b8); 2! pp_'RESTORE+ @ ?DUP 
  if (Pop() == 0) goto label1;
  EXECUTE 
  label1:
  
}


// ====================================================
// 0x026a: WORD 'AUTO-CACHE' codep=0x224c parp=0x0279
// ====================================================

void AUTO-CACHE()
{
  pp_#CACHE @ 
  if (Pop() == 0) goto label2;
  pp_SYSK @ Push(0x0040); * Push(cc_LIMIT); ADDR>SEG 1+ DUP pp_BLKCACHE ! - Push(0); Push(0x0042); U/MOD SWAP DROP pp_#CACHE @ UMIN();
  pp_#CACHE ! INITCACHE();
  
  label2:
  
}


// ====================================================
// 0x02b3: WORD 'AUTO-LIMIT' codep=0x224c parp=0x02c2
// ====================================================

void AUTO-LIMIT()
{
  Push(cc_LIMIT); Push(0xfffe); NOP();
  OVER ?DUP 
  if (Pop() == 0) goto label6;
  UMIN();
  
  label6:
  Push(0x09e2); ! Push(cc_LIMIT); - 
  if (Pop() == 0) goto label7;
  CHANGE();
  
  label7:
  
}


// ====================================================
// 0x02e6: WORD 'AUTO-SCREEN' codep=0x224c parp=0x02f6
// ====================================================

void AUTO-SCREEN()
{
  Push(0x0f00); Push(cc_AX); ! Push(0x0010); INTERRUPT Push(cc_AX); C@ Push(0x0007); = 
  if (Pop() == 0) goto label8;
  Push(0x03b4); Push(0xb000); 
  goto label9;
  
  label8:
  Push(0x03d4); Push(0xb800); 
  label9:
  tt_VIDEOMEM ! tt_VIDEOPORT ! 
}


// ====================================================
// 0x0330: WORD 'COLD' codep=0x224c parp=0x0339
// ====================================================

void COLD()
{
  EMPTY();
  CR UNK_0x0939();
  
}


// ====================================================
// 0x0341: WORD 'UNK_0x0343' codep=0x224c parp=0x0343
// ====================================================

void UNK_0x0343()
{
  
  (.") string 29 "FORTHOUGHT (P) (C) Copyright "
  
  (.") string 36 "Fantasia Systems Inc. 1982,1983,1984"
  CR 
  (.") string 46 "Version 2.52 for Binary Systems for the IBM PC"
  CR 
}


// ====================================================
// 0x03c1: WORD 'UNK_0x03c3' codep=0x224c parp=0x03c3
// ====================================================

void UNK_0x03c3()
{
  
  (.") string 3 " ok"
  
}


// ====================================================
// 0x03cb: WORD 'SET-BUFFERS' codep=0x224c parp=0x03db
// ====================================================

void SET-BUFFERS()
{
  Push(cc_LIMIT); Push(0x0820); - ADDR>SEG DUP pp_USE ! DUP pp_BUFFER-BEGIN ! Push(0x0041); + DUP pp_LPREV ! pp_PREV ! MTBUFFERS();
  
}


// ====================================================
// 0x0405: WORD 'SP0' codep=0x1792 parp=0x040d
// ====================================================
// 0x040d: db 0x00 0x00 '  '
  
// ====================================================
// 0x040f: WORD 'R0' codep=0x1792 parp=0x0416
// ====================================================
// 0x0416: db 0x02 0x00 '  '
  
// ====================================================
// 0x0418: WORD 'DP' codep=0x1792 parp=0x041f
// ====================================================
// 0x041f: db 0x04 0x00 '  '
  
// ====================================================
// 0x0421: WORD 'FENCE' codep=0x1792 parp=0x042b
// ====================================================
// 0x042b: db 0x06 0x00 '  '
  
// ====================================================
// 0x042d: WORD '(INTO)' codep=0x1792 parp=0x0438
// ====================================================
// 0x0438: db 0x08 0x00 '  '
  
// ====================================================
// 0x043a: WORD 'MSGFLAGS' codep=0x1792 parp=0x0447
// ====================================================
// 0x0447: db 0x0a 0x00 '  '
  
// ====================================================
// 0x0449: WORD 'VOC-LINK' codep=0x1792 parp=0x0456
// ====================================================
// 0x0456: db 0x0c 0x00 '  '
  
// ====================================================
// 0x0458: WORD 'USERSIZE' codep=0x1792 parp=0x0465
// ====================================================
// 0x0465: db 0x0e 0x00 '  '
  
// ====================================================
// 0x0467: WORD 'USERNEXT' codep=0x1792 parp=0x0474
// ====================================================
// 0x0474: db 0x10 0x00 '  '
  
// ====================================================
// 0x0476: WORD '>IN' codep=0x1792 parp=0x047e
// ====================================================
// 0x047e: db 0x12 0x00 '  '
  
// ====================================================
// 0x0480: WORD 'TIB' codep=0x1792 parp=0x0488
// ====================================================
// 0x0488: db 0x14 0x00 '  '
  
// ====================================================
// 0x048a: WORD 'VIDEOPORT' codep=0x1792 parp=0x0498
// ====================================================
// 0x0498: db 0x16 0x00 '  '
  
// ====================================================
// 0x049a: WORD 'VIDEOMEM' codep=0x1792 parp=0x04a7
// ====================================================
// 0x04a7: db 0x18 0x00 '  '
  
// ====================================================
// 0x04a9: WORD 'CURSORLOC' codep=0x1792 parp=0x04b7
// ====================================================
// 0x04b7: db 0x1a 0x00 '  '
  
// ====================================================
// 0x04b9: WORD 'ROW' codep=0x1792 parp=0x04c1
// ====================================================
// 0x04c1: db 0x1a 0x00 '  '
  
// ====================================================
// 0x04c3: WORD 'COL' codep=0x1792 parp=0x04cb
// ====================================================
// 0x04cb: db 0x1b 0x00 '  '
  
// ====================================================
// 0x04cd: WORD 'ROWMIN' codep=0x1792 parp=0x04d8
// ====================================================
// 0x04d8: db 0x1c 0x00 '  '
  
// ====================================================
// 0x04da: WORD 'COLMIN' codep=0x1792 parp=0x04e5
// ====================================================
// 0x04e5: db 0x1d 0x00 '  '
  
// ====================================================
// 0x04e7: WORD 'ROWMAX' codep=0x1792 parp=0x04f2
// ====================================================
// 0x04f2: db 0x1e 0x00 '  '
  
// ====================================================
// 0x04f4: WORD 'COLMAX' codep=0x1792 parp=0x04ff
// ====================================================
// 0x04ff: db 0x1f 0x00 '  '
  
// ====================================================
// 0x0501: WORD 'ATTRIBUTE' codep=0x1792 parp=0x050f
// ====================================================
// 0x050f: db 0x20 0x00 '  '
  
// ====================================================
// 0x0511: WORD 'DOFFSET' codep=0x1792 parp=0x051d
// ====================================================
// 0x051d: and    al,[bx+si]

// ====================================================
// 0x051f: WORD 'SERIALPORT' codep=0x1792 parp=0x052e
// ====================================================
// 0x052e: db 0x26 0x00 '& '
  
// ====================================================
// 0x0530: WORD 'PARALLELPORT' codep=0x1792 parp=0x0541
// ====================================================
// 0x0541: db 0x28 0x00 '( '
  
// ====================================================
// 0x0543: WORD 'BASE' codep=0x1792 parp=0x054c
// ====================================================
// 0x054c: db 0x2a 0x00 '* '
  
// ====================================================
// 0x054e: WORD 'BLK' codep=0x1792 parp=0x0556
// ====================================================
// 0x0556: db 0x2c 0x00 ', '
  
// ====================================================
// 0x0558: WORD 'DPL' codep=0x1792 parp=0x0560
// ====================================================
// 0x0560: db 0x2e 0x00 '. '
  
// ====================================================
// 0x0562: WORD 'FLD' codep=0x1792 parp=0x056a
// ====================================================
// 0x056a: db 0x30 0x00 '0 '
  
// ====================================================
// 0x056c: WORD 'HLD' codep=0x1792 parp=0x0574
// ====================================================
// 0x0574: db 0x32 0x00 '2 '
  
// ====================================================
// 0x0576: WORD 'R#' codep=0x1792 parp=0x057d
// ====================================================
// 0x057d: db 0x34 0x00 '4 '
  
// ====================================================
// 0x057f: WORD 'SCR' codep=0x1792 parp=0x0587
// ====================================================
// 0x0587: db 0x36 0x00 '6 '
  
// ====================================================
// 0x0589: WORD 'SSCR' codep=0x1792 parp=0x0592
// ====================================================
// 0x0592: db 0x38 0x00 '8 '
  
// ====================================================
// 0x0594: WORD 'STATE' codep=0x1792 parp=0x059e
// ====================================================
// 0x059e: db 0x3a 0x00 ': '
  
// ====================================================
// 0x05a0: WORD 'CONTEXT' codep=0x1792 parp=0x05ac
// ====================================================
// 0x05ac: db 0x3c 0x00 '< '
  
// ====================================================
// 0x05ae: WORD 'CSP' codep=0x1792 parp=0x05b6
// ====================================================
// 0x05b6: db 0x3e 0x00 '> '
  
// ====================================================
// 0x05b8: WORD 'CURRENT' codep=0x1792 parp=0x05c4
// ====================================================
// 0x05c4: db 0x40 0x00 '@ '
  
// ====================================================
// 0x05c6: WORD 'LFALEN' codep=0x1792 parp=0x05d1
// ====================================================
// 0x05d1: db 0x42 0x00 'B '
  
// ====================================================
// 0x05d3: WORD 'LOWERCASE' codep=0x1792 parp=0x05e1
// ====================================================
// 0x05e1: db 0x44 0x00 'D '
  
// ====================================================
// 0x05e3: WORD 'SEARCHORDER' codep=0x1792 parp=0x05f3
// ====================================================
// 0x05f3: db 0x46 0x00 'F '
  
// ====================================================
// 0x05f5: WORD 'WIDTH' codep=0x1792 parp=0x05ff
// ====================================================
// 0x05ff: db 0x48 0x00 'H '
  
// ====================================================
// 0x0601: WORD '-FIND' codep=0x17b7 parp=0x060b
// ====================================================
// 0x060b: db 0x4a 0x00 'J '
  
// ====================================================
// 0x060d: WORD '?TERMINAL' codep=0x17b7 parp=0x061b
// ====================================================

// ====================================================
// 0x0615: WORD 'UNK_0x0617' codep=0x4e49 parp=0x0617
// ====================================================
// 0x061b: db 0x4c 0x00 'L '
  
// ====================================================
// 0x061d: WORD 'ABORT' codep=0x17b7 parp=0x0627
// ====================================================
// 0x0627: db 0x4e 0x00 'N '
  
// ====================================================
// 0x0629: WORD 'BELL' codep=0x17b7 parp=0x0632
// ====================================================
// 0x0632: db 0x50 0x00 'P '
  
// ====================================================
// 0x0634: WORD 'BS' codep=0x17b7 parp=0x063b
// ====================================================
// 0x063b: db 0x52 0x00 'R '
  
// ====================================================
// 0x063d: WORD 'CR' codep=0x17b7 parp=0x0644
// ====================================================
// 0x0644: db 0x54 0x00 'T '
  
// ====================================================
// 0x0646: WORD 'CREATE' codep=0x17b7 parp=0x0651
// ====================================================
// 0x0651: db 0x56 0x00 'V '
  
// ====================================================
// 0x0653: WORD 'DISKERROR?' codep=0x17b7 parp=0x0662
// ====================================================
// 0x0662: db 0x58 0x00 'X '
  
// ====================================================
// 0x0664: WORD 'EMIT' codep=0x17b7 parp=0x066d
// ====================================================
// 0x066d: db 0x5a 0x00 'Z '
  
// ====================================================
// 0x066f: WORD 'EXPECT' codep=0x17b7 parp=0x067a
// ====================================================
// 0x067a: db 0x5c 0x00 '\ '
  
// ====================================================
// 0x067c: WORD 'INTERPRET' codep=0x17b7 parp=0x068a
// ====================================================
// 0x068a: db 0x5e 0x00 '^ '
  
// ====================================================
// 0x068c: WORD 'LINKS>' codep=0x17b7 parp=0x0697
// ====================================================
// 0x0697: db 0x60 0x00 '` '
  
// ====================================================
// 0x0699: WORD 'LOAD' codep=0x17b7 parp=0x06a2
// ====================================================
// 0x06a2: db 0x62 0x00 'b '
  
// ====================================================
// 0x06a4: WORD 'KEY' codep=0x17b7 parp=0x06ac
// ====================================================
// 0x06ac: db 0x64 0x00 'd '
  
// ====================================================
// 0x06ae: WORD 'NUMBER' codep=0x17b7 parp=0x06b9
// ====================================================
// 0x06b9: db 0x66 0x00 'f '
  
// ====================================================
// 0x06bb: WORD 'PAGE' codep=0x17b7 parp=0x06c4
// ====================================================
// 0x06c4: db 0x68 0x00 'h '
  
// ====================================================
// 0x06c6: WORD 'POSITION' codep=0x17b7 parp=0x06d3
// ====================================================
// 0x06d3: db 0x6a 0x00 'j '
  
// ====================================================
// 0x06d5: WORD 'R/W' codep=0x17b7 parp=0x06dd
// ====================================================
// 0x06dd: db 0x6c 0x00 'l '
  
// ====================================================
// 0x06df: WORD 'TYPE' codep=0x17b7 parp=0x06e8
// ====================================================
// 0x06e8: db 0x6e 0x00 'n '
  
// ====================================================
// 0x06ea: WORD 'WHERE' codep=0x17b7 parp=0x06f4
// ====================================================
// 0x06f4: db 0x70 0x00 'p '
  
// ====================================================
// 0x06f6: WORD 'WORD' codep=0x17b7 parp=0x06ff
// ====================================================
// 0x06ff: db 0x72 0x00 0xf4 0xf6 0xd0 0xf7 0xf0 0xd5 0xe6 0x39 0x00 0x00 0x31 0x00 0x27 0xd5 0x84 0x00 0x74 'r        9  1 '   t'
  
// ====================================================
// 0x0712: WORD 'UNK_0x0714' codep=0x0000 parp=0x0714
// ====================================================
// 0x0714: db 0x00 0xf4 0xf6 0xd4 0x03 0x00 0xb8 0x18 0x00 0x00 0x00 0x18 0x4f 0x00 0x07 0xff 0xff 0xff 0xff 0xf8 0x03 0xbc 0x03 0x0a 0x00 0x00 0x00 0xff 0xff 0x00 0x00 0x81 0xd7 0x00 0x00 0x82 0x01 0x03 0x00 0x00 0x00 0x1a 0x08 0xf4 0xf6 '            O                                '
  
// ====================================================
// 0x0741: WORD 'UNK_0x0743' codep=0x081a parp=0x0743
// ====================================================
// 0x0743: db 0x02 0x00 0x00 0x00 0x00 0x00 0x1f 0x00 0xe1 0x17 0xbc 0x25 0x45 0x1c 0x6b 0x26 0xcf 0x26 0xee 0x26 0xbb 0x1c 0x48 0x36 0x31 0x27 0x3e 0x1d 0xd8 0x1d 0x5c 0x1a 0x23 0x1e 0xd7 0x25 0xd1 0x13 0x4c 0x27 0x67 0x27 0xd7 0x36 0x90 0x26 0x68 0x1e 0x06 0x1f 0xc2 0xd5 0x6a 0xd5 0xc2 0xd5 0x49 0xd5 0xb2 0xd5 '           %E k& & &  H61'>   \ #  %  L'g' 6 &h     j   I   '
  
// ====================================================
// 0x077f: WORD 'OPERATOR' codep=0x1d29 parp=0x078c
// ====================================================
// 0x078c: db 0xf4 0xf6 0xd0 0xf7 0xf0 0xd5 0xe6 0x39 0x00 0x00 0x31 0x00 0x27 0xd5 0x84 0x00 0x74 0x00 0x0c 0x00 0xf4 0xf6 0xd4 0x03 0x00 0xb8 0x18 0x00 0x00 0x00 0x18 0x4f 0x00 0x07 0xff 0xff 0xff 0xff 0xf8 0x03 0xbc 0x03 0x0a 0x00 0x00 0x00 0xff 0xff 0x00 0x00 0x81 0xd7 0x00 0x00 0x82 0x01 0x03 0x00 0x00 0x00 0x1a 0x08 0xf4 0xf6 0x1a 0x08 0x02 0x00 0x00 0x00 0x00 0x00 0x1f 0x00 0xe1 0x17 0xbc 0x25 0x45 0x1c 0x6b 0x26 0xcf 0x26 0xee 0x26 0xbb 0x1c 0x48 0x36 0x31 0x27 0x3e 0x1d 0xd8 0x1d 0x5c 0x1a 0x23 0x1e 0xd7 0x25 0xd1 0x13 0x4c 0x27 0x67 0x27 0xd7 0x36 0x90 0x26 0x68 0x1e 0x06 0x1f 0xa9 0x0f 0x75 0x95 0xb1 0x24 0xa9 0x7b 0x07 0xc0 0xab 0xbc 0xb1 0xad 0xb4 0x20 '       9  1 '   t              O                                             %E k& & &  H61'>   \ #  %  L'g' 6 &h     u  $ {        '
  
// ====================================================
// 0x0810: WORD 'FORTH' codep=0x1ab5 parp=0x081a
// ====================================================

// ====================================================
// 0x0815: WORD 'UNK_0x0817' codep=0x5452 parp=0x0817
// ====================================================
// 0x081a: add    [bx+si],al
// 0x081c: add    [bx+si],al
// 0x081e: ret    6AD5
// 0x0821: aad    C2
// 0x0823: aad    49
// 0x0825: aad    B2
// 0x0827: aad    EC

// ====================================================
// 0x0828: WORD 'FREEZE' codep=0x224c parp=0x0833
// ====================================================

void FREEZE()
{
  pp_OPERATOR Push(0x0701); Push(0x0074); CMOVE Push(0x081a); Push(0x0004); + Push(0x0775); Push(0x000a); CMOVE 
}


// ====================================================
// 0x0855: WORD 'BYE' codep=0x224c parp=0x085d
// ====================================================

// ====================================================
// 0x085d: WORD 'UNK_0x085f' codep=0x0831 parp=0x085f
// ====================================================

void BYE()
{
  FREEZE();
  (RESTORE)();
  Push(0); GO 
}


// ====================================================
// 0x0867: WORD 'CHANGE' codep=0x224c parp=0x0872
// ====================================================

void CHANGE()
{
  FREEZE();
  SET-BUFFERS();
  pp_BUFFER-BEGIN @ SEG>ADDR DUP Push(0x00dc); - DUP Push(0x0701); ! Push(0x0715); ! Push(0x0703); ! Push(0x0100); GO 
}

// 0x08a0: db 0xfa 0xb8 0x40 0x00 0x8e 0xd8 0xbb 0x71 0x00 0xc6 0x07 0x00 0xb0 0x20 0xe6 0x20 0x8c 0xc8 0x8e 0xd0 0x8e 0xc0 0x8e 0xd8 0xb8 0x8c 0x07 0x8b 0xf8 0xb8 0x43 0x0a 0x8b 0xf0 0x8b 0x26 0x01 0x07 0x8b 0x2e 0x03 0x07 0xfc 0xfb 0xad 0x8b 0xd8 0xff 0x27 '  @    q                      C    &   .        ''
  
// ====================================================
// 0x08d1: WORD '(SETUP)' codep=0x224c parp=0x08dd
// ====================================================

void (SETUP)()
{
  Push(0x01b8); 2@ OR 0= 
  if (Pop() == 0) goto label20;
  Push(0x001b); (!OLD) Push(0x01b8); 2! (CS?) Push(0x08a0); Push(0x001b); (!SET) Push(0x001c); (!OLD) Push(0x01bc); 2! (CS?) Push(0x018e); Push(0x001c); (!SET) Push(0x0000); (!OLD) Push(0x01c0); 2! SET0/ pp_'SETUP+ @ ?DUP 
  if (Pop() == 0) goto label20;
  EXECUTE 
  label20:
  
}


// ====================================================
// 0x0937: WORD 'UNK_0x0939' codep=0x224c parp=0x0939
// ====================================================

void UNK_0x0939()
{
  (SETUP)();
  (CS?) Push(cc_DS); ! Push(0xf2d2); Push(cc_PSW); ! Push(0x0701); pp_OPERATOR Push(0x0074); CMOVE tt_DP @ Push(cc_INITIAL-DP); ! 'FORTH();
  tt_CONTEXT ! DEFINITIONS();
  FREEZE();
  AUTO-LIMIT();
  AUTO-CACHE();
  SP! RP! SET-BUFFERS();
  AUTO-SCREEN();
  UNK_0x0343();
  pp_BOOT-HOOK @ ?DUP 
  if (Pop() == 0) goto label21;
  EXECUTE 
  label21:
  pp_BOOT-LOAD @ ?DUP 
  if (Pop() == 0) goto label22;
  LOAD 
  label22:
  UNK_0x03c3();
  ABORT 
}


// ====================================================
// 0x0993: WORD 'BL' codep=0x2214 parp=0x099a
// ====================================================
// 0x099a: db 0x20 0x00 '  '
  
// ====================================================
// 0x099c: WORD 'C/L' codep=0x2214 parp=0x09a4
// ====================================================
// 0x09a4: db 0x40 0x00 '@ '
  
// ====================================================
// 0x09a6: WORD 'INIT-FORTH' codep=0x2214 parp=0x09b5
// ====================================================
// 0x09b5: db 0x75 0x07 'u '
  
// ====================================================
// 0x09b7: WORD 'INIT-USER' codep=0x2214 parp=0x09c5
// ====================================================
// 0x09c5: db 0x01 0x07 '  '
  
// ====================================================
// 0x09c7: WORD 'INITIAL-DP' codep=0x2214 parp=0x09d6
// ====================================================
// 0x09d6: db 0x05 0x07 '  '
  
// ====================================================
// 0x09d8: WORD 'LIMIT' codep=0x2214 parp=0x09e2
// ====================================================
// 0x09e2: db 0xfe 0xff '  '
  
// ====================================================
// 0x09e4: WORD '#CACHE' codep=0x1d29 parp=0x09ef
// ====================================================
// 0x09ef: db 0x99 0x00 '  '
  
// ====================================================
// 0x09f1: WORD '#BUFFERS' codep=0x1d29 parp=0x09fe
// ====================================================
// 0x09fe: db 0x02 0x00 '  '
  
// ====================================================
// 0x0a00: WORD '#SPACE' codep=0x1d29 parp=0x0a0b
// ====================================================
// 0x0a0b: db 0x00 0x01 '  '
  
// ====================================================
// 0x0a0d: WORD ''RESTORE+' codep=0x1d29 parp=0x0a1b
// ====================================================
// 0x0a1b: db 0xbb 0xb2 '  '
  
// ====================================================
// 0x0a1d: WORD ''SETUP+' codep=0x1d29 parp=0x0a29
// ====================================================
// 0x0a29: db 0x8b 0xb2 '  '
  
// ====================================================
// 0x0a2b: WORD '@,0*1;' codep=0x1d29 parp=0x0a36
// ====================================================
// 0x0a36: db 0x01 0x00 '  '
  
// ====================================================
// 0x0a38: WORD '>BREAK' codep=0x1d29 parp=0x0a43
// ====================================================
// 0x0a43: db 0x2c 0x16 ', '
  
// ====================================================
// 0x0a45: WORD 'BOOT-HOOK' codep=0x1d29 parp=0x0a53
// ====================================================
// 0x0a53: db 0xcc 0xd5 '  '
  
// ====================================================
// 0x0a55: WORD 'BOOT-LOAD' codep=0x1d29 parp=0x0a63
// ====================================================
// 0x0a63: db 0x00 0x00 '  '
  
// ====================================================
// 0x0a65: WORD 'BUFFER-BEGIN' codep=0x1d29 parp=0x0a76
// ====================================================
// 0x0a76: db 0xe0 0x42 ' B'
  
// ====================================================
// 0x0a78: WORD 'BUFFER-HEAD' codep=0x1d29 parp=0x0a88
// ====================================================
// 0x0a88: db 0x00 0x00 '  '
  
// ====================================================
// 0x0a8a: WORD 'CACHE-BEGIN' codep=0x1d29 parp=0x0a9a
// ====================================================
// 0x0a9a: db 0x00 0x00 '  '
  
// ====================================================
// 0x0a9c: WORD 'CACHE-HEAD' codep=0x1d29 parp=0x0aab
// ====================================================
// 0x0aab: db 0x00 0x00 '  '
  
// ====================================================
// 0x0aad: WORD ''FORTH' codep=0x224c parp=0x0ab8
// ====================================================

void 'FORTH()
{
  tt_USERSIZE @ ME + tt_LFALEN @ + PFA();
  
}


// ====================================================
// 0x0aca: WORD 'ME' codep=0x0ad1 parp=0x0ad1
// ====================================================
// 0x0ad1: push   di
// 0x0ad2: lodsw
// 0x0ad3: mov    bx,ax
// 0x0ad5: jmp    word ptr [bx]

// ====================================================
// 0x0ad7: WORD 'UNK_0x0ad9' codep=0x224c parp=0x0ad9
// ====================================================

void UNK_0x0ad9()
{
  Push(0); pp_#SPACE @ Push(0); D+ HERE();
  Push(0); D+ SWAP SP@ SWAP U< OR 
  (ABORT") // string 24 "Dictionary or stack full"
  
}

// 0x0b10: db 0x4c 0x22 0x12 0x0f 0xe3 0x0e 'L"    '
  
// ====================================================
// 0x0b16: WORD 'UNK_0x0b18' codep=0x0ef2 parp=0x0b18
// ====================================================
// 0x0b18: db 0xdf 0x12 0x13 0x1c 0x0b 0x45 0x6d 0x70 0x74 0x79 0x20 0x73 0x74 0x61 0x63 0x6b 0x20 0x0f 0xd7 0x0a 0x90 0x16 '     Empty stack      '
  
// ====================================================
// 0x0b2e: WORD 'UNK_0x0b30' codep=0x224c parp=0x0b30
// ====================================================

void UNK_0x0b30()
{
  tt_MSGFLAGS @ Push(0x0008); AND 0= 0= AND 
// ====================================================
// 0x0b3f: WORD 'UNK_0x0b41' codep=0x1312 parp=0x0b41
// ====================================================

  (ABORT") // string 22 "Input stream exhausted"
  
}


// ====================================================
// 0x0b5b: WORD 'UNK_0x0b5d' codep=0x224c parp=0x0b5d
// ====================================================

void UNK_0x0b5d()
{
  
  (ABORT") // string 14 "Not recognized"
  
}


// ====================================================
// 0x0b70: WORD '?ENOUGH' codep=0x224c parp=0x0b7c
// ====================================================

void ?ENOUGH()
{
  DEPTH();
  DUP 
  if (Pop() == 0) goto label23;
  < 
  label23:
  0= 
  (ABORT") // string 29 "Not enough items on the stack"
  
}


// ====================================================
// 0x0baa: WORD '@' codep=0x0bb0 parp=0x0bb0
// ====================================================
// 0x0bb0: pop    bx
// 0x0bb1: push   word ptr [bx]
// 0x0bb3: lodsw
// 0x0bb4: mov    bx,ax
// 0x0bb6: jmp    word ptr [bx]

// ====================================================
// 0x0bb8: WORD '@L' codep=0x0bbf parp=0x0bbf
// ====================================================
// 0x0bbf: pop    ax
// 0x0bc0: mov    ah,al
// 0x0bc2: sub    al,al
// 0x0bc4: add    ah,ah
// 0x0bc6: add    ah,ah
// 0x0bc8: add    ah,ah
// 0x0bca: add    ah,ah
// 0x0bcc: mov    ds,ax
// 0x0bce: pop    bx
// 0x0bcf: mov    ax,[bx]
// 0x0bd1: push   ax
// 0x0bd2: mov    ax,cs
// 0x0bd4: mov    ds,ax
// 0x0bd6: lodsw
// 0x0bd7: mov    bx,ax
// 0x0bd9: jmp    word ptr [bx]

// ====================================================
// 0x0bdb: WORD '!' codep=0x0be1 parp=0x0be1
// ====================================================
// 0x0be1: pop    bx
// 0x0be2: pop    ax
// 0x0be3: mov    [bx],ax
// 0x0be5: lodsw
// 0x0be6: mov    bx,ax
// 0x0be8: jmp    word ptr [bx]

// ====================================================
// 0x0bea: WORD '!L' codep=0x0bf1 parp=0x0bf1
// ====================================================
// 0x0bf1: pop    ax
// 0x0bf2: mov    ah,al
// 0x0bf4: sub    al,al
// 0x0bf6: add    ah,ah
// 0x0bf8: add    ah,ah
// 0x0bfa: add    ah,ah
// 0x0bfc: add    ah,ah
// 0x0bfe: mov    ds,ax
// 0x0c00: pop    bx
// 0x0c01: pop    ax
// 0x0c02: mov    [bx],ax
// 0x0c04: mov    ax,cs
// 0x0c06: mov    ds,ax
// 0x0c08: lodsw
// 0x0c09: mov    bx,ax
// 0x0c0b: jmp    word ptr [bx]

// ====================================================
// 0x0c0d: WORD '(CS?)' codep=0x0c17 parp=0x0c17
// ====================================================
// 0x0c17: push   cs
// 0x0c18: lodsw
// 0x0c19: mov    bx,ax
// 0x0c1b: jmp    word ptr [bx]

// ====================================================
// 0x0c1d: WORD '2!' codep=0x0c24 parp=0x0c24
// ====================================================
// 0x0c24: pop    bx
// 0x0c25: pop    ax
// 0x0c26: pop    cx
// 0x0c27: cli    
// 0x0c28: mov    [bx],ax
// 0x0c2a: mov    [bx+02],cx
// 0x0c2d: sti    
// 0x0c2e: lodsw
// 0x0c2f: mov    bx,ax
// 0x0c31: jmp    word ptr [bx]

// ====================================================
// 0x0c33: WORD '2@' codep=0x0c3a parp=0x0c3a
// ====================================================
// 0x0c3a: pop    bx
// 0x0c3b: cli    
// 0x0c3c: mov    ax,[bx]
// 0x0c3e: mov    dx,[bx+02]
// 0x0c41: sti    
// 0x0c42: push   dx
// 0x0c43: push   ax
// 0x0c44: lodsw
// 0x0c45: mov    bx,ax
// 0x0c47: jmp    word ptr [bx]

// ====================================================
// 0x0c49: WORD 'BLANK' codep=0x224c parp=0x0c53
// ====================================================

void BLANK()
{
  Push(cc_BL); FILL 
}


// ====================================================
// 0x0c59: WORD 'C!' codep=0x0c60 parp=0x0c60
// ====================================================
// 0x0c60: pop    bx
// 0x0c61: pop    ax
// 0x0c62: mov    [bx],al
// 0x0c64: lodsw
// 0x0c65: mov    bx,ax
// 0x0c67: jmp    word ptr [bx]

// ====================================================
// 0x0c69: WORD 'C!L' codep=0x0c71 parp=0x0c71
// ====================================================
// 0x0c71: pop    ax
// 0x0c72: mov    ah,al
// 0x0c74: sub    al,al
// 0x0c76: add    ah,ah
// 0x0c78: add    ah,ah
// 0x0c7a: add    ah,ah
// 0x0c7c: add    ah,ah
// 0x0c7e: mov    ds,ax
// 0x0c80: pop    bx
// 0x0c81: pop    ax
// 0x0c82: mov    [bx],al
// 0x0c84: mov    ax,cs
// 0x0c86: mov    ds,ax
// 0x0c88: lodsw
// 0x0c89: mov    bx,ax
// 0x0c8b: jmp    word ptr [bx]

// ====================================================
// 0x0c8d: WORD 'C@' codep=0x0c94 parp=0x0c94
// ====================================================
// 0x0c94: pop    bx
// 0x0c95: sub    ax,ax
// 0x0c97: mov    al,[bx]
// 0x0c99: push   ax
// 0x0c9a: lodsw
// 0x0c9b: mov    bx,ax
// 0x0c9d: jmp    word ptr [bx]

// ====================================================
// 0x0c9f: WORD 'C@L' codep=0x0ca7 parp=0x0ca7
// ====================================================
// 0x0ca7: pop    ax
// 0x0ca8: mov    ah,al
// 0x0caa: sub    al,al
// 0x0cac: add    ah,ah
// 0x0cae: add    ah,ah
// 0x0cb0: add    ah,ah
// 0x0cb2: add    ah,ah
// 0x0cb4: mov    ds,ax
// 0x0cb6: pop    bx
// 0x0cb7: mov    al,[bx]
// 0x0cb9: sub    ah,ah
// 0x0cbb: push   ax
// 0x0cbc: mov    ax,cs
// 0x0cbe: mov    ds,ax
// 0x0cc0: lodsw
// 0x0cc1: mov    bx,ax
// 0x0cc3: jmp    word ptr [bx]

// ====================================================
// 0x0cc5: WORD 'COUNT' codep=0x224c parp=0x0ccf
// ====================================================

void COUNT()
{
  DUP 1+ SWAP C@ 
}


// ====================================================
// 0x0cd9: WORD 'CMOVE>' codep=0x0ce4 parp=0x0ce4
// ====================================================
// 0x0ce4: mov    ax,ds
// 0x0ce6: mov    es,ax
// 0x0ce8: mov    dx,di
// 0x0cea: mov    bx,si
// 0x0cec: pop    cx
// 0x0ced: pop    di
// 0x0cee: pop    si
// 0x0cef: or     cx,cx
// 0x0cf1: jz     0CFD
// 0x0cf3: std    
// 0x0cf4: add    di,cx
// 0x0cf6: dec    di
// 0x0cf7: add    si,cx
// 0x0cf9: dec    si
// 0x0cfa: repz   
// 0x0cfb: movsb
// 0x0cfc: cld    
// 0x0cfd: mov    di,dx
// 0x0cff: mov    si,bx
// 0x0d01: lodsw
// 0x0d02: mov    bx,ax
// 0x0d04: jmp    word ptr [bx]

// ====================================================
// 0x0d06: WORD 'CMOVE' codep=0x0d10 parp=0x0d10
// ====================================================
// 0x0d10: mov    ax,ds
// 0x0d12: mov    es,ax
// 0x0d14: pop    cx
// 0x0d15: mov    dx,di
// 0x0d17: pop    di
// 0x0d18: mov    bx,si
// 0x0d1a: pop    si
// 0x0d1b: clc    
// 0x0d1c: rcr    cx,1
// 0x0d1e: jae    0D21
// 0x0d20: movsb
// 0x0d21: repz   
// 0x0d22: movsw
// 0x0d23: mov    si,bx
// 0x0d25: mov    di,dx
// 0x0d27: lodsw
// 0x0d28: mov    bx,ax
// 0x0d2a: jmp    word ptr [bx]

// ====================================================
// 0x0d2c: WORD 'FILL' codep=0x0d35 parp=0x0d35
// ====================================================
// 0x0d35: mov    ax,ds
// 0x0d37: mov    es,ax
// 0x0d39: pop    ax
// 0x0d3a: mov    ah,al
// 0x0d3c: pop    cx
// 0x0d3d: mov    dx,di
// 0x0d3f: pop    di
// 0x0d40: clc    
// 0x0d41: rcr    cx,1
// 0x0d43: jae    0D46
// 0x0d45: stosb
// 0x0d46: repz   
// 0x0d47: stosw
// 0x0d48: mov    di,dx
// 0x0d4a: lodsw
// 0x0d4b: mov    bx,ax
// 0x0d4d: jmp    word ptr [bx]

// ====================================================
// 0x0d4f: WORD 'P!' codep=0x0d56 parp=0x0d56
// ====================================================
// 0x0d56: pop    dx
// 0x0d57: pop    ax
// 0x0d58: out    dx,al
// 0x0d59: lodsw
// 0x0d5a: mov    bx,ax
// 0x0d5c: jmp    word ptr [bx]

// ====================================================
// 0x0d5e: WORD 'P@' codep=0x0d65 parp=0x0d65
// ====================================================
// 0x0d65: sub    ax,ax
// 0x0d67: pop    dx
// 0x0d68: in     al,dx
// 0x0d69: push   ax
// 0x0d6a: lodsw
// 0x0d6b: mov    bx,ax
// 0x0d6d: jmp    word ptr [bx]

// ====================================================
// 0x0d6f: WORD 'SEG>ADDR' codep=0x0d7c parp=0x0d7c
// ====================================================
// 0x0d7c: pop    ax
// 0x0d7d: mov    bx,cs
// 0x0d7f: sub    ax,bx
// 0x0d81: shl    ax,1
// 0x0d83: shl    ax,1
// 0x0d85: shl    ax,1
// 0x0d87: shl    ax,1
// 0x0d89: push   ax
// 0x0d8a: lodsw
// 0x0d8b: mov    bx,ax
// 0x0d8d: jmp    word ptr [bx]

// ====================================================
// 0x0d8f: WORD 'ADDR>SEG' codep=0x0d9c parp=0x0d9c
// ====================================================
// 0x0d9c: pop    ax
// 0x0d9d: shr    ax,1
// 0x0d9f: shr    ax,1
// 0x0da1: shr    ax,1
// 0x0da3: shr    ax,1
// 0x0da5: mov    cx,ds
// 0x0da7: add    ax,cx
// 0x0da9: push   ax
// 0x0daa: lodsw
// 0x0dab: mov    bx,ax
// 0x0dad: jmp    word ptr [bx]

// ====================================================
// 0x0daf: WORD '>R' codep=0x0db6 parp=0x0db6
// ====================================================
// 0x0db6: pop    bx
// 0x0db7: dec    bp
// 0x0db8: dec    bp
// 0x0db9: mov    [bp+00],bx
// 0x0dbc: lodsw
// 0x0dbd: mov    bx,ax
// 0x0dbf: jmp    word ptr [bx]

// ====================================================
// 0x0dc1: WORD '?DUP' codep=0x0dca parp=0x0dca
// ====================================================
// 0x0dca: pop    ax
// 0x0dcb: or     ax,ax
// 0x0dcd: jz     0DD0
// 0x0dcf: push   ax
// 0x0dd0: push   ax
// 0x0dd1: lodsw
// 0x0dd2: mov    bx,ax
// 0x0dd4: jmp    word ptr [bx]

// ====================================================
// 0x0dd6: WORD '2DROP' codep=0x0de0 parp=0x0de0
// ====================================================
// 0x0de0: add    sp,0004
// 0x0de4: lodsw
// 0x0de5: mov    bx,ax
// 0x0de7: jmp    word ptr [bx]

// ====================================================
// 0x0de9: WORD '2DUP' codep=0x0df2 parp=0x0df2
// ====================================================
// 0x0df2: mov    bx,sp
// 0x0df4: push   word ptr [bx+02]
// 0x0df7: push   word ptr [bx]
// 0x0df9: lodsw
// 0x0dfa: mov    bx,ax
// 0x0dfc: jmp    word ptr [bx]

// ====================================================
// 0x0dfe: WORD '2SWAP' codep=0x0e08 parp=0x0e08
// ====================================================
// 0x0e08: pop    ax
// 0x0e09: pop    bx
// 0x0e0a: pop    cx
// 0x0e0b: pop    dx
// 0x0e0c: push   bx
// 0x0e0d: push   ax

// ====================================================
// 0x0e0e: WORD 'UNK_0x0e10' codep=0x5152 parp=0x0e10
// ====================================================
// 0x0e10: db 0xad 0x8b 0xd8 0xff 0x27 '    ''
  
// ====================================================
// 0x0e15: WORD 'DEPTH' codep=0x224c parp=0x0e1f
// ====================================================

void DEPTH()
{
  SP@ S0();
  SWAP - 2/ 
}


// ====================================================
// 0x0e2b: WORD 'DROP' codep=0x0e34 parp=0x0e34
// ====================================================
// 0x0e34: inc    sp
// 0x0e35: inc    sp
// 0x0e36: lodsw
// 0x0e37: mov    bx,ax
// 0x0e39: jmp    word ptr [bx]

// ====================================================
// 0x0e3b: WORD 'DUP' codep=0x0e43 parp=0x0e43
// ====================================================
// 0x0e43: mov    bx,sp
// 0x0e45: push   word ptr [bx]
// 0x0e47: lodsw
// 0x0e48: mov    bx,ax
// 0x0e4a: jmp    word ptr [bx]

// ====================================================
// 0x0e4c: WORD 'I' codep=0x0e52 parp=0x0e52
// ====================================================
// 0x0e52: mov    ax,[bp+00]
// 0x0e55: push   ax
// 0x0e56: lodsw
// 0x0e57: mov    bx,ax
// 0x0e59: jmp    word ptr [bx]

// ====================================================
// 0x0e5b: WORD 'I'' codep=0x0e62 parp=0x0e62
// ====================================================
// 0x0e62: push   word ptr [bp+02]
// 0x0e65: lodsw
// 0x0e66: mov    bx,ax
// 0x0e68: jmp    word ptr [bx]

// ====================================================
// 0x0e6a: WORD 'J' codep=0x0e70 parp=0x0e70
// ====================================================
// 0x0e70: push   word ptr [bp+04]
// 0x0e73: lodsw
// 0x0e74: mov    bx,ax
// 0x0e76: jmp    word ptr [bx]

// ====================================================
// 0x0e78: WORD 'OVER' codep=0x0e81 parp=0x0e81
// ====================================================
// 0x0e81: mov    bx,sp
// 0x0e83: push   word ptr [bx+02]
// 0x0e86: lodsw
// 0x0e87: mov    bx,ax
// 0x0e89: jmp    word ptr [bx]

// ====================================================
// 0x0e8b: WORD 'R>' codep=0x0e92 parp=0x0e92
// ====================================================
// 0x0e92: mov    ax,[bp+00]
// 0x0e95: inc    bp
// 0x0e96: inc    bp
// 0x0e97: push   ax
// 0x0e98: lodsw
// 0x0e99: mov    bx,ax
// 0x0e9b: jmp    word ptr [bx]

// ====================================================
// 0x0e9d: WORD 'R@' codep=0x0ea4 parp=0x0ea4
// ====================================================
// 0x0ea4: mov    ax,[bp+00]
// 0x0ea7: push   ax
// 0x0ea8: lodsw
// 0x0ea9: mov    bx,ax
// 0x0eab: jmp    word ptr [bx]

// ====================================================
// 0x0ead: WORD 'ROT' codep=0x0eb5 parp=0x0eb5
// ====================================================
// 0x0eb5: pop    dx
// 0x0eb6: pop    bx
// 0x0eb7: pop    ax
// 0x0eb8: push   bx
// 0x0eb9: push   dx
// 0x0eba: push   ax
// 0x0ebb: lodsw
// 0x0ebc: mov    bx,ax
// 0x0ebe: jmp    word ptr [bx]

// ====================================================
// 0x0ec0: WORD 'RP!' codep=0x0ec8 parp=0x0ec8
// ====================================================
// 0x0ec8: mov    bp,[di+02]
// 0x0ecb: lodsw
// 0x0ecc: mov    bx,ax
// 0x0ece: jmp    word ptr [bx]

// ====================================================
// 0x0ed0: WORD 'RP@' codep=0x0ed8 parp=0x0ed8
// ====================================================
// 0x0ed8: push   bp
// 0x0ed9: lodsw
// 0x0eda: mov    bx,ax
// 0x0edc: jmp    word ptr [bx]

// ====================================================
// 0x0ede: WORD 'S0' codep=0x224c parp=0x0ee5
// ====================================================

void S0()
{
  tt_SP0 @ 
}


// ====================================================
// 0x0eeb: WORD 'SWAP' codep=0x0ef4 parp=0x0ef4
// ====================================================
// 0x0ef4: pop    dx
// 0x0ef5: pop    ax
// 0x0ef6: push   dx
// 0x0ef7: push   ax
// 0x0ef8: lodsw
// 0x0ef9: mov    bx,ax
// 0x0efb: jmp    word ptr [bx]

// ====================================================
// 0x0efd: WORD 'SP!' codep=0x0f05 parp=0x0f05
// ====================================================
// 0x0f05: mov    sp,[di]
// 0x0f07: lodsw
// 0x0f08: mov    bx,ax
// 0x0f0a: jmp    word ptr [bx]

// ====================================================
// 0x0f0c: WORD 'SP@' codep=0x0f14 parp=0x0f14
// ====================================================
// 0x0f14: mov    ax,sp
// 0x0f16: push   ax
// 0x0f17: lodsw
// 0x0f18: mov    bx,ax
// 0x0f1a: jmp    word ptr [bx]

// ====================================================
// 0x0f1c: WORD '0' codep=0x0f22 parp=0x0f22
// ====================================================
// 0x0f22: sub    ax,ax
// 0x0f24: push   ax
// 0x0f25: lodsw
// 0x0f26: mov    bx,ax
// 0x0f28: jmp    word ptr [bx]

// ====================================================
// 0x0f2a: WORD '1' codep=0x0f30 parp=0x0f30
// ====================================================
// 0x0f30: mov    ax,0001
// 0x0f33: push   ax
// 0x0f34: lodsw
// 0x0f35: mov    bx,ax
// 0x0f37: jmp    word ptr [bx]

// ====================================================
// 0x0f39: WORD '2' codep=0x0f3f parp=0x0f3f
// ====================================================
// 0x0f3f: mov    ax,0002
// 0x0f42: push   ax
// 0x0f43: lodsw
// 0x0f44: mov    bx,ax
// 0x0f46: jmp    word ptr [bx]

// ====================================================
// 0x0f48: WORD '/' codep=0x0f4e parp=0x0f4e
// ====================================================
// 0x0f4e: pop    bx
// 0x0f4f: pop    ax
// 0x0f50: cwd    
// 0x0f51: idiv   bx
// 0x0f53: push   ax
// 0x0f54: lodsw
// 0x0f55: mov    bx,ax
// 0x0f57: jmp    word ptr [bx]

// ====================================================
// 0x0f59: WORD '/MOD' codep=0x0f62 parp=0x0f62
// ====================================================
// 0x0f62: pop    bx
// 0x0f63: pop    ax
// 0x0f64: cwd    
// 0x0f65: idiv   bx
// 0x0f67: push   dx
// 0x0f68: push   ax
// 0x0f69: lodsw
// 0x0f6a: mov    bx,ax
// 0x0f6c: jmp    word ptr [bx]

// ====================================================
// 0x0f6e: WORD '+' codep=0x0f74 parp=0x0f74
// ====================================================
// 0x0f74: pop    ax
// 0x0f75: pop    bx
// 0x0f76: add    ax,bx
// 0x0f78: push   ax
// 0x0f79: lodsw
// 0x0f7a: mov    bx,ax
// 0x0f7c: jmp    word ptr [bx]

// ====================================================
// 0x0f7e: WORD '+!' codep=0x0f85 parp=0x0f85
// ====================================================
// 0x0f85: pop    bx
// 0x0f86: pop    ax
// 0x0f87: add    [bx],ax
// 0x0f89: lodsw
// 0x0f8a: mov    bx,ax
// 0x0f8c: jmp    word ptr [bx]

// ====================================================
// 0x0f8e: WORD '-' codep=0x0f94 parp=0x0f94
// ====================================================
// 0x0f94: pop    bx
// 0x0f95: pop    ax
// 0x0f96: sub    ax,bx
// 0x0f98: push   ax
// 0x0f99: lodsw
// 0x0f9a: mov    bx,ax
// 0x0f9c: jmp    word ptr [bx]

// ====================================================
// 0x0f9e: WORD '+-' codep=0x224c parp=0x0fa5
// ====================================================

void +-()
{
  0< 
  if (Pop() == 0) goto label24;
  NEGATE 
  label24:
  
}


// ====================================================
// 0x0faf: WORD '*' codep=0x0fb5 parp=0x0fb5
// ====================================================
// 0x0fb5: pop    ax
// 0x0fb6: pop    bx
// 0x0fb7: mul    bx
// 0x0fb9: push   ax
// 0x0fba: lodsw
// 0x0fbb: mov    bx,ax
// 0x0fbd: jmp    word ptr [bx]

// ====================================================
// 0x0fbf: WORD '*/' codep=0x224c parp=0x0fc6
// ====================================================

void */()
{
  */MOD();
  SWAP DROP 
}


// ====================================================
// 0x0fce: WORD '*/MOD' codep=0x224c parp=0x0fd8
// ====================================================

void */MOD()
{
  >R M*();
  R> M/();
  
}


// ====================================================
// 0x0fe2: WORD '1+' codep=0x0fe9 parp=0x0fe9
// ====================================================
// 0x0fe9: pop    ax
// 0x0fea: inc    ax
// 0x0feb: push   ax
// 0x0fec: lodsw
// 0x0fed: mov    bx,ax
// 0x0fef: jmp    word ptr [bx]

// ====================================================
// 0x0ff1: WORD '1-' codep=0x0ff8 parp=0x0ff8
// ====================================================
// 0x0ff8: pop    ax
// 0x0ff9: dec    ax
// 0x0ffa: push   ax
// 0x0ffb: lodsw
// 0x0ffc: mov    bx,ax
// 0x0ffe: jmp    word ptr [bx]

// ====================================================
// 0x1000: WORD '2*' codep=0x1007 parp=0x1007
// ====================================================
// 0x1007: pop    ax
// 0x1008: add    ax,ax
// 0x100a: push   ax
// 0x100b: lodsw
// 0x100c: mov    bx,ax
// 0x100e: jmp    word ptr [bx]

// ====================================================
// 0x1010: WORD '2+' codep=0x1017 parp=0x1017
// ====================================================
// 0x1017: pop    ax
// 0x1018: inc    ax
// 0x1019: inc    ax
// 0x101a: push   ax
// 0x101b: lodsw
// 0x101c: mov    bx,ax
// 0x101e: jmp    word ptr [bx]

// ====================================================
// 0x1020: WORD '2-' codep=0x1027 parp=0x1027
// ====================================================
// 0x1027: pop    ax
// 0x1028: dec    ax
// 0x1029: dec    ax
// 0x102a: push   ax
// 0x102b: lodsw
// 0x102c: mov    bx,ax
// 0x102e: jmp    word ptr [bx]

// ====================================================
// 0x1030: WORD '2/' codep=0x1037 parp=0x1037
// ====================================================
// 0x1037: pop    ax
// 0x1038: sar    ax,1
// 0x103a: push   ax
// 0x103b: lodsw
// 0x103c: mov    bx,ax
// 0x103e: jmp    word ptr [bx]

// ====================================================
// 0x1040: WORD '4*' codep=0x1047 parp=0x1047
// ====================================================
// 0x1047: pop    ax
// 0x1048: shl    ax,1
// 0x104a: shl    ax,1
// 0x104c: push   ax
// 0x104d: lodsw
// 0x104e: mov    bx,ax
// 0x1050: jmp    word ptr [bx]

// ====================================================
// 0x1052: WORD 'ABS' codep=0x224c parp=0x105a
// ====================================================

void ABS()
{
  DUP +-();
  
}


// ====================================================
// 0x1060: WORD 'D+' codep=0x1067 parp=0x1067
// ====================================================
// 0x1067: pop    ax
// 0x1068: pop    dx
// 0x1069: pop    bx
// 0x106a: pop    cx
// 0x106b: add    dx,cx
// 0x106d: adc    ax,bx
// 0x106f: push   dx
// 0x1070: push   ax
// 0x1071: lodsw
// 0x1072: mov    bx,ax
// 0x1074: jmp    word ptr [bx]

// ====================================================
// 0x1076: WORD 'D+-' codep=0x224c parp=0x107e
// ====================================================

void D+-()
{
  0< 
  if (Pop() == 0) goto label25;
  DNEGATE 
  label25:
  
}


// ====================================================
// 0x1088: WORD 'DECIMAL' codep=0x224c parp=0x1094
// ====================================================

void DECIMAL()
{
  Push(0x000a); tt_BASE ! 
}


// ====================================================
// 0x109e: WORD 'DABS' codep=0x224c parp=0x10a7
// ====================================================

void DABS()
{
  DUP D+-();
  
}


// ====================================================
// 0x10ad: WORD 'DNEGATE' codep=0x10b9 parp=0x10b9
// ====================================================
// 0x10b9: sub    ax,ax
// 0x10bb: pop    cx
// 0x10bc: pop    dx
// 0x10bd: neg    dx
// 0x10bf: sbb    ax,cx
// 0x10c1: push   dx
// 0x10c2: push   ax
// 0x10c3: lodsw
// 0x10c4: mov    bx,ax
// 0x10c6: jmp    word ptr [bx]

// ====================================================
// 0x10c8: WORD 'M*' codep=0x224c parp=0x10cf
// ====================================================

void M*()
{
  2DUP XOR >R ABS();
  SWAP ABS();
  U* R> D+-();
  
}


// ====================================================
// 0x10e3: WORD 'M*/' codep=0x224c parp=0x10eb
// ====================================================

void M*/()
{
  2DUP XOR SWAP ABS();
  >R SWAP ABS();
  >R OVER XOR ROT ROT DABS();
  SWAP R@ U* ROT R> U* ROT Push(0); D+ R@ U/MOD ROT ROT R> U/MOD SWAP DROP SWAP ROT D+-();
  
}


// ====================================================
// 0x112f: WORD 'M+' codep=0x224c parp=0x1136
// ====================================================

void M+()
{
  S->D D+ 
}


// ====================================================
// 0x113c: WORD 'M/' codep=0x224c parp=0x1143
// ====================================================

void M/()
{
  OVER >R >R DUP D+-();
  R@ ABS();
  U/MOD R> R@ XOR +-();
  SWAP R> +-();
  SWAP 
}


// ====================================================
// 0x1165: WORD 'M/MOD' codep=0x224c parp=0x116f
// ====================================================

void M/MOD()
{
  >R Push(0); R@ U/MOD R> SWAP >R U/MOD R> 
}


// ====================================================
// 0x1183: WORD 'MAX' codep=0x224c parp=0x118b
// ====================================================

void MAX()
{
  2DUP < 
  if (Pop() == 0) goto label26;
  SWAP 
  label26:
  DROP 
}


// ====================================================
// 0x1199: WORD 'MOD' codep=0x224c parp=0x11a1
// ====================================================

void MOD()
{
  /MOD DROP 
}


// ====================================================
// 0x11a7: WORD 'MIN' codep=0x224c parp=0x11af
// ====================================================

void MIN()
{
  2DUP > 
  if (Pop() == 0) goto label27;
  SWAP 
  label27:
  DROP 
}


// ====================================================
// 0x11bd: WORD 'NEGATE' codep=0x11c8 parp=0x11c8
// ====================================================
// 0x11c8: pop    ax
// 0x11c9: neg    ax
// 0x11cb: push   ax
// 0x11cc: lodsw
// 0x11cd: mov    bx,ax
// 0x11cf: jmp    word ptr [bx]

// ====================================================
// 0x11d1: WORD 'U*' codep=0x11d8 parp=0x11d8
// ====================================================
// 0x11d8: pop    ax
// 0x11d9: pop    bx
// 0x11da: mul    bx
// 0x11dc: push   ax
// 0x11dd: push   dx
// 0x11de: lodsw
// 0x11df: mov    bx,ax
// 0x11e1: jmp    word ptr [bx]

// ====================================================
// 0x11e3: WORD 'U/MOD' codep=0x11ed parp=0x11ed
// ====================================================
// 0x11ed: pop    bx
// 0x11ee: pop    dx
// 0x11ef: pop    ax
// 0x11f0: div    bx
// 0x11f2: push   dx
// 0x11f3: push   ax
// 0x11f4: lodsw
// 0x11f5: mov    bx,ax
// 0x11f7: jmp    word ptr [bx]

// ====================================================
// 0x11f9: WORD 'UMAX' codep=0x224c parp=0x1202
// ====================================================

void UMAX()
{
  2DUP U< 
  if (Pop() == 0) goto label15;
  SWAP 
  label15:
  DROP 
}


// ====================================================
// 0x1210: WORD 'UMIN' codep=0x224c parp=0x1219
// ====================================================

// ====================================================
// 0x1215: WORD 'UNK_0x1217' codep=0xce49 parp=0x1217
// ====================================================

void UMIN()
{
  2DUP U< 0= 
  if (Pop() == 0) goto label3;
  SWAP 
  label3:
  DROP 
}


// ====================================================
// 0x1229: WORD '>' codep=0x122f parp=0x122f
// ====================================================
// 0x122f: pop    ax
// 0x1230: mov    cx,8000
// 0x1233: add    ax,cx
// 0x1235: pop    dx
// 0x1236: add    dx,cx
// 0x1238: sub    ax,dx
// 0x123a: adc    cx,cx
// 0x123c: push   cx
// 0x123d: lodsw
// 0x123e: mov    bx,ax
// 0x1240: jmp    word ptr [bx]

// ====================================================
// 0x1242: WORD '<' codep=0x1248 parp=0x1248
// ====================================================
// 0x1248: pop    ax
// 0x1249: mov    cx,8000
// 0x124c: add    ax,cx
// 0x124e: pop    dx
// 0x124f: add    dx,cx
// 0x1251: sub    dx,ax
// 0x1253: adc    cx,cx
// 0x1255: push   cx
// 0x1256: lodsw
// 0x1257: mov    bx,ax
// 0x1259: jmp    word ptr [bx]

// ====================================================
// 0x125b: WORD '=' codep=0x1261 parp=0x1261
// ====================================================
// 0x1261: pop    ax
// 0x1262: pop    dx
// 0x1263: xor    cx,cx
// 0x1265: sub    ax,dx
// 0x1267: sub    ax,0001
// 0x126b: rcl    cx,1
// 0x126d: push   cx
// 0x126e: lodsw
// 0x126f: mov    bx,ax
// 0x1271: jmp    word ptr [bx]

// ====================================================
// 0x1273: WORD '0<' codep=0x127a parp=0x127a
// ====================================================
// 0x127a: pop    ax
// 0x127b: cwd    
// 0x127c: neg    dx
// 0x127e: push   dx
// 0x127f: lodsw
// 0x1280: mov    bx,ax
// 0x1282: jmp    word ptr [bx]

// ====================================================
// 0x1284: WORD '0=' codep=0x128b parp=0x128b
// ====================================================
// 0x128b: pop    ax
// 0x128c: xor    cx,cx
// 0x128e: sub    ax,0001
// 0x1292: rcl    cx,1
// 0x1294: push   cx
// 0x1295: lodsw
// 0x1296: mov    bx,ax
// 0x1298: jmp    word ptr [bx]

// ====================================================
// 0x129a: WORD '0>' codep=0x12a1 parp=0x12a1
// ====================================================
// 0x12a1: pop    ax
// 0x12a2: neg    ax
// 0x12a4: cwd    
// 0x12a5: neg    dx
// 0x12a7: push   dx
// 0x12a8: lodsw
// 0x12a9: mov    bx,ax
// 0x12ab: jmp    word ptr [bx]

// ====================================================
// 0x12ad: WORD 'D<' codep=0x224c parp=0x12b4
// ====================================================

void D<()
{
  ROT 2DUP = 
  if (Pop() == 0) goto label28;
  ROT ROT DNEGATE D+ 0< 
  goto label29;
  
  label28:
  SWAP < SWAP DROP 
  label29:
  SWAP DROP 
}


// ====================================================
// 0x12da: WORD 'U<' codep=0x12e1 parp=0x12e1
// ====================================================
// 0x12e1: pop    ax
// 0x12e2: pop    dx
// 0x12e3: xor    cx,cx
// 0x12e5: sub    dx,ax
// 0x12e7: rcl    cx,1
// 0x12e9: push   cx
// 0x12ea: lodsw
// 0x12eb: mov    bx,ax
// 0x12ed: jmp    word ptr [bx]

// ====================================================
// 0x12ef: WORD 'AND' codep=0x12f7 parp=0x12f7
// ====================================================
// 0x12f7: pop    ax
// 0x12f8: pop    bx
// 0x12f9: and    ax,bx
// 0x12fb: push   ax
// 0x12fc: lodsw
// 0x12fd: mov    bx,ax
// 0x12ff: jmp    word ptr [bx]

// ====================================================
// 0x1301: WORD 'NOT' codep=0x1309 parp=0x1309
// ====================================================
// 0x1309: pop    ax
// 0x130a: xor    cx,cx
// 0x130c: sub    ax,0001
// 0x1310: rcl    cx,1
// 0x1312: push   cx
// 0x1313: lodsw
// 0x1314: mov    bx,ax
// 0x1316: jmp    word ptr [bx]

// ====================================================
// 0x1318: WORD 'OFF' codep=0x224c parp=0x1320
// ====================================================

void OFF()
{
  Push(0); SWAP ! 
}


// ====================================================
// 0x1328: WORD 'ON' codep=0x224c parp=0x132f
// ====================================================

void ON()
{
  Push(0xffff); SWAP ! 
}


// ====================================================
// 0x1339: WORD 'OR' codep=0x1340 parp=0x1340
// ====================================================
// 0x1340: pop    ax
// 0x1341: pop    bx
// 0x1342: or     ax,bx
// 0x1344: push   ax
// 0x1345: lodsw
// 0x1346: mov    bx,ax
// 0x1348: jmp    word ptr [bx]

// ====================================================
// 0x134a: WORD 'TOGGLE' codep=0x1355 parp=0x1355
// ====================================================
// 0x1355: pop    ax
// 0x1356: pop    bx
// 0x1357: xor    [bx],al
// 0x1359: lodsw
// 0x135a: mov    bx,ax
// 0x135c: jmp    word ptr [bx]

// ====================================================
// 0x135e: WORD 'XOR' codep=0x1366 parp=0x1366
// ====================================================
// 0x1366: pop    ax
// 0x1367: pop    bx
// 0x1368: xor    ax,bx
// 0x136a: push   ax
// 0x136b: lodsw
// 0x136c: mov    bx,ax
// 0x136e: jmp    word ptr [bx]

// ====================================================
// 0x1370: WORD '#' codep=0x224c parp=0x1376
// ====================================================

void #()
{
  tt_BASE @ M/MOD();
  ROT Push(0x0009); OVER < 
  if (Pop() == 0) goto label30;
  Push(0x0007); + 
  label30:
  Push(0x0030); + HOLD();
  
}


// ====================================================
// 0x139a: WORD '#>' codep=0x224c parp=0x13a1
// ====================================================

void #>()
{
  2DROP tt_HLD @ PAD();
  OVER - 
}


// ====================================================
// 0x13af: WORD '#S' codep=0x224c parp=0x13b6
// ====================================================

  label31:
  
void #S()
{
  #();
  2DUP OR NOT 
  if (Pop() == 0) goto label31;
  
}


// ====================================================
// 0x13c4: WORD '(NUMBER)' codep=0x224c parp=0x13d1
// ====================================================

void (NUMBER)()
{
  Push(0); Push(0); ROT DUP 1+ C@ Push(0x002d); = DUP >R + Push(0xffff); tt_DPL ! CONVERT();
  DUP C@ Push(cc_BL); > 
  if (Pop() == 0) goto label35;
  DUP C@ Push(0x002e); = NOT UNK_0x0b5d();
  Push(0); tt_DPL ! CONVERT();
  DUP C@ Push(cc_BL); > UNK_0x0b5d();
  
  label35:
  DROP R> 
  if (Pop() == 0) goto label36;
  DNEGATE 
  label36:
  
}


// ====================================================
// 0x142b: WORD '>UPPERCASE' codep=0x143a parp=0x143a
// ====================================================
// 0x143a: pop    cx
// 0x143b: pop    bx
// 0x143c: jcxz   1453
// 0x143e: mov    dx,617A
// 0x1441: mov    al,[bx]
// 0x1443: cmp    al,dh
// 0x1445: jb     1450
// 0x1447: cmp    al,dl
// 0x1449: ja     1450
// 0x144b: and    al,DF
// 0x144e: mov    [bx],al
// 0x1450: inc    bx
// 0x1451: loop   1441
// 0x1453: lodsw
// 0x1454: mov    bx,ax
// 0x1456: jmp    word ptr [bx]

// ====================================================
// 0x1458: WORD '<#' codep=0x224c parp=0x145f
// ====================================================

void <#()
{
  PAD();
  tt_HLD ! 
}


// ====================================================
// 0x1467: WORD 'CONVERT' codep=0x224c parp=0x1473
// ====================================================

  label34:
  
void CONVERT()
{
  1+ DUP >R C@ tt_BASE @ DIGIT 
  if (Pop() == 0) goto label32;
  SWAP tt_BASE @ U* DROP ROT tt_BASE @ U* D+ tt_DPL @ 1+ 
  if (Pop() == 0) goto label33;
  Push(1); tt_DPL +! 
  label33:
  R> 
  goto label34;
  
  label32:
  R> 
}


// ====================================================
// 0x14b3: WORD 'DIGIT' codep=0x14bd parp=0x14bd
// ====================================================
// 0x14bd: pop    dx
// 0x14be: pop    ax
// 0x14bf: sub    al,30
// 0x14c2: jb     14DE
// 0x14c4: cmp    al,09
// 0x14c7: jbe    14D1
// 0x14c9: sub    al,07
// 0x14cc: cmp    al,0A
// 0x14cf: jb     14DE
// 0x14d1: cmp    al,dl
// 0x14d3: jae    14DE
// 0x14d5: sub    dx,dx
// 0x14d7: mov    dl,al
// 0x14d9: mov    al,01
// 0x14db: push   dx
// 0x14dc: jz     14E0
// 0x14de: sub    ax,ax
// 0x14e0: push   ax
// 0x14e1: lodsw
// 0x14e2: mov    bx,ax
// 0x14e4: jmp    word ptr [bx]

// ====================================================
// 0x14e6: WORD 'HOLD' codep=0x224c parp=0x14ef
// ====================================================

void HOLD()
{
  Push(0xffff); tt_HLD +! tt_HLD @ C! 
}


// ====================================================
// 0x14ff: WORD 'S->D' codep=0x1508 parp=0x1508
// ====================================================

// ====================================================
// 0x1500: WORD 'UNK_0x1502' codep=0x8414 parp=0x1502
// ====================================================
// 0x1508: mov    bx,sp
// 0x150a: mov    ax,[bx]

// ====================================================
// 0x150c: WORD 'UNK_0x150e' codep=0x5299 parp=0x150e
// ====================================================

// ====================================================
// 0x150d: WORD 'UNK_0x150f' codep=0xad52 parp=0x150f
// ====================================================

// ====================================================
// 0x150f: WORD 'UNK_0x1511' codep=0xd88b parp=0x1511
// ====================================================
// 0x1511: db 0xff 0x27 ' ''
  
// ====================================================
// 0x1513: WORD 'SIGN' codep=0x224c parp=0x151c
// ====================================================

void SIGN()
{
  0< 
  if (Pop() == 0) goto label37;
  
// ====================================================
// 0x1522: WORD 'UNK_0x1524' codep=0x175d parp=0x1524
// ====================================================
Push(0x002d); HOLD();
  
  label37:
  
}


// ====================================================
// 0x152a: WORD '(>CODE)' codep=0x1536 parp=0x1536
// ====================================================
// 0x1536: lodsw
// 0x1537: mov    bx,si
// 0x1539: add    si,ax
// 0x153b: jmp    bx

// ====================================================
// 0x153d: WORD '(;VIA)' codep=0x1548 parp=0x1548
// ====================================================

// ====================================================
// 0x1544: WORD 'UNK_0x1546' codep=0xa941 parp=0x1546
// ====================================================

// ====================================================
// 0x1545: WORD 'UNK_0x1547' codep=0x48a9 parp=0x1547
// ====================================================
// 0x1548: lodsw
// 0x1549: inc    ax
// 0x154a: inc    ax
// 0x154b: mov    si,ax
// 0x154d: lodsw
// 0x154e: mov    bx,ax
// 0x1550: jmp    word ptr [bx]

// ====================================================
// 0x1552: WORD '(+LOOP)' codep=0x155e parp=0x155e
// ====================================================
// 0x155e: pop    bx
// 0x155f: mov    ax,[bp+00]
// 0x1562: add    ax,bx
// 0x1564: or     bx,bx
// 0x1566: js     1577
// 0x1568: cmp    ax,[bp+02]
// 0x156b: jge    157C
// 0x156d: mov    [bp+00],ax
// 0x1570: add    si,[si]
// 0x1572: lodsw
// 0x1573: mov    bx,ax
// 0x1575: jmp    word ptr [bx]
// 0x1577: cmp    ax,[bp+02]
// 0x157a: jge    156D
// 0x157c: add    bp,0004
// 0x1580: inc    si
// 0x1581: inc    si
// 0x1582: lodsw
// 0x1583: mov    bx,ax
// 0x1585: jmp    word ptr [bx]

// ====================================================
// 0x1587: WORD '(/LOOP)' codep=0x1593 parp=0x1593
// ====================================================
// 0x1593: pop    ax
// 0x1594: add    ax,[bp+00]
// 0x1597: cmp    ax,[bp+02]
// 0x159a: jae    15A6
// 0x159c: mov    [bp+00],ax
// 0x159f: add    si,[si]
// 0x15a1: lodsw
// 0x15a2: mov    bx,ax
// 0x15a4: jmp    word ptr [bx]
// 0x15a6: add    bp,0004
// 0x15aa: inc    si
// 0x15ab: inc    si
// 0x15ac: lodsw
// 0x15ad: mov    bx,ax
// 0x15af: jmp    word ptr [bx]

// ====================================================
// 0x15b1: WORD '(DO)' codep=0x15ba parp=0x15ba
// ====================================================
// 0x15ba: pop    dx
// 0x15bb: pop    ax
// 0x15bc: xchg   sp,bp
// 0x15be: push   ax
// 0x15bf: push   dx
// 0x15c0: xchg   sp,bp
// 0x15c2: lodsw
// 0x15c3: mov    bx,ax
// 0x15c5: jmp    word ptr [bx]

// ====================================================
// 0x15c7: WORD '(LOOP)' codep=0x15d2 parp=0x15d2
// ====================================================
// 0x15d2: mov    ax,[bp+00]
// 0x15d5: inc    ax
// 0x15d6: cmp    ax,[bp+02]
// 0x15d9: jge    15E5
// 0x15db: mov    [bp+00],ax
// 0x15de: add    si,[si]
// 0x15e0: lodsw
// 0x15e1: mov    bx,ax
// 0x15e3: jmp    word ptr [bx]
// 0x15e5: add    bp,0004
// 0x15e9: inc    si
// 0x15ea: inc    si
// 0x15eb: lodsw
// 0x15ec: mov    bx,ax
// 0x15ee: jmp    word ptr [bx]

// ====================================================
// 0x15f0: WORD '0BRANCH' codep=0x15fc parp=0x15fc
// ====================================================
// 0x15fc: pop    ax
// 0x15fd: or     ax,ax
// 0x15ff: jz     1608
// 0x1601: inc    si
// 0x1602: inc    si
// 0x1603: lodsw
// 0x1604: mov    bx,ax
// 0x1606: jmp    word ptr [bx]
// 0x1608: add    si,[si]
// 0x160a: lodsw
// 0x160b: mov    bx,ax
// 0x160d: jmp    word ptr [bx]

// ====================================================
// 0x160f: WORD '2LIT' codep=0x1618 parp=0x1618
// ====================================================
// 0x1618: lodsw
// 0x1619: push   ax
// 0x161a: lodsw
// 0x161b: push   ax
// 0x161c: lodsw
// 0x161d: mov    bx,ax
// 0x161f: jmp    word ptr [bx]

// ====================================================
// 0x1621: WORD 'ABORT-IT' codep=0x224c parp=0x162e
// ====================================================

void ABORT-IT()
{
  Push(1); 
  (ABORT") // string 20 "Aborting execution! "
  
}

// 0x1649: inc    bx
// 0x164a: inc    bx
// 0x164b: dec    bp
// 0x164c: dec    bp
// 0x164d: mov    [bp+00],si
// 0x1650: pop    si
// 0x1651: push   bx
// 0x1652: lodsw
// 0x1653: mov    bx,ax
// 0x1655: jmp    word ptr [bx]

// ====================================================
// 0x1657: WORD 'BRANCH' codep=0x1662 parp=0x1662
// ====================================================
// 0x1662: add    si,[si]
// 0x1664: lodsw
// 0x1665: mov    bx,ax
// 0x1667: jmp    word ptr [bx]

// ====================================================
// 0x1669: WORD 'CFAEXEC' codep=0x1675 parp=0x1675
// ====================================================
// 0x1675: pop    bx
// 0x1676: jmp    word ptr [bx]

// ====================================================
// 0x1678: WORD 'EXECUTE' codep=0x1684 parp=0x1684
// ====================================================
// 0x1684: pop    bx
// 0x1685: dec    bx
// 0x1686: dec    bx
// 0x1687: jmp    word ptr [bx]

// ====================================================
// 0x1689: WORD 'EXIT' codep=0x1692 parp=0x1692
// ====================================================
// 0x1692: mov    si,[bp+00]
// 0x1695: inc    bp
// 0x1696: inc    bp
// 0x1697: lodsw
// 0x1698: mov    bx,ax
// 0x169a: jmp    word ptr [bx]

// ====================================================
// 0x169c: WORD 'GO' codep=0x16a3 parp=0x16a3
// ====================================================
// 0x16a3: pop    bx
// 0x16a4: jmp    bx

// ====================================================
// 0x16a6: WORD 'REGISTERS' codep=0x1d29 parp=0x16b4
// ====================================================
// 0x16b4: db 0x02 0x02 0x00 0x15 0x56 0x48 0xc6 0x07 0xca 0x2d 0x38 0xd3 0xca 0x2d 0xf1 0xd5 0x63 0x33 0x63 0x33 '    VH   -8  -  c3c3'
  // 0x16c8: int    21
// 0x16ca: ret    


// ====================================================
// 0x16cb: WORD 'INTERRUPT' codep=0x16d9 parp=0x16d9
// ====================================================
// 0x16d9: pop    ax
// 0x16da: mov    [16C9],al
// 0x16dd: push   bp
// 0x16de: push   di
// 0x16df: push   si
// 0x16e0: push   es
// 0x16e1: pushf  
// 0x16e2: mov    ax,[16B4]
// 0x16e5: push   ax
// 0x16e6: popf   
// 0x16e7: mov    bx,[16B8]
// 0x16eb: mov    cx,[16BA]
// 0x16ef: mov    dx,[16BC]
// 0x16f3: mov    si,[16C2]
// 0x16f7: mov    di,[16C0]
// 0x16fb: mov    ax,[16C6]
// 0x16fe: mov    es,ax
// 0x1700: mov    ax,[16C4]
// 0x1703: mov    ds,ax
// 0x1705: cs:    
// 0x1706: mov    ax,[16B6]
// 0x1709: call   16C8
// 0x170c: cs:    
// 0x170d: mov    [16B6],ax
// 0x1710: mov    ax,ds
// 0x1712: cs:    
// 0x1713: mov    [16C4],ax
// 0x1716: mov    ax,cs
// 0x1718: mov    ds,ax
// 0x171a: pushf  
// 0x171b: pop    ax
// 0x171c: mov    [16B4],ax
// 0x171f: mov    ax,bx
// 0x1721: mov    [16B8],ax
// 0x1724: mov    ax,cx
// 0x1726: mov    [16BA],ax
// 0x1729: mov    ax,dx
// 0x172b: mov    [16BC],ax
// 0x172e: mov    ax,di
// 0x1730: mov    [16C0],ax
// 0x1733: mov    ax,es
// 0x1735: mov    [16C6],ax
// 0x1738: popf   
// 0x1739: pop    es
// 0x173a: pop    si
// 0x173b: pop    di
// 0x173c: pop    bp
// 0x173d: lodsw
// 0x173e: mov    bx,ax
// 0x1740: jmp    word ptr [bx]

// ====================================================
// 0x1742: WORD 'LEAVE' codep=0x174c parp=0x174c
// ====================================================
// 0x174c: mov    ax,[bp+00]
// 0x174f: mov    [bp+02],ax
// 0x1752: lodsw
// 0x1753: mov    bx,ax
// 0x1755: jmp    word ptr [bx]

// ====================================================
// 0x1757: WORD 'LIT' codep=0x175f parp=0x175f
// ====================================================
// 0x175f: lodsw
// 0x1760: push   ax
// 0x1761: lodsw
// 0x1762: mov    bx,ax
// 0x1764: jmp    word ptr [bx]

// ====================================================
// 0x1766: WORD 'SYSCALL' codep=0x1772 parp=0x1772
// ====================================================
// 0x1772: pop    dx
// 0x1773: pop    cx
// 0x1774: mov    ch,00
// 0x1776: call   0005
// 0x1779: mov    ah,00
// 0x177b: push   ax
// 0x177c: lodsw
// 0x177d: mov    bx,ax
// 0x177f: jmp    word ptr [bx]

// ====================================================
// 0x1781: WORD 'USER' codep=0x224c parp=0x178a
// ====================================================

void USER()
{
  OVER CONSTANT();
  + 
  (;CODE)();
// inlined assembler code
// 0x1792: inc    bx
// 0x1793: inc    bx
// 0x1794: mov    ax,[bx]
// 0x1796: add    ax,di
// 0x1798: push   ax
// 0x1799: lodsw
// 0x179a: mov    bx,ax
// 0x179c: jmp    word ptr [bx]

// ====================================================
// 0x179e: WORD 'USEREXECUTOR' codep=0x224c parp=0x17af
// ====================================================

void USEREXECUTOR()
{
  DUP CONSTANT();
  2+ 
  (;CODE)();
// inlined assembler code
// 0x17b7: inc    bx
// 0x17b8: inc    bx
// 0x17b9: mov    bx,[bx]
// 0x17bb: mov    bx,[bx+di]
// 0x17bd: dec    bx
// 0x17be: dec    bx
// 0x17bf: jmp    word ptr [bx]

// ====================================================
// 0x17c1: WORD '+FIND' codep=0x224c parp=0x17cb
// ====================================================

void +FIND()
{
  HERE();
  tt_CURRENT @ [-FIND]();
  
}


// ====================================================
// 0x17d5: WORD '(-FIND)' codep=0x224c parp=0x17e1
// ====================================================

void (-FIND)()
{
  HERE();
  tt_CONTEXT @ [-FINDS]();
  DUP 0= 
  if (Pop() == 0) goto label43;
  tt_CONTEXT @ tt_CURRENT @ = NOT 
  if (Pop() == 0) goto label43;
  DROP HERE();
  tt_CURRENT @ [-FINDS]();
  
  label43:
  
}


// ====================================================
// 0x180d: WORD '(FIND)' codep=0x1818 parp=0x1818
// ====================================================
// 0x1818: pop    bx
// 0x1819: pop    cx
// 0x181a: push   si
// 0x181b: push   di
// 0x181c: mov    dx,7F3F
// 0x181f: jmp    1826
// 0x1822: dec    bx
// 0x1823: dec    bx
// 0x1824: mov    bx,[bx]
// 0x1826: or     bx,bx
// 0x1828: jz     1859
// 0x182a: mov    si,cx
// 0x182c: mov    di,bx
// 0x182e: lodsb
// 0x182f: mov    ah,[di]
// 0x1831: and    ah,dl
// 0x1833: cmp    ah,al
// 0x1835: jnz    1822
// 0x1837: inc    di
// 0x1838: lodsb
// 0x1839: mov    ah,[di]
// 0x183b: xor    ah,al
// 0x183d: jz     1837
// 0x183f: and    ah,dh
// 0x1841: jnz    1822
// 0x1843: mov    ax,di
// 0x1845: pop    di
// 0x1846: pop    si
// 0x1847: inc    ax
// 0x1848: inc    ax
// 0x1849: inc    ax
// 0x184a: push   ax
// 0x184b: sub    ax,ax
// 0x184d: inc    ax
// 0x184e: mov    dl,[bx]
// 0x1850: mov    dh,ah
// 0x1852: push   dx
// 0x1853: push   ax
// 0x1854: lodsw
// 0x1855: mov    bx,ax
// 0x1857: jmp    word ptr [bx]
// 0x1859: pop    di
// 0x185a: pop    si
// 0x185b: push   bx
// 0x185c: lodsw
// 0x185d: mov    bx,ax
// 0x185f: jmp    word ptr [bx]

// ====================================================
// 0x1861: WORD '(FORGET)' codep=0x224c parp=0x186e
// ====================================================

void (FORGET)()
{
  DUP tt_CONTEXT @ U< 
  if (Pop() == 0) goto label10;
  'FORTH();
  tt_CONTEXT ! 
  label10:
  DUP tt_CURRENT @ U< 
  if (Pop() == 0) goto label11;
  DEFINITIONS();
  
  label11:
  tt_VOC-LINK @ 
  label18:
  2DUP UNK_0x1a6e();
  
  if (Pop() == 0) goto label12;
  @ 
  goto label18;
  
  label12:
  DUP tt_VOC-LINK ! 
  label16:
  ?DUP 
  if (Pop() == 0) goto label13;
  Push(0); OVER 2+ ! 2DUP Push(0x0004); + Push(0x0008); OVER + SWAP 
  do // (DO)
  {
  I @ 
  label17:
  2DUP 1+ UNK_0x1a6e();
  
  if (Pop() == 0) goto label14;
  2- @ 
  goto label17;
  
  label14:
  I ! OVER 2+ DUP @ I @ UMAX();
  SWAP ! Push(2); 
  } while(...); // (/LOOP) 0xffd0
  DROP @ 
  goto label16;
  
  label13:
  tt_LFALEN @ - tt_DP ! 
}


// ====================================================
// 0x190e: WORD '(LINKS)' codep=0x224c parp=0x191a
// ====================================================

// ====================================================
// 0x1917: WORD 'UNK_0x1919' codep=0x4ca9 parp=0x1919
// ====================================================

void (LINKS)()
{
  OVER @ HERE();
  SWAP ,();
  Push(0xffff); ,();
  SWAP ,();
  SWAP ! 
}


// ====================================================
// 0x1934: WORD '<NAME>' codep=0x224c parp=0x193f
// ====================================================

void <NAME>()
{
  Push(cc_BL); WORD tt_LOWERCASE @ 
  if (Pop() == 0) goto label44;
  DROP 
  goto label45;
  
  label44:
  COUNT();
  >UPPERCASE 
  label45:
  
}


// ====================================================
// 0x1957: WORD '?FIND' codep=0x224c parp=0x1961
// ====================================================

void ?FIND()
{
  <NAME>();
  -FIND 0= 
  (ABORT") // string 9 "Not found"
  DROP 
}


// ====================================================
// 0x1977: WORD '?[PTR]' codep=0x224c parp=0x1982
// ====================================================

void ?[PTR]()
{
  2+ @ 1+ 0= 
}


// ====================================================
// 0x198c: WORD 'DEFINITIONS' codep=0x224c parp=0x199c
// ====================================================

void DEFINITIONS()
{
  tt_CONTEXT @ tt_CURRENT ! 
}


// ====================================================
// 0x19a6: WORD 'EMPTY' codep=0x224c parp=0x19b0
// ====================================================

void EMPTY()
{
  tt_LFALEN DUP @ SWAP Push(2); OVER ! Push(cc_INITIAL-DP); @ 2+ (FORGET)();
  ! 
}


// ====================================================
// 0x19ca: WORD 'FIND' codep=0x224c parp=0x19d3
// ====================================================

void FIND()
{
  <NAME>();
  -FIND 
  if (Pop() == 0) goto label46;
  DROP CFA();
  
  goto label47;
  
  label46:
  Push(0); 
  label47:
  
}


// ====================================================
// 0x19e7: WORD 'FORGET' codep=0x224c parp=0x19f2
// ====================================================

void FORGET()
{
  <NAME>();
  tt_MSGFLAGS @ Push(0x0040); AND 
  if (Pop() == 0) goto label48;
  -FIND 0= UNK_0x0b5d();
  
  goto label49;
  
  label48:
  +FIND();
  0= 
  (ABORT") // string 25 "Not in CURRENT vocabulary"
  
  label49:
  DROP NFA();
  DUP WITHIN?();
  0= 0= 
  (ABORT") // string 27 "Within protected dictionary"
  (FORGET)();
  
}

// 0x1a5a: db 0x4c 0x22 0xc2 0x05 0xae 0x0b 0x18 0x19 0x90 0x16 0x4c 0x22 0xb6 0x0a 0x18 0x19 0x90 0x16 'L"        L"      '
  
// ====================================================
// 0x1a6c: WORD 'UNK_0x1a6e' codep=0x224c parp=0x1a6e
// ====================================================

void UNK_0x1a6e()
{
  U< OVER 0= 1- AND 
}


// ====================================================
// 0x1a7a: WORD 'VOCABULARY' codep=0x224c parp=0x1a89
// ====================================================

void VOCABULARY()
{
  CREATE HERE();
  Push(0); ,();
  HERE();
  tt_VOC-LINK @ ,();
  tt_VOC-LINK ! Push(0); ,();
  Push(0); ,();
  Push(0); ,();
  Push(0); ,();
  Push(0); ,();
  LINKS> 
  (;CODE)();
// inlined assembler code
// 0x1ab5: call   1649
// 0x1ab8: db 0xaa 0x05 0xdf 0x0b 0x90 0x16 '      '
  
// ====================================================
// 0x1abe: WORD 'UNK_0x1ac0' codep=0x1ac0 parp=0x1ac0
// ====================================================
// 0x1ac0: pop    bx
// 0x1ac1: xor    ax,ax
// 0x1ac3: mov    al,[bx]
// 0x1ac5: inc    bx
// 0x1ac6: add    al,[bx]
// 0x1ac8: and    ax,0006
// 0x1acb: add    ax,0006
// 0x1ace: push   ax
// 0x1acf: lodsw
// 0x1ad0: mov    bx,ax
// 0x1ad2: jmp    word ptr [bx]

// ====================================================
// 0x1ad4: WORD 'WITHIN?' codep=0x224c parp=0x1ae0
// ====================================================

void WITHIN?()
{
  tt_FENCE @ 1+ Push(cc_INITIAL-DP); @ UMAX();
  ME UMAX();
  OVER SWAP U< SP@ ROT U< OR 
}


// ====================================================
// 0x1b00: WORD '[-FIND]' codep=0x224c parp=0x1b0c
// ====================================================

void [-FIND]()
{
  DUP ?[PTR]();
  
  if (Pop() == 0) goto label38;
  2DROP Push(0); 
  goto label39;
  
  label38:
  OVER UNK_0x1ac0 + @ (FIND) 
  label39:
  
}


// ====================================================
// 0x1b28: WORD '[-FINDS]' codep=0x224c parp=0x1b35
// ====================================================

void [-FINDS]()
{
  SWAP >R >R 
  label42:
  I' I DUP ?[PTR]();
  
  if (Pop() == 0) goto label40;
  Push(0x0004); + @ 
  label40:
  [-FIND]();
  DUP 0= I @ 0= NOT AND 
  if (Pop() == 0) goto label41;
  DROP R> @ >R 
  goto label42;
  
  label41:
  R> R> 2DROP 
}


// ====================================================
// 0x1b77: WORD ''' codep=0x224c parp=0x1b7d
// ====================================================

void '()
{
  ?FIND();
  LITERAL();
  
}


// ====================================================
// 0x1b83: WORD ''STREAM' codep=0x224c parp=0x1b8f
// ====================================================

void 'STREAM()
{
  tt_BLK @ ?DUP 
  if (Pop() == 0) goto label52;
  BLOCK();
  
  goto label72;
  
  label52:
  tt_TIB @ 
  label72:
  tt_>IN @ + 
}


// ====================================================
// 0x1bab: WORD '(' codep=0x224c parp=0x1bb1
// ====================================================

void (()
{
  Push(0xffff); tt_>IN +! Push(0x0029); WORD C@ 1+ HERE();
  + C@ Push(0x0029); = NOT UNK_0x0b30();
  
}


// ====================================================
// 0x1bd5: WORD '(.")' codep=0x224c parp=0x1bde
// ====================================================

void (.")()
{
  R@ COUNT();
  DUP 1+ R> + >R TYPE 
}


// ====================================================
// 0x1bf0: WORD '(;CODE)' codep=0x224c parp=0x1bfc
// ====================================================

void (;CODE)()
{
  R> LATEST();
  
// ====================================================
// 0x1c00: WORD 'UNK_0x1c02' codep=0x23ed parp=0x1c02
// ====================================================
PFA();
  CFA();
  ! 
}


// ====================================================
// 0x1c08: WORD '(ABORT")' codep=0x224c parp=0x1c15
// ====================================================

void (ABORT")()
{
  
  if (Pop() == 0) goto label73;
  WHERE CR R@ COUNT();
  TYPE SP! QUIT();
  
  goto label76;
  
  label73:
  R> DUP C@ + 1+ >R 
  label76:
  
}


// ====================================================
// 0x1c39: WORD '(ABORT)' codep=0x224c parp=0x1c45
// ====================================================

void (ABORT)()
{
  SP! Push(0); UNK_0x0ad9();
  QUIT();
  
}


// ====================================================
// 0x1c4f: WORD '."' codep=0x224c parp=0x1c56
// ====================================================

void ."()
{
  'STREAM();
  C@ Push(0x0022); = 
  if (Pop() == 0) goto label77;
  Push(1); tt_>IN +! 
  goto label80;
  
  label77:
  Push(0x0022); tt_STATE @ 
  if (Pop() == 0) goto label78;
  COMPILE();
  
  (.") // string 253
  
  label78:
  WORD DUP C@ 1+ OVER + C@ Push(0x0022); = NOT UNK_0x0b30();
  tt_STATE @ 
  if (Pop() == 0) goto label79;
  C@ 1+ ALLOT();
  
  goto label80;
  
  label79:
  COUNT();
  TYPE 
  label80:
  
}


// ====================================================
// 0x1cae: WORD '(CREATE)' codep=0x224c parp=0x1cbb
// ====================================================

void (CREATE)()
{
  HERE();
  Push(0); ,();
  <NAME>();
  UNK_0x1ff4();
  UNK_0x20c6();
  UNK_0x2057();
  HERE();
  DUP C@ Push(0x001f); AND 2DUP SWAP C! tt_WIDTH @ MIN();
  Push(1); MAX();
  1+ ALLOT();
  DUP Push(0x0080); TOGGLE HERE();
  1- Push(0x0080); TOGGLE Push(2); ALLOT();
  DUP UNK_0x1ac0 tt_CURRENT @ >R I + ROT OVER @ SWAP ! OVER SWAP ! R> Push(0x0004); + ! 
  (;CODE)();
// inlined assembler code

// ====================================================
// 0x1d29: WORD 'UNK_0x1d2b' codep=0x4343 parp=0x1d2b
// ====================================================
// 0x1d2b: db 0x53 0xad 0x8b 0xd8 0xff 0x27 'S    ''
  
// ====================================================
// 0x1d31: WORD '(EXPECT)' codep=0x224c parp=0x1d3e
// ====================================================

void (EXPECT)()
{
  OVER + OVER 
  do // (DO)
  {
  KEY Push(0x00ff); AND DUP Push(0x0008); = OVER Push(0x007f); = OR 
  if (Pop() == 0) goto label85;
  DROP DUP I = DUP R> 1- + >R 
  if (Pop() == 0) goto label90;
  BELL 
  goto label91;
  
  label90:
  BS SPACE();
  BS 
  label91:
  Push(0); Push(0x0020); 
  goto label88;
  
  label85:
  DUP Push(0x000d); = 
  if (Pop() == 0) goto label86;
  DROP Push(0); Push(cc_BL); LEAVE 
  goto label89;
  
  label86:
  DUP 
  label89:
  ?DUP 
  if (Pop() == 0) goto label87;
  EMIT Push(1); SWAP 
  goto label88;
  
  label87:
  DUP 
  label88:
  I ! 
  } while(...); // (/LOOP) 0xff84
  DROP 
}


// ====================================================
// 0x1dc8: WORD '(INTERPRET)' codep=0x224c parp=0x1dd8
// ====================================================

  label94:
  
void (INTERPRET)()
{
  <NAME>();
  -FIND 
  if (Pop() == 0) goto label92;
  tt_STATE @ U< 
  if (Pop() == 0) goto label98;
  2- ,();
  
  goto label99;
  
  label98:
  EXECUTE UNK_0x21c9 
  label99:
  
  goto label97;
  
  label92:
  HERE();
  NUMBER tt_DPL @ 1+ 
  if (Pop() == 0) goto label93;
  2LITERAL();
  
  goto label97;
  
  label93:
  DROP LITERAL();
  
  label97:
  
  goto label94;
  
}


// ====================================================
// 0x1e18: WORD '(LOAD)' codep=0x224c parp=0x1e23
// ====================================================

void (LOAD)()
{
  ?DUP 0= 
  (ABORT") // string 12 "Not loadable"
  tt_BLK @ >R tt_>IN @ >R Push(0); tt_>IN ! tt_BLK ! INTERPRET R> tt_>IN ! R> tt_BLK ! 
}


// ====================================================
// 0x1e5c: WORD '(WHERE)' codep=0x224c parp=0x1e68
// ====================================================

void (WHERE)()
{
  tt_BLK @ ?DUP 
  if (Pop() == 0) goto label100;
  DUP tt_SCR ! CR CR 
  (.") string 5 "Scr# "
  DUP .();
  tt_>IN @ Push(0x03ff); MIN();
  DUP tt_R# ! Push(cc_C/L); /MOD DUP 
  (.") string 6 "LINE# "
  .();
  ROT CR CR .LINE();
  tt_>IN @ Push(0x03ff); > + 
  goto label105;
  
  label100:
  tt_>IN @ 
  label105:
  CR HERE();
  C@ DUP >R - HERE();
  R@ + 1+ C@ Push(0x0020); = 
  if (Pop() == 0) goto label101;
  1- 
  label101:
  SPACES();
  R> Push(0); 
  do // (DO)
  {
  Push(0x005e); EMIT 
  } while(...); // (LOOP) 0xfff8
  
}


// ====================================================
// 0x1efb: WORD '(WORD)' codep=0x224c parp=0x1f06
// ====================================================

void (WORD)()
{
  'STREAM();
  SWAP ENCLOSE 2DUP > 
  if (Pop() == 0) goto label106;
  2DROP 2DROP Push(0); HERE();
  ! 
  goto label107;
  
  label106:
  tt_>IN +! OVER - DUP >R HERE();
  C! + HERE();
  1+ R> DUP Push(0x00ff); > tt_MSGFLAGS @ Push(0x0004); AND 0= 0= AND 
  (ABORT") // string 22 "Input > 255 characters"
  1+ CMOVE 
  label107:
  HERE();
  
}


// ====================================================
// 0x1f73: WORD '+LOOP' codep=0x224c parp=0x1f7d
// ====================================================

void +LOOP()
{
  Push(0x0003); ?PAIRS();
  COMPILE();
  
  } while(...); // (+LOOP) 0x22ed
  - ,();
  
}


// ====================================================
// 0x1f8f: WORD ',' codep=0x224c parp=0x1f95
// ====================================================

void ,()
{
  HERE();
  ! Push(2); tt_DP +! UNK_0x21c9 
}


// ====================================================
// 0x1fa3: WORD '/LOOP' codep=0x224c parp=0x1fad
// ====================================================

void /LOOP()
{
  Push(0x0003); ?PAIRS();
  COMPILE();
  
  } while(...); // (/LOOP) 0x22ed
  - ,();
  
}


// ====================================================
// 0x1fbf: WORD ';' codep=0x224c parp=0x1fc5
// ====================================================

void ;()
{
  ?CSP();
  COMPILE();
  
}

// 0x1fcb: db 0x80 0x24 0x56 0x25 0x90 0x16 ' $V%  '
  
// ====================================================
// 0x1fd1: WORD '?COMP' codep=0x224c parp=0x1fdb
// ====================================================

void ?COMP()
{
  tt_STATE @ NOT 
  (ABORT") // string 12 "Compile only"
  
}


// ====================================================
// 0x1ff2: WORD 'UNK_0x1ff4' codep=0x224c parp=0x1ff4
// ====================================================

void UNK_0x1ff4()
{
  HERE();
  C@ 0= NEGATE tt_MSGFLAGS @ 
// ====================================================
// 0x2000: WORD 'UNK_0x2002' codep=0x175d parp=0x2002
// ====================================================
Push(0x0010); AND AND 
  (ABORT") // string 27 "You can't redefine 'return'"
  
// ====================================================
// 0x200d: WORD 'UNK_0x200f' codep=0x2075 parp=0x200f
// ====================================================

// ====================================================
// 0x2020: WORD 'UNK_0x2022' codep=0x7465 parp=0x2022
// ====================================================

}


// ====================================================
// 0x2028: WORD '?CSP' codep=0x224c parp=0x2031
// ====================================================

void ?CSP()
{
  SP@ tt_CSP @ - 
  (ABORT") // string 23 "Definition not finished"
  
// ====================================================
// 0x2042: WORD 'UNK_0x2044' codep=0x6974 parp=0x2044
// ====================================================

}


// ====================================================
// 0x2055: WORD 'UNK_0x2057' codep=0x224c parp=0x2057
// ====================================================

void UNK_0x2057()
{
  tt_CURRENT @ ?[PTR]();
  
  (ABORT") // string 21 "No current vocabulary"
  
}


// ====================================================
// 0x2077: WORD '?LOADING' codep=0x224c parp=0x2084
// ====================================================

void ?LOADING()
{
  tt_BLK @ NOT 
  (ABORT") // string 12 "Loading only"
  
}


// ====================================================
// 0x209b: WORD '?PAIRS' codep=0x224c parp=0x20a6
// ====================================================

void ?PAIRS()
{
  - 
  (ABORT") // string 23 "Conditionals not paired"
  
}


// ====================================================
// 0x20c4: WORD 'UNK_0x20c6' codep=0x224c parp=0x20c6
// ====================================================

void UNK_0x20c6()
{
  tt_MSGFLAGS @ Push(0x0001); Push(0x0002); OR AND 
  if (Pop() == 0) goto label81;
  +FIND();
  
  if (Pop() == 0) goto label82;
  Push(1); 
  goto label84;
  
  label82:
  tt_MSGFLAGS @ Push(0x0002); AND 
  if (Pop() == 0) goto label83;
  -FIND 
  goto label84;
  
  label83:
  Push(0); 
  label84:
  
  if (Pop() == 0) goto label81;
  2DROP HERE();
  COUNT();
  TYPE 
  (.") string 14 " isn't unique "
  
  label81:
  
}


// ====================================================
// 0x211b: WORD 'ABORT"' codep=0x224c parp=0x2126
// ====================================================

void ABORT"()
{
  ?COMP();
  COMPILE();
  
  (ABORT") // string 141
  'STREAM();
  C@ Push(0x0022); = 
  if (Pop() == 0) goto label108;
  Push(1); tt_>IN +! Push(0); C,();
  
  goto label109;
  
  label108:
  Push(0x0022); WORD DUP C@ 1+ SWAP OVER + C@ Push(0x0022); = NOT UNK_0x0b30();
  ALLOT();
  
  label109:
  
}


// ====================================================
// 0x216a: WORD 'AGAIN' codep=0x224c parp=0x2174
// ====================================================

void AGAIN()
{
  Push(1); ?PAIRS();
  COMPILE();
  
  goto label110;
  - ,();
  
}


// ====================================================
// 0x2184: WORD 'ALLOT' codep=0x224c parp=0x218e
// ====================================================

void ALLOT()
{
  DUP UNK_0x0ad9();
  tt_DP +! 
}


// ====================================================
// 0x2198: WORD 'BEGIN' codep=0x224c parp=0x21a2
// ====================================================

void BEGIN()
{
  ?COMP();
  HERE();
  Push(1); 
}


// ====================================================
// 0x21aa: WORD 'C,' codep=0x224c parp=0x21b1
// ====================================================

void C,()
{
  HERE();
  C! Push(1); ALLOT();
  
}


// ====================================================
// 0x21bb: WORD 'CFA' codep=0x224c parp=0x21c3
// ====================================================

void CFA()
{
  2- 
}


// ====================================================
// 0x21c7: WORD 'UNK_0x21c9' codep=0x21c9 parp=0x21c9
// ====================================================
// 0x21c9: mov    ax,[0A0B]
// 0x21cc: add    ax,[di+04]
// 0x21cf: jo     21E0
// 0x21d1: cmp    ax,sp
// 0x21d3: ja     21E0
// 0x21d5: mov    ax,[di]
// 0x21d7: cmp    ax,sp
// 0x21d9: jb     21E0
// 0x21db: lodsw
// 0x21dc: mov    bx,ax
// 0x21de: jmp    word ptr [bx]
// 0x21e0: mov    bx,0B10
// 0x21e3: jmp    word ptr [bx]

// ====================================================
// 0x21e5: WORD 'COMPILE' codep=0x224c parp=0x21f1
// ====================================================

void COMPILE()
{
  ?COMP();
  R> DUP 2+ >R @ ,();
  
}


// ====================================================
// 0x2201: WORD 'CONSTANT' codep=0x224c parp=0x220e
// ====================================================

void CONSTANT()
{
  CREATE ,();
  
  (;CODE)();
// inlined assembler code
// 0x2214: inc    bx
// 0x2215: inc    bx
// 0x2216: push   word ptr [bx]
// 0x2218: lodsw
// 0x2219: mov    bx,ax
// 0x221b: jmp    word ptr [bx]

// ====================================================
// 0x221d: WORD 'DO' codep=0x224c parp=0x2224
// ====================================================

void DO()
{
  COMPILE();
  
  do // (DO)
  {
  HERE();
  Push(0x0003); 
// ====================================================
// 0x222c: WORD 'UNK_0x222e' codep=0x0003 parp=0x222e
// ====================================================

}


// ====================================================
// 0x2230: WORD ':' codep=0x224c parp=0x2236
// ====================================================

void :()
{
  SP@ tt_CSP ! tt_CURRENT @ tt_CONTEXT ! CREATE SMUDGE();
  ]();
  
  (;CODE)();
// inlined assembler code

// ====================================================
// 0x224c: WORD 'UNK_0x224e' codep=0x4343 parp=0x224e
// ====================================================
// 0x224e: db 0x4d 0x4d 0x89 0x76 0x00 0x8b 0xf3 0xad 0x8b 0xd8 0xff 0x27 'MM v       ''
  
// ====================================================
// 0x225a: WORD 'DOES>' codep=0x224c parp=0x2264
// ====================================================

void DOES>()
{
  ?CSP();
  COMPILE();
  
  (;CODE)();
// inlined assembler code
// 0x226a: db 0x5d 0x17 0xe8 0x00 0xaf 0x21 0x5d 0x17 0x49 0x16 0xed 0x22 0x15 0x10 0x92 0x0f 0x93 0x1f 0x90 0x16 ']    !] I  "        '
  
// ====================================================
// 0x227e: WORD 'ELSE' codep=0x224c parp=0x2287
// ====================================================

void ELSE()
{
  Push(2); ?PAIRS();
  COMPILE();
  
  goto label114;
  Push(0); ,();
  SWAP Push(2); THEN();
  Push(2); 
}


// ====================================================
// 0x229f: WORD 'ENCLOSE' codep=0x22ab parp=0x22ab
// ====================================================
// 0x22ab: pop    ax
// 0x22ac: pop    bx
// 0x22ad: push   bx
// 0x22ae: sub    ah,ah
// 0x22b0: mov    dx,FFFF
// 0x22b3: dec    bx
// 0x22b4: inc    bx
// 0x22b5: inc    dx
// 0x22b6: cmp    al,[bx]
// 0x22b8: jz     22B4
// 0x22ba: push   dx
// 0x22bb: cmp    ah,[bx]
// 0x22bd: jnz    22C9
// 0x22bf: mov    ax,dx
// 0x22c1: inc    dx
// 0x22c2: push   dx
// 0x22c3: push   ax
// 0x22c4: lodsw
// 0x22c5: mov    bx,ax
// 0x22c7: jmp    word ptr [bx]
// 0x22c9: inc    bx
// 0x22ca: inc    dx
// 0x22cb: cmp    al,[bx]
// 0x22cd: jz     22DC
// 0x22cf: cmp    ah,[bx]
// 0x22d1: jnz    22C9
// 0x22d3: mov    ax,dx
// 0x22d5: push   dx
// 0x22d6: push   ax
// 0x22d7: lodsw
// 0x22d8: mov    bx,ax
// 0x22da: jmp    word ptr [bx]
// 0x22dc: mov    ax,dx
// 0x22de: inc    ax
// 0x22df: push   dx
// 0x22e0: push   ax
// 0x22e1: lodsw
// 0x22e2: mov    bx,ax
// 0x22e4: jmp    word ptr [bx]

// ====================================================
// 0x22e6: WORD 'HERE' codep=0x224c parp=0x22ef
// ====================================================

void HERE()
{
  tt_DP @ 
}


// ====================================================
// 0x22f5: WORD 'HEX' codep=0x224c parp=0x22fd
// ====================================================

void HEX()
{
  Push(0x0010); 
// ====================================================
// 0x2300: WORD 'UNK_0x2302' codep=0x4a00 parp=0x2302
// ====================================================
tt_BASE ! 
}


// ====================================================
// 0x2307: WORD 'IF' codep=0x224c parp=0x230e
// ====================================================

void IF()
{
  COMPILE();
  
  if (Pop() == 0) goto label115;
  Push(0); ,();
  Push(2); 
}


// ====================================================
// 0x231c: WORD 'IMMEDIATE' codep=0x224c parp=0x232a
// ====================================================

void IMMEDIATE()
{
  LATEST();
  Push(0x0040); TOGGLE 
}


// ====================================================
// 0x2334: WORD 'LATEST' codep=0x224c parp=0x233f
// ====================================================

void LATEST()
{
  tt_CURRENT @ Push(0x0004); + @ 
}


// ====================================================
// 0x234d: WORD 'UNK_0x234f' codep=0x221f parp=0x234f
// ====================================================

void LFA()
{
  NFA();
  2- 
}


// ====================================================
// 0x235b: WORD 'LITERAL' codep=0x224c parp=0x2367
// ====================================================

void LITERAL()
{
  tt_STATE @ 
  if (Pop() == 0) goto label50;
  COMPILE();
  Push(0x1f93); 
  goto label51;
  
  label50:
  UNK_0x21c9 
  label51:
  
}


// ====================================================
// 0x237d: WORD 'LOOP' codep=0x224c parp=0x2386
// ====================================================

void LOOP()
{
  Push(0x0003); ?PAIRS();
  COMPILE();
  
  } while(...); // (LOOP) 0x22ed
  - ,();
  
}


// ====================================================
// 0x2398: WORD '2LITERAL' codep=0x224c parp=0x23a5
// ====================================================

void 2LITERAL()
{
  tt_STATE @ 
  if (Pop() == 0) goto label95;
  COMPILE();
  Push(0x0ef2); Pust(0x1f93); ,();
  
  goto label96;
  
  label95:
  UNK_0x21c9 
  label96:
  
}


// ====================================================
// 0x23bf: WORD 'NFA' codep=0x224c parp=0x23c7
// ====================================================

void NFA()
{
  Push(0x0003); - Push(0xffff); TRAVERSE();
  
}


// ====================================================
// 0x23d5: WORD 'PAD' codep=0x224c parp=0x23dd
// ====================================================

void PAD()
{
  HERE();
  Push(0x0044); + 
}


// ====================================================
// 0x23e7: WORD 'PFA' codep=0x224c parp=0x23ef
// ====================================================

void PFA()
{
  Push(1); TRAVERSE();
  Push(0x0003); + 
}


// ====================================================
// 0x23fb: WORD 'QUERY' codep=0x224c parp=0x2405
// ====================================================

void QUERY()
{
  tt_TIB @ Push(0x0050); EXPECT Push(0); tt_>IN ! 
}


// ====================================================
// 0x2417: WORD 'QUIT' codep=0x224c parp=0x2420
// ====================================================

void QUIT()
{
  BYE();
  tt_BLK ! tt_STATE @ [();
  
  if (Pop() == 0) goto label74;
  LATEST();
  C@ Push(0x0020); AND 
  if (Pop() == 0) goto label74;
  LATEST();
  (FORGET)();
  
  label74:
  CR RP! QUERY();
  INTERPRET tt_STATE @ 0= 
  if (Pop() == 0) goto label75;
  UNK_0x03c3();
  
  label75:
  
  goto label74;
  
}


// ====================================================
// 0x245c: WORD 'REPEAT' codep=0x224c parp=0x2467
// ====================================================

void REPEAT()
{
  >R >R AGAIN();
  R> R> 2- THEN();
  
}


// ====================================================
// 0x2477: WORD 'SMUDGE' codep=0x224c parp=0x2482
// ====================================================

void SMUDGE()
{
  LATEST();
  Push(0x0020); TOGGLE 
}


// ====================================================
// 0x248c: WORD 'TEXT' codep=0x224c parp=0x2495
// ====================================================

void TEXT()
{
  HERE();
  Push(cc_C/L); 1+ BLANK();
  WORD Push(cc_BL); OVER DUP C@ + 1+ C! PAD();
  Push(cc_C/L); 1+ CMOVE 
}


// ====================================================
// 0x24b7: WORD 'THEN' codep=0x224c parp=0x24c0
// ====================================================

void THEN()
{
  ?COMP();
  Push(2); ?PAIRS();
  HERE();
  OVER - SWAP ! 
}


// ====================================================
// 0x24d2: WORD 'TRAVERSE' codep=0x224c parp=0x24df
// ====================================================

void TRAVERSE()
{
  SWAP 
  label19:
  OVER + Push(0x007f); OVER C@ < 
  if (Pop() == 0) goto label19;
  SWAP DROP 
}


// ====================================================
// 0x24f9: WORD 'UNTIL' codep=0x224c parp=0x2503
// ====================================================

void UNTIL()
{
  Push(1); ?PAIRS();
  COMPILE();
  
  if (Pop() == 0) goto label116;
  - ,();
  
}


// ====================================================
// 0x2513: WORD 'VARIABLE' codep=0x224c parp=0x2520
// ====================================================

void VARIABLE()
{
  CREATE Push(2); ALLOT();
  
}


// ====================================================
// 0x2528: WORD 'WHILE' codep=0x224c parp=0x2532
// ====================================================

void WHILE()
{
  IF();
  2+ 
}


// ====================================================
// 0x2538: WORD '' codep=0x224c parp=0x253e
// ====================================================

void ()
{
  tt_BLK @ 
  if (Pop() == 0) goto label122;
  tt_STATE @ UNK_0x0b30();
  
  label122:
  R> DROP 
}


// ====================================================
// 0x2552: WORD '[' codep=0x224c parp=0x2558
// ====================================================

void [()
{
  Push(0); tt_STATE ! 
}


// ====================================================
// 0x2560: WORD '[COMPILE]' codep=0x224c parp=0x256e
// ====================================================

void [COMPILE]()
{
  ?COMP();
  ?FIND();
  CFA();
  ,();
  
}


// ====================================================
// 0x2578: WORD '\' codep=0x224c parp=0x257e
// ====================================================

void \()
{
  tt_>IN @ Push(0x0040); /MOD SWAP 
  if (Pop() == 0) goto label123;
  1+ 
  label123:
  Push(0x0040); * tt_>IN ! 
}


// ====================================================
// 0x259c: WORD ']' codep=0x224c parp=0x25a2
// ====================================================

void ]()
{
  Push(0x00c0); tt_STATE ! 
}


// ====================================================
// 0x25ac: WORD '(?TERMINAL)' codep=0x25bc parp=0x25bc
// ====================================================
// 0x25bc: mov    ah,01
// 0x25be: int    16
// 0x25c0: mov    ax,0001
// 0x25c3: jnz    25C7
// 0x25c5: sub    ax,ax
// 0x25c7: push   ax
// 0x25c8: lodsw
// 0x25c9: mov    bx,ax
// 0x25cb: jmp    word ptr [bx]

// ====================================================
// 0x25cd: WORD '(KEY)' codep=0x25d7 parp=0x25d7
// ====================================================
// 0x25d7: mov    ah,01
// 0x25d9: int    16
// 0x25db: jz     25D7
// 0x25dd: sub    ax,ax
// 0x25df: int    16
// 0x25e1: mov    cx,ax
// 0x25e3: sub    ah,ah
// 0x25e5: or     al,al
// 0x25e7: jnz    25ED
// 0x25e9: mov    al,ch
// 0x25eb: mov    ah,01
// 0x25ed: push   ax
// 0x25ee: lodsw
// 0x25ef: mov    bx,ax
// 0x25f1: jmp    word ptr [bx]

// ====================================================
// 0x25f3: WORD 'BEEPMS' codep=0x1d29 parp=0x25fe
// ====================================================
// 0x25fe: db 0xfa 0x00 '  '
  
// ====================================================
// 0x2600: WORD 'BEEPTONE' codep=0x1d29 parp=0x260d
// ====================================================
// 0x260d: db 0xf4 0x01 '  '
  
// ====================================================
// 0x260f: WORD 'TONE' codep=0x2618 parp=0x2618
// ====================================================
// 0x2618: pop    cx
// 0x2619: mov    al,B6
// 0x261b: mov    dx,0043
// 0x261e: cli    
// 0x261f: out    dx,al
// 0x2620: dec    dx
// 0x2621: mov    al,cl
// 0x2623: out    dx,al
// 0x2624: mov    al,ch
// 0x2626: out    dx,al
// 0x2627: sti    
// 0x2628: lodsw
// 0x2629: mov    bx,ax
// 0x262b: jmp    word ptr [bx]

// ====================================================
// 0x262d: WORD 'BEEPON' codep=0x2638 parp=0x2638
// ====================================================
// 0x2638: cli    
// 0x2639: mov    dx,0061
// 0x263c: in     al,dx
// 0x263d: or     al,03
// 0x2640: out    dx,al
// 0x2641: sti    
// 0x2642: lodsw
// 0x2643: mov    bx,ax
// 0x2645: jmp    word ptr [bx]

// ====================================================
// 0x2647: WORD 'BEEPOFF' codep=0x2653 parp=0x2653
// ====================================================
// 0x2653: cli    
// 0x2654: mov    dx,0061
// 0x2657: in     al,dx
// 0x2658: and    al,FC
// 0x265b: out    dx,al
// 0x265c: sti    
// 0x265d: lodsw
// 0x265e: mov    bx,ax
// 0x2660: jmp    word ptr [bx]

// ====================================================
// 0x2662: WORD 'BEEP' codep=0x224c parp=0x266b
// ====================================================

void BEEP()
{
  pp_@,0*1; @ 
  if (Pop() == 0) goto label124;
  pp_BEEPTONE @ TONE BEEPON pp_BEEPMS @ MS();
  BEEPOFF 
  label124:
  
}


// ====================================================
// 0x2685: WORD '(TYPE)' codep=0x224c parp=0x2690
// ====================================================

  label128:
  
void (TYPE)()
{
  DUP 
  if (Pop() == 0) goto label125;
  2DUP tt_COLMAX C@ tt_COL C@ - 1+ UMIN();
  >R CUR>ADDR R@ >VMOVE R@ CURFWD();
  R@ - SWAP R> + SWAP 
  goto label128;
  
  label125:
  2DROP 
}


// ====================================================
// 0x26c6: WORD '(BS)' codep=0x224c parp=0x26cf
// ====================================================

void (BS)()
{
  ?POSITION DUP 
  if (Pop() == 0) goto label129;
  1- POSITION 
  goto label130;
  
  label129:
  2DROP BEEP();
  
  label130:
  
}


// ====================================================
// 0x26e5: WORD '(CR)' codep=0x224c parp=0x26ee
// ====================================================

void (CR)()
{
  ?POSITION DROP DUP tt_ROWMAX C@ = 
  if (Pop() == 0) goto label131;
  Push(1); SCROLLUP 
  goto label132;
  
  label131:
  1+ 
  label132:
  Push(0); POSITION 
}

// 0x270e: mov    bx,[di+1A]
// 0x2711: mov    al,[di+1C]
// 0x2714: add    al,bl
// 0x2716: mov    bl,50
// 0x2718: mul    bl
// 0x271a: mov    bl,bh
// 0x271c: mov    bh,[di+1D]
// 0x271f: add    bl,bh
// 0x2721: sub    bh,bh
// 0x2723: add    ax,bx
// 0x2725: ret    


// ====================================================
// 0x2726: WORD '(EMIT)' codep=0x224c parp=0x2731
// ====================================================

void (EMIT)()
{
  tt_ATTRIBUTE @ + CUR>ADDR V! Push(1); CURFWD();
  
}


// ====================================================
// 0x2741: WORD '(PAGE)' codep=0x224c parp=0x274c
// ====================================================

void (PAGE)()
{
  Push(0); SCROLLUP Push(0); Push(0); (POSITION) 
}


// ====================================================
// 0x2758: WORD '(POSITION)' codep=0x2767 parp=0x2767
// ====================================================
// 0x2767: pop    ax
// 0x2768: mov    [di+1B],al
// 0x276b: mov    dl,al
// 0x276d: pop    ax
// 0x276e: mov    [di+1A],al
// 0x2771: mov    dh,al
// 0x2773: sub    bx,bx
// 0x2775: mov    ah,02
// 0x2777: push   bp
// 0x2778: push   si
// 0x2779: int    10
// 0x277b: pop    si
// 0x277c: pop    bp
// 0x277d: lodsw
// 0x277e: mov    bx,ax
// 0x2780: jmp    word ptr [bx]

// ====================================================
// 0x2782: WORD '-TRAILING' codep=0x224c parp=0x2790
// ====================================================

void -TRAILING()
{
  DUP Push(0); 
  do // (DO)
  {
  2DUP + 1- C@ Push(cc_BL); - 
  if (Pop() == 0) goto label103;
  LEAVE 
  goto label104;
  
  label103:
  1- 
  label104:
  
  } while(...); // (LOOP) 0xffe6
  
}


// ====================================================
// 0x27b4: WORD '.' codep=0x224c parp=0x27ba
// ====================================================

void .()
{
  S->D D.();
  
}


// ====================================================
// 0x27c0: WORD '.LINE' codep=0x224c parp=0x27ca
// ====================================================

void .LINE()
{
  BLOCK();
  SWAP Push(cc_C/L); * + Push(cc_C/L); -TRAILING();
  TYPE 
}


// ====================================================
// 0x27dc: WORD '.R' codep=0x224c parp=0x27e3
// ====================================================

void .R()
{
  >R S->D R> D.R();
  
}


// ====================================================
// 0x27ed: WORD '>VMOVE' codep=0x27f8 parp=0x27f8
// ====================================================
// 0x27f8: mov    ax,[di+18]
// 0x27fb: mov    es,ax
// 0x27fd: mov    ax,[di+20]
// 0x2800: mov    dx,di
// 0x2802: mov    bx,si
// 0x2804: pop    cx
// 0x2805: pop    di
// 0x2806: pop    si
// 0x2807: jcxz   2813
// 0x2809: mov    al,[si]
// 0x280b: es:    
// 0x280c: mov    [di],ax
// 0x280e: inc    si
// 0x280f: inc    di
// 0x2810: inc    di
// 0x2811: loop   2809
// 0x2813: mov    si,bx
// 0x2815: mov    di,dx
// 0x2817: lodsw
// 0x2818: mov    bx,ax
// 0x281a: jmp    word ptr [bx]

// ====================================================
// 0x281c: WORD '?' codep=0x224c parp=0x2822
// ====================================================

void ?()
{
  @ .();
  
}


// ====================================================
// 0x2828: WORD '?POSITION' codep=0x2836 parp=0x2836
// ====================================================
// 0x2836: sub    ax,ax
// 0x2838: mov    al,[di+1A]
// 0x283b: push   ax
// 0x283c: mov    al,[di+1B]
// 0x283f: push   ax
// 0x2840: lodsw
// 0x2841: mov    bx,ax
// 0x2843: jmp    word ptr [bx]

// ====================================================
// 0x2845: WORD 'CUR>ADDR' codep=0x2852 parp=0x2852
// ====================================================
// 0x2852: call   270E
// 0x2855: shl    ax,1
// 0x2857: push   ax
// 0x2858: lodsw
// 0x2859: mov    bx,ax
// 0x285b: jmp    word ptr [bx]

// ====================================================
// 0x285d: WORD 'CURFWD' codep=0x224c parp=0x2868
// ====================================================

void CURFWD()
{
  Push(0); 
  do // (DO)
  {
  ?POSITION DUP tt_COLMAX @ < NOT 
  if (Pop() == 0) goto label126;
  2DROP CR 
  goto label127;
  
  label126:
  1+ POSITION 
  label127:
  
  } while(...); // (LOOP) 0xffe2
  
}


// ====================================================
// 0x288e: WORD 'D.' codep=0x224c parp=0x2895
// ====================================================

void D.()
{
  Push(0); D.R();
  SPACE();
  
}


// ====================================================
// 0x289d: WORD 'D.R' codep=0x224c parp=0x28a5
// ====================================================

void D.R()
{
  Push(0x0003); ?ENOUGH();
  >R SWAP OVER DUP D+-();
  <#();
  #S();
  ROT SIGN();
  #>();
  R> OVER - SPACES();
  TYPE 
}


// ====================================================
// 0x28cb: WORD 'ID.' codep=0x224c parp=0x28d3
// ====================================================

void ID.()
{
  HERE();
  Push(0x0020); Push(0x005f); FILL DUP Push(1); TRAVERSE();
  OVER - OVER 1+ SWAP Push(0); 
  do // (DO)
  {
  I OVER + C@ Push(0x007f); AND I HERE();
  + C! 
  } while(...); // (LOOP) 0xffe8
  DROP HERE();
  SWAP C@ Push(0x001f); AND TYPE 
}


// ====================================================
// 0x291f: WORD 'LIST' codep=0x224c parp=0x2928
// ====================================================

void LIST()
{
  CR DUP tt_SCR ! 
  (.") string 5 "Scr #"
  .();
  Push(0x0010); Push(0); 
  do // (DO)
  {
  CR I Push(0x0003); .R();
  SPACE();
  I tt_SCR @ .LINE();
  ?TERMINAL 
  if (Pop() == 0) goto label133;
  LEAVE 
  label133:
  
  } while(...); // (LOOP) 0xffe2
  CR 
}


// ====================================================
// 0x2966: WORD 'SCROLLUP' codep=0x2973 parp=0x2973
// ====================================================
// 0x2973: pop    ax
// 0x2974: mov    ah,06
// 0x2976: sub    cx,cx
// 0x2978: mov    dh,[di+1E]
// 0x297b: mov    dl,[di+1F]
// 0x297e: mov    bx,[di+20]
// 0x2981: push   bp
// 0x2982: push   si
// 0x2983: int    10
// 0x2985: pop    si
// 0x2986: pop    bp
// 0x2987: lodsw
// 0x2988: mov    bx,ax
// 0x298a: jmp    word ptr [bx]

// ====================================================
// 0x298c: WORD 'SPACE' codep=0x224c parp=0x2996
// ====================================================

void SPACE()
{
  Push(cc_BL); EMIT 
}


// ====================================================
// 0x299c: WORD 'SPACES' codep=0x224c parp=0x29a7
// ====================================================

void SPACES()
{
  Push(0); MAX();
  ?DUP 
  if (Pop() == 0) goto label102;
  Push(0); 
  do // (DO)
  {
  SPACE();
  
  } while(...); // (LOOP) 0xfffc
  
  label102:
  
}


// ====================================================
// 0x29bd: WORD 'U.' codep=0x224c parp=0x29c4
// ====================================================

void U.()
{
  Push(0); D.();
  
}


// ====================================================
// 0x29ca: WORD 'U.R' codep=0x224c parp=0x29d2
// ====================================================

// ====================================================
// 0x29ce: WORD 'UNK_0x29d0' codep=0xd22e parp=0x29d0
// ====================================================

void U.R()
{
  Push(0); SWAP D.R();
  
}


// ====================================================
// 0x29da: WORD 'V@' codep=0x29e1 parp=0x29e1
// ====================================================
// 0x29e1: mov    cx,ds
// 0x29e3: mov    ax,[di+18]
// 0x29e6: mov    ds,ax
// 0x29e8: pop    bx
// 0x29e9: mov    ax,[bx]
// 0x29eb: mov    ah,00
// 0x29ed: push   ax
// 0x29ee: mov    ds,cx
// 0x29f0: lodsw
// 0x29f1: mov    bx,ax
// 0x29f3: jmp    word ptr [bx]

// ====================================================
// 0x29f5: WORD 'V!' codep=0x29fc parp=0x29fc
// ====================================================
// 0x29fc: mov    cx,ds
// 0x29fe: mov    ax,[di+18]
// 0x2a01: mov    ds,ax
// 0x2a03: pop    bx
// 0x2a04: pop    ax
// 0x2a05: mov    [bx],ax
// 0x2a07: mov    ds,cx
// 0x2a09: lodsw
// 0x2a0a: mov    bx,ax
// 0x2a0c: jmp    word ptr [bx]

// ====================================================
// 0x2a0e: WORD 'VFILL' codep=0x2a18 parp=0x2a18
// ====================================================
// 0x2a18: mov    ax,[di+18]
// 0x2a1b: mov    dx,di
// 0x2a1d: mov    es,ax
// 0x2a1f: pop    ax
// 0x2a20: pop    cx
// 0x2a21: pop    di
// 0x2a22: cld    
// 0x2a23: repz   
// 0x2a24: stosw
// 0x2a25: mov    di,dx
// 0x2a27: lodsw
// 0x2a28: mov    bx,ax
// 0x2a2a: jmp    word ptr [bx]

// ====================================================
// 0x2a2c: WORD 'VMOVE' codep=0x2a36 parp=0x2a36
// ====================================================
// 0x2a36: mov    ax,[di+18]
// 0x2a39: mov    dx,di
// 0x2a3b: mov    es,ax
// 0x2a3d: mov    ds,ax
// 0x2a3f: pop    cx
// 0x2a40: pop    di
// 0x2a41: mov    bx,si
// 0x2a43: pop    si
// 0x2a44: repz   
// 0x2a45: movsw
// 0x2a46: mov    si,bx
// 0x2a48: mov    di,dx
// 0x2a4a: mov    ax,cs
// 0x2a4c: mov    ds,ax
// 0x2a4e: cld    
// 0x2a4f: lodsw
// 0x2a50: mov    bx,ax
// 0x2a52: jmp    word ptr [bx]

// ====================================================
// 0x2a54: WORD 'VMOVE-' codep=0x2a5f parp=0x2a5f
// ====================================================
// 0x2a5f: mov    bx,[2A34]
// 0x2a63: std    
// 0x2a64: jmp    word ptr [bx]

// ====================================================
// 0x2a66: WORD 'MS/TICK' codep=0x2214 parp=0x2a72
// ====================================================
// 0x2a72: db 0xa0 0x01 '  '
  
// ====================================================
// 0x2a74: WORD 'TICKS/ADJ' codep=0x2214 parp=0x2a82
// ====================================================
// 0x2a82: db 0xae 0x01 '  '
  
// ====================================================
// 0x2a84: WORD 'MS/ADJ' codep=0x2214 parp=0x2a8f
// ====================================================
// 0x2a8f: db 0xb5 0x01 '  '
  
// ====================================================
// 0x2a91: WORD 'TIME' codep=0x2a9a parp=0x2a9a
// ====================================================
// 0x2a9a: mov    dx,0043
// 0x2a9d: sub    ax,ax
// 0x2a9f: cli    
// 0x2aa0: out    dx,al
// 0x2aa1: mov    dx,0040
// 0x2aa4: in     al,dx
// 0x2aa5: mov    cl,al
// 0x2aa7: in     al,dx
// 0x2aa8: mov    ch,al
// 0x2aaa: neg    cx
// 0x2aac: mov    al,ch
// 0x2aae: shr    ax,1
// 0x2ab0: or     ax,ax
// 0x2ab2: rcr    ax,1
// 0x2ab4: adc    al,ah
// 0x2ab6: mov    cx,[0193]
// 0x2aba: cmp    ax,cx
// 0x2abc: jge    2AC0
// 0x2abe: mov    cx,ax
// 0x2ac0: mov    ax,[018A]
// 0x2ac3: add    ax,cx
// 0x2ac5: mov    [018A],ax
// 0x2ac8: jae    2AD4
// 0x2aca: mov    ax,[0188]
// 0x2acd: adc    ax,0000
// 0x2ad1: mov    [0188],ax
// 0x2ad4: mov    ax,[0193]
// 0x2ad7: sub    ax,cx
// 0x2ad9: jge    2ADD
// 0x2adb: sub    ax,ax
// 0x2add: mov    [0193],ax
// 0x2ae0: sti    
// 0x2ae1: mov    ax,0188
// 0x2ae4: push   ax
// 0x2ae5: lodsw
// 0x2ae6: mov    bx,ax
// 0x2ae8: jmp    word ptr [bx]

// ====================================================
// 0x2aea: WORD 'MS' codep=0x224c parp=0x2af1
// ====================================================

void MS()
{
  Push(0); TIME 2@ D+ DNEGATE 
  label121:
  2DUP TIME 2@ D+ 0< 
  if (Pop() == 0) goto label120;
  DROP 
  goto label121;
  
  label120:
  DROP 2DROP 
}


// ====================================================
// 0x2b15: WORD '#DRIVES' codep=0x2214 parp=0x2b21
// ====================================================
// 0x2b21: db 0x03 0x00 '  '
  
// ====================================================
// 0x2b23: WORD '#FCBS' codep=0x2214 parp=0x2b2d
// ====================================================
// 0x2b2d: db 0x02 0x00 '  '
  
// ====================================================
// 0x2b2f: WORD '#FILES' codep=0x2214 parp=0x2b3a
// ====================================================
// 0x2b3a: db 0x04 0x00 '  '
  
// ====================================================
// 0x2b3c: WORD '#SEC/TRK' codep=0x2214 parp=0x2b49
// ====================================================
// 0x2b49: db 0x09 0x00 '  '
  
// ====================================================
// 0x2b4b: WORD 'DOS-FILE' codep=0x2214 parp=0x2b58
// ====================================================
// 0x2b58: db 0x02 0x00 '  '
  
// ====================================================
// 0x2b5a: WORD 'RETRIES' codep=0x2214 parp=0x2b66
// ====================================================
// 0x2b66: db 0x08 0x00 '  '
  
// ====================================================
// 0x2b68: WORD 'SECORIGIN' codep=0x2214 parp=0x2b76
// ====================================================
// 0x2b76: db 0x01 0x00 '  '
  
// ====================================================
// 0x2b78: WORD ''SVBUF' codep=0x1d29 parp=0x2b83
// ====================================================
// 0x2b83: db 0x50 0x7b 'P{'
  
// ====================================================
// 0x2b85: WORD ''MTBUF' codep=0x1d29 parp=0x2b90
// ====================================================
// 0x2b90: db 0xd4 0xb1 '  '
  
// ====================================================
// 0x2b92: WORD '#SECS' codep=0x1d29 parp=0x2b9c
// ====================================================
// 0x2b9c: db 0x02 0x00 '  '
  
// ====================================================
// 0x2b9e: WORD ''FCB' codep=0x1d29 parp=0x2ba7
// ====================================================
// 0x2ba7: db 0xca 0x2d ' -'
  
// ====================================================
// 0x2ba9: WORD ''CACHE' codep=0x1d29 parp=0x2bb4
// ====================================================
// 0x2bb4: db 0x98 0x00 '  '
  
// ====================================================
// 0x2bb6: WORD ''DOSMOUNT' codep=0x1d29 parp=0x2bc4
// ====================================================
// 0x2bc4: db 0xda 0x46 ' F'
  
// ====================================================
// 0x2bc6: WORD ''DOSUNMOUNT' codep=0x1d29 parp=0x2bd6
// ====================================================
// 0x2bd6: db 0x44 0x47 'DG'
  
// ====================================================
// 0x2bd8: WORD 'REUSEC' codep=0x1d29 parp=0x2be3
// ====================================================
// 0x2be3: db 0x98 0x00 '  '
  
// ====================================================
// 0x2be5: WORD '1STCACHEBUF' codep=0x1d29 parp=0x2bf5
// ====================================================
// 0x2bf5: db 0x8b 0x43 ' C'
  
// ====================================================
// 0x2bf7: WORD 'BLKCACHE' codep=0x1d29 parp=0x2c04
// ====================================================
// 0x2c04: db 0x63 0x43 'cC'
  
// ====================================================
// 0x2c06: WORD 'DEFAULTDRV' codep=0x1d29 parp=0x2c15
// ====================================================
// 0x2c15: db 0x2c 0x6f ',o'
  
// ====================================================
// 0x2c17: WORD 'DISK-ERROR' codep=0x1d29 parp=0x2c26
// ====================================================
// 0x2c26: db 0x00 0x00 '  '
  
// ====================================================
// 0x2c28: WORD 'DRIVE' codep=0x1d29 parp=0x2c32
// ====================================================
// 0x2c32: db 0x04 0x00 '  '
  
// ====================================================
// 0x2c34: WORD 'DTA' codep=0x1d29 parp=0x2c3c
// ====================================================
// 0x2c3c: db 0x00 0x01 0x63 0x33 '  c3'
  
// ====================================================
// 0x2c40: WORD 'FILE' codep=0x1d29 parp=0x2c49
// ====================================================
// 0x2c49: db 0x02 0x00 '  '
  
// ====================================================
// 0x2c4b: WORD 'FRESH' codep=0x1d29 parp=0x2c55
// ====================================================
// 0x2c55: db 0x4c 0xc5 'L '
  
// ====================================================
// 0x2c57: WORD 'HEAD' codep=0x1d29 parp=0x2c60
// ====================================================
// 0x2c60: db 0x00 0x00 '  '
  
// ====================================================
// 0x2c62: WORD 'LPREV' codep=0x1d29 parp=0x2c6c
// ====================================================
// 0x2c6c: db 0xe0 0x42 ' B'
  
// ====================================================
// 0x2c6e: WORD 'OFFSET' codep=0x1d29 parp=0x2c79
// ====================================================
// 0x2c79: db 0x68 0x01 'h '
  
// ====================================================
// 0x2c7b: WORD 'PREV' codep=0x1d29 parp=0x2c84
// ====================================================
// 0x2c84: db 0xe0 0x42 ' B'
  
// ====================================================
// 0x2c86: WORD 'SEC' codep=0x1d29 parp=0x2c8e
// ====================================================
// 0x2c8e: db 0x05 0x00 '  '
  
// ====================================================
// 0x2c90: WORD 'SEGCACHE' codep=0x1d29 parp=0x2c9d
// ====================================================
// 0x2c9d: db 0x77 0x43 'wC'
  
// ====================================================
// 0x2c9f: WORD 'SYSK' codep=0x1d29 parp=0x2ca8
// ====================================================
// 0x2ca8: db 0x80 0x02 '  '
  
// ====================================================
// 0x2caa: WORD 'TRACK' codep=0x1d29 parp=0x2cb4
// ====================================================
// 0x2cb4: db 0x00 0x00 '  '
  
// ====================================================
// 0x2cb6: WORD 'USE' codep=0x1d29 parp=0x2cbe
// ====================================================
// 0x2cbe: db 0x21 0x43 '!C'
  
// ====================================================
// 0x2cc0: WORD '=DRIVESIZES' codep=0x1d29 parp=0x2cd0
// ====================================================
// 0x2cd0: db 0x68 0x01 0x68 0x01 0x00 0x50 'h h  P'
  
// ====================================================
// 0x2cd6: WORD 'DRIVESIZES' codep=0x224c parp=0x2ce5
// ====================================================

void DRIVESIZES()
{
  2* pp_=DRIVESIZES + @ 
}


// ====================================================
// 0x2cef: WORD 'BARRAY' codep=0x224c parp=0x2cfa
// ====================================================

void BARRAY()
{
  + 
}


// ====================================================
// 0x2cfe: WORD 'WARRAY' codep=0x224c parp=0x2d09
// ====================================================

void WARRAY()
{
  SWAP 2* + 
}


// ====================================================
// 0x2d11: WORD '=DRIVENUMBERS' codep=0x1d29 parp=0x2d23
// ====================================================
// 0x2d23: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x2d27: WORD '=FCBPFAS' codep=0x1d29 parp=0x2d34
// ====================================================
// 0x2d34: db 0x00 0x27 0x00 0x00 0x9e 0x2d 0xca 0x2d ' '   - -'
  
// ====================================================
// 0x2d3c: WORD '=FILEBLOCKS' codep=0x1d29 parp=0x2d4c
// ====================================================
// 0x2d4c: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '        '
  
// ====================================================
// 0x2d54: WORD '=FILETYPES' codep=0x1d29 parp=0x2d63
// ====================================================
// 0x2d63: db 0xff 0xff 0xff 0xff '    '
  
// ====================================================
// 0x2d67: WORD '=OFFSETS' codep=0x1d29 parp=0x2d74
// ====================================================
// 0x2d74: db 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '        '
  
// ====================================================
// 0x2d7c: WORD '=R/W'S' codep=0x1d29 parp=0x2d87
// ====================================================
// 0x2d87: db 0x31 0x36 0x44 0x33 0xe3 0x43 0xe3 0x43 '16D3 C C'
  
// ====================================================
// 0x2d8f: WORD 'FCB' codep=0x1d29 parp=0x2d97
// ====================================================
// 0x2d97: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05 0x50 0x52 0x4f 0x54 0x45 0x43 0x54 0x20 0x42 0x4c 0x4b 0x00 0x00 0x00 0x04 0x00 0x6c 0x00 0x00 0x49 0x13 0x02 0x8e 0x03 0x04 0x42 0xef 0x25 0x0a 0x66 0x0b 0x1a 0x1a 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05 0x53 0x54 0x41 0x52 0x46 0x4c 0x54 0x32 0x43 0x4f 0x4d 0x00 0x00 0xf0 0xd4 0x00 0x00 0x00 0x00 0xaa 0x14 0x85 0x8a 0x01 0x04 0x42 0x00 0x00 0x07 0x66 0x0e 0x00 0x00 0x00 0x00 0x00 '        PROTECT BLK     l  I     B % f              STARFLT2COM              B   f      '
  
// ====================================================
// 0x2def: WORD 'FILENAMES' codep=0x1d29 parp=0x2dfd
// ====================================================
// 0x2dfd: db 0x20 0x20 0x20 '   '
  
// ====================================================
// 0x2e00: WORD 'UNK_0x2e02' codep=0x2020 parp=0x2e02
// ====================================================
// 0x2e02: db 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 '            '
  
// ====================================================
// 0x2e0e: WORD 'UNK_0x2e10' codep=0x2020 parp=0x2e10
// ====================================================

// ====================================================
// 0x2e10: WORD 'UNK_0x2e12' codep=0x2020 parp=0x2e12
// ====================================================
// 0x2e12: db 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 '                       '
  
// ====================================================
// 0x2e29: WORD 'DRIVENUMBERS' codep=0x224c parp=0x2e3a
// ====================================================

void DRIVENUMBERS()
{
  pp_=DRIVENUMBERS BARRAY();
  
}


// ====================================================
// 0x2e40: WORD 'UNK_0x2e42' codep=0x2d69 parp=0x2e42
// ====================================================

// ====================================================
// 0x2e41: WORD 'UNK_0x2e43' codep=0x872d parp=0x2e43
// ====================================================

// ====================================================
// 0x2e42: WORD 'UNK_0x2e44' codep=0x4687 parp=0x2e44
// ====================================================

void FCBPFAS()
{
  pp_=FCBPFAS WARRAY();
  
}


// ====================================================
// 0x2e52: WORD 'FILEBLOCKS' codep=0x224c parp=0x2e61
// ====================================================

void FILEBLOCKS()
{
  pp_=FILEBLOCKS WARRAY();
  
}


// ====================================================
// 0x2e67: WORD 'FILETYPES' codep=0x224c parp=0x2e75
// ====================================================

void FILETYPES()
{
  pp_=FILETYPES BARRAY();
  
}


// ====================================================
// 0x2e7b: WORD 'OFFSETS' codep=0x224c parp=0x2e87
// ====================================================

void OFFSETS()
{
  pp_=OFFSETS WARRAY();
  
}


// ====================================================
// 0x2e8d: WORD 'R/W'S' codep=0x224c parp=0x2e97
// ====================================================

void R/W'S()
{
  pp_=R/W'S WARRAY();
  
}


// ====================================================
// 0x2e9d: WORD 'L@' codep=0x2ea4 parp=0x2ea4
// ====================================================
// 0x2ea4: mov    dx,ds
// 0x2ea6: pop    bx
// 0x2ea7: pop    ds
// 0x2ea8: push   word ptr [bx]
// 0x2eaa: mov    ds,dx
// 0x2eac: lodsw
// 0x2ead: mov    bx,ax
// 0x2eaf: jmp    word ptr [bx]

// ====================================================
// 0x2eb1: WORD 'L!' codep=0x2eb8 parp=0x2eb8
// ====================================================
// 0x2eb8: mov    dx,ds
// 0x2eba: pop    bx
// 0x2ebb: pop    ds
// 0x2ebc: pop    word ptr [bx]
// 0x2ebe: mov    ds,dx
// 0x2ec0: lodsw
// 0x2ec1: mov    bx,ax
// 0x2ec3: jmp    word ptr [bx]

// ====================================================
// 0x2ec5: WORD 'LC@' codep=0x2ecd parp=0x2ecd
// ====================================================
// 0x2ecd: mov    dx,ds
// 0x2ecf: pop    bx
// 0x2ed0: pop    ds
// 0x2ed1: xor    ax,ax
// 0x2ed3: mov    al,[bx]
// 0x2ed5: push   ax
// 0x2ed6: mov    ds,dx
// 0x2ed8: lodsw
// 0x2ed9: mov    bx,ax
// 0x2edb: jmp    word ptr [bx]

// ====================================================
// 0x2edd: WORD 'LC!' codep=0x2ee5 parp=0x2ee5
// ====================================================
// 0x2ee5: mov    dx,ds
// 0x2ee7: pop    bx
// 0x2ee8: pop    ds
// 0x2ee9: pop    ax
// 0x2eea: mov    [bx],al
// 0x2eec: mov    ds,dx
// 0x2eee: lodsw
// 0x2eef: mov    bx,ax
// 0x2ef1: jmp    word ptr [bx]

// ====================================================
// 0x2ef3: WORD 'LCMOVE' codep=0x2efe parp=0x2efe
// ====================================================
// 0x2efe: mov    [bp-02],di
// 0x2f01: mov    ax,es
// 0x2f03: mov    dx,ds
// 0x2f05: mov    bx,si
// 0x2f07: pop    cx
// 0x2f08: pop    di
// 0x2f09: pop    es
// 0x2f0a: pop    si
// 0x2f0b: pop    ds
// 0x2f0c: push   dx
// 0x2f0d: shr    cx,1
// 0x2f0f: rcl    dx,1
// 0x2f11: or     cx,cx
// 0x2f13: jz     2F17
// 0x2f15: repz   
// 0x2f16: movsw
// 0x2f17: and    dx,01
// 0x2f1a: jz     2F1D
// 0x2f1c: movsb
// 0x2f1d: mov    si,bx
// 0x2f1f: pop    ds
// 0x2f20: mov    es,ax
// 0x2f22: mov    di,[bp-02]
// 0x2f25: lodsw
// 0x2f26: mov    bx,ax
// 0x2f28: jmp    word ptr [bx]

// ====================================================
// 0x2f2a: WORD '{LXCHG}' codep=0x1d29 parp=0x2f36
// ====================================================
// 0x2f36: push   cx
// 0x2f37: es:    
// 0x2f38: mov    cx,[bx]
// 0x2f3a: xchg   ax,bx
// 0x2f3c: es:    
// 0x2f3d: xchg   [bx],cx
// 0x2f3f: xchg   ax,bx
// 0x2f41: es:    
// 0x2f42: mov    [bx],cx
// 0x2f44: pop    cx
// 0x2f45: ret    


// ====================================================
// 0x2f46: WORD 'LWSCAN' codep=0x2f51 parp=0x2f51
// ====================================================
// 0x2f51: pop    ax
// 0x2f52: pop    cx
// 0x2f53: or     cx,cx
// 0x2f55: jnz    2F5D
// 0x2f57: add    sp,04
// 0x2f5a: push   cx
// 0x2f5b: jmp    2F75
// 0x2f5d: mov    dx,es
// 0x2f5f: mov    bx,di
// 0x2f61: pop    di
// 0x2f62: pop    es
// 0x2f63: repnz  
// 0x2f64: scasw
// 0x2f65: dec    di
// 0x2f66: dec    di
// 0x2f67: es:    
// 0x2f68: cmp    ax,[di]
// 0x2f6a: jnz    2F70
// 0x2f6c: push   di
// 0x2f6d: mov    cx,0001
// 0x2f70: push   cx
// 0x2f71: mov    di,bx
// 0x2f73: mov    es,dx
// 0x2f75: lodsw
// 0x2f76: mov    bx,ax
// 0x2f78: jmp    word ptr [bx]

// ====================================================
// 0x2f7a: WORD '[SEGCACHE]' codep=0x224c parp=0x2f89
// ====================================================

void [SEGCACHE]()
{
  pp_'CACHE @ 2* pp_SEGCACHE @ SWAP 
}


// ====================================================
// 0x2f97: WORD '[BLKCACHE]' codep=0x224c parp=0x2fa6
// ====================================================

void [BLKCACHE]()
{
  pp_'CACHE @ 2* pp_BLKCACHE @ SWAP 
}


// ====================================================
// 0x2fb4: WORD 'UPDATE' codep=0x224c parp=0x2fbf
// ====================================================

void UPDATE()
{
  Push(0x00ff); pp_LPREV @ Push(2); LC! 
}


// ====================================================
// 0x2fcd: WORD 'REFRESH' codep=0x224c parp=0x2fd9
// ====================================================

void REFRESH()
{
  pp_FRESH ON();
  
}


// ====================================================
// 0x2fdf: WORD 'MTBUF' codep=0x224c parp=0x2fe9
// ====================================================

void MTBUF()
{
  >R Push(0); I Push(0); L! Push(0); I Push(2); LC! Push(0x00ff); I Push(0x0003); LC! Push(0xffff); I Push(0x0006); L! Push(0); R> Push(0x0408); L! 
}


// ====================================================
// 0x301f: WORD 'MTBUFFERS' codep=0x224c parp=0x302d
// ====================================================

void MTBUFFERS()
{
  pp_USE @ MTBUF();
  pp_PREV @ MTBUF();
  
}


// ====================================================
// 0x303b: WORD '(BUFFER)' codep=0x3048 parp=0x3048
// ====================================================
// 0x3048: pop    cx
// 0x3049: mov    dx,es
// 0x304b: xor    bx,bx
// 0x304d: xor    ax,ax
// 0x304f: push   word ptr [2C84]
// 0x3053: pop    es
// 0x3054: es:    
// 0x3055: cmp    [bx+06],cx
// 0x3058: jnz    3064
// 0x305a: es:    
// 0x305b: db     82
// 0x305c: jg     3061
// 0x305e: add    [di+01],dh
// 0x3061: inc    ax
// 0x3062: jmp    3084
// 0x3064: push   word ptr [2CBE]
// 0x3068: pop    es
// 0x3069: es:    
// 0x306a: cmp    [bx+06],cx
// 0x306d: jnz    3084
// 0x306f: es:    
// 0x3070: db     82
// 0x3071: jg     3076
// 0x3073: add    [di+0E],dh
// 0x3076: inc    ax
// 0x3077: push   word ptr [2C84]
// 0x307b: push   es
// 0x307c: pop    word ptr [2C84]
// 0x3080: pop    word ptr [2CBE]
// 0x3084: or     ax,ax
// 0x3086: jnz    308B
// 0x3088: push   cx
// 0x3089: jmp    3094
// 0x308b: push   es
// 0x308c: mov    cx,[2C84]
// 0x3090: mov    [2C6C],cx
// 0x3094: push   ax
// 0x3095: mov    es,dx
// 0x3097: lodsw
// 0x3098: mov    bx,ax
// 0x309a: jmp    word ptr [bx]

// ====================================================
// 0x309c: WORD 'ADVANCE' codep=0x30a8 parp=0x30a8
// ====================================================
// 0x30a8: pop    ax
// 0x30a9: or     ax,ax
// 0x30ab: jz     30C4
// 0x30ad: mov    bx,ax
// 0x30af: sub    bx,02
// 0x30b2: push   es
// 0x30b3: push   word ptr [2C04]
// 0x30b7: pop    es
// 0x30b8: call   2F36
// 0x30bb: push   word ptr [2C9D]
// 0x30bf: pop    es
// 0x30c0: call   2F36
// 0x30c3: pop    es
// 0x30c4: lodsw
// 0x30c5: mov    bx,ax
// 0x30c7: jmp    word ptr [bx]

// ====================================================
// 0x30c9: WORD 'MTCACHE' codep=0x224c parp=0x30d5
// ====================================================

void MTCACHE()
{
  pp_#CACHE @ ?DUP 
  if (Pop() == 0) goto label5;
  Push(0); 
  do // (DO)
  {
  I pp_'CACHE ! [SEGCACHE]();
  L@ MTBUF();
  Push(0xffff); [BLKCACHE]();
  L! 
  } while(...); // (LOOP) 0xffea
  
  label5:
  pp_#CACHE @ 1- pp_REUSEC ! 
}


// ====================================================
// 0x3107: WORD 'INITCACHE' codep=0x224c parp=0x3115
// ====================================================

void INITCACHE()
{
  pp_#CACHE @ 
  if (Pop() == 0) goto label4;
  pp_BLKCACHE @ pp_#CACHE @ 2* Push(0x0010); / 1+ DUP >R + DUP pp_SEGCACHE ! R> + 
// ====================================================
// 0x313f: WORD 'UNK_0x3141' codep=0x2bf3 parp=0x3141
// ====================================================
pp_1STCACHEBUF ! pp_#CACHE @ Push(0); 
  do // (DO)
  {
  I Push(0x0041); * pp_1STCACHEBUF @ + I pp_'CACHE ! [SEGCACHE]();
  L! 
  } while(...); // (LOOP) 0xffe6
  
  label4:
  MTCACHE();
  
}


// ====================================================
// 0x316b: WORD '(CACHE)' codep=0x224c parp=0x3177
// ====================================================

void (CACHE)()
{
  >R pp_BLKCACHE @ Push(0); pp_#CACHE @ I LWSCAN 
  if (Pop() == 0) goto label67;
  pp_SEGCACHE @ OVER L@ SWAP ADVANCE DUP pp_LPREV ! Push(1); 
  goto label68;
  
  label67:
  I Push(0); 
  label68:
  R> DROP 
}


// ====================================================
// 0x31ad: WORD 'CACHE>USE' codep=0x224c parp=0x31bb
// ====================================================

void CACHE>USE()
{
  pp_USE @ >R Push(0); I Push(0); Push(0x0410); LCMOVE Push(0); R> Push(2); L! 
}


// ====================================================
// 0x31d7: WORD '?INBCACHE' codep=0x224c parp=0x31e5
// ====================================================

void ?INBCACHE()
{
  DUP Push(0); L@ ?DUP 
  if (Pop() == 0) goto label58;
  Push(0x0006); L@ SWAP Push(0x0006); L@ = 
// ====================================================
// 0x3200: WORD 'UNK_0x3202' codep=0x6012 parp=0x3202
// ====================================================

  goto label59;
  
  label58:
  DROP Push(0); 
  label59:
  
}


// ====================================================
// 0x320b: WORD '[BUF>CACHE]' codep=0x224c parp=0x321b
// ====================================================

// ====================================================
// 0x320e: WORD 'UNK_0x3210' codep=0x425b parp=0x3210
// ====================================================

// ====================================================
// 0x3217: WORD 'UNK_0x3219' codep=0xdd45 parp=0x3219
// ====================================================

void [BUF>CACHE]()
{
  DUP Push(0); OVER Push(0); L@ Push(0); Push(0x0410); LCMOVE Push(0); SWAP Push(2); LC! 
}


// ====================================================
// 0x3237: WORD 'BUF>CACHE' codep=0x224c parp=0x3245
// ====================================================

void BUF>CACHE()
{
  DUP ?INBCACHE();
  OVER Push(2); LC@ AND 
  if (Pop() == 0) goto label65;
  
// ====================================================
// 0x3252: WORD 'UNK_0x3254' codep=0x0815 parp=0x3254
// ====================================================
[BUF>CACHE]();
  
  goto label66;
  
  label65:
  DROP 
  label66:
  
}


// ====================================================
// 0x325f: WORD 'SEC-I/O' codep=0x224c parp=0x326b
// ====================================================

void SEC-I/O()
{
  pp_#SECS @ Push(0x16b6); C! Push(0x16b6); 1+ C! pp_DTA 2@ Push(0x16b8); ! Push(0x16c6); ! pp_DRIVE @ Push(0x16bc); C! pp_HEAD @ Push(0x16bc); 1+ C! pp_TRACK @ Push(0x16ba); 1+ C! pp_SEC @ Push(0x16ba); C! Push(0x0013); INTERRUPT Push(0x16b6); 1+ C@ 
}


// ====================================================
// 0x32c9: WORD 'T&SCALC' codep=0x224c parp=0x32d5
// ====================================================

void T&SCALC()
{
  2* Push(cc_#SEC/TRK); /MOD Push(0x0028); /MOD pp_HEAD ! pp_TRACK ! Push(cc_SECORIGIN); + pp_SEC ! 
}


// ====================================================
// 0x32f3: WORD '[R/W]' codep=0x224c parp=0x32fd
// ====================================================

void [R/W]()
{
  Push(0); >R 
  label135:
  DUP SEC-I/O();
  DUP Push(cc_RETRIES); R> DUP 1+ >R > NEGATE AND 
  if (Pop() == 0) goto label134;
  DROP Push(0); SEC-I/O();
  DROP 
  goto label135;
  
  label134:
  R> Push(0x0100); * + pp_DISK-ERROR ! 
}


// ====================================================
// 0x3337: WORD '[DIRECT]' codep=0x224c parp=0x3344
// ====================================================

void [DIRECT]()
{
  SWAP T&SCALC();
  NOT 2+ pp_SEC @ Push(cc_#SEC/TRK); = 
  if (Pop() == 0) goto label136;
  Push(1); 
  goto label138;
  
  label136:
  Push(2); 
  label138:
  pp_#SECS ! [R/W]();
  pp_#SECS @ Push(1); = 
  if (Pop() == 0) goto label137;
  Push(cc_SECORIGIN); pp_SEC ! Push(1); pp_TRACK +! Push(0x0200); pp_DTA +! [R/W]();
  
  label137:
  DROP 
}


// ====================================================
// 0x338c: WORD '<MOUNT>' codep=0x224c parp=0x3398
// ====================================================

void <MOUNT>()
{
  >R >R I I' FILETYPES();
  C! I' DRIVENUMBERS();
  C! pp_FILENAMES I' Push(0x000b); * + Push(0x000b); CMOVE I' FCBPFAS();
  ! I' OFFSETS();
  ! I' R/W'S();
  ! R> Push(1); = 
  if (Pop() == 0) goto label139;
  I pp_'DOSMOUNT @ EXECUTE 
  goto label140;
  
  label139:
  Push(0); I DRIVESIZES();
  
  label140:
  I FILEBLOCKS();
  ! R> OFFSETS();
  @ pp_OFFSET ! 
}


// ====================================================
// 0x33fc: WORD 'DIRNAME' codep=0x1d29 parp=0x3408
// ====================================================
// 0x3408: db 0x2d 0x2d 0x64 0x69 0x72 0x65 0x63 0x74 0x2d 0x2d 0x20 '--direct-- '
  
// ====================================================
// 0x3413: WORD 'DR0' codep=0x224c parp=0x341b
// ====================================================

void DR0()
{
  Push(0x3344); Push(0); Push(0); pp_DIRNAME Push(1); Push(0); Push(0); <MOUNT>();
  DROP 
}


// ====================================================
// 0x3431: WORD 'DR1' codep=0x224c parp=0x3439
// ====================================================

void DR1()
{
  Push(0x3344); Push(0x0168); Push(0); pp_DIRNAME Push(2); Push(0); Push(1); <MOUNT>();
  DROP 
}


// ====================================================
// 0x3451: WORD '<UNMOUNT>' codep=0x224c parp=0x345f
// ====================================================

void <UNMOUNT>()
{
  FLUSH();
  >R I FILETYPES();
  C@ Push(1); = 
  if (Pop() == 0) goto label142;
  I pp_'DOSUNMOUNT @ EXECUTE 
  goto label143;
  
  label142:
  Push(0); 
  label143:
  Push(0); I DRIVENUMBERS();
  C! Push(0xffff); I OFFSETS();
  ! Push(0); I FILEBLOCKS();
  ! Push(0x00ff); I FILETYPES();
  C! pp_FILENAMES I Push(0x000b); * + Push(0x000b); Push(cc_BL); FILL R> DROP 
}


// ====================================================
// 0x34bd: WORD 'UNMOUNT' codep=0x224c parp=0x34c9
// ====================================================

void UNMOUNT()
{
  <UNMOUNT>();
  
  (ABORT") // string 16 "Unable to close."
  
}


// ====================================================
// 0x34e0: WORD 'NOFILES' codep=0x224c parp=0x34ec
// ====================================================

void NOFILES()
{
  EMPTY-BUFFERS();
  Push(cc_#FILES); Push(0); 
  do // (DO)
  {
  I <UNMOUNT>();
  DROP 
  } while(...); // (LOOP) 0xfff8
  
}


// ====================================================
// 0x3500: WORD 'NODRIVES' codep=0x224c parp=0x350d
// ====================================================

void NODRIVES()
{
  NOFILES();
  
}


// ====================================================
// 0x3511: WORD 'EMITS' codep=0x224c parp=0x351b
// ====================================================

void EMITS()
{
  ?DUP 
  if (Pop() == 0) goto label144;
  Push(0); 
  do // (DO)
  {
  DUP EMIT 
  } while(...); // (LOOP) 0xfffa
  
  label144:
  DROP 
}


// ====================================================
// 0x3531: WORD 'FILES' codep=0x224c parp=0x353b
// ====================================================

void FILES()
{
  CR 
  (.") string 40 "File#    Name     Drv   #Blocks    At   "
  CR Push(0x002d); Push(0x002e); EMITS();
  Push(cc_#FILES); Push(0); 
  do // (DO)
  {
  CR SPACE();
  I Push(2); .R();
  Push(0x0003); SPACES();
  I FILETYPES();
  C@ Push(0x00ff); = 
  if (Pop() == 0) goto label145;
  
  (.") string 12 "<unassigned>"
  
  goto label146;
  
  label145:
  I Push(0x000b); * pp_FILENAMES + Push(0x000b); TYPE SPACE();
  I DRIVENUMBERS();
  C@ Push(0x0041); + 1- EMIT Push(0x003a); EMIT Push(0x0004); SPACES();
  I FILEBLOCKS();
  @ Push(0x0006); .R();
  Push(2); SPACES();
  I OFFSETS();
  @ DUP Push(0x0006); .R();
  SPACE();
  pp_OFFSET @ = 
  if (Pop() == 0) goto label146;
  Push(0x001b); EMIT 
  (.") string 6 "OFFSET"
  
  label146:
  
  } while(...); // (LOOP) 0xff62
  
// ====================================================
// 0x3617: WORD 'UNK_0x3619' codep=0x6215 parp=0x3619
// ====================================================
CR Push(0x002d); Push(0x002e); EMITS();
  
}


// ====================================================
// 0x3628: WORD 'DRIVES' codep=0x224c parp=0x3633
// ====================================================

void DRIVES()
{
  FILES();
  
}


// ====================================================
// 0x3637: WORD '(DISKERROR?)' codep=0x224c parp=0x3648
// ====================================================

void (DISKERROR?)()
{
  pp_DISK-ERROR C@ ?UNRAVEL();
  
}

// 0x3650: db 0x82 0x2c 0xae 0x0b 0xe7 0x2f 0x30 0x06 0x42 0x06 0x20 0x0f 0x24 0x2c 0x5e 0x0c 0x13 0x1c 0x0b 0x44 0x69 0x73 0x6b 0x20 0x65 0x72 0x72 0x6f 0x72 0x21 0x90 0x16 ' ,   /0 B   $,^    Disk error!  '
  
// ====================================================
// 0x3670: WORD 'UNK_0x3672' codep=0x3672 parp=0x3672
// ====================================================
// 0x3672: pop    ax
// 0x3673: add    ax,[2C79]
// 0x3677: push   ax
// 0x3678: lodsw
// 0x3679: mov    bx,ax
// 0x367b: jmp    word ptr [bx]
// 0x367d: jg     36B5
// 0x367f: pop    dx
// 0x3680: push   di
// 0x3681: push   si
// 0x3682: push   bp
// 0x3683: mov    cx,[2B3A]
// 0x3687: mov    di,2D74
// 0x368a: xor    bx,bx
// 0x368c: mov    bp,cx
// 0x368e: dec    bp
// 0x368f: shl    bp,1
// 0x3691: mov    si,di
// 0x3693: add    si,bp
// 0x3695: mov    ax,dx
// 0x3697: sub    ax,[si]
// 0x3699: js     36A8
// 0x369b: mov    si,2D4C
// 0x369e: add    si,bp
// 0x36a0: cmp    [si],ax
// 0x36a2: js     36A8
// 0x36a4: inc    bx
// 0x36a5: mov    cx,0001
// 0x36a8: loop   368C
// 0x36aa: shr    bp,1
// 0x36ac: mov    cx,bp
// 0x36ae: pop    bp
// 0x36af: pop    si
// 0x36b0: pop    di
// 0x36b1: push   ax
// 0x36b2: push   cx
// 0x36b3: push   bx
// 0x36b4: lodsw
// 0x36b5: mov    bx,ax
// 0x36b7: jmp    word ptr [bx]
// 0x36b9: mov    bx,9636
// 0x36bc: xor    cx,cx
// 0x36be: pop    si
// 0x36bf: add    si,2D23
// 0x36c3: mov    cl,[si]
// 0x36c5: or     cx,cx
// 0x36c7: jnz    36CD
// 0x36c9: mov    cx,[2C15]
// 0x36cd: dec    cx
// 0x36ce: push   cx
// 0x36cf: xchg   ax,si
// 0x36d0: lodsw
// 0x36d1: mov    bx,ax
// 0x36d3: jmp    word ptr [bx]
// 0x36d5: dec    sp
// 0x36d6: and    dh,dl
// 0x36d8: push   cs
// 0x36d9: jge    3711
// 0x36db: cli    
// 0x36dc: adc    ax,0026
// 0x36df: inc    cx
// 0x36e0: push   cs
// 0x36e1: inc    di
// 0x36e2: sub    al,DF
// 0x36e4: or     ax,[bx+di+0E]
// 0x36e7: mov    cx,3036
// 0x36ea: sub    al,DF
// 0x36ec: or     si,[si+060D]
// 0x36f0: push   cs
// 0x36f1: cmp    ch,[si]
// 0x36f3: and    cl,[si]
// 0x36f5: repnz  
// 0x36f6: push   cs
// 0x36f7: nop    
// 0x36f8: push   cs
// 0x36f9: xchg   ax,bp
// 0x36fa: cs:    
// 0x36fb: scasb
// 0x36fc: or     ax,[bp+si+6016]
// 0x3700: push   ss
// 0x3701: adc    [bx+si],al
// 0x3703: esc    6,[di]
// 0x3705: esc    6,[di]
// 0x3707: xor    cl,[175D]
// 0x370b: ???    di
// 0x370d: and    al,2C
// 0x370f: esc    7,[bp+di]
// 0x3711: nop    
// 0x3712: push   ss

// ====================================================
// 0x3713: WORD 'UNK_0x3715' codep=0x224c parp=0x3715
// ====================================================

void UNK_0x3715()
{
  >R pp_USE @ >R I Push(0x0008); I' Push(1); R/W I I Push(0x0006); L! Push(0); I Push(0); L! Push(0); I Push(2); L! R> R> SWAP Push(0x0006); L! 
}


// ====================================================
// 0x3751: WORD 'UNK_0x3753' codep=0x224c parp=0x3753
// ====================================================

void UNK_0x3753()
{
  DUP Push(2); LC@ 
  if (Pop() == 0) goto label56;
  DUP DUP Push(0x0006); L@ Push(0x0008); SWAP Push(0); R/W Push(0); SWAP Push(2); LC! 
  goto label57;
  
  label56:
  DROP 
  label57:
  
}


// ====================================================
// 0x3781: WORD 'UNK_0x3783' codep=0x224c parp=0x3783
// ====================================================

void UNK_0x3783()
{
  pp_REUSEC @ 1+ DUP pp_#CACHE @ = 
  if (Pop() == 0) goto label61;
  DROP Push(0); 
  label61:
  DUP pp_REUSEC ! DUP pp_'CACHE ! [SEGCACHE]();
  L@ UNK_0x3753();
  
}


// ====================================================
// 0x37ad: WORD 'UNK_0x37af' codep=0x224c parp=0x37af
// ====================================================

void UNK_0x37af()
{
  pp_'CACHE ! >R [SEGCACHE]();
  L@ I Push(0); L! I Push(0x0006); L@ [BLKCACHE]();
  L! R> [BUF>CACHE]();
  
}


// ====================================================
// 0x37d1: WORD 'UNK_0x37d3' codep=0x224c parp=0x37d3
// ====================================================

void UNK_0x37d3()
{
  pp_USE @ >R I Push(0x0003); LC@ NOT 
  if (Pop() == 0) goto label54;
  pp_#CACHE @ 
  if (Pop() == 0) goto label55;
  I ?INBCACHE();
  
  if (Pop() == 0) goto label60;
  I Push(2); LC@ 
  if (Pop() == 0) goto label63;
  I BUF>CACHE();
  
  label63:
  
  goto label64;
  
  label60:
  I UNK_0x3783();
  UNK_0x37af();
  
  label64:
  
  goto label62;
  
  label55:
  I 
// ====================================================
// 0x3815: WORD 'UNK_0x3817' codep=0x3751 parp=0x3817
// ====================================================
UNK_0x3753();
  
  label62:
  I MTBUF();
  
  label54:
  R> DROP 
}


// ====================================================
// 0x3821: WORD 'UNK_0x3823' codep=0x224c parp=0x3823
// ====================================================

void UNK_0x3823()
{
  (BUFFER) 
  if (Pop() == 0) goto label53;
  Push(1); 
  goto label70;
  
  label53:
  DUP UNK_0x37d3();
  (CACHE)();
  
  if (Pop() == 0) goto label69;
  CACHE>USE();
  (BUFFER) 
  goto label70;
  
  label69:
  DROP Push(0); 
  label70:
  
}


// ====================================================
// 0x3847: WORD 'UNK_0x3849' codep=0x224c parp=0x3849
// ====================================================

void UNK_0x3849()
{
  DUP UNK_0x3715();
  (BUFFER) DROP DISKERROR? 
}


// ====================================================
// 0x3855: WORD 'BLOCK' codep=0x224c parp=0x385f
// ====================================================

void BLOCK()
{
  UNK_0x3672 UNK_0x3823();
  NOT 
  if (Pop() == 0) goto label71;
  UNK_0x3849();
  
  label71:
  SEG>ADDR Push(0x0008); + 
}


// ====================================================
// 0x3875: WORD 'LBLOCK' codep=0x224c parp=0x3880
// ====================================================

void LBLOCK()
{
  UNK_0x3672 (BUFFER) NOT 
  if (Pop() == 0) goto label163;
  (CACHE)();
  NOT 
  if (Pop() == 0) goto label163;
  UNK_0x37d3();
  UNK_0x3849();
  
  label163:
  Push(0x0008); 
}


// ====================================================
// 0x389c: WORD 'SAVE-BUFFERS' codep=0x224c parp=0x38ad
// ====================================================

void SAVE-BUFFERS()
{
  pp_'SVBUF @ EXECUTE pp_#CACHE @ ?DUP 
  if (Pop() == 0) goto label141;
  pp_USE @ BUF>CACHE();
  pp_PREV @ BUF>CACHE();
  Push(0); 
  do // (DO)
  {
  I pp_'CACHE ! [SEGCACHE]();
  L@ UNK_0x3753();
  
  } while(...); // (LOOP) 0xfff2
  
  label141:
  pp_USE @ UNK_0x3753();
  pp_PREV @ UNK_0x3753();
  
}


// ====================================================
// 0x38eb: WORD 'EMPTY-BUFFERS' codep=0x224c parp=0x38fd
// ====================================================

void EMPTY-BUFFERS()
{
  pp_'MTBUF @ EXECUTE MTBUFFERS();
  MTCACHE();
  
}


// ====================================================
// 0x3909: WORD 'FLUSH' codep=0x224c parp=0x3913
// ====================================================

void FLUSH()
{
  SAVE-BUFFERS();
  EMPTY-BUFFERS();
  
}


// ====================================================
// 0x3919: WORD 'COPY' codep=0x224c parp=0x3922
// ====================================================

void COPY()
{
  SWAP BLOCK();
  SWAP BLOCK();
  Push(0x0400); CMOVE UPDATE();
  
}


// ====================================================
// 0x3934: WORD 'BLOCKS' codep=0x224c parp=0x393f
// ====================================================

void BLOCKS()
{
  >R 2DUP > 
  if (Pop() == 0) goto label164;
  R> Push(0); 
  do // (DO)
  {
  OVER I + OVER I + COPY();
  
  } while(...); // (LOOP) 0xfff0
  
  goto label165;
  
  label164:
  Push(0); R> 1- 
  do // (DO)
  {
  OVER I + OVER I + COPY();
  Push(0xffff); 
  } while(...); // (+LOOP) 0xffec
  
  label165:
  2DROP SAVE-BUFFERS();
  
}


// ====================================================
// 0x3989: WORD 'PSW' codep=0x2214 parp=0x3991
// ====================================================
// 0x3991: db 0xb4 0x16 '  '
  
// ====================================================
// 0x3993: WORD 'AX' codep=0x2214 parp=0x399a
// ====================================================
// 0x399a: db 0xb6 0x16 '  '
  
// ====================================================
// 0x399c: WORD 'BX' codep=0x2214 parp=0x39a3
// ====================================================
// 0x39a3: db 0xb8 0x16 '  '
  
// ====================================================
// 0x39a5: WORD 'CX' codep=0x2214 parp=0x39ac
// ====================================================
// 0x39ac: db 0xba 0x16 '  '
  
// ====================================================
// 0x39ae: WORD 'DX' codep=0x2214 parp=0x39b5
// ====================================================
// 0x39b5: db 0xbc 0x16 '  '
  
// ====================================================
// 0x39b7: WORD 'BP' codep=0x2214 parp=0x39be
// ====================================================
// 0x39be: db 0xbe 0x16 '  '
  
// ====================================================
// 0x39c0: WORD 'DI' codep=0x2214 parp=0x39c7
// ====================================================
// 0x39c7: db 0xc0 0x16 '  '
  
// ====================================================
// 0x39c9: WORD 'SI' codep=0x2214 parp=0x39d0
// ====================================================
// 0x39d0: db 0xc2 0x16 '  '
  
// ====================================================
// 0x39d2: WORD 'DS' codep=0x2214 parp=0x39d9
// ====================================================
// 0x39d9: db 0xc4 0x16 '  '
  
// ====================================================
// 0x39db: WORD 'ES' codep=0x2214 parp=0x39e2
// ====================================================
// 0x39e2: db 0xc6 0x16 '  '
  
// ====================================================
// 0x39e4: WORD 'MATCH' codep=0x39ee parp=0x39ee
// ====================================================
// 0x39ee: pop    dx
// 0x39ef: pop    bx
// 0x39f0: pop    ax
// 0x39f1: pop    cx
// 0x39f2: push   di
// 0x39f3: push   si
// 0x39f4: push   cx
// 0x39f5: mov    di,cx
// 0x39f7: mov    cx,cs
// 0x39f9: mov    es,cx
// 0x39fb: cmp    ax,dx
// 0x39fd: jb     3A14
// 0x39ff: mov    cx,dx
// 0x3a01: mov    si,bx
// 0x3a03: repz   
// 0x3a04: cmpsb
// 0x3a05: jz     3A11
// 0x3a07: sub    ax,dx
// 0x3a09: add    ax,cx
// 0x3a0b: jnz    39FB
// 0x3a0d: mov    cx,cs

// ====================================================
// 0x3a0f: WORD 'UNK_0x3a11' codep=0x0374 parp=0x3a11
// ====================================================
// 0x3a11: db 0xb8 0xff 0xff 0x8b 0xdf 0x01 0xd8 0x5b 0x29 0xd8 0x5e 0x5f 0x81 0xe9 0x01 0x00 0x19 0xc9 0xf7 0xd9 0x51 0x50 0xad 0x8b 0xd8 0xff 0x27 '       [) ^_        QP    ''
  
// ====================================================
// 0x3a2c: WORD '@EXECUTE' codep=0x3a39 parp=0x3a39
// ====================================================
// 0x3a39: pop    bx
// 0x3a3a: mov    bx,[bx]
// 0x3a3c: dec    bx
// 0x3a3d: dec    bx
// 0x3a3e: jmp    word ptr [bx]

// ====================================================
// 0x3a40: WORD 'NOP' codep=0x224c parp=0x3a48
// ====================================================

void NOP()
{
  
}


// ====================================================
// 0x3a4a: WORD '**' codep=0x224c parp=0x3a51
// ====================================================

void **()
{
  
}


// ====================================================
// 0x3a53: WORD ''UNRAVEL' codep=0x1d29 parp=0x3a60
// ====================================================
// 0x3a60: db 0x8a 0x8e '  '
  
// ====================================================
// 0x3a62: WORD 'UNRAVEL' codep=0x224c parp=0x3a6e
// ====================================================

void UNRAVEL()
{
  MERR();
  @EXECUTE R> DROP Push(0x000f); 
  label162:
  R> 2- @ CR DUP Push(0); Push(0x0008); D.R();
  Push(0x0003); SPACES();
  2+ NFA();
  ID.();
  1- ?DUP 0= RP@ tt_R0 @ U< NOT OR 
  if (Pop() == 0) goto label162;
  QUIT();
  
}


// ====================================================
// 0x3ab2: WORD '?UNRAVEL' codep=0x224c parp=0x3abf
// ====================================================

void ?UNRAVEL()
{
  
  if (Pop() == 0) goto label147;
  UNRAVEL();
  
  label147:
  
}


// ====================================================
// 0x3ac7: WORD 'SYN' codep=0x224c parp=0x3acf
// ====================================================

void SYN()
{
  CREATE FIND();
  DUP ,();
  IMMEDIATE();
  2+ NFA();
  C@ Push(0x0040); AND 
  if (Pop() == 0) goto label166;
  
  (;CODE)();
// inlined assembler code
// 0x3aeb: db 0xe8 0x5b 0xdb 0xae 0x0b 0x73 0x16 0x60 0x16 0x1b 0x00 ' [   s `   '
  
  label166:
  
  (;CODE)();
// inlined assembler code
// 0x3af8: call   1649
// 0x3afb: db 0x9c 0x05 0xae 0x0b 0xfa 0x15 0x0a 0x00 0xae 0x0b 0x93 0x1f 0x60 0x16 0x06 0x00 0xae 0x0b 0x73 0x16 0x90 0x16 '            `     s   '
  
// ====================================================
// 0x3b11: WORD 'TRACE' codep=0x1d29 parp=0x3b1b
// ====================================================
// 0x3b1b: db 0x00 0x00 '  '
  
// ====================================================
// 0x3b1d: WORD 'UNK_0x3b1f' codep=0x3b13 parp=0x3b1f
// ====================================================
// 0x3b28: db 0x48 0x3a 'H:'
  
// ====================================================
// 0x3b2a: WORD 'TRACE]' codep=0x1d29 parp=0x3b35
// ====================================================
// 0x3b35: db 0x48 0x3a 'H:'
  
// ====================================================
// 0x3b37: WORD 'D@' codep=0x3af8 parp=0x3b3e
// ====================================================
// 0x3b3e: db 0x38 0x0c '8 '
  
// ====================================================
// 0x3b40: WORD 'V=' codep=0x3af8 parp=0x3b47
// ====================================================
// 0x3b47: db 0x1e 0x25 ' %'
  
// ====================================================
// 0x3b49: WORD 'C=' codep=0x3af8 parp=0x3b50
// ====================================================
// 0x3b50: db 0x0c 0x22 ' "'
  
// ====================================================
// 0x3b52: WORD '2V=' codep=0x224c parp=0x3b5a
// ====================================================

void 2V=()
{
  CREATE Push(0x0004); ALLOT();
  
}


// ====================================================
// 0x3b64: WORD '2C=' codep=0x224c parp=0x3b6c
// ====================================================

void 2C=()
{
  CREATE ,();
  ,();
  
  (;CODE)();
// inlined assembler code
// 0x3b74: call   1649
// 0x3b77: db 0x38 0x0c 0x90 0x16 '8   '
  
// ====================================================
// 0x3b7b: WORD '3' codep=0x2214 parp=0x3b81
// ====================================================
// 0x3b81: db 0x03 0x00 '  '
  
// ====================================================
// 0x3b83: WORD '4' codep=0x2214 parp=0x3b89
// ====================================================
// 0x3b89: db 0x04 0x00 '  '
  
// ====================================================
// 0x3b8b: WORD '5' codep=0x2214 parp=0x3b91
// ====================================================
// 0x3b91: db 0x05 0x00 '  '
  
// ====================================================
// 0x3b93: WORD '6' codep=0x2214 parp=0x3b99
// ====================================================
// 0x3b99: db 0x06 0x00 '  '
  
// ====================================================
// 0x3b9b: WORD '7' codep=0x2214 parp=0x3ba1
// ====================================================
// 0x3ba1: db 0x07 0x00 '  '
  
// ====================================================
// 0x3ba3: WORD '8' codep=0x2214 parp=0x3ba9
// ====================================================
// 0x3ba9: db 0x08 0x00 '  '
  
// ====================================================
// 0x3bab: WORD '9' codep=0x2214 parp=0x3bb1
// ====================================================
// 0x3bb1: db 0x09 0x00 '  '
  
// ====================================================
// 0x3bb3: WORD '-1' codep=0x2214 parp=0x3bba
// ====================================================
// 0x3bba: db 0xff 0xff '  '
  
// ====================================================
// 0x3bbc: WORD '-2' codep=0x2214 parp=0x3bc3
// ====================================================
// 0x3bc3: db 0xfe 0xff '  '
  
// ====================================================
// 0x3bc5: WORD 'THRU' codep=0x224c parp=0x3bce
// ====================================================

void THRU()
{
  2DUP = 
  if (Pop() == 0) goto label167;
  DROP LOAD 
  goto label168;
  
  label167:
  1+ SWAP 
  do // (DO)
  {
  I LOAD 
  } while(...); // (LOOP) 0xfffa
  
  label168:
  
}


// ====================================================
// 0x3bee: WORD '(TRACE)' codep=0x224c parp=0x3bfa
// ====================================================

void (TRACE)()
{
  
}


// ====================================================
// 0x3bfc: WORD 'OVA' codep=0x1d29 parp=0x3c04
// ====================================================
// 0x3c04: db 0x60 0xeb '` '
  
// ====================================================
// 0x3c06: WORD 'T-DP' codep=0x1d29 parp=0x3c0f
// ====================================================
// 0x3c0f: db 0x3e 0xd5 0x27 0xf4 0x3e 0xd5 '> ' > '
  
// ====================================================
// 0x3c15: WORD 'TRANS-ALLOT' codep=0x224c parp=0x3c25
// ====================================================

void TRANS-ALLOT()
{
  pp_OVA @ SWAP - pp_T-DP ! 
}


// ====================================================
// 0x3c33: WORD 'NEWT-DP' codep=0x224c parp=0x3c3f
// ====================================================

void NEWT-DP()
{
  pp_T-DP @ pp_T-DP Push(cc_4); + ! 
}


// ====================================================
// 0x3c4d: WORD 'TRANSIENT' codep=0x224c parp=0x3c5b
// ====================================================

void TRANSIENT()
{
  HERE();
  pp_T-DP 2+ ! pp_T-DP Push(cc_4); + @ tt_DP ! 
}


// ====================================================
// 0x3c71: WORD 'RESIDENT' codep=0x224c parp=0x3c7e
// ====================================================

void RESIDENT()
{
  HERE();
  pp_T-DP Push(cc_4); + ! pp_T-DP 
// ====================================================
// 0x3c8a: WORD 'UNK_0x3c8c' codep=0x1015 parp=0x3c8c
// ====================================================
2+ @ tt_DP ! 
}


// ====================================================
// 0x3c94: WORD 'HEAD:' codep=0x224c parp=0x3c9e
// ====================================================

void HEAD:()
{
  HERE();
  TRANSIENT();
  CREATE ,();
  IMMEDIATE();
  RESIDENT();
  
  (;CODE)();
// inlined assembler code
// 0x3cac: db 0xe8 0x9a 0xd9 0xae 0x0b 0x9c 0x05 0xae 0x0b 0xfa 0x15 0x08 0x00 0x93 0x1f 0x60 0x16 0x06 0x00 0x15 0x10 0x82 0x16 0x90 0x16 '               `         '
  
// ====================================================
// 0x3cc5: WORD 'T:' codep=0x224c parp=0x3ccc
// ====================================================

void T:()
{
  Push(0x224c); ,();
  SP@ tt_CSP ! tt_CURRENT @ tt_CONTEXT ! ]();
  
}


// ====================================================
// 0x3ce4: WORD 'T;' codep=0x224c parp=0x3ceb
// ====================================================

void T;()
{
  ?CSP();
  COMPILE();
  
}

// 0x3cf1: db 0x56 0x25 0x90 0x16 'V%  '
  
// ====================================================
// 0x3cf5: WORD 'UNK_0x3cf7' codep=0x224c parp=0x3cf7
// ====================================================

  label177:
  
void UNK_0x3cf7()
{
  DUP 2- @ ?DUP 
  if (Pop() == 0) goto label175;
  DUP pp_T-DP @ U< 
// ====================================================
// 0x3d0b: WORD 'UNK_0x3d0d' codep=0x1307 parp=0x3d0d
// ====================================================
NOT OVER pp_OVA @ U< AND 
  if (Pop() == 0) goto label176;
  pp_TRACE @ 
  if (Pop() == 0) goto label178;
  DUP ID.();
  SPACE();
  
  label178:
  2- @ OVER 2- ! 
  goto label179;
  
  label176:
  SWAP DROP 
  label179:
  
  goto label177;
  
  label175:
  DROP 
// ====================================================
// 0x3d40: WORD 'UNK_0x3d42' codep=0x900e parp=0x3d42
// ====================================================

}


// ====================================================
// 0x3d43: WORD 'UNK_0x3d45' codep=0x224c parp=0x3d45
// ====================================================

void UNK_0x3d45()
{
  tt_VOC-LINK 
  label171:
  DUP @ ?DUP 
  if (Pop() == 0) goto label169;
  DUP pp_T-DP @ U< NOT OVER pp_OVA @ U< AND 
  if (Pop() == 0) goto label170;
  pp_TRACE @ 
  if (Pop() == 0) goto label172;
  DUP 2- NFA();
  ID.();
  
  label172:
  @ OVER ! 
  goto label173;
  
  label170:
  SWAP DROP 
  label173:
  
  goto label171;
  
  label169:
  DROP 
}


// ====================================================
// 0x3d8f: WORD 'DISPOSE' codep=0x224c parp=0x3d9b
// ====================================================

void DISPOSE()
{
  CR tt_VOC-LINK @ Push(cc_4); - NFA();
  ID.();
  pp_T-DP Push(cc_4); + @ pp_T-DP @ - 
  (.") string 13 " Transbytes= "
  .();
  NEWT-DP();
  UNK_0x3d45();
  tt_VOC-LINK 
  label180:
  DUP @ ?DUP 
  if (Pop() == 0) goto label174;
  Push(cc_4); Push(0); 
  do // (DO)
  {
  I 2* Push(cc_6); + OVER + UNK_0x3cf7();
  
  } while(...); // (LOOP) 0xfff0
  DROP @ 
  goto label180;
  
  label174:
  DROP 
}


// ====================================================
// 0x3dfd: WORD ''' codep=0x224c parp=0x3e03
// ====================================================

void '()
{
  ?FIND();
  DUP 2- @ Push(0x3c9e); Push(0x000e); + 
// ====================================================
// 0x3e15: WORD 'UNK_0x3e17' codep=0x125f parp=0x3e17
// ====================================================
= 
  if (Pop() == 0) goto label181;
  @ 2+ 
  label181:
  LITERAL();
  
}


// ====================================================
// 0x3e23: WORD '(2V:)' codep=0x1d29 parp=0x3e2d
// ====================================================
// 0x3e2d: db 0x54 0x20 0x2d 0x20 'T - '
  
// ====================================================
// 0x3e31: WORD '(C:)' codep=0x2214 parp=0x3e3a
// ====================================================
// 0x3e3a: db 0x00 0x00 '  '
  
// ====================================================
// 0x3e3c: WORD '(2C:)' codep=0x3b74 parp=0x3e46
// ====================================================

// ====================================================
// 0x3e42: WORD 'UNK_0x3e44' codep=0xa93a parp=0x3e44
// ====================================================

// ====================================================
// 0x3e45: WORD 'UNK_0x3e47' codep=0x003b parp=0x3e47
// ====================================================
// 0x3e47: db 0x00 0x00 0x00 '   '
  
// ====================================================
// 0x3e4a: WORD 'V:' codep=0x224c parp=0x3e51
// ====================================================

void V:()
{
  HEAD:();
  Push(0x1d29); ,();
  Push(2); ALLOT();
  
}


// ====================================================
// 0x3e5f: WORD '2V:' codep=0x224c parp=0x3e67
// ====================================================

void 2V:()
{
  HEAD:();
  Push(0x1d29); ,();
  Push(cc_4); ALLOT();
  
}


// ====================================================
// 0x3e75: WORD 'C:' codep=0x224c parp=0x3e7c
// ====================================================

void C:()
{
  HEAD:();
  Push(0x2214); ,();
  ,();
  
}


// ====================================================
// 0x3e88: WORD '2C:' codep=0x224c parp=0x3e90
// ====================================================

void 2C:()
{
  HEAD:();
  Push(0x3b74); ,();
  ,();
  ,();
  
}


// ====================================================
// 0x3e9e: WORD 'EXECUTES' codep=0x224c parp=0x3eab
// ====================================================

void EXECUTES()
{
  @ ME + ! 
}


// ====================================================
// 0x3eb5: WORD 'BINARY' codep=0x224c parp=0x3ec0
// ====================================================

void BINARY()
{
  Push(2); tt_BASE ! 
}


// ====================================================
// 0x3ec8: WORD 'H.' codep=0x224c parp=0x3ecf
// ====================================================

void H.()
{
  tt_BASE @ SWAP HEX();
  U.();
  tt_BASE ! 
}


// ====================================================
// 0x3edf: WORD 'RANGE' codep=0x224c parp=0x3ee9
// ====================================================

void RANGE()
{
  OVER + SWAP 
}


// ====================================================
// 0x3ef1: WORD 'ASCII' codep=0x224c parp=0x3efb
// ====================================================

void ASCII()
{
  Push(cc_BL); WORD 1+ C@ LITERAL();
  
}


// ====================================================
// 0x3f07: WORD 'UNK_0x3f09' codep=0x224c parp=0x3f09
// ====================================================

void UNK_0x3f09()
{
  R@ COUNT();
  DUP 1+ R> + >R 
}


// ====================================================
// 0x3f19: WORD '"' codep=0x224c parp=0x3f1f
// ====================================================

void "()
{
  tt_STATE @ 
  if (Pop() == 0) goto label182;
  COMPILE();
  UNK_0x3f09();
  
  label182:
  Push(0x0022); WORD tt_STATE @ 
  if (Pop() == 0) goto label183;
  C@ 1+ ALLOT();
  
  goto label184;
  
  label183:
  DUP C@ 1+ PAD();
  SWAP CMOVE PAD();
  COUNT();
  
  label184:
  
}


// ====================================================
// 0x3f55: WORD 'DU<' codep=0x224c parp=0x3f5d
// ====================================================

void DU<()
{
  >R >R Push(0x8000); + R> R> Push(0x8000); + D<();
  
}


// ====================================================
// 0x3f75: WORD 'PICK' codep=0x224c parp=0x3f7e
// ====================================================

void PICK()
{
  DUP Push(1); < 
  if (Pop() == 0) goto label152;
  UNRAVEL();
  
  label152:
  2* SP@ + @ 
}


// ====================================================
// 0x3f94: WORD 'ROLL' codep=0x224c parp=0x3f9d
// ====================================================

void ROLL()
{
  DUP Push(1); < 
  if (Pop() == 0) goto label185;
  UNRAVEL();
  
  label185:
  1+ DUP PICK();
  SWAP 2* SP@ + 
  label186:
  DUP 2- @ OVER ! 2- SP@ OVER U< NOT 
  if (Pop() == 0) goto label186;
  2DROP 
}


// ====================================================
// 0x3fd3: WORD '2OVER' codep=0x224c parp=0x3fdd
// ====================================================

void 2OVER()
{
  Push(cc_4); PICK();
  Push(cc_4); PICK();
  
}


// ====================================================
// 0x3fe7: WORD 'D-' codep=0x224c parp=0x3fee
// ====================================================

void D-()
{
  DNEGATE D+ 
}


// ====================================================
// 0x3ff4: WORD 'D0=' codep=0x224c parp=0x3ffc
// ====================================================

void D0=()
{
  OR 0= 
}


// ====================================================
// 0x4002: WORD 'D=' codep=0x224c parp=0x4009
// ====================================================

void D=()
{
  D-();
  D0=();
  
}


// ====================================================
// 0x400f: WORD 'D>' codep=0x224c parp=0x4016
// ====================================================

void D>()
{
  2SWAP D<();
  
}


// ====================================================
// 0x401c: WORD 'WITHIN' codep=0x224c parp=0x4027
// ====================================================

void WITHIN()
{
  ROT >R I > SWAP 1- R> < AND 
}


// ====================================================
// 0x403b: WORD 'DMIN' codep=0x224c parp=0x4044
// ====================================================

void DMIN()
{
  2OVER();
  2OVER();
  D>();
  
  if (Pop() == 0) goto label153;
  2SWAP 
  label153:
  2DROP 
}


// ====================================================
// 0x4054: WORD 'DMAX' codep=0x224c parp=0x405d
// ====================================================

void DMAX()
{
  2OVER();
  2OVER();
  D<();
  
  if (Pop() == 0) goto label187;
  2SWAP 
  label187:
  2DROP 
}


// ====================================================
// 0x406d: WORD 'MYSELF' codep=0x224c parp=0x4078
// ====================================================

void MYSELF()
{
  LATEST();
  PFA();
  CFA();
  DUP @ Push(0x3cac); = 
  if (Pop() == 0) goto label188;
  2+ @ 
  label188:
  ,();
  
}


// ====================================================
// 0x4094: WORD '>TIB' codep=0x224c parp=0x409d
// ====================================================

void >TIB()
{
  tt_TIB @ 2DUP + OFF();
  SWAP CMOVE tt_>IN OFF();
  
}


// ====================================================
// 0x40b1: WORD 'DOSPARM' codep=0x224c parp=0x40bd
// ====================================================

void DOSPARM()
{
  Push(0x0080); COUNT();
  >TIB();
  INTERPRET 
}


// ====================================================
// 0x40c9: WORD 'MAXDRV' codep=0x1d29 parp=0x40d4
// ====================================================
// 0x40d4: db 0x05 0x00 '  '
  
// ====================================================
// 0x40d6: WORD '?#DETTE' codep=0x224c parp=0x40e2
// ====================================================

void ?#DETTE()
{
  Push(0x0011); INTERRUPT Push(cc_AX); @ Push(0x00c0); AND Push(0x0040); / 1+ 
}


// ====================================================
// 0x40fc: WORD 'XFCB' codep=0x224c parp=0x4105
// ====================================================

void XFCB()
{
  pp_'FCB @ Push(cc_7); - 
}


// ====================================================
// 0x410e: WORD 'UNK_0x4110' codep=0xd816 parp=0x4110
// ====================================================

// ====================================================
// 0x410f: WORD 'DRV' codep=0x224c parp=0x4117
// ====================================================

void DRV()
{
  pp_'FCB @ 
}


// ====================================================
// 0x411d: WORD 'NAM' codep=0x224c parp=0x4125
// ====================================================

void NAM()
{
  pp_'FCB @ 1+ 
}


// ====================================================
// 0x412d: WORD 'TYP' codep=0x224c parp=0x4135
// ====================================================

// ====================================================
// 0x4132: WORD 'UNK_0x4134' codep=0x4cd0 parp=0x4134
// ====================================================

void TYP()
{
  pp_'FCB @ Push(0x0009); + 
}


// ====================================================
// 0x4141: WORD 'CURBLK' codep=0x224c parp=0x414c
// ====================================================

// ====================================================
// 0x4142: WORD 'UNK_0x4144' codep=0x8641 parp=0x4144
// ====================================================

void CURBLK()
{
  pp_'FCB @ Push(0x000c); 
// ====================================================
// 0x4154: WORD 'UNK_0x4156' codep=0x0f72 parp=0x4156
// ====================================================
+ 
}


// ====================================================
// 0x4158: WORD 'RECSIZE' codep=0x224c parp=0x4164
// ====================================================

void RECSIZE()
{
  pp_'FCB @ Push(0x000e); + 
}


// ====================================================
// 0x4170: WORD 'FILESIZ' codep=0x224c parp=0x417c
// ====================================================

void FILESIZ()
{
  pp_'FCB @ Push(0x0010); + 
}


// ====================================================
// 0x4188: WORD 'CURREC' codep=0x224c parp=0x4193
// ====================================================

void CURREC()
{
  pp_'FCB @ Push(0x0020); + 
}


// ====================================================
// 0x419f: WORD 'RELREC' codep=0x224c parp=0x41aa
// ====================================================

void RELREC()
{
  pp_'FCB @ Push(0x0021); + 
}


// ====================================================
// 0x41b6: WORD 'CLRFCB' codep=0x224c parp=0x41c1
// ====================================================

void CLRFCB()
{
  XFCB();
  Push(0x002c); Push(0); FILL NAM();
  Push(0x000b); Push(cc_BL); FILL Push(0); XFCB();
  C! 
}


// ====================================================
// 0x41dd: WORD 'SYSTEM' codep=0x224c parp=0x41e8
// ====================================================

void SYSTEM()
{
  Push(0x2d97); Push(cc_7); + pp_'FCB ! 
}


// ====================================================
// 0x41f6: WORD 'SYSUTIL' codep=0x224c parp=0x4202
// ====================================================

void SYSUTIL()
{
  Push(0x2d97); Push(0x0033); + pp_'FCB ! 
}


// ====================================================
// 0x4212: WORD 'DOSCALL' codep=0x224c parp=0x421e
// ====================================================

// ====================================================
// 0x4217: WORD 'UNK_0x4219' codep=0x4353 parp=0x4219
// ====================================================

void DOSCALL()
{
  Push(cc_AX); 1+ C! Push(0x0021); 
// ====================================================
// 0x4227: WORD 'UNK_0x4229' codep=0xd700 parp=0x4229
// ====================================================
INTERRUPT 
}


// ====================================================
// 0x422c: WORD '>FCB' codep=0x224c parp=0x4235
// ====================================================

void >FCB()
{
  DRV();
  OFF();
  NAM();
  Push(0x000b); Push(cc_BL); FILL Push(cc_SI); ! pp_'FCB @ Push(cc_DI); ! (CS?) DUP Push(cc_DS); ! Push(cc_ES); ! Push(cc_5); Push(cc_AX); ! Push(0x0029); DOSCALL();
  
}


// ====================================================
// 0x4269: WORD 'SETFCB' codep=0x224c parp=0x4274
// ====================================================

void SETFCB()
{
  CLRFCB();
  Push(cc_BL); WORD 1+ >FCB();
  Push(cc_AX); C@ Push(0x00ff); = Push(cc_DI); @ 1+ C@ Push(cc_BL); = OR 
}


// ====================================================
// 0x4298: WORD 'INIT' codep=0x224c parp=0x42a1
// ====================================================

void INIT()
{
  Push(0x000d); DOSCALL();
  
}


// ====================================================
// 0x42a9: WORD 'FCBCALL' codep=0x224c parp=0x42b5
// ====================================================

void FCBCALL()
{
  pp_'FCB @ Push(cc_DX); ! (CS?) Push(cc_DS); ! DOSCALL();
  Push(cc_AX); C@ 
}


// ====================================================
// 0x42cb: WORD 'OPEN' codep=0x224c parp=0x42d4
// ====================================================

void OPEN()
{
  Push(0x000f); FCBCALL();
  
}


// ====================================================
// 0x42dc: WORD 'CLOSE' codep=0x224c parp=0x42e6
// ====================================================

void CLOSE()
{
  Push(0x0010); FCBCALL();
  
}


// ====================================================
// 0x42ee: WORD 'SEARCH1' codep=0x224c parp=0x42fa
// ====================================================

void SEARCH1()
{
  Push(0x0011); FCBCALL();
  
}


// ====================================================
// 0x4302: WORD 'READNEX' codep=0x224c parp=0x430e
// ====================================================

void READNEX()
{
  Push(0x0014); FCBCALL();
  
}


// ====================================================
// 0x4316: WORD 'WRITENE' codep=0x224c parp=0x4322
// ====================================================

void WRITENE()
{
  Push(0x0015); FCBCALL();
  
}


// ====================================================
// 0x432a: WORD 'MAKE' codep=0x224c parp=0x4333
// ====================================================

void MAKE()
{
  Push(0x0016); FCBCALL();
  
}


// ====================================================
// 0x433b: WORD 'DOS-DTA' codep=0x224c parp=0x4347
// ====================================================

void DOS-DTA()
{
  pp_DTA 2@ Push(cc_DX); ! Push(cc_DS); ! Push(0x001a); DOSCALL();
  
}


// ====================================================
// 0x435b: WORD 'READ-RA' codep=0x224c parp=0x4367
// ====================================================

void READ-RA()
{
  Push(0x0021); FCBCALL();
  
}


// ====================================================
// 0x436f: WORD 'WRITE-R' codep=0x224c parp=0x437b
// ====================================================

void WRITE-R()
{
  Push(0x0022); FCBCALL();
  
}


// ====================================================
// 0x4383: WORD 'UNK_0x4385' codep=0x224c parp=0x4385
// ====================================================

void UNK_0x4385()
{
  
  (ABORT") // string 8 "Bad name"
  
// ====================================================
// 0x4387: WORD 'UNK_0x4389' codep=0x4208 parp=0x4389
// ====================================================

}


// ====================================================
// 0x4392: WORD 'MAKE<NA' codep=0x224c parp=0x439e
// ====================================================

// ====================================================
// 0x4394: WORD 'UNK_0x4396' codep=0x4d8a parp=0x4396
// ====================================================

void MAKE<NA()
{
  SETFCB();
  UNK_0x4385();
  MAKE();
  
  (ABORT") // string 13 "Can't create."
  
}


// ====================================================
// 0x43b6: WORD 'OPEN<NA' codep=0x224c parp=0x43c2
// ====================================================

void OPEN<NA()
{
  SETFCB();
  UNK_0x4385();
  OPEN();
  
  (ABORT") // string 11 "Can't open."
  
}


// ====================================================
// 0x43d8: WORD '[FILE]' codep=0x224c parp=0x43e3
// ====================================================

void [FILE]()
{
  DOS-DTA();
  pp_FILE @ FCBPFAS();
  @ pp_'FCB ! SWAP RELREC();
  ! 
  if (Pop() == 0) goto label189;
  READ-RA();
  
  goto label190;
  
  label189:
  WRITE-R();
  
  label190:
  pp_DISK-ERROR ! 
}


// ====================================================
// 0x4409: WORD 'SYSGEN' codep=0x224c parp=0x4414
// ====================================================

void SYSGEN()
{
  CR FREEZE();
  (RESTORE)();
  SYSUTIL();
  INIT();
  MAKE<NA();
  (CS?) Push(0x0100); pp_DTA 2! DOS-DTA();
  HERE();
  Push(0x0100); - RECSIZE();
  ! WRITENE();
  (SETUP)();
  ?UNRAVEL();
  CLOSE();
  ?UNRAVEL();
  
}


// ====================================================
// 0x4444: WORD '4TH>DOS' codep=0x224c parp=0x4450
// ====================================================

void 4TH>DOS()
{
  SYSUTIL();
  MAKE<NA();
  Push(0x0400); RECSIZE();
  ! 1+ SWAP 
  do // (DO)
  {
  (CS?) I BLOCK();
  pp_DTA 
  label110:
  UNK_0x222e UNK_0x450e UNK_0x0045 UNK_0x2044 SHOWS();
  UNK_0xd03c UNK_0xec17 UNK_0xe501 UNK_0xbd44 UNK_0x903c UNK_0x4c18 UNK_0xa524 UNK_0xae2d UNK_0xb40d UNK_0x200f UNK_0xdb11 UNK_0x5e25 UNK_0xdb0e UNK_0x9f25 UNK_0x723d UNK_0xa511 UNK_0xdf2d UNK_0xbf0d UNK_0x0743 UNK_0x0b41 UNK_0x5455 UNK_0x5243 UNK_0x4134 UNK_0x2022 UNK_0x4f45 UNK_0x234f UNK_0xf243 UNK_0x0e10 UNK_0x150f UNK_0xdb0e UNK_0x5d25 UNK_0x3219 UNK_0x7202 UNK_0x3a11 UNK_0x222e UNK_0x450e UNK_0xf845 UNK_0x5d44 UNK_0x4219 UNK_0x2302 UNK_0x8743 UNK_0x723d UNK_0x5e11 UNK_0xf80e UNK_0x3e44 UNK_0x9015 UNK_0xa510 UNK_0xdf2d UNK_0x900d UNK_0x4c18 UNK_0xb324 UNK_0xdf3b UNK_0x5d0d UNK_0x3619 UNK_0x1c02 UNK_0x9844 UNK_0xae3b UNK_0x580d UNK_0x2e12 UNK_0x5f11 UNK_0x0714 UNK_0x9015 UNK_0x4c18 UNK_0x5d24 UNK_0x1919 UNK_0x1c02 UNK_0x9844 UNK_0x923b UNK_0xe70e UNK_0x9011 UNK_0x5d18 
// ====================================================
// 0x4500: WORD 'SETMAXD' codep=0x224c parp=0x450c
// ====================================================
UNK_0x8945 UNK_0x4555 UNK_0x4d56 UNK_0x5843 UNK_0x4cc6 UNK_0xe024 
// ====================================================
// 0x450c: WORD 'UNK_0x450e' codep=0x40e0 parp=0x450e
// ====================================================

void SETMAXD()
{
  UNK_0x3d42 UNK_0x8911 UNK_0xf013 UNK_0x8946 UNK_0xd213 UNK_0xdf42 UNK_0x7e0d UNK_0xfa46 UNK_0x3817 UNK_0x9f02 UNK_0xd23d UNK_0xae42 UNK_0xe70d UNK_0xb811 UNK_0x5017 UNK_0xd610 UNK_0xfa46 UNK_0x0817 UNK_0x5002 UNK_0xd210 UNK_0xdf42 UNK_0xd00d UNK_0xf017 UNK_0xd301 UNK_0xae42 UNK_0x3d0d UNK_0x5f11 UNK_0xe014 UNK_0x2e42 UNK_0x5f11 UNK_0xf514 UNK_0xfa14 UNK_0x0817 UNK_0x2e02 UNK_0xd211 
// ====================================================
// 0x4553: WORD 'UNK_0x4555' codep=0xdf40 parp=0x4555
// ====================================================
UNK_0xdf42 UNK_0x900d UNK_0x4c18 
// ====================================================
// 0x4558: WORD 'UNK_0x455a' codep=0x224c parp=0x455a
// ====================================================
UNK_0x1524 
void UNK_0x455a()
{
  UNK_0x9243 UNK_0x890e UNK_0xfa14 UNK_0x0817 UNK_0xf002 UNK_0x1546 UNK_0x5e43 UNK_0x900e UNK_0x0218 
// ====================================================
// 0x456c: WORD '?1DRV' codep=0x224c parp=0x4576
// ====================================================
UNK_0x8547 UNK_0x3141 UNK_0x5246 UNK_0x4cd8 UNK_0xe024 
void ?1DRV()
{
  UNK_0x2e42 UNK_0x5f11 UNK_0x5d14 
  label114:
  UNK_0x1919 UNK_0x1c02 UNK_0x9844 UNK_0x923b UNK_0x890e UNK_0xf514 UNK_0x9014 UNK_0x4c18 
// ====================================================
// 0x458c: WORD 'UNK_0x458e' codep=0x224c parp=0x458e
// ====================================================
UNK_0xe724 
void UNK_0x458e()
{
  UNK_0xd211 UNK_0xae42 UNK_0x7f0d UNK_0x4610 UNK_0x7414 UNK_0x3e47 UNK_0xfa15 UNK_0x0617 UNK_0x3202 UNK_0x2e10 UNK_0x9011 UNK_0x6e18 
// ====================================================
// 0x45a6: WORD 'SMARTOP' codep=0x224c parp=0x45b2
// ====================================================
UNK_0x8947 UNK_0x4d55 UNK_0x5243 UNK_0x4f56 UNK_0x4cd2 UNK_0xd224 
void SMARTOP()
{
  UNK_0x4144 UNK_0xfa10 UNK_0x4817 UNK_0x1502 UNK_0x9243 UNK_0x890e UNK_0xfa14 UNK_0x3e17 UNK_0xb402 UNK_0x580f UNK_0x1547 UNK_0x9243 UNK_0x150e UNK_0x9243 UNK_0x8c0e UNK_0xf047 UNK_0x5f0f UNK_0x0714 UNK_0x5015 UNK_0xf510 UNK_0xfa14 UNK_0x1217 UNK_0x1502 UNK_0x5e43 UNK_0xd20e UNK_0x9044 UNK_0x3210 UNK_0xb410 UNK_0x600f UNK_0xde18 UNK_0xdf01 UNK_0x900f UNK_0x4110 UNK_0xfa10 UNK_0x0817 UNK_0x2002 UNK_0x1511 UNK_0x5e43 
  label115:
  UNK_0x900e UNK_0x0b18 
// ====================================================
// 0x4602: WORD 'ASKMOUN' codep=0x1d29 parp=0x460e
// ====================================================
UNK_0x8846 UNK_0x5343 UNK_0x4d4d UNK_0x5551 UNK_0x29d0 UNK_0x3b1f 
// ====================================================
// 0x460e: WORD 'UNK_0x4610' codep=0xaa3b parp=0x4610
// ====================================================
UNK_0x46ac 
// ====================================================
// 0x4610: WORD ''BYE' codep=0x1d29 parp=0x4619
// ====================================================
UNK_0x8446 
// ====================================================
// 0x4612: WORD 'UNK_0x4614' codep=0x2784 parp=0x4614
// ====================================================
UNK_0x4229 UNK_0xc55b UNK_0x1d2b UNK_0x085f 
// ====================================================
// 0x461b: WORD 'SKIPPED' codep=0x1d29 parp=0x4627
// ====================================================
UNK_0x4614 
// ====================================================
// 0x461d: WORD 'UNK_0x461f' codep=0x5387 parp=0x461f
// ====================================================
UNK_0x5389 UNK_0x494d UNK_0x5052 UNK_0xc447 UNK_0x1d2b UNK_0x0002 
// ====================================================
// 0x4629: WORD 'CANSKIP' codep=0x1d29 parp=0x4635
// ====================================================
UNK_0x461f UNK_0x4389 UNK_0x4e43 UNK_0x4b55 UNK_0xd04b UNK_0x1d2b UNK_0x0002 
// ====================================================
// 0x4637: WORD '<ASKMOU' codep=0x224c parp=0x4643
// ====================================================
UNK_0x4396 UNK_0x3c8c UNK_0x5343 UNK_0x4d4d UNK_0xd551 UNK_0x224e 
void <ASKMOU()
{
  CR 
  (.") string 15 "Place disk with"
  CR NAM();
  Push(cc_8); -TRAILING();
  TYPE 
  (.") string 1 "."
  TYP();
  Push(cc_3); TYPE 
  (.") string 6 " into "
  DRV();
  C@ ?DUP 
  if (Pop() == 0) goto label111;
  
  (.") string 6 "drive "
  Push(0x0040); + EMIT 
  goto label113;
  
  label111:
  
  (.") string 9 "any drive"
  
  label113:
  CR 
  (.") string 18 "and press any key."
  
// ====================================================
// 0x46aa: WORD 'UNK_0x46ac' codep=0x7365 parp=0x46ac
// ====================================================
KEY Push(0x001a); = pp_CANSKIP @ AND 
  if (Pop() == 0) goto label112;
  pp_SKIPPED ON();
  
  label112:
  
}


// ====================================================
// 0x46ce: WORD 'DOSMOUN' codep=0x224c parp=0x46da
// ====================================================

void DOSMOUN()
{
  pp_SKIPPED OFF();
  >R INIT();
  
  label192:
  I FCBPFAS();
  @ pp_'FCB ! SMARTOP();
  DUP pp_SKIPPED @ NOT AND 
  if (Pop() == 0) goto label191;
  DROP FLUSH();
  INIT();
  I FCBPFAS();
  @ pp_'FCB ! pp_ASKMOUN @EXECUTE 
  goto label192;
  
  label191:
  Push(0x0400); RECSIZE();
  ! FILESIZ();
  2@ SWAP Push(0x0400); M/();
  SWAP DROP DRV();
  C@ R> DRIVENUMBERS();
  C! 
}


// ====================================================
// 0x4738: WORD 'DOSUNMO' codep=0x224c parp=0x4744
// ====================================================

void DOSUNMO()
{
  FCBPFAS();
  @ pp_'FCB ! CLOSE();
  DROP Push(0); 
}


// ====================================================
// 0x4754: WORD 'DR2' codep=0x224c parp=0x475c
// ====================================================

void DR2()
{
  Push(0x43e3); Push(0x02d0); SYSTEM();
  pp_'FCB @ NAM();
  DRV();
  C@ Push(1); Push(cc_DOS-FILE); <MOUNT>();
  DROP 
}


// ====================================================
// 0x477a: WORD 'DR3' codep=0x224c parp=0x4782
// ====================================================

void DR3()
{
  Push(0x43e3); Push(0x05dc); SYSUTIL();
  pp_'FCB @ NAM();
  DRV();
  C@ Push(1); Push(cc_DOS-FILE); 1+ <MOUNT>();
  DROP 
}


// ====================================================
// 0x47a2: WORD 'USING' codep=0x224c parp=0x47ac
// ====================================================

void USING()
{
  Push(cc_DOS-FILE); UNMOUNT();
  SYSTEM();
  SETFCB();
  UNK_0x4385();
  DR2();
  
}


// ====================================================
// 0x47ba: WORD 'SETBLOC' codep=0x224c parp=0x47c6
// ====================================================

// ====================================================
// 0x47bc: WORD 'UNK_0x47be' codep=0x5388 parp=0x47be
// ====================================================

void SETBLOC()
{
  Push(cc_ES); ! DUP Push(cc_BX); ! Push(0x004a); DOSCALL();
  Push(cc_PSW); @ Push(1); AND 
  if (Pop() == 0) goto label117;
  DROP Push(cc_BX); @ Push(1); 
  goto label118;
  
  label117:
  Push(0); 
  label118:
  (CS?) Push(cc_ES); ! 
}


  label116:
  
// ====================================================
// 0x47f8: WORD 'SETSYSK' codep=0x224c parp=0x4804
// ====================================================
UNK_0x47be UNK_0x5389 UNK_0x5447 UNK_0x5955 UNK_0xcb55 UNK_0x224e 
void SETSYSK()
{
  Push(0x7fff); (CS?) SETBLOC();
  DROP DUP (CS?) + Push(0); 
// ====================================================
// 0x4815: WORD 'UNK_0x4817' codep=0x5d0f parp=0x4817
// ====================================================
Push(0x0040); U/MOD pp_SYSK ! DROP (CS?) SETBLOC();
  DROP Push(0x2000); U< 
  if (Pop() == 0) goto label119;
  
  (.") string 13 "Out of memory"
  Push(0x0bb8); MS();
  BYE();
  
  label119:
  
}


// ====================================================
// 0x484c: WORD 'UNK_0x484e' codep=0x1d29 parp=0x484e
// ====================================================
// 0x484e: db 0x90 0x8d '  '
  
// ====================================================
// 0x4850: WORD 'UNK_0x4852' codep=0x1d29 parp=0x4852
// ====================================================
// 0x4852: db 0x4e 0x95 'N '
  
// ====================================================
// 0x4854: WORD 'UNK_0x4856' codep=0x1d29 parp=0x4856
// ====================================================
// 0x4856: db 0x4e 0x95 0x00 0x00 'N   '
  
// ====================================================
// 0x485a: WORD '?ERR' codep=0x224c parp=0x4863
// ====================================================

void ?ERR()
{
  Push(cc_PSW); @ Push(1); AND 
}


// ====================================================
// 0x486d: WORD 'UNK_0x486f' codep=0x224c parp=0x486f
// ====================================================

void UNK_0x486f()
{
  pp_UNK_0x484e @ pp_UNK_0x4852 @ pp_UNK_0x4856 ! pp_UNK_0x4856 2+ OFF();
  Push(cc_DX); ! Push(0x0003); Push(cc_AX); C! (CS?) Push(cc_ES); ! pp_UNK_0x4856 Push(cc_BX); ! Push(0x004b); DOSCALL();
  
}


// ====================================================
// 0x48a1: WORD '[LDS]' codep=0x224c parp=0x48ab
// ====================================================

void [LDS]()
{
  UNK_0x486f();
  ?ERR();
  DUP 
  if (Pop() == 0) goto label193;
  DRV();
  C@ 0= 
  if (Pop() == 0) goto label193;
  >R UNK_0x455a();
  DRV();
  C@ 
  label195:
  DRV();
  C@ UNK_0x458e();
  2DUP = NOT I AND 
  if (Pop() == 0) goto label194;
  DRV();
  C! UNK_0x486f();
  ?ERR();
  R> DROP >R 
  goto label195;
  
  label194:
  2DROP R> DUP 
  if (Pop() == 0) goto label193;
  Push(0); DRV();
  C! 
  label193:
  
}


// ====================================================
// 0x48ff: WORD 'UNK_0x4901' codep=0x1d29 parp=0x4901
// ====================================================
// 0x4901: db 0x00 0x52 0x32 0x20 0x20 0x20 0x20 0x20 0x20 0x4f 0x56 0x4c 0x00 0x00 0x00 0x00 0x41 ' R2      OVL    A'
  
// ====================================================
// 0x4912: WORD '(LDS)' codep=0x224c parp=0x491c
// ====================================================

void (LDS)()
{
  pp_'FCB @ >R pp_UNK_0x4901 pp_'FCB ! OVER >FCB();
  pp_UNK_0x4852 ! pp_UNK_0x484e ! 
  label197:
  [LDS]();
  pp_SKIPPED @ NOT AND 
  if (Pop() == 0) goto label196;
  pp_ASKMOUN @EXECUTE 
  goto label197;
  
  label196:
  R> 
// ====================================================
// 0x494b: WORD 'UNK_0x494d' codep=0xa50e parp=0x494d
// ====================================================
pp_'FCB ! 
}

// 0x4952: db 0x4c 'L'
  // 0x4953: and    cl,[bp+si]
// 0x4955: inc    bp
// 0x4956: mov    bx,9040
// 0x4959: push   ss

// ====================================================
// 0x495a: WORD 'ON' codep=0x4961 parp=0x4961
// ====================================================
// 0x4961: pop    bx
// 0x4962: mov    ax,0001
// 0x4965: mov    [bx],ax
// 0x4967: lodsw
// 0x4968: mov    bx,ax
// 0x496a: jmp    word ptr [bx]

// ====================================================
// 0x496c: WORD 'OFF' codep=0x4974 parp=0x4974
// ====================================================
// 0x4974: pop    bx
// 0x4975: xor    ax,ax
// 0x4977: mov    [bx],ax
// 0x4979: lodsw
// 0x497a: mov    bx,ax
// 0x497c: jmp    word ptr [bx]

// ====================================================
// 0x497e: WORD 'UNK_0x4980' codep=0x4980 parp=0x4980
// ====================================================
// 0x4980: push   ds
// 0x4981: mov    ax,0040
// 0x4984: mov    ds,ax
// 0x4986: mov    bx,0017
// 0x4989: mov    [bx],al
// 0x498b: pop    ds
// 0x498c: lodsw
// 0x498d: mov    bx,ax
// 0x498f: jmp    word ptr [bx]

// ====================================================
// 0x4991: WORD 'KEY' codep=0x224c parp=0x4999
// ====================================================

void KEY()
{
  UNK_0x4980 KEY 
}


// ====================================================
// 0x499f: WORD 'NULL' codep=0x3b74 parp=0x49a8
// ====================================================
// 0x49a8: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x49ac: WORD 'ZZZ' codep=0x1d29 parp=0x49b4
// ====================================================
// 0x49b4: db 0x76 0x02 0x19 0x00 0x4f 0x54 0x20 0x20 0x6d 0x65 'v   OT  me'
  
// ====================================================
// 0x49be: WORD '<LCMOVE' codep=0x49ca parp=0x49ca
// ====================================================
// 0x49ca: mov    bx,di
// 0x49cc: pop    cx
// 0x49cd: mov    ax,es
// 0x49cf: mov    dx,ds
// 0x49d1: pop    di
// 0x49d2: pop    es
// 0x49d3: mov    [49B4],si
// 0x49d7: pop    si
// 0x49d8: pop    ds
// 0x49d9: or     cx,cx
// 0x49db: jz     49E7
// 0x49dd: std    
// 0x49de: add    di,cx
// 0x49e0: dec    di
// 0x49e1: add    si,cx
// 0x49e3: dec    si
// 0x49e4: repz   
// 0x49e5: movsb
// 0x49e6: cld    
// 0x49e7: mov    es,ax
// 0x49e9: mov    ds,dx
// 0x49eb: mov    si,[49B4]
// 0x49ef: mov    di,bx
// 0x49f1: lodsw
// 0x49f2: mov    bx,ax
// 0x49f4: jmp    word ptr [bx]

// ====================================================
// 0x49f6: WORD '2^N' codep=0x49fe parp=0x49fe
// ====================================================
// 0x49fe: pop    cx
// 0x49ff: xor    ax,ax
// 0x4a00: db     C0
// 0x4a01: stc    
// 0x4a02: inc    cx
// 0x4a03: jcxz   4A07
// 0x4a05: rcl    ax,cl
// 0x4a07: push   ax
// 0x4a08: lodsw
// 0x4a09: mov    bx,ax
// 0x4a0b: jmp    word ptr [bx]

// ====================================================
// 0x4a0d: WORD 'BIT' codep=0x224c parp=0x4a15
// ====================================================

void BIT()
{
  1- 2^N 
}


// ====================================================
// 0x4a1b: WORD '16/' codep=0x4a23 parp=0x4a23
// ====================================================
// 0x4a23: pop    ax
// 0x4a24: mov    cx,0004
// 0x4a27: shr    ax,cl
// 0x4a29: push   ax
// 0x4a2a: lodsw
// 0x4a2b: mov    bx,ax
// 0x4a2d: jmp    word ptr [bx]

// ====================================================
// 0x4a2f: WORD '16*' codep=0x4a37 parp=0x4a37
// ====================================================
// 0x4a37: pop    ax
// 0x4a38: mov    cx,0004
// 0x4a3b: shl    ax,cl
// 0x4a3d: push   ax
// 0x4a3e: lodsw
// 0x4a3f: mov    bx,ax
// 0x4a41: jmp    word ptr [bx]

// ====================================================
// 0x4a43: WORD 'D16*' codep=0x4a4c parp=0x4a4c
// ====================================================
// 0x4a4c: pop    ax
// 0x4a4d: pop    dx
// 0x4a4e: mov    cx,0004
// 0x4a51: shl    dx,1
// 0x4a53: rcl    ax,1
// 0x4a55: loop   4A51
// 0x4a57: push   dx
// 0x4a58: push   ax
// 0x4a59: lodsw
// 0x4a5a: mov    bx,ax
// 0x4a5c: jmp    word ptr [bx]

// ====================================================
// 0x4a5e: WORD '3*' codep=0x224c parp=0x4a65
// ====================================================

void 3*()
{
  Push(cc_3); * 
}


// ====================================================
// 0x4a6b: WORD '3+' codep=0x4a72 parp=0x4a72
// ====================================================
// 0x4a72: pop    ax
// 0x4a73: add    ax,0003
// 0x4a76: push   ax
// 0x4a77: lodsw
// 0x4a78: mov    bx,ax
// 0x4a7a: jmp    word ptr [bx]

// ====================================================
// 0x4a7c: WORD '1.5@' codep=0x4a85 parp=0x4a85
// ====================================================
// 0x4a85: pop    bx
// 0x4a86: push   word ptr [bx]
// 0x4a88: xor    ax,ax
// 0x4a8a: mov    al,[bx+02]
// 0x4a8d: push   ax
// 0x4a8e: lodsw
// 0x4a8f: mov    bx,ax
// 0x4a91: jmp    word ptr [bx]

// ====================================================
// 0x4a93: WORD '1.5!' codep=0x4a9c parp=0x4a9c
// ====================================================
// 0x4a9c: pop    bx
// 0x4a9d: pop    ax
// 0x4a9e: mov    [bx+02],al
// 0x4aa1: pop    word ptr [bx]
// 0x4aa3: lodsw
// 0x4aa4: mov    bx,ax
// 0x4aa6: jmp    word ptr [bx]

// ====================================================
// 0x4aa8: WORD '@DS' codep=0x4ab0 parp=0x4ab0
// ====================================================
// 0x4ab0: push   ds
// 0x4ab1: lodsw
// 0x4ab2: mov    bx,ax
// 0x4ab4: jmp    word ptr [bx]
// 0x4ab6: sub    [di],bx
// 0x4ab8: push   cx
// 0x4ab9: es:    
// 0x4aba: mov    cl,[bx]
// 0x4abc: xchg   ax,bx
// 0x4abe: es:    
// 0x4abf: xchg   [bx],cl
// 0x4ac1: xchg   ax,bx
// 0x4ac3: es:    
// 0x4ac4: mov    [bx],cl
// 0x4ac6: pop    cx
// 0x4ac7: ret    


// ====================================================
// 0x4ac8: WORD '+@' codep=0x224c parp=0x4acf
// ====================================================

void +@()
{
  + @ 
}


// ====================================================
// 0x4ad5: WORD '>FLAG' codep=0x224c parp=0x4adf
// ====================================================

void >FLAG()
{
  0= 0= 
}


// ====================================================
// 0x4ae5: WORD 'L+-@' codep=0x4aee parp=0x4aee
// ====================================================
// 0x4aee: mov    dx,ds
// 0x4af0: pop    bx
// 0x4af1: pop    ds
// 0x4af2: xor    ax,ax
// 0x4af4: mov    al,[bx]
// 0x4af6: cbw    
// 0x4af7: push   ax
// 0x4af8: mov    ds,dx
// 0x4afa: lodsw
// 0x4afb: mov    bx,ax
// 0x4afd: jmp    word ptr [bx]
// 0x4aff: add    [bp+di+5B],cx
// 0x4b02: pop    ax
// 0x4b03: mov    cx,[bx]
// 0x4b05: add    bx,02
// 0x4b08: mov    dx,[bx]
// 0x4b0a: add    bx,02
// 0x4b0d: cmp    ax,[bx]
// 0x4b0f: jnz    4B19
// 0x4b11: add    bx,02
// 0x4b14: mov    dx,[bx]
// 0x4b16: mov    cx,0001
// 0x4b19: add    bx,04
// 0x4b1c: loop   4B0D
// 0x4b1e: push   dx
// 0x4b1f: lodsw
// 0x4b20: mov    bx,ax
// 0x4b22: jmp    word ptr [bx]

// ====================================================
// 0x4b24: WORD 'CASE' codep=0x224c parp=0x4b2d
// ====================================================

void CASE()
{
  CREATE HERE();
  NULL ,();
  ,();
  Push(0); 
  (;CODE)();
// inlined assembler code
// 0x4b3b: call   1649
// 0x4b3e: db 0xff 0x4a 0x82 0x16 0x90 0x16 ' J    '
  
// ====================================================
// 0x4b44: WORD 'IS' codep=0x224c parp=0x4b4b
// ====================================================

void IS()
{
  ,();
  '();
  ,();
  1+ 
// ====================================================
// 0x4b53: WORD 'UNK_0x4b55' codep=0x1690 parp=0x4b55
// ====================================================

}


// ====================================================
// 0x4b55: WORD 'OTHERS' codep=0x224c parp=0x4b60
// ====================================================

void OTHERS()
{
  '();
  Push(cc_3); PICK();
  2+ ! SWAP ! 
}


// ====================================================
// 0x4b70: WORD 'CASE:' codep=0x224c parp=0x4b7a
// ====================================================

void CASE:()
{
  CREATE SMUDGE();
  ]();
  
  (;CODE)();
// inlined assembler code
// 0x4b82: db 0xe8 0xc4 0xca 0xf2 0x0e 0x41 0x0e 0x72 0x0f 0x72 0x0f 0xae 0x0b 0x73 0x16 0x90 0x16 '     A r r   s   '
  
// ====================================================
// 0x4b93: WORD 'SEED' codep=0x1d29 parp=0x4b9c
// ====================================================
// 0x4b9c: db 0xdf 0x97 '  '
  
// ====================================================
// 0x4b9e: WORD 'FRND' codep=0x4ba7 parp=0x4ba7
// ====================================================
// 0x4ba7: mov    ax,[4B9C]
// 0x4bab: mov    cx,7ABD
// 0x4bae: imul   cx
// 0x4bb0: add    ax,1B0F
// 0x4bb3: mov    [4B9C],ax
// 0x4bb7: push   ax
// 0x4bb8: lodsw
// 0x4bb9: mov    bx,ax
// 0x4bbb: jmp    word ptr [bx]

// ====================================================
// 0x4bbd: WORD 'RRND' codep=0x224c parp=0x4bc6
// ====================================================

void RRND()
{
  OVER - FRND U* SWAP DROP + 
}


// ====================================================
// 0x4bd6: WORD '+BIT' codep=0x4bdf parp=0x4bdf
// ====================================================
// 0x4bdf: xor    dx,dx
// 0x4be1: pop    ax
// 0x4be2: mov    cx,0010
// 0x4be5: shr    ax,1
// 0x4be7: jae    4BEA
// 0x4be9: inc    dx
// 0x4bea: loop   4BE5
// 0x4bec: push   dx
// 0x4bed: lodsw
// 0x4bee: mov    bx,ax
// 0x4bf0: jmp    word ptr [bx]

// ====================================================
// 0x4bf2: WORD 'UNK_0x4bf4' codep=0x4bf4 parp=0x4bf4
// ====================================================
// 0x4bf4: pop    ax
// 0x4bf5: pop    cx
// 0x4bf6: shl    cx,1
// 0x4bf8: rcl    ax,1
// 0x4bfa: push   cx
// 0x4bfb: push   ax
// 0x4bfc: lodsw
// 0x4bfd: mov    bx,ax
// 0x4bff: jmp    word ptr [bx]

// ====================================================
// 0x4c01: WORD 'UNK_0x4c03' codep=0x4c03 parp=0x4c03
// ====================================================
// 0x4c03: pop    cx
// 0x4c04: pop    ax
// 0x4c05: pop    dx
// 0x4c06: pop    bx
// 0x4c07: shl    bx,1
// 0x4c09: rcl    dx,1
// 0x4c0b: shl    bx,1
// 0x4c0d: rcl    dx,1
// 0x4c0f: sub    dx,ax
// 0x4c11: jns    4C1A
// 0x4c13: add    dx,ax
// 0x4c15: shl    ax,1

// ====================================================
// 0x4c16: WORD 'UNK_0x4c18' codep=0x48e0 parp=0x4c18
// ====================================================
// 0x4c18: db 0xeb 0x04 0x40 0xd1 0xe0 0x40 0xe2 0xe7 0x53 0x52 0x50 0xad 0x8b 0xd8 0xff 0x27 '  @  @  SRP    ''
  
// ====================================================
// 0x4c28: WORD 'UNK_0x4c2a' codep=0x224c parp=0x4c2a
// ====================================================

void UNK_0x4c2a()
{
  >R UNK_0x4bf4 DUP 0< 
  if (Pop() == 0) goto label198;
  UNK_0x4bf4 R@ - R> 1+ 
  goto label200;
  
  label198:
  UNK_0x4bf4 R@ 2DUP U< 
  if (Pop() == 0) goto label199;
  DROP R> 1- 
  goto label200;
  
  label199:
  - R> 1+ 
  label200:
  
}


// ====================================================
// 0x4c62: WORD 'UNK_0x4c64' codep=0x224c parp=0x4c64
// ====================================================

void UNK_0x4c64()
{
  >R DUP 0< 
  if (Pop() == 0) goto label201;
  2DROP R> 1+ 
  goto label202;
  
  label201:
  UNK_0x4bf4 Push(0x8000); R@ DU<();
  0= R> + 
  label202:
  
}


// ====================================================
// 0x4c8a: WORD 'SQRT' codep=0x224c parp=0x4c93
// ====================================================

void SQRT()
{
  Push(0); Push(1); Push(cc_8); UNK_0x4c03 ROT DROP Push(cc_6); UNK_0x4c03 UNK_0x4c2a();
  UNK_0x4c64();
  
}


// ====================================================
// 0x4ca9: WORD '+-@' codep=0x4cb1 parp=0x4cb1
// ====================================================
// 0x4cb1: pop    bx
// 0x4cb2: mov    al,[bx]
// 0x4cb4: cbw    
// 0x4cb5: push   ax
// 0x4cb6: lodsw
// 0x4cb7: mov    bx,ax
// 0x4cb9: jmp    word ptr [bx]

// ====================================================
// 0x4cbb: WORD 'L1.5@' codep=0x4cc5 parp=0x4cc5
// ====================================================

// ====================================================
// 0x4cc4: WORD 'UNK_0x4cc6' codep=0x5b4c parp=0x4cc6
// ====================================================
// 0x4cc6: db 0x59 0x8c 0xd8 0x8e 0xd9 0xff 0x37 0x33 0xc9 'Y     73 '
  // 0x4ccf: mov    cl,[bx+02]

// ====================================================
// 0x4cd0: WORD 'UNK_0x4cd2' codep=0x024f parp=0x4cd2
// ====================================================
// 0x4cd2: push   cx
// 0x4cd3: mov    ds,ax
// 0x4cd5: lodsw

// ====================================================
// 0x4cd6: WORD 'UNK_0x4cd8' codep=0xd88b parp=0x4cd8
// ====================================================
// 0x4cd8: db 0xff 0x27 ' ''
  
// ====================================================
// 0x4cda: WORD '<C!>' codep=0x0c60 parp=0x4ce3
// ====================================================

// ====================================================
// 0x4ce3: WORD '<!>' codep=0x0be1 parp=0x4ceb
// ====================================================

// ====================================================
// 0x4ceb: WORD '<1.5!>' codep=0x4a9c parp=0x4cf6
// ====================================================

// ====================================================
// 0x4cf6: WORD '<+!>' codep=0x0f85 parp=0x4cff
// ====================================================

// ====================================================
// 0x4cff: WORD '<D!>' codep=0x0c24 parp=0x4d08
// ====================================================

// ====================================================
// 0x4d08: WORD '<OFF>' codep=0x3af8 parp=0x4d12
// ====================================================
// 0x4d12: db 0x72 0x49 'rI'
  
// ====================================================
// 0x4d14: WORD '<ON>' codep=0x3af8 parp=0x4d1d
// ====================================================
// 0x4d1d: db 0x5f 0x49 '_I'
  
// ====================================================
// 0x4d1f: WORD '<BLOCK>' codep=0x3af8 parp=0x4d2b
// ====================================================
// 0x4d2b: db 0x5d 0x38 ']8'
  
// ====================================================
// 0x4d2d: WORD 'SPHEREW' codep=0x1d29 parp=0x4d39
// ====================================================
// 0x4d39: db 0x50 0x20 'P '
  
// ====================================================
// 0x4d3b: WORD 'SIGNEXT' codep=0x1d29 parp=0x4d47
// ====================================================
// 0x4d47: db 0x44 0x20 'D '
  
// ====================================================
// 0x4d49: WORD 'UNK_0x4d4b' codep=0x1d29 parp=0x4d4b
// ====================================================

// ====================================================
// 0x4d4b: WORD 'UNK_0x4d4d' codep=0x203a parp=0x4d4d
// ====================================================

// ====================================================
// 0x4d4d: WORD 'UNK_0x4d4f' codep=0x1d29 parp=0x4d4f
// ====================================================
// 0x4d4f: db 0x3a 0x20 ': '
  
// ====================================================
// 0x4d51: WORD 'UNK_0x4d53' codep=0x1d29 parp=0x4d53
// ====================================================

// ====================================================
// 0x4d53: WORD 'UNK_0x4d55' codep=0x203a parp=0x4d55
// ====================================================

// ====================================================
// 0x4d54: WORD 'UNK_0x4d56' codep=0x3d20 parp=0x4d56
// ====================================================

// ====================================================
// 0x4d55: WORD ''ARRAY' codep=0x1d29 parp=0x4d60
// ====================================================
// 0x4d60: db 0x82 0x6a ' j'
  
// ====================================================
// 0x4d62: WORD 'ARRAYSE' codep=0x224c parp=0x4d6e
// ====================================================

void ARRAYSE()
{
  pp_'ARRAY @ Push(cc_6); +@();
  
}


// ====================================================
// 0x4d78: WORD '#BYTES' codep=0x224c parp=0x4d83
// ====================================================

void #BYTES()
{
  pp_'ARRAY @ Push(cc_4); +@();
  
}


// ====================================================
// 0x4d8d: WORD '#COLZ' codep=0x224c parp=0x4d97
// ====================================================

void #COLZ()
{
  pp_'ARRAY @ @ 
}


// ====================================================
// 0x4d9f: WORD '#ROWZ' codep=0x224c parp=0x4da9
// ====================================================

void #ROWZ()
{
  pp_'ARRAY @ 2+ @ 
}


// ====================================================
// 0x4db3: WORD 'ACELLAD' codep=0x224c parp=0x4dbf
// ====================================================

void ACELLAD()
{
  pp_'ARRAY @ pp_UNK_0x4d4b @EXECUTE 
}

// 0x4dc9: db 0xcb 0x4d 0x5b 0x83 0xc3 0x06 0x8b 0x07 0x83 0xeb 0x02 0x8b 0x0f 0x8b 0xd9 0x59 0xd1 0xe1 0x03 0xd9 0x1e 0x8e 0xd8 0x8b 0x0f 0x1f 0x5a 0x03 0xca 0x50 0x51 0xad 0x8b 0xd8 0xff 0x27 ' M[            Y          Z  PQ    ''
  
// ====================================================
// 0x4ded: WORD 'A!' codep=0x224c parp=0x4df4
// ====================================================

void A!()
{
  pp_UNK_0x4d4f @EXECUTE 
}


// ====================================================
// 0x4dfa: WORD 'A@' codep=0x224c parp=0x4e01
// ====================================================

void A@()
{
  pp_UNK_0x4d53 @EXECUTE 
}


// ====================================================
// 0x4e07: WORD '!OFFSET' codep=0x4e13 parp=0x4e13
// ====================================================
// 0x4e13: pop    bx
// 0x4e14: push   si
// 0x4e15: push   di
// 0x4e16: push   bp
// 0x4e17: push   es
// 0x4e18: mov    si,[bx]
// 0x4e1a: mov    cx,[bx+02]
// 0x4e1d: mov    bp,[bx+04]
// 0x4e20: push   word ptr [bx+06]
// 0x4e23: pop    es
// 0x4e24: mov    di,cx
// 0x4e26: shl    di,1
// 0x4e28: add    di,bp
// 0x4e2a: std    
// 0x4e2b: mov    ax,si
// 0x4e2d: mul    cx
// 0x4e2f: stosw
// 0x4e30: loop   4E2B
// 0x4e32: xor    ax,ax
// 0x4e34: stosw
// 0x4e35: cld    
// 0x4e36: pop    es
// 0x4e37: pop    bp
// 0x4e38: pop    di
// 0x4e39: pop    si
// 0x4e3a: lodsw
// 0x4e3b: mov    bx,ax
// 0x4e3d: jmp    word ptr [bx]

// ====================================================
// 0x4e3f: WORD 'ARRAY' codep=0x224c parp=0x4e49
// ====================================================

// ====================================================
// 0x4e41: WORD 'UNK_0x4e43' codep=0x4185 parp=0x4e43
// ====================================================

void ARRAY()
{
  CREATE HERE();
  >R >R SWAP ,();
  
// ====================================================
// 0x4e55: WORD 'UNK_0x4e57' codep=0x1f93 parp=0x4e57
// ====================================================
,();
  I' @ I' 2+ @ * ,();
  R> ,();
  R> DROP 
  (;CODE)();
// inlined assembler code
// 0x4e6f: call   1649
// 0x4e72: db 0xc9 0x4d 0x90 0x16 ' M  '
  
// ====================================================
// 0x4e76: WORD 'SETLARR' codep=0x224c parp=0x4e82
// ====================================================

void SETLARR()
{
  pp_'ARRAY ! Push(0x4dcb); pp_UNK_0x4d4b ! Push(0x2ee5); pp_UNK_0x4d4f ! pp_SIGNEXT @ 
  if (Pop() == 0) goto label203;
  Push(0x4aee); 
  goto label204;
  
  label203:
  Push(0x2ecd); 
  label204:
  pp_UNK_0x4d53 ! 
}


// ====================================================
// 0x4eb0: WORD 'XLL' codep=0x1d29 parp=0x4eb8
// ====================================================
// 0x4eb8: db 0x41 0x44 'AD'
  
// ====================================================
// 0x4eba: WORD 'YLL' codep=0x1d29 parp=0x4ec2
// ====================================================
// 0x4ec2: db 0x72 0x65 're'
  
// ====================================================
// 0x4ec4: WORD 'XUR' codep=0x1d29 parp=0x4ecc
// ====================================================
// 0x4ecc: db 0x72 0x65 're'
  
// ====================================================
// 0x4ece: WORD 'YUR' codep=0x1d29 parp=0x4ed6
// ====================================================
// 0x4ed6: db 0x72 0x65 're'
  
// ====================================================
// 0x4ed8: WORD 'FULLARR' codep=0x224c parp=0x4ee4
// ====================================================

void FULLARR()
{
  Push(0); Push(0); #COLZ();
  1- #ROWZ();
  1- 
}


// ====================================================
// 0x4ef2: WORD 'SETREGI' codep=0x224c parp=0x4efe
// ====================================================

void SETREGI()
{
  pp_YUR ! pp_XUR ! pp_YLL ! pp_XLL ! 
}


// ====================================================
// 0x4f10: WORD 'FILLREG' codep=0x224c parp=0x4f1c
// ====================================================

void FILLREG()
{
  pp_YUR @ 1+ pp_YLL @ 
  do // (DO)
  {
  pp_XUR @ 1+ pp_XLL @ 
  do // (DO)
  {
  DUP I J ACELLAD();
  A!();
  
  } while(...); // (LOOP) 0xfff4
  
  } while(...); // (LOOP) 0xffe4
  
// ====================================================
// 0x4f43: WORD 'UNK_0x4f45' codep=0xe415 parp=0x4f45
// ====================================================
DROP 
}


// ====================================================
// 0x4f4a: WORD 'FONT#' codep=0x1d29 parp=0x4f54
// ====================================================

// ====================================================
// 0x4f4d: WORD 'UNK_0x4f4f' codep=0x4f46 parp=0x4f4f
// ====================================================

// ====================================================
// 0x4f54: WORD 'UNK_0x4f56' codep=0x0000 parp=0x4f56
// ====================================================

// ====================================================
// 0x4f56: WORD 'TANDY' codep=0x1d29 parp=0x4f60
// ====================================================
// 0x4f60: db 0x10 0x00 '  '
  
// ====================================================
// 0x4f62: WORD 'COLORT' codep=0x1d29 parp=0x4f6d
// ====================================================
// 0x4f6d: db 0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09 0x0a 0x0b 0x0c 0x0d 0x0e 0x0f 0x00 '                 '
  
// ====================================================
// 0x4f7e: WORD 'I>C' codep=0x224c parp=0x4f86
// ====================================================

void I>C()
{
  pp_COLORT + C@ 
}

// 0x4f8e: db 0x4c 0x22 0x4f 0x06 0xaf 0x21 0xfa 0x1b 'L"O  !  '
  // 0x4f96: call   1649
// 0x4f99: db 0x92 0x0c 0x84 0x4f 0x90 0x16 '   O  '
  
// ====================================================
// 0x4f9f: WORD 'BLACK' codep=0x4f96 parp=0x4fa9
// ====================================================
// 0x4fa9: db 0x00 ' '
  
// ====================================================
// 0x4faa: WORD 'DK-BLUE' codep=0x4f96 parp=0x4fb6
// ====================================================
// 0x4fb6: db 0x01 ' '
  
// ====================================================
// 0x4fb7: WORD 'DK-GREE' codep=0x4f96 parp=0x4fc3
// ====================================================
// 0x4fc3: db 0x02 ' '
  
// ====================================================
// 0x4fc4: WORD 'GREEN' codep=0x4f96 parp=0x4fce
// ====================================================
// 0x4fce: db 0x03 ' '
  
// ====================================================
// 0x4fcf: WORD 'RED' codep=0x4f96 parp=0x4fd7
// ====================================================
// 0x4fd7: db 0x04 ' '
  
// ====================================================
// 0x4fd8: WORD 'VIOLET' codep=0x4f96 parp=0x4fe3
// ====================================================
// 0x4fe3: db 0x05 ' '
  
// ====================================================
// 0x4fe4: WORD 'BROWN' codep=0x4f96 parp=0x4fee
// ====================================================
// 0x4fee: db 0x06 ' '
  
// ====================================================
// 0x4fef: WORD 'GREY1' codep=0x4f96 parp=0x4ff9
// ====================================================
// 0x4ff9: db 0x07 ' '
  
// ====================================================
// 0x4ffa: WORD 'GREY2' codep=0x4f96 parp=0x5004
// ====================================================

// ====================================================
// 0x5000: WORD 'UNK_0x5002' codep=0xb259 parp=0x5002
// ====================================================
// 0x5004: db 0x08 ' '
  
// ====================================================
// 0x5005: WORD 'BLUE' codep=0x4f96 parp=0x500e
// ====================================================
// 0x500e: db 0x09 ' '
  
// ====================================================
// 0x500f: WORD 'LT-GREE' codep=0x4f96 parp=0x501b
// ====================================================

// ====================================================
// 0x5013: WORD 'UNK_0x5015' codep=0x2d54 parp=0x5015
// ====================================================

// ====================================================
// 0x5015: WORD 'UNK_0x5017' codep=0x5247 parp=0x5017
// ====================================================
// 0x501b: db 0x0a ' '
  
// ====================================================
// 0x501c: WORD 'LT-BLUE' codep=0x4f96 parp=0x5028
// ====================================================
// 0x5028: db 0x0b ' '
  
// ====================================================
// 0x5029: WORD 'PINK' codep=0x4f96 parp=0x5032
// ====================================================
// 0x5032: db 0x0c ' '
  
// ====================================================
// 0x5033: WORD 'ORANGE' codep=0x4f96 parp=0x503e
// ====================================================
// 0x503e: db 0x0d ' '
  
// ====================================================
// 0x503f: WORD 'YELLOW' codep=0x4f96 parp=0x504a
// ====================================================
// 0x504a: db 0x0e ' '
  
// ====================================================
// 0x504b: WORD 'WHITE' codep=0x4f96 parp=0x5055
// ====================================================

// ====================================================
// 0x5050: WORD 'UNK_0x5052' codep=0x5449 parp=0x5052
// ====================================================
// 0x5055: db 0x0f ' '
  
// ====================================================
// 0x5056: WORD '?NID' codep=0x1d29 parp=0x505f
// ====================================================
// 0x505f: db 0x5d 0x02 '] '
  
// ====================================================
// 0x5061: WORD 'BMAP' codep=0x1d29 parp=0x506a
// ====================================================
// 0x506a: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '              '
  
// ====================================================
// 0x5078: WORD 'UNK_0x507a' codep=0x224c parp=0x507a
// ====================================================

void UNK_0x507a()
{
  pp_BMAP + 
}


// ====================================================
// 0x5080: WORD 'BMOFF' codep=0x224c parp=0x508a
// ====================================================

void BMOFF()
{
  Push(0); UNK_0x507a();
  
}


// ====================================================
// 0x5090: WORD 'BMSEG' codep=0x224c parp=0x509a
// ====================================================

void BMSEG()
{
  Push(2); UNK_0x507a();
  
}


// ====================================================
// 0x50a0: WORD 'BMWIDE' codep=0x224c parp=0x50ab
// ====================================================

void BMWIDE()
{
  Push(cc_4); UNK_0x507a();
  
}


// ====================================================
// 0x50b1: WORD 'BMBYTES' codep=0x224c parp=0x50bd
// ====================================================

void BMBYTES()
{
  Push(0x000a); UNK_0x507a();
  
}


// ====================================================
// 0x50c5: WORD 'BMHIGH' codep=0x224c parp=0x50d0
// ====================================================

void BMHIGH()
{
  Push(0x000b); UNK_0x507a();
  
}


// ====================================================
// 0x50d8: WORD 'BMPAL' codep=0x224c parp=0x50e2
// ====================================================

void BMPAL()
{
  Push(0x000d); UNK_0x507a();
  
}


// ====================================================
// 0x50ea: WORD 'IHEADLE' codep=0x2214 parp=0x50f6
// ====================================================
// 0x50f6: db 0x0b 0x00 '  '
  
// ====================================================
// 0x50f8: WORD 'UNK_0x50fa' codep=0x2214 parp=0x50fa
// ====================================================
// 0x50fa: db 0x8a 0x65 ' e'
  
// ====================================================
// 0x50fc: WORD 'UNK_0x50fe' codep=0x2214 parp=0x50fe
// ====================================================
// 0x50fe: db 0xd1 0x65 ' e'
  
// ====================================================
// 0x5100: WORD 'UNK_0x5102' codep=0x2214 parp=0x5102
// ====================================================
// 0x5102: db 0x60 0xf5 '` '
  
// ====================================================
// 0x5104: WORD '*MAPSCA' codep=0x2214 parp=0x5110
// ====================================================
// 0x5110: db 0x08 0x00 '  '
  
// ====================================================
// 0x5112: WORD 'SIGBLK' codep=0x2214 parp=0x511d
// ====================================================
// 0x511d: db 0x03 0x00 '  '
  
// ====================================================
// 0x511f: WORD 'ALOVSA' codep=0x2214 parp=0x512a
// ====================================================
// 0x512a: db 0x00 0x00 '  '
  
// ====================================================
// 0x512c: WORD 'AHIVSA' codep=0x2214 parp=0x5137
// ====================================================
// 0x5137: db 0x7f 0x3e '>'
  
// ====================================================
// 0x5139: WORD 'BLOVSA' codep=0x2214 parp=0x5144
// ====================================================
// 0x5144: db 0x80 0x3e ' >'
  
// ====================================================
// 0x5146: WORD 'BHIVSA' codep=0x2214 parp=0x5151
// ====================================================
// 0x5151: db 0xff ' '
  // 0x5152: xchg   ax,si

// ====================================================
// 0x5153: WORD ''OVBACK' codep=0x2214 parp=0x515f
// ====================================================
// 0x515f: db 0x84 0xd2 '  '
  
// ====================================================
// 0x5161: WORD 'MUSSEG' codep=0x2214 parp=0x516c
// ====================================================
// 0x516c: db 0xc8 0x84 '  '
  
// ====================================================
// 0x516e: WORD 'WIN' codep=0x1d29 parp=0x5176
// ====================================================
// 0x5176: db 0x00 0x00 '  '
  
// ====================================================
// 0x5178: WORD '?FIRED-' codep=0x2214 parp=0x5184
// ====================================================
// 0x5184: db 0x00 0x00 '  '
  
// ====================================================
// 0x5186: WORD '?A-SHIE' codep=0x2214 parp=0x5192
// ====================================================
// 0x5192: db 0x00 0x00 '  '
  
// ====================================================
// 0x5194: WORD '?A-WEAP' codep=0x2214 parp=0x51a0
// ====================================================
// 0x51a0: db 0x00 0x00 '  '
  
// ====================================================
// 0x51a2: WORD '16K' codep=0x2214 parp=0x51aa
// ====================================================
// 0x51aa: db 0x00 0x40 ' @'
  
// ====================================================
// 0x51ac: WORD 'DBUF-SI' codep=0x3b74 parp=0x51b8
// ====================================================
// 0x51b8: db 0x01 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x51bc: WORD 'TRUE' codep=0x2214 parp=0x51c5
// ====================================================
// 0x51c5: db 0x01 0x00 '  '
  
// ====================================================
// 0x51c7: WORD 'FALSE' codep=0x2214 parp=0x51d1
// ====================================================
// 0x51d1: db 0x00 0x00 '  '
  
// ====================================================
// 0x51d3: WORD '?UF' codep=0x1d29 parp=0x51db
// ====================================================
// 0x51db: db 0x00 0x00 '  '
  
// ====================================================
// 0x51dd: WORD '?AF' codep=0x1d29 parp=0x51e5
// ====================================================
// 0x51e5: db 0x00 0x00 '  '
  
// ====================================================
// 0x51e7: WORD '#SHOTS' codep=0x1d29 parp=0x51f2
// ====================================================
// 0x51f2: db 0x75 0x02 'u '
  
// ====================================================
// 0x51f4: WORD ''ASYS' codep=0x1d29 parp=0x51fe
// ====================================================
// 0x51fe: db 0xda 0xca '  '
  
// ====================================================
// 0x5200: WORD 'P/B' codep=0x1d29 parp=0x5208
// ====================================================
// 0x5208: db 0x02 0x00 '  '
  
// ====================================================
// 0x520a: WORD ''BOSS' codep=0x1d29 parp=0x5214
// ====================================================
// 0x5214: db 0xb8 0xd5 '  '
  
// ====================================================
// 0x5216: WORD '%TALK' codep=0x1d29 parp=0x5220
// ====================================================
// 0x5220: db 0xe8 0x29 ' )'
  
// ====================================================
// 0x5222: WORD 'NULL-IC' codep=0x2214 parp=0x522e
// ====================================================
// 0x522e: db 0x32 0x00 '2 '
  
// ====================================================
// 0x5230: WORD 'SYS-ICO' codep=0x2214 parp=0x523c
// ====================================================
// 0x523c: db 0xfd 0x00 '  '
  
// ====================================================
// 0x523e: WORD 'INVIS-I' codep=0x2214 parp=0x524a
// ====================================================

// ====================================================
// 0x5241: WORD 'UNK_0x5243' codep=0x4e49 parp=0x5243
// ====================================================

// ====================================================
// 0x5244: WORD 'UNK_0x5246' codep=0x5349 parp=0x5246
// ====================================================
// 0x524a: db 0xfe 0x00 '  '
  
// ====================================================
// 0x524c: WORD 'FLUX-IC' codep=0x2214 parp=0x5258
// ====================================================
// 0x5258: db 0xff 0x00 '  '
  
// ====================================================
// 0x525a: WORD 'DEAD-IC' codep=0x2214 parp=0x5266
// ====================================================
// 0x5266: db 0x02 0x00 '  '
  
// ====================================================
// 0x5268: WORD 'DEFAULT' codep=0x2214 parp=0x5274
// ====================================================
// 0x5274: db 0x01 0x00 '  '
  
// ====================================================
// 0x5276: WORD 'TEXTC/L' codep=0x2214 parp=0x5282
// ====================================================
// 0x5282: db 0x26 0x00 '& '
  
// ====================================================
// 0x5284: WORD 'UNK_0x5286' codep=0x2214 parp=0x5286
// ====================================================
// 0x5286: db 0xd0 0x02 '  '
  
// ====================================================
// 0x5288: WORD 'FUEL/SE' codep=0x2214 parp=0x5294
// ====================================================
// 0x5294: db 0x05 0x00 '  '
  
// ====================================================
// 0x5296: WORD 'POLYSEG' codep=0x2214 parp=0x52a2
// ====================================================
// 0x52a2: db 0x43 0x9e 'C '
  
// ====================================================
// 0x52a4: WORD ''ANSYS' codep=0x2214 parp=0x52af
// ====================================================
// 0x52af: db 0x8a 0xd3 '  '
  
// ====================================================
// 0x52b1: WORD '?CALLED' codep=0x2214 parp=0x52bd
// ====================================================
// 0x52bd: db 0x00 0x00 '  '
  
// ====================================================
// 0x52bf: WORD '0.' codep=0x3b74 parp=0x52c6
// ====================================================
// 0x52c6: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x52ca: WORD 'VANEWSP' codep=0x3b74 parp=0x52d6
// ====================================================
// 0x52d6: db 0x00 0x00 0x00 0x10 '    '
  
// ====================================================
// 0x52da: WORD 'IROOT' codep=0x3b74 parp=0x52e4
// ====================================================
// 0x52e4: db 0x00 0x00 0x06 0x10 '    '
  
// ====================================================
// 0x52e8: WORD 'INACTIV' codep=0x3b74 parp=0x52f4
// ====================================================
// 0x52f4: db 0x00 0x00 0x32 0x10 '  2 '
  
// ====================================================
// 0x52f8: WORD 'FRAGMEN' codep=0x3b74 parp=0x5304
// ====================================================
// 0x5304: db 0x00 0x00 0x27 0x10 '  ' '
  
// ====================================================
// 0x5308: WORD '*SECS' codep=0x3b74 parp=0x5312
// ====================================================

// ====================================================
// 0x530a: WORD 'UNK_0x530c' codep=0x2a85 parp=0x530c
// ====================================================
// 0x5312: db 0x00 0x00 0x0e 0x11 '    '
  
// ====================================================
// 0x5316: WORD '*ASSIGN' codep=0x3b74 parp=0x5322
// ====================================================
// 0x5322: db 0x02 0x00 0x25 0x2b '  %+'
  
// ====================================================
// 0x5326: WORD '*SHIP' codep=0x3b74 parp=0x5330
// ====================================================
// 0x5330: db 0x02 0x00 0x7c 0x2b '  |+'
  
// ====================================================
// 0x5334: WORD '*ASYS' codep=0x3b74 parp=0x533e
// ====================================================
// 0x533e: db 0x01 0x00 0xd1 '   '
  
// ====================================================
// 0x5341: WORD 'UNK_0x5343' codep=0x36bf parp=0x5343
// ====================================================

// ====================================================
// 0x5342: WORD '*ARTH' codep=0x3b74 parp=0x534c
// ====================================================
// 0x534c: db 0x01 0x00 0xe5 0xbf '    '
  
// ====================================================
// 0x5350: WORD '*ARREST' codep=0x3b74 parp=0x535c
// ====================================================
// 0x535c: db 0x02 0x00 0x66 0x27 '  f''
  
// ====================================================
// 0x5360: WORD '*HL' codep=0x3b74 parp=0x5368
// ====================================================
// 0x5368: db 0x01 0x00 0xa0 0xd5 '    '
  
// ====================================================
// 0x536c: WORD '*LH' codep=0x3b74 parp=0x5374
// ====================================================
// 0x5374: db 0x01 0x00 0x9f 0xd9 '    '
  
// ====================================================
// 0x5378: WORD '*GD' codep=0x3b74 parp=0x5380
// ====================================================
// 0x5380: db 0x01 0x00 0x2a 0xd0 '  * '
  
// ====================================================
// 0x5384: WORD '*4SALE' codep=0x3b74 parp=0x538f
// ====================================================

// ====================================================
// 0x5387: WORD 'UNK_0x5389' codep=0x342a parp=0x5389
// ====================================================
// 0x538f: db 0x00 0x00 0x3d 0x10 '  = '
  
// ====================================================
// 0x5393: WORD '*2BUY' codep=0x3b74 parp=0x539d
// ====================================================
// 0x539d: db 0x00 0x00 0x50 0x10 '  P '
  
// ====================================================
// 0x53a1: WORD 'MPS' codep=0x2214 parp=0x53a9
// ====================================================
// 0x53a9: db 0x01 0x00 '  '
  
// ====================================================
// 0x53ab: WORD 'BOX-IAD' codep=0x3b74 parp=0x53b7
// ====================================================
// 0x53b7: db 0x00 0x00 0x76 0x10 '  v '
  
// ====================================================
// 0x53bb: WORD '*DICT' codep=0x3b74 parp=0x53c5
// ====================================================
// 0x53c5: db 0x00 0x00 0x60 0x97 '  ` '
  
// ====================================================
// 0x53c9: WORD 'CLIP-TA' codep=0x1d29 parp=0x53d5
// ====================================================
// 0x53d5: db 0x08 0x08 0x01 0xc7 0x00 0x02 0x02 0x00 0x9f 0x00 0x04 0x04 0x01 0x00 0x00 0x01 0x01 0x00 0x00 0x00 '                    '
  
// ====================================================
// 0x53e9: WORD 'TABLE' codep=0x224c parp=0x53f3
// ====================================================

void TABLE()
{
  CREATE 
  (;CODE)();
// inlined assembler code
// 0x53f7: call   1649
// 0x53fa: db 0xf2 0x0e 0x05 0x10 0x72 0x0f 0xae 0x0b 0x90 0x16 '    r     '
  
// ====================================================
// 0x5404: WORD 'FONTSEG' codep=0x1d29 parp=0x5410
// ====================================================
// 0x5410: db 0x37 0x7f '7'
  
// ====================================================
// 0x5412: WORD 'REMSEG' codep=0x1d29 parp=0x541d
// ====================================================
// 0x541d: db 0x3e 0x95 '> '
  
// ====================================================
// 0x541f: WORD 'XBUF-SE' codep=0x1d29 parp=0x542b
// ====================================================
// 0x542b: db 0x37 0x6f '7o'
  
// ====================================================
// 0x542d: WORD 'DICT' codep=0x1d29 parp=0x5436
// ====================================================
// 0x5436: db 0xfa 0x84 '  '
  
// ====================================================
// 0x5438: WORD '?ALL' codep=0x1d29 parp=0x5441
// ====================================================
// 0x5441: db 0xff 0x00 '  '
  
// ====================================================
// 0x5443: WORD '?YOK' codep=0x1d29 parp=0x544c
// ====================================================

// ====================================================
// 0x5445: WORD 'UNK_0x5447' codep=0x3f84 parp=0x5447
// ====================================================
// 0x544c: db 0xff 0x00 '  '
  
// ====================================================
// 0x544e: WORD 'HUB' codep=0x1d29 parp=0x5456
// ====================================================

// ====================================================
// 0x5453: WORD 'UNK_0x5455' codep=0x29c2 parp=0x5455
// ====================================================
// 0x5456: db 0x01 0x00 '  '
  
// ====================================================
// 0x5458: WORD 'PIC#' codep=0x1d29 parp=0x5461
// ====================================================
// 0x5461: db 0x5d 0x5e ']^'
  
// ====================================================
// 0x5463: WORD '1LOGO' codep=0x1d29 parp=0x546d
// ====================================================
// 0x546d: db 0x1f 0x3f 0xdf 0xee 0x0c 0x33 0x0c 0x03 0xb7 0xcf 0x8f 0x7f 0x00 0xc0 ' ?   3       '
  
// ====================================================
// 0x547b: WORD 'UNK_0x547d' codep=0x1d29 parp=0x547d
// ====================================================
// 0x547d: db 0xc3 0x7e 0xa5 0xbd 0xa5 0xa5 0xc3 0xbd 0x00 0x7e ' ~       ~'
  
// ====================================================
// 0x5487: WORD 'UNK_0x5489' codep=0x1d29 parp=0x5489
// ====================================================
// 0x5489: db 0x18 0x7a 0x86 0x61 0x80 0x17 ' z a  '
  
// ====================================================
// 0x548f: WORD 'UNK_0x5491' codep=0x1d29 parp=0x5491
// ====================================================
// 0x5491: db 0x00 0xfc '  '
  
// ====================================================
// 0x5493: WORD ''XCOMM' codep=0x1d29 parp=0x549e
// ====================================================
// 0x549e: db 0x32 0xc3 '2 '
  
// ====================================================
// 0x54a0: WORD 'TCLR' codep=0x1d29 parp=0x54a9
// ====================================================
// 0x54a9: db 0x0f 0x00 '  '
  
// ====================================================
// 0x54ab: WORD ''TRAK' codep=0x1d29 parp=0x54b5
// ====================================================
// 0x54b5: db 0x56 0xca 'V '
  
// ====================================================
// 0x54b7: WORD 'TRAK-HR' codep=0x1d29 parp=0x54c3
// ====================================================
// 0x54c3: db 0x4e 0x20 'N '
  
// ====================================================
// 0x54c5: WORD 'A-STREN' codep=0x1d29 parp=0x54d1
// ====================================================
// 0x54d1: db 0x48 0x20 'H '
  
// ====================================================
// 0x54d3: WORD 'DIRBLK' codep=0x1d29 parp=0x54de
// ====================================================
// 0x54de: db 0x00 0x00 '  '
  
// ====================================================
// 0x54e0: WORD 'TIMESTA' codep=0x1d29 parp=0x54ec
// ====================================================
// 0x54ec: db 0x20 0x01 '  '
  
// ====================================================
// 0x54ee: WORD 'RELAXTI' codep=0x1d29 parp=0x54fa
// ====================================================
// 0x54fa: db 0x20 0x74 ' t'
  
// ====================================================
// 0x54fc: WORD '):-,601' codep=0x1d29 parp=0x5508
// ====================================================
// 0x5508: db 0x0a 0x05 0x01 0x00 '    '
  
// ====================================================
// 0x550c: WORD 'ICONFON' codep=0x1d29 parp=0x5518
// ====================================================
// 0x5518: db 0x01 0x00 '  '
  
// ====================================================
// 0x551a: WORD 'LFRAME' codep=0x1d29 parp=0x5525
// ====================================================
// 0x5525: db 0x53 0x51 'SQ'
  
// ====================================================
// 0x5527: WORD '?AUTO' codep=0x1d29 parp=0x5531
// ====================================================
// 0x5531: db 0x5d 0xdf '] '
  
// ====================================================
// 0x5533: WORD '?CRITIC' codep=0x1d29 parp=0x553f
// ====================================================
// 0x553f: db 0x20 0x81 '  '
  
// ====================================================
// 0x5541: WORD 'P-POSTU' codep=0x1d29 parp=0x554d
// ====================================================
// 0x554d: db 0x20 0x1e '  '
  
// ====================================================
// 0x554f: WORD 'UNK_0x5551' codep=0x5529 parp=0x5551
// ====================================================
// 0x555b: db 0x14 0x00 '  '
  
// ====================================================
// 0x555d: WORD ''INJURE' codep=0x1d29 parp=0x5569
// ====================================================
// 0x5569: db 0x68 0xce 'h '
  
// ====================================================
// 0x556b: WORD 'P-COLOR' codep=0x1d29 parp=0x5577
// ====================================================
// 0x5577: db 0x41 0x4e 0x05 'AN '
  
// ====================================================
// 0x557a: WORD 'P-PHRAS' codep=0x1d29 parp=0x5586
// ====================================================
// 0x5586: db 0x31 0x35 0x05 '15 '
  
// ====================================================
// 0x5589: WORD 'P-CARP' codep=0x1d29 parp=0x5594
// ====================================================
// 0x5594: db 0x2e 0x8a 0x05 '.  '
  
// ====================================================
// 0x5597: WORD 'O-COLOR' codep=0x1d29 parp=0x55a3
// ====================================================
// 0x55a3: db 0xeb 0x0e 0x05 '   '
  
// ====================================================
// 0x55a6: WORD 'HYDRO' codep=0x1d29 parp=0x55b0
// ====================================================
// 0x55b0: db 0x5d 0x40 ']@'
  
// ====================================================
// 0x55b2: WORD 'ATMO' codep=0x1d29 parp=0x55bb
// ====================================================
// 0x55bb: db 0x5d 0x00 '] '
  
// ====================================================
// 0x55bd: WORD 'LCOLOR' codep=0x1d29 parp=0x55c8
// ====================================================
// 0x55c8: db 0x8e 0xde '  '
  
// ====================================================
// 0x55ca: WORD '?TV' codep=0x1d29 parp=0x55d2
// ====================================================
// 0x55d2: db 0x01 0x00 '  '
  
// ====================================================
// 0x55d4: WORD 'OLDHR' codep=0x1d29 parp=0x55de
// ====================================================
// 0x55de: db 0x36 0x75 '6u'
  
// ====================================================
// 0x55e0: WORD 'AVCNT' codep=0x1d29 parp=0x55ea
// ====================================================
// 0x55ea: db 0x5d 0x2e '].'
  
// ====================================================
// 0x55ec: WORD 'UNK_0x55ee' codep=0x1d29 parp=0x55ee
// ====================================================
// 0x55ee: db 0x01 0x00 '  '
  
// ====================================================
// 0x55f0: WORD '?BOMB' codep=0x1d29 parp=0x55fa
// ====================================================
// 0x55fa: db 0x00 0x00 0x00 '   '
  
// ====================================================
// 0x55fd: WORD 'UNK_0x55ff' codep=0x1d29 parp=0x55ff
// ====================================================
// 0x55ff: db 0x00 0x00 '  '
  
// ====================================================
// 0x5601: WORD 'UNK_0x5603' codep=0x1d29 parp=0x5603
// ====================================================
// 0x5603: db 0x00 0x00 '  '
  
// ====================================================
// 0x5605: WORD 'UNK_0x5607' codep=0x1d29 parp=0x5607
// ====================================================
// 0x5607: db 0xef 0xf9 '  '
  
// ====================================================
// 0x5609: WORD 'FILE#' codep=0x1d29 parp=0x5613
// ====================================================
// 0x5613: db 0x12 0x00 '  '
  
// ====================================================
// 0x5615: WORD 'RECORD#' codep=0x1d29 parp=0x5621
// ====================================================
// 0x5621: db 0x00 0x00 '  '
  
// ====================================================
// 0x5623: WORD 'UNK_0x5625' codep=0x1d29 parp=0x5625
// ====================================================
// 0x5625: db 0xd0 0xf7 '  '
  
// ====================================================
// 0x5627: WORD 'UNK_0x5629' codep=0x1d29 parp=0x5629
// ====================================================
// 0x5629: db 0xe0 0xfb '  '
  
// ====================================================
// 0x562b: WORD 'CXSP' codep=0x1d29 parp=0x5634
// ====================================================
// 0x5634: db 0x7e 0x65 '~e'
  
// ====================================================
// 0x5636: WORD 'UNK_0x5638' codep=0x1d29 parp=0x5638
// ====================================================
// 0x5638: db 0xd1 0x65 0x29 0x1d 0x3a 0x20 ' e) : '
  
// ====================================================
// 0x563e: WORD 'EDL' codep=0x1d29 parp=0x5646
// ====================================================
// 0x5646: db 0x00 0x74 ' t'
  
// ====================================================
// 0x5648: WORD 'A-POSTU' codep=0x1d29 parp=0x5654
// ====================================================
// 0x5654: db 0x20 0xa4 '  '
  
// ====================================================
// 0x5656: WORD 'UNK_0x5658' codep=0x1d29 parp=0x5658
// ====================================================
// 0x5658: db 0xc8 0x00 '  '
  
// ====================================================
// 0x565a: WORD 'P-RACES' codep=0x1d29 parp=0x5666
// ====================================================
// 0x5666: db 0x20 0x2d ' -'
  
// ====================================================
// 0x5668: WORD 'UNK_0x566a' codep=0x1d29 parp=0x566a
// ====================================================
// 0x566a: db 0x8c 0x93 '  '
  
// ====================================================
// 0x566c: WORD 'UNK_0x566e' codep=0x1d29 parp=0x566e
// ====================================================
// 0x566e: db 0x6d 0x93 'm '
  
// ====================================================
// 0x5670: WORD 'UNK_0x5672' codep=0x1d29 parp=0x5672
// ====================================================
// 0x5672: db 0xca 0x93 '  '
  
// ====================================================
// 0x5674: WORD 'UNK_0x5676' codep=0x1d29 parp=0x5676
// ====================================================
// 0x5676: db 0x08 0x94 0x29 0x1d 0x3a 0x20 '  ) : '
  
// ====================================================
// 0x567c: WORD ''THROW-' codep=0x1d29 parp=0x5688
// ====================================================
// 0x5688: db 0x6e 0x3a 'n:'
  
// ====================================================
// 0x568a: WORD ''MAP' codep=0x1d29 parp=0x5693
// ====================================================
// 0x5693: db 0x48 0x3a 'H:'
  
// ====================================================
// 0x5695: WORD ''TRAVER' codep=0x1d29 parp=0x56a1
// ====================================================
// 0x56a1: db 0xb3 0x7a ' z'
  
// ====================================================
// 0x56a3: WORD ''?EXIT' codep=0x1d29 parp=0x56ae
// ====================================================
// 0x56ae: db 0xec 0x7d ' }'
  
// ====================================================
// 0x56b0: WORD 'UNK_0x56b2' codep=0x1d29 parp=0x56b2
// ====================================================
// 0x56b2: db 0x3a 0x20 ': '
  
// ====================================================
// 0x56b4: WORD ''.FLUX-' codep=0x1d29 parp=0x56c0
// ====================================================
// 0x56c0: db 0xf6 0xe3 '  '
  
// ====================================================
// 0x56c2: WORD '?TD' codep=0x1d29 parp=0x56ca
// ====================================================
// 0x56ca: db 0x00 0x00 '  '
  
// ====================================================
// 0x56cc: WORD '?LANDED' codep=0x1d29 parp=0x56d8
// ====================================================
// 0x56d8: db 0x00 0x00 '  '
  
// ====================================================
// 0x56da: WORD 'UNK_0x56dc' codep=0x1d29 parp=0x56dc
// ====================================================
// 0x56dc: db 0xf0 0x01 '  '
  
// ====================================================
// 0x56de: WORD 'UNK_0x56e0' codep=0x1d29 parp=0x56e0
// ====================================================
// 0x56e0: db 0x00 0x00 '  '
  
// ====================================================
// 0x56e2: WORD 'UNK_0x56e4' codep=0x1d29 parp=0x56e4
// ====================================================
// 0x56e4: db 0x60 0x13 '` '
  
// ====================================================
// 0x56e6: WORD 'UNK_0x56e8' codep=0x1d29 parp=0x56e8
// ====================================================
// 0x56e8: db 0x00 0x00 '  '
  
// ====================================================
// 0x56ea: WORD 'UNK_0x56ec' codep=0x1d29 parp=0x56ec
// ====================================================
// 0x56ec: db 0x5a 0x0f 'Z '
  
// ====================================================
// 0x56ee: WORD 'UNK_0x56f0' codep=0x1d29 parp=0x56f0
// ====================================================
// 0x56f0: db 0x4d 0x12 'M '
  
// ====================================================
// 0x56f2: WORD 'UNK_0x56f4' codep=0x1d29 parp=0x56f4
// ====================================================
// 0x56f4: db 0x00 0x00 '  '
  
// ====================================================
// 0x56f6: WORD 'UNK_0x56f8' codep=0x1d29 parp=0x56f8
// ====================================================
// 0x56f8: db 0x0e 0x00 '  '
  
// ====================================================
// 0x56fa: WORD '-END' codep=0x1d29 parp=0x5703
// ====================================================
// 0x5703: db 0x04 0x00 '  '
  
// ====================================================
// 0x5705: WORD 'OV#' codep=0x1d29 parp=0x570d
// ====================================================
// 0x570d: db 0x00 0x00 '  '
  
// ====================================================
// 0x570f: WORD 'UNK_0x5711' codep=0x1d29 parp=0x5711
// ====================================================
// 0x5711: db 0x85 0x6f ' o'
  
// ====================================================
// 0x5713: WORD 'REPAIRT' codep=0x1d29 parp=0x571f
// ====================================================
// 0x571f: db 0xff 0xff '  '
  
// ====================================================
// 0x5721: WORD 'HBUF-SE' codep=0x1d29 parp=0x572d
// ====================================================
// 0x572d: db 0x37 0x6f '7o'
  
// ====================================================
// 0x572f: WORD 'DBUF-SE' codep=0x1d29 parp=0x573b
// ====================================================
// 0x573b: db 0x00 0xa0 '  '
  
// ====================================================
// 0x573d: WORD 'COLOR' codep=0x1d29 parp=0x5747
// ====================================================
// 0x5747: db 0x0f 0x00 '  '
  
// ====================================================
// 0x5749: WORD 'DCOLOR' codep=0x1d29 parp=0x5754
// ====================================================
// 0x5754: db 0x0f 0x00 '  '
  
// ====================================================
// 0x5756: WORD 'YTAB' codep=0x1d29 parp=0x575f
// ====================================================
// 0x575f: db 0x29 0x4c ')L'
  
// ====================================================
// 0x5761: WORD 'Y1' codep=0x1d29 parp=0x5768
// ====================================================
// 0x5768: db 0x5e 0x89 '^ '
  
// ====================================================
// 0x576a: WORD 'X1' codep=0x1d29 parp=0x5771
// ====================================================
// 0x5771: db 0x89 0x3e ' >'
  
// ====================================================
// 0x5773: WORD 'Y2' codep=0x1d29 parp=0x577a
// ====================================================
// 0x577a: db 0x5e 0x5e '^^'
  
// ====================================================
// 0x577c: WORD 'X2' codep=0x1d29 parp=0x5783
// ====================================================
// 0x5783: db 0xb2 0x08 '  '
  
// ====================================================
// 0x5785: WORD 'YTABL' codep=0x1d29 parp=0x578f
// ====================================================
// 0x578f: db 0xe8 0xc7 '  '
  
// ====================================================
// 0x5791: WORD 'BUF-SEG' codep=0x1d29 parp=0x579d
// ====================================================
// 0x579d: db 0x00 0xa0 '  '
  
// ====================================================
// 0x579f: WORD 'RETURN' codep=0x1d29 parp=0x57aa
// ====================================================
// 0x57aa: db 0x1e 0xb8 '  '
  
// ====================================================
// 0x57ac: WORD '?WIN' codep=0x1d29 parp=0x57b5
// ====================================================
// 0x57b5: db 0x00 0x00 '  '
  
// ====================================================
// 0x57b7: WORD '#IN' codep=0x1d29 parp=0x57bf
// ====================================================
// 0x57bf: db 0x04 0x00 '  '
  
// ====================================================
// 0x57c1: WORD '#OUT' codep=0x1d29 parp=0x57ca
// ====================================================
// 0x57ca: db 0x41 0x42 'AB'
  
// ====================================================
// 0x57cc: WORD 'VIN' codep=0x1d29 parp=0x57d4
// ====================================================
// 0x57d4: db 0x8b 0x68 ' h'
  
// ====================================================
// 0x57d6: WORD 'VOUT' codep=0x1d29 parp=0x57df
// ====================================================
// 0x57df: db 0xcd 0x68 ' h'
  
// ====================================================
// 0x57e1: WORD 'OIN' codep=0x1d29 parp=0x57e9
// ====================================================
// 0x57e9: db 0x0f 0x69 ' i'
  
// ====================================================
// 0x57eb: WORD 'OOUT' codep=0x1d29 parp=0x57f4
// ====================================================
// 0x57f4: db 0x51 0x69 'Qi'
  
// ====================================================
// 0x57f6: WORD 'IVPTR' codep=0x1d29 parp=0x5800
// ====================================================
// 0x5800: db 0x0d 0x3d ' ='
  
// ====================================================
// 0x5802: WORD 'OVPTR' codep=0x1d29 parp=0x580c
// ====================================================

// ====================================================
// 0x580b: WORD 'UNK_0x580d' codep=0xeb1d parp=0x580d
// ====================================================

// ====================================================
// 0x580d: WORD 'UNK_0x580f' codep=0xf806 parp=0x580f
// ====================================================

// ====================================================
// 0x580e: WORD 'ICPTR' codep=0x1d29 parp=0x5818
// ====================================================
// 0x5818: db 0x16 0x80 '  '
  
// ====================================================
// 0x581a: WORD 'OCPTR' codep=0x1d29 parp=0x5824
// ====================================================
// 0x5824: db 0xb8 0xff '  '
  
// ====================================================
// 0x5826: WORD 'FLIP' codep=0x1d29 parp=0x582f
// ====================================================
// 0x582f: db 0x83 0xfb '  '
  
// ====================================================
// 0x5831: WORD 'TACCPT' codep=0x1d29 parp=0x583c
// ====================================================
// 0x583c: db 0x06 0x0b '  '
  
// ====================================================
// 0x583e: WORD 'TRJCT' codep=0x1d29 parp=0x5848
// ====================================================

// ====================================================
// 0x5841: WORD 'UNK_0x5843' codep=0x5254 parp=0x5843
// ====================================================
// 0x5848: db 0x29 0x52 ')R'
  
// ====================================================
// 0x584a: WORD '?OPEN' codep=0x1d29 parp=0x5854
// ====================================================
// 0x5854: db 0x00 0x00 '  '
  
// ====================================================
// 0x5856: WORD '?EVAL' codep=0x1d29 parp=0x5860
// ====================================================
// 0x5860: db 0x00 0x00 '  '
  
// ====================================================
// 0x5862: WORD 'SX' codep=0x1d29 parp=0x5869
// ====================================================
// 0x5869: db 0x3c 0x00 '< '
  
// ====================================================
// 0x586b: WORD 'SY' codep=0x1d29 parp=0x5872
// ====================================================
// 0x5872: db 0xc2 0x00 '  '
  
// ====================================================
// 0x5874: WORD 'SO' codep=0x1d29 parp=0x587b
// ====================================================
// 0x587b: db 0x20 0x53 ' S'
  
// ====================================================
// 0x587d: WORD 'PX' codep=0x1d29 parp=0x5884
// ====================================================
// 0x5884: db 0x3c 0x00 '< '
  
// ====================================================
// 0x5886: WORD 'PY' codep=0x1d29 parp=0x588d
// ====================================================
// 0x588d: db 0xc6 0x00 '  '
  
// ====================================================
// 0x588f: WORD 'PO' codep=0x1d29 parp=0x5896
// ====================================================
// 0x5896: db 0x72 0x66 'rf'
  
// ====================================================
// 0x5898: WORD 'IX' codep=0x1d29 parp=0x589f
// ====================================================
// 0x589f: db 0x39 0x29 '9)'
  
// ====================================================
// 0x58a1: WORD 'IY' codep=0x1d29 parp=0x58a8
// ====================================================
// 0x58a8: db 0x1e 0x70 ' p'
  
// ====================================================
// 0x58aa: WORD 'IO' codep=0x1d29 parp=0x58b1
// ====================================================
// 0x58b1: db 0xff 0x74 ' t'
  
// ====================================================
// 0x58b3: WORD 'COMPARE' codep=0x1d29 parp=0x58bf
// ====================================================
// 0x58bf: db 0x4f 0x44 'OD'
  
// ====================================================
// 0x58c1: WORD 'X-INTER' codep=0x1d29 parp=0x58cd
// ====================================================
// 0x58cd: db 0x19 0x80 '  '
  
// ====================================================
// 0x58cf: WORD 'ILEFT' codep=0x1d29 parp=0x58d9
// ====================================================
// 0x58d9: db 0x00 0x00 '  '
  
// ====================================================
// 0x58db: WORD 'IRIGHT' codep=0x1d29 parp=0x58e6
// ====================================================
// 0x58e6: db 0x9f 0x00 '  '
  
// ====================================================
// 0x58e8: WORD 'IBELOW' codep=0x1d29 parp=0x58f3
// ====================================================
// 0x58f3: db 0x00 0x00 '  '
  
// ====================================================
// 0x58f5: WORD 'IABOVE' codep=0x1d29 parp=0x5900
// ====================================================
// 0x5900: db 0xc7 0x00 '  '
  
// ====================================================
// 0x5902: WORD ''FLY' codep=0x1d29 parp=0x590b
// ====================================================
// 0x590b: db 0x92 0xca '  '
  
// ====================================================
// 0x590d: WORD ''UNNEST' codep=0x1d29 parp=0x5919
// ====================================================
// 0x5919: db 0xfc 0xca '  '
  
// ====================================================
// 0x591b: WORD '?NEW' codep=0x1d29 parp=0x5924
// ====================================================
// 0x5924: db 0x00 0x00 '  '
  
// ====================================================
// 0x5926: WORD 'FORCED' codep=0x1d29 parp=0x5931
// ====================================================
// 0x5931: db 0x21 0x5a '!Z'
  
// ====================================================
// 0x5933: WORD '#VESS' codep=0x1d29 parp=0x593d
// ====================================================
// 0x593d: db 0x00 0x00 '  '
  
// ====================================================
// 0x593f: WORD 'CTCOLOR' codep=0x1d29 parp=0x594b
// ====================================================
// 0x594b: db 0x5a 0x5b 'Z['
  
// ====================================================
// 0x594d: WORD 'XSTART' codep=0x1d29 parp=0x5958
// ====================================================

// ====================================================
// 0x5953: WORD 'UNK_0x5955' codep=0x5241 parp=0x5955
// ====================================================
// 0x5958: db 0x60 0x00 '` '
  
// ====================================================
// 0x595a: WORD 'XEND' codep=0x1d29 parp=0x5963
// ====================================================
// 0x5963: db 0x79 0x00 'y '
  
// ====================================================
// 0x5965: WORD 'YLINE' codep=0x1d29 parp=0x596f
// ====================================================
// 0x596f: db 0xc6 0x00 '  '
  
// ====================================================
// 0x5971: WORD '?3' codep=0x1d29 parp=0x5978
// ====================================================
// 0x5978: db 0x00 0x00 '  '
  
// ====================================================
// 0x597a: WORD ''.HUFF' codep=0x1d29 parp=0x5985
// ====================================================
// 0x5985: db 0x45 0xbe 'E '
  
// ====================================================
// 0x5987: WORD 'SCAN' codep=0x1d29 parp=0x5990
// ====================================================
// 0x5990: db 0xf9 0x66 ' f'
  
// ====================================================
// 0x5992: WORD 'LMNT' codep=0x1d29 parp=0x599b
// ====================================================
// 0x599b: db 0x00 0x00 '  '
  
// ====================================================
// 0x599d: WORD 'SCAN+' codep=0x1d29 parp=0x59a7
// ====================================================
// 0x59a7: db 0xf9 0x66 ' f'
  
// ====================================================
// 0x59a9: WORD 'YMIN' codep=0x1d29 parp=0x59b2
// ====================================================
// 0x59b2: db 0xc2 0x00 '  '
  
// ====================================================
// 0x59b4: WORD 'YMAX' codep=0x1d29 parp=0x59bd
// ====================================================
// 0x59bd: db 0xc6 0x00 '  '
  
// ====================================================
// 0x59bf: WORD '#HORIZ' codep=0x1d29 parp=0x59ca
// ====================================================
// 0x59ca: db 0x02 0x00 '  '
  
// ====================================================
// 0x59cc: WORD 'MOVED' codep=0x1d29 parp=0x59d6
// ====================================================
// 0x59d6: db 0x69 0x7a 'iz'
  
// ====================================================
// 0x59d8: WORD 'MEMSEG' codep=0x1d29 parp=0x59e3
// ====================================================
// 0x59e3: db 0x19 0x42 ' B'
  
// ====================================================
// 0x59e5: WORD 'MEMOFF' codep=0x1d29 parp=0x59f0
// ====================================================
// 0x59f0: db 0x00 0x0a '  '
  
// ====================================================
// 0x59f2: WORD 'MONITOR' codep=0x1d29 parp=0x59fe
// ====================================================
// 0x59fe: db 0x06 0x00 '  '
  
// ====================================================
// 0x5a00: WORD 'LOCRADI' codep=0x1d29 parp=0x5a0c
// ====================================================
// 0x5a0c: db 0x4b 0x00 'K '
  
// ====================================================
// 0x5a0e: WORD '(ELIST)' codep=0x1d29 parp=0x5a1a
// ====================================================
// 0x5a1a: db 0xe8 0x10 0x00 '   '
  
// ====================================================
// 0x5a1d: WORD 'ICON^' codep=0x1d29 parp=0x5a27
// ====================================================
// 0x5a27: db 0x78 0x69 'xi'
  
// ====================================================
// 0x5a29: WORD 'PAL^' codep=0x1d29 parp=0x5a32
// ====================================================
// 0x5a32: db 0x41 0x6a 'Aj'
  
// ====================================================
// 0x5a34: WORD 'YBLT' codep=0x1d29 parp=0x5a3d
// ====================================================
// 0x5a3d: db 0xc6 0x00 '  '
  
// ====================================================
// 0x5a3f: WORD 'XBLT' codep=0x1d29 parp=0x5a48
// ====================================================
// 0x5a48: db 0x40 0x00 '@ '
  
// ====================================================
// 0x5a4a: WORD 'XORMODE' codep=0x1d29 parp=0x5a56
// ====================================================
// 0x5a56: db 0x00 0x00 '  '
  
// ====================================================
// 0x5a58: WORD 'LBLT' codep=0x1d29 parp=0x5a61
// ====================================================
// 0x5a61: db 0x08 0x00 '  '
  
// ====================================================
// 0x5a63: WORD 'WBLT' codep=0x1d29 parp=0x5a6c
// ====================================================
// 0x5a6c: db 0x08 0x00 '  '
  
// ====================================================
// 0x5a6e: WORD 'ABLT' codep=0x1d29 parp=0x5a77
// ====================================================
// 0x5a77: db 0x40 0x02 '@ '
  
// ====================================================
// 0x5a79: WORD 'BLTSEG' codep=0x1d29 parp=0x5a84
// ====================================================
// 0x5a84: db 0xf2 0x9d '  '
  
// ====================================================
// 0x5a86: WORD 'BLT>' codep=0x1d29 parp=0x5a8f
// ====================================================
// 0x5a8f: db 0x42 0x02 'B '
  
// ====================================================
// 0x5a91: WORD 'TILE-PT' codep=0x1d29 parp=0x5a9d
// ====================================================
// 0x5a9d: db 0x9a 0x69 ' i'
  
// ====================================================
// 0x5a9f: WORD '?FUEL-D' codep=0x1d29 parp=0x5aab
// ====================================================
// 0x5aab: db 0x00 0x00 '  '
  
// ====================================================
// 0x5aad: WORD '?G-AWAR' codep=0x1d29 parp=0x5ab9
// ====================================================
// 0x5ab9: db 0x00 0x00 '  '
  
// ====================================================
// 0x5abb: WORD 'GWF' codep=0x1d29 parp=0x5ac3
// ====================================================
// 0x5ac3: db 0x00 0x00 '  '
  
// ====================================================
// 0x5ac5: WORD 'DXVIS' codep=0x1d29 parp=0x5acf
// ====================================================
// 0x5acf: db 0x41 0x53 'AS'
  
// ====================================================
// 0x5ad1: WORD 'DYVIS' codep=0x1d29 parp=0x5adb
// ====================================================
// 0x5adb: db 0x45 0x20 'E '
  
// ====================================================
// 0x5add: WORD 'XCON' codep=0x1d29 parp=0x5ae6
// ====================================================
// 0x5ae6: db 0x56 0x20 'V '
  
// ====================================================
// 0x5ae8: WORD 'YCON' codep=0x1d29 parp=0x5af1
// ====================================================
// 0x5af1: db 0x65 0x72 'er'
  
// ====================================================
// 0x5af3: WORD 'DXCON' codep=0x1d29 parp=0x5afd
// ====================================================
// 0x5afd: db 0x72 0x20 'r '
  
// ====================================================
// 0x5aff: WORD 'DYCON' codep=0x1d29 parp=0x5b09
// ====================================================
// 0x5b09: db 0x6e 0x20 'n '
  
// ====================================================
// 0x5b0b: WORD 'XVIS' codep=0x1d29 parp=0x5b14
// ====================================================
// 0x5b14: db 0x69 0x6e 'in'
  
// ====================================================
// 0x5b16: WORD 'YVIS' codep=0x1d29 parp=0x5b1f
// ====================================================
// 0x5b1f: db 0x65 0x72 'er'
  
// ====================================================
// 0x5b21: WORD 'XLLDEST' codep=0x1d29 parp=0x5b2d
// ====================================================
// 0x5b2d: db 0x00 0x00 '  '
  
// ====================================================
// 0x5b2f: WORD 'YLLDEST' codep=0x1d29 parp=0x5b3b
// ====================================================
// 0x5b3b: db 0x00 0x00 '  '
  
// ====================================================
// 0x5b3d: WORD 'GLOBALS' codep=0x1d29 parp=0x5b49
// ====================================================
// 0x5b49: db 0x44 0x20 'D '
  
// ====================================================
// 0x5b4b: WORD ''.CELL' codep=0x1d29 parp=0x5b56
// ====================================================
// 0x5b56: db 0x72 0x72 'rr'
  
// ====================================================
// 0x5b58: WORD ''.BACKG' codep=0x1d29 parp=0x5b64
// ====================================================
// 0x5b64: db 0x55 0x4e 'UN'
  
// ====================================================
// 0x5b66: WORD ''ICON-P' codep=0x1d29 parp=0x5b72
// ====================================================
// 0x5b72: db 0x55 0xba 'U '
  
// ====================================================
// 0x5b74: WORD ''ICONBO' codep=0x1d29 parp=0x5b80
// ====================================================
// 0x5b80: db 0x65 0xba 'e '
  
// ====================================================
// 0x5b82: WORD ''CC' codep=0x1d29 parp=0x5b8a
// ====================================================
// 0x5b8a: db 0x3c 0xc8 '< '
  
// ====================================================
// 0x5b8c: WORD 'UNK_0x5b8e' codep=0x1d29 parp=0x5b8e
// ====================================================
// 0x5b8e: db 0x13 0x93 '  '
  
// ====================================================
// 0x5b90: WORD 'UNK_0x5b92' codep=0x1d29 parp=0x5b92
// ====================================================
// 0x5b92: db 0xb9 0x92 '  '
  
// ====================================================
// 0x5b94: WORD 'UNK_0x5b96' codep=0x1d29 parp=0x5b96
// ====================================================
// 0x5b96: db 0x8c 0x92 '  '
  
// ====================================================
// 0x5b98: WORD 'UNK_0x5b9a' codep=0x1d29 parp=0x5b9a
// ====================================================
// 0x5b9a: db 0x5f 0x92 '_ '
  
// ====================================================
// 0x5b9c: WORD 'UNK_0x5b9e' codep=0x1d29 parp=0x5b9e
// ====================================================
// 0x5b9e: db 0x05 0x92 '  '
  
// ====================================================
// 0x5ba0: WORD 'IHSEG' codep=0x1d29 parp=0x5baa
// ====================================================
// 0x5baa: db 0xd8 0x91 '  '
  
// ====================================================
// 0x5bac: WORD 'IGLOBAL' codep=0x1d29 parp=0x5bb8
// ====================================================
// 0x5bb8: db 0x00 0x00 '  '
  
// ====================================================
// 0x5bba: WORD 'ILOCAL' codep=0x1d29 parp=0x5bc5
// ====================================================
// 0x5bc5: db 0x00 0x00 '  '
  
// ====================================================
// 0x5bc7: WORD 'IINDEX' codep=0x1d29 parp=0x5bd2
// ====================================================
// 0x5bd2: db 0x00 0x00 '  '
  
// ====================================================
// 0x5bd4: WORD 'XWLL' codep=0x1d29 parp=0x5bdd
// ====================================================
// 0x5bdd: db 0x64 0x65 'de'
  
// ====================================================
// 0x5bdf: WORD 'YWLL' codep=0x1d29 parp=0x5be8
// ====================================================
// 0x5be8: db 0x20 0x74 ' t'
  
// ====================================================
// 0x5bea: WORD 'XWUR' codep=0x1d29 parp=0x5bf3
// ====================================================
// 0x5bf3: db 0x72 0x64 'rd'
  
// ====================================================
// 0x5bf5: WORD 'YWUR' codep=0x1d29 parp=0x5bfe
// ====================================================
// 0x5bfe: db 0x20 0x77 ' w'
  
// ====================================================
// 0x5c00: WORD '*GLOBAL' codep=0x1d29 parp=0x5c0c
// ====================================================
// 0x5c0c: db 0xa9 0x01 '  '
  
// ====================================================
// 0x5c0e: WORD '(STOP-C' codep=0x1d29 parp=0x5c1a
// ====================================================
// 0x5c1a: db 0x4d 0x29 'M)'
  
// ====================================================
// 0x5c1c: WORD 'UNK_0x5c1e' codep=0x1d29 parp=0x5c1e
// ====================================================
// 0x5c1e: db 0x00 0x00 '  '
  
// ====================================================
// 0x5c20: WORD 'CONTEXT' codep=0x1d29 parp=0x5c2c
// ====================================================
// 0x5c2c: db 0x03 0x00 '  '
  
// ====================================================
// 0x5c2e: WORD '%EFF' codep=0x1d29 parp=0x5c37
// ====================================================
// 0x5c37: db 0x64 0x00 'd '
  
// ====================================================
// 0x5c39: WORD 'STORM' codep=0x1d29 parp=0x5c43
// ====================================================
// 0x5c43: db 0x00 0x00 '  '
  
// ====================================================
// 0x5c45: WORD ''TVT' codep=0x1d29 parp=0x5c4e
// ====================================================
// 0x5c4e: db 0x89 0xd1 '  '
  
// ====================================================
// 0x5c50: WORD ''STORM' codep=0x1d29 parp=0x5c5b
// ====================================================
// 0x5c5b: db 0x5a 0xce 'Z '
  
// ====================================================
// 0x5c5d: WORD 'E/M' codep=0x1d29 parp=0x5c65
// ====================================================
// 0x5c65: db 0x66 0x6f 'fo'
  
// ====================================================
// 0x5c67: WORD 'FORCEPT' codep=0x1d29 parp=0x5c73
// ====================================================
// 0x5c73: db 0x00 0x00 '  '
  
// ====================================================
// 0x5c75: WORD '#STORM' codep=0x1d29 parp=0x5c80
// ====================================================
// 0x5c80: db 0x00 0x00 0x29 0x1d 0x4a 0x00 0x29 0x1d 0x00 0x00 0x29 0x1d 0x4b 0x00 '  ) J )   ) K '
  
// ====================================================
// 0x5c8e: WORD 'UNK_0x5c90' codep=0x1d29 parp=0x5c90
// ====================================================
// 0x5c90: db 0x00 0x00 '  '
  
// ====================================================
// 0x5c92: WORD 'PORTDAT' codep=0x1d29 parp=0x5c9e
// ====================================================
// 0x5c9e: db 0x00 0x00 '  '
  
// ====================================================
// 0x5ca0: WORD '?PORT' codep=0x1d29 parp=0x5caa
// ====================================================
// 0x5caa: db 0x01 0x00 '  '
  
// ====================================================
// 0x5cac: WORD 'TVIS' codep=0x1d29 parp=0x5cb5
// ====================================================
// 0x5cb5: db 0x40 0x00 '@ '
  
// ====================================================
// 0x5cb7: WORD 'RVIS' codep=0x1d29 parp=0x5cc0
// ====================================================
// 0x5cc0: db 0x88 0x00 '  '
  
// ====================================================
// 0x5cc2: WORD 'BVIS' codep=0x1d29 parp=0x5ccb
// ====================================================
// 0x5ccb: db 0xf7 0xff '  '
  
// ====================================================
// 0x5ccd: WORD 'LVIS' codep=0x1d29 parp=0x5cd6
// ====================================================
// 0x5cd6: db 0x42 0x00 'B '
  
// ====================================================
// 0x5cd8: WORD 'LFSEG' codep=0x1d29 parp=0x5ce2
// ====================================================
// 0x5ce2: db 0x3e 0x95 '> '
  
// ====================================================
// 0x5ce4: WORD 'LSYSEG' codep=0x1d29 parp=0x5cef
// ====================================================
// 0x5cef: db 0x51 0x91 'Q '
  
// ====================================================
// 0x5cf1: WORD 'MSYSEG' codep=0x1d29 parp=0x5cfc
// ====================================================
// 0x5cfc: db 0xd7 0x90 '  '
  
// ====================================================
// 0x5cfe: WORD 'SSYSEG' codep=0x1d29 parp=0x5d09
// ====================================================
// 0x5d09: db 0x5d 0x90 '] '
  
// ====================================================
// 0x5d0b: WORD 'UNK_0x5d0d' codep=0x5cc4 parp=0x5d0d
// ====================================================

// ====================================================
// 0x5d12: WORD 'UNK_0x5d14' codep=0x4941 parp=0x5d14
// ====================================================

// ====================================================
// 0x5d16: WORD 'UNK_0x5d18' codep=0x001d parp=0x5d18
// ====================================================
// 0x5d18: db 0x00 ' '
  
// ====================================================
// 0x5d19: WORD '?HEAL' codep=0x1d29 parp=0x5d23
// ====================================================

// ====================================================
// 0x5d22: WORD 'UNK_0x5d24' codep=0x001d parp=0x5d24
// ====================================================

// ====================================================
// 0x5d23: WORD 'UNK_0x5d25' codep=0x0000 parp=0x5d25
// ====================================================

// ====================================================
// 0x5d25: WORD 'MXNEB' codep=0x1d29 parp=0x5d2f
// ====================================================
// 0x5d2f: db 0x41 0x53 'AS'
  
// ====================================================
// 0x5d31: WORD 'THIS-BU' codep=0x1d29 parp=0x5d3d
// ====================================================
// 0x5d3d: db 0x00 0x00 '  '
  
// ====================================================
// 0x5d3f: WORD 'NCRS' codep=0x1d29 parp=0x5d48
// ====================================================

// ====================================================
// 0x5d42: WORD 'UNK_0x5d44' codep=0x434e parp=0x5d44
// ====================================================
// 0x5d48: db 0x20 0x62 ' b'
  
// ====================================================
// 0x5d4a: WORD 'OCRS' codep=0x1d29 parp=0x5d53
// ====================================================
// 0x5d53: db 0x73 0x6f 'so'
  
// ====================================================
// 0x5d55: WORD 'WTOP' codep=0x1d29 parp=0x5d5e
// ====================================================
// 0x5d5e: db 0x33 0x00 '3 '
  
// ====================================================
// 0x5d60: WORD 'WBOTTOM' codep=0x1d29 parp=0x5d6c
// ====================================================
// 0x5d6c: db 0x01 0x00 '  '
  
// ====================================================
// 0x5d6e: WORD 'WRIGHT' codep=0x1d29 parp=0x5d79
// ====================================================
// 0x5d79: db 0x9e 0x00 '  '
  
// ====================================================
// 0x5d7b: WORD 'WLEFT' codep=0x1d29 parp=0x5d85
// ====================================================
// 0x5d85: db 0x03 0x00 '  '
  
// ====================================================
// 0x5d87: WORD 'WLINES' codep=0x1d29 parp=0x5d92
// ====================================================
// 0x5d92: db 0x07 0x00 '  '
  
// ====================================================
// 0x5d94: WORD 'WCHARS' codep=0x1d29 parp=0x5d9f
// ====================================================
// 0x5d9f: db 0x26 0x00 '& '
  
// ====================================================
// 0x5da1: WORD 'SKIP2NE' codep=0x1d29 parp=0x5dad
// ====================================================
// 0x5dad: db 0x00 0x00 '  '
  
// ====================================================
// 0x5daf: WORD '-AIN' codep=0x1d29 parp=0x5db8
// ====================================================
// 0x5db8: db 0x74 0x20 't '
  
// ====================================================
// 0x5dba: WORD ''LAUNCH' codep=0x1d29 parp=0x5dc6
// ====================================================
// 0x5dc6: db 0x54 0xd4 'T '
  
// ====================================================
// 0x5dc8: WORD '?ON-PLA' codep=0x1d29 parp=0x5dd4
// ====================================================
// 0x5dd4: db 0x00 0x00 '  '
  
// ====================================================
// 0x5dd6: WORD '?RECALL' codep=0x1d29 parp=0x5de2
// ====================================================
// 0x5de2: db 0x00 0x00 '  '
  
// ====================================================
// 0x5de4: WORD 'WMSG' codep=0x1d29 parp=0x5ded
// ====================================================
// 0x5ded: db 0x00 0x00 '  '
  
// ====================================================
// 0x5def: WORD 'CTX' codep=0x1d29 parp=0x5df7
// ====================================================
// 0x5df7: db 0x00 0x00 '  '
  
// ====================================================
// 0x5df9: WORD 'CTY' codep=0x1d29 parp=0x5e01
// ====================================================
// 0x5e01: db 0x00 0x00 '  '
  
// ====================================================
// 0x5e03: WORD 'FTRIG' codep=0x1d29 parp=0x5e0d
// ====================================================
// 0x5e0d: db 0x00 0x00 '  '
  
// ====================================================
// 0x5e0f: WORD 'UNK_0x5e11' codep=0x5e05 parp=0x5e11
// ====================================================
// 0x5e19: db 0x74 0x61 'ta'
  
// ====================================================
// 0x5e1b: WORD 'LKEY' codep=0x1d29 parp=0x5e24
// ====================================================

// ====================================================
// 0x5e23: WORD 'UNK_0x5e25' codep=0x731d parp=0x5e25
// ====================================================
// 0x5e25: db 0x74 't'
  
// ====================================================
// 0x5e26: WORD ''BUTTON' codep=0x1d29 parp=0x5e32
// ====================================================
// 0x5e32: db 0x65 0x20 'e '
  
// ====================================================
// 0x5e34: WORD 'BTN-REC' codep=0x1d29 parp=0x5e40
// ====================================================
// 0x5e40: db 0x63 'c'
  
// ====================================================
// 0x5e41: WORD 'UNK_0x5e43' codep=0x3674 parp=0x5e43
// ====================================================

// ====================================================
// 0x5e42: WORD 'CRSCOLO' codep=0x1d29 parp=0x5e4e
// ====================================================
// 0x5e4e: db 0x6c 0x65 'le'
  
// ====================================================
// 0x5e50: WORD 'UNK_0x5e52' codep=0x1d29 parp=0x5e52
// ====================================================
// 0x5e52: db 0x3a 0x20 ': '
  
// ====================================================
// 0x5e54: WORD '?>OP' codep=0x1d29 parp=0x5e5d
// ====================================================
// 0x5e5d: db 0x00 0x00 '  '
  
// ====================================================
// 0x5e5f: WORD ''YANK' codep=0x1d29 parp=0x5e69
// ====================================================
// 0x5e69: db 0x3f 0xcb '? '
  
// ====================================================
// 0x5e6b: WORD '?12' codep=0x1d29 parp=0x5e73
// ====================================================
// 0x5e73: db 0x76 0x61 'va'
  
// ====================================================
// 0x5e75: WORD ''+VESS' codep=0x1d29 parp=0x5e80
// ====================================================
// 0x5e80: db 0x44 0xca 'D '
  
// ====================================================
// 0x5e82: WORD '?NEB' codep=0x1d29 parp=0x5e8b
// ====================================================
// 0x5e8b: db 0x00 0x00 '  '
  
// ====================================================
// 0x5e8d: WORD 'FORCEKE' codep=0x1d29 parp=0x5e99
// ====================================================
// 0x5e99: db 0x00 0x00 '  '
  
// ====================================================
// 0x5e9b: WORD '%VAL' codep=0x1d29 parp=0x5ea4
// ====================================================
// 0x5ea4: db 0x64 0x00 'd '
  
// ====================================================
// 0x5ea6: WORD 'SCROLL-' codep=0x1d29 parp=0x5eb2
// ====================================================
// 0x5eb2: db 0x4e 0x20 'N '
  
// ====================================================
// 0x5eb4: WORD '[#CACHE' codep=0x1d29 parp=0x5ec0
// ====================================================
// 0x5ec0: db 0x99 0x00 '  '
  
// ====================================================
// 0x5ec2: WORD 'ESC-EN' codep=0x1d29 parp=0x5ecd
// ====================================================
// 0x5ecd: db 0x00 0x00 '  '
  
// ====================================================
// 0x5ecf: WORD 'ESC-PFA' codep=0x1d29 parp=0x5edb
// ====================================================
// 0x5edb: db 0x99 0xd5 '  '
  
// ====================================================
// 0x5edd: WORD 'LINE-CO' codep=0x1d29 parp=0x5ee9
// ====================================================
// 0x5ee9: db 0x54 0x20 'T '
  
// ====================================================
// 0x5eeb: WORD 'PM-PTR' codep=0x1d29 parp=0x5ef6
// ====================================================
// 0x5ef6: db 0x6f 0x75 'ou'
  
// ====================================================
// 0x5ef8: WORD 'UNK_0x5efa' codep=0x1d29 parp=0x5efa
// ====================================================
// 0x5efa: db 0x01 0x00 '  '
  
// ====================================================
// 0x5efc: WORD 'SKEY' codep=0x1d29 parp=0x5f05
// ====================================================
// 0x5f05: db 0x63 0x72 'cr'
  
// ====================================================
// 0x5f07: WORD '#AUX' codep=0x1d29 parp=0x5f10
// ====================================================

// ====================================================
// 0x5f0d: WORD 'UNK_0x5f0f' codep=0x29d8 parp=0x5f0f
// ====================================================

// ====================================================
// 0x5f0f: WORD 'UNK_0x5f11' codep=0x051d parp=0x5f11
// ====================================================
// 0x5f11: db 0x00 ' '
  
// ====================================================
// 0x5f12: WORD '?EGA' codep=0x1d29 parp=0x5f1b
// ====================================================
// 0x5f1b: db 0x00 0x00 '  '
  
// ====================================================
// 0x5f1d: WORD '?5:(' codep=0x1d29 parp=0x5f26
// ====================================================
// 0x5f26: db 0x00 0x00 '  '
  
// ====================================================
// 0x5f28: WORD 'XABS' codep=0x1d29 parp=0x5f31
// ====================================================
// 0x5f31: db 0x4a 0x00 'J '
  
// ====================================================
// 0x5f33: WORD 'YABS' codep=0x1d29 parp=0x5f3c
// ====================================================
// 0x5f3c: db 0x00 0x00 '  '
  
// ====================================================
// 0x5f3e: WORD 'HEADING' codep=0x1d29 parp=0x5f4a
// ====================================================
// 0x5f4a: db 0x04 0x00 '  '
  
// ====================================================
// 0x5f4c: WORD '3DSEG' codep=0x1d29 parp=0x5f56
// ====================================================
// 0x5f56: db 0x69 0x70 'ip'
  
// ====================================================
// 0x5f58: WORD 'VIN'' codep=0x1d29 parp=0x5f61
// ====================================================
// 0x5f61: db 0x67 0x20 'g '
  
// ====================================================
// 0x5f63: WORD 'YSCREEN' codep=0x1d29 parp=0x5f6f
// ====================================================
// 0x5f6f: db 0x20 0x74 ' t'
  
// ====================================================
// 0x5f71: WORD 'XSCREEN' codep=0x1d29 parp=0x5f7d
// ====================================================
// 0x5f7d: db 0x6f 0x72 'or'
  
// ====================================================
// 0x5f7f: WORD ''COMBAT' codep=0x1d29 parp=0x5f8b
// ====================================================
// 0x5f8b: db 0x7b 0xc8 '{ '
  
// ====================================================
// 0x5f8d: WORD ''CEX+' codep=0x1d29 parp=0x5f97
// ====================================================
// 0x5f97: db 0xa1 0xbf '  '
  
// ====================================================
// 0x5f99: WORD ''CEX' codep=0x1d29 parp=0x5fa2
// ====================================================
// 0x5fa2: db 0xb5 0xbf '  '
  
// ====================================================
// 0x5fa4: WORD ''WAX' codep=0x1d29 parp=0x5fad
// ====================================================
// 0x5fad: db 0x6b 0xc8 'k '
  
// ====================================================
// 0x5faf: WORD 'TERMINA' codep=0x1d29 parp=0x5fbb
// ====================================================
// 0x5fbb: db 0x44 0x20 'D '
  
// ====================================================
// 0x5fbd: WORD '?COMBAT' codep=0x1d29 parp=0x5fc9
// ====================================================
// 0x5fc9: db 0x00 0x00 '  '
  
// ====================================================
// 0x5fcb: WORD '?ATTACK' codep=0x1d29 parp=0x5fd7
// ====================================================
// 0x5fd7: db 0x74 0x6f 'to'
  
// ====================================================
// 0x5fd9: WORD 'TBOX' codep=0x1d29 parp=0x5fe2
// ====================================================
// 0x5fe2: db 0x65 0x61 'ea'
  
// ====================================================
// 0x5fe4: WORD 'UNK_0x5fe6' codep=0x1d29 parp=0x5fe6
// ====================================================
// 0x5fe6: db 0x00 0x00 '  '
  
// ====================================================
// 0x5fe8: WORD 'STAR-HR' codep=0x1d29 parp=0x5ff4
// ====================================================
// 0x5ff4: db 0x00 0x00 '  '
  
// ====================================================
// 0x5ff6: WORD 'STARDAT' codep=0x1d29 parp=0x6002
// ====================================================
// 0x6002: db 0x00 0x00 '  '
  
// ====================================================
// 0x6004: WORD 'TIME-PA' codep=0x1d29 parp=0x6010
// ====================================================

// ====================================================
// 0x600d: WORD 'UNK_0x600f' codep=0x29c1 parp=0x600f
// ====================================================
// 0x6010: db 0x49 0x4e 'IN'
  
// ====================================================
// 0x6012: WORD '#CLRMAP' codep=0x1d29 parp=0x601e
// ====================================================
// 0x601e: db 0x01 0x00 '  '
  
// ====================================================
// 0x6020: WORD 'PLHI' codep=0x1d29 parp=0x6029
// ====================================================
// 0x6029: db 0xff 0xff '  '
  
// ====================================================
// 0x602b: WORD ''PROCES' codep=0x1d29 parp=0x6037
// ====================================================
// 0x6037: db 0x75 0x72 'ur'
  
// ====================================================
// 0x6039: WORD 'CURSEG' codep=0x1d29 parp=0x6044
// ====================================================
// 0x6044: db 0xcb 0x91 '  '
  
// ====================================================
// 0x6046: WORD ''SIMULA' codep=0x1d29 parp=0x6052
// ====================================================
// 0x6052: db 0xb6 0xd1 '  '
  
// ====================================================
// 0x6054: WORD ''ENDING' codep=0x1d29 parp=0x6060
// ====================================================
// 0x6060: db 0xe0 0xc8 '  '
  
// ====================================================
// 0x6062: WORD '[KEYINT' codep=0x1d29 parp=0x606e
// ====================================================
// 0x606e: db 0x00 0x00 '  '
  
// ====================================================
// 0x6070: WORD 'SIL^' codep=0x1d29 parp=0x6079
// ====================================================
// 0x6079: db 0x69 0x6a 'ij'
  
// ====================================================
// 0x607b: WORD 'PIC^' codep=0x1d29 parp=0x6084
// ====================================================
// 0x6084: db 0x37 0x6b '7k'
  
// ====================================================
// 0x6086: WORD ''CLEANU' codep=0x1d29 parp=0x6092
// ====================================================
// 0x6092: db 0x20 0x2d ' -'
  
// ====================================================
// 0x6094: WORD ''KEY-CA' codep=0x1d29 parp=0x60a0
// ====================================================
// 0x60a0: db 0x20 0x6d ' m'
  
// ====================================================
// 0x60a2: WORD ''.VITAL' codep=0x1d29 parp=0x60ae
// ====================================================
// 0x60ae: db 0x49 0x47 'IG'
  
// ====================================================
// 0x60b0: WORD ''.DATE' codep=0x1d29 parp=0x60bb
// ====================================================
// 0x60bb: db 0x69 0x74 'it'
  
// ====================================================
// 0x60bd: WORD ''.VEHIC' codep=0x1d29 parp=0x60c9
// ====================================================
// 0x60c9: db 0x2d 0x53 '-S'
  
// ====================================================
// 0x60cb: WORD ''VEHICL' codep=0x1d29 parp=0x60d7
// ====================================================
// 0x60d7: db 0x43 0x59 'CY'
  
// ====================================================
// 0x60d9: WORD ''CREW-C' codep=0x1d29 parp=0x60e5
// ====================================================
// 0x60e5: db 0x4c 0x45 'LE'
  
// ====================================================
// 0x60e7: WORD ''EXTERN' codep=0x1d29 parp=0x60f3
// ====================================================
// 0x60f3: db 0x56 0xca 'V '
  
// ====================================================
// 0x60f5: WORD ''REPAIR' codep=0x1d29 parp=0x6101
// ====================================================
// 0x6101: db 0x74 0x65 'te'
  
// ====================================================
// 0x6103: WORD ''TREATM' codep=0x1d29 parp=0x610f
// ====================================================
// 0x610f: db 0x54 0x20 'T '
  
// ====================================================
// 0x6111: WORD 'WEAPON-' codep=0x1d29 parp=0x611d
// ====================================================
// 0x611d: db 0x52 0x45 'RE'
  
// ====================================================
// 0x611f: WORD '^CRIT' codep=0x1d29 parp=0x6129
// ====================================================
// 0x6129: db 0x45 0x20 'E '
  
// ====================================================
// 0x612b: WORD '?FLAT' codep=0x1d29 parp=0x6135
// ====================================================
// 0x6135: db 0x74 0x6f 'to'
  
// ====================================================
// 0x6137: WORD '1ST' codep=0x1d29 parp=0x613f
// ====================================================
// 0x613f: db 0x66 0x20 'f '
  
// ====================================================
// 0x6141: WORD '?MVT' codep=0x1d29 parp=0x614a
// ====================================================
// 0x614a: db 0x00 0x00 '  '
  
// ====================================================
// 0x614c: WORD '?SUP' codep=0x1d29 parp=0x6155
// ====================================================
// 0x6155: db 0x00 0x00 '  '
  
// ====================================================
// 0x6157: WORD 'E-USE' codep=0x1d29 parp=0x6161
// ====================================================
// 0x6161: db 0x4c 0x45 'LE'
  
// ====================================================
// 0x6163: WORD ''ENERGY' codep=0x1d29 parp=0x616f
// ====================================================
// 0x616f: db 0x62 0xcb 'b '
  
// ====================================================
// 0x6171: WORD '?SECURE' codep=0x1d29 parp=0x617d
// ====================================================
// 0x617d: db 0x00 0x00 '  '
  
// ====================================================
// 0x617f: WORD ''STP' codep=0x1d29 parp=0x6188
// ====================================================
// 0x6188: db 0x26 0xd2 '& '
  
// ====================================================
// 0x618a: WORD ''RSIDE' codep=0x1d29 parp=0x6195
// ====================================================
// 0x6195: db 0x35 0xd2 '5 '
  
// ====================================================
// 0x6197: WORD 'DERROR' codep=0x1d29 parp=0x61a2
// ====================================================
// 0x61a2: db 0x65 0x20 'e '
  
// ====================================================
// 0x61a4: WORD 'NLR' codep=0x1d29 parp=0x61ac
// ====================================================
// 0x61ac: db 0x00 0x00 '  '
  
// ====================================================
// 0x61ae: WORD 'OVT' codep=0x53f7 parp=0x61b6
// ====================================================
// 0x61b6: db 0xe6 0x07 0xe0 0x07 0xfa 0x07 0x47 0x57 0x48 0x5a 0x3d 0x5a 0x6c 0x5a 0x61 0x5a 0x77 0x5a 0x84 0x5a 0x56 0x5a '      GWHZ=ZlZaZwZ ZVZ'
  
// ====================================================
// 0x61cc: WORD '?10' codep=0x1d29 parp=0x61d4
// ====================================================
// 0x61d4: db 0x00 0x00 '  '
  
// ====================================================
// 0x61d6: WORD 'BITS' codep=0x1d29 parp=0x61df
// ====================================================
// 0x61df: db 0x50 0x03 'P '
  
// ====================================================
// 0x61e1: WORD '#BITS' codep=0x1d29 parp=0x61eb
// ====================================================
// 0x61eb: db 0x10 0x00 '  '
  
// ====================================================
// 0x61ed: WORD '?5' codep=0x1d29 parp=0x61f4
// ====================================================
// 0x61f4: db 0x00 0x00 '  '
  
// ====================================================
// 0x61f6: WORD 'SELLING' codep=0x1d29 parp=0x6202
// ====================================================
// 0x6202: db 0x20 0x2d ' -'
  
// ====================================================
// 0x6204: WORD 'BARTERI' codep=0x1d29 parp=0x6210
// ====================================================
// 0x6210: db 0x20 0x49 ' I'
  
// ====================================================
// 0x6212: WORD '?REPLY' codep=0x1d29 parp=0x621d
// ====================================================
// 0x621d: db 0x52 0x41 'RA'
  
// ====================================================
// 0x621f: WORD 'PLAST' codep=0x1d29 parp=0x6229
// ====================================================
// 0x6229: db 0x20 0x72 ' r'
  
// ====================================================
// 0x622b: WORD 'PAST' codep=0x1d29 parp=0x6234
// ====================================================
// 0x6234: db 0x00 0x00 '  '
  
// ====================================================
// 0x6236: WORD 'HAZE' codep=0x1d29 parp=0x623f
// ====================================================
// 0x623f: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x6243: WORD '?CALLIN' codep=0x1d29 parp=0x624f
// ====================================================
// 0x624f: db 0x01 0x00 '  '
  
// ====================================================
// 0x6251: WORD 'STAGES' codep=0x1d29 parp=0x625c
// ====================================================
// 0x625c: db 0x63 0x65 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x65 0x64 0x20 0x0d 0x0a 'ce ALLOT ed   '
  
// ====================================================
// 0x626a: WORD '%SLUG' codep=0x1d29 parp=0x6274
// ====================================================
// 0x6274: db 0x64 0x00 'd '
  
// ====================================================
// 0x6276: WORD 'ITEM' codep=0x1d29 parp=0x627f
// ====================================================
// 0x627f: db 0xeb 0x63 0x02 0x6c ' c l'
  
// ====================================================
// 0x6283: WORD 'FSTUN' codep=0x1d29 parp=0x628d
// ====================================================
// 0x628d: db 0x00 0x00 '  '
  
// ====================================================
// 0x628f: WORD 'PATIENC' codep=0x1d29 parp=0x629b
// ====================================================
// 0x629b: db 0x64 0x20 'd '
  
// ====================================================
// 0x629d: WORD 'TMAP' codep=0x1d29 parp=0x62a6
// ====================================================
// 0x62a6: db 0x6f 0x72 0x20 0x66 'or f'
  
// ====================================================
// 0x62aa: WORD ':(' codep=0x1d29 parp=0x62b1
// ====================================================
// 0x62b1: db 0x42 0xc3 'B '
  
// ====================================================
// 0x62b3: WORD 'TIRED-T' codep=0x1d29 parp=0x62bf
// ====================================================
// 0x62bf: db 0x45 0x20 0x28 0x73 'E (s'
  
// ====================================================
// 0x62c3: WORD 'LASTREP' codep=0x1d29 parp=0x62cf
// ====================================================
// 0x62cf: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x62d3: WORD 'TALKCOU' codep=0x1d29 parp=0x62df
// ====================================================
// 0x62df: db 0x20 0x69 0x74 0x69 ' iti'
  
// ====================================================
// 0x62e3: WORD 'VSTIME' codep=0x1d29 parp=0x62ee
// ====================================================
// 0x62ee: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x62f2: WORD '10*CARG' codep=0x1d29 parp=0x62fe
// ====================================================
// 0x62fe: db 0x00 0x00 0xb0 0x36 '   6'
  
// ====================================================
// 0x6302: WORD 'SENSE-A' codep=0x1d29 parp=0x630e
// ====================================================
// 0x630e: db 0x00 0x00 0x00 0x29 '   )'
  
// ====================================================
// 0x6312: WORD 'EYEXY' codep=0x1d29 parp=0x631c
// ====================================================
// 0x631c: db 0x52 0x20 0x64 0x64 'R dd'
  
// ====================================================
// 0x6320: WORD 'WEAPXY' codep=0x1d29 parp=0x632b
// ====================================================
// 0x632b: db 0x74 0x20 0x53 0x45 't SE'
  
// ====================================================
// 0x632f: WORD '10*END' codep=0x1d29 parp=0x633a
// ====================================================
// 0x633a: db 0x00 0x00 0x98 0x3a '   :'
  
// ====================================================
// 0x633e: WORD 'TOWFINE' codep=0x1d29 parp=0x634a
// ====================================================
// 0x634a: db 0x16 0x41 0x63 0x74 ' Act'
  
// ====================================================
// 0x634e: WORD 'ENC-TIM' codep=0x1d29 parp=0x635a
// ====================================================
// 0x635a: db 0x12 0x00 0x23 0x17 '  # '
  
// ====================================================
// 0x635e: WORD 'NAV-TIM' codep=0x1d29 parp=0x636a
// ====================================================
// 0x636a: db 0x6e 0x6f 0x74 0x20 0x29 0x1d 0xbf 0x05 0xe3 0x31 'not )    1'
  
// ====================================================
// 0x6374: WORD 'STIME' codep=0x1d29 parp=0x637e
// ====================================================
// 0x637e: db 0x65 0x6e 0x74 0x20 'ent '
  
// ====================================================
// 0x6382: WORD 'ETIME' codep=0x1d29 parp=0x638c
// ====================================================
// 0x638c: db 0x00 0x00 '  '
  
// ====================================================
// 0x638e: WORD 'UNK_0x6390' codep=0x1d29 parp=0x6390
// ====================================================
// 0x6390: db 0x03 0x00 0x40 0xc6 '  @ '
  
// ====================================================
// 0x6394: WORD 'UNK_0x6396' codep=0x1d29 parp=0x6396
// ====================================================
// 0x6396: db 0x03 0x00 0x40 0xc6 '  @ '
  
// ====================================================
// 0x639a: WORD 'UNK_0x639c' codep=0x1d29 parp=0x639c
// ====================================================
// 0x639c: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x63a0: WORD 'UNK_0x63a2' codep=0x1d29 parp=0x63a2
// ====================================================
// 0x63a2: db 0xe5 0xbf 0x01 0x72 '   r'
  
// ====================================================
// 0x63a6: WORD 'KEYTIME' codep=0x1d29 parp=0x63b2
// ====================================================
// 0x63b2: db 0x74 0x20 0x6f 0x66 't of'
  
// ====================================================
// 0x63b6: WORD 'LKEYTIM' codep=0x1d29 parp=0x63c2
// ====================================================
// 0x63c2: db 0x69 0x63 0x68 0x20 'ich '
  
// ====================================================
// 0x63c6: WORD '(SCROLL' codep=0x1d29 parp=0x63d2
// ====================================================
// 0x63d2: db 0x4f 0x58 0x29 0x20 'OX) '
  
// ====================================================
// 0x63d6: WORD '(ORIGIN' codep=0x1d29 parp=0x63e2
// ====================================================
// 0x63e2: db 0x4f 0x52 0x29 0x20 'OR) '
  
// ====================================================
// 0x63e6: WORD '(SCROLL' codep=0x1d29 parp=0x63f2
// ====================================================
// 0x63f2: db 0x4f 0x4e 0x54 0x29 'ONT)'
  
// ====================================================
// 0x63f6: WORD 'REAL-MS' codep=0x1d29 parp=0x6402
// ====================================================
// 0x6402: db 0x00 0x00 0x10 0x27 '   ''
  
// ====================================================
// 0x6406: WORD 'LAST-UP' codep=0x1d29 parp=0x6412
// ====================================================
// 0x6412: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x6416: WORD 'XWLD:XP' codep=0x1d29 parp=0x6422
// ====================================================
// 0x6422: db 0x20 0x00 0x08 0x00 '    '
  
// ====================================================
// 0x6426: WORD 'YWLD:YP' codep=0x1d29 parp=0x6432
// ====================================================
// 0x6432: db 0x30 0x00 0x08 0x00 '0   '
  
// ====================================================
// 0x6436: WORD 'ANCHOR' codep=0x1d29 parp=0x6441
// ====================================================
// 0x6441: db 0x00 0x00 0x4a 0x00 '  J '
  
// ====================================================
// 0x6445: WORD 'OK-TALK' codep=0x1d29 parp=0x6451
// ====================================================
// 0x6451: db 0x49 0x4d 0x45 0x20 'IME '
  
// ====================================================
// 0x6455: WORD 'TVEHICL' codep=0x1d29 parp=0x6461
// ====================================================
// 0x6461: db 0xd4 0x2b 0x02 0x56 ' + V'
  
// ====================================================
// 0x6465: WORD 'TV-HOLD' codep=0x1d29 parp=0x6471
// ====================================================
// 0x6471: db 0x00 0x2c 0x02 0x61 ' , a'
  
// ====================================================
// 0x6475: WORD 'SUPER-B' codep=0x1d29 parp=0x6481
// ====================================================
// 0x6481: db 0xaf 0x10 0x00 0x61 '   a'
  
// ====================================================
// 0x6485: WORD '(SYSTEM' codep=0x1d29 parp=0x6491
// ====================================================
// 0x6491: db 0xd1 0xbf 0x01 0x65 '   e'
  
// ====================================================
// 0x6495: WORD '(ORBIT)' codep=0x1d29 parp=0x64a1
// ====================================================
// 0x64a1: db 0xd1 0x67 0x02 0x65 ' g e'
  
// ====================================================
// 0x64a5: WORD '(PLANET' codep=0x1d29 parp=0x64b1
// ====================================================
// 0x64b1: db 0xe5 0xbf 0x01 0x65 '   e'
  
// ====================================================
// 0x64b5: WORD '(SURFAC' codep=0x1d29 parp=0x64c1
// ====================================================
// 0x64c1: db 0x9c 0x10 0x00 0x65 '   e'
  
// ====================================================
// 0x64c5: WORD '(ENCOUN' codep=0x1d29 parp=0x64d1
// ====================================================
// 0x64d1: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x64d5: WORD '(SHIPBO' codep=0x1d29 parp=0x64e1
// ====================================================
// 0x64e1: db 0x48 0x2b 0x02 0x65 'H+ e'
  
// ====================================================
// 0x64e5: WORD '(AORIGI' codep=0x1d29 parp=0x64f1
// ====================================================
// 0x64f1: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x64f5: WORD 'THIS-RE' codep=0x1d29 parp=0x6501
// ====================================================
// 0x6501: db 0x4f 0x4e 0x20 0x6e 'ON n'
  
// ====================================================
// 0x6505: WORD '(THIS-I' codep=0x1d29 parp=0x6511
// ====================================================
// 0x6511: db 0x4d 0x29 0x20 0x68 'M) h'
  
// ====================================================
// 0x6515: WORD 'UNK_0x6517' codep=0x1d29 parp=0x6517
// ====================================================
// 0x6517: db 0x45 0xb2 'E '
  
// ====================================================
// 0x6519: WORD 'UNK_0x651b' codep=0x1d29 parp=0x651b
// ====================================================
// 0x651b: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xb2 0x17 0x00 0x32 0x7d 0x02 0xb2 0x17 0x00 0xba 0x6c 0x02 0x48 0x2b 0x02 0xd1 0x67 0x02 0x48 0x2b 0x02 0xd1 0x67 0x02 0xd1 0xbf 0x01 0x0e 0x11 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x29 0x1d 0x3a 0x20 0x01 0x00 0x96 0xc9 0x01 0x00 0xc3 0xc9 0x01 0x00 0xa5 0xc9 0x01 0x00 0xe1 0xc9 0x01 0x00 0x2c 0xca 0x01 0x00 0x77 0xca 0x01 0x00 0xb3 0xca 0x01 0x00 0xe0 0xca 0x01 0x00 0x0d 0xcb 0x01 0x00 0x67 0xcb 0x01 0x00 0x01 0x00 0xb3 0x7a 0x00 0x00 0x48 0x3a 0x09 0x76 0x01 0x00 0xb3 0x7a 0xec 0x7d 0x00 0x00 0x6e 0x00 '                                                                                       2}     l H+  g H+  g             ) :                   ,   w               g      z  H: v   z }  n '
  
// ====================================================
// 0x65d5: WORD 'IBFR' codep=0x1d29 parp=0x65de
// ====================================================
// 0x65de: db 0x0e 0x00 0x00 0x00 0x2b 0x02 0x25 0x2b 0x02 0x7c 0x2b 0x02 0x12 0x00 0x08 0x00 0x7b 0xff 0xa8 0xfe 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x0b 0x41 0x2b 0xaa 0xd8 0x07 0xac 0xeb 0xab 0x5a 0xb4 0xac 0x36 0x8f 0x1f 0x61 0x14 0x20 0x57 0x49 0x4c 0x4c 0x20 0x42 0x45 0x20 0x4d 0x45 0x54 0x20 0x57 0x49 0x54 0x48 0x20 0x46 0x4f 0x52 0x43 0x45 0x2e 0x20 0x44 0x4f 0x20 0x59 0x4f 0x55 0x20 0x41 0x47 0x52 0x45 0x45 0x20 0x54 0x4f 0x20 0x43 0x4f 0x4d 0x45 0x20 0x41 0x4c 0x4f 0x4e 0x47 0x20 0x50 0x45 0x41 0x43 0x45 0x46 0x55 0x4c 0x4c 0x59 0x3f 0x20 0x20 0x25 0x31 0x0e 0x07 0x8d 0x3e 0x34 0x58 0x83 0xc1 0x5e 0xc3 0x02 0x04 0x00 0x01 0xff 0xff 0x04 0x00 0x0e 0x50 0x61 0x72 0x73 0x65 0x20 0x45 0x72 0x72 0x6f 0x72 0x20 0x25 0x31 0x0e 0x07 0x8d 0x3e 0x96 0x58 0x83 0xc1 0x1d 0xc3 0xff 0x00 0x00 0x00 0x00 0x0b 0x00 0x16 '    + %+ |+     {                                                                                                                          A+      Z  6  a  WILL BE MET WITH FORCE. DO YOU AGREE TO COME ALONG PEACEFULLY?  %1   >4X  ^          Parse Error %1   > X            '
  
// ====================================================
// 0x66ef: WORD 'LSCAN' codep=0x1d29 parp=0x66f9
// ====================================================
// 0x66f9: db 0x50 0x4f 0x4c 0x59 0x43 0x4f 0x4e 0x20 0x20 0x20 0x20 0x20 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 'POLYCON                                                                             '
  
// ====================================================
// 0x674d: WORD 'UNK_0x674f' codep=0x9c03 parp=0x674f
// ====================================================
// 0x674f: db 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x03 0x9c 0x05 0x01 0x20 0x00 0x04 0x01 0x0b 0x00 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x5c 0x9c 0x01 0x00 0x80 0x01 0x20 0x12 0x04 0x02 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x53 0x9c 0x30 0x3c 0x30 0x3c 0x30 0x3c 0x30 0x3c 0x30 0x3c 0x04 0x01 '                          \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \         S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S S 0<0<0<0<0<  '
  
// ====================================================
// 0x6889: WORD 'UNK_0x688b' codep=0x1d29 parp=0x688b
// ====================================================
// 0x688b: db 0xc2 0x00 0x3c 0x00 0xc2 0x00 0x30 0x00 0xc6 0x00 0x30 0x00 0xc6 0x00 0x3c 0x00 0x49 0x41 0x42 0x4c 0x45 0x20 0x2d 0x20 0x41 0x52 0x52 0x41 0x59 0x20 0x2d 0x20 0x53 0x48 0x5c 0x20 0x56 0x41 0x52 0x20 0x20 0x20 0x20 0x20 0x4b 0x52 0x4e 0x20 0x20 0x72 0x66 0x67 0x32 0x32 0x61 0x75 0x67 0x38 0x39 0x20 0x29 0x2e 0x04 0x00 '  <   0   0   < IABLE - ARRAY - SH\ VAR     KRN  rfg22aug89 ).  '
  
// ====================================================
// 0x68cb: WORD 'UNK_0x68cd' codep=0x1d29 parp=0x68cd
// ====================================================
// 0x68cd: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x02 0x0b 0x00 0x92 0x63 0x00 0x00 0x01 0x10 0x03 0x03 0x20 0x0b 0x00 0x00 0x00 0x00 0x00 0x02 0x34 0x0a 0x08 0x20 0x34 0x04 0x01 0x0b 0x00 0x00 0x00 0x00 0x00 0x01 0xa6 0x0b 0x0b 0x20 0x35 0x04 0x02 0x0b 0x00 0x00 0x00 0x00 0x00 0x01 0xa4 0x0a 0x08 0x20 0x0b 0x00 0x00 0x00 ':  ALLOT     c              4   4             5                 '
  
// ====================================================
// 0x690d: WORD 'UNK_0x690f' codep=0x1d29 parp=0x690f
// ====================================================
// 0x690f: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x41 0x54 0x48 0x3d 0x50 0x52 0x4f 0x4d 0x50 0x54 0x3d 0x43 0x4f 0x4d 0x53 0x50 0x45 0x43 0x3d 0x04 0x1b 0x5b 0x32 0x4a 0x42 0xa8 0x16 0x44 0xad 0x2f 0x45 0x9c 0x16 0x47 0xa0 0x16 0x48 0x92 0x16 0x4c 0xa4 0x16 0x4e 0xb9 0x16 0x50 0xc3 0x16 0x51 0x98 0x16 0x54 0x40 0x28 0x56 ':  ALLOT ATH=PROMPT=COMSPEC=  [2JB  D /E  G  H  L  N  P  Q  T@(V'
  
// ====================================================
// 0x694f: WORD 'UNK_0x6951' codep=0x1d29 parp=0x6951
// ====================================================
// 0x6951: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x54 0x4e 0x0a 0x0a 0x45 0x52 0x52 0x4f 0x52 0x4c 0x45 0x56 0x45 0x4c 0x12 0x0b 0x05 0x45 0x58 0x49 0x53 0x54 0xa5 0x0a 0x00 ':  ALLOT OTN  ERRORLEVEL   EXIST   '
  // 0x6974: add    ax,[si+49]
// 0x6977: push   dx
// 0x6978: add    bp,[bx+040F]
// 0x697c: inc    bx
// 0x697d: inc    cx
// 0x697e: dec    sp
// 0x697f: dec    sp
// 0x6980: add    al,[bx+040B]
// 0x6984: inc    bx
// 0x6985: dec    ax
// 0x6986: inc    bx
// 0x6987: push   ax
// 0x6988: add    cl,[di]
// 0x698a: sbb    [4552],ax
// 0x698e: dec    si
// 0x698f: inc    cx
// 0x6990: dec    bp

// ====================================================
// 0x6991: WORD 'CMAP' codep=0x1d29 parp=0x699a
// ====================================================
// 0x699a: db 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x02 0x02 0x02 0x02 0x02 0x02 0x02 0x02 0x03 0x03 0x03 0x03 0x03 0x03 0x03 0x03 0x0e 0x0e 0x0e 0x0e 0x0e 0x0e 0x0e 0x0e 0x06 0x06 0x06 0x06 0x06 0x06 0x06 0x06 0x08 0x08 0x08 0x08 0x08 0x08 0x08 0x08 0x07 0x07 0x07 0x07 0x07 0x07 0x07 0x07 0x0f 0x0f 0x0f 0x0f 0x0f 0x0f 0x0f 0x0f '                                                                '
  
// ====================================================
// 0x69da: WORD 'ATIME' codep=0x1d29 parp=0x69e4
// ====================================================
// 0x69e4: db 0x70 0x20 0x61 0x72 'p ar'
  
// ====================================================
// 0x69e8: WORD 'LRTRN' codep=0x1d29 parp=0x69f2
// ====================================================
// 0x69f2: db 0x48 0x44 0x49 0x52 'HDIR'
  
// ====================================================
// 0x69f6: WORD '(TRADER' codep=0x1d29 parp=0x6a02
// ====================================================
// 0x6a02: db 0xec 0x13 0x00 0x03 '    '
  
// ====================================================
// 0x6a06: WORD '(THING)' codep=0x1d29 parp=0x6a12
// ====================================================
// 0x6a12: db 0x49 0x52 0x03 0x46 'IR F'
  
// ====================================================
// 0x6a16: WORD 'BUY-LIS' codep=0x3b74 parp=0x6a22
// ====================================================
// 0x6a22: db 0x00 0x00 0x63 0x10 '  c '
  
// ====================================================
// 0x6a26: WORD '#ETIME' codep=0x1d29 parp=0x6a31
// ====================================================
// 0x6a31: db 0x06 0x50 0x52 0x4f ' PRO'
  
// ====================================================
// 0x6a35: WORD 'NTIME' codep=0x1d29 parp=0x6a3f
// ====================================================
// 0x6a3f: db 0x00 0x00 0x00 0x00 '    '
  
// ====================================================
// 0x6a43: WORD ''UHL' codep=0x1d29 parp=0x6a4c
// ====================================================
// 0x6a4c: db 0x48 0x3a 'H:'
  
// ====================================================
// 0x6a4e: WORD 'MERCATO' codep=0x4e6f parp=0x6a5a
// ====================================================
// 0x6a5a: db 0x30 0x00 0x18 0x00 0x80 0x04 0xd1 0x9c '0       '
  
// ====================================================
// 0x6a62: WORD 'CONANCH' codep=0x4e6f parp=0x6a6e
// ====================================================
// 0x6a6e: db 0x09 0x00 0x07 0x00 0x3f 0x00 0xcc 0x9c '    ?   '
  
// ====================================================
// 0x6a76: WORD 'CONTOUR' codep=0x4e6f parp=0x6a82
// ====================================================
// 0x6a82: db 0x3d 0x00 0x65 0x00 0x11 0x18 0x3e 0x9b '= e   > '
  
// ====================================================
// 0x6a8a: WORD 'ICONIMA' codep=0x4e6f parp=0x6a96
// ====================================================
// 0x6a96: db 0x12 0x00 0x40 0x00 0x80 0x04 0xf2 0x9d '  @     '
  
// ====================================================
// 0x6a9e: WORD 'VERTEX' codep=0x4e6f parp=0x6aa9
// ====================================================
// 0x6aa9: db 0x03 0x00 0x86 0x00 0x92 0x01 0xd5 0x9f '        '
  
// ====================================================
// 0x6ab1: WORD 'FACET' codep=0x4e6f parp=0x6abb
// ====================================================
// 0x6abb: db 0x04 0x00 0x48 0x00 0x20 0x01 0xb9 0x9f '  H     '
  
// ====================================================
// 0x6ac3: WORD 'FACE' codep=0x4e6f parp=0x6acc
// ====================================================
// 0x6acc: db 0x03 0x00 0x48 0x00 0xd8 0x00 0xa2 0x9f '  H     '
  
// ====================================================
// 0x6ad4: WORD 'PPOLY' codep=0x4e6f parp=0x6ade
// ====================================================
// 0x6ade: db 0x05 0x00 0x20 0x03 0xa0 0x0f 0x43 0x9e '      C '
  
// ====================================================
// 0x6ae6: WORD 'GVERTEX' codep=0x4e6f parp=0x6af2
// ====================================================
// 0x6af2: db 0x03 0x00 0x75 0x00 0x5f 0x01 0xcd 0x9d '  u _   '
  
// ====================================================
// 0x6afa: WORD 'GPOLY' codep=0x4e6f parp=0x6b04
// ====================================================
// 0x6b04: db 0x04 0x00 0x59 0x00 0x64 0x01 0xab 0x9d '  Y d   '
  
// ====================================================
// 0x6b0c: WORD 'GRIDCOL' codep=0x4e6f parp=0x6b18
// ====================================================
// 0x6b18: db 0x02 0x00 0x59 0x00 0xb2 0x00 0x94 0x9d '  Y     '
  
// ====================================================
// 0x6b20: WORD 'G1VERT' codep=0x4e6f parp=0x6b2b
// ====================================================
// 0x6b2b: db 0x03 0x00 0x75 0x00 0x5f 0x01 0x6f 0x9d '  u _ o '
  
// ====================================================
// 0x6b33: WORD '9X9COAR' codep=0x4e6f parp=0x6b3f
// ====================================================
// 0x6b3f: db 0x09 0x00 0x09 0x00 0x51 0x00 0x68 0x9d '    Q h '
  
// ====================================================
// 0x6b47: WORD '9X9FINE' codep=0x4e6f parp=0x6b53
// ====================================================
// 0x6b53: db 0x09 0x00 0x09 0x00 0x51 0x00 0x61 0x9d '    Q a '
  
// ====================================================
// 0x6b5b: WORD 'XFORMVE' codep=0x4e6f parp=0x6b67
// ====================================================
// 0x6b67: db 0x06 0x00 0x86 0x00 0x24 0x03 0x1d 0x9d '    $   '
  
// ====================================================
// 0x6b6f: WORD 'IARRAYS' codep=0x53f7 parp=0x6b7b
// ====================================================
// 0x6b7b: db 0xa9 0x6a 0xbb 0x6a 0xcc 0x6a 0xde 0x6a 0x96 0x6a 0xf2 0x6a 0x04 0x6b 0x18 0x6b 0x2b 0x6b 0x3f 0x6b 0x53 0x6b 0x67 0x6b 0x5a 0x6a 0x6e 0x6a 0x82 0x6a ' j j j j j j k k+k?kSkgkZjnj j'
  
// ====================================================
// 0x6b99: WORD '*STARPO' codep=0x3b74 parp=0x6ba5
// ====================================================
// 0x6ba5: db 0x02 0x00 0x84 0x27 '   ''
  
// ====================================================
// 0x6ba9: WORD '*PERSON' codep=0x3b74 parp=0x6bb5
// ====================================================
// 0x6bb5: db 0x02 0x00 0xa3 0x27 '   ''
  
// ====================================================
// 0x6bb9: WORD '*SHIP-C' codep=0x3b74 parp=0x6bc5
// ====================================================
// 0x6bc5: db 0x02 0x00 0x48 0x2b '  H+'
  
// ====================================================
// 0x6bc9: WORD '*TRADE-' codep=0x3b74 parp=0x6bd5
// ====================================================
// 0x6bd5: db 0x02 0x00 0x53 0x2b '  S+'
  
// ====================================================
// 0x6bd9: WORD '*ITEMS-' codep=0x3b74 parp=0x6be5
// ====================================================
// 0x6be5: db 0x02 0x00 0x5e 0x2b '  ^+'
  
// ====================================================
// 0x6be9: WORD '*OPERAT' codep=0x3b74 parp=0x6bf5
// ====================================================
// 0x6bf5: db 0x02 0x00 0x71 0x2b '  q+'
  
// ====================================================
// 0x6bf9: WORD '*BANK' codep=0x3b74 parp=0x6c03
// ====================================================
// 0x6c03: db 0x02 0x00 0x8f 0x27 '   ''
  
// ====================================================
// 0x6c07: WORD '*STARSH' codep=0x3b74 parp=0x6c13
// ====================================================
// 0x6c13: db 0x02 0x00 0xe6 0x2b '   +'
  
// ====================================================
// 0x6c17: WORD '*EYE' codep=0x3b74 parp=0x6c20
// ====================================================
// 0x6c20: db 0x02 0x00 0xd3 0x03 '    '
  
// ====================================================
// 0x6c24: WORD '*PLIST' codep=0x3b74 parp=0x6c2f
// ====================================================
// 0x6c2f: db 0x00 0x00 0xc2 0x10 '    '
  
// ====================================================
// 0x6c33: WORD '*MISS' codep=0x3b74 parp=0x6c3d
// ====================================================
// 0x6c3d: db 0x00 0x00 0xd5 0x10 '    '
  
// ====================================================
// 0x6c41: WORD '*MESS' codep=0x3b74 parp=0x6c4b
// ====================================================
// 0x6c4b: db 0x00 0x00 0xfb 0x10 '    '
  
// ====================================================
// 0x6c4f: WORD ''VERSIO' codep=0x1d29 parp=0x6c5b
// ====================================================
// 0x6c5b: db 0x1d 0xaa '  '
  
// ====================================================
// 0x6c5d: WORD 'CTTOP' codep=0x1d29 parp=0x6c67
// ====================================================
// 0x6c67: db 0x32 0x00 '2 '
  
// ====================================================
// 0x6c69: WORD 'CTBOT' codep=0x1d29 parp=0x6c73
// ====================================================
// 0x6c73: db 0x02 0x00 '  '
  
// ====================================================
// 0x6c75: WORD '>0FONT' codep=0x224c parp=0x6c80
// ====================================================

void >0FONT()
{
  Push(0x2731); Push(0x066d); EXECUTES();
  Push(0x2690); Push(0x06e8); EXECUTES();
  Push(0x26ee); Push(0x0644); EXECUTES();
  Push(0); pp_FONT# ! 
}


// ====================================================
// 0x6ca6: WORD '?UPDATE' codep=0x6cb2 parp=0x6cb2
// ====================================================
// 0x6cb2: pop    cx
// 0x6cb3: or     cx,cx
// 0x6cb5: jns    6CED
// 0x6cb7: mov    bx,[5625]
// 0x6cbb: mov    dx,bx
// 0x6cbd: add    dx,07
// 0x6cc0: cmp    cx,dx
// 0x6cc2: jle    6CEB
// 0x6cc4: add    dx,0401
// 0x6cc8: cmp    dx,cx
// 0x6cca: jle    6CD2
// 0x6ccc: mov    byte ptr [bx+02],FF
// 0x6cd0: jmp    6CEB
// 0x6cd2: mov    bx,[5629]
// 0x6cd6: mov    dx,bx
// 0x6cd8: add    dx,07
// 0x6cdb: cmp    cx,dx
// 0x6cdd: jle    6CEB
// 0x6cdf: add    dx,0401
// 0x6ce3: cmp    dx,cx
// 0x6ce5: jle    6CEB
// 0x6ce7: mov    byte ptr [bx+02],FF
// 0x6ceb: jmp    6CFF
// 0x6ced: cmp    cx,65E1
// 0x6cf1: js     6CFF
// 0x6cf3: cmp    cx,66EF
// 0x6cf7: jns    6CFF
// 0x6cf9: mov    bx,65E0
// 0x6cfc: mov    byte ptr [bx],FF
// 0x6cff: push   cx
// 0x6d00: lodsw
// 0x6d01: mov    bx,ax
// 0x6d03: jmp    word ptr [bx]

// ====================================================
// 0x6d05: WORD 'C!' codep=0x224c parp=0x6d0c
// ====================================================

void C!()
{
  ?UPDATE C! 
}


// ====================================================
// 0x6d12: WORD '!' codep=0x224c parp=0x6d18
// ====================================================

void !()
{
  ?UPDATE ! 
}


// ====================================================
// 0x6d1e: WORD '+!' codep=0x224c parp=0x6d25
// ====================================================

void +!()
{
  ?UPDATE +! 
}


// ====================================================
// 0x6d2b: WORD '1.5!' codep=0x224c parp=0x6d34
// ====================================================

void 1.5!()
{
  ?UPDATE 1.5! 
}


// ====================================================
// 0x6d3a: WORD '2!' codep=0x224c parp=0x6d41
// ====================================================

void 2!()
{
  ?UPDATE 2! 
}


// ====================================================
// 0x6d47: WORD 'D!' codep=0x224c parp=0x6d4e
// ====================================================

void D!()
{
  2!();
  
}


// ====================================================
// 0x6d52: WORD 'ON' codep=0x224c parp=0x6d59
// ====================================================

void ON()
{
  ?UPDATE ON 
}


// ====================================================
// 0x6d5f: WORD '099' codep=0x224c parp=0x6d67
// ====================================================

void 099()
{
  ?UPDATE OFF 
}


// ====================================================
// 0x6d6d: WORD '2OFF' codep=0x224c parp=0x6d76
// ====================================================

void 2OFF()
{
  ?UPDATE Push(0); Push(0); ROT 2!();
  
}


// ====================================================
// 0x6d82: WORD 'CMOVE' codep=0x224c parp=0x6d8c
// ====================================================

void CMOVE()
{
  OVER ?UPDATE DROP CMOVE 
}


// ====================================================
// 0x6d96: WORD 'FILL' codep=0x224c parp=0x6d9f
// ====================================================

void FILL()
{
  Push(cc_3); PICK();
  ?UPDATE DROP FILL 
}


// ====================================================
// 0x6dab: WORD 'UNK_0x6dad' codep=0x224c parp=0x6dad
// ====================================================

void UNK_0x6dad()
{
  pp_UNK_0x55ff OFF pp_UNK_0x5603 OFF 
}


// ====================================================
// 0x6db7: WORD 'BLOCK' codep=0x224c parp=0x6dc1
// ====================================================

void BLOCK()
{
  UNK_0x6dad();
  BLOCK();
  
}


// ====================================================
// 0x6dc7: WORD 'LBLOCK' codep=0x224c parp=0x6dd2
// ====================================================

void LBLOCK()
{
  UNK_0x6dad();
  LBLOCK();
  
}


// ====================================================
// 0x6dd8: WORD 'LOAD' codep=0x224c parp=0x6de1
// ====================================================

void LOAD()
{
  DUP tt_SCR !();
  UNK_0x6dad();
  LOAD 
}


// ====================================================
// 0x6ded: WORD '-TEXT' codep=0x224c parp=0x6df7
// ====================================================

void -TEXT()
{
  Push(0); ROT Push(0); 
  do // (DO)
  {
  DROP OVER I + C@ OVER I + C@ - DUP 0= 
// ====================================================
// 0x6e16: WORD 'UNK_0x6e18' codep=0x0712 parp=0x6e18
// ====================================================
NOT 
  if (Pop() == 0) goto label205;
  LEAVE 
  label205:
  
  } while(...); // (LOOP) 0xffde
  SWAP DROP SWAP DROP 
}


// ====================================================
// 0x6e2d: WORD '$=' codep=0x224c parp=0x6e34
// ====================================================

void $=()
{
  2DUP C@ SWAP C@ = 
  if (Pop() == 0) goto label206;
  COUNT();
  ROT 1+ -TEXT();
  NOT 
  goto label207;
  
  label206:
  2DROP Push(0); 
  label207:
  
}


// ====================================================
// 0x6e56: WORD 'SIGFLD' codep=0x224c parp=0x6e61
// ====================================================

void SIGFLD()
{
  CREATE ,();
  
  (;CODE)();
// inlined assembler code
// 0x6e67: call   1649
// 0x6e6a: db 0xae 0x0b 0x1b 0x51 0xbf 0x6d 0x72 0x0f 0x90 0x16 '   Q mr   '
  
// ====================================================
// 0x6e74: WORD ':SIGNAT' codep=0x6e67 parp=0x6e80
// ====================================================
// 0x6e80: db 0xf0 0x03 '  '
  
// ====================================================
// 0x6e82: WORD ':TIMEST' codep=0x6e67 parp=0x6e8e
// ====================================================
// 0x6e8e: db 0xf4 0x03 '  '
  
// ====================================================
// 0x6e90: WORD ':CKSUM' codep=0x6e67 parp=0x6e9b
// ====================================================
// 0x6e9b: db 0xf6 0x03 '  '
  
// ====================================================
// 0x6e9d: WORD ':SAVE' codep=0x6e67 parp=0x6ea7
// ====================================================
// 0x6ea7: db 0xf8 0x03 '  '
  
// ====================================================
// 0x6ea9: WORD ':VERSIO' codep=0x6e67 parp=0x6eb5
// ====================================================
// 0x6eb5: db 0xfa 0x03 '  '
  
// ====================================================
// 0x6eb7: WORD 'THRU' codep=0x224c parp=0x6ec0
// ====================================================

void THRU()
{
  2DUP = 
  if (Pop() == 0) goto label208;
  DROP LOAD();
  
  goto label209;
  
  label208:
  1+ SWAP 
  do // (DO)
  {
  I DUP .();
  LOAD();
  
  } while(...); // (LOOP) 0xfff6
  
  label209:
  
}


// ====================================================
// 0x6ee4: WORD 'VA>BLK' codep=0x6eef parp=0x6eef
// ====================================================
// 0x6eef: pop    ax
// 0x6ef0: pop    dx
// 0x6ef1: mov    cx,000A
// 0x6ef4: shr    ax,1
// 0x6ef6: rcr    dx,1
// 0x6ef8: rcr    bx,1
// 0x6efa: loop   6EF4
// 0x6efc: mov    cx,0006
// 0x6eff: shr    bx,cl
// 0x6f01: push   bx
// 0x6f02: push   dx
// 0x6f03: lodsw
// 0x6f04: mov    bx,ax
// 0x6f06: jmp    word ptr [bx]

// ====================================================
// 0x6f08: WORD 'VA>BUF' codep=0x224c parp=0x6f13
// ====================================================

void VA>BUF()
{
  VA>BLK BLOCK();
  + 
}


// ====================================================
// 0x6f1b: WORD 'UNK_0x6f1d' codep=0x224c parp=0x6f1d
// ====================================================

void UNK_0x6f1d()
{
  :SIGNAT 2@ SWAP 
}


// ====================================================
// 0x6f25: WORD 'UNK_0x6f27' codep=0x224c parp=0x6f27
// ====================================================

void UNK_0x6f27()
{
  pp_OFFSET @ Push(0x05dc); = 
}

// 0x6f33: db 0x4c 0x22 0x8c 0x6e 0xae 0x0b 0xea 0x54 0xae 0x0b 0x5f 0x12 0xf8 0x54 0xae 0x0b 0x3e 0x13 0x90 0x16 0x4c 0x22 0x06 0x55 0xae 0x0b 0xb3 0x6e 0xae 0x0b 0x5f 0x12 0x90 0x16 'L" n   T  _  T  >   L" U   n  _   '
  
// ====================================================
// 0x6f55: WORD 'UNK_0x6f57' codep=0x224c parp=0x6f57
// ====================================================

void UNK_0x6f57()
{
  pp_'VERSIO @EXECUTE 
}


// ====================================================
// 0x6f5d: WORD 'MOUNTFI' codep=0x224c parp=0x6f69
// ====================================================

  label211:
  
void MOUNTFI()
{
  2DUP >TIB();
  pp_UNK_0x5711 @EXECUTE Push(0); 
  if (Pop() == 0) goto label210;
  2DUP UNK_0x6f57();
  
  goto label211;
  
  label210:
  2DROP 
}

// 0x6f83: db 0x4c 0x22 0x00 0x42 0x72 0x42 0x32 0x0e 0x80 0x47 0x90 0x16 0x4c 0x22 0xe6 0x41 0x72 0x42 0x32 0x0e 0x5a 0x47 0x90 0x16 'L" BrB2  G  L" ArB2 ZG  '
  
// ====================================================
// 0x6f9b: WORD 'MOUNTA' codep=0x224c parp=0x6fa6
// ====================================================

void MOUNTA()
{
  Push(0x6f85); pp_UNK_0x5711 !();
  UNK_0x3f09();
  UNK_0x530c UNK_0x4156 UNK_0x3254 UNK_0x2e43 UNK_0x4f45 UNK_0x674f UNK_0x9071 UNK_0x9d18 
// ====================================================
// 0x6fbf: WORD 'MOUNTB' codep=0x224c parp=0x6fca
// ====================================================
UNK_0x8671 UNK_0x4f4f UNK_0x4e57 UNK_0xc256 UNK_0x224e 
void MOUNTB()
{
  Push(0x6f91); pp_UNK_0x5711 !();
  UNK_0x3f09();
  UNK_0x530c UNK_0x4156 UNK_0x3254 UNK_0x2e44 UNK_0x4f45 UNK_0x674f UNK_0x9071 UNK_0x4c18 
// ====================================================
// 0x6fe3: WORD 'UNK_0x6fe5' codep=0x224c parp=0x6fe5
// ====================================================
UNK_0xb324 
void UNK_0x6fe5()
{
  ROT >R I SWAP U< SWAP R> 1+ U< AND 
}


// ====================================================
// 0x6ffb: WORD 'UNK_0x6ffd' codep=0x224c parp=0x6ffd
// ====================================================

void UNK_0x6ffd()
{
  UNK_0x6f27();
  
  if (Pop() == 0) goto label150;
  MOUNTB();
  
  goto label151;
  
  label150:
  MOUNTA();
  
  label151:
  
}


// ====================================================
// 0x700d: WORD 'UNK_0x700f' codep=0x224c parp=0x700f
// ====================================================

void UNK_0x700f()
{
  UNK_0x6f1d();
  1+ UNK_0x6fe5();
  NOT 
  if (Pop() == 0) goto label149;
  UNK_0x6ffd();
  
  label149:
  
}


// ====================================================
// 0x701f: WORD 'UNK_0x7021' codep=0x224c parp=0x7021
// ====================================================

void UNK_0x7021()
{
  CR 
  (.") string 27 "Place disk with the correct"
  CR TYPE 
  (.") string 17 " file and press a"
  CR 
  (.") string 15 "key when ready."
  KEY();
  DROP 
}


// ====================================================
// 0x7073: WORD 'UNK_0x7075' codep=0x224c parp=0x7075
// ====================================================

void UNK_0x7075()
{
  UNK_0x6f1d();
  DROP - Push(0); D16* 
}


// ====================================================
// 0x7081: WORD 'UNK_0x7083' codep=0x224c parp=0x7083
// ====================================================

void UNK_0x7083()
{
  >R >R DUP UNK_0x700f();
  UNK_0x7075();
  2DUP pp_UNK_0x6396 <D!> R> 16* Push(0); D+ pp_UNK_0x6390 <D!> pp_MEMSEG <!> pp_MEMOFF OFF 
  label155:
  pp_MEMSEG @ pp_MEMOFF @ pp_UNK_0x6396 2@ VA>BLK OVER Push(0x0400); SWAP - Push(0); pp_UNK_0x6390 2@ pp_UNK_0x6396 2@ D-();
  DMIN();
  DROP >R BLOCK();
  + @DS SWAP I' 
  if (Pop() == 0) goto label154;
  UPDATE();
  
  goto label156;
  
  label154:
  2SWAP 
  label156:
  I LCMOVE I pp_MEMOFF <+!> R> Push(0); pp_UNK_0x6396 2@ D+ 2DUP pp_UNK_0x6396 <D!> pp_UNK_0x6390 2@ D=();
  
  if (Pop() == 0) goto label155;
  R> DROP 
}


// ====================================================
// 0x7111: WORD 'MEM>DSK' codep=0x224c parp=0x711d
// ====================================================

void MEM>DSK()
{
  Push(1); UNK_0x7083();
  
}


// ====================================================
// 0x7123: WORD 'MEM<DSK' codep=0x224c parp=0x712f
// ====================================================

void MEM<DSK()
{
  Push(0); UNK_0x7083();
  
}


// ====================================================
// 0x7135: WORD 'UNK_0x7137' codep=0x7137 parp=0x7137
// ====================================================
// 0x7137: mov    bx,sp
// 0x7139: mov    ax,0400
// 0x713c: sub    ax,[bx+02]
// 0x713f: xor    dx,dx
// 0x7141: mov    cx,[bx+04]
// 0x7144: div    cx
// 0x7146: cmp    ax,[bx+06]
// 0x7149: jle    7155
// 0x714b: mov    ax,[bx+06]
// 0x714e: mul    cx
// 0x7150: add    [bx+02],ax
// 0x7153: jmp    7179
// 0x7155: sub    [bx+06],ax
// 0x7158: inc    word ptr [bx]
// 0x715a: mov    word ptr [bx+02],0000
// 0x715f: mov    ax,0400
// 0x7162: xor    dx,dx
// 0x7164: div    cx
// 0x7166: mov    cx,ax
// 0x7168: mov    ax,[bx+06]
// 0x716b: xor    dx,dx
// 0x716d: div    cx
// 0x716f: add    [bx],ax
// 0x7171: mov    ax,dx
// 0x7173: mul    word ptr [bx+04]
// 0x7176: mov    [bx+02],ax
// 0x7179: pop    ax
// 0x717a: pop    cx
// 0x717b: add    sp,04
// 0x717e: push   cx
// 0x717f: push   ax
// 0x7180: lodsw
// 0x7181: mov    bx,ax
// 0x7183: jmp    word ptr [bx]
// 0x7185: xchg   [bx+di+58],si
// 0x7188: cmp    ax,0090
// 0x718b: js     7199
// 0x718d: mov    bx,[54DE]
// 0x7191: add    bx,03
// 0x7194: sub    ax,0090
// 0x7197: jmp    71BD
// 0x7199: cmp    ax,0060
// 0x719c: js     71AA
// 0x719e: mov    bx,[54DE]
// 0x71a2: add    bx,02
// 0x71a5: sub    ax,0060
// 0x71a8: jmp    71BD
// 0x71aa: cmp    ax,0030
// 0x71ad: js     71B9
// 0x71af: mov    bx,[54DE]
// 0x71b3: inc    bx
// 0x71b4: sub    ax,0030
// 0x71b7: jmp    71BD
// 0x71b9: mov    bx,[54DE]
// 0x71bd: mov    cx,0015
// 0x71c0: imul   cx
// 0x71c2: push   ax
// 0x71c3: push   bx
// 0x71c4: lodsw
// 0x71c5: mov    bx,ax
// 0x71c7: jmp    word ptr [bx]
// 0x71c9: dec    sp
// 0x71ca: and    cl,[bx+06]
// 0x71cd: scasw
// 0x71ce: and    dx,di
// 0x71d0: sbb    bp,ax
// 0x71d2: jnz    7178
// 0x71d4: xchg   ax,dx
// 0x71d5: or     al,F2
// 0x71d7: push   cs
// 0x71d8: test   [bx+di-41],si
// 0x71db: db     6D
// 0x71dc: jb     71ED
// 0x71de: jb     71EF
// 0x71e0: nop    
// 0x71e1: push   ss

// ====================================================
// 0x71e2: WORD 'FILE-NA' codep=0x71d1 parp=0x71ee
// ====================================================
// 0x71ee: db 0x00 ' '
  
// ====================================================
// 0x71ef: WORD 'FILE-TY' codep=0x71d1 parp=0x71fb
// ====================================================
// 0x71fb: db 0x0c ' '
  
// ====================================================
// 0x71fc: WORD 'FILE-ST' codep=0x71d1 parp=0x7208
// ====================================================

// ====================================================
// 0x7200: WORD 'UNK_0x7202' codep=0x4c49 parp=0x7202
// ====================================================
// 0x7208: db 0x0d ' '
  
// ====================================================
// 0x7209: WORD 'FILE-EN' codep=0x71d1 parp=0x7215
// ====================================================
// 0x7215: db 0x0f ' '
  
// ====================================================
// 0x7216: WORD 'FILE-#R' codep=0x71d1 parp=0x7222
// ====================================================
// 0x7222: db 0x11 ' '
  
// ====================================================
// 0x7223: WORD 'FILE-RL' codep=0x71d1 parp=0x722f
// ====================================================
// 0x722f: db 0x13 ' '
  
// ====================================================
// 0x7230: WORD 'FILE-SL' codep=0x71d1 parp=0x723c
// ====================================================

// ====================================================
// 0x723b: WORD 'UNK_0x723d' codep=0x1471 parp=0x723d
// ====================================================

// ====================================================
// 0x723d: WORD 'UNK_0x723f' codep=0x723f parp=0x723f
// ====================================================
// 0x723f: pop    ax
// 0x7240: sub    ax,3E80
// 0x7243: mov    cx,0006
// 0x7246: xor    dx,dx
// 0x7248: shr    ax,1
// 0x724a: rcr    dl,1
// 0x724c: loop   7248
// 0x724e: shl    dx,1
// 0x7250: shl    dx,1
// 0x7252: push   dx
// 0x7253: push   ax
// 0x7254: lodsw
// 0x7255: mov    bx,ax
// 0x7257: jmp    word ptr [bx]

// ====================================================
// 0x7259: WORD 'FILE:' codep=0x224c parp=0x7263
// ====================================================

void FILE:()
{
  pp_LSCAN Push(0x000c); Push(cc_BL); FILL();
  Push(cc_BL); WORD COUNT();
  pp_LSCAN SWAP CMOVE();
  tt_BLK @ >R tt_>IN @ >R Push(cc_-1); Push(0x00a3); Push(0); 
  do // (DO)
  {
  pp_LSCAN Push(0x000c); I FILE-NA -TEXT();
  NOT 
  if (Pop() == 0) goto label212;
  DROP I LEAVE 
  label212:
  
  } while(...); // (LOOP) 0xffe6
  DUP 0< ?UNRAVEL();
  R> tt_>IN <!> R> tt_BLK <!> 
}


// ====================================================
// 0x72bf: WORD '>FILE' codep=0x224c parp=0x72c9
// ====================================================

void >FILE()
{
  FILE-ST 2@ SWAP OVER - 1+ MEM>DSK();
  
}


// ====================================================
// 0x72d9: WORD 'FILE<' codep=0x224c parp=0x72e3
// ====================================================

void FILE<()
{
  FILE-ST 2@ SWAP OVER - 1+ MEM<DSK();
  
}


// ====================================================
// 0x72f3: WORD 'UNK_0x72f5' codep=0x224c parp=0x72f5
// ====================================================

void UNK_0x72f5()
{
  UNK_0x6f27();
  
  if (Pop() == 0) goto label214;
  MOUNTB();
  
  label214:
  
}


// ====================================================
// 0x72ff: WORD 'UNK_0x7301' codep=0x224c parp=0x7301
// ====================================================

void UNK_0x7301()
{
  UNK_0x72f5();
  UNK_0x723f Push(cc_4); PICK();
  pp_UNK_0x5603 <!> UNK_0x7137 BLOCK();
  + DUP pp_UNK_0x5607 <!> SWAP pp_UNK_0x55ff <!> 
}


// ====================================================
// 0x7321: WORD 'UNK_0x7323' codep=0x224c parp=0x7323
// ====================================================

void UNK_0x7323()
{
  OVER pp_UNK_0x55ff @ = OVER pp_UNK_0x5603 @ = AND NOT 
}


// ====================================================
// 0x7339: WORD '@RECORD' codep=0x224c parp=0x7345
// ====================================================

void @RECORD()
{
  UNK_0x7323();
  
  if (Pop() == 0) goto label213;
  OVER FILE-RL C@ Push(cc_3); PICK();
  FILE-ST @ UNK_0x7301();
  
  goto label215;
  
  label213:
  2DROP pp_UNK_0x5607 @ 
  label215:
  
}


// ====================================================
// 0x7367: WORD 'AFIELD' codep=0x224c parp=0x7372
// ====================================================

void AFIELD()
{
  CREATE ROT DUP C,();
  >R SWAP C,();
  C,();
  I FILE-RL C@ C,();
  R> FILE-ST @ ,();
  
  (;CODE)();
// inlined assembler code
// 0x7394: call   1649
// 0x7397: db 0xb4 0x0d 0x50 0x0e 0x92 0x0c 0x11 0x56 0xae 0x0b 0x5f 0x12 0x07 0x13 0xfa 0x15 0x1b 0x00 0x7e 0x6c 0xdc 0x1b 0x0a 0x41 0x46 0x49 0x45 0x4c 0x44 0x20 0x65 0x72 0x72 0x42 0x06 0x90 0x0e 0x6c 0x3a 0x60 0x16 0x34 0x00 0x11 0x56 0xae 0x0b 0x1f 0x56 0xae 0x0b 0x21 0x73 0xfa 0x15 0x18 0x00 0x50 0x0e 0x7f 0x3b 0x72 0x0f 0x92 0x0c 0x50 0x0e 0x87 0x3b 0x72 0x0f 0xae 0x0b 0xff 0x72 0x60 0x16 0x08 0x00 0xde 0x0d 0x05 0x56 0xae 0x0b 0x90 0x0e 0xe7 0x0f 0x92 0x0c 0x72 0x0f 0x90 0x16 0xf8 0x73 0x5b 0x33 0xc0 0x8a 0x47 0x01 0x05 0xe1 0x65 0x50 0xad 0x8b 0xd8 0xff 0x27 '  P    V  _       ~l   AFIELD errB   l:` 4  V   V  !s    P ;r   P  ;r    r`      V        r    s[3  G   eP    ''
  
// ====================================================
// 0x7407: WORD 'IFIELD' codep=0x224c parp=0x7412
// ====================================================

// ====================================================
// 0x7412: WORD 'UNK_0x7414' codep=0x064f parp=0x7414
// ====================================================

void IFIELD()
{
  CREATE ROT C,();
  SWAP C,();
  C,();
  
  (;CODE)();
// inlined assembler code
// 0x7420: call   1649
// 0x7423: db 0x41 0x0e 0xb4 0x0d 0x92 0x0c 0xfa 0x15 0x27 0x00 0x11 0x56 0xae 0x0b 0x50 0x0e 0x92 0x0c 0x5f 0x12 0x07 0x13 0xfa 0x15 0x17 0x00 0x7e 0x6c 0xdc 0x1b 0x0a 0x49 0x46 0x49 0x45 0x4c 0x44 0x20 0x65 0x72 0x72 0x42 0x06 0x90 0x0e 0x6c 0x3a 0x90 0x0e 0xf6 0x73 0x90 0x16 'A       '  V  P   _       ~l   IFIELD errB   l:   s  '
  
// ====================================================
// 0x7458: WORD 'INST-SI' codep=0x7420 parp=0x7464
// ====================================================
// 0x7464: db 0x00 ' '
  // 0x7465: add    [bp+di],al

// ====================================================
// 0x7467: WORD 'INST-PR' codep=0x7420 parp=0x7473
// ====================================================
// 0x7473: db 0x00 0x03 0x03 '   '
  
// ====================================================
// 0x7476: WORD 'INST-OF' codep=0x7420 parp=0x7482
// ====================================================
// 0x7482: db 0x00 0x06 0x03 '   '
  
// ====================================================
// 0x7485: WORD 'INST-CL' codep=0x7420 parp=0x7491
// ====================================================
// 0x7491: db 0x00 0x09 0x01 '   '
  
// ====================================================
// 0x7494: WORD 'INST-SP' codep=0x7420 parp=0x74a0
// ====================================================
// 0x74a0: db 0x00 0x0a 0x01 '   '
  
// ====================================================
// 0x74a3: WORD 'INST-QT' codep=0x7420 parp=0x74af
// ====================================================
// 0x74af: db 0x00 0x0b 0x02 '   '
  
// ====================================================
// 0x74b2: WORD 'INST-X' codep=0x7420 parp=0x74bd
// ====================================================
// 0x74bd: db 0x00 0x0d 0x02 '   '
  
// ====================================================
// 0x74c0: WORD 'INST-Y' codep=0x7420 parp=0x74cb
// ====================================================
// 0x74cb: db 0x00 0x0f 0x02 '   '
  
// ====================================================
// 0x74ce: WORD 'UNK_0x74d0' codep=0x224c parp=0x74d0
// ====================================================

void UNK_0x74d0()
{
  INST-SI 1.5!();
  
}


// ====================================================
// 0x74d6: WORD 'UNK_0x74d8' codep=0x224c parp=0x74d8
// ====================================================

void UNK_0x74d8()
{
  INST-PR 1.5!();
  
}


// ====================================================
// 0x74de: WORD 'UNK_0x74e0' codep=0x224c parp=0x74e0
// ====================================================

void UNK_0x74e0()
{
  INST-OF 1.5!();
  
}


// ====================================================
// 0x74e6: WORD 'UNK_0x74e8' codep=0x224c parp=0x74e8
// ====================================================

void UNK_0x74e8()
{
  INST-CL C!();
  
}


// ====================================================
// 0x74ee: WORD '!INST-S' codep=0x224c parp=0x74fa
// ====================================================

void !INST-S()
{
  INST-SP C!();
  
}


// ====================================================
// 0x7500: WORD 'UNK_0x7502' codep=0x224c parp=0x7502
// ====================================================

void UNK_0x7502()
{
  INST-SI 1.5@ 
}


// ====================================================
// 0x7508: WORD 'UNK_0x750a' codep=0x224c parp=0x750a
// ====================================================

void UNK_0x750a()
{
  INST-PR 1.5@ 
}


// ====================================================
// 0x7510: WORD 'UNK_0x7512' codep=0x224c parp=0x7512
// ====================================================

void UNK_0x7512()
{
  INST-OF 1.5@ 
}


// ====================================================
// 0x7518: WORD '@INST-C' codep=0x224c parp=0x7524
// ====================================================

void @INST-C()
{
  INST-CL C@ 
}


// ====================================================
// 0x752a: WORD '@INST-S' codep=0x224c parp=0x7536
// ====================================================

void @INST-S()
{
  INST-SP C@ 
}


// ====================================================
// 0x753c: WORD '=SPECIE' codep=0x224c parp=0x7548
// ====================================================

void =SPECIE()
{
  @INST-S();
  = 
}


// ====================================================
// 0x754e: WORD '>C' codep=0x7555 parp=0x7555
// ====================================================
// 0x7555: mov    bx,[5634]
// 0x7559: pop    ax
// 0x755a: mov    [bx+02],al
// 0x755d: pop    word ptr [bx]
// 0x755f: sub    word ptr [5634],03
// 0x7564: lodsw
// 0x7565: mov    bx,ax
// 0x7567: jmp    word ptr [bx]

// ====================================================
// 0x7569: WORD 'C>' codep=0x7570 parp=0x7570
// ====================================================
// 0x7570: add    word ptr [5634],03
// 0x7575: mov    bx,[5634]
// 0x7579: push   word ptr [bx]
// 0x757b: xor    ax,ax
// 0x757d: mov    al,[bx+02]
// 0x7580: push   ax
// 0x7581: lodsw
// 0x7582: mov    bx,ax
// 0x7584: jmp    word ptr [bx]

// ====================================================
// 0x7586: WORD 'CI' codep=0x758d parp=0x758d
// ====================================================
// 0x758d: mov    bx,[5634]
// 0x7591: push   word ptr [bx+03]
// 0x7594: xor    ax,ax
// 0x7596: mov    al,[bx+05]
// 0x7599: push   ax
// 0x759a: lodsw
// 0x759b: mov    bx,ax
// 0x759d: jmp    word ptr [bx]

// ====================================================
// 0x759f: WORD 'CDROP' codep=0x224c parp=0x75a9
// ====================================================

void CDROP()
{
  C> 2DROP 
}


// ====================================================
// 0x75af: WORD 'CI'' codep=0x224c parp=0x75b7
// ====================================================

void CI'()
{
  C> CI 2SWAP >C 
}


// ====================================================
// 0x75c1: WORD 'CJ' codep=0x224c parp=0x75c8
// ====================================================

void CJ()
{
  C> CI'();
  2SWAP >C 
}


// ====================================================
// 0x75d2: WORD 'COVER' codep=0x224c parp=0x75dc
// ====================================================

void COVER()
{
  CI'();
  >C 
}


// ====================================================
// 0x75e2: WORD 'CDEPTH' codep=0x75ed parp=0x75ed
// ====================================================
// 0x75ed: mov    ax,658A
// 0x75f0: sub    ax,[5634]
// 0x75f4: mov    cx,0003
// 0x75f7: div    cl
// 0x75f9: push   ax
// 0x75fa: lodsw
// 0x75fb: mov    bx,ax
// 0x75fd: jmp    word ptr [bx]

// ====================================================
// 0x75ff: WORD '?NULL' codep=0x224c parp=0x7609
// ====================================================

void ?NULL()
{
  CI D0=();
  
}


// ====================================================
// 0x760f: WORD '?-NULL' codep=0x224c parp=0x761a
// ====================================================

void ?-NULL()
{
  ?NULL();
  NOT 
}


// ====================================================
// 0x7620: WORD '?CHILD' codep=0x224c parp=0x762b
// ====================================================

void ?CHILD()
{
  UNK_0x7512();
  D0=();
  NOT 
}


// ====================================================
// 0x7633: WORD 'UNK_0x7635' codep=0x224c parp=0x7635
// ====================================================

void UNK_0x7635()
{
  CI UNK_0x7502();
  D=();
  
}


// ====================================================
// 0x763d: WORD '!IADDR' codep=0x224c parp=0x7648
// ====================================================

void !IADDR()
{
  pp_UNK_0x639c <1.5!> 
}


// ====================================================
// 0x764e: WORD 'UNK_0x7650' codep=0x7650 parp=0x7650
// ====================================================
// 0x7650: mov    ax,[56F4]
// 0x7654: push   ax
// 0x7655: lodsw
// 0x7656: mov    bx,ax
// 0x7658: jmp    word ptr [bx]

// ====================================================
// 0x765a: WORD 'UNK_0x765c' codep=0x224c parp=0x765c
// ====================================================

void UNK_0x765c()
{
  @DS pp_IBFR pp_UNK_0x5676 @ pp_UNK_0x56ec @ pp_UNK_0x56f8 @ LCMOVE 
}


// ====================================================
// 0x7670: WORD 'UNK_0x7672' codep=0x224c parp=0x7672
// ====================================================

void UNK_0x7672()
{
  pp_UNK_0x5676 @ pp_UNK_0x56ec @ @DS pp_IBFR pp_UNK_0x56f8 @ LCMOVE 
}


// ====================================================
// 0x7686: WORD 'UNK_0x7688' codep=0x224c parp=0x7688
// ====================================================

void UNK_0x7688()
{
  UNK_0x72f5();
  VA>BUF();
  
}


// ====================================================
// 0x768e: WORD 'PRIORIT' codep=0x769a parp=0x769a
// ====================================================
// 0x769a: pop    ax
// 0x769b: or     ax,ax
// 0x769d: jz     76C6
// 0x769f: mov    bx,ax
// 0x76a1: sub    bx,02
// 0x76a4: push   es
// 0x76a5: push   word ptr [566A]
// 0x76a9: pop    es
// 0x76aa: call   2F36
// 0x76ad: push   word ptr [5672]
// 0x76b1: pop    es
// 0x76b2: call   2F36
// 0x76b5: shr    bx,1
// 0x76b7: shr    ax,1
// 0x76b9: push   word ptr [566E]
// 0x76bd: pop    es
// 0x76be: call   4AB8
// 0x76c1: pop    es
// 0x76c2: shl    bx,1
// 0x76c4: mov    ax,bx
// 0x76c6: push   ax
// 0x76c7: lodsw
// 0x76c8: mov    bx,ax
// 0x76ca: jmp    word ptr [bx]

// ====================================================
// 0x76cc: WORD 'UNK_0x76ce' codep=0x224c parp=0x76ce
// ====================================================

void UNK_0x76ce()
{
  DUP Push(cc_9); + C@ DUP Push(0x0030); = 
  if (Pop() == 0) goto label230;
  DROP Push(0x000b); + C@ 1+ 
  goto label231;
  
  label230:
  SWAP DROP FILE-SL C@ 
  label231:
  Push(cc_IHEADLE); + 
}


// ====================================================
// 0x7700: WORD 'UNK_0x7702' codep=0x224c parp=0x7702
// ====================================================

void UNK_0x7702()
{
  pp_UNK_0x56f4 <!> pp_UNK_0x5676 @ pp_UNK_0x5672 @ UNK_0x7650 L@ DUP pp_UNK_0x56ec <!> L@ pp_UNK_0x56f8 <!> pp_UNK_0x566a @ UNK_0x7650 L@ pp_UNK_0x566e @ UNK_0x7650 2/ LC@ !IADDR();
  
}


// ====================================================
// 0x7734: WORD 'UNK_0x7736' codep=0x224c parp=0x7736
// ====================================================

void UNK_0x7736()
{
  pp_UNK_0x56e0 @ 
  if (Pop() == 0) goto label218;
  SWAP >R pp_UNK_0x566a @ Push(0); pp_UNK_0x56e0 @ I LWSCAN 
  if (Pop() == 0) goto label219;
  DUP 2/ pp_UNK_0x566e @ SWAP LC@ ROT = NOT 
  if (Pop() == 0) goto label221;
  pp_UNK_0x566a @ SWAP 2+ pp_UNK_0x56e0 @ OVER 2/ - I LWSCAN 
  goto label223;
  
  label221:
  Push(1); 
  label223:
  
  goto label222;
  
  label219:
  DROP Push(0); 
  label222:
  R> DROP 
  goto label220;
  
  label218:
  2DROP Push(0); 
  label220:
  
}


// ====================================================
// 0x779c: WORD 'UNK_0x779e' codep=0x224c parp=0x779e
// ====================================================

void UNK_0x779e()
{
  2+ LC@ 
}


// ====================================================
// 0x77a4: WORD 'UNK_0x77a6' codep=0x224c parp=0x77a6
// ====================================================

void UNK_0x77a6()
{
  >R pp_UNK_0x5672 @ Push(0); pp_UNK_0x56e0 @ R> LWSCAN 
}


// ====================================================
// 0x77b8: WORD 'UNK_0x77ba' codep=0x224c parp=0x77ba
// ====================================================

void UNK_0x77ba()
{
  pp_IBFR 2+ C@ 
  if (Pop() == 0) goto label217;
  UNK_0x765c();
  Push(0); pp_IBFR 2+ <C!> NULL !IADDR();
  
  label217:
  
}


// ====================================================
// 0x77d4: WORD 'UNK_0x77d6' codep=0x224c parp=0x77d6
// ====================================================

void UNK_0x77d6()
{
  pp_UNK_0x5676 @ pp_UNK_0x56ec @ UNK_0x779e();
  
  if (Pop() == 0) goto label226;
  pp_UNK_0x5676 @ pp_UNK_0x56ec @ Push(cc_3); + @DS pp_UNK_0x639c 1.5@ UNK_0x7688();
  ?UPDATE pp_UNK_0x56f8 @ Push(cc_3); - LCMOVE Push(0); pp_UNK_0x5676 @ pp_UNK_0x56ec @ 2+ LC! 
  label226:
  
}


// ====================================================
// 0x7814: WORD 'UNK_0x7816' codep=0x224c parp=0x7816
// ====================================================

void UNK_0x7816()
{
  pp_UNK_0x56e0 @ 1- 2* UNK_0x7702();
  UNK_0x77d6();
  Push(cc_-1); pp_UNK_0x56e0 <+!> pp_UNK_0x56f8 @ NEGATE pp_UNK_0x56e8 <+!> Push(0); pp_UNK_0x566a @ UNK_0x7650 L! Push(0x270f); pp_UNK_0x5672 @ UNK_0x7650 L! pp_UNK_0x56ec @ pp_UNK_0x56f0 <!> 
  label228:
  pp_UNK_0x56ec @ pp_UNK_0x56f8 @ + UNK_0x77a6();
  
  if (Pop() == 0) goto label227;
  UNK_0x7702();
  pp_UNK_0x5676 @ pp_UNK_0x56ec @ OVER pp_UNK_0x56f0 @ pp_UNK_0x56f8 @ LCMOVE pp_UNK_0x56f0 @ pp_UNK_0x5672 @ UNK_0x7650 L! pp_UNK_0x56f8 @ pp_UNK_0x56f0 <+!> 
  goto label228;
  
  label227:
  
}


// ====================================================
// 0x7890: WORD 'UNK_0x7892' codep=0x224c parp=0x7892
// ====================================================

  label229:
  
void UNK_0x7892()
{
  pp_UNK_0x56e4 @ pp_UNK_0x56e8 @ - Push(0x0111); < 
  if (Pop() == 0) goto label225;
  UNK_0x7816();
  
  goto label229;
  
  label225:
  
}


// ====================================================
// 0x78ae: WORD '1BTN' codep=0x7394 parp=0x78b7
// ====================================================
// 0x78b7: db 0x3a 0x00 0x0c 0x49 0x57 0x6e ':  IWn'
  
// ====================================================
// 0x78bd: WORD 'AFIELD:' codep=0x224c parp=0x78c9
// ====================================================

void AFIELD:()
{
  HEAD:();
  Push(0x7394); ,();
  ROT DUP C,();
  >R SWAP C,();
  C,();
  I FILE-RL C@ C,();
  R> FILE-ST @ ,();
  
}


// ====================================================
// 0x78f1: WORD 'IFIELD:' codep=0x224c parp=0x78fd
// ====================================================

void IFIELD:()
{
  HEAD:();
  Push(0x7420); ,();
  ROT C,();
  SWAP C,();
  C,();
  
}


// ====================================================
// 0x7911: WORD '#BTN' codep=0x7394 parp=0x791a
// ====================================================
// 0x791a: db 0x3a 0x48 0x01 0x49 0x57 0x6e ':H IWn'
  
// ====================================================
// 0x7920: WORD 'UNK_0x7922' codep=0x224c parp=0x7922
// ====================================================

void UNK_0x7922()
{
  UNK_0x7892();
  2DUP !IADDR();
  UNK_0x7688();
  DUP UNK_0x76ce();
  DUP Push(cc_3); + DUP pp_IBFR !();
  pp_UNK_0x56f8 <!> pp_IBFR Push(cc_3); + SWAP CMOVE();
  Push(0); pp_IBFR 2+ <C!> pp_UNK_0x56e0 @ 2* pp_UNK_0x56f4 <!> Push(1); pp_UNK_0x56e0 <+!> pp_UNK_0x639c 1.5@ pp_UNK_0x566e @ UNK_0x7650 2/ LC! pp_UNK_0x566a @ UNK_0x7650 L! pp_UNK_0x56e8 @ pp_UNK_0x56ec <!> pp_UNK_0x56f8 @ pp_UNK_0x56e8 <+!> pp_UNK_0x56ec @ pp_UNK_0x5672 @ UNK_0x7650 L! UNK_0x765c();
  
}


// ====================================================
// 0x7996: WORD 'SET-CUR' codep=0x224c parp=0x79a2
// ====================================================

void SET-CUR()
{
  CDEPTH 0> 
  if (Pop() == 0) goto label216;
  UNK_0x77ba();
  ?-NULL();
  
  if (Pop() == 0) goto label216;
  CI UNK_0x7736();
  
  if (Pop() == 0) goto label224;
  PRIORIT UNK_0x7702();
  UNK_0x7672();
  
  goto label232;
  
  label224:
  CI UNK_0x7922();
  
  label232:
  @INST-C();
  pp_FILE# <!> @INST-S();
  pp_RECORD# <!> 
  label216:
  
}


// ====================================================
// 0x79d6: WORD 'ICLOSE' codep=0x224c parp=0x79e1
// ====================================================

void ICLOSE()
{
  UNK_0x77ba();
  CDROP();
  COVER();
  ?-NULL();
  
  if (Pop() == 0) goto label233;
  SET-CUR();
  UNK_0x7512();
  
  goto label234;
  
  label233:
  NULL 
  label234:
  pp_UNK_0x63a2 <1.5!> CDROP();
  SET-CUR();
  
}


// ====================================================
// 0x7a01: WORD '*CLOSE' codep=0x224c parp=0x7a0c
// ====================================================

void *CLOSE()
{
  Push(0); 
  do // (DO)
  {
  ICLOSE();
  
  } while(...); // (LOOP) 0xfffc
  
}


// ====================================================
// 0x7a18: WORD '>C+S' codep=0x224c parp=0x7a21
// ====================================================

void >C+S()
{
  >C SET-CUR();
  
}


// ====================================================
// 0x7a27: WORD '@>C+S' codep=0x224c parp=0x7a31
// ====================================================

void @>C+S()
{
  1.5@ >C+S();
  
}


// ====================================================
// 0x7a37: WORD 'IOPEN' codep=0x224c parp=0x7a41
// ====================================================

void IOPEN()
{
  UNK_0x7512();
  2DUP pp_UNK_0x63a2 <1.5!> >C+S();
  
}


// ====================================================
// 0x7a4d: WORD 'CCLR' codep=0x224c parp=0x7a56
// ====================================================

void CCLR()
{
  UNK_0x77ba();
  Push(cc_UNK_0x50fa); pp_CXSP <!> pp_UNK_0x651b Push(0x0078); Push(0); FILL();
  
}


// ====================================================
// 0x7a6a: WORD 'UNK_0x7a6c' codep=0x224c parp=0x7a6c
// ====================================================

void UNK_0x7a6c()
{
  pp_UNK_0x63a2 1.5@ 
}


// ====================================================
// 0x7a72: WORD '?LAST' codep=0x224c parp=0x7a7c
// ====================================================

void ?LAST()
{
  UNK_0x7502();
  UNK_0x7a6c();
  D=();
  
}


// ====================================================
// 0x7a84: WORD '?FIRST' codep=0x224c parp=0x7a8f
// ====================================================

void ?FIRST()
{
  CI UNK_0x7a6c();
  D=();
  
}


// ====================================================
// 0x7a97: WORD '>C+' codep=0x224c parp=0x7a9f
// ====================================================

void >C+()
{
  SET-CUR();
  IOPEN();
  CDROP();
  >C 
}


// ====================================================
// 0x7aa9: WORD 'INEXT' codep=0x224c parp=0x7ab3
// ====================================================

void INEXT()
{
  ?-NULL();
  
  if (Pop() == 0) goto label235;
  UNK_0x7502();
  CDROP();
  >C+S();
  
  label235:
  
}


// ====================================================
// 0x7ac1: WORD 'IPREV' codep=0x224c parp=0x7acb
// ====================================================

void IPREV()
{
  ?-NULL();
  
  if (Pop() == 0) goto label236;
  UNK_0x750a();
  CDROP();
  >C+S();
  
  label236:
  
}


// ====================================================
// 0x7ad9: WORD 'IFIRST' codep=0x224c parp=0x7ae4
// ====================================================

void IFIRST()
{
  CDROP();
  UNK_0x7a6c();
  >C+S();
  
}


// ====================================================
// 0x7aec: WORD 'ILAST' codep=0x224c parp=0x7af6
// ====================================================

void ILAST()
{
  IFIRST();
  IPREV();
  
}


// ====================================================
// 0x7afc: WORD 'VCLR' codep=0x224c parp=0x7b05
// ====================================================

void VCLR()
{
  Push(cc_UNK_0x50fe); pp_UNK_0x5638 <!> 
}


// ====================================================
// 0x7b0d: WORD '>V' codep=0x7b14 parp=0x7b14
// ====================================================
// 0x7b14: mov    bx,[5638]
// 0x7b18: pop    word ptr [bx]
// 0x7b1a: sub    word ptr [5638],02
// 0x7b1f: lodsw
// 0x7b20: mov    bx,ax
// 0x7b22: jmp    word ptr [bx]

// ====================================================
// 0x7b24: WORD 'V>' codep=0x7b2b parp=0x7b2b
// ====================================================
// 0x7b2b: add    word ptr [5638],02
// 0x7b30: mov    bx,[5638]
// 0x7b34: push   word ptr [bx]
// 0x7b36: lodsw
// 0x7b37: mov    bx,ax
// 0x7b39: jmp    word ptr [bx]

// ====================================================
// 0x7b3b: WORD 'VI' codep=0x7b42 parp=0x7b42
// ====================================================
// 0x7b42: mov    bx,[5638]
// 0x7b46: push   word ptr [bx+02]
// 0x7b49: lodsw
// 0x7b4a: mov    bx,ax
// 0x7b4c: jmp    word ptr [bx]
// 0x7b4e: dec    sp
// 0x7b4f: and    bh,[bx+si-2189]
// 0x7b53: push   si
// 0x7b54: scasb
// 0x7b55: or     cx,ax
// 0x7b57: or     ax,15FA
// 0x7b5a: adc    al,00
// 0x7b5c: and    [bx],cl
// 0x7b5e: mov    ax,5015
// 0x7b61: push   cs
// 0x7b62: add    ax,0010
// 0x7b65: ja     7B3B
// 0x7b67: ja     7B39
// 0x7b69: adc    ax,FFF6
// 0x7b6c: mov    al,[9079]
// 0x7b6f: push   ss

// ====================================================
// 0x7b70: WORD 'SAVE-BU' codep=0x224c parp=0x7b7c
// ====================================================

void SAVE-BU()
{
  SAVE-BUFFERS();
  INIT();
  
}


// ====================================================
// 0x7b82: WORD 'FLUSH' codep=0x224c parp=0x7b8c
// ====================================================

void FLUSH()
{
  SAVE-BU();
  EMPTY-BUFFERS();
  
}


// ====================================================
// 0x7b92: WORD 'MT' codep=0x224c parp=0x7b99
// ====================================================

void MT()
{
  EMPTY-BUFFERS();
  EMPTY();
  
}


// ====================================================
// 0x7b9f: WORD 'IINSERT' codep=0x224c parp=0x7bab
// ====================================================

void IINSERT()
{
  >C+S();
  ?CHILD();
  
  if (Pop() == 0) goto label237;
  UNK_0x7512();
  2SWAP UNK_0x74e0();
  IOPEN();
  UNK_0x74d0();
  CI INEXT();
  UNK_0x750a();
  2SWAP UNK_0x74d8();
  IPREV();
  UNK_0x74d8();
  CI IPREV();
  UNK_0x74d0();
  
  goto label238;
  
  label237:
  UNK_0x74e0();
  IOPEN();
  CI UNK_0x74d0();
  CI UNK_0x74d8();
  
  label238:
  CDROP();
  ICLOSE();
  
}


// ====================================================
// 0x7be7: WORD '<INSERT' codep=0x224c parp=0x7bf3
// ====================================================

void <INSERT()
{
  >C+S();
  UNK_0x750a();
  2SWAP UNK_0x74d8();
  CI IPREV();
  UNK_0x74d0();
  UNK_0x74d8();
  CI IPREV();
  UNK_0x74d0();
  ICLOSE();
  
}


// ====================================================
// 0x7c0d: WORD '>INSERT' codep=0x224c parp=0x7c19
// ====================================================

void >INSERT()
{
  >C+S();
  UNK_0x7502();
  ICLOSE();
  <INSERT();
  
}


// ====================================================
// 0x7c23: WORD 'IEXTRAC' codep=0x224c parp=0x7c2f
// ====================================================

void IEXTRAC()
{
  CI UNK_0x7635();
  
  if (Pop() == 0) goto label239;
  ICLOSE();
  NULL UNK_0x74e0();
  IOPEN();
  
  goto label241;
  
  label239:
  ?FIRST();
  
  if (Pop() == 0) goto label240;
  UNK_0x750a();
  UNK_0x7502();
  ICLOSE();
  UNK_0x74e0();
  IOPEN();
  UNK_0x74d8();
  CI IPREV();
  UNK_0x74d0();
  INEXT();
  
  goto label241;
  
  label240:
  UNK_0x7502();
  IPREV();
  UNK_0x74d0();
  CI INEXT();
  UNK_0x74d8();
  
  label241:
  
}


// ====================================================
// 0x7c6f: WORD 'UNK_0x7c71' codep=0x224c parp=0x7c71
// ====================================================

void UNK_0x7c71()
{
  VANEWSP VA>BUF();
  
}


// ====================================================
// 0x7c77: WORD '@NEWSPA' codep=0x224c parp=0x7c83
// ====================================================

void @NEWSPA()
{
  UNK_0x7c71();
  1.5@ 
}


// ====================================================
// 0x7c89: WORD '!NEWSPA' codep=0x224c parp=0x7c95
// ====================================================

void !NEWSPA()
{
  UNK_0x7c71();
  1.5!();
  
}


// ====================================================
// 0x7c9b: WORD 'UNK_0x7c9d' codep=0x224c parp=0x7c9d
// ====================================================

void UNK_0x7c9d()
{
  @NEWSPA();
  ROT M+();
  !NEWSPA();
  
}


// ====================================================
// 0x7ca7: WORD 'MAXSPAC' codep=0x224c parp=0x7cb3
// ====================================================

void MAXSPAC()
{
  VANEWSP Push(0x0003); Pust(0x0000); D+ VA>BUF();
  
}


// ====================================================
// 0x7cc1: WORD 'UNK_0x7cc3' codep=0x224c parp=0x7cc3
// ====================================================

void UNK_0x7cc3()
{
  @NEWSPA();
  VA>BLK DROP Push(0x0400); SWAP - 
}


// ====================================================
// 0x7cd3: WORD 'FLD@' codep=0x4b3b parp=0x7cdc
// ====================================================
// 0x7cdc: db 0x03 0x00 0xb0 0x0b 0x01 0x00 0x94 0x0c 0x02 0x00 0xb0 0x0b 0x03 0x00 0x85 0x4a '               J'
  
// ====================================================
// 0x7cec: WORD 'FLD!' codep=0x4b3b parp=0x7cf5
// ====================================================
// 0x7cf5: db 0x03 0x00 0x18 0x6d 0x01 0x00 0x0c 0x6d 0x02 0x00 0x18 0x6d 0x03 0x00 0x34 0x6d '   m   m   m  4m'
  
// ====================================================
// 0x7d05: WORD 'IFLD@' codep=0x224c parp=0x7d0f
// ====================================================

void IFLD@()
{
  DUP 2+ C@ SWAP EXECUTE SWAP FLD@ 
}


// ====================================================
// 0x7d1f: WORD 'IFLD!' codep=0x224c parp=0x7d29
// ====================================================

void IFLD!()
{
  DUP 2+ C@ SWAP EXECUTE SWAP FLD! 
}

// 0x7d39: db 0x4c 0x22 0x7f 0x0e 0x0d 0x7d 0x7f 0x0e 0x5f 0x12 0x90 0x16 'L"  } _   '
  
// ====================================================
// 0x7d45: WORD '?CLASS/' codep=0x224c parp=0x7d51
// ====================================================

void ?CLASS/()
{
  OVER DUP 0= SWAP @INST-C();
  = OR OVER DUP 0= SWAP @INST-S();
  = OR AND 
}


// ====================================================
// 0x7d71: WORD 'UNK_0x7d73' codep=0x224c parp=0x7d73
// ====================================================

void UNK_0x7d73()
{
  pp_UNK_0x56b2 @EXECUTE 
}


// ====================================================
// 0x7d79: WORD 'UNK_0x7d7b' codep=0x224c parp=0x7d7b
// ====================================================

void UNK_0x7d7b()
{
  pp_'?EXIT @EXECUTE 
}


// ====================================================
// 0x7d81: WORD 'UNK_0x7d83' codep=0x224c parp=0x7d83
// ====================================================

void UNK_0x7d83()
{
  pp_'TRAVER @EXECUTE 
}


// ====================================================
// 0x7d89: WORD 'MAP' codep=0x224c parp=0x7d91
// ====================================================

void MAP()
{
  pp_'MAP @EXECUTE 
}


// ====================================================
// 0x7d97: WORD 'UNK_0x7d99' codep=0x224c parp=0x7d99
// ====================================================

void UNK_0x7d99()
{
  DUP @ >V <!> 
}


// ====================================================
// 0x7da3: WORD 'UNK_0x7da5' codep=0x224c parp=0x7da5
// ====================================================

void UNK_0x7da5()
{
  V> SWAP <!> 
}


// ====================================================
// 0x7dad: WORD 'SELECT' codep=0x224c parp=0x7db8
// ====================================================

void SELECT()
{
  Push(0); >V 
  label243:
  UNK_0x7d73();
  UNK_0x7d7b();
  OR NOT 
  if (Pop() == 0) goto label242;
  UNK_0x7d83();
  V> DROP Push(1); >V 
  goto label243;
  
  label242:
  UNK_0x7d7b();
  NOT V> DROP 
}


// ====================================================
// 0x7de0: WORD '?>FIRST' codep=0x224c parp=0x7dec
// ====================================================

void ?>FIRST()
{
  VI ?FIRST();
  AND ?NULL();
  OR 
}


// ====================================================
// 0x7df8: WORD 'SELECT-' codep=0x224c parp=0x7e04
// ====================================================

void SELECT-()
{
  pp_UNK_0x56b2 UNK_0x7d99();
  Push(0x7dec); 
// ====================================================
// 0x7e0b: WORD 'UNK_0x7e0d' codep=0xac7d parp=0x7e0d
// ====================================================
pp_'?EXIT UNK_0x7d99();
  Push(0x7ab3); pp_'TRAVER UNK_0x7d99();
  SELECT();
  pp_'TRAVER UNK_0x7da5();
  pp_'?EXIT UNK_0x7da5();
  pp_UNK_0x56b2 UNK_0x7da5();
  >R 2DROP R> 
}

// 0x7e2e: db 0x4c 0x22 0x02 0x7e 0xb4 0x0d 0x32 0x0e 0x90 0x0e 0x90 0x16 'L" ~  2     '
  
// ====================================================
// 0x7e3a: WORD 'UNK_0x7e3c' codep=0x224c parp=0x7e3c
// ====================================================

void UNK_0x7e3c()
{
  Push(0x7d3b); SELECT-();
  
}


// ====================================================
// 0x7e44: WORD 'IFIND' codep=0x224c parp=0x7e4e
// ====================================================

void IFIND()
{
  Push(0x7d51); SELECT-();
  
}


// ====================================================
// 0x7e56: WORD 'UNK_0x7e58' codep=0x224c parp=0x7e58
// ====================================================

void UNK_0x7e58()
{
  ?CHILD();
  
  if (Pop() == 0) goto label251;
  IOPEN();
  
  label252:
  UNK_0x7e58();
  MAP();
  UNK_0x7d83();
  UNK_0x7d7b();
  
  if (Pop() == 0) goto label252;
  ICLOSE();
  
  label251:
  
}


// ====================================================
// 0x7e70: WORD 'MAP>LEA' codep=0x224c parp=0x7e7c
// ====================================================

void MAP>LEA()
{
  MAP();
  ?CHILD();
  
  if (Pop() == 0) goto label244;
  IOPEN();
  
  label245:
  MAP>LEA();
  UNK_0x7d83();
  UNK_0x7d7b();
  
  if (Pop() == 0) goto label245;
  ICLOSE();
  
  label244:
  
}


// ====================================================
// 0x7e94: WORD 'MAKE1ST' codep=0x224c parp=0x7ea0
// ====================================================

void MAKE1ST()
{
  ?FIRST();
  NOT 
  if (Pop() == 0) goto label246;
  IEXTRAC();
  CI'();
  IINSERT();
  IFIRST();
  
  label246:
  
}


// ====================================================
// 0x7eb2: WORD 'UNK_0x7eb4' codep=0x224c parp=0x7eb4
// ====================================================

void UNK_0x7eb4()
{
  INACTIV >C+S();
  ?CHILD();
  
  if (Pop() == 0) goto label247;
  IOPEN();
  Push(0x74a0); SWAP UNK_0x7e3c();
  
  if (Pop() == 0) goto label248;
  MAKE1ST();
  CI 
  goto label250;
  
  label248:
  CI'();
  
  label250:
  ICLOSE();
  
  goto label249;
  
  label247:
  DROP CI 
  label249:
  IINSERT();
  ICLOSE();
  
}


// ====================================================
// 0x7ee6: WORD '>INACTI' codep=0x224c parp=0x7ef2
// ====================================================

void >INACTI()
{
  2DUP >C+S();
  pp_IBFR @ Push(cc_3); - Push(cc_IHEADLE); - DUP !INST-S();
  CDROP();
  UNK_0x7eb4();
  
}


// ====================================================
// 0x7f0b: WORD 'UNK_0x7f0d' codep=0x4c16 parp=0x7f0d
// ====================================================
// 0x7f0d: db 0x22 0x2d 0x7c 0xf0 0x7e 0x90 0x16 '"-| ~  '
  
// ====================================================
// 0x7f14: WORD 'IDELETE' codep=0x224c parp=0x7f20
// ====================================================

void IDELETE()
{
  Push(0x7f0e); pp_'MAP UNK_0x7d99();
  Push(0x7609); pp_'?EXIT UNK_0x7d99();
  Push(0x3a48); pp_'TRAVER UNK_0x7d99();
  UNK_0x7e58();
  MAP();
  pp_'TRAVER UNK_0x7da5();
  pp_'?EXIT UNK_0x7da5();
  pp_'MAP UNK_0x7da5();
  
}


// ====================================================
// 0x7f4a: WORD 'UNK_0x7f4c' codep=0x224c parp=0x7f4c
// ====================================================

void UNK_0x7f4c()
{
  pp_'MAP UNK_0x7d99();
  pp_'TRAVER UNK_0x7d99();
  pp_'?EXIT UNK_0x7d99();
  pp_UNK_0x56b2 UNK_0x7d99();
  IFIRST();
  
  label254:
  SELECT();
  
  if (Pop() == 0) goto label253;
  MAP();
  UNK_0x7d83();
  ?FIRST();
  
  goto label255;
  
  label253:
  Push(1); 
  label255:
  
  if (Pop() == 0) goto label254;
  pp_UNK_0x56b2 UNK_0x7da5();
  pp_'?EXIT UNK_0x7da5();
  pp_'TRAVER UNK_0x7da5();
  pp_'MAP UNK_0x7da5();
  
}


// ====================================================
// 0x7f86: WORD 'ALL' codep=0x224c parp=0x7f8e
// ====================================================

void ALL()
{
  >R Push(0x761a); Push(0x7dec); Push(0x7ab3); R> UNK_0x7f4c();
  
}


// ====================================================
// 0x7fa2: WORD 'EACH' codep=0x224c parp=0x7fab
// ====================================================

void EACH()
{
  >R Push(0x7dec); Push(0x7ab3); R> UNK_0x7f4c();
  
}


// ====================================================
// 0x7fbb: WORD 'UNK_0x7fbd' codep=0x224c parp=0x7fbd
// ====================================================

void UNK_0x7fbd()
{
  pp_'THROW- @EXECUTE 
}


// ====================================================
// 0x7fc3: WORD 'NULLPOI' codep=0x224c parp=0x7fcf
// ====================================================

void NULLPOI()
{
  NULL UNK_0x74d0();
  NULL UNK_0x74d8();
  NULL UNK_0x74e0();
  
}


// ====================================================
// 0x7fdd: WORD 'UNK_0x7fdf' codep=0x224c parp=0x7fdf
// ====================================================

void UNK_0x7fdf()
{
  ?CHILD();
  
  if (Pop() == 0) goto label268;
  IOPEN();
  IEXTRAC();
  ICLOSE();
  
  goto label269;
  
  label268:
  IEXTRAC();
  
  label269:
  
}


// ====================================================
// 0x7ff3: WORD 'UNK_0x7ff5' codep=0x224c parp=0x7ff5
// ====================================================

void UNK_0x7ff5()
{
  INACTIV >C+S();
  ?CHILD();
  
  if (Pop() == 0) goto label265;
  IOPEN();
  Push(0x74a0); OVER UNK_0x7e3c();
  
  if (Pop() == 0) goto label266;
  pp_UNK_0x5fe6 ON MAKE1ST();
  UNK_0x7fdf();
  
  goto label270;
  
  label266:
  NULL 
  label270:
  ICLOSE();
  
  goto label267;
  
  label265:
  NULL 
  label267:
  ICLOSE();
  >C 
}


// ====================================================
// 0x8029: WORD 'UNK_0x802b' codep=0x224c parp=0x802b
// ====================================================

void UNK_0x802b()
{
  UNK_0x7cc3();
  Push(cc_IHEADLE); > 
  if (Pop() == 0) goto label260;
  UNK_0x7cc3();
  Push(cc_IHEADLE); - 1- @NEWSPA();
  VA>BUF();
  >R I Push(0x000b); + C!();
  Push(0x0030); R> Push(cc_9); + C!();
  @NEWSPA();
  >C+S();
  NULLPOI();
  CI ICLOSE();
  >INACTI();
  
  label260:
  UNK_0x7cc3();
  UNK_0x7c9d();
  
}


// ====================================================
// 0x806b: WORD '?>MAXSP' codep=0x224c parp=0x8077
// ====================================================

void ?>MAXSP()
{
  DUP >R MAXSPAC();
  1.5@ @NEWSPA();
  R> Push(0); D+ D<();
  
}


// ====================================================
// 0x808b: WORD 'UNK_0x808d' codep=0x224c parp=0x808d
// ====================================================

void UNK_0x808d()
{
  ?>MAXSP();
  
  if (Pop() == 0) goto label257;
  NULL >C 
  goto label259;
  
  label257:
  UNK_0x7cc3();
  OVER Push(cc_IHEADLE); + < 
  if (Pop() == 0) goto label258;
  UNK_0x802b();
  
  label258:
  @NEWSPA();
  >C DUP Push(cc_IHEADLE); + UNK_0x7c9d();
  ?>MAXSP();
  
  if (Pop() == 0) goto label259;
  CDROP();
  NULL >C 
  label259:
  
}


// ====================================================
// 0x80c5: WORD 'UNK_0x80c7' codep=0x224c parp=0x80c7
// ====================================================

  label263:
  
void UNK_0x80c7()
{
  pp_UNK_0x5fe6 OFF pp_UNK_0x5efa @ 
  if (Pop() == 0) goto label256;
  UNK_0x7ff5();
  
  goto label272;
  
  label256:
  UNK_0x808d();
  
  label272:
  ?NULL();
  
  if (Pop() == 0) goto label261;
  CDROP();
  pp_UNK_0x5efa @ 
  if (Pop() == 0) goto label264;
  UNK_0x808d();
  
  goto label271;
  
  label264:
  UNK_0x7ff5();
  
  label271:
  ?NULL();
  
  if (Pop() == 0) goto label261;
  UNK_0x7fbd();
  
  label261:
  ?NULL();
  
  if (Pop() == 0) goto label262;
  CDROP();
  
  goto label263;
  
  label262:
  
}


// ====================================================
// 0x8109: WORD 'SET?REU' codep=0x4b3b parp=0x8115
// ====================================================
// 0x8115: db 0x10 0x00 0x12 0x4d 0x0b 0x00 0x1d 0x4d 0x29 0x00 0x1d 0x4d 0x0e 0x00 0x1d 0x4d 0x1a 0x00 0x1d 0x4d 0x44 0x00 0x1d 0x4d 0x1c 0x00 0x1d 0x4d 0x38 0x00 0x1d 0x4d 0x24 0x00 0x1d 0x4d 0x18 0x00 0x1d 0x4d 0x19 0x00 0x1d 0x4d 0x43 0x00 0x1d 0x4d 0x15 0x00 0x1d 0x4d 0x09 0x00 0x1d 0x4d 0x1f 0x00 0x1d 0x4d 0x21 0x00 0x1d 0x4d 0x1d 0x00 0x1d 0x4d '   M   M)  M   M   MD  M   M8  M$  M   M   MC  M   M   M   M!  M   M'
  
// ====================================================
// 0x8159: WORD 'VICREAT' codep=0x224c parp=0x8165
// ====================================================

void VICREAT()
{
  pp_UNK_0x5efa OFF DUP Push(0x00fe); > ?UNRAVEL();
  1+ UNK_0x80c7();
  1- CI VA>BUF();
  >R I Push(0x000b); + C!();
  Push(0x0030); R> Push(cc_9); + C!();
  SET-CUR();
  NULLPOI();
  CI ICLOSE();
  
}


// ====================================================
// 0x819f: WORD 'ICREATE' codep=0x224c parp=0x81ab
// ====================================================

void ICREATE()
{
  pp_UNK_0x5efa Push(cc_3); PICK();
  SET?REU OVER FILE-SL C@ UNK_0x80c7();
  DROP pp_UNK_0x5fe6 @ NOT 
  if (Pop() == 0) goto label273;
  CI VA>BUF();
  DUP >R Push(0x000a); + C!();
  R> Push(cc_9); + C!();
  SET-CUR();
  
  goto label274;
  
  label273:
  SET-CUR();
  !INST-S();
  UNK_0x74e8();
  
  label274:
  NULLPOI();
  CI ICLOSE();
  
}


// ====================================================
// 0x81f3: WORD 'BOX-NAM' codep=0x7394 parp=0x81ff
// ====================================================
// 0x81ff: db 0x0b 0x00 0x10 0x10 0x7d 0x6a '    }j'
  
// ====================================================
// 0x8205: WORD '*CREATE' codep=0x224c parp=0x8211
// ====================================================

void *CREATE()
{
  Push(0); 
  do // (DO)
  {
  2DUP ICREATE();
  ?NULL();
  
  if (Pop() == 0) goto label275;
  CI'();
  IINSERT();
  IFIRST();
  
  goto label276;
  
  label275:
  UNK_0x7a6c();
  <INSERT();
  
  label276:
  
  } while(...); // (LOOP) 0xffe6
  ILAST();
  2DROP 
}


// ====================================================
// 0x8237: WORD '.C' codep=0x224c parp=0x823e
// ====================================================

void .C()
{
  CR CDEPTH 
  if (Pop() == 0) goto label277;
  pp_CXSP @ Push(cc_3); + Push(cc_UNK_0x50fa); 
  do // (DO)
  {
  I 1.5@ Push(2); SPACES();
  Push(cc_5); D.R();
  Push(0xfffd); 
  } while(...); // (+LOOP) 0xffee
  
  goto label278;
  
  label277:
  
  (.") string 6 "MT STK"
  
  label278:
  CR 
}


// ====================================================
// 0x8277: WORD 'UNK_0x8279' codep=0x224c parp=0x8279
// ====================================================

void UNK_0x8279()
{
  pp_OVA @ 
}


// ====================================================
// 0x827f: WORD 'OV-CANC' codep=0x224c parp=0x828b
// ====================================================

void OV-CANC()
{
  pp_OV# @ 
  if (Pop() == 0) goto label161;
  UNK_0x8279();
  DUP Push(cc_4); +@();
  = 
  if (Pop() == 0) goto label161;
  UNK_0x8279();
  Push(cc_8); +@();
  Push(cc_4); + Push(cc_8); Push(0); FILL();
  
  label161:
  pp_OV# OFF Push(0x081a); DUP tt_CURRENT <!> tt_CONTEXT <!> 
}


// ====================================================
// 0x82c5: WORD 'UNK_0x82c7' codep=0x224c parp=0x82c7
// ====================================================

void UNK_0x82c7()
{
  DUP UNK_0x700f();
  UNK_0x7075();
  VA>BUF();
  
}


// ====================================================
// 0x82d1: WORD 'UNK_0x82d3' codep=0x224c parp=0x82d3
// ====================================================

void UNK_0x82d3()
{
  HERE();
  U< 
  if (Pop() == 0) goto label160;
  
  (.") string 10 "OV TOO BIG"
  UNRAVEL();
  
  label160:
  
}


// ====================================================
// 0x82ec: WORD 'UNK_0x82ee' codep=0x224c parp=0x82ee
// ====================================================

void UNK_0x82ee()
{
  DUP UNK_0x82c7();
  2DUP @ - 
  if (Pop() == 0) goto label159;
  
  (.") string 10 "INV OV BLK"
  UNRAVEL();
  
  label159:
  Push(cc_4); +@();
  UNK_0x82d3();
  DROP 
}


// ====================================================
// 0x8315: WORD 'UNK_0x8317' codep=0x224c parp=0x8317
// ====================================================

void UNK_0x8317()
{
  ?DUP 
  if (Pop() == 0) goto label157;
  DUP pp_OV# @ = 
  if (Pop() == 0) goto label158;
  DROP 
  goto label157;
  
  label158:
  DUP UNK_0x82ee();
  OV-CANC();
  UNK_0x82c7();
  >R I Push(cc_4); +@();
  DUP pp_OVA <!> ADDR>SEG I @ DUP pp_OV# <!> R> 2+ @ MEM<DSK();
  UNK_0x8279();
  Push(0x000a); + UNK_0x8279();
  Push(cc_8); +@();
  Push(cc_4); + Push(cc_8); CMOVE();
  UNK_0x8279();
  Push(cc_8); +@();
  2- DUP tt_CONTEXT <!> tt_CURRENT <!> 
  label157:
  
}


// ====================================================
// 0x8383: WORD 'SAVE-OV' codep=0x224c parp=0x838f
// ====================================================

void SAVE-OV()
{
  pp_OV# @ 
  if (Pop() == 0) goto label148;
  UNK_0x8279();
  >R I Push(cc_8); +@();
  Push(cc_4); + I Push(0x000a); + Push(cc_8); CMOVE();
  I ADDR>SEG I @ R> 2+ @ MEM>DSK();
  
  label148:
  
}


// ====================================================
// 0x83c3: WORD 'OVERLAY' codep=0x224c parp=0x83cf
// ====================================================

void OVERLAY()
{
  CREATE FILE-ST @ DUP ,();
  UNK_0x82ee();
  
  (;CODE)();
// inlined assembler code
// 0x83dd: call   1649
// 0x83e0: db 0xae 0x0b 0x15 0x83 0x90 0x16 '      '
  
// ====================================================
// 0x83e6: WORD 'UNK_0x83e8' codep=0x224c parp=0x83e8
// ====================================================

void UNK_0x83e8()
{
  tt_DP @ UNK_0x8279();
  Push(cc_6); +@();
  tt_DP <!> UNK_0x8279();
  Push(cc_6); + <!> 
}


// ====================================================
// 0x8400: WORD 'OPEN-OV' codep=0x224c parp=0x840c
// ====================================================

void OPEN-OV()
{
  DUP FILE-ST @ SWAP FILE-#R @ OVER pp_OV# <!> DUP 16* NEGATE Push(cc_UNK_0x5102); + DUP UNK_0x82d3();
  DUP pp_OVA <!> HERE();
  OVER Push(cc_6); + <!> tt_DP <!> SWAP ,();
  
// ====================================================
// 0x8444: WORD 'UNK_0x8446' codep=0x1f93 parp=0x8446
// ====================================================
,();
  UNK_0x8279();
  ,();
  Push(2); ALLOT();
  tt_VOC-LINK @ ,();
  Push(cc_8); ALLOT();
  Push(2); ALLOT();
  
}


// ====================================================
// 0x845e: WORD 'UNK_0x8460' codep=0x224c parp=0x8460
// ====================================================

void UNK_0x8460()
{
  CR tt_CONTEXT @ NFA();
  ID.();
  UNK_0x8279();
  HERE();
  OVER - 16/ 1+ DUP .();
  
  (.") string 9 "SEGS USED"
  UNK_0x8279();
  2+ @ OVER - DUP Push(cc_3); SPACES();
  .();
  
  (.") string 4 "free"
  CR 0< 
  (ABORT") // string 6 "#SEGS!"
  SWAP Push(0x0012); + <!> 
}


// ====================================================
// 0x84b8: WORD 'CLOSE-O' codep=0x224c parp=0x84c4
// ====================================================

void CLOSE-O()
{
  UNK_0x8460();
  UNK_0x83e8();
  SAVE-OV();
  SAVE-BU();
  OV-CANC();
  
}


// ====================================================
// 0x84d0: WORD 'MODULE' codep=0x224c parp=0x84db
// ====================================================

void MODULE()
{
  pp_OV# @ >V SAVE-OV();
  EXECUTE V> UNK_0x8317();
  
}


// ====================================================
// 0x84eb: WORD 'GRSEG' codep=0x1d29 parp=0x84f5
// ====================================================
// 0x84f5: db 0x3e 0x95 '> '
  
// ====================================================
// 0x84f7: WORD 'SHL-BIT' codep=0x8503 parp=0x8503
// ====================================================
// 0x8503: pop    ax
// 0x8504: pop    cx
// 0x8505: shr    ax,1
// 0x8507: rcl    cx,1
// 0x8509: push   cx
// 0x850a: lodsw
// 0x850b: mov    bx,ax
// 0x850d: jmp    word ptr [bx]

// ====================================================
// 0x850f: WORD 'UNK_0x8511' codep=0x1d29 parp=0x8511
// ====================================================
// 0x8511: db 0x00 0x06 0x05 0x07 0x03 '     '
  
// ====================================================
// 0x8516: WORD '1PIX' codep=0x224c parp=0x851f
// ====================================================

void 1PIX()
{
  Push(0); pp_GRSEG @ Push(0x02b2); L! 
}


// ====================================================
// 0x852d: WORD '2PIX' codep=0x224c parp=0x8536
// ====================================================

void 2PIX()
{
  Push(cc_8); pp_GRSEG @ Push(0x02b2); L! 
}


// ====================================================
// 0x8544: WORD 'GRCALL' codep=0x854f parp=0x854f
// ====================================================

// ====================================================
// 0x8545: WORD 'UNK_0x8547' codep=0x8685 parp=0x8547
// ====================================================
// 0x854f: mov    ax,[16B6]
// 0x8553: mov    cx,[16BA]
// 0x8557: mov    dx,[16BC]
// 0x855b: mov    bx,[16B8]
// 0x855f: int    63
// 0x8561: mov    [16BC],dx
// 0x8565: mov    [16B6],ax
// 0x8569: lodsw
// 0x856a: mov    bx,ax
// 0x856c: jmp    word ptr [bx]

// ====================================================
// 0x856e: WORD 'PAD|16' codep=0x224c parp=0x8579
// ====================================================

void PAD|16()
{
  PAD();
  ADDR>SEG 1+ SEG>ADDR 
}


// ====================================================
// 0x8583: WORD 'PAD>SEG' codep=0x224c parp=0x858f
// ====================================================

void PAD>SEG()
{
  PAD|16();
  ADDR>SEG 
}


// ====================================================
// 0x8595: WORD 'UNK_0x8597' codep=0x224c parp=0x8597
// ====================================================

void UNK_0x8597()
{
  Push(0x0014); Push(cc_AX); !();
  GRCALL 
}


// ====================================================
// 0x85a3: WORD '@MODE' codep=0x224c parp=0x85ad
// ====================================================

void @MODE()
{
  Push(0x0015); Push(cc_AX); !();
  GRCALL Push(cc_DX); @ DUP pp_GRSEG !();
  Push(0x010a); L@ DUP 2/ pp_UNK_0x8511 + C@ DUP pp_MONITOR !();
  Push(cc_5); = pp_?EGA !();
  
}


// ====================================================
// 0x85e1: WORD '?HERCUL' codep=0x224c parp=0x85ed
// ====================================================

void ?HERCUL()
{
  pp_MONITOR @ Push(cc_4); = 
}


// ====================================================
// 0x85f7: WORD '?VGA' codep=0x224c parp=0x8600
// ====================================================

void ?VGA()
{
  @MODE();
  Push(2); = 
}


// ====================================================
// 0x8608: WORD '?CGA' codep=0x224c parp=0x8611
// ====================================================

void ?CGA()
{
  @MODE();
  Push(cc_8); = 
}


// ====================================================
// 0x8619: WORD 'CCGA' codep=0x1d29 parp=0x8622
// ====================================================
// 0x8622: db 0x00 0x01 0x01 0x01 0x02 0x02 0x02 0x03 0x00 0x01 0x01 0x01 0x02 0x02 0x03 0x03 '                '
  
// ====================================================
// 0x8632: WORD 'PCGA' codep=0x1d29 parp=0x863b
// ====================================================
// 0x863b: db 0x00 0x02 0x02 0x02 0x02 0x02 '      '
  // 0x8641: add    al,[bx+di]
// 0x8643: add    [bx+di],al
// 0x8645: add    [bp+di],ax
// 0x8647: add    [bx+di],ax
// 0x8649: add    ax,[bp+di]

// ====================================================
// 0x864b: WORD 'NBCLR' codep=0x224c parp=0x8655
// ====================================================

void NBCLR()
{
  ?CGA();
  
  if (Pop() == 0) goto label279;
  RED 
  goto label280;
  
  label279:
  DK-GREE 
  label280:
  
}


// ====================================================
// 0x8665: WORD '?XOR' codep=0x866e parp=0x866e
// ====================================================
// 0x866e: push   es

// ====================================================
// 0x866f: WORD 'UNK_0x8671' codep=0x36ff parp=0x8671
// ====================================================
// 0x8671: db 0xf5 0x84 0x07 0x26 0x8b 0x06 0x08 0x01 0x8b 0x0e 0x56 0x5a 0x0b 0xc9 0x75 0x05 0x25 0xff 0x00 0xeb '   &      VZ  u %   '
  // 0x8685: add    sp,[di]
// 0x8687: inc    word ptr [bx+si+26]
// 0x868a: mov    [0108],ax
// 0x868e: pop    es
// 0x868f: lodsw
// 0x8690: mov    bx,ax
// 0x8692: jmp    word ptr [bx]

// ====================================================
// 0x8694: WORD '!COLOR' codep=0x224c parp=0x869f
// ====================================================

void !COLOR()
{
  DUP DUP pp_COLOR !();
  pp_DCOLOR !();
  ?CGA();
  
  if (Pop() == 0) goto label281;
  pp_CCGA + C@ 
  label281:
  pp_XORMODE @ 
  if (Pop() == 0) goto label282;
  Push(0x4000); OR 
  goto label283;
  
  label282:
  Push(0x00ff); AND 
  label283:
  DUP pp_GRSEG @ Push(0x0108); L! pp_GRSEG @ Push(0x0106); L! 
}


// ====================================================
// 0x86e7: WORD '@COLOR' codep=0x224c parp=0x86f2
// ====================================================

void @COLOR()
{
  pp_COLOR @ 
}


// ====================================================
// 0x86f8: WORD 'UNK_0x86fa' codep=0x224c parp=0x86fa
// ====================================================

void UNK_0x86fa()
{
  pp_XORMODE 099();
  ?XOR 
}


// ====================================================
// 0x8702: WORD 'RNDCLR' codep=0x224c parp=0x870d
// ====================================================

void RNDCLR()
{
  Push(0); Push(0x0010); RRND();
  pp_COLORT + C@ !COLOR();
  
}

// 0x871f: db 0x4c 0x22 0xa7 0x3b 0x5d 0x17 0x00 0xa2 0x5d 0x17 0x00 0xa0 0xa8 0x51 'L" ;]   ]    Q'
  // 0x872d: and    [bx],cl
// 0x872f: nop    
// 0x8730: push   ss
// 0x8731: dec    sp
// 0x8732: and    bh,[di]
// 0x8734: db     0F
// 0x8735: sub    [si-52],dx
// 0x8738: or     bx,[di+17]
// 0x873b: add    [bx+si+51A8],bh
// 0x873f: add    ax,2010

// ====================================================
// 0x8741: WORD 'UNK_0x8743' codep=0x0f20 parp=0x8743
// ====================================================
// 0x8743: db 0x90 0x16 0x4c 0x22 0x3d 0x0f 0x29 0x54 0xae 0x0b 0x5d 0x17 0x00 0xa0 0xa8 0x51 0x87 0x3b 0xcd 0x10 0x90 0x16 0x4c 0x22 0x3d 0x0f 0x29 0x54 0xae 0x0b 0x5d 0x17 0x00 0xb8 0xa8 0x51 0x05 0x10 0x20 0x0f 0x90 0x16 '  L"= )T  ]    Q ;    L"= )T  ]    Q      '
  
// ====================================================
// 0x876d: WORD 'MON>MEM' codep=0x4b3b parp=0x8779
// ====================================================
// 0x8779: db 0x03 0x00 0x47 0x87 0x04 0x00 0x21 0x87 0x08 0x00 0x33 0x87 0x06 0x00 0x5b 0x87 '  G   !   3   [ '
  
// ====================================================
// 0x8789: WORD 'SETDBUF' codep=0x224c parp=0x8795
// ====================================================

void SETDBUF()
{
  pp_REMSEG @ Push(0x010a); L@ MON>MEM Push(0x51b8); D!();
  pp_DBUF-SE !();
  pp_HBUF-SE !();
  pp_P/B !();
  
}

// 0x87b5: db 0x29 0x1d 0x3a 0x20 0x05 0x41 ') :  A'
  
// ====================================================
// 0x87bb: WORD 'UNK_0x87bd' codep=0x224c parp=0x87bd
// ====================================================

void UNK_0x87bd()
{
  pp_GRSEG @ Push(0x0108); L@ 
}


// ====================================================
// 0x87c9: WORD 'UNK_0x87cb' codep=0x224c parp=0x87cb
// ====================================================

void UNK_0x87cb()
{
  DUP Push(0x00ff); AND !COLOR();
  DUP pp_GRSEG @ Push(0x0108); L! Push(0x0255); > 
  if (Pop() == 0) goto label284;
  pp_XORMODE ON();
  
  label284:
  
}


// ====================================================
// 0x87f1: WORD 'L@PIXEL' codep=0x87fd parp=0x87fd
// ====================================================
// 0x87fd: pop    ax
// 0x87fe: xor    cx,cx
// 0x8800: mov    ch,al
// 0x8802: pop    bx
// 0x8803: mov    ax,0007
// 0x8806: int    63
// 0x8808: push   ax
// 0x8809: lodsw
// 0x880a: mov    bx,ax
// 0x880c: jmp    word ptr [bx]

// ====================================================
// 0x880e: WORD 'LPLOT' codep=0x8818 parp=0x8818
// ====================================================
// 0x8818: pop    ax
// 0x8819: pop    bx
// 0x881a: mov    bh,al
// 0x881c: push   es
// 0x881d: push   word ptr [84F5]
// 0x8821: pop    es
// 0x8822: es:    
// 0x8823: push   word ptr [0109]
// 0x8827: mov    ax,0000
// 0x882a: es:    
// 0x882b: mov    [0109],ah
// 0x882f: mov    ax,0006
// 0x8832: int    63
// 0x8834: es:    
// 0x8835: pop    word ptr [0109]
// 0x8839: pop    es
// 0x883a: lodsw
// 0x883b: mov    bx,ax
// 0x883d: jmp    word ptr [bx]

// ====================================================
// 0x883f: WORD 'LXPLOT' codep=0x884a parp=0x884a
// ====================================================

// ====================================================
// 0x8844: WORD 'UNK_0x8846' codep=0x4c50 parp=0x8846
// ====================================================
// 0x884a: pop    ax
// 0x884b: pop    bx
// 0x884c: mov    bh,al
// 0x884e: push   es
// 0x884f: push   word ptr [84F5]
// 0x8853: pop    es
// 0x8854: es:    
// 0x8855: push   word ptr [0109]
// 0x8859: mov    ax,4000
// 0x885c: es:    
// 0x885d: mov    [0109],ah
// 0x8861: mov    ax,0006
// 0x8864: int    63
// 0x8866: es:    
// 0x8867: pop    word ptr [0109]
// 0x886b: pop    es
// 0x886c: lodsw
// 0x886d: mov    bx,ax
// 0x886f: jmp    word ptr [bx]

// ====================================================
// 0x8871: WORD 'UNK_0x8873' codep=0x224c parp=0x8873
// ====================================================

void UNK_0x8873()
{
  Push(cc_CX); C!();
  Push(cc_CX); 1+ C!();
  Push(cc_BX); C!();
  Push(cc_BX); 1+ C!();
  Push(0x000a); Push(cc_AX); !();
  GRCALL 
}


// ====================================================
// 0x8893: WORD 'BFILL' codep=0x224c parp=0x889d
// ====================================================

void BFILL()
{
  UNK_0x87bd();
  UNK_0x86fa();
  Push(0x00c7); NULL Push(0x00a0); UNK_0x8873();
  UNK_0x87cb();
  
}


// ====================================================
// 0x88b1: WORD 'DARK' codep=0x224c parp=0x88ba
// ====================================================

void DARK()
{
  UNK_0x87bd();
  UNK_0x86fa();
  BLACK !COLOR();
  Push(0x00c7); NULL Push(0x00a0); UNK_0x8873();
  UNK_0x87cb();
  
}


// ====================================================
// 0x88d2: WORD 'UNK_0x88d4' codep=0x224c parp=0x88d4
// ====================================================

void UNK_0x88d4()
{
  Push(cc_8); Push(cc_AX); !();
  Push(cc_CX); 1+ C!();
  Push(cc_CX); C!();
  Push(cc_BX); 1+ C!();
  Push(cc_BX); C!();
  GRCALL 
}


// ====================================================
// 0x88f2: WORD 'LLINE' codep=0x224c parp=0x88fc
// ====================================================

void LLINE()
{
  UNK_0x87bd();
  >R UNK_0x86fa();
  UNK_0x88d4();
  R> UNK_0x87cb();
  
}


// ====================================================
// 0x890a: WORD 'FCIRC' codep=0x8914 parp=0x8914
// ====================================================

// ====================================================
// 0x890c: WORD 'UNK_0x890e' codep=0x4685 parp=0x890e
// ====================================================

// ====================================================
// 0x890f: WORD 'UNK_0x8911' codep=0x5249 parp=0x8911
// ====================================================
// 0x8914: pop    bx
// 0x8915: mov    dx,[16BC]
// 0x8919: pop    ax
// 0x891a: pop    cx
// 0x891b: push   di
// 0x891c: mov    di,ax
// 0x891e: mov    ax,0004
// 0x8921: int    63
// 0x8923: pop    di
// 0x8924: lodsw
// 0x8925: mov    bx,ax
// 0x8927: jmp    word ptr [bx]

// ====================================================
// 0x8929: WORD 'UNK_0x892b' codep=0x224c parp=0x892b
// ====================================================

void UNK_0x892b()
{
  Push(cc_6); Push(cc_DX); 1+ C!();
  Push(cc_5); Push(cc_DX); C!();
  
}


// ====================================================
// 0x893b: WORD 'UNK_0x893d' codep=0x224c parp=0x893d
// ====================================================

void UNK_0x893d()
{
  Push(cc_3); * Push(cc_DX); 
// ====================================================
// 0x8943: WORD 'UNK_0x8945' codep=0x6d0a parp=0x8945
// ====================================================
C!();
  
// ====================================================
// 0x8944: WORD 'UNK_0x8946' codep=0x976d parp=0x8946
// ====================================================

// ====================================================
// 0x8945: WORD 'UNK_0x8947' codep=0x3b97 parp=0x8947
// ====================================================
Push(cc_6); * Push(cc_DX); 1+ C!();
  
}


// ====================================================
// 0x8951: WORD 'UNK_0x8953' codep=0x8953 parp=0x8953
// ====================================================
// 0x8953: pop    bx
// 0x8954: mov    dx,[16BC]
// 0x8958: pop    ax
// 0x8959: pop    cx
// 0x895a: push   di
// 0x895b: mov    di,ax
// 0x895d: mov    ax,0003
// 0x8960: int    63
// 0x8962: pop    di
// 0x8963: lodsw
// 0x8964: mov    bx,ax
// 0x8966: jmp    word ptr [bx]

// ====================================================
// 0x8968: WORD '.CIRCLE' codep=0x224c parp=0x8974
// ====================================================

void .CIRCLE()
{
  UNK_0x892b();
  UNK_0x8953 
}


// ====================================================
// 0x897a: WORD 'FILLCIR' codep=0x224c parp=0x8986
// ====================================================

void FILLCIR()
{
  UNK_0x892b();
  FCIRC 
}


// ====================================================
// 0x898c: WORD '.ELLIPS' codep=0x224c parp=0x8998
// ====================================================

void .ELLIPS()
{
  UNK_0x893d();
  UNK_0x8953 
}


// ====================================================
// 0x899e: WORD 'FILLELL' codep=0x224c parp=0x89aa
// ====================================================

void FILLELL()
{
  UNK_0x893d();
  FCIRC 
}

// 0x89b0: db 0x29 0x1d ') '
  // 0x89b2: push   es
// 0x89b3: push   word ptr [84F5]
// 0x89b7: pop    es
// 0x89b8: es:    
// 0x89b9: mov    ax,[0108]
// 0x89bd: mov    cx,[5A56]
// 0x89c1: or     cx,cx
// 0x89c3: jnz    89CA
// 0x89c5: and    ax,00FF
// 0x89c8: jmp    89CD
// 0x89ca: and    ax,40FF
// 0x89cd: es:    
// 0x89ce: mov    [0108],ax
// 0x89d2: pop    es
// 0x89d3: mov    ax,0005
// 0x89d6: mov    cx,[596F]
// 0x89da: mov    bx,[5958]
// 0x89de: mov    dx,[5963]
// 0x89e2: int    63
// 0x89e4: ret    


// ====================================================
// 0x89e5: WORD 'HLINE' codep=0x89ef parp=0x89ef
// ====================================================
// 0x89ef: call   89B2
// 0x89f2: lodsw
// 0x89f3: mov    bx,ax
// 0x89f5: jmp    word ptr [bx]
// 0x89f7: sub    [di],bx
// 0x89f9: add    [si],al
// 0x89fb: add    ax,4C05
// 0x89fe: and    ah,[bx+di+1639]
// 0x8a02: db     6D
// 0x8a03: cmp    ax,980F
// 0x8a06: cmp    [466D],dx
// 0x8a0a: pop    dx
// 0x8a0b: scasb
// 0x8a0c: or     bp,[bp+si+0A39]
// 0x8a10: db     6D
// 0x8a11: cmp    bx,[bp+si-52]
// 0x8a14: or     bp,[bp+si-18C7]
// 0x8a18: db     0F
// 0x8a19: or     ch,[di+4D]
// 0x8a1c: test   [bp+si+4F],dx
// 0x8a1f: scasb
// 0x8a20: or     si,di
// 0x8a22: mov    [bp+si+0F],si
// 0x8a25: xchg   ax,dx
// 0x8a26: or     al,46
// 0x8a28: pop    dx
// 0x8a29: and    bp,[di-70]
// 0x8a2c: push   ss
// 0x8a2d: dec    sp
// 0x8a2e: and    dh,al
// 0x8a30: or     ax,1438
// 0x8a33: and    [bx],cl
// 0x8a35: mov    ax,4115
// 0x8a38: push   cs
// 0x8a39: xchg   ax,dx
// 0x8a3a: or     al,FD
// 0x8a3c: mov    di,sp
// 0x8a3e: db     0F
// 0x8a3f: rcl    byte ptr [di],1
// 0x8a41: idiv   bh
// 0x8a43: xor    cl,[1690]

// ====================================================
// 0x8a47: WORD 'UNK_0x8a49' codep=0x224c parp=0x8a49
// ====================================================

void UNK_0x8a49()
{
  DUP pp_FONT# !();
  Push(0x0018); Push(cc_AX); !();
  1- Push(cc_BX); !();
  GRCALL Push(0x89ff); Push(0x066d); EXECUTES();
  Push(0x8a2f); Push(0x06e8); EXECUTES();
  
}


// ====================================================
// 0x8a75: WORD '>1FONT' codep=0x224c parp=0x8a80
// ====================================================

void >1FONT()
{
  Push(1); UNK_0x8a49();
  
}


// ====================================================
// 0x8a86: WORD '>2FONT' codep=0x224c parp=0x8a91
// ====================================================

void >2FONT()
{
  Push(2); UNK_0x8a49();
  
}


// ====================================================
// 0x8a97: WORD '>3FONT' codep=0x224c parp=0x8aa2
// ====================================================

void >3FONT()
{
  Push(cc_3); UNK_0x8a49();
  
}


// ====================================================
// 0x8aa8: WORD '>0FONT' codep=0x224c parp=0x8ab3
// ====================================================

void >0FONT()
{
  pp_FONT# 099();
  >0FONT();
  
}


// ====================================================
// 0x8abb: WORD 'LDPAL' codep=0x224c parp=0x8ac5
// ====================================================

void LDPAL()
{
  PAD>SEG();
  Push(0x002c); FILE<();
  Push(0x0012); * PAD|16();
  + pp_COLORT Push(0x0010); CMOVE();
  
}


// ====================================================
// 0x8ae1: WORD 'UNK_0x8ae3' codep=0x224c parp=0x8ae3
// ====================================================

void UNK_0x8ae3()
{
  pp_REMSEG @ Push(0x010a); L! 
}


// ====================================================
// 0x8aef: WORD ':8>' codep=0x224c parp=0x8af7
// ====================================================

void :8>()
{
  Push(cc_4); UNK_0x8ae3();
  
}


// ====================================================
// 0x8afd: WORD ')8>' codep=0x224c parp=0x8b05
// ====================================================

void )8>()
{
  Push(2); UNK_0x8ae3();
  
}


// ====================================================
// 0x8b0b: WORD '2<8>' codep=0x224c parp=0x8b14
// ====================================================

void 2<8>()
{
  Push(2); UNK_0x8ae3();
  
}


// ====================================================
// 0x8b1a: WORD '<8>' codep=0x224c parp=0x8b22
// ====================================================

void <8>()
{
  Push(cc_8); UNK_0x8ae3();
  
}


// ====================================================
// 0x8b28: WORD 'HERC' codep=0x224c parp=0x8b31
// ====================================================

void HERC()
{
  Push(cc_TRUE); pp_REMSEG @ Push(0x0104); LC! <8>();
  
}


// ====================================================
// 0x8b41: WORD '#VECTOR' codep=0x2214 parp=0x8b4d
// ====================================================
// 0x8b4d: db 0x06 0x00 '  '
  
// ====================================================
// 0x8b4f: WORD 'TREJECT' codep=0x1d29 parp=0x8b5b
// ====================================================
// 0x8b5b: db 0x9a 0x41 0x00 0x37 0x7f 0xc3 ' A 7 '
  
// ====================================================
// 0x8b61: WORD 'CLIPPER' codep=0x8b6d parp=0x8b6d
// ====================================================
// 0x8b6d: call   7F37:029D
// 0x8b72: lodsw
// 0x8b73: mov    bx,ax
// 0x8b75: jmp    word ptr [bx]

// ====================================================
// 0x8b77: WORD 'SCANPOL' codep=0x8b83 parp=0x8b83
// ====================================================
// 0x8b83: call   7F37:0535
// 0x8b88: lodsw
// 0x8b89: mov    bx,ax
// 0x8b8b: jmp    word ptr [bx]

// ====================================================
// 0x8b8d: WORD '>PLANES' codep=0x8b99 parp=0x8b99
// ====================================================
// 0x8b99: call   7F37:0837
// 0x8b9e: lodsw
// 0x8b9f: mov    bx,ax
// 0x8ba1: jmp    word ptr [bx]

// ====================================================
// 0x8ba3: WORD 'LFILL' codep=0x8bad parp=0x8bad
// ====================================================
// 0x8bad: call   7F37:0413
// 0x8bb2: lodsw
// 0x8bb3: mov    bx,ax
// 0x8bb5: jmp    word ptr [bx]

// ====================================================
// 0x8bb7: WORD 'BLT' codep=0x8bbf parp=0x8bbf
// ====================================================
// 0x8bbf: call   7F37:070A
// 0x8bc4: lodsw
// 0x8bc5: mov    bx,ax
// 0x8bc7: jmp    word ptr [bx]

// ====================================================
// 0x8bc9: WORD 'LFILLPO' codep=0x224c parp=0x8bd5
// ====================================================

void LFILLPO()
{
  UNK_0x87bd();
  >R UNK_0x86fa();
  LFILL R> UNK_0x87cb();
  
}


// ====================================================
// 0x8be3: WORD 'UNK_0x8be5' codep=0x224c parp=0x8be5
// ====================================================

void UNK_0x8be5()
{
  Push(cc_BX); C!();
  Push(cc_CX); 1+ C!();
  Push(cc_CX); C!();
  Push(cc_BX); 1+ C!();
  Push(0x0016); Push(cc_AX); !();
  GRCALL 
}


// ====================================================
// 0x8c05: WORD 'SETCLIP' codep=0x224c parp=0x8c11
// ====================================================

// ====================================================
// 0x8c0c: WORD 'UNK_0x8c0e' codep=0x494c parp=0x8c0e
// ====================================================

void SETCLIP()
{
  2OVER();
  2OVER();
  UNK_0x8be5();
  DUP pp_ILEFT !();
  pp_CLIP-TA Push(0x0012); + !();
  DUP pp_IBELOW !();
  pp_CLIP-TA Push(0x000d); + !();
  DUP pp_IRIGHT !();
  pp_CLIP-TA Push(cc_8); + !();
  DUP pp_IABOVE !();
  pp_CLIP-TA Push(cc_3); + !();
  
}


// ====================================================
// 0x8c55: WORD 'VDCLIPS' codep=0x224c parp=0x8c61
// ====================================================

void VDCLIPS()
{
  Push(0x00bf); Push(0x004b); Push(0x0048); Push(cc_4); SETCLIP();
  
}


// ====================================================
// 0x8c73: WORD 'VCLIPSE' codep=0x224c parp=0x8c7f
// ====================================================

void VCLIPSE()
{
  Push(0x0079); Push(0x0047); Push(0); Push(0); SETCLIP();
  
}


// ====================================================
// 0x8c8f: WORD 'DCLIPSE' codep=0x224c parp=0x8c9b
// ====================================================

void DCLIPSE()
{
  Push(0x00c7); Push(0x009f); Push(0); Push(0); SETCLIP();
  
}


// ====================================================
// 0x8cab: WORD 'UNK_0x8cad' codep=0x1d29 parp=0x8cad
// ====================================================
// 0x8cad: db 0x5b 0x8b 0x6d 0x8b 0x83 0x8b 0x99 0x8b 0xad 0x8b 0xbf 0x8b '[ m         '
  
// ====================================================
// 0x8cb9: WORD 'UNK_0x8cbb' codep=0x224c parp=0x8cbb
// ====================================================

void UNK_0x8cbb()
{
  Push(cc_#VECTOR); 2* Push(0); 
  do // (DO)
  {
  pp_FONTSEG @ pp_UNK_0x8cad I + @ Push(cc_3); + !();
  Push(2); 
  } while(...); // (+LOOP) 0xffea
  
}


// ====================================================
// 0x8cdd: WORD 'UNK_0x8cdf' codep=0x224c parp=0x8cdf
// ====================================================

void UNK_0x8cdf()
{
  Push(cc_#VECTOR); 2* Push(0); 
  do // (DO)
  {
  pp_FONTSEG @ I L@ pp_UNK_0x8cad I + @ 1+ !();
  Push(2); 
  } while(...); // (+LOOP) 0xffe8
  
}


// ====================================================
// 0x8d03: WORD 'UNK_0x8d05' codep=0x224c parp=0x8d05
// ====================================================

void UNK_0x8d05()
{
  pp_FONTSEG @ Push(0x008f); FILE<();
  UNK_0x8cbb();
  UNK_0x8cdf();
  
}


// ====================================================
// 0x8d15: WORD '>MAINVI' codep=0x224c parp=0x8d21
// ====================================================

void >MAINVI()
{
  pp_HBUF-SE @ pp_BUF-SEG !();
  pp_BUF-SEG @ pp_GRSEG @ Push(0x02a4); L! VCLIPSE();
  
}


// ====================================================
// 0x8d3b: WORD '>DISPLA' codep=0x224c parp=0x8d47
// ====================================================

void >DISPLA()
{
  DCLIPSE();
  pp_DBUF-SE @ DUP pp_BUF-SEG !();
  pp_GRSEG @ Push(0x02a4); L! 
}


// ====================================================
// 0x8d5f: WORD '>HIDDEN' codep=0x224c parp=0x8d6b
// ====================================================

void >HIDDEN()
{
  DCLIPSE();
  pp_HBUF-SE @ DUP pp_BUF-SEG !();
  pp_GRSEG @ Push(0x02a4); L! 
}


// ====================================================
// 0x8d83: WORD 'R2OVL' codep=0x2214 parp=0x8d8d
// ====================================================
// 0x8d8d: db 0x90 0x8d 0x00 0x72 0x32 0x2e 0x6f 0x76 0x6c 0x00 '   r2.ovl '
  
// ====================================================
// 0x8d97: WORD 'UNK_0x8d99' codep=0x8d99 parp=0x8d99
// ====================================================
// 0x8d99: call   953E:0100
// 0x8d9e: lodsw
// 0x8d9f: mov    bx,ax
// 0x8da1: jmp    word ptr [bx]

// ====================================================
// 0x8da3: WORD 'UNK_0x8da5' codep=0x224c parp=0x8da5
// ====================================================

void UNK_0x8da5()
{
  Push(cc_R2OVL); pp_REMSEG @ Push(0x0010); + (LDS)();
  pp_REMSEG @ Push(0x8d99); 3+ !();
  UNK_0x8d99 
}


// ====================================================
// 0x8dc3: WORD 'UNK_0x8dc5' codep=0x224c parp=0x8dc5
// ====================================================

void UNK_0x8dc5()
{
  Push(0xabcd); Push(cc_AX); !();
  GRCALL 
}


// ====================================================
// 0x8dd1: WORD 'SRC' codep=0x1d29 parp=0x8dd9
// ====================================================
// 0x8dd9: db 0x20 0x33 ' 3'
  
// ====================================================
// 0x8ddb: WORD 'DST' codep=0x1d29 parp=0x8de3
// ====================================================
// 0x8de3: db 0x00 0x83 '  '
  
// ====================================================
// 0x8de5: WORD 'SEGME' codep=0x1d29 parp=0x8def
// ====================================================
// 0x8def: db 0x20 0x8d '  '
  
// ====================================================
// 0x8df1: WORD 'PLZ' codep=0x1d29 parp=0x8df9
// ====================================================
// 0x8df9: db 0x22 0x5d '"]'
  
// ====================================================
// 0x8dfb: WORD 'XPCOL' codep=0x1d29 parp=0x8e05
// ====================================================
// 0x8e05: db 0x00 0x00 '  '
  
// ====================================================
// 0x8e07: WORD '.RAW' codep=0x224c parp=0x8e10
// ====================================================

void .RAW()
{
  pp_SKIPPED @ 
  if (Pop() == 0) goto label285;
  pp_SKIPPED 099();
  2DROP pp_PIC# 099();
  
  goto label286;
  
  label285:
  Push(1); Push(cc_AX); !();
  pp_BMAP Push(cc_BX); !();
  Push(cc_CX); 1+ C!();
  Push(0x0028); + Push(cc_CX); C!();
  GRCALL 
  label286:
  
}


// ====================================================
// 0x8e46: WORD 'DISPLAY' codep=0x8e52 parp=0x8e52
// ====================================================
// 0x8e52: lodsw
// 0x8e53: mov    bx,ax
// 0x8e55: jmp    word ptr [bx]
// 0x8e57: pop    cx
// 0x8e58: mov    ds,[bp+si+1E]
// 0x8e5b: xor    ax,ax
// 0x8e5d: mov    ds,ax
// 0x8e5f: mov    bx,0410
// 0x8e62: mov    [bx],dx
// 0x8e64: pop    ds
// 0x8e65: lodsw
// 0x8e66: mov    bx,ax
// 0x8e68: jmp    word ptr [bx]

// ====================================================
// 0x8e6a: WORD '>ALPHA' codep=0x224c parp=0x8e75
// ====================================================

void >ALPHA()
{
  Push(0x0013); Push(cc_AX); !();
  GRCALL >0FONT();
  
}


// ====================================================
// 0x8e83: WORD '>A' codep=0x224c parp=0x8e8a
// ====================================================

void >A()
{
  >ALPHA();
  
}


// ====================================================
// 0x8e8e: WORD '>LORES' codep=0x224c parp=0x8e99
// ====================================================

void >LORES()
{
  Push(0x0012); Push(cc_AX); !();
  GRCALL 2PIX();
  SETDBUF();
  ?CGA();
  
  if (Pop() == 0) goto label287;
  Push(0); Push(cc_BX); !();
  Push(0x000e); Push(cc_AX); !();
  GRCALL 
  label287:
  
}


// ====================================================
// 0x8ebf: WORD 'UNK_0x8ec1' codep=0x224c parp=0x8ec1
// ====================================================

void UNK_0x8ec1()
{
  Push(cc_AX); 099();
  Push(0x00c7); Push(cc_BX); 1+ C!();
  Push(0); Push(cc_BX); C!();
  Push(0); Push(cc_CX); 1+ C!();
  Push(0x009f); Push(cc_CX); C!();
  Push(0x00c7); Push(cc_DX); 1+ C!();
  Push(0); Push(cc_DX); C!();
  GRCALL 
}


// ====================================================
// 0x8ef9: WORD 'UNK_0x8efb' codep=0x224c parp=0x8efb
// ====================================================

void UNK_0x8efb()
{
  pp_GRSEG @ Push(0x010e); L! pp_GRSEG @ Push(0x010c); L! 
}


// ====================================================
// 0x8f11: WORD 'D>H' codep=0x224c parp=0x8f19
// ====================================================

void D>H()
{
  pp_DBUF-SE @ pp_HBUF-SE @ UNK_0x8efb();
  
}


// ====================================================
// 0x8f25: WORD 'H>D' codep=0x224c parp=0x8f2d
// ====================================================

void H>D()
{
  pp_HBUF-SE @ pp_DBUF-SE @ UNK_0x8efb();
  
}


// ====================================================
// 0x8f39: WORD 'SAVE-SC' codep=0x224c parp=0x8f45
// ====================================================

void SAVE-SC()
{
  D>H();
  UNK_0x8ec1();
  
}


// ====================================================
// 0x8f4b: WORD 'SCR-RES' codep=0x224c parp=0x8f57
// ====================================================

void SCR-RES()
{
  H>D();
  UNK_0x8ec1();
  
}


// ====================================================
// 0x8f5d: WORD 'V>DISPL' codep=0x224c parp=0x8f69
// ====================================================

void V>DISPL()
{
  H>D();
  Push(cc_AX); 099();
  Push(0x0077); Push(cc_BX); 1+ C!();
  Push(0); Push(cc_BX); C!();
  Push(0); Push(cc_CX); 1+ C!();
  Push(0x0047); Push(cc_CX); C!();
  Push(0x00bf); Push(cc_DX); 1+ C!();
  Push(cc_4); Push(cc_DX); C!();
  GRCALL 
}


// ====================================================
// 0x8fa3: WORD 'UNK_0x8fa5' codep=0x224c parp=0x8fa5
// ====================================================

void UNK_0x8fa5()
{
  Push(cc_AX); 099();
  Push(cc_DX); 1+ C!();
  Push(cc_DX); C!();
  Push(cc_CX); 1+ C!();
  Push(cc_CX); C!();
  Push(cc_BX); 1+ C!();
  Push(cc_BX); C!();
  GRCALL 
}


// ====================================================
// 0x8fcb: WORD 'UNK_0x8fcd' codep=0x224c parp=0x8fcd
// ====================================================

void UNK_0x8fcd()
{
  Push(cc_6); Push(0); 
  do // (DO)
  {
  Push(cc_6); PICK();
  
  } while(...); // (LOOP) 0xfffa
  
}


// ====================================================
// 0x8fdd: WORD 'LCOPYBL' codep=0x224c parp=0x8fe9
// ====================================================

void LCOPYBL()
{
  DUP Push(cc_6); PICK();
  < 
  if (Pop() == 0) goto label288;
  SAVE-SC();
  D>H();
  UNK_0x8fcd();
  UNK_0x8fa5();
  H>D();
  DROP Push(cc_4); PICK();
  
  goto label289;
  
  label288:
  pp_BUF-SEG 
// ====================================================
// 0x900b: WORD 'UNK_0x900d' codep=0x0bae parp=0x900d
// ====================================================
@ 
// ====================================================
// 0x900c: WORD 'UNK_0x900e' codep=0x410b parp=0x900e
// ====================================================

// ====================================================
// 0x900d: WORD 'UNK_0x900f' codep=0x0e41 parp=0x900f
// ====================================================
DUP 
// ====================================================
// 0x900f: WORD 'UNK_0x9011' codep=0x8ef9 parp=0x9011
// ====================================================
UNK_0x8efb();
  
  label289:
  UNK_0x8fa5();
  
// ====================================================
// 0x9012: WORD 'UNK_0x9014' codep=0x458f parp=0x9014
// ====================================================

// ====================================================
// 0x9013: WORD 'UNK_0x9015' codep=0x8d45 parp=0x9015
// ====================================================
>DISPLA();
  
}


// ====================================================
// 0x9017: WORD '(BYE)' codep=0x224c parp=0x9021
// ====================================================

void (BYE)()
{
  >ALPHA();
  PAGE BEEPOFF ?HERCUL();
  
  if (Pop() == 0) goto label290;
  >DISPLA();
  DARK();
  PAGE 
  label290:
  UNK_0x8dc5();
  BYE();
  
}


// ====================================================
// 0x9039: WORD 'BYE' codep=0x224c parp=0x9041
// ====================================================

// ====================================================
// 0x903a: WORD 'UNK_0x903c' codep=0x8390 parp=0x903c
// ====================================================

void BYE()
{
  pp_'BYE 
// ====================================================
// 0x9042: WORD 'UNK_0x9044' codep=0x3746 parp=0x9044
// ====================================================
@EXECUTE 
}


// ====================================================
// 0x9047: WORD 'UNK_0x9049' codep=0x224c parp=0x9049
// ====================================================

void UNK_0x9049()
{
  Push(0x003c); Push(0); 
  do // (DO)
  {
  I pp_CMAP + C@ I>C();
  I pp_CMAP + C!();
  
  } while(...); // (LOOP) 0xffec
  
}


// ====================================================
// 0x9069: WORD 'SET-COL' codep=0x224c parp=0x9075
// ====================================================

// ====================================================
// 0x906f: WORD 'UNK_0x9071' codep=0x432d parp=0x9071
// ====================================================

void SET-COL()
{
  @MODE();
  Push(cc_8); = 
  if (Pop() == 0) goto label291;
  Push(0); 
  goto label292;
  
  label291:
  Push(cc_5); 
  label292:
  pp_#CLRMAP @ 1- + Push(0x0074); SWAP @RECORD();
  pp_CMAP Push(0x0040); CMOVE();
  UNK_0x9049();
  
}


// ====================================================
// 0x90a3: WORD 'COLORMA' codep=0x90af parp=0x90af
// ====================================================
// 0x90af: pop    bx
// 0x90b0: or     bx,bx
// 0x90b2: jns    90B9
// 0x90b4: mov    bx,0000
// 0x90b7: jmp    90BE
// 0x90b9: shr    bx,1
// 0x90bb: and    bx,38
// 0x90be: add    bx,699A
// 0x90c2: mov    [5A9D],bx
// 0x90c6: xor    ax,ax
// 0x90c8: mov    al,[bx]
// 0x90ca: mov    [5747],ax
// 0x90ce: add    bx,02
// 0x90d1: mov    al,[bx]
// 0x90d3: mov    [5754],ax
// 0x90d7: lodsw
// 0x90d8: mov    bx,ax
// 0x90da: jmp    word ptr [bx]

// ====================================================
// 0x90dc: WORD 'COLORMA' codep=0x224c parp=0x90e8
// ====================================================

void COLORMA()
{
  COLORMA pp_COLOR @ !COLOR();
  
}


// ====================================================
// 0x90f2: WORD 'CELLCOL' codep=0x224c parp=0x90fe
// ====================================================

void CELLCOL()
{
  ACELLAD();
  A@();
  COLORMA();
  
}


// ====================================================
// 0x9106: WORD '!XYSEED' codep=0x224c parp=0x9112
// ====================================================

void !XYSEED()
{
  pp_SEED !();
  FRND SWAP pp_SEED !();
  FRND pp_GLOBALS @ XOR XOR pp_SEED !();
  
}


// ====================================================
// 0x912e: WORD 'SQLPLOT' codep=0x224c parp=0x913a
// ====================================================

void SQLPLOT()
{
  DUP 1- >R OVER >R LPLOT R> R> LPLOT 
}


// ====================================================
// 0x914e: WORD 'BUFFERX' codep=0x915a parp=0x915a
// ====================================================
// 0x915a: pop    cx
// 0x915b: pop    ax
// 0x915c: pop    dx
// 0x915d: pop    bx
// 0x915e: sub    dx,[4EC2]
// 0x9162: inc    dx
// 0x9163: or     cx,cx
// 0x9165: jz     9169
// 0x9167: shl    dx,cl
// 0x9169: add    dx,[5B3B]
// 0x916d: dec    dx
// 0x916e: sub    bx,[4EB8]
// 0x9172: mov    cx,ax
// 0x9174: or     cx,cx
// 0x9176: jz     917A
// 0x9178: shl    bx,cl
// 0x917a: add    bx,[5B2D]
// 0x917e: push   bx
// 0x917f: push   dx
// 0x9180: lodsw
// 0x9181: mov    bx,ax
// 0x9183: jmp    word ptr [bx]

// ====================================================
// 0x9185: WORD 'UNK_0x9187' codep=0x224c parp=0x9187
// ====================================================

void UNK_0x9187()
{
  pp_'.CELL @EXECUTE 
}


// ====================================================
// 0x918d: WORD '.1X2CEL' codep=0x224c parp=0x9199
// ====================================================

void .1X2CEL()
{
  2DUP CELLCOL();
  Push(0); Push(1); BUFFERX SQLPLOT();
  
}


// ====================================================
// 0x91a7: WORD 'TILEFIL' codep=0x224c parp=0x91b3
// ====================================================

void TILEFIL()
{
  UNK_0x87bd();
  >R UNK_0x86fa();
  pp_TILE-PT @ C@ !COLOR();
  >R OVER SWAP - Push(cc_CX); 1+ C!();
  Push(cc_BX); 1+ C!();
  R> OVER + Push(cc_CX); C!();
  Push(cc_BX); C!();
  Push(0x000a); Push(cc_AX); !();
  GRCALL R> UNK_0x87cb();
  
}


// ====================================================
// 0x91f3: WORD '.2X2CEL' codep=0x224c parp=0x91ff
// ====================================================

void .2X2CEL()
{
  2DUP CELLCOL();
  Push(1); Push(1); BUFFERX 2DUP SQLPLOT();
  SWAP 1+ SWAP SQLPLOT();
  
}


// ====================================================
// 0x9217: WORD '.4X4CEL' codep=0x224c parp=0x9223
// ====================================================

void .4X4CEL()
{
  2DUP CELLCOL();
  Push(2); Push(2); BUFFERX Push(cc_4); Push(cc_4); TILEFIL();
  
}


// ====================================================
// 0x9235: WORD '.8X8CEL' codep=0x224c parp=0x9241
// ====================================================

// ====================================================
// 0x9239: WORD 'UNK_0x923b' codep=0x5838 parp=0x923b
// ====================================================

// ====================================================
// 0x9241: WORD 'UNK_0x9243' codep=0x0df0 parp=0x9243
// ====================================================

void .8X8CEL()
{
  2DUP CELLCOL();
  Push(cc_3); Push(cc_3); BUFFERX Push(cc_8); Push(cc_8); TILEFIL();
  
}


// ====================================================
// 0x9253: WORD '.REGION' codep=0x224c parp=0x925f
// ====================================================

void .REGION()
{
  pp_YUR @ 1+ pp_YLL @ 
  do // (DO)
  {
  pp_XUR @ 1+ pp_XLL @ 
  do // (DO)
  {
  I J UNK_0x9187();
  
  } while(...); // (LOOP) 0xfff8
  
  } while(...); // (LOOP) 0xffe8
  
}


// ====================================================
// 0x9287: WORD '?INVIS' codep=0x9292 parp=0x9292
// ====================================================
// 0x9292: sub    ax,ax
// 0x9294: pop    dx
// 0x9295: cmp    dx,[5CCB]
// 0x9299: jns    929E
// 0x929b: or     ax,0004
// 0x929e: cmp    dx,[5CB5]
// 0x92a2: jle    92A7
// 0x92a4: or     ax,0008
// 0x92a7: pop    dx
// 0x92a8: cmp    dx,[5CD6]
// 0x92ac: jns    92B1
// 0x92ae: or     ax,0001
// 0x92b1: cmp    dx,[5CC0]
// 0x92b5: jle    92BA
// 0x92b7: or     ax,0002
// 0x92ba: or     ax,ax
// 0x92bc: jnz    92C1
// 0x92be: inc    ax
// 0x92bf: jmp    92C3
// 0x92c1: xor    ax,ax
// 0x92c3: push   ax
// 0x92c4: lodsw
// 0x92c5: mov    bx,ax
// 0x92c7: jmp    word ptr [bx]

// ====================================================
// 0x92c9: WORD 'WLD>SCR' codep=0x92d5 parp=0x92d5
// ====================================================
// 0x92d5: pop    ax
// 0x92d6: sub    ax,[5CCB]
// 0x92da: mov    cx,[6432]
// 0x92de: imul   cx
// 0x92e0: mov    cx,[6434]
// 0x92e4: idiv   cx
// 0x92e6: add    ax,[5B3B]
// 0x92ea: mov    [49B4],ax
// 0x92ee: pop    ax
// 0x92ef: sub    ax,[5CD6]
// 0x92f3: mov    cx,[6422]
// 0x92f7: imul   cx
// 0x92f9: mov    cx,[6424]
// 0x92fd: idiv   cx
// 0x92ff: add    ax,[5B2D]
// 0x9303: push   ax
// 0x9304: push   word ptr [49B4]
// 0x9308: lodsw
// 0x9309: mov    bx,ax
// 0x930b: jmp    word ptr [bx]

// ====================================================
// 0x930d: WORD 'SCR>BLT' codep=0x9319 parp=0x9319
// ====================================================
// 0x9319: pop    ax
// 0x931a: add    ax,0007
// 0x931d: sub    ax,[5C1E]
// 0x9321: pop    cx
// 0x9322: sub    cx,[5C1E]
// 0x9326: push   cx
// 0x9327: push   ax
// 0x9328: lodsw
// 0x9329: mov    bx,ax
// 0x932b: jmp    word ptr [bx]

// ====================================================
// 0x932d: WORD '!VISWIN' codep=0x224c parp=0x9339
// ====================================================

void !VISWIN()
{
  pp_TVIS !();
  pp_RVIS !();
  pp_BVIS !();
  pp_LVIS !();
  
}


// ====================================================
// 0x934b: WORD 'UNK_0x934d' codep=0x224c parp=0x934d
// ====================================================

void UNK_0x934d()
{
  Push(0x0043); * pp_ICON^ @ + Push(0); NULL ICONIMA Push(0x0043); 16* LCMOVE 
}


// ====================================================
// 0x9369: WORD '>1ICONF' codep=0x224c parp=0x9375
// ====================================================

void >1ICONF()
{
  Push(1); pp_ICONFON !();
  pp_UNK_0x5c1e 099();
  Push(0); UNK_0x934d();
  
}


// ====================================================
// 0x9385: WORD '>2ICONF' codep=0x224c parp=0x9391
// ====================================================

void >2ICONF()
{
  Push(2); pp_ICONFON !();
  Push(2); pp_UNK_0x5c1e !();
  Push(1); UNK_0x934d();
  
}


// ====================================================
// 0x93a3: WORD '>3ICONF' codep=0x224c parp=0x93af
// ====================================================

void >3ICONF()
{
  Push(cc_3); pp_ICONFON !();
  Push(cc_3); pp_UNK_0x5c1e !();
  Push(2); UNK_0x934d();
  
}


// ====================================================
// 0x93c1: WORD 'UNK_0x93c3' codep=0x93c3 parp=0x93c3
// ====================================================
// 0x93c3: pop    ax
// 0x93c4: push   es
// 0x93c5: mov    es,ax
// 0x93c7: mov    bx,[5BD2]
// 0x93cb: shl    bx,1
// 0x93cd: es:    
// 0x93ce: mov    ax,[bx]
// 0x93d0: pop    es
// 0x93d1: push   ax
// 0x93d2: lodsw
// 0x93d3: mov    bx,ax
// 0x93d5: jmp    word ptr [bx]

// ====================================================
// 0x93d7: WORD 'UNK_0x93d9' codep=0x93d9 parp=0x93d9
// ====================================================
// 0x93d9: pop    ax
// 0x93da: push   es
// 0x93db: mov    es,ax
// 0x93dd: mov    bx,[5BD2]
// 0x93e1: xor    ax,ax
// 0x93e3: es:    
// 0x93e4: mov    al,[bx]
// 0x93e6: pop    es
// 0x93e7: push   ax
// 0x93e8: lodsw
// 0x93e9: mov    bx,ax
// 0x93eb: jmp    word ptr [bx]

// ====================================================
// 0x93ed: WORD '!IW' codep=0x93f5 parp=0x93f5
// ====================================================
// 0x93f5: pop    ax
// 0x93f6: pop    cx
// 0x93f7: push   es
// 0x93f8: mov    es,ax
// 0x93fa: mov    bx,[5BD2]
// 0x93fe: shl    bx,1
// 0x9400: es:    
// 0x9401: mov    [bx],cx
// 0x9403: pop    es
// 0x9404: lodsw
// 0x9405: mov    bx,ax
// 0x9407: jmp    word ptr [bx]

// ====================================================
// 0x9409: WORD '!IB' codep=0x9411 parp=0x9411
// ====================================================
// 0x9411: pop    ax
// 0x9412: pop    cx
// 0x9413: push   es
// 0x9414: mov    es,ax
// 0x9416: mov    bx,[5BD2]
// 0x941a: es:    
// 0x941b: mov    [bx],cl
// 0x941d: pop    es
// 0x941e: lodsw
// 0x941f: mov    bx,ax
// 0x9421: jmp    word ptr [bx]

// ====================================================
// 0x9423: WORD '@IX' codep=0x224c parp=0x942b
// ====================================================

void @IX()
{
  pp_UNK_0x5b8e @ UNK_0x93c3 
}


// ====================================================
// 0x9433: WORD '@IY' codep=0x224c parp=0x943b
// ====================================================

void @IY()
{
  pp_UNK_0x5b92 @ UNK_0x93c3 
}


// ====================================================
// 0x9443: WORD '@ID' codep=0x224c parp=0x944b
// ====================================================

void @ID()
{
  pp_UNK_0x5b96 @ UNK_0x93d9 
}


// ====================================================
// 0x9453: WORD '@IC' codep=0x224c parp=0x945b
// ====================================================

void @IC()
{
  pp_UNK_0x5b9a @ UNK_0x93d9 
}


// ====================================================
// 0x9463: WORD '@IL' codep=0x224c parp=0x946b
// ====================================================

void @IL()
{
  pp_UNK_0x5b9e @ UNK_0x93c3 
}


// ====================================================
// 0x9473: WORD '@IH' codep=0x224c parp=0x947b
// ====================================================

void @IH()
{
  pp_IHSEG @ UNK_0x93d9 
}


// ====================================================
// 0x9483: WORD '!IX' codep=0x224c parp=0x948b
// ====================================================

void !IX()
{
  pp_UNK_0x5b8e @ !IW 
}


// ====================================================
// 0x9493: WORD '!IY' codep=0x224c parp=0x949b
// ====================================================

void !IY()
{
  pp_UNK_0x5b92 @ !IW 
}


// ====================================================
// 0x94a3: WORD '!ID' codep=0x224c parp=0x94ab
// ====================================================

void !ID()
{
  pp_UNK_0x5b96 @ !IB 
}


// ====================================================
// 0x94b3: WORD '!IC' codep=0x224c parp=0x94bb
// ====================================================

void !IC()
{
  pp_UNK_0x5b9a @ !IB 
}


// ====================================================
// 0x94c3: WORD '!IL' codep=0x224c parp=0x94cb
// ====================================================

void !IL()
{
  pp_UNK_0x5b9e @ !IW 
}


// ====================================================
// 0x94d3: WORD '!IH' codep=0x224c parp=0x94db
// ====================================================

void !IH()
{
  pp_IHSEG @ !IB 
}


// ====================================================
// 0x94e3: WORD 'INIT-IC' codep=0x224c parp=0x94ef
// ====================================================

void INIT-IC()
{
  pp_IGLOBAL 099();
  pp_ILOCAL 099();
  
}


// ====================================================
// 0x94f9: WORD '.BACKGR' codep=0x224c parp=0x9505
// ====================================================

void .BACKGR()
{
  pp_'.BACKG @EXECUTE 
}


// ====================================================
// 0x950b: WORD '?VCLIP' codep=0x224c parp=0x9516
// ====================================================

void ?VCLIP()
{
  DUP DUP Push(0x0098); < SWAP Push(0xffd8); > AND >R OVER DUP Push(0x0066); < SWAP Push(0xffd8); > AND R> AND 
}


// ====================================================
// 0x9546: WORD 'UNK_0x9548' codep=0x224c parp=0x9548
// ====================================================

void UNK_0x9548()
{
  DUP Push(0x005a); > 
  if (Pop() == 0) goto label296;
  Push(0x0028); - 
  label296:
  Push(0); SWAP ICONIMA pp_ABLT !();
  pp_BLTSEG !();
  Push(2); Push(0); 
  do // (DO)
  {
  pp_BLTSEG @ pp_ABLT @ LC@ I>C();
  ?CGA();
  
  if (Pop() == 0) goto label297;
  >FLAG();
  
  label297:
  !COLOR();
  Push(1); pp_ABLT +!();
  BLT Push(cc_8); pp_ABLT +!();
  
  } while(...); // (LOOP) 0xffda
  
}


// ====================================================
// 0x9598: WORD 'UNK_0x959a' codep=0x224c parp=0x959a
// ====================================================

void UNK_0x959a()
{
  Push(cc_8); Push(cc_8); pp_WBLT !();
  pp_LBLT !();
  @IX();
  @IY();
  WLD>SCR SCR>BLT pp_YBLT !();
  pp_XBLT !();
  @ID();
  UNK_0x9548();
  @IC();
  Push(cc_DEAD-IC); = 
  if (Pop() == 0) goto label298;
  Push(0x0013); UNK_0x9548();
  
  goto label299;
  
  label298:
  @IC();
  Push(cc_4); = 
  if (Pop() == 0) goto label299;
  Push(0x0012); UNK_0x9548();
  
  label299:
  
}

// 0x95e0: db 0x4c 0x22 0xbe 0x56 0x37 0x3a 0x90 0x16 'L" V7:  '
  
// ====================================================
// 0x95e8: WORD '.CIRCLE' codep=0x224c parp=0x95f4
// ====================================================

void .CIRCLE()
{
  @IC();
  !COLOR();
  @IX();
  @IY();
  WLD>SCR @ID();
  Push(cc_NULL-IC); - Push(cc_*MAPSCA); * pp_YWLD:YP 2@ pp_CONTEXT @ Push(cc_3); = 
  if (Pop() == 0) goto label293;
  Push(cc_7); + 
  label293:
  SWAP */();
  FILLCIR();
  
}


// ====================================================
// 0x9624: WORD 'SYSCASE' codep=0x4b3b parp=0x9630
// ====================================================
// 0x9630: db 0x04 0x00 0xef 0x5c 0x04 0x00 0x09 0x5d 0x06 0x00 0x09 0x5d 0x0f 0x00 0xfc 0x5c 0x0e 0x00 0xfc 0x5c 0x4c 0x22 0x1d 0x85 0x29 0x94 0x39 0x94 0xd3 0x92 0x8f 0x3b 0x20 0x0f 0xb8 0x15 0x0b 0x87 0xf0 0x0d 0x50 0x0e 0x72 0x89 0xd0 0x15 0xf6 0xff 0xde 0x0d 0x34 0x85 0x90 0x16 0x4c 0x22 0x59 0x94 0x2e 0x96 0xae 0x0b 0x20 0x0f 0xae 0x4a 0x68 0x50 0x5d 0x17 0x0e 0x00 0xfc 0x2e 0x29 0x94 0x39 0x94 0xd3 0x92 0xce 0x50 0x92 0x0c 0x35 0x10 0x72 0x0f 0xf2 0x0e 0xa9 0x50 0xae 0x0b 0x87 0x3b 0x4c 0x0f 0x92 0x0f 0xf2 0x0e 0x14 0x95 0xfa 0x15 0x1c 0x00 0xfe 0x85 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x1c 0x00 0xe0 0x50 0x0a 0x6d 0x0e 0x8e 0x20 0x0f 0xe0 0x50 0x0a 0x6d 0x60 0x16 0x04 0x00 0xde 0x0d 0x90 0x16 '   \   ]   ]   \   \L"  ) 9    ;        P r       4   L"Y .      JhP]    .) 9    P  5 r    P   ;L                 ]    P m     P m`       '
  
// ====================================================
// 0x96ba: WORD '.ICONCA' codep=0x4b3b parp=0x96c6
// ====================================================
// 0x96c6: db 0x04 0x00 0xf4 0x95 0xfd 0x00 0x68 0x96 0x32 0x00 0x46 0x96 0xff 0x00 0xe2 0x95 0xfe 0x00 0x48 0x3a '      h 2 F       H:'
  
// ====================================================
// 0x96da: WORD 'POINT>I' codep=0x224c parp=0x96e6
// ====================================================

void POINT>I()
{
  pp_IINDEX !();
  
}


// ====================================================
// 0x96ec: WORD '.ICON' codep=0x224c parp=0x96f6
// ====================================================

void .ICON()
{
  @IX();
  @IY();
  ?INVIS @ID();
  Push(0x0033); Push(0x005b); WITHIN();
  OR 
  if (Pop() == 0) goto label294;
  @ID();
  Push(cc_NULL-IC); < @ID();
  Push(0x005b); Push(0x0063); WITHIN();
  OR 
  if (Pop() == 0) goto label295;
  UNK_0x959a();
  
  goto label294;
  
  label295:
  @ID();
  .ICONCA 
  label294:
  
}


// ====================================================
// 0x9732: WORD '.LOCAL-' codep=0x224c parp=0x973e
// ====================================================

void .LOCAL-()
{
  pp_ILOCAL @ ?DUP 
  if (Pop() == 0) goto label300;
  Push(0); 
  do // (DO)
  {
  I POINT>I();
  .ICON();
  
  } while(...); // (LOOP) 0xfff8
  
  label300:
  
}


// ====================================================
// 0x9758: WORD 'UNK_0x975a' codep=0x975a parp=0x975a
// ====================================================
// 0x975a: pop    cx
// 0x975b: pop    word ptr [5C90]
// 0x975f: pop    word ptr [5C8C]
// 0x9763: pop    word ptr [5C88]
// 0x9767: pop    word ptr [5C84]
// 0x976b: xor    ax,ax
// 0x976d: push   ax
// 0x976e: or     cx,cx
// 0x9770: jle    97B3
// 0x9772: mov    bx,cx
// 0x9774: dec    bx
// 0x9775: add    bx,[5C90]
// 0x9779: shl    bx,1
// 0x977b: push   es
// 0x977c: push   word ptr [5B8E]
// 0x9780: pop    es
// 0x9781: es:    
// 0x9782: mov    dx,[bx]
// 0x9784: pop    es
// 0x9785: sub    dx,[5C84]
// 0x9789: jns    978D
// 0x978b: neg    dx
// 0x978d: cmp    dx,[5C8C]
// 0x9791: jg     97B1
// 0x9793: push   es
// 0x9794: push   word ptr [5B92]
// 0x9798: pop    es
// 0x9799: es:    
// 0x979a: mov    dx,[bx]
// 0x979c: pop    es
// 0x979d: sub    dx,[5C88]
// 0x97a1: jns    97A5
// 0x97a3: neg    dx
// 0x97a5: cmp    dx,[5C8C]
// 0x97a9: jg     97B1
// 0x97ab: pop    ax
// 0x97ac: shr    bx,1
// 0x97ae: push   bx
// 0x97af: inc    ax
// 0x97b0: push   ax
// 0x97b1: loop   9772
// 0x97b3: lodsw
// 0x97b4: mov    bx,ax
// 0x97b6: jmp    word ptr [bx]

// ====================================================
// 0x97b8: WORD '?ICONS-' codep=0x224c parp=0x97c4
// ====================================================

void ?ICONS-()
{
  Push(0); SWAP UNK_0x975a 
}


// ====================================================
// 0x97cc: WORD '?ICONS-' codep=0x224c parp=0x97d8
// ====================================================

void ?ICONS-()
{
  Push(0); SWAP ?ICONS-();
  
}


// ====================================================
// 0x97e0: WORD '?ICON=I' codep=0x224c parp=0x97ec
// ====================================================

void ?ICON=I()
{
  Push(0); pp_IGLOBAL @ 
  label302:
  pp_UNK_0x5b9e @ ROT ROT Push(cc_5); PICK();
  LWSCAN 
  if (Pop() == 0) goto label301;
  pp_IHSEG @ OVER 2/ LC@ Push(cc_3); PICK();
  = 
  if (Pop() == 0) goto label305;
  Push(1); 
  goto label307;
  
  label305:
  2+ pp_IGLOBAL @ OVER 2/ - Push(0); 
  label307:
  
  goto label306;
  
  label301:
  Push(cc_-1); Push(1); 
  label306:
  
  if (Pop() == 0) goto label302;
  >R 2DROP R> DUP 0< 
// ====================================================
// 0x9842: WORD 'UNK_0x9844' codep=0x15fa parp=0x9844
// ====================================================

  if (Pop() == 0) goto label303;
  DROP Push(0); 
  goto label304;
  
  label303:
  2/ Push(1); 
  label304:
  
}


// ====================================================
// 0x9854: WORD 'UNK_0x9856' codep=0x9856 parp=0x9856
// ====================================================
// 0x9856: pop    ax
// 0x9857: pop    bx
// 0x9858: push   es
// 0x9859: push   word ptr [5B96]
// 0x985d: pop    es
// 0x985e: call   4AB8
// 0x9861: push   word ptr [5B9A]
// 0x9865: pop    es
// 0x9866: call   4AB8
// 0x9869: push   word ptr [5BAA]
// 0x986d: pop    es
// 0x986e: call   4AB8
// 0x9871: shl    ax,1
// 0x9873: shl    bx,1
// 0x9875: push   word ptr [5B8E]
// 0x9879: pop    es
// 0x987a: call   2F36
// 0x987d: push   word ptr [5B92]
// 0x9881: pop    es
// 0x9882: call   2F36
// 0x9885: push   word ptr [5B9E]
// 0x9889: pop    es
// 0x988a: call   2F36
// 0x988d: pop    es
// 0x988e: lodsw
// 0x988f: mov    bx,ax
// 0x9891: jmp    word ptr [bx]

// ====================================================
// 0x9893: WORD 'UNK_0x9895' codep=0x224c parp=0x9895
// ====================================================

void UNK_0x9895()
{
  pp_UNK_0x5c90 !();
  ?DUP 
  if (Pop() == 0) goto label313;
  Push(0); 
  do // (DO)
  {
  I pp_UNK_0x5c90 @ + UNK_0x9856 
  } while(...); // (LOOP) 0xfff4
  
  label313:
  
}


// ====================================================
// 0x98b3: WORD '-ICON' codep=0x224c parp=0x98bd
// ====================================================

void -ICON()
{
  CI ?ICON=I();
  
  if (Pop() == 0) goto label308;
  pp_ILOCAL @ OVER > 
  if (Pop() == 0) goto label309;
  Push(cc_-1); pp_ILOCAL +!();
  pp_ILOCAL @ DUP >R UNK_0x9856 R> 
  label309:
  Push(cc_-1); pp_IGLOBAL +!();
  pp_IGLOBAL @ UNK_0x9856 
  label308:
  
}


// ====================================================
// 0x98f1: WORD 'UNK_0x98f3' codep=0x98f3 parp=0x98f3
// ====================================================
// 0x98f3: pop    cx
// 0x98f4: pop    word ptr [5C90]
// 0x98f8: pop    dx
// 0x98f9: pop    word ptr [49B6]
// 0x98fd: xor    ax,ax
// 0x98ff: push   es
// 0x9900: pop    word ptr [49B4]
// 0x9904: push   word ptr [5B96]
// 0x9908: pop    es
// 0x9909: push   ax
// 0x990a: or     cx,cx
// 0x990c: jle    992A
// 0x990e: mov    bx,cx
// 0x9910: dec    bx
// 0x9911: add    bx,[5C90]
// 0x9915: es:    
// 0x9916: mov    al,[bx]
// 0x9918: cmp    ax,dx
// 0x991a: jns    9928
// 0x991c: cmp    ax,[49B6]
// 0x9920: jle    9928
// 0x9922: pop    ax
// 0x9923: push   bx
// 0x9924: inc    ax
// 0x9925: push   ax
// 0x9926: xor    ax,ax
// 0x9928: loop   990E
// 0x992a: push   word ptr [49B4]
// 0x992e: pop    es
// 0x992f: lodsw
// 0x9930: mov    bx,ax
// 0x9932: jmp    word ptr [bx]

// ====================================================
// 0x9934: WORD '?ICONSI' codep=0x224c parp=0x9940
// ====================================================

void ?ICONSI()
{
  Push(0); SWAP UNK_0x98f3 
}


// ====================================================
// 0x9948: WORD '+ICON' codep=0x224c parp=0x9952
// ====================================================

void +ICON()
{
  pp_IGLOBAL @ DUP Push(cc_UNK_0x5286); = 
  if (Pop() == 0) goto label310;
  UNRAVEL();
  
  label310:
  POINT>I();
  Push(1); pp_IGLOBAL +!();
  !IH();
  !IL();
  !IC();
  !ID();
  !IY();
  !IX();
  
}


// ====================================================
// 0x9978: WORD '+ICONBO' codep=0x224c parp=0x9984
// ====================================================

void +ICONBO()
{
  pp_'ICONBO @ MODULE();
  
}


// ====================================================
// 0x998c: WORD 'ORGLIST' codep=0x224c parp=0x9998
// ====================================================

void ORGLIST()
{
  pp_ANCHOR 2@ pp_YABS @ - ABS();
  SWAP pp_XABS @ - ABS();
  MAX();
  pp_LOCRADI @ - 0> 
  if (Pop() == 0) goto label311;
  pp_XABS @ pp_YABS @ 2DUP pp_ANCHOR 2!();
  pp_CONTEXT @ 
  if (Pop() == 0) goto label312;
  pp_LOCRADI @ pp_UNK_0x5658 @ + pp_IGLOBAL @ ?ICONS-();
  DUP pp_ILOCAL !();
  Push(0); UNK_0x9895();
  Push(cc_NULL-IC); Push(cc_SYS-ICO); pp_ILOCAL @ ?ICONSI();
  DUP pp_UNK_0x55ee !();
  Push(0); UNK_0x9895();
  pp_ANCHOR 2@ pp_LOCRADI @ pp_UNK_0x55ee @ pp_ILOCAL @ OVER - UNK_0x975a DUP pp_UNK_0x55ee @ + pp_ILOCAL !();
  pp_UNK_0x55ee @ UNK_0x9895();
  
  goto label314;
  
  label312:
  pp_LOCRADI @ pp_IGLOBAL @ ?ICONS-();
  DUP pp_ILOCAL !();
  Push(0); UNK_0x9895();
  
  label314:
  Push(0x0019); Push(0x0023); pp_ILOCAL @ ?ICONSI();
  ?DUP 
  if (Pop() == 0) goto label311;
  Push(0); 
  do // (DO)
  {
  pp_ILOCAL @ 1- UNK_0x9856 
  } while(...); // (LOOP) 0xfff6
  
  label311:
  
}


// ====================================================
// 0x9a66: WORD 'SFILL' codep=0x224c parp=0x9a70
// ====================================================

void SFILL()
{
  BFILL();
  
}


// ====================================================
// 0x9a74: WORD 'POS.' codep=0x224c parp=0x9a7d
// ====================================================

void POS.()
{
  pp_YBLT !();
  pp_XBLT !();
  
}


// ====================================================
// 0x9a87: WORD 'WINDOW' codep=0x224c parp=0x9a92
// ====================================================

void WINDOW()
{
  DUP pp_WCHARS !();
  Push(cc_4); * ROT DUP pp_WLEFT !();
  + pp_WRIGHT !();
  DUP pp_WLINES !();
  1- Push(0xfff9); * Push(cc_5); - OVER + pp_WBOTTOM !();
  pp_WTOP !();
  
}


// ====================================================
// 0x9aca: WORD '.1LOGO' codep=0x224c parp=0x9ad5
// ====================================================

void .1LOGO()
{
  @COLOR();
  >R >R R@ !COLOR();
  POS.();
  @DS pp_BLTSEG !();
  Push(0x000a); pp_LBLT !();
  Push(0x000a); pp_WBLT !();
  pp_1LOGO pp_ABLT !();
  R> GREY2 = 
  if (Pop() == 0) goto label315;
  GREY2 !COLOR();
  
  label315:
  BLT R> !COLOR();
  
}


// ====================================================
// 0x9b13: WORD 'UNK_0x9b15' codep=0x224c parp=0x9b15
// ====================================================

void UNK_0x9b15()
{
  pp_UNK_0x688b pp_VIN !();
  pp_UNK_0x68cd pp_VOUT !();
  pp_UNK_0x690f pp_OIN !();
  pp_UNK_0x6951 pp_OOUT !();
  
}


// ====================================================
// 0x9b2f: WORD 'UNK_0x9b31' codep=0x224c parp=0x9b31
// ====================================================

void UNK_0x9b31()
{
  UNK_0x9b15();
  !COLOR();
  pp_UNK_0x688b >R DUP I 2+ !();
  I Push(0x000e); + !();
  DUP I !();
  I Push(cc_4); + !();
  DUP I Push(cc_6); + !();
  I Push(0x000a); + !();
  DUP I Push(cc_8); + !();
  R> Push(0x000c); + !();
  Push(cc_4); pp_#IN !();
  
}


// ====================================================
// 0x9b89: WORD 'POLY-WI' codep=0x224c parp=0x9b95
// ====================================================

void POLY-WI()
{
  UNK_0x9b31();
  SCANPOL LFILLPO();
  
}


// ====================================================
// 0x9b9d: WORD '>SSCT' codep=0x224c parp=0x9ba7
// ====================================================

void >SSCT()
{
  Push(0x0032); pp_CTTOP !();
  Push(2); pp_CTBOT !();
  Push(0x0033); Push(cc_3); Push(cc_7); Push(0x0026); WINDOW();
  Push(1); pp_WBOTTOM !();
  Push(0x009e); pp_WRIGHT !();
  
}


// ====================================================
// 0x9bd3: WORD '>TVCT' codep=0x224c parp=0x9bdd
// ====================================================

void >TVCT()
{
  Push(0x0040); Push(cc_3); Push(cc_7); Push(0x0026); WINDOW();
  Push(0x009e); pp_WRIGHT !();
  pp_WTOP @ 1- pp_CTTOP !();
  Push(0x000f); DUP pp_WBOTTOM !();
  pp_CTBOT !();
  
}


// ====================================================
// 0x9c0d: WORD 'CTPOS.' codep=0x224c parp=0x9c18
// ====================================================

void CTPOS.()
{
  2DUP pp_CTY !();
  pp_CTX !();
  SWAP Push(cc_4); * Push(cc_4); + pp_CTTOP @ ROT Push(cc_7); * - POS.();
  
}


// ====================================================
// 0x9c3c: WORD 'CTERASE' codep=0x224c parp=0x9c48
// ====================================================

void CTERASE()
{
  @COLOR();
  pp_WTOP @ pp_WLEFT @ pp_WBOTTOM @ pp_WRIGHT @ Push(2); - BLACK POLY-WI();
  Push(0); Push(0); CTPOS.();
  !COLOR();
  
}


// ====================================================
// 0x9c6c: WORD 'UNK_0x9c6e' codep=0x224c parp=0x9c6e
// ====================================================

void UNK_0x9c6e()
{
  pp_BEEPTONE @ pp_BEEPMS @ 
}


// ====================================================
// 0x9c78: WORD 'UNK_0x9c7a' codep=0x224c parp=0x9c7a
// ====================================================

void UNK_0x9c7a()
{
  pp_BEEPMS <!> pp_BEEPTONE <!> 
}


// ====================================================
// 0x9c84: WORD 'CLICK' codep=0x224c parp=0x9c8e
// ====================================================

void CLICK()
{
  UNK_0x9c6e();
  Push(0x0064); pp_BEEPMS !();
  Push(0x0032); pp_BEEPTONE !();
  BEEP();
  UNK_0x9c7a();
  
}


// ====================================================
// 0x9ca6: WORD '>SND' codep=0x224c parp=0x9caf
// ====================================================

void >SND()
{
  Push(0); pp_@,0*1; @ 
  if (Pop() == 0) goto label316;
  Push(1); TONE BEEPON 
  do // (DO)
  {
  TONE MS();
  
  } while(...); // (LOOP) 0xfffa
  BEEPOFF 
  goto label317;
  
  label316:
  
  do // (DO)
  {
  2DROP 
  } while(...); // (LOOP) 0xfffc
  
  label317:
  
}


// ====================================================
// 0x9cd9: WORD 'BEEPON' codep=0x224c parp=0x9ce4
// ====================================================

void BEEPON()
{
  pp_@,0*1; @ 
  if (Pop() == 0) goto label318;
  BEEPON 
  label318:
  
}


// ====================================================
// 0x9cf0: WORD 'UNK_0x9cf2' codep=0x224c parp=0x9cf2
// ====================================================

void UNK_0x9cf2()
{
  Push(cc_MUSSEG); SWAP 
}


// ====================================================
// 0x9cf8: WORD 'UNK_0x9cfa' codep=0x224c parp=0x9cfa
// ====================================================

void UNK_0x9cfa()
{
  UNK_0x9cf2();
  L! 
}


// ====================================================
// 0x9d00: WORD 'UNK_0x9d02' codep=0x224c parp=0x9d02
// ====================================================

void UNK_0x9d02()
{
  UNK_0x9cf2();
  L@ 
}


// ====================================================
// 0x9d08: WORD 'UNK_0x9d0a' codep=0x224c parp=0x9d0a
// ====================================================

void UNK_0x9d0a()
{
  UNK_0x9cf2();
  LC@ 
}


// ====================================================
// 0x9d10: WORD 'UNK_0x9d12' codep=0x224c parp=0x9d12
// ====================================================

void UNK_0x9d12()
{
  UNK_0x9cf2();
  LC! 
// ====================================================
// 0x9d16: WORD 'UNK_0x9d18' codep=0x1690 parp=0x9d18
// ====================================================

}


// ====================================================
// 0x9d18: WORD 'UNK_0x9d1a' codep=0x224c parp=0x9d1a
// ====================================================

void UNK_0x9d1a()
{
  Push(1); Push(2); UNK_0x9d12();
  
}


// ====================================================
// 0x9d22: WORD 'UNK_0x9d24' codep=0x224c parp=0x9d24
// ====================================================

void UNK_0x9d24()
{
  Push(0); Push(2); UNK_0x9d12();
  BEEPOFF 
}


// ====================================================
// 0x9d2e: WORD 'SONG' codep=0x224c parp=0x9d37
// ====================================================

void SONG()
{
  pp_@,0*1; @ 
  if (Pop() == 0) goto label319;
  UNK_0x9d24();
  2* Push(0x0010); + UNK_0x9d02();
  DUP DUP Push(cc_3); UNK_0x9cfa();
  Push(cc_5); UNK_0x9cfa();
  DUP UNK_0x9d0a();
  Push(cc_9); UNK_0x9d12();
  1+ UNK_0x9d02();
  Push(cc_7); UNK_0x9cfa();
  Push(1); Push(0x000a); UNK_0x9d12();
  Push(1); Push(0x000d); UNK_0x9d12();
  UNK_0x9d1a();
  
  goto label320;
  
  label319:
  DROP 
  label320:
  
}


// ====================================================
// 0x9d81: WORD '@CRS' codep=0x224c parp=0x9d8a
// ====================================================

void @CRS()
{
  pp_YBLT @ pp_XBLT @ pp_LBLT @ pp_WBLT @ pp_ABLT @ pp_NCRS @ pp_OCRS @ @COLOR();
  pp_DCOLOR @ pp_XORMODE @ pp_BLTSEG @ 
}


// ====================================================
// 0x9db6: WORD '!CRS' codep=0x224c parp=0x9dbf
// ====================================================

void !CRS()
{
  pp_BLTSEG !();
  pp_XORMODE !();
  DROP !COLOR();
  pp_OCRS !();
  pp_NCRS !();
  pp_ABLT !();
  pp_WBLT !();
  pp_LBLT !();
  pp_XBLT !();
  pp_YBLT !();
  
}


// ====================================================
// 0x9de9: WORD '$.' codep=0x224c parp=0x9df0
// ====================================================

void $.()
{
  COUNT();
  TYPE 
}


// ====================================================
// 0x9df6: WORD 'POLY-ER' codep=0x224c parp=0x9e02
// ====================================================

void POLY-ER()
{
  >R >R @CRS();
  pp_YBLT @ DUP Push(cc_4); - pp_XBLT @ SWAP OVER R> Push(cc_4); * + R> POLY-WI();
  !CRS();
  
}


// ====================================================
// 0x9e2a: WORD 'POS.PXT' codep=0x224c parp=0x9e36
// ====================================================

void POS.PXT()
{
  >R >R >R >R @CRS();
  R> R> R> R> SWAP POS.();
  POLY-ER();
  !CRS();
  
}


// ====================================================
// 0x9e52: WORD 'UNK_0x9e54' codep=0x224c parp=0x9e54
// ====================================================

void UNK_0x9e54()
{
  >R @CRS();
  pp_XORMODE 099();
  >1FONT();
  pp_WLEFT @ pp_WBOTTOM @ Push(cc_5); + POS.();
  R> $.();
  !CRS();
  
}


// ====================================================
// 0x9e74: WORD 'UNK_0x9e76' codep=0x224c parp=0x9e76
// ====================================================

void UNK_0x9e76()
{
  >R @CRS();
  pp_XORMODE 099();
  >1FONT();
  pp_WLEFT @ pp_WTOP @ POS.();
  R> $.();
  !CRS();
  
}


// ====================================================
// 0x9e92: WORD 'WUP' codep=0x224c parp=0x9e9a
// ====================================================

void WUP()
{
  Push(cc_7); Push(0); 
  do // (DO)
  {
  pp_WLEFT @ pp_WTOP @ 1- pp_WRIGHT @ pp_WBOTTOM @ pp_WLEFT @ pp_WTOP @ LCOPYBL();
  
  } while(...); // (LOOP) 0xffe2
  
}


// ====================================================
// 0x9ec2: WORD 'WDN' codep=0x224c parp=0x9eca
// ====================================================

void WDN()
{
  Push(cc_7); Push(0); 
  do // (DO)
  {
  pp_WLEFT @ pp_WTOP @ 1+ pp_WRIGHT @ pp_WBOTTOM @ pp_WLEFT @ pp_WTOP @ LCOPYBL();
  
  } while(...); // (LOOP) 0xffe2
  
}


// ====================================================
// 0x9ef2: WORD 'WLINE-U' codep=0x224c parp=0x9efe
// ====================================================

void WLINE-U()
{
  WUP();
  
// ====================================================
// 0x9f00: WORD 'UNK_0x9f02' codep=0x9e52 parp=0x9f02
// ====================================================
UNK_0x9e54();
  
}


// ====================================================
// 0x9f04: WORD 'WLINE-D' codep=0x224c parp=0x9f10
// ====================================================

void WLINE-D()
{
  WDN();
  UNK_0x9e76();
  
}


// ====================================================
// 0x9f16: WORD 'GCR' codep=0x224c parp=0x9f1e
// ====================================================

void GCR()
{
  Push(0xfff9); pp_YBLT 
// ====================================================
// 0x9f23: WORD 'UNK_0x9f25' codep=0x235a parp=0x9f25
// ====================================================
+!();
  pp_WLEFT @ pp_XBLT !();
  
}


// ====================================================
// 0x9f30: WORD 'WSHORTE' codep=0x224c parp=0x9f3c
// ====================================================

void WSHORTE()
{
  pp_WCHARS @ SWAP Push(cc_7); pp_WBOTTOM +!();
  pp_WBOTTOM @ 2- pp_WLEFT @ POS.PXT();
  Push(cc_-1); pp_WLINES +!();
  
}


// ====================================================
// 0x9f5c: WORD 'UNK_0x9f5e' codep=0x224c parp=0x9f5e
// ====================================================

void UNK_0x9f5e()
{
  NULL pp_FTRIG OFF 
}

// 0x9f66: db 0x4c 0x22 0x12 0x52 0x37 0x3a 0x5c 0x9f 0x90 0x16 'L" R7:\   '
  
// ====================================================
// 0x9f70: WORD '>BOTT' codep=0x224c parp=0x9f7a
// ====================================================

void >BOTT()
{
  Push(cc_4); pp_WBOTTOM @ Push(cc_5); + DUP Push(0x000c); < 
  if (Pop() == 0) goto label321;
  1+ 
  label321:
  POS.();
  
}


// ====================================================
// 0x9f96: WORD 'CTCR' codep=0x224c parp=0x9f9f
// ====================================================

void CTCR()
{
  Push(0); pp_CTY @ 1+ Push(cc_6); MIN();
  CTPOS.();
  
}


// ====================================================
// 0x9faf: WORD 'TTY-SCR' codep=0x224c parp=0x9fbb
// ====================================================

void TTY-SCR()
{
  WUP();
  
}


// ====================================================
// 0x9fbf: WORD 'UNK_0x9fc1' codep=0x224c parp=0x9fc1
// ====================================================

void UNK_0x9fc1()
{
  >1FONT();
  TTY-SCR();
  >BOTT();
  
}


// ====================================================
// 0x9fc9: WORD 'CTINIT' codep=0x224c parp=0x9fd4
// ====================================================

void CTINIT()
{
  >1FONT();
  pp_XORMODE 099();
  WHITE !COLOR();
  Push(0x9fc1); Push(0x0644); EXECUTES();
  
}


// ====================================================
// 0x9fea: WORD '.TTY' codep=0x224c parp=0x9ff3
// ====================================================

void .TTY()
{
  UNK_0x9fc1();
  TYPE 
}


// ====================================================
// 0x9ff9: WORD 'VIEWSCR' codep=0x224c parp=0xa005
// ====================================================

void VIEWSCR()
{
  Push(cc_3); Push(0); 
  do // (DO)
  {
  I 1+ Push(0x00c3); OVER Push(0x0044); LLINE();
  Push(0x004c); I + Push(0x00c3); OVER Push(0x0044); LLINE();
  
  } while(...); // (LOOP) 0xffda
  Push(cc_4); Push(0); 
  do // (DO)
  {
  Push(cc_4); Push(0x0044); I + Push(0x004b); OVER LLINE();
  Push(cc_4); Push(0x00c0); I + Push(0x000b); OVER LLINE();
  Push(0x004b); Push(0x00c0); I + Push(0x0044); OVER LLINE();
  
  } while(...); // (LOOP) 0xffc6
  Push(0x004a); Push(0x00c0); Push(0x000c); OVER LLINE();
  @COLOR();
  SWAP !COLOR();
  >MAINVI();
  BFILL();
  >DISPLA();
  V>DISPL();
  !COLOR();
  
}


// ====================================================
// 0xa097: WORD 'TXT-WIN' codep=0x224c parp=0xa0a3
// ====================================================

void TXT-WIN()
{
  pp_?ON-PLA @ Push(0x000d); * >V Push(2); Push(0); 
  do // (DO)
  {
  I 1+ VI OVER Push(0x0034); VI + LLINE();
  Push(0x009d); I + VI OVER Push(0x0034); VI + LLINE();
  
  } while(...); // (LOOP) 0xffd6
  Push(cc_3); Push(0x0034); VI + Push(0x009c); OVER LLINE();
  Push(cc_3); VI Push(0x009c); V> LLINE();
  
}


// ====================================================
// 0xa101: WORD 'AUXSCRE' codep=0x224c parp=0xa10d
// ====================================================

void AUXSCRE()
{
  Push(2); Push(0); 
  do // (DO)
  {
  Push(0x0051); I + Push(0x007d); OVER Push(0x00c6); LLINE();
  Push(0x009d); I + Push(0x007d); OVER Push(0x00c6); LLINE();
  
  } while(...); // (LOOP) 0xffd6
  Push(0x0053); Push(0x00c6); Push(0x009c); OVER LLINE();
  Push(0x0053); Push(0x007d); Push(0x009c); OVER LLINE();
  
}


// ====================================================
// 0xa161: WORD 'BTN-WIN' codep=0x224c parp=0xa16d
// ====================================================

void BTN-WIN()
{
  Push(2); Push(0); 
  do // (DO)
  {
  Push(0x005a); I + Push(0x0037); OVER Push(0x007a); LLINE();
  Push(0x009d); I + Push(0x0037); OVER Push(0x007a); LLINE();
  
  } while(...); // (LOOP) 0xffd6
  Push(0x005c); Push(0x007a); Push(0x009c); OVER LLINE();
  Push(0x005c); Push(0x0037); Push(0x009c); OVER LLINE();
  
}


// ====================================================
// 0xa1c1: WORD '.BUTTON' codep=0x224c parp=0xa1cd
// ====================================================

void .BUTTON()
{
  pp_UNK_0x547d pp_ABLT !();
  Push(cc_9); pp_LBLT !();
  Push(cc_8); pp_WBLT !();
  pp_XORMODE 099();
  @DS pp_BLTSEG !();
  Push(cc_6); Push(0); 
  do // (DO)
  {
  Push(0x0051); Push(0x0078); I Push(0x000b); * - POS.();
  BLT 
  } while(...); // (LOOP) 0xffe8
  Push(2); Push(0x0041); GREY2 .1LOGO();
  
}


// ====================================================
// 0xa215: WORD '?MRC' codep=0x224c parp=0xa21e
// ====================================================

void ?MRC()
{
  pp_MONITOR @ DUP Push(cc_3); = SWAP Push(cc_4); > OR ?CGA();
  NOT AND 
  if (Pop() == 0) goto label322;
  ROT ROT 
  goto label323;
  
  label322:
  ?CGA();
  
  if (Pop() == 0) goto label323;
  ROT 
  label323:
  2DROP 
}


// ====================================================
// 0xa24e: WORD 'UNK_0xa250' codep=0x224c parp=0xa250
// ====================================================

void UNK_0xa250()
{
  >R @COLOR();
  Push(0x0079); Push(0x005c); Push(0x0038); Push(0x009c); R> POLY-WI();
  !COLOR();
  
}


// ====================================================
// 0xa26c: WORD 'ERASE-A' codep=0x224c parp=0xa278
// ====================================================

void ERASE-A()
{
  >R @COLOR();
  Push(0x00c5); Push(0x0053); Push(0x007e); Push(0x009c); R> POLY-WI();
  !COLOR();
  
}


// ====================================================
// 0xa294: WORD 'ERASE-T' codep=0x224c parp=0xa2a0
// ====================================================

void ERASE-T()
{
  >R @COLOR();
  Push(0x0033); Push(cc_3); Push(1); Push(0x009c); R> POLY-WI();
  Push(0); Push(0); CTPOS.();
  !COLOR();
  
}


// ====================================================
// 0xa2be: WORD 'UNK_0xa2c0' codep=0x224c parp=0xa2c0
// ====================================================

void UNK_0xa2c0()
{
  Push(0x000b); * Push(0x0052); Push(0x0077); ROT - POS.();
  !COLOR();
  pp_XORMODE 099();
  
}


// ====================================================
// 0xa2dc: WORD '.HIGHLI' codep=0x224c parp=0xa2e8
// ====================================================

void .HIGHLI()
{
  @DS pp_BLTSEG !();
  UNK_0xa2c0();
  pp_UNK_0x5489 pp_ABLT !();
  Push(cc_7); pp_LBLT !();
  Push(cc_6); pp_WBLT !();
  BLT 
}


// ====================================================
// 0xa306: WORD 'UNK_0xa308' codep=0x224c parp=0xa308
// ====================================================

void UNK_0xa308()
{
  @DS pp_BLTSEG !();
  UNK_0xa2c0();
  Push(cc_-2); pp_YBLT +!();
  Push(2); pp_XBLT +!();
  Push(cc_3); pp_LBLT !();
  Push(2); pp_WBLT !();
  pp_UNK_0x5491 pp_ABLT !();
  BLT 
}


// ====================================================
// 0xa332: WORD '.ON' codep=0x224c parp=0xa33a
// ====================================================

void .ON()
{
  OVER >R UNK_0xa308();
  R> BLACK = NOT 
  if (Pop() == 0) goto label324;
  CLICK();
  
  label324:
  
}


// ====================================================
// 0xa350: WORD 'CLR-BUT' codep=0x224c parp=0xa35c
// ====================================================

void CLR-BUT()
{
  Push(cc_6); Push(0); 
  do // (DO)
  {
  Push(0); I 2DUP .HIGHLI();
  UNK_0xa308();
  
  } while(...); // (LOOP) 0xfff4
  
}


// ====================================================
// 0xa372: WORD 'INIT-BU' codep=0x224c parp=0xa37e
// ====================================================

void INIT-BU()
{
  CLR-BUT();
  pp_THIS-BU 099();
  BLUE Push(0); .HIGHLI();
  
}


// ====================================================
// 0xa38c: WORD '(SHIP-C' codep=0x224c parp=0xa398
// ====================================================

void (SHIP-C()
{
  >SSCT();
  GREY1 !COLOR();
  SFILL();
  GREEN GREEN DK-BLUE ?MRC();
  !COLOR();
  VIEWSCR();
  AUXSCRE();
  BTN-WIN();
  TXT-WIN();
  .BUTTON();
  Push(0); UNK_0xa250();
  BLACK ERASE-A();
  CTERASE();
  INIT-BU();
  
}


// ====================================================
// 0xa3c2: WORD 'SHIP-CO' codep=0x224c parp=0xa3ce
// ====================================================

void SHIP-CO()
{
  BLACK (SHIP-C();
  CTINIT();
  
}


// ====================================================
// 0xa3d6: WORD ''KEY' codep=0x224c parp=0xa3df
// ====================================================

void 'KEY()
{
  ?TERMINAL 
  if (Pop() == 0) goto label325;
  pp_LKEY @ pp_SKEY !();
  KEY();
  DUP pp_LKEY !();
  DUP Push(0x001b); = pp_ESC-EN @ AND pp_CONTEXT @ Push(cc_5); = 
  if (Pop() == 0) goto label326;
  ?1DRV();
  NOT AND 
  label326:
  
  if (Pop() == 0) goto label327;
  SAVE-OV();
  DROP Push(0); pp_ESC-PFA @EXECUTE 
  label327:
  DUP Push(0x0013); = 
  if (Pop() == 0) goto label328;
  DROP Push(0); pp_@,0*1; Push(1); TOGGLE pp_@,0*1; @ 0= 
  if (Pop() == 0) goto label328;
  UNK_0x9d24();
  
  label328:
  pp_KEYTIME 2@ pp_LKEYTIM 2!();
  TIME 2@ pp_KEYTIME 2!();
  
  goto label329;
  
  label325:
  Push(0); 
  label329:
  
}

// 0xa45d: db 0x4c 0x22 0x2e 0x0f 0xb8 0x3b 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x20 0x0f 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x2e 0x0f 0x90 0x16 0x4c 0x22 0x20 0x0f 0xb8 0x3b 0x17 0x5e 0x57 0x6d 0x90 0x16 'L".  ;  L".     L". .   L"   ; ^Wm  '
  
// ====================================================
// 0xa481: WORD 'NOF' codep=0x1d29 parp=0xa489
// ====================================================
// 0xa489: db 0x00 0x00 '  '
  
// ====================================================
// 0xa48b: WORD 'FKEY' codep=0x224c parp=0xa494
// ====================================================

void FKEY()
{
  CREATE ,();
  
  (;CODE)();
// inlined assembler code
// 0xa49a: call   1649
// 0xa49d: db 0x87 0xa4 0xae 0x0b 0xfa 0x15 0x0a 0x00 0x32 0x0e 0xa6 0x49 0x60 0x16 0x04 0x00 0x37 0x3a 0x90 0x16 0x4c 0x22 0xa6 0x49 0x90 0x16 '        2  I`   7:  L" I  '
  
// ====================================================
// 0xa4b7: WORD ''F1' codep=0xa49a parp=0xa4bf
// ====================================================
// 0xa4bf: db 0xb3 0xa4 '  '
  
// ====================================================
// 0xa4c1: WORD ''F2' codep=0xa49a parp=0xa4c9
// ====================================================
// 0xa4c9: db 0xc8 0xce '  '
  
// ====================================================
// 0xa4cb: WORD ''F3' codep=0xa49a parp=0xa4d3
// ====================================================
// 0xa4d3: db 0xae 0xd0 '  '
  
// ====================================================
// 0xa4d5: WORD ''F4' codep=0xa49a parp=0xa4dd
// ====================================================
// 0xa4dd: db 0xd7 0xd1 '  '
  
// ====================================================
// 0xa4df: WORD ''F5' codep=0xa49a parp=0xa4e7
// ====================================================
// 0xa4e7: db 0xb3 0xa4 '  '
  
// ====================================================
// 0xa4e9: WORD ''F6' codep=0xa49a parp=0xa4f1
// ====================================================
// 0xa4f1: db 0x84 0xbe '  '
  
// ====================================================
// 0xa4f3: WORD ''F7' codep=0xa49a parp=0xa4fb
// ====================================================
// 0xa4fb: db 0xb3 0xa4 '  '
  
// ====================================================
// 0xa4fd: WORD ''F8' codep=0xa49a parp=0xa505
// ====================================================
// 0xa505: db 0x54 0xc7 'T '
  
// ====================================================
// 0xa507: WORD ''F9' codep=0xa49a parp=0xa50f
// ====================================================

// ====================================================
// 0xa50e: WORD 'UNK_0xa510' codep=0x5aa4 parp=0xa510
// ====================================================

// ====================================================
// 0xa50f: WORD 'UNK_0xa511' codep=0xc85a parp=0xa511
// ====================================================

// ====================================================
// 0xa511: WORD ''F10' codep=0xa49a parp=0xa51a
// ====================================================
// 0xa51a: db 0x28 0xc7 0x4c 0x22 0x20 0x0f 0x2e 0x0f '( L"  . '
  
// ====================================================
// 0xa522: WORD 'UNK_0xa524' codep=0x5e17 parp=0xa524
// ====================================================
// 0xa524: db 0x57 0x6d 0x90 0x16 0x4c 0x22 0xb8 0x3b 0xb8 0x3b 0x90 0x16 0x4c 0x22 0xb8 0x3b 0x20 0x0f 0x90 0x16 0x4c 0x22 0xb8 0x3b 0x2e 0x0f 0x90 0x16 0x4c 0x22 0xa6 0x49 0x90 0x16 0x4c 0x22 0xa6 0x49 0x0b 0x5e 0x57 0x6d 0x90 0x16 'Wm  L" ; ;  L" ;    L" ;.   L" I  L" I ^Wm  '
  
// ====================================================
// 0xa550: WORD 'DOTRACE' codep=0x224c parp=0xa55c
// ====================================================

void DOTRACE()
{
  CTINIT();
  WUP();
  >BOTT();
  MAXSPAC();
  1.5@ @NEWSPA();
  D-();
  D.();
  CDEPTH .();
  DEPTH();
  .();
  UNK_0x9f5e();
  
}


// ====================================================
// 0xa578: WORD ''TRACE' codep=0x1d29 parp=0xa583
// ====================================================
// 0xa583: db 0xa8 0x49 0x4c 0x22 0x81 0xa5 0x37 0x3a 0x90 0x16 ' IL"  7:  '
  
// ====================================================
// 0xa58d: WORD '(XYSCAN' codep=0x4b3b parp=0xa599
// ====================================================
// 0xa599: db 0x1c 0x00 0x48 0xa5 0x47 0x01 0x5f 0xa4 0x48 0x01 0x67 0xa4 0x49 0x01 0x6f 0xa4 0x02 0x00 0x68 0x9f 0x4b 0x01 0x77 0xa4 0x4d 0x01 0x1e 0xa5 0x14 0x00 0x87 0xa5 0x4f 0x01 0x2a 0xa5 0x50 0x01 0x32 0xa5 0x51 0x01 0x3a 0xa5 0x00 0x00 0x42 0xa5 0x5c 0x00 0x5f 0xa4 0x7e 0x00 0x67 0xa4 0x7c 0x00 0x77 0xa4 0xf4 0x01 0x1e 0xa5 0x4f 0x01 0x2a 0xa5 0x60 0x00 0x32 0xa5 0x3b 0x01 0xbf 0xa4 0x3c 0x01 0xc9 0xa4 0x3d 0x01 0xd3 0xa4 0x3e 0x01 0xdd 0xa4 0x3f 0x01 0xe7 0xa4 0x40 0x01 0xf1 0xa4 0x41 0x01 0xfb 0xa4 0x42 0x01 0x05 0xa5 0x43 0x01 0x0f 0xa5 0x44 0x01 0x1a 0xa5 0x52 0x01 0xa8 0x49 '  H G _ H g I o   h K w M       O * P 2 Q :   B \ _ ~ g | w     O * ` 2 ;   <   =   >   ?   @   A   B   C   D   R  I'
  
// ====================================================
// 0xa60d: WORD 'XYSCAN' codep=0x224c parp=0xa618
// ====================================================

void XYSCAN()
{
  pp_FQUIT 099();
  pp_FTRIG 099();
  'KEY();
  (XYSCAN 
}


// ====================================================
// 0xa626: WORD '?TRIG' codep=0x224c parp=0xa630
// ====================================================

void ?TRIG()
{
  pp_FTRIG @ DUP 
  if (Pop() == 0) goto label330;
  pp_FTRIG 099();
  
  label330:
  
}


// ====================================================
// 0xa640: WORD '?QUIT' codep=0x224c parp=0xa64a
// ====================================================

void ?QUIT()
{
  pp_FQUIT @ DUP 
  if (Pop() == 0) goto label331;
  pp_FQUIT 099();
  
  label331:
  
}


// ====================================================
// 0xa65a: WORD 'Y/N' codep=0x224c parp=0xa662
// ====================================================

  label332:
  
void Y/N()
{
  XYSCAN();
  SWAP DROP ?DUP 
  if (Pop() == 0) goto label332;
  CLICK();
  0> 
}


// ====================================================
// 0xa674: WORD 'UNK_0xa676' codep=0x224c parp=0xa676
// ====================================================

void UNK_0xa676()
{
  Push(0x005d); pp_XBLT !();
  Push(0xfff5); pp_YBLT +!();
  
}

// 0xa688: db 0x4c 0x22 0x30 0x5e 0x37 0x3a 0x90 0x16 'L"0^7:  '
  
// ====================================================
// 0xa690: WORD '.ABTN' codep=0x224c parp=0xa69a
// ====================================================

void .ABTN()
{
  >R Push(0x003a); pp_FILE# !();
  pp_RECORD# !();
  Push(0x005d); Push(0x0077); I Push(0x000b); * - POS.();
  >2FONT();
  pp_YBLT @ Push(0x005d); OVER Push(cc_7); - Push(0x009c); BLACK POLY-WI();
  WHITE !COLOR();
  1BTN R> Push(0x000c); * + Push(0x000c); TYPE SET-CUR();
  
}


// ====================================================
// 0xa6ee: WORD 'UNK_0xa6f0' codep=0x224c parp=0xa6f0
// ====================================================

void UNK_0xa6f0()
{
  Push(0x003c); = pp_RECORD# @ Push(1); = AND 
  if (Pop() == 0) goto label333;
  PINK 
  goto label334;
  
  label333:
  WHITE 
  label334:
  !COLOR();
  
}


// ====================================================
// 0xa710: WORD '.BTN-TE' codep=0x224c parp=0xa71c
// ====================================================

void .BTN-TE()
{
  Push(0x003a); pp_FILE# !();
  DUP pp_RECORD# !();
  pp_BTN-REC !();
  BLACK UNK_0xa250();
  Push(0x005d); Push(0x0077); POS.();
  >2FONT();
  #BTN C@ Push(0x000c); * Push(0); 
  do // (DO)
  {
  I UNK_0xa6f0();
  1BTN I + Push(0x000c); TYPE UNK_0xa676();
  Push(0x000c); 
  } while(...); // (+LOOP) 0xffe8
  SET-CUR();
  
}


// ====================================================
// 0xa76a: WORD 'NEW-BUT' codep=0x224c parp=0xa776
// ====================================================

void NEW-BUT()
{
  Push(0x003a); pp_FILE# !();
  pp_BTN-REC @ pp_RECORD# !();
  pp_THIS-BU @ SWAP - DUP Push(0); #BTN C@ WITHIN();
  
  if (Pop() == 0) goto label335;
  BLUE OVER BLACK pp_THIS-BU @ .HIGHLI();
  .HIGHLI();
  pp_THIS-BU !();
  CLICK();
  
  goto label336;
  
  label335:
  DROP 
  label336:
  SET-CUR();
  
}


// ====================================================
// 0xa7ba: WORD 'CURSORS' codep=0x224c parp=0xa7c6
// ====================================================

void CURSORS()
{
  pp_CURSEG @ pp_BLTSEG !();
  Push(0); 
}


// ====================================================
// 0xa7d2: WORD 'BLD-CRS' codep=0x224c parp=0xa7de
// ====================================================

void BLD-CRS()
{
  @COLOR();
  >R pp_XORMODE ON();
  pp_CRSCOLO @ !COLOR();
  CURSORS();
  pp_ABLT !();
  1+ pp_OCRS @ Push(cc_4); * + >R I C@ pp_YBLT !();
  I 1+ C@ pp_XBLT !();
  I 2+ C@ pp_LBLT !();
  R> Push(cc_3); + C@ pp_WBLT !();
  BLT R> !COLOR();
  
}


// ====================================================
// 0xa830: WORD 'SET-CRS' codep=0x224c parp=0xa83c
// ====================================================

void SET-CRS()
{
  pp_NCRS @ OVER C@ 1+ Push(0); SWAP WITHIN();
  
  if (Pop() == 0) goto label337;
  pp_NCRS @ pp_OCRS @ = NOT 
  if (Pop() == 0) goto label338;
  DUP BLD-CRS();
  pp_NCRS @ pp_OCRS !();
  BLD-CRS();
  Push(1); 
  goto label340;
  
  label338:
  DROP Push(0); 
  label340:
  
  goto label339;
  
  label337:
  C@ pp_OCRS @ MIN();
  Push(0); MAX();
  DUP pp_OCRS !();
  pp_NCRS !();
  Push(0); 
  label339:
  
}


// ====================================================
// 0xa896: WORD '$!' codep=0x224c parp=0xa89d
// ====================================================

void $!()
{
  OVER C@ 1+ CMOVE();
  
}


// ====================================================
// 0xa8a7: WORD 'SUBROOT' codep=0x224c parp=0xa8b3
// ====================================================

void SUBROOT()
{
  CDEPTH pp_UNK_0x5e52 !();
  
}


// ====================================================
// 0xa8bb: WORD 'SRDEPTH' codep=0x224c parp=0xa8c7
// ====================================================

void SRDEPTH()
{
  CDEPTH pp_UNK_0x5e52 @ - 
}


// ====================================================
// 0xa8d1: WORD 'UNK_0xa8d3' codep=0x224c parp=0xa8d3
// ====================================================

  label343:
  
void UNK_0xa8d3()
{
  ?LAST();
  SRDEPTH();
  0> AND 
  if (Pop() == 0) goto label342;
  ICLOSE();
  
  goto label343;
  
  label342:
  
}


// ====================================================
// 0xa8e7: WORD 'NEXT-NO' codep=0x224c parp=0xa8f3
// ====================================================

void NEXT-NO()
{
  UNK_0x7512();
  OR 
  if (Pop() == 0) goto label341;
  IOPEN();
  
  goto label344;
  
  label341:
  UNK_0xa8d3();
  SRDEPTH();
  0> 
  if (Pop() == 0) goto label344;
  INEXT();
  
  label344:
  
}


// ====================================================
// 0xa90f: WORD 'INST-VA' codep=0x7420 parp=0xa91b
// ====================================================
// 0xa91b: db 0x00 0x11 0x02 '   '
  
// ====================================================
// 0xa91e: WORD 'INST-DA' codep=0x7420 parp=0xa92a
// ====================================================
// 0xa92a: db 0x00 0x13 0x02 '   '
  
// ====================================================
// 0xa92d: WORD '%NAME' codep=0x7420 parp=0xa937
// ====================================================
// 0xa937: db 0x14 0x34 0x0f ' 4 '
  
// ====================================================
// 0xa93a: WORD 'ORIG-NA' codep=0x7394 parp=0xa946
// ====================================================
// 0xa946: db 0x1b 0x00 0x10 0x00 0x00 0x00 '      '
  
// ====================================================
// 0xa94c: WORD 'ELEM-NA' codep=0x7394 parp=0xa958
// ====================================================
// 0xa958: db 0x1a 0x00 0x10 0x17 0xa9 0x6b '     k'
  
// ====================================================
// 0xa95e: WORD 'ELEM-VA' codep=0x7394 parp=0xa96a
// ====================================================
// 0xa96a: db 0x1a 0x10 0x02 0x17 0xa9 0x6b '     k'
  
// ====================================================
// 0xa970: WORD 'ART-NAM' codep=0x7394 parp=0xa97c
// ====================================================
// 0xa97c: db 0x1c 0x00 0x18 0x20 0xcd 0x6b '     k'
  
// ====================================================
// 0xa982: WORD 'ART-VAL' codep=0x7394 parp=0xa98e
// ====================================================
// 0xa98e: db 0x1c 0x1b 0x02 0x20 0xcd 0x6b '     k'
  
// ====================================================
// 0xa994: WORD 'ART-VOL' codep=0x7394 parp=0xa9a0
// ====================================================
// 0xa9a0: db 0x1c 0x19 0x02 0x20 0xcd 0x6b '     k'
  
// ====================================================
// 0xa9a6: WORD 'PHR-CNT' codep=0x7420 parp=0xa9b2
// ====================================================
// 0xa9b2: db 0x30 0x0b 0x01 '0  '
  
// ====================================================
// 0xa9b5: WORD 'PHRASE' codep=0x7420 parp=0xa9c0
// ====================================================
// 0xa9c0: db 0x30 0x0c 0xfe '0  '
  
// ====================================================
// 0xa9c3: WORD 'ASKING' codep=0x7420 parp=0xa9ce
// ====================================================
// 0xa9ce: db 0x00 0x13 0x02 '   '
  
// ====================================================
// 0xa9d1: WORD 'U>$' codep=0x224c parp=0xa9d9
// ====================================================

void U>$()
{
  Push(0); <#();
  #S();
  #>();
  
}


// ====================================================
// 0xa9e3: WORD 'UNK_0xa9e5' codep=0x224c parp=0xa9e5
// ====================================================

void UNK_0xa9e5()
{
  Push(0x000b); Push(0); 
  do // (DO)
  {
  I OVT @ 
  } while(...); // (LOOP) 0xfff8
  
}


// ====================================================
// 0xa9f9: WORD 'UNK_0xa9fb' codep=0x224c parp=0xa9fb
// ====================================================

void UNK_0xa9fb()
{
  Push(0); Push(0x000a); 
  do // (DO)
  {
  I OVT !();
  Push(cc_-1); 
  } while(...); // (+LOOP) 0xfff6
  
}


// ====================================================
// 0xaa11: WORD '<CTVERS' codep=0x224c parp=0xaa1d
// ====================================================

void <CTVERS()
{
  >R >R UNK_0xa9e5();
  R> R> CTINIT();
  UNK_0x7021();
  UNK_0xa9fb();
  
}


// ====================================================
// 0xaa2f: WORD '<CTASKM' codep=0x224c parp=0xaa3b
// ====================================================

void <CTASKM()
{
  UNK_0xa9e5();
  pp_FONT# @ 
  if (Pop() == 0) goto label345;
  CTINIT();
  
  label345:
  <ASKMOU();
  UNK_0xa9fb();
  
}


// ====================================================
// 0xaa4d: WORD 'TEXT-CO' codep=0x7420 parp=0xaa59
// ====================================================
// 0xaa59: db 0x38 0x0b 0x03 '8  '
  
// ====================================================
// 0xaa5c: WORD 'TEXT-IN' codep=0x7420 parp=0xaa68
// ====================================================
// 0xaa68: db 0x38 0x0e 0x03 '8  '
  
// ====================================================
// 0xaa6b: WORD 'TEXT-TE' codep=0x7420 parp=0xaa77
// ====================================================
// 0xaa77: db 0x38 0x11 0x26 '8 &'
  
// ====================================================
// 0xaa7a: WORD 'TEXT>PA' codep=0x224c parp=0xaa86
// ====================================================

void TEXT>PA()
{
  TEXT-TE PAD();
  1+ Push(0x0026); CMOVE();
  Push(0x0026); PAD();
  C!();
  
}


// ====================================================
// 0xaa9c: WORD 'CMESS' codep=0x224c parp=0xaaa6
// ====================================================

void CMESS()
{
  >R >R @CRS();
  R> R> CTINIT();
  2* Push(0x0050); SWAP - pp_XBLT !();
  Push(0x0017); SWAP Push(cc_6); * - pp_YBLT !();
  
}


// ====================================================
// 0xaad2: WORD 'X0MESS' codep=0x224c parp=0xaadd
// ====================================================

void X0MESS()
{
  Push(0x0017); ROT Push(cc_6); * - Push(0x0026); ROT ROT Push(2); pp_CONTEXT @ Push(cc_5); < 
  if (Pop() == 0) goto label346;
  Push(cc_4); MAX();
  
  label346:
  POS.PXT();
  
}


// ====================================================
// 0xab07: WORD '0MESS' codep=0x224c parp=0xab11
// ====================================================

void 0MESS()
{
  BLACK X0MESS();
  
}

// 0xab17: db 0x14 0x22 0x2e 0x00 ' ". '
  
// ====================================================
// 0xab1b: WORD '-XTRAIL' codep=0x224c parp=0xab27
// ====================================================

void -XTRAIL()
{
  Push(0xab19); !();
  Push(0xab19); CFA();
  Push(0x2790); Push(0x000e); + !();
  -TRAILING();
  Push(0x099a); CFA();
  Push(0x2790); Push(0x000e); + !();
  
}


// ====================================================
// 0xab55: WORD 'UNK_0xab57' codep=0x1d29 parp=0xab57
// ====================================================
// 0xab57: db 0x06 0x00 '  '
  
// ====================================================
// 0xab59: WORD 'SMART' codep=0x1d29 parp=0xab63
// ====================================================
// 0xab63: db 0x00 0x00 '  '
  
// ====================================================
// 0xab65: WORD 'UNK_0xab67' codep=0x2214 parp=0xab67
// ====================================================
// 0xab67: db 0xff 0x00 '  '
  
// ====================================================
// 0xab69: WORD 'UNK_0xab6b' codep=0x2214 parp=0xab6b
// ====================================================
// 0xab6b: db 0x67 0xec 'g '
  
// ====================================================
// 0xab6d: WORD 'UNK_0xab6f' codep=0x2214 parp=0xab6f
// ====================================================
// 0xab6f: db 0x68 0xec 'h '
  
// ====================================================
// 0xab71: WORD 'UNK_0xab73' codep=0x2214 parp=0xab73
// ====================================================
// 0xab73: db 0x69 0xec 'i '
  
// ====================================================
// 0xab75: WORD 'UNK_0xab77' codep=0x2214 parp=0xab77
// ====================================================
// 0xab77: db 0x6a 0xec 'j '
  
// ====================================================
// 0xab79: WORD 'UNK_0xab7b' codep=0x2214 parp=0xab7b
// ====================================================
// 0xab7b: db 0x78 0xec 'x '
  
// ====================================================
// 0xab7d: WORD 'UNK_0xab7f' codep=0x2214 parp=0xab7f
// ====================================================
// 0xab7f: db 0x84 0xec 0x4c 0x22 0x92 0x0c 0x5d 0x17 0x7f 0x00 0xf5 0x12 0x90 0x16 '  L"  ]      '
  
// ====================================================
// 0xab8d: WORD 'C+!' codep=0x224c parp=0xab95
// ====================================================

void C+!()
{
  DUP C@ ROT + SWAP C!();
  
}


// ====================================================
// 0xaba3: WORD 'UNK_0xaba5' codep=0x224c parp=0xaba5
// ====================================================

void UNK_0xaba5()
{
  >R I Push(0xab6b); !();
  I 1+ Push(0xab6f); !();
  I 2+ Push(0xab73); !();
  R> Push(cc_3); + Push(0xab77); !();
  Push(cc_UNK_0xab6b); C@ 2* Push(cc_UNK_0xab77); + Push(0xab7b); !();
  Push(cc_UNK_0xab6f); C@ 2* Push(cc_UNK_0xab7b); + Push(0xab7f); !();
  
}


// ====================================================
// 0xabf1: WORD 'DISTRAC' codep=0x224c parp=0xabfd
// ====================================================

void DISTRAC()
{
  UNK_0xaba5();
  Push(cc_UNK_0xab7f); Push(cc_UNK_0xab6f); C@ Push(cc_UNK_0xab67); FILL();
  
}

// 0xac0b: db 0x4c 0x22 0xb4 0x0d 0xc3 0x51 0x50 0x0e 0x7f 0x3b 0x72 0x0f 0x41 0x0e 0x50 0x0e 0x92 0x0c 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x7d 0xab 0x50 0x0e 0x81 0xab 0x72 0x0f 0x92 0x0c 0x41 0x0e 0x65 0xab 0x5f 0x12 0xfa 0x15 0x20 0x00 0x32 0x0e 0x79 0xab 0x50 0x0e 0x81 0xab 0x05 0x10 0x72 0x0f 0x37 0x3a 0x89 0x12 0x07 0x13 0x41 0x0e 0x7d 0xab 0x50 0x0e 0x81 0xab 0x72 0x0f 0x0a 0x6d 0x50 0x0e 0x92 0x0c 0x5d 0x17 0x80 0x00 0xf5 0x12 0x07 0x13 0x07 0x13 0x5f 0x12 0xf5 0x12 0x41 0x0e 0x89 0x12 0xfa 0x15 0x04 0x00 0x4a 0x17 0x2e 0x0f 0x91 0x15 0xae 0xff 0x41 0x0e 0xfa 0x15 0x0c 0x00 'L"   QP ;r A P   r     } P   r   A e _     2 y P     r 7:    A } P   r  mP   ]         _   A       J .     A     '
  // 0xac7d: mov    ah,0D
// 0xac7f: db     60
// 0xac80: push   cs
// 0xac81: out    0F,ax
// 0xac83: aaa    
// 0xac84: cmp    dl,[bx+si-6FF2]
// 0xac88: push   cs
// 0xac89: xor    cl,[1690]

// ====================================================
// 0xac8d: WORD 'EXPERT' codep=0x224c parp=0xac98
// ====================================================

void EXPERT()
{
  pp_UNK_0xab57 099();
  pp_TRACE @ 
  if (Pop() == 0) goto label347;
  >0FONT();
  
  label347:
  CREATE HERE();
  >R C,();
  C,();
  Push(0); C,();
  R> UNK_0xaba5();
  Push(cc_UNK_0xab6b); C@ 2* Push(cc_UNK_0xab6f); C@ Push(cc_3); * + ALLOT();
  
  (;CODE)();
// inlined assembler code
// 0xaccc: db 0xe8 0x7a 0x69 0x41 0x0e 0xa3 0xab 0x12 0x7b 0x75 0xab 0x41 0x0e 0x71 0xab 0x92 0x0c 0x05 0x10 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0xae 0x0b 0x0b 0xac 0xfa 0x15 0x38 0x00 0x29 0x7b 0x41 0x0e 0xa3 0xab 0x07 0x13 0x12 0x7b 0x4a 0x17 0x61 0xab 0xae 0x0b 0xfa 0x15 0x24 0x00 0x50 0x0e 0x75 0xab 0x92 0x0f 0x35 0x10 0x35 0x10 0x05 0x10 0x75 0xab 0x72 0x0f 0x41 0x0e 0xae 0x0b 0x50 0x0e 0xae 0x0b 0xf2 0x0e 0x50 0x0e 0x16 0x6d 0xf2 0x0e 0x16 0x6d 0x3d 0x0f 0x91 0x15 0xbc 0xff 0x29 0x7b 0x07 0x13 0x90 0x16 ' ziA    {u A q     r     P       8 ){A      {J a     $ P u   5 5   u r A   P     P  m   m=     ){    '
  
// ====================================================
// 0xad31: WORD '-->' codep=0x224c parp=0xad39
// ====================================================

void -->()
{
  '();
  
}


// ====================================================
// 0xad3d: WORD 'UNK_0xad3f' codep=0x224c parp=0xad3f
// ====================================================

void UNK_0xad3f()
{
  >R Push(cc_-1); pp_UNK_0xab57 @ 2* Push(0); 
  do // (DO)
  {
  Push(cc_UNK_0xab7b); I + @ J = 
  if (Pop() == 0) goto label349;
  DROP I 2/ LEAVE 
  label349:
  Push(2); 
  } while(...); // (/LOOP) 0xffe4
  R> DROP 
}


// ====================================================
// 0xad71: WORD 'UNK_0xad73' codep=0x224c parp=0xad73
// ====================================================

void UNK_0xad73()
{
  -->();
  >R I Push(0xad39); = NOT 
  if (Pop() == 0) goto label348;
  I UNK_0xad3f();
  DUP 0< 
  if (Pop() == 0) goto label350;
  DROP pp_UNK_0xab57 @ I OVER 2* Push(cc_UNK_0xab7b); + !();
  Push(cc_UNK_0xab6f); C@ pp_UNK_0xab57 @ > NOT 
  (ABORT") // string 18 "Condition overflow"
  Push(1); pp_UNK_0xab57 +!();
  
  label350:
  
  goto label351;
  
  label348:
  Push(cc_-1); 
  label351:
  R> DROP 
}


// ====================================================
// 0xadd6: WORD 'RULE:' codep=0x224c parp=0xade0
// ====================================================

void RULE:()
{
  Push(cc_UNK_0xab6b); C@ Push(cc_UNK_0xab73); C@ > NOT 
  (ABORT") // string 13 "Rule overflow"
  HERE();
  Push(0); C,();
  Push(0x3a48); ,();
  
  label353:
  UNK_0xad73();
  DUP 0< NOT 
  if (Pop() == 0) goto label352;
  '();
  DUP Push(0x51c5); = OVER Push(0x51d1); = OR NOT 
  (ABORT") // string 20 "TRUE or FALSE needed"
  
// ====================================================
// 0xae2b: WORD 'UNK_0xae2d' codep=0x141c parp=0xae2d
// ====================================================

// ====================================================
// 0xae39: WORD 'UNK_0xae3b' codep=0x2045 parp=0xae3b
// ====================================================

// ====================================================
// 0xae40: WORD 'UNK_0xae42' codep=0x8264 parp=0xae42
// ====================================================
EXECUTE Push(0x0080); * + C,();
  Push(1); OVER C+!();
  Push(0); 
  label352:
  
  if (Pop() == 0) goto label353;
  -->();
  OVER 1+ !();
  Push(cc_UNK_0xab73); C@ 2* Push(cc_UNK_0xab77); + !();
  Push(1); Push(cc_UNK_0xab73); C+!();
  
}


// ====================================================
// 0xae75: WORD 'CEX+WAX' codep=0x224c parp=0xae81
// ====================================================

void CEX+WAX()
{
  pp_'CEX+ @EXECUTE pp_'WAX @EXECUTE 
}


// ====================================================
// 0xae8b: WORD 'UNK_0xae8d' codep=0x224c parp=0xae8d
// ====================================================

void UNK_0xae8d()
{
  pp_'EXTERN @EXECUTE 
}


// ====================================================
// 0xae93: WORD 'UNK_0xae95' codep=0x224c parp=0xae95
// ====================================================

void UNK_0xae95()
{
  pp_'REPAIR @EXECUTE 
}


// ====================================================
// 0xae9b: WORD 'UNK_0xae9d' codep=0x224c parp=0xae9d
// ====================================================

void UNK_0xae9d()
{
  pp_'VEHICL @EXECUTE 
}


// ====================================================
// 0xaea3: WORD 'UNK_0xaea5' codep=0x224c parp=0xaea5
// ====================================================

void UNK_0xaea5()
{
  pp_'.VEHIC @EXECUTE 
}


// ====================================================
// 0xaeab: WORD 'UNK_0xaead' codep=0x224c parp=0xaead
// ====================================================

void UNK_0xaead()
{
  UNK_0xae9d();
  
  if (Pop() == 0) goto label360;
  UNK_0xae95();
  UNK_0xaea5();
  
  label360:
  
}


// ====================================================
// 0xaeb9: WORD 'UNK_0xaebb' codep=0x224c parp=0xaebb
// ====================================================

void UNK_0xaebb()
{
  pp_'TREATM @EXECUTE 
}


// ====================================================
// 0xaec1: WORD 'UNK_0xaec3' codep=0x224c parp=0xaec3
// ====================================================

void UNK_0xaec3()
{
  pp_'.VITAL @EXECUTE 
}


// ====================================================
// 0xaec9: WORD 'UNK_0xaecb' codep=0x224c parp=0xaecb
// ====================================================

void UNK_0xaecb()
{
  pp_'CREW-C @EXECUTE 
}


// ====================================================
// 0xaed1: WORD 'UNK_0xaed3' codep=0x224c parp=0xaed3
// ====================================================

void UNK_0xaed3()
{
  UNK_0xaecb();
  
  if (Pop() == 0) goto label359;
  UNK_0xaebb();
  UNK_0xaec3();
  
  label359:
  
}


// ====================================================
// 0xaedf: WORD '?NEW-HO' codep=0x224c parp=0xaeeb
// ====================================================

void ?NEW-HO()
{
  TIME 2@ pp_LAST-UP 2@ D-();
  DABS();
  pp_REAL-MS 2@ D>();
  
}


// ====================================================
// 0xaeff: WORD 'UNK_0xaf01' codep=0x224c parp=0xaf01
// ====================================================

void UNK_0xaf01()
{
  pp_'.DATE @EXECUTE 
}


// ====================================================
// 0xaf07: WORD 'UNK_0xaf09' codep=0x224c parp=0xaf09
// ====================================================

void UNK_0xaf09()
{
  ?NEW-HO();
  
  if (Pop() == 0) goto label355;
  TIME 2@ pp_LAST-UP D!();
  pp_?SECURE @ ?DUP 
  if (Pop() == 0) goto label356;
  pp_STARDAT @ < pp_CONTEXT @ Push(2); Push(cc_4); WITHIN();
  AND 
  if (Pop() == 0) goto label356;
  pp_'STP @ MODULE();
  
  label356:
  Push(cc_TRUE); 
  if (Pop() == 0) goto label357;
  pp_STAR-HR @ Push(0x0017); = 
  if (Pop() == 0) goto label358;
  Push(1); pp_STARDAT +!();
  pp_STAR-HR 099();
  
  goto label357;
  
  label358:
  Push(1); pp_STAR-HR +!();
  
  label357:
  UNK_0xaf01();
  pp_?SUP @ 
  if (Pop() == 0) goto label355;
  pp_'ENERGY @EXECUTE 
  label355:
  
}


// ====================================================
// 0xaf75: WORD 'PARALLE' codep=0x224c parp=0xaf81
// ====================================================

void PARALLE()
{
  pp_TIME-PA @ 
  if (Pop() == 0) goto label354;
  UNK_0xaf09();
  UNK_0xaed3();
  UNK_0xaead();
  UNK_0xae8d();
  
  label354:
  
}


// ====================================================
// 0xaf93: WORD 'UNK_0xaf95' codep=0x224c parp=0xaf95
// ====================================================

void UNK_0xaf95()
{
  pp_'CLEANU @ >V pp_'KEY-CA @ >V 
}


// ====================================================
// 0xafa3: WORD 'UNK_0xafa5' codep=0x224c parp=0xafa5
// ====================================================

void UNK_0xafa5()
{
  V> pp_'KEY-CA !();
  V> pp_'CLEANU !();
  
}


// ====================================================
// 0xafb3: WORD 'UNK_0xafb5' codep=0x224c parp=0xafb5
// ====================================================

void UNK_0xafb5()
{
  pp_'KEY-CA @EXECUTE 
}


// ====================================================
// 0xafbb: WORD 'DOTASKS' codep=0x224c parp=0xafc7
// ====================================================

void DOTASKS()
{
  UNK_0xaf95();
  EXECUTE pp_'KEY-CA !();
  pp_'CLEANU !();
  Push(1); 
  label363:
  ?TERMINAL pp_FORCEKE @ OR 
  if (Pop() == 0) goto label361;
  'KEY();
  UNK_0xafb5();
  TIME 2@ pp_KEYTIME D!();
  
  goto label364;
  
  label361:
  pp_SKEY 099();
  pp_LKEY 099();
  
  label364:
  TIME 2@ pp_KEYTIME 2@ D-();
  Push(0x01f4); Pust(0x0000); D>();
  pp_FORCEPT @ OR 
  if (Pop() == 0) goto label362;
  PARALLE();
  
  label362:
  ?DUP 0= 
  if (Pop() == 0) goto label363;
  pp_'CLEANU @EXECUTE UNK_0xafa5();
  
}


// ====================================================
// 0xb027: WORD '?VCYCLE' codep=0x224c parp=0xb033
// ====================================================

void ?VCYCLE()
{
  TIME 2@ pp_VSTIME 2@ D>();
  
}

// 0xb03f: db 0x41 0xb0 0x80 0xe4 0x80 0x80 0xfc 0x00 0x74 0x11 0x1e 0x55 0x1f 0x8b 0x44 0x04 0x1f 0x25 0x00 0x80 0x0b 0xc0 0x75 0x03 0xbf 0x0d 0x00 0x8b 0xc7 0x2e 0x88 0x06 0xa2 0x61 0xb0 0x03 0xcf 0x4c 0x22 0x5d 0x17 0x24 0x00 0x5e 0x01 0x6e 0x63 0x3f 0x6d 0xae 0x4a 0x5d 0x17 0x41 0xb0 0x5d 0x17 0x24 0x00 0x36 0x01 0x90 0x16 0x4c 0x22 0x6e 0x63 0x38 0x0c 0x5d 0x17 0x24 0x00 0x36 0x01 0x90 0x16 'A       t  U  D  %    u      .   a   L"] $ ^ nc?m J] A ] $ 6   L"nc8 ] $ 6   '
  
// ====================================================
// 0xb08c: WORD '>XOR' codep=0x224c parp=0xb095
// ====================================================

void >XOR()
{
  ROT >R OVER + SWAP 
  do // (DO)
  {
  J I LC@ Push(0x007f); XOR J I LC! Push(1); 
  } while(...); // (/LOOP) 0xffea
  R> DROP 
}


// ====================================================
// 0xb0bf: WORD 'UNK_0xb0c1' codep=0x224c parp=0xb0c1
// ====================================================

void UNK_0xb0c1()
{
  NEGATE pp_LFSEG @ + DUP pp_LFSEG !();
  
}


// ====================================================
// 0xb0d1: WORD 'UNK_0xb0d3' codep=0x224c parp=0xb0d3
// ====================================================

void UNK_0xb0d3()
{
  DUP pp_'ARRAY !();
  #BYTES();
  #ROWZ();
  2* + 16/ 1+ UNK_0xb0c1();
  OVER Push(cc_6); + !();
  !OFFSET 
}


// ====================================================
// 0xb0f3: WORD 'UNK_0xb0f5' codep=0x224c parp=0xb0f5
// ====================================================

void UNK_0xb0f5()
{
  UNK_0xb0c1();
  SWAP !();
  
}


// ====================================================
// 0xb0fd: WORD 'UNK_0xb0ff' codep=0x224c parp=0xb0ff
// ====================================================

void UNK_0xb0ff()
{
  Push(0x000f); Push(0); 
  do // (DO)
  {
  I IARRAYS UNK_0xb0d3();
  
  } while(...); // (LOOP) 0xfff8
  Push(0x6ade); Push(cc_6); + @ Push(0x52a2); !();
  
}


// ====================================================
// 0xb123: WORD 'UNK_0xb125' codep=0x224c parp=0xb125
// ====================================================

void UNK_0xb125()
{
  pp_ICON^ Push(0x00c9); pp_PAL^ Push(0x0028); pp_SIL^ Push(0x00ce); pp_PIC^ Push(cc_16K); 16/ 
}


// ====================================================
// 0xb13f: WORD 'UNK_0xb141' codep=0x224c parp=0xb141
// ====================================================

void UNK_0xb141()
{
  UNK_0xb125();
  pp_XBUF-SE DBUF-SI Push(0x0010); M/();
  SWAP DROP pp_FONTSEG Push(0x0591); Push(0x516c); Push(0x0032); pp_DICT Push(0x0b63); pp_SSYSEG Push(0x007a); pp_MSYSEG Push(0x007a); pp_LSYSEG Push(0x007a); pp_CURSEG Push(0x000d); pp_IHSEG Push(0x002d); pp_UNK_0x5b9e Push(0x005a); pp_UNK_0x5b9a Push(0x002d); pp_UNK_0x5b96 Push(0x002d); pp_UNK_0x5b92 Push(0x005a); pp_UNK_0x5b8e Push(0x005a); pp_UNK_0x566e Push(0x001f); pp_UNK_0x566a Push(0x003e); pp_UNK_0x5672 Push(0x003e); pp_UNK_0x5676 Push(0x0136); Push(0x0016); Push(0); 
  do // (DO)
  {
  UNK_0xb0f5();
  
  } while(...); // (LOOP) 0xfffc
  
}


// ====================================================
// 0xb1c9: WORD 'ICINIT' codep=0x224c parp=0xb1d4
// ====================================================

void ICINIT()
{
  Push(0x01f0); pp_UNK_0x56dc !();
  Push(0x1360); pp_UNK_0x56e4 !();
  pp_UNK_0x56e8 099();
  pp_UNK_0x56e0 099();
  NULL pp_UNK_0x639c 2!();
  pp_UNK_0x55ff 099();
  pp_IBFR 2+ 099();
  
}


// ====================================================
// 0xb1fe: WORD 'UNK_0xb200' codep=0x224c parp=0xb200
// ====================================================

void UNK_0xb200()
{
  PAD();
  Push(0x00c8); Push(0x00ff); FILL();
  @DS PAD();
  pp_CURSEG @ Push(0); Push(0x00c8); LCMOVE 
}


// ====================================================
// 0xb21e: WORD 'XKEYINT' codep=0xb22a parp=0xb22a
// ====================================================
// 0xb22a: push   ax
// 0xb22b: push   ds
// 0xb22c: mov    ax,0040
// 0xb22f: mov    ds,ax
// 0xb231: xor    ax,ax
// 0xb233: in     al,60
// 0xb235: and    ax,0080
// 0xb238: jnz    B242
// 0xb23a: mov    ax,[001C]
// 0xb23e: mov    [001A],ax
// 0xb242: pop    ds
// 0xb243: pop    ax
// 0xb244: jmp    28D0:02BE

// ====================================================
// 0xb249: WORD 'INSTALL' codep=0x224c parp=0xb255
// ====================================================

void INSTALL()
{
  pp_[KEYINT @ 0= 
  if (Pop() == 0) goto label365;
  Push(cc_9); (!OLD) pp_UNK_0x6517 @ 2!();
  pp_[KEYINT ON();
  @DS Push(0xb22a); Push(cc_9); (!SET) 
  label365:
  
}

// 0xb279: db 0x4c 0x22 0x5d 0x17 0xb8 0x01 0x38 0x0c 0x5d 0x17 0x1b 0x00 0x36 0x01 0x90 0x16 0x4c 0x22 0x02 0x48 0x53 0xb2 0x64 0xb0 0x79 0xb2 0x90 0x16 'L"]   8 ]   6   L" HS d y   '
  
// ====================================================
// 0xb295: WORD 'RESTORE' codep=0x224c parp=0xb2a1
// ====================================================

void RESTORE()
{
  pp_[KEYINT @ 
  if (Pop() == 0) goto label366;
  pp_UNK_0x6517 @ 2@ Push(cc_9); (!SET) pp_[KEYINT 099();
  
  label366:
  
}

// 0xb2b9: db 0x4c 0x22 0x9f 0xb2 0x7e 0xb0 0x90 0x16 'L"  ~   '
  
// ====================================================
// 0xb2c1: WORD 'UNK_0xb2c3' codep=0x224c parp=0xb2c3
// ====================================================

void UNK_0xb2c3()
{
  SETSYSK();
  pp_SYSK @ Push(0x0040); * 1- pp_LFSEG !();
  UNK_0xb0ff();
  pp_REMSEG Push(0x0600); UNK_0xb0f5();
  UNK_0x8da5();
  UNK_0x8597();
  
}


// ====================================================
// 0xb2e5: WORD 'UNK_0xb2e7' codep=0x224c parp=0xb2e7
// ====================================================

void UNK_0xb2e7()
{
  @MODE();
  SETDBUF();
  UNK_0xb141();
  SETDBUF();
  
}


// ====================================================
// 0xb2f1: WORD 'LOAD-DI' codep=0x224c parp=0xb2fd
// ====================================================

void LOAD-DI()
{
  NOP();
  pp_DICT @ Push(0x0006); 2DUP FILE<();
  FILE-#R @ Push(0x0010); * Push(0); SWAP >XOR();
  
}


// ====================================================
// 0xb31d: WORD 'LDSILS' codep=0x224c parp=0xb328
// ====================================================

// ====================================================
// 0xb322: WORD 'UNK_0xb324' codep=0x4953 parp=0xb324
// ====================================================

void LDSILS()
{
  pp_SIL^ @ Push(0x007d); FILE<();
  
}


// ====================================================
// 0xb334: WORD '!PAL' codep=0x224c parp=0xb33d
// ====================================================

void !PAL()
{
  ?VGA();
  
  if (Pop() == 0) goto label367;
  pp_PAL^ @ Push(0x0036); FILE<();
  
  label367:
  
}


// ====================================================
// 0xb34f: WORD 'CONFIGU' codep=0x224c parp=0xb35b
// ====================================================

void CONFIGU()
{
  SETMAXD();
  UNK_0xb2e7();
  pp_LFSEG @ @DS Push(0x1000); + - DUP 0< 
  if (Pop() == 0) goto label368;
  DROP Push(0); 
  goto label369;
  
  label368:
  Push(0); Push(0x0042); U/MOD SWAP DROP 
  label369:
  DUP pp_[#CACHE !();
  pp_#CACHE !();
  AUTO-CACHE();
  pp_BUFFER-BEGIN @ SEG>ADDR DUP pp_UNK_0x5625 !();
  Push(0x0410); + pp_UNK_0x5629 !();
  MOUNTA();
  LOAD-DI();
  LDSILS();
  !PAL();
  UNK_0x8d05();
  Push(0); LDPAL();
  pp_'SETUP+ @EXECUTE NODRIVES();
  ICINIT();
  UNK_0xb200();
  SETDBUF();
  
}


// ====================================================
// 0xb3c7: WORD 'STARTER' codep=0x224c parp=0xb3d3
// ====================================================

void STARTER()
{
  UNK_0xb2c3();
  DOSPARM();
  CONFIGU();
  NOP();
  
}


// ====================================================
// 0xb3dd: WORD 'DOS' codep=0x224c parp=0xb3e5
// ====================================================

void DOS()
{
  
}


// ====================================================
// 0xb3e7: WORD '+EDIT' codep=0x1ab5 parp=0xb3f1
// ====================================================
// 0xb3f1: db 0xff 0xb3 0x1c 0x08 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '               '
  
// ====================================================
// 0xb400: WORD 'UNK_0xb402' codep=0xff00 parp=0xb402
// ====================================================
// 0xb402: db 0xff 0x1a 0x08 '   '
  
// ====================================================
// 0xb405: WORD 'EDIT-OV' codep=0x83dd parp=0xb411
// ====================================================

// ====================================================
// 0xb40b: WORD 'UNK_0xb40d' codep=0x2d54 parp=0xb40d
// ====================================================

// ====================================================
// 0xb40e: WORD 'UNK_0xb410' codep=0xddd6 parp=0xb410
// ====================================================
// 0xb411: db 0xb5 0x0d '  '
  
// ====================================================
// 0xb413: WORD 'EDIT' codep=0x224c parp=0xb41c
// ====================================================

void EDIT()
{
  EDIT-OV DR1();
  UNK_0xf4f4 
}


// ====================================================
// 0xb424: WORD 'USE"' codep=0x224c parp=0xb42d
// ====================================================

void USE"()
{
  USING();
  DR1();
  
}


// ====================================================
// 0xb433: WORD 'SB' codep=0x2214 parp=0xb43a
// ====================================================
// 0xb43a: db 0x68 0x01 'h '
  
// ====================================================
// 0xb43c: WORD 'UNK_0xb43e' codep=0xb43e parp=0xb43e
// ====================================================
// 0xb43e: mov    ax,ds
// 0xb440: mov    es,ax
// 0xb442: lodsw
// 0xb443: mov    bx,ax
// 0xb445: jmp    word ptr [bx]

// ====================================================
// 0xb447: WORD 'UNK_0xb449' codep=0x224c parp=0xb449
// ====================================================

void UNK_0xb449()
{
  BLOCK();
  SWAP Push(0x0040); * + 
}


// ====================================================
// 0xb457: WORD 'UNK_0xb459' codep=0x224c parp=0xb459
// ====================================================

void UNK_0xb459()
{
  PAD();
  Push(0x0041); Push(cc_BL); FILL();
  WORD PAD();
  OVER C@ 1+ CMOVE();
  
}


// ====================================================
// 0xb471: WORD 'UNK_0xb473' codep=0x224c parp=0xb473
// ====================================================

void UNK_0xb473()
{
  tt_SCR @ UNK_0xb449();
  
}


// ====================================================
// 0xb47b: WORD 'UNK_0xb47d' codep=0x224c parp=0xb47d
// ====================================================

void UNK_0xb47d()
{
  tt_R# @ Push(0x0040); /MOD 
}


// ====================================================
// 0xb489: WORD 'UNK_0xb48b' codep=0x224c parp=0xb48b
// ====================================================

void UNK_0xb48b()
{
  UNK_0xb47d();
  UNK_0xb473();
  SWAP 
}


// ====================================================
// 0xb493: WORD 'UNK_0xb495' codep=0x224c parp=0xb495
// ====================================================

void UNK_0xb495()
{
  UNK_0xb48b();
  DUP >R + Push(0x0040); R> - 
}


// ====================================================
// 0xb4a7: WORD 'UNK_0xb4a9' codep=0x224c parp=0xb4a9
// ====================================================

void UNK_0xb4a9()
{
  tt_R# +!();
  CR SPACE();
  UNK_0xb48b();
  TYPE Push(0x005f); EMIT UNK_0xb495();
  TYPE 
}


// ====================================================
// 0xb4c1: WORD 'UNK_0xb4c3' codep=0x224c parp=0xb4c3
// ====================================================

void UNK_0xb4c3()
{
  UNK_0xb495();
  PAD();
  COUNT();
  Push(1); MAX();
  UNK_0xb43e MATCH tt_R# +!();
  
}


// ====================================================
// 0xb4d7: WORD 'UNK_0xb4d9' codep=0x224c parp=0xb4d9
// ====================================================

void UNK_0xb4d9()
{
  Push(0x007c); UNK_0xb459();
  1+ SWAP 
  do // (DO)
  {
  I tt_SCR !();
  
  (.") string 1 "."
  Push(0); tt_R# !();
  
  label371:
  UNK_0xb4c3();
  
  if (Pop() == 0) goto label370;
  CR CR tt_SCR @ Push(cc_3); .R();
  SPACE();
  UNK_0xb47d();
  Push(2); .R();
  DROP Push(1); UNK_0xb4a9();
  
  label370:
  Push(0x03ff); tt_R# @ < 
  if (Pop() == 0) goto label371;
  ?TERMINAL 
  if (Pop() == 0) goto label372;
  LEAVE 
  label372:
  
  } while(...); // (LOOP) 0xffb8
  
}


// ====================================================
// 0xb531: WORD 'UNK_0xb533' codep=0x224c parp=0xb533
// ====================================================

void UNK_0xb533()
{
  Push(0); Push(cc_SB); + FILESIZ();
  2@ SWAP Push(0x0400); M/();
  SWAP DROP 1- Push(cc_SB); + 
}


// ====================================================
// 0xb551: WORD 'WS' codep=0x224c parp=0xb558
// ====================================================

void WS()
{
  UNK_0xb533();
  UNK_0xb4d9();
  
}


// ====================================================
// 0xb55e: WORD 'WL' codep=0x224c parp=0xb565
// ====================================================

void WL()
{
  UNK_0xb533();
  THRU();
  
}


// ====================================================
// 0xb56b: WORD 'UNK_0xb56d' codep=0x224c parp=0xb56d
// ====================================================

void UNK_0xb56d()
{
  2- 
  do // (DO)
  {
  I @ Push(0); D.();
  Push(cc_-2); 
  } while(...); // (+LOOP) 0xfff4
  
}


// ====================================================
// 0xb581: WORD '.S' codep=0x224c parp=0xb588
// ====================================================

void .S()
{
  CR DEPTH();
  
  if (Pop() == 0) goto label373;
  SP@ S0();
  UNK_0xb56d();
  
  label373:
  
}


// ====================================================
// 0xb598: WORD 'MUSIC' codep=0x1ab5 parp=0xb5a2
// ====================================================
// 0xb5a2: db 0xb0 0xb5 0xf3 0xb3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xb5b6: WORD 'MUSIC-OV' codep=0x83dd parp=0xb5c3
// ====================================================
// 0xb5c3: db 0xc4 0x3b ' ;'
  
// ====================================================
// 0xb5c5: WORD 'INTROS' codep=0x224c parp=0xb5d0
// ====================================================

void INTROS()
{
  MUSIC-OV UNK_0xf4db 
}


// ====================================================
// 0xb5d6: WORD 'HIMUS' codep=0x224c parp=0xb5e0
// ====================================================

void HIMUS()
{
  MUSIC-OV UNK_0xefb3 
}


// ====================================================
// 0xb5e6: WORD 'TALLOC' codep=0x224c parp=0xb5f1
// ====================================================

void TALLOC()
{
  MUSIC-OV UNK_0xf3b4 
}


// ====================================================
// 0xb5f7: WORD 'SETABLT' codep=0x224c parp=0xb603
// ====================================================

void SETABLT()
{
  MUSIC-OV UNK_0xf191 
}


// ====================================================
// 0xb609: WORD '*OP' codep=0x3b74 parp=0xb611
// ====================================================
// 0xb611: db 0x02 0x00 0x71 0x2b '  q+'
  
// ====================================================
// 0xb615: WORD '*COMM' codep=0x3b74 parp=0xb61f
// ====================================================
// 0xb61f: db 0x01 0x00 0xba 0xac '    '
  
// ====================================================
// 0xb623: WORD '*EOL' codep=0x3b74 parp=0xb62c
// ====================================================
// 0xb62c: db 0x02 0x00 0x2f 0x52 '  /R'
  
// ====================================================
// 0xb630: WORD 'OTABL' codep=0x1d29 parp=0xb63a
// ====================================================
// 0xb63a: db 0x1c 0x71 0x01 0xa7 0x48 0x01 0x75 0xd2 0x00 0x93 0xd2 0x00 0xfd 0xda 0x00 0x96 0x2e 0x01 0x3a 0x71 0x01 0x84 0xfa 0x00 0xc7 0xae 0x00 0x03 0xaf 0x00 0x29 0x20 0x01 0x20 0x20 0x20 0xce 0x9c 0x00 0x73 0x97 0x00 0xa8 0xab 0x01 0x6e 0xae 0x00 0xe5 0xae 0x00 0x8a 0xab 0x01 ' q  H u         . :q          )        s     n        '
  
// ====================================================
// 0xb670: WORD '+ORG' codep=0x4b3b parp=0xb679
// ====================================================
// 0xb679: db 0x06 0x00 0xba 0x3b 0x12 0x00 0x22 0x0f 0x13 0x00 0x30 0x0f 0x15 0x00 0x3f 0x0f 0x16 0x00 0x81 0x3b 0x17 0x00 0x89 0x3b 0x18 0x00 0x91 0x3b '   ;  "   0   ?    ;   ;   ;'
  
// ====================================================
// 0xb695: WORD 'ORGIA' codep=0x224c parp=0xb69f
// ====================================================

void ORGIA()
{
  DUP Push(0x000c); MIN();
  SWAP +ORG + Push(cc_3); * pp_OTABL + 
}


// ====================================================
// 0xb6b7: WORD 'MISC-' codep=0x1ab5 parp=0xb6c1
// ====================================================
// 0xb6c1: db 0xcf 0xb6 0xa4 0xb5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xb6d5: WORD 'MISC-' codep=0x83dd parp=0xb6df
// ====================================================
// 0xb6df: db 0x9c 0x72 ' r'
  
// ====================================================
// 0xb6e1: WORD '=CARGO' codep=0x224c parp=0xb6ec
// ====================================================

void =CARGO()
{
  MISC- UNK_0xf446 
}


// ====================================================
// 0xb6f2: WORD 'OV#IN$' codep=0x224c parp=0xb6fd
// ====================================================

void OV#IN$()
{
  MISC- UNK_0xf0f0 
}


// ====================================================
// 0xb703: WORD 'OVQUIT' codep=0x224c parp=0xb70e
// ====================================================

void OVQUIT()
{
  MISC- UNK_0xf26b 
}


// ====================================================
// 0xb714: WORD 'OV.0$$' codep=0x224c parp=0xb71f
// ====================================================

void OV.0$$()
{
  MISC- UNK_0xf296 
}


// ====================================================
// 0xb725: WORD 'OV0$$$' codep=0x224c parp=0xb730
// ====================================================

void OV0$$$()
{
  MISC- UNK_0xf2b9 
}


// ====================================================
// 0xb736: WORD 'OVTRIM' codep=0x224c parp=0xb741
// ====================================================

void OVTRIM()
{
  MISC- UNK_0xf010 
}


// ====================================================
// 0xb747: WORD 'OVTRIM' codep=0x224c parp=0xb752
// ====================================================

void OVTRIM()
{
  MISC- Push(0); 
  do // (DO)
  {
  UNK_0xf010 
  } while(...); // (LOOP) 0xfffc
  
}


// ====================================================
// 0xb760: WORD 'OV?ART' codep=0x224c parp=0xb76b
// ====================================================

void OV?ART()
{
  MISC- UNK_0xf1b4 
}


// ====================================================
// 0xb771: WORD 'OV?.EQ' codep=0x224c parp=0xb77c
// ====================================================

void OV?.EQ()
{
  MISC- UNK_0xf39f 
}


// ====================================================
// 0xb782: WORD 'TV?ART' codep=0x224c parp=0xb78d
// ====================================================

void TV?ART()
{
  MISC- UNK_0xf4fc 
}


// ====================================================
// 0xb793: WORD 'RSTE' codep=0x224c parp=0xb79c
// ====================================================

void RSTE()
{
  MISC- UNK_0xf247 
}


// ====================================================
// 0xb7a2: WORD 'SCON-V' codep=0x1ab5 parp=0xb7ad
// ====================================================
// 0xb7ad: db 0xbb 0xb7 0xc3 0xb6 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xb7c1: WORD 'SCON-O' codep=0x83dd parp=0xb7cc
// ====================================================
// 0xb7cc: db 0xb0 0x95 '  '
  
// ====================================================
// 0xb7ce: WORD 'TOW' codep=0x224c parp=0xb7d6
// ====================================================

void TOW()
{
  SCON-O UNK_0xf4d7 
}


// ====================================================
// 0xb7dc: WORD '.NOFUN' codep=0x224c parp=0xb7e7
// ====================================================

void .NOFUN()
{
  SCON-O UNK_0xf396 
}


// ====================================================
// 0xb7ed: WORD 'FX-VOC' codep=0x1ab5 parp=0xb7f8
// ====================================================
// 0xb7f8: db 0x06 0xb8 0xaf 0xb7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xb80c: WORD 'FX-OV' codep=0x83dd parp=0xb816
// ====================================================

// ====================================================
// 0xb80f: WORD 'UNK_0xb811' codep=0x5846 parp=0xb811
// ====================================================
// 0xb816: db 0x04 0x6d ' m'
  
// ====================================================
// 0xb818: WORD 'PSYCH' codep=0x224c parp=0xb822
// ====================================================

void PSYCH()
{
  FX-OV UNK_0xf23a SAVE-OV();
  
}


// ====================================================
// 0xb82a: WORD '.TMAP' codep=0x224c parp=0xb834
// ====================================================

void .TMAP()
{
  FX-OV UNK_0xf544 
}


// ====================================================
// 0xb83a: WORD 'IT-VOC' codep=0x1ab5 parp=0xb845
// ====================================================
// 0xb845: db 0x53 0xb8 0xfa 0xb7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'S                   '
  
// ====================================================
// 0xb859: WORD 'IT-OV' codep=0x83dd parp=0xb863
// ====================================================
// 0xb863: db 0x55 0x91 0x4c 0x22 0x61 0xb8 0x29 0xf1 0x90 0x16 0x4c 0x22 0x61 0xb8 0xf3 0xf2 0x90 0x16 0x4c 0x22 0x61 0xb8 0x3c 0xf3 0x90 0x16 0x4c 0x22 0x61 0xb8 0x5f 0xf3 0x90 0x16 0x4c 0x22 0x61 0xb8 0x98 0xf3 0x90 0x16 0x4c 0x22 0x61 0xb8 0xf4 0xf3 0x90 0x16 0x4c 0x22 0x61 0xb8 0x44 0xf4 0x90 0x16 0x4c 0x22 0x61 0xb8 0x10 0xf5 0x90 0x16 0x4c 0x22 0x61 0xb8 0xd1 0xf4 0x90 0x16 0x4c 0x22 0x61 0xb8 0xbb 0xf3 0x90 0x16 0x4c 0x22 0x61 0xb8 0x1e 0xf2 0x90 0x16 'U L"a )   L"a     L"a <   L"a _   L"a     L"a     L"a D   L"a     L"a     L"a     L"a     '
  
// ====================================================
// 0xb8bd: WORD 'DATE$>A' codep=0x224c parp=0xb8c9
// ====================================================

void DATE$>A()
{
  Push(0xb867); MODULE();
  
}


// ====================================================
// 0xb8d1: WORD 'BOX>LIS' codep=0x224c parp=0xb8dd
// ====================================================

void BOX>LIS()
{
  Push(0xb86f); MODULE();
  
}


// ====================================================
// 0xb8e5: WORD 'GET-BOX' codep=0x224c parp=0xb8f1
// ====================================================

void GET-BOX()
{
  Push(0xb877); MODULE();
  
}


// ====================================================
// 0xb8f9: WORD 'MAKE-SC' codep=0x224c parp=0xb905
// ====================================================

void MAKE-SC()
{
  Push(0xb87f); MODULE();
  
}


// ====================================================
// 0xb90d: WORD 'DELETE-' codep=0x224c parp=0xb919
// ====================================================

void DELETE-()
{
  Push(0xb887); MODULE();
  
}


// ====================================================
// 0xb921: WORD 'BOX>TOC' codep=0x224c parp=0xb92d
// ====================================================

void BOX>TOC()
{
  Push(0xb88f); MODULE();
  
}


// ====================================================
// 0xb935: WORD '>BOX' codep=0x224c parp=0xb93e
// ====================================================

void >BOX()
{
  Push(0xb897); MODULE();
  
}


// ====================================================
// 0xb946: WORD 'BOX>' codep=0x224c parp=0xb94f
// ====================================================

void BOX>()
{
  Push(0xb89f); MODULE();
  
}


// ====================================================
// 0xb957: WORD '(BOX>)' codep=0x224c parp=0xb962
// ====================================================

void (BOX>)()
{
  Push(0xb8a7); MODULE();
  
}


// ====================================================
// 0xb96a: WORD 'CLASS>B' codep=0x224c parp=0xb976
// ====================================================

void CLASS>B()
{
  Push(0xb8af); MODULE();
  
}


// ====================================================
// 0xb97e: WORD 'ITEM>PA' codep=0x224c parp=0xb98a
// ====================================================

void ITEM>PA()
{
  Push(0xb8b7); MODULE();
  
}


// ====================================================
// 0xb992: WORD 'BLT-VOC' codep=0x1ab5 parp=0xb99e
// ====================================================
// 0xb99e: db 0xac 0xb9 0x47 0xb8 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  G                 '
  
// ====================================================
// 0xb9b2: WORD 'BLT-' codep=0x83dd parp=0xb9bb
// ====================================================
// 0xb9bb: db 0x44 0x72 'Dr'
  
// ====================================================
// 0xb9bd: WORD '@.HYBR' codep=0x224c parp=0xb9c8
// ====================================================

void @.HYBR()
{
  BLT- UNK_0xf465 
}


// ====================================================
// 0xb9ce: WORD '.TPIC' codep=0x224c parp=0xb9d8
// ====================================================

void .TPIC()
{
  BLT- UNK_0xf4ca 
}


// ====================================================
// 0xb9de: WORD '.APIC' codep=0x224c parp=0xb9e8
// ====================================================

void .APIC()
{
  BLT- UNK_0xf509 
}


// ====================================================
// 0xb9ee: WORD 'SETBLT' codep=0x224c parp=0xb9f9
// ====================================================

void SETBLT()
{
  BLT- UNK_0xf357 
}


// ====================================================
// 0xb9ff: WORD 'LDAPIC' codep=0x224c parp=0xba0a
// ====================================================

void LDAPIC()
{
  BLT- UNK_0xf192 
}


// ====================================================
// 0xba10: WORD 'LDSYS' codep=0x224c parp=0xba1a
// ====================================================

void LDSYS()
{
  BLT- UNK_0xf41e 
}


// ====================================================
// 0xba20: WORD 'VICONP' codep=0x1ab5 parp=0xba2b
// ====================================================
// 0xba2b: db 0x39 0xba 0xa0 0xb9 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '9                   '
  
// ====================================================
// 0xba3f: WORD 'ICONP' codep=0x83dd parp=0xba49
// ====================================================
// 0xba49: db 0xc6 0x70 ' p'
  
// ====================================================
// 0xba4b: WORD 'ICON-' codep=0x224c parp=0xba55
// ====================================================

void ICON-()
{
  ICONP UNK_0xf508 
}


// ====================================================
// 0xba5b: WORD '+ICON' codep=0x224c parp=0xba65
// ====================================================

void +ICON()
{
  ICONP UNK_0xf533 
}


// ====================================================
// 0xba6b: WORD 'FRACT' codep=0x1ab5 parp=0xba75
// ====================================================
// 0xba75: db 0x83 0xba 0x2d 0xba 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  -                 '
  
// ====================================================
// 0xba89: WORD 'FRACT-OV' codep=0x83dd parp=0xba96
// ====================================================
// 0xba96: db 0xa4 0x6f ' o'
  
// ====================================================
// 0xba98: WORD 'MERCA' codep=0x224c parp=0xbaa2
// ====================================================

void MERCA()
{
  FRACT-OV UNK_0xe7b9 
}


// ====================================================
// 0xbaa8: WORD 'NEWCO' codep=0x224c parp=0xbab2
// ====================================================

void NEWCO()
{
  FRACT-OV UNK_0xf108 
}


// ====================================================
// 0xbab8: WORD 'MAKE-' codep=0x224c parp=0xbac2
// ====================================================

void MAKE-()
{
  FRACT-OV UNK_0xefad 
}


// ====================================================
// 0xbac8: WORD 'SCRLC' codep=0x224c parp=0xbad2
// ====================================================

void SCRLC()
{
  FRACT-OV UNK_0xf0d7 
}


// ====================================================
// 0xbad8: WORD 'BTADDR' codep=0x1d29 parp=0xbae3
// ====================================================
// 0xbae3: db 0xfc 0xbb '  '
  
// ====================================================
// 0xbae5: WORD 'UNK_0xbae7' codep=0x1d29 parp=0xbae7
// ====================================================
// 0xbae7: db 0x3a 0x20 ': '
  
// ====================================================
// 0xbae9: WORD 'UNK_0xbaeb' codep=0x1d29 parp=0xbaeb
// ====================================================
// 0xbaeb: db 0x3a 0x20 ': '
  
// ====================================================
// 0xbaed: WORD 'UNK_0xbaef' codep=0x1d29 parp=0xbaef
// ====================================================
// 0xbaef: db 0x3a 0x20 ': '
  
// ====================================================
// 0xbaf1: WORD 'UNK_0xbaf3' codep=0x1d29 parp=0xbaf3
// ====================================================
// 0xbaf3: db 0x3a 0x20 ': '
  
// ====================================================
// 0xbaf5: WORD 'UNK_0xbaf7' codep=0x2214 parp=0xbaf7
// ====================================================
// 0xbaf7: db 0xda 0xbb '  '
  
// ====================================================
// 0xbaf9: WORD 'UNK_0xbafb' codep=0x2214 parp=0xbafb
// ====================================================
// 0xbafb: db 0xd2 0xbb '  '
  
// ====================================================
// 0xbafd: WORD 'UNK_0xbaff' codep=0x2214 parp=0xbaff
// ====================================================
// 0xbaff: db 0xf0 0xbb '  '
  
// ====================================================
// 0xbb01: WORD 'UNK_0xbb03' codep=0x224c parp=0xbb03
// ====================================================

void UNK_0xbb03()
{
  pp_UNK_0xbaf3 @ DUP Push(0x0080); = pp_UNK_0xbaeb +!();
  2/ DUP 0= Push(0x0080); * + pp_UNK_0xbaf3 !();
  
}


// ====================================================
// 0xbb27: WORD 'UNK_0xbb29' codep=0x224c parp=0xbb29
// ====================================================

void UNK_0xbb29()
{
  pp_UNK_0xbaf3 C@ AND 0> pp_BTADDR @ + pp_UNK_0xbae7 @ + C@ DUP Push(0x0080); AND 
  if (Pop() == 0) goto label375;
  Push(0x007f); AND 2* pp_UNK_0xbae7 +!();
  
  goto label376;
  
  label375:
  Push(1); pp_UNK_0xbaef +!();
  Push(cc_UNK_0xbaf7); EXECUTE pp_UNK_0xbae7 099();
  
  label376:
  UNK_0xbb03();
  pp_UNK_0xbaf3 @ Push(0x0080); = 
}


// ====================================================
// 0xbb77: WORD 'HUFF>' codep=0x224c parp=0xbb81
// ====================================================

void HUFF>()
{
  pp_UNK_0xbae7 099();
  pp_UNK_0xbaef 099();
  pp_UNK_0xbaeb 099();
  Push(0x0080); pp_UNK_0xbaf3 !();
  Push(cc_UNK_0xbafb); EXECUTE 
  label378:
  DUP pp_UNK_0xbaef @ > 
  if (Pop() == 0) goto label374;
  
  label377:
  OVER pp_UNK_0xbaeb @ + C@ UNK_0xbb29();
  
  if (Pop() == 0) goto label377;
  
  goto label378;
  
  label374:
  2DROP Push(cc_UNK_0xbaff); EXECUTE 
}


// ====================================================
// 0xbbc1: WORD 'PHRASE$' codep=0x7420 parp=0xbbcd
// ====================================================
// 0xbbcd: db 0x30 0x0b 0x00 0x4c 0x22 0xf7 0x66 0x65 0x6d 0x90 0x16 0x4c 0x22 0xf7 0x66 0x41 0x0e 0x92 0x0c 0x72 0x0f 0xe7 0x0f 0x0a 0x6d 0x2e 0x0f 0xf7 0x66 0x23 0x6d 0x90 0x16 0x4c 0x22 0xcb 0xbb 0xe7 0x0f 0x92 0x0c 0xf7 0x66 0x0a 0x6d 0x90 0x16 0xa1 0x81 0x8b 0x81 0x5e 0x81 0x81 0x45 0x81 0x52 0x81 0x44 0x81 0x56 0x4b 0x81 0x81 0x30 0x81 0x2d 0x81 0x4a 0x36 0x38 0x81 0x20 0x83 0x81 0x81 0x48 0x59 0x43 0x82 0x81 0x4d 0x57 0x81 0x2e 0x81 0x42 0x84 0x81 0x31 0x81 0x5a 0x81 0x34 0x33 0x86 0x81 0x51 0x81 0x81 0x32 0x81 0x25 0x2b 0x81 0x23 0x28 0x81 0x3f 0x39 0x81 0x37 0x2a 0x86 0x81 0x84 0x81 0x54 0x81 0x81 0x4c 0x50 0x46 0x53 0x4f 0x82 0x81 0x4e 0x41 0x49 0x81 0x81 0x55 0x81 0x47 0x2c 0x81 0x81 0x58 0x27 0x81 0x81 0x21 0x35 0x81 0x26 0x81 0x29 0x2f '0  L" fem  L" fA   r    m.  f#m  L"       f m      ^  E R D VK  0 - J68     HYC  MW . B  1 Z 43  Q  2 %+ #( ?9 7*    T  LPFSO  NAI  U G,  X'  !5 & )/'
  
// ====================================================
// 0xbc62: WORD 'ENG-VOC' codep=0x1ab5 parp=0xbc6e
// ====================================================
// 0xbc6e: db 0x7c 0xbc 0x77 0xba 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '| w                 '
  
// ====================================================
// 0xbc82: WORD 'ENG-O' codep=0x83dd parp=0xbc8c
// ====================================================
// 0xbc8c: db 0x51 0x7f 'Q'
  
// ====================================================
// 0xbc8e: WORD 'OV/DA' codep=0x224c parp=0xbc98
// ====================================================

void OV/DA()
{
  ENG-O UNK_0xeea4 
}


// ====================================================
// 0xbc9e: WORD 'OV/RE' codep=0x224c parp=0xbca8
// ====================================================

void OV/RE()
{
  ENG-O UNK_0xf469 
}


// ====================================================
// 0xbcae: WORD 'OVDBA' codep=0x224c parp=0xbcb8
// ====================================================

void OVDBA()
{
  ENG-O UNK_0xee52 
}


// ====================================================
// 0xbcbe: WORD 'SETTER' codep=0x1ab5 parp=0xbcc9
// ====================================================
// 0xbcc9: db 0xd7 0xbc 0x70 0xbc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  p                 '
  
// ====================================================
// 0xbcdd: WORD 'PLSET-OV' codep=0x83dd parp=0xbcea
// ====================================================
// 0xbcea: db 0xdb 0x8c '  '
  
// ====================================================
// 0xbcec: WORD 'SET-PLAN' codep=0x224c parp=0xbcf9
// ====================================================

void SET-PLAN()
{
  PLSET-OV UNK_0xf528 
}


// ====================================================
// 0xbcff: WORD 'ORBIT' codep=0x1ab5 parp=0xbd09
// ====================================================
// 0xbd09: db 0x17 0xbd 0xcb 0xbc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xbd1d: WORD 'ORBIT' codep=0x83dd parp=0xbd27
// ====================================================
// 0xbd27: db 0x2d 0x80 '- '
  
// ====================================================
// 0xbd29: WORD 'INIT-' codep=0x224c parp=0xbd33
// ====================================================

void INIT-()
{
  ORBIT UNK_0xf34c SAVE-OV();
  
}


// ====================================================
// 0xbd3b: WORD 'SHOWS' codep=0x224c parp=0xbd45
// ====================================================

// ====================================================
// 0xbd42: WORD 'UNK_0xbd44' codep=0x4cd3 parp=0xbd44
// ====================================================

void SHOWS()
{
  ORBIT UNK_0xe647 
}


// ====================================================
// 0xbd4b: WORD 'DESCE' codep=0x224c parp=0xbd55
// ====================================================

void DESCE()
{
  ORBIT UNK_0xf0db SAVE-OV();
  
}


// ====================================================
// 0xbd5d: WORD 'ASCEN' codep=0x224c parp=0xbd67
// ====================================================

void ASCEN()
{
  ORBIT UNK_0xf2ab SAVE-OV();
  
}


// ====================================================
// 0xbd6f: WORD 'ROTAT' codep=0x224c parp=0xbd79
// ====================================================

void ROTAT()
{
  ORBIT UNK_0xf37b SAVE-OV();
  
}


// ====================================================
// 0xbd81: WORD 'SEEGR' codep=0x224c parp=0xbd8b
// ====================================================

void SEEGR()
{
  ORBIT UNK_0xeba7 
}


// ====================================================
// 0xbd91: WORD 'MROTA' codep=0x224c parp=0xbd9b
// ====================================================

void MROTA()
{
  Push(0xbd79); MODULE();
  
}


// ====================================================
// 0xbda3: WORD 'CULTURE' codep=0x1ab5 parp=0xbdaf
// ====================================================
// 0xbdaf: db 0xbd 0xbd 0x0b 0xbd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xbdc3: WORD 'CULTUR' codep=0x83dd parp=0xbdce
// ====================================================
// 0xbdce: db 0xa2 0x6c ' l'
  
// ====================================================
// 0xbdd0: WORD '.CULT' codep=0x224c parp=0xbdda
// ====================================================

void .CULT()
{
  CULTUR UNK_0xf4f1 
}


// ====================================================
// 0xbde0: WORD '.RACE' codep=0x224c parp=0xbdea
// ====================================================

void .RACE()
{
  CULTUR UNK_0xf21d 
}


// ====================================================
// 0xbdf0: WORD 'DESCRI' codep=0x1ab5 parp=0xbdfb
// ====================================================
// 0xbdfb: db 0x09 0xbe 0xb1 0xbd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xbe0f: WORD 'DESCR' codep=0x83dd parp=0xbe19
// ====================================================
// 0xbe19: db 0x23 0x79 '#y'
  
// ====================================================
// 0xbe1b: WORD 'DO-LO' codep=0x224c parp=0xbe25
// ====================================================

void DO-LO()
{
  DESCR UNK_0xf4e1 
}


// ====================================================
// 0xbe2b: WORD '.LIFE' codep=0x224c parp=0xbe35
// ====================================================

void .LIFE()
{
  DESCR UNK_0xf4a8 
}


// ====================================================
// 0xbe3b: WORD '.HUFF' codep=0x224c parp=0xbe45
// ====================================================

void .HUFF()
{
  DESCR UNK_0xea73 
}


// ====================================================
// 0xbe4b: WORD '.AHUF' codep=0x224c parp=0xbe55
// ====================================================

void .AHUF()
{
  DESCR UNK_0xeaa0 
}


// ====================================================
// 0xbe5b: WORD 'SSCN' codep=0x224c parp=0xbe64
// ====================================================

void SSCN()
{
  DESCR UNK_0xf2c3 
}


// ====================================================
// 0xbe6a: WORD '?COMS' codep=0x224c parp=0xbe74
// ====================================================

void ?COMS()
{
  DESCR UNK_0xeea1 
}


// ====================================================
// 0xbe7a: WORD 'SSCAN' codep=0x224c parp=0xbe84
// ====================================================

void SSCAN()
{
  Push(0xbe64); MODULE();
  
}


// ====================================================
// 0xbe8c: WORD 'CPAUS' codep=0x224c parp=0xbe96
// ====================================================

void CPAUS()
{
  DESCR UNK_0xe6fb 
}


// ====================================================
// 0xbe9c: WORD 'COMM-VOC' codep=0x1ab5 parp=0xbea9
// ====================================================
// 0xbea9: db 0xb7 0xbe 0xfd 0xbd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xbebd: WORD 'COMM-OV' codep=0x83dd parp=0xbec9
// ====================================================
// 0xbec9: db 0x03 0x7b ' {'
  
// ====================================================
// 0xbecb: WORD 'OVINIT-' codep=0x224c parp=0xbed7
// ====================================================

void OVINIT-()
{
  COMM-OV UNK_0xf52e SAVE-OV();
  Push(1); Push(0xb822); MODULE();
  
}


// ====================================================
// 0xbee7: WORD 'U-COMM' codep=0x224c parp=0xbef2
// ====================================================

void U-COMM()
{
  COMM-OV UNK_0xf212 SAVE-OV();
  
}


// ====================================================
// 0xbefa: WORD 'COMM-EX' codep=0x224c parp=0xbf06
// ====================================================

void COMM-EX()
{
  COMM-OV UNK_0xf013 SAVE-OV();
  
// ====================================================
// 0xbf0b: WORD 'UNK_0xbf0d' codep=0x9083 parp=0xbf0d
// ====================================================

}


// ====================================================
// 0xbf0e: WORD 'A>O' codep=0x224c parp=0xbf16
// ====================================================

void A>O()
{
  COMM-OV UNK_0xdade SAVE-OV();
  
}


// ====================================================
// 0xbf1e: WORD 'O>C' codep=0x224c parp=0xbf26
// ====================================================

void O>C()
{
  COMM-OV UNK_0xdab8 SAVE-OV();
  
}


// ====================================================
// 0xbf2e: WORD '>HAIL' codep=0x224c parp=0xbf38
// ====================================================

void >HAIL()
{
  COMM-OV UNK_0xde7c 
}


// ====================================================
// 0xbf3e: WORD 'OV+!EDL' codep=0x224c parp=0xbf4a
// ====================================================

void OV+!EDL()
{
  COMM-OV UNK_0xdcf5 SAVE-OV();
  
}


// ====================================================
// 0xbf52: WORD 'OVEDL+A' codep=0x224c parp=0xbf5e
// ====================================================

void OVEDL+A()
{
  COMM-OV UNK_0xefe1 SAVE-OV();
  
}


// ====================================================
// 0xbf66: WORD 'P>CT' codep=0x224c parp=0xbf6f
// ====================================================

void P>CT()
{
  COMM-OV UNK_0xe40b SAVE-OV();
  
}


// ====================================================
// 0xbf77: WORD 'CTUP' codep=0x224c parp=0xbf80
// ====================================================

void CTUP()
{
  COMM-OV UNK_0xe1e8 
}


// ====================================================
// 0xbf86: WORD '1SYL' codep=0x224c parp=0xbf8f
// ====================================================

void 1SYL()
{
  COMM-OV UNK_0xdfa7 
}


// ====================================================
// 0xbf95: WORD 'MCOMM-E' codep=0x224c parp=0xbfa1
// ====================================================

void MCOMM-E()
{
  Push(0xbf06); MODULE();
  
}


// ====================================================
// 0xbfa9: WORD 'MEDL+AU' codep=0x224c parp=0xbfb5
// ====================================================

void MEDL+AU()
{
  Push(0xbf5e); MODULE();
  
}


// ====================================================
// 0xbfbd: WORD 'DA-STR' codep=0x224c parp=0xbfc8
// ====================================================

void DA-STR()
{
  COMM-OV UNK_0xf47e SAVE-OV();
  
}


// ====================================================
// 0xbfd0: WORD 'EDL>P' codep=0x224c parp=0xbfda
// ====================================================

void EDL>P()
{
  COMM-OV UNK_0xdcdf 
}


// ====================================================
// 0xbfe0: WORD 'BLDLI' codep=0x1ab5 parp=0xbfea
// ====================================================
// 0xbfea: db 0xf8 0xbf 0xab 0xbe 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xbffe: WORD 'BLDLI' codep=0x83dd parp=0xc008
// ====================================================
// 0xc008: db 0xc3 0x91 '  '
  
// ====================================================
// 0xc00a: WORD 'BLDLI' codep=0x224c parp=0xc014
// ====================================================

void BLDLI()
{
  BLDLI UNK_0xf502 
}


// ====================================================
// 0xc01a: WORD 'SET-C' codep=0x224c parp=0xc024
// ====================================================

void SET-C()
{
  BLDLI UNK_0xf491 
}


// ====================================================
// 0xc02a: WORD 'T>O' codep=0x224c parp=0xc032
// ====================================================

void T>O()
{
  BLDLI UNK_0xf399 
}


// ====================================================
// 0xc038: WORD '!TAMT' codep=0x224c parp=0xc042
// ====================================================

void !TAMT()
{
  BLDLI UNK_0xed0c 
}


// ====================================================
// 0xc048: WORD '@TAMT' codep=0x224c parp=0xc052
// ====================================================

void @TAMT()
{
  BLDLI UNK_0xed28 
}


// ====================================================
// 0xc058: WORD 'SCI-VOC' codep=0x1ab5 parp=0xc064
// ====================================================
// 0xc064: db 0x72 0xc0 0xec 0xbf 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 'r              '
  // 0xc073: add    bh,bh
// 0xc075: call   far [bp+si]
// 0xc077: or     [si-41],dl

// ====================================================
// 0xc078: WORD 'SCI-OV' codep=0x83dd parp=0xc083
// ====================================================
// 0xc083: db 0xe5 0x82 '  '
  
// ====================================================
// 0xc085: WORD 'OV/STA' codep=0x224c parp=0xc090
// ====================================================

void OV/STA()
{
  SCI-OV UNK_0xf537 
}


// ====================================================
// 0xc096: WORD 'OV/STX' codep=0x224c parp=0xc0a1
// ====================================================

void OV/STX()
{
  SCI-OV UNK_0xf554 
}


// ====================================================
// 0xc0a7: WORD 'OVSTAR' codep=0x224c parp=0xc0b2
// ====================================================

void OVSTAR()
{
  SCI-OV Push(0); UNK_0xf463 
}


// ====================================================
// 0xc0ba: WORD 'OV/SEN' codep=0x224c parp=0xc0c5
// ====================================================

void OV/SEN()
{
  SCI-OV UNK_0xf159 
}


// ====================================================
// 0xc0cb: WORD '?HEAVY' codep=0x224c parp=0xc0d6
// ====================================================

void ?HEAVY()
{
  SCI-OV UNK_0xe2da 
}


// ====================================================
// 0xc0dc: WORD '/STARD' codep=0x224c parp=0xc0e7
// ====================================================

void /STARD()
{
  Push(0xc0b2); MODULE();
  
}


// ====================================================
// 0xc0ef: WORD '.SORD' codep=0x224c parp=0xc0f9
// ====================================================

void .SORD()
{
  pp_#AUX @ DUP Push(1); = 
  if (Pop() == 0) goto label379;
  Push(0xc0a1); MODULE();
  
  label379:
  Push(cc_3); = 
  if (Pop() == 0) goto label380;
  Push(0xbcb8); MODULE();
  
  label380:
  
}


// ====================================================
// 0xc11d: WORD 'HEALTI' codep=0x1d29 parp=0xc128
// ====================================================
// 0xc128: db 0x20 0x45 ' E'
  
// ====================================================
// 0xc12a: WORD 'LASTAP' codep=0x1d29 parp=0xc135
// ====================================================
// 0xc135: db 0x49 0x4e 0x54 0x20 'INT '
  
// ====================================================
// 0xc139: WORD 'ROSTER' codep=0x1d29 parp=0xc144
// ====================================================
// 0xc144: db 0x00 0x00 0x00 '   '
  // 0xc147: add    [bx+si],al
// 0xc149: add    [bx+si],al
// 0xc14b: add    [bx+si],al
// 0xc14d: add    [bx+si],al
// 0xc14f: add    [bx+si],al
// 0xc151: add    [bx+si],al
// 0xc153: add    [bx+si],al
// 0xc155: add    [si],ch

// ====================================================
// 0xc156: WORD 'HEALER' codep=0x1ab5 parp=0xc161
// ====================================================
// 0xc161: db 0x6f 0xc1 0x66 0xc0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'o f                 '
  
// ====================================================
// 0xc175: WORD 'HEAL-O' codep=0x83dd parp=0xc180
// ====================================================
// 0xc180: db 0x24 0x8c '$ '
  
// ====================================================
// 0xc182: WORD '(OBI' codep=0x224c parp=0xc18b
// ====================================================

void (OBI()
{
  HEAL-O UNK_0xf52d 
}


// ====================================================
// 0xc191: WORD '(.VI' codep=0x224c parp=0xc19a
// ====================================================

void (.VI()
{
  HEAL-O UNK_0xf331 
}


// ====================================================
// 0xc1a0: WORD '(HEA' codep=0x224c parp=0xc1a9
// ====================================================

void (HEA()
{
  HEAL-O UNK_0xf551 
}


// ====================================================
// 0xc1af: WORD '(ROL' codep=0x224c parp=0xc1b8
// ====================================================

void (ROL()
{
  HEAL-O UNK_0xf1c6 
}


// ====================================================
// 0xc1be: WORD 'HEAL' codep=0x224c parp=0xc1c7
// ====================================================

void HEAL()
{
  Push(0xc1a9); MODULE();
  
}


// ====================================================
// 0xc1cf: WORD '.VIT' codep=0x224c parp=0xc1d8
// ====================================================

void .VIT()
{
  Push(0xc19a); MODULE();
  
}


// ====================================================
// 0xc1e0: WORD 'KILL' codep=0x224c parp=0xc1e9
// ====================================================

void KILL()
{
  HEAL-O UNK_0xf53c 
}


// ====================================================
// 0xc1ef: WORD '?APP' codep=0x224c parp=0xc1f8
// ====================================================

void ?APP()
{
  TIME 2@ pp_LASTAP 2@ pp_HEALTI @ Push(0); D+ D>();
  pp_?HEAL @ AND 
  if (Pop() == 0) goto label381;
  TIME 2@ pp_LASTAP 2!();
  Push(1); 
  goto label382;
  
  label381:
  Push(0); 
  label382:
  
}


// ====================================================
// 0xc226: WORD 'BANK-VOC' codep=0x1ab5 parp=0xc233
// ====================================================
// 0xc233: db 0x41 0xc2 0x63 0xc1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'A c                 '
  
// ====================================================
// 0xc247: WORD 'BANK-OV' codep=0x83dd parp=0xc253
// ====================================================
// 0xc253: db 0x0f ' '
  
// ====================================================
// 0xc254: WORD 'UNK_0xc256' codep=0xc073 parp=0xc256
// ====================================================

// ====================================================
// 0xc255: WORD 'OVINIT-' codep=0x224c parp=0xc261
// ====================================================

void OVINIT-()
{
  BANK-OV UNK_0xf048 
}


// ====================================================
// 0xc267: WORD 'OVTRANS' codep=0x224c parp=0xc273
// ====================================================

void OVTRANS()
{
  BANK-OV UNK_0xf063 
}


// ====================================================
// 0xc279: WORD 'OVD@BAL' codep=0x224c parp=0xc285
// ====================================================

void OVD@BAL()
{
  BANK-OV UNK_0xf000 
}


// ====================================================
// 0xc28b: WORD 'OVD!BAL' codep=0x224c parp=0xc297
// ====================================================

void OVD!BAL()
{
  BANK-OV UNK_0xf018 
}


// ====================================================
// 0xc29d: WORD 'OV?BALA' codep=0x224c parp=0xc2a9
// ====================================================

void OV?BALA()
{
  BANK-OV UNK_0xf02f 
}


// ====================================================
// 0xc2af: WORD 'OV!TFLA' codep=0x224c parp=0xc2bb
// ====================================================

void OV!TFLA()
{
  BANK-OV UNK_0xefe6 
}


// ====================================================
// 0xc2c1: WORD 'I-TRANS' codep=0x224c parp=0xc2cd
// ====================================================

void I-TRANS()
{
  BANK-OV UNK_0xf0de 
}


// ====================================================
// 0xc2d3: WORD 'U-B' codep=0x224c parp=0xc2db
// ====================================================

void U-B()
{
  BANK-OV UNK_0xf4ff 
}


// ====================================================
// 0xc2e1: WORD 'T+BALAN' codep=0x224c parp=0xc2ed
// ====================================================

void T+BALAN()
{
  BANK-OV UNK_0xf000 D+ UNK_0xf018 UNK_0xefe6 
}


// ====================================================
// 0xc2f9: WORD 'XCOM-VOC' codep=0x1ab5 parp=0xc306
// ====================================================
// 0xc306: db 0x14 0xc3 0x35 0xc2 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  5                 '
  
// ====================================================
// 0xc31a: WORD 'XCOM-OV' codep=0x83dd parp=0xc326
// ====================================================
// 0xc326: db 0xdb 0x7c ' |'
  
// ====================================================
// 0xc328: WORD 'XCOMM' codep=0x224c parp=0xc332
// ====================================================

void XCOMM()
{
  XCOM-OV UNK_0xf53d 
}


// ====================================================
// 0xc338: WORD '#>PRO' codep=0x224c parp=0xc342
// ====================================================

void #>PRO()
{
  XCOM-OV UNK_0xf26a 
}


// ====================================================
// 0xc348: WORD 'REPAIR' codep=0x1ab5 parp=0xc353
// ====================================================
// 0xc353: db 0x61 0xc3 0x08 0xc3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'a                   '
  
// ====================================================
// 0xc367: WORD 'REPAIR-' codep=0x83dd parp=0xc373
// ====================================================
// 0xc373: db 0x73 0x8c 's '
  
// ====================================================
// 0xc375: WORD 'DO-REPA' codep=0x224c parp=0xc381
// ====================================================

void DO-REPA()
{
  REPAIR- UNK_0xf505 SAVE-OV();
  TIME 2@ pp_LASTREP 2!();
  
}


// ====================================================
// 0xc391: WORD '?SHIP-R' codep=0x224c parp=0xc39d
// ====================================================

void ?SHIP-R()
{
  TIME 2@ pp_LASTREP 2@ D-();
  DABS();
  pp_REPAIRT @ Push(0); D>();
  pp_?REPAIR @ AND pp_?REPAIR @ Push(1); = OR 
}


// ====================================================
// 0xc3c3: WORD 'MREPAIR' codep=0x224c parp=0xc3cf
// ====================================================

void MREPAIR()
{
  ?SHIP-R();
  
  if (Pop() == 0) goto label383;
  Push(0xc381); MODULE();
  pp_#AUX @ Push(cc_3); = 
  if (Pop() == 0) goto label383;
  Push(0xbcb8); MODULE();
  
  label383:
  
}


// ====================================================
// 0xc3ef: WORD 'BARTE' codep=0x1ab5 parp=0xc3f9
// ====================================================
// 0xc3f9: db 0x07 0xc4 0x55 0xc3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  U                 '
  
// ====================================================
// 0xc40d: WORD 'BARTER-' codep=0x83dd parp=0xc419
// ====================================================
// 0xc419: db 0x62 0x92 'b '
  
// ====================================================
// 0xc41b: WORD 'DOENTER' codep=0x224c parp=0xc427
// ====================================================

void DOENTER()
{
  BARTER- UNK_0xe744 SAVE-OV();
  
}


// ====================================================
// 0xc42f: WORD 'DOOPEN' codep=0x224c parp=0xc43a
// ====================================================

void DOOPEN()
{
  BARTER- UNK_0xf558 SAVE-OV();
  
}


// ====================================================
// 0xc442: WORD 'DOBARTE' codep=0x224c parp=0xc44e
// ====================================================

// ====================================================
// 0xc445: WORD 'UNK_0xc447' codep=0x4f44 parp=0xc447
// ====================================================

void DOBARTE()
{
  BARTER- UNK_0xf45e SAVE-OV();
  
}


// ====================================================
// 0xc456: WORD '!PFLAGS' codep=0x224c parp=0xc462
// ====================================================

void !PFLAGS()
{
  BARTER- UNK_0xf4d0 SAVE-OV();
  
}


// ====================================================
// 0xc46a: WORD 'L>P' codep=0x224c parp=0xc472
// ====================================================

void L>P()
{
  BARTER- UNK_0xf508 SAVE-OV();
  
}


// ====================================================
// 0xc47a: WORD 'MAR' codep=0x1ab5 parp=0xc482
// ====================================================
// 0xc482: db 0x90 0xc4 0xfb 0xc3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xc496: WORD 'MARKE' codep=0x83dd parp=0xc4a0
// ====================================================
// 0xc4a0: db 0xbc 0x93 '  '
  
// ====================================================
// 0xc4a2: WORD 'TRADE' codep=0x224c parp=0xc4ac
// ====================================================

void TRADE()
{
  MARKE UNK_0xf50e SAVE-OV();
  
}


// ====================================================
// 0xc4b4: WORD 'SITE-VOC' codep=0x1ab5 parp=0xc4c1
// ====================================================
// 0xc4c1: db 0xcf 0xc4 0x84 0xc4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xc4d5: WORD 'SITE-OV' codep=0x83dd parp=0xc4e1
// ====================================================
// 0xc4e1: db 0x11 0x71 ' q'
  
// ====================================================
// 0xc4e3: WORD '(.MERC)' codep=0x224c parp=0xc4ef
// ====================================================

void (.MERC)()
{
  SITE-OV UNK_0xf4f5 OV-CANC();
  
}


// ====================================================
// 0xc4f7: WORD '(GETSITE)' codep=0x224c parp=0xc505
// ====================================================

void (GETSITE)()
{
  SITE-OV UNK_0xf547 SAVE-OV();
  OV-CANC();
  
}


// ====================================================
// 0xc50f: WORD 'FLUX-VOC' codep=0x1ab5 parp=0xc51c
// ====================================================
// 0xc51c: db 0x2a 0xc5 0xc3 0xc4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '*          '
  // 0xc527: add    [bx+si],al
// 0xc529: add    [bx+si],al
// 0xc52b: add    bh,bh
// 0xc52d: call   far [bp+si]
// 0xc52f: or     [si-3C],al

// ====================================================
// 0xc530: WORD 'FLUX-OV' codep=0x83dd parp=0xc53c
// ====================================================
// 0xc53c: db 0xd6 0x88 '  '
  
// ====================================================
// 0xc53e: WORD 'OVFLU' codep=0x224c parp=0xc548
// ====================================================

void OVFLU()
{
  FLUX-OV UNK_0xf4b9 
}


// ====================================================
// 0xc54e: WORD 'JUMPF' codep=0x224c parp=0xc558
// ====================================================

void JUMPF()
{
  FLUX-OV 
// ====================================================
// 0xc559: WORD 'UNK_0xc55b' codep=0x12c5 parp=0xc55b
// ====================================================
UNK_0xf514 
}


// ====================================================
// 0xc55e: WORD 'DPART-VOC' codep=0x1ab5 parp=0xc56c
// ====================================================
// 0xc56c: db 0x7a 0xc5 0x1e 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'z                   '
  
// ====================================================
// 0xc580: WORD 'DPART-OV' codep=0x83dd parp=0xc58d
// ====================================================
// 0xc58d: db 0xdf 0x6e ' n'
  
// ====================================================
// 0xc58f: WORD 'DEPART' codep=0x224c parp=0xc59a
// ====================================================

void DEPART()
{
  DPART-OV UNK_0xf511 
}


// ====================================================
// 0xc5a0: WORD 'CLOUD-V' codep=0x1ab5 parp=0xc5ac
// ====================================================
// 0xc5ac: db 0xba 0xc5 0x6e 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  n                 '
  
// ====================================================
// 0xc5c0: WORD 'CLOUD-O' codep=0x83dd parp=0xc5cc
// ====================================================
// 0xc5cc: db 0x12 0x95 '  '
  
// ====================================================
// 0xc5ce: WORD 'DO-CLOU' codep=0x224c parp=0xc5da
// ====================================================

void DO-CLOU()
{
  CLOUD-O UNK_0xf52c 
}


// ====================================================
// 0xc5e0: WORD 'NAV-VOC' codep=0x1ab5 parp=0xc5ec
// ====================================================
// 0xc5ec: db 0xfa 0xc5 0xae 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xc600: WORD 'NAV-O' codep=0x83dd parp=0xc60a
// ====================================================
// 0xc60a: db 0x42 0x84 'B '
  
// ====================================================
// 0xc60c: WORD 'OV/(D' codep=0x224c parp=0xc616
// ====================================================

void OV/(D()
{
  NAV-O UNK_0xf4d9 
}


// ====================================================
// 0xc61c: WORD 'OV/(U' codep=0x224c parp=0xc626
// ====================================================

void OV/(U()
{
  NAV-O UNK_0xf50b 
}


// ====================================================
// 0xc62c: WORD 'OV-SH' codep=0x224c parp=0xc636
// ====================================================

void OV-SH()
{
  CTINIT();
  NAV-O *SHIP >C+S();
  UNK_0xf243 ICLOSE();
  
}


// ====================================================
// 0xc644: WORD 'OV-AR' codep=0x224c parp=0xc64e
// ====================================================

void OV-AR()
{
  CTINIT();
  NAV-O *SHIP >C+S();
  UNK_0xf3a9 ICLOSE();
  
}


// ====================================================
// 0xc65c: WORD 'DAMAGE-' codep=0x1ab5 parp=0xc668
// ====================================================
// 0xc668: db 0x76 0xc6 0xee 0xc5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'v                   '
  
// ====================================================
// 0xc67c: WORD 'DAMAGE-' codep=0x83dd parp=0xc688
// ====================================================
// 0xc688: db 0xaf 0x8f '  '
  
// ====================================================
// 0xc68a: WORD 'DO-DA' codep=0x224c parp=0xc694
// ====================================================

void DO-DA()
{
  DAMAGE- UNK_0xf515 SAVE-OV();
  
}


// ====================================================
// 0xc69c: WORD '>DAM' codep=0x224c parp=0xc6a5
// ====================================================

void >DAM()
{
  DAMAGE- UNK_0xea7c 099();
  UNK_0xf151 SAVE-OV();
  
}


// ====================================================
// 0xc6b1: WORD '.AUX' codep=0x224c parp=0xc6ba
// ====================================================

void .AUX()
{
  DAMAGE- UNK_0xea14 
}


// ====================================================
// 0xc6c0: WORD 'CREWD' codep=0x224c parp=0xc6ca
// ====================================================

void CREWD()
{
  DAMAGE- UNK_0xf2f0 
}


// ====================================================
// 0xc6d0: WORD 'BLST' codep=0x224c parp=0xc6d9
// ====================================================

void BLST()
{
  DAMAGE- UNK_0xf52f 
}


// ====================================================
// 0xc6df: WORD '#MISS' codep=0x1d29 parp=0xc6e9
// ====================================================
// 0xc6e9: db 0x00 0x00 '  '
  
// ====================================================
// 0xc6eb: WORD 'WEAP' codep=0x1ab5 parp=0xc6f4
// ====================================================
// 0xc6f4: db 0x02 0xc7 0x6a 0xc6 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  j                 '
  
// ====================================================
// 0xc708: WORD 'WEA' codep=0x83dd parp=0xc710
// ====================================================
// 0xc710: db 0x68 0x96 'h '
  
// ====================================================
// 0xc712: WORD 'TAR' codep=0x224c parp=0xc71a
// ====================================================

void TAR()
{
  WEA UNK_0xf520 
}


// ====================================================
// 0xc720: WORD 'DTA' codep=0x224c parp=0xc728
// ====================================================

void DTA()
{
  Push(0xc71a); MODULE();
  
}


// ====================================================
// 0xc730: WORD 'DNL' codep=0x224c parp=0xc738
// ====================================================

void DNL()
{
  WEA UNK_0xf491 
}


// ====================================================
// 0xc73e: WORD 'GNL' codep=0x224c parp=0xc746
// ====================================================

void GNL()
{
  WEA UNK_0xf352 
}


// ====================================================
// 0xc74c: WORD 'DNL' codep=0x224c parp=0xc754
// ====================================================

void DNL()
{
  Push(0xc738); MODULE();
  
}


// ====================================================
// 0xc75c: WORD 'EYE-VOC' codep=0x1ab5 parp=0xc768
// ====================================================
// 0xc768: db 0x76 0xc7 0xf6 0xc6 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'v                   '
  
// ====================================================
// 0xc77c: WORD 'EYE-O' codep=0x83dd parp=0xc786
// ====================================================
// 0xc786: db 0x88 0x78 ' x'
  
// ====================================================
// 0xc788: WORD 'AI' codep=0x224c parp=0xc78f
// ====================================================

void AI()
{
  EYE-O UNK_0xf506 SAVE-OV();
  
}


// ====================================================
// 0xc797: WORD 'COMBAU' codep=0x1ab5 parp=0xc7a2
// ====================================================
// 0xc7a2: db 0xb0 0xc7 0x6a 0xc7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  j                 '
  
// ====================================================
// 0xc7b6: WORD 'COMBAU' codep=0x83dd parp=0xc7c1
// ====================================================
// 0xc7c1: db 0x2a 0x91 '* '
  
// ====================================================
// 0xc7c3: WORD 'CSCALE' codep=0x224c parp=0xc7ce
// ====================================================

void CSCALE()
{
  COMBAU UNK_0xf4f7 
}


// ====================================================
// 0xc7d4: WORD '@NF' codep=0x224c parp=0xc7dc
// ====================================================

void @NF()
{
  COMBAU UNK_0xf53b 
}


// ====================================================
// 0xc7e2: WORD 'COMBAT-VOC' codep=0x1ab5 parp=0xc7f1
// ====================================================
// 0xc7f1: db 0xff 0xc7 0xa4 0xc7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xc805: WORD 'COMBAT-O' codep=0x83dd parp=0xc812
// ====================================================
// 0xc812: db 0x29 0x8e ') '
  
// ====================================================
// 0xc814: WORD '(WAR' codep=0x224c parp=0xc81d
// ====================================================

void (WAR()
{
  COMBAT-O UNK_0xf4ee SAVE-OV();
  
}


// ====================================================
// 0xc825: WORD '(COM' codep=0x224c parp=0xc82e
// ====================================================

void (COM()
{
  COMBAT-O UNK_0xf552 
}


// ====================================================
// 0xc834: WORD 'C&C' codep=0x224c parp=0xc83c
// ====================================================

void C&C()
{
  COMBAT-O UNK_0xf517 SAVE-OV();
  
}


// ====================================================
// 0xc844: WORD '?J' codep=0x224c parp=0xc84b
// ====================================================

void ?J()
{
  COMBAT-O UNK_0xecf5 
}


// ====================================================
// 0xc851: WORD '?JMP' codep=0x224c parp=0xc85a
// ====================================================

void ?JMP()
{
  Push(0xc84b); MODULE();
  
}


// ====================================================
// 0xc862: WORD 'COMB' codep=0x224c parp=0xc86b
// ====================================================

void COMB()
{
  Push(0xc82e); MODULE();
  
}


// ====================================================
// 0xc873: WORD 'WAR' codep=0x224c parp=0xc87b
// ====================================================

void WAR()
{
  Push(0xc81d); MODULE();
  
}


// ====================================================
// 0xc883: WORD 'END-' codep=0x1ab5 parp=0xc88c
// ====================================================
// 0xc88c: db 0x9a 0xc8 0xf3 0xc7 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xc8a0: WORD 'ENDI' codep=0x83dd parp=0xc8a9
// ====================================================
// 0xc8a9: db 0x80 0x6d ' m'
  
// ====================================================
// 0xc8ab: WORD 'HALL' codep=0x224c parp=0xc8b4
// ====================================================

void HALL()
{
  ENDI UNK_0xf516 
}


// ====================================================
// 0xc8ba: WORD '?FRE' codep=0x224c parp=0xc8c3
// ====================================================

void ?FRE()
{
  ENDI UNK_0xe8b6 
}


// ====================================================
// 0xc8c9: WORD 'DHL' codep=0x224c parp=0xc8d1
// ====================================================

void DHL()
{
  ENDI UNK_0xf545 
}


// ====================================================
// 0xc8d7: WORD 'DUHL' codep=0x224c parp=0xc8e0
// ====================================================

void DUHL()
{
  Push(0xc8d1); MODULE();
  
}


// ====================================================
// 0xc8e8: WORD 'BOLT' codep=0x224c parp=0xc8f1
// ====================================================

void BOLT()
{
  ENDI UNK_0xf415 
}


// ====================================================
// 0xc8f7: WORD 'IUHL' codep=0x224c parp=0xc900
// ====================================================

void IUHL()
{
  ENDI UNK_0xf536 
}


// ====================================================
// 0xc906: WORD 'HMISC-VOC' codep=0x1ab5 parp=0xc914
// ====================================================
// 0xc914: db 0x22 0xc9 0x8e 0xc8 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '"                   '
  
// ====================================================
// 0xc928: WORD 'HMISC-O' codep=0x83dd parp=0xc934
// ====================================================
// 0xc934: db 0x53 0x71 'Sq'
  
// ====================================================
// 0xc936: WORD 'UFM' codep=0x224c parp=0xc93e
// ====================================================

void UFM()
{
  HMISC-O UNK_0xeed2 
}


// ====================================================
// 0xc944: WORD 'USM' codep=0x224c parp=0xc94c
// ====================================================

void USM()
{
  HMISC-O UNK_0xef3a 
}


// ====================================================
// 0xc952: WORD 'NFM' codep=0x224c parp=0xc95a
// ====================================================

void NFM()
{
  HMISC-O UNK_0xebdb 
}


// ====================================================
// 0xc960: WORD 'NSM' codep=0x224c parp=0xc968
// ====================================================

void NSM()
{
  HMISC-O UNK_0xecfe 
}


// ====================================================
// 0xc96e: WORD '.EX' codep=0x224c parp=0xc976
// ====================================================

void .EX()
{
  HMISC-O UNK_0xefad 
}


// ====================================================
// 0xc97c: WORD 'DMSG' codep=0x224c parp=0xc985
// ====================================================

void DMSG()
{
  HMISC-O UNK_0xefe5 
}


// ====================================================
// 0xc98b: WORD 'D-UP' codep=0x224c parp=0xc994
// ====================================================

void D-UP()
{
  HMISC-O UNK_0xe9cb 
}


// ====================================================
// 0xc99a: WORD 'ORB>' codep=0x224c parp=0xc9a3
// ====================================================

void ORB>()
{
  HMISC-O UNK_0xf530 
}


// ====================================================
// 0xc9a9: WORD '>ORB' codep=0x224c parp=0xc9b2
// ====================================================

void >ORB()
{
  HMISC-O UNK_0xf4e6 
}


// ====================================================
// 0xc9b8: WORD 'OSET' codep=0x224c parp=0xc9c1
// ====================================================

void OSET()
{
  HMISC-O UNK_0xed70 
}


// ====================================================
// 0xc9c7: WORD 'ORBUP' codep=0x224c parp=0xc9d1
// ====================================================

void ORBUP()
{
  Push(0xc9c1); MODULE();
  
}


// ====================================================
// 0xc9d9: WORD 'TRAK-EN' codep=0x224c parp=0xc9e5
// ====================================================

void TRAK-EN()
{
  pp_STAR-HR @ pp_TRAK-HR @ - ABS();
  Push(2); Push(0x0017); WITHIN();
  
  if (Pop() == 0) goto label384;
  HMISC-O UNK_0xf29d 
  label384:
  
}


// ====================================================
// 0xca03: WORD '!'EXT' codep=0x224c parp=0xca0d
// ====================================================

void !'EXT()
{
  HMISC-O UNK_0xf369 
}


// ====================================================
// 0xca13: WORD '(CTXT)' codep=0x224c parp=0xca1e
// ====================================================

void (CTXT)()
{
  HMISC-O UNK_0xf0bc 
}


// ====================================================
// 0xca24: WORD 'CONTEXT' codep=0x224c parp=0xca30
// ====================================================

void CONTEXT()
{
  Push(0xca1e); MODULE();
  
}


// ====================================================
// 0xca38: WORD '+A-VESS' codep=0x224c parp=0xca44
// ====================================================

void +A-VESS()
{
  HMISC-O UNK_0xf381 
}


// ====================================================
// 0xca4a: WORD 'MTRAK-E' codep=0x224c parp=0xca56
// ====================================================

void MTRAK-E()
{
  Push(0xc9e5); MODULE();
  
}


// ====================================================
// 0xca5e: WORD 'SHPMOV-' codep=0x1ab5 parp=0xca6a
// ====================================================
// 0xca6a: db 0x78 0xca 0x16 0xc9 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'x                   '
  
// ====================================================
// 0xca7e: WORD 'HYPER' codep=0x83dd parp=0xca88
// ====================================================
// 0xca88: db 0x3a 0x86 ': '
  
// ====================================================
// 0xca8a: WORD 'FLY' codep=0x224c parp=0xca92
// ====================================================

void FLY()
{
  HYPER UNK_0xef63 SAVE-OV();
  
}


// ====================================================
// 0xca9a: WORD 'MAN' codep=0x224c parp=0xcaa2
// ====================================================

void MAN()
{
  HYPER UNK_0xf189 
  if (Pop() == 0) goto label385;
  UNK_0xe055 pp_SKIP2NE @ 
  if (Pop() == 0) goto label386;
  UNK_0xee45 
  goto label387;
  
  label386:
  Push(0xf103); Push(0xefaf); Push(0xf069); DOTASKS();
  
  label387:
  pp_FTRIG 099();
  
  label385:
  .SORD();
  SAVE-OV();
  
}


// ====================================================
// 0xcad2: WORD '.AS' codep=0x224c parp=0xcada
// ====================================================

void .AS()
{
  HYPER UNK_0xe055 
}


// ====================================================
// 0xcae0: WORD 'JMPSHP' codep=0x224c parp=0xcaeb
// ====================================================

void JMPSHP()
{
  HYPER UNK_0xeb59 
}


// ====================================================
// 0xcaf1: WORD 'UNNEST' codep=0x224c parp=0xcafc
// ====================================================

void UNNEST()
{
  HYPER UNK_0xee45 
}


// ====================================================
// 0xcb02: WORD '>NEST' codep=0x224c parp=0xcb0c
// ====================================================

void >NEST()
{
  HYPER UNK_0xf252 
}


// ====================================================
// 0xcb12: WORD 'GET-HA' codep=0x224c parp=0xcb1d
// ====================================================

void GET-HA()
{
  HYPER UNK_0xeeef 
}


// ====================================================
// 0xcb23: WORD 'OV.MVS' codep=0x224c parp=0xcb2e
// ====================================================

void OV.MVS()
{
  HYPER UNK_0xe3a8 
}


// ====================================================
// 0xcb34: WORD 'S>PORT' codep=0x224c parp=0xcb3f
// ====================================================

void S>PORT()
{
  HYPER UNK_0xf268 SAVE-OV();
  
}


// ====================================================
// 0xcb47: WORD 'USE-E' codep=0x224c parp=0xcb51
// ====================================================

void USE-E()
{
  HYPER 
// ====================================================
// 0xcb53: WORD 'UNK_0xcb55' codep=0xe7ca parp=0xcb55
// ====================================================
UNK_0xe7cc 
}


// ====================================================
// 0xcb57: WORD 'MUSE-E' codep=0x224c parp=0xcb62
// ====================================================

void MUSE-E()
{
  Push(0xcb51); MODULE();
  
}


// ====================================================
// 0xcb6a: WORD 'ACR' codep=0x1ab5 parp=0xcb72
// ====================================================
// 0xcb72: db 0x80 0xcb 0x6c 0xca 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  l                 '
  
// ====================================================
// 0xcb86: WORD 'ACR' codep=0x83dd parp=0xcb8e
// ====================================================
// 0xcb8e: db 0x6d 0x73 'ms'
  
// ====================================================
// 0xcb90: WORD 'U-A' codep=0x224c parp=0xcb98
// ====================================================

void U-A()
{
  ACR UNK_0xf498 
}


// ====================================================
// 0xcb9e: WORD 'PFIL' codep=0x1ab5 parp=0xcba7
// ====================================================
// 0xcba7: db 0xb5 0xcb 0x74 0xcb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  t                 '
  
// ====================================================
// 0xcbbb: WORD 'PFIL' codep=0x83dd parp=0xcbc4
// ====================================================
// 0xcbc4: db 0x18 0x74 ' t'
  
// ====================================================
// 0xcbc6: WORD 'U-PF' codep=0x224c parp=0xcbcf
// ====================================================

void U-PF()
{
  PFIL UNK_0xf4fd 
}


// ====================================================
// 0xcbd5: WORD 'SHIP-GR' codep=0x1ab5 parp=0xcbe1
// ====================================================
// 0xcbe1: db 0xef 0xcb 0xa9 0xcb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xcbf5: WORD 'SHIP-GR' codep=0x83dd parp=0xcc01
// ====================================================
// 0xcc01: db 0x31 0x75 '1u'
  
// ====================================================
// 0xcc03: WORD 'OV.MASS' codep=0x224c parp=0xcc0f
// ====================================================

void OV.MASS()
{
  SHIP-GR UNK_0xee6b 
}


// ====================================================
// 0xcc15: WORD 'OV.ACC' codep=0x224c parp=0xcc20
// ====================================================

void OV.ACC()
{
  SHIP-GR UNK_0xef02 
}


// ====================================================
// 0xcc26: WORD 'OV.PODS' codep=0x224c parp=0xcc32
// ====================================================

void OV.PODS()
{
  SHIP-GR UNK_0xf124 
}


// ====================================================
// 0xcc38: WORD 'OV.SHIP' codep=0x224c parp=0xcc44
// ====================================================

void OV.SHIP()
{
  SHIP-GR UNK_0xf216 
}


// ====================================================
// 0xcc4a: WORD 'OVBALAN' codep=0x224c parp=0xcc56
// ====================================================

void OVBALAN()
{
  SHIP-GR UNK_0xf238 
}


// ====================================================
// 0xcc5c: WORD 'OV.CONF' codep=0x224c parp=0xcc68
// ====================================================

void OV.CONF()
{
  SHIP-GR UNK_0xf555 
}


// ====================================================
// 0xcc6e: WORD 'CONFIG-' codep=0x1ab5 parp=0xcc7a
// ====================================================
// 0xcc7a: db 0x88 0xcc 0xe3 0xcb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xcc8e: WORD 'CONFIG-OV' codep=0x83dd parp=0xcc9c
// ====================================================
// 0xcc9c: db 0xbc 0x75 ' u'
  
// ====================================================
// 0xcc9e: WORD 'U-SC' codep=0x224c parp=0xcca7
// ====================================================

void U-SC()
{
  CONFIG-OV UNK_0xf4e1 
}


// ====================================================
// 0xccad: WORD 'TD-VOC' codep=0x1ab5 parp=0xccb8
// ====================================================
// 0xccb8: db 0xc6 0xcc 0x7c 0xcc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  |                 '
  
// ====================================================
// 0xcccc: WORD 'TD-OV' codep=0x83dd parp=0xccd6
// ====================================================
// 0xccd6: db 0xa4 0x76 ' v'
  
// ====================================================
// 0xccd8: WORD 'U-TD' codep=0x224c parp=0xcce1
// ====================================================

void U-TD()
{
  TD-OV UNK_0xf4dc 
}


// ====================================================
// 0xcce7: WORD 'TOSS' codep=0x224c parp=0xccf0
// ====================================================

void TOSS()
{
  TD-OV UNK_0xf1e4 
}


// ====================================================
// 0xccf6: WORD 'KEY-EL' codep=0x224c parp=0xcd01
// ====================================================

void KEY-EL()
{
  TD-OV UNK_0xee89 
}


// ====================================================
// 0xcd07: WORD 'OP-VOC' codep=0x1ab5 parp=0xcd12
// ====================================================
// 0xcd12: db 0x20 0xcd 0xba 0xcc 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xcd26: WORD 'OP-OV' codep=0x83dd parp=0xcd30
// ====================================================
// 0xcd30: db 0xf9 0x88 '  '
  
// ====================================================
// 0xcd32: WORD 'U-OP' codep=0x224c parp=0xcd3b
// ====================================================

void U-OP()
{
  OP-OV UNK_0xf501 
}


// ====================================================
// 0xcd41: WORD 'VITA' codep=0x1ab5 parp=0xcd4a
// ====================================================
// 0xcd4a: db 0x58 0xcd 0x14 0xcd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'X                   '
  
// ====================================================
// 0xcd5e: WORD 'VITA-OV' codep=0x83dd parp=0xcd6a
// ====================================================
// 0xcd6a: db 0x25 0x78 '%x'
  
// ====================================================
// 0xcd6c: WORD 'DIO' codep=0x224c parp=0xcd74
// ====================================================

void DIO()
{
  VITA-OV UNK_0xf4c8 
}


// ====================================================
// 0xcd7a: WORD 'MAPS-VOC' codep=0x1ab5 parp=0xcd87
// ====================================================
// 0xcd87: db 0x95 0xcd 0x4c 0xcd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  L                 '
  
// ====================================================
// 0xcd9b: WORD 'MAPS-' codep=0x83dd parp=0xcda5
// ====================================================
// 0xcda5: db 0x5c 0x8d '\ '
  
// ====================================================
// 0xcda7: WORD 'MAPS' codep=0x224c parp=0xcdb0
// ====================================================

void MAPS()
{
  MAPS- UNK_0xf4ff 
}


// ====================================================
// 0xcdb6: WORD '.STOR' codep=0x224c parp=0xcdc0
// ====================================================

void .STOR()
{
  MAPS- UNK_0xf53a 
}


// ====================================================
// 0xcdc6: WORD '(2X2)' codep=0x224c parp=0xcdd0
// ====================================================

void (2X2)()
{
  MAPS- UNK_0xef2b 
}


// ====================================================
// 0xcdd6: WORD '2X2CO' codep=0x224c parp=0xcde0
// ====================================================

void 2X2CO()
{
  Push(0xcdd0); MODULE();
  
}


// ====================================================
// 0xcde8: WORD '(4X4)' codep=0x224c parp=0xcdf2
// ====================================================

void (4X4)()
{
  MAPS- UNK_0xef6e 
}


// ====================================================
// 0xcdf8: WORD '4X4CO' codep=0x224c parp=0xce02
// ====================================================

void 4X4CO()
{
  Push(0xcdf2); MODULE();
  
}


// ====================================================
// 0xce0a: WORD '(8X8)' codep=0x224c parp=0xce14
// ====================================================

void (8X8)()
{
  MAPS- UNK_0xf0c0 
}


// ====================================================
// 0xce1a: WORD '8X8CO' codep=0x224c parp=0xce24
// ====================================================

void 8X8CO()
{
  Push(0xce14); MODULE();
  
}


// ====================================================
// 0xce2c: WORD 'STO' codep=0x1ab5 parp=0xce34
// ====================================================
// 0xce34: db 0x42 0xce 0x89 0xcd 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'B                   '
  
// ====================================================
// 0xce48: WORD 'STO' codep=0x83dd parp=0xce50
// ====================================================
// 0xce50: db 0xe4 0x8d '  '
  
// ====================================================
// 0xce52: WORD 'DO.' codep=0x224c parp=0xce5a
// ====================================================

void DO.()
{
  STO UNK_0xf502 
}


// ====================================================
// 0xce60: WORD 'INJ' codep=0x224c parp=0xce68
// ====================================================

void INJ()
{
  STO UNK_0xf3b8 
}


// ====================================================
// 0xce6e: WORD 'DRONE-V' codep=0x1ab5 parp=0xce7a
// ====================================================
// 0xce7a: db 0x88 0xce 0x36 0xce 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  6                 '
  
// ====================================================
// 0xce8e: WORD 'DRONE-O' codep=0x83dd parp=0xce9a
// ====================================================
// 0xce9a: db 0xd0 0x95 '  '
  
// ====================================================
// 0xce9c: WORD 'DRN' codep=0x224c parp=0xcea4
// ====================================================

void DRN()
{
  DRONE-O UNK_0xf4d0 SAVE-OV();
  
}


// ====================================================
// 0xceac: WORD 'RECAL' codep=0x224c parp=0xceb6
// ====================================================

void RECAL()
{
  DRONE-O UNK_0xf49a SAVE-OV();
  
}


// ====================================================
// 0xcebe: WORD 'DRONE' codep=0x224c parp=0xcec8
// ====================================================

void DRONE()
{
  Push(0xcea4); MODULE();
  
}


// ====================================================
// 0xced0: WORD 'TVCON-V' codep=0x1ab5 parp=0xcedc
// ====================================================
// 0xcedc: db 0xea 0xce 0x7c 0xce 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  |                 '
  
// ====================================================
// 0xcef0: WORD 'TVCON-OV' codep=0x83dd parp=0xcefd
// ====================================================
// 0xcefd: db 0x91 0x94 '  '
  
// ====================================================
// 0xceff: WORD 'DOST' codep=0x224c parp=0xcf08
// ====================================================

void DOST()
{
  TVCON-OV UNK_0xef33 
}


// ====================================================
// 0xcf0e: WORD 'DO-STORM' codep=0x224c parp=0xcf1b
// ====================================================

void DO-STORM()
{
  Push(0xcf08); MODULE();
  
}


// ====================================================
// 0xcf23: WORD '.ST' codep=0x224c parp=0xcf2b
// ====================================================

void .ST()
{
  TVCON-OV UNK_0xf52d 
}


// ====================================================
// 0xcf31: WORD '.WH' codep=0x224c parp=0xcf39
// ====================================================

void .WH()
{
  TVCON-OV UNK_0xf4ca 
}


// ====================================================
// 0xcf3f: WORD '.DA' codep=0x224c parp=0xcf47
// ====================================================

void .DA()
{
  TVCON-OV UNK_0xf11a 
}


// ====================================================
// 0xcf4d: WORD '.EN' codep=0x224c parp=0xcf55
// ====================================================

void .EN()
{
  TVCON-OV UNK_0xf364 
}


// ====================================================
// 0xcf5b: WORD '.CA' codep=0x224c parp=0xcf63
// ====================================================

void .CA()
{
  TVCON-OV UNK_0xf414 
}


// ====================================================
// 0xcf69: WORD '.DI' codep=0x224c parp=0xcf71
// ====================================================

void .DI()
{
  TVCON-OV UNK_0xf51c 
}


// ====================================================
// 0xcf77: WORD 'SEED' codep=0x1ab5 parp=0xcf80
// ====================================================
// 0xcf80: db 0x8e 0xcf 0xde 0xce 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xcf94: WORD 'SEED' codep=0x83dd parp=0xcf9d
// ====================================================
// 0xcf9d: db 0xdd 0x7d ' }'
  
// ====================================================
// 0xcf9f: WORD 'POPU' codep=0x224c parp=0xcfa8
// ====================================================

void POPU()
{
  SEED UNK_0xf52b 
}


// ====================================================
// 0xcfae: WORD 'ITEMS' codep=0x1ab5 parp=0xcfb8
// ====================================================
// 0xcfb8: db 0xc6 0xcf '  '
  // 0xcfba: db     82
// 0xcfbb: iret   
// 0xcfbc: add    [bx+si],al
// 0xcfbe: add    [bx+si],al
// 0xcfc0: add    [bx+si],al
// 0xcfc2: add    [bx+si],al
// 0xcfc4: add    [bx+si],al
// 0xcfc6: add    [bx+si],al
// 0xcfc8: ???    di
// 0xcfca: sbb    cl,[bx+si]

// ====================================================
// 0xcfcc: WORD 'ITEMS-OV' codep=0x83dd parp=0xcfd9
// ====================================================
// 0xcfd9: db 0xf7 0x89 '  '
  
// ====================================================
// 0xcfdb: WORD '/ITEMS' codep=0x224c parp=0xcfe6
// ====================================================

void /ITEMS()
{
  ITEMS-OV UNK_0xf4ab 
}


// ====================================================
// 0xcfec: WORD '>DEBRIS' codep=0x224c parp=0xcff8
// ====================================================

void >DEBRIS()
{
  ITEMS-OV UNK_0xf45c 
}


// ====================================================
// 0xcffe: WORD 'ICON-V' codep=0x1ab5 parp=0xd009
// ====================================================
// 0xd009: db 0x17 0xd0 '  '
  
// ====================================================
// 0xd00b: WORD 'UNK_0xd00d' codep=0xcfba parp=0xd00d
// ====================================================
// 0xd00d: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                '
  
// ====================================================
// 0xd01d: WORD 'LISTIC' codep=0x83dd parp=0xd028
// ====================================================
// 0xd028: db 0x72 0x7e 'r~'
  
// ====================================================
// 0xd02a: WORD 'ICONS' codep=0x224c parp=0xd034
// ====================================================

void ICONS()
{
  LISTIC UNK_0xf4e6 
}


// ====================================================
// 0xd03a: WORD 'UNK_0xd03c' codep=0xcfee parp=0xd03c
// ====================================================
// 0xd047: db 0x55 0xd0 'U '
  
// ====================================================
// 0xd049: WORD 'UNK_0xd04b' codep=0xd00b parp=0xd04b
// ====================================================
// 0xd04b: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                '
  
// ====================================================
// 0xd05b: WORD 'MOVE-OV' codep=0x83dd parp=0xd067
// ====================================================
// 0xd067: db 0x9d 0x7e ' ~'
  
// ====================================================
// 0xd069: WORD 'TVMO' codep=0x224c parp=0xd072
// ====================================================

void TVMO()
{
  MOVE-OV UNK_0xf53b 
}


// ====================================================
// 0xd078: WORD '?POP' codep=0x224c parp=0xd081
// ====================================================

void ?POP()
{
  MOVE-OV UNK_0xf0cb 
}


// ====================================================
// 0xd087: WORD '!E/M' codep=0x224c parp=0xd090
// ====================================================

void !E/M()
{
  MOVE-OV UNK_0xeb5d 
}


// ====================================================
// 0xd096: WORD 'TELE' codep=0x224c parp=0xd09f
// ====================================================

void TELE()
{
  MOVE-OV UNK_0xf4f2 
}


// ====================================================
// 0xd0a5: WORD 'TELE' codep=0x224c parp=0xd0ae
// ====================================================

void TELE()
{
  Push(0xd09f); MODULE();
  
}


// ====================================================
// 0xd0b6: WORD 'T.V.' codep=0x1ab5 parp=0xd0bf
// ====================================================
// 0xd0bf: db 0xcd 0xd0 0x49 0xd0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  I                 '
  
// ====================================================
// 0xd0d3: WORD 'TV-OV' codep=0x83dd parp=0xd0dd
// ====================================================
// 0xd0dd: db 0x1a 0x7a ' z'
  
// ====================================================
// 0xd0df: WORD 'TV-DI' codep=0x224c parp=0xd0e9
// ====================================================

void TV-DI()
{
  TV-OV UNK_0xf354 
}


// ====================================================
// 0xd0ef: WORD '(TVSE' codep=0x224c parp=0xd0f9
// ====================================================

void (TVSE()
{
  TV-OV UNK_0xee71 
}


// ====================================================
// 0xd0ff: WORD '(CLEA' codep=0x224c parp=0xd109
// ====================================================

void (CLEA()
{
  TV-OV UNK_0xf3d3 
}


// ====================================================
// 0xd10f: WORD '(HEAV' codep=0x224c parp=0xd119
// ====================================================

void (HEAV()
{
  TV-OV UNK_0xee28 
}


// ====================================================
// 0xd11f: WORD '(WEAP' codep=0x224c parp=0xd129
// ====================================================

void (WEAP()
{
  TV-OV UNK_0xf500 
}


// ====================================================
// 0xd12f: WORD '(TALK' codep=0x224c parp=0xd139
// ====================================================

void (TALK()
{
  TV-OV UNK_0xf299 
}


// ====================================================
// 0xd13f: WORD 'HEAVE' codep=0x224c parp=0xd149
// ====================================================

void HEAVE()
{
  SAVE-OV();
  Push(0xd119); MODULE();
  
}


// ====================================================
// 0xd153: WORD 'BEHAVIO' codep=0x1ab5 parp=0xd15f
// ====================================================
// 0xd15f: db 0x6d 0xd1 0xc1 0xd0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'm                   '
  
// ====================================================
// 0xd173: WORD 'BEHAV' codep=0x83dd parp=0xd17d
// ====================================================
// 0xd17d: db 0xeb 0x8a '  '
  
// ====================================================
// 0xd17f: WORD 'TVTAS' codep=0x224c parp=0xd189
// ====================================================

void TVTAS()
{
  BEHAV UNK_0xf438 
}


// ====================================================
// 0xd18f: WORD 'TV' codep=0x224c parp=0xd196
// ====================================================

void TV()
{
  BEHAV UNK_0xf543 
}


// ====================================================
// 0xd19c: WORD '(SIMU' codep=0x224c parp=0xd1a6
// ====================================================

void (SIMU()
{
  BEHAV UNK_0xeee0 
}


// ====================================================
// 0xd1ac: WORD 'SIMUL' codep=0x224c parp=0xd1b6
// ====================================================

void SIMUL()
{
  Push(0xd1a6); MODULE();
  
}


// ====================================================
// 0xd1be: WORD 'FSTN' codep=0x224c parp=0xd1c7
// ====================================================

void FSTN()
{
  BEHAV UNK_0xed78 
}


// ====================================================
// 0xd1cd: WORD 'DSTUN' codep=0x224c parp=0xd1d7
// ====================================================

void DSTUN()
{
  Push(0xd1c7); MODULE();
  
}


// ====================================================
// 0xd1df: WORD 'STP-VOC' codep=0x1ab5 parp=0xd1eb
// ====================================================
// 0xd1eb: db 0xf9 0xd1 0x61 0xd1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  a                 '
  
// ====================================================
// 0xd1ff: WORD 'STP-OV' codep=0x83dd parp=0xd20a
// ====================================================
// 0xd20a: db 0xdb 0x90 '  '
  
// ====================================================
// 0xd20c: WORD 'UNK_0xd20e' codep=0xd201 parp=0xd20e
// ====================================================

// ====================================================
// 0xd20e: WORD 'UNK_0xd210' codep=0x5386 parp=0xd210
// ====================================================

// ====================================================
// 0xd20f: WORD 'UNK_0xd211' codep=0x4553 parp=0xd211
// ====================================================

// ====================================================
// 0xd211: WORD 'UNK_0xd213' codep=0x5543 parp=0xd213
// ====================================================

void SECUR()
{
  STP-OV UNK_0xf4d3 
}


// ====================================================
// 0xd21c: WORD 'SIC'E' codep=0x224c parp=0xd226
// ====================================================

// ====================================================
// 0xd222: WORD 'UNK_0xd224' codep=0xc527 parp=0xd224
// ====================================================

void SIC'E()
{
  STP-OV UNK_0xf0d1 
}


// ====================================================
// 0xd22c: WORD '2NDS' codep=0x224c parp=0xd235
// ====================================================

void 2NDS()
{
  STP-OV UNK_0xf4f8 
}


// ====================================================
// 0xd23b: WORD 'UNK_0xd23d' codep=0xd22e parp=0xd23d
// ====================================================
// 0xd248: db 0x56 0xd2 0xed 0xd1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'V                   '
  
// ====================================================
// 0xd25c: WORD 'LAUNC' codep=0x83dd parp=0xd266
// ====================================================
// 0xd266: db 0x89 0x88 '  '
  
// ====================================================
// 0xd268: WORD 'OVCOU' codep=0x224c parp=0xd272
// ====================================================

void OVCOU()
{
  LAUNC UNK_0xf417 SAVE-OV();
  
}


// ====================================================
// 0xd27a: WORD 'OVBAC' codep=0x224c parp=0xd284
// ====================================================

void OVBAC()
{
  LAUNC UNK_0xf471 SAVE-OV();
  
}


// ====================================================
// 0xd28c: WORD '.AIRL' codep=0x224c parp=0xd296
// ====================================================

void .AIRL()
{
  LAUNC UNK_0xf25f 
}


// ====================================================
// 0xd29c: WORD 'CAP-VOC' codep=0x1ab5 parp=0xd2a8
// ====================================================
// 0xd2a8: db 0xb6 0xd2 0x4a 0xd2 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  J                 '
  
// ====================================================
// 0xd2bc: WORD 'CAP-O' codep=0x83dd parp=0xd2c6
// ====================================================
// 0xd2c6: db 0xd1 0x81 '  '
  
// ====================================================
// 0xd2c8: WORD 'OV/IT' codep=0x224c parp=0xd2d2
// ====================================================

void OV/IT()
{
  CAP-O UNK_0xef8b 
}


// ====================================================
// 0xd2d8: WORD 'OV/LA' codep=0x224c parp=0xd2e2
// ====================================================

void OV/LA()
{
  CAP-O UNK_0xf17a 
}


// ====================================================
// 0xd2e8: WORD 'OV>DE' codep=0x224c parp=0xd2f2
// ====================================================

void OV>DE()
{
  CAP-O UNK_0xf02c 
}


// ====================================================
// 0xd2f8: WORD 'OV/LO' codep=0x224c parp=0xd302
// ====================================================

// ====================================================
// 0xd2ff: WORD 'UNK_0xd301' codep=0x4ccf parp=0xd301
// ====================================================

void OV/LO()
{
  CAP-O UNK_0xf451 
}


// ====================================================
// 0xd308: WORD 'DOC-VOC' codep=0x1ab5 parp=0xd314
// ====================================================
// 0xd314: db 0x22 0xd3 0xaa 0xd2 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '"                   '
  
// ====================================================
// 0xd328: WORD 'DOC-OV' codep=0x83dd parp=0xd333
// ====================================================
// 0xd333: db 0xdd 0x7f ' '
  
// ====================================================
// 0xd335: WORD 'OV/EX' codep=0x224c parp=0xd33f
// ====================================================

void OV/EX()
{
  DOC-OV UNK_0xf4f4 
}


// ====================================================
// 0xd345: WORD 'OV/TR' codep=0x224c parp=0xd34f
// ====================================================

void OV/TR()
{
  DOC-OV UNK_0xf50d 
}


// ====================================================
// 0xd355: WORD 'AN-VOC' codep=0x1ab5 parp=0xd360
// ====================================================
// 0xd360: db 0x6e 0xd3 0x16 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'n                   '
  
// ====================================================
// 0xd374: WORD 'AN-OV' codep=0x83dd parp=0xd37e
// ====================================================
// 0xd37e: db 0xf8 0x87 '  '
  
// ====================================================
// 0xd380: WORD 'OV/AN' codep=0x224c parp=0xd38a
// ====================================================

void OV/AN()
{
  AN-OV UNK_0xf4c7 
}


// ====================================================
// 0xd390: WORD '*MAP' codep=0x1ab5 parp=0xd399
// ====================================================
// 0xd399: db 0xa7 0xd3 0x62 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  b                 '
  
// ====================================================
// 0xd3ad: WORD '*MAP-OV' codep=0x83dd parp=0xd3b9
// ====================================================
// 0xd3b9: db 0x18 0x85 '  '
  
// ====================================================
// 0xd3bb: WORD 'OV/ST' codep=0x224c parp=0xd3c5
// ====================================================

void OV/ST()
{
  *MAP-OV UNK_0xf160 pp_FTRIG 099();
  SAVE-OV();
  
}


// ====================================================
// 0xd3d1: WORD 'JUMP-VO' codep=0x1ab5 parp=0xd3dd
// ====================================================
// 0xd3dd: db 0xeb 0xd3 0x9b 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xd3f1: WORD 'JUMP-OV' codep=0x83dd parp=0xd3fd
// ====================================================
// 0xd3fd: db 0x2d 0x95 '- '
  
// ====================================================
// 0xd3ff: WORD 'JUMP' codep=0x224c parp=0xd408
// ====================================================

void JUMP()
{
  JUMP-OV UNK_0xf4d1 
}


// ====================================================
// 0xd40e: WORD 'LAND-VO' codep=0x1ab5 parp=0xd41a
// ====================================================
// 0xd41a: db 0x28 0xd4 0xdf 0xd3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '(                   '
  
// ====================================================
// 0xd42e: WORD 'LAND-' codep=0x83dd parp=0xd438
// ====================================================
// 0xd438: db 0x99 0x90 '  '
  
// ====================================================
// 0xd43a: WORD 'TRY-L' codep=0x224c parp=0xd444
// ====================================================

void TRY-L()
{
  LAND- UNK_0xf50e 
}


// ====================================================
// 0xd44a: WORD 'TRY-L' codep=0x224c parp=0xd454
// ====================================================

void TRY-L()
{
  LAND- UNK_0xf532 
}


// ====================================================
// 0xd45a: WORD 'BTN-VOC' codep=0x1ab5 parp=0xd466
// ====================================================
// 0xd466: db 0x74 0xd4 0x1c 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 't                   '
  
// ====================================================
// 0xd47a: WORD 'BTN-OV' codep=0x83dd parp=0xd485
// ====================================================
// 0xd485: db 0x80 0x84 '  '
  
// ====================================================
// 0xd487: WORD 'OVFLT' codep=0x224c parp=0xd491
// ====================================================

void OVFLT()
{
  BTN-OV UNK_0xf517 
}


// ====================================================
// 0xd497: WORD 'CHKFLT' codep=0x1ab5 parp=0xd4a2
// ====================================================
// 0xd4a2: db 0xb0 0xd4 0x68 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  h                 '
  
// ====================================================
// 0xd4b6: WORD 'CHKFL' codep=0x83dd parp=0xd4c0
// ====================================================
// 0xd4c0: db 0x65 0x6f 'eo'
  
// ====================================================
// 0xd4c2: WORD '?FLIG' codep=0x224c parp=0xd4cc
// ====================================================

void ?FLIG()
{
  CHKFL UNK_0xf513 
}


// ====================================================
// 0xd4d2: WORD 'PM-VOC' codep=0x1ab5 parp=0xd4dd
// ====================================================
// 0xd4dd: db 0xeb 0xd4 0xa4 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '
  
// ====================================================
// 0xd4f1: WORD 'PM-OV' codep=0x83dd parp=0xd4fb
// ====================================================
// 0xd4fb: db 0x9d 0x77 ' w'
  
// ====================================================
// 0xd4fd: WORD 'PORTM' codep=0x224c parp=0xd507
// ====================================================

void PORTM()
{
  PM-OV UNK_0xf514 
}


// ====================================================
// 0xd50d: WORD 'PPIC' codep=0x224c parp=0xd516
// ====================================================

void PPIC()
{
  PM-OV UNK_0xf54d 
}


// ====================================================
// 0xd51c: WORD 'GAME' codep=0x1ab5 parp=0xd525
// ====================================================
// 0xd525: db 0x33 0xd5 0xdf 0xd4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '3                   '
  
// ====================================================
// 0xd539: WORD 'GAME-OV' codep=0x83dd parp=0xd545
// ====================================================
// 0xd545: db 0x64 0x3c 'd<'
  
// ====================================================
// 0xd547: WORD 'STARTGA' codep=0x224c parp=0xd553
// ====================================================

// ====================================================
// 0xd54f: WORD 'UNK_0xd551' codep=0xc147 parp=0xd551
// ====================================================

void STARTGA()
{
  GAME-OV UNK_0xf505 
}


// ====================================================
// 0xd559: WORD 'ERR!' codep=0x224c parp=0xd562
// ====================================================

void ERR!()
{
  GAME-OV UNK_0xf452 
}


// ====================================================
// 0xd568: WORD 'MERR' codep=0x224c parp=0xd571
// ====================================================

void MERR()
{
  Push(0xd562); MODULE();
  
}


// ====================================================
// 0xd579: WORD 'GAMEOPS' codep=0x224c parp=0xd585
// ====================================================

void GAMEOPS()
{
  GAME-OV UNK_0xf488 SAVE-OV();
  
}


// ====================================================
// 0xd58d: WORD 'GAMEOPM' codep=0x224c parp=0xd599
// ====================================================

void GAMEOPM()
{
  Push(0xd585); MODULE();
  
}


// ====================================================
// 0xd5a1: WORD 'BOSS' codep=0x224c parp=0xd5aa
// ====================================================

void BOSS()
{
  GAME-OV UNK_0xf4c1 
}


// ====================================================
// 0xd5b0: WORD 'DBS' codep=0x224c parp=0xd5b8
// ====================================================

void DBS()
{
  Push(0xd5aa); MODULE();
  
}


// ====================================================
// 0xd5c0: WORD 'LET-THE' codep=0x224c parp=0xd5cc
// ====================================================

void LET-THE()
{
  pp_ESC-EN 099();
  MOUNTA();
  Push(0xb5f1); MODULE();
  STARTER();
  pp_RELAXTI ON();
  MOUNTA();
  :TIMEST @ pp_TIMESTA !();
  pp_RELAXTI 099();
  STARTGA();
  
}

// 0xd5f0: db 0x00 ' '
  