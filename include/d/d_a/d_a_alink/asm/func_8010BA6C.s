/* 8010BA6C 001089AC  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8010BA70 001089B0  7C 08 02 A6 */ mflr r0
/* 8010BA74 001089B4  90 01 00 14 */ stw r0, 0x14(r1)
/* 8010BA78 001089B8  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8010BA7C 001089BC  7C 7F 1B 78 */ mr r31, r3
/* 8010BA80 001089C0  4B FA 8E 51 */ bl setJumpMode__9daAlink_cFv
/* 8010BA84 001089C4  7F E3 FB 78 */ mr r3, r31
/* 8010BA88 001089C8  4B FF FD C5 */ bl checkLandHookshotHang__9daAlink_cFv
/* 8010BA8C 001089CC  30 03 FF FF */ addic r0, r3, -1
/* 8010BA90 001089D0  7C 60 19 10 */ subfe r3, r0, r3
/* 8010BA94 001089D4  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8010BA98 001089D8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8010BA9C 001089DC  7C 08 03 A6 */ mtlr r0
/* 8010BAA0 001089E0  38 21 00 10 */ addi r1, r1, 0x10
/* 8010BAA4 001089E4  4E 80 00 20 */ blr
