/* 8020D308 0020A248  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8020D30C 0020A24C  7C 08 02 A6 */ mflr r0
/* 8020D310 0020A250  90 01 00 14 */ stw r0, 0x14(r1)
/* 8020D314 0020A254  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8020D318 0020A258  7C 7F 1B 78 */ mr r31, r3
/* 8020D31C 0020A25C  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 8020D320 0020A260  48 04 85 09 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 8020D324 0020A264  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 8020D328 0020A268  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 8020D32C 0020A26C  C0 03 03 A0 */ lfs f0, 0x3a0(r3)
/* 8020D330 0020A270  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 8020D334 0020A274  41 82 00 2C */ beq lbl_8020D360
/* 8020D338 0020A278  80 7F 00 2C */ lwz r3, 0x2c(r31)
/* 8020D33C 0020A27C  FC 20 00 90 */ fmr f1, f0
/* 8020D340 0020A280  48 04 84 91 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 8020D344 0020A284  3C 60 80 43 */ lis r3, lbl_80430188@ha
/* 8020D348 0020A288  38 63 01 88 */ addi r3, r3, lbl_80430188@l
/* 8020D34C 0020A28C  80 63 00 1C */ lwz r3, 0x1c(r3)
/* 8020D350 0020A290  80 63 01 0C */ lwz r3, 0x10c(r3)
/* 8020D354 0020A294  80 9F 00 2C */ lwz r4, 0x2c(r31)
/* 8020D358 0020A298  38 A0 00 05 */ li r5, 5
/* 8020D35C 0020A29C  48 00 D7 49 */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_8020D360:
/* 8020D360 0020A2A0  80 7F 00 30 */ lwz r3, 0x30(r31)
/* 8020D364 0020A2A4  48 04 84 C5 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 8020D368 0020A2A8  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 8020D36C 0020A2AC  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 8020D370 0020A2B0  C0 03 03 A8 */ lfs f0, 0x3a8(r3)
/* 8020D374 0020A2B4  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 8020D378 0020A2B8  41 82 00 2C */ beq lbl_8020D3A4
/* 8020D37C 0020A2BC  80 7F 00 30 */ lwz r3, 0x30(r31)
/* 8020D380 0020A2C0  FC 20 00 90 */ fmr f1, f0
/* 8020D384 0020A2C4  48 04 84 4D */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 8020D388 0020A2C8  3C 60 80 43 */ lis r3, lbl_80430188@ha
/* 8020D38C 0020A2CC  38 63 01 88 */ addi r3, r3, lbl_80430188@l
/* 8020D390 0020A2D0  80 63 00 1C */ lwz r3, 0x1c(r3)
/* 8020D394 0020A2D4  80 63 01 0C */ lwz r3, 0x10c(r3)
/* 8020D398 0020A2D8  80 9F 00 30 */ lwz r4, 0x30(r31)
/* 8020D39C 0020A2DC  38 A0 00 05 */ li r5, 5
/* 8020D3A0 0020A2E0  48 00 D7 05 */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_8020D3A4:
/* 8020D3A4 0020A2E4  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8020D3A8 0020A2E8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8020D3AC 0020A2EC  7C 08 03 A6 */ mtlr r0
/* 8020D3B0 0020A2F0  38 21 00 10 */ addi r1, r1, 0x10
/* 8020D3B4 0020A2F4  4E 80 00 20 */ blr
