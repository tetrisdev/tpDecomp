/* 8001EC00 0001BB40  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8001EC04 0001BB44  7C 08 02 A6 */ mflr r0
/* 8001EC08 0001BB48  90 01 00 14 */ stw r0, 0x14(r1)
/* 8001EC0C 0001BB4C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8001EC10 0001BB50  7C 7F 1B 78 */ mr r31, r3
/* 8001EC14 0001BB54  88 03 00 0C */ lbz r0, 0xc(r3)
/* 8001EC18 0001BB58  7C 00 07 75 */ extsb. r0, r0
/* 8001EC1C 0001BB5C  40 82 00 38 */ bne lbl_8001EC54
/* 8001EC20 0001BB60  80 7F 00 10 */ lwz r3, 0x10(r31)
/* 8001EC24 0001BB64  80 03 00 20 */ lwz r0, 0x20(r3)
/* 8001EC28 0001BB68  90 1F 01 AC */ stw r0, 0x1ac(r31)
/* 8001EC2C 0001BB6C  38 7F 01 B0 */ addi r3, r31, 0x1b0
/* 8001EC30 0001BB70  7F E4 FB 78 */ mr r4, r31
/* 8001EC34 0001BB74  48 00 05 55 */ bl fopScnTg_Init
/* 8001EC38 0001BB78  38 7F 01 B0 */ addi r3, r31, 0x1b0
/* 8001EC3C 0001BB7C  48 00 05 21 */ bl fopScnTg_ToQueue
/* 8001EC40 0001BB80  80 7F 00 AC */ lwz r3, 0xac(r31)
/* 8001EC44 0001BB84  28 03 00 00 */ cmplwi r3, 0
/* 8001EC48 0001BB88  41 82 00 0C */ beq lbl_8001EC54
/* 8001EC4C 0001BB8C  80 03 00 00 */ lwz r0, 0(r3)
/* 8001EC50 0001BB90  90 1F 00 B0 */ stw r0, 0xb0(r31)
lbl_8001EC54:
/* 8001EC54 0001BB94  80 7F 01 AC */ lwz r3, 0x1ac(r31)
/* 8001EC58 0001BB98  7F E4 FB 78 */ mr r4, r31
/* 8001EC5C 0001BB9C  48 00 38 71 */ bl fpcMtd_Create
/* 8001EC60 0001BBA0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8001EC64 0001BBA4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8001EC68 0001BBA8  7C 08 03 A6 */ mtlr r0
/* 8001EC6C 0001BBAC  38 21 00 10 */ addi r1, r1, 0x10
/* 8001EC70 0001BBB0  4E 80 00 20 */ blr
