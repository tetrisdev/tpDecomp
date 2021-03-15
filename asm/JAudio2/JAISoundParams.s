.include "macros.inc"

.section .text, "ax" # 802a2db4


.global moveVolume__18JAISoundParamsMoveFfUl
moveVolume__18JAISoundParamsMoveFfUl:
/* 802A2DB4 0029FCF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2DB8 0029FCF8  28 04 00 00 */	cmplwi r4, 0
/* 802A2DBC 0029FCFC  40 82 00 14 */	bne lbl_802A2DD0
/* 802A2DC0 0029FD00  D0 23 00 00 */	stfs f1, 0(r3)
/* 802A2DC4 0029FD04  38 00 00 00 */	li r0, 0
/* 802A2DC8 0029FD08  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802A2DCC 0029FD0C  48 00 00 38 */	b lbl_802A2E04
lbl_802A2DD0:
/* 802A2DD0 0029FD10  C0 03 00 00 */	lfs f0, 0(r3)
/* 802A2DD4 0029FD14  90 83 00 1C */	stw r4, 0x1c(r3)
/* 802A2DD8 0029FD18  EC 61 00 28 */	fsubs f3, f1, f0
/* 802A2DDC 0029FD1C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A2DE0 0029FD20  C8 42 BD E8 */	lfd f2, lbl_804557E8-_SDA2_BASE_(r2)
/* 802A2DE4 0029FD24  90 01 00 0C */	stw r0, 0xc(r1)
/* 802A2DE8 0029FD28  3C 00 43 30 */	lis r0, 0x4330
/* 802A2DEC 0029FD2C  90 01 00 08 */	stw r0, 8(r1)
/* 802A2DF0 0029FD30  C8 01 00 08 */	lfd f0, 8(r1)
/* 802A2DF4 0029FD34  EC 00 10 28 */	fsubs f0, f0, f2
/* 802A2DF8 0029FD38  EC 03 00 24 */	fdivs f0, f3, f0
/* 802A2DFC 0029FD3C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802A2E00 0029FD40  D0 23 00 18 */	stfs f1, 0x18(r3)
lbl_802A2E04:
/* 802A2E04 0029FD44  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2E08 0029FD48  4E 80 00 20 */	blr 

.global movePitch__18JAISoundParamsMoveFfUl
movePitch__18JAISoundParamsMoveFfUl:
/* 802A2E0C 0029FD4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2E10 0029FD50  28 04 00 00 */	cmplwi r4, 0
/* 802A2E14 0029FD54  40 82 00 14 */	bne lbl_802A2E28
/* 802A2E18 0029FD58  D0 23 00 08 */	stfs f1, 8(r3)
/* 802A2E1C 0029FD5C  38 00 00 00 */	li r0, 0
/* 802A2E20 0029FD60  90 03 00 28 */	stw r0, 0x28(r3)
/* 802A2E24 0029FD64  48 00 00 38 */	b lbl_802A2E5C
lbl_802A2E28:
/* 802A2E28 0029FD68  C0 03 00 08 */	lfs f0, 8(r3)
/* 802A2E2C 0029FD6C  90 83 00 28 */	stw r4, 0x28(r3)
/* 802A2E30 0029FD70  EC 61 00 28 */	fsubs f3, f1, f0
/* 802A2E34 0029FD74  80 03 00 28 */	lwz r0, 0x28(r3)
/* 802A2E38 0029FD78  C8 42 BD E8 */	lfd f2, lbl_804557E8-_SDA2_BASE_(r2)
/* 802A2E3C 0029FD7C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802A2E40 0029FD80  3C 00 43 30 */	lis r0, 0x4330
/* 802A2E44 0029FD84  90 01 00 08 */	stw r0, 8(r1)
/* 802A2E48 0029FD88  C8 01 00 08 */	lfd f0, 8(r1)
/* 802A2E4C 0029FD8C  EC 00 10 28 */	fsubs f0, f0, f2
/* 802A2E50 0029FD90  EC 03 00 24 */	fdivs f0, f3, f0
/* 802A2E54 0029FD94  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802A2E58 0029FD98  D0 23 00 24 */	stfs f1, 0x24(r3)
lbl_802A2E5C:
/* 802A2E5C 0029FD9C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2E60 0029FDA0  4E 80 00 20 */	blr 

.global moveFxMix__18JAISoundParamsMoveFfUl
moveFxMix__18JAISoundParamsMoveFfUl:
/* 802A2E64 0029FDA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2E68 0029FDA8  28 04 00 00 */	cmplwi r4, 0
/* 802A2E6C 0029FDAC  40 82 00 14 */	bne lbl_802A2E80
/* 802A2E70 0029FDB0  D0 23 00 04 */	stfs f1, 4(r3)
/* 802A2E74 0029FDB4  38 00 00 00 */	li r0, 0
/* 802A2E78 0029FDB8  90 03 00 34 */	stw r0, 0x34(r3)
/* 802A2E7C 0029FDBC  48 00 00 38 */	b lbl_802A2EB4
lbl_802A2E80:
/* 802A2E80 0029FDC0  C0 03 00 04 */	lfs f0, 4(r3)
/* 802A2E84 0029FDC4  90 83 00 34 */	stw r4, 0x34(r3)
/* 802A2E88 0029FDC8  EC 61 00 28 */	fsubs f3, f1, f0
/* 802A2E8C 0029FDCC  80 03 00 34 */	lwz r0, 0x34(r3)
/* 802A2E90 0029FDD0  C8 42 BD E8 */	lfd f2, lbl_804557E8-_SDA2_BASE_(r2)
/* 802A2E94 0029FDD4  90 01 00 0C */	stw r0, 0xc(r1)
/* 802A2E98 0029FDD8  3C 00 43 30 */	lis r0, 0x4330
/* 802A2E9C 0029FDDC  90 01 00 08 */	stw r0, 8(r1)
/* 802A2EA0 0029FDE0  C8 01 00 08 */	lfd f0, 8(r1)
/* 802A2EA4 0029FDE4  EC 00 10 28 */	fsubs f0, f0, f2
/* 802A2EA8 0029FDE8  EC 03 00 24 */	fdivs f0, f3, f0
/* 802A2EAC 0029FDEC  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802A2EB0 0029FDF0  D0 23 00 30 */	stfs f1, 0x30(r3)
lbl_802A2EB4:
/* 802A2EB4 0029FDF4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2EB8 0029FDF8  4E 80 00 20 */	blr 

.global movePan__18JAISoundParamsMoveFfUl
movePan__18JAISoundParamsMoveFfUl:
/* 802A2EBC 0029FDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2EC0 0029FE00  28 04 00 00 */	cmplwi r4, 0
/* 802A2EC4 0029FE04  40 82 00 14 */	bne lbl_802A2ED8
/* 802A2EC8 0029FE08  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 802A2ECC 0029FE0C  38 00 00 00 */	li r0, 0
/* 802A2ED0 0029FE10  90 03 00 40 */	stw r0, 0x40(r3)
/* 802A2ED4 0029FE14  48 00 00 38 */	b lbl_802A2F0C
lbl_802A2ED8:
/* 802A2ED8 0029FE18  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802A2EDC 0029FE1C  90 83 00 40 */	stw r4, 0x40(r3)
/* 802A2EE0 0029FE20  EC 61 00 28 */	fsubs f3, f1, f0
/* 802A2EE4 0029FE24  80 03 00 40 */	lwz r0, 0x40(r3)
/* 802A2EE8 0029FE28  C8 42 BD E8 */	lfd f2, lbl_804557E8-_SDA2_BASE_(r2)
/* 802A2EEC 0029FE2C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802A2EF0 0029FE30  3C 00 43 30 */	lis r0, 0x4330
/* 802A2EF4 0029FE34  90 01 00 08 */	stw r0, 8(r1)
/* 802A2EF8 0029FE38  C8 01 00 08 */	lfd f0, 8(r1)
/* 802A2EFC 0029FE3C  EC 00 10 28 */	fsubs f0, f0, f2
/* 802A2F00 0029FE40  EC 03 00 24 */	fdivs f0, f3, f0
/* 802A2F04 0029FE44  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 802A2F08 0029FE48  D0 23 00 3C */	stfs f1, 0x3c(r3)
lbl_802A2F0C:
/* 802A2F0C 0029FE4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2F10 0029FE50  4E 80 00 20 */	blr 

.global moveDolby__18JAISoundParamsMoveFfUl
moveDolby__18JAISoundParamsMoveFfUl:
/* 802A2F14 0029FE54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A2F18 0029FE58  28 04 00 00 */	cmplwi r4, 0
/* 802A2F1C 0029FE5C  40 82 00 14 */	bne lbl_802A2F30
/* 802A2F20 0029FE60  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 802A2F24 0029FE64  38 00 00 00 */	li r0, 0
/* 802A2F28 0029FE68  90 03 00 4C */	stw r0, 0x4c(r3)
/* 802A2F2C 0029FE6C  48 00 00 38 */	b lbl_802A2F64
lbl_802A2F30:
/* 802A2F30 0029FE70  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 802A2F34 0029FE74  90 83 00 4C */	stw r4, 0x4c(r3)
/* 802A2F38 0029FE78  EC 61 00 28 */	fsubs f3, f1, f0
/* 802A2F3C 0029FE7C  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 802A2F40 0029FE80  C8 42 BD E8 */	lfd f2, lbl_804557E8-_SDA2_BASE_(r2)
/* 802A2F44 0029FE84  90 01 00 0C */	stw r0, 0xc(r1)
/* 802A2F48 0029FE88  3C 00 43 30 */	lis r0, 0x4330
/* 802A2F4C 0029FE8C  90 01 00 08 */	stw r0, 8(r1)
/* 802A2F50 0029FE90  C8 01 00 08 */	lfd f0, 8(r1)
/* 802A2F54 0029FE94  EC 00 10 28 */	fsubs f0, f0, f2
/* 802A2F58 0029FE98  EC 03 00 24 */	fdivs f0, f3, f0
/* 802A2F5C 0029FE9C  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 802A2F60 0029FEA0  D0 23 00 48 */	stfs f1, 0x48(r3)
lbl_802A2F64:
/* 802A2F64 0029FEA4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A2F68 0029FEA8  4E 80 00 20 */	blr 

