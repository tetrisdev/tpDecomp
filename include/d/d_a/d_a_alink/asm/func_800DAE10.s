/* 800DAE10 000D7D50  94 21 FF B0 */ stwu r1, -0x50(r1)
/* 800DAE14 000D7D54  7C 08 02 A6 */ mflr r0
/* 800DAE18 000D7D58  90 01 00 54 */ stw r0, 0x54(r1)
/* 800DAE1C 000D7D5C  DB E1 00 40 */ stfd f31, 0x40(r1)
/* 800DAE20 000D7D60  F3 E1 00 48 */ psq_st f31, 72(r1), 0, 0
/* 800DAE24 000D7D64  93 E1 00 3C */ stw r31, 0x3c(r1)
/* 800DAE28 000D7D68  93 C1 00 38 */ stw r30, 0x38(r1)
/* 800DAE2C 000D7D6C  7C 7E 1B 78 */ mr r30, r3
/* 800DAE30 000D7D70  7C 9F 23 79 */ or. r31, r4, r4
/* 800DAE34 000D7D74  40 82 00 94 */ bne lbl_800DAEC8
/* 800DAE38 000D7D78  3C 60 80 39 */ lis r3, lbl_8038E454@ha
/* 800DAE3C 000D7D7C  38 63 E4 54 */ addi r3, r3, lbl_8038E454@l
/* 800DAE40 000D7D80  C3 E3 00 3C */ lfs f31, 0x3c(r3)
/* 800DAE44 000D7D84  3C 60 80 39 */ lis r3, lbl_8038E068@ha
/* 800DAE48 000D7D88  38 63 E0 68 */ addi r3, r3, lbl_8038E068@l
/* 800DAE4C 000D7D8C  A8 03 00 56 */ lha r0, 0x56(r3)
/* 800DAE50 000D7D90  B0 1E 30 08 */ sth r0, 0x3008(r30)
/* 800DAE54 000D7D94  A0 1E 2F E8 */ lhz r0, 0x2fe8(r30)
/* 800DAE58 000D7D98  28 00 00 CC */ cmplwi r0, 0xcc
/* 800DAE5C 000D7D9C  40 82 00 38 */ bne lbl_800DAE94
/* 800DAE60 000D7DA0  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DAE64 000D7DA4  D0 21 00 2C */ stfs f1, 0x2c(r1)
/* 800DAE68 000D7DA8  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800DAE6C 000D7DAC  D0 01 00 30 */ stfs f0, 0x30(r1)
/* 800DAE70 000D7DB0  D0 21 00 34 */ stfs f1, 0x34(r1)
/* 800DAE74 000D7DB4  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800DAE78 000D7DB8  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800DAE7C 000D7DBC  38 63 5B D4 */ addi r3, r3, 0x5bd4
/* 800DAE80 000D7DC0  38 80 00 06 */ li r4, 6
/* 800DAE84 000D7DC4  38 A0 00 1F */ li r5, 0x1f
/* 800DAE88 000D7DC8  38 C1 00 2C */ addi r6, r1, 0x2c
/* 800DAE8C 000D7DCC  4B F9 4B 99 */ bl StartShock__12dVibration_cFii4cXyz
/* 800DAE90 000D7DD0  48 00 00 FC */ b lbl_800DAF8C
lbl_800DAE94:
/* 800DAE94 000D7DD4  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DAE98 000D7DD8  D0 21 00 20 */ stfs f1, 0x20(r1)
/* 800DAE9C 000D7DDC  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800DAEA0 000D7DE0  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 800DAEA4 000D7DE4  D0 21 00 28 */ stfs f1, 0x28(r1)
/* 800DAEA8 000D7DE8  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800DAEAC 000D7DEC  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800DAEB0 000D7DF0  38 63 5B D4 */ addi r3, r3, 0x5bd4
/* 800DAEB4 000D7DF4  38 80 00 02 */ li r4, 2
/* 800DAEB8 000D7DF8  38 A0 00 0F */ li r5, 0xf
/* 800DAEBC 000D7DFC  38 C1 00 20 */ addi r6, r1, 0x20
/* 800DAEC0 000D7E00  4B F9 4B 65 */ bl StartShock__12dVibration_cFii4cXyz
/* 800DAEC4 000D7E04  48 00 00 C8 */ b lbl_800DAF8C
lbl_800DAEC8:
/* 800DAEC8 000D7E08  2C 1F 00 01 */ cmpwi r31, 1
/* 800DAECC 000D7E0C  40 82 00 64 */ bne lbl_800DAF30
/* 800DAED0 000D7E10  48 03 AD 51 */ bl checkEventRun__9daAlink_cCFv
/* 800DAED4 000D7E14  2C 03 00 00 */ cmpwi r3, 0
/* 800DAED8 000D7E18  40 82 00 10 */ bne lbl_800DAEE8
/* 800DAEDC 000D7E1C  7F C3 F3 78 */ mr r3, r30
/* 800DAEE0 000D7E20  38 80 00 04 */ li r4, 4
/* 800DAEE4 000D7E24  4B FF C5 C1 */ bl setLandDamagePoint__9daAlink_cFi
lbl_800DAEE8:
/* 800DAEE8 000D7E28  3C 60 80 39 */ lis r3, lbl_8038E454@ha
/* 800DAEEC 000D7E2C  38 63 E4 54 */ addi r3, r3, lbl_8038E454@l
/* 800DAEF0 000D7E30  C3 E3 00 3C */ lfs f31, 0x3c(r3)
/* 800DAEF4 000D7E34  A8 03 00 28 */ lha r0, 0x28(r3)
/* 800DAEF8 000D7E38  B0 1E 30 08 */ sth r0, 0x3008(r30)
/* 800DAEFC 000D7E3C  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DAF00 000D7E40  D0 21 00 14 */ stfs f1, 0x14(r1)
/* 800DAF04 000D7E44  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800DAF08 000D7E48  D0 01 00 18 */ stfs f0, 0x18(r1)
/* 800DAF0C 000D7E4C  D0 21 00 1C */ stfs f1, 0x1c(r1)
/* 800DAF10 000D7E50  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800DAF14 000D7E54  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800DAF18 000D7E58  38 63 5B D4 */ addi r3, r3, 0x5bd4
/* 800DAF1C 000D7E5C  38 80 00 04 */ li r4, 4
/* 800DAF20 000D7E60  38 A0 00 1F */ li r5, 0x1f
/* 800DAF24 000D7E64  38 C1 00 14 */ addi r6, r1, 0x14
/* 800DAF28 000D7E68  4B F9 4A FD */ bl StartShock__12dVibration_cFii4cXyz
/* 800DAF2C 000D7E6C  48 00 00 60 */ b lbl_800DAF8C
lbl_800DAF30:
/* 800DAF30 000D7E70  48 03 AC F1 */ bl checkEventRun__9daAlink_cCFv
/* 800DAF34 000D7E74  2C 03 00 00 */ cmpwi r3, 0
/* 800DAF38 000D7E78  40 82 00 10 */ bne lbl_800DAF48
/* 800DAF3C 000D7E7C  7F C3 F3 78 */ mr r3, r30
/* 800DAF40 000D7E80  38 80 00 08 */ li r4, 8
/* 800DAF44 000D7E84  4B FF C5 61 */ bl setLandDamagePoint__9daAlink_cFi
lbl_800DAF48:
/* 800DAF48 000D7E88  3C 60 80 39 */ lis r3, lbl_8038E454@ha
/* 800DAF4C 000D7E8C  38 63 E4 54 */ addi r3, r3, lbl_8038E454@l
/* 800DAF50 000D7E90  C3 E3 00 08 */ lfs f31, 8(r3)
/* 800DAF54 000D7E94  A8 03 00 2A */ lha r0, 0x2a(r3)
/* 800DAF58 000D7E98  B0 1E 30 08 */ sth r0, 0x3008(r30)
/* 800DAF5C 000D7E9C  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DAF60 000D7EA0  D0 21 00 08 */ stfs f1, 8(r1)
/* 800DAF64 000D7EA4  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800DAF68 000D7EA8  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800DAF6C 000D7EAC  D0 21 00 10 */ stfs f1, 0x10(r1)
/* 800DAF70 000D7EB0  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800DAF74 000D7EB4  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800DAF78 000D7EB8  38 63 5B D4 */ addi r3, r3, 0x5bd4
/* 800DAF7C 000D7EBC  38 80 00 05 */ li r4, 5
/* 800DAF80 000D7EC0  38 A0 00 1F */ li r5, 0x1f
/* 800DAF84 000D7EC4  38 C1 00 08 */ addi r6, r1, 8
/* 800DAF88 000D7EC8  4B F9 4A 9D */ bl StartShock__12dVibration_cFii4cXyz
lbl_800DAF8C:
/* 800DAF8C 000D7ECC  7F C3 F3 78 */ mr r3, r30
/* 800DAF90 000D7ED0  38 80 00 34 */ li r4, 0x34
/* 800DAF94 000D7ED4  4B FE 6F D9 */ bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800DAF98 000D7ED8  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DAF9C 000D7EDC  D0 1E 33 98 */ stfs f0, 0x3398(r30)
/* 800DAFA0 000D7EE0  2C 1F 00 00 */ cmpwi r31, 0
/* 800DAFA4 000D7EE4  40 82 00 14 */ bne lbl_800DAFB8
/* 800DAFA8 000D7EE8  80 1E 31 A0 */ lwz r0, 0x31a0(r30)
/* 800DAFAC 000D7EEC  54 00 07 76 */ rlwinm r0, r0, 0, 0x1d, 0x1b
/* 800DAFB0 000D7EF0  90 1E 31 A0 */ stw r0, 0x31a0(r30)
/* 800DAFB4 000D7EF4  48 00 00 3C */ b lbl_800DAFF0
lbl_800DAFB8:
/* 800DAFB8 000D7EF8  7F C3 F3 78 */ mr r3, r30
/* 800DAFBC 000D7EFC  3C 80 00 02 */ lis r4, 0x00020030@ha
/* 800DAFC0 000D7F00  38 84 00 30 */ addi r4, r4, 0x00020030@l
/* 800DAFC4 000D7F04  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 800DAFC8 000D7F08  81 8C 01 18 */ lwz r12, 0x118(r12)
/* 800DAFCC 000D7F0C  7D 89 03 A6 */ mtctr r12
/* 800DAFD0 000D7F10  4E 80 04 21 */ bctrl
/* 800DAFD4 000D7F14  7F C3 F3 78 */ mr r3, r30
/* 800DAFD8 000D7F18  3C 80 00 01 */ lis r4, 0x0001000D@ha
/* 800DAFDC 000D7F1C  38 84 00 0D */ addi r4, r4, 0x0001000D@l
/* 800DAFE0 000D7F20  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 800DAFE4 000D7F24  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 800DAFE8 000D7F28  7D 89 03 A6 */ mtctr r12
/* 800DAFEC 000D7F2C  4E 80 04 21 */ bctrl
lbl_800DAFF0:
/* 800DAFF0 000D7F30  7F C3 F3 78 */ mr r3, r30
/* 800DAFF4 000D7F34  38 80 00 8C */ li r4, 0x8c
/* 800DAFF8 000D7F38  3C A0 80 39 */ lis r5, lbl_8038E454@ha
/* 800DAFFC 000D7F3C  38 C5 E4 54 */ addi r6, r5, lbl_8038E454@l
/* 800DB000 000D7F40  C0 26 00 04 */ lfs f1, 4(r6)
/* 800DB004 000D7F44  FC 40 F8 90 */ fmr f2, f31
/* 800DB008 000D7F48  A8 A6 00 00 */ lha r5, 0(r6)
/* 800DB00C 000D7F4C  C0 66 00 0C */ lfs f3, 0xc(r6)
/* 800DB010 000D7F50  4B FD 1F FD */ bl setSingleAnime__9daAlink_cFQ29daAlink_c11daAlink_ANMffsf
/* 800DB014 000D7F54  38 00 00 00 */ li r0, 0
/* 800DB018 000D7F58  90 1E 31 98 */ stw r0, 0x3198(r30)
/* 800DB01C 000D7F5C  38 00 00 04 */ li r0, 4
/* 800DB020 000D7F60  98 1E 2F 9D */ stb r0, 0x2f9d(r30)
/* 800DB024 000D7F64  7F C3 F3 78 */ mr r3, r30
/* 800DB028 000D7F68  38 80 00 04 */ li r4, 4
/* 800DB02C 000D7F6C  48 04 61 95 */ bl setFootEffectProcType__9daAlink_cFi
/* 800DB030 000D7F70  80 1E 05 84 */ lwz r0, 0x584(r30)
/* 800DB034 000D7F74  60 00 00 30 */ ori r0, r0, 0x30
/* 800DB038 000D7F78  90 1E 05 84 */ stw r0, 0x584(r30)
/* 800DB03C 000D7F7C  38 60 00 01 */ li r3, 1
/* 800DB040 000D7F80  E3 E1 00 48 */ psq_l f31, 72(r1), 0, 0
/* 800DB044 000D7F84  CB E1 00 40 */ lfd f31, 0x40(r1)
/* 800DB048 000D7F88  83 E1 00 3C */ lwz r31, 0x3c(r1)
/* 800DB04C 000D7F8C  83 C1 00 38 */ lwz r30, 0x38(r1)
/* 800DB050 000D7F90  80 01 00 54 */ lwz r0, 0x54(r1)
/* 800DB054 000D7F94  7C 08 03 A6 */ mtlr r0
/* 800DB058 000D7F98  38 21 00 50 */ addi r1, r1, 0x50
/* 800DB05C 000D7F9C  4E 80 00 20 */ blr