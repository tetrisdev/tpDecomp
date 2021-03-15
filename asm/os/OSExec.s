.include "macros.inc"

.section .text, "ax" # 8033ca80


.global PackArgs
PackArgs:
/* 8033CA80 003399C0  7C 08 02 A6 */	mflr r0
/* 8033CA84 003399C4  90 01 00 04 */	stw r0, 4(r1)
/* 8033CA88 003399C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8033CA8C 003399CC  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 8033CA90 003399D0  3B 44 00 00 */	addi r26, r4, 0
/* 8033CA94 003399D4  3B A5 00 00 */	addi r29, r5, 0
/* 8033CA98 003399D8  3B C3 00 00 */	addi r30, r3, 0
/* 8033CA9C 003399DC  38 80 00 00 */	li r4, 0
/* 8033CAA0 003399E0  38 A0 20 00 */	li r5, 0x2000
/* 8033CAA4 003399E4  4B CC 69 B5 */	bl memset
/* 8033CAA8 003399E8  2C 1A 00 00 */	cmpwi r26, 0
/* 8033CAAC 003399EC  40 82 00 10 */	bne lbl_8033CABC
/* 8033CAB0 003399F0  38 00 00 00 */	li r0, 0
/* 8033CAB4 003399F4  90 1E 00 08 */	stw r0, 8(r30)
/* 8033CAB8 003399F8  48 00 01 24 */	b lbl_8033CBDC
lbl_8033CABC:
/* 8033CABC 003399FC  57 40 10 3A */	slwi r0, r26, 2
/* 8033CAC0 00339A00  3B FA 00 00 */	addi r31, r26, 0
/* 8033CAC4 00339A04  3B 7E 20 00 */	addi r27, r30, 0x2000
/* 8033CAC8 00339A08  7F 9D 02 14 */	add r28, r29, r0
/* 8033CACC 00339A0C  48 00 00 28 */	b lbl_8033CAF4
lbl_8033CAD0:
/* 8033CAD0 00339A10  80 7C 00 00 */	lwz r3, 0(r28)
/* 8033CAD4 00339A14  48 02 C1 11 */	bl strlen
/* 8033CAD8 00339A18  38 03 00 01 */	addi r0, r3, 1
/* 8033CADC 00339A1C  80 9C 00 00 */	lwz r4, 0(r28)
/* 8033CAE0 00339A20  7F 60 D8 50 */	subf r27, r0, r27
/* 8033CAE4 00339A24  38 7B 00 00 */	addi r3, r27, 0
/* 8033CAE8 00339A28  48 02 C0 45 */	bl strcpy
/* 8033CAEC 00339A2C  7C 1E D8 50 */	subf r0, r30, r27
/* 8033CAF0 00339A30  90 1C 00 00 */	stw r0, 0(r28)
lbl_8033CAF4:
/* 8033CAF4 00339A34  37 5A FF FF */	addic. r26, r26, -1
/* 8033CAF8 00339A38  3B 9C FF FC */	addi r28, r28, -4
/* 8033CAFC 00339A3C  40 80 FF D4 */	bge lbl_8033CAD0
/* 8033CB00 00339A40  7C 1E D8 50 */	subf r0, r30, r27
/* 8033CB04 00339A44  38 7F 00 01 */	addi r3, r31, 1
/* 8033CB08 00339A48  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 8033CB0C 00339A4C  28 03 00 00 */	cmplwi r3, 0
/* 8033CB10 00339A50  7C DE 02 14 */	add r6, r30, r0
/* 8033CB14 00339A54  54 60 10 3A */	slwi r0, r3, 2
/* 8033CB18 00339A58  7C C0 30 50 */	subf r6, r0, r6
/* 8033CB1C 00339A5C  38 A6 00 00 */	addi r5, r6, 0
/* 8033CB20 00339A60  38 E0 00 00 */	li r7, 0
/* 8033CB24 00339A64  40 81 00 A8 */	ble lbl_8033CBCC
/* 8033CB28 00339A68  28 03 00 08 */	cmplwi r3, 8
/* 8033CB2C 00339A6C  38 7F FF F9 */	addi r3, r31, -7
/* 8033CB30 00339A70  40 81 00 B4 */	ble lbl_8033CBE4
/* 8033CB34 00339A74  38 03 00 07 */	addi r0, r3, 7
/* 8033CB38 00339A78  54 00 E8 FE */	srwi r0, r0, 3
/* 8033CB3C 00339A7C  28 03 00 00 */	cmplwi r3, 0
/* 8033CB40 00339A80  7C 09 03 A6 */	mtctr r0
/* 8033CB44 00339A84  38 7D 00 00 */	addi r3, r29, 0
/* 8033CB48 00339A88  38 85 00 00 */	addi r4, r5, 0
/* 8033CB4C 00339A8C  40 81 00 98 */	ble lbl_8033CBE4
lbl_8033CB50:
/* 8033CB50 00339A90  80 03 00 00 */	lwz r0, 0(r3)
/* 8033CB54 00339A94  38 E7 00 08 */	addi r7, r7, 8
/* 8033CB58 00339A98  90 04 00 00 */	stw r0, 0(r4)
/* 8033CB5C 00339A9C  80 03 00 04 */	lwz r0, 4(r3)
/* 8033CB60 00339AA0  90 04 00 04 */	stw r0, 4(r4)
/* 8033CB64 00339AA4  80 03 00 08 */	lwz r0, 8(r3)
/* 8033CB68 00339AA8  90 04 00 08 */	stw r0, 8(r4)
/* 8033CB6C 00339AAC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8033CB70 00339AB0  90 04 00 0C */	stw r0, 0xc(r4)
/* 8033CB74 00339AB4  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8033CB78 00339AB8  90 04 00 10 */	stw r0, 0x10(r4)
/* 8033CB7C 00339ABC  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8033CB80 00339AC0  90 04 00 14 */	stw r0, 0x14(r4)
/* 8033CB84 00339AC4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8033CB88 00339AC8  90 04 00 18 */	stw r0, 0x18(r4)
/* 8033CB8C 00339ACC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8033CB90 00339AD0  38 63 00 20 */	addi r3, r3, 0x20
/* 8033CB94 00339AD4  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8033CB98 00339AD8  38 84 00 20 */	addi r4, r4, 0x20
/* 8033CB9C 00339ADC  42 00 FF B4 */	bdnz lbl_8033CB50
/* 8033CBA0 00339AE0  48 00 00 44 */	b lbl_8033CBE4
lbl_8033CBA4:
/* 8033CBA4 00339AE4  38 7F 00 01 */	addi r3, r31, 1
/* 8033CBA8 00339AE8  7C 07 18 50 */	subf r0, r7, r3
/* 8033CBAC 00339AEC  7C 07 18 40 */	cmplw r7, r3
/* 8033CBB0 00339AF0  7C 09 03 A6 */	mtctr r0
/* 8033CBB4 00339AF4  40 80 00 18 */	bge lbl_8033CBCC
lbl_8033CBB8:
/* 8033CBB8 00339AF8  80 04 00 00 */	lwz r0, 0(r4)
/* 8033CBBC 00339AFC  38 84 00 04 */	addi r4, r4, 4
/* 8033CBC0 00339B00  90 05 00 00 */	stw r0, 0(r5)
/* 8033CBC4 00339B04  38 A5 00 04 */	addi r5, r5, 4
/* 8033CBC8 00339B08  42 00 FF F0 */	bdnz lbl_8033CBB8
lbl_8033CBCC:
/* 8033CBCC 00339B0C  38 06 FF FC */	addi r0, r6, -4
/* 8033CBD0 00339B10  93 E6 FF FC */	stw r31, -4(r6)
/* 8033CBD4 00339B14  7C 1E 00 50 */	subf r0, r30, r0
/* 8033CBD8 00339B18  90 1E 00 08 */	stw r0, 8(r30)
lbl_8033CBDC:
/* 8033CBDC 00339B1C  38 60 00 01 */	li r3, 1
/* 8033CBE0 00339B20  48 00 00 14 */	b lbl_8033CBF4
lbl_8033CBE4:
/* 8033CBE4 00339B24  54 E0 10 3A */	slwi r0, r7, 2
/* 8033CBE8 00339B28  7C 9D 02 14 */	add r4, r29, r0
/* 8033CBEC 00339B2C  7C A5 02 14 */	add r5, r5, r0
/* 8033CBF0 00339B30  4B FF FF B4 */	b lbl_8033CBA4
lbl_8033CBF4:
/* 8033CBF4 00339B34  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 8033CBF8 00339B38  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8033CBFC 00339B3C  38 21 00 30 */	addi r1, r1, 0x30
/* 8033CC00 00339B40  7C 08 03 A6 */	mtlr r0
/* 8033CC04 00339B44  4E 80 00 20 */	blr 

.global Run
Run:
/* 8033CC08 00339B48  7C 08 02 A6 */	mflr r0
/* 8033CC0C 00339B4C  90 01 00 04 */	stw r0, 4(r1)
/* 8033CC10 00339B50  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 8033CC14 00339B54  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8033CC18 00339B58  7C 7F 1B 78 */	mr r31, r3
/* 8033CC1C 00339B5C  4B FF EA A9 */	bl ICFlashInvalidate
/* 8033CC20 00339B60  7C 00 04 AC */	sync 0
/* 8033CC24 00339B64  4C 00 01 2C */	isync 
/* 8033CC28 00339B68  7F E8 03 A6 */	mtlr r31
/* 8033CC2C 00339B6C  4E 80 00 20 */	blr 
/* 8033CC30 00339B70  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8033CC34 00339B74  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8033CC38 00339B78  38 21 00 18 */	addi r1, r1, 0x18
/* 8033CC3C 00339B7C  7C 08 03 A6 */	mtlr r0
/* 8033CC40 00339B80  4E 80 00 20 */	blr 

.global ReadDisc
ReadDisc:
/* 8033CC44 00339B84  7C 08 02 A6 */	mflr r0
/* 8033CC48 00339B88  90 01 00 04 */	stw r0, 4(r1)
/* 8033CC4C 00339B8C  94 21 FF B8 */	stwu r1, -0x48(r1)
/* 8033CC50 00339B90  7C 80 23 78 */	mr r0, r4
/* 8033CC54 00339B94  7C A6 2B 78 */	mr r6, r5
/* 8033CC58 00339B98  7C 64 1B 78 */	mr r4, r3
/* 8033CC5C 00339B9C  7C 05 03 78 */	mr r5, r0
/* 8033CC60 00339BA0  38 61 00 14 */	addi r3, r1, 0x14
/* 8033CC64 00339BA4  38 E0 00 00 */	li r7, 0
/* 8033CC68 00339BA8  39 00 00 00 */	li r8, 0
/* 8033CC6C 00339BAC  48 00 E0 C1 */	bl DVDReadAbsAsyncPrio
/* 8033CC70 00339BB0  48 00 00 04 */	b lbl_8033CC74
lbl_8033CC74:
/* 8033CC74 00339BB4  48 00 00 04 */	b lbl_8033CC78
lbl_8033CC78:
/* 8033CC78 00339BB8  48 00 00 18 */	b lbl_8033CC90
lbl_8033CC7C:
/* 8033CC7C 00339BBC  48 00 E9 AD */	bl DVDCheckDisk
/* 8033CC80 00339BC0  2C 03 00 00 */	cmpwi r3, 0
/* 8033CC84 00339BC4  40 82 00 0C */	bne lbl_8033CC90
/* 8033CC88 00339BC8  38 60 00 00 */	li r3, 0
/* 8033CC8C 00339BCC  48 00 2B D9 */	bl __OSDoHotReset
lbl_8033CC90:
/* 8033CC90 00339BD0  38 61 00 14 */	addi r3, r1, 0x14
/* 8033CC94 00339BD4  48 00 E4 E9 */	bl DVDGetCommandBlockStatus
/* 8033CC98 00339BD8  2C 03 00 00 */	cmpwi r3, 0
/* 8033CC9C 00339BDC  40 82 FF E0 */	bne lbl_8033CC7C
/* 8033CCA0 00339BE0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8033CCA4 00339BE4  38 21 00 48 */	addi r1, r1, 0x48
/* 8033CCA8 00339BE8  7C 08 03 A6 */	mtlr r0
/* 8033CCAC 00339BEC  4E 80 00 20 */	blr 
.global Callback
Callback:
/* 8033CCB0 00339BF0  38 00 00 01 */	li r0, 1
/* 8033CCB4 00339BF4  90 0D 90 D8 */	stw r0, lbl_80451658-_SDA_BASE_(r13)
/* 8033CCB8 00339BF8  4E 80 00 20 */	blr 

.global __OSGetExecParams
__OSGetExecParams:
/* 8033CCBC 00339BFC  7C 08 02 A6 */	mflr r0
/* 8033CCC0 00339C00  90 01 00 04 */	stw r0, 4(r1)
/* 8033CCC4 00339C04  94 21 FF F8 */	stwu r1, -8(r1)
/* 8033CCC8 00339C08  3C A0 80 00 */	lis r5, 0x800030F0@ha
/* 8033CCCC 00339C0C  80 85 30 F0 */	lwz r4, 0x800030F0@l(r5)
/* 8033CCD0 00339C10  7C 05 20 40 */	cmplw r5, r4
/* 8033CCD4 00339C14  41 81 00 10 */	bgt lbl_8033CCE4
/* 8033CCD8 00339C18  38 A0 00 1C */	li r5, 0x1c
/* 8033CCDC 00339C1C  4B CC 68 65 */	bl memcpy
/* 8033CCE0 00339C20  48 00 00 0C */	b lbl_8033CCEC
lbl_8033CCE4:
/* 8033CCE4 00339C24  38 00 00 00 */	li r0, 0
/* 8033CCE8 00339C28  90 03 00 00 */	stw r0, 0(r3)
lbl_8033CCEC:
/* 8033CCEC 00339C2C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8033CCF0 00339C30  38 21 00 08 */	addi r1, r1, 8
/* 8033CCF4 00339C34  7C 08 03 A6 */	mtlr r0
/* 8033CCF8 00339C38  4E 80 00 20 */	blr 

.global GetApploaderPosition
GetApploaderPosition:
/* 8033CCFC 00339C3C  7C 08 02 A6 */	mflr r0
/* 8033CD00 00339C40  90 01 00 04 */	stw r0, 4(r1)
/* 8033CD04 00339C44  94 21 FF B8 */	stwu r1, -0x48(r1)
/* 8033CD08 00339C48  93 E1 00 44 */	stw r31, 0x44(r1)
/* 8033CD0C 00339C4C  80 6D 90 DC */	lwz r3, lbl_8045165C-_SDA_BASE_(r13)
/* 8033CD10 00339C50  2C 03 00 00 */	cmpwi r3, 0
/* 8033CD14 00339C54  41 82 00 08 */	beq lbl_8033CD1C
/* 8033CD18 00339C58  48 00 00 94 */	b lbl_8033CDAC
lbl_8033CD1C:
/* 8033CD1C 00339C5C  3F E0 80 00 */	lis r31, 0x800030F4@ha
/* 8033CD20 00339C60  80 1F 30 F4 */	lwz r0, 0x800030F4@l(r31)
/* 8033CD24 00339C64  2C 00 00 00 */	cmpwi r0, 0
/* 8033CD28 00339C68  41 82 00 78 */	beq lbl_8033CDA0
/* 8033CD2C 00339C6C  38 60 00 40 */	li r3, 0x40
/* 8033CD30 00339C70  38 80 00 20 */	li r4, 0x20
/* 8033CD34 00339C74  4B FF E5 79 */	bl OSAllocFromArenaLo
/* 8033CD38 00339C78  80 DF 30 F4 */	lwz r6, 0x30f4(r31)
/* 8033CD3C 00339C7C  7C 7F 1B 78 */	mr r31, r3
/* 8033CD40 00339C80  7F E4 FB 78 */	mr r4, r31
/* 8033CD44 00339C84  38 61 00 08 */	addi r3, r1, 8
/* 8033CD48 00339C88  38 A0 00 40 */	li r5, 0x40
/* 8033CD4C 00339C8C  38 E0 00 00 */	li r7, 0
/* 8033CD50 00339C90  39 00 00 00 */	li r8, 0
/* 8033CD54 00339C94  48 00 DF D9 */	bl DVDReadAbsAsyncPrio
/* 8033CD58 00339C98  48 00 00 04 */	b lbl_8033CD5C
lbl_8033CD5C:
/* 8033CD5C 00339C9C  48 00 00 04 */	b lbl_8033CD60
lbl_8033CD60:
/* 8033CD60 00339CA0  48 00 00 18 */	b lbl_8033CD78
lbl_8033CD64:
/* 8033CD64 00339CA4  48 00 E8 C5 */	bl DVDCheckDisk
/* 8033CD68 00339CA8  2C 03 00 00 */	cmpwi r3, 0
/* 8033CD6C 00339CAC  40 82 00 0C */	bne lbl_8033CD78
/* 8033CD70 00339CB0  38 60 00 00 */	li r3, 0
/* 8033CD74 00339CB4  48 00 2A F1 */	bl __OSDoHotReset
lbl_8033CD78:
/* 8033CD78 00339CB8  38 61 00 08 */	addi r3, r1, 8
/* 8033CD7C 00339CBC  48 00 E4 01 */	bl DVDGetCommandBlockStatus
/* 8033CD80 00339CC0  2C 03 00 00 */	cmpwi r3, 0
/* 8033CD84 00339CC4  40 82 FF E0 */	bne lbl_8033CD64
/* 8033CD88 00339CC8  3C 60 80 00 */	lis r3, 0x800030F4@ha
/* 8033CD8C 00339CCC  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 8033CD90 00339CD0  80 63 30 F4 */	lwz r3, 0x800030F4@l(r3)
/* 8033CD94 00339CD4  7C 03 02 14 */	add r0, r3, r0
/* 8033CD98 00339CD8  90 0D 90 DC */	stw r0, lbl_8045165C-_SDA_BASE_(r13)
/* 8033CD9C 00339CDC  48 00 00 0C */	b lbl_8033CDA8
lbl_8033CDA0:
/* 8033CDA0 00339CE0  38 00 24 40 */	li r0, 0x2440
/* 8033CDA4 00339CE4  90 0D 90 DC */	stw r0, lbl_8045165C-_SDA_BASE_(r13)
lbl_8033CDA8:
/* 8033CDA8 00339CE8  80 6D 90 DC */	lwz r3, lbl_8045165C-_SDA_BASE_(r13)
lbl_8033CDAC:
/* 8033CDAC 00339CEC  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8033CDB0 00339CF0  83 E1 00 44 */	lwz r31, 0x44(r1)
/* 8033CDB4 00339CF4  38 21 00 48 */	addi r1, r1, 0x48
/* 8033CDB8 00339CF8  7C 08 03 A6 */	mtlr r0
/* 8033CDBC 00339CFC  4E 80 00 20 */	blr 

.global __OSBootDolSimple
__OSBootDolSimple:
/* 8033CDC0 00339D00  7C 08 02 A6 */	mflr r0
/* 8033CDC4 00339D04  90 01 00 04 */	stw r0, 4(r1)
/* 8033CDC8 00339D08  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8033CDCC 00339D0C  BF 01 01 10 */	stmw r24, 0x110(r1)
/* 8033CDD0 00339D10  7C 7B 1B 78 */	mr r27, r3
/* 8033CDD4 00339D14  7C 98 23 78 */	mr r24, r4
/* 8033CDD8 00339D18  7C BC 2B 78 */	mr r28, r5
/* 8033CDDC 00339D1C  7C DD 33 78 */	mr r29, r6
/* 8033CDE0 00339D20  7C F9 3B 78 */	mr r25, r7
/* 8033CDE4 00339D24  7D 1A 43 78 */	mr r26, r8
/* 8033CDE8 00339D28  7D 3E 4B 78 */	mr r30, r9
/* 8033CDEC 00339D2C  48 00 09 09 */	bl __RAS_OSDisableInterrupts_begin 
/* 8033CDF0 00339D30  38 60 00 1C */	li r3, 0x1c
/* 8033CDF4 00339D34  38 80 00 01 */	li r4, 1
/* 8033CDF8 00339D38  4B FF E4 B5 */	bl OSAllocFromArenaLo
/* 8033CDFC 00339D3C  7C 7F 1B 78 */	mr r31, r3
/* 8033CE00 00339D40  38 00 00 01 */	li r0, 1
/* 8033CE04 00339D44  90 1F 00 00 */	stw r0, 0(r31)
/* 8033CE08 00339D48  2C 19 00 00 */	cmpwi r25, 0
/* 8033CE0C 00339D4C  93 1F 00 04 */	stw r24, 4(r31)
/* 8033CE10 00339D50  93 9F 00 0C */	stw r28, 0xc(r31)
/* 8033CE14 00339D54  93 BF 00 10 */	stw r29, 0x10(r31)
/* 8033CE18 00339D58  93 3F 00 14 */	stw r25, 0x14(r31)
/* 8033CE1C 00339D5C  40 82 00 24 */	bne lbl_8033CE40
/* 8033CE20 00339D60  38 60 20 00 */	li r3, 0x2000
/* 8033CE24 00339D64  38 80 00 01 */	li r4, 1
/* 8033CE28 00339D68  4B FF E4 85 */	bl OSAllocFromArenaLo
/* 8033CE2C 00339D6C  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8033CE30 00339D70  7F 44 D3 78 */	mr r4, r26
/* 8033CE34 00339D74  7F C5 F3 78 */	mr r5, r30
/* 8033CE38 00339D78  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8033CE3C 00339D7C  4B FF FC 45 */	bl PackArgs
lbl_8033CE40:
/* 8033CE40 00339D80  48 00 C2 B1 */	bl DVDInit
/* 8033CE44 00339D84  38 60 00 01 */	li r3, 1
/* 8033CE48 00339D88  48 00 E4 2D */	bl DVDSetAutoInvalidation
/* 8033CE4C 00339D8C  48 00 E4 39 */	bl DVDResume
/* 8033CE50 00339D90  38 00 00 00 */	li r0, 0
.global Callback
/* 8033CE54 00339D94  3C 60 80 34 */	lis r3, Callback@ha
/* 8033CE58 00339D98  90 0D 90 D8 */	stw r0, lbl_80451658-_SDA_BASE_(r13)
.global Callback
/* 8033CE5C 00339D9C  38 63 CC B0 */	addi r3, r3, Callback@l
/* 8033CE60 00339DA0  48 00 E8 C1 */	bl __DVDPrepareResetAsync
/* 8033CE64 00339DA4  38 60 FF E0 */	li r3, -32
/* 8033CE68 00339DA8  48 00 0C 55 */	bl __OSMaskInterrupts
/* 8033CE6C 00339DAC  38 60 04 00 */	li r3, 0x400
/* 8033CE70 00339DB0  48 00 0C D5 */	bl __OSUnmaskInterrupts
/* 8033CE74 00339DB4  48 00 08 95 */	bl OSEnableInterrupts
/* 8033CE78 00339DB8  48 00 00 04 */	b lbl_8033CE7C
lbl_8033CE7C:
/* 8033CE7C 00339DBC  48 00 00 04 */	b lbl_8033CE80
lbl_8033CE80:
/* 8033CE80 00339DC0  48 00 00 18 */	b lbl_8033CE98
lbl_8033CE84:
/* 8033CE84 00339DC4  48 00 E7 A5 */	bl DVDCheckDisk
/* 8033CE88 00339DC8  2C 03 00 00 */	cmpwi r3, 0
/* 8033CE8C 00339DCC  40 82 00 0C */	bne lbl_8033CE98
/* 8033CE90 00339DD0  38 60 00 00 */	li r3, 0
/* 8033CE94 00339DD4  48 00 29 D1 */	bl __OSDoHotReset
lbl_8033CE98:
/* 8033CE98 00339DD8  80 0D 90 D8 */	lwz r0, lbl_80451658-_SDA_BASE_(r13)
/* 8033CE9C 00339DDC  2C 00 00 01 */	cmpwi r0, 1
/* 8033CEA0 00339DE0  40 82 FF E4 */	bne lbl_8033CE84
/* 8033CEA4 00339DE4  80 0D 90 8C */	lwz r0, lbl_8045160C-_SDA_BASE_(r13)
/* 8033CEA8 00339DE8  2C 00 00 00 */	cmpwi r0, 0
/* 8033CEAC 00339DEC  40 82 00 7C */	bne lbl_8033CF28
/* 8033CEB0 00339DF0  48 00 E7 71 */	bl DVDGetCurrentDiskID
/* 8033CEB4 00339DF4  88 03 00 08 */	lbz r0, 8(r3)
/* 8033CEB8 00339DF8  28 00 00 00 */	cmplwi r0, 0
/* 8033CEBC 00339DFC  41 82 00 0C */	beq lbl_8033CEC8
/* 8033CEC0 00339E00  38 00 00 01 */	li r0, 1
/* 8033CEC4 00339E04  48 00 00 08 */	b lbl_8033CECC
lbl_8033CEC8:
/* 8033CEC8 00339E08  38 00 00 00 */	li r0, 0
lbl_8033CECC:
/* 8033CECC 00339E0C  2C 00 00 00 */	cmpwi r0, 0
/* 8033CED0 00339E10  41 82 00 58 */	beq lbl_8033CF28
/* 8033CED4 00339E14  38 60 00 00 */	li r3, 0
/* 8033CED8 00339E18  48 01 31 55 */	bl AISetStreamVolLeft
/* 8033CEDC 00339E1C  38 60 00 00 */	li r3, 0
/* 8033CEE0 00339E20  48 01 31 79 */	bl AISetStreamVolRight
/* 8033CEE4 00339E24  38 61 00 DC */	addi r3, r1, 0xdc
/* 8033CEE8 00339E28  38 80 00 00 */	li r4, 0
/* 8033CEEC 00339E2C  48 00 E0 C1 */	bl DVDCancelStreamAsync
/* 8033CEF0 00339E30  48 00 00 04 */	b lbl_8033CEF4
lbl_8033CEF4:
/* 8033CEF4 00339E34  48 00 00 04 */	b lbl_8033CEF8
lbl_8033CEF8:
/* 8033CEF8 00339E38  48 00 00 18 */	b lbl_8033CF10
lbl_8033CEFC:
/* 8033CEFC 00339E3C  48 00 E7 2D */	bl DVDCheckDisk
/* 8033CF00 00339E40  2C 03 00 00 */	cmpwi r3, 0
/* 8033CF04 00339E44  40 82 00 0C */	bne lbl_8033CF10
/* 8033CF08 00339E48  38 60 00 00 */	li r3, 0
/* 8033CF0C 00339E4C  48 00 29 59 */	bl __OSDoHotReset
lbl_8033CF10:
/* 8033CF10 00339E50  38 61 00 DC */	addi r3, r1, 0xdc
/* 8033CF14 00339E54  48 00 E2 69 */	bl DVDGetCommandBlockStatus
/* 8033CF18 00339E58  2C 03 00 00 */	cmpwi r3, 0
/* 8033CF1C 00339E5C  40 82 FF E0 */	bne lbl_8033CEFC
/* 8033CF20 00339E60  38 60 00 00 */	li r3, 0
/* 8033CF24 00339E64  48 01 2E 49 */	bl AISetStreamPlayState
lbl_8033CF28:
/* 8033CF28 00339E68  38 60 00 20 */	li r3, 0x20
/* 8033CF2C 00339E6C  38 80 00 20 */	li r4, 0x20
/* 8033CF30 00339E70  4B FF E3 7D */	bl OSAllocFromArenaLo
/* 8033CF34 00339E74  7C 7E 1B 78 */	mr r30, r3
/* 8033CF38 00339E78  4B FF FD C5 */	bl GetApploaderPosition
/* 8033CF3C 00339E7C  7C 65 1B 78 */	mr r5, r3
/* 8033CF40 00339E80  7F C3 F3 78 */	mr r3, r30
/* 8033CF44 00339E84  38 80 00 20 */	li r4, 0x20
/* 8033CF48 00339E88  4B FF FC FD */	bl ReadDisc
/* 8033CF4C 00339E8C  4B FF FD B1 */	bl GetApploaderPosition
/* 8033CF50 00339E90  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 8033CF54 00339E94  38 A3 00 20 */	addi r5, r3, 0x20
/* 8033CF58 00339E98  3C 60 81 20 */	lis r3, 0x8120
/* 8033CF5C 00339E9C  38 04 00 1F */	addi r0, r4, 0x1f
/* 8033CF60 00339EA0  54 04 00 34 */	rlwinm r4, r0, 0, 0, 0x1a
/* 8033CF64 00339EA4  4B FF FC E1 */	bl ReadDisc
/* 8033CF68 00339EA8  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 8033CF6C 00339EAC  3C 60 81 20 */	lis r3, 0x8120
/* 8033CF70 00339EB0  38 04 00 1F */	addi r0, r4, 0x1f
/* 8033CF74 00339EB4  54 04 00 34 */	rlwinm r4, r0, 0, 0, 0x1a
/* 8033CF78 00339EB8  4B FF E7 19 */	bl ICInvalidateRange
/* 8033CF7C 00339EBC  3C 60 80 3D */	lis r3, lbl_803CFC38@ha
/* 8033CF80 00339EC0  38 83 FC 38 */	addi r4, r3, lbl_803CFC38@l
/* 8033CF84 00339EC4  7F C3 F3 78 */	mr r3, r30
/* 8033CF88 00339EC8  38 A0 00 0A */	li r5, 0xa
/* 8033CF8C 00339ECC  48 02 B9 C9 */	bl strncmp
/* 8033CF90 00339ED0  2C 03 00 00 */	cmpwi r3, 0
/* 8033CF94 00339ED4  40 81 00 0C */	ble lbl_8033CFA0
/* 8033CF98 00339ED8  38 00 00 01 */	li r0, 1
/* 8033CF9C 00339EDC  48 00 00 08 */	b lbl_8033CFA4
lbl_8033CFA0:
/* 8033CFA0 00339EE0  38 00 00 00 */	li r0, 0
lbl_8033CFA4:
/* 8033CFA4 00339EE4  2C 00 00 00 */	cmpwi r0, 0
/* 8033CFA8 00339EE8  41 82 01 EC */	beq lbl_8033D194
/* 8033CFAC 00339EEC  3C 1B 00 01 */	addis r0, r27, 1
/* 8033CFB0 00339EF0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8033CFB4 00339EF4  40 82 00 B0 */	bne lbl_8033D064
/* 8033CFB8 00339EF8  80 6D 90 DC */	lwz r3, lbl_8045165C-_SDA_BASE_(r13)
/* 8033CFBC 00339EFC  2C 03 00 00 */	cmpwi r3, 0
/* 8033CFC0 00339F00  41 82 00 08 */	beq lbl_8033CFC8
/* 8033CFC4 00339F04  48 00 00 94 */	b lbl_8033D058
lbl_8033CFC8:
/* 8033CFC8 00339F08  3F 60 80 00 */	lis r27, 0x800030F4@ha
/* 8033CFCC 00339F0C  80 1B 30 F4 */	lwz r0, 0x800030F4@l(r27)
/* 8033CFD0 00339F10  2C 00 00 00 */	cmpwi r0, 0
/* 8033CFD4 00339F14  41 82 00 78 */	beq lbl_8033D04C
/* 8033CFD8 00339F18  38 60 00 40 */	li r3, 0x40
/* 8033CFDC 00339F1C  38 80 00 20 */	li r4, 0x20
/* 8033CFE0 00339F20  4B FF E2 CD */	bl OSAllocFromArenaLo
/* 8033CFE4 00339F24  80 DB 30 F4 */	lwz r6, 0x30f4(r27)
/* 8033CFE8 00339F28  7C 7B 1B 78 */	mr r27, r3
/* 8033CFEC 00339F2C  7F 64 DB 78 */	mr r4, r27
/* 8033CFF0 00339F30  38 61 00 5C */	addi r3, r1, 0x5c
/* 8033CFF4 00339F34  38 A0 00 40 */	li r5, 0x40
/* 8033CFF8 00339F38  38 E0 00 00 */	li r7, 0
/* 8033CFFC 00339F3C  39 00 00 00 */	li r8, 0
/* 8033D000 00339F40  48 00 DD 2D */	bl DVDReadAbsAsyncPrio
/* 8033D004 00339F44  48 00 00 04 */	b lbl_8033D008
lbl_8033D008:
/* 8033D008 00339F48  48 00 00 04 */	b lbl_8033D00C
lbl_8033D00C:
/* 8033D00C 00339F4C  48 00 00 18 */	b lbl_8033D024
lbl_8033D010:
/* 8033D010 00339F50  48 00 E6 19 */	bl DVDCheckDisk
/* 8033D014 00339F54  2C 03 00 00 */	cmpwi r3, 0
/* 8033D018 00339F58  40 82 00 0C */	bne lbl_8033D024
/* 8033D01C 00339F5C  38 60 00 00 */	li r3, 0
/* 8033D020 00339F60  48 00 28 45 */	bl __OSDoHotReset
lbl_8033D024:
/* 8033D024 00339F64  38 61 00 5C */	addi r3, r1, 0x5c
/* 8033D028 00339F68  48 00 E1 55 */	bl DVDGetCommandBlockStatus
/* 8033D02C 00339F6C  2C 03 00 00 */	cmpwi r3, 0
/* 8033D030 00339F70  40 82 FF E0 */	bne lbl_8033D010
/* 8033D034 00339F74  3C 60 80 00 */	lis r3, 0x800030F4@ha
/* 8033D038 00339F78  80 1B 00 38 */	lwz r0, 0x38(r27)
/* 8033D03C 00339F7C  80 63 30 F4 */	lwz r3, 0x800030F4@l(r3)
/* 8033D040 00339F80  7C 03 02 14 */	add r0, r3, r0
/* 8033D044 00339F84  90 0D 90 DC */	stw r0, lbl_8045165C-_SDA_BASE_(r13)
/* 8033D048 00339F88  48 00 00 0C */	b lbl_8033D054
lbl_8033D04C:
/* 8033D04C 00339F8C  38 00 24 40 */	li r0, 0x2440
/* 8033D050 00339F90  90 0D 90 DC */	stw r0, lbl_8045165C-_SDA_BASE_(r13)
lbl_8033D054:
/* 8033D054 00339F94  80 6D 90 DC */	lwz r3, lbl_8045165C-_SDA_BASE_(r13)
lbl_8033D058:
/* 8033D058 00339F98  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 8033D05C 00339F9C  7F 63 02 14 */	add r27, r3, r0
/* 8033D060 00339FA0  3B 7B 00 20 */	addi r27, r27, 0x20
lbl_8033D064:
/* 8033D064 00339FA4  93 7F 00 08 */	stw r27, 8(r31)
/* 8033D068 00339FA8  38 61 00 C0 */	addi r3, r1, 0xc0
/* 8033D06C 00339FAC  38 81 00 C4 */	addi r4, r1, 0xc4
/* 8033D070 00339FB0  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8033D074 00339FB4  38 A1 00 C8 */	addi r5, r1, 0xc8
/* 8033D078 00339FB8  7D 88 03 A6 */	mtlr r12
/* 8033D07C 00339FBC  4E 80 00 21 */	blrl 
/* 8033D080 00339FC0  38 60 00 1C */	li r3, 0x1c
/* 8033D084 00339FC4  38 80 00 01 */	li r4, 1
/* 8033D088 00339FC8  4B FF E2 25 */	bl OSAllocFromArenaLo
/* 8033D08C 00339FCC  7C 7B 1B 78 */	mr r27, r3
/* 8033D090 00339FD0  7F 63 DB 78 */	mr r3, r27
/* 8033D094 00339FD4  7F E4 FB 78 */	mr r4, r31
/* 8033D098 00339FD8  38 A0 00 1C */	li r5, 0x1c
/* 8033D09C 00339FDC  4B CC 64 A5 */	bl memcpy
/* 8033D0A0 00339FE0  3C 80 80 00 */	lis r4, 0x800030F0@ha
/* 8033D0A4 00339FE4  81 81 00 C0 */	lwz r12, 0xc0(r1)
/* 8033D0A8 00339FE8  3C 60 80 00 */	lis r3, OSReport@ha
/* 8033D0AC 00339FEC  93 64 30 F0 */	stw r27, 0x800030F0@l(r4)
/* 8033D0B0 00339FF0  38 63 6A BC */	addi r3, r3, OSReport@l
/* 8033D0B4 00339FF4  7D 88 03 A6 */	mtlr r12
/* 8033D0B8 00339FF8  4E 80 00 21 */	blrl 
/* 8033D0BC 00339FFC  7F 63 DB 78 */	mr r3, r27
/* 8033D0C0 0033A000  4B FF E1 E5 */	bl OSSetArenaLo
/* 8033D0C4 0033A004  48 00 00 04 */	b lbl_8033D0C8
lbl_8033D0C8:
/* 8033D0C8 0033A008  48 00 00 04 */	b lbl_8033D0CC
lbl_8033D0CC:
/* 8033D0CC 0033A00C  48 00 00 50 */	b lbl_8033D11C
lbl_8033D0D0:
/* 8033D0D0 0033A010  80 C1 00 D4 */	lwz r6, 0xd4(r1)
/* 8033D0D4 0033A014  38 61 00 2C */	addi r3, r1, 0x2c
/* 8033D0D8 0033A018  80 A1 00 D0 */	lwz r5, 0xd0(r1)
/* 8033D0DC 0033A01C  38 E0 00 00 */	li r7, 0
/* 8033D0E0 0033A020  80 81 00 CC */	lwz r4, 0xcc(r1)
/* 8033D0E4 0033A024  39 00 00 00 */	li r8, 0
/* 8033D0E8 0033A028  48 00 DC 45 */	bl DVDReadAbsAsyncPrio
/* 8033D0EC 0033A02C  48 00 00 04 */	b lbl_8033D0F0
lbl_8033D0F0:
/* 8033D0F0 0033A030  48 00 00 04 */	b lbl_8033D0F4
lbl_8033D0F4:
/* 8033D0F4 0033A034  48 00 00 18 */	b lbl_8033D10C
lbl_8033D0F8:
/* 8033D0F8 0033A038  48 00 E5 31 */	bl DVDCheckDisk
/* 8033D0FC 0033A03C  2C 03 00 00 */	cmpwi r3, 0
/* 8033D100 0033A040  40 82 00 0C */	bne lbl_8033D10C
/* 8033D104 0033A044  38 60 00 00 */	li r3, 0
/* 8033D108 0033A048  48 00 27 5D */	bl __OSDoHotReset
lbl_8033D10C:
/* 8033D10C 0033A04C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8033D110 0033A050  48 00 E0 6D */	bl DVDGetCommandBlockStatus
/* 8033D114 0033A054  2C 03 00 00 */	cmpwi r3, 0
/* 8033D118 0033A058  40 82 FF E0 */	bne lbl_8033D0F8
lbl_8033D11C:
/* 8033D11C 0033A05C  81 81 00 C4 */	lwz r12, 0xc4(r1)
/* 8033D120 0033A060  38 61 00 CC */	addi r3, r1, 0xcc
/* 8033D124 0033A064  38 81 00 D0 */	addi r4, r1, 0xd0
/* 8033D128 0033A068  38 A1 00 D4 */	addi r5, r1, 0xd4
/* 8033D12C 0033A06C  7D 88 03 A6 */	mtlr r12
/* 8033D130 0033A070  4E 80 00 21 */	blrl 
/* 8033D134 0033A074  2C 03 00 00 */	cmpwi r3, 0
/* 8033D138 0033A078  40 82 FF 98 */	bne lbl_8033D0D0
/* 8033D13C 0033A07C  81 81 00 C8 */	lwz r12, 0xc8(r1)
/* 8033D140 0033A080  7D 88 03 A6 */	mtlr r12
/* 8033D144 0033A084  4E 80 00 21 */	blrl 
/* 8033D148 0033A088  7C 7C 1B 78 */	mr r28, r3
/* 8033D14C 0033A08C  38 60 00 1C */	li r3, 0x1c
/* 8033D150 0033A090  38 80 00 01 */	li r4, 1
/* 8033D154 0033A094  4B FF E1 59 */	bl OSAllocFromArenaLo
/* 8033D158 0033A098  7C 7B 1B 78 */	mr r27, r3
/* 8033D15C 0033A09C  7F 63 DB 78 */	mr r3, r27
/* 8033D160 0033A0A0  7F E4 FB 78 */	mr r4, r31
/* 8033D164 0033A0A4  38 A0 00 1C */	li r5, 0x1c
/* 8033D168 0033A0A8  4B CC 63 D9 */	bl memcpy
/* 8033D16C 0033A0AC  3C 80 80 00 */	lis r4, 0x800030F0@ha
/* 8033D170 0033A0B0  3C 60 CC 00 */	lis r3, 0xCC003000@ha
/* 8033D174 0033A0B4  93 64 30 F0 */	stw r27, 0x800030F0@l(r4)
/* 8033D178 0033A0B8  38 63 30 00 */	addi r3, r3, 0xCC003000@l
/* 8033D17C 0033A0BC  38 00 00 07 */	li r0, 7
/* 8033D180 0033A0C0  90 03 00 24 */	stw r0, 0x24(r3)
/* 8033D184 0033A0C4  48 00 05 71 */	bl __RAS_OSDisableInterrupts_begin 
/* 8033D188 0033A0C8  7F 83 E3 78 */	mr r3, r28
/* 8033D18C 0033A0CC  4B FF FA 7D */	bl Run
/* 8033D190 0033A0D0  48 00 00 A0 */	b lbl_8033D230
lbl_8033D194:
/* 8033D194 0033A0D4  3C 80 81 30 */	lis r4, 0x812FDFF0@ha
/* 8033D198 0033A0D8  93 84 DF F0 */	stw r28, 0x812FDFF0@l(r4)
/* 8033D19C 0033A0DC  38 00 00 01 */	li r0, 1
/* 8033D1A0 0033A0E0  3C 60 80 00 */	lis r3, 0x800030E2@ha
/* 8033D1A4 0033A0E4  93 A4 DF EC */	stw r29, -0x2014(r4)
/* 8033D1A8 0033A0E8  98 03 30 E2 */	stb r0, 0x800030E2@l(r3)
/* 8033D1AC 0033A0EC  4B FF FB 51 */	bl GetApploaderPosition
/* 8033D1B0 0033A0F0  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 8033D1B4 0033A0F4  3C 80 81 30 */	lis r4, 0x8130
/* 8033D1B8 0033A0F8  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 8033D1BC 0033A0FC  38 E0 00 00 */	li r7, 0
/* 8033D1C0 0033A100  7C C3 02 14 */	add r6, r3, r0
/* 8033D1C4 0033A104  38 05 00 1F */	addi r0, r5, 0x1f
/* 8033D1C8 0033A108  38 C6 00 20 */	addi r6, r6, 0x20
/* 8033D1CC 0033A10C  54 05 00 34 */	rlwinm r5, r0, 0, 0, 0x1a
/* 8033D1D0 0033A110  38 61 00 8C */	addi r3, r1, 0x8c
/* 8033D1D4 0033A114  39 00 00 00 */	li r8, 0
/* 8033D1D8 0033A118  48 00 DB 55 */	bl DVDReadAbsAsyncPrio
/* 8033D1DC 0033A11C  48 00 00 04 */	b lbl_8033D1E0
lbl_8033D1E0:
/* 8033D1E0 0033A120  48 00 00 04 */	b lbl_8033D1E4
lbl_8033D1E4:
/* 8033D1E4 0033A124  48 00 00 18 */	b lbl_8033D1FC
lbl_8033D1E8:
/* 8033D1E8 0033A128  48 00 E4 41 */	bl DVDCheckDisk
/* 8033D1EC 0033A12C  2C 03 00 00 */	cmpwi r3, 0
/* 8033D1F0 0033A130  40 82 00 0C */	bne lbl_8033D1FC
/* 8033D1F4 0033A134  38 60 00 00 */	li r3, 0
/* 8033D1F8 0033A138  48 00 26 6D */	bl __OSDoHotReset
lbl_8033D1FC:
/* 8033D1FC 0033A13C  38 61 00 8C */	addi r3, r1, 0x8c
/* 8033D200 0033A140  48 00 DF 7D */	bl DVDGetCommandBlockStatus
/* 8033D204 0033A144  2C 03 00 00 */	cmpwi r3, 0
/* 8033D208 0033A148  40 82 FF E0 */	bne lbl_8033D1E8
/* 8033D20C 0033A14C  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8033D210 0033A150  3C 60 81 30 */	lis r3, 0x8130
/* 8033D214 0033A154  38 04 00 1F */	addi r0, r4, 0x1f
/* 8033D218 0033A158  54 04 00 34 */	rlwinm r4, r0, 0, 0, 0x1a
/* 8033D21C 0033A15C  4B FF E4 75 */	bl ICInvalidateRange
/* 8033D220 0033A160  48 00 04 D5 */	bl __RAS_OSDisableInterrupts_begin 
/* 8033D224 0033A164  4B FF E4 A1 */	bl ICFlashInvalidate
/* 8033D228 0033A168  3C 60 81 30 */	lis r3, 0x8130
/* 8033D22C 0033A16C  4B FF F9 DD */	bl Run
lbl_8033D230:
/* 8033D230 0033A170  BB 01 01 10 */	lmw r24, 0x110(r1)
/* 8033D234 0033A174  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8033D238 0033A178  38 21 01 30 */	addi r1, r1, 0x130
/* 8033D23C 0033A17C  7C 08 03 A6 */	mtlr r0
/* 8033D240 0033A180  4E 80 00 20 */	blr 

.global __OSBootDol
__OSBootDol:
/* 8033D244 0033A184  7C 08 02 A6 */	mflr r0
/* 8033D248 0033A188  90 01 00 04 */	stw r0, 4(r1)
/* 8033D24C 0033A18C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8033D250 0033A190  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8033D254 0033A194  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8033D258 0033A198  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8033D25C 0033A19C  7C 7F 1B 78 */	mr r31, r3
/* 8033D260 0033A1A0  7C 9D 23 78 */	mr r29, r4
/* 8033D264 0033A1A4  7C BE 2B 78 */	mr r30, r5
/* 8033D268 0033A1A8  38 61 00 18 */	addi r3, r1, 0x18
/* 8033D26C 0033A1AC  38 81 00 14 */	addi r4, r1, 0x14
/* 8033D270 0033A1B0  48 00 23 DD */	bl OSGetSaveRegion
/* 8033D274 0033A1B4  7F E5 FB 78 */	mr r5, r31
/* 8033D278 0033A1B8  4C C6 31 82 */	crclr 6
/* 8033D27C 0033A1BC  38 61 00 1C */	addi r3, r1, 0x1c
/* 8033D280 0033A1C0  38 8D 84 28 */	addi r4, r13, lbl_804509A8-_SDA_BASE_
/* 8033D284 0033A1C4  48 02 92 59 */	bl sprintf
/* 8033D288 0033A1C8  28 1E 00 00 */	cmplwi r30, 0
/* 8033D28C 0033A1CC  3B E0 00 00 */	li r31, 0
/* 8033D290 0033A1D0  41 82 00 28 */	beq lbl_8033D2B8
/* 8033D294 0033A1D4  7F C3 F3 78 */	mr r3, r30
/* 8033D298 0033A1D8  48 00 00 04 */	b lbl_8033D29C
lbl_8033D29C:
/* 8033D29C 0033A1DC  48 00 00 04 */	b lbl_8033D2A0
lbl_8033D2A0:
/* 8033D2A0 0033A1E0  48 00 00 0C */	b lbl_8033D2AC
lbl_8033D2A4:
/* 8033D2A4 0033A1E4  38 63 00 04 */	addi r3, r3, 4
/* 8033D2A8 0033A1E8  3B FF 00 01 */	addi r31, r31, 1
lbl_8033D2AC:
/* 8033D2AC 0033A1EC  80 03 00 00 */	lwz r0, 0(r3)
/* 8033D2B0 0033A1F0  28 00 00 00 */	cmplwi r0, 0
/* 8033D2B4 0033A1F4  40 82 FF F0 */	bne lbl_8033D2A4
lbl_8033D2B8:
/* 8033D2B8 0033A1F8  38 1F 00 02 */	addi r0, r31, 2
/* 8033D2BC 0033A1FC  54 03 10 3A */	slwi r3, r0, 2
/* 8033D2C0 0033A200  38 80 00 01 */	li r4, 1
/* 8033D2C4 0033A204  4B FF DF E9 */	bl OSAllocFromArenaLo
/* 8033D2C8 0033A208  38 01 00 1C */	addi r0, r1, 0x1c
/* 8033D2CC 0033A20C  90 03 00 00 */	stw r0, 0(r3)
/* 8033D2D0 0033A210  38 BE 00 04 */	addi r5, r30, 4
/* 8033D2D4 0033A214  38 C3 00 04 */	addi r6, r3, 4
/* 8033D2D8 0033A218  48 00 00 04 */	b lbl_8033D2DC
lbl_8033D2DC:
/* 8033D2DC 0033A21C  39 1F 00 01 */	addi r8, r31, 1
/* 8033D2E0 0033A220  2C 08 00 01 */	cmpwi r8, 1
/* 8033D2E4 0033A224  38 88 FF FF */	addi r4, r8, -1
/* 8033D2E8 0033A228  40 81 00 C0 */	ble lbl_8033D3A8
/* 8033D2EC 0033A22C  54 80 E8 FE */	srwi r0, r4, 3
/* 8033D2F0 0033A230  28 00 00 00 */	cmplwi r0, 0
/* 8033D2F4 0033A234  7C 09 03 A6 */	mtctr r0
/* 8033D2F8 0033A238  41 82 00 94 */	beq lbl_8033D38C
/* 8033D2FC 0033A23C  48 00 00 04 */	b lbl_8033D300
lbl_8033D300:
/* 8033D300 0033A240  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D304 0033A244  38 A5 00 04 */	addi r5, r5, 4
/* 8033D308 0033A248  90 06 00 00 */	stw r0, 0(r6)
/* 8033D30C 0033A24C  38 C6 00 04 */	addi r6, r6, 4
/* 8033D310 0033A250  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D314 0033A254  38 A5 00 04 */	addi r5, r5, 4
/* 8033D318 0033A258  90 06 00 00 */	stw r0, 0(r6)
/* 8033D31C 0033A25C  38 C6 00 04 */	addi r6, r6, 4
/* 8033D320 0033A260  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D324 0033A264  38 A5 00 04 */	addi r5, r5, 4
/* 8033D328 0033A268  90 06 00 00 */	stw r0, 0(r6)
/* 8033D32C 0033A26C  38 C6 00 04 */	addi r6, r6, 4
/* 8033D330 0033A270  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D334 0033A274  38 A5 00 04 */	addi r5, r5, 4
/* 8033D338 0033A278  90 06 00 00 */	stw r0, 0(r6)
/* 8033D33C 0033A27C  38 C6 00 04 */	addi r6, r6, 4
/* 8033D340 0033A280  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D344 0033A284  38 A5 00 04 */	addi r5, r5, 4
/* 8033D348 0033A288  90 06 00 00 */	stw r0, 0(r6)
/* 8033D34C 0033A28C  38 C6 00 04 */	addi r6, r6, 4
/* 8033D350 0033A290  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D354 0033A294  38 A5 00 04 */	addi r5, r5, 4
/* 8033D358 0033A298  90 06 00 00 */	stw r0, 0(r6)
/* 8033D35C 0033A29C  38 C6 00 04 */	addi r6, r6, 4
/* 8033D360 0033A2A0  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D364 0033A2A4  38 A5 00 04 */	addi r5, r5, 4
/* 8033D368 0033A2A8  90 06 00 00 */	stw r0, 0(r6)
/* 8033D36C 0033A2AC  38 C6 00 04 */	addi r6, r6, 4
/* 8033D370 0033A2B0  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D374 0033A2B4  38 A5 00 04 */	addi r5, r5, 4
/* 8033D378 0033A2B8  90 06 00 00 */	stw r0, 0(r6)
/* 8033D37C 0033A2BC  38 C6 00 04 */	addi r6, r6, 4
/* 8033D380 0033A2C0  42 00 FF 80 */	bdnz lbl_8033D300
/* 8033D384 0033A2C4  70 84 00 07 */	andi. r4, r4, 7
/* 8033D388 0033A2C8  41 82 00 20 */	beq lbl_8033D3A8
lbl_8033D38C:
/* 8033D38C 0033A2CC  7C 89 03 A6 */	mtctr r4
/* 8033D390 0033A2D0  48 00 00 04 */	b lbl_8033D394
lbl_8033D394:
/* 8033D394 0033A2D4  80 05 FF FC */	lwz r0, -4(r5)
/* 8033D398 0033A2D8  38 A5 00 04 */	addi r5, r5, 4
/* 8033D39C 0033A2DC  90 06 00 00 */	stw r0, 0(r6)
/* 8033D3A0 0033A2E0  38 C6 00 04 */	addi r6, r6, 4
/* 8033D3A4 0033A2E4  42 00 FF F0 */	bdnz lbl_8033D394
lbl_8033D3A8:
/* 8033D3A8 0033A2E8  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8033D3AC 0033A2EC  7C 69 1B 78 */	mr r9, r3
/* 8033D3B0 0033A2F0  80 C1 00 14 */	lwz r6, 0x14(r1)
/* 8033D3B4 0033A2F4  7F A4 EB 78 */	mr r4, r29
/* 8033D3B8 0033A2F8  38 60 FF FF */	li r3, -1
/* 8033D3BC 0033A2FC  38 E0 00 00 */	li r7, 0
/* 8033D3C0 0033A300  4B FF FA 01 */	bl __OSBootDolSimple
/* 8033D3C4 0033A304  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8033D3C8 0033A308  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8033D3CC 0033A30C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8033D3D0 0033A310  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8033D3D4 0033A314  38 21 00 40 */	addi r1, r1, 0x40
/* 8033D3D8 0033A318  7C 08 03 A6 */	mtlr r0
/* 8033D3DC 0033A31C  4E 80 00 20 */	blr 

