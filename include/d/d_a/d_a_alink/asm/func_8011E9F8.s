/* 8011E9F8 0011B938  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8011E9FC 0011B93C  7C 08 02 A6 */ mflr r0
/* 8011EA00 0011B940  90 01 00 14 */ stw r0, 0x14(r1)
/* 8011EA04 0011B944  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8011EA08 0011B948  7C 7F 1B 78 */ mr r31, r3
/* 8011EA0C 0011B94C  38 80 00 E6 */ li r4, 0xe6
/* 8011EA10 0011B950  4B FA 43 95 */ bl commonProcInitNotSameProc__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 8011EA14 0011B954  2C 03 00 00 */ cmpwi r3, 0
/* 8011EA18 0011B958  40 82 00 0C */ bne lbl_8011EA24
/* 8011EA1C 0011B95C  38 60 00 01 */ li r3, 1
/* 8011EA20 0011B960  48 00 00 44 */ b lbl_8011EA64
lbl_8011EA24:
/* 8011EA24 0011B964  7F E3 FB 78 */ mr r3, r31
/* 8011EA28 0011B968  38 80 01 97 */ li r4, 0x197
/* 8011EA2C 0011B96C  4B F8 E5 55 */ bl setSingleAnimeBase__9daAlink_cFQ29daAlink_c11daAlink_ANM
/* 8011EA30 0011B970  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011EA34 0011B974  D0 1F 33 98 */ stfs f0, 0x3398(r31)
/* 8011EA38 0011B978  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
/* 8011EA3C 0011B97C  C0 1F 04 D0 */ lfs f0, 0x4d0(r31)
/* 8011EA40 0011B980  D0 1F 37 C8 */ stfs f0, 0x37c8(r31)
/* 8011EA44 0011B984  C0 1F 04 D4 */ lfs f0, 0x4d4(r31)
/* 8011EA48 0011B988  D0 1F 37 CC */ stfs f0, 0x37cc(r31)
/* 8011EA4C 0011B98C  C0 1F 04 D8 */ lfs f0, 0x4d8(r31)
/* 8011EA50 0011B990  D0 1F 37 D0 */ stfs f0, 0x37d0(r31)
/* 8011EA54 0011B994  80 1F 05 8C */ lwz r0, 0x58c(r31)
/* 8011EA58 0011B998  64 00 80 00 */ oris r0, r0, 0x8000
/* 8011EA5C 0011B99C  90 1F 05 8C */ stw r0, 0x58c(r31)
/* 8011EA60 0011B9A0  38 60 00 01 */ li r3, 1
lbl_8011EA64:
/* 8011EA64 0011B9A4  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8011EA68 0011B9A8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8011EA6C 0011B9AC  7C 08 03 A6 */ mtlr r0
/* 8011EA70 0011B9B0  38 21 00 10 */ addi r1, r1, 0x10
/* 8011EA74 0011B9B4  4E 80 00 20 */ blr