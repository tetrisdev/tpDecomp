/* 800ECE10 000E9D50  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800ECE14 000E9D54  7C 08 02 A6 */ mflr r0
/* 800ECE18 000E9D58  90 01 00 14 */ stw r0, 0x14(r1)
/* 800ECE1C 000E9D5C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800ECE20 000E9D60  7C 7F 1B 78 */ mr r31, r3
/* 800ECE24 000E9D64  A0 03 2F E8 */ lhz r0, 0x2fe8(r3)
/* 800ECE28 000E9D68  28 00 01 3D */ cmplwi r0, 0x13d
/* 800ECE2C 000E9D6C  40 82 00 6C */ bne lbl_800ECE98
/* 800ECE30 000E9D70  88 7F 2F AB */ lbz r3, 0x2fab(r31)
/* 800ECE34 000E9D74  54 64 07 39 */ rlwinm. r4, r3, 0, 0x1c, 0x1c
/* 800ECE38 000E9D78  41 82 00 14 */ beq lbl_800ECE4C
/* 800ECE3C 000E9D7C  54 60 06 F7 */ rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 800ECE40 000E9D80  41 82 00 0C */ beq lbl_800ECE4C
/* 800ECE44 000E9D84  38 60 00 03 */ li r3, 3
/* 800ECE48 000E9D88  48 00 00 A8 */ b lbl_800ECEF0
lbl_800ECE4C:
/* 800ECE4C 000E9D8C  2C 04 00 00 */ cmpwi r4, 0
/* 800ECE50 000E9D90  41 82 00 0C */ beq lbl_800ECE5C
/* 800ECE54 000E9D94  38 60 00 01 */ li r3, 1
/* 800ECE58 000E9D98  48 00 00 98 */ b lbl_800ECEF0
lbl_800ECE5C:
/* 800ECE5C 000E9D9C  54 60 06 F7 */ rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 800ECE60 000E9DA0  41 82 00 0C */ beq lbl_800ECE6C
/* 800ECE64 000E9DA4  38 60 00 02 */ li r3, 2
/* 800ECE68 000E9DA8  48 00 00 88 */ b lbl_800ECEF0
lbl_800ECE6C:
/* 800ECE6C 000E9DAC  38 00 00 00 */ li r0, 0
/* 800ECE70 000E9DB0  88 7F 2F AA */ lbz r3, 0x2faa(r31)
/* 800ECE74 000E9DB4  28 03 00 01 */ cmplwi r3, 1
/* 800ECE78 000E9DB8  41 82 00 0C */ beq lbl_800ECE84
/* 800ECE7C 000E9DBC  28 03 00 02 */ cmplwi r3, 2
/* 800ECE80 000E9DC0  40 82 00 08 */ bne lbl_800ECE88
lbl_800ECE84:
/* 800ECE84 000E9DC4  38 00 00 01 */ li r0, 1
lbl_800ECE88:
/* 800ECE88 000E9DC8  54 00 06 3F */ clrlwi. r0, r0, 0x18
/* 800ECE8C 000E9DCC  41 82 00 60 */ beq lbl_800ECEEC
/* 800ECE90 000E9DD0  38 60 00 00 */ li r3, 0
/* 800ECE94 000E9DD4  48 00 00 5C */ b lbl_800ECEF0
lbl_800ECE98:
/* 800ECE98 000E9DD8  38 00 00 00 */ li r0, 0
/* 800ECE9C 000E9DDC  88 7F 2F AA */ lbz r3, 0x2faa(r31)
/* 800ECEA0 000E9DE0  28 03 00 01 */ cmplwi r3, 1
/* 800ECEA4 000E9DE4  41 82 00 0C */ beq lbl_800ECEB0
/* 800ECEA8 000E9DE8  28 03 00 02 */ cmplwi r3, 2
/* 800ECEAC 000E9DEC  40 82 00 08 */ bne lbl_800ECEB4
lbl_800ECEB0:
/* 800ECEB0 000E9DF0  38 00 00 01 */ li r0, 1
lbl_800ECEB4:
/* 800ECEB4 000E9DF4  54 00 06 3F */ clrlwi. r0, r0, 0x18
/* 800ECEB8 000E9DF8  41 82 00 34 */ beq lbl_800ECEEC
/* 800ECEBC 000E9DFC  7F E3 FB 78 */ mr r3, r31
/* 800ECEC0 000E9E00  48 00 03 31 */ bl checkHorseNotGrab__9daAlink_cCFv
/* 800ECEC4 000E9E04  2C 03 00 00 */ cmpwi r3, 0
/* 800ECEC8 000E9E08  41 82 00 0C */ beq lbl_800ECED4
/* 800ECECC 000E9E0C  38 60 00 00 */ li r3, 0
/* 800ECED0 000E9E10  48 00 00 20 */ b lbl_800ECEF0
lbl_800ECED4:
/* 800ECED4 000E9E14  7F E3 FB 78 */ mr r3, r31
/* 800ECED8 000E9E18  4B FF FF 15 */ bl checkHorseReinLeftOnly__9daAlink_cCFv
/* 800ECEDC 000E9E1C  20 03 00 00 */ subfic r0, r3, 0
/* 800ECEE0 000E9E20  7C 60 01 10 */ subfe r3, r0, r0
/* 800ECEE4 000E9E24  38 63 00 02 */ addi r3, r3, 2
/* 800ECEE8 000E9E28  48 00 00 08 */ b lbl_800ECEF0
lbl_800ECEEC:
/* 800ECEEC 000E9E2C  38 60 FF FF */ li r3, -1
lbl_800ECEF0:
/* 800ECEF0 000E9E30  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800ECEF4 000E9E34  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800ECEF8 000E9E38  7C 08 03 A6 */ mtlr r0
/* 800ECEFC 000E9E3C  38 21 00 10 */ addi r1, r1, 0x10
/* 800ECF00 000E9E40  4E 80 00 20 */ blr
