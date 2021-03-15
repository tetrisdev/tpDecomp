.include "macros.inc"

.section .text, "ax" # 80290f64


.global JASReport__FPCce
JASReport__FPCce:
/* 80290F64 0028DEA4  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80290F68 0028DEA8  7C 08 02 A6 */	mflr r0
/* 80290F6C 0028DEAC  90 01 00 84 */	stw r0, 0x84(r1)
/* 80290F70 0028DEB0  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80290F74 0028DEB4  7C 7F 1B 78 */	mr r31, r3
/* 80290F78 0028DEB8  40 86 00 24 */	bne cr1, lbl_80290F9C
/* 80290F7C 0028DEBC  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80290F80 0028DEC0  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80290F84 0028DEC4  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80290F88 0028DEC8  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80290F8C 0028DECC  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80290F90 0028DED0  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80290F94 0028DED4  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80290F98 0028DED8  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_80290F9C:
/* 80290F9C 0028DEDC  90 61 00 08 */	stw r3, 8(r1)
/* 80290FA0 0028DEE0  90 81 00 0C */	stw r4, 0xc(r1)
/* 80290FA4 0028DEE4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80290FA8 0028DEE8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80290FAC 0028DEEC  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80290FB0 0028DEF0  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80290FB4 0028DEF4  91 21 00 20 */	stw r9, 0x20(r1)
/* 80290FB8 0028DEF8  91 41 00 24 */	stw r10, 0x24(r1)
/* 80290FBC 0028DEFC  80 0D 8C A0 */	lwz r0, lbl_80451220-_SDA_BASE_(r13)
/* 80290FC0 0028DF00  28 00 00 00 */	cmplwi r0, 0
/* 80290FC4 0028DF04  41 82 00 88 */	beq lbl_8029104C
/* 80290FC8 0028DF08  3C 00 01 00 */	lis r0, 0x100
/* 80290FCC 0028DF0C  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80290FD0 0028DF10  38 01 00 88 */	addi r0, r1, 0x88
/* 80290FD4 0028DF14  90 01 00 70 */	stw r0, 0x70(r1)
/* 80290FD8 0028DF18  38 01 00 08 */	addi r0, r1, 8
/* 80290FDC 0028DF1C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80290FE0 0028DF20  3C 60 80 43 */	lis r3, lbl_80431660@ha
/* 80290FE4 0028DF24  38 63 16 60 */	addi r3, r3, lbl_80431660@l
/* 80290FE8 0028DF28  90 61 00 68 */	stw r3, 0x68(r1)
/* 80290FEC 0028DF2C  48 0A E0 55 */	bl OSLockMutex
/* 80290FF0 0028DF30  80 6D 8C A0 */	lwz r3, lbl_80451220-_SDA_BASE_(r13)
/* 80290FF4 0028DF34  80 0D 8C AC */	lwz r0, lbl_8045122C-_SDA_BASE_(r13)
/* 80290FF8 0028DF38  54 00 30 32 */	slwi r0, r0, 6
/* 80290FFC 0028DF3C  7C 63 02 14 */	add r3, r3, r0
/* 80291000 0028DF40  38 80 00 40 */	li r4, 0x40
/* 80291004 0028DF44  7F E5 FB 78 */	mr r5, r31
/* 80291008 0028DF48  38 C1 00 6C */	addi r6, r1, 0x6c
/* 8029100C 0028DF4C  48 0D 56 85 */	bl vsnprintf
/* 80291010 0028DF50  80 6D 8C AC */	lwz r3, lbl_8045122C-_SDA_BASE_(r13)
/* 80291014 0028DF54  38 03 00 01 */	addi r0, r3, 1
/* 80291018 0028DF58  90 0D 8C AC */	stw r0, lbl_8045122C-_SDA_BASE_(r13)
/* 8029101C 0028DF5C  80 8D 8C A4 */	lwz r4, lbl_80451224-_SDA_BASE_(r13)
/* 80291020 0028DF60  7C 00 20 00 */	cmpw r0, r4
/* 80291024 0028DF64  41 80 00 0C */	blt lbl_80291030
/* 80291028 0028DF68  38 00 00 00 */	li r0, 0
/* 8029102C 0028DF6C  90 0D 8C AC */	stw r0, lbl_8045122C-_SDA_BASE_(r13)
lbl_80291030:
/* 80291030 0028DF70  80 6D 8C A8 */	lwz r3, lbl_80451228-_SDA_BASE_(r13)
/* 80291034 0028DF74  7C 03 20 00 */	cmpw r3, r4
/* 80291038 0028DF78  40 80 00 0C */	bge lbl_80291044
/* 8029103C 0028DF7C  38 03 00 01 */	addi r0, r3, 1
/* 80291040 0028DF80  90 0D 8C A8 */	stw r0, lbl_80451228-_SDA_BASE_(r13)
lbl_80291044:
/* 80291044 0028DF84  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80291048 0028DF88  48 0A E0 D5 */	bl OSUnlockMutex
lbl_8029104C:
/* 8029104C 0028DF8C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80291050 0028DF90  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80291054 0028DF94  7C 08 03 A6 */	mtlr r0
/* 80291058 0028DF98  38 21 00 80 */	addi r1, r1, 0x80
/* 8029105C 0028DF9C  4E 80 00 20 */	blr 

