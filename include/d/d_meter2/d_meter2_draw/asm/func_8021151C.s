/* 8021151C 0020E45C  94 21 FE E0 */ stwu r1, -0x120(r1)
/* 80211520 0020E460  7C 08 02 A6 */ mflr r0
/* 80211524 0020E464  90 01 01 24 */ stw r0, 0x124(r1)
/* 80211528 0020E468  DB E1 01 10 */ stfd f31, 0x110(r1)
/* 8021152C 0020E46C  F3 E1 01 18 */ psq_st f31, 280(r1), 0, 0
/* 80211530 0020E470  DB C1 01 00 */ stfd f30, 0x100(r1)
/* 80211534 0020E474  F3 C1 01 08 */ psq_st f30, 264(r1), 0, 0
/* 80211538 0020E478  DB A1 00 F0 */ stfd f29, 0xf0(r1)
/* 8021153C 0020E47C  F3 A1 00 F8 */ psq_st f29, 248(r1), 0, 0
/* 80211540 0020E480  DB 81 00 E0 */ stfd f28, 0xe0(r1)
/* 80211544 0020E484  F3 81 00 E8 */ psq_st f28, 232(r1), 0, 0
/* 80211548 0020E488  39 61 00 E0 */ addi r11, r1, 0xe0
/* 8021154C 0020E48C  48 15 0C 71 */ bl _savegpr_21
/* 80211550 0020E490  7C 79 1B 78 */ mr r25, r3
/* 80211554 0020E494  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80211558 0020E498  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8021155C 0020E49C  82 A3 5F 50 */ lwz r21, 0x5f50(r3)
/* 80211560 0020E4A0  7E A3 AB 78 */ mr r3, r21
/* 80211564 0020E4A4  81 95 00 00 */ lwz r12, 0(r21)
/* 80211568 0020E4A8  81 8C 00 18 */ lwz r12, 0x18(r12)
/* 8021156C 0020E4AC  7D 89 03 A6 */ mtctr r12
/* 80211570 0020E4B0  4E 80 04 21 */ bctrl
/* 80211574 0020E4B4  80 79 00 78 */ lwz r3, 0x78(r25)
/* 80211578 0020E4B8  C0 22 AE 80 */ lfs f1, lbl_80454880-_SDA2_BASE_(r2)
/* 8021157C 0020E4BC  FC 40 08 90 */ fmr f2, f1
/* 80211580 0020E4C0  7E A4 AB 78 */ mr r4, r21
/* 80211584 0020E4C4  48 0E 79 51 */ bl J2DScreen_NS_draw
/* 80211588 0020E4C8  7F 23 CB 78 */ mr r3, r25
/* 8021158C 0020E4CC  38 80 00 01 */ li r4, 1
/* 80211590 0020E4D0  48 00 39 25 */ bl dMeter2Draw_c_NS_drawKanteraScreen
/* 80211594 0020E4D4  7F 23 CB 78 */ mr r3, r25
/* 80211598 0020E4D8  38 80 00 02 */ li r4, 2
/* 8021159C 0020E4DC  48 00 39 19 */ bl dMeter2Draw_c_NS_drawKanteraScreen
/* 802115A0 0020E4E0  3B 60 00 00 */ li r27, 0
/* 802115A4 0020E4E4  3A E0 00 00 */ li r23, 0
/* 802115A8 0020E4E8  3B 00 00 00 */ li r24, 0
/* 802115AC 0020E4EC  3B 40 00 00 */ li r26, 0
lbl_802115B0:
/* 802115B0 0020E4F0  3B 9A 03 2C */ addi r28, r26, 0x32c
/* 802115B4 0020E4F4  7C 19 E0 2E */ lwzx r0, r25, r28
/* 802115B8 0020E4F8  28 00 00 00 */ cmplwi r0, 0
/* 802115BC 0020E4FC  41 82 01 24 */ beq lbl_802116E0
/* 802115C0 0020E500  3B E0 00 00 */ li r31, 0
/* 802115C4 0020E504  3A C0 00 00 */ li r22, 0
/* 802115C8 0020E508  7F B9 C2 14 */ add r29, r25, r24
/* 802115CC 0020E50C  7F D9 BA 14 */ add r30, r25, r23
/* 802115D0 0020E510  C3 E2 AE 90 */ lfs f31, lbl_80454890-_SDA2_BASE_(r2)
/* 802115D4 0020E514  C3 82 AE 94 */ lfs f28, lbl_80454894-_SDA2_BASE_(r2)
/* 802115D8 0020E518  CB A2 AE A0 */ lfd f29, lbl_804548A0-_SDA2_BASE_(r2)
/* 802115DC 0020E51C  3E A0 43 30 */ lis r21, 0x4330
lbl_802115E0:
/* 802115E0 0020E520  C0 1D 00 1C */ lfs f0, 0x1c(r29)
/* 802115E4 0020E524  EF DF 00 32 */ fmuls f30, f31, f0
/* 802115E8 0020E528  7C 79 E0 2E */ lwzx r3, r25, r28
/* 802115EC 0020E52C  80 83 00 04 */ lwz r4, 4(r3)
/* 802115F0 0020E530  38 61 00 84 */ addi r3, r1, 0x84
/* 802115F4 0020E534  38 A0 00 00 */ li r5, 0
/* 802115F8 0020E538  48 0E 63 B1 */ bl J2DPane_NS_getGlbVtx
/* 802115FC 0020E53C  80 61 00 84 */ lwz r3, 0x84(r1)
/* 80211600 0020E540  80 01 00 88 */ lwz r0, 0x88(r1)
/* 80211604 0020E544  90 61 00 9C */ stw r3, 0x9c(r1)
/* 80211608 0020E548  90 01 00 A0 */ stw r0, 0xa0(r1)
/* 8021160C 0020E54C  80 01 00 8C */ lwz r0, 0x8c(r1)
/* 80211610 0020E550  90 01 00 A4 */ stw r0, 0xa4(r1)
/* 80211614 0020E554  7C 79 E0 2E */ lwzx r3, r25, r28
/* 80211618 0020E558  80 83 00 04 */ lwz r4, 4(r3)
/* 8021161C 0020E55C  38 61 00 78 */ addi r3, r1, 0x78
/* 80211620 0020E560  38 A0 00 03 */ li r5, 3
/* 80211624 0020E564  48 0E 63 85 */ bl J2DPane_NS_getGlbVtx
/* 80211628 0020E568  80 61 00 78 */ lwz r3, 0x78(r1)
/* 8021162C 0020E56C  80 01 00 7C */ lwz r0, 0x7c(r1)
/* 80211630 0020E570  90 61 00 90 */ stw r3, 0x90(r1)
/* 80211634 0020E574  90 01 00 94 */ stw r0, 0x94(r1)
/* 80211638 0020E578  80 01 00 80 */ lwz r0, 0x80(r1)
/* 8021163C 0020E57C  90 01 00 98 */ stw r0, 0x98(r1)
/* 80211640 0020E580  7C 79 E0 2E */ lwzx r3, r25, r28
/* 80211644 0020E584  80 63 00 04 */ lwz r3, 4(r3)
/* 80211648 0020E588  C0 23 00 2C */ lfs f1, 0x2c(r3)
/* 8021164C 0020E58C  C0 03 00 24 */ lfs f0, 0x24(r3)
/* 80211650 0020E590  EC 81 00 28 */ fsubs f4, f1, f0
/* 80211654 0020E594  38 16 00 84 */ addi r0, r22, 0x84
/* 80211658 0020E598  7C 7E 00 2E */ lwzx r3, r30, r0
/* 8021165C 0020E59C  C0 5D 00 14 */ lfs f2, 0x14(r29)
/* 80211660 0020E5A0  C0 21 00 9C */ lfs f1, 0x9c(r1)
/* 80211664 0020E5A4  C0 01 00 90 */ lfs f0, 0x90(r1)
/* 80211668 0020E5A8  EC 01 00 2A */ fadds f0, f1, f0
/* 8021166C 0020E5AC  EC 3C 00 32 */ fmuls f1, f28, f0
/* 80211670 0020E5B0  6F E0 80 00 */ xoris r0, r31, 0x8000
/* 80211674 0020E5B4  90 01 00 AC */ stw r0, 0xac(r1)
/* 80211678 0020E5B8  92 A1 00 A8 */ stw r21, 0xa8(r1)
/* 8021167C 0020E5BC  C8 01 00 A8 */ lfd f0, 0xa8(r1)
/* 80211680 0020E5C0  EC 00 E8 28 */ fsubs f0, f0, f29
/* 80211684 0020E5C4  EC 1E 00 32 */ fmuls f0, f30, f0
/* 80211688 0020E5C8  EC 01 00 2A */ fadds f0, f1, f0
/* 8021168C 0020E5CC  EC 22 00 2A */ fadds f1, f2, f0
/* 80211690 0020E5D0  C0 7D 00 18 */ lfs f3, 0x18(r29)
/* 80211694 0020E5D4  C0 41 00 A0 */ lfs f2, 0xa0(r1)
/* 80211698 0020E5D8  C0 01 00 94 */ lfs f0, 0x94(r1)
/* 8021169C 0020E5DC  EC 02 00 2A */ fadds f0, f2, f0
/* 802116A0 0020E5E0  EC 1C 00 32 */ fmuls f0, f28, f0
/* 802116A4 0020E5E4  EC 00 20 2A */ fadds f0, f0, f4
/* 802116A8 0020E5E8  EC 43 00 2A */ fadds f2, f3, f0
/* 802116AC 0020E5EC  FC 60 F0 90 */ fmr f3, f30
/* 802116B0 0020E5F0  FC 80 F0 90 */ fmr f4, f30
/* 802116B4 0020E5F4  38 80 00 00 */ li r4, 0
/* 802116B8 0020E5F8  38 A0 00 00 */ li r5, 0
/* 802116BC 0020E5FC  38 C0 00 00 */ li r6, 0
/* 802116C0 0020E600  81 83 00 00 */ lwz r12, 0(r3)
/* 802116C4 0020E604  81 8C 00 EC */ lwz r12, 0xec(r12)
/* 802116C8 0020E608  7D 89 03 A6 */ mtctr r12
/* 802116CC 0020E60C  4E 80 04 21 */ bctrl
/* 802116D0 0020E610  3B FF 00 01 */ addi r31, r31, 1
/* 802116D4 0020E614  2C 1F 00 03 */ cmpwi r31, 3
/* 802116D8 0020E618  3A D6 00 04 */ addi r22, r22, 4
/* 802116DC 0020E61C  41 80 FF 04 */ blt lbl_802115E0
lbl_802116E0:
/* 802116E0 0020E620  3B 7B 00 01 */ addi r27, r27, 1
/* 802116E4 0020E624  2C 1B 00 02 */ cmpwi r27, 2
/* 802116E8 0020E628  3A F7 00 0C */ addi r23, r23, 0xc
/* 802116EC 0020E62C  3B 18 00 1C */ addi r24, r24, 0x1c
/* 802116F0 0020E630  3B 5A 00 04 */ addi r26, r26, 4
/* 802116F4 0020E634  41 80 FE BC */ blt lbl_802115B0
/* 802116F8 0020E638  3A A0 00 00 */ li r21, 0
/* 802116FC 0020E63C  3A E0 00 00 */ li r23, 0
lbl_80211700:
/* 80211700 0020E640  38 17 00 AC */ addi r0, r23, 0xac
/* 80211704 0020E644  7C 79 00 2E */ lwzx r3, r25, r0
/* 80211708 0020E648  80 63 00 04 */ lwz r3, 4(r3)
/* 8021170C 0020E64C  81 83 00 00 */ lwz r12, 0(r3)
/* 80211710 0020E650  81 8C 00 08 */ lwz r12, 8(r12)
/* 80211714 0020E654  7D 89 03 A6 */ mtctr r12
/* 80211718 0020E658  4E 80 04 21 */ bctrl
/* 8021171C 0020E65C  3A B5 00 01 */ addi r21, r21, 1
/* 80211720 0020E660  2C 15 00 02 */ cmpwi r21, 2
/* 80211724 0020E664  3A F7 00 04 */ addi r23, r23, 4
/* 80211728 0020E668  41 80 FF D8 */ blt lbl_80211700
/* 8021172C 0020E66C  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80211730 0020E670  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80211734 0020E674  88 03 5E B5 */ lbz r0, 0x5eb5(r3)
/* 80211738 0020E678  28 00 00 00 */ cmplwi r0, 0
/* 8021173C 0020E67C  40 82 01 60 */ bne lbl_8021189C
/* 80211740 0020E680  80 79 02 F8 */ lwz r3, 0x2f8(r25)
/* 80211744 0020E684  48 04 40 E5 */ bl CPaneMgrAlpha_NS_getAlphaRate
/* 80211748 0020E688  C0 42 AE 80 */ lfs f2, lbl_80454880-_SDA2_BASE_(r2)
/* 8021174C 0020E68C  FC 02 08 00 */ fcmpu cr0, f2, f1
/* 80211750 0020E690  41 82 01 4C */ beq lbl_8021189C
/* 80211754 0020E694  C0 19 06 08 */ lfs f0, 0x608(r25)
/* 80211758 0020E698  FC 00 10 40 */ fcmpo cr0, f0, f2
/* 8021175C 0020E69C  40 81 00 58 */ ble lbl_802117B4
/* 80211760 0020E6A0  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 80211764 0020E6A4  39 43 EB C8 */ addi r10, r3, lbl_8042EBC8@l
/* 80211768 0020E6A8  80 0A 04 88 */ lwz r0, 0x488(r10)
/* 8021176C 0020E6AC  90 01 00 68 */ stw r0, 0x68(r1)
/* 80211770 0020E6B0  80 0A 04 8C */ lwz r0, 0x48c(r10)
/* 80211774 0020E6B4  90 01 00 6C */ stw r0, 0x6c(r1)
/* 80211778 0020E6B8  80 0A 04 80 */ lwz r0, 0x480(r10)
/* 8021177C 0020E6BC  90 01 00 70 */ stw r0, 0x70(r1)
/* 80211780 0020E6C0  80 0A 04 84 */ lwz r0, 0x484(r10)
/* 80211784 0020E6C4  90 01 00 74 */ stw r0, 0x74(r1)
/* 80211788 0020E6C8  7F 23 CB 78 */ mr r3, r25
/* 8021178C 0020E6CC  80 99 03 38 */ lwz r4, 0x338(r25)
/* 80211790 0020E6D0  38 B9 06 08 */ addi r5, r25, 0x608
/* 80211794 0020E6D4  C0 2A 03 C4 */ lfs f1, 0x3c4(r10)
/* 80211798 0020E6D8  38 C1 00 74 */ addi r6, r1, 0x74
/* 8021179C 0020E6DC  38 E1 00 70 */ addi r7, r1, 0x70
/* 802117A0 0020E6E0  39 01 00 6C */ addi r8, r1, 0x6c
/* 802117A4 0020E6E4  39 21 00 68 */ addi r9, r1, 0x68
/* 802117A8 0020E6E8  C0 4A 04 90 */ lfs f2, 0x490(r10)
/* 802117AC 0020E6EC  89 59 07 59 */ lbz r10, 0x759(r25)
/* 802117B0 0020E6F0  48 00 28 41 */ bl dMeter2Draw_c_NS_drawPikari
lbl_802117B4:
/* 802117B4 0020E6F4  C0 39 06 0C */ lfs f1, 0x60c(r25)
/* 802117B8 0020E6F8  C0 02 AE 80 */ lfs f0, lbl_80454880-_SDA2_BASE_(r2)
/* 802117BC 0020E6FC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802117C0 0020E700  40 81 00 58 */ ble lbl_80211818
/* 802117C4 0020E704  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 802117C8 0020E708  39 43 EB C8 */ addi r10, r3, lbl_8042EBC8@l
/* 802117CC 0020E70C  80 0A 04 9C */ lwz r0, 0x49c(r10)
/* 802117D0 0020E710  90 01 00 58 */ stw r0, 0x58(r1)
/* 802117D4 0020E714  80 0A 04 A0 */ lwz r0, 0x4a0(r10)
/* 802117D8 0020E718  90 01 00 5C */ stw r0, 0x5c(r1)
/* 802117DC 0020E71C  80 0A 04 94 */ lwz r0, 0x494(r10)
/* 802117E0 0020E720  90 01 00 60 */ stw r0, 0x60(r1)
/* 802117E4 0020E724  80 0A 04 98 */ lwz r0, 0x498(r10)
/* 802117E8 0020E728  90 01 00 64 */ stw r0, 0x64(r1)
/* 802117EC 0020E72C  7F 23 CB 78 */ mr r3, r25
/* 802117F0 0020E730  80 99 03 3C */ lwz r4, 0x33c(r25)
/* 802117F4 0020E734  38 B9 06 0C */ addi r5, r25, 0x60c
/* 802117F8 0020E738  C0 2A 03 C8 */ lfs f1, 0x3c8(r10)
/* 802117FC 0020E73C  38 C1 00 64 */ addi r6, r1, 0x64
/* 80211800 0020E740  38 E1 00 60 */ addi r7, r1, 0x60
/* 80211804 0020E744  39 01 00 5C */ addi r8, r1, 0x5c
/* 80211808 0020E748  39 21 00 58 */ addi r9, r1, 0x58
/* 8021180C 0020E74C  C0 4A 04 A4 */ lfs f2, 0x4a4(r10)
/* 80211810 0020E750  89 59 07 5A */ lbz r10, 0x75a(r25)
/* 80211814 0020E754  48 00 27 DD */ bl dMeter2Draw_c_NS_drawPikari
lbl_80211818:
/* 80211818 0020E758  3A A0 00 00 */ li r21, 0
/* 8021181C 0020E75C  3A E0 00 00 */ li r23, 0
/* 80211820 0020E760  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 80211824 0020E764  3A C3 EB C8 */ addi r22, r3, lbl_8042EBC8@l
/* 80211828 0020E768  C3 C2 AE 80 */ lfs f30, lbl_80454880-_SDA2_BASE_(r2)
lbl_8021182C:
/* 8021182C 0020E76C  7C B9 BA 14 */ add r5, r25, r23
/* 80211830 0020E770  C0 05 06 20 */ lfs f0, 0x620(r5)
/* 80211834 0020E774  FC 00 F0 40 */ fcmpo cr0, f0, f30
/* 80211838 0020E778  40 81 00 54 */ ble lbl_8021188C
/* 8021183C 0020E77C  80 16 04 74 */ lwz r0, 0x474(r22)
/* 80211840 0020E780  90 01 00 48 */ stw r0, 0x48(r1)
/* 80211844 0020E784  80 16 04 78 */ lwz r0, 0x478(r22)
/* 80211848 0020E788  90 01 00 4C */ stw r0, 0x4c(r1)
/* 8021184C 0020E78C  80 16 04 6C */ lwz r0, 0x46c(r22)
/* 80211850 0020E790  90 01 00 50 */ stw r0, 0x50(r1)
/* 80211854 0020E794  80 16 04 70 */ lwz r0, 0x470(r22)
/* 80211858 0020E798  90 01 00 54 */ stw r0, 0x54(r1)
/* 8021185C 0020E79C  7F 23 CB 78 */ mr r3, r25
/* 80211860 0020E7A0  80 85 03 40 */ lwz r4, 0x340(r5)
/* 80211864 0020E7A4  38 A5 06 20 */ addi r5, r5, 0x620
/* 80211868 0020E7A8  C0 36 03 DC */ lfs f1, 0x3dc(r22)
/* 8021186C 0020E7AC  38 C1 00 54 */ addi r6, r1, 0x54
/* 80211870 0020E7B0  38 E1 00 50 */ addi r7, r1, 0x50
/* 80211874 0020E7B4  39 01 00 4C */ addi r8, r1, 0x4c
/* 80211878 0020E7B8  39 21 00 48 */ addi r9, r1, 0x48
/* 8021187C 0020E7BC  C0 56 04 7C */ lfs f2, 0x47c(r22)
/* 80211880 0020E7C0  38 15 07 5C */ addi r0, r21, 0x75c
/* 80211884 0020E7C4  7D 59 00 AE */ lbzx r10, r25, r0
/* 80211888 0020E7C8  48 00 27 69 */ bl dMeter2Draw_c_NS_drawPikari
lbl_8021188C:
/* 8021188C 0020E7CC  3A B5 00 01 */ addi r21, r21, 1
/* 80211890 0020E7D0  2C 15 00 02 */ cmpwi r21, 2
/* 80211894 0020E7D4  3A F7 00 04 */ addi r23, r23, 4
/* 80211898 0020E7D8  41 80 FF 94 */ blt lbl_8021182C
lbl_8021189C:
/* 8021189C 0020E7DC  80 79 01 E0 */ lwz r3, 0x1e0(r25)
/* 802118A0 0020E7E0  48 04 3F 89 */ bl CPaneMgrAlpha_NS_getAlphaRate
/* 802118A4 0020E7E4  C0 42 AE 80 */ lfs f2, lbl_80454880-_SDA2_BASE_(r2)
/* 802118A8 0020E7E8  FC 02 08 00 */ fcmpu cr0, f2, f1
/* 802118AC 0020E7EC  41 82 02 A4 */ beq lbl_80211B50
/* 802118B0 0020E7F0  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 802118B4 0020E7F4  38 83 EB C8 */ addi r4, r3, lbl_8042EBC8@l
/* 802118B8 0020E7F8  C3 84 0F 14 */ lfs f28, 0xf14(r4)
/* 802118BC 0020E7FC  C3 A4 0E E4 */ lfs f29, 0xee4(r4)
/* 802118C0 0020E800  A8 79 07 56 */ lha r3, 0x756(r25)
/* 802118C4 0020E804  7C 60 07 35 */ extsh. r0, r3
/* 802118C8 0020E808  41 80 00 E4 */ blt lbl_802119AC
/* 802118CC 0020E80C  C3 A4 0E E8 */ lfs f29, 0xee8(r4)
/* 802118D0 0020E810  A8 04 0E CE */ lha r0, 0xece(r4)
/* 802118D4 0020E814  1C A0 00 0F */ mulli r5, r0, 0xf
/* 802118D8 0020E818  7C 03 28 00 */ cmpw r3, r5
/* 802118DC 0020E81C  41 81 00 4C */ bgt lbl_80211928
/* 802118E0 0020E820  7C 83 03 D6 */ divw r4, r3, r0
/* 802118E4 0020E824  7C 04 01 D6 */ mullw r0, r4, r0
/* 802118E8 0020E828  7C 00 18 51 */ subf. r0, r0, r3
/* 802118EC 0020E82C  40 82 00 20 */ bne lbl_8021190C
/* 802118F0 0020E830  54 80 10 3A */ slwi r0, r4, 2
/* 802118F4 0020E834  7C 79 02 14 */ add r3, r25, r0
/* 802118F8 0020E838  C0 03 06 2C */ lfs f0, 0x62c(r3)
/* 802118FC 0020E83C  FC 02 00 00 */ fcmpu cr0, f2, f0
/* 80211900 0020E840  40 82 00 0C */ bne lbl_8021190C
/* 80211904 0020E844  C0 02 AE 98 */ lfs f0, lbl_80454898-_SDA2_BASE_(r2)
/* 80211908 0020E848  D0 03 06 2C */ stfs f0, 0x62c(r3)
lbl_8021190C:
/* 8021190C 0020E84C  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 80211910 0020E850  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 80211914 0020E854  C3 83 0F 18 */ lfs f28, 0xf18(r3)
/* 80211918 0020E858  A8 79 07 56 */ lha r3, 0x756(r25)
/* 8021191C 0020E85C  38 03 00 01 */ addi r0, r3, 1
/* 80211920 0020E860  B0 19 07 56 */ sth r0, 0x756(r25)
/* 80211924 0020E864  48 00 00 88 */ b lbl_802119AC
lbl_80211928:
/* 80211928 0020E868  38 A5 00 01 */ addi r5, r5, 1
/* 8021192C 0020E86C  7C 03 28 00 */ cmpw r3, r5
/* 80211930 0020E870  40 82 00 28 */ bne lbl_80211958
/* 80211934 0020E874  C0 19 06 68 */ lfs f0, 0x668(r25)
/* 80211938 0020E878  FC 02 00 00 */ fcmpu cr0, f2, f0
/* 8021193C 0020E87C  40 82 00 0C */ bne lbl_80211948
/* 80211940 0020E880  38 03 00 01 */ addi r0, r3, 1
/* 80211944 0020E884  B0 19 07 56 */ sth r0, 0x756(r25)
lbl_80211948:
/* 80211948 0020E888  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 8021194C 0020E88C  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 80211950 0020E890  C3 83 0F 18 */ lfs f28, 0xf18(r3)
/* 80211954 0020E894  48 00 00 58 */ b lbl_802119AC
lbl_80211958:
/* 80211958 0020E898  A8 04 0E D0 */ lha r0, 0xed0(r4)
/* 8021195C 0020E89C  7C 00 2A 14 */ add r0, r0, r5
/* 80211960 0020E8A0  7C 03 00 00 */ cmpw r3, r0
/* 80211964 0020E8A4  41 80 00 40 */ blt lbl_802119A4
/* 80211968 0020E8A8  38 60 00 00 */ li r3, 0
/* 8021196C 0020E8AC  C0 22 AE 98 */ lfs f1, lbl_80454898-_SDA2_BASE_(r2)
/* 80211970 0020E8B0  EC 41 E8 28 */ fsubs f2, f1, f29
/* 80211974 0020E8B4  38 00 00 10 */ li r0, 0x10
/* 80211978 0020E8B8  7C 09 03 A6 */ mtctr r0
lbl_8021197C:
/* 8021197C 0020E8BC  7C B9 1A 14 */ add r5, r25, r3
/* 80211980 0020E8C0  D0 45 06 2C */ stfs f2, 0x62c(r5)
/* 80211984 0020E8C4  C0 04 0F 0C */ lfs f0, 0xf0c(r4)
/* 80211988 0020E8C8  EC 01 00 28 */ fsubs f0, f1, f0
/* 8021198C 0020E8CC  D0 05 06 6C */ stfs f0, 0x66c(r5)
/* 80211990 0020E8D0  38 63 00 04 */ addi r3, r3, 4
/* 80211994 0020E8D4  42 00 FF E8 */ bdnz lbl_8021197C
/* 80211998 0020E8D8  38 00 FF FF */ li r0, -1
/* 8021199C 0020E8DC  B0 19 07 56 */ sth r0, 0x756(r25)
/* 802119A0 0020E8E0  48 00 00 0C */ b lbl_802119AC
lbl_802119A4:
/* 802119A4 0020E8E4  38 03 00 01 */ addi r0, r3, 1
/* 802119A8 0020E8E8  B0 19 07 56 */ sth r0, 0x756(r25)
lbl_802119AC:
/* 802119AC 0020E8EC  3B 40 00 00 */ li r26, 0
/* 802119B0 0020E8F0  3B 00 00 00 */ li r24, 0
/* 802119B4 0020E8F4  3A E0 00 00 */ li r23, 0
/* 802119B8 0020E8F8  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 802119BC 0020E8FC  3B C3 EB C8 */ addi r30, r3, lbl_8042EBC8@l
/* 802119C0 0020E900  3B BE 0F 10 */ addi r29, r30, 0xf10
/* 802119C4 0020E904  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 802119C8 0020E908  3B E3 61 C0 */ addi r31, r3, g_dComIfG_gameInfo@l
/* 802119CC 0020E90C  3B 9F 01 14 */ addi r28, r31, 0x114
/* 802119D0 0020E910  C3 C2 AE 80 */ lfs f30, lbl_80454880-_SDA2_BASE_(r2)
lbl_802119D4:
/* 802119D4 0020E914  7F 79 BA 14 */ add r27, r25, r23
/* 802119D8 0020E918  C0 1B 06 6C */ lfs f0, 0x66c(r27)
/* 802119DC 0020E91C  FC 00 F0 40 */ fcmpo cr0, f0, f30
/* 802119E0 0020E920  40 81 00 A0 */ ble lbl_80211A80
/* 802119E4 0020E924  80 1E 0F 00 */ lwz r0, 0xf00(r30)
/* 802119E8 0020E928  90 01 00 38 */ stw r0, 0x38(r1)
/* 802119EC 0020E92C  80 1E 0F 08 */ lwz r0, 0xf08(r30)
/* 802119F0 0020E930  90 01 00 3C */ stw r0, 0x3c(r1)
/* 802119F4 0020E934  80 1E 0E F0 */ lwz r0, 0xef0(r30)
/* 802119F8 0020E938  90 01 00 40 */ stw r0, 0x40(r1)
/* 802119FC 0020E93C  80 1E 0E F8 */ lwz r0, 0xef8(r30)
/* 80211A00 0020E940  90 01 00 44 */ stw r0, 0x44(r1)
/* 80211A04 0020E944  7F 23 CB 78 */ mr r3, r25
/* 80211A08 0020E948  3A B8 01 F4 */ addi r21, r24, 0x1f4
/* 80211A0C 0020E94C  7C 99 A8 2E */ lwzx r4, r25, r21
/* 80211A10 0020E950  7F A5 EB 78 */ mr r5, r29
/* 80211A14 0020E954  C0 3E 0F 20 */ lfs f1, 0xf20(r30)
/* 80211A18 0020E958  38 C1 00 44 */ addi r6, r1, 0x44
/* 80211A1C 0020E95C  38 E1 00 40 */ addi r7, r1, 0x40
/* 80211A20 0020E960  39 01 00 3C */ addi r8, r1, 0x3c
/* 80211A24 0020E964  39 21 00 38 */ addi r9, r1, 0x38
/* 80211A28 0020E968  FC 40 F0 90 */ fmr f2, f30
/* 80211A2C 0020E96C  39 40 00 03 */ li r10, 3
/* 80211A30 0020E970  48 00 25 C1 */ bl dMeter2Draw_c_NS_drawPikari
/* 80211A34 0020E974  80 1E 0E FC */ lwz r0, 0xefc(r30)
/* 80211A38 0020E978  90 01 00 28 */ stw r0, 0x28(r1)
/* 80211A3C 0020E97C  80 1E 0F 04 */ lwz r0, 0xf04(r30)
/* 80211A40 0020E980  90 01 00 2C */ stw r0, 0x2c(r1)
/* 80211A44 0020E984  80 1E 0E EC */ lwz r0, 0xeec(r30)
/* 80211A48 0020E988  90 01 00 30 */ stw r0, 0x30(r1)
/* 80211A4C 0020E98C  80 1E 0E F4 */ lwz r0, 0xef4(r30)
/* 80211A50 0020E990  90 01 00 34 */ stw r0, 0x34(r1)
/* 80211A54 0020E994  7F 23 CB 78 */ mr r3, r25
/* 80211A58 0020E998  7C 99 A8 2E */ lwzx r4, r25, r21
/* 80211A5C 0020E99C  38 BB 06 6C */ addi r5, r27, 0x66c
/* 80211A60 0020E9A0  C0 3E 0F 1C */ lfs f1, 0xf1c(r30)
/* 80211A64 0020E9A4  38 C1 00 34 */ addi r6, r1, 0x34
/* 80211A68 0020E9A8  38 E1 00 30 */ addi r7, r1, 0x30
/* 80211A6C 0020E9AC  39 01 00 2C */ addi r8, r1, 0x2c
/* 80211A70 0020E9B0  39 21 00 28 */ addi r9, r1, 0x28
/* 80211A74 0020E9B4  C0 5E 0F 0C */ lfs f2, 0xf0c(r30)
/* 80211A78 0020E9B8  39 40 00 03 */ li r10, 3
/* 80211A7C 0020E9BC  48 00 25 75 */ bl dMeter2Draw_c_NS_drawPikari
lbl_80211A80:
/* 80211A80 0020E9C0  88 1E 0F 24 */ lbz r0, 0xf24(r30)
/* 80211A84 0020E9C4  28 00 00 00 */ cmplwi r0, 0
/* 80211A88 0020E9C8  41 82 00 28 */ beq lbl_80211AB0
/* 80211A8C 0020E9CC  7F 83 E3 78 */ mr r3, r28
/* 80211A90 0020E9D0  88 9F 4E 0C */ lbz r4, 0x4e0c(r31)
/* 80211A94 0020E9D4  4B E2 28 AD */ bl getLightDropNum__16dSv_light_drop_cCFUc
/* 80211A98 0020E9D8  88 9F 5E A1 */ lbz r4, 0x5ea1(r31)
/* 80211A9C 0020E9DC  54 60 06 3E */ clrlwi r0, r3, 0x18
/* 80211AA0 0020E9E0  7C 04 00 40 */ cmplw r4, r0
/* 80211AA4 0020E9E4  41 82 00 0C */ beq lbl_80211AB0
/* 80211AA8 0020E9E8  C0 02 AE 80 */ lfs f0, lbl_80454880-_SDA2_BASE_(r2)
/* 80211AAC 0020E9EC  D0 1B 06 6C */ stfs f0, 0x66c(r27)
lbl_80211AB0:
/* 80211AB0 0020E9F0  3B 5A 00 01 */ addi r26, r26, 1
/* 80211AB4 0020E9F4  2C 1A 00 10 */ cmpwi r26, 0x10
/* 80211AB8 0020E9F8  3B 18 00 0C */ addi r24, r24, 0xc
/* 80211ABC 0020E9FC  3A F7 00 04 */ addi r23, r23, 4
/* 80211AC0 0020EA00  41 80 FF 14 */ blt lbl_802119D4
/* 80211AC4 0020EA04  3A A0 00 00 */ li r21, 0
/* 80211AC8 0020EA08  3B 40 00 00 */ li r26, 0
/* 80211ACC 0020EA0C  3B 60 00 00 */ li r27, 0
/* 80211AD0 0020EA10  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 80211AD4 0020EA14  3A C3 EB C8 */ addi r22, r3, lbl_8042EBC8@l
/* 80211AD8 0020EA18  C3 C2 AE 80 */ lfs f30, lbl_80454880-_SDA2_BASE_(r2)
lbl_80211ADC:
/* 80211ADC 0020EA1C  7C B9 DA 14 */ add r5, r25, r27
/* 80211AE0 0020EA20  C0 05 06 2C */ lfs f0, 0x62c(r5)
/* 80211AE4 0020EA24  FC 00 F0 40 */ fcmpo cr0, f0, f30
/* 80211AE8 0020EA28  40 81 00 54 */ ble lbl_80211B3C
/* 80211AEC 0020EA2C  80 16 0E DC */ lwz r0, 0xedc(r22)
/* 80211AF0 0020EA30  90 01 00 18 */ stw r0, 0x18(r1)
/* 80211AF4 0020EA34  80 16 0E E0 */ lwz r0, 0xee0(r22)
/* 80211AF8 0020EA38  90 01 00 1C */ stw r0, 0x1c(r1)
/* 80211AFC 0020EA3C  80 16 0E D4 */ lwz r0, 0xed4(r22)
/* 80211B00 0020EA40  90 01 00 20 */ stw r0, 0x20(r1)
/* 80211B04 0020EA44  80 16 0E D8 */ lwz r0, 0xed8(r22)
/* 80211B08 0020EA48  90 01 00 24 */ stw r0, 0x24(r1)
/* 80211B0C 0020EA4C  7F 23 CB 78 */ mr r3, r25
/* 80211B10 0020EA50  38 1A 01 F4 */ addi r0, r26, 0x1f4
/* 80211B14 0020EA54  7C 99 00 2E */ lwzx r4, r25, r0
/* 80211B18 0020EA58  38 A5 06 2C */ addi r5, r5, 0x62c
/* 80211B1C 0020EA5C  FC 20 E0 90 */ fmr f1, f28
/* 80211B20 0020EA60  38 C1 00 24 */ addi r6, r1, 0x24
/* 80211B24 0020EA64  38 E1 00 20 */ addi r7, r1, 0x20
/* 80211B28 0020EA68  39 01 00 1C */ addi r8, r1, 0x1c
/* 80211B2C 0020EA6C  39 21 00 18 */ addi r9, r1, 0x18
/* 80211B30 0020EA70  FC 40 E8 90 */ fmr f2, f29
/* 80211B34 0020EA74  89 59 07 5F */ lbz r10, 0x75f(r25)
/* 80211B38 0020EA78  48 00 24 B9 */ bl dMeter2Draw_c_NS_drawPikari
lbl_80211B3C:
/* 80211B3C 0020EA7C  3A B5 00 01 */ addi r21, r21, 1
/* 80211B40 0020EA80  2C 15 00 10 */ cmpwi r21, 0x10
/* 80211B44 0020EA84  3B 5A 00 0C */ addi r26, r26, 0xc
/* 80211B48 0020EA88  3B 7B 00 04 */ addi r27, r27, 4
/* 80211B4C 0020EA8C  41 80 FF 90 */ blt lbl_80211ADC
lbl_80211B50:
/* 80211B50 0020EA90  C0 39 07 38 */ lfs f1, 0x738(r25)
/* 80211B54 0020EA94  C0 02 AE 80 */ lfs f0, lbl_80454880-_SDA2_BASE_(r2)
/* 80211B58 0020EA98  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80211B5C 0020EA9C  40 81 00 58 */ ble lbl_80211BB4
/* 80211B60 0020EAA0  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 80211B64 0020EAA4  39 43 EB C8 */ addi r10, r3, lbl_8042EBC8@l
/* 80211B68 0020EAA8  80 0A 04 EC */ lwz r0, 0x4ec(r10)
/* 80211B6C 0020EAAC  90 01 00 08 */ stw r0, 8(r1)
/* 80211B70 0020EAB0  80 0A 04 F0 */ lwz r0, 0x4f0(r10)
/* 80211B74 0020EAB4  90 01 00 0C */ stw r0, 0xc(r1)
/* 80211B78 0020EAB8  80 0A 04 E4 */ lwz r0, 0x4e4(r10)
/* 80211B7C 0020EABC  90 01 00 10 */ stw r0, 0x10(r1)
/* 80211B80 0020EAC0  80 0A 04 E8 */ lwz r0, 0x4e8(r10)
/* 80211B84 0020EAC4  90 01 00 14 */ stw r0, 0x14(r1)
/* 80211B88 0020EAC8  7F 23 CB 78 */ mr r3, r25
/* 80211B8C 0020EACC  80 99 03 08 */ lwz r4, 0x308(r25)
/* 80211B90 0020EAD0  38 B9 07 38 */ addi r5, r25, 0x738
/* 80211B94 0020EAD4  C0 2A 03 E8 */ lfs f1, 0x3e8(r10)
/* 80211B98 0020EAD8  38 C1 00 14 */ addi r6, r1, 0x14
/* 80211B9C 0020EADC  38 E1 00 10 */ addi r7, r1, 0x10
/* 80211BA0 0020EAE0  39 01 00 0C */ addi r8, r1, 0xc
/* 80211BA4 0020EAE4  39 21 00 08 */ addi r9, r1, 8
/* 80211BA8 0020EAE8  C0 4A 04 F4 */ lfs f2, 0x4f4(r10)
/* 80211BAC 0020EAEC  39 40 00 03 */ li r10, 3
/* 80211BB0 0020EAF0  48 00 24 41 */ bl dMeter2Draw_c_NS_drawPikari
lbl_80211BB4:
/* 80211BB4 0020EAF4  E3 E1 01 18 */ psq_l f31, 280(r1), 0, 0
/* 80211BB8 0020EAF8  CB E1 01 10 */ lfd f31, 0x110(r1)
/* 80211BBC 0020EAFC  E3 C1 01 08 */ psq_l f30, 264(r1), 0, 0
/* 80211BC0 0020EB00  CB C1 01 00 */ lfd f30, 0x100(r1)
/* 80211BC4 0020EB04  E3 A1 00 F8 */ psq_l f29, 248(r1), 0, 0
/* 80211BC8 0020EB08  CB A1 00 F0 */ lfd f29, 0xf0(r1)
/* 80211BCC 0020EB0C  E3 81 00 E8 */ psq_l f28, 232(r1), 0, 0
/* 80211BD0 0020EB10  CB 81 00 E0 */ lfd f28, 0xe0(r1)
/* 80211BD4 0020EB14  39 61 00 E0 */ addi r11, r1, 0xe0
/* 80211BD8 0020EB18  48 15 06 31 */ bl _restgpr_21
/* 80211BDC 0020EB1C  80 01 01 24 */ lwz r0, 0x124(r1)
/* 80211BE0 0020EB20  7C 08 03 A6 */ mtlr r0
/* 80211BE4 0020EB24  38 21 01 20 */ addi r1, r1, 0x120
/* 80211BE8 0020EB28  4E 80 00 20 */ blr
