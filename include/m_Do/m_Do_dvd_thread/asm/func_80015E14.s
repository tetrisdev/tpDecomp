/* 80015E14 00012D54  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80015E18 00012D58  7C 08 02 A6 */ mflr r0
/* 80015E1C 00012D5C  90 01 00 24 */ stw r0, 0x24(r1)
/* 80015E20 00012D60  39 61 00 20 */ addi r11, r1, 0x20
/* 80015E24 00012D64  48 34 C3 B5 */ bl _savegpr_28
/* 80015E28 00012D68  7C 7C 1B 78 */ mr r28, r3
/* 80015E2C 00012D6C  7C 9D 23 78 */ mr r29, r4
/* 80015E30 00012D70  7C BE 2B 78 */ mr r30, r5
/* 80015E34 00012D74  4B FF 8F 7D */ bl mDoExt_getCommandHeap__Fv
/* 80015E38 00012D78  7C 64 1B 78 */ mr r4, r3
/* 80015E3C 00012D7C  38 60 00 24 */ li r3, 0x24
/* 80015E40 00012D80  38 A0 FF FC */ li r5, -4
/* 80015E44 00012D84  48 2B 8E 55 */ bl __nw__FUlP7JKRHeapi
/* 80015E48 00012D88  7C 7F 1B 79 */ or. r31, r3, r3
/* 80015E4C 00012D8C  41 82 00 10 */ beq lbl_80015E5C
/* 80015E50 00012D90  7F A4 EB 78 */ mr r4, r29
/* 80015E54 00012D94  4B FF FF 51 */ bl __ct__24mDoDvdThd_mountArchive_cFUc
/* 80015E58 00012D98  7C 7F 1B 78 */ mr r31, r3
lbl_80015E5C:
/* 80015E5C 00012D9C  28 1F 00 00 */ cmplwi r31, 0
/* 80015E60 00012DA0  41 82 00 60 */ beq lbl_80015EC0
/* 80015E64 00012DA4  7F 83 E3 78 */ mr r3, r28
/* 80015E68 00012DA8  4B FF FA 75 */ bl my_DVDConvertPathToEntrynum__FPCc
/* 80015E6C 00012DAC  90 7F 00 18 */ stw r3, 0x18(r31)
/* 80015E70 00012DB0  80 1F 00 18 */ lwz r0, 0x18(r31)
/* 80015E74 00012DB4  2C 00 FF FF */ cmpwi r0, -1
/* 80015E78 00012DB8  40 82 00 34 */ bne lbl_80015EAC
/* 80015E7C 00012DBC  38 00 00 01 */ li r0, 1
/* 80015E80 00012DC0  98 1F 00 0C */ stb r0, 0xc(r31)
/* 80015E84 00012DC4  28 1F 00 00 */ cmplwi r31, 0
/* 80015E88 00012DC8  41 82 00 1C */ beq lbl_80015EA4
/* 80015E8C 00012DCC  7F E3 FB 78 */ mr r3, r31
/* 80015E90 00012DD0  38 80 00 01 */ li r4, 1
/* 80015E94 00012DD4  81 9F 00 10 */ lwz r12, 0x10(r31)
/* 80015E98 00012DD8  81 8C 00 08 */ lwz r12, 8(r12)
/* 80015E9C 00012DDC  7D 89 03 A6 */ mtctr r12
/* 80015EA0 00012DE0  4E 80 04 21 */ bctrl
lbl_80015EA4:
/* 80015EA4 00012DE4  3B E0 00 00 */ li r31, 0
/* 80015EA8 00012DE8  48 00 00 18 */ b lbl_80015EC0
lbl_80015EAC:
/* 80015EAC 00012DEC  93 DF 00 20 */ stw r30, 0x20(r31)
/* 80015EB0 00012DF0  3C 60 80 3E */ lis r3, lbl_803DEC60@ha
/* 80015EB4 00012DF4  38 63 EC 60 */ addi r3, r3, lbl_803DEC60@l
/* 80015EB8 00012DF8  7F E4 FB 78 */ mr r4, r31
/* 80015EBC 00012DFC  4B FF FB 29 */ bl addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c
lbl_80015EC0:
/* 80015EC0 00012E00  7F E3 FB 78 */ mr r3, r31
/* 80015EC4 00012E04  39 61 00 20 */ addi r11, r1, 0x20
/* 80015EC8 00012E08  48 34 C3 5D */ bl _restgpr_28
/* 80015ECC 00012E0C  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80015ED0 00012E10  7C 08 03 A6 */ mtlr r0
/* 80015ED4 00012E14  38 21 00 20 */ addi r1, r1, 0x20
/* 80015ED8 00012E18  4E 80 00 20 */ blr