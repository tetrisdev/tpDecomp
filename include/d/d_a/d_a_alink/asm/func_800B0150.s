/* 800B0150 000AD090  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 800B0154 000AD094  7C 08 02 A6 */ mflr r0
/* 800B0158 000AD098  90 01 00 34 */ stw r0, 0x34(r1)
/* 800B015C 000AD09C  39 61 00 30 */ addi r11, r1, 0x30
/* 800B0160 000AD0A0  48 2B 20 7D */ bl _savegpr_29
/* 800B0164 000AD0A4  7C 9D 23 78 */ mr r29, r4
/* 800B0168 000AD0A8  7C BE 2B 78 */ mr r30, r5
/* 800B016C 000AD0AC  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800B0170 000AD0B0  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800B0174 000AD0B4  90 01 00 18 */ stw r0, 0x18(r1)
/* 800B0178 000AD0B8  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800B017C 000AD0BC  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800B0180 000AD0C0  3B E3 0F 38 */ addi r31, r3, 0xf38
/* 800B0184 000AD0C4  7F E3 FB 78 */ mr r3, r31
/* 800B0188 000AD0C8  38 A1 00 08 */ addi r5, r1, 8
/* 800B018C 000AD0CC  4B FC 45 B9 */ bl GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla
/* 800B0190 000AD0D0  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800B0194 000AD0D4  41 82 00 18 */ beq lbl_800B01AC
/* 800B0198 000AD0D8  7F E3 FB 78 */ mr r3, r31
/* 800B019C 000AD0DC  7F A4 EB 78 */ mr r4, r29
/* 800B01A0 000AD0E0  4B FC 44 C1 */ bl ChkPolySafe__4cBgSFRC13cBgS_PolyInfo
/* 800B01A4 000AD0E4  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800B01A8 000AD0E8  40 82 00 18 */ bne lbl_800B01C0
lbl_800B01AC:
/* 800B01AC 000AD0EC  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800B01B0 000AD0F0  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800B01B4 000AD0F4  90 01 00 18 */ stw r0, 0x18(r1)
/* 800B01B8 000AD0F8  38 60 00 00 */ li r3, 0
/* 800B01BC 000AD0FC  48 00 00 28 */ b lbl_800B01E4
lbl_800B01C0:
/* 800B01C0 000AD100  38 61 00 08 */ addi r3, r1, 8
/* 800B01C4 000AD104  7F C4 F3 78 */ mr r4, r30
/* 800B01C8 000AD108  4B F6 DA 11 */ bl fopAcM_getPolygonAngle__FPC8cM3dGPlas
/* 800B01CC 000AD10C  3C 63 00 01 */ addis r3, r3, 1
/* 800B01D0 000AD110  38 03 80 00 */ addi r0, r3, -32768
/* 800B01D4 000AD114  7C 03 07 34 */ extsh r3, r0
/* 800B01D8 000AD118  3C 80 80 3A */ lis r4, lbl_803A37C0@ha
/* 800B01DC 000AD11C  38 04 37 C0 */ addi r0, r4, lbl_803A37C0@l
/* 800B01E0 000AD120  90 01 00 18 */ stw r0, 0x18(r1)
lbl_800B01E4:
/* 800B01E4 000AD124  39 61 00 30 */ addi r11, r1, 0x30
/* 800B01E8 000AD128  48 2B 20 41 */ bl _restgpr_29
/* 800B01EC 000AD12C  80 01 00 34 */ lwz r0, 0x34(r1)
/* 800B01F0 000AD130  7C 08 03 A6 */ mtlr r0
/* 800B01F4 000AD134  38 21 00 30 */ addi r1, r1, 0x30
/* 800B01F8 000AD138  4E 80 00 20 */ blr
