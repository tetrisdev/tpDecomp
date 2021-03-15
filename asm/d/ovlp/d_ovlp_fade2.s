.include "macros.inc"

.section .text, "ax" # 8025247c


/* 8025247C 0024F3BC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80252480 0024F3C0  7C 08 02 A6 */	mflr r0
/* 80252484 0024F3C4  90 01 00 74 */	stw r0, 0x74(r1)
/* 80252488 0024F3C8  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8025248C 0024F3CC  7C 7F 1B 78 */	mr r31, r3
/* 80252490 0024F3D0  C0 22 B4 24 */	lfs f1, lbl_80454E24-_SDA2_BASE_(r2)
/* 80252494 0024F3D4  FC 40 08 90 */	fmr f2, f1
/* 80252498 0024F3D8  C0 62 B4 28 */	lfs f3, lbl_80454E28-_SDA2_BASE_(r2)
/* 8025249C 0024F3DC  C0 82 B4 2C */	lfs f4, lbl_80454E2C-_SDA2_BASE_(r2)
/* 802524A0 0024F3E0  FC A0 08 90 */	fmr f5, f1
/* 802524A4 0024F3E4  C0 C2 B4 30 */	lfs f6, lbl_80454E30-_SDA2_BASE_(r2)
/* 802524A8 0024F3E8  48 10 DF BD */	bl GXSetViewport
/* 802524AC 0024F3EC  38 60 00 00 */	li r3, 0
/* 802524B0 0024F3F0  38 80 00 00 */	li r4, 0
/* 802524B4 0024F3F4  38 A0 02 60 */	li r5, 0x260
/* 802524B8 0024F3F8  38 C0 01 C0 */	li r6, 0x1c0
/* 802524BC 0024F3FC  48 10 E0 15 */	bl GXSetScissor
/* 802524C0 0024F400  38 60 00 00 */	li r3, 0
/* 802524C4 0024F404  38 80 00 09 */	li r4, 9
/* 802524C8 0024F408  38 A0 00 00 */	li r5, 0
/* 802524CC 0024F40C  38 C0 00 03 */	li r6, 3
/* 802524D0 0024F410  38 E0 00 00 */	li r7, 0
/* 802524D4 0024F414  48 10 90 F1 */	bl GXSetVtxAttrFmt
/* 802524D8 0024F418  48 10 90 B5 */	bl GXClearVtxDesc
/* 802524DC 0024F41C  38 60 00 09 */	li r3, 9
/* 802524E0 0024F420  38 80 00 01 */	li r4, 1
/* 802524E4 0024F424  48 10 89 D5 */	bl GXSetVtxDesc
/* 802524E8 0024F428  38 60 00 01 */	li r3, 1
/* 802524EC 0024F42C  48 10 B6 45 */	bl GXSetNumChans
/* 802524F0 0024F430  38 60 00 04 */	li r3, 4
/* 802524F4 0024F434  38 80 00 00 */	li r4, 0
/* 802524F8 0024F438  38 A0 00 00 */	li r5, 0
/* 802524FC 0024F43C  38 C0 00 00 */	li r6, 0
/* 80252500 0024F440  38 E0 00 00 */	li r7, 0
/* 80252504 0024F444  39 00 00 00 */	li r8, 0
/* 80252508 0024F448  39 20 00 02 */	li r9, 2
/* 8025250C 0024F44C  48 10 B6 61 */	bl GXSetChanCtrl
/* 80252510 0024F450  38 60 00 00 */	li r3, 0
/* 80252514 0024F454  48 10 98 E9 */	bl GXSetNumTexGens
/* 80252518 0024F458  38 60 00 01 */	li r3, 1
/* 8025251C 0024F45C  48 10 D3 75 */	bl GXSetNumTevStages
/* 80252520 0024F460  38 60 00 00 */	li r3, 0
/* 80252524 0024F464  38 80 00 FF */	li r4, 0xff
/* 80252528 0024F468  38 A0 00 FF */	li r5, 0xff
/* 8025252C 0024F46C  38 C0 00 04 */	li r6, 4
/* 80252530 0024F470  48 10 D1 C5 */	bl GXSetTevOrder
/* 80252534 0024F474  38 60 00 00 */	li r3, 0
/* 80252538 0024F478  38 80 00 0F */	li r4, 0xf
/* 8025253C 0024F47C  38 A0 00 0F */	li r5, 0xf
/* 80252540 0024F480  38 C0 00 0F */	li r6, 0xf
/* 80252544 0024F484  38 E0 00 0F */	li r7, 0xf
/* 80252548 0024F488  48 10 CC DD */	bl GXSetTevColorIn
/* 8025254C 0024F48C  38 60 00 00 */	li r3, 0
/* 80252550 0024F490  38 80 00 00 */	li r4, 0
/* 80252554 0024F494  38 A0 00 00 */	li r5, 0
/* 80252558 0024F498  38 C0 00 00 */	li r6, 0
/* 8025255C 0024F49C  38 E0 00 01 */	li r7, 1
/* 80252560 0024F4A0  39 00 00 00 */	li r8, 0
/* 80252564 0024F4A4  48 10 CD 49 */	bl GXSetTevColorOp
/* 80252568 0024F4A8  38 60 00 00 */	li r3, 0
/* 8025256C 0024F4AC  38 80 00 07 */	li r4, 7
/* 80252570 0024F4B0  38 A0 00 07 */	li r5, 7
/* 80252574 0024F4B4  38 C0 00 07 */	li r6, 7
/* 80252578 0024F4B8  38 E0 00 07 */	li r7, 7
/* 8025257C 0024F4BC  48 10 CC ED */	bl GXSetTevAlphaIn
/* 80252580 0024F4C0  38 60 00 00 */	li r3, 0
/* 80252584 0024F4C4  38 80 00 00 */	li r4, 0
/* 80252588 0024F4C8  38 A0 00 00 */	li r5, 0
/* 8025258C 0024F4CC  38 C0 00 00 */	li r6, 0
/* 80252590 0024F4D0  38 E0 00 01 */	li r7, 1
/* 80252594 0024F4D4  39 00 00 00 */	li r8, 0
/* 80252598 0024F4D8  48 10 CD 7D */	bl GXSetTevAlphaOp
/* 8025259C 0024F4DC  38 60 00 01 */	li r3, 1
/* 802525A0 0024F4E0  48 10 D7 31 */	bl GXSetZCompLoc
/* 802525A4 0024F4E4  38 60 00 00 */	li r3, 0
/* 802525A8 0024F4E8  38 80 00 07 */	li r4, 7
/* 802525AC 0024F4EC  38 A0 00 00 */	li r5, 0
/* 802525B0 0024F4F0  48 10 D6 ED */	bl GXSetZMode
/* 802525B4 0024F4F4  38 60 00 00 */	li r3, 0
/* 802525B8 0024F4F8  38 80 00 04 */	li r4, 4
/* 802525BC 0024F4FC  38 A0 00 05 */	li r5, 5
/* 802525C0 0024F500  38 C0 00 00 */	li r6, 0
/* 802525C4 0024F504  48 10 D6 2D */	bl GXSetBlendMode
/* 802525C8 0024F508  38 60 00 07 */	li r3, 7
/* 802525CC 0024F50C  38 80 00 00 */	li r4, 0
/* 802525D0 0024F510  38 A0 00 01 */	li r5, 1
/* 802525D4 0024F514  38 C0 00 07 */	li r6, 7
/* 802525D8 0024F518  38 E0 00 00 */	li r7, 0
/* 802525DC 0024F51C  48 10 D0 49 */	bl GXSetAlphaCompare
/* 802525E0 0024F520  80 0D 80 80 */	lwz r0, lbl_80450600-_SDA_BASE_(r13)
/* 802525E4 0024F524  90 01 00 10 */	stw r0, 0x10(r1)
/* 802525E8 0024F528  38 60 00 00 */	li r3, 0
/* 802525EC 0024F52C  C0 22 B4 24 */	lfs f1, lbl_80454E24-_SDA2_BASE_(r2)
/* 802525F0 0024F530  FC 40 08 90 */	fmr f2, f1
/* 802525F4 0024F534  FC 60 08 90 */	fmr f3, f1
/* 802525F8 0024F538  FC 80 08 90 */	fmr f4, f1
/* 802525FC 0024F53C  38 81 00 10 */	addi r4, r1, 0x10
/* 80252600 0024F540  48 10 D2 B9 */	bl GXSetFog
/* 80252604 0024F544  38 60 00 00 */	li r3, 0
/* 80252608 0024F548  48 10 A3 7D */	bl GXSetCullMode
/* 8025260C 0024F54C  38 60 00 01 */	li r3, 1
/* 80252610 0024F550  48 10 D7 C9 */	bl GXSetDither
/* 80252614 0024F554  38 60 00 01 */	li r3, 1
/* 80252618 0024F558  48 10 DF B9 */	bl GXSetClipMode
/* 8025261C 0024F55C  3C 60 80 3A */	lis r3, lbl_803A2FD8@ha
/* 80252620 0024F560  38 63 2F D8 */	addi r3, r3, lbl_803A2FD8@l
/* 80252624 0024F564  38 80 00 00 */	li r4, 0
/* 80252628 0024F568  48 10 DC 25 */	bl GXLoadPosMtxImm
/* 8025262C 0024F56C  38 60 00 00 */	li r3, 0
/* 80252630 0024F570  48 10 DC BD */	bl GXSetCurrentMtx
/* 80252634 0024F574  38 60 00 80 */	li r3, 0x80
/* 80252638 0024F578  38 80 00 00 */	li r4, 0
/* 8025263C 0024F57C  38 A0 00 04 */	li r5, 4
/* 80252640 0024F580  48 10 A1 25 */	bl GXBegin
/* 80252644 0024F584  38 80 00 00 */	li r4, 0
/* 80252648 0024F588  3C 60 CC 01 */	lis r3, 0xCC008000@ha
/* 8025264C 0024F58C  B0 83 80 00 */	sth r4, 0xCC008000@l(r3)
/* 80252650 0024F590  B0 83 80 00 */	sth r4, -0x8000(r3)
/* 80252654 0024F594  38 00 02 60 */	li r0, 0x260
/* 80252658 0024F598  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 8025265C 0024F59C  B0 83 80 00 */	sth r4, -0x8000(r3)
/* 80252660 0024F5A0  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 80252664 0024F5A4  38 00 01 C0 */	li r0, 0x1c0
/* 80252668 0024F5A8  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 8025266C 0024F5AC  B0 83 80 00 */	sth r4, -0x8000(r3)
/* 80252670 0024F5B0  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 80252674 0024F5B4  38 61 00 24 */	addi r3, r1, 0x24
/* 80252678 0024F5B8  C0 22 B4 34 */	lfs f1, lbl_80454E34-_SDA2_BASE_(r2)
/* 8025267C 0024F5BC  C0 42 B4 38 */	lfs f2, lbl_80454E38-_SDA2_BASE_(r2)
/* 80252680 0024F5C0  C0 62 B4 3C */	lfs f3, lbl_80454E3C-_SDA2_BASE_(r2)
/* 80252684 0024F5C4  C0 82 B4 40 */	lfs f4, lbl_80454E40-_SDA2_BASE_(r2)
/* 80252688 0024F5C8  48 0F 48 A1 */	bl C_MTXPerspective
/* 8025268C 0024F5CC  38 61 00 24 */	addi r3, r1, 0x24
/* 80252690 0024F5D0  38 80 00 00 */	li r4, 0
/* 80252694 0024F5D4  48 10 DA 41 */	bl GXSetProjection
/* 80252698 0024F5D8  3C 60 80 3E */	lis r3, lbl_803DD3E8@ha
/* 8025269C 0024F5DC  38 63 D3 E8 */	addi r3, r3, lbl_803DD3E8@l
/* 802526A0 0024F5E0  80 8D 86 50 */	lwz r4, lbl_80450BD0-_SDA_BASE_(r13)
/* 802526A4 0024F5E4  38 A0 01 30 */	li r5, 0x130
/* 802526A8 0024F5E8  38 C0 00 E0 */	li r6, 0xe0
/* 802526AC 0024F5EC  38 E0 00 06 */	li r7, 6
/* 802526B0 0024F5F0  39 00 00 00 */	li r8, 0
/* 802526B4 0024F5F4  39 20 00 00 */	li r9, 0
/* 802526B8 0024F5F8  39 40 00 00 */	li r10, 0
/* 802526BC 0024F5FC  48 10 B7 85 */	bl GXInitTexObj
/* 802526C0 0024F600  3C 60 80 3E */	lis r3, lbl_803DD3E8@ha
/* 802526C4 0024F604  38 63 D3 E8 */	addi r3, r3, lbl_803DD3E8@l
/* 802526C8 0024F608  38 80 00 01 */	li r4, 1
/* 802526CC 0024F60C  38 A0 00 01 */	li r5, 1
/* 802526D0 0024F610  C0 22 B4 24 */	lfs f1, lbl_80454E24-_SDA2_BASE_(r2)
/* 802526D4 0024F614  FC 40 08 90 */	fmr f2, f1
/* 802526D8 0024F618  FC 60 08 90 */	fmr f3, f1
/* 802526DC 0024F61C  38 C0 00 00 */	li r6, 0
/* 802526E0 0024F620  38 E0 00 00 */	li r7, 0
/* 802526E4 0024F624  39 00 00 00 */	li r8, 0
/* 802526E8 0024F628  48 10 B9 ED */	bl GXInitTexObjLOD
/* 802526EC 0024F62C  3C 60 80 3E */	lis r3, lbl_803DD3E8@ha
/* 802526F0 0024F630  38 63 D3 E8 */	addi r3, r3, lbl_803DD3E8@l
/* 802526F4 0024F634  38 80 00 00 */	li r4, 0
/* 802526F8 0024F638  48 10 BD 1D */	bl GXLoadTexObj
/* 802526FC 0024F63C  38 60 00 01 */	li r3, 1
/* 80252700 0024F640  48 10 B4 31 */	bl GXSetNumChans
/* 80252704 0024F644  38 60 00 00 */	li r3, 0
/* 80252708 0024F648  38 80 00 00 */	li r4, 0
/* 8025270C 0024F64C  38 A0 00 00 */	li r5, 0
/* 80252710 0024F650  38 C0 00 00 */	li r6, 0
/* 80252714 0024F654  38 E0 00 00 */	li r7, 0
/* 80252718 0024F658  39 00 00 00 */	li r8, 0
/* 8025271C 0024F65C  39 20 00 02 */	li r9, 2
/* 80252720 0024F660  48 10 B4 4D */	bl GXSetChanCtrl
/* 80252724 0024F664  80 02 B4 20 */	lwz r0, lbl_80454E20-_SDA2_BASE_(r2)
/* 80252728 0024F668  90 01 00 0C */	stw r0, 0xc(r1)
/* 8025272C 0024F66C  38 60 00 00 */	li r3, 0
/* 80252730 0024F670  38 81 00 0C */	addi r4, r1, 0xc
/* 80252734 0024F674  48 10 B3 15 */	bl GXSetChanMatColor
/* 80252738 0024F678  38 60 00 01 */	li r3, 1
/* 8025273C 0024F67C  48 10 96 C1 */	bl GXSetNumTexGens
/* 80252740 0024F680  38 60 00 00 */	li r3, 0
/* 80252744 0024F684  38 80 00 01 */	li r4, 1
/* 80252748 0024F688  38 A0 00 04 */	li r5, 4
/* 8025274C 0024F68C  38 C0 00 3C */	li r6, 0x3c
/* 80252750 0024F690  38 E0 00 00 */	li r7, 0
/* 80252754 0024F694  39 00 00 7D */	li r8, 0x7d
/* 80252758 0024F698  48 10 94 25 */	bl GXSetTexCoordGen2
/* 8025275C 0024F69C  38 60 00 01 */	li r3, 1
/* 80252760 0024F6A0  48 10 D1 31 */	bl GXSetNumTevStages
/* 80252764 0024F6A4  38 60 00 00 */	li r3, 0
/* 80252768 0024F6A8  38 80 00 00 */	li r4, 0
/* 8025276C 0024F6AC  38 A0 00 00 */	li r5, 0
/* 80252770 0024F6B0  38 C0 00 04 */	li r6, 4
/* 80252774 0024F6B4  48 10 CF 81 */	bl GXSetTevOrder
/* 80252778 0024F6B8  38 60 00 00 */	li r3, 0
/* 8025277C 0024F6BC  38 80 00 0F */	li r4, 0xf
/* 80252780 0024F6C0  38 A0 00 0A */	li r5, 0xa
/* 80252784 0024F6C4  38 C0 00 08 */	li r6, 8
/* 80252788 0024F6C8  38 E0 00 0F */	li r7, 0xf
/* 8025278C 0024F6CC  48 10 CA 99 */	bl GXSetTevColorIn
/* 80252790 0024F6D0  38 60 00 00 */	li r3, 0
/* 80252794 0024F6D4  38 80 00 00 */	li r4, 0
/* 80252798 0024F6D8  38 A0 00 00 */	li r5, 0
/* 8025279C 0024F6DC  38 C0 00 00 */	li r6, 0
/* 802527A0 0024F6E0  38 E0 00 01 */	li r7, 1
/* 802527A4 0024F6E4  39 00 00 00 */	li r8, 0
/* 802527A8 0024F6E8  48 10 CB 05 */	bl GXSetTevColorOp
/* 802527AC 0024F6EC  38 60 00 00 */	li r3, 0
/* 802527B0 0024F6F0  38 80 00 07 */	li r4, 7
/* 802527B4 0024F6F4  38 A0 00 07 */	li r5, 7
/* 802527B8 0024F6F8  38 C0 00 07 */	li r6, 7
/* 802527BC 0024F6FC  38 E0 00 07 */	li r7, 7
/* 802527C0 0024F700  48 10 CA A9 */	bl GXSetTevAlphaIn
/* 802527C4 0024F704  38 60 00 00 */	li r3, 0
/* 802527C8 0024F708  38 80 00 00 */	li r4, 0
/* 802527CC 0024F70C  38 A0 00 00 */	li r5, 0
/* 802527D0 0024F710  38 C0 00 00 */	li r6, 0
/* 802527D4 0024F714  38 E0 00 01 */	li r7, 1
/* 802527D8 0024F718  39 00 00 00 */	li r8, 0
/* 802527DC 0024F71C  48 10 CB 39 */	bl GXSetTevAlphaOp
/* 802527E0 0024F720  38 60 00 01 */	li r3, 1
/* 802527E4 0024F724  48 10 D4 ED */	bl GXSetZCompLoc
/* 802527E8 0024F728  38 60 00 00 */	li r3, 0
/* 802527EC 0024F72C  38 80 00 07 */	li r4, 7
/* 802527F0 0024F730  38 A0 00 00 */	li r5, 0
/* 802527F4 0024F734  48 10 D4 A9 */	bl GXSetZMode
/* 802527F8 0024F738  38 60 00 00 */	li r3, 0
/* 802527FC 0024F73C  38 80 00 04 */	li r4, 4
/* 80252800 0024F740  38 A0 00 05 */	li r5, 5
/* 80252804 0024F744  38 C0 00 00 */	li r6, 0
/* 80252808 0024F748  48 10 D3 E9 */	bl GXSetBlendMode
/* 8025280C 0024F74C  38 60 00 07 */	li r3, 7
/* 80252810 0024F750  38 80 00 00 */	li r4, 0
/* 80252814 0024F754  38 A0 00 01 */	li r5, 1
/* 80252818 0024F758  38 C0 00 07 */	li r6, 7
/* 8025281C 0024F75C  38 E0 00 00 */	li r7, 0
/* 80252820 0024F760  48 10 CE 05 */	bl GXSetAlphaCompare
/* 80252824 0024F764  80 0D 80 80 */	lwz r0, lbl_80450600-_SDA_BASE_(r13)
/* 80252828 0024F768  90 01 00 08 */	stw r0, 8(r1)
/* 8025282C 0024F76C  38 60 00 00 */	li r3, 0
/* 80252830 0024F770  C0 22 B4 24 */	lfs f1, lbl_80454E24-_SDA2_BASE_(r2)
/* 80252834 0024F774  FC 40 08 90 */	fmr f2, f1
/* 80252838 0024F778  FC 60 08 90 */	fmr f3, f1
/* 8025283C 0024F77C  FC 80 08 90 */	fmr f4, f1
/* 80252840 0024F780  38 81 00 08 */	addi r4, r1, 8
/* 80252844 0024F784  48 10 D0 75 */	bl GXSetFog
/* 80252848 0024F788  38 60 00 00 */	li r3, 0
/* 8025284C 0024F78C  48 10 A1 39 */	bl GXSetCullMode
/* 80252850 0024F790  38 60 00 01 */	li r3, 1
/* 80252854 0024F794  48 10 D5 85 */	bl GXSetDither
/* 80252858 0024F798  38 60 00 00 */	li r3, 0
/* 8025285C 0024F79C  48 10 DD 75 */	bl GXSetClipMode
/* 80252860 0024F7A0  38 7F 00 04 */	addi r3, r31, 4
/* 80252864 0024F7A4  38 80 00 00 */	li r4, 0
/* 80252868 0024F7A8  48 10 D9 E5 */	bl GXLoadPosMtxImm
/* 8025286C 0024F7AC  38 60 00 00 */	li r3, 0
/* 80252870 0024F7B0  48 10 DA 7D */	bl GXSetCurrentMtx
/* 80252874 0024F7B4  48 10 8D 19 */	bl GXClearVtxDesc
/* 80252878 0024F7B8  38 60 00 09 */	li r3, 9
/* 8025287C 0024F7BC  38 80 00 01 */	li r4, 1
/* 80252880 0024F7C0  48 10 86 39 */	bl GXSetVtxDesc
/* 80252884 0024F7C4  38 60 00 0D */	li r3, 0xd
/* 80252888 0024F7C8  38 80 00 01 */	li r4, 1
/* 8025288C 0024F7CC  48 10 86 2D */	bl GXSetVtxDesc
/* 80252890 0024F7D0  38 60 00 00 */	li r3, 0
/* 80252894 0024F7D4  38 80 00 09 */	li r4, 9
/* 80252898 0024F7D8  38 A0 00 00 */	li r5, 0
/* 8025289C 0024F7DC  38 C0 00 03 */	li r6, 3
/* 802528A0 0024F7E0  38 E0 00 00 */	li r7, 0
/* 802528A4 0024F7E4  48 10 8D 21 */	bl GXSetVtxAttrFmt
/* 802528A8 0024F7E8  38 60 00 00 */	li r3, 0
/* 802528AC 0024F7EC  38 80 00 0D */	li r4, 0xd
/* 802528B0 0024F7F0  38 A0 00 01 */	li r5, 1
/* 802528B4 0024F7F4  38 C0 00 01 */	li r6, 1
/* 802528B8 0024F7F8  38 E0 00 00 */	li r7, 0
/* 802528BC 0024F7FC  48 10 8D 09 */	bl GXSetVtxAttrFmt
/* 802528C0 0024F800  38 60 00 80 */	li r3, 0x80
/* 802528C4 0024F804  38 80 00 00 */	li r4, 0
/* 802528C8 0024F808  38 A0 00 04 */	li r5, 4
/* 802528CC 0024F80C  48 10 9E 99 */	bl GXBegin
/* 802528D0 0024F810  38 C0 FE D0 */	li r6, -304
/* 802528D4 0024F814  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 802528D8 0024F818  B0 C5 80 00 */	sth r6, 0xCC008000@l(r5)
/* 802528DC 0024F81C  38 60 00 E0 */	li r3, 0xe0
/* 802528E0 0024F820  B0 65 80 00 */	sth r3, -0x8000(r5)
/* 802528E4 0024F824  38 80 00 00 */	li r4, 0
/* 802528E8 0024F828  98 85 80 00 */	stb r4, -0x8000(r5)
/* 802528EC 0024F82C  98 85 80 00 */	stb r4, -0x8000(r5)
/* 802528F0 0024F830  38 00 01 30 */	li r0, 0x130
/* 802528F4 0024F834  B0 05 80 00 */	sth r0, -0x8000(r5)
/* 802528F8 0024F838  B0 65 80 00 */	sth r3, -0x8000(r5)
/* 802528FC 0024F83C  38 60 00 01 */	li r3, 1
/* 80252900 0024F840  98 65 80 00 */	stb r3, -0x8000(r5)
/* 80252904 0024F844  98 85 80 00 */	stb r4, -0x8000(r5)
/* 80252908 0024F848  B0 05 80 00 */	sth r0, -0x8000(r5)
/* 8025290C 0024F84C  38 00 FF 20 */	li r0, -224
/* 80252910 0024F850  B0 05 80 00 */	sth r0, -0x8000(r5)
/* 80252914 0024F854  98 65 80 00 */	stb r3, -0x8000(r5)
/* 80252918 0024F858  98 65 80 00 */	stb r3, -0x8000(r5)
/* 8025291C 0024F85C  B0 C5 80 00 */	sth r6, -0x8000(r5)
/* 80252920 0024F860  B0 05 80 00 */	sth r0, -0x8000(r5)
/* 80252924 0024F864  98 85 80 00 */	stb r4, -0x8000(r5)
/* 80252928 0024F868  98 65 80 00 */	stb r3, -0x8000(r5)
/* 8025292C 0024F86C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252930 0024F870  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252934 0024F874  83 E3 5F 50 */	lwz r31, 0x5f50(r3)
/* 80252938 0024F878  C0 02 B4 24 */	lfs f0, lbl_80454E24-_SDA2_BASE_(r2)
/* 8025293C 0024F87C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80252940 0024F880  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80252944 0024F884  C0 02 B4 28 */	lfs f0, lbl_80454E28-_SDA2_BASE_(r2)
/* 80252948 0024F888  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8025294C 0024F88C  C0 02 B4 2C */	lfs f0, lbl_80454E2C-_SDA2_BASE_(r2)
/* 80252950 0024F890  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80252954 0024F894  7F E3 FB 78 */	mr r3, r31
/* 80252958 0024F898  38 81 00 14 */	addi r4, r1, 0x14
/* 8025295C 0024F89C  C0 22 B4 44 */	lfs f1, lbl_80454E44-_SDA2_BASE_(r2)
/* 80252960 0024F8A0  C0 42 B4 30 */	lfs f2, lbl_80454E30-_SDA2_BASE_(r2)
/* 80252964 0024F8A4  48 09 6E A9 */	bl J2DOrthoGraph_NS_setOrtho
/* 80252968 0024F8A8  7F E3 FB 78 */	mr r3, r31
/* 8025296C 0024F8AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80252970 0024F8B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80252974 0024F8B4  7D 89 03 A6 */	mtctr r12
/* 80252978 0024F8B8  4E 80 04 21 */	bctrl 
/* 8025297C 0024F8BC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80252980 0024F8C0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80252984 0024F8C4  7C 08 03 A6 */	mtlr r0
/* 80252988 0024F8C8  38 21 00 70 */	addi r1, r1, 0x70
/* 8025298C 0024F8CC  4E 80 00 20 */	blr 

.global __ct__10dOvlpFd2_cFv
__ct__10dOvlpFd2_cFv:
/* 80252990 0024F8D0  3C 80 80 3A */	lis r4, lbl_803A6F88@ha
/* 80252994 0024F8D4  38 A4 6F 88 */	addi r5, r4, lbl_803A6F88@l
/* 80252998 0024F8D8  90 A3 00 D8 */	stw r5, 0xd8(r3)
/* 8025299C 0024F8DC  3C 80 80 3C */	lis r4, lbl_803C2DEC@ha
/* 802529A0 0024F8E0  38 04 2D EC */	addi r0, r4, lbl_803C2DEC@l
/* 802529A4 0024F8E4  90 03 00 D8 */	stw r0, 0xd8(r3)
/* 802529A8 0024F8E8  90 A3 00 DC */	stw r5, 0xdc(r3)
/* 802529AC 0024F8EC  3C 80 80 3C */	lis r4, lbl_803C2D5C@ha
/* 802529B0 0024F8F0  38 04 2D 5C */	addi r0, r4, lbl_803C2D5C@l
/* 802529B4 0024F8F4  90 03 00 DC */	stw r0, 0xdc(r3)
/* 802529B8 0024F8F8  3C 80 80 3C */	lis r4, lbl_803C2CF0@ha
/* 802529BC 0024F8FC  38 A4 2C F0 */	addi r5, r4, lbl_803C2CF0@l
/* 802529C0 0024F900  80 85 00 00 */	lwz r4, 0(r5)
/* 802529C4 0024F904  80 05 00 04 */	lwz r0, 4(r5)
/* 802529C8 0024F908  90 83 00 CC */	stw r4, 0xcc(r3)
/* 802529CC 0024F90C  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 802529D0 0024F910  80 05 00 08 */	lwz r0, 8(r5)
/* 802529D4 0024F914  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 802529D8 0024F918  38 00 00 00 */	li r0, 0
/* 802529DC 0024F91C  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 802529E0 0024F920  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 802529E4 0024F924  98 04 5E B8 */	stb r0, 0x5eb8(r4)
/* 802529E8 0024F928  38 00 00 02 */	li r0, 2
/* 802529EC 0024F92C  98 03 01 1D */	stb r0, 0x11d(r3)
/* 802529F0 0024F930  4E 80 00 20 */	blr 
/* 802529F4 0024F934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802529F8 0024F938  7C 08 02 A6 */	mflr r0
/* 802529FC 0024F93C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252A00 0024F940  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80252A04 0024F944  7C 7F 1B 78 */	mr r31, r3
/* 80252A08 0024F948  88 03 01 1C */	lbz r0, 0x11c(r3)
/* 80252A0C 0024F94C  28 00 00 00 */	cmplwi r0, 0
/* 80252A10 0024F950  41 82 00 54 */	beq lbl_80252A64
/* 80252A14 0024F954  38 7F 01 1D */	addi r3, r31, 0x11d
/* 80252A18 0024F958  48 00 04 59 */	bl cLib_calcTimer_X4_
/* 80252A1C 0024F95C  7C 60 07 75 */	extsb. r0, r3
/* 80252A20 0024F960  40 82 00 34 */	bne lbl_80252A54
/* 80252A24 0024F964  3C 60 80 3C */	lis r3, lbl_803C2CFC@ha
/* 80252A28 0024F968  38 83 2C FC */	addi r4, r3, lbl_803C2CFC@l
/* 80252A2C 0024F96C  80 64 00 00 */	lwz r3, 0(r4)
/* 80252A30 0024F970  80 04 00 04 */	lwz r0, 4(r4)
/* 80252A34 0024F974  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 80252A38 0024F978  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 80252A3C 0024F97C  80 04 00 08 */	lwz r0, 8(r4)
/* 80252A40 0024F980  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 80252A44 0024F984  7F E3 FB 78 */	mr r3, r31
/* 80252A48 0024F988  4B DC BA D5 */	bl fopOvlpM_Done__FP18overlap_task_class
/* 80252A4C 0024F98C  38 00 FF F4 */	li r0, -12
/* 80252A50 0024F990  98 1F 01 1D */	stb r0, 0x11d(r31)
lbl_80252A54:
/* 80252A54 0024F994  38 00 00 00 */	li r0, 0
/* 80252A58 0024F998  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252A5C 0024F99C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252A60 0024F9A0  98 03 5D 44 */	stb r0, 0x5d44(r3)
lbl_80252A64:
/* 80252A64 0024F9A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80252A68 0024F9A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252A6C 0024F9AC  7C 08 03 A6 */	mtlr r0
/* 80252A70 0024F9B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80252A74 0024F9B4  4E 80 00 20 */	blr 
/* 80252A78 0024F9B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80252A7C 0024F9BC  7C 08 02 A6 */	mflr r0
/* 80252A80 0024F9C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252A84 0024F9C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80252A88 0024F9C8  7C 7F 1B 78 */	mr r31, r3
/* 80252A8C 0024F9CC  38 00 00 00 */	li r0, 0
/* 80252A90 0024F9D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252A94 0024F9D4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252A98 0024F9D8  98 03 5D 44 */	stb r0, 0x5d44(r3)
/* 80252A9C 0024F9DC  38 7F 01 12 */	addi r3, r31, 0x112
/* 80252AA0 0024F9E0  38 80 07 D0 */	li r4, 0x7d0
/* 80252AA4 0024F9E4  38 A0 00 64 */	li r5, 0x64
/* 80252AA8 0024F9E8  48 01 E0 E9 */	bl cLib_chaseAngleS__FPsss
/* 80252AAC 0024F9EC  A8 9F 01 12 */	lha r4, 0x112(r31)
/* 80252AB0 0024F9F0  A8 7F 01 10 */	lha r3, 0x110(r31)
/* 80252AB4 0024F9F4  38 03 40 00 */	addi r0, r3, 0x4000
/* 80252AB8 0024F9F8  54 00 04 20 */	rlwinm r0, r0, 0, 0x10, 0x10
/* 80252ABC 0024F9FC  60 00 40 00 */	ori r0, r0, 0x4000
/* 80252AC0 0024FA00  7C 04 00 50 */	subf r0, r4, r0
/* 80252AC4 0024FA04  7C 05 07 34 */	extsh r5, r0
/* 80252AC8 0024FA08  7C 03 22 14 */	add r0, r3, r4
/* 80252ACC 0024FA0C  B0 1F 01 10 */	sth r0, 0x110(r31)
/* 80252AD0 0024FA10  A8 7F 01 12 */	lha r3, 0x112(r31)
/* 80252AD4 0024FA14  A8 1F 01 10 */	lha r0, 0x110(r31)
/* 80252AD8 0024FA18  7C 00 28 50 */	subf r0, r0, r5
/* 80252ADC 0024FA1C  7C 00 07 34 */	extsh r0, r0
/* 80252AE0 0024FA20  7C 03 01 D7 */	mullw. r0, r3, r0
/* 80252AE4 0024FA24  40 80 00 54 */	bge lbl_80252B38
/* 80252AE8 0024FA28  88 1F 01 1D */	lbz r0, 0x11d(r31)
/* 80252AEC 0024FA2C  7C 00 07 75 */	extsb. r0, r0
/* 80252AF0 0024FA30  40 82 00 48 */	bne lbl_80252B38
/* 80252AF4 0024FA34  7F E3 FB 78 */	mr r3, r31
/* 80252AF8 0024FA38  4B DC BA 0D */	bl fopOvlpM_IsOutReq__FP18overlap_task_class
/* 80252AFC 0024FA3C  2C 03 00 00 */	cmpwi r3, 0
/* 80252B00 0024FA40  41 82 00 38 */	beq lbl_80252B38
/* 80252B04 0024FA44  4B DC B9 C1 */	bl fopOvlpM_SceneIsStart__Fv
/* 80252B08 0024FA48  3C 60 80 3C */	lis r3, lbl_803C2D08@ha
/* 80252B0C 0024FA4C  38 83 2D 08 */	addi r4, r3, lbl_803C2D08@l
/* 80252B10 0024FA50  80 64 00 00 */	lwz r3, 0(r4)
/* 80252B14 0024FA54  80 04 00 04 */	lwz r0, 4(r4)
/* 80252B18 0024FA58  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 80252B1C 0024FA5C  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 80252B20 0024FA60  80 04 00 08 */	lwz r0, 8(r4)
/* 80252B24 0024FA64  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 80252B28 0024FA68  38 00 C0 00 */	li r0, -16384
/* 80252B2C 0024FA6C  B0 1F 01 10 */	sth r0, 0x110(r31)
/* 80252B30 0024FA70  38 00 00 0F */	li r0, 0xf
/* 80252B34 0024FA74  98 1F 01 1D */	stb r0, 0x11d(r31)
lbl_80252B38:
/* 80252B38 0024FA78  88 7F 01 1D */	lbz r3, 0x11d(r31)
/* 80252B3C 0024FA7C  7C 60 07 75 */	extsb. r0, r3
/* 80252B40 0024FA80  40 80 00 44 */	bge lbl_80252B84
/* 80252B44 0024FA84  38 03 00 01 */	addi r0, r3, 1
/* 80252B48 0024FA88  98 1F 01 1D */	stb r0, 0x11d(r31)
/* 80252B4C 0024FA8C  7C 00 07 75 */	extsb. r0, r0
/* 80252B50 0024FA90  40 82 00 3C */	bne lbl_80252B8C
/* 80252B54 0024FA94  80 6D 8C 40 */	lwz r3, lbl_804511C0-_SDA_BASE_(r13)
/* 80252B58 0024FA98  80 63 00 04 */	lwz r3, 4(r3)
/* 80252B5C 0024FA9C  28 03 00 00 */	cmplwi r3, 0
/* 80252B60 0024FAA0  41 82 00 18 */	beq lbl_80252B78
/* 80252B64 0024FAA4  38 80 00 10 */	li r4, 0x10
/* 80252B68 0024FAA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80252B6C 0024FAAC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80252B70 0024FAB0  7D 89 03 A6 */	mtctr r12
/* 80252B74 0024FAB4  4E 80 04 21 */	bctrl 
lbl_80252B78:
/* 80252B78 0024FAB8  38 00 00 14 */	li r0, 0x14
/* 80252B7C 0024FABC  98 1F 01 1D */	stb r0, 0x11d(r31)
/* 80252B80 0024FAC0  48 00 00 0C */	b lbl_80252B8C
lbl_80252B84:
/* 80252B84 0024FAC4  38 7F 01 1D */	addi r3, r31, 0x11d
/* 80252B88 0024FAC8  48 00 02 E9 */	bl cLib_calcTimer_X4_
lbl_80252B8C:
/* 80252B8C 0024FACC  A8 7F 01 14 */	lha r3, 0x114(r31)
/* 80252B90 0024FAD0  38 03 08 00 */	addi r0, r3, 0x800
/* 80252B94 0024FAD4  B0 1F 01 14 */	sth r0, 0x114(r31)
/* 80252B98 0024FAD8  38 7F 01 18 */	addi r3, r31, 0x118
/* 80252B9C 0024FADC  C0 22 B4 30 */	lfs f1, lbl_80454E30-_SDA2_BASE_(r2)
/* 80252BA0 0024FAE0  FC 40 08 90 */	fmr f2, f1
/* 80252BA4 0024FAE4  C0 62 B4 48 */	lfs f3, lbl_80454E48-_SDA2_BASE_(r2)
/* 80252BA8 0024FAE8  48 01 CE 95 */	bl cLib_addCalc2__FPffff
/* 80252BAC 0024FAEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80252BB0 0024FAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252BB4 0024FAF4  7C 08 03 A6 */	mtlr r0
/* 80252BB8 0024FAF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80252BBC 0024FAFC  4E 80 00 20 */	blr 
/* 80252BC0 0024FB00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80252BC4 0024FB04  7C 08 02 A6 */	mflr r0
/* 80252BC8 0024FB08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252BCC 0024FB0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80252BD0 0024FB10  7C 7F 1B 78 */	mr r31, r3
/* 80252BD4 0024FB14  38 7F 01 1D */	addi r3, r31, 0x11d
/* 80252BD8 0024FB18  48 00 02 99 */	bl cLib_calcTimer_X4_
/* 80252BDC 0024FB1C  7C 60 07 75 */	extsb. r0, r3
/* 80252BE0 0024FB20  40 82 00 74 */	bne lbl_80252C54
/* 80252BE4 0024FB24  80 6D 8C 40 */	lwz r3, lbl_804511C0-_SDA_BASE_(r13)
/* 80252BE8 0024FB28  80 63 00 04 */	lwz r3, 4(r3)
/* 80252BEC 0024FB2C  38 80 00 10 */	li r4, 0x10
/* 80252BF0 0024FB30  81 83 00 00 */	lwz r12, 0(r3)
/* 80252BF4 0024FB34  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80252BF8 0024FB38  7D 89 03 A6 */	mtctr r12
/* 80252BFC 0024FB3C  4E 80 04 21 */	bctrl 
/* 80252C00 0024FB40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80252C04 0024FB44  40 82 00 50 */	bne lbl_80252C54
/* 80252C08 0024FB48  A8 7F 01 10 */	lha r3, 0x110(r31)
/* 80252C0C 0024FB4C  A8 1F 01 12 */	lha r0, 0x112(r31)
/* 80252C10 0024FB50  7C 03 02 14 */	add r0, r3, r0
/* 80252C14 0024FB54  B0 1F 01 10 */	sth r0, 0x110(r31)
/* 80252C18 0024FB58  38 80 00 00 */	li r4, 0
/* 80252C1C 0024FB5C  98 9F 01 1C */	stb r4, 0x11c(r31)
/* 80252C20 0024FB60  38 00 00 01 */	li r0, 1
/* 80252C24 0024FB64  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252C28 0024FB68  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252C2C 0024FB6C  98 03 5D 44 */	stb r0, 0x5d44(r3)
/* 80252C30 0024FB70  98 83 5E B8 */	stb r4, 0x5eb8(r3)
/* 80252C34 0024FB74  3C 60 80 3C */	lis r3, lbl_803C2D14@ha
/* 80252C38 0024FB78  38 83 2D 14 */	addi r4, r3, lbl_803C2D14@l
/* 80252C3C 0024FB7C  80 64 00 00 */	lwz r3, 0(r4)
/* 80252C40 0024FB80  80 04 00 04 */	lwz r0, 4(r4)
/* 80252C44 0024FB84  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 80252C48 0024FB88  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 80252C4C 0024FB8C  80 04 00 08 */	lwz r0, 8(r4)
/* 80252C50 0024FB90  90 1F 00 D4 */	stw r0, 0xd4(r31)
lbl_80252C54:
/* 80252C54 0024FB94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80252C58 0024FB98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252C5C 0024FB9C  7C 08 03 A6 */	mtlr r0
/* 80252C60 0024FBA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80252C64 0024FBA4  4E 80 00 20 */	blr 
/* 80252C68 0024FBA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80252C6C 0024FBAC  7C 08 02 A6 */	mflr r0
/* 80252C70 0024FBB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252C74 0024FBB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80252C78 0024FBB8  7C 7F 1B 78 */	mr r31, r3
/* 80252C7C 0024FBBC  A8 63 01 14 */	lha r3, 0x114(r3)
/* 80252C80 0024FBC0  38 03 F8 00 */	addi r0, r3, -2048
/* 80252C84 0024FBC4  B0 1F 01 14 */	sth r0, 0x114(r31)
/* 80252C88 0024FBC8  38 7F 01 18 */	addi r3, r31, 0x118
/* 80252C8C 0024FBCC  C0 22 B4 30 */	lfs f1, lbl_80454E30-_SDA2_BASE_(r2)
/* 80252C90 0024FBD0  C0 42 B4 4C */	lfs f2, lbl_80454E4C-_SDA2_BASE_(r2)
/* 80252C94 0024FBD4  48 01 CD ED */	bl cLib_addCalc0__FPfff
/* 80252C98 0024FBD8  C0 3F 01 18 */	lfs f1, 0x118(r31)
/* 80252C9C 0024FBDC  C0 02 B4 50 */	lfs f0, lbl_80454E50-_SDA2_BASE_(r2)
/* 80252CA0 0024FBE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80252CA4 0024FBE4  40 80 00 40 */	bge lbl_80252CE4
/* 80252CA8 0024FBE8  88 1F 01 1E */	lbz r0, 0x11e(r31)
/* 80252CAC 0024FBEC  28 00 00 00 */	cmplwi r0, 0
/* 80252CB0 0024FBF0  40 82 00 14 */	bne lbl_80252CC4
/* 80252CB4 0024FBF4  4B DC B8 11 */	bl fopOvlpM_SceneIsStart__Fv
/* 80252CB8 0024FBF8  38 00 00 01 */	li r0, 1
/* 80252CBC 0024FBFC  98 1F 01 1E */	stb r0, 0x11e(r31)
/* 80252CC0 0024FC00  48 00 00 38 */	b lbl_80252CF8
lbl_80252CC4:
/* 80252CC4 0024FC04  7F E3 FB 78 */	mr r3, r31
/* 80252CC8 0024FC08  4B DC B8 55 */	bl fopOvlpM_Done__FP18overlap_task_class
/* 80252CCC 0024FC0C  38 00 00 01 */	li r0, 1
/* 80252CD0 0024FC10  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252CD4 0024FC14  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252CD8 0024FC18  98 03 5D 44 */	stb r0, 0x5d44(r3)
/* 80252CDC 0024FC1C  98 03 5E B8 */	stb r0, 0x5eb8(r3)
/* 80252CE0 0024FC20  48 00 00 18 */	b lbl_80252CF8
lbl_80252CE4:
/* 80252CE4 0024FC24  38 00 00 00 */	li r0, 0
/* 80252CE8 0024FC28  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252CEC 0024FC2C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252CF0 0024FC30  98 03 5D 44 */	stb r0, 0x5d44(r3)
/* 80252CF4 0024FC34  4B DC B7 91 */	bl fopOvlpM_SceneIsStop__Fv
lbl_80252CF8:
/* 80252CF8 0024FC38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80252CFC 0024FC3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252D00 0024FC40  7C 08 03 A6 */	mtlr r0
/* 80252D04 0024FC44  38 21 00 10 */	addi r1, r1, 0x10
/* 80252D08 0024FC48  4E 80 00 20 */	blr 
/* 80252D0C 0024FC4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80252D10 0024FC50  7C 08 02 A6 */	mflr r0
/* 80252D14 0024FC54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252D18 0024FC58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80252D1C 0024FC5C  7C 7F 1B 78 */	mr r31, r3
/* 80252D20 0024FC60  88 03 01 1C */	lbz r0, 0x11c(r3)
/* 80252D24 0024FC64  28 00 00 00 */	cmplwi r0, 0
/* 80252D28 0024FC68  40 82 00 2C */	bne lbl_80252D54
/* 80252D2C 0024FC6C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252D30 0024FC70  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252D34 0024FC74  38 63 5F 64 */	addi r3, r3, 0x5f64
/* 80252D38 0024FC78  38 83 02 3C */	addi r4, r3, 0x23c
/* 80252D3C 0024FC7C  38 A3 02 40 */	addi r5, r3, 0x240
/* 80252D40 0024FC80  38 DF 00 D8 */	addi r6, r31, 0xd8
/* 80252D44 0024FC84  4B E0 3A 51 */	bl set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c
/* 80252D48 0024FC88  38 00 00 01 */	li r0, 1
/* 80252D4C 0024FC8C  98 1F 01 1C */	stb r0, 0x11c(r31)
/* 80252D50 0024FC90  48 00 00 98 */	b lbl_80252DE8
lbl_80252D54:
/* 80252D54 0024FC94  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252D58 0024FC98  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252D5C 0024FC9C  88 03 5D 44 */	lbz r0, 0x5d44(r3)
/* 80252D60 0024FCA0  2C 00 00 00 */	cmpwi r0, 0
/* 80252D64 0024FCA4  40 82 00 84 */	bne lbl_80252DE8
/* 80252D68 0024FCA8  3C 60 80 3E */	lis r3, lbl_803DD470@ha
/* 80252D6C 0024FCAC  38 63 D4 70 */	addi r3, r3, lbl_803DD470@l
/* 80252D70 0024FCB0  C0 22 B4 24 */	lfs f1, lbl_80454E24-_SDA2_BASE_(r2)
/* 80252D74 0024FCB4  FC 40 08 90 */	fmr f2, f1
/* 80252D78 0024FCB8  C0 62 B4 54 */	lfs f3, lbl_80454E54-_SDA2_BASE_(r2)
/* 80252D7C 0024FCBC  48 0F 3B 6D */	bl PSMTXTrans
/* 80252D80 0024FCC0  3C 60 80 3E */	lis r3, lbl_803DD470@ha
/* 80252D84 0024FCC4  38 63 D4 70 */	addi r3, r3, lbl_803DD470@l
/* 80252D88 0024FCC8  A8 9F 01 14 */	lha r4, 0x114(r31)
/* 80252D8C 0024FCCC  4B DB 97 41 */	bl mDoMtx_ZrotM__FPA4_fs
/* 80252D90 0024FCD0  C0 22 B4 30 */	lfs f1, lbl_80454E30-_SDA2_BASE_(r2)
/* 80252D94 0024FCD4  C0 1F 01 18 */	lfs f0, 0x118(r31)
/* 80252D98 0024FCD8  EC 41 00 2A */	fadds f2, f1, f0
/* 80252D9C 0024FCDC  FC 60 08 90 */	fmr f3, f1
/* 80252DA0 0024FCE0  4B DB A0 99 */	bl scaleM__14mDoMtx_stack_cFfff
/* 80252DA4 0024FCE4  3C 60 80 3E */	lis r3, lbl_803DD470@ha
/* 80252DA8 0024FCE8  38 63 D4 70 */	addi r3, r3, lbl_803DD470@l
/* 80252DAC 0024FCEC  A8 1F 01 14 */	lha r0, 0x114(r31)
/* 80252DB0 0024FCF0  7C 00 00 D0 */	neg r0, r0
/* 80252DB4 0024FCF4  7C 04 07 34 */	extsh r4, r0
/* 80252DB8 0024FCF8  4B DB 97 15 */	bl mDoMtx_ZrotM__FPA4_fs
/* 80252DBC 0024FCFC  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 80252DC0 0024FD00  3C 60 80 3E */	lis r3, lbl_803DD470@ha
/* 80252DC4 0024FD04  38 63 D4 70 */	addi r3, r3, lbl_803DD470@l
/* 80252DC8 0024FD08  48 0F 36 E9 */	bl PSMTXCopy
/* 80252DCC 0024FD0C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80252DD0 0024FD10  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80252DD4 0024FD14  38 63 5F 64 */	addi r3, r3, 0x5f64
/* 80252DD8 0024FD18  38 83 02 3C */	addi r4, r3, 0x23c
/* 80252DDC 0024FD1C  38 A3 02 40 */	addi r5, r3, 0x240
/* 80252DE0 0024FD20  38 DF 00 DC */	addi r6, r31, 0xdc
/* 80252DE4 0024FD24  4B E0 39 B1 */	bl set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c
lbl_80252DE8:
/* 80252DE8 0024FD28  38 00 00 00 */	li r0, 0
/* 80252DEC 0024FD2C  98 0D 86 64 */	stb r0, lbl_80450BE4-_SDA_BASE_(r13)
/* 80252DF0 0024FD30  38 60 00 01 */	li r3, 1
/* 80252DF4 0024FD34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80252DF8 0024FD38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252DFC 0024FD3C  7C 08 03 A6 */	mtlr r0
/* 80252E00 0024FD40  38 21 00 10 */	addi r1, r1, 0x10
/* 80252E04 0024FD44  4E 80 00 20 */	blr 
/* 80252E08 0024FD48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80252E0C 0024FD4C  7C 08 02 A6 */	mflr r0
/* 80252E10 0024FD50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252E14 0024FD54  39 83 00 CC */	addi r12, r3, 0xcc
/* 80252E18 0024FD58  48 10 F2 6D */	bl __ptmf_scall
/* 80252E1C 0024FD5C  60 00 00 00 */	nop 
/* 80252E20 0024FD60  38 60 00 01 */	li r3, 1
/* 80252E24 0024FD64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252E28 0024FD68  7C 08 03 A6 */	mtlr r0
/* 80252E2C 0024FD6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80252E30 0024FD70  4E 80 00 20 */	blr 
/* 80252E34 0024FD74  38 60 00 01 */	li r3, 1
/* 80252E38 0024FD78  4E 80 00 20 */	blr 
/* 80252E3C 0024FD7C  38 60 00 01 */	li r3, 1
/* 80252E40 0024FD80  4E 80 00 20 */	blr 
/* 80252E44 0024FD84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80252E48 0024FD88  7C 08 02 A6 */	mflr r0
/* 80252E4C 0024FD8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252E50 0024FD90  28 03 00 00 */	cmplwi r3, 0
/* 80252E54 0024FD94  41 82 00 08 */	beq lbl_80252E5C
/* 80252E58 0024FD98  4B FF FB 39 */	bl __ct__10dOvlpFd2_cFv
lbl_80252E5C:
/* 80252E5C 0024FD9C  38 60 00 04 */	li r3, 4
/* 80252E60 0024FDA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252E64 0024FDA4  7C 08 03 A6 */	mtlr r0
/* 80252E68 0024FDA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80252E6C 0024FDAC  4E 80 00 20 */	blr 

.global cLib_calcTimer_X4_
cLib_calcTimer_X4_:
/* 80252E70 0024FDB0  88 83 00 00 */	lbz r4, 0(r3)
/* 80252E74 0024FDB4  7C 80 07 75 */	extsb. r0, r4
/* 80252E78 0024FDB8  41 82 00 0C */	beq lbl_80252E84
/* 80252E7C 0024FDBC  38 04 FF FF */	addi r0, r4, -1
/* 80252E80 0024FDC0  98 03 00 00 */	stb r0, 0(r3)
lbl_80252E84:
/* 80252E84 0024FDC4  88 63 00 00 */	lbz r3, 0(r3)
/* 80252E88 0024FDC8  4E 80 00 20 */	blr 
/* 80252E8C 0024FDCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80252E90 0024FDD0  7C 08 02 A6 */	mflr r0
/* 80252E94 0024FDD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80252E98 0024FDD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80252E9C 0024FDDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80252EA0 0024FDE0  41 82 00 1C */	beq lbl_80252EBC
/* 80252EA4 0024FDE4  3C A0 80 3C */	lis r5, lbl_803C2D5C@ha
/* 80252EA8 0024FDE8  38 05 2D 5C */	addi r0, r5, lbl_803C2D5C@l
/* 80252EAC 0024FDEC  90 1F 00 00 */	stw r0, 0(r31)
/* 80252EB0 0024FDF0  7C 80 07 35 */	extsh. r0, r4
/* 80252EB4 0024FDF4  40 81 00 08 */	ble lbl_80252EBC
/* 80252EB8 0024FDF8  48 07 BE 85 */	bl __dl__FPv
lbl_80252EBC:
/* 80252EBC 0024FDFC  7F E3 FB 78 */	mr r3, r31
/* 80252EC0 0024FE00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80252EC4 0024FE04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80252EC8 0024FE08  7C 08 03 A6 */	mtlr r0
/* 80252ECC 0024FE0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80252ED0 0024FE10  4E 80 00 20 */	blr 
