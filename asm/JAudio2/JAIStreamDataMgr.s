.include "macros.inc"

.section .text, "ax" # 802a3ad8


.global __dt__16JAIStreamDataMgrFv
__dt__16JAIStreamDataMgrFv:
/* 802A3AD8 002A0A18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A3ADC 002A0A1C  7C 08 02 A6 */	mflr r0
/* 802A3AE0 002A0A20  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A3AE4 002A0A24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A3AE8 002A0A28  7C 7F 1B 79 */	or. r31, r3, r3
/* 802A3AEC 002A0A2C  41 82 00 1C */	beq lbl_802A3B08
/* 802A3AF0 002A0A30  3C A0 80 3D */	lis r5, lbl_803C9A1C@ha
/* 802A3AF4 002A0A34  38 05 9A 1C */	addi r0, r5, lbl_803C9A1C@l
/* 802A3AF8 002A0A38  90 1F 00 00 */	stw r0, 0(r31)
/* 802A3AFC 002A0A3C  7C 80 07 35 */	extsh. r0, r4
/* 802A3B00 002A0A40  40 81 00 08 */	ble lbl_802A3B08
/* 802A3B04 002A0A44  48 02 B2 39 */	bl __dl__FPv
lbl_802A3B08:
/* 802A3B08 002A0A48  7F E3 FB 78 */	mr r3, r31
/* 802A3B0C 002A0A4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A3B10 002A0A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A3B14 002A0A54  7C 08 03 A6 */	mtlr r0
/* 802A3B18 002A0A58  38 21 00 10 */	addi r1, r1, 0x10
/* 802A3B1C 002A0A5C  4E 80 00 20 */	blr 

.global __dt__16JAIStreamAramMgrFv
__dt__16JAIStreamAramMgrFv:
/* 802A3B20 002A0A60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A3B24 002A0A64  7C 08 02 A6 */	mflr r0
/* 802A3B28 002A0A68  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A3B2C 002A0A6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A3B30 002A0A70  7C 7F 1B 79 */	or. r31, r3, r3
/* 802A3B34 002A0A74  41 82 00 1C */	beq lbl_802A3B50
/* 802A3B38 002A0A78  3C A0 80 3D */	lis r5, lbl_803C9A08@ha
/* 802A3B3C 002A0A7C  38 05 9A 08 */	addi r0, r5, lbl_803C9A08@l
/* 802A3B40 002A0A80  90 1F 00 00 */	stw r0, 0(r31)
/* 802A3B44 002A0A84  7C 80 07 35 */	extsh. r0, r4
/* 802A3B48 002A0A88  40 81 00 08 */	ble lbl_802A3B50
/* 802A3B4C 002A0A8C  48 02 B1 F1 */	bl __dl__FPv
lbl_802A3B50:
/* 802A3B50 002A0A90  7F E3 FB 78 */	mr r3, r31
/* 802A3B54 002A0A94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A3B58 002A0A98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A3B5C 002A0A9C  7C 08 03 A6 */	mtlr r0
/* 802A3B60 002A0AA0  38 21 00 10 */	addi r1, r1, 0x10
/* 802A3B64 002A0AA4  4E 80 00 20 */	blr 

