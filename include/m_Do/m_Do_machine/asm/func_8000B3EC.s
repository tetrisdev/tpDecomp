/* 8000B3EC 0000832C  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 8000B3F0 00008330  7C 08 02 A6 */ mflr r0
/* 8000B3F4 00008334  90 01 00 34 */ stw r0, 0x34(r1)
/* 8000B3F8 00008338  39 61 00 30 */ addi r11, r1, 0x30
/* 8000B3FC 0000833C  48 35 6D DD */ bl _savegpr_28
/* 8000B400 00008340  7C 7F 1B 78 */ mr r31, r3
/* 8000B404 00008344  7C 9E 23 78 */ mr r30, r4
/* 8000B408 00008348  7C BD 2B 78 */ mr r29, r5
/* 8000B40C 0000834C  3B 80 00 01 */ li r28, 1
/* 8000B410 00008350  81 83 00 00 */ lwz r12, 0(r3)
/* 8000B414 00008354  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 8000B418 00008358  7D 89 03 A6 */ mtctr r12
/* 8000B41C 0000835C  4E 80 04 21 */ bctrl
/* 8000B420 00008360  3C 03 AC B4 */ addis r0, r3, 0xacb4
/* 8000B424 00008364  28 00 49 44 */ cmplwi r0, 0x4944
/* 8000B428 00008368  40 82 00 08 */ bne lbl_8000B430
/* 8000B42C 0000836C  3B 80 00 00 */ li r28, 0
lbl_8000B430:
/* 8000B430 00008370  2C 1C 00 00 */ cmpwi r28, 0
/* 8000B434 00008374  41 82 00 28 */ beq lbl_8000B45C
/* 8000B438 00008378  3C 60 80 37 */ lis r3, lbl_80373DE8@ha
/* 8000B43C 0000837C  38 63 3D E8 */ addi r3, r3, lbl_80373DE8@l
/* 8000B440 00008380  38 63 00 6A */ addi r3, r3, 0x6a
/* 8000B444 00008384  7F C4 F3 78 */ mr r4, r30
/* 8000B448 00008388  7F C5 F3 78 */ mr r5, r30
/* 8000B44C 0000838C  7F A6 EB 78 */ mr r6, r29
/* 8000B450 00008390  7F E7 FB 78 */ mr r7, r31
/* 8000B454 00008394  4C C6 31 82 */ crclr 6
/* 8000B458 00008398  4B FF B7 B5 */ bl OSReport_Error
lbl_8000B45C:
/* 8000B45C 0000839C  7F E3 FB 78 */ mr r3, r31
/* 8000B460 000083A0  81 9F 00 00 */ lwz r12, 0(r31)
/* 8000B464 000083A4  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 8000B468 000083A8  7D 89 03 A6 */ mtctr r12
/* 8000B46C 000083AC  4E 80 04 21 */ bctrl
/* 8000B470 000083B0  90 61 00 10 */ stw r3, 0x10(r1)
/* 8000B474 000083B4  2C 1C 00 00 */ cmpwi r28, 0
/* 8000B478 000083B8  41 82 00 60 */ beq lbl_8000B4D8
/* 8000B47C 000083BC  83 9F 00 38 */ lwz r28, 0x38(r31)
/* 8000B480 000083C0  7F E3 FB 78 */ mr r3, r31
/* 8000B484 000083C4  4B FF FD 69 */ bl myGetHeapTypeByString__FP7JKRHeap
/* 8000B488 000083C8  7C 7D 1B 78 */ mr r29, r3
/* 8000B48C 000083CC  7F E3 FB 78 */ mr r3, r31
/* 8000B490 000083D0  48 2C 32 F5 */ bl getTotalFreeSize__7JKRHeapCFv
/* 8000B494 000083D4  7C 7E 1B 78 */ mr r30, r3
/* 8000B498 000083D8  7F E3 FB 78 */ mr r3, r31
/* 8000B49C 000083DC  48 2C 32 91 */ bl getFreeSize__7JKRHeapCFv
/* 8000B4A0 000083E0  7C 64 1B 78 */ mr r4, r3
/* 8000B4A4 000083E4  93 81 00 08 */ stw r28, 8(r1)
/* 8000B4A8 000083E8  93 A1 00 0C */ stw r29, 0xc(r1)
/* 8000B4AC 000083EC  3C 60 80 37 */ lis r3, lbl_80373DE8@ha
/* 8000B4B0 000083F0  38 63 3D E8 */ addi r3, r3, lbl_80373DE8@l
/* 8000B4B4 000083F4  38 63 00 BB */ addi r3, r3, 0xbb
/* 8000B4B8 000083F8  7F C5 F3 78 */ mr r5, r30
/* 8000B4BC 000083FC  80 C1 00 10 */ lwz r6, 0x10(r1)
/* 8000B4C0 00008400  88 E1 00 10 */ lbz r7, 0x10(r1)
/* 8000B4C4 00008404  89 01 00 11 */ lbz r8, 0x11(r1)
/* 8000B4C8 00008408  89 21 00 12 */ lbz r9, 0x12(r1)
/* 8000B4CC 0000840C  89 41 00 13 */ lbz r10, 0x13(r1)
/* 8000B4D0 00008410  4C C6 31 82 */ crclr 6
/* 8000B4D4 00008414  4B FF B7 39 */ bl OSReport_Error
lbl_8000B4D8:
/* 8000B4D8 00008418  80 0D 86 8C */ lwz r0, lbl_80450C0C-_SDA_BASE_(r13)
/* 8000B4DC 0000841C  28 00 00 00 */ cmplwi r0, 0
/* 8000B4E0 00008420  40 82 00 18 */ bne lbl_8000B4F8
/* 8000B4E4 00008424  7F E3 FB 78 */ mr r3, r31
/* 8000B4E8 00008428  81 9F 00 00 */ lwz r12, 0(r31)
/* 8000B4EC 0000842C  81 8C 00 18 */ lwz r12, 0x18(r12)
/* 8000B4F0 00008430  7D 89 03 A6 */ mtctr r12
/* 8000B4F4 00008434  4E 80 04 21 */ bctrl
lbl_8000B4F8:
/* 8000B4F8 00008438  80 6D 86 8C */ lwz r3, lbl_80450C0C-_SDA_BASE_(r13)
/* 8000B4FC 0000843C  38 03 00 01 */ addi r0, r3, 1
/* 8000B500 00008440  90 0D 86 8C */ stw r0, lbl_80450C0C-_SDA_BASE_(r13)
/* 8000B504 00008444  80 0D 86 AC */ lwz r0, lbl_80450C2C-_SDA_BASE_(r13)
/* 8000B508 00008448  7C 1F 00 40 */ cmplw r31, r0
/* 8000B50C 0000844C  40 82 00 14 */ bne lbl_8000B520
/* 8000B510 00008450  80 6D 86 7C */ lwz r3, lbl_80450BFC-_SDA_BASE_(r13)
/* 8000B514 00008454  38 03 00 01 */ addi r0, r3, 1
/* 8000B518 00008458  90 0D 86 7C */ stw r0, lbl_80450BFC-_SDA_BASE_(r13)
/* 8000B51C 0000845C  48 00 00 94 */ b lbl_8000B5B0
lbl_8000B520:
/* 8000B520 00008460  80 0D 86 A8 */ lwz r0, lbl_80450C28-_SDA_BASE_(r13)
/* 8000B524 00008464  7C 1F 00 40 */ cmplw r31, r0
/* 8000B528 00008468  40 82 00 14 */ bne lbl_8000B53C
/* 8000B52C 0000846C  80 6D 86 78 */ lwz r3, lbl_80450BF8-_SDA_BASE_(r13)
/* 8000B530 00008470  38 03 00 01 */ addi r0, r3, 1
/* 8000B534 00008474  90 0D 86 78 */ stw r0, lbl_80450BF8-_SDA_BASE_(r13)
/* 8000B538 00008478  48 00 00 78 */ b lbl_8000B5B0
lbl_8000B53C:
/* 8000B53C 0000847C  80 0D 86 B0 */ lwz r0, lbl_80450C30-_SDA_BASE_(r13)
/* 8000B540 00008480  7C 1F 00 40 */ cmplw r31, r0
/* 8000B544 00008484  40 82 00 14 */ bne lbl_8000B558
/* 8000B548 00008488  80 6D 86 80 */ lwz r3, lbl_80450C00-_SDA_BASE_(r13)
/* 8000B54C 0000848C  38 03 00 01 */ addi r0, r3, 1
/* 8000B550 00008490  90 0D 86 80 */ stw r0, lbl_80450C00-_SDA_BASE_(r13)
/* 8000B554 00008494  48 00 00 5C */ b lbl_8000B5B0
lbl_8000B558:
/* 8000B558 00008498  80 0D 86 B4 */ lwz r0, lbl_80450C34-_SDA_BASE_(r13)
/* 8000B55C 0000849C  7C 1F 00 40 */ cmplw r31, r0
/* 8000B560 000084A0  40 82 00 14 */ bne lbl_8000B574
/* 8000B564 000084A4  80 6D 86 84 */ lwz r3, lbl_80450C04-_SDA_BASE_(r13)
/* 8000B568 000084A8  38 03 00 01 */ addi r0, r3, 1
/* 8000B56C 000084AC  90 0D 86 84 */ stw r0, lbl_80450C04-_SDA_BASE_(r13)
/* 8000B570 000084B0  48 00 00 40 */ b lbl_8000B5B0
lbl_8000B574:
/* 8000B574 000084B4  7F E3 FB 78 */ mr r3, r31
/* 8000B578 000084B8  81 9F 00 00 */ lwz r12, 0(r31)
/* 8000B57C 000084BC  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 8000B580 000084C0  7D 89 03 A6 */ mtctr r12
/* 8000B584 000084C4  4E 80 04 21 */ bctrl
/* 8000B588 000084C8  3C 03 AC B4 */ addis r0, r3, 0xacb4
/* 8000B58C 000084CC  28 00 49 44 */ cmplwi r0, 0x4944
/* 8000B590 000084D0  40 82 00 14 */ bne lbl_8000B5A4
/* 8000B594 000084D4  80 6D 86 74 */ lwz r3, lbl_80450BF4-_SDA_BASE_(r13)
/* 8000B598 000084D8  38 03 00 01 */ addi r0, r3, 1
/* 8000B59C 000084DC  90 0D 86 74 */ stw r0, lbl_80450BF4-_SDA_BASE_(r13)
/* 8000B5A0 000084E0  48 00 00 10 */ b lbl_8000B5B0
lbl_8000B5A4:
/* 8000B5A4 000084E4  80 6D 86 88 */ lwz r3, lbl_80450C08-_SDA_BASE_(r13)
/* 8000B5A8 000084E8  38 03 00 01 */ addi r0, r3, 1
/* 8000B5AC 000084EC  90 0D 86 88 */ stw r0, lbl_80450C08-_SDA_BASE_(r13)
lbl_8000B5B0:
/* 8000B5B0 000084F0  39 61 00 30 */ addi r11, r1, 0x30
/* 8000B5B4 000084F4  48 35 6C 71 */ bl _restgpr_28
/* 8000B5B8 000084F8  80 01 00 34 */ lwz r0, 0x34(r1)
/* 8000B5BC 000084FC  7C 08 03 A6 */ mtlr r0
/* 8000B5C0 00008500  38 21 00 30 */ addi r1, r1, 0x30
/* 8000B5C4 00008504  4E 80 00 20 */ blr
