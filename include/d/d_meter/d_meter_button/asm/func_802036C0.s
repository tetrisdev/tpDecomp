/* 802036C0 00200600  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 802036C4 00200604  7C 08 02 A6 */ mflr r0
/* 802036C8 00200608  90 01 00 24 */ stw r0, 0x24(r1)
/* 802036CC 0020060C  39 61 00 20 */ addi r11, r1, 0x20
/* 802036D0 00200610  48 15 EB 0D */ bl _savegpr_29
/* 802036D4 00200614  7C 7F 1B 78 */ mr r31, r3
/* 802036D8 00200618  7C 9D 23 78 */ mr r29, r4
/* 802036DC 0020061C  7C BE 2B 78 */ mr r30, r5
/* 802036E0 00200620  54 80 04 63 */ rlwinm. r0, r4, 0, 0x11, 0x11
/* 802036E4 00200624  40 82 00 4C */ bne lbl_80203730
/* 802036E8 00200628  48 03 4B 45 */ bl getStatus__12dMsgObject_cFv
/* 802036EC 0020062C  54 60 04 3E */ clrlwi r0, r3, 0x10
/* 802036F0 00200630  20 60 00 01 */ subfic r3, r0, 1
/* 802036F4 00200634  30 03 FF FF */ addic r0, r3, -1
/* 802036F8 00200638  7C 00 19 10 */ subfe r0, r0, r3
/* 802036FC 0020063C  54 00 06 3F */ clrlwi. r0, r0, 0x18
/* 80203700 00200640  40 82 00 30 */ bne lbl_80203730
/* 80203704 00200644  57 C0 06 3F */ clrlwi. r0, r30, 0x18
/* 80203708 00200648  41 82 00 28 */ beq lbl_80203730
/* 8020370C 0020064C  A8 1F 04 8C */ lha r0, 0x48c(r31)
/* 80203710 00200650  2C 00 00 00 */ cmpwi r0, 0
/* 80203714 00200654  41 81 00 1C */ bgt lbl_80203730
/* 80203718 00200658  57 A0 07 39 */ rlwinm. r0, r29, 0, 0x1c, 0x1c
/* 8020371C 0020065C  40 82 00 14 */ bne lbl_80203730
/* 80203720 00200660  57 A0 06 F7 */ rlwinm. r0, r29, 0, 0x1b, 0x1b
/* 80203724 00200664  40 82 00 0C */ bne lbl_80203730
/* 80203728 00200668  57 A0 06 B5 */ rlwinm. r0, r29, 0, 0x1a, 0x1a
/* 8020372C 0020066C  41 82 00 24 */ beq lbl_80203750
lbl_80203730:
/* 80203730 00200670  7F E3 FB 78 */ mr r3, r31
/* 80203734 00200674  48 00 3E 8D */ bl setAlphaButton3DAnimeMin__14dMeterButton_cFv
/* 80203738 00200678  7F E3 FB 78 */ mr r3, r31
/* 8020373C 0020067C  48 00 40 05 */ bl setAlphaButton3DVAnimeMin__14dMeterButton_cFv
/* 80203740 00200680  A0 1F 04 B0 */ lhz r0, 0x4b0(r31)
/* 80203744 00200684  54 00 07 34 */ rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80203748 00200688  B0 1F 04 B0 */ sth r0, 0x4b0(r31)
/* 8020374C 0020068C  48 00 00 50 */ b lbl_8020379C
lbl_80203750:
/* 80203750 00200690  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80203754 00200694  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80203758 00200698  88 03 5E 4B */ lbz r0, 0x5e4b(r3)
/* 8020375C 0020069C  54 00 07 39 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80203760 002006A0  41 82 00 18 */ beq lbl_80203778
/* 80203764 002006A4  7F E3 FB 78 */ mr r3, r31
/* 80203768 002006A8  48 00 3E 59 */ bl setAlphaButton3DAnimeMin__14dMeterButton_cFv
/* 8020376C 002006AC  7F E3 FB 78 */ mr r3, r31
/* 80203770 002006B0  48 00 3F D5 */ bl setAlphaButton3DVAnimeMax__14dMeterButton_cFv
/* 80203774 002006B4  48 00 00 14 */ b lbl_80203788
lbl_80203778:
/* 80203778 002006B8  7F E3 FB 78 */ mr r3, r31
/* 8020377C 002006BC  48 00 3E D9 */ bl setAlphaButton3DAnimeMax__14dMeterButton_cFv
/* 80203780 002006C0  7F E3 FB 78 */ mr r3, r31
/* 80203784 002006C4  48 00 3F BD */ bl setAlphaButton3DVAnimeMin__14dMeterButton_cFv
lbl_80203788:
/* 80203788 002006C8  A0 1F 04 B0 */ lhz r0, 0x4b0(r31)
/* 8020378C 002006CC  60 00 00 10 */ ori r0, r0, 0x10
/* 80203790 002006D0  B0 1F 04 B0 */ sth r0, 0x4b0(r31)
/* 80203794 002006D4  38 60 00 01 */ li r3, 1
/* 80203798 002006D8  48 00 00 08 */ b lbl_802037A0
lbl_8020379C:
/* 8020379C 002006DC  38 60 00 00 */ li r3, 0
lbl_802037A0:
/* 802037A0 002006E0  39 61 00 20 */ addi r11, r1, 0x20
/* 802037A4 002006E4  48 15 EA 85 */ bl _restgpr_29
/* 802037A8 002006E8  80 01 00 24 */ lwz r0, 0x24(r1)
/* 802037AC 002006EC  7C 08 03 A6 */ mtlr r0
/* 802037B0 002006F0  38 21 00 20 */ addi r1, r1, 0x20
/* 802037B4 002006F4  4E 80 00 20 */ blr
