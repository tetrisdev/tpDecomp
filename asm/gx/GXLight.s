.include "macros.inc"

.section .text, "ax" # 8035d630


.global GXInitLightAttn
GXInitLightAttn:
/* 8035D630 0035A570  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8035D634 0035A574  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 8035D638 0035A578  D0 63 00 18 */	stfs f3, 0x18(r3)
/* 8035D63C 0035A57C  D0 83 00 1C */	stfs f4, 0x1c(r3)
/* 8035D640 0035A580  D0 A3 00 20 */	stfs f5, 0x20(r3)
/* 8035D644 0035A584  D0 C3 00 24 */	stfs f6, 0x24(r3)
/* 8035D648 0035A588  4E 80 00 20 */	blr 

.global GXInitLightSpot
GXInitLightSpot:
/* 8035D64C 0035A58C  7C 08 02 A6 */	mflr r0
/* 8035D650 0035A590  90 01 00 04 */	stw r0, 4(r1)
/* 8035D654 0035A594  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035D658 0035A598  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035D65C 0035A59C  3B E4 00 00 */	addi r31, r4, 0
/* 8035D660 0035A5A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8035D664 0035A5A4  3B C3 00 00 */	addi r30, r3, 0
/* 8035D668 0035A5A8  C0 02 CB B8 */	lfs f0, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D66C 0035A5AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035D670 0035A5B0  4C 40 13 82 */	cror 2, 0, 2
/* 8035D674 0035A5B4  41 82 00 10 */	beq lbl_8035D684
/* 8035D678 0035A5B8  C0 02 CB BC */	lfs f0, lbl_804565BC-_SDA2_BASE_(r2)
/* 8035D67C 0035A5BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035D680 0035A5C0  40 81 00 08 */	ble lbl_8035D688
lbl_8035D684:
/* 8035D684 0035A5C4  3B E0 00 00 */	li r31, 0
lbl_8035D688:
/* 8035D688 0035A5C8  C0 42 CB C0 */	lfs f2, lbl_804565C0-_SDA2_BASE_(r2)
/* 8035D68C 0035A5CC  C0 02 CB C4 */	lfs f0, lbl_804565C4-_SDA2_BASE_(r2)
/* 8035D690 0035A5D0  EC 22 00 72 */	fmuls f1, f2, f1
/* 8035D694 0035A5D4  EC 21 00 24 */	fdivs f1, f1, f0
/* 8035D698 0035A5D8  48 00 F3 75 */	bl cosf
/* 8035D69C 0035A5DC  28 1F 00 06 */	cmplwi r31, 6
/* 8035D6A0 0035A5E0  41 81 01 0C */	bgt lbl_8035D7AC
/* 8035D6A4 0035A5E4  3C 60 80 3D */	lis r3, lbl_803D2578@ha
/* 8035D6A8 0035A5E8  38 63 25 78 */	addi r3, r3, lbl_803D2578@l
/* 8035D6AC 0035A5EC  57 E0 10 3A */	slwi r0, r31, 2
/* 8035D6B0 0035A5F0  7C 03 00 2E */	lwzx r0, r3, r0
/* 8035D6B4 0035A5F4  7C 09 03 A6 */	mtctr r0
/* 8035D6B8 0035A5F8  4E 80 04 20 */	bctr 
/* 8035D6BC 0035A5FC  C0 02 CB C8 */	lfs f0, lbl_804565C8-_SDA2_BASE_(r2)
/* 8035D6C0 0035A600  C0 82 CB CC */	lfs f4, lbl_804565CC-_SDA2_BASE_(r2)
/* 8035D6C4 0035A604  EC 60 00 72 */	fmuls f3, f0, f1
/* 8035D6C8 0035A608  C0 C2 CB B8 */	lfs f6, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D6CC 0035A60C  48 00 00 EC */	b lbl_8035D7B8
/* 8035D6D0 0035A610  C0 42 CB D0 */	lfs f2, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D6D4 0035A614  FC 00 08 50 */	fneg f0, f1
/* 8035D6D8 0035A618  C0 C2 CB B8 */	lfs f6, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D6DC 0035A61C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8035D6E0 0035A620  EC 22 08 24 */	fdivs f1, f2, f1
/* 8035D6E4 0035A624  FC 80 08 90 */	fmr f4, f1
/* 8035D6E8 0035A628  EC 60 00 72 */	fmuls f3, f0, f1
/* 8035D6EC 0035A62C  48 00 00 CC */	b lbl_8035D7B8
/* 8035D6F0 0035A630  C0 42 CB D0 */	lfs f2, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D6F4 0035A634  FC 00 08 50 */	fneg f0, f1
/* 8035D6F8 0035A638  C0 62 CB B8 */	lfs f3, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D6FC 0035A63C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8035D700 0035A640  EC 22 08 24 */	fdivs f1, f2, f1
/* 8035D704 0035A644  FC C0 08 90 */	fmr f6, f1
/* 8035D708 0035A648  EC 80 00 72 */	fmuls f4, f0, f1
/* 8035D70C 0035A64C  48 00 00 AC */	b lbl_8035D7B8
/* 8035D710 0035A650  C0 82 CB D0 */	lfs f4, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D714 0035A654  C0 42 CB D4 */	lfs f2, lbl_804565D4-_SDA2_BASE_(r2)
/* 8035D718 0035A658  EC 64 08 28 */	fsubs f3, f4, f1
/* 8035D71C 0035A65C  EC 01 10 28 */	fsubs f0, f1, f2
/* 8035D720 0035A660  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8035D724 0035A664  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035D728 0035A668  EC 24 18 24 */	fdivs f1, f4, f3
/* 8035D72C 0035A66C  EC 61 00 32 */	fmuls f3, f1, f0
/* 8035D730 0035A670  EC 82 00 72 */	fmuls f4, f2, f1
/* 8035D734 0035A674  FC C0 08 50 */	fneg f6, f1
/* 8035D738 0035A678  48 00 00 80 */	b lbl_8035D7B8
/* 8035D73C 0035A67C  C0 A2 CB D0 */	lfs f5, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D740 0035A680  C0 62 CB D8 */	lfs f3, lbl_804565D8-_SDA2_BASE_(r2)
/* 8035D744 0035A684  EC 85 08 28 */	fsubs f4, f5, f1
/* 8035D748 0035A688  C0 42 CB DC */	lfs f2, lbl_804565DC-_SDA2_BASE_(r2)
/* 8035D74C 0035A68C  EC 05 08 2A */	fadds f0, f5, f1
/* 8035D750 0035A690  EC 84 01 32 */	fmuls f4, f4, f4
/* 8035D754 0035A694  EC 02 00 32 */	fmuls f0, f2, f0
/* 8035D758 0035A698  EC 85 20 24 */	fdivs f4, f5, f4
/* 8035D75C 0035A69C  EC 43 01 32 */	fmuls f2, f3, f4
/* 8035D760 0035A6A0  EC 80 01 32 */	fmuls f4, f0, f4
/* 8035D764 0035A6A4  FC C0 10 90 */	fmr f6, f2
/* 8035D768 0035A6A8  EC 62 00 72 */	fmuls f3, f2, f1
/* 8035D76C 0035A6AC  48 00 00 4C */	b lbl_8035D7B8
/* 8035D770 0035A6B0  C0 A2 CB D0 */	lfs f5, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D774 0035A6B4  C0 02 CB D4 */	lfs f0, lbl_804565D4-_SDA2_BASE_(r2)
/* 8035D778 0035A6B8  EC 85 08 28 */	fsubs f4, f5, f1
/* 8035D77C 0035A6BC  C0 42 CB DC */	lfs f2, lbl_804565DC-_SDA2_BASE_(r2)
/* 8035D780 0035A6C0  EC 60 00 72 */	fmuls f3, f0, f1
/* 8035D784 0035A6C4  C0 02 CB E0 */	lfs f0, lbl_804565E0-_SDA2_BASE_(r2)
/* 8035D788 0035A6C8  EC 42 00 72 */	fmuls f2, f2, f1
/* 8035D78C 0035A6CC  EC 84 01 32 */	fmuls f4, f4, f4
/* 8035D790 0035A6D0  EC 23 00 72 */	fmuls f1, f3, f1
/* 8035D794 0035A6D4  EC 65 20 24 */	fdivs f3, f5, f4
/* 8035D798 0035A6D8  EC 23 00 72 */	fmuls f1, f3, f1
/* 8035D79C 0035A6DC  EC 82 00 F2 */	fmuls f4, f2, f3
/* 8035D7A0 0035A6E0  EC C0 00 F2 */	fmuls f6, f0, f3
/* 8035D7A4 0035A6E4  EC 65 08 28 */	fsubs f3, f5, f1
/* 8035D7A8 0035A6E8  48 00 00 10 */	b lbl_8035D7B8
lbl_8035D7AC:
/* 8035D7AC 0035A6EC  C0 82 CB B8 */	lfs f4, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D7B0 0035A6F0  C0 62 CB D0 */	lfs f3, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D7B4 0035A6F4  FC C0 20 90 */	fmr f6, f4
lbl_8035D7B8:
/* 8035D7B8 0035A6F8  D0 7E 00 10 */	stfs f3, 0x10(r30)
/* 8035D7BC 0035A6FC  D0 9E 00 14 */	stfs f4, 0x14(r30)
/* 8035D7C0 0035A700  D0 DE 00 18 */	stfs f6, 0x18(r30)
/* 8035D7C4 0035A704  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035D7C8 0035A708  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8035D7CC 0035A70C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8035D7D0 0035A710  38 21 00 20 */	addi r1, r1, 0x20
/* 8035D7D4 0035A714  7C 08 03 A6 */	mtlr r0
/* 8035D7D8 0035A718  4E 80 00 20 */	blr 

.global GXInitLightDistAttn
GXInitLightDistAttn:
/* 8035D7DC 0035A71C  C0 02 CB B8 */	lfs f0, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D7E0 0035A720  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035D7E4 0035A724  40 80 00 08 */	bge lbl_8035D7EC
/* 8035D7E8 0035A728  38 80 00 00 */	li r4, 0
lbl_8035D7EC:
/* 8035D7EC 0035A72C  C0 02 CB B8 */	lfs f0, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D7F0 0035A730  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8035D7F4 0035A734  4C 40 13 82 */	cror 2, 0, 2
/* 8035D7F8 0035A738  41 82 00 14 */	beq lbl_8035D80C
/* 8035D7FC 0035A73C  C0 02 CB D0 */	lfs f0, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D800 0035A740  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8035D804 0035A744  4C 41 13 82 */	cror 2, 1, 2
/* 8035D808 0035A748  40 82 00 08 */	bne lbl_8035D810
lbl_8035D80C:
/* 8035D80C 0035A74C  38 80 00 00 */	li r4, 0
lbl_8035D810:
/* 8035D810 0035A750  2C 04 00 02 */	cmpwi r4, 2
/* 8035D814 0035A754  41 82 00 3C */	beq lbl_8035D850
/* 8035D818 0035A758  40 80 00 14 */	bge lbl_8035D82C
/* 8035D81C 0035A75C  2C 04 00 00 */	cmpwi r4, 0
/* 8035D820 0035A760  41 82 00 70 */	beq lbl_8035D890
/* 8035D824 0035A764  40 80 00 14 */	bge lbl_8035D838
/* 8035D828 0035A768  48 00 00 68 */	b lbl_8035D890
lbl_8035D82C:
/* 8035D82C 0035A76C  2C 04 00 04 */	cmpwi r4, 4
/* 8035D830 0035A770  40 80 00 60 */	bge lbl_8035D890
/* 8035D834 0035A774  48 00 00 40 */	b lbl_8035D874
lbl_8035D838:
/* 8035D838 0035A778  C0 A2 CB D0 */	lfs f5, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D83C 0035A77C  EC 02 00 72 */	fmuls f0, f2, f1
/* 8035D840 0035A780  C0 82 CB B8 */	lfs f4, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D844 0035A784  EC 25 10 28 */	fsubs f1, f5, f2
/* 8035D848 0035A788  EC 61 00 24 */	fdivs f3, f1, f0
/* 8035D84C 0035A78C  48 00 00 50 */	b lbl_8035D89C
lbl_8035D850:
/* 8035D850 0035A790  C0 A2 CB D0 */	lfs f5, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D854 0035A794  EC 82 00 72 */	fmuls f4, f2, f1
/* 8035D858 0035A798  C0 62 CB E4 */	lfs f3, lbl_804565E4-_SDA2_BASE_(r2)
/* 8035D85C 0035A79C  EC 45 10 28 */	fsubs f2, f5, f2
/* 8035D860 0035A7A0  EC 01 01 32 */	fmuls f0, f1, f4
/* 8035D864 0035A7A4  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8035D868 0035A7A8  EC 61 20 24 */	fdivs f3, f1, f4
/* 8035D86C 0035A7AC  EC 81 00 24 */	fdivs f4, f1, f0
/* 8035D870 0035A7B0  48 00 00 2C */	b lbl_8035D89C
lbl_8035D874:
/* 8035D874 0035A7B4  EC 02 00 72 */	fmuls f0, f2, f1
/* 8035D878 0035A7B8  C0 A2 CB D0 */	lfs f5, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D87C 0035A7BC  C0 62 CB B8 */	lfs f3, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D880 0035A7C0  EC 45 10 28 */	fsubs f2, f5, f2
/* 8035D884 0035A7C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035D888 0035A7C8  EC 82 00 24 */	fdivs f4, f2, f0
/* 8035D88C 0035A7CC  48 00 00 10 */	b lbl_8035D89C
lbl_8035D890:
/* 8035D890 0035A7D0  C0 62 CB B8 */	lfs f3, lbl_804565B8-_SDA2_BASE_(r2)
/* 8035D894 0035A7D4  C0 A2 CB D0 */	lfs f5, lbl_804565D0-_SDA2_BASE_(r2)
/* 8035D898 0035A7D8  FC 80 18 90 */	fmr f4, f3
lbl_8035D89C:
/* 8035D89C 0035A7DC  D0 A3 00 1C */	stfs f5, 0x1c(r3)
/* 8035D8A0 0035A7E0  D0 63 00 20 */	stfs f3, 0x20(r3)
/* 8035D8A4 0035A7E4  D0 83 00 24 */	stfs f4, 0x24(r3)
/* 8035D8A8 0035A7E8  4E 80 00 20 */	blr 

.global GXInitLightPos
GXInitLightPos:
/* 8035D8AC 0035A7EC  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 8035D8B0 0035A7F0  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 8035D8B4 0035A7F4  D0 63 00 30 */	stfs f3, 0x30(r3)
/* 8035D8B8 0035A7F8  4E 80 00 20 */	blr 

.global GXInitLightDir
GXInitLightDir:
/* 8035D8BC 0035A7FC  FC 80 08 50 */	fneg f4, f1
/* 8035D8C0 0035A800  FC 20 10 50 */	fneg f1, f2
/* 8035D8C4 0035A804  FC 00 18 50 */	fneg f0, f3
/* 8035D8C8 0035A808  D0 83 00 34 */	stfs f4, 0x34(r3)
/* 8035D8CC 0035A80C  D0 23 00 38 */	stfs f1, 0x38(r3)
/* 8035D8D0 0035A810  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 8035D8D4 0035A814  4E 80 00 20 */	blr 

.global GXInitLightColor
GXInitLightColor:
/* 8035D8D8 0035A818  80 04 00 00 */	lwz r0, 0(r4)
/* 8035D8DC 0035A81C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035D8E0 0035A820  4E 80 00 20 */	blr 

.global GXLoadLightObjImm
GXLoadLightObjImm:
/* 8035D8E4 0035A824  7C 80 00 34 */	cntlzw r0, r4
/* 8035D8E8 0035A828  20 00 00 1F */	subfic r0, r0, 0x1f
/* 8035D8EC 0035A82C  54 05 26 76 */	rlwinm r5, r0, 4, 0x19, 0x1b
/* 8035D8F0 0035A830  3C 80 CC 01 */	lis r4, 0xCC008000@ha
/* 8035D8F4 0035A834  38 00 00 10 */	li r0, 0x10
/* 8035D8F8 0035A838  38 A5 06 00 */	addi r5, r5, 0x600
/* 8035D8FC 0035A83C  98 04 80 00 */	stb r0, 0xCC008000@l(r4)
/* 8035D900 0035A840  64 A0 00 0F */	oris r0, r5, 0xf
/* 8035D904 0035A844  94 04 80 00 */	stwu r0, -0x8000(r4)
/* 8035D908 0035A848  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8035D90C 0035A84C  7C C6 32 78 */	xor r6, r6, r6
/* 8035D910 0035A850  E0 A3 00 10 */	psq_l f5, 16(r3), 0, qr0
/* 8035D914 0035A854  E0 83 00 18 */	psq_l f4, 24(r3), 0, qr0
/* 8035D918 0035A858  E0 63 00 20 */	psq_l f3, 32(r3), 0, qr0
/* 8035D91C 0035A85C  E0 43 00 28 */	psq_l f2, 40(r3), 0, qr0
/* 8035D920 0035A860  E0 23 00 30 */	psq_l f1, 48(r3), 0, qr0
/* 8035D924 0035A864  E0 03 00 38 */	psq_l f0, 56(r3), 0, qr0
/* 8035D928 0035A868  90 C4 00 00 */	stw r6, 0(r4)
/* 8035D92C 0035A86C  90 C4 00 00 */	stw r6, 0(r4)
/* 8035D930 0035A870  90 C4 00 00 */	stw r6, 0(r4)
/* 8035D934 0035A874  90 04 00 00 */	stw r0, 0(r4)
/* 8035D938 0035A878  F0 A4 00 00 */	psq_st f5, 0(r4), 0, qr0
/* 8035D93C 0035A87C  F0 84 00 00 */	psq_st f4, 0(r4), 0, qr0
/* 8035D940 0035A880  F0 64 00 00 */	psq_st f3, 0(r4), 0, qr0
/* 8035D944 0035A884  F0 44 00 00 */	psq_st f2, 0(r4), 0, qr0
/* 8035D948 0035A888  F0 24 00 00 */	psq_st f1, 0(r4), 0, qr0
/* 8035D94C 0035A88C  F0 04 00 00 */	psq_st f0, 0(r4), 0, qr0
/* 8035D950 0035A890  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035D954 0035A894  38 00 00 01 */	li r0, 1
/* 8035D958 0035A898  B0 03 00 02 */	sth r0, 2(r3)
/* 8035D95C 0035A89C  4E 80 00 20 */	blr 

.global GXSetChanAmbColor
GXSetChanAmbColor:
/* 8035D960 0035A8A0  2C 03 00 03 */	cmpwi r3, 3
/* 8035D964 0035A8A4  41 82 00 7C */	beq lbl_8035D9E0
/* 8035D968 0035A8A8  40 80 00 1C */	bge lbl_8035D984
/* 8035D96C 0035A8AC  2C 03 00 01 */	cmpwi r3, 1
/* 8035D970 0035A8B0  41 82 00 40 */	beq lbl_8035D9B0
/* 8035D974 0035A8B4  40 80 00 54 */	bge lbl_8035D9C8
/* 8035D978 0035A8B8  2C 03 00 00 */	cmpwi r3, 0
/* 8035D97C 0035A8BC  40 80 00 18 */	bge lbl_8035D994
/* 8035D980 0035A8C0  4E 80 00 20 */	blr 
lbl_8035D984:
/* 8035D984 0035A8C4  2C 03 00 05 */	cmpwi r3, 5
/* 8035D988 0035A8C8  41 82 00 7C */	beq lbl_8035DA04
/* 8035D98C 0035A8CC  4C 80 00 20 */	bgelr 
/* 8035D990 0035A8D0  48 00 00 68 */	b lbl_8035D9F8
lbl_8035D994:
/* 8035D994 0035A8D4  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035D998 0035A8D8  38 A0 00 00 */	li r5, 0
/* 8035D99C 0035A8DC  80 04 00 00 */	lwz r0, 0(r4)
/* 8035D9A0 0035A8E0  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 8035D9A4 0035A8E4  50 03 00 2E */	rlwimi r3, r0, 0, 0, 0x17
/* 8035D9A8 0035A8E8  38 E3 00 00 */	addi r7, r3, 0
/* 8035D9AC 0035A8EC  48 00 00 68 */	b lbl_8035DA14
lbl_8035D9B0:
/* 8035D9B0 0035A8F0  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035D9B4 0035A8F4  38 A0 00 01 */	li r5, 1
/* 8035D9B8 0035A8F8  80 04 00 00 */	lwz r0, 0(r4)
/* 8035D9BC 0035A8FC  80 E3 00 AC */	lwz r7, 0xac(r3)
/* 8035D9C0 0035A900  50 07 00 2E */	rlwimi r7, r0, 0, 0, 0x17
/* 8035D9C4 0035A904  48 00 00 50 */	b lbl_8035DA14
lbl_8035D9C8:
/* 8035D9C8 0035A908  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035D9CC 0035A90C  38 A0 00 00 */	li r5, 0
/* 8035D9D0 0035A910  88 04 00 03 */	lbz r0, 3(r4)
/* 8035D9D4 0035A914  80 E3 00 A8 */	lwz r7, 0xa8(r3)
/* 8035D9D8 0035A918  50 07 06 3E */	rlwimi r7, r0, 0, 0x18, 0x1f
/* 8035D9DC 0035A91C  48 00 00 38 */	b lbl_8035DA14
lbl_8035D9E0:
/* 8035D9E0 0035A920  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035D9E4 0035A924  38 A0 00 01 */	li r5, 1
/* 8035D9E8 0035A928  88 04 00 03 */	lbz r0, 3(r4)
/* 8035D9EC 0035A92C  80 E3 00 AC */	lwz r7, 0xac(r3)
/* 8035D9F0 0035A930  50 07 06 3E */	rlwimi r7, r0, 0, 0x18, 0x1f
/* 8035D9F4 0035A934  48 00 00 20 */	b lbl_8035DA14
lbl_8035D9F8:
/* 8035D9F8 0035A938  80 E4 00 00 */	lwz r7, 0(r4)
/* 8035D9FC 0035A93C  38 A0 00 00 */	li r5, 0
/* 8035DA00 0035A940  48 00 00 14 */	b lbl_8035DA14
lbl_8035DA04:
/* 8035DA04 0035A944  80 E4 00 00 */	lwz r7, 0(r4)
/* 8035DA08 0035A948  38 A0 00 01 */	li r5, 1
/* 8035DA0C 0035A94C  48 00 00 08 */	b lbl_8035DA14
/* 8035DA10 0035A950  4E 80 00 20 */	blr 
lbl_8035DA14:
/* 8035DA14 0035A954  38 00 00 10 */	li r0, 0x10
/* 8035DA18 0035A958  80 82 CB 80 */	lwz r4, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DA1C 0035A95C  3C C0 CC 01 */	lis r6, 0xCC008000@ha
/* 8035DA20 0035A960  98 06 80 00 */	stb r0, 0xCC008000@l(r6)
/* 8035DA24 0035A964  38 65 10 0A */	addi r3, r5, 0x100a
/* 8035DA28 0035A968  54 A0 10 3A */	slwi r0, r5, 2
/* 8035DA2C 0035A96C  90 66 80 00 */	stw r3, -0x8000(r6)
/* 8035DA30 0035A970  38 A0 00 01 */	li r5, 1
/* 8035DA34 0035A974  7C 64 02 14 */	add r3, r4, r0
/* 8035DA38 0035A978  90 E6 80 00 */	stw r7, -0x8000(r6)
/* 8035DA3C 0035A97C  B0 A4 00 02 */	sth r5, 2(r4)
/* 8035DA40 0035A980  90 E3 00 A8 */	stw r7, 0xa8(r3)
/* 8035DA44 0035A984  4E 80 00 20 */	blr 

.global GXSetChanMatColor
GXSetChanMatColor:
/* 8035DA48 0035A988  2C 03 00 03 */	cmpwi r3, 3
/* 8035DA4C 0035A98C  41 82 00 7C */	beq lbl_8035DAC8
/* 8035DA50 0035A990  40 80 00 1C */	bge lbl_8035DA6C
/* 8035DA54 0035A994  2C 03 00 01 */	cmpwi r3, 1
/* 8035DA58 0035A998  41 82 00 40 */	beq lbl_8035DA98
/* 8035DA5C 0035A99C  40 80 00 54 */	bge lbl_8035DAB0
/* 8035DA60 0035A9A0  2C 03 00 00 */	cmpwi r3, 0
/* 8035DA64 0035A9A4  40 80 00 18 */	bge lbl_8035DA7C
/* 8035DA68 0035A9A8  4E 80 00 20 */	blr 
lbl_8035DA6C:
/* 8035DA6C 0035A9AC  2C 03 00 05 */	cmpwi r3, 5
/* 8035DA70 0035A9B0  41 82 00 7C */	beq lbl_8035DAEC
/* 8035DA74 0035A9B4  4C 80 00 20 */	bgelr 
/* 8035DA78 0035A9B8  48 00 00 68 */	b lbl_8035DAE0
lbl_8035DA7C:
/* 8035DA7C 0035A9BC  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DA80 0035A9C0  38 A0 00 00 */	li r5, 0
/* 8035DA84 0035A9C4  80 04 00 00 */	lwz r0, 0(r4)
/* 8035DA88 0035A9C8  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8035DA8C 0035A9CC  50 03 00 2E */	rlwimi r3, r0, 0, 0, 0x17
/* 8035DA90 0035A9D0  38 E3 00 00 */	addi r7, r3, 0
/* 8035DA94 0035A9D4  48 00 00 68 */	b lbl_8035DAFC
lbl_8035DA98:
/* 8035DA98 0035A9D8  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DA9C 0035A9DC  38 A0 00 01 */	li r5, 1
/* 8035DAA0 0035A9E0  80 04 00 00 */	lwz r0, 0(r4)
/* 8035DAA4 0035A9E4  80 E3 00 B4 */	lwz r7, 0xb4(r3)
/* 8035DAA8 0035A9E8  50 07 00 2E */	rlwimi r7, r0, 0, 0, 0x17
/* 8035DAAC 0035A9EC  48 00 00 50 */	b lbl_8035DAFC
lbl_8035DAB0:
/* 8035DAB0 0035A9F0  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DAB4 0035A9F4  38 A0 00 00 */	li r5, 0
/* 8035DAB8 0035A9F8  88 04 00 03 */	lbz r0, 3(r4)
/* 8035DABC 0035A9FC  80 E3 00 B0 */	lwz r7, 0xb0(r3)
/* 8035DAC0 0035AA00  50 07 06 3E */	rlwimi r7, r0, 0, 0x18, 0x1f
/* 8035DAC4 0035AA04  48 00 00 38 */	b lbl_8035DAFC
lbl_8035DAC8:
/* 8035DAC8 0035AA08  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DACC 0035AA0C  38 A0 00 01 */	li r5, 1
/* 8035DAD0 0035AA10  88 04 00 03 */	lbz r0, 3(r4)
/* 8035DAD4 0035AA14  80 E3 00 B4 */	lwz r7, 0xb4(r3)
/* 8035DAD8 0035AA18  50 07 06 3E */	rlwimi r7, r0, 0, 0x18, 0x1f
/* 8035DADC 0035AA1C  48 00 00 20 */	b lbl_8035DAFC
lbl_8035DAE0:
/* 8035DAE0 0035AA20  80 E4 00 00 */	lwz r7, 0(r4)
/* 8035DAE4 0035AA24  38 A0 00 00 */	li r5, 0
/* 8035DAE8 0035AA28  48 00 00 14 */	b lbl_8035DAFC
lbl_8035DAEC:
/* 8035DAEC 0035AA2C  80 E4 00 00 */	lwz r7, 0(r4)
/* 8035DAF0 0035AA30  38 A0 00 01 */	li r5, 1
/* 8035DAF4 0035AA34  48 00 00 08 */	b lbl_8035DAFC
/* 8035DAF8 0035AA38  4E 80 00 20 */	blr 
lbl_8035DAFC:
/* 8035DAFC 0035AA3C  38 00 00 10 */	li r0, 0x10
/* 8035DB00 0035AA40  80 82 CB 80 */	lwz r4, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DB04 0035AA44  3C C0 CC 01 */	lis r6, 0xCC008000@ha
/* 8035DB08 0035AA48  98 06 80 00 */	stb r0, 0xCC008000@l(r6)
/* 8035DB0C 0035AA4C  38 65 10 0C */	addi r3, r5, 0x100c
/* 8035DB10 0035AA50  54 A0 10 3A */	slwi r0, r5, 2
/* 8035DB14 0035AA54  90 66 80 00 */	stw r3, -0x8000(r6)
/* 8035DB18 0035AA58  38 A0 00 01 */	li r5, 1
/* 8035DB1C 0035AA5C  7C 64 02 14 */	add r3, r4, r0
/* 8035DB20 0035AA60  90 E6 80 00 */	stw r7, -0x8000(r6)
/* 8035DB24 0035AA64  B0 A4 00 02 */	sth r5, 2(r4)
/* 8035DB28 0035AA68  90 E3 00 B0 */	stw r7, 0xb0(r3)
/* 8035DB2C 0035AA6C  4E 80 00 20 */	blr 

.global GXSetNumChans
GXSetNumChans:
/* 8035DB30 0035AA70  80 C2 CB 80 */	lwz r6, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DB34 0035AA74  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 8035DB38 0035AA78  38 80 00 10 */	li r4, 0x10
/* 8035DB3C 0035AA7C  80 06 02 04 */	lwz r0, 0x204(r6)
/* 8035DB40 0035AA80  50 60 26 76 */	rlwimi r0, r3, 4, 0x19, 0x1b
/* 8035DB44 0035AA84  3C 60 CC 01 */	lis r3, 0xCC008000@ha
/* 8035DB48 0035AA88  90 06 02 04 */	stw r0, 0x204(r6)
/* 8035DB4C 0035AA8C  38 00 10 09 */	li r0, 0x1009
/* 8035DB50 0035AA90  98 83 80 00 */	stb r4, 0xCC008000@l(r3)
/* 8035DB54 0035AA94  90 03 80 00 */	stw r0, -0x8000(r3)
/* 8035DB58 0035AA98  90 A3 80 00 */	stw r5, -0x8000(r3)
/* 8035DB5C 0035AA9C  80 06 05 AC */	lwz r0, 0x5ac(r6)
/* 8035DB60 0035AAA0  60 00 00 04 */	ori r0, r0, 4
/* 8035DB64 0035AAA4  90 06 05 AC */	stw r0, 0x5ac(r6)
/* 8035DB68 0035AAA8  4E 80 00 20 */	blr 

.global GXSetChanCtrl
GXSetChanCtrl:
/* 8035DB6C 0035AAAC  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8035DB70 0035AAB0  38 80 00 00 */	li r4, 0
/* 8035DB74 0035AAB4  50 04 0F BC */	rlwimi r4, r0, 1, 0x1e, 0x1e
/* 8035DB78 0035AAB8  39 44 00 00 */	addi r10, r4, 0
/* 8035DB7C 0035AABC  50 CA 07 FE */	rlwimi r10, r6, 0, 0x1f, 0x1f
/* 8035DB80 0035AAC0  2C 09 00 00 */	cmpwi r9, 0
/* 8035DB84 0035AAC4  50 AA 36 72 */	rlwimi r10, r5, 6, 0x19, 0x19
/* 8035DB88 0035AAC8  54 6B 07 BE */	clrlwi r11, r3, 0x1e
/* 8035DB8C 0035AACC  40 82 00 08 */	bne lbl_8035DB94
/* 8035DB90 0035AAD0  39 00 00 00 */	li r8, 0
lbl_8035DB94:
/* 8035DB94 0035AAD4  20 89 00 02 */	subfic r4, r9, 2
/* 8035DB98 0035AAD8  30 04 FF FF */	addic r0, r4, -1
/* 8035DB9C 0035AADC  7C 00 21 10 */	subfe r0, r0, r4
/* 8035DBA0 0035AAE0  7D 29 00 D0 */	neg r9, r9
/* 8035DBA4 0035AAE4  51 0A 3D F0 */	rlwimi r10, r8, 7, 0x17, 0x18
/* 8035DBA8 0035AAE8  30 C9 FF FF */	addic r6, r9, -1
/* 8035DBAC 0035AAEC  50 0A 4D AC */	rlwimi r10, r0, 9, 0x16, 0x16
/* 8035DBB0 0035AAF0  7C C6 49 10 */	subfe r6, r6, r9
/* 8035DBB4 0035AAF4  50 CA 55 6A */	rlwimi r10, r6, 0xa, 0x15, 0x15
/* 8035DBB8 0035AAF8  50 EA 16 BA */	rlwimi r10, r7, 2, 0x1a, 0x1d
/* 8035DBBC 0035AAFC  38 A0 00 10 */	li r5, 0x10
/* 8035DBC0 0035AB00  3C 80 CC 01 */	lis r4, 0xCC008000@ha
/* 8035DBC4 0035AB04  98 A4 80 00 */	stb r5, 0xCC008000@l(r4)
/* 8035DBC8 0035AB08  38 0B 10 0E */	addi r0, r11, 0x100e
/* 8035DBCC 0035AB0C  50 EA 3C 68 */	rlwimi r10, r7, 7, 0x11, 0x14
/* 8035DBD0 0035AB10  90 04 80 00 */	stw r0, -0x8000(r4)
/* 8035DBD4 0035AB14  2C 03 00 04 */	cmpwi r3, 4
/* 8035DBD8 0035AB18  91 44 80 00 */	stw r10, -0x8000(r4)
/* 8035DBDC 0035AB1C  40 82 00 18 */	bne lbl_8035DBF4
/* 8035DBE0 0035AB20  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 8035DBE4 0035AB24  38 00 10 10 */	li r0, 0x1010
/* 8035DBE8 0035AB28  90 04 80 00 */	stw r0, -0x8000(r4)
/* 8035DBEC 0035AB2C  91 44 80 00 */	stw r10, -0x8000(r4)
/* 8035DBF0 0035AB30  48 00 00 1C */	b lbl_8035DC0C
lbl_8035DBF4:
/* 8035DBF4 0035AB34  2C 03 00 05 */	cmpwi r3, 5
/* 8035DBF8 0035AB38  40 82 00 14 */	bne lbl_8035DC0C
/* 8035DBFC 0035AB3C  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 8035DC00 0035AB40  38 00 10 11 */	li r0, 0x1011
/* 8035DC04 0035AB44  90 04 80 00 */	stw r0, -0x8000(r4)
/* 8035DC08 0035AB48  91 44 80 00 */	stw r10, -0x8000(r4)
lbl_8035DC0C:
/* 8035DC0C 0035AB4C  80 62 CB 80 */	lwz r3, lbl_80456580-_SDA2_BASE_(r2)
/* 8035DC10 0035AB50  38 00 00 01 */	li r0, 1
/* 8035DC14 0035AB54  B0 03 00 02 */	sth r0, 2(r3)
/* 8035DC18 0035AB58  4E 80 00 20 */	blr 

