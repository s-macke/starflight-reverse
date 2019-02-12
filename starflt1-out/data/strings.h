typedef struct { int offset; char* string } STRINGENTRY;

STRINGENTRY strings[]=
{
  { .offset=0x01c29b, .string="NORTH"}
  { .offset=0x00d42a, .string="GARGANTUAN"}
  { .offset=0x00d414, .string="HUMONGOUS"}
  { .offset=0x00d400, .string="MASSIVE"}
  { .offset=0x00d3df, .string="HUGE"}
  { .offset=0x00d3c8, .string="VERY LARGE"}
  { .offset=0x00d3b6, .string="LARGE"}
  { .offset=0x00d3a6, .string="BIG"}
  { .offset=0x00d394, .string="SMALL"}
  { .offset=0x00d383, .string="TINY"}
  { .offset=0x00d371, .string="BLACK"}
  { .offset=0x00d360, .string="GREY"}
  { .offset=0x00d34e, .string="WHITE"}
  { .offset=0x00d334, .string="MULTI-COLORED"}
  { .offset=0x00d31f, .string="LAVENDAR"}
  { .offset=0x00d309, .string="TURQUOISE"}
  { .offset=0x00d2f2, .string="LIME GREEN"}
  { .offset=0x00d2d7, .string="BROWNISH GREEN"}
  { .offset=0x00d2bc, .string="COPPER-COLORED"}
  { .offset=0x00d2aa, .string="BEIGE"}
  { .offset=0x00d298, .string="BROWN"}
  { .offset=0x00d287, .string="PINK"}
  { .offset=0x00d26e, .string="RUST-COLORED"}
  { .offset=0x00d25a, .string="MARROON"}
  { .offset=0x00d247, .string="PURPLE"}
  { .offset=0x00d234, .string="VIOLET"}
  { .offset=0x00d21e, .string="VERY BLUE"}
  { .offset=0x00d20d, .string="BLUE"}
  { .offset=0x00d1f6, .string="BLUE-GREEN"}
  { .offset=0x00d1e4, .string="GREEN"}
  { .offset=0x00d1c8, .string="YELLOWISH GREEN"}
  { .offset=0x00d1af, .string="LEMON YELLOW"}
  { .offset=0x00d19c, .string="YELLOW"}
  { .offset=0x00d17f, .string="YELLOWISH ORANGE"}
  { .offset=0x00d16c, .string="ORANGE"}
  { .offset=0x00d151, .string="REDDISH ORANGE"}
  { .offset=0x00d141, .string="RED"}
  { .offset=0x00d12b, .string="ATTACKING"}
  { .offset=0x00d117, .string="STUNNED"}
  { .offset=0x00d104, .string="EATING"}
  { .offset=0x00d0f1, .string="EATING"}
  { .offset=0x00d0db, .string="WANDERING"}
  { .offset=0x00d0c7, .string="SESSILE"}
  { .offset=0x00d0b4, .string="MOBILE"}
  { .offset=0x00d09f, .string="AIRBORNE"}
  { .offset=0x00d08a, .string="FLOATING"}
  { .offset=0x00d077, .string="FLYING"}
  { .offset=0x00d063, .string="LEAPING"}
  { .offset=0x00d04f, .string="JUMPING"}
  { .offset=0x00d03b, .string="HOPPING"}
  { .offset=0x00d027, .string="WALKING"}
  { .offset=0x00d014, .string="MOVING"}
  { .offset=0x00d000, .string="ROLLING"}
  { .offset=0x00cfe9, .string="CRAWLING"}
  { .offset=0x00cfd2, .string="SLITHERING"}
  { .offset=0x00cfbd, .string="CREEPING"}
  { .offset=0x00cfaa, .string="OOZING"}
  { .offset=0x00cf95, .string="DELICATE"}
  { .offset=0x00cf81, .string="WILLOWY"}
  { .offset=0x00cf6d, .string="SPINDLY"}
  { .offset=0x00cf5c, .string="THIN"}
  { .offset=0x00cf47, .string="GRACEFUL"}
  { .offset=0x00cf33, .string="SLENDER"}
  { .offset=0x00cf20, .string="NARROW"}
  { .offset=0x00cf0a, .string="ELONGATED"}
  { .offset=0x00cef8, .string="SQUAT"}
  { .offset=0x00cee6, .string="THICK"}
  { .offset=0x00ced5, .string="WIDE"}
  { .offset=0x00cec4, .string="FLAT"}
  { .offset=0x00ceae, .string="FLATTENED"}
  { .offset=0x00ce9d, .string="HAIR"}
  { .offset=0x00ce8d, .string="FUR"}
  { .offset=0x00ce7b, .string="ARMOR"}
  { .offset=0x00ce6a, .string="SKIN"}
  { .offset=0x00ce59, .string="HEAD"}
  { .offset=0x00ce48, .string="BARK"}
  { .offset=0x00ce36, .string="STALK"}
  { .offset=0x00ce25, .string="STEM"}
  { .offset=0x00ce14, .string="MANE"}
  { .offset=0x00ce02, .string="CREST"}
  { .offset=0x00cdf0, .string="SHELL"}
  { .offset=0x00cddf, .string="TAIL"}
  { .offset=0x00cdca, .string="BAZWANGO"}
  { .offset=0x00cdb8, .string="SNOUT"}
  { .offset=0x00cda6, .string="CILIA"}
  { .offset=0x00cd95, .string="FEET"}
  { .offset=0x00cd80, .string="BRANCHES"}
  { .offset=0x00cd6e, .string="VINES"}
  { .offset=0x00cd5b, .string="LEAVES"}
  { .offset=0x00cd49, .string="BULBS"}
  { .offset=0x00cd35, .string="BERRIES"}
  { .offset=0x00cd22, .string="FRUITS"}
  { .offset=0x00cd0e, .string="FLOWERS"}
  { .offset=0x00ccfb, .string="QUILLS"}
  { .offset=0x00cce9, .string="CLAWS"}
  { .offset=0x00ccd6, .string="PLUMES"}
  { .offset=0x00ccc1, .string="WHISKERS"}
  { .offset=0x00ccaf, .string="TEETH"}
  { .offset=0x00cc9c, .string="THORNS"}
  { .offset=0x00cc89, .string="SCALES"}
  { .offset=0x00cc73, .string="BILATERAL"}
  { .offset=0x00cc60, .string="RADIAL"}
  { .offset=0x00cc4a, .string="SPHERICAL"}
  { .offset=0x00cc34, .string="IRREGULAR"}
  { .offset=0x00cc1e, .string="AMORPHOUS"}
  { .offset=0x00cc00, .string="PATTERNED SURFACE"}
  { .offset=0x00cbd5, .string="SURFACE"}
  { .offset=0x00cbb7, .string="FEATHERED SURFACE"}
  { .offset=0x00cb9f, .string="EXOSKELETON"}
  { .offset=0x00cb8e, .string="WITH"}
  { .offset=0x00cb77, .string="AGGRESSION"}
  { .offset=0x00cb65, .string="LEVEL"}
  { .offset=0x00cb54, .string="MANY"}
  { .offset=0x00cb46, .string="."}
  { .offset=0x00cb37, .string="M."}
  { .offset=0x00cb27, .string="CM."}
  { .offset=0x00cb16, .string="TALL"}
  { .offset=0x00cb02, .string="ROUGHLY"}
  { .offset=0x00cae8, .string="APPROXIMATELY"}
  { .offset=0x00cad1, .string="ONE OF THE"}
  { .offset=0x00cabe, .string="IN THE"}
  { .offset=0x00caaf, .string="OR"}
  { .offset=0x00ca9a, .string="COULD BE"}
  { .offset=0x00ca7f, .string="REPRESENTED BY"}
  { .offset=0x00ca71, .string=","}
  { .offset=0x00ca5f, .string="BEING"}
  { .offset=0x00ca4e, .string="MANY"}
  { .offset=0x00ca3e, .string="ITS"}
  { .offset=0x00ca2c, .string="THEIR"}
  { .offset=0x00ca19, .string="ANIMAL"}
  { .offset=0x00ca09, .string="AND"}
  { .offset=0x00c9f7, .string="ABOUT"}
  { .offset=0x00c9e4, .string="AROUND"}
  { .offset=0x00c9d6, .string=" "}
  { .offset=0x00c9c1, .string="LIFEFORM"}
  { .offset=0x00c9ac, .string="CREATURE"}
  { .offset=0x00c99b, .string="SOME"}
  { .offset=0x00c98d, .string="A"}
  { .offset=0x00c97e, .string="AN"}
  { .offset=0x00c970, .string="S"}
  { .offset=0x00c960, .string="HAS"}
  { .offset=0x00c94f, .string="HAVE"}
  { .offset=0x00c940, .string="IT"}
  { .offset=0x00c92f, .string="THEY"}
  { .offset=0x00c91f, .string="ARE"}
  { .offset=0x00c910, .string="IS"}
  { .offset=0x00c8fe, .string="THERE"}
  { .offset=0x00c8eb, .string="SINEWY"}
  { .offset=0x00c8d9, .string="SHORT"}
  { .offset=0x00c8c8, .string="LONG"}
  { .offset=0x00c8b5, .string="STUBBY"}
  { .offset=0x00c898, .string="POWERFUL LOOKING"}
  { .offset=0x00c883, .string="MUSCULAR"}
  { .offset=0x00c86f, .string="JOINTED"}
  { .offset=0x00c855, .string="MULTI-JOINTED"}
  { .offset=0x00c83e, .string="MEMBRANOUS"}
  { .offset=0x00c82b, .string="SPINEY"}
  { .offset=0x00c817, .string="GNARLED"}
  { .offset=0x00c800, .string="PREHENSILE"}
  { .offset=0x00c7e6, .string="GELATINOUS"}
  { .offset=0x00c7d4, .string="RIGID"}
  { .offset=0x00c7bf, .string="FEATHERY"}
  { .offset=0x00c7ac, .string="CURVED"}
  { .offset=0x00c797, .string="SWEEPING"}
  { .offset=0x00c781, .string="INTRICATE"}
  { .offset=0x00c76e, .string="WEBBED"}
  { .offset=0x00c75b, .string="FLOPPY"}
  { .offset=0x00c745, .string="VESTIGIAL"}
  { .offset=0x00c72f, .string="BUTTERFLY"}
  { .offset=0x00c71f, .string="BAT"}
  { .offset=0x00c70b, .string="BULBOUS"}
  { .offset=0x00c6f7, .string="BULGING"}
  { .offset=0x00c6e2, .string="GLOBULAR"}
  { .offset=0x00c6ce, .string="POINTED"}
  { .offset=0x00c6ba, .string="PRONGED"}
  { .offset=0x00c6a5, .string="FLEXIBLE"}
  { .offset=0x00c693, .string="SHARP"}
  { .offset=0x00c67b, .string="RAZOR SHARP"}
  { .offset=0x00c668, .string="HOOKED"}
  { .offset=0x00c654, .string="CONICAL"}
  { .offset=0x00c642, .string="BLUNT"}
  { .offset=0x00c62f, .string="SPIKED"}
  { .offset=0x00c615, .string="SPIRAL-SHAPED"}
  { .offset=0x00c5fd, .string="RETRACTIBLE"}
  { .offset=0x00c5eb, .string="SABER"}
  { .offset=0x00c5d6, .string="ARMOURED"}
  { .offset=0x00c5c3, .string="CUPPED"}
  { .offset=0x00c5af, .string="SPLAYED"}
  { .offset=0x00c598, .string="PROTRUDING"}
  { .offset=0x00c587, .string="OVAL"}
  { .offset=0x00c571, .string="OCTAGONAL"}
  { .offset=0x00c55f, .string="ROUND"}
  { .offset=0x00c54c, .string="CUBOID"}
  { .offset=0x00c536, .string="SCALLOPED"}
  { .offset=0x00c51a, .string="FINELY SCULPTED"}
  { .offset=0x00c503, .string="PUPIL-LESS"}
  { .offset=0x00c4ee, .string="DEEP SET"}
  { .offset=0x00c4d7, .string="TRIANGULAR"}
  { .offset=0x00c4c2, .string="CIRCULAR"}
  { .offset=0x00c4af, .string="GAPING"}
  { .offset=0x00c499, .string="CAVERNOUS"}
  { .offset=0x00c483, .string="HEXAGONAL"}
  { .offset=0x00c470, .string="SQUARE"}
  { .offset=0x00c45b, .string="DETAILED"}
  { .offset=0x00c443, .string="CYLINDRICAL"}
  { .offset=0x00c42b, .string="RECTANGULAR"}
  { .offset=0x00c416, .string="BRANCHED"}
  { .offset=0x00c400, .string="ROOT-LIKE"}
  { .offset=0x00c3e7, .string="STALK-LIKE"}
  { .offset=0x00c3d1, .string="STEM-LIKE"}
  { .offset=0x00c3bb, .string="WHIP-LIKE"}
  { .offset=0x00c3a5, .string="FANG-LIKE"}
  { .offset=0x00c38f, .string="LEAF-LIKE"}
  { .offset=0x00c37a, .string="FIN-LIKE"}
  { .offset=0x00c363, .string="BLADE-LIKE"}
  { .offset=0x00c34c, .string="THORN-LIKE"}
  { .offset=0x00c335, .string="TALON-LIKE"}
  { .offset=0x00c31f, .string="HOLE-LIKE"}
  { .offset=0x00c308, .string="SLASH-LIKE"}
  { .offset=0x00c2e9, .string="IRREGULARLY-SHAPED"}
  { .offset=0x00c2d2, .string="FAN-SHAPED"}
  { .offset=0x00c2ba, .string="TEAR-SHAPED"}
  { .offset=0x00c2a2, .string="DOME-SHAPED"}
  { .offset=0x00c288, .string="SPHERE-SHAPED"}
  { .offset=0x00c271, .string="ROD-SHAPED"}
  { .offset=0x00c258, .string="SPEAR-SHAPED"}
  { .offset=0x00c23e, .string="NEEDLE-SHAPED"}
  { .offset=0x00c224, .string="SAUCER-SHAPED"}
  { .offset=0x00c20c, .string="DISK-SHAPED"}
  { .offset=0x00c1f4, .string="DISH-SHAPED"}
  { .offset=0x00c1dc, .string="BOWL-SHAPED"}
  { .offset=0x00c1c3, .string="HEART-SHAPED"}
  { .offset=0x00c1a8, .string="DIAMOND-SHAPED"}
  { .offset=0x00c18d, .string="PYRAMID-SHAPED"}
  { .offset=0x00c17c, .string="SOFT"}
  { .offset=0x00c16a, .string="GUMMY"}
  { .offset=0x00c158, .string="GOOEY"}
  { .offset=0x00c145, .string="STICKY"}
  { .offset=0x00c131, .string="VISCOUS"}
  { .offset=0x00c11c, .string="STEAMING"}
  { .offset=0x00c107, .string="BLOOPING"}
  { .offset=0x00c0f4, .string="SMOOTH"}
  { .offset=0x00c0e2, .string="ROUGH"}
  { .offset=0x00c0cb, .string="WIND-SWEPT"}
  { .offset=0x00c0b7, .string="POWDERY"}
  { .offset=0x00c0a7, .string="WET"}
  { .offset=0x00c092, .string="GRAVELLY"}
  { .offset=0x00c079, .string="FINE-GRAINED"}
  { .offset=0x00c067, .string="ROCKY"}
  { .offset=0x00c04f, .string="CRYSTALLINE"}
  { .offset=0x00c03c, .string="SHINEY"}
  { .offset=0x00c028, .string="CRACKED"}
  { .offset=0x00c013, .string="DRIPPING"}
  { .offset=0x00c000, .string="GLASSY"}
  { .offset=0x00bfe1, .string="JAGGED"}
  { .offset=0x00bfcf, .string="SLICK"}
  { .offset=0x00bfbc, .string="BROKEN"}
  { .offset=0x00bfa9, .string="CRUSTY"}
  { .offset=0x00bf98, .string="DAMP"}
  { .offset=0x00bf85, .string="VEINED"}
  { .offset=0x00bf73, .string="BUMPY"}
  { .offset=0x00bf60, .string="COARSE"}
  { .offset=0x00bf4e, .string="SANDY"}
  { .offset=0x00bf3b, .string="POCKED"}
  { .offset=0x00bf26, .string="STRIATED"}
  { .offset=0x00bf14, .string="DUSTY"}
  { .offset=0x00bf01, .string="CRAGGY"}
  { .offset=0x00beee, .string="GNARLY"}
  { .offset=0x00bedb, .string="THORNY"}
  { .offset=0x00beca, .string="OILY"}
  { .offset=0x00beb6, .string="FIBROUS"}
  { .offset=0x00bea3, .string="SPONGY"}
  { .offset=0x00be93, .string="DRY"}
  { .offset=0x00be7e, .string="LEATHERY"}
  { .offset=0x00be6b, .string="FLESHY"}
  { .offset=0x00be5a, .string="HARD"}
  { .offset=0x00be41, .string="PLASTIC-LIKE"}
  { .offset=0x00be2f, .string="HORNY"}
  { .offset=0x00be1b, .string="RUBBERY"}
  { .offset=0x00be09, .string="WARTY"}
  { .offset=0x00bdf7, .string="HAIRY"}
  { .offset=0x00bde5, .string="FUZZY"}
  { .offset=0x00bdd1, .string="BRISTLY"}
  { .offset=0x00bdbc, .string="SERRATED"}
  { .offset=0x00bda7, .string="METALLIC"}
  { .offset=0x00bd91, .string="SHIVERING"}
  { .offset=0x00bd7d, .string="MUCOUSY"}
  { .offset=0x00bd6b, .string="LEAFY"}
  { .offset=0x00bd55, .string="CHITENOUS"}
  { .offset=0x00bd43, .string="BONEY"}
  { .offset=0x00bd32, .string="DULL"}
  { .offset=0x00bd20, .string="FILMY"}
  { .offset=0x00bd0e, .string="DOWNY"}
  { .offset=0x00bcfd, .string="WAXY"}
  { .offset=0x00bce9, .string="KNURLED"}
  { .offset=0x00bcd6, .string="MATTED"}
  { .offset=0x00bcc4, .string="CURLY"}
  { .offset=0x00bcb0, .string="TANGLED"}
  { .offset=0x00bc9e, .string="WIREY"}
  { .offset=0x00bc8a, .string="FLOWING"}
  { .offset=0x00bc77, .string="RUSTED"}
  { .offset=0x00bc62, .string="THATCHED"}
  { .offset=0x00bc52, .string="ARM"}
  { .offset=0x00bc3e, .string="STINGER"}
  { .offset=0x00bc29, .string="TENTACLE"}
  { .offset=0x00bc13, .string="PSEUDOPOD"}
  { .offset=0x00bc00, .string="PINCER"}
  { .offset=0x00bbe0, .string="MOUTH"}
  { .offset=0x00bbd0, .string="LEG"}
  { .offset=0x00bbc0, .string="EYE"}
  { .offset=0x00bbaa, .string="EYE STALK"}
  { .offset=0x00bb95, .string="EYE SPOT"}
  { .offset=0x00bb7c, .string="COMPOUND EYE"}
  { .offset=0x00bb69, .string="FEELER"}
  { .offset=0x00bb54, .string="MANDIBLE"}
  { .offset=0x00bb3f, .string="ACID SAC"}
  { .offset=0x00bb28, .string="POISON SAC"}
  { .offset=0x00bb04, .string="FENDIBULAR EXTREMULATOR"}
  { .offset=0x00baf1, .string="HOOTER"}
  { .offset=0x00bae0, .string="TATA"}
  { .offset=0x00bac9, .string="PROJECTION"}
  { .offset=0x00bab9, .string="EAR"}
  { .offset=0x00baa2, .string="PROTRUSION"}
  { .offset=0x00ba8c, .string="FLOAT SAC"}
  { .offset=0x00ba7b, .string="WING"}
  { .offset=0x00ba6a, .string="HORN"}
  { .offset=0x00ba59, .string="TUSK"}
  { .offset=0x00ba48, .string="BEAK"}
  { .offset=0x00ba31, .string="SHIMMERING"}
  { .offset=0x00ba19, .string="TRANSLUCENT"}
  { .offset=0x00ba01, .string="LUMINESCENT"}
  { .offset=0x00b9ed, .string="GLOWING"}
  { .offset=0x00b9da, .string="BRIGHT"}
  { .offset=0x00b9c5, .string="BLINDING"}
  { .offset=0x00b9b3, .string="LIGHT"}
  { .offset=0x00b99f, .string="GREYISH"}
  { .offset=0x00b98e, .string="DARK"}
  { .offset=0x00b96e, .string="OMNIVEROUS PRODUCER"}
  { .offset=0x00b959, .string="OMNIVORE"}
  { .offset=0x00b938, .string="CARNIVEROUS PRODUCER"}
  { .offset=0x00b922, .string="CARNIVORE"}
  { .offset=0x00b901, .string="HERBIVEROUS PRODUCER"}
  { .offset=0x00b8eb, .string="HERBIVORE"}
  { .offset=0x00b8d6, .string="PRODUCER"}
  { .offset=0x00b8ba, .string="CARPET LIFEFORM"}
  { .offset=0x00b8a1, .string="ANEMONE-LIKE"}
  { .offset=0x00b88b, .string="EWOK-LIKE"}
  { .offset=0x00b871, .string="STARFISH-LIKE"}
  { .offset=0x00b85d, .string="FUNGOID"}
  { .offset=0x00b847, .string="ROCK-LIKE"}
  { .offset=0x00b82f, .string="TURTLE-LIKE"}
  { .offset=0x00b817, .string="SPIDER-LIKE"}
  { .offset=0x00b800, .string="SNAKE-LIKE"}
  { .offset=0x00b7d9, .string="SNAIL-LIKE"}
  { .offset=0x00b7c3, .string="SLUG-LIKE"}
  { .offset=0x00b7ab, .string="RODENT-LIKE"}
  { .offset=0x00b795, .string="REPTILIAN"}
  { .offset=0x00b77f, .string="BEAR-LIKE"}
  { .offset=0x00b768, .string="PLANT-LIKE"}
  { .offset=0x00b752, .string="INSECTOID"}
  { .offset=0x00b73d, .string="HUMANOID"}
  { .offset=0x00b723, .string="DINOSAUR-LIKE"}
  { .offset=0x00b70d, .string="BIRD-LIKE"}
  { .offset=0x00b6f3, .string="ANTELOPE-LIKE"}
  { .offset=0x00b6da, .string="BALLOON-LIKE"}
  { .offset=0x00b6c4, .string="TREE-LIKE"}
  { .offset=0x00b6af, .string="AMOEBOID"}
  { .offset=0x00b699, .string="GROTESQUE"}
  { .offset=0x00b67e, .string="INSANELY GREAT"}
  { .offset=0x00b668, .string="RIGHTEOUS"}
  { .offset=0x00b651, .string="INCREDIBLE"}
  { .offset=0x00b63b, .string="BEAUTIFUL"}
  { .offset=0x00b625, .string="SEDUCTIVE"}
  { .offset=0x00b610, .string="GORGEOUS"}
  { .offset=0x00b5f9, .string="FUNKADELIC"}
  { .offset=0x00b5e3, .string="BODACIOUS"}
  { .offset=0x00b5cd, .string="UPLIFTING"}
  { .offset=0x00b5b8, .string="EDIFYING"}
  { .offset=0x00b5a4, .string="AWESOME"}
  { .offset=0x00b588, .string="TOTALLY RADICAL"}
  { .offset=0x00b571, .string="OUTRAGEOUS"}
  { .offset=0x00b55a, .string="NAUSEATING"}
  { .offset=0x00b548, .string="GRODY"}
  { .offset=0x00b535, .string="GROOVY"}
  { .offset=0x00b523, .string="MONDO"}
  { .offset=0x00b50e, .string="BITCHIN'"}
  { .offset=0x00b4f6, .string="SUBFREEZING"}
  { .offset=0x00b4e2, .string="FURNACE"}
  { .offset=0x00b4ce, .string="SEARING"}
  { .offset=0x00b4b9, .string="TROPICAL"}
  { .offset=0x00b4a3, .string="TEMPERATE"}
  { .offset=0x00b490, .string="ARCTIC"}
  { .offset=0x00b479, .string="NORTH WEST"}
  { .offset=0x00b468, .string="WEST"}
  { .offset=0x00b451, .string="SOUTH WEST"}
  { .offset=0x00b43f, .string="SOUTH"}
  { .offset=0x00b428, .string="SOUTH EAST"}
  { .offset=0x00b417, .string="EAST"}
  { .offset=0x00b400, .string="NORTH EAST"}
  { .offset=0x00b3db, .string="NORTH"}
  { .offset=0x0094a1, .string="ENTRY 4 CONT.- THIS CRYSTAL PLANET WAS THEIR LAST DEFENSE. I CAN HARDLY BLAME THEM. CARBON BASED LIFE MUST HAVE SEEMED SOMETHING LIKE A VIRUS TO THEM. JUST THE SAME, I HOPE THE EXPLOSION WORKS. IT LOOKS LIKE AT THIS POINT IT'S US OR THEM. MCCONNELL OUT."}
  { .offset=0x009400, .string="ENTRY 4 CONT.- THEIR METABOLISM IS SO MUCH SLOWER THAN OURS THEY LIVE IN AN ENTIRELY DIFFERENT TIME FRAMEWORK. I DON'T THINK THEY EVEN KNOW WE ARE SENTIENT. I BELIEVE IT WAS ONLY BECAUSE OF A LINK THRU THE CRYSTAL PLANET THAT CONTACT WAS MADE AT ALL."}
  { .offset=0x00933f, .string="ENTRY 4 CONT.- I CAN HARDLY BELIEVE IT! THOSE WEIRD LUMPS ARE ACTUALLY INTELLIGENT LIFE. THE ANCIENTS ARE ENDURIUM! AND WE HAVE SPENT HUNDREDS OF YEARS HUNTING THEM TO BURN FOR FUEL IN OUR SHIPS."}
  { .offset=0x0092a6, .string="ENTRY 4 CONT. - I WISH THERE WAS SOME WAY FOR ME TO COMMUNICATE WHAT I HAVE FOUND. THE EXPLOSION IS SET FOR T-MINUS 40 MINUTES. IN THE EVENT THAT THE CRYSTAL PLANET IS NOT DESTROYED, I CAN ONLY HOPE THAT THIS LOG IS FOUND BY SOMEONE."}
  { .offset=0x009222, .string="ENTRY 4 - I HAVE JUST HAD AN ASTOUNDING EXPERIENCE! I CAN HARDLY BELIEVE IT BUT I SEEM TO HAVE MADE TELEPATHIC CONTACT WITH THE ANCIENTS. THEY ARE HERE! ON THE CRYSTAL PLANET, CONTROLLING IT!"}
  { .offset=0x0091a8, .string="ENTRY 3 - I HAVE REACHED THE CONTROL CENTER AND HAVE SET THE CHARGES. IT APPEARS TO BE A MASSIVE RUIN OF THE ANCIENTS. THE QUEER CRYSTALLINE LUMPS OF ENDURIUM ARE EVERYWHERE HERE."}
  { .offset=0x009146, .string="ENTRY 2 CONT. - I AM THEREFORE WRITING IN THIS LOG AS PLANNED, AND WILL ATTEMPT TO FIND A SAFE PLACE FOR IT BEFORE THE EXPLOSION."}
  { .offset=0x0090b9, .string="ENTRY 2 - IT WOULD SEEM THAT THE ELECTRO-MAGNETIC FIELD AROUND THE CRYSTAL PLANET IS, IN FACT, BLOCKING COMMUNICATIONS SINCE IT HAS BEEN AN HOUR AND I HAVE STILL RECEIVED NO TRANSMISSION FROM CRYSTAL BASE 1."}
  { .offset=0x009000, .string="LOG ENTRY, 8-8-3382, COMMANDER MCCONNELL, ENTRY 1 - I HAVE SUCCESSFULLY TELEPORTED TO THE CRYSTAL PLANET! I AM DIZZY AND HAVE EXPERIENCED A PROFOUND SENSE OF DISORIENTAION BUT OTHER THAN THAT I SEEM TO BE FINE. THE CONTROL NEXUS IS VISIBLE FROM HERE."}
  { .offset=0x008f6a, .string="LASTLY, A BOMB OF SUFFICIENT EXPLOSIVE POWER IS REQUIRED. THE ACTUAL FORCE NECESSARY IS UNKNOWN BUT OUR BEST ESTIMATES INDICATE SOMETHING ON THE ORDER OF BEVA-TONS."}
  { .offset=0x008f06, .string="PLANET IN SYSTEM 20,198. UNFORTUNATELY THIS IS DEEP IN UHLEK SPACE. THE CRYSTAL PLANET IS ONLY VULNERABLE AT THE CONTROL NEXUS."}
  { .offset=0x008e67, .string="THIS IS IN THE POSSESSION OF THE VELOX AND IS KNOWN TO THEM AS THE SMALL EGG. THE SECOND DEVICE IS THE CRYSTAL CONE. THIS IS NEEDED TO IDENTIFY FROM ORBIT THE LOCATION OF THE CONTROL NEXUS, AND IS KNOWN TO BE AT COORDINATES 29S X 55W ON THE FIRST"}
  { .offset=0x008dbf, .string="RESEARCH COUNCIL RECOMMENDATION 5-5-3386 - ...THEREFORE IT IS OUR FINDING THAT THE ONLY EFFECTIVE MEANS OF DESTROYING THE CRYSTAL PLANET IS WITH THE USE OF 3 DEVICES. THE FIRST OF THESE, THE CRYSTAL ORB, IS NEEDED TO NULLIFY THE DEFENSES OF THE PLANET."}
  { .offset=0x008d27, .string="AT EXACTLY 12 HRS AND 11 MINUTES AFTER HIS DEPARTURE WE WITNESSED AN EXPLOSION ON THE PLANET'S SURFACE. WE ARE NOW SENDING OUT DRONES TO TEST THE DEFENSES OF THE CRYSTAL PLANET IN AN ATTEMPT TO ASCERTAIN THE EFFECT OF THE EXPLOSION..."}
  { .offset=0x008c9c, .string="COMMUNICATION TRANSCRIPT - CRYSTAL BASE 1 TO AKTERON INSTITUTE, 8-8-3382   ...BEEN 14 HOURS SINCE COMMANDER MCCONNELL WAS SENT DOWN. AT NO POINT HAVE WE RECEIVED ANY COMMUNICATION FROM HIM."}
  { .offset=0x008c00, .string="HE WILL LOCATE AND DESTROY THE CONTROL CENTER OF THE CRYSTAL PLANET. POTENTIAL PROBLEMS INCLUDE - TELPORTATION RELIABILITY, INSUFFICIENT EXPLOSIVE POWER, COMMUNICATIONS THROUGH THE MAGNETIC FIELD GENERATED BY THE PLANET, LOCATION OF..."}
  { .offset=0x008b43, .string="BECAUSE OF THE PROBLEMS INVOLVED WITH A TELEPORTATION OF THIS DISTANCE WE WILL NOT BE ABLE TO RETRIEVE THE OPERATIVE. THE VOLUNTEER WILL BE SENT IN WITH A NUCLEAR EXPLOSIVE. IF POSSIBLE HE WILL STAY IN COMMUNICATION WITH THE STARBASE."}
  { .offset=0x008a9e, .string="REPORT - PROJECT TELEPORT, 1-2-3380 - ...IN SHORT WE HAVE DEVISED A SCHEME TO TELEPORT AN OPERATIVE FROM A SPECIALLY BUILT STARBASE (WHICH WILL BE KNOWN AS CRYSTAL BASE 1) TO THE SURFACE OF THE CRYSTAL PLANET."}
  { .offset=0x008a58, .string="SIGN - RONALD PETER GAAL MEMORIAL RESEARCH STATION."}
  { .offset=0x0089db, .string="THEIR BOMB BLEW OUT THE ENTIRE AFT QUARTER SECTION OF THE SHIP. I DON'T KNOW HOW WE MADE IT DOWN TO THE SURFACE IN THAT DEFECTIVE POD. I JUST HOPE OUR LUCK HOLDS OUT. CAPTAIN OUT."}
  { .offset=0x008940, .string="THE MECHANS ARE CURRENTLY IN PREPARATION PHASE CODE BLUE. OUR ARRIVAL WOULD HAVE INITIATED CODE RED, AND WE WOULD HAVE TAKEN CONTROL OF THE MECHANS. I BELIEVE OUR SHIP WAS SABOTAGED BY THE LAYTONITES, DAMN THEM. HALF OF MY CREW IS DEAD."}
  { .offset=0x00888f, .string="CAPTAIN'S LOG ENTRY - OCTOBER 31, 3480 - WE HAVE MANAGED TO SET UP A CAMP OF SORTS HERE, AND HAVE ENOUGH SUPPLIES TO KEEP US ALIVE FOR SEVERAL MONTHS. WE WERE ON OUR WAY TO ESTABLISH THE NOAH 9 COLONY WORLD OF 'HEAVEN' WHEN THE SHIP BLEW."}
  { .offset=0x008800, .string="RECONNAISSANCE REPORT - TO OFFENSIVE HEADQUARTERS AT 56N X 16W ON MARDAN 2 - FIGHTING BETWEEN THE VELOX AND GAZURTOID IS STILL HEATED. WE HAVE BEEN KEEPING A LOW PROFILE AND..."}
  { .offset=0x00871f, .string="INTELLIGENCE COMMUNICATION - ...SHIP WAS ATTACKED BY THE GAZURTOID. ALL CREW WERE KILLED AND THE NEW CLOAKING DEVICE WAS STOLEN. A PROBE WAS ABLE TO TRACK THEIR SHIP'S TACHYON TRAIL TO THE SYSTEM 68,66. OTHER THAN THAT WE DON'T..."}
  { .offset=0x00867f, .string="REPORT - TO COLONY CONTROL AT 16S X 20W , PLANET 4, SYSTEM 118,146 - DUE TO THE INCREASED DEMAND FOR HYPER-TRITICALE AND A RECENT INFESTATION OF SMALL FURRY CREATURES WHICH HAVE DEPLETED OUR STOCK WE..."}
  { .offset=0x008601, .string="MICROFILM - ...REASON TO BELIEVE THERE IS A BLACK EGG DEVICE IN SOME PHLEGMAK RUINS AT 52N X 16E ON THE THIRD PLANET OF SYSTEM 238,189..."}
  { .offset=0x008597, .string="AMIDST PILES OF ALIEN BOOKS SOME WRITING FROM THE OLD EMPIRE - ...THE PYTHAGORAS CONSTELLATION AT 216,87..."}
  { .offset=0x00853b, .string="THE ONLY THING DECIPHERABLE IN SOME ALIEN WRITINGS ARE PLANETARY COORDINATES 12N X 32E ."}
  { .offset=0x0084b8, .string="WRITING IN A VARIANT OF OLD EMPIRE ENGLISH - ...HARRISON HAS LANDED AND BUILT STRUCTURES AT 44S X 137W . TO ENSURE OUR SAFETY WE MUST REPORT HIM TO THE EMPIRE."}
  { .offset=0x008400, .string="NOTES - ...INFORMATION HAS SUCCESSFULLY PINPOINTED THE TESSERACT ENERGY ENHANCER AND THE RED CYLINDER ANCIENT-RUIN LOCATER DEVICE AT 15N X 44W ON PLANET 5 OF SYSTEM 18,50 , AND AT 59N X 64W ON PLANET 3 OF SYSTEM 112,200 RESPECTIVELY..."}
  { .offset=0x0082db, .string="INSTITUTE RESEARCH REPORT TO ELOWAN HOMEWORLD BASE 60S X 45E  - WE HAVE ASCERTAINED THAT THE DEAD ZONE IS COREWARD OF THE X-COORDINATE 200. WE HAVE ALSO DETERMINED THAT THE CAUSE OF THE FLARES IS SOMEWHERE COREWARD AND UPSPIN OF OUR PRESENT LOCATION..."}
  { .offset=0x008260, .string="NEWSPAPER - ... OF THE EMPIRE NOW SUSPECT THAT HARRISON'S BASE IS HERE ON NEW SCOTLAND AND THAT HIS TROOPS ARE SECRETED HERE AMONGST OUR POPULATION..."}
  { .offset=0x0081ee, .string="PAPERS - HARRISON HAS ONCE AGAIN BEEN SUCCESSFUL IN HIS LATEST RAID. THIS TIME THE ATTACK WAS ON SIX EMPIRE CARGO SHIPS BOUND FOR..."}
  { .offset=0x00818f, .string="ORDERS - ...REPORT IMMEDIATELY TO BASE 59N X 22E FOR NEW ORDERS FROM HARRISON. THE NEXT..."}
  { .offset=0x0080e3, .string="REPORT - ... HAVE FINALLY LOCATED HARRISON'S BASE OF OPERATIONS ON NEW SCOTLAND, AND ONCE AGAIN HE'S A STEP AHEAD OF US. WE BELIEVE HE MAY HAVE RELOCATED AT 44S X 137W ON THE FIRST PLANET OF SYSTEM 81,98. WE WILL PROCEED TO..."}
  { .offset=0x008089, .string="COORDINATE LISTING - ... AT 59N X 22E, BASE 2 AT 54N X 13E DOMICILE AT..."}
  { .offset=0x008043, .string="SOME ARCANE AND INDECIPHERABLE PHLEGMAK WRITING."}
  { .offset=0x008000, .string="SIGN - MARDAN 4 MINING STATION NO. 244"}
  { .offset=0x007fb9, .string="SIGN - MARDAN 4 MINING STATION NO. 17"}
  { .offset=0x007f77, .string="SIGN - MARDAN 4 MINING STATION NO. 82"}
  { .offset=0x007f14, .string="REQUEST - ...MINING STATIONS 25 THROUGH 158 ON PLANET 4 REQUEST IMMEDIATE SUPPLIES. WE ARE..."}
  { .offset=0x007eb3, .string="NOTICE - TO ALL PERSONNEL - EARTH BASE ONE, AT 12N X 104W IS TEMPORARILY QUARANTINED DUE TO..."}
  { .offset=0x007e4d, .string="LETTER - ...HEREBY REQUEST THAT THE RESEARCHERS AT THE MARS POLAR STATION BE DIRECTED TO LOOK INTO THIS AND ..."}
  { .offset=0x007e08, .string="SIGN - STARFLIGHT NAVIGATIONAL RESEARCH STATION"}
  { .offset=0x007d51, .string="NEWSPAPER APRIL 1, 3465 - A REPRESENTATIVE FROM CMIS, CHRISTIAN MISSIONARIES IN SPACE, REPORTS THE SUCCESSFUL CONVERSION OF AN ENTIRE PLANET OF QUASI-HUMANOIDS IN THE OMEGA SECTOR. 'ONCE AGAIN WE HAVE SAVED A RACE FROM THEIR NATIVE CULTURAL DEPRAVITY.'"}
  { .offset=0x007ca2, .string="NEWSPAPER - FEB. 8, 3465 - ...THE DEATH OF JOHNNY BEAVER MARKED THE EXTINCTION OF THE LAST ANIMAL SPECIES OTHER THAN MAN ON EARTH. THE ENVIRONMENTAL PROTECTION AGENCY WAS FORCED TO CLOSE DOWN DUE TO THE LACK OF ANY ENVIRONMENT TO PROTECT."}
  { .offset=0x007c00, .string="NEWSPAPER - NOVEMBER 20, 3450 - ...THE EQUAL RIGHTS AMENDMENT FOR ANDROIDS WAS FINALLY RATIFIED LAST FRIDAY. THERE IS STILL SUBSTANTIAL CONTROVERSY, HOWEVER, OVER THE PROPOSED EQUAL RIGHTS AMENDMENT FOR WOMEN."}
  { .offset=0x007b09, .string="NEWSPAPER - 3404 - LOVELY LUNAR LANSCAPES. OWN YOUR OWN HOME IN THOSE FINAL YEARS AFTER RETIREMENT. LIVE IN QUIET SERENITY BY THE SEA OF TRANQUILITY. CRATERSIDE HOMES ARE NOW AVAILABLE AND START AT ONLY 699,000,000. SENIOR CITIZENS 200 YRS AND UP ONLY."}
  { .offset=0x007a55, .string="ANCIENT HISTORY TEXT BOOK - ...IN PRIMITIVE SOCIETIES IT BECAME POPULAR FOR A SHORT TIME TO SIT COUNTLESS HOURS IN FRONT OF 2 DIMENSIONAL PHOSPHOR SCREENS AND LIVE OUT FANTASIES. MANY HISTORIANS BELIEVE THIS ACTIVITY MARKED THE DOWNFALL OF CIVILIZATION."}
  { .offset=0x007a00, .string="SIGN -  FIRST CHURCH OF THE LAST LAUGH. TODAY'S SERMON - SO FAR, SO WHAT?"}
  { .offset=0x007986, .string="MAGAZINE - MAY 3, 3450 - IN AN INTERVIEW YESTERDAY GEORGE SCHMENGE, THE DONOR FOR THE FIRST SUCCESSFUL BRAIN TRANSPLANT HAD LITTLE TO SAY."}
  { .offset=0x0078f5, .string="NEWSPAPER - MARCH 22, 3477 - NEW GOVERNMENT TAX HIKE TO GO INTO EFFECT. EFFECTIVE THIS APRIL MIDDLE INCOME FAMILIES CAN EXPECT TO PAY 260% OF THEIR ANNUAL INCOME IN TAXES."}
  { .offset=0x007897, .string="NEWSPAPER - JAN 28, 3478 - SCIENTISTS EXPECT CANCER CURE BREAKTHROUGH ANY DAY..."}
  { .offset=0x007800, .string="NEWSPAPER - JULY 1, 3476 - THE EMPEROR OF THE UNITED STATES ANNOUNCED THAT THE ROYAL FAMILY WILL BE ON HAND AT THIS YEAR'S 17TH CENTENNIAL CELEBRATION TO BE HELD IN THE CAPITOL AT DISNEYLAND."}
  { .offset=0x007769, .string="CORNERSTONE INSCRIPTION - BEN AND ANNA'S ACADEMY OF INDEPENDENT THINKING"}
  { .offset=0x0076b7, .string="LOG - ...PEOPLE ARE PANICKING. THE SOLAR FLARES ARE INTENSIFYING. THE BEST ESTIMATES GIVE US 3 DAYS AT THE OUTSIDE. LOG ENTRY 2-28-3480 SURFACE TEMP. IS AT 150 DEGREES C., ONLY BEING THIS FAR UNDERGROUND HAS KEPT US ALIVE THIS LONG..."}
  { .offset=0x00764a, .string="INVOICE - ...SECOND SHIPMENT OF IRIDIUM TO ARRIVE AT 56N X 16W H.Q. ON MARDAN 2 NO LATER THAN THE THIRD DAY OF..."}
  { .offset=0x0075ce, .string="THIS AWARD INCLUDES A SPECIAL BONUS OF 500,000 MU WHEN YOU RETURN TO STARPORT. THANK YOU FOR SAVING EVERYTHING THAT WE HOLD DEAR. -- LEIGH V. MALONE, CHAIRMAN OF INTERSTEL. (END TRANSMISSION)"}
  { .offset=0x01e624, .string="SNOW AND ICE"}
  { .offset=0x01e63c, .string="BLACK AND STAR-FILLED."}
  { .offset=0x01e65e, .string="CRATERED ROCK AND DUST"}
  { .offset=0x01e680, .string="SAND"}
  { .offset=0x01e690, .string="ROCK AND DIRT"}
  { .offset=0x01e6a9, .string="CRACKED PLAINS AND HILLS OF"}
  { .offset=0x01e6d0, .string="VOLCANIC ROCK, STEAMING VENTS,"}
  { .offset=0x01e6fa, .string="BOILING POOLS AND FLOWING LAVA"}
  { .offset=0x01e724, .string="ROCKY SAND"}
  { .offset=0x01e73a, .string="PEBBLY SAND"}
  { .offset=0x01e751, .string="POWDERY SAND"}
  { .offset=0x01e769, .string="COARSE SAND"}
  { .offset=0x01e780, .string="OCEANS AND "}
  { .offset=0x01e797, .string="SMOOTH AND FEATURELESS"}
  { .offset=0x01e7b9, .string="DARK GREY"}
  { .offset=0x01e7ce, .string="BLUE TINTED"}
  { .offset=0x01e7e5, .string="LIGHT GREY"}
  { .offset=0x01e800, .string="GREEN TINTED"}
  { .offset=0x01e818, .string="YELLOWISH"}
  { .offset=0x01e82d, .string="RED TINTED"}
  { .offset=0x01e843, .string="REDDISH"}
  { .offset=0x01e856, .string="YELLOW TINTED"}
  { .offset=0x01e86f, .string="BROWNISH"}
  { .offset=0x01e883, .string="MUDDY BROWN"}
  { .offset=0x01e89a, .string="DARK BLUE"}
  { .offset=0x01e8af, .string="ORANGEISH"}
  { .offset=0x01e8c4, .string="PURPLEISH"}
  { .offset=0x01e8d9, .string="GREENISH"}
  { .offset=0x01e8ed, .string="BLUEISH"}
  { .offset=0x01e900, .string="MOSS-LIKE"}
  { .offset=0x01e915, .string="GRASS-LIKE"}
  { .offset=0x01e92b, .string="LICHEN-LIKE"}
  { .offset=0x01e942, .string="GELATINOUS"}
  { .offset=0x01e958, .string="COVERED IN PLACES BY A"}
  { .offset=0x01e97a, .string="WITH "}
  { .offset=0x01e98b, .string="IT IS RAINING HEAVILY."}
  { .offset=0x01e9ad, .string="IT IS OVERCAST."}
  { .offset=0x01e9c8, .string="IT IS SNOWING LIGHTLY."}
  { .offset=0x01e9ea, .string="IT IS MISTY."}
  { .offset=0x01ea02, .string="YOU ARE IN AN ELECTRICAL STORM."}
  { .offset=0x01ea2d, .string="THE GROUND IS SHAKING AND RUMBLING."}
  { .offset=0x01ea5c, .string="IT IS SNOWING HEAVILY."}
  { .offset=0x01ea7e, .string="IT IS HAILING."}
  { .offset=0x01ea98, .string="YOU ARE IN A THUNDER STORM."}
  { .offset=0x01eabf, .string="YOU ARE IN A WINDSTORM."}
  { .offset=0x01eae2, .string="IT IS FOGGY."}
  { .offset=0x01eafa, .string="IT IS HAZY."}
  { .offset=0x01eb11, .string="IT IS RAINING."}
  { .offset=0x01eb2b, .string="IT IS CLEAR."}
  { .offset=0x01eb43, .string="NITROGEN"}
  { .offset=0x01eb57, .string="OXYGEN"}
  { .offset=0x01eb69, .string="METHANE"}
  { .offset=0x01eb7c, .string="CARBON MONOXIDE"}
  { .offset=0x01eb97, .string="WATER"}
  { .offset=0x01eba8, .string="AMMONIA COMPOUNDS"}
  { .offset=0x01ebc5, .string="CHLORINE COMPOUNDS"}
  { .offset=0x01ebe3, .string="METHANOL, ETHANOL"}
  { .offset=0x01ec00, .string="SULFUR COMPOUNDS"}
  { .offset=0x01ec1c, .string="SILICON COMPOUNDS"}
  { .offset=0x01ec39, .string="SODIUM COMPOUNDS"}
  { .offset=0x01ec55, .string="FLUORINE COMPOUNDS"}
  { .offset=0x01ec73, .string="METAL COMPOUNDS"}
  { .offset=0x01ec8e, .string="HYDROGEN, HELIUM"}
  { .offset=0x01ecaa, .string="NITROGEN, OXYGEN"}
  { .offset=0x01ecc6, .string="OXYGEN, CARBON DIOXIDE"}
  { .offset=0x01ece8, .string="AMMONIA, HYDROGEN"}
  { .offset=0x01ed05, .string="METHANE, AMMONIA, ARGON"}
  { .offset=0x01ed28, .string="FLUORINE, CHLORINE"}
  { .offset=0x01ed46, .string="METHANE, HYDROGEN CYANIDE"}
  { .offset=0x01ed6b, .string="OXYGEN, HYDROGEN"}
  { .offset=0x01ed87, .string="HYDROGEN"}
  { .offset=0x01ed9b, .string="NONE"}
  { .offset=0x01e60d, .string="GARGANTUAN"}
  { .offset=0x01e5f7, .string="HUMONGOUS"}
  { .offset=0x01e5e3, .string="MASSIVE"}
  { .offset=0x01e5d2, .string="HUGE"}
  { .offset=0x01e5bb, .string="VERY LARGE"}
  { .offset=0x01e5a9, .string="LARGE"}
  { .offset=0x01e599, .string="BIG"}
  { .offset=0x01e587, .string="SMALL"}
  { .offset=0x01e576, .string="TINY"}
  { .offset=0x01e564, .string="BLACK"}
  { .offset=0x01e553, .string="GREY"}
  { .offset=0x01e541, .string="WHITE"}
  { .offset=0x01e527, .string="MULTI-COLORED"}
  { .offset=0x01e512, .string="LAVENDAR"}
  { .offset=0x01e4fc, .string="TURQUOISE"}
  { .offset=0x01e4e5, .string="LIME GREEN"}
  { .offset=0x01e4ca, .string="BROWNISH GREEN"}
  { .offset=0x01e4af, .string="COPPER-COLORED"}
  { .offset=0x01e49d, .string="BEIGE"}
  { .offset=0x01e48b, .string="BROWN"}
  { .offset=0x01e47a, .string="PINK"}
  { .offset=0x01e461, .string="RUST-COLORED"}
  { .offset=0x01e44d, .string="MARROON"}
  { .offset=0x01e43a, .string="PURPLE"}
  { .offset=0x01e427, .string="VIOLET"}
  { .offset=0x01e411, .string="VERY BLUE"}
  { .offset=0x01e400, .string="BLUE"}
  { .offset=0x01e3dc, .string="BLUE-GREEN"}
  { .offset=0x01e3ca, .string="GREEN"}
  { .offset=0x01e3ae, .string="YELLOWISH GREEN"}
  { .offset=0x01e395, .string="LEMON YELLOW"}
  { .offset=0x01e382, .string="YELLOW"}
  { .offset=0x01e365, .string="YELLOWISH ORANGE"}
  { .offset=0x01e352, .string="ORANGE"}
  { .offset=0x01e337, .string="REDDISH ORANGE"}
  { .offset=0x01e327, .string="RED"}
  { .offset=0x01e316, .string="HURT"}
  { .offset=0x01e302, .string="FLEEING"}
  { .offset=0x01e2e9, .string="FLEEING MATE"}
  { .offset=0x01e2d1, .string="APPROACHING"}
  { .offset=0x01e2b4, .string="APPROACHING MATE"}
  { .offset=0x01e29f, .string="ATTACKED"}
  { .offset=0x01e28c, .string="EATING"}
  { .offset=0x01e276, .string="WANDERING"}
  { .offset=0x01e262, .string="STUNNED"}
  { .offset=0x01e24c, .string="ATTACKING"}
  { .offset=0x01e238, .string="SESSILE"}
  { .offset=0x01e225, .string="MOBILE"}
  { .offset=0x01e210, .string="AIRBORNE"}
  { .offset=0x01e1fb, .string="FLOATING"}
  { .offset=0x01e1e8, .string="FLYING"}
  { .offset=0x01e1d4, .string="LEAPING"}
  { .offset=0x01e1c0, .string="JUMPING"}
  { .offset=0x01e1ac, .string="HOPPING"}
  { .offset=0x01e198, .string="WALKING"}
  { .offset=0x01e185, .string="MOVING"}
  { .offset=0x01e171, .string="ROLLING"}
  { .offset=0x01e15c, .string="CRAWLING"}
  { .offset=0x01e145, .string="SLITHERING"}
  { .offset=0x01e130, .string="CREEPING"}
  { .offset=0x01e11d, .string="OOZING"}
  { .offset=0x01e108, .string="DELICATE"}
  { .offset=0x01e0f4, .string="WILLOWY"}
  { .offset=0x01e0e0, .string="SPINDLY"}
  { .offset=0x01e0cf, .string="THIN"}
  { .offset=0x01e0ba, .string="GRACEFUL"}
  { .offset=0x01e0a6, .string="SLENDER"}
  { .offset=0x01e093, .string="NARROW"}
  { .offset=0x01e07d, .string="ELONGATED"}
  { .offset=0x01e06b, .string="SQUAT"}
  { .offset=0x01e059, .string="THICK"}
  { .offset=0x01e048, .string="WIDE"}
  { .offset=0x01e037, .string="FLAT"}
  { .offset=0x01e021, .string="FLATTENED"}
  { .offset=0x01e010, .string="HAIR"}
  { .offset=0x01e000, .string="FUR"}
  { .offset=0x01dfe4, .string="ARMOR"}
  { .offset=0x01dfd3, .string="SKIN"}
  { .offset=0x01dfc2, .string="HEAD"}
  { .offset=0x01dfb1, .string="BARK"}
  { .offset=0x01df9f, .string="STALK"}
  { .offset=0x01df8e, .string="STEM"}
  { .offset=0x01df7d, .string="MANE"}
  { .offset=0x01df6b, .string="CREST"}
  { .offset=0x01df59, .string="SHELL"}
  { .offset=0x01df48, .string="TAIL"}
  { .offset=0x01df33, .string="BAZWANGO"}
  { .offset=0x01df21, .string="SNOUT"}
  { .offset=0x01df0f, .string="CILIA"}
  { .offset=0x01defe, .string="FEET"}
  { .offset=0x01dee9, .string="BRANCHES"}
  { .offset=0x01ded7, .string="VINES"}
  { .offset=0x01dec4, .string="LEAVES"}
  { .offset=0x01deb2, .string="BULBS"}
  { .offset=0x01de9e, .string="BERRIES"}
  { .offset=0x01de8b, .string="FRUITS"}
  { .offset=0x01de77, .string="FLOWERS"}
  { .offset=0x01de64, .string="QUILLS"}
  { .offset=0x01de52, .string="CLAWS"}
  { .offset=0x01de3f, .string="PLUMES"}
  { .offset=0x01de2a, .string="WHISKERS"}
  { .offset=0x01de18, .string="TEETH"}
  { .offset=0x01de05, .string="THORNS"}
  { .offset=0x01ddf2, .string="SCALES"}
  { .offset=0x01dddc, .string="BILATERAL"}
  { .offset=0x01ddc9, .string="RADIAL"}
  { .offset=0x01ddb3, .string="SPHERICAL"}
  { .offset=0x01dd9d, .string="IRREGULAR"}
  { .offset=0x01dd87, .string="AMORPHOUS"}
  { .offset=0x01dd69, .string="PATTERNED SURFACE"}
  { .offset=0x01dd55, .string="SURFACE"}
  { .offset=0x01dd37, .string="FEATHERED SURFACE"}
  { .offset=0x01dd1f, .string="EXOSKELETON"}
  { .offset=0x01dd05, .string="APPEARS TO BE"}
  { .offset=0x01dcf4, .string="WITH"}
  { .offset=0x01dcdd, .string="AGGRESSION"}
  { .offset=0x01dccb, .string="LEVEL"}
  { .offset=0x01dcba, .string="MANY"}
  { .offset=0x01dcac, .string="."}
  { .offset=0x01dc9d, .string="M."}
  { .offset=0x01dc8d, .string="CM."}
  { .offset=0x01dc7c, .string="TALL"}
  { .offset=0x01dc68, .string="ROUGHLY"}
  { .offset=0x01dc4e, .string="APPROXIMATELY"}
  { .offset=0x01dc37, .string="ONE OF THE"}
  { .offset=0x01dc24, .string="IN THE"}
  { .offset=0x01dc15, .string="OR"}
  { .offset=0x01dc00, .string="COULD BE"}
  { .offset=0x01dbd1, .string="REPRESENTED BY"}
  { .offset=0x01dbc3, .string=","}
  { .offset=0x01dbb1, .string="BEING"}
  { .offset=0x01dba0, .string="MANY"}
  { .offset=0x01db90, .string="ITS"}
  { .offset=0x01db7e, .string="THEIR"}
  { .offset=0x01db6b, .string="ANIMAL"}
  { .offset=0x01db5b, .string="AND"}
  { .offset=0x01db49, .string="ABOUT"}
  { .offset=0x01db36, .string="AROUND"}
  { .offset=0x01db28, .string=" "}
  { .offset=0x01db13, .string="LIFEFORM"}
  { .offset=0x01dafe, .string="CREATURE"}
  { .offset=0x01daed, .string="SOME"}
  { .offset=0x01dadf, .string="A"}
  { .offset=0x01dad0, .string="AN"}
  { .offset=0x01dac2, .string="S"}
  { .offset=0x01dab2, .string="HAS"}
  { .offset=0x01daa1, .string="HAVE"}
  { .offset=0x01da92, .string="IT"}
  { .offset=0x01da81, .string="THEY"}
  { .offset=0x01da72, .string="  "}
  { .offset=0x01da62, .string="ARE"}
  { .offset=0x01da53, .string="IS"}
  { .offset=0x01da41, .string="THERE"}
  { .offset=0x01da2e, .string="SINEWY"}
  { .offset=0x01da1c, .string="SHORT"}
  { .offset=0x01da0b, .string="LONG"}
  { .offset=0x01d9f8, .string="STUBBY"}
  { .offset=0x01d9db, .string="POWERFUL LOOKING"}
  { .offset=0x01d9c6, .string="MUSCULAR"}
  { .offset=0x01d9b2, .string="JOINTED"}
  { .offset=0x01d998, .string="MULTI-JOINTED"}
  { .offset=0x01d981, .string="MEMBRANOUS"}
  { .offset=0x01d96e, .string="SPINEY"}
  { .offset=0x01d95a, .string="GNARLED"}
  { .offset=0x01d943, .string="PREHENSILE"}
  { .offset=0x01d92c, .string="GELATINOUS"}
  { .offset=0x01d91a, .string="RIGID"}
  { .offset=0x01d905, .string="FEATHERY"}
  { .offset=0x01d8f2, .string="CURVED"}
  { .offset=0x01d8dd, .string="SWEEPING"}
  { .offset=0x01d8c7, .string="INTRICATE"}
  { .offset=0x01d8b4, .string="WEBBED"}
  { .offset=0x01d8a1, .string="FLOPPY"}
  { .offset=0x01d88b, .string="VESTIGIAL"}
  { .offset=0x01d875, .string="BUTTERFLY"}
  { .offset=0x01d865, .string="BAT"}
  { .offset=0x01d851, .string="BULBOUS"}
  { .offset=0x01d83d, .string="BULGING"}
  { .offset=0x01d828, .string="GLOBULAR"}
  { .offset=0x01d814, .string="POINTED"}
  { .offset=0x01d800, .string="PRONGED"}
  { .offset=0x01d7e9, .string="FLEXIBLE"}
  { .offset=0x01d7d7, .string="SHARP"}
  { .offset=0x01d7bf, .string="RAZOR SHARP"}
  { .offset=0x01d7ac, .string="HOOKED"}
  { .offset=0x01d798, .string="CONICAL"}
  { .offset=0x01d786, .string="BLUNT"}
  { .offset=0x01d773, .string="SPIKED"}
  { .offset=0x01d759, .string="SPIRAL-SHAPED"}
  { .offset=0x01d741, .string="RETRACTIBLE"}
  { .offset=0x01d72f, .string="SABER"}
  { .offset=0x01d71a, .string="ARMOURED"}
  { .offset=0x01d707, .string="CUPPED"}
  { .offset=0x01d6f3, .string="SPLAYED"}
  { .offset=0x01d6dc, .string="PROTRUDING"}
  { .offset=0x01d6cb, .string="OVAL"}
  { .offset=0x01d6b5, .string="OCTAGONAL"}
  { .offset=0x01d6a3, .string="ROUND"}
  { .offset=0x01d690, .string="CUBOID"}
  { .offset=0x01d67a, .string="SCALLOPED"}
  { .offset=0x01d65e, .string="FINELY SCULPTED"}
  { .offset=0x01d647, .string="PUPIL-LESS"}
  { .offset=0x01d632, .string="DEEP SET"}
  { .offset=0x01d61b, .string="TRIANGULAR"}
  { .offset=0x01d606, .string="CIRCULAR"}
  { .offset=0x01d5f3, .string="GAPING"}
  { .offset=0x01d5dd, .string="CAVERNOUS"}
  { .offset=0x01d5c7, .string="HEXAGONAL"}
  { .offset=0x01d5b4, .string="SQUARE"}
  { .offset=0x01d59f, .string="DETAILED"}
  { .offset=0x01d587, .string="CYLINDRICAL"}
  { .offset=0x01d56f, .string="RECTANGULAR"}
  { .offset=0x01d55a, .string="BRANCHED"}
  { .offset=0x01d544, .string="ROOT-LIKE"}
  { .offset=0x01d52d, .string="STALK-LIKE"}
  { .offset=0x01d517, .string="STEM-LIKE"}
  { .offset=0x01d501, .string="WHIP-LIKE"}
  { .offset=0x01d4eb, .string="FANG-LIKE"}
  { .offset=0x01d4d5, .string="LEAF-LIKE"}
  { .offset=0x01d4c0, .string="FIN-LIKE"}
  { .offset=0x01d4a9, .string="BLADE-LIKE"}
  { .offset=0x01d492, .string="THORN-LIKE"}
  { .offset=0x01d47b, .string="TALON-LIKE"}
  { .offset=0x01d465, .string="HOLE-LIKE"}
  { .offset=0x01d44e, .string="SLASH-LIKE"}
  { .offset=0x01d42f, .string="IRREGULARLY-SHAPED"}
  { .offset=0x01d418, .string="FAN-SHAPED"}
  { .offset=0x01d400, .string="TEAR-SHAPED"}
  { .offset=0x01d3e0, .string="DOME-SHAPED"}
  { .offset=0x01d3c6, .string="SPHERE-SHAPED"}
  { .offset=0x01d3af, .string="ROD-SHAPED"}
  { .offset=0x01d396, .string="SPEAR-SHAPED"}
  { .offset=0x01d37c, .string="NEEDLE-SHAPED"}
  { .offset=0x01d362, .string="SAUCER-SHAPED"}
  { .offset=0x01d34a, .string="DISK-SHAPED"}
  { .offset=0x01d332, .string="DISH-SHAPED"}
  { .offset=0x01d31a, .string="BOWL-SHAPED"}
  { .offset=0x01d301, .string="HEART-SHAPED"}
  { .offset=0x01d2e6, .string="DIAMOND-SHAPED"}
  { .offset=0x01d2cb, .string="PYRAMID-SHAPED"}
  { .offset=0x01d2ba, .string="SOFT"}
  { .offset=0x01d2a8, .string="GUMMY"}
  { .offset=0x01d296, .string="GOOEY"}
  { .offset=0x01d283, .string="STICKY"}
  { .offset=0x01d26f, .string="VISCOUS"}
  { .offset=0x01d25a, .string="STEAMING"}
  { .offset=0x01d245, .string="BLOOPING"}
  { .offset=0x01d232, .string="SMOOTH"}
  { .offset=0x01d220, .string="ROUGH"}
  { .offset=0x01d209, .string="WIND-SWEPT"}
  { .offset=0x01d1f5, .string="POWDERY"}
  { .offset=0x01d1e5, .string="WET"}
  { .offset=0x01d1d0, .string="GRAVELLY"}
  { .offset=0x01d1b7, .string="FINE-GRAINED"}
  { .offset=0x01d1a5, .string="ROCKY"}
  { .offset=0x01d18d, .string="CRYSTALLINE"}
  { .offset=0x01d17a, .string="SHINEY"}
  { .offset=0x01d166, .string="CRACKED"}
  { .offset=0x01d151, .string="DRIPPING"}
  { .offset=0x01d13e, .string="GLASSY"}
  { .offset=0x01d12b, .string="JAGGED"}
  { .offset=0x01d119, .string="SLICK"}
  { .offset=0x01d106, .string="BROKEN"}
  { .offset=0x01d0f3, .string="CRUSTY"}
  { .offset=0x01d0e2, .string="DAMP"}
  { .offset=0x01d0cf, .string="VEINED"}
  { .offset=0x01d0bd, .string="BUMPY"}
  { .offset=0x01d0aa, .string="COARSE"}
  { .offset=0x01d098, .string="SANDY"}
  { .offset=0x01d085, .string="POCKED"}
  { .offset=0x01d070, .string="STRIATED"}
  { .offset=0x01d05e, .string="DUSTY"}
  { .offset=0x01d04b, .string="CRAGGY"}
  { .offset=0x01d038, .string="GNARLY"}
  { .offset=0x01d025, .string="THORNY"}
  { .offset=0x01d014, .string="OILY"}
  { .offset=0x01d000, .string="FIBROUS"}
  { .offset=0x01cfdc, .string="SPONGY"}
  { .offset=0x01cfcc, .string="DRY"}
  { .offset=0x01cfb7, .string="LEATHERY"}
  { .offset=0x01cfa4, .string="FLESHY"}
  { .offset=0x01cf93, .string="HARD"}
  { .offset=0x01cf7a, .string="PLASTIC-LIKE"}
  { .offset=0x01cf68, .string="HORNY"}
  { .offset=0x01cf54, .string="RUBBERY"}
  { .offset=0x01cf42, .string="WARTY"}
  { .offset=0x01cf30, .string="HAIRY"}
  { .offset=0x01cf1e, .string="FUZZY"}
  { .offset=0x01cf0a, .string="BRISTLY"}
  { .offset=0x01cef5, .string="SERRATED"}
  { .offset=0x01cee0, .string="METALLIC"}
  { .offset=0x01ceca, .string="SHIVERING"}
  { .offset=0x01ceb6, .string="MUCOUSY"}
  { .offset=0x01cea4, .string="LEAFY"}
  { .offset=0x01ce8e, .string="CHITENOUS"}
  { .offset=0x01ce7c, .string="BONEY"}
  { .offset=0x01ce6b, .string="DULL"}
  { .offset=0x01ce59, .string="FILMY"}
  { .offset=0x01ce47, .string="DOWNY"}
  { .offset=0x01ce36, .string="WAXY"}
  { .offset=0x01ce22, .string="KNURLED"}
  { .offset=0x01ce0f, .string="MATTED"}
  { .offset=0x01cdfd, .string="CURLY"}
  { .offset=0x01cde9, .string="TANGLED"}
  { .offset=0x01cdd7, .string="WIREY"}
  { .offset=0x01cdc3, .string="FLOWING"}
  { .offset=0x01cdb0, .string="RUSTED"}
  { .offset=0x01cd9b, .string="THATCHED"}
  { .offset=0x01cd8b, .string="ARM"}
  { .offset=0x01cd77, .string="STINGER"}
  { .offset=0x01cd62, .string="TENTACLE"}
  { .offset=0x01cd4c, .string="PSEUDOPOD"}
  { .offset=0x01cd39, .string="PINCER"}
  { .offset=0x01cd27, .string="MOUTH"}
  { .offset=0x01cd17, .string="LEG"}
  { .offset=0x01cd07, .string="EYE"}
  { .offset=0x01ccf1, .string="EYE STALK"}
  { .offset=0x01ccdc, .string="EYE SPOT"}
  { .offset=0x01ccc3, .string="COMPOUND EYE"}
  { .offset=0x01ccb0, .string="FEELER"}
  { .offset=0x01cc9b, .string="MANDIBLE"}
  { .offset=0x01cc86, .string="ACID SAC"}
  { .offset=0x01cc6f, .string="POISON SAC"}
  { .offset=0x01cc4b, .string="FENDIBULAR EXTREMULATOR"}
  { .offset=0x01cc38, .string="HOOTER"}
  { .offset=0x01cc27, .string="TATA"}
  { .offset=0x01cc10, .string="PROJECTION"}
  { .offset=0x01cc00, .string="EAR"}
  { .offset=0x01cbe1, .string="PROTRUSION"}
  { .offset=0x01cbcb, .string="FLOAT SAC"}
  { .offset=0x01cbba, .string="WING"}
  { .offset=0x01cba9, .string="HORN"}
  { .offset=0x01cb98, .string="TUSK"}
  { .offset=0x01cb87, .string="BEAK"}
  { .offset=0x01cb70, .string="SHIMMERING"}
  { .offset=0x01cb58, .string="TRANSLUCENT"}
  { .offset=0x01cb40, .string="LUMINESCENT"}
  { .offset=0x01cb2c, .string="GLOWING"}
  { .offset=0x01cb19, .string="BRIGHT"}
  { .offset=0x01cb04, .string="BLINDING"}
  { .offset=0x01caf2, .string="LIGHT"}
  { .offset=0x01cade, .string="GREYISH"}
  { .offset=0x01cacd, .string="DARK"}
  { .offset=0x01cab9, .string="HEIGHT:"}
  { .offset=0x01caa8, .string="DEAD"}
  { .offset=0x01ca86, .string="INTELLIGENCE ANALOG: "}
  { .offset=0x01ca66, .string="AGGRESSION ANALOG: "}
  { .offset=0x01ca4d, .string="BIO-STATUS: "}
  { .offset=0x01ca39, .string="NICHE: "}
  { .offset=0x01ca23, .string="IN STASIS"}
  { .offset=0x01ca12, .string="DEAD"}
  { .offset=0x01ca00, .string="ALIVE"}
  { .offset=0x01c9f0, .string="APE"}
  { .offset=0x01c9dd, .string="MONKEY"}
  { .offset=0x01c9cd, .string="FOX"}
  { .offset=0x01c9bd, .string="CAT"}
  { .offset=0x01c9aa, .string="RABBIT"}
  { .offset=0x01c996, .string="PENGUIN"}
  { .offset=0x01c984, .string="MOUSE"}
  { .offset=0x01c974, .string="ANT"}
  { .offset=0x01c961, .string="LIZARD"}
  { .offset=0x01c950, .string="SLUG"}
  { .offset=0x01c93d, .string="SPONGE"}
  { .offset=0x01c927, .string="FIRESHARK"}
  { .offset=0x01c913, .string="PIRANHA"}
  { .offset=0x01c8ff, .string="GRIZZLY"}
  { .offset=0x01c8ed, .string="RHINO"}
  { .offset=0x01c8dc, .string="WOLF"}
  { .offset=0x01c8c8, .string="BOB-CAT"}
  { .offset=0x01c8b6, .string="HORSE"}
  { .offset=0x01c8a0, .string="ARMADILLO"}
  { .offset=0x01c890, .string="EMU"}
  { .offset=0x01c87e, .string="SHEEP"}
  { .offset=0x01c869, .string="GOLDFISH"}
  { .offset=0x01c858, .string="CLAM"}
  { .offset=0x01c847, .string="TREE"}
  { .offset=0x01c835, .string="DAISY"}
  { .offset=0x01c815, .string="OMNIVEROUS PRODUCER"}
  { .offset=0x01c800, .string="OMNIVORE"}
  { .offset=0x01c7df, .string="CARNIVEROUS PRODUCER"}
  { .offset=0x01c7c9, .string="CARNIVORE"}
  { .offset=0x01c7a8, .string="HERBIVEROUS PRODUCER"}
  { .offset=0x01c792, .string="HERBIVORE"}
  { .offset=0x01c77d, .string="PRODUCER"}
  { .offset=0x01c761, .string="CARPET LIFEFORM"}
  { .offset=0x01c748, .string="ANEMONE-LIKE"}
  { .offset=0x01c732, .string="EWOK-LIKE"}
  { .offset=0x01c718, .string="STARFISH-LIKE"}
  { .offset=0x01c704, .string="FUNGOID"}
  { .offset=0x01c6ee, .string="ROCK-LIKE"}
  { .offset=0x01c6d6, .string="TURTLE-LIKE"}
  { .offset=0x01c6be, .string="SPIDER-LIKE"}
  { .offset=0x01c6a7, .string="SNAKE-LIKE"}
  { .offset=0x01c690, .string="SNAIL-LIKE"}
  { .offset=0x01c67a, .string="SLUG-LIKE"}
  { .offset=0x01c662, .string="RODENT-LIKE"}
  { .offset=0x01c64c, .string="REPTILIAN"}
  { .offset=0x01c636, .string="BEAR-LIKE"}
  { .offset=0x01c61f, .string="PLANT-LIKE"}
  { .offset=0x01c609, .string="INSECTOID"}
  { .offset=0x01c5f4, .string="HUMANOID"}
  { .offset=0x01c5da, .string="DINOSAUR-LIKE"}
  { .offset=0x01c5c4, .string="BIRD-LIKE"}
  { .offset=0x01c5aa, .string="ANTELOPE-LIKE"}
  { .offset=0x01c591, .string="BALLOON-LIKE"}
  { .offset=0x01c57b, .string="TREE-LIKE"}
  { .offset=0x01c567, .string="AMEBOID"}
  { .offset=0x01c551, .string="GROTESQUE"}
  { .offset=0x01c536, .string="INSANELY GREAT"}
  { .offset=0x01c520, .string="RIGHTEOUS"}
  { .offset=0x01c509, .string="INCREDIBLE"}
  { .offset=0x01c4f3, .string="BEAUTIFUL"}
  { .offset=0x01c4dd, .string="SEDUCTIVE"}
  { .offset=0x01c4c8, .string="GORGEOUS"}
  { .offset=0x01c4b1, .string="FUNKADELIC"}
  { .offset=0x01c49b, .string="BODACIOUS"}
  { .offset=0x01c485, .string="UPLIFTING"}
  { .offset=0x01c470, .string="EDIFYING"}
  { .offset=0x01c45c, .string="AWESOME"}
  { .offset=0x01c440, .string="TOTALLY RADICAL"}
  { .offset=0x01c429, .string="OUTRAGEOUS"}
  { .offset=0x01c412, .string="NAUSEATING"}
  { .offset=0x01c400, .string="GRODY"}
  { .offset=0x01c3e2, .string="GROOVY"}
  { .offset=0x01c3d0, .string="MONDO"}
  { .offset=0x01c3bb, .string="BITCHIN'"}
  { .offset=0x01c3a3, .string="SUBFREEZING"}
  { .offset=0x01c38f, .string="FURNACE"}
  { .offset=0x01c37b, .string="SEARING"}
  { .offset=0x01c366, .string="TROPICAL"}
  { .offset=0x01c350, .string="TEMPERATE"}
  { .offset=0x01c33d, .string="ARCTIC"}
  { .offset=0x01c326, .string="NORTH WEST"}
  { .offset=0x01c315, .string="WEST"}
  { .offset=0x01c2fe, .string="SOUTH WEST"}
  { .offset=0x01c2ec, .string="SOUTH"}
  { .offset=0x01c2d5, .string="SOUTH EAST"}
  { .offset=0x01c2c4, .string="EAST"}
  { .offset=0x01c2ad, .string="NORTH EAST"}
  { .offset=-1, .string=NULL}
};
