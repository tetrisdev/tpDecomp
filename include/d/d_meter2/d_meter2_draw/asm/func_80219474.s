/* 80219474 002163B4  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80219478 002163B8  7C 08 02 A6 */ mflr r0
/* 8021947C 002163BC  90 01 00 24 */ stw r0, 0x24(r1)
/* 80219480 002163C0  39 61 00 20 */ addi r11, r1, 0x20
/* 80219484 002163C4  48 14 8D 51 */ bl _savegpr_27
/* 80219488 002163C8  7C 7B 1B 78 */ mr r27, r3
/* 8021948C 002163CC  80 63 03 04 */ lwz r3, 0x304(r3)
/* 80219490 002163D0  48 03 C3 99 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 80219494 002163D4  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 80219498 002163D8  3B C3 EB C8 */ addi r30, r3, lbl_8042EBC8@l
/* 8021949C 002163DC  C0 7E 00 F0 */ lfs f3, 0xf0(r30)
/* 802194A0 002163E0  C0 5E 00 18 */ lfs f2, 0x18(r30)
/* 802194A4 002163E4  C0 1E 00 84 */ lfs f0, 0x84(r30)
/* 802194A8 002163E8  EC 02 00 32 */ fmuls f0, f2, f0
/* 802194AC 002163EC  EC 03 00 32 */ fmuls f0, f3, f0
/* 802194B0 002163F0  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 802194B4 002163F4  41 82 00 4C */ beq lbl_80219500
/* 802194B8 002163F8  80 7B 03 04 */ lwz r3, 0x304(r27)
/* 802194BC 002163FC  FC 20 00 90 */ fmr f1, f0
/* 802194C0 00216400  48 03 C3 11 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 802194C4 00216404  7F 63 DB 78 */ mr r3, r27
/* 802194C8 00216408  80 9B 03 04 */ lwz r4, 0x304(r27)
/* 802194CC 0021640C  38 A0 00 05 */ li r5, 5
/* 802194D0 00216410  48 00 15 D5 */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
/* 802194D4 00216414  80 7B 03 18 */ lwz r3, 0x318(r27)
/* 802194D8 00216418  C0 5E 00 F0 */ lfs f2, 0xf0(r30)
/* 802194DC 0021641C  C0 3E 00 18 */ lfs f1, 0x18(r30)
/* 802194E0 00216420  C0 1E 00 84 */ lfs f0, 0x84(r30)
/* 802194E4 00216424  EC 01 00 32 */ fmuls f0, f1, f0
/* 802194E8 00216428  EC 22 00 32 */ fmuls f1, f2, f0
/* 802194EC 0021642C  48 03 C2 E5 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 802194F0 00216430  7F 63 DB 78 */ mr r3, r27
/* 802194F4 00216434  80 9B 03 18 */ lwz r4, 0x318(r27)
/* 802194F8 00216438  38 A0 00 05 */ li r5, 5
/* 802194FC 0021643C  48 00 15 A9 */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_80219500:
/* 80219500 00216440  80 7B 03 28 */ lwz r3, 0x328(r27)
/* 80219504 00216444  48 03 C3 25 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 80219508 00216448  C0 5E 00 18 */ lfs f2, 0x18(r30)
/* 8021950C 0021644C  C0 1E 00 84 */ lfs f0, 0x84(r30)
/* 80219510 00216450  EC 02 00 32 */ fmuls f0, f2, f0
/* 80219514 00216454  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 80219518 00216458  41 82 00 20 */ beq lbl_80219538
/* 8021951C 0021645C  80 7B 03 28 */ lwz r3, 0x328(r27)
/* 80219520 00216460  FC 20 00 90 */ fmr f1, f0
/* 80219524 00216464  48 03 C2 AD */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 80219528 00216468  7F 63 DB 78 */ mr r3, r27
/* 8021952C 0021646C  80 9B 03 28 */ lwz r4, 0x328(r27)
/* 80219530 00216470  38 A0 00 05 */ li r5, 5
/* 80219534 00216474  48 00 15 71 */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_80219538:
/* 80219538 00216478  3B 80 00 00 */ li r28, 0
/* 8021953C 0021647C  3B E0 00 00 */ li r31, 0
lbl_80219540:
/* 80219540 00216480  3B BF 00 D4 */ addi r29, r31, 0xd4
/* 80219544 00216484  7C 7B E8 2E */ lwzx r3, r27, r29
/* 80219548 00216488  48 03 C2 E1 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 8021954C 0021648C  C0 5E 00 18 */ lfs f2, 0x18(r30)
/* 80219550 00216490  C0 1E 00 84 */ lfs f0, 0x84(r30)
/* 80219554 00216494  EC 02 00 32 */ fmuls f0, f2, f0
/* 80219558 00216498  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 8021955C 0021649C  41 82 00 20 */ beq lbl_8021957C
/* 80219560 002164A0  7C 7B E8 2E */ lwzx r3, r27, r29
/* 80219564 002164A4  FC 20 00 90 */ fmr f1, f0
/* 80219568 002164A8  48 03 C2 69 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 8021956C 002164AC  7F 63 DB 78 */ mr r3, r27
/* 80219570 002164B0  7C 9B E8 2E */ lwzx r4, r27, r29
/* 80219574 002164B4  38 A0 00 05 */ li r5, 5
/* 80219578 002164B8  48 00 15 2D */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_8021957C:
/* 8021957C 002164BC  3B 9C 00 01 */ addi r28, r28, 1
/* 80219580 002164C0  2C 1C 00 05 */ cmpwi r28, 5
/* 80219584 002164C4  3B FF 00 04 */ addi r31, r31, 4
/* 80219588 002164C8  41 80 FF B8 */ blt lbl_80219540
/* 8021958C 002164CC  39 61 00 20 */ addi r11, r1, 0x20
/* 80219590 002164D0  48 14 8C 91 */ bl _restgpr_27
/* 80219594 002164D4  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80219598 002164D8  7C 08 03 A6 */ mtlr r0
/* 8021959C 002164DC  38 21 00 20 */ addi r1, r1, 0x20
/* 802195A0 002164E0  4E 80 00 20 */ blr
