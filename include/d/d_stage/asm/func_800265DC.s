/* 800265DC 0002351C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800265E0 00023520  7C 08 02 A6 */ mflr r0
/* 800265E4 00023524  90 01 00 14 */ stw r0, 0x14(r1)
/* 800265E8 00023528  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800265EC 0002352C  7C 7F 1B 78 */ mr r31, r3
/* 800265F0 00023530  81 83 00 00 */ lwz r12, 0(r3)
/* 800265F4 00023534  81 8C 01 28 */ lwz r12, 0x128(r12)
/* 800265F8 00023538  7D 89 03 A6 */ mtctr r12
/* 800265FC 0002353C  38 84 00 04 */ addi r4, r4, 4
/* 80026600 00023540  4E 80 04 21 */ bctrl
/* 80026604 00023544  4B FF DA 65 */ bl dStage_initRoomKeepDoorInfo__Fv
/* 80026608 00023548  7F E3 FB 78 */ mr r3, r31
/* 8002660C 0002354C  81 9F 00 00 */ lwz r12, 0(r31)
/* 80026610 00023550  81 8C 01 2C */ lwz r12, 0x12c(r12)
/* 80026614 00023554  7D 89 03 A6 */ mtctr r12
/* 80026618 00023558  4E 80 04 21 */ bctrl
/* 8002661C 0002355C  7C 64 1B 78 */ mr r4, r3
/* 80026620 00023560  7F E3 FB 78 */ mr r3, r31
/* 80026624 00023564  38 A0 00 00 */ li r5, 0
/* 80026628 00023568  4B FF FE 35 */ bl readMult__FP11dStage_dt_cP14dStage_Multi_cb
/* 8002662C 0002356C  7F E3 FB 78 */ mr r3, r31
/* 80026630 00023570  81 9F 00 00 */ lwz r12, 0(r31)
/* 80026634 00023574  81 8C 01 38 */ lwz r12, 0x138(r12)
/* 80026638 00023578  7D 89 03 A6 */ mtctr r12
/* 8002663C 0002357C  4E 80 04 21 */ bctrl
/* 80026640 00023580  7C 64 1B 78 */ mr r4, r3
/* 80026644 00023584  7F E3 FB 78 */ mr r3, r31
/* 80026648 00023588  38 A0 00 01 */ li r5, 1
/* 8002664C 0002358C  4B FF FE 11 */ bl readMult__FP11dStage_dt_cP14dStage_Multi_cb
/* 80026650 00023590  38 00 FF FF */ li r0, -1
/* 80026654 00023594  98 1F 00 04 */ stb r0, 4(r31)
/* 80026658 00023598  38 60 00 01 */ li r3, 1
/* 8002665C 0002359C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80026660 000235A0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80026664 000235A4  7C 08 03 A6 */ mtlr r0
/* 80026668 000235A8  38 21 00 10 */ addi r1, r1, 0x10
/* 8002666C 000235AC  4E 80 00 20 */ blr