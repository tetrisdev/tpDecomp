/* 801372B4 001341F4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 801372B8 001341F8  7C 08 02 A6 */ mflr r0
/* 801372BC 001341FC  90 01 00 14 */ stw r0, 0x14(r1)
/* 801372C0 00134200  93 E1 00 0C */ stw r31, 0xc(r1)
/* 801372C4 00134204  7C 7F 1B 78 */ mr r31, r3
/* 801372C8 00134208  38 80 00 00 */ li r4, 0
/* 801372CC 0013420C  4B FF 28 79 */ bl checkNextActionWolf__9daAlink_cFi
/* 801372D0 00134210  2C 03 00 00 */ cmpwi r3, 0
/* 801372D4 00134214  41 82 00 44 */ beq lbl_80137318
/* 801372D8 00134218  88 1F 2F 8C */ lbz r0, 0x2f8c(r31)
/* 801372DC 0013421C  28 00 00 01 */ cmplwi r0, 1
/* 801372E0 00134220  41 82 00 14 */ beq lbl_801372F4
/* 801372E4 00134224  28 00 00 02 */ cmplwi r0, 2
/* 801372E8 00134228  41 82 00 0C */ beq lbl_801372F4
/* 801372EC 0013422C  28 00 00 03 */ cmplwi r0, 3
/* 801372F0 00134230  40 82 00 20 */ bne lbl_80137310
lbl_801372F4:
/* 801372F4 00134234  80 7F 20 60 */ lwz r3, 0x2060(r31)
/* 801372F8 00134238  3C 80 80 39 */ lis r4, lbl_8038F138@ha
/* 801372FC 0013423C  38 84 F1 38 */ addi r4, r4, lbl_8038F138@l
/* 80137300 00134240  C0 24 00 30 */ lfs f1, 0x30(r4)
/* 80137304 00134244  38 80 00 00 */ li r4, 0
/* 80137308 00134248  38 A0 00 28 */ li r5, 0x28
/* 8013730C 0013424C  4B ED 85 3D */ bl initOldFrameMorf__22mDoExt_MtxCalcOldFrameFfUsUs
lbl_80137310:
/* 80137310 00134250  38 60 00 01 */ li r3, 1
/* 80137314 00134254  48 00 00 08 */ b lbl_8013731C
lbl_80137318:
/* 80137318 00134258  38 60 00 00 */ li r3, 0
lbl_8013731C:
/* 8013731C 0013425C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80137320 00134260  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80137324 00134264  7C 08 03 A6 */ mtlr r0
/* 80137328 00134268  38 21 00 10 */ addi r1, r1, 0x10
/* 8013732C 0013426C  4E 80 00 20 */ blr
