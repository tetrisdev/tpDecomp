lbl_80365078:
/* 80365078  7C 67 1B 79 */	or. r7, r3, r3
/* 8036507C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80365080  38 A0 00 01 */	li r5, 1
/* 80365084  38 C0 00 01 */	li r6, 1
/* 80365088  40 80 00 0C */	bge lbl_80365094
/* 8036508C  7C E7 00 D0 */	neg r7, r7
/* 80365090  38 A0 FF FF */	li r5, -1
lbl_80365094:
/* 80365094  2C 04 00 00 */	cmpwi r4, 0
/* 80365098  40 80 00 0C */	bge lbl_803650A4
/* 8036509C  7C 84 00 D0 */	neg r4, r4
/* 803650A0  38 C0 FF FF */	li r6, -1
lbl_803650A4:
/* 803650A4  7C 67 23 D6 */	divw r3, r7, r4
/* 803650A8  7C 05 31 D6 */	mullw r0, r5, r6
/* 803650AC  7C 63 01 D6 */	mullw r3, r3, r0
/* 803650B0  7C 03 21 D6 */	mullw r0, r3, r4
/* 803650B4  90 61 00 08 */	stw r3, 8(r1)
/* 803650B8  7C 86 01 D6 */	mullw r4, r6, r0
/* 803650BC  7C 07 29 D6 */	mullw r0, r7, r5
/* 803650C0  7C 84 00 50 */	subf r4, r4, r0
/* 803650C4  90 81 00 0C */	stw r4, 0xc(r1)
/* 803650C8  38 21 00 10 */	addi r1, r1, 0x10
/* 803650CC  4E 80 00 20 */	blr 
