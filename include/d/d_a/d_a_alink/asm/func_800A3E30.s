/* 800A3E30 000A0D70  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800A3E34 000A0D74  7C 08 02 A6 */ mflr r0
/* 800A3E38 000A0D78  90 01 00 14 */ stw r0, 0x14(r1)
/* 800A3E3C 000A0D7C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800A3E40 000A0D80  93 C1 00 08 */ stw r30, 8(r1)
/* 800A3E44 000A0D84  7C 7E 1B 78 */ mr r30, r3
/* 800A3E48 000A0D88  7C BF 2B 78 */ mr r31, r5
/* 800A3E4C 000A0D8C  38 62 92 90 */ addi r3, r2, 0x80452C90 - 0x80459A00 /*SDA HACK; original: lbl_80452C90-_SDA2_BASE_*/
/* 800A3E50 000A0D90  54 84 04 3E */ clrlwi r4, r4, 0x10
/* 800A3E54 000A0D94  3C A0 80 40 */ lis r5, g_dComIfG_gameInfo@ha
/* 800A3E58 000A0D98  38 A5 61 C0 */ addi r5, r5, g_dComIfG_gameInfo@l
/* 800A3E5C 000A0D9C  3C A5 00 02 */ addis r5, r5, 2
/* 800A3E60 000A0DA0  38 C0 00 80 */ li r6, 0x80
/* 800A3E64 000A0DA4  38 A5 C2 F8 */ addi r5, r5, -15624
/* 800A3E68 000A0DA8  4B F9 84 85 */ bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 800A3E6C 000A0DAC  7C 64 1B 78 */ mr r4, r3
/* 800A3E70 000A0DB0  7F C3 F3 78 */ mr r3, r30
/* 800A3E74 000A0DB4  3C A0 00 08 */ lis r5, 8
/* 800A3E78 000A0DB8  7F E6 FB 78 */ mr r6, r31
/* 800A3E7C 000A0DBC  4B FF FF 01 */ bl initModel__9daAlink_cFP12J3DModelDataUlUl
/* 800A3E80 000A0DC0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800A3E84 000A0DC4  83 C1 00 08 */ lwz r30, 8(r1)
/* 800A3E88 000A0DC8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800A3E8C 000A0DCC  7C 08 03 A6 */ mtlr r0
/* 800A3E90 000A0DD0  38 21 00 10 */ addi r1, r1, 0x10
/* 800A3E94 000A0DD4  4E 80 00 20 */ blr
