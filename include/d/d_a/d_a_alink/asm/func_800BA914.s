/* 800BA914 000B7854  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 800BA918 000B7858  7C 08 02 A6 */ mflr r0
/* 800BA91C 000B785C  90 01 00 44 */ stw r0, 0x44(r1)
/* 800BA920 000B7860  DB E1 00 30 */ stfd f31, 0x30(r1)
/* 800BA924 000B7864  F3 E1 00 38 */ psq_st f31, 56(r1), 0, 0
/* 800BA928 000B7868  39 61 00 30 */ addi r11, r1, 0x30
/* 800BA92C 000B786C  48 2A 78 B1 */ bl _savegpr_29
/* 800BA930 000B7870  7C 7D 1B 78 */ mr r29, r3
/* 800BA934 000B7874  3C 80 80 39 */ lis r4, lbl_8038D658@ha
/* 800BA938 000B7878  3B E4 D6 58 */ addi r31, r4, lbl_8038D658@l
/* 800BA93C 000B787C  A0 03 2F DC */ lhz r0, 0x2fdc(r3)
/* 800BA940 000B7880  28 00 00 42 */ cmplwi r0, 0x42
/* 800BA944 000B7884  40 82 00 08 */ bne lbl_800BA94C
/* 800BA948 000B7888  48 05 7C E1 */ bl checkIronBallDelete__9daAlink_cFv
lbl_800BA94C:
/* 800BA94C 000B788C  3B DD 20 48 */ addi r30, r29, 0x2048
/* 800BA950 000B7890  80 7D 05 70 */ lwz r3, 0x570(r29)
/* 800BA954 000B7894  54 60 04 E7 */ rlwinm. r0, r3, 0, 0x13, 0x13
/* 800BA958 000B7898  40 82 00 E8 */ bne lbl_800BAA40
/* 800BA95C 000B789C  54 60 01 8D */ rlwinm. r0, r3, 0, 6, 6
/* 800BA960 000B78A0  41 82 00 E0 */ beq lbl_800BAA40
/* 800BA964 000B78A4  80 1D 19 9C */ lwz r0, 0x199c(r29)
/* 800BA968 000B78A8  54 00 06 B5 */ rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 800BA96C 000B78AC  41 82 00 D4 */ beq lbl_800BAA40
/* 800BA970 000B78B0  80 9D 31 A0 */ lwz r4, 0x31a0(r29)
/* 800BA974 000B78B4  3C 60 00 07 */ lis r3, 0x00070C52@ha
/* 800BA978 000B78B8  38 03 0C 52 */ addi r0, r3, 0x00070C52@l
/* 800BA97C 000B78BC  7C 80 00 39 */ and. r0, r4, r0
/* 800BA980 000B78C0  40 82 00 C0 */ bne lbl_800BAA40
/* 800BA984 000B78C4  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800BA988 000B78C8  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800BA98C 000B78CC  38 63 0F 38 */ addi r3, r3, 0xf38
/* 800BA990 000B78D0  38 9D 1A 60 */ addi r4, r29, 0x1a60
/* 800BA994 000B78D4  4B FB 9C CD */ bl ChkPolySafe__4cBgSFRC13cBgS_PolyInfo
/* 800BA998 000B78D8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA99C 000B78DC  41 82 00 A4 */ beq lbl_800BAA40
/* 800BA9A0 000B78E0  38 7D 1A 60 */ addi r3, r29, 0x1a60
/* 800BA9A4 000B78E4  4B F7 71 AD */ bl checkMagnetCode__12daTagMagne_cFR13cBgS_PolyInfo
/* 800BA9A8 000B78E8  2C 03 00 00 */ cmpwi r3, 0
/* 800BA9AC 000B78EC  41 82 00 94 */ beq lbl_800BAA40
/* 800BA9B0 000B78F0  80 1D 05 70 */ lwz r0, 0x570(r29)
/* 800BA9B4 000B78F4  60 00 10 00 */ ori r0, r0, 0x1000
/* 800BA9B8 000B78F8  90 1D 05 70 */ stw r0, 0x570(r29)
/* 800BA9BC 000B78FC  7F A3 EB 78 */ mr r3, r29
/* 800BA9C0 000B7900  38 9D 1A 60 */ addi r4, r29, 0x1a60
/* 800BA9C4 000B7904  38 A0 00 01 */ li r5, 1
/* 800BA9C8 000B7908  48 02 7E 41 */ bl setMagneBootsMtx__9daAlink_cFP13cBgS_PolyInfoi
/* 800BA9CC 000B790C  38 7D 2C A8 */ addi r3, r29, 0x2ca8
/* 800BA9D0 000B7910  38 80 00 01 */ li r4, 1
/* 800BA9D4 000B7914  48 20 91 19 */ bl setMagnetized__14Z2CreatureLinkFb
/* 800BA9D8 000B7918  7F A3 EB 78 */ mr r3, r29
/* 800BA9DC 000B791C  48 00 05 A5 */ bl checkUpperReadyThrowAnime__9daAlink_cCFv
/* 800BA9E0 000B7920  2C 03 00 00 */ cmpwi r3, 0
/* 800BA9E4 000B7924  41 82 00 24 */ beq lbl_800BAA08
/* 800BA9E8 000B7928  7F A3 EB 78 */ mr r3, r29
/* 800BA9EC 000B792C  48 02 3F FD */ bl checkBowAnime__9daAlink_cCFv
/* 800BA9F0 000B7930  2C 03 00 00 */ cmpwi r3, 0
/* 800BA9F4 000B7934  40 82 00 14 */ bne lbl_800BAA08
/* 800BA9F8 000B7938  7F A3 EB 78 */ mr r3, r29
/* 800BA9FC 000B793C  38 80 00 02 */ li r4, 2
/* 800BAA00 000B7940  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800BAA04 000B7944  4B FF 2D 21 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
lbl_800BAA08:
/* 800BAA08 000B7948  A0 7D 2F DC */ lhz r3, 0x2fdc(r29)
/* 800BAA0C 000B794C  28 03 01 03 */ cmplwi r3, 0x103
/* 800BAA10 000B7950  41 82 00 20 */ beq lbl_800BAA30
/* 800BAA14 000B7954  48 0A 41 7D */ bl checkBowItem__9daPy_py_cFi
/* 800BAA18 000B7958  2C 03 00 00 */ cmpwi r3, 0
/* 800BAA1C 000B795C  40 82 00 14 */ bne lbl_800BAA30
/* 800BAA20 000B7960  7F A3 EB 78 */ mr r3, r29
/* 800BAA24 000B7964  38 80 00 00 */ li r4, 0
/* 800BAA28 000B7968  38 A0 00 00 */ li r5, 0
/* 800BAA2C 000B796C  48 00 68 B1 */ bl deleteEquipItem__9daAlink_cFii
lbl_800BAA30:
/* 800BAA30 000B7970  7F A3 EB 78 */ mr r3, r29
/* 800BAA34 000B7974  48 05 5E 0D */ bl offKandelaarModel__9daAlink_cFv
/* 800BAA38 000B7978  7F A3 EB 78 */ mr r3, r29
/* 800BAA3C 000B797C  48 02 A1 99 */ bl freeGrabItem__9daAlink_cFv
lbl_800BAA40:
/* 800BAA40 000B7980  7F A3 EB 78 */ mr r3, r29
/* 800BAA44 000B7984  48 02 92 29 */ bl checkGrabAnime__9daAlink_cCFv
/* 800BAA48 000B7988  2C 03 00 00 */ cmpwi r3, 0
/* 800BAA4C 000B798C  41 82 00 10 */ beq lbl_800BAA5C
/* 800BAA50 000B7990  7F A3 EB 78 */ mr r3, r29
/* 800BAA54 000B7994  48 02 A3 99 */ bl setGrabUpperSpeedRate__9daAlink_cFv
/* 800BAA58 000B7998  48 00 04 90 */ b lbl_800BAEE8
lbl_800BAA5C:
/* 800BAA5C 000B799C  A0 1D 1F BC */ lhz r0, 0x1fbc(r29)
/* 800BAA60 000B79A0  28 00 02 02 */ cmplwi r0, 0x202
/* 800BAA64 000B79A4  40 82 00 34 */ bne lbl_800BAA98
/* 800BAA68 000B79A8  7F A3 EB 78 */ mr r3, r29
/* 800BAA6C 000B79AC  48 02 69 09 */ bl getCopyRodControllActor__9daAlink_cFv
/* 800BAA70 000B79B0  28 03 00 00 */ cmplwi r3, 0
/* 800BAA74 000B79B4  40 82 00 18 */ bne lbl_800BAA8C
/* 800BAA78 000B79B8  7F A3 EB 78 */ mr r3, r29
/* 800BAA7C 000B79BC  38 80 00 02 */ li r4, 2
/* 800BAA80 000B79C0  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800BAA84 000B79C4  4B FF 2C A1 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 800BAA88 000B79C8  48 00 04 60 */ b lbl_800BAEE8
lbl_800BAA8C:
/* 800BAA8C 000B79CC  7F A3 EB 78 */ mr r3, r29
/* 800BAA90 000B79D0  48 02 6B 6D */ bl setCopyRodControllUpperSpeedRate__9daAlink_cFv
/* 800BAA94 000B79D4  48 00 04 54 */ b lbl_800BAEE8
lbl_800BAA98:
/* 800BAA98 000B79D8  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800BAA9C 000B79DC  28 00 00 52 */ cmplwi r0, 0x52
/* 800BAAA0 000B79E0  40 82 00 6C */ bne lbl_800BAB0C
/* 800BAAA4 000B79E4  7F C3 F3 78 */ mr r3, r30
/* 800BAAA8 000B79E8  48 0A 3A 25 */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800BAAAC 000B79EC  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BAAB0 000B79F0  40 82 00 28 */ bne lbl_800BAAD8
/* 800BAAB4 000B79F4  C0 3D 33 AC */ lfs f1, 0x33ac(r29)
/* 800BAAB8 000B79F8  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BAABC 000B79FC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BAAC0 000B7A00  40 81 00 2C */ ble lbl_800BAAEC
/* 800BAAC4 000B7A04  C0 3E 00 10 */ lfs f1, 0x10(r30)
/* 800BAAC8 000B7A08  38 7F 10 70 */ addi r3, r31, 0x1070
/* 800BAACC 000B7A0C  C0 03 00 24 */ lfs f0, 0x24(r3)
/* 800BAAD0 000B7A10  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BAAD4 000B7A14  40 81 00 18 */ ble lbl_800BAAEC
lbl_800BAAD8:
/* 800BAAD8 000B7A18  7F A3 EB 78 */ mr r3, r29
/* 800BAADC 000B7A1C  38 80 00 02 */ li r4, 2
/* 800BAAE0 000B7A20  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800BAAE4 000B7A24  4B FF 2C 41 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 800BAAE8 000B7A28  48 00 04 00 */ b lbl_800BAEE8
lbl_800BAAEC:
/* 800BAAEC 000B7A2C  C0 3E 00 10 */ lfs f1, 0x10(r30)
/* 800BAAF0 000B7A30  C0 02 93 78 */ lfs f0, lbl_80452D78-_SDA2_BASE_(r2)
/* 800BAAF4 000B7A34  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BAAF8 000B7A38  4C 41 13 82 */ cror 2, 1, 2
/* 800BAAFC 000B7A3C  40 82 03 EC */ bne lbl_800BAEE8
/* 800BAB00 000B7A40  38 00 00 06 */ li r0, 6
/* 800BAB04 000B7A44  98 1D 2F 97 */ stb r0, 0x2f97(r29)
/* 800BAB08 000B7A48  48 00 03 E0 */ b lbl_800BAEE8
lbl_800BAB0C:
/* 800BAB0C 000B7A4C  7F A3 EB 78 */ mr r3, r29
/* 800BAB10 000B7A50  48 02 59 9D */ bl checkBoomerangThrowAnime__9daAlink_cCFv
/* 800BAB14 000B7A54  2C 03 00 00 */ cmpwi r3, 0
/* 800BAB18 000B7A58  41 82 00 6C */ beq lbl_800BAB84
/* 800BAB1C 000B7A5C  7F C3 F3 78 */ mr r3, r30
/* 800BAB20 000B7A60  48 0A 39 AD */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800BAB24 000B7A64  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BAB28 000B7A68  40 82 00 28 */ bne lbl_800BAB50
/* 800BAB2C 000B7A6C  C0 3D 33 AC */ lfs f1, 0x33ac(r29)
/* 800BAB30 000B7A70  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BAB34 000B7A74  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BAB38 000B7A78  40 81 00 2C */ ble lbl_800BAB64
/* 800BAB3C 000B7A7C  C0 3E 00 10 */ lfs f1, 0x10(r30)
/* 800BAB40 000B7A80  38 7F 10 70 */ addi r3, r31, 0x1070
/* 800BAB44 000B7A84  C0 03 00 10 */ lfs f0, 0x10(r3)
/* 800BAB48 000B7A88  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BAB4C 000B7A8C  40 81 00 18 */ ble lbl_800BAB64
lbl_800BAB50:
/* 800BAB50 000B7A90  7F A3 EB 78 */ mr r3, r29
/* 800BAB54 000B7A94  38 80 00 02 */ li r4, 2
/* 800BAB58 000B7A98  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800BAB5C 000B7A9C  4B FF 2B C9 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 800BAB60 000B7AA0  48 00 03 88 */ b lbl_800BAEE8
lbl_800BAB64:
/* 800BAB64 000B7AA4  7F C3 F3 78 */ mr r3, r30
/* 800BAB68 000B7AA8  C0 22 95 88 */ lfs f1, lbl_80452F88-_SDA2_BASE_(r2)
/* 800BAB6C 000B7AAC  48 26 D8 C1 */ bl checkPass__12J3DFrameCtrlFf
/* 800BAB70 000B7AB0  2C 03 00 00 */ cmpwi r3, 0
/* 800BAB74 000B7AB4  41 82 03 74 */ beq lbl_800BAEE8
/* 800BAB78 000B7AB8  7F A3 EB 78 */ mr r3, r29
/* 800BAB7C 000B7ABC  48 02 5B 3D */ bl throwBoomerang__9daAlink_cFv
/* 800BAB80 000B7AC0  48 00 03 68 */ b lbl_800BAEE8
lbl_800BAB84:
/* 800BAB84 000B7AC4  38 60 00 00 */ li r3, 0
/* 800BAB88 000B7AC8  A0 1D 2F DC */ lhz r0, 0x2fdc(r29)
/* 800BAB8C 000B7ACC  28 00 00 46 */ cmplwi r0, 0x46
/* 800BAB90 000B7AD0  40 82 00 14 */ bne lbl_800BABA4
/* 800BAB94 000B7AD4  A0 1D 1F BC */ lhz r0, 0x1fbc(r29)
/* 800BAB98 000B7AD8  28 00 00 53 */ cmplwi r0, 0x53
/* 800BAB9C 000B7ADC  40 82 00 08 */ bne lbl_800BABA4
/* 800BABA0 000B7AE0  38 60 00 01 */ li r3, 1
lbl_800BABA4:
/* 800BABA4 000B7AE4  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BABA8 000B7AE8  41 82 00 6C */ beq lbl_800BAC14
/* 800BABAC 000B7AEC  7F C3 F3 78 */ mr r3, r30
/* 800BABB0 000B7AF0  48 0A 39 1D */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800BABB4 000B7AF4  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BABB8 000B7AF8  40 82 00 28 */ bne lbl_800BABE0
/* 800BABBC 000B7AFC  C0 3D 33 AC */ lfs f1, 0x33ac(r29)
/* 800BABC0 000B7B00  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BABC4 000B7B04  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BABC8 000B7B08  40 81 00 2C */ ble lbl_800BABF4
/* 800BABCC 000B7B0C  C0 3E 00 10 */ lfs f1, 0x10(r30)
/* 800BABD0 000B7B10  38 7F 10 70 */ addi r3, r31, 0x1070
/* 800BABD4 000B7B14  C0 03 00 10 */ lfs f0, 0x10(r3)
/* 800BABD8 000B7B18  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BABDC 000B7B1C  40 81 00 18 */ ble lbl_800BABF4
lbl_800BABE0:
/* 800BABE0 000B7B20  7F A3 EB 78 */ mr r3, r29
/* 800BABE4 000B7B24  38 80 00 02 */ li r4, 2
/* 800BABE8 000B7B28  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800BABEC 000B7B2C  4B FF 2B 39 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 800BABF0 000B7B30  48 00 02 F8 */ b lbl_800BAEE8
lbl_800BABF4:
/* 800BABF4 000B7B34  7F C3 F3 78 */ mr r3, r30
/* 800BABF8 000B7B38  C0 22 96 00 */ lfs f1, lbl_80453000-_SDA2_BASE_(r2)
/* 800BABFC 000B7B3C  48 26 D8 31 */ bl checkPass__12J3DFrameCtrlFf
/* 800BAC00 000B7B40  2C 03 00 00 */ cmpwi r3, 0
/* 800BAC04 000B7B44  41 82 02 E4 */ beq lbl_800BAEE8
/* 800BAC08 000B7B48  7F A3 EB 78 */ mr r3, r29
/* 800BAC0C 000B7B4C  48 02 6D 11 */ bl throwCopyRod__9daAlink_cFv
/* 800BAC10 000B7B50  48 00 02 D8 */ b lbl_800BAEE8
lbl_800BAC14:
/* 800BAC14 000B7B54  7F A3 EB 78 */ mr r3, r29
/* 800BAC18 000B7B58  4B FF E7 29 */ bl checkEquipAnime__9daAlink_cCFv
/* 800BAC1C 000B7B5C  2C 03 00 00 */ cmpwi r3, 0
/* 800BAC20 000B7B60  41 82 01 18 */ beq lbl_800BAD38
/* 800BAC24 000B7B64  7F A3 EB 78 */ mr r3, r29
/* 800BAC28 000B7B68  48 01 62 71 */ bl checkSwordEquipAnime__9daAlink_cCFv
/* 800BAC2C 000B7B6C  2C 03 00 00 */ cmpwi r3, 0
/* 800BAC30 000B7B70  41 82 00 14 */ beq lbl_800BAC44
/* 800BAC34 000B7B74  C0 22 98 BC */ lfs f1, lbl_804532BC-_SDA2_BASE_(r2)
/* 800BAC38 000B7B78  C0 1E 00 0C */ lfs f0, 0xc(r30)
/* 800BAC3C 000B7B7C  EF E1 00 2A */ fadds f31, f1, f0
/* 800BAC40 000B7B80  48 00 00 1C */ b lbl_800BAC5C
lbl_800BAC44:
/* 800BAC44 000B7B84  A0 1D 1F BC */ lhz r0, 0x1fbc(r29)
/* 800BAC48 000B7B88  28 00 02 45 */ cmplwi r0, 0x245
/* 800BAC4C 000B7B8C  40 82 00 0C */ bne lbl_800BAC58
/* 800BAC50 000B7B90  C3 E2 93 74 */ lfs f31, lbl_80452D74-_SDA2_BASE_(r2)
/* 800BAC54 000B7B94  48 00 00 08 */ b lbl_800BAC5C
lbl_800BAC58:
/* 800BAC58 000B7B98  C3 E2 93 44 */ lfs f31, lbl_80452D44-_SDA2_BASE_(r2)
lbl_800BAC5C:
/* 800BAC5C 000B7B9C  80 1D 05 74 */ lwz r0, 0x574(r29)
/* 800BAC60 000B7BA0  54 00 03 5B */ rlwinm. r0, r0, 0, 0xd, 0xd
/* 800BAC64 000B7BA4  41 82 00 84 */ beq lbl_800BACE8
/* 800BAC68 000B7BA8  7F A3 EB 78 */ mr r3, r29
/* 800BAC6C 000B7BAC  48 01 62 2D */ bl checkSwordEquipAnime__9daAlink_cCFv
/* 800BAC70 000B7BB0  2C 03 00 00 */ cmpwi r3, 0
/* 800BAC74 000B7BB4  41 82 00 0C */ beq lbl_800BAC80
/* 800BAC78 000B7BB8  C0 82 98 BC */ lfs f4, lbl_804532BC-_SDA2_BASE_(r2)
/* 800BAC7C 000B7BBC  48 00 00 1C */ b lbl_800BAC98
lbl_800BAC80:
/* 800BAC80 000B7BC0  A0 1D 1F BC */ lhz r0, 0x1fbc(r29)
/* 800BAC84 000B7BC4  28 00 02 45 */ cmplwi r0, 0x245
/* 800BAC88 000B7BC8  40 82 00 0C */ bne lbl_800BAC94
/* 800BAC8C 000B7BCC  C0 82 93 74 */ lfs f4, lbl_80452D74-_SDA2_BASE_(r2)
/* 800BAC90 000B7BD0  48 00 00 08 */ b lbl_800BAC98
lbl_800BAC94:
/* 800BAC94 000B7BD4  C0 82 93 44 */ lfs f4, lbl_80452D44-_SDA2_BASE_(r2)
lbl_800BAC98:
/* 800BAC98 000B7BD8  C0 1D 1F 50 */ lfs f0, 0x1f50(r29)
/* 800BAC9C 000B7BDC  D0 01 00 08 */ stfs f0, 8(r1)
/* 800BACA0 000B7BE0  A8 1E 00 08 */ lha r0, 8(r30)
/* 800BACA4 000B7BE4  C0 1E 00 0C */ lfs f0, 0xc(r30)
/* 800BACA8 000B7BE8  FC 00 02 10 */ fabs f0, f0
/* 800BACAC 000B7BEC  FC 60 00 18 */ frsp f3, f0
/* 800BACB0 000B7BF0  38 61 00 08 */ addi r3, r1, 8
/* 800BACB4 000B7BF4  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800BACB8 000B7BF8  C8 42 92 B0 */ lfd f2, lbl_80452CB0-_SDA2_BASE_(r2)
/* 800BACBC 000B7BFC  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 800BACC0 000B7C00  90 01 00 14 */ stw r0, 0x14(r1)
/* 800BACC4 000B7C04  3C 00 43 30 */ lis r0, 0x4330
/* 800BACC8 000B7C08  90 01 00 10 */ stw r0, 0x10(r1)
/* 800BACCC 000B7C0C  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 800BACD0 000B7C10  EC 00 10 28 */ fsubs f0, f0, f2
/* 800BACD4 000B7C14  EC 00 20 28 */ fsubs f0, f0, f4
/* 800BACD8 000B7C18  EC 43 00 24 */ fdivs f2, f3, f0
/* 800BACDC 000B7C1C  48 1B 5A 65 */ bl cLib_chaseF__FPfff
/* 800BACE0 000B7C20  C0 01 00 08 */ lfs f0, 8(r1)
/* 800BACE4 000B7C24  D0 1D 1F 50 */ stfs f0, 0x1f50(r29)
lbl_800BACE8:
/* 800BACE8 000B7C28  7F C3 F3 78 */ mr r3, r30
/* 800BACEC 000B7C2C  48 0A 37 E1 */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800BACF0 000B7C30  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BACF4 000B7C34  41 82 00 24 */ beq lbl_800BAD18
/* 800BACF8 000B7C38  7F A3 EB 78 */ mr r3, r29
/* 800BACFC 000B7C3C  38 80 00 02 */ li r4, 2
/* 800BAD00 000B7C40  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800BAD04 000B7C44  4B FF 2A 21 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 800BAD08 000B7C48  7F A3 EB 78 */ mr r3, r29
/* 800BAD0C 000B7C4C  38 80 00 01 */ li r4, 1
/* 800BAD10 000B7C50  48 03 41 4D */ bl setHorseSwordUp__9daAlink_cFi
/* 800BAD14 000B7C54  48 00 01 D4 */ b lbl_800BAEE8
lbl_800BAD18:
/* 800BAD18 000B7C58  7F C3 F3 78 */ mr r3, r30
/* 800BAD1C 000B7C5C  FC 20 F8 90 */ fmr f1, f31
/* 800BAD20 000B7C60  48 26 D7 0D */ bl checkPass__12J3DFrameCtrlFf
/* 800BAD24 000B7C64  2C 03 00 00 */ cmpwi r3, 0
/* 800BAD28 000B7C68  41 82 01 C0 */ beq lbl_800BAEE8
/* 800BAD2C 000B7C6C  7F A3 EB 78 */ mr r3, r29
/* 800BAD30 000B7C70  4B FF F9 71 */ bl commonChangeItem__9daAlink_cFv
/* 800BAD34 000B7C74  48 00 01 B4 */ b lbl_800BAEE8
lbl_800BAD38:
/* 800BAD38 000B7C78  7F A3 EB 78 */ mr r3, r29
/* 800BAD3C 000B7C7C  48 01 61 91 */ bl checkCutDashAnime__9daAlink_cCFv
/* 800BAD40 000B7C80  2C 03 00 00 */ cmpwi r3, 0
/* 800BAD44 000B7C84  41 82 01 68 */ beq lbl_800BAEAC
/* 800BAD48 000B7C88  38 7F 08 34 */ addi r3, r31, 0x834
/* 800BAD4C 000B7C8C  A8 03 00 52 */ lha r0, 0x52(r3)
/* 800BAD50 000B7C90  B0 1D 30 7E */ sth r0, 0x307e(r29)
/* 800BAD54 000B7C94  7F C3 F3 78 */ mr r3, r30
/* 800BAD58 000B7C98  48 0A 37 75 */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800BAD5C 000B7C9C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BAD60 000B7CA0  41 82 00 24 */ beq lbl_800BAD84
/* 800BAD64 000B7CA4  7F A3 EB 78 */ mr r3, r29
/* 800BAD68 000B7CA8  38 80 00 02 */ li r4, 2
/* 800BAD6C 000B7CAC  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800BAD70 000B7CB0  4B FF 29 B5 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 800BAD74 000B7CB4  80 1D 05 80 */ lwz r0, 0x580(r29)
/* 800BAD78 000B7CB8  64 00 08 00 */ oris r0, r0, 0x800
/* 800BAD7C 000B7CBC  90 1D 05 80 */ stw r0, 0x580(r29)
/* 800BAD80 000B7CC0  48 00 01 68 */ b lbl_800BAEE8
lbl_800BAD84:
/* 800BAD84 000B7CC4  A0 1D 1F BC */ lhz r0, 0x1fbc(r29)
/* 800BAD88 000B7CC8  28 00 00 80 */ cmplwi r0, 0x80
/* 800BAD8C 000B7CCC  40 82 00 0C */ bne lbl_800BAD98
/* 800BAD90 000B7CD0  38 7F 06 98 */ addi r3, r31, 0x698
/* 800BAD94 000B7CD4  48 00 00 1C */ b lbl_800BADB0
lbl_800BAD98:
/* 800BAD98 000B7CD8  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800BAD9C 000B7CDC  28 00 00 81 */ cmplwi r0, 0x81
/* 800BADA0 000B7CE0  40 82 00 0C */ bne lbl_800BADAC
/* 800BADA4 000B7CE4  38 7F 06 B4 */ addi r3, r31, 0x6b4
/* 800BADA8 000B7CE8  48 00 00 08 */ b lbl_800BADB0
lbl_800BADAC:
/* 800BADAC 000B7CEC  38 7F 06 D0 */ addi r3, r31, 0x6d0
lbl_800BADB0:
/* 800BADB0 000B7CF0  C0 3E 00 10 */ lfs f1, 0x10(r30)
/* 800BADB4 000B7CF4  C0 03 00 14 */ lfs f0, 0x14(r3)
/* 800BADB8 000B7CF8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BADBC 000B7CFC  4C 41 13 82 */ cror 2, 1, 2
/* 800BADC0 000B7D00  40 82 00 38 */ bne lbl_800BADF8
/* 800BADC4 000B7D04  C0 03 00 18 */ lfs f0, 0x18(r3)
/* 800BADC8 000B7D08  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BADCC 000B7D0C  40 80 00 2C */ bge lbl_800BADF8
/* 800BADD0 000B7D10  80 1D 05 70 */ lwz r0, 0x570(r29)
/* 800BADD4 000B7D14  54 00 06 73 */ rlwinm. r0, r0, 0, 0x19, 0x19
/* 800BADD8 000B7D18  40 82 00 14 */ bne lbl_800BADEC
/* 800BADDC 000B7D1C  7F A3 EB 78 */ mr r3, r29
/* 800BADE0 000B7D20  3C 80 00 02 */ lis r4, 0x00020002@ha
/* 800BADE4 000B7D24  38 84 00 02 */ addi r4, r4, 0x00020002@l
/* 800BADE8 000B7D28  48 00 43 05 */ bl seStartSwordCut__9daAlink_cFUl
lbl_800BADEC:
/* 800BADEC 000B7D2C  80 1D 05 80 */ lwz r0, 0x580(r29)
/* 800BADF0 000B7D30  60 00 00 02 */ ori r0, r0, 2
/* 800BADF4 000B7D34  90 1D 05 80 */ stw r0, 0x580(r29)
lbl_800BADF8:
/* 800BADF8 000B7D38  7F A3 EB 78 */ mr r3, r29
/* 800BADFC 000B7D3C  4B FE CC 61 */ bl checkDashAnime__9daAlink_cCFv
/* 800BAE00 000B7D40  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BAE04 000B7D44  40 82 00 20 */ bne lbl_800BAE24
/* 800BAE08 000B7D48  A0 1D 2F E8 */ lhz r0, 0x2fe8(r29)
/* 800BAE0C 000B7D4C  28 00 00 AC */ cmplwi r0, 0xac
/* 800BAE10 000B7D50  41 82 00 14 */ beq lbl_800BAE24
/* 800BAE14 000B7D54  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 800BAE18 000B7D58  54 00 07 FA */ rlwinm r0, r0, 0, 0x1f, 0x1d
/* 800BAE1C 000B7D5C  90 1D 05 78 */ stw r0, 0x578(r29)
/* 800BAE20 000B7D60  48 00 00 2C */ b lbl_800BAE4C
lbl_800BAE24:
/* 800BAE24 000B7D64  88 1D 2F CE */ lbz r0, 0x2fce(r29)
/* 800BAE28 000B7D68  28 00 00 00 */ cmplwi r0, 0
/* 800BAE2C 000B7D6C  40 82 00 20 */ bne lbl_800BAE4C
/* 800BAE30 000B7D70  7F A3 EB 78 */ mr r3, r29
/* 800BAE34 000B7D74  4B FF 78 85 */ bl swordSwingTrigger__9daAlink_cFv
/* 800BAE38 000B7D78  2C 03 00 00 */ cmpwi r3, 0
/* 800BAE3C 000B7D7C  41 82 00 10 */ beq lbl_800BAE4C
/* 800BAE40 000B7D80  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 800BAE44 000B7D84  60 00 00 02 */ ori r0, r0, 2
/* 800BAE48 000B7D88  90 1D 05 78 */ stw r0, 0x578(r29)
lbl_800BAE4C:
/* 800BAE4C 000B7D8C  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 800BAE50 000B7D90  54 00 07 B8 */ rlwinm r0, r0, 0, 0x1e, 0x1c
/* 800BAE54 000B7D94  90 1D 05 78 */ stw r0, 0x578(r29)
/* 800BAE58 000B7D98  7F A3 EB 78 */ mr r3, r29
/* 800BAE5C 000B7D9C  38 80 00 08 */ li r4, 8
/* 800BAE60 000B7DA0  4B FF 77 89 */ bl itemButtonCheck__9daAlink_cFUc
/* 800BAE64 000B7DA4  2C 03 00 00 */ cmpwi r3, 0
/* 800BAE68 000B7DA8  41 82 00 38 */ beq lbl_800BAEA0
/* 800BAE6C 000B7DAC  80 1D 05 74 */ lwz r0, 0x574(r29)
/* 800BAE70 000B7DB0  54 00 01 4B */ rlwinm. r0, r0, 0, 5, 5
/* 800BAE74 000B7DB4  40 82 00 2C */ bne lbl_800BAEA0
/* 800BAE78 000B7DB8  88 7D 2F B7 */ lbz r3, 0x2fb7(r29)
/* 800BAE7C 000B7DBC  28 03 00 03 */ cmplwi r3, 3
/* 800BAE80 000B7DC0  40 80 00 10 */ bge lbl_800BAE90
/* 800BAE84 000B7DC4  38 03 00 01 */ addi r0, r3, 1
/* 800BAE88 000B7DC8  98 1D 2F B7 */ stb r0, 0x2fb7(r29)
/* 800BAE8C 000B7DCC  48 00 00 5C */ b lbl_800BAEE8
lbl_800BAE90:
/* 800BAE90 000B7DD0  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 800BAE94 000B7DD4  60 00 00 04 */ ori r0, r0, 4
/* 800BAE98 000B7DD8  90 1D 05 78 */ stw r0, 0x578(r29)
/* 800BAE9C 000B7DDC  48 00 00 4C */ b lbl_800BAEE8
lbl_800BAEA0:
/* 800BAEA0 000B7DE0  38 00 00 00 */ li r0, 0
/* 800BAEA4 000B7DE4  98 1D 2F B7 */ stb r0, 0x2fb7(r29)
/* 800BAEA8 000B7DE8  48 00 00 40 */ b lbl_800BAEE8
lbl_800BAEAC:
/* 800BAEAC 000B7DEC  A0 1D 1F BC */ lhz r0, 0x1fbc(r29)
/* 800BAEB0 000B7DF0  28 00 00 83 */ cmplwi r0, 0x83
/* 800BAEB4 000B7DF4  40 82 00 34 */ bne lbl_800BAEE8
/* 800BAEB8 000B7DF8  7F A3 EB 78 */ mr r3, r29
/* 800BAEBC 000B7DFC  38 80 00 08 */ li r4, 8
/* 800BAEC0 000B7E00  4B FF 77 29 */ bl itemButtonCheck__9daAlink_cFUc
/* 800BAEC4 000B7E04  2C 03 00 00 */ cmpwi r3, 0
/* 800BAEC8 000B7E08  40 82 00 20 */ bne lbl_800BAEE8
/* 800BAECC 000B7E0C  7F C3 F3 78 */ mr r3, r30
/* 800BAED0 000B7E10  48 0A 35 FD */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800BAED4 000B7E14  7C 60 1B 78 */ mr r0, r3
/* 800BAED8 000B7E18  7F A3 EB 78 */ mr r3, r29
/* 800BAEDC 000B7E1C  38 80 00 01 */ li r4, 1
/* 800BAEE0 000B7E20  54 05 06 3E */ clrlwi r5, r0, 0x18
/* 800BAEE4 000B7E24  48 01 6F 39 */ bl setCutDash__9daAlink_cFii
lbl_800BAEE8:
/* 800BAEE8 000B7E28  E3 E1 00 38 */ psq_l f31, 56(r1), 0, 0
/* 800BAEEC 000B7E2C  CB E1 00 30 */ lfd f31, 0x30(r1)
/* 800BAEF0 000B7E30  39 61 00 30 */ addi r11, r1, 0x30
/* 800BAEF4 000B7E34  48 2A 73 35 */ bl _restgpr_29
/* 800BAEF8 000B7E38  80 01 00 44 */ lwz r0, 0x44(r1)
/* 800BAEFC 000B7E3C  7C 08 03 A6 */ mtlr r0
/* 800BAF00 000B7E40  38 21 00 40 */ addi r1, r1, 0x40
/* 800BAF04 000B7E44  4E 80 00 20 */ blr
