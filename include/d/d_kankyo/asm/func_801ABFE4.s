/* 801ABFE4 001A8F24  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 801ABFE8 001A8F28  7C 08 02 A6 */ mflr r0
/* 801ABFEC 001A8F2C  90 01 00 34 */ stw r0, 0x34(r1)
/* 801ABFF0 001A8F30  39 61 00 30 */ addi r11, r1, 0x30
/* 801ABFF4 001A8F34  48 1B 61 E1 */ bl _savegpr_27
/* 801ABFF8 001A8F38  7C 7F 1B 79 */ or. r31, r3, r3
/* 801ABFFC 001A8F3C  3C 60 80 43 */ lis r3, lbl_8042CA54@ha
/* 801AC000 001A8F40  3B C3 CA 54 */ addi r30, r3, lbl_8042CA54@l
/* 801AC004 001A8F44  41 82 00 14 */ beq lbl_801AC018
/* 801AC008 001A8F48  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 801AC00C 001A8F4C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 801AC010 001A8F50  37 A3 0F 38 */ addic. r29, r3, 0xf38
/* 801AC014 001A8F54  40 82 00 0C */ bne lbl_801AC020
lbl_801AC018:
/* 801AC018 001A8F58  C0 22 A2 0C */ lfs f1, lbl_80453C0C-_SDA2_BASE_(r2)
/* 801AC01C 001A8F5C  48 00 01 0C */ b lbl_801AC128
lbl_801AC020:
/* 801AC020 001A8F60  7F A3 EB 78 */ mr r3, r29
/* 801AC024 001A8F64  7F E4 FB 78 */ mr r4, r31
/* 801AC028 001A8F68  4B EC 8E 29 */ bl GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo
/* 801AC02C 001A8F6C  7C 7B 1B 78 */ mr r27, r3
/* 801AC030 001A8F70  3B 9D 3E C8 */ addi r28, r29, 0x3ec8
/* 801AC034 001A8F74  7F 83 E3 78 */ mr r3, r28
/* 801AC038 001A8F78  3C 80 80 39 */ lis r4, lbl_80394C6C@ha
/* 801AC03C 001A8F7C  38 84 4C 6C */ addi r4, r4, lbl_80394C6C@l
/* 801AC040 001A8F80  38 84 01 7A */ addi r4, r4, 0x17a
/* 801AC044 001A8F84  48 1B C9 51 */ bl strcmp
/* 801AC048 001A8F88  2C 03 00 00 */ cmpwi r3, 0
/* 801AC04C 001A8F8C  40 82 00 28 */ bne lbl_801AC074
/* 801AC050 001A8F90  3C 60 80 43 */ lis r3, lbl_8042CA54@ha
/* 801AC054 001A8F94  38 63 CA 54 */ addi r3, r3, lbl_8042CA54@l
/* 801AC058 001A8F98  88 03 12 FE */ lbz r0, 0x12fe(r3)
/* 801AC05C 001A8F9C  28 00 00 04 */ cmplwi r0, 4
/* 801AC060 001A8FA0  40 82 00 14 */ bne lbl_801AC074
/* 801AC064 001A8FA4  2C 1B 00 04 */ cmpwi r27, 4
/* 801AC068 001A8FA8  40 82 00 50 */ bne lbl_801AC0B8
/* 801AC06C 001A8FAC  3B 60 00 0D */ li r27, 0xd
/* 801AC070 001A8FB0  48 00 00 48 */ b lbl_801AC0B8
lbl_801AC074:
/* 801AC074 001A8FB4  7F 83 E3 78 */ mr r3, r28
/* 801AC078 001A8FB8  3C 80 80 39 */ lis r4, lbl_80394C6C@ha
/* 801AC07C 001A8FBC  38 84 4C 6C */ addi r4, r4, lbl_80394C6C@l
/* 801AC080 001A8FC0  38 84 02 61 */ addi r4, r4, 0x261
/* 801AC084 001A8FC4  48 1B C9 11 */ bl strcmp
/* 801AC088 001A8FC8  2C 03 00 00 */ cmpwi r3, 0
/* 801AC08C 001A8FCC  40 82 00 2C */ bne lbl_801AC0B8
/* 801AC090 001A8FD0  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 801AC094 001A8FD4  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 801AC098 001A8FD8  38 63 09 58 */ addi r3, r3, 0x958
/* 801AC09C 001A8FDC  38 80 00 03 */ li r4, 3
/* 801AC0A0 001A8FE0  4B E8 88 95 */ bl isDungeonItem__12dSv_memBit_cCFi
/* 801AC0A4 001A8FE4  2C 03 00 00 */ cmpwi r3, 0
/* 801AC0A8 001A8FE8  41 82 00 10 */ beq lbl_801AC0B8
/* 801AC0AC 001A8FEC  2C 1B 00 0B */ cmpwi r27, 0xb
/* 801AC0B0 001A8FF0  40 82 00 08 */ bne lbl_801AC0B8
/* 801AC0B4 001A8FF4  3B 60 00 07 */ li r27, 7
lbl_801AC0B8:
/* 801AC0B8 001A8FF8  7F A3 EB 78 */ mr r3, r29
/* 801AC0BC 001A8FFC  7F E4 FB 78 */ mr r4, r31
/* 801AC0C0 001A9000  4B EC 8D E1 */ bl GetPolyAtt1__4dBgSFRC13cBgS_PolyInfo
/* 801AC0C4 001A9004  80 9E 12 E8 */ lwz r4, 0x12e8(r30)
/* 801AC0C8 001A9008  28 04 00 00 */ cmplwi r4, 0
/* 801AC0CC 001A900C  41 82 00 14 */ beq lbl_801AC0E0
/* 801AC0D0 001A9010  57 60 18 38 */ slwi r0, r27, 3
/* 801AC0D4 001A9014  7C 00 1A 14 */ add r0, r0, r3
/* 801AC0D8 001A9018  7C 04 00 AE */ lbzx r0, r4, r0
/* 801AC0DC 001A901C  48 00 00 0C */ b lbl_801AC0E8
lbl_801AC0E0:
/* 801AC0E0 001A9020  C0 22 A2 0C */ lfs f1, lbl_80453C0C-_SDA2_BASE_(r2)
/* 801AC0E4 001A9024  48 00 00 44 */ b lbl_801AC128
lbl_801AC0E8:
/* 801AC0E8 001A9028  28 00 00 64 */ cmplwi r0, 0x64
/* 801AC0EC 001A902C  41 80 00 0C */ blt lbl_801AC0F8
/* 801AC0F0 001A9030  C0 22 A2 0C */ lfs f1, lbl_80453C0C-_SDA2_BASE_(r2)
/* 801AC0F4 001A9034  48 00 00 34 */ b lbl_801AC128
lbl_801AC0F8:
/* 801AC0F8 001A9038  80 7E 12 F4 */ lwz r3, 0x12f4(r30)
/* 801AC0FC 001A903C  54 00 1D 78 */ rlwinm r0, r0, 3, 0x15, 0x1c
/* 801AC100 001A9040  7C 63 02 14 */ add r3, r3, r0
/* 801AC104 001A9044  88 03 00 07 */ lbz r0, 7(r3)
/* 801AC108 001A9048  C8 22 A2 80 */ lfd f1, lbl_80453C80-_SDA2_BASE_(r2)
/* 801AC10C 001A904C  90 01 00 0C */ stw r0, 0xc(r1)
/* 801AC110 001A9050  3C 00 43 30 */ lis r0, 0x4330
/* 801AC114 001A9054  90 01 00 08 */ stw r0, 8(r1)
/* 801AC118 001A9058  C8 01 00 08 */ lfd f0, 8(r1)
/* 801AC11C 001A905C  EC 20 08 28 */ fsubs f1, f0, f1
/* 801AC120 001A9060  C0 02 A2 68 */ lfs f0, lbl_80453C68-_SDA2_BASE_(r2)
/* 801AC124 001A9064  EC 20 00 72 */ fmuls f1, f0, f1
lbl_801AC128:
/* 801AC128 001A9068  39 61 00 30 */ addi r11, r1, 0x30
/* 801AC12C 001A906C  48 1B 60 F5 */ bl _restgpr_27
/* 801AC130 001A9070  80 01 00 34 */ lwz r0, 0x34(r1)
/* 801AC134 001A9074  7C 08 03 A6 */ mtlr r0
/* 801AC138 001A9078  38 21 00 30 */ addi r1, r1, 0x30
/* 801AC13C 001A907C  4E 80 00 20 */ blr
