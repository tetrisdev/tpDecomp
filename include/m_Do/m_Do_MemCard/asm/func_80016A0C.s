/* 80016A0C 0001394C  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 80016A10 00013950  7C 08 02 A6 */ mflr r0
/* 80016A14 00013954  90 01 00 34 */ stw r0, 0x34(r1)
/* 80016A18 00013958  93 E1 00 2C */ stw r31, 0x2c(r1)
/* 80016A1C 0001395C  93 C1 00 28 */ stw r30, 0x28(r1)
/* 80016A20 00013960  7C 7E 1B 78 */ mr r30, r3
/* 80016A24 00013964  38 00 00 00 */ li r0, 0
/* 80016A28 00013968  90 03 1F C8 */ stw r0, 0x1fc8(r3)
/* 80016A2C 0001396C  88 63 1F BC */ lbz r3, 0x1fbc(r3)
/* 80016A30 00013970  3C 80 80 37 */ lis r4, lbl_803743F8@ha
/* 80016A34 00013974  38 84 43 F8 */ addi r4, r4, lbl_803743F8@l
/* 80016A38 00013978  38 A1 00 08 */ addi r5, r1, 8
/* 80016A3C 0001397C  48 34 15 5D */ bl CARDOpen
/* 80016A40 00013980  7C 7F 1B 79 */ or. r31, r3, r3
/* 80016A44 00013984  40 82 00 40 */ bne lbl_80016A84
/* 80016A48 00013988  38 61 00 08 */ addi r3, r1, 8
/* 80016A4C 0001398C  7F C4 F3 78 */ mr r4, r30
/* 80016A50 00013990  38 A0 1F BC */ li r5, 0x1fbc
/* 80016A54 00013994  48 00 0C 49 */ bl mDoMemCdRWm_Restore__FP12CARDFileInfoPvUl
/* 80016A58 00013998  2C 03 00 00 */ cmpwi r3, 0
/* 80016A5C 0001399C  40 82 00 10 */ bne lbl_80016A6C
/* 80016A60 000139A0  38 00 00 03 */ li r0, 3
/* 80016A64 000139A4  90 1E 1F C4 */ stw r0, 0x1fc4(r30)
/* 80016A68 000139A8  48 00 00 10 */ b lbl_80016A78
lbl_80016A6C:
/* 80016A6C 000139AC  7F C3 F3 78 */ mr r3, r30
/* 80016A70 000139B0  7F E4 FB 78 */ mr r4, r31
/* 80016A74 000139B4  48 00 08 ED */ bl setCardState__15mDoMemCd_Ctrl_cFl
lbl_80016A78:
/* 80016A78 000139B8  38 61 00 08 */ addi r3, r1, 8
/* 80016A7C 000139BC  48 34 16 39 */ bl CARDClose
/* 80016A80 000139C0  48 00 00 10 */ b lbl_80016A90
lbl_80016A84:
/* 80016A84 000139C4  7F C3 F3 78 */ mr r3, r30
/* 80016A88 000139C8  7F E4 FB 78 */ mr r4, r31
/* 80016A8C 000139CC  48 00 08 D5 */ bl setCardState__15mDoMemCd_Ctrl_cFl
lbl_80016A90:
/* 80016A90 000139D0  38 00 00 01 */ li r0, 1
/* 80016A94 000139D4  90 1E 1F C8 */ stw r0, 0x1fc8(r30)
/* 80016A98 000139D8  83 E1 00 2C */ lwz r31, 0x2c(r1)
/* 80016A9C 000139DC  83 C1 00 28 */ lwz r30, 0x28(r1)
/* 80016AA0 000139E0  80 01 00 34 */ lwz r0, 0x34(r1)
/* 80016AA4 000139E4  7C 08 03 A6 */ mtlr r0
/* 80016AA8 000139E8  38 21 00 30 */ addi r1, r1, 0x30
/* 80016AAC 000139EC  4E 80 00 20 */ blr
