/* 800F2390 000EF2D0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800F2394 000EF2D4  7C 08 02 A6 */ mflr r0
/* 800F2398 000EF2D8  90 01 00 14 */ stw r0, 0x14(r1)
/* 800F239C 000EF2DC  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800F23A0 000EF2E0  7C 7F 1B 78 */ mr r31, r3
/* 800F23A4 000EF2E4  4B FF B6 81 */ bl setSyncRidePos__9daAlink_cFv
/* 800F23A8 000EF2E8  2C 03 00 00 */ cmpwi r3, 0
/* 800F23AC 000EF2EC  40 82 00 0C */ bne lbl_800F23B8
/* 800F23B0 000EF2F0  38 60 00 01 */ li r3, 1
/* 800F23B4 000EF2F4  48 00 00 8C */ b lbl_800F2440
lbl_800F23B8:
/* 800F23B8 000EF2F8  7F E3 FB 78 */ mr r3, r31
/* 800F23BC 000EF2FC  4B FF B9 B1 */ bl checkHorseSpecialProc__9daAlink_cFv
/* 800F23C0 000EF300  2C 03 00 00 */ cmpwi r3, 0
/* 800F23C4 000EF304  41 82 00 0C */ beq lbl_800F23D0
/* 800F23C8 000EF308  38 60 00 01 */ li r3, 1
/* 800F23CC 000EF30C  48 00 00 74 */ b lbl_800F2440
lbl_800F23D0:
/* 800F23D0 000EF310  80 1F 28 30 */ lwz r0, 0x2830(r31)
/* 800F23D4 000EF314  28 00 00 00 */ cmplwi r0, 0
/* 800F23D8 000EF318  40 82 00 24 */ bne lbl_800F23FC
/* 800F23DC 000EF31C  7F E3 FB 78 */ mr r3, r31
/* 800F23E0 000EF320  4B FF 18 8D */ bl checkGrabAnime__9daAlink_cCFv
/* 800F23E4 000EF324  2C 03 00 00 */ cmpwi r3, 0
/* 800F23E8 000EF328  41 82 00 14 */ beq lbl_800F23FC
/* 800F23EC 000EF32C  7F E3 FB 78 */ mr r3, r31
/* 800F23F0 000EF330  38 80 00 02 */ li r4, 2
/* 800F23F4 000EF334  C0 22 93 24 */ lfs f1, lbl_80452D24-_SDA2_BASE_(r2)
/* 800F23F8 000EF338  4B FB B3 2D */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
lbl_800F23FC:
/* 800F23FC 000EF33C  7F E3 FB 78 */ mr r3, r31
/* 800F2400 000EF340  4B FF C9 99 */ bl setBaseRideAnime__9daAlink_cFv
/* 800F2404 000EF344  7F E3 FB 78 */ mr r3, r31
/* 800F2408 000EF348  4B FF 18 15 */ bl checkGrabThrowAnime__9daAlink_cCFv
/* 800F240C 000EF34C  2C 03 00 00 */ cmpwi r3, 0
/* 800F2410 000EF350  41 82 00 24 */ beq lbl_800F2434
/* 800F2414 000EF354  7F E3 FB 78 */ mr r3, r31
/* 800F2418 000EF358  C0 22 93 24 */ lfs f1, lbl_80452D24-_SDA2_BASE_(r2)
/* 800F241C 000EF35C  4B FF 33 91 */ bl checkUpperGrabItemThrow__9daAlink_cFf
/* 800F2420 000EF360  2C 03 00 00 */ cmpwi r3, 0
/* 800F2424 000EF364  41 82 00 18 */ beq lbl_800F243C
/* 800F2428 000EF368  7F E3 FB 78 */ mr r3, r31
/* 800F242C 000EF36C  4B FF E5 55 */ bl procHorseWaitInit__9daAlink_cFv
/* 800F2430 000EF370  48 00 00 0C */ b lbl_800F243C
lbl_800F2434:
/* 800F2434 000EF374  7F E3 FB 78 */ mr r3, r31
/* 800F2438 000EF378  4B FF D0 19 */ bl checkNextActionHorse__9daAlink_cFv
lbl_800F243C:
/* 800F243C 000EF37C  38 60 00 01 */ li r3, 1
lbl_800F2440:
/* 800F2440 000EF380  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800F2444 000EF384  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800F2448 000EF388  7C 08 03 A6 */ mtlr r0
/* 800F244C 000EF38C  38 21 00 10 */ addi r1, r1, 0x10
/* 800F2450 000EF390  4E 80 00 20 */ blr
