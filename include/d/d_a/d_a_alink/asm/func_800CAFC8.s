/* 800CAFC8 000C7F08  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 800CAFCC 000C7F0C  7C 08 02 A6 */ mflr r0
/* 800CAFD0 000C7F10  90 01 00 24 */ stw r0, 0x24(r1)
/* 800CAFD4 000C7F14  39 61 00 20 */ addi r11, r1, 0x20
/* 800CAFD8 000C7F18  48 29 72 05 */ bl _savegpr_29
/* 800CAFDC 000C7F1C  7C 7D 1B 78 */ mr r29, r3
/* 800CAFE0 000C7F20  80 63 06 D0 */ lwz r3, 0x6d0(r3)
/* 800CAFE4 000C7F24  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800CAFE8 000C7F28  60 00 00 01 */ ori r0, r0, 1
/* 800CAFEC 000C7F2C  90 03 00 0C */ stw r0, 0xc(r3)
/* 800CAFF0 000C7F30  80 7D 06 D4 */ lwz r3, 0x6d4(r29)
/* 800CAFF4 000C7F34  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800CAFF8 000C7F38  60 00 00 01 */ ori r0, r0, 1
/* 800CAFFC 000C7F3C  90 03 00 0C */ stw r0, 0xc(r3)
/* 800CB000 000C7F40  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 800CB004 000C7F44  54 00 02 53 */ rlwinm. r0, r0, 0, 9, 9
/* 800CB008 000C7F48  41 82 00 40 */ beq lbl_800CB048
/* 800CB00C 000C7F4C  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800CB010 000C7F50  38 83 61 C0 */ addi r4, r3, g_dComIfG_gameInfo@l
/* 800CB014 000C7F54  88 64 00 14 */ lbz r3, 0x14(r4)
/* 800CB018 000C7F58  38 03 FF 01 */ addi r0, r3, -255
/* 800CB01C 000C7F5C  20 00 00 00 */ subfic r0, r0, 0
/* 800CB020 000C7F60  7C 60 01 10 */ subfe r3, r0, r0
/* 800CB024 000C7F64  38 00 00 FE */ li r0, 0xfe
/* 800CB028 000C7F68  7C 1F 18 78 */ andc r31, r0, r3
/* 800CB02C 000C7F6C  88 04 00 15 */ lbz r0, 0x15(r4)
/* 800CB030 000C7F70  28 00 00 FF */ cmplwi r0, 0xff
/* 800CB034 000C7F74  41 82 00 0C */ beq lbl_800CB040
/* 800CB038 000C7F78  3B C0 00 06 */ li r30, 6
/* 800CB03C 000C7F7C  48 00 02 4C */ b lbl_800CB288
lbl_800CB040:
/* 800CB040 000C7F80  3B C0 00 FE */ li r30, 0xfe
/* 800CB044 000C7F84  48 00 02 44 */ b lbl_800CB288
lbl_800CB048:
/* 800CB048 000C7F88  A0 7D 2F E8 */ lhz r3, 0x2fe8(r29)
/* 800CB04C 000C7F8C  28 03 01 3D */ cmplwi r3, 0x13d
/* 800CB050 000C7F90  40 82 00 10 */ bne lbl_800CB060
/* 800CB054 000C7F94  8B FD 2F 92 */ lbz r31, 0x2f92(r29)
/* 800CB058 000C7F98  8B DD 2F 93 */ lbz r30, 0x2f93(r29)
/* 800CB05C 000C7F9C  48 00 02 2C */ b lbl_800CB288
lbl_800CB060:
/* 800CB060 000C7FA0  88 BD 2F 92 */ lbz r5, 0x2f92(r29)
/* 800CB064 000C7FA4  28 05 00 64 */ cmplwi r5, 0x64
/* 800CB068 000C7FA8  40 82 00 68 */ bne lbl_800CB0D0
/* 800CB06C 000C7FAC  28 03 00 DC */ cmplwi r3, 0xdc
/* 800CB070 000C7FB0  41 82 00 20 */ beq lbl_800CB090
/* 800CB074 000C7FB4  28 03 00 E9 */ cmplwi r3, 0xe9
/* 800CB078 000C7FB8  41 82 00 18 */ beq lbl_800CB090
/* 800CB07C 000C7FBC  28 03 00 2C */ cmplwi r3, 0x2c
/* 800CB080 000C7FC0  40 82 00 1C */ bne lbl_800CB09C
/* 800CB084 000C7FC4  A8 1D 30 0C */ lha r0, 0x300c(r29)
/* 800CB088 000C7FC8  2C 00 00 00 */ cmpwi r0, 0
/* 800CB08C 000C7FCC  41 82 00 10 */ beq lbl_800CB09C
lbl_800CB090:
/* 800CB090 000C7FD0  A8 1D 30 10 */ lha r0, 0x3010(r29)
/* 800CB094 000C7FD4  54 1F 06 3E */ clrlwi r31, r0, 0x18
/* 800CB098 000C7FD8  48 00 01 40 */ b lbl_800CB1D8
lbl_800CB09C:
/* 800CB09C 000C7FDC  7F A3 EB 78 */ mr r3, r29
/* 800CB0A0 000C7FE0  38 80 00 FA */ li r4, 0xfa
/* 800CB0A4 000C7FE4  4B FE 14 B5 */ bl checkUnderMove0BckNoArc__9daAlink_cCFQ29daAlink_c11daAlink_ANM
/* 800CB0A8 000C7FE8  2C 03 00 00 */ cmpwi r3, 0
/* 800CB0AC 000C7FEC  41 82 00 1C */ beq lbl_800CB0C8
/* 800CB0B0 000C7FF0  C0 3D 1F E0 */ lfs f1, 0x1fe0(r29)
/* 800CB0B4 000C7FF4  C0 02 93 44 */ lfs f0, lbl_80452D44-_SDA2_BASE_(r2)
/* 800CB0B8 000C7FF8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800CB0BC 000C7FFC  40 80 00 0C */ bge lbl_800CB0C8
/* 800CB0C0 000C8000  3B E0 00 00 */ li r31, 0
/* 800CB0C4 000C8004  48 00 01 14 */ b lbl_800CB1D8
lbl_800CB0C8:
/* 800CB0C8 000C8008  3B E0 00 02 */ li r31, 2
/* 800CB0CC 000C800C  48 00 01 0C */ b lbl_800CB1D8
lbl_800CB0D0:
/* 800CB0D0 000C8010  88 9D 2F 96 */ lbz r4, 0x2f96(r29)
/* 800CB0D4 000C8014  28 04 00 FF */ cmplwi r4, 0xff
/* 800CB0D8 000C8018  41 82 00 24 */ beq lbl_800CB0FC
/* 800CB0DC 000C801C  80 1D 05 74 */ lwz r0, 0x574(r29)
/* 800CB0E0 000C8020  54 00 02 D7 */ rlwinm. r0, r0, 0, 0xb, 0xb
/* 800CB0E4 000C8024  41 82 00 10 */ beq lbl_800CB0F4
/* 800CB0E8 000C8028  88 1D 2F 94 */ lbz r0, 0x2f94(r29)
/* 800CB0EC 000C802C  28 00 00 FF */ cmplwi r0, 0xff
/* 800CB0F0 000C8030  40 82 00 0C */ bne lbl_800CB0FC
lbl_800CB0F4:
/* 800CB0F4 000C8034  7C 9F 23 78 */ mr r31, r4
/* 800CB0F8 000C8038  48 00 00 E0 */ b lbl_800CB1D8
lbl_800CB0FC:
/* 800CB0FC 000C803C  88 1D 2F 94 */ lbz r0, 0x2f94(r29)
/* 800CB100 000C8040  28 00 00 FF */ cmplwi r0, 0xff
/* 800CB104 000C8044  41 82 00 D0 */ beq lbl_800CB1D4
/* 800CB108 000C8048  28 00 00 67 */ cmplwi r0, 0x67
/* 800CB10C 000C804C  40 82 00 24 */ bne lbl_800CB130
/* 800CB110 000C8050  7F A3 EB 78 */ mr r3, r29
/* 800CB114 000C8054  48 01 4A B5 */ bl checkBowGrabLeftHand__9daAlink_cCFv
/* 800CB118 000C8058  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800CB11C 000C805C  41 82 00 0C */ beq lbl_800CB128
/* 800CB120 000C8060  3B E0 00 00 */ li r31, 0
/* 800CB124 000C8064  48 00 00 B4 */ b lbl_800CB1D8
lbl_800CB128:
/* 800CB128 000C8068  8B FD 2F 92 */ lbz r31, 0x2f92(r29)
/* 800CB12C 000C806C  48 00 00 AC */ b lbl_800CB1D8
lbl_800CB130:
/* 800CB130 000C8070  28 00 00 65 */ cmplwi r0, 0x65
/* 800CB134 000C8074  40 82 00 34 */ bne lbl_800CB168
/* 800CB138 000C8078  A0 1D 1F 94 */ lhz r0, 0x1f94(r29)
/* 800CB13C 000C807C  28 00 00 C7 */ cmplwi r0, 0xc7
/* 800CB140 000C8080  40 82 00 0C */ bne lbl_800CB14C
/* 800CB144 000C8084  3B E0 00 00 */ li r31, 0
/* 800CB148 000C8088  48 00 00 90 */ b lbl_800CB1D8
lbl_800CB14C:
/* 800CB14C 000C808C  A8 1D 30 18 */ lha r0, 0x3018(r29)
/* 800CB150 000C8090  2C 00 00 01 */ cmpwi r0, 1
/* 800CB154 000C8094  40 82 00 0C */ bne lbl_800CB160
/* 800CB158 000C8098  3B E0 00 04 */ li r31, 4
/* 800CB15C 000C809C  48 00 00 7C */ b lbl_800CB1D8
lbl_800CB160:
/* 800CB160 000C80A0  3B E0 00 02 */ li r31, 2
/* 800CB164 000C80A4  48 00 00 74 */ b lbl_800CB1D8
lbl_800CB168:
/* 800CB168 000C80A8  28 00 00 00 */ cmplwi r0, 0
/* 800CB16C 000C80AC  40 82 00 14 */ bne lbl_800CB180
/* 800CB170 000C80B0  28 03 00 54 */ cmplwi r3, 0x54
/* 800CB174 000C80B4  40 82 00 0C */ bne lbl_800CB180
/* 800CB178 000C80B8  7C BF 2B 78 */ mr r31, r5
/* 800CB17C 000C80BC  48 00 00 5C */ b lbl_800CB1D8
lbl_800CB180:
/* 800CB180 000C80C0  28 00 00 00 */ cmplwi r0, 0
/* 800CB184 000C80C4  40 82 00 48 */ bne lbl_800CB1CC
/* 800CB188 000C80C8  A0 1D 2F DC */ lhz r0, 0x2fdc(r29)
/* 800CB18C 000C80CC  28 00 01 03 */ cmplwi r0, 0x103
/* 800CB190 000C80D0  40 82 00 3C */ bne lbl_800CB1CC
/* 800CB194 000C80D4  7F A3 EB 78 */ mr r3, r29
/* 800CB198 000C80D8  81 9D 06 28 */ lwz r12, 0x628(r29)
/* 800CB19C 000C80DC  81 8C 01 88 */ lwz r12, 0x188(r12)
/* 800CB1A0 000C80E0  7D 89 03 A6 */ mtctr r12
/* 800CB1A4 000C80E4  4E 80 04 21 */ bctrl
/* 800CB1A8 000C80E8  28 03 00 00 */ cmplwi r3, 0
/* 800CB1AC 000C80EC  40 82 00 18 */ bne lbl_800CB1C4
/* 800CB1B0 000C80F0  7F A3 EB 78 */ mr r3, r29
/* 800CB1B4 000C80F4  38 80 01 18 */ li r4, 0x118
/* 800CB1B8 000C80F8  4B FE 13 A1 */ bl checkUnderMove0BckNoArc__9daAlink_cCFQ29daAlink_c11daAlink_ANM
/* 800CB1BC 000C80FC  2C 03 00 00 */ cmpwi r3, 0
/* 800CB1C0 000C8100  41 82 00 0C */ beq lbl_800CB1CC
lbl_800CB1C4:
/* 800CB1C4 000C8104  3B E0 00 02 */ li r31, 2
/* 800CB1C8 000C8108  48 00 00 10 */ b lbl_800CB1D8
lbl_800CB1CC:
/* 800CB1CC 000C810C  8B FD 2F 94 */ lbz r31, 0x2f94(r29)
/* 800CB1D0 000C8110  48 00 00 08 */ b lbl_800CB1D8
lbl_800CB1D4:
/* 800CB1D4 000C8114  7C BF 2B 78 */ mr r31, r5
lbl_800CB1D8:
/* 800CB1D8 000C8118  88 1D 05 68 */ lbz r0, 0x568(r29)
/* 800CB1DC 000C811C  28 00 00 20 */ cmplwi r0, 0x20
/* 800CB1E0 000C8120  41 82 00 0C */ beq lbl_800CB1EC
/* 800CB1E4 000C8124  28 00 00 27 */ cmplwi r0, 0x27
/* 800CB1E8 000C8128  40 82 00 18 */ bne lbl_800CB200
lbl_800CB1EC:
/* 800CB1EC 000C812C  A0 1D 2F E8 */ lhz r0, 0x2fe8(r29)
/* 800CB1F0 000C8130  28 00 00 DC */ cmplwi r0, 0xdc
/* 800CB1F4 000C8134  41 82 00 0C */ beq lbl_800CB200
/* 800CB1F8 000C8138  3B C0 00 05 */ li r30, 5
/* 800CB1FC 000C813C  48 00 00 8C */ b lbl_800CB288
lbl_800CB200:
/* 800CB200 000C8140  88 7D 2F 97 */ lbz r3, 0x2f97(r29)
/* 800CB204 000C8144  28 03 00 FF */ cmplwi r3, 0xff
/* 800CB208 000C8148  41 82 00 30 */ beq lbl_800CB238
/* 800CB20C 000C814C  80 1D 05 74 */ lwz r0, 0x574(r29)
/* 800CB210 000C8150  54 00 02 D7 */ rlwinm. r0, r0, 0, 0xb, 0xb
/* 800CB214 000C8154  41 82 00 1C */ beq lbl_800CB230
/* 800CB218 000C8158  88 1D 2F 95 */ lbz r0, 0x2f95(r29)
/* 800CB21C 000C815C  28 00 00 FF */ cmplwi r0, 0xff
/* 800CB220 000C8160  40 82 00 18 */ bne lbl_800CB238
/* 800CB224 000C8164  80 1D 2E 50 */ lwz r0, 0x2e50(r29)
/* 800CB228 000C8168  54 00 04 21 */ rlwinm. r0, r0, 0, 0x10, 0x10
/* 800CB22C 000C816C  41 82 00 0C */ beq lbl_800CB238
lbl_800CB230:
/* 800CB230 000C8170  7C 7E 1B 78 */ mr r30, r3
/* 800CB234 000C8174  48 00 00 54 */ b lbl_800CB288
lbl_800CB238:
/* 800CB238 000C8178  88 1D 2F 95 */ lbz r0, 0x2f95(r29)
/* 800CB23C 000C817C  28 00 00 FF */ cmplwi r0, 0xff
/* 800CB240 000C8180  41 82 00 30 */ beq lbl_800CB270
/* 800CB244 000C8184  28 00 00 65 */ cmplwi r0, 0x65
/* 800CB248 000C8188  40 82 00 20 */ bne lbl_800CB268
/* 800CB24C 000C818C  A8 1D 30 18 */ lha r0, 0x3018(r29)
/* 800CB250 000C8190  2C 00 00 01 */ cmpwi r0, 1
/* 800CB254 000C8194  40 82 00 0C */ bne lbl_800CB260
/* 800CB258 000C8198  3B C0 00 05 */ li r30, 5
/* 800CB25C 000C819C  48 00 00 2C */ b lbl_800CB288
lbl_800CB260:
/* 800CB260 000C81A0  8B DD 2F 93 */ lbz r30, 0x2f93(r29)
/* 800CB264 000C81A4  48 00 00 24 */ b lbl_800CB288
lbl_800CB268:
/* 800CB268 000C81A8  7C 1E 03 78 */ mr r30, r0
/* 800CB26C 000C81AC  48 00 00 1C */ b lbl_800CB288
lbl_800CB270:
/* 800CB270 000C81B0  80 1D 2E 50 */ lwz r0, 0x2e50(r29)
/* 800CB274 000C81B4  54 00 04 21 */ rlwinm. r0, r0, 0, 0x10, 0x10
/* 800CB278 000C81B8  40 82 00 0C */ bne lbl_800CB284
/* 800CB27C 000C81BC  3B C0 00 06 */ li r30, 6
/* 800CB280 000C81C0  48 00 00 08 */ b lbl_800CB288
lbl_800CB284:
/* 800CB284 000C81C4  8B DD 2F 93 */ lbz r30, 0x2f93(r29)
lbl_800CB288:
/* 800CB288 000C81C8  80 7D 06 50 */ lwz r3, 0x650(r29)
/* 800CB28C 000C81CC  38 63 00 24 */ addi r3, r3, 0x24
/* 800CB290 000C81D0  80 9D 06 5C */ lwz r4, 0x65c(r29)
/* 800CB294 000C81D4  38 84 00 24 */ addi r4, r4, 0x24
/* 800CB298 000C81D8  48 27 B2 19 */ bl PSMTXCopy
/* 800CB29C 000C81DC  80 7D 06 5C */ lwz r3, 0x65c(r29)
/* 800CB2A0 000C81E0  81 83 00 00 */ lwz r12, 0(r3)
/* 800CB2A4 000C81E4  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 800CB2A8 000C81E8  7D 89 03 A6 */ mtctr r12
/* 800CB2AC 000C81EC  4E 80 04 21 */ bctrl
/* 800CB2B0 000C81F0  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 800CB2B4 000C81F4  28 00 00 FE */ cmplwi r0, 0xfe
/* 800CB2B8 000C81F8  41 82 00 0C */ beq lbl_800CB2C4
/* 800CB2BC 000C81FC  28 00 00 FB */ cmplwi r0, 0xfb
/* 800CB2C0 000C8200  40 82 00 10 */ bne lbl_800CB2D0
lbl_800CB2C4:
/* 800CB2C4 000C8204  80 1D 06 D8 */ lwz r0, 0x6d8(r29)
/* 800CB2C8 000C8208  90 1D 06 D0 */ stw r0, 0x6d0(r29)
/* 800CB2CC 000C820C  48 00 00 44 */ b lbl_800CB310
lbl_800CB2D0:
/* 800CB2D0 000C8210  80 7D 06 5C */ lwz r3, 0x65c(r29)
/* 800CB2D4 000C8214  80 63 00 04 */ lwz r3, 4(r3)
/* 800CB2D8 000C8218  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CB2DC 000C821C  57 E0 15 BA */ rlwinm r0, r31, 2, 0x16, 0x1d
/* 800CB2E0 000C8220  7C 63 00 2E */ lwzx r3, r3, r0
/* 800CB2E4 000C8224  80 03 00 08 */ lwz r0, 8(r3)
/* 800CB2E8 000C8228  90 1D 06 D0 */ stw r0, 0x6d0(r29)
/* 800CB2EC 000C822C  80 7D 06 50 */ lwz r3, 0x650(r29)
/* 800CB2F0 000C8230  80 63 00 84 */ lwz r3, 0x84(r3)
/* 800CB2F4 000C8234  80 63 00 0C */ lwz r3, 0xc(r3)
/* 800CB2F8 000C8238  38 63 01 B0 */ addi r3, r3, 0x1b0
/* 800CB2FC 000C823C  80 9D 06 5C */ lwz r4, 0x65c(r29)
/* 800CB300 000C8240  80 84 00 84 */ lwz r4, 0x84(r4)
/* 800CB304 000C8244  80 84 00 0C */ lwz r4, 0xc(r4)
/* 800CB308 000C8248  38 84 00 30 */ addi r4, r4, 0x30
/* 800CB30C 000C824C  48 27 B1 A5 */ bl PSMTXCopy
lbl_800CB310:
/* 800CB310 000C8250  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 800CB314 000C8254  28 00 00 FB */ cmplwi r0, 0xfb
/* 800CB318 000C8258  40 82 00 64 */ bne lbl_800CB37C
/* 800CB31C 000C825C  80 7D 06 50 */ lwz r3, 0x650(r29)
/* 800CB320 000C8260  80 63 00 84 */ lwz r3, 0x84(r3)
/* 800CB324 000C8264  80 63 00 0C */ lwz r3, 0xc(r3)
/* 800CB328 000C8268  38 63 01 B0 */ addi r3, r3, 0x1b0
/* 800CB32C 000C826C  80 9D 06 A0 */ lwz r4, 0x6a0(r29)
/* 800CB330 000C8270  38 84 00 24 */ addi r4, r4, 0x24
/* 800CB334 000C8274  48 27 B1 7D */ bl PSMTXCopy
/* 800CB338 000C8278  80 7D 06 A4 */ lwz r3, 0x6a4(r29)
/* 800CB33C 000C827C  28 03 00 00 */ cmplwi r3, 0
/* 800CB340 000C8280  41 82 00 14 */ beq lbl_800CB354
/* 800CB344 000C8284  80 9D 06 A0 */ lwz r4, 0x6a0(r29)
/* 800CB348 000C8288  80 84 00 04 */ lwz r4, 4(r4)
/* 800CB34C 000C828C  C0 23 00 10 */ lfs f1, 0x10(r3)
/* 800CB350 000C8290  4B F4 26 7D */ bl entry__13mDoExt_bckAnmFP12J3DModelDataf
lbl_800CB354:
/* 800CB354 000C8294  80 7D 06 A0 */ lwz r3, 0x6a0(r29)
/* 800CB358 000C8298  81 83 00 00 */ lwz r12, 0(r3)
/* 800CB35C 000C829C  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 800CB360 000C82A0  7D 89 03 A6 */ mtctr r12
/* 800CB364 000C82A4  4E 80 04 21 */ bctrl
/* 800CB368 000C82A8  80 7D 06 D0 */ lwz r3, 0x6d0(r29)
/* 800CB36C 000C82AC  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800CB370 000C82B0  60 00 00 01 */ ori r0, r0, 1
/* 800CB374 000C82B4  90 03 00 0C */ stw r0, 0xc(r3)
/* 800CB378 000C82B8  48 00 00 14 */ b lbl_800CB38C
lbl_800CB37C:
/* 800CB37C 000C82BC  80 7D 06 D0 */ lwz r3, 0x6d0(r29)
/* 800CB380 000C82C0  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800CB384 000C82C4  54 00 00 3C */ rlwinm r0, r0, 0, 0, 0x1e
/* 800CB388 000C82C8  90 03 00 0C */ stw r0, 0xc(r3)
lbl_800CB38C:
/* 800CB38C 000C82CC  57 C0 06 3E */ clrlwi r0, r30, 0x18
/* 800CB390 000C82D0  28 00 00 FE */ cmplwi r0, 0xfe
/* 800CB394 000C82D4  41 82 00 0C */ beq lbl_800CB3A0
/* 800CB398 000C82D8  28 00 00 FB */ cmplwi r0, 0xfb
/* 800CB39C 000C82DC  40 82 00 10 */ bne lbl_800CB3AC
lbl_800CB3A0:
/* 800CB3A0 000C82E0  80 1D 06 DC */ lwz r0, 0x6dc(r29)
/* 800CB3A4 000C82E4  90 1D 06 D4 */ stw r0, 0x6d4(r29)
/* 800CB3A8 000C82E8  48 00 00 44 */ b lbl_800CB3EC
lbl_800CB3AC:
/* 800CB3AC 000C82EC  80 7D 06 5C */ lwz r3, 0x65c(r29)
/* 800CB3B0 000C82F0  80 63 00 04 */ lwz r3, 4(r3)
/* 800CB3B4 000C82F4  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CB3B8 000C82F8  57 C0 15 BA */ rlwinm r0, r30, 2, 0x16, 0x1d
/* 800CB3BC 000C82FC  7C 63 00 2E */ lwzx r3, r3, r0
/* 800CB3C0 000C8300  80 03 00 08 */ lwz r0, 8(r3)
/* 800CB3C4 000C8304  90 1D 06 D4 */ stw r0, 0x6d4(r29)
/* 800CB3C8 000C8308  80 7D 06 50 */ lwz r3, 0x650(r29)
/* 800CB3CC 000C830C  80 63 00 84 */ lwz r3, 0x84(r3)
/* 800CB3D0 000C8310  80 63 00 0C */ lwz r3, 0xc(r3)
/* 800CB3D4 000C8314  38 63 02 A0 */ addi r3, r3, 0x2a0
/* 800CB3D8 000C8318  80 9D 06 5C */ lwz r4, 0x65c(r29)
/* 800CB3DC 000C831C  80 84 00 84 */ lwz r4, 0x84(r4)
/* 800CB3E0 000C8320  80 84 00 0C */ lwz r4, 0xc(r4)
/* 800CB3E4 000C8324  38 84 00 60 */ addi r4, r4, 0x60
/* 800CB3E8 000C8328  48 27 B0 C9 */ bl PSMTXCopy
lbl_800CB3EC:
/* 800CB3EC 000C832C  57 C0 06 3E */ clrlwi r0, r30, 0x18
/* 800CB3F0 000C8330  28 00 00 FB */ cmplwi r0, 0xfb
/* 800CB3F4 000C8334  40 82 00 64 */ bne lbl_800CB458
/* 800CB3F8 000C8338  80 7D 06 50 */ lwz r3, 0x650(r29)
/* 800CB3FC 000C833C  80 63 00 84 */ lwz r3, 0x84(r3)
/* 800CB400 000C8340  80 63 00 0C */ lwz r3, 0xc(r3)
/* 800CB404 000C8344  38 63 02 A0 */ addi r3, r3, 0x2a0
/* 800CB408 000C8348  80 9D 06 A8 */ lwz r4, 0x6a8(r29)
/* 800CB40C 000C834C  38 84 00 24 */ addi r4, r4, 0x24
/* 800CB410 000C8350  48 27 B0 A1 */ bl PSMTXCopy
/* 800CB414 000C8354  80 7D 06 AC */ lwz r3, 0x6ac(r29)
/* 800CB418 000C8358  28 03 00 00 */ cmplwi r3, 0
/* 800CB41C 000C835C  41 82 00 14 */ beq lbl_800CB430
/* 800CB420 000C8360  80 9D 06 A8 */ lwz r4, 0x6a8(r29)
/* 800CB424 000C8364  80 84 00 04 */ lwz r4, 4(r4)
/* 800CB428 000C8368  C0 23 00 10 */ lfs f1, 0x10(r3)
/* 800CB42C 000C836C  4B F4 25 A1 */ bl entry__13mDoExt_bckAnmFP12J3DModelDataf
lbl_800CB430:
/* 800CB430 000C8370  80 7D 06 A8 */ lwz r3, 0x6a8(r29)
/* 800CB434 000C8374  81 83 00 00 */ lwz r12, 0(r3)
/* 800CB438 000C8378  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 800CB43C 000C837C  7D 89 03 A6 */ mtctr r12
/* 800CB440 000C8380  4E 80 04 21 */ bctrl
/* 800CB444 000C8384  80 7D 06 D4 */ lwz r3, 0x6d4(r29)
/* 800CB448 000C8388  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800CB44C 000C838C  60 00 00 01 */ ori r0, r0, 1
/* 800CB450 000C8390  90 03 00 0C */ stw r0, 0xc(r3)
/* 800CB454 000C8394  48 00 00 14 */ b lbl_800CB468
lbl_800CB458:
/* 800CB458 000C8398  80 7D 06 D4 */ lwz r3, 0x6d4(r29)
/* 800CB45C 000C839C  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800CB460 000C83A0  54 00 00 3C */ rlwinm r0, r0, 0, 0, 0x1e
/* 800CB464 000C83A4  90 03 00 0C */ stw r0, 0xc(r3)
lbl_800CB468:
/* 800CB468 000C83A8  39 61 00 20 */ addi r11, r1, 0x20
/* 800CB46C 000C83AC  48 29 6D BD */ bl _restgpr_29
/* 800CB470 000C83B0  80 01 00 24 */ lwz r0, 0x24(r1)
/* 800CB474 000C83B4  7C 08 03 A6 */ mtlr r0
/* 800CB478 000C83B8  38 21 00 20 */ addi r1, r1, 0x20
/* 800CB47C 000C83BC  4E 80 00 20 */ blr
