.include "macros.inc"

.section .text, "ax" # 8001e37c

.global fopOvlp_Draw
fopOvlp_Draw:
/* 8001E37C 0001B2BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001E380 0001B2C0  7C 08 02 A6 */	mflr r0
/* 8001E384 0001B2C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001E388 0001B2C8  7C 64 1B 78 */	mr r4, r3
/* 8001E38C 0001B2CC  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8001E390 0001B2D0  48 00 36 95 */	bl fpcLf_DrawMethod
/* 8001E394 0001B2D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001E398 0001B2D8  7C 08 03 A6 */	mtlr r0
/* 8001E39C 0001B2DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001E3A0 0001B2E0  4E 80 00 20 */	blr 
/* 8001E3A4 0001B2E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001E3A8 0001B2E8  7C 08 02 A6 */	mflr r0
/* 8001E3AC 0001B2EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001E3B0 0001B2F0  7C 64 1B 78 */	mr r4, r3
/* 8001E3B4 0001B2F4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8001E3B8 0001B2F8  48 00 40 A9 */	bl fpcMtd_Execute
/* 8001E3BC 0001B2FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001E3C0 0001B300  7C 08 03 A6 */	mtlr r0
/* 8001E3C4 0001B304  38 21 00 10 */	addi r1, r1, 0x10
/* 8001E3C8 0001B308  4E 80 00 20 */	blr 
/* 8001E3CC 0001B30C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001E3D0 0001B310  7C 08 02 A6 */	mflr r0
/* 8001E3D4 0001B314  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001E3D8 0001B318  7C 64 1B 78 */	mr r4, r3
/* 8001E3DC 0001B31C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8001E3E0 0001B320  48 00 40 A5 */	bl fpcMtd_IsDelete
/* 8001E3E4 0001B324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001E3E8 0001B328  7C 08 03 A6 */	mtlr r0
/* 8001E3EC 0001B32C  38 21 00 10 */	addi r1, r1, 0x10
/* 8001E3F0 0001B330  4E 80 00 20 */	blr 
/* 8001E3F4 0001B334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001E3F8 0001B338  7C 08 02 A6 */	mflr r0
/* 8001E3FC 0001B33C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001E400 0001B340  7C 64 1B 78 */	mr r4, r3
/* 8001E404 0001B344  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8001E408 0001B348  48 00 40 A1 */	bl fpcMtd_Delete
/* 8001E40C 0001B34C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001E410 0001B350  7C 08 03 A6 */	mtlr r0
/* 8001E414 0001B354  38 21 00 10 */	addi r1, r1, 0x10
/* 8001E418 0001B358  4E 80 00 20 */	blr 
/* 8001E41C 0001B35C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001E420 0001B360  7C 08 02 A6 */	mflr r0
/* 8001E424 0001B364  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001E428 0001B368  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001E42C 0001B36C  93 C1 00 08 */	stw r30, 8(r1)
/* 8001E430 0001B370  7C 7F 1B 78 */	mr r31, r3
/* 8001E434 0001B374  88 03 00 0C */	lbz r0, 0xc(r3)
/* 8001E438 0001B378  7C 00 07 75 */	extsb. r0, r0
/* 8001E43C 0001B37C  40 82 00 24 */	bne lbl_8001E460
/* 8001E440 0001B380  83 DF 00 10 */	lwz r30, 0x10(r31)
/* 8001E444 0001B384  38 7F 00 C4 */	addi r3, r31, 0xc4
/* 8001E448 0001B388  38 80 00 01 */	li r4, 1
/* 8001E44C 0001B38C  48 24 84 05 */	bl cReq_Create__FP18request_base_classUc
/* 8001E450 0001B390  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 8001E454 0001B394  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8001E458 0001B398  38 00 FF FF */	li r0, -1
/* 8001E45C 0001B39C  90 1F 00 C8 */	stw r0, 0xc8(r31)
lbl_8001E460:
/* 8001E460 0001B3A0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8001E464 0001B3A4  7F E4 FB 78 */	mr r4, r31
/* 8001E468 0001B3A8  48 00 40 65 */	bl fpcMtd_Create
/* 8001E46C 0001B3AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001E470 0001B3B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8001E474 0001B3B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001E478 0001B3B8  7C 08 03 A6 */	mtlr r0
/* 8001E47C 0001B3BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001E480 0001B3C0  4E 80 00 20 */	blr 

