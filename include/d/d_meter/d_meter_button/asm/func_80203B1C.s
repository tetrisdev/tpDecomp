/* 80203B1C 00200A5C  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80203B20 00200A60  7C 08 02 A6 */ mflr r0
/* 80203B24 00200A64  90 01 00 24 */ stw r0, 0x24(r1)
/* 80203B28 00200A68  39 61 00 20 */ addi r11, r1, 0x20
/* 80203B2C 00200A6C  48 15 E6 B1 */ bl _savegpr_29
/* 80203B30 00200A70  7C 7E 1B 78 */ mr r30, r3
/* 80203B34 00200A74  7C 9F 23 78 */ mr r31, r4
/* 80203B38 00200A78  7C BD 2B 78 */ mr r29, r5
/* 80203B3C 00200A7C  54 80 04 63 */ rlwinm. r0, r4, 0, 0x11, 0x11
/* 80203B40 00200A80  40 82 00 A0 */ bne lbl_80203BE0
/* 80203B44 00200A84  48 03 46 E9 */ bl getStatus__12dMsgObject_cFv
/* 80203B48 00200A88  54 60 04 3E */ clrlwi r0, r3, 0x10
/* 80203B4C 00200A8C  20 60 00 01 */ subfic r3, r0, 1
/* 80203B50 00200A90  30 03 FF FF */ addic r0, r3, -1
/* 80203B54 00200A94  7C 00 19 10 */ subfe r0, r0, r3
/* 80203B58 00200A98  54 00 06 3F */ clrlwi. r0, r0, 0x18
/* 80203B5C 00200A9C  40 82 00 84 */ bne lbl_80203BE0
/* 80203B60 00200AA0  57 A0 06 3F */ clrlwi. r0, r29, 0x18
/* 80203B64 00200AA4  41 82 00 7C */ beq lbl_80203BE0
/* 80203B68 00200AA8  A8 1E 04 96 */ lha r0, 0x496(r30)
/* 80203B6C 00200AAC  2C 00 00 00 */ cmpwi r0, 0
/* 80203B70 00200AB0  41 81 00 70 */ bgt lbl_80203BE0
/* 80203B74 00200AB4  57 E0 06 31 */ rlwinm. r0, r31, 0, 0x18, 0x18
/* 80203B78 00200AB8  40 82 00 68 */ bne lbl_80203BE0
/* 80203B7C 00200ABC  57 E0 00 43 */ rlwinm. r0, r31, 0, 1, 1
/* 80203B80 00200AC0  40 82 00 60 */ bne lbl_80203BE0
/* 80203B84 00200AC4  57 E0 04 E7 */ rlwinm. r0, r31, 0, 0x13, 0x13
/* 80203B88 00200AC8  40 82 00 58 */ bne lbl_80203BE0
/* 80203B8C 00200ACC  57 E0 06 73 */ rlwinm. r0, r31, 0, 0x19, 0x19
/* 80203B90 00200AD0  41 82 00 30 */ beq lbl_80203BC0
/* 80203B94 00200AD4  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80203B98 00200AD8  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80203B9C 00200ADC  88 03 4F AD */ lbz r0, 0x4fad(r3)
/* 80203BA0 00200AE0  28 00 00 00 */ cmplwi r0, 0
/* 80203BA4 00200AE4  41 82 00 10 */ beq lbl_80203BB4
/* 80203BA8 00200AE8  A0 03 4F A4 */ lhz r0, 0x4fa4(r3)
/* 80203BAC 00200AEC  54 00 07 FE */ clrlwi r0, r0, 0x1f
/* 80203BB0 00200AF0  48 00 00 08 */ b lbl_80203BB8
lbl_80203BB4:
/* 80203BB4 00200AF4  38 00 00 00 */ li r0, 0
lbl_80203BB8:
/* 80203BB8 00200AF8  54 00 04 3F */ clrlwi. r0, r0, 0x10
/* 80203BBC 00200AFC  40 82 00 24 */ bne lbl_80203BE0
lbl_80203BC0:
/* 80203BC0 00200B00  57 E0 05 EF */ rlwinm. r0, r31, 0, 0x17, 0x17
/* 80203BC4 00200B04  40 82 00 1C */ bne lbl_80203BE0
/* 80203BC8 00200B08  57 E0 07 39 */ rlwinm. r0, r31, 0, 0x1c, 0x1c
/* 80203BCC 00200B0C  40 82 00 14 */ bne lbl_80203BE0
/* 80203BD0 00200B10  57 E0 06 F7 */ rlwinm. r0, r31, 0, 0x1b, 0x1b
/* 80203BD4 00200B14  40 82 00 0C */ bne lbl_80203BE0
/* 80203BD8 00200B18  57 E0 06 B5 */ rlwinm. r0, r31, 0, 0x1a, 0x1a
/* 80203BDC 00200B1C  41 82 00 1C */ beq lbl_80203BF8
lbl_80203BE0:
/* 80203BE0 00200B20  7F C3 F3 78 */ mr r3, r30
/* 80203BE4 00200B24  48 00 42 B9 */ bl setAlphaButtonNunAnimeMin__14dMeterButton_cFv
/* 80203BE8 00200B28  A0 1E 04 B0 */ lhz r0, 0x4b0(r30)
/* 80203BEC 00200B2C  54 00 05 EA */ rlwinm r0, r0, 0, 0x17, 0x15
/* 80203BF0 00200B30  B0 1E 04 B0 */ sth r0, 0x4b0(r30)
/* 80203BF4 00200B34  48 00 00 20 */ b lbl_80203C14
lbl_80203BF8:
/* 80203BF8 00200B38  7F C3 F3 78 */ mr r3, r30
/* 80203BFC 00200B3C  48 00 43 39 */ bl setAlphaButtonNunAnimeMax__14dMeterButton_cFv
/* 80203C00 00200B40  A0 1E 04 B0 */ lhz r0, 0x4b0(r30)
/* 80203C04 00200B44  60 00 02 00 */ ori r0, r0, 0x200
/* 80203C08 00200B48  B0 1E 04 B0 */ sth r0, 0x4b0(r30)
/* 80203C0C 00200B4C  38 60 00 01 */ li r3, 1
/* 80203C10 00200B50  48 00 00 08 */ b lbl_80203C18
lbl_80203C14:
/* 80203C14 00200B54  38 60 00 00 */ li r3, 0
lbl_80203C18:
/* 80203C18 00200B58  39 61 00 20 */ addi r11, r1, 0x20
/* 80203C1C 00200B5C  48 15 E6 0D */ bl _restgpr_29
/* 80203C20 00200B60  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80203C24 00200B64  7C 08 03 A6 */ mtlr r0
/* 80203C28 00200B68  38 21 00 20 */ addi r1, r1, 0x20
/* 80203C2C 00200B6C  4E 80 00 20 */ blr
