/* 8001E020 0001AF60  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8001E024 0001AF64  7C 08 02 A6 */ mflr r0
/* 8001E028 0001AF68  90 01 00 14 */ stw r0, 0x14(r1)
/* 8001E02C 0001AF6C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8001E030 0001AF70  93 C1 00 08 */ stw r30, 8(r1)
/* 8001E034 0001AF74  7C 7E 1B 79 */ or. r30, r3, r3
/* 8001E038 0001AF78  7C 9F 23 78 */ mr r31, r4
/* 8001E03C 0001AF7C  41 82 00 40 */ beq lbl_8001E07C
/* 8001E040 0001AF80  3C 80 80 3A */ lis r4, lbl_803A382C@ha
/* 8001E044 0001AF84  38 84 38 2C */ addi r4, r4, lbl_803A382C@l
/* 8001E048 0001AF88  90 9E 00 10 */ stw r4, 0x10(r30)
/* 8001E04C 0001AF8C  38 04 00 0C */ addi r0, r4, 0xc
/* 8001E050 0001AF90  90 1E 00 20 */ stw r0, 0x20(r30)
/* 8001E054 0001AF94  38 04 00 18 */ addi r0, r4, 0x18
/* 8001E058 0001AF98  90 1E 00 3C */ stw r0, 0x3c(r30)
/* 8001E05C 0001AF9C  38 04 00 24 */ addi r0, r4, 0x24
/* 8001E060 0001AFA0  90 1E 00 4C */ stw r0, 0x4c(r30)
/* 8001E064 0001AFA4  38 80 00 00 */ li r4, 0
/* 8001E068 0001AFA8  48 05 95 89 */ bl __dt__11dBgS_GndChkFv
/* 8001E06C 0001AFAC  7F E0 07 35 */ extsh. r0, r31
/* 8001E070 0001AFB0  40 81 00 0C */ ble lbl_8001E07C
/* 8001E074 0001AFB4  7F C3 F3 78 */ mr r3, r30
/* 8001E078 0001AFB8  48 2B 0C C5 */ bl __dl__FPv
lbl_8001E07C:
/* 8001E07C 0001AFBC  7F C3 F3 78 */ mr r3, r30
/* 8001E080 0001AFC0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8001E084 0001AFC4  83 C1 00 08 */ lwz r30, 8(r1)
/* 8001E088 0001AFC8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8001E08C 0001AFCC  7C 08 03 A6 */ mtlr r0
/* 8001E090 0001AFD0  38 21 00 10 */ addi r1, r1, 0x10
/* 8001E094 0001AFD4  4E 80 00 20 */ blr