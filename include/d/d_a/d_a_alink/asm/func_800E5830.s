/* 800E5830 000E2770  94 21 FF A0 */ stwu r1, -0x60(r1)
/* 800E5834 000E2774  7C 08 02 A6 */ mflr r0
/* 800E5838 000E2778  90 01 00 64 */ stw r0, 0x64(r1)
/* 800E583C 000E277C  DB E1 00 50 */ stfd f31, 0x50(r1)
/* 800E5840 000E2780  F3 E1 00 58 */ psq_st f31, 88(r1), 0, 0
/* 800E5844 000E2784  39 61 00 50 */ addi r11, r1, 0x50
/* 800E5848 000E2788  48 27 C9 91 */ bl _savegpr_28
/* 800E584C 000E278C  7C 7E 1B 78 */ mr r30, r3
/* 800E5850 000E2790  7C 9C 23 78 */ mr r28, r4
/* 800E5854 000E2794  7C BD 2B 78 */ mr r29, r5
/* 800E5858 000E2798  7C DF 33 78 */ mr r31, r6
/* 800E585C 000E279C  4B FC 4D 8D */ bl checkNoCollisionCorret__9daAlink_cFv
/* 800E5860 000E27A0  2C 03 00 00 */ cmpwi r3, 0
/* 800E5864 000E27A4  40 82 02 E8 */ bne lbl_800E5B4C
/* 800E5868 000E27A8  7F 83 E3 78 */ mr r3, r28
/* 800E586C 000E27AC  38 9E 37 C8 */ addi r4, r30, 0x37c8
/* 800E5870 000E27B0  7F A5 EB 78 */ mr r5, r29
/* 800E5874 000E27B4  7F E6 FB 78 */ mr r6, r31
/* 800E5878 000E27B8  4B F9 24 ED */ bl Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c
/* 800E587C 000E27BC  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800E5880 000E27C0  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800E5884 000E27C4  38 63 0F 38 */ addi r3, r3, 0xf38
/* 800E5888 000E27C8  7F 84 E3 78 */ mr r4, r28
/* 800E588C 000E27CC  4B F8 EB 29 */ bl LineCross__4cBgSFP11cBgS_LinChk
/* 800E5890 000E27D0  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800E5894 000E27D4  41 82 02 B8 */ beq lbl_800E5B4C
/* 800E5898 000E27D8  38 7C 00 14 */ addi r3, r28, 0x14
/* 800E589C 000E27DC  4B F9 04 71 */ bl dBgS_CheckBWallPoly__FRC13cBgS_PolyInfo
/* 800E58A0 000E27E0  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800E58A4 000E27E4  41 82 02 A8 */ beq lbl_800E5B4C
/* 800E58A8 000E27E8  38 61 00 1C */ addi r3, r1, 0x1c
/* 800E58AC 000E27EC  7F A4 EB 78 */ mr r4, r29
/* 800E58B0 000E27F0  38 BC 00 30 */ addi r5, r28, 0x30
/* 800E58B4 000E27F4  48 18 12 81 */ bl __mi__4cXyzCFRC3Vec
/* 800E58B8 000E27F8  C0 01 00 1C */ lfs f0, 0x1c(r1)
/* 800E58BC 000E27FC  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800E58C0 000E2800  C0 01 00 20 */ lfs f0, 0x20(r1)
/* 800E58C4 000E2804  D0 01 00 2C */ stfs f0, 0x2c(r1)
/* 800E58C8 000E2808  C0 01 00 24 */ lfs f0, 0x24(r1)
/* 800E58CC 000E280C  D0 01 00 30 */ stfs f0, 0x30(r1)
/* 800E58D0 000E2810  38 61 00 28 */ addi r3, r1, 0x28
/* 800E58D4 000E2814  48 26 18 65 */ bl PSVECSquareMag
/* 800E58D8 000E2818  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E58DC 000E281C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E58E0 000E2820  40 81 00 58 */ ble lbl_800E5938
/* 800E58E4 000E2824  FC 00 08 34 */ frsqrte f0, f1
/* 800E58E8 000E2828  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800E58EC 000E282C  FC 44 00 32 */ fmul f2, f4, f0
/* 800E58F0 000E2830  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800E58F4 000E2834  FC 00 00 32 */ fmul f0, f0, f0
/* 800E58F8 000E2838  FC 01 00 32 */ fmul f0, f1, f0
/* 800E58FC 000E283C  FC 03 00 28 */ fsub f0, f3, f0
/* 800E5900 000E2840  FC 02 00 32 */ fmul f0, f2, f0
/* 800E5904 000E2844  FC 44 00 32 */ fmul f2, f4, f0
/* 800E5908 000E2848  FC 00 00 32 */ fmul f0, f0, f0
/* 800E590C 000E284C  FC 01 00 32 */ fmul f0, f1, f0
/* 800E5910 000E2850  FC 03 00 28 */ fsub f0, f3, f0
/* 800E5914 000E2854  FC 02 00 32 */ fmul f0, f2, f0
/* 800E5918 000E2858  FC 44 00 32 */ fmul f2, f4, f0
/* 800E591C 000E285C  FC 00 00 32 */ fmul f0, f0, f0
/* 800E5920 000E2860  FC 01 00 32 */ fmul f0, f1, f0
/* 800E5924 000E2864  FC 03 00 28 */ fsub f0, f3, f0
/* 800E5928 000E2868  FC 02 00 32 */ fmul f0, f2, f0
/* 800E592C 000E286C  FF E1 00 32 */ fmul f31, f1, f0
/* 800E5930 000E2870  FF E0 F8 18 */ frsp f31, f31
/* 800E5934 000E2874  48 00 00 90 */ b lbl_800E59C4
lbl_800E5938:
/* 800E5938 000E2878  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800E593C 000E287C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E5940 000E2880  40 80 00 10 */ bge lbl_800E5950
/* 800E5944 000E2884  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800E5948 000E2888  C3 E3 0A E0 */ lfs f31, lbl_80450AE0@l(r3)
/* 800E594C 000E288C  48 00 00 78 */ b lbl_800E59C4
lbl_800E5950:
/* 800E5950 000E2890  D0 21 00 0C */ stfs f1, 0xc(r1)
/* 800E5954 000E2894  80 81 00 0C */ lwz r4, 0xc(r1)
/* 800E5958 000E2898  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800E595C 000E289C  3C 00 7F 80 */ lis r0, 0x7f80
/* 800E5960 000E28A0  7C 03 00 00 */ cmpw r3, r0
/* 800E5964 000E28A4  41 82 00 14 */ beq lbl_800E5978
/* 800E5968 000E28A8  40 80 00 40 */ bge lbl_800E59A8
/* 800E596C 000E28AC  2C 03 00 00 */ cmpwi r3, 0
/* 800E5970 000E28B0  41 82 00 20 */ beq lbl_800E5990
/* 800E5974 000E28B4  48 00 00 34 */ b lbl_800E59A8
lbl_800E5978:
/* 800E5978 000E28B8  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800E597C 000E28BC  41 82 00 0C */ beq lbl_800E5988
/* 800E5980 000E28C0  38 00 00 01 */ li r0, 1
/* 800E5984 000E28C4  48 00 00 28 */ b lbl_800E59AC
lbl_800E5988:
/* 800E5988 000E28C8  38 00 00 02 */ li r0, 2
/* 800E598C 000E28CC  48 00 00 20 */ b lbl_800E59AC
lbl_800E5990:
/* 800E5990 000E28D0  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800E5994 000E28D4  41 82 00 0C */ beq lbl_800E59A0
/* 800E5998 000E28D8  38 00 00 05 */ li r0, 5
/* 800E599C 000E28DC  48 00 00 10 */ b lbl_800E59AC
lbl_800E59A0:
/* 800E59A0 000E28E0  38 00 00 03 */ li r0, 3
/* 800E59A4 000E28E4  48 00 00 08 */ b lbl_800E59AC
lbl_800E59A8:
/* 800E59A8 000E28E8  38 00 00 04 */ li r0, 4
lbl_800E59AC:
/* 800E59AC 000E28EC  2C 00 00 01 */ cmpwi r0, 1
/* 800E59B0 000E28F0  40 82 00 10 */ bne lbl_800E59C0
/* 800E59B4 000E28F4  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800E59B8 000E28F8  C3 E3 0A E0 */ lfs f31, lbl_80450AE0@l(r3)
/* 800E59BC 000E28FC  48 00 00 08 */ b lbl_800E59C4
lbl_800E59C0:
/* 800E59C0 000E2900  FF E0 08 90 */ fmr f31, f1
lbl_800E59C4:
/* 800E59C4 000E2904  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 800E59C8 000E2908  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800E59CC 000E290C  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E59D0 000E2910  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 800E59D4 000E2914  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 800E59D8 000E2918  D0 01 00 18 */ stfs f0, 0x18(r1)
/* 800E59DC 000E291C  38 61 00 10 */ addi r3, r1, 0x10
/* 800E59E0 000E2920  48 26 17 59 */ bl PSVECSquareMag
/* 800E59E4 000E2924  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E59E8 000E2928  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E59EC 000E292C  40 81 00 58 */ ble lbl_800E5A44
/* 800E59F0 000E2930  FC 00 08 34 */ frsqrte f0, f1
/* 800E59F4 000E2934  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800E59F8 000E2938  FC 44 00 32 */ fmul f2, f4, f0
/* 800E59FC 000E293C  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800E5A00 000E2940  FC 00 00 32 */ fmul f0, f0, f0
/* 800E5A04 000E2944  FC 01 00 32 */ fmul f0, f1, f0
/* 800E5A08 000E2948  FC 03 00 28 */ fsub f0, f3, f0
/* 800E5A0C 000E294C  FC 02 00 32 */ fmul f0, f2, f0
/* 800E5A10 000E2950  FC 44 00 32 */ fmul f2, f4, f0
/* 800E5A14 000E2954  FC 00 00 32 */ fmul f0, f0, f0
/* 800E5A18 000E2958  FC 01 00 32 */ fmul f0, f1, f0
/* 800E5A1C 000E295C  FC 03 00 28 */ fsub f0, f3, f0
/* 800E5A20 000E2960  FC 02 00 32 */ fmul f0, f2, f0
/* 800E5A24 000E2964  FC 44 00 32 */ fmul f2, f4, f0
/* 800E5A28 000E2968  FC 00 00 32 */ fmul f0, f0, f0
/* 800E5A2C 000E296C  FC 01 00 32 */ fmul f0, f1, f0
/* 800E5A30 000E2970  FC 03 00 28 */ fsub f0, f3, f0
/* 800E5A34 000E2974  FC 02 00 32 */ fmul f0, f2, f0
/* 800E5A38 000E2978  FC 21 00 32 */ fmul f1, f1, f0
/* 800E5A3C 000E297C  FC 20 08 18 */ frsp f1, f1
/* 800E5A40 000E2980  48 00 00 88 */ b lbl_800E5AC8
lbl_800E5A44:
/* 800E5A44 000E2984  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800E5A48 000E2988  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E5A4C 000E298C  40 80 00 10 */ bge lbl_800E5A5C
/* 800E5A50 000E2990  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800E5A54 000E2994  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 800E5A58 000E2998  48 00 00 70 */ b lbl_800E5AC8
lbl_800E5A5C:
/* 800E5A5C 000E299C  D0 21 00 08 */ stfs f1, 8(r1)
/* 800E5A60 000E29A0  80 81 00 08 */ lwz r4, 8(r1)
/* 800E5A64 000E29A4  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800E5A68 000E29A8  3C 00 7F 80 */ lis r0, 0x7f80
/* 800E5A6C 000E29AC  7C 03 00 00 */ cmpw r3, r0
/* 800E5A70 000E29B0  41 82 00 14 */ beq lbl_800E5A84
/* 800E5A74 000E29B4  40 80 00 40 */ bge lbl_800E5AB4
/* 800E5A78 000E29B8  2C 03 00 00 */ cmpwi r3, 0
/* 800E5A7C 000E29BC  41 82 00 20 */ beq lbl_800E5A9C
/* 800E5A80 000E29C0  48 00 00 34 */ b lbl_800E5AB4
lbl_800E5A84:
/* 800E5A84 000E29C4  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800E5A88 000E29C8  41 82 00 0C */ beq lbl_800E5A94
/* 800E5A8C 000E29CC  38 00 00 01 */ li r0, 1
/* 800E5A90 000E29D0  48 00 00 28 */ b lbl_800E5AB8
lbl_800E5A94:
/* 800E5A94 000E29D4  38 00 00 02 */ li r0, 2
/* 800E5A98 000E29D8  48 00 00 20 */ b lbl_800E5AB8
lbl_800E5A9C:
/* 800E5A9C 000E29DC  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800E5AA0 000E29E0  41 82 00 0C */ beq lbl_800E5AAC
/* 800E5AA4 000E29E4  38 00 00 05 */ li r0, 5
/* 800E5AA8 000E29E8  48 00 00 10 */ b lbl_800E5AB8
lbl_800E5AAC:
/* 800E5AAC 000E29EC  38 00 00 03 */ li r0, 3
/* 800E5AB0 000E29F0  48 00 00 08 */ b lbl_800E5AB8
lbl_800E5AB4:
/* 800E5AB4 000E29F4  38 00 00 04 */ li r0, 4
lbl_800E5AB8:
/* 800E5AB8 000E29F8  2C 00 00 01 */ cmpwi r0, 1
/* 800E5ABC 000E29FC  40 82 00 0C */ bne lbl_800E5AC8
/* 800E5AC0 000E2A00  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800E5AC4 000E2A04  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_800E5AC8:
/* 800E5AC8 000E2A08  C0 02 93 88 */ lfs f0, lbl_80452D88-_SDA2_BASE_(r2)
/* 800E5ACC 000E2A0C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E5AD0 000E2A10  40 81 00 24 */ ble lbl_800E5AF4
/* 800E5AD4 000E2A14  EC 3F 08 24 */ fdivs f1, f31, f1
/* 800E5AD8 000E2A18  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 800E5ADC 000E2A1C  EC 00 00 72 */ fmuls f0, f0, f1
/* 800E5AE0 000E2A20  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800E5AE4 000E2A24  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 800E5AE8 000E2A28  EC 00 00 72 */ fmuls f0, f0, f1
/* 800E5AEC 000E2A2C  D0 01 00 30 */ stfs f0, 0x30(r1)
/* 800E5AF0 000E2A30  48 00 00 1C */ b lbl_800E5B0C
lbl_800E5AF4:
/* 800E5AF4 000E2A34  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 800E5AF8 000E2A38  EC 00 07 F2 */ fmuls f0, f0, f31
/* 800E5AFC 000E2A3C  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800E5B00 000E2A40  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 800E5B04 000E2A44  EC 00 07 F2 */ fmuls f0, f0, f31
/* 800E5B08 000E2A48  D0 01 00 30 */ stfs f0, 0x30(r1)
lbl_800E5B0C:
/* 800E5B0C 000E2A4C  C0 3E 04 D0 */ lfs f1, 0x4d0(r30)
/* 800E5B10 000E2A50  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 800E5B14 000E2A54  EC 01 00 28 */ fsubs f0, f1, f0
/* 800E5B18 000E2A58  D0 1E 04 D0 */ stfs f0, 0x4d0(r30)
/* 800E5B1C 000E2A5C  C0 3E 04 D8 */ lfs f1, 0x4d8(r30)
/* 800E5B20 000E2A60  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 800E5B24 000E2A64  EC 01 00 28 */ fsubs f0, f1, f0
/* 800E5B28 000E2A68  D0 1E 04 D8 */ stfs f0, 0x4d8(r30)
/* 800E5B2C 000E2A6C  C0 3F 04 D0 */ lfs f1, 0x4d0(r31)
/* 800E5B30 000E2A70  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 800E5B34 000E2A74  EC 01 00 28 */ fsubs f0, f1, f0
/* 800E5B38 000E2A78  D0 1F 04 D0 */ stfs f0, 0x4d0(r31)
/* 800E5B3C 000E2A7C  C0 3F 04 D8 */ lfs f1, 0x4d8(r31)
/* 800E5B40 000E2A80  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 800E5B44 000E2A84  EC 01 00 28 */ fsubs f0, f1, f0
/* 800E5B48 000E2A88  D0 1F 04 D8 */ stfs f0, 0x4d8(r31)
lbl_800E5B4C:
/* 800E5B4C 000E2A8C  E3 E1 00 58 */ psq_l f31, 88(r1), 0, 0
/* 800E5B50 000E2A90  CB E1 00 50 */ lfd f31, 0x50(r1)
/* 800E5B54 000E2A94  39 61 00 50 */ addi r11, r1, 0x50
/* 800E5B58 000E2A98  48 27 C6 CD */ bl _restgpr_28
/* 800E5B5C 000E2A9C  80 01 00 64 */ lwz r0, 0x64(r1)
/* 800E5B60 000E2AA0  7C 08 03 A6 */ mtlr r0
/* 800E5B64 000E2AA4  38 21 00 60 */ addi r1, r1, 0x60
/* 800E5B68 000E2AA8  4E 80 00 20 */ blr
