/* 802C6C84 002C3BC4  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 802C6C88 002C3BC8  7C 08 02 A6 */ mflr r0
/* 802C6C8C 002C3BCC  90 01 00 24 */ stw r0, 0x24(r1)
/* 802C6C90 002C3BD0  93 E1 00 1C */ stw r31, 0x1c(r1)
/* 802C6C94 002C3BD4  93 C1 00 18 */ stw r30, 0x18(r1)
/* 802C6C98 002C3BD8  7C 7E 1B 78 */ mr r30, r3
/* 802C6C9C 002C3BDC  7C 9F 23 78 */ mr r31, r4
/* 802C6CA0 002C3BE0  C0 22 C3 74 */ lfs f1, lbl_80455D74-_SDA2_BASE_(r2)
/* 802C6CA4 002C3BE4  C0 03 00 60 */ lfs f0, 0x60(r3)
/* 802C6CA8 002C3BE8  FC 01 00 00 */ fcmpu cr0, f1, f0
/* 802C6CAC 002C3BEC  40 82 04 04 */ bne lbl_802C70B0
/* 802C6CB0 002C3BF0  54 A0 06 3E */ clrlwi r0, r5, 0x18
/* 802C6CB4 002C3BF4  28 00 00 64 */ cmplwi r0, 0x64
/* 802C6CB8 002C3BF8  41 80 00 0C */ blt lbl_802C6CC4
/* 802C6CBC 002C3BFC  C0 62 C3 44 */ lfs f3, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6CC0 002C3C00  48 00 00 24 */ b lbl_802C6CE4
lbl_802C6CC4:
/* 802C6CC4 002C3C04  C0 42 C3 78 */ lfs f2, lbl_80455D78-_SDA2_BASE_(r2)
/* 802C6CC8 002C3C08  C8 22 C3 58 */ lfd f1, lbl_80455D58-_SDA2_BASE_(r2)
/* 802C6CCC 002C3C0C  90 01 00 0C */ stw r0, 0xc(r1)
/* 802C6CD0 002C3C10  3C 00 43 30 */ lis r0, 0x4330
/* 802C6CD4 002C3C14  90 01 00 08 */ stw r0, 8(r1)
/* 802C6CD8 002C3C18  C8 01 00 08 */ lfd f0, 8(r1)
/* 802C6CDC 002C3C1C  EC 00 08 28 */ fsubs f0, f0, f1
/* 802C6CE0 002C3C20  EC 62 00 32 */ fmuls f3, f2, f0
lbl_802C6CE4:
/* 802C6CE4 002C3C24  54 C0 06 3E */ clrlwi r0, r6, 0x18
/* 802C6CE8 002C3C28  28 00 00 FF */ cmplwi r0, 0xff
/* 802C6CEC 002C3C2C  40 82 00 0C */ bne lbl_802C6CF8
/* 802C6CF0 002C3C30  C0 82 C3 44 */ lfs f4, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6CF4 002C3C34  48 00 00 24 */ b lbl_802C6D18
lbl_802C6CF8:
/* 802C6CF8 002C3C38  C0 42 C3 78 */ lfs f2, lbl_80455D78-_SDA2_BASE_(r2)
/* 802C6CFC 002C3C3C  C8 22 C3 58 */ lfd f1, lbl_80455D58-_SDA2_BASE_(r2)
/* 802C6D00 002C3C40  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C6D04 002C3C44  3C 00 43 30 */ lis r0, 0x4330
/* 802C6D08 002C3C48  90 01 00 10 */ stw r0, 0x10(r1)
/* 802C6D0C 002C3C4C  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 802C6D10 002C3C50  EC 00 08 28 */ fsubs f0, f0, f1
/* 802C6D14 002C3C54  EC 82 00 32 */ fmuls f4, f2, f0
lbl_802C6D18:
/* 802C6D18 002C3C58  54 E0 06 3E */ clrlwi r0, r7, 0x18
/* 802C6D1C 002C3C5C  28 00 00 FF */ cmplwi r0, 0xff
/* 802C6D20 002C3C60  40 82 00 0C */ bne lbl_802C6D2C
/* 802C6D24 002C3C64  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6D28 002C3C68  48 00 00 3C */ b lbl_802C6D64
lbl_802C6D2C:
/* 802C6D2C 002C3C6C  C0 08 00 00 */ lfs f0, 0(r8)
/* 802C6D30 002C3C70  D0 1E 00 3C */ stfs f0, 0x3c(r30)
/* 802C6D34 002C3C74  C0 08 00 04 */ lfs f0, 4(r8)
/* 802C6D38 002C3C78  D0 1E 00 40 */ stfs f0, 0x40(r30)
/* 802C6D3C 002C3C7C  C0 08 00 08 */ lfs f0, 8(r8)
/* 802C6D40 002C3C80  D0 1E 00 44 */ stfs f0, 0x44(r30)
/* 802C6D44 002C3C84  C0 42 C3 50 */ lfs f2, lbl_80455D50-_SDA2_BASE_(r2)
/* 802C6D48 002C3C88  C8 22 C3 58 */ lfd f1, lbl_80455D58-_SDA2_BASE_(r2)
/* 802C6D4C 002C3C8C  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C6D50 002C3C90  3C 00 43 30 */ lis r0, 0x4330
/* 802C6D54 002C3C94  90 01 00 10 */ stw r0, 0x10(r1)
/* 802C6D58 002C3C98  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 802C6D5C 002C3C9C  EC 00 08 28 */ fsubs f0, f0, f1
/* 802C6D60 002C3CA0  EC 42 00 32 */ fmuls f2, f2, f0
lbl_802C6D64:
/* 802C6D64 002C3CA4  88 7E 00 38 */ lbz r3, 0x38(r30)
/* 802C6D68 002C3CA8  28 03 00 00 */ cmplwi r3, 0
/* 802C6D6C 002C3CAC  41 82 00 A0 */ beq lbl_802C6E0C
/* 802C6D70 002C3CB0  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 802C6D74 002C3CB4  7C 03 00 40 */ cmplw r3, r0
/* 802C6D78 002C3CB8  40 82 00 94 */ bne lbl_802C6E0C
/* 802C6D7C 002C3CBC  38 00 00 64 */ li r0, 0x64
/* 802C6D80 002C3CC0  98 1E 00 39 */ stb r0, 0x39(r30)
/* 802C6D84 002C3CC4  C0 1E 00 48 */ lfs f0, 0x48(r30)
/* 802C6D88 002C3CC8  FC 03 00 00 */ fcmpu cr0, f3, f0
/* 802C6D8C 002C3CCC  41 82 00 18 */ beq lbl_802C6DA4
/* 802C6D90 002C3CD0  EC 23 00 28 */ fsubs f1, f3, f0
/* 802C6D94 002C3CD4  C0 02 C3 F0 */ lfs f0, lbl_80455DF0-_SDA2_BASE_(r2)
/* 802C6D98 002C3CD8  EC 01 00 24 */ fdivs f0, f1, f0
/* 802C6D9C 002C3CDC  D0 1E 00 54 */ stfs f0, 0x54(r30)
/* 802C6DA0 002C3CE0  48 00 00 10 */ b lbl_802C6DB0
lbl_802C6DA4:
/* 802C6DA4 002C3CE4  D0 7E 00 48 */ stfs f3, 0x48(r30)
/* 802C6DA8 002C3CE8  C0 02 C3 48 */ lfs f0, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6DAC 002C3CEC  D0 1E 00 54 */ stfs f0, 0x54(r30)
lbl_802C6DB0:
/* 802C6DB0 002C3CF0  C0 1E 00 4C */ lfs f0, 0x4c(r30)
/* 802C6DB4 002C3CF4  FC 04 00 00 */ fcmpu cr0, f4, f0
/* 802C6DB8 002C3CF8  41 82 00 18 */ beq lbl_802C6DD0
/* 802C6DBC 002C3CFC  EC 24 00 28 */ fsubs f1, f4, f0
/* 802C6DC0 002C3D00  C0 02 C3 F0 */ lfs f0, lbl_80455DF0-_SDA2_BASE_(r2)
/* 802C6DC4 002C3D04  EC 01 00 24 */ fdivs f0, f1, f0
/* 802C6DC8 002C3D08  D0 1E 00 58 */ stfs f0, 0x58(r30)
/* 802C6DCC 002C3D0C  48 00 00 10 */ b lbl_802C6DDC
lbl_802C6DD0:
/* 802C6DD0 002C3D10  D0 9E 00 4C */ stfs f4, 0x4c(r30)
/* 802C6DD4 002C3D14  C0 02 C3 48 */ lfs f0, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6DD8 002C3D18  D0 1E 00 58 */ stfs f0, 0x58(r30)
lbl_802C6DDC:
/* 802C6DDC 002C3D1C  C0 1E 00 50 */ lfs f0, 0x50(r30)
/* 802C6DE0 002C3D20  FC 02 00 00 */ fcmpu cr0, f2, f0
/* 802C6DE4 002C3D24  41 82 00 18 */ beq lbl_802C6DFC
/* 802C6DE8 002C3D28  EC 22 00 28 */ fsubs f1, f2, f0
/* 802C6DEC 002C3D2C  C0 02 C3 F0 */ lfs f0, lbl_80455DF0-_SDA2_BASE_(r2)
/* 802C6DF0 002C3D30  EC 01 00 24 */ fdivs f0, f1, f0
/* 802C6DF4 002C3D34  D0 1E 00 5C */ stfs f0, 0x5c(r30)
/* 802C6DF8 002C3D38  48 00 00 30 */ b lbl_802C6E28
lbl_802C6DFC:
/* 802C6DFC 002C3D3C  D0 5E 00 50 */ stfs f2, 0x50(r30)
/* 802C6E00 002C3D40  C0 02 C3 48 */ lfs f0, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6E04 002C3D44  D0 1E 00 5C */ stfs f0, 0x5c(r30)
/* 802C6E08 002C3D48  48 00 00 20 */ b lbl_802C6E28
lbl_802C6E0C:
/* 802C6E0C 002C3D4C  D0 7E 00 48 */ stfs f3, 0x48(r30)
/* 802C6E10 002C3D50  D0 9E 00 4C */ stfs f4, 0x4c(r30)
/* 802C6E14 002C3D54  D0 5E 00 50 */ stfs f2, 0x50(r30)
/* 802C6E18 002C3D58  C0 02 C3 48 */ lfs f0, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6E1C 002C3D5C  D0 1E 00 54 */ stfs f0, 0x54(r30)
/* 802C6E20 002C3D60  D0 1E 00 58 */ stfs f0, 0x58(r30)
/* 802C6E24 002C3D64  D0 1E 00 5C */ stfs f0, 0x5c(r30)
lbl_802C6E28:
/* 802C6E28 002C3D68  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 802C6E2C 002C3D6C  28 00 00 0B */ cmplwi r0, 0xb
/* 802C6E30 002C3D70  41 81 02 7C */ bgt lbl_802C70AC
/* 802C6E34 002C3D74  3C 60 80 3D */ lis r3, lbl_803CB9C8@ha
/* 802C6E38 002C3D78  38 63 B9 C8 */ addi r3, r3, lbl_803CB9C8@l
/* 802C6E3C 002C3D7C  54 00 10 3A */ slwi r0, r0, 2
/* 802C6E40 002C3D80  7C 03 00 2E */ lwzx r0, r3, r0
/* 802C6E44 002C3D84  7C 09 03 A6 */ mtctr r0
/* 802C6E48 002C3D88  4E 80 04 20 */ bctr
/* 802C6E4C 002C3D8C  7F C3 F3 78 */ mr r3, r30
/* 802C6E50 002C3D90  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6E54 002C3D94  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6E58 002C3D98  38 80 00 01 */ li r4, 1
/* 802C6E5C 002C3D9C  38 A0 00 00 */ li r5, 0
/* 802C6E60 002C3DA0  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6E64 002C3DA4  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6E68 002C3DA8  4B FF F1 15 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6E6C 002C3DAC  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C6E70 002C3DB0  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6E74 002C3DB4  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6E78 002C3DB8  38 80 00 00 */ li r4, 0
/* 802C6E7C 002C3DBC  38 A0 00 01 */ li r5, 1
/* 802C6E80 002C3DC0  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6E84 002C3DC4  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6E88 002C3DC8  4B FF F0 F5 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6E8C 002C3DCC  48 00 02 20 */ b lbl_802C70AC
/* 802C6E90 002C3DD0  7F C3 F3 78 */ mr r3, r30
/* 802C6E94 002C3DD4  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6E98 002C3DD8  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6E9C 002C3DDC  38 80 00 01 */ li r4, 1
/* 802C6EA0 002C3DE0  38 A0 00 00 */ li r5, 0
/* 802C6EA4 002C3DE4  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6EA8 002C3DE8  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6EAC 002C3DEC  4B FF F0 D1 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6EB0 002C3DF0  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C6EB4 002C3DF4  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6EB8 002C3DF8  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6EBC 002C3DFC  38 80 00 00 */ li r4, 0
/* 802C6EC0 002C3E00  38 A0 00 01 */ li r5, 1
/* 802C6EC4 002C3E04  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6EC8 002C3E08  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6ECC 002C3E0C  4B FF F0 B1 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6ED0 002C3E10  48 00 01 DC */ b lbl_802C70AC
/* 802C6ED4 002C3E14  7F C3 F3 78 */ mr r3, r30
/* 802C6ED8 002C3E18  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6EDC 002C3E1C  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6EE0 002C3E20  38 80 00 01 */ li r4, 1
/* 802C6EE4 002C3E24  38 A0 00 00 */ li r5, 0
/* 802C6EE8 002C3E28  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6EEC 002C3E2C  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6EF0 002C3E30  4B FF F0 8D */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6EF4 002C3E34  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C6EF8 002C3E38  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6EFC 002C3E3C  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6F00 002C3E40  38 80 00 00 */ li r4, 0
/* 802C6F04 002C3E44  38 A0 00 01 */ li r5, 1
/* 802C6F08 002C3E48  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6F0C 002C3E4C  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6F10 002C3E50  4B FF F0 6D */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6F14 002C3E54  48 00 01 98 */ b lbl_802C70AC
/* 802C6F18 002C3E58  7F C3 F3 78 */ mr r3, r30
/* 802C6F1C 002C3E5C  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6F20 002C3E60  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6F24 002C3E64  38 80 00 01 */ li r4, 1
/* 802C6F28 002C3E68  38 A0 00 00 */ li r5, 0
/* 802C6F2C 002C3E6C  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6F30 002C3E70  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6F34 002C3E74  4B FF F0 49 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6F38 002C3E78  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C6F3C 002C3E7C  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6F40 002C3E80  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6F44 002C3E84  38 80 00 00 */ li r4, 0
/* 802C6F48 002C3E88  38 A0 00 01 */ li r5, 1
/* 802C6F4C 002C3E8C  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6F50 002C3E90  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6F54 002C3E94  4B FF F0 29 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6F58 002C3E98  48 00 01 54 */ b lbl_802C70AC
/* 802C6F5C 002C3E9C  7F C3 F3 78 */ mr r3, r30
/* 802C6F60 002C3EA0  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6F64 002C3EA4  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6F68 002C3EA8  38 80 00 01 */ li r4, 1
/* 802C6F6C 002C3EAC  38 A0 00 00 */ li r5, 0
/* 802C6F70 002C3EB0  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6F74 002C3EB4  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6F78 002C3EB8  4B FF F0 05 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6F7C 002C3EBC  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C6F80 002C3EC0  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6F84 002C3EC4  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6F88 002C3EC8  38 80 00 00 */ li r4, 0
/* 802C6F8C 002C3ECC  38 A0 00 01 */ li r5, 1
/* 802C6F90 002C3ED0  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6F94 002C3ED4  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6F98 002C3ED8  4B FF EF E5 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6F9C 002C3EDC  48 00 01 10 */ b lbl_802C70AC
/* 802C6FA0 002C3EE0  7F C3 F3 78 */ mr r3, r30
/* 802C6FA4 002C3EE4  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6FA8 002C3EE8  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6FAC 002C3EEC  38 80 00 01 */ li r4, 1
/* 802C6FB0 002C3EF0  38 A0 00 00 */ li r5, 0
/* 802C6FB4 002C3EF4  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6FB8 002C3EF8  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6FBC 002C3EFC  4B FF EF C1 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6FC0 002C3F00  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C6FC4 002C3F04  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6FC8 002C3F08  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6FCC 002C3F0C  38 80 00 00 */ li r4, 0
/* 802C6FD0 002C3F10  38 A0 00 01 */ li r5, 1
/* 802C6FD4 002C3F14  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6FD8 002C3F18  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C6FDC 002C3F1C  4B FF EF A1 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C6FE0 002C3F20  48 00 00 CC */ b lbl_802C70AC
/* 802C6FE4 002C3F24  7F C3 F3 78 */ mr r3, r30
/* 802C6FE8 002C3F28  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C6FEC 002C3F2C  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C6FF0 002C3F30  38 80 00 01 */ li r4, 1
/* 802C6FF4 002C3F34  38 A0 00 00 */ li r5, 0
/* 802C6FF8 002C3F38  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C6FFC 002C3F3C  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C7000 002C3F40  4B FF EF 7D */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C7004 002C3F44  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C7008 002C3F48  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C700C 002C3F4C  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7010 002C3F50  38 80 00 00 */ li r4, 0
/* 802C7014 002C3F54  38 A0 00 01 */ li r5, 1
/* 802C7018 002C3F58  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C701C 002C3F5C  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C7020 002C3F60  4B FF EF 5D */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C7024 002C3F64  48 00 00 88 */ b lbl_802C70AC
/* 802C7028 002C3F68  7F C3 F3 78 */ mr r3, r30
/* 802C702C 002C3F6C  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7030 002C3F70  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C7034 002C3F74  38 80 00 01 */ li r4, 1
/* 802C7038 002C3F78  38 A0 00 00 */ li r5, 0
/* 802C703C 002C3F7C  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C7040 002C3F80  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C7044 002C3F84  4B FF EF 39 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C7048 002C3F88  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C704C 002C3F8C  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C7050 002C3F90  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7054 002C3F94  38 80 00 00 */ li r4, 0
/* 802C7058 002C3F98  38 A0 00 01 */ li r5, 1
/* 802C705C 002C3F9C  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C7060 002C3FA0  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C7064 002C3FA4  4B FF EF 19 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C7068 002C3FA8  48 00 00 44 */ b lbl_802C70AC
/* 802C706C 002C3FAC  7F C3 F3 78 */ mr r3, r30
/* 802C7070 002C3FB0  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7074 002C3FB4  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C7078 002C3FB8  38 80 00 01 */ li r4, 1
/* 802C707C 002C3FBC  38 A0 00 00 */ li r5, 0
/* 802C7080 002C3FC0  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C7084 002C3FC4  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C7088 002C3FC8  4B FF EE F5 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
/* 802C708C 002C3FCC  38 7E 00 1C */ addi r3, r30, 0x1c
/* 802C7090 002C3FD0  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C7094 002C3FD4  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7098 002C3FD8  38 80 00 00 */ li r4, 0
/* 802C709C 002C3FDC  38 A0 00 01 */ li r5, 1
/* 802C70A0 002C3FE0  C0 62 C3 68 */ lfs f3, lbl_80455D68-_SDA2_BASE_(r2)
/* 802C70A4 002C3FE4  C0 82 C3 6C */ lfs f4, lbl_80455D6C-_SDA2_BASE_(r2)
/* 802C70A8 002C3FE8  4B FF EE D5 */ bl setPanParam__14Z2EnvSeAutoPanFffbbff
lbl_802C70AC:
/* 802C70AC 002C3FEC  9B FE 00 38 */ stb r31, 0x38(r30)
lbl_802C70B0:
/* 802C70B0 002C3FF0  83 E1 00 1C */ lwz r31, 0x1c(r1)
/* 802C70B4 002C3FF4  83 C1 00 18 */ lwz r30, 0x18(r1)
/* 802C70B8 002C3FF8  80 01 00 24 */ lwz r0, 0x24(r1)
/* 802C70BC 002C3FFC  7C 08 03 A6 */ mtlr r0
/* 802C70C0 002C4000  38 21 00 20 */ addi r1, r1, 0x20
/* 802C70C4 002C4004  4E 80 00 20 */ blr
