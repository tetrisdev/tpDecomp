lbl_80368288:
/* 80368288  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8036828C  7C 08 02 A6 */	mflr r0
/* 80368290  38 E0 00 00 */	li r7, 0
/* 80368294  88 C3 00 01 */	lbz r6, 1(r3)
/* 80368298  90 01 00 34 */	stw r0, 0x34(r1)
/* 8036829C  38 00 00 01 */	li r0, 1
/* 803682A0  7C C6 07 74 */	extsb r6, r6
/* 803682A4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803682A8  2C 06 00 25 */	cmpwi r6, 0x25
/* 803682AC  3B E3 00 01 */	addi r31, r3, 1
/* 803682B0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803682B4  7C BE 2B 78 */	mr r30, r5
/* 803682B8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803682BC  7C 9D 23 78 */	mr r29, r4
/* 803682C0  98 E1 00 09 */	stb r7, 9(r1)
/* 803682C4  98 01 00 08 */	stb r0, 8(r1)
/* 803682C8  98 E1 00 0A */	stb r7, 0xa(r1)
/* 803682CC  98 E1 00 0B */	stb r7, 0xb(r1)
/* 803682D0  98 E1 00 0C */	stb r7, 0xc(r1)
/* 803682D4  90 E1 00 10 */	stw r7, 0x10(r1)
/* 803682D8  90 E1 00 14 */	stw r7, 0x14(r1)
/* 803682DC  40 82 00 28 */	bne lbl_80368304
/* 803682E0  98 C1 00 0D */	stb r6, 0xd(r1)
/* 803682E4  38 7F 00 01 */	addi r3, r31, 1
/* 803682E8  80 81 00 08 */	lwz r4, 8(r1)
/* 803682EC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803682F0  90 9E 00 00 */	stw r4, 0(r30)
/* 803682F4  90 1E 00 04 */	stw r0, 4(r30)
/* 803682F8  90 FE 00 08 */	stw r7, 8(r30)
/* 803682FC  90 FE 00 0C */	stw r7, 0xc(r30)
/* 80368300  48 00 04 70 */	b lbl_80368770
lbl_80368304:
/* 80368304  38 06 FF E0 */	addi r0, r6, -32
/* 80368308  38 80 00 01 */	li r4, 1
/* 8036830C  28 00 00 10 */	cmplwi r0, 0x10
/* 80368310  41 81 00 70 */	bgt lbl_80368380
/* 80368314  3C 60 80 3D */	lis r3, lit_1442@ha /* 0x803D3100@ha */
/* 80368318  54 00 10 3A */	slwi r0, r0, 2
/* 8036831C  38 63 31 00 */	addi r3, r3, lit_1442@l /* 0x803D3100@l */
/* 80368320  7C 03 00 2E */	lwzx r0, r3, r0
/* 80368324  7C 09 03 A6 */	mtctr r0
/* 80368328  4E 80 04 20 */	bctr 
/* 8036832C  38 00 00 00 */	li r0, 0
/* 80368330  98 01 00 08 */	stb r0, 8(r1)
/* 80368334  48 00 00 50 */	b lbl_80368384
/* 80368338  38 00 00 01 */	li r0, 1
/* 8036833C  98 01 00 09 */	stb r0, 9(r1)
/* 80368340  48 00 00 44 */	b lbl_80368384
/* 80368344  88 01 00 09 */	lbz r0, 9(r1)
/* 80368348  28 00 00 01 */	cmplwi r0, 1
/* 8036834C  41 82 00 38 */	beq lbl_80368384
/* 80368350  38 00 00 02 */	li r0, 2
/* 80368354  98 01 00 09 */	stb r0, 9(r1)
/* 80368358  48 00 00 2C */	b lbl_80368384
/* 8036835C  38 00 00 01 */	li r0, 1
/* 80368360  98 01 00 0B */	stb r0, 0xb(r1)
/* 80368364  48 00 00 20 */	b lbl_80368384
/* 80368368  88 01 00 08 */	lbz r0, 8(r1)
/* 8036836C  28 00 00 00 */	cmplwi r0, 0
/* 80368370  41 82 00 14 */	beq lbl_80368384
/* 80368374  38 00 00 02 */	li r0, 2
/* 80368378  98 01 00 08 */	stb r0, 8(r1)
/* 8036837C  48 00 00 08 */	b lbl_80368384
lbl_80368380:
/* 80368380  38 80 00 00 */	li r4, 0
lbl_80368384:
/* 80368384  2C 04 00 00 */	cmpwi r4, 0
/* 80368388  41 82 00 10 */	beq lbl_80368398
/* 8036838C  8C DF 00 01 */	lbzu r6, 1(r31)
/* 80368390  7C C6 07 74 */	extsb r6, r6
/* 80368394  4B FF FF 70 */	b lbl_80368304
lbl_80368398:
/* 80368398  2C 06 00 2A */	cmpwi r6, 0x2a
/* 8036839C  40 82 00 3C */	bne lbl_803683D8
/* 803683A0  7F A3 EB 78 */	mr r3, r29
/* 803683A4  38 80 00 01 */	li r4, 1
/* 803683A8  4B FF 97 6D */	bl __va_arg
/* 803683AC  80 03 00 00 */	lwz r0, 0(r3)
/* 803683B0  2C 00 00 00 */	cmpwi r0, 0
/* 803683B4  90 01 00 10 */	stw r0, 0x10(r1)
/* 803683B8  40 80 00 14 */	bge lbl_803683CC
/* 803683BC  7C 00 00 D0 */	neg r0, r0
/* 803683C0  38 60 00 00 */	li r3, 0
/* 803683C4  98 61 00 08 */	stb r3, 8(r1)
/* 803683C8  90 01 00 10 */	stw r0, 0x10(r1)
lbl_803683CC:
/* 803683CC  8C DF 00 01 */	lbzu r6, 1(r31)
/* 803683D0  7C C6 07 74 */	extsb r6, r6
/* 803683D4  48 00 00 3C */	b lbl_80368410
lbl_803683D8:
/* 803683D8  3C 60 80 3D */	lis r3, __ctype_map@ha /* 0x803D2C18@ha */
/* 803683DC  38 63 2C 18 */	addi r3, r3, __ctype_map@l /* 0x803D2C18@l */
/* 803683E0  48 00 00 20 */	b lbl_80368400
lbl_803683E4:
/* 803683E4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 803683E8  1C 00 00 0A */	mulli r0, r0, 0xa
/* 803683EC  7C 86 02 14 */	add r4, r6, r0
/* 803683F0  8C DF 00 01 */	lbzu r6, 1(r31)
/* 803683F4  38 04 FF D0 */	addi r0, r4, -48
/* 803683F8  90 01 00 10 */	stw r0, 0x10(r1)
/* 803683FC  7C C6 07 74 */	extsb r6, r6
lbl_80368400:
/* 80368400  54 C0 06 3E */	clrlwi r0, r6, 0x18
/* 80368404  7C 03 00 AE */	lbzx r0, r3, r0
/* 80368408  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8036840C  40 82 FF D8 */	bne lbl_803683E4
lbl_80368410:
/* 80368410  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 80368414  2C 05 01 FD */	cmpwi r5, 0x1fd
/* 80368418  40 81 00 30 */	ble lbl_80368448
/* 8036841C  38 00 00 FF */	li r0, 0xff
/* 80368420  80 81 00 08 */	lwz r4, 8(r1)
/* 80368424  98 01 00 0D */	stb r0, 0xd(r1)
/* 80368428  38 7F 00 01 */	addi r3, r31, 1
/* 8036842C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368430  90 9E 00 00 */	stw r4, 0(r30)
/* 80368434  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80368438  90 9E 00 04 */	stw r4, 4(r30)
/* 8036843C  90 BE 00 08 */	stw r5, 8(r30)
/* 80368440  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80368444  48 00 03 2C */	b lbl_80368770
lbl_80368448:
/* 80368448  2C 06 00 2E */	cmpwi r6, 0x2e
/* 8036844C  40 82 00 84 */	bne lbl_803684D0
/* 80368450  8C DF 00 01 */	lbzu r6, 1(r31)
/* 80368454  38 00 00 01 */	li r0, 1
/* 80368458  98 01 00 0A */	stb r0, 0xa(r1)
/* 8036845C  7C C6 07 74 */	extsb r6, r6
/* 80368460  2C 06 00 2A */	cmpwi r6, 0x2a
/* 80368464  40 82 00 34 */	bne lbl_80368498
/* 80368468  7F A3 EB 78 */	mr r3, r29
/* 8036846C  38 80 00 01 */	li r4, 1
/* 80368470  4B FF 96 A5 */	bl __va_arg
/* 80368474  80 03 00 00 */	lwz r0, 0(r3)
/* 80368478  2C 00 00 00 */	cmpwi r0, 0
/* 8036847C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368480  40 80 00 0C */	bge lbl_8036848C
/* 80368484  38 00 00 00 */	li r0, 0
/* 80368488  98 01 00 0A */	stb r0, 0xa(r1)
lbl_8036848C:
/* 8036848C  8C DF 00 01 */	lbzu r6, 1(r31)
/* 80368490  7C C6 07 74 */	extsb r6, r6
/* 80368494  48 00 00 3C */	b lbl_803684D0
lbl_80368498:
/* 80368498  3C 60 80 3D */	lis r3, __ctype_map@ha /* 0x803D2C18@ha */
/* 8036849C  38 63 2C 18 */	addi r3, r3, __ctype_map@l /* 0x803D2C18@l */
/* 803684A0  48 00 00 20 */	b lbl_803684C0
lbl_803684A4:
/* 803684A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803684A8  1C 00 00 0A */	mulli r0, r0, 0xa
/* 803684AC  7C 86 02 14 */	add r4, r6, r0
/* 803684B0  8C DF 00 01 */	lbzu r6, 1(r31)
/* 803684B4  38 04 FF D0 */	addi r0, r4, -48
/* 803684B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803684BC  7C C6 07 74 */	extsb r6, r6
lbl_803684C0:
/* 803684C0  54 C0 06 3E */	clrlwi r0, r6, 0x18
/* 803684C4  7C 03 00 AE */	lbzx r0, r3, r0
/* 803684C8  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 803684CC  40 82 FF D8 */	bne lbl_803684A4
lbl_803684D0:
/* 803684D0  2C 06 00 68 */	cmpwi r6, 0x68
/* 803684D4  38 80 00 01 */	li r4, 1
/* 803684D8  41 82 00 20 */	beq lbl_803684F8
/* 803684DC  40 80 00 10 */	bge lbl_803684EC
/* 803684E0  2C 06 00 4C */	cmpwi r6, 0x4c
/* 803684E4  41 82 00 68 */	beq lbl_8036854C
/* 803684E8  48 00 00 70 */	b lbl_80368558
lbl_803684EC:
/* 803684EC  2C 06 00 6C */	cmpwi r6, 0x6c
/* 803684F0  41 82 00 30 */	beq lbl_80368520
/* 803684F4  48 00 00 64 */	b lbl_80368558
lbl_803684F8:
/* 803684F8  88 1F 00 01 */	lbz r0, 1(r31)
/* 803684FC  38 60 00 02 */	li r3, 2
/* 80368500  98 61 00 0C */	stb r3, 0xc(r1)
/* 80368504  7C 00 07 74 */	extsb r0, r0
/* 80368508  2C 00 00 68 */	cmpwi r0, 0x68
/* 8036850C  40 82 00 50 */	bne lbl_8036855C
/* 80368510  98 81 00 0C */	stb r4, 0xc(r1)
/* 80368514  7C 06 03 78 */	mr r6, r0
/* 80368518  3B FF 00 01 */	addi r31, r31, 1
/* 8036851C  48 00 00 40 */	b lbl_8036855C
lbl_80368520:
/* 80368520  88 1F 00 01 */	lbz r0, 1(r31)
/* 80368524  38 60 00 03 */	li r3, 3
/* 80368528  98 61 00 0C */	stb r3, 0xc(r1)
/* 8036852C  7C 03 07 74 */	extsb r3, r0
/* 80368530  2C 03 00 6C */	cmpwi r3, 0x6c
/* 80368534  40 82 00 28 */	bne lbl_8036855C
/* 80368538  38 00 00 04 */	li r0, 4
/* 8036853C  7C 66 1B 78 */	mr r6, r3
/* 80368540  98 01 00 0C */	stb r0, 0xc(r1)
/* 80368544  3B FF 00 01 */	addi r31, r31, 1
/* 80368548  48 00 00 14 */	b lbl_8036855C
lbl_8036854C:
/* 8036854C  38 00 00 05 */	li r0, 5
/* 80368550  98 01 00 0C */	stb r0, 0xc(r1)
/* 80368554  48 00 00 08 */	b lbl_8036855C
lbl_80368558:
/* 80368558  38 80 00 00 */	li r4, 0
lbl_8036855C:
/* 8036855C  2C 04 00 00 */	cmpwi r4, 0
/* 80368560  41 82 00 0C */	beq lbl_8036856C
/* 80368564  8C DF 00 01 */	lbzu r6, 1(r31)
/* 80368568  7C C6 07 74 */	extsb r6, r6
lbl_8036856C:
/* 8036856C  38 06 FF BF */	addi r0, r6, -65
/* 80368570  98 C1 00 0D */	stb r6, 0xd(r1)
/* 80368574  28 00 00 37 */	cmplwi r0, 0x37
/* 80368578  41 81 01 CC */	bgt lbl_80368744
/* 8036857C  3C 60 80 3D */	lis r3, lit_1443@ha /* 0x803D3020@ha */
/* 80368580  54 00 10 3A */	slwi r0, r0, 2
/* 80368584  38 63 30 20 */	addi r3, r3, lit_1443@l /* 0x803D3020@l */
/* 80368588  7C 03 00 2E */	lwzx r0, r3, r0
/* 8036858C  7C 09 03 A6 */	mtctr r0
/* 80368590  4E 80 04 20 */	bctr 
/* 80368594  88 01 00 0C */	lbz r0, 0xc(r1)
/* 80368598  28 00 00 05 */	cmplwi r0, 5
/* 8036859C  40 82 00 10 */	bne lbl_803685AC
/* 803685A0  38 00 00 FF */	li r0, 0xff
/* 803685A4  98 01 00 0D */	stb r0, 0xd(r1)
/* 803685A8  48 00 01 A4 */	b lbl_8036874C
lbl_803685AC:
/* 803685AC  88 01 00 0A */	lbz r0, 0xa(r1)
/* 803685B0  28 00 00 00 */	cmplwi r0, 0
/* 803685B4  40 82 00 10 */	bne lbl_803685C4
/* 803685B8  38 00 00 01 */	li r0, 1
/* 803685BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803685C0  48 00 01 8C */	b lbl_8036874C
lbl_803685C4:
/* 803685C4  88 01 00 08 */	lbz r0, 8(r1)
/* 803685C8  28 00 00 02 */	cmplwi r0, 2
/* 803685CC  40 82 01 80 */	bne lbl_8036874C
/* 803685D0  38 00 00 01 */	li r0, 1
/* 803685D4  98 01 00 08 */	stb r0, 8(r1)
/* 803685D8  48 00 01 74 */	b lbl_8036874C
/* 803685DC  88 01 00 0C */	lbz r0, 0xc(r1)
/* 803685E0  28 00 00 02 */	cmplwi r0, 2
/* 803685E4  41 82 00 0C */	beq lbl_803685F0
/* 803685E8  28 00 00 04 */	cmplwi r0, 4
/* 803685EC  40 82 00 10 */	bne lbl_803685FC
lbl_803685F0:
/* 803685F0  38 00 00 FF */	li r0, 0xff
/* 803685F4  98 01 00 0D */	stb r0, 0xd(r1)
/* 803685F8  48 00 01 54 */	b lbl_8036874C
lbl_803685FC:
/* 803685FC  88 01 00 0A */	lbz r0, 0xa(r1)
/* 80368600  28 00 00 00 */	cmplwi r0, 0
/* 80368604  40 82 01 48 */	bne lbl_8036874C
/* 80368608  38 00 00 06 */	li r0, 6
/* 8036860C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368610  48 00 01 3C */	b lbl_8036874C
/* 80368614  88 01 00 0A */	lbz r0, 0xa(r1)
/* 80368618  28 00 00 00 */	cmplwi r0, 0
/* 8036861C  40 82 00 0C */	bne lbl_80368628
/* 80368620  38 00 00 0D */	li r0, 0xd
/* 80368624  90 01 00 14 */	stw r0, 0x14(r1)
lbl_80368628:
/* 80368628  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8036862C  28 00 00 02 */	cmplwi r0, 2
/* 80368630  41 82 00 14 */	beq lbl_80368644
/* 80368634  28 00 00 04 */	cmplwi r0, 4
/* 80368638  41 82 00 0C */	beq lbl_80368644
/* 8036863C  28 00 00 01 */	cmplwi r0, 1
/* 80368640  40 82 01 0C */	bne lbl_8036874C
lbl_80368644:
/* 80368644  38 00 00 FF */	li r0, 0xff
/* 80368648  98 01 00 0D */	stb r0, 0xd(r1)
/* 8036864C  48 00 01 00 */	b lbl_8036874C
/* 80368650  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368654  2C 00 00 00 */	cmpwi r0, 0
/* 80368658  40 82 00 0C */	bne lbl_80368664
/* 8036865C  38 00 00 01 */	li r0, 1
/* 80368660  90 01 00 14 */	stw r0, 0x14(r1)
lbl_80368664:
/* 80368664  88 01 00 0C */	lbz r0, 0xc(r1)
/* 80368668  28 00 00 02 */	cmplwi r0, 2
/* 8036866C  41 82 00 14 */	beq lbl_80368680
/* 80368670  28 00 00 04 */	cmplwi r0, 4
/* 80368674  41 82 00 0C */	beq lbl_80368680
/* 80368678  28 00 00 01 */	cmplwi r0, 1
/* 8036867C  40 82 00 10 */	bne lbl_8036868C
lbl_80368680:
/* 80368680  38 00 00 FF */	li r0, 0xff
/* 80368684  98 01 00 0D */	stb r0, 0xd(r1)
/* 80368688  48 00 00 C4 */	b lbl_8036874C
lbl_8036868C:
/* 8036868C  88 01 00 0A */	lbz r0, 0xa(r1)
/* 80368690  28 00 00 00 */	cmplwi r0, 0
/* 80368694  40 82 00 B8 */	bne lbl_8036874C
/* 80368698  38 00 00 06 */	li r0, 6
/* 8036869C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803686A0  48 00 00 AC */	b lbl_8036874C
/* 803686A4  38 A0 00 78 */	li r5, 0x78
/* 803686A8  38 80 00 01 */	li r4, 1
/* 803686AC  38 60 00 03 */	li r3, 3
/* 803686B0  38 00 00 08 */	li r0, 8
/* 803686B4  98 A1 00 0D */	stb r5, 0xd(r1)
/* 803686B8  98 81 00 0B */	stb r4, 0xb(r1)
/* 803686BC  98 61 00 0C */	stb r3, 0xc(r1)
/* 803686C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803686C4  48 00 00 88 */	b lbl_8036874C
/* 803686C8  88 61 00 0C */	lbz r3, 0xc(r1)
/* 803686CC  28 03 00 03 */	cmplwi r3, 3
/* 803686D0  40 82 00 10 */	bne lbl_803686E0
/* 803686D4  38 00 00 06 */	li r0, 6
/* 803686D8  98 01 00 0C */	stb r0, 0xc(r1)
/* 803686DC  48 00 00 70 */	b lbl_8036874C
lbl_803686E0:
/* 803686E0  88 01 00 0A */	lbz r0, 0xa(r1)
/* 803686E4  28 00 00 00 */	cmplwi r0, 0
/* 803686E8  40 82 00 0C */	bne lbl_803686F4
/* 803686EC  28 03 00 00 */	cmplwi r3, 0
/* 803686F0  41 82 00 5C */	beq lbl_8036874C
lbl_803686F4:
/* 803686F4  38 00 00 FF */	li r0, 0xff
/* 803686F8  98 01 00 0D */	stb r0, 0xd(r1)
/* 803686FC  48 00 00 50 */	b lbl_8036874C
/* 80368700  88 01 00 0C */	lbz r0, 0xc(r1)
/* 80368704  28 00 00 03 */	cmplwi r0, 3
/* 80368708  40 82 00 10 */	bne lbl_80368718
/* 8036870C  38 00 00 06 */	li r0, 6
/* 80368710  98 01 00 0C */	stb r0, 0xc(r1)
/* 80368714  48 00 00 38 */	b lbl_8036874C
lbl_80368718:
/* 80368718  28 00 00 00 */	cmplwi r0, 0
/* 8036871C  41 82 00 30 */	beq lbl_8036874C
/* 80368720  38 00 00 FF */	li r0, 0xff
/* 80368724  98 01 00 0D */	stb r0, 0xd(r1)
/* 80368728  48 00 00 24 */	b lbl_8036874C
/* 8036872C  88 01 00 0C */	lbz r0, 0xc(r1)
/* 80368730  28 00 00 05 */	cmplwi r0, 5
/* 80368734  40 82 00 18 */	bne lbl_8036874C
/* 80368738  38 00 00 FF */	li r0, 0xff
/* 8036873C  98 01 00 0D */	stb r0, 0xd(r1)
/* 80368740  48 00 00 0C */	b lbl_8036874C
lbl_80368744:
/* 80368744  38 00 00 FF */	li r0, 0xff
/* 80368748  98 01 00 0D */	stb r0, 0xd(r1)
lbl_8036874C:
/* 8036874C  80 81 00 08 */	lwz r4, 8(r1)
/* 80368750  38 7F 00 01 */	addi r3, r31, 1
/* 80368754  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80368758  90 9E 00 00 */	stw r4, 0(r30)
/* 8036875C  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80368760  90 1E 00 04 */	stw r0, 4(r30)
/* 80368764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368768  90 9E 00 08 */	stw r4, 8(r30)
/* 8036876C  90 1E 00 0C */	stw r0, 0xc(r30)
lbl_80368770:
/* 80368770  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80368774  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80368778  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8036877C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80368780  7C 08 03 A6 */	mtlr r0
/* 80368784  38 21 00 30 */	addi r1, r1, 0x30
/* 80368788  4E 80 00 20 */	blr 
