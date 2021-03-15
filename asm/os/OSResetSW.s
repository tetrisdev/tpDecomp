.include "macros.inc"

.section .text, "ax" # 8033fae4


.global __OSResetSWInterruptHandler
__OSResetSWInterruptHandler:
/* 8033FAE4 0033CA24  7C 08 02 A6 */	mflr r0
/* 8033FAE8 0033CA28  90 01 00 04 */	stw r0, 4(r1)
/* 8033FAEC 0033CA2C  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 8033FAF0 0033CA30  93 E1 00 24 */	stw r31, 0x24(r1)
/* 8033FAF4 0033CA34  93 C1 00 20 */	stw r30, 0x20(r1)
/* 8033FAF8 0033CA38  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 8033FAFC 0033CA3C  48 00 2C 21 */	bl __OSGetSystemTime
/* 8033FB00 0033CA40  3C A0 80 00 */	lis r5, 0x800000F8@ha
/* 8033FB04 0033CA44  90 8D 91 3C */	stw r4, lbl_804516BC-_SDA_BASE_(r13)
/* 8033FB08 0033CA48  80 05 00 F8 */	lwz r0, 0x800000F8@l(r5)
/* 8033FB0C 0033CA4C  3C 80 43 1C */	lis r4, 0x431BDE83@ha
/* 8033FB10 0033CA50  38 84 DE 83 */	addi r4, r4, 0x431BDE83@l
/* 8033FB14 0033CA54  90 6D 91 38 */	stw r3, lbl_804516B8-_SDA_BASE_(r13)
/* 8033FB18 0033CA58  54 00 F0 BE */	srwi r0, r0, 2
/* 8033FB1C 0033CA5C  7C 04 00 16 */	mulhwu r0, r4, r0
/* 8033FB20 0033CA60  54 00 8B FE */	srwi r0, r0, 0xf
/* 8033FB24 0033CA64  1C 00 00 64 */	mulli r0, r0, 0x64
/* 8033FB28 0033CA68  54 1D E8 FE */	srwi r29, r0, 3
/* 8033FB2C 0033CA6C  3B C0 00 00 */	li r30, 0
/* 8033FB30 0033CA70  3F E0 CC 00 */	lis r31, 0xcc00
lbl_8033FB34:
/* 8033FB34 0033CA74  48 00 2B E9 */	bl __OSGetSystemTime
/* 8033FB38 0033CA78  80 CD 91 3C */	lwz r6, lbl_804516BC-_SDA_BASE_(r13)
/* 8033FB3C 0033CA7C  6F C5 80 00 */	xoris r5, r30, 0x8000
/* 8033FB40 0033CA80  80 0D 91 38 */	lwz r0, lbl_804516B8-_SDA_BASE_(r13)
/* 8033FB44 0033CA84  7C 86 20 10 */	subfc r4, r6, r4
/* 8033FB48 0033CA88  7C 00 19 10 */	subfe r0, r0, r3
/* 8033FB4C 0033CA8C  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 8033FB50 0033CA90  7C 1D 20 10 */	subfc r0, r29, r4
/* 8033FB54 0033CA94  7C A5 19 10 */	subfe r5, r5, r3
/* 8033FB58 0033CA98  7C A3 19 10 */	subfe r5, r3, r3
/* 8033FB5C 0033CA9C  7C A5 00 D1 */	neg. r5, r5
/* 8033FB60 0033CAA0  41 82 00 10 */	beq lbl_8033FB70
/* 8033FB64 0033CAA4  80 1F 30 00 */	lwz r0, 0x3000(r31)
/* 8033FB68 0033CAA8  54 00 03 DF */	rlwinm. r0, r0, 0, 0xf, 0xf
/* 8033FB6C 0033CAAC  41 82 FF C8 */	beq lbl_8033FB34
lbl_8033FB70:
/* 8033FB70 0033CAB0  3C 60 CC 00 */	lis r3, 0xCC003000@ha
/* 8033FB74 0033CAB4  80 03 30 00 */	lwz r0, 0xCC003000@l(r3)
/* 8033FB78 0033CAB8  54 00 03 DF */	rlwinm. r0, r0, 0, 0xf, 0xf
/* 8033FB7C 0033CABC  40 82 00 34 */	bne lbl_8033FBB0
/* 8033FB80 0033CAC0  38 00 00 01 */	li r0, 1
/* 8033FB84 0033CAC4  90 0D 91 24 */	stw r0, lbl_804516A4-_SDA_BASE_(r13)
/* 8033FB88 0033CAC8  38 60 02 00 */	li r3, 0x200
/* 8033FB8C 0033CACC  90 0D 91 28 */	stw r0, lbl_804516A8-_SDA_BASE_(r13)
/* 8033FB90 0033CAD0  4B FF DF 2D */	bl __OSMaskInterrupts
/* 8033FB94 0033CAD4  81 8D 91 20 */	lwz r12, lbl_804516A0-_SDA_BASE_(r13)
/* 8033FB98 0033CAD8  28 0C 00 00 */	cmplwi r12, 0
/* 8033FB9C 0033CADC  41 82 00 14 */	beq lbl_8033FBB0
/* 8033FBA0 0033CAE0  38 00 00 00 */	li r0, 0
/* 8033FBA4 0033CAE4  7D 88 03 A6 */	mtlr r12
/* 8033FBA8 0033CAE8  90 0D 91 20 */	stw r0, lbl_804516A0-_SDA_BASE_(r13)
/* 8033FBAC 0033CAEC  4E 80 00 21 */	blrl 
lbl_8033FBB0:
/* 8033FBB0 0033CAF0  38 00 00 02 */	li r0, 2
/* 8033FBB4 0033CAF4  3C 60 CC 00 */	lis r3, 0xCC003000@ha
/* 8033FBB8 0033CAF8  90 03 30 00 */	stw r0, 0xCC003000@l(r3)
/* 8033FBBC 0033CAFC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8033FBC0 0033CB00  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 8033FBC4 0033CB04  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 8033FBC8 0033CB08  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 8033FBCC 0033CB0C  38 21 00 28 */	addi r1, r1, 0x28
/* 8033FBD0 0033CB10  7C 08 03 A6 */	mtlr r0
/* 8033FBD4 0033CB14  4E 80 00 20 */	blr 

.global OSGetResetButtonState
OSGetResetButtonState:
/* 8033FBD8 0033CB18  7C 08 02 A6 */	mflr r0
/* 8033FBDC 0033CB1C  90 01 00 04 */	stw r0, 4(r1)
/* 8033FBE0 0033CB20  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 8033FBE4 0033CB24  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8033FBE8 0033CB28  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8033FBEC 0033CB2C  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8033FBF0 0033CB30  4B FF DB 05 */	bl __RAS_OSDisableInterrupts_begin 
/* 8033FBF4 0033CB34  7C 7E 1B 78 */	mr r30, r3
/* 8033FBF8 0033CB38  48 00 2B 25 */	bl __OSGetSystemTime
/* 8033FBFC 0033CB3C  3C A0 CC 00 */	lis r5, 0xCC003000@ha
/* 8033FC00 0033CB40  80 05 30 00 */	lwz r0, 0xCC003000@l(r5)
/* 8033FC04 0033CB44  54 00 03 DF */	rlwinm. r0, r0, 0, 0xf, 0xf
/* 8033FC08 0033CB48  40 82 00 DC */	bne lbl_8033FCE4
/* 8033FC0C 0033CB4C  80 0D 91 24 */	lwz r0, lbl_804516A4-_SDA_BASE_(r13)
/* 8033FC10 0033CB50  2C 00 00 00 */	cmpwi r0, 0
/* 8033FC14 0033CB54  40 82 00 40 */	bne lbl_8033FC54
/* 8033FC18 0033CB58  80 0D 91 30 */	lwz r0, lbl_804516B0-_SDA_BASE_(r13)
/* 8033FC1C 0033CB5C  38 C0 00 00 */	li r6, 0
/* 8033FC20 0033CB60  80 AD 91 34 */	lwz r5, lbl_804516B4-_SDA_BASE_(r13)
/* 8033FC24 0033CB64  38 E0 00 01 */	li r7, 1
/* 8033FC28 0033CB68  7C 00 32 78 */	xor r0, r0, r6
/* 8033FC2C 0033CB6C  7C A5 32 78 */	xor r5, r5, r6
/* 8033FC30 0033CB70  90 ED 91 24 */	stw r7, lbl_804516A4-_SDA_BASE_(r13)
/* 8033FC34 0033CB74  7C A0 03 79 */	or. r0, r5, r0
/* 8033FC38 0033CB78  41 82 00 08 */	beq lbl_8033FC40
/* 8033FC3C 0033CB7C  48 00 00 08 */	b lbl_8033FC44
lbl_8033FC40:
/* 8033FC40 0033CB80  7C C7 33 78 */	mr r7, r6
lbl_8033FC44:
/* 8033FC44 0033CB84  90 8D 91 3C */	stw r4, lbl_804516BC-_SDA_BASE_(r13)
/* 8033FC48 0033CB88  7C FD 3B 78 */	mr r29, r7
/* 8033FC4C 0033CB8C  90 6D 91 38 */	stw r3, lbl_804516B8-_SDA_BASE_(r13)
/* 8033FC50 0033CB90  48 00 01 48 */	b lbl_8033FD98
lbl_8033FC54:
/* 8033FC54 0033CB94  80 0D 91 30 */	lwz r0, lbl_804516B0-_SDA_BASE_(r13)
/* 8033FC58 0033CB98  39 20 00 00 */	li r9, 0
/* 8033FC5C 0033CB9C  80 AD 91 34 */	lwz r5, lbl_804516B4-_SDA_BASE_(r13)
/* 8033FC60 0033CBA0  39 40 00 01 */	li r10, 1
/* 8033FC64 0033CBA4  7C 00 4A 78 */	xor r0, r0, r9
/* 8033FC68 0033CBA8  7C A5 4A 78 */	xor r5, r5, r9
/* 8033FC6C 0033CBAC  7C A0 03 79 */	or. r0, r5, r0
/* 8033FC70 0033CBB0  40 82 00 58 */	bne lbl_8033FCC8
/* 8033FC74 0033CBB4  3C C0 80 00 */	lis r6, 0x800000F8@ha
/* 8033FC78 0033CBB8  80 AD 91 3C */	lwz r5, lbl_804516BC-_SDA_BASE_(r13)
/* 8033FC7C 0033CBBC  80 E6 00 F8 */	lwz r7, 0x800000F8@l(r6)
/* 8033FC80 0033CBC0  3C C0 43 1C */	lis r6, 0x431BDE83@ha
/* 8033FC84 0033CBC4  39 06 DE 83 */	addi r8, r6, 0x431BDE83@l
/* 8033FC88 0033CBC8  80 0D 91 38 */	lwz r0, lbl_804516B8-_SDA_BASE_(r13)
/* 8033FC8C 0033CBCC  54 E6 F0 BE */	srwi r6, r7, 2
/* 8033FC90 0033CBD0  7C C8 30 16 */	mulhwu r6, r8, r6
/* 8033FC94 0033CBD4  54 C6 8B FE */	srwi r6, r6, 0xf
/* 8033FC98 0033CBD8  1C C6 00 64 */	mulli r6, r6, 0x64
/* 8033FC9C 0033CBDC  7C E5 20 10 */	subfc r7, r5, r4
/* 8033FCA0 0033CBE0  7C 00 19 10 */	subfe r0, r0, r3
/* 8033FCA4 0033CBE4  54 C8 E8 FE */	srwi r8, r6, 3
/* 8033FCA8 0033CBE8  6C 05 80 00 */	xoris r5, r0, 0x8000
/* 8033FCAC 0033CBEC  6D 26 80 00 */	xoris r6, r9, 0x8000
/* 8033FCB0 0033CBF0  7C 07 40 10 */	subfc r0, r7, r8
/* 8033FCB4 0033CBF4  7C A5 31 10 */	subfe r5, r5, r6
/* 8033FCB8 0033CBF8  7C A6 31 10 */	subfe r5, r6, r6
/* 8033FCBC 0033CBFC  7C A5 00 D1 */	neg. r5, r5
/* 8033FCC0 0033CC00  40 82 00 08 */	bne lbl_8033FCC8
/* 8033FCC4 0033CC04  7D 2A 4B 78 */	mr r10, r9
lbl_8033FCC8:
/* 8033FCC8 0033CC08  2C 0A 00 00 */	cmpwi r10, 0
/* 8033FCCC 0033CC0C  41 82 00 0C */	beq lbl_8033FCD8
/* 8033FCD0 0033CC10  38 00 00 01 */	li r0, 1
/* 8033FCD4 0033CC14  48 00 00 08 */	b lbl_8033FCDC
lbl_8033FCD8:
/* 8033FCD8 0033CC18  38 00 00 00 */	li r0, 0
lbl_8033FCDC:
/* 8033FCDC 0033CC1C  7C 1D 03 78 */	mr r29, r0
/* 8033FCE0 0033CC20  48 00 00 B8 */	b lbl_8033FD98
lbl_8033FCE4:
/* 8033FCE4 0033CC24  80 0D 91 24 */	lwz r0, lbl_804516A4-_SDA_BASE_(r13)
/* 8033FCE8 0033CC28  2C 00 00 00 */	cmpwi r0, 0
/* 8033FCEC 0033CC2C  41 82 00 34 */	beq lbl_8033FD20
/* 8033FCF0 0033CC30  80 AD 91 28 */	lwz r5, lbl_804516A8-_SDA_BASE_(r13)
/* 8033FCF4 0033CC34  38 00 00 00 */	li r0, 0
/* 8033FCF8 0033CC38  90 0D 91 24 */	stw r0, lbl_804516A4-_SDA_BASE_(r13)
/* 8033FCFC 0033CC3C  2C 05 00 00 */	cmpwi r5, 0
/* 8033FD00 0033CC40  3B A5 00 00 */	addi r29, r5, 0
/* 8033FD04 0033CC44  41 82 00 10 */	beq lbl_8033FD14
/* 8033FD08 0033CC48  90 8D 91 34 */	stw r4, lbl_804516B4-_SDA_BASE_(r13)
/* 8033FD0C 0033CC4C  90 6D 91 30 */	stw r3, lbl_804516B0-_SDA_BASE_(r13)
/* 8033FD10 0033CC50  48 00 00 88 */	b lbl_8033FD98
lbl_8033FD14:
/* 8033FD14 0033CC54  90 0D 91 34 */	stw r0, lbl_804516B4-_SDA_BASE_(r13)
/* 8033FD18 0033CC58  90 0D 91 30 */	stw r0, lbl_804516B0-_SDA_BASE_(r13)
/* 8033FD1C 0033CC5C  48 00 00 7C */	b lbl_8033FD98
lbl_8033FD20:
/* 8033FD20 0033CC60  80 CD 91 30 */	lwz r6, lbl_804516B0-_SDA_BASE_(r13)
/* 8033FD24 0033CC64  39 00 00 00 */	li r8, 0
/* 8033FD28 0033CC68  80 ED 91 34 */	lwz r7, lbl_804516B4-_SDA_BASE_(r13)
/* 8033FD2C 0033CC6C  7C C0 42 78 */	xor r0, r6, r8
/* 8033FD30 0033CC70  7C E5 42 78 */	xor r5, r7, r8
/* 8033FD34 0033CC74  7C A0 03 79 */	or. r0, r5, r0
/* 8033FD38 0033CC78  41 82 00 50 */	beq lbl_8033FD88
/* 8033FD3C 0033CC7C  3C A0 80 00 */	lis r5, 0x800000F8@ha
/* 8033FD40 0033CC80  80 05 00 F8 */	lwz r0, 0x800000F8@l(r5)
/* 8033FD44 0033CC84  3C A0 10 62 */	lis r5, 0x10624DD3@ha
/* 8033FD48 0033CC88  38 A5 4D D3 */	addi r5, r5, 0x10624DD3@l
/* 8033FD4C 0033CC8C  54 00 F0 BE */	srwi r0, r0, 2
/* 8033FD50 0033CC90  7C 05 00 16 */	mulhwu r0, r5, r0
/* 8033FD54 0033CC94  54 00 D1 BE */	srwi r0, r0, 6
/* 8033FD58 0033CC98  1C 00 00 28 */	mulli r0, r0, 0x28
/* 8033FD5C 0033CC9C  7C E7 20 10 */	subfc r7, r7, r4
/* 8033FD60 0033CCA0  7C A6 19 10 */	subfe r5, r6, r3
/* 8033FD64 0033CCA4  6C A6 80 00 */	xoris r6, r5, 0x8000
/* 8033FD68 0033CCA8  6D 05 80 00 */	xoris r5, r8, 0x8000
/* 8033FD6C 0033CCAC  7C 00 38 10 */	subfc r0, r0, r7
/* 8033FD70 0033CCB0  7C A5 31 10 */	subfe r5, r5, r6
/* 8033FD74 0033CCB4  7C A6 31 10 */	subfe r5, r6, r6
/* 8033FD78 0033CCB8  7C A5 00 D1 */	neg. r5, r5
/* 8033FD7C 0033CCBC  41 82 00 0C */	beq lbl_8033FD88
/* 8033FD80 0033CCC0  3B A0 00 01 */	li r29, 1
/* 8033FD84 0033CCC4  48 00 00 14 */	b lbl_8033FD98
lbl_8033FD88:
/* 8033FD88 0033CCC8  38 00 00 00 */	li r0, 0
/* 8033FD8C 0033CCCC  90 0D 91 34 */	stw r0, lbl_804516B4-_SDA_BASE_(r13)
/* 8033FD90 0033CCD0  3B A0 00 00 */	li r29, 0
/* 8033FD94 0033CCD4  90 0D 91 30 */	stw r0, lbl_804516B0-_SDA_BASE_(r13)
lbl_8033FD98:
/* 8033FD98 0033CCD8  3C A0 80 00 */	lis r5, 0x800030E3@ha
/* 8033FD9C 0033CCDC  93 AD 91 28 */	stw r29, lbl_804516A8-_SDA_BASE_(r13)
/* 8033FDA0 0033CCE0  88 05 30 E3 */	lbz r0, 0x800030E3@l(r5)
/* 8033FDA4 0033CCE4  54 00 06 FF */	clrlwi. r0, r0, 0x1b
/* 8033FDA8 0033CCE8  41 82 00 A0 */	beq lbl_8033FE48
/* 8033FDAC 0033CCEC  1D 40 00 3C */	mulli r10, r0, 0x3c
/* 8033FDB0 0033CCF0  80 05 00 F8 */	lwz r0, 0xf8(r5)
/* 8033FDB4 0033CCF4  81 2D 90 B4 */	lwz r9, lbl_80451634-_SDA_BASE_(r13)
/* 8033FDB8 0033CCF8  81 0D 90 B0 */	lwz r8, lbl_80451630-_SDA_BASE_(r13)
/* 8033FDBC 0033CCFC  54 06 F0 BE */	srwi r6, r0, 2
/* 8033FDC0 0033CD00  7D 40 FE 70 */	srawi r0, r10, 0x1f
/* 8033FDC4 0033CD04  7C E0 31 D6 */	mullw r7, r0, r6
/* 8033FDC8 0033CD08  7C 0A 30 16 */	mulhwu r0, r10, r6
/* 8033FDCC 0033CD0C  7C AA 31 D6 */	mullw r5, r10, r6
/* 8033FDD0 0033CD10  7D 29 28 14 */	addc r9, r9, r5
/* 8033FDD4 0033CD14  3B E0 00 00 */	li r31, 0
/* 8033FDD8 0033CD18  7C E7 02 14 */	add r7, r7, r0
/* 8033FDDC 0033CD1C  7C 0A F9 D6 */	mullw r0, r10, r31
/* 8033FDE0 0033CD20  7C 07 02 14 */	add r0, r7, r0
/* 8033FDE4 0033CD24  7D 08 01 14 */	adde r8, r8, r0
/* 8033FDE8 0033CD28  6D 07 80 00 */	xoris r7, r8, 0x8000
/* 8033FDEC 0033CD2C  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 8033FDF0 0033CD30  7C 04 48 10 */	subfc r0, r4, r9
/* 8033FDF4 0033CD34  7C A5 39 10 */	subfe r5, r5, r7
/* 8033FDF8 0033CD38  7C A7 39 10 */	subfe r5, r7, r7
/* 8033FDFC 0033CD3C  7C A5 00 D1 */	neg. r5, r5
/* 8033FE00 0033CD40  41 82 00 48 */	beq lbl_8033FE48
/* 8033FE04 0033CD44  7C 89 20 10 */	subfc r4, r9, r4
/* 8033FE08 0033CD48  7C 68 19 10 */	subfe r3, r8, r3
/* 8033FE0C 0033CD4C  38 A0 00 00 */	li r5, 0
/* 8033FE10 0033CD50  48 02 25 15 */	bl __div2i
/* 8033FE14 0033CD54  38 A0 00 00 */	li r5, 0
/* 8033FE18 0033CD58  38 C0 00 02 */	li r6, 2
/* 8033FE1C 0033CD5C  48 02 25 09 */	bl __div2i
/* 8033FE20 0033CD60  38 00 00 01 */	li r0, 1
/* 8033FE24 0033CD64  7C 84 00 38 */	and r4, r4, r0
/* 8033FE28 0033CD68  7C 60 F8 38 */	and r0, r3, r31
/* 8033FE2C 0033CD6C  7C 83 FA 78 */	xor r3, r4, r31
/* 8033FE30 0033CD70  7C 00 FA 78 */	xor r0, r0, r31
/* 8033FE34 0033CD74  7C 60 03 79 */	or. r0, r3, r0
/* 8033FE38 0033CD78  40 82 00 0C */	bne lbl_8033FE44
/* 8033FE3C 0033CD7C  3B A0 00 01 */	li r29, 1
/* 8033FE40 0033CD80  48 00 00 08 */	b lbl_8033FE48
lbl_8033FE44:
/* 8033FE44 0033CD84  3B A0 00 00 */	li r29, 0
lbl_8033FE48:
/* 8033FE48 0033CD88  7F C3 F3 78 */	mr r3, r30
/* 8033FE4C 0033CD8C  4B FF D8 D1 */	bl OSRestoreInterrupts
/* 8033FE50 0033CD90  7F A3 EB 78 */	mr r3, r29
/* 8033FE54 0033CD94  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8033FE58 0033CD98  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8033FE5C 0033CD9C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8033FE60 0033CDA0  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8033FE64 0033CDA4  38 21 00 18 */	addi r1, r1, 0x18
/* 8033FE68 0033CDA8  7C 08 03 A6 */	mtlr r0
/* 8033FE6C 0033CDAC  4E 80 00 20 */	blr 

.global OSGetResetSwitchState
OSGetResetSwitchState:
/* 8033FE70 0033CDB0  7C 08 02 A6 */	mflr r0
/* 8033FE74 0033CDB4  90 01 00 04 */	stw r0, 4(r1)
/* 8033FE78 0033CDB8  94 21 FF F8 */	stwu r1, -8(r1)
/* 8033FE7C 0033CDBC  4B FF FD 5D */	bl OSGetResetButtonState
/* 8033FE80 0033CDC0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8033FE84 0033CDC4  38 21 00 08 */	addi r1, r1, 8
/* 8033FE88 0033CDC8  7C 08 03 A6 */	mtlr r0
/* 8033FE8C 0033CDCC  4E 80 00 20 */	blr 
