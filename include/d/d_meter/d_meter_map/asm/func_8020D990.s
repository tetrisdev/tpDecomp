/* 8020D990 0020A8D0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8020D994 0020A8D4  7C 08 02 A6 */ mflr r0
/* 8020D998 0020A8D8  90 01 00 14 */ stw r0, 0x14(r1)
/* 8020D99C 0020A8DC  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8020D9A0 0020A8E0  93 C1 00 08 */ stw r30, 8(r1)
/* 8020D9A4 0020A8E4  7C 7E 1B 79 */ or. r30, r3, r3
/* 8020D9A8 0020A8E8  7C 9F 23 78 */ mr r31, r4
/* 8020D9AC 0020A8EC  41 82 00 24 */ beq lbl_8020D9D0
/* 8020D9B0 0020A8F0  3C 80 80 3C */ lis r4, lbl_803BF2F8@ha
/* 8020D9B4 0020A8F4  38 04 F2 F8 */ addi r0, r4, lbl_803BF2F8@l
/* 8020D9B8 0020A8F8  90 1E 00 00 */ stw r0, 0(r30)
/* 8020D9BC 0020A8FC  48 00 02 95 */ bl _delete__11dMeterMap_cFv
/* 8020D9C0 0020A900  7F E0 07 35 */ extsh. r0, r31
/* 8020D9C4 0020A904  40 81 00 0C */ ble lbl_8020D9D0
/* 8020D9C8 0020A908  7F C3 F3 78 */ mr r3, r30
/* 8020D9CC 0020A90C  48 0C 13 71 */ bl __dl__FPv
lbl_8020D9D0:
/* 8020D9D0 0020A910  7F C3 F3 78 */ mr r3, r30
/* 8020D9D4 0020A914  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8020D9D8 0020A918  83 C1 00 08 */ lwz r30, 8(r1)
/* 8020D9DC 0020A91C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8020D9E0 0020A920  7C 08 03 A6 */ mtlr r0
/* 8020D9E4 0020A924  38 21 00 10 */ addi r1, r1, 0x10
/* 8020D9E8 0020A928  4E 80 00 20 */ blr
