/* 8021BCC0 00218C00  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8021BCC4 00218C04  7C 08 02 A6 */ mflr r0
/* 8021BCC8 00218C08  90 01 00 14 */ stw r0, 0x14(r1)
/* 8021BCCC 00218C0C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8021BCD0 00218C10  93 C1 00 08 */ stw r30, 8(r1)
/* 8021BCD4 00218C14  7C 9E 23 78 */ mr r30, r4
/* 8021BCD8 00218C18  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8021BCDC 00218C1C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8021BCE0 00218C20  80 63 5D BC */ lwz r3, 0x5dbc(r3)
/* 8021BCE4 00218C24  28 03 00 00 */ cmplwi r3, 0
/* 8021BCE8 00218C28  40 82 00 0C */ bne lbl_8021BCF4
/* 8021BCEC 00218C2C  38 60 00 00 */ li r3, 0
/* 8021BCF0 00218C30  48 00 00 C8 */ b lbl_8021BDB8
lbl_8021BCF4:
/* 8021BCF4 00218C34  3C 80 80 43 */ lis r4, lbl_80430188@ha
/* 8021BCF8 00218C38  38 84 01 88 */ addi r4, r4, lbl_80430188@l
/* 8021BCFC 00218C3C  88 04 00 BD */ lbz r0, 0xbd(r4)
/* 8021BD00 00218C40  28 00 00 00 */ cmplwi r0, 0
/* 8021BD04 00218C44  40 82 00 A8 */ bne lbl_8021BDAC
/* 8021BD08 00218C48  48 01 B3 E1 */ bl isHowlMessage__12dMsgObject_cFv
/* 8021BD0C 00218C4C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8021BD10 00218C50  40 82 00 9C */ bne lbl_8021BDAC
/* 8021BD14 00218C54  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8021BD18 00218C58  3B E3 61 C0 */ addi r31, r3, g_dComIfG_gameInfo@l
/* 8021BD1C 00218C5C  80 7F 5D AC */ lwz r3, 0x5dac(r31)
/* 8021BD20 00218C60  81 83 06 28 */ lwz r12, 0x628(r3)
/* 8021BD24 00218C64  81 8C 00 78 */ lwz r12, 0x78(r12)
/* 8021BD28 00218C68  7D 89 03 A6 */ mtctr r12
/* 8021BD2C 00218C6C  4E 80 04 21 */ bctrl
/* 8021BD30 00218C70  2C 03 00 00 */ cmpwi r3, 0
/* 8021BD34 00218C74  40 82 00 78 */ bne lbl_8021BDAC
/* 8021BD38 00218C78  3C 60 80 43 */ lis r3, lbl_80430188@ha
/* 8021BD3C 00218C7C  38 63 01 88 */ addi r3, r3, lbl_80430188@l
/* 8021BD40 00218C80  88 03 00 E8 */ lbz r0, 0xe8(r3)
/* 8021BD44 00218C84  28 00 00 00 */ cmplwi r0, 0
/* 8021BD48 00218C88  40 82 00 64 */ bne lbl_8021BDAC
/* 8021BD4C 00218C8C  80 7F 5D AC */ lwz r3, 0x5dac(r31)
/* 8021BD50 00218C90  81 83 06 28 */ lwz r12, 0x628(r3)
/* 8021BD54 00218C94  81 8C 00 D0 */ lwz r12, 0xd0(r12)
/* 8021BD58 00218C98  7D 89 03 A6 */ mtctr r12
/* 8021BD5C 00218C9C  4E 80 04 21 */ bctrl
/* 8021BD60 00218CA0  2C 03 00 00 */ cmpwi r3, 0
/* 8021BD64 00218CA4  41 82 00 0C */ beq lbl_8021BD70
/* 8021BD68 00218CA8  57 C0 06 3F */ clrlwi. r0, r30, 0x18
/* 8021BD6C 00218CAC  40 82 00 40 */ bne lbl_8021BDAC
lbl_8021BD70:
/* 8021BD70 00218CB0  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8021BD74 00218CB4  38 83 61 C0 */ addi r4, r3, g_dComIfG_gameInfo@l
/* 8021BD78 00218CB8  88 64 4F AD */ lbz r3, 0x4fad(r4)
/* 8021BD7C 00218CBC  30 03 FF FF */ addic r0, r3, -1
/* 8021BD80 00218CC0  7C 00 19 10 */ subfe r0, r0, r3
/* 8021BD84 00218CC4  54 03 06 3F */ clrlwi. r3, r0, 0x18
/* 8021BD88 00218CC8  41 82 00 10 */ beq lbl_8021BD98
/* 8021BD8C 00218CCC  A0 04 4F A4 */ lhz r0, 0x4fa4(r4)
/* 8021BD90 00218CD0  54 00 07 7A */ rlwinm r0, r0, 0, 0x1d, 0x1d
/* 8021BD94 00218CD4  48 00 00 08 */ b lbl_8021BD9C
lbl_8021BD98:
/* 8021BD98 00218CD8  38 00 00 00 */ li r0, 0
lbl_8021BD9C:
/* 8021BD9C 00218CDC  54 00 04 3F */ clrlwi. r0, r0, 0x10
/* 8021BDA0 00218CE0  40 82 00 14 */ bne lbl_8021BDB4
/* 8021BDA4 00218CE4  2C 03 00 00 */ cmpwi r3, 0
/* 8021BDA8 00218CE8  41 82 00 0C */ beq lbl_8021BDB4
lbl_8021BDAC:
/* 8021BDAC 00218CEC  38 60 00 01 */ li r3, 1
/* 8021BDB0 00218CF0  48 00 00 08 */ b lbl_8021BDB8
lbl_8021BDB4:
/* 8021BDB4 00218CF4  38 60 00 00 */ li r3, 0
lbl_8021BDB8:
/* 8021BDB8 00218CF8  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8021BDBC 00218CFC  83 C1 00 08 */ lwz r30, 8(r1)
/* 8021BDC0 00218D00  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8021BDC4 00218D04  7C 08 03 A6 */ mtlr r0
/* 8021BDC8 00218D08  38 21 00 10 */ addi r1, r1, 0x10
/* 8021BDCC 00218D0C  4E 80 00 20 */ blr
