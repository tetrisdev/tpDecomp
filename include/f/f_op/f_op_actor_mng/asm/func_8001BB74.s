/* 8001BB74 00018AB4  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 8001BB78 00018AB8  7C 08 02 A6 */ mflr r0
/* 8001BB7C 00018ABC  90 01 00 24 */ stw r0, 0x24(r1)
/* 8001BB80 00018AC0  39 61 00 20 */ addi r11, r1, 0x20
/* 8001BB84 00018AC4  48 34 66 59 */ bl _savegpr_29
/* 8001BB88 00018AC8  7C 7D 1B 78 */ mr r29, r3
/* 8001BB8C 00018ACC  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8001BB90 00018AD0  3B E3 61 C0 */ addi r31, r3, g_dComIfG_gameInfo@l
/* 8001BB94 00018AD4  3B DF 4E C8 */ addi r30, r31, 0x4ec8
/* 8001BB98 00018AD8  7F C3 F3 78 */ mr r3, r30
/* 8001BB9C 00018ADC  80 9F 4F 8C */ lwz r4, 0x4f8c(r31)
/* 8001BBA0 00018AE0  48 02 77 4D */ bl convPId__14dEvt_control_cFUi
/* 8001BBA4 00018AE4  7C 03 E8 40 */ cmplw r3, r29
/* 8001BBA8 00018AE8  41 82 00 14 */ beq lbl_8001BBBC
/* 8001BBAC 00018AEC  7F C3 F3 78 */ mr r3, r30
/* 8001BBB0 00018AF0  80 9F 4F 8C */ lwz r4, 0x4f8c(r31)
/* 8001BBB4 00018AF4  48 02 77 39 */ bl convPId__14dEvt_control_cFUi
/* 8001BBB8 00018AF8  48 00 00 18 */ b lbl_8001BBD0
lbl_8001BBBC:
/* 8001BBBC 00018AFC  7F C3 F3 78 */ mr r3, r30
/* 8001BBC0 00018B00  3C 80 80 40 */ lis r4, g_dComIfG_gameInfo@ha
/* 8001BBC4 00018B04  38 84 61 C0 */ addi r4, r4, g_dComIfG_gameInfo@l
/* 8001BBC8 00018B08  80 84 4F 90 */ lwz r4, 0x4f90(r4)
/* 8001BBCC 00018B0C  48 02 77 21 */ bl convPId__14dEvt_control_cFUi
lbl_8001BBD0:
/* 8001BBD0 00018B10  39 61 00 20 */ addi r11, r1, 0x20
/* 8001BBD4 00018B14  48 34 66 55 */ bl _restgpr_29
/* 8001BBD8 00018B18  80 01 00 24 */ lwz r0, 0x24(r1)
/* 8001BBDC 00018B1C  7C 08 03 A6 */ mtlr r0
/* 8001BBE0 00018B20  38 21 00 20 */ addi r1, r1, 0x20
/* 8001BBE4 00018B24  4E 80 00 20 */ blr
