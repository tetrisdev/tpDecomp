/* 8000DA08 0000A948  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 8000DA0C 0000A94C  7C 08 02 A6 */ mflr r0
/* 8000DA10 0000A950  90 01 00 34 */ stw r0, 0x34(r1)
/* 8000DA14 0000A954  DB E1 00 28 */ stfd f31, 0x28(r1)
/* 8000DA18 0000A958  39 61 00 28 */ addi r11, r1, 0x28
/* 8000DA1C 0000A95C  48 35 47 B9 */ bl _savegpr_27
/* 8000DA20 0000A960  7C 7B 1B 78 */ mr r27, r3
/* 8000DA24 0000A964  7C DC 33 78 */ mr r28, r6
/* 8000DA28 0000A968  7C FD 3B 78 */ mr r29, r7
/* 8000DA2C 0000A96C  FF E0 08 90 */ fmr f31, f1
/* 8000DA30 0000A970  7D 1E 43 78 */ mr r30, r8
/* 8000DA34 0000A974  7D 3F 4B 78 */ mr r31, r9
/* 8000DA38 0000A978  90 A3 00 14 */ stw r5, 0x14(r3)
/* 8000DA3C 0000A97C  7C 83 23 78 */ mr r3, r4
/* 8000DA40 0000A980  80 9B 00 14 */ lwz r4, 0x14(r27)
/* 8000DA44 0000A984  48 32 09 21 */ bl setAnm__13J3DDeformDataFP13J3DAnmCluster
/* 8000DA48 0000A988  2C 1C 00 00 */ cmpwi r28, 0
/* 8000DA4C 0000A98C  41 82 00 3C */ beq lbl_8000DA88
/* 8000DA50 0000A990  2C 1D 00 00 */ cmpwi r29, 0
/* 8000DA54 0000A994  40 80 00 10 */ bge lbl_8000DA64
/* 8000DA58 0000A998  80 7B 00 14 */ lwz r3, 0x14(r27)
/* 8000DA5C 0000A99C  88 A3 00 04 */ lbz r5, 4(r3)
/* 8000DA60 0000A9A0  48 00 00 08 */ b lbl_8000DA68
lbl_8000DA64:
/* 8000DA64 0000A9A4  7F A5 EB 78 */ mr r5, r29
lbl_8000DA68:
/* 8000DA68 0000A9A8  80 7B 00 14 */ lwz r3, 0x14(r27)
/* 8000DA6C 0000A9AC  A8 83 00 06 */ lha r4, 6(r3)
/* 8000DA70 0000A9B0  7F 63 DB 78 */ mr r3, r27
/* 8000DA74 0000A9B4  FC 20 F8 90 */ fmr f1, f31
/* 8000DA78 0000A9B8  7F C6 F3 78 */ mr r6, r30
/* 8000DA7C 0000A9BC  7F E7 FB 78 */ mr r7, r31
/* 8000DA80 0000A9C0  4B FF F8 A1 */ bl initPlay__14mDoExt_baseAnmFsifss
/* 8000DA84 0000A9C4  48 00 00 08 */ b lbl_8000DA8C
lbl_8000DA88:
/* 8000DA88 0000A9C8  38 60 00 01 */ li r3, 1
lbl_8000DA8C:
/* 8000DA8C 0000A9CC  CB E1 00 28 */ lfd f31, 0x28(r1)
/* 8000DA90 0000A9D0  39 61 00 28 */ addi r11, r1, 0x28
/* 8000DA94 0000A9D4  48 35 47 8D */ bl _restgpr_27
/* 8000DA98 0000A9D8  80 01 00 34 */ lwz r0, 0x34(r1)
/* 8000DA9C 0000A9DC  7C 08 03 A6 */ mtlr r0
/* 8000DAA0 0000A9E0  38 21 00 30 */ addi r1, r1, 0x30
/* 8000DAA4 0000A9E4  4E 80 00 20 */ blr
