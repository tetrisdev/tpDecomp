/* 800A142C 0009E36C  94 21 FF 60 */ stwu r1, -0xa0(r1)
/* 800A1430 0009E370  7C 08 02 A6 */ mflr r0
/* 800A1434 0009E374  90 01 00 A4 */ stw r0, 0xa4(r1)
/* 800A1438 0009E378  39 61 00 A0 */ addi r11, r1, 0xa0
/* 800A143C 0009E37C  48 2C 0D 7D */ bl _savegpr_20
/* 800A1440 0009E380  7C 7F 1B 78 */ mr r31, r3
/* 800A1444 0009E384  7C 99 23 78 */ mr r25, r4
/* 800A1448 0009E388  7C BB 2B 78 */ mr r27, r5
/* 800A144C 0009E38C  7C DE 33 78 */ mr r30, r6
/* 800A1450 0009E390  7C FD 3B 78 */ mr r29, r7
/* 800A1454 0009E394  7D 1C 43 78 */ mr r28, r8
/* 800A1458 0009E398  A8 63 2F E6 */ lha r3, 0x2fe6(r3)
/* 800A145C 0009E39C  A8 1F 05 9E */ lha r0, 0x59e(r31)
/* 800A1460 0009E3A0  7C 03 02 14 */ add r0, r3, r0
/* 800A1464 0009E3A4  7C 15 07 34 */ extsh r21, r0
/* 800A1468 0009E3A8  A0 7F 2F E8 */ lhz r3, 0x2fe8(r31)
/* 800A146C 0009E3AC  28 03 00 C0 */ cmplwi r3, 0xc0
/* 800A1470 0009E3B0  40 82 00 10 */ bne lbl_800A1480
/* 800A1474 0009E3B4  A8 1F 30 0A */ lha r0, 0x300a(r31)
/* 800A1478 0009E3B8  2C 00 00 00 */ cmpwi r0, 0
/* 800A147C 0009E3BC  41 82 00 18 */ beq lbl_800A1494
lbl_800A1480:
/* 800A1480 0009E3C0  28 03 00 D7 */ cmplwi r3, 0xd7
/* 800A1484 0009E3C4  40 82 00 18 */ bne lbl_800A149C
/* 800A1488 0009E3C8  A8 1F 30 0C */ lha r0, 0x300c(r31)
/* 800A148C 0009E3CC  2C 00 00 00 */ cmpwi r0, 0
/* 800A1490 0009E3D0  40 82 00 0C */ bne lbl_800A149C
lbl_800A1494:
/* 800A1494 0009E3D4  3E B5 00 01 */ addis r21, r21, 1
/* 800A1498 0009E3D8  3A B5 80 00 */ addi r21, r21, -32768
lbl_800A149C:
/* 800A149C 0009E3DC  38 61 00 24 */ addi r3, r1, 0x24
/* 800A14A0 0009E3E0  38 9F 05 38 */ addi r4, r31, 0x538
/* 800A14A4 0009E3E4  38 BF 34 E0 */ addi r5, r31, 0x34e0
/* 800A14A8 0009E3E8  48 1C 56 8D */ bl __mi__4cXyzCFRC3Vec
/* 800A14AC 0009E3EC  C0 01 00 24 */ lfs f0, 0x24(r1)
/* 800A14B0 0009E3F0  D0 01 00 3C */ stfs f0, 0x3c(r1)
/* 800A14B4 0009E3F4  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 800A14B8 0009E3F8  D0 01 00 40 */ stfs f0, 0x40(r1)
/* 800A14BC 0009E3FC  C0 01 00 2C */ lfs f0, 0x2c(r1)
/* 800A14C0 0009E400  D0 01 00 44 */ stfs f0, 0x44(r1)
/* 800A14C4 0009E404  7F E3 FB 78 */ mr r3, r31
/* 800A14C8 0009E408  38 81 00 3C */ addi r4, r1, 0x3c
/* 800A14CC 0009E40C  48 04 0F B1 */ bl multVecMagneBootInvMtx__9daAlink_cFP4cXyz
/* 800A14D0 0009E410  38 61 00 3C */ addi r3, r1, 0x3c
/* 800A14D4 0009E414  48 1C 5C 7D */ bl atan2sY_XZ__4cXyzCFv
/* 800A14D8 0009E418  7C 74 1B 78 */ mr r20, r3
/* 800A14DC 0009E41C  38 61 00 3C */ addi r3, r1, 0x3c
/* 800A14E0 0009E420  48 1C 5C 49 */ bl atan2sX_Z__4cXyzCFv
/* 800A14E4 0009E424  A8 1F 31 24 */ lha r0, 0x3124(r31)
/* 800A14E8 0009E428  7E 96 07 34 */ extsh r22, r20
/* 800A14EC 0009E42C  7C 00 B0 50 */ subf r0, r0, r22
/* 800A14F0 0009E430  7C 14 07 34 */ extsh r20, r0
/* 800A14F4 0009E434  A8 9F 31 26 */ lha r4, 0x3126(r31)
/* 800A14F8 0009E438  7E B5 07 34 */ extsh r21, r21
/* 800A14FC 0009E43C  7C 77 07 34 */ extsh r23, r3
/* 800A1500 0009E440  7C 15 B8 50 */ subf r0, r21, r23
/* 800A1504 0009E444  7C 04 00 50 */ subf r0, r4, r0
/* 800A1508 0009E448  7C 18 07 34 */ extsh r24, r0
/* 800A150C 0009E44C  80 9F 31 A0 */ lwz r4, 0x31a0(r31)
/* 800A1510 0009E450  3C 60 08 00 */ lis r3, 0x08000100@ha
/* 800A1514 0009E454  38 03 01 00 */ addi r0, r3, 0x08000100@l
/* 800A1518 0009E458  7C 80 00 39 */ and. r0, r4, r0
/* 800A151C 0009E45C  41 82 05 5C */ beq lbl_800A1A78
/* 800A1520 0009E460  28 19 00 00 */ cmplwi r25, 0
/* 800A1524 0009E464  41 82 05 54 */ beq lbl_800A1A78
/* 800A1528 0009E468  A0 1F 1F BC */ lhz r0, 0x1fbc(r31)
/* 800A152C 0009E46C  28 00 02 A7 */ cmplwi r0, 0x2a7
/* 800A1530 0009E470  41 82 05 48 */ beq lbl_800A1A78
/* 800A1534 0009E474  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800A1538 0009E478  28 00 00 AD */ cmplwi r0, 0xad
/* 800A153C 0009E47C  41 82 05 3C */ beq lbl_800A1A78
/* 800A1540 0009E480  38 61 00 18 */ addi r3, r1, 0x18
/* 800A1544 0009E484  7F 24 CB 78 */ mr r4, r25
/* 800A1548 0009E488  38 BF 34 E0 */ addi r5, r31, 0x34e0
/* 800A154C 0009E48C  48 1C 55 E9 */ bl __mi__4cXyzCFRC3Vec
/* 800A1550 0009E490  C0 01 00 18 */ lfs f0, 0x18(r1)
/* 800A1554 0009E494  D0 01 00 30 */ stfs f0, 0x30(r1)
/* 800A1558 0009E498  C0 01 00 1C */ lfs f0, 0x1c(r1)
/* 800A155C 0009E49C  D0 01 00 34 */ stfs f0, 0x34(r1)
/* 800A1560 0009E4A0  C0 01 00 20 */ lfs f0, 0x20(r1)
/* 800A1564 0009E4A4  D0 01 00 38 */ stfs f0, 0x38(r1)
/* 800A1568 0009E4A8  7F E3 FB 78 */ mr r3, r31
/* 800A156C 0009E4AC  38 81 00 30 */ addi r4, r1, 0x30
/* 800A1570 0009E4B0  48 04 0F 0D */ bl multVecMagneBootInvMtx__9daAlink_cFP4cXyz
/* 800A1574 0009E4B4  38 61 00 30 */ addi r3, r1, 0x30
/* 800A1578 0009E4B8  48 1C 5B D9 */ bl atan2sY_XZ__4cXyzCFv
/* 800A157C 0009E4BC  7C 79 1B 78 */ mr r25, r3
/* 800A1580 0009E4C0  38 61 00 30 */ addi r3, r1, 0x30
/* 800A1584 0009E4C4  48 1C 5B A5 */ bl atan2sX_Z__4cXyzCFv
/* 800A1588 0009E4C8  7C 15 18 50 */ subf r0, r21, r3
/* 800A158C 0009E4CC  7C 1A 07 34 */ extsh r26, r0
/* 800A1590 0009E4D0  2C 1A 70 00 */ cmpwi r26, 0x7000
/* 800A1594 0009E4D4  40 81 00 10 */ ble lbl_800A15A4
/* 800A1598 0009E4D8  A8 1F 31 26 */ lha r0, 0x3126(r31)
/* 800A159C 0009E4DC  2C 00 00 00 */ cmpwi r0, 0
/* 800A15A0 0009E4E0  41 80 00 18 */ blt lbl_800A15B8
lbl_800A15A4:
/* 800A15A4 0009E4E4  2C 1A 90 00 */ cmpwi r26, -28672
/* 800A15A8 0009E4E8  40 80 00 18 */ bge lbl_800A15C0
/* 800A15AC 0009E4EC  A8 1F 31 26 */ lha r0, 0x3126(r31)
/* 800A15B0 0009E4F0  2C 00 00 00 */ cmpwi r0, 0
/* 800A15B4 0009E4F4  40 81 00 0C */ ble lbl_800A15C0
lbl_800A15B8:
/* 800A15B8 0009E4F8  1C 1A FF FF */ mulli r0, r26, -1
/* 800A15BC 0009E4FC  7C 1A 07 34 */ extsh r26, r0
lbl_800A15C0:
/* 800A15C0 0009E500  7F 55 D3 78 */ mr r21, r26
/* 800A15C4 0009E504  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 800A15C8 0009E508  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800A15CC 0009E50C  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800A15D0 0009E510  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800A15D4 0009E514  C0 01 00 38 */ lfs f0, 0x38(r1)
/* 800A15D8 0009E518  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 800A15DC 0009E51C  38 61 00 0C */ addi r3, r1, 0xc
/* 800A15E0 0009E520  48 2A 5B 59 */ bl PSVECSquareMag
/* 800A15E4 0009E524  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800A15E8 0009E528  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800A15EC 0009E52C  40 81 00 58 */ ble lbl_800A1644
/* 800A15F0 0009E530  FC 00 08 34 */ frsqrte f0, f1
/* 800A15F4 0009E534  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800A15F8 0009E538  FC 44 00 32 */ fmul f2, f4, f0
/* 800A15FC 0009E53C  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800A1600 0009E540  FC 00 00 32 */ fmul f0, f0, f0
/* 800A1604 0009E544  FC 01 00 32 */ fmul f0, f1, f0
/* 800A1608 0009E548  FC 03 00 28 */ fsub f0, f3, f0
/* 800A160C 0009E54C  FC 02 00 32 */ fmul f0, f2, f0
/* 800A1610 0009E550  FC 44 00 32 */ fmul f2, f4, f0
/* 800A1614 0009E554  FC 00 00 32 */ fmul f0, f0, f0
/* 800A1618 0009E558  FC 01 00 32 */ fmul f0, f1, f0
/* 800A161C 0009E55C  FC 03 00 28 */ fsub f0, f3, f0
/* 800A1620 0009E560  FC 02 00 32 */ fmul f0, f2, f0
/* 800A1624 0009E564  FC 44 00 32 */ fmul f2, f4, f0
/* 800A1628 0009E568  FC 00 00 32 */ fmul f0, f0, f0
/* 800A162C 0009E56C  FC 01 00 32 */ fmul f0, f1, f0
/* 800A1630 0009E570  FC 03 00 28 */ fsub f0, f3, f0
/* 800A1634 0009E574  FC 02 00 32 */ fmul f0, f2, f0
/* 800A1638 0009E578  FC 21 00 32 */ fmul f1, f1, f0
/* 800A163C 0009E57C  FC 20 08 18 */ frsp f1, f1
/* 800A1640 0009E580  48 00 00 88 */ b lbl_800A16C8
lbl_800A1644:
/* 800A1644 0009E584  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800A1648 0009E588  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800A164C 0009E58C  40 80 00 10 */ bge lbl_800A165C
/* 800A1650 0009E590  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800A1654 0009E594  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 800A1658 0009E598  48 00 00 70 */ b lbl_800A16C8
lbl_800A165C:
/* 800A165C 0009E59C  D0 21 00 08 */ stfs f1, 8(r1)
/* 800A1660 0009E5A0  80 81 00 08 */ lwz r4, 8(r1)
/* 800A1664 0009E5A4  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800A1668 0009E5A8  3C 00 7F 80 */ lis r0, 0x7f80
/* 800A166C 0009E5AC  7C 03 00 00 */ cmpw r3, r0
/* 800A1670 0009E5B0  41 82 00 14 */ beq lbl_800A1684
/* 800A1674 0009E5B4  40 80 00 40 */ bge lbl_800A16B4
/* 800A1678 0009E5B8  2C 03 00 00 */ cmpwi r3, 0
/* 800A167C 0009E5BC  41 82 00 20 */ beq lbl_800A169C
/* 800A1680 0009E5C0  48 00 00 34 */ b lbl_800A16B4
lbl_800A1684:
/* 800A1684 0009E5C4  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800A1688 0009E5C8  41 82 00 0C */ beq lbl_800A1694
/* 800A168C 0009E5CC  38 00 00 01 */ li r0, 1
/* 800A1690 0009E5D0  48 00 00 28 */ b lbl_800A16B8
lbl_800A1694:
/* 800A1694 0009E5D4  38 00 00 02 */ li r0, 2
/* 800A1698 0009E5D8  48 00 00 20 */ b lbl_800A16B8
lbl_800A169C:
/* 800A169C 0009E5DC  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800A16A0 0009E5E0  41 82 00 0C */ beq lbl_800A16AC
/* 800A16A4 0009E5E4  38 00 00 05 */ li r0, 5
/* 800A16A8 0009E5E8  48 00 00 10 */ b lbl_800A16B8
lbl_800A16AC:
/* 800A16AC 0009E5EC  38 00 00 03 */ li r0, 3
/* 800A16B0 0009E5F0  48 00 00 08 */ b lbl_800A16B8
lbl_800A16B4:
/* 800A16B4 0009E5F4  38 00 00 04 */ li r0, 4
lbl_800A16B8:
/* 800A16B8 0009E5F8  2C 00 00 01 */ cmpwi r0, 1
/* 800A16BC 0009E5FC  40 82 00 0C */ bne lbl_800A16C8
/* 800A16C0 0009E600  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800A16C4 0009E604  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_800A16C8:
/* 800A16C8 0009E608  C0 02 92 E0 */ lfs f0, lbl_80452CE0-_SDA2_BASE_(r2)
/* 800A16CC 0009E60C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800A16D0 0009E610  40 80 00 08 */ bge lbl_800A16D8
/* 800A16D4 0009E614  AB 5F 31 26 */ lha r26, 0x3126(r31)
lbl_800A16D8:
/* 800A16D8 0009E618  80 1F 05 74 */ lwz r0, 0x574(r31)
/* 800A16DC 0009E61C  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800A16E0 0009E620  41 82 00 FC */ beq lbl_800A17DC
/* 800A16E4 0009E624  A0 7F 2F E8 */ lhz r3, 0x2fe8(r31)
/* 800A16E8 0009E628  28 03 00 EF */ cmplwi r3, 0xef
/* 800A16EC 0009E62C  40 82 00 7C */ bne lbl_800A1768
/* 800A16F0 0009E630  3C 60 80 39 */ lis r3, lbl_8038F9F8@ha
/* 800A16F4 0009E634  38 63 F9 F8 */ addi r3, r3, lbl_8038F9F8@l
/* 800A16F8 0009E638  A8 83 00 0A */ lha r4, 0xa(r3)
/* 800A16FC 0009E63C  A8 63 00 08 */ lha r3, 8(r3)
/* 800A1700 0009E640  7F 25 07 34 */ extsh r5, r25
/* 800A1704 0009E644  7C 05 18 00 */ cmpw r5, r3
/* 800A1708 0009E648  40 80 00 08 */ bge lbl_800A1710
/* 800A170C 0009E64C  48 00 00 18 */ b lbl_800A1724
lbl_800A1710:
/* 800A1710 0009E650  7C 83 07 34 */ extsh r3, r4
/* 800A1714 0009E654  7C 05 18 00 */ cmpw r5, r3
/* 800A1718 0009E658  40 81 00 08 */ ble lbl_800A1720
/* 800A171C 0009E65C  7C 85 23 78 */ mr r5, r4
lbl_800A1720:
/* 800A1720 0009E660  7C A3 2B 78 */ mr r3, r5
lbl_800A1724:
/* 800A1724 0009E664  7C 63 07 34 */ extsh r3, r3
/* 800A1728 0009E668  3C 80 80 39 */ lis r4, lbl_8038F9F8@ha
/* 800A172C 0009E66C  38 84 F9 F8 */ addi r4, r4, lbl_8038F9F8@l
/* 800A1730 0009E670  A8 A4 00 06 */ lha r5, 6(r4)
/* 800A1734 0009E674  7C 85 00 D0 */ neg r4, r5
/* 800A1738 0009E678  7C 84 07 34 */ extsh r4, r4
/* 800A173C 0009E67C  7F 46 07 34 */ extsh r6, r26
/* 800A1740 0009E680  7C 06 20 00 */ cmpw r6, r4
/* 800A1744 0009E684  40 80 00 08 */ bge lbl_800A174C
/* 800A1748 0009E688  48 00 00 18 */ b lbl_800A1760
lbl_800A174C:
/* 800A174C 0009E68C  7C A4 07 34 */ extsh r4, r5
/* 800A1750 0009E690  7C 06 20 00 */ cmpw r6, r4
/* 800A1754 0009E694  40 81 00 08 */ ble lbl_800A175C
/* 800A1758 0009E698  7C A6 2B 78 */ mr r6, r5
lbl_800A175C:
/* 800A175C 0009E69C  7C C4 33 78 */ mr r4, r6
lbl_800A1760:
/* 800A1760 0009E6A0  7C 86 07 34 */ extsh r6, r4
/* 800A1764 0009E6A4  48 00 01 60 */ b lbl_800A18C4
lbl_800A1768:
/* 800A1768 0009E6A8  3C 60 80 39 */ lis r3, lbl_8038F9F8@ha
/* 800A176C 0009E6AC  38 63 F9 F8 */ addi r3, r3, lbl_8038F9F8@l
/* 800A1770 0009E6B0  A8 83 00 04 */ lha r4, 4(r3)
/* 800A1774 0009E6B4  A8 63 00 02 */ lha r3, 2(r3)
/* 800A1778 0009E6B8  7F 25 07 34 */ extsh r5, r25
/* 800A177C 0009E6BC  7C 05 18 00 */ cmpw r5, r3
/* 800A1780 0009E6C0  40 80 00 08 */ bge lbl_800A1788
/* 800A1784 0009E6C4  48 00 00 18 */ b lbl_800A179C
lbl_800A1788:
/* 800A1788 0009E6C8  7C 83 07 34 */ extsh r3, r4
/* 800A178C 0009E6CC  7C 05 18 00 */ cmpw r5, r3
/* 800A1790 0009E6D0  40 81 00 08 */ ble lbl_800A1798
/* 800A1794 0009E6D4  7C 85 23 78 */ mr r5, r4
lbl_800A1798:
/* 800A1798 0009E6D8  7C A3 2B 78 */ mr r3, r5
lbl_800A179C:
/* 800A179C 0009E6DC  7C 63 07 34 */ extsh r3, r3
/* 800A17A0 0009E6E0  3C 80 80 39 */ lis r4, lbl_8038F9F8@ha
/* 800A17A4 0009E6E4  A8 A4 F9 F8 */ lha r5, lbl_8038F9F8@l(r4)
/* 800A17A8 0009E6E8  7C 85 00 D0 */ neg r4, r5
/* 800A17AC 0009E6EC  7C 84 07 34 */ extsh r4, r4
/* 800A17B0 0009E6F0  7F 46 07 34 */ extsh r6, r26
/* 800A17B4 0009E6F4  7C 06 20 00 */ cmpw r6, r4
/* 800A17B8 0009E6F8  40 80 00 08 */ bge lbl_800A17C0
/* 800A17BC 0009E6FC  48 00 00 18 */ b lbl_800A17D4
lbl_800A17C0:
/* 800A17C0 0009E700  7C A4 07 34 */ extsh r4, r5
/* 800A17C4 0009E704  7C 06 20 00 */ cmpw r6, r4
/* 800A17C8 0009E708  40 81 00 08 */ ble lbl_800A17D0
/* 800A17CC 0009E70C  7C A6 2B 78 */ mr r6, r5
lbl_800A17D0:
/* 800A17D0 0009E710  7C C4 33 78 */ mr r4, r6
lbl_800A17D4:
/* 800A17D4 0009E714  7C 86 07 34 */ extsh r6, r4
/* 800A17D8 0009E718  48 00 00 EC */ b lbl_800A18C4
lbl_800A17DC:
/* 800A17DC 0009E71C  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800A17E0 0009E720  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800A17E4 0009E724  A8 83 00 06 */ lha r4, 6(r3)
/* 800A17E8 0009E728  A8 63 00 04 */ lha r3, 4(r3)
/* 800A17EC 0009E72C  7F 25 07 34 */ extsh r5, r25
/* 800A17F0 0009E730  7C 05 18 00 */ cmpw r5, r3
/* 800A17F4 0009E734  40 80 00 08 */ bge lbl_800A17FC
/* 800A17F8 0009E738  48 00 00 18 */ b lbl_800A1810
lbl_800A17FC:
/* 800A17FC 0009E73C  7C 83 07 34 */ extsh r3, r4
/* 800A1800 0009E740  7C 05 18 00 */ cmpw r5, r3
/* 800A1804 0009E744  40 81 00 08 */ ble lbl_800A180C
/* 800A1808 0009E748  7C 85 23 78 */ mr r5, r4
lbl_800A180C:
/* 800A180C 0009E74C  7C A3 2B 78 */ mr r3, r5
lbl_800A1810:
/* 800A1810 0009E750  7C 63 07 34 */ extsh r3, r3
/* 800A1814 0009E754  3C 80 80 40 */ lis r4, g_dComIfG_gameInfo@ha
/* 800A1818 0009E758  38 84 61 C0 */ addi r4, r4, g_dComIfG_gameInfo@l
/* 800A181C 0009E75C  80 84 5F 1C */ lwz r4, 0x5f1c(r4)
/* 800A1820 0009E760  54 84 01 8D */ rlwinm. r4, r4, 0, 6, 6
/* 800A1824 0009E764  41 82 00 40 */ beq lbl_800A1864
/* 800A1828 0009E768  A8 9F 30 20 */ lha r4, 0x3020(r31)
/* 800A182C 0009E76C  2C 04 00 01 */ cmpwi r4, 1
/* 800A1830 0009E770  40 82 00 18 */ bne lbl_800A1848
/* 800A1834 0009E774  38 C0 F0 00 */ li r6, -4096
/* 800A1838 0009E778  3C 80 80 39 */ lis r4, lbl_8038D664@ha
/* 800A183C 0009E77C  38 84 D6 64 */ addi r4, r4, lbl_8038D664@l
/* 800A1840 0009E780  A8 E4 00 02 */ lha r7, 2(r4)
/* 800A1844 0009E784  48 00 00 54 */ b lbl_800A1898
lbl_800A1848:
/* 800A1848 0009E788  3C 80 80 39 */ lis r4, lbl_8038D664@ha
/* 800A184C 0009E78C  38 84 D6 64 */ addi r4, r4, lbl_8038D664@l
/* 800A1850 0009E790  A8 84 00 02 */ lha r4, 2(r4)
/* 800A1854 0009E794  7C 84 00 D0 */ neg r4, r4
/* 800A1858 0009E798  7C 86 07 34 */ extsh r6, r4
/* 800A185C 0009E79C  38 E0 10 00 */ li r7, 0x1000
/* 800A1860 0009E7A0  48 00 00 38 */ b lbl_800A1898
lbl_800A1864:
/* 800A1864 0009E7A4  A0 9F 1F BC */ lhz r4, 0x1fbc(r31)
/* 800A1868 0009E7A8  28 04 00 60 */ cmplwi r4, 0x60
/* 800A186C 0009E7AC  40 82 00 0C */ bne lbl_800A1878
/* 800A1870 0009E7B0  38 C0 00 00 */ li r6, 0
/* 800A1874 0009E7B4  48 00 00 18 */ b lbl_800A188C
lbl_800A1878:
/* 800A1878 0009E7B8  3C 80 80 39 */ lis r4, lbl_8038D664@ha
/* 800A187C 0009E7BC  38 84 D6 64 */ addi r4, r4, lbl_8038D664@l
/* 800A1880 0009E7C0  A8 84 00 02 */ lha r4, 2(r4)
/* 800A1884 0009E7C4  7C 84 00 D0 */ neg r4, r4
/* 800A1888 0009E7C8  7C 86 07 34 */ extsh r6, r4
lbl_800A188C:
/* 800A188C 0009E7CC  3C 80 80 39 */ lis r4, lbl_8038D664@ha
/* 800A1890 0009E7D0  38 84 D6 64 */ addi r4, r4, lbl_8038D664@l
/* 800A1894 0009E7D4  A8 E4 00 02 */ lha r7, 2(r4)
lbl_800A1898:
/* 800A1898 0009E7D8  7F 45 07 34 */ extsh r5, r26
/* 800A189C 0009E7DC  7C C4 07 34 */ extsh r4, r6
/* 800A18A0 0009E7E0  7C 05 20 00 */ cmpw r5, r4
/* 800A18A4 0009E7E4  40 80 00 0C */ bge lbl_800A18B0
/* 800A18A8 0009E7E8  7C C5 33 78 */ mr r5, r6
/* 800A18AC 0009E7EC  48 00 00 14 */ b lbl_800A18C0
lbl_800A18B0:
/* 800A18B0 0009E7F0  7C E4 07 34 */ extsh r4, r7
/* 800A18B4 0009E7F4  7C 05 20 00 */ cmpw r5, r4
/* 800A18B8 0009E7F8  40 81 00 08 */ ble lbl_800A18C0
/* 800A18BC 0009E7FC  7C E5 3B 78 */ mr r5, r7
lbl_800A18C0:
/* 800A18C0 0009E800  7C A6 07 34 */ extsh r6, r5
lbl_800A18C4:
/* 800A18C4 0009E804  7C 63 07 34 */ extsh r3, r3
/* 800A18C8 0009E808  7C 94 18 50 */ subf r4, r20, r3
/* 800A18CC 0009E80C  7C 85 07 34 */ extsh r5, r4
/* 800A18D0 0009E810  7C C4 07 34 */ extsh r4, r6
/* 800A18D4 0009E814  7C D8 20 50 */ subf r6, r24, r4
/* 800A18D8 0009E818  7C C6 07 34 */ extsh r6, r6
/* 800A18DC 0009E81C  80 FF 31 A0 */ lwz r7, 0x31a0(r31)
/* 800A18E0 0009E820  54 E7 05 EF */ rlwinm. r7, r7, 0, 0x17, 0x17
/* 800A18E4 0009E824  41 82 01 2C */ beq lbl_800A1A10
/* 800A18E8 0009E828  28 00 00 00 */ cmplwi r0, 0
/* 800A18EC 0009E82C  41 82 00 7C */ beq lbl_800A1968
/* 800A18F0 0009E830  C0 42 94 D0 */ lfs f2, lbl_80452ED0-_SDA2_BASE_(r2)
/* 800A18F4 0009E834  C8 22 92 B0 */ lfd f1, lbl_80452CB0-_SDA2_BASE_(r2)
/* 800A18F8 0009E838  6C A0 80 00 */ xoris r0, r5, 0x8000
/* 800A18FC 0009E83C  90 01 00 4C */ stw r0, 0x4c(r1)
/* 800A1900 0009E840  3C E0 43 30 */ lis r7, 0x4330
/* 800A1904 0009E844  90 E1 00 48 */ stw r7, 0x48(r1)
/* 800A1908 0009E848  C8 01 00 48 */ lfd f0, 0x48(r1)
/* 800A190C 0009E84C  EC 00 08 28 */ fsubs f0, f0, f1
/* 800A1910 0009E850  EC 02 00 32 */ fmuls f0, f2, f0
/* 800A1914 0009E854  FC 00 00 1E */ fctiwz f0, f0
/* 800A1918 0009E858  D8 01 00 50 */ stfd f0, 0x50(r1)
/* 800A191C 0009E85C  80 01 00 54 */ lwz r0, 0x54(r1)
/* 800A1920 0009E860  B0 1B 00 00 */ sth r0, 0(r27)
/* 800A1924 0009E864  6C C0 80 00 */ xoris r0, r6, 0x8000
/* 800A1928 0009E868  90 01 00 5C */ stw r0, 0x5c(r1)
/* 800A192C 0009E86C  90 E1 00 58 */ stw r7, 0x58(r1)
/* 800A1930 0009E870  C8 01 00 58 */ lfd f0, 0x58(r1)
/* 800A1934 0009E874  EC 00 08 28 */ fsubs f0, f0, f1
/* 800A1938 0009E878  EC 02 00 32 */ fmuls f0, f2, f0
/* 800A193C 0009E87C  FC 00 00 1E */ fctiwz f0, f0
/* 800A1940 0009E880  D8 01 00 60 */ stfd f0, 0x60(r1)
/* 800A1944 0009E884  80 01 00 64 */ lwz r0, 0x64(r1)
/* 800A1948 0009E888  B0 1E 00 00 */ sth r0, 0(r30)
/* 800A194C 0009E88C  A8 1B 00 00 */ lha r0, 0(r27)
/* 800A1950 0009E890  7C 00 28 50 */ subf r0, r0, r5
/* 800A1954 0009E894  B0 1D 00 00 */ sth r0, 0(r29)
/* 800A1958 0009E898  A8 1E 00 00 */ lha r0, 0(r30)
/* 800A195C 0009E89C  7C 00 30 50 */ subf r0, r0, r6
/* 800A1960 0009E8A0  B0 1C 00 00 */ sth r0, 0(r28)
/* 800A1964 0009E8A4  48 00 00 B4 */ b lbl_800A1A18
lbl_800A1968:
/* 800A1968 0009E8A8  88 1F 2F C8 */ lbz r0, 0x2fc8(r31)
/* 800A196C 0009E8AC  28 00 00 00 */ cmplwi r0, 0
/* 800A1970 0009E8B0  41 82 00 7C */ beq lbl_800A19EC
/* 800A1974 0009E8B4  C0 22 94 E0 */ lfs f1, lbl_80452EE0-_SDA2_BASE_(r2)
/* 800A1978 0009E8B8  C8 42 92 B0 */ lfd f2, lbl_80452CB0-_SDA2_BASE_(r2)
/* 800A197C 0009E8BC  6C A0 80 00 */ xoris r0, r5, 0x8000
/* 800A1980 0009E8C0  90 01 00 64 */ stw r0, 0x64(r1)
/* 800A1984 0009E8C4  3C E0 43 30 */ lis r7, 0x4330
/* 800A1988 0009E8C8  90 E1 00 60 */ stw r7, 0x60(r1)
/* 800A198C 0009E8CC  C8 01 00 60 */ lfd f0, 0x60(r1)
/* 800A1990 0009E8D0  EC 00 10 28 */ fsubs f0, f0, f2
/* 800A1994 0009E8D4  EC 01 00 32 */ fmuls f0, f1, f0
/* 800A1998 0009E8D8  FC 00 00 1E */ fctiwz f0, f0
/* 800A199C 0009E8DC  D8 01 00 58 */ stfd f0, 0x58(r1)
/* 800A19A0 0009E8E0  80 01 00 5C */ lwz r0, 0x5c(r1)
/* 800A19A4 0009E8E4  B0 1B 00 00 */ sth r0, 0(r27)
/* 800A19A8 0009E8E8  C0 22 92 98 */ lfs f1, lbl_80452C98-_SDA2_BASE_(r2)
/* 800A19AC 0009E8EC  6C C0 80 00 */ xoris r0, r6, 0x8000
/* 800A19B0 0009E8F0  90 01 00 54 */ stw r0, 0x54(r1)
/* 800A19B4 0009E8F4  90 E1 00 50 */ stw r7, 0x50(r1)
/* 800A19B8 0009E8F8  C8 01 00 50 */ lfd f0, 0x50(r1)
/* 800A19BC 0009E8FC  EC 00 10 28 */ fsubs f0, f0, f2
/* 800A19C0 0009E900  EC 01 00 32 */ fmuls f0, f1, f0
/* 800A19C4 0009E904  FC 00 00 1E */ fctiwz f0, f0
/* 800A19C8 0009E908  D8 01 00 48 */ stfd f0, 0x48(r1)
/* 800A19CC 0009E90C  80 01 00 4C */ lwz r0, 0x4c(r1)
/* 800A19D0 0009E910  B0 1E 00 00 */ sth r0, 0(r30)
/* 800A19D4 0009E914  A8 1B 00 00 */ lha r0, 0(r27)
/* 800A19D8 0009E918  7C 00 28 50 */ subf r0, r0, r5
/* 800A19DC 0009E91C  B0 1D 00 00 */ sth r0, 0(r29)
/* 800A19E0 0009E920  A8 1E 00 00 */ lha r0, 0(r30)
/* 800A19E4 0009E924  B0 1C 00 00 */ sth r0, 0(r28)
/* 800A19E8 0009E928  48 00 00 30 */ b lbl_800A1A18
lbl_800A19EC:
/* 800A19EC 0009E92C  7C A0 0E 70 */ srawi r0, r5, 1
/* 800A19F0 0009E930  B0 1D 00 00 */ sth r0, 0(r29)
/* 800A19F4 0009E934  7C C0 0E 70 */ srawi r0, r6, 1
/* 800A19F8 0009E938  B0 1C 00 00 */ sth r0, 0(r28)
/* 800A19FC 0009E93C  A8 1D 00 00 */ lha r0, 0(r29)
/* 800A1A00 0009E940  B0 1B 00 00 */ sth r0, 0(r27)
/* 800A1A04 0009E944  A8 1C 00 00 */ lha r0, 0(r28)
/* 800A1A08 0009E948  B0 1E 00 00 */ sth r0, 0(r30)
/* 800A1A0C 0009E94C  48 00 00 0C */ b lbl_800A1A18
lbl_800A1A10:
/* 800A1A10 0009E950  B0 BD 00 00 */ sth r5, 0(r29)
/* 800A1A14 0009E954  B0 DC 00 00 */ sth r6, 0(r28)
lbl_800A1A18:
/* 800A1A18 0009E958  A8 BD 00 00 */ lha r5, 0(r29)
/* 800A1A1C 0009E95C  7F 26 07 34 */ extsh r6, r25
/* 800A1A20 0009E960  7C 03 30 50 */ subf r0, r3, r6
/* 800A1A24 0009E964  7C 00 07 34 */ extsh r0, r0
/* 800A1A28 0009E968  7C 05 02 14 */ add r0, r5, r0
/* 800A1A2C 0009E96C  B0 1D 00 00 */ sth r0, 0(r29)
/* 800A1A30 0009E970  A8 7C 00 00 */ lha r3, 0(r28)
/* 800A1A34 0009E974  7C 04 A8 50 */ subf r0, r4, r21
/* 800A1A38 0009E978  7C 00 07 34 */ extsh r0, r0
/* 800A1A3C 0009E97C  7C 03 02 14 */ add r0, r3, r0
/* 800A1A40 0009E980  B0 1C 00 00 */ sth r0, 0(r28)
/* 800A1A44 0009E984  80 1F 05 88 */ lwz r0, 0x588(r31)
/* 800A1A48 0009E988  54 00 04 63 */ rlwinm. r0, r0, 0, 0x11, 0x11
/* 800A1A4C 0009E98C  41 82 00 84 */ beq lbl_800A1AD0
/* 800A1A50 0009E990  3C 66 00 01 */ addis r3, r6, 1
/* 800A1A54 0009E994  38 03 80 00 */ addi r0, r3, -32768
/* 800A1A58 0009E998  7C 16 00 50 */ subf r0, r22, r0
/* 800A1A5C 0009E99C  B0 1D 00 00 */ sth r0, 0(r29)
/* 800A1A60 0009E9A0  A8 7F 30 CC */ lha r3, 0x30cc(r31)
/* 800A1A64 0009E9A4  3C 63 00 01 */ addis r3, r3, 1
/* 800A1A68 0009E9A8  38 03 80 00 */ addi r0, r3, -32768
/* 800A1A6C 0009E9AC  7C 17 00 50 */ subf r0, r23, r0
/* 800A1A70 0009E9B0  B0 1C 00 00 */ sth r0, 0(r28)
/* 800A1A74 0009E9B4  48 00 00 5C */ b lbl_800A1AD0
lbl_800A1A78:
/* 800A1A78 0009E9B8  80 1F 05 70 */ lwz r0, 0x570(r31)
/* 800A1A7C 0009E9BC  54 00 04 E7 */ rlwinm. r0, r0, 0, 0x13, 0x13
/* 800A1A80 0009E9C0  41 82 00 18 */ beq lbl_800A1A98
/* 800A1A84 0009E9C4  38 00 00 00 */ li r0, 0
/* 800A1A88 0009E9C8  B0 1B 00 00 */ sth r0, 0(r27)
/* 800A1A8C 0009E9CC  B0 1E 00 00 */ sth r0, 0(r30)
/* 800A1A90 0009E9D0  B0 1F 30 D4 */ sth r0, 0x30d4(r31)
/* 800A1A94 0009E9D4  48 00 00 3C */ b lbl_800A1AD0
lbl_800A1A98:
/* 800A1A98 0009E9D8  A8 1F 30 A0 */ lha r0, 0x30a0(r31)
/* 800A1A9C 0009E9DC  B0 1B 00 00 */ sth r0, 0(r27)
/* 800A1AA0 0009E9E0  A8 1F 30 A2 */ lha r0, 0x30a2(r31)
/* 800A1AA4 0009E9E4  B0 1E 00 00 */ sth r0, 0(r30)
/* 800A1AA8 0009E9E8  80 1F 05 74 */ lwz r0, 0x574(r31)
/* 800A1AAC 0009E9EC  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800A1AB0 0009E9F0  41 82 00 18 */ beq lbl_800A1AC8
/* 800A1AB4 0009E9F4  A8 1E 00 00 */ lha r0, 0(r30)
/* 800A1AB8 0009E9F8  2C 00 00 00 */ cmpwi r0, 0
/* 800A1ABC 0009E9FC  40 82 00 0C */ bne lbl_800A1AC8
/* 800A1AC0 0009EA00  A8 1F 2F EC */ lha r0, 0x2fec(r31)
/* 800A1AC4 0009EA04  B0 1E 00 00 */ sth r0, 0(r30)
lbl_800A1AC8:
/* 800A1AC8 0009EA08  A8 1E 00 00 */ lha r0, 0(r30)
/* 800A1ACC 0009EA0C  B0 1F 30 D4 */ sth r0, 0x30d4(r31)
lbl_800A1AD0:
/* 800A1AD0 0009EA10  7F 03 C3 78 */ mr r3, r24
/* 800A1AD4 0009EA14  39 61 00 A0 */ addi r11, r1, 0xa0
/* 800A1AD8 0009EA18  48 2C 07 2D */ bl _restgpr_20
/* 800A1ADC 0009EA1C  80 01 00 A4 */ lwz r0, 0xa4(r1)
/* 800A1AE0 0009EA20  7C 08 03 A6 */ mtlr r0
/* 800A1AE4 0009EA24  38 21 00 A0 */ addi r1, r1, 0xa0
/* 800A1AE8 0009EA28  4E 80 00 20 */ blr
