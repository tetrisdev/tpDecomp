/* 80132914 0012F854  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 80132918 0012F858  7C 08 02 A6 */ mflr r0
/* 8013291C 0012F85C  90 01 00 44 */ stw r0, 0x44(r1)
/* 80132920 0012F860  DB E1 00 30 */ stfd f31, 0x30(r1)
/* 80132924 0012F864  F3 E1 00 38 */ psq_st f31, 56(r1), 0, 0
/* 80132928 0012F868  39 61 00 30 */ addi r11, r1, 0x30
/* 8013292C 0012F86C  48 22 F8 B1 */ bl _savegpr_29
/* 80132930 0012F870  7C 7E 1B 78 */ mr r30, r3
/* 80132934 0012F874  3B BE 1F D0 */ addi r29, r30, 0x1fd0
/* 80132938 0012F878  83 E3 28 10 */ lwz r31, 0x2810(r3)
/* 8013293C 0012F87C  28 1F 00 00 */ cmplwi r31, 0
/* 80132940 0012F880  40 82 00 10 */ bne lbl_80132950
/* 80132944 0012F884  38 80 00 00 */ li r4, 0
/* 80132948 0012F888  4B FF 71 FD */ bl checkNextActionWolf__9daAlink_cFi
/* 8013294C 0012F88C  48 00 03 FC */ b lbl_80132D48
lbl_80132950:
/* 80132950 0012F890  7F A3 EB 78 */ mr r3, r29
/* 80132954 0012F894  48 02 BB 79 */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 80132958 0012F898  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8013295C 0012F89C  41 82 00 E4 */ beq lbl_80132A40
/* 80132960 0012F8A0  A8 1E 30 0E */ lha r0, 0x300e(r30)
/* 80132964 0012F8A4  2C 00 00 00 */ cmpwi r0, 0
/* 80132968 0012F8A8  41 82 00 A4 */ beq lbl_80132A0C
/* 8013296C 0012F8AC  80 7E 20 60 */ lwz r3, 0x2060(r30)
/* 80132970 0012F8B0  80 63 00 1C */ lwz r3, 0x1c(r3)
/* 80132974 0012F8B4  C0 23 00 1C */ lfs f1, 0x1c(r3)
/* 80132978 0012F8B8  C0 02 94 64 */ lfs f0, lbl_80452E64-_SDA2_BASE_(r2)
/* 8013297C 0012F8BC  EC 01 00 28 */ fsubs f0, f1, f0
/* 80132980 0012F8C0  D0 03 00 1C */ stfs f0, 0x1c(r3)
/* 80132984 0012F8C4  80 1E 31 98 */ lwz r0, 0x3198(r30)
/* 80132988 0012F8C8  2C 00 00 02 */ cmpwi r0, 2
/* 8013298C 0012F8CC  40 82 00 44 */ bne lbl_801329D0
/* 80132990 0012F8D0  A8 7E 04 E6 */ lha r3, 0x4e6(r30)
/* 80132994 0012F8D4  38 03 40 00 */ addi r0, r3, 0x4000
/* 80132998 0012F8D8  B0 1E 04 E6 */ sth r0, 0x4e6(r30)
/* 8013299C 0012F8DC  7F C3 F3 78 */ mr r3, r30
/* 801329A0 0012F8E0  38 80 00 00 */ li r4, 0
/* 801329A4 0012F8E4  38 A0 C0 00 */ li r5, -16384
/* 801329A8 0012F8E8  38 C0 00 00 */ li r6, 0
/* 801329AC 0012F8EC  4B F7 B1 CD */ bl setOldRootQuaternion__9daAlink_cFsss
/* 801329B0 0012F8F0  A8 1E 04 E8 */ lha r0, 0x4e8(r30)
/* 801329B4 0012F8F4  7C 00 00 D0 */ neg r0, r0
/* 801329B8 0012F8F8  B0 1E 04 E4 */ sth r0, 0x4e4(r30)
/* 801329BC 0012F8FC  7F C3 F3 78 */ mr r3, r30
/* 801329C0 0012F900  38 80 00 00 */ li r4, 0
/* 801329C4 0012F904  38 A0 00 00 */ li r5, 0
/* 801329C8 0012F908  4B FF F2 AD */ bl procWolfRopeMoveInit__9daAlink_cFii
/* 801329CC 0012F90C  48 00 03 7C */ b lbl_80132D48
lbl_801329D0:
/* 801329D0 0012F910  A8 7E 04 E6 */ lha r3, 0x4e6(r30)
/* 801329D4 0012F914  38 03 C0 00 */ addi r0, r3, -16384
/* 801329D8 0012F918  B0 1E 04 E6 */ sth r0, 0x4e6(r30)
/* 801329DC 0012F91C  7F C3 F3 78 */ mr r3, r30
/* 801329E0 0012F920  38 80 00 00 */ li r4, 0
/* 801329E4 0012F924  38 A0 40 00 */ li r5, 0x4000
/* 801329E8 0012F928  38 C0 00 00 */ li r6, 0
/* 801329EC 0012F92C  4B F7 B1 8D */ bl setOldRootQuaternion__9daAlink_cFsss
/* 801329F0 0012F930  A8 1E 04 E8 */ lha r0, 0x4e8(r30)
/* 801329F4 0012F934  B0 1E 04 E4 */ sth r0, 0x4e4(r30)
/* 801329F8 0012F938  7F C3 F3 78 */ mr r3, r30
/* 801329FC 0012F93C  38 80 00 01 */ li r4, 1
/* 80132A00 0012F940  38 A0 00 00 */ li r5, 0
/* 80132A04 0012F944  4B FF F2 71 */ bl procWolfRopeMoveInit__9daAlink_cFii
/* 80132A08 0012F948  48 00 03 40 */ b lbl_80132D48
lbl_80132A0C:
/* 80132A0C 0012F94C  38 00 00 01 */ li r0, 1
/* 80132A10 0012F950  B0 1E 30 0E */ sth r0, 0x300e(r30)
/* 80132A14 0012F954  7F C3 F3 78 */ mr r3, r30
/* 80132A18 0012F958  80 1E 31 98 */ lwz r0, 0x3198(r30)
/* 80132A1C 0012F95C  2C 00 00 02 */ cmpwi r0, 2
/* 80132A20 0012F960  38 80 00 23 */ li r4, 0x23
/* 80132A24 0012F964  40 82 00 08 */ bne lbl_80132A2C
/* 80132A28 0012F968  38 80 00 22 */ li r4, 0x22
lbl_80132A2C:
/* 80132A2C 0012F96C  3C A0 80 39 */ lis r5, lbl_8038F46C@ha
/* 80132A30 0012F970  38 A5 F4 6C */ addi r5, r5, lbl_8038F46C@l
/* 80132A34 0012F974  C0 25 00 28 */ lfs f1, 0x28(r5)
/* 80132A38 0012F978  C0 45 00 30 */ lfs f2, 0x30(r5)
/* 80132A3C 0012F97C  4B FF 6C 9D */ bl setSingleAnimeWolfBaseSpeed__9daAlink_cFQ29daAlink_c12daAlink_WANMff
lbl_80132A40:
/* 80132A40 0012F980  C3 FD 00 10 */ lfs f31, 0x10(r29)
/* 80132A44 0012F984  A8 1E 30 0E */ lha r0, 0x300e(r30)
/* 80132A48 0012F988  2C 00 00 00 */ cmpwi r0, 0
/* 80132A4C 0012F98C  41 82 00 10 */ beq lbl_80132A5C
/* 80132A50 0012F990  C0 02 96 50 */ lfs f0, lbl_80453050-_SDA2_BASE_(r2)
/* 80132A54 0012F994  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132A58 0012F998  40 80 00 9C */ bge lbl_80132AF4
lbl_80132A5C:
/* 80132A5C 0012F99C  7F C3 F3 78 */ mr r3, r30
/* 80132A60 0012F9A0  38 80 00 33 */ li r4, 0x33
/* 80132A64 0012F9A4  4B F8 07 ED */ bl setDoStatus__9daAlink_cFUc
/* 80132A68 0012F9A8  88 1E 2F 8D */ lbz r0, 0x2f8d(r30)
/* 80132A6C 0012F9AC  54 00 06 F7 */ rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80132A70 0012F9B0  41 82 00 84 */ beq lbl_80132AF4
/* 80132A74 0012F9B4  38 00 00 1E */ li r0, 0x1e
/* 80132A78 0012F9B8  98 1F 07 16 */ stb r0, 0x716(r31)
/* 80132A7C 0012F9BC  A8 1E 04 E6 */ lha r0, 0x4e6(r30)
/* 80132A80 0012F9C0  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 80132A84 0012F9C4  3C 60 80 44 */ lis r3, lbl_80439A20@ha
/* 80132A88 0012F9C8  38 63 9A 20 */ addi r3, r3, lbl_80439A20@l
/* 80132A8C 0012F9CC  7C 03 04 2E */ lfsx f0, r3, r0
/* 80132A90 0012F9D0  C0 3E 04 D0 */ lfs f1, 0x4d0(r30)
/* 80132A94 0012F9D4  C0 42 93 B0 */ lfs f2, lbl_80452DB0-_SDA2_BASE_(r2)
/* 80132A98 0012F9D8  EC 02 00 32 */ fmuls f0, f2, f0
/* 80132A9C 0012F9DC  EC 01 00 28 */ fsubs f0, f1, f0
/* 80132AA0 0012F9E0  D0 1E 04 D0 */ stfs f0, 0x4d0(r30)
/* 80132AA4 0012F9E4  A8 1E 04 E6 */ lha r0, 0x4e6(r30)
/* 80132AA8 0012F9E8  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 80132AAC 0012F9EC  7C 63 02 14 */ add r3, r3, r0
/* 80132AB0 0012F9F0  C0 03 00 04 */ lfs f0, 4(r3)
/* 80132AB4 0012F9F4  C0 3E 04 D8 */ lfs f1, 0x4d8(r30)
/* 80132AB8 0012F9F8  EC 02 00 32 */ fmuls f0, f2, f0
/* 80132ABC 0012F9FC  EC 01 00 28 */ fsubs f0, f1, f0
/* 80132AC0 0012FA00  D0 1E 04 D8 */ stfs f0, 0x4d8(r30)
/* 80132AC4 0012FA04  80 7E 20 60 */ lwz r3, 0x2060(r30)
/* 80132AC8 0012FA08  80 63 00 1C */ lwz r3, 0x1c(r3)
/* 80132ACC 0012FA0C  C0 03 00 1C */ lfs f0, 0x1c(r3)
/* 80132AD0 0012FA10  EC 00 10 2A */ fadds f0, f0, f2
/* 80132AD4 0012FA14  D0 03 00 1C */ stfs f0, 0x1c(r3)
/* 80132AD8 0012FA18  7F C3 F3 78 */ mr r3, r30
/* 80132ADC 0012FA1C  38 80 00 02 */ li r4, 2
/* 80132AE0 0012FA20  3C A0 80 39 */ lis r5, lbl_8038F0A8@ha
/* 80132AE4 0012FA24  38 A5 F0 A8 */ addi r5, r5, lbl_8038F0A8@l
/* 80132AE8 0012FA28  C0 25 00 54 */ lfs f1, 0x54(r5)
/* 80132AEC 0012FA2C  4B FF C2 E5 */ bl procWolfFallInit__9daAlink_cFif
/* 80132AF0 0012FA30  48 00 02 58 */ b lbl_80132D48
lbl_80132AF4:
/* 80132AF4 0012FA34  A8 1E 30 0E */ lha r0, 0x300e(r30)
/* 80132AF8 0012FA38  2C 00 00 00 */ cmpwi r0, 0
/* 80132AFC 0012FA3C  41 82 01 B8 */ beq lbl_80132CB4
/* 80132B00 0012FA40  80 1E 31 98 */ lwz r0, 0x3198(r30)
/* 80132B04 0012FA44  2C 00 00 02 */ cmpwi r0, 2
/* 80132B08 0012FA48  40 82 00 D8 */ bne lbl_80132BE0
/* 80132B0C 0012FA4C  7F A3 EB 78 */ mr r3, r29
/* 80132B10 0012FA50  C0 22 96 50 */ lfs f1, lbl_80453050-_SDA2_BASE_(r2)
/* 80132B14 0012FA54  48 1F 59 19 */ bl checkPass__12J3DFrameCtrlFf
/* 80132B18 0012FA58  2C 03 00 00 */ cmpwi r3, 0
/* 80132B1C 0012FA5C  41 82 00 18 */ beq lbl_80132B34
/* 80132B20 0012FA60  7F C3 F3 78 */ mr r3, r30
/* 80132B24 0012FA64  C0 22 94 64 */ lfs f1, lbl_80452E64-_SDA2_BASE_(r2)
/* 80132B28 0012FA68  4B FF EF 45 */ bl wolfRopeSwingInc__9daAlink_cFf
/* 80132B2C 0012FA6C  38 00 00 00 */ li r0, 0
/* 80132B30 0012FA70  B0 1E 30 08 */ sth r0, 0x3008(r30)
lbl_80132B34:
/* 80132B34 0012FA74  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80132B38 0012FA78  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132B3C 0012FA7C  40 80 00 18 */ bge lbl_80132B54
/* 80132B40 0012FA80  38 00 00 13 */ li r0, 0x13
/* 80132B44 0012FA84  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132B48 0012FA88  38 00 00 17 */ li r0, 0x17
/* 80132B4C 0012FA8C  90 1F 07 1C */ stw r0, 0x71c(r31)
/* 80132B50 0012FA90  48 00 01 E8 */ b lbl_80132D38
lbl_80132B54:
/* 80132B54 0012FA94  C0 02 93 3C */ lfs f0, lbl_80452D3C-_SDA2_BASE_(r2)
/* 80132B58 0012FA98  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132B5C 0012FA9C  40 80 00 10 */ bge lbl_80132B6C
/* 80132B60 0012FAA0  38 00 FF FF */ li r0, -1
/* 80132B64 0012FAA4  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132B68 0012FAA8  48 00 01 D0 */ b lbl_80132D38
lbl_80132B6C:
/* 80132B6C 0012FAAC  C0 02 96 50 */ lfs f0, lbl_80453050-_SDA2_BASE_(r2)
/* 80132B70 0012FAB0  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132B74 0012FAB4  40 80 00 10 */ bge lbl_80132B84
/* 80132B78 0012FAB8  38 00 00 12 */ li r0, 0x12
/* 80132B7C 0012FABC  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132B80 0012FAC0  48 00 01 B8 */ b lbl_80132D38
lbl_80132B84:
/* 80132B84 0012FAC4  C0 02 94 EC */ lfs f0, lbl_80452EEC-_SDA2_BASE_(r2)
/* 80132B88 0012FAC8  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132B8C 0012FACC  40 80 00 10 */ bge lbl_80132B9C
/* 80132B90 0012FAD0  38 00 00 24 */ li r0, 0x24
/* 80132B94 0012FAD4  90 1F 07 1C */ stw r0, 0x71c(r31)
/* 80132B98 0012FAD8  48 00 01 A0 */ b lbl_80132D38
lbl_80132B9C:
/* 80132B9C 0012FADC  38 00 00 13 */ li r0, 0x13
/* 80132BA0 0012FAE0  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132BA4 0012FAE4  38 00 00 1F */ li r0, 0x1f
/* 80132BA8 0012FAE8  90 1F 07 1C */ stw r0, 0x71c(r31)
/* 80132BAC 0012FAEC  38 60 00 00 */ li r3, 0
/* 80132BB0 0012FAF0  A0 1E 1F BC */ lhz r0, 0x1fbc(r30)
/* 80132BB4 0012FAF4  28 00 02 DA */ cmplwi r0, 0x2da
/* 80132BB8 0012FAF8  41 82 00 10 */ beq lbl_80132BC8
/* 80132BBC 0012FAFC  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 80132BC0 0012FB00  28 00 02 DB */ cmplwi r0, 0x2db
/* 80132BC4 0012FB04  40 82 00 08 */ bne lbl_80132BCC
lbl_80132BC8:
/* 80132BC8 0012FB08  38 60 00 01 */ li r3, 1
lbl_80132BCC:
/* 80132BCC 0012FB0C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80132BD0 0012FB10  41 82 01 68 */ beq lbl_80132D38
/* 80132BD4 0012FB14  38 00 E8 00 */ li r0, -6144
/* 80132BD8 0012FB18  B0 1E 30 A0 */ sth r0, 0x30a0(r30)
/* 80132BDC 0012FB1C  48 00 01 5C */ b lbl_80132D38
lbl_80132BE0:
/* 80132BE0 0012FB20  7F A3 EB 78 */ mr r3, r29
/* 80132BE4 0012FB24  C0 22 93 38 */ lfs f1, lbl_80452D38-_SDA2_BASE_(r2)
/* 80132BE8 0012FB28  48 1F 58 45 */ bl checkPass__12J3DFrameCtrlFf
/* 80132BEC 0012FB2C  2C 03 00 00 */ cmpwi r3, 0
/* 80132BF0 0012FB30  41 82 00 18 */ beq lbl_80132C08
/* 80132BF4 0012FB34  7F C3 F3 78 */ mr r3, r30
/* 80132BF8 0012FB38  C0 22 94 64 */ lfs f1, lbl_80452E64-_SDA2_BASE_(r2)
/* 80132BFC 0012FB3C  4B FF EE 71 */ bl wolfRopeSwingInc__9daAlink_cFf
/* 80132C00 0012FB40  38 00 00 00 */ li r0, 0
/* 80132C04 0012FB44  B0 1E 30 08 */ sth r0, 0x3008(r30)
lbl_80132C08:
/* 80132C08 0012FB48  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80132C0C 0012FB4C  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132C10 0012FB50  40 80 00 18 */ bge lbl_80132C28
/* 80132C14 0012FB54  38 00 00 13 */ li r0, 0x13
/* 80132C18 0012FB58  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132C1C 0012FB5C  38 00 00 17 */ li r0, 0x17
/* 80132C20 0012FB60  90 1F 07 1C */ stw r0, 0x71c(r31)
/* 80132C24 0012FB64  48 00 01 14 */ b lbl_80132D38
lbl_80132C28:
/* 80132C28 0012FB68  C0 02 93 1C */ lfs f0, lbl_80452D1C-_SDA2_BASE_(r2)
/* 80132C2C 0012FB6C  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132C30 0012FB70  40 80 00 10 */ bge lbl_80132C40
/* 80132C34 0012FB74  38 00 FF FF */ li r0, -1
/* 80132C38 0012FB78  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132C3C 0012FB7C  48 00 00 FC */ b lbl_80132D38
lbl_80132C40:
/* 80132C40 0012FB80  C0 02 93 38 */ lfs f0, lbl_80452D38-_SDA2_BASE_(r2)
/* 80132C44 0012FB84  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132C48 0012FB88  40 80 00 10 */ bge lbl_80132C58
/* 80132C4C 0012FB8C  38 00 00 12 */ li r0, 0x12
/* 80132C50 0012FB90  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132C54 0012FB94  48 00 00 E4 */ b lbl_80132D38
lbl_80132C58:
/* 80132C58 0012FB98  C0 02 94 E4 */ lfs f0, lbl_80452EE4-_SDA2_BASE_(r2)
/* 80132C5C 0012FB9C  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132C60 0012FBA0  40 80 00 10 */ bge lbl_80132C70
/* 80132C64 0012FBA4  38 00 00 1F */ li r0, 0x1f
/* 80132C68 0012FBA8  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132C6C 0012FBAC  48 00 00 CC */ b lbl_80132D38
lbl_80132C70:
/* 80132C70 0012FBB0  38 00 00 18 */ li r0, 0x18
/* 80132C74 0012FBB4  90 1F 07 1C */ stw r0, 0x71c(r31)
/* 80132C78 0012FBB8  38 00 00 24 */ li r0, 0x24
/* 80132C7C 0012FBBC  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132C80 0012FBC0  38 60 00 00 */ li r3, 0
/* 80132C84 0012FBC4  A0 1E 1F BC */ lhz r0, 0x1fbc(r30)
/* 80132C88 0012FBC8  28 00 02 DA */ cmplwi r0, 0x2da
/* 80132C8C 0012FBCC  41 82 00 10 */ beq lbl_80132C9C
/* 80132C90 0012FBD0  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 80132C94 0012FBD4  28 00 02 DB */ cmplwi r0, 0x2db
/* 80132C98 0012FBD8  40 82 00 08 */ bne lbl_80132CA0
lbl_80132C9C:
/* 80132C9C 0012FBDC  38 60 00 01 */ li r3, 1
lbl_80132CA0:
/* 80132CA0 0012FBE0  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80132CA4 0012FBE4  41 82 00 94 */ beq lbl_80132D38
/* 80132CA8 0012FBE8  38 00 E8 00 */ li r0, -6144
/* 80132CAC 0012FBEC  B0 1E 30 A0 */ sth r0, 0x30a0(r30)
/* 80132CB0 0012FBF0  48 00 00 88 */ b lbl_80132D38
lbl_80132CB4:
/* 80132CB4 0012FBF4  7F A3 EB 78 */ mr r3, r29
/* 80132CB8 0012FBF8  C0 22 93 24 */ lfs f1, lbl_80452D24-_SDA2_BASE_(r2)
/* 80132CBC 0012FBFC  48 1F 57 71 */ bl checkPass__12J3DFrameCtrlFf
/* 80132CC0 0012FC00  2C 03 00 00 */ cmpwi r3, 0
/* 80132CC4 0012FC04  41 82 00 34 */ beq lbl_80132CF8
/* 80132CC8 0012FC08  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132CCC 0012FC0C  D0 21 00 08 */ stfs f1, 8(r1)
/* 80132CD0 0012FC10  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80132CD4 0012FC14  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 80132CD8 0012FC18  D0 21 00 10 */ stfs f1, 0x10(r1)
/* 80132CDC 0012FC1C  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80132CE0 0012FC20  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80132CE4 0012FC24  38 63 5B D4 */ addi r3, r3, 0x5bd4
/* 80132CE8 0012FC28  38 80 00 02 */ li r4, 2
/* 80132CEC 0012FC2C  38 A0 00 0F */ li r5, 0xf
/* 80132CF0 0012FC30  38 C1 00 08 */ addi r6, r1, 8
/* 80132CF4 0012FC34  4B F3 CD 31 */ bl StartShock__12dVibration_cFii4cXyz
lbl_80132CF8:
/* 80132CF8 0012FC38  C0 02 93 74 */ lfs f0, lbl_80452D74-_SDA2_BASE_(r2)
/* 80132CFC 0012FC3C  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132D00 0012FC40  40 80 00 18 */ bge lbl_80132D18
/* 80132D04 0012FC44  38 00 FF FE */ li r0, -2
/* 80132D08 0012FC48  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132D0C 0012FC4C  38 00 FF FF */ li r0, -1
/* 80132D10 0012FC50  90 1F 07 1C */ stw r0, 0x71c(r31)
/* 80132D14 0012FC54  48 00 00 24 */ b lbl_80132D38
lbl_80132D18:
/* 80132D18 0012FC58  C0 02 93 34 */ lfs f0, lbl_80452D34-_SDA2_BASE_(r2)
/* 80132D1C 0012FC5C  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132D20 0012FC60  40 80 00 10 */ bge lbl_80132D30
/* 80132D24 0012FC64  38 00 00 13 */ li r0, 0x13
/* 80132D28 0012FC68  90 1F 07 18 */ stw r0, 0x718(r31)
/* 80132D2C 0012FC6C  48 00 00 0C */ b lbl_80132D38
lbl_80132D30:
/* 80132D30 0012FC70  38 00 00 17 */ li r0, 0x17
/* 80132D34 0012FC74  90 1F 07 1C */ stw r0, 0x71c(r31)
lbl_80132D38:
/* 80132D38 0012FC78  7F C3 F3 78 */ mr r3, r30
/* 80132D3C 0012FC7C  38 80 00 00 */ li r4, 0
/* 80132D40 0012FC80  4B FF ED BD */ bl setWolfRopeOffsetY__9daAlink_cFi
/* 80132D44 0012FC84  38 60 00 01 */ li r3, 1
lbl_80132D48:
/* 80132D48 0012FC88  E3 E1 00 38 */ psq_l f31, 56(r1), 0, 0
/* 80132D4C 0012FC8C  CB E1 00 30 */ lfd f31, 0x30(r1)
/* 80132D50 0012FC90  39 61 00 30 */ addi r11, r1, 0x30
/* 80132D54 0012FC94  48 22 F4 D5 */ bl _restgpr_29
/* 80132D58 0012FC98  80 01 00 44 */ lwz r0, 0x44(r1)
/* 80132D5C 0012FC9C  7C 08 03 A6 */ mtlr r0
/* 80132D60 0012FCA0  38 21 00 40 */ addi r1, r1, 0x40
/* 80132D64 0012FCA4  4E 80 00 20 */ blr
