/* 800EDA78 000EA9B8  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800EDA7C 000EA9BC  7C 08 02 A6 */ mflr r0
/* 800EDA80 000EA9C0  90 01 00 14 */ stw r0, 0x14(r1)
/* 800EDA84 000EA9C4  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800EDA88 000EA9C8  93 C1 00 08 */ stw r30, 8(r1)
/* 800EDA8C 000EA9CC  7C 7E 1B 78 */ mr r30, r3
/* 800EDA90 000EA9D0  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800EDA94 000EA9D4  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800EDA98 000EA9D8  83 E3 5D B8 */ lwz r31, 0x5db8(r3)
/* 800EDA9C 000EA9DC  A0 1F 16 C4 */ lhz r0, 0x16c4(r31)
/* 800EDAA0 000EA9E0  28 00 00 0C */ cmplwi r0, 0xc
/* 800EDAA4 000EA9E4  40 82 00 0C */ bne lbl_800EDAB0
/* 800EDAA8 000EA9E8  38 80 00 45 */ li r4, 0x45
/* 800EDAAC 000EA9EC  48 00 00 4C */ b lbl_800EDAF8
lbl_800EDAB0:
/* 800EDAB0 000EA9F0  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800EDAB4 000EA9F4  28 00 00 0B */ cmplwi r0, 0xb
/* 800EDAB8 000EA9F8  40 82 00 0C */ bne lbl_800EDAC4
/* 800EDABC 000EA9FC  38 80 00 46 */ li r4, 0x46
/* 800EDAC0 000EAA00  48 00 00 38 */ b lbl_800EDAF8
lbl_800EDAC4:
/* 800EDAC4 000EAA04  28 00 00 0A */ cmplwi r0, 0xa
/* 800EDAC8 000EAA08  40 82 00 0C */ bne lbl_800EDAD4
/* 800EDACC 000EAA0C  38 80 00 47 */ li r4, 0x47
/* 800EDAD0 000EAA10  48 00 00 28 */ b lbl_800EDAF8
lbl_800EDAD4:
/* 800EDAD4 000EAA14  28 00 00 15 */ cmplwi r0, 0x15
/* 800EDAD8 000EAA18  40 82 00 0C */ bne lbl_800EDAE4
/* 800EDADC 000EAA1C  38 80 00 42 */ li r4, 0x42
/* 800EDAE0 000EAA20  48 00 00 18 */ b lbl_800EDAF8
lbl_800EDAE4:
/* 800EDAE4 000EAA24  28 00 00 14 */ cmplwi r0, 0x14
/* 800EDAE8 000EAA28  40 82 00 0C */ bne lbl_800EDAF4
/* 800EDAEC 000EAA2C  38 80 00 44 */ li r4, 0x44
/* 800EDAF0 000EAA30  48 00 00 08 */ b lbl_800EDAF8
lbl_800EDAF4:
/* 800EDAF4 000EAA34  38 80 00 43 */ li r4, 0x43
lbl_800EDAF8:
/* 800EDAF8 000EAA38  7F C3 F3 78 */ mr r3, r30
/* 800EDAFC 000EAA3C  C0 3F 17 50 */ lfs f1, 0x1750(r31)
/* 800EDB00 000EAA40  4B FB F4 B1 */ bl setSingleAnimeBaseMorf__9daAlink_cFQ29daAlink_c11daAlink_ANMf
/* 800EDB04 000EAA44  C0 1F 05 C0 */ lfs f0, 0x5c0(r31)
/* 800EDB08 000EAA48  D0 1E 1F E0 */ stfs f0, 0x1fe0(r30)
/* 800EDB0C 000EAA4C  80 7E 1F 2C */ lwz r3, 0x1f2c(r30)
/* 800EDB10 000EAA50  D0 03 00 08 */ stfs f0, 8(r3)
/* 800EDB14 000EAA54  80 7E 1F 2C */ lwz r3, 0x1f2c(r30)
/* 800EDB18 000EAA58  80 1E 1F 44 */ lwz r0, 0x1f44(r30)
/* 800EDB1C 000EAA5C  7C 03 00 40 */ cmplw r3, r0
/* 800EDB20 000EAA60  41 82 00 10 */ beq lbl_800EDB30
/* 800EDB24 000EAA64  D0 1E 20 28 */ stfs f0, 0x2028(r30)
/* 800EDB28 000EAA68  80 7E 1F 44 */ lwz r3, 0x1f44(r30)
/* 800EDB2C 000EAA6C  D0 03 00 08 */ stfs f0, 8(r3)
lbl_800EDB30:
/* 800EDB30 000EAA70  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800EDB34 000EAA74  83 C1 00 08 */ lwz r30, 8(r1)
/* 800EDB38 000EAA78  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800EDB3C 000EAA7C  7C 08 03 A6 */ mtlr r0
/* 800EDB40 000EAA80  38 21 00 10 */ addi r1, r1, 0x10
/* 800EDB44 000EAA84  4E 80 00 20 */ blr
