/* 800CC364 000C92A4  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 800CC368 000C92A8  7C 08 02 A6 */ mflr r0
/* 800CC36C 000C92AC  90 01 00 24 */ stw r0, 0x24(r1)
/* 800CC370 000C92B0  39 61 00 20 */ addi r11, r1, 0x20
/* 800CC374 000C92B4  48 29 5E 69 */ bl _savegpr_29
/* 800CC378 000C92B8  7C 7D 1B 78 */ mr r29, r3
/* 800CC37C 000C92BC  7C 9E 23 78 */ mr r30, r4
/* 800CC380 000C92C0  38 1D 32 A0 */ addi r0, r29, 0x32a0
/* 800CC384 000C92C4  7C 00 F0 40 */ cmplw r0, r30
/* 800CC388 000C92C8  40 82 00 40 */ bne lbl_800CC3C8
/* 800CC38C 000C92CC  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 800CC390 000C92D0  54 00 03 19 */ rlwinm. r0, r0, 0, 0xc, 0xc
/* 800CC394 000C92D4  40 82 00 20 */ bne lbl_800CC3B4
/* 800CC398 000C92D8  4B FF 3A 19 */ bl checkZoraWearAbility__9daAlink_cCFv
/* 800CC39C 000C92DC  2C 03 00 00 */ cmpwi r3, 0
/* 800CC3A0 000C92E0  40 82 00 14 */ bne lbl_800CC3B4
/* 800CC3A4 000C92E4  7F A3 EB 78 */ mr r3, r29
/* 800CC3A8 000C92E8  4B FF 3A 55 */ bl checkMagicArmorWearAbility__9daAlink_cCFv
/* 800CC3AC 000C92EC  2C 03 00 00 */ cmpwi r3, 0
/* 800CC3B0 000C92F0  41 82 00 10 */ beq lbl_800CC3C0
lbl_800CC3B4:
/* 800CC3B4 000C92F4  3B E2 99 3C */ addi r31, r2, 0x8045333C - 0x80459A00 /*SDA HACK; original: lbl_8045333C-_SDA2_BASE_*/
/* 800CC3B8 000C92F8  3B C2 99 3C */ addi r30, r2, 0x8045333C - 0x80459A00 /*SDA HACK; original: lbl_8045333C-_SDA2_BASE_*/
/* 800CC3BC 000C92FC  48 00 00 10 */ b lbl_800CC3CC
lbl_800CC3C0:
/* 800CC3C0 000C9300  3B FE 00 08 */ addi r31, r30, 8
/* 800CC3C4 000C9304  48 00 00 08 */ b lbl_800CC3CC
lbl_800CC3C8:
/* 800CC3C8 000C9308  7F DF F3 78 */ mr r31, r30
lbl_800CC3CC:
/* 800CC3CC 000C930C  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 800CC3D0 000C9310  54 00 03 19 */ rlwinm. r0, r0, 0, 0xc, 0xc
/* 800CC3D4 000C9314  40 82 03 F0 */ bne lbl_800CC7C4
/* 800CC3D8 000C9318  7F A3 EB 78 */ mr r3, r29
/* 800CC3DC 000C931C  4B FF 39 D5 */ bl checkZoraWearAbility__9daAlink_cCFv
/* 800CC3E0 000C9320  2C 03 00 00 */ cmpwi r3, 0
/* 800CC3E4 000C9324  41 82 00 AC */ beq lbl_800CC490
/* 800CC3E8 000C9328  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC3EC 000C932C  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC3F0 000C9330  80 63 00 34 */ lwz r3, 0x34(r3)
/* 800CC3F4 000C9334  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC3F8 000C9338  38 80 00 01 */ li r4, 1
/* 800CC3FC 000C933C  7F C5 F3 78 */ mr r5, r30
/* 800CC400 000C9340  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC404 000C9344  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC408 000C9348  7D 89 03 A6 */ mtctr r12
/* 800CC40C 000C934C  4E 80 04 21 */ bctrl
/* 800CC410 000C9350  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC414 000C9354  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC418 000C9358  80 63 00 00 */ lwz r3, 0(r3)
/* 800CC41C 000C935C  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC420 000C9360  38 80 00 01 */ li r4, 1
/* 800CC424 000C9364  7F C5 F3 78 */ mr r5, r30
/* 800CC428 000C9368  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC42C 000C936C  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC430 000C9370  7D 89 03 A6 */ mtctr r12
/* 800CC434 000C9374  4E 80 04 21 */ bctrl
/* 800CC438 000C9378  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC43C 000C937C  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC440 000C9380  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC444 000C9384  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC448 000C9388  38 80 00 01 */ li r4, 1
/* 800CC44C 000C938C  7F C5 F3 78 */ mr r5, r30
/* 800CC450 000C9390  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC454 000C9394  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC458 000C9398  7D 89 03 A6 */ mtctr r12
/* 800CC45C 000C939C  4E 80 04 21 */ bctrl
/* 800CC460 000C93A0  80 7D 06 58 */ lwz r3, 0x658(r29)
/* 800CC464 000C93A4  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC468 000C93A8  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC46C 000C93AC  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC470 000C93B0  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC474 000C93B4  38 80 00 01 */ li r4, 1
/* 800CC478 000C93B8  7F C5 F3 78 */ mr r5, r30
/* 800CC47C 000C93BC  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC480 000C93C0  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC484 000C93C4  7D 89 03 A6 */ mtctr r12
/* 800CC488 000C93C8  4E 80 04 21 */ bctrl
/* 800CC48C 000C93CC  48 00 03 38 */ b lbl_800CC7C4
lbl_800CC490:
/* 800CC490 000C93D0  7F A3 EB 78 */ mr r3, r29
/* 800CC494 000C93D4  4B FF 39 69 */ bl checkMagicArmorWearAbility__9daAlink_cCFv
/* 800CC498 000C93D8  2C 03 00 00 */ cmpwi r3, 0
/* 800CC49C 000C93DC  41 82 01 28 */ beq lbl_800CC5C4
/* 800CC4A0 000C93E0  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC4A4 000C93E4  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC4A8 000C93E8  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC4AC 000C93EC  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC4B0 000C93F0  38 80 00 01 */ li r4, 1
/* 800CC4B4 000C93F4  7F C5 F3 78 */ mr r5, r30
/* 800CC4B8 000C93F8  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC4BC 000C93FC  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC4C0 000C9400  7D 89 03 A6 */ mtctr r12
/* 800CC4C4 000C9404  4E 80 04 21 */ bctrl
/* 800CC4C8 000C9408  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC4CC 000C940C  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC4D0 000C9410  80 63 00 28 */ lwz r3, 0x28(r3)
/* 800CC4D4 000C9414  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC4D8 000C9418  38 80 00 01 */ li r4, 1
/* 800CC4DC 000C941C  7F C5 F3 78 */ mr r5, r30
/* 800CC4E0 000C9420  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC4E4 000C9424  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC4E8 000C9428  7D 89 03 A6 */ mtctr r12
/* 800CC4EC 000C942C  4E 80 04 21 */ bctrl
/* 800CC4F0 000C9430  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC4F4 000C9434  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC4F8 000C9438  80 63 00 24 */ lwz r3, 0x24(r3)
/* 800CC4FC 000C943C  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC500 000C9440  38 80 00 01 */ li r4, 1
/* 800CC504 000C9444  7F C5 F3 78 */ mr r5, r30
/* 800CC508 000C9448  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC50C 000C944C  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC510 000C9450  7D 89 03 A6 */ mtctr r12
/* 800CC514 000C9454  4E 80 04 21 */ bctrl
/* 800CC518 000C9458  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC51C 000C945C  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC520 000C9460  80 63 00 20 */ lwz r3, 0x20(r3)
/* 800CC524 000C9464  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC528 000C9468  38 80 00 01 */ li r4, 1
/* 800CC52C 000C946C  7F C5 F3 78 */ mr r5, r30
/* 800CC530 000C9470  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC534 000C9474  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC538 000C9478  7D 89 03 A6 */ mtctr r12
/* 800CC53C 000C947C  4E 80 04 21 */ bctrl
/* 800CC540 000C9480  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC544 000C9484  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC548 000C9488  80 63 00 18 */ lwz r3, 0x18(r3)
/* 800CC54C 000C948C  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC550 000C9490  38 80 00 01 */ li r4, 1
/* 800CC554 000C9494  7F C5 F3 78 */ mr r5, r30
/* 800CC558 000C9498  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC55C 000C949C  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC560 000C94A0  7D 89 03 A6 */ mtctr r12
/* 800CC564 000C94A4  4E 80 04 21 */ bctrl
/* 800CC568 000C94A8  80 7D 06 58 */ lwz r3, 0x658(r29)
/* 800CC56C 000C94AC  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC570 000C94B0  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC574 000C94B4  80 63 00 08 */ lwz r3, 8(r3)
/* 800CC578 000C94B8  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC57C 000C94BC  38 80 00 01 */ li r4, 1
/* 800CC580 000C94C0  7F C5 F3 78 */ mr r5, r30
/* 800CC584 000C94C4  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC588 000C94C8  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC58C 000C94CC  7D 89 03 A6 */ mtctr r12
/* 800CC590 000C94D0  4E 80 04 21 */ bctrl
/* 800CC594 000C94D4  80 7D 06 58 */ lwz r3, 0x658(r29)
/* 800CC598 000C94D8  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC59C 000C94DC  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC5A0 000C94E0  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC5A4 000C94E4  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC5A8 000C94E8  38 80 00 01 */ li r4, 1
/* 800CC5AC 000C94EC  7F C5 F3 78 */ mr r5, r30
/* 800CC5B0 000C94F0  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC5B4 000C94F4  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC5B8 000C94F8  7D 89 03 A6 */ mtctr r12
/* 800CC5BC 000C94FC  4E 80 04 21 */ bctrl
/* 800CC5C0 000C9500  48 00 02 04 */ b lbl_800CC7C4
lbl_800CC5C4:
/* 800CC5C4 000C9504  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800CC5C8 000C9508  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800CC5CC 000C950C  88 03 00 13 */ lbz r0, 0x13(r3)
/* 800CC5D0 000C9510  28 00 00 2E */ cmplwi r0, 0x2e
/* 800CC5D4 000C9514  40 82 00 84 */ bne lbl_800CC658
/* 800CC5D8 000C9518  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC5DC 000C951C  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC5E0 000C9520  80 63 00 1C */ lwz r3, 0x1c(r3)
/* 800CC5E4 000C9524  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC5E8 000C9528  38 80 00 01 */ li r4, 1
/* 800CC5EC 000C952C  7F C5 F3 78 */ mr r5, r30
/* 800CC5F0 000C9530  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC5F4 000C9534  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC5F8 000C9538  7D 89 03 A6 */ mtctr r12
/* 800CC5FC 000C953C  4E 80 04 21 */ bctrl
/* 800CC600 000C9540  80 7D 06 58 */ lwz r3, 0x658(r29)
/* 800CC604 000C9544  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC608 000C9548  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC60C 000C954C  80 63 00 00 */ lwz r3, 0(r3)
/* 800CC610 000C9550  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC614 000C9554  38 80 00 01 */ li r4, 1
/* 800CC618 000C9558  7F C5 F3 78 */ mr r5, r30
/* 800CC61C 000C955C  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC620 000C9560  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC624 000C9564  7D 89 03 A6 */ mtctr r12
/* 800CC628 000C9568  4E 80 04 21 */ bctrl
/* 800CC62C 000C956C  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC630 000C9570  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC634 000C9574  80 63 00 14 */ lwz r3, 0x14(r3)
/* 800CC638 000C9578  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC63C 000C957C  38 80 00 01 */ li r4, 1
/* 800CC640 000C9580  7F E5 FB 78 */ mr r5, r31
/* 800CC644 000C9584  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC648 000C9588  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC64C 000C958C  7D 89 03 A6 */ mtctr r12
/* 800CC650 000C9590  4E 80 04 21 */ bctrl
/* 800CC654 000C9594  48 00 01 70 */ b lbl_800CC7C4
lbl_800CC658:
/* 800CC658 000C9598  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC65C 000C959C  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC660 000C95A0  80 63 00 44 */ lwz r3, 0x44(r3)
/* 800CC664 000C95A4  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC668 000C95A8  38 80 00 01 */ li r4, 1
/* 800CC66C 000C95AC  7F C5 F3 78 */ mr r5, r30
/* 800CC670 000C95B0  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC674 000C95B4  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC678 000C95B8  7D 89 03 A6 */ mtctr r12
/* 800CC67C 000C95BC  4E 80 04 21 */ bctrl
/* 800CC680 000C95C0  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC684 000C95C4  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC688 000C95C8  80 63 00 24 */ lwz r3, 0x24(r3)
/* 800CC68C 000C95CC  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC690 000C95D0  38 80 00 01 */ li r4, 1
/* 800CC694 000C95D4  7F C5 F3 78 */ mr r5, r30
/* 800CC698 000C95D8  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC69C 000C95DC  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC6A0 000C95E0  7D 89 03 A6 */ mtctr r12
/* 800CC6A4 000C95E4  4E 80 04 21 */ bctrl
/* 800CC6A8 000C95E8  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC6AC 000C95EC  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC6B0 000C95F0  80 63 00 00 */ lwz r3, 0(r3)
/* 800CC6B4 000C95F4  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC6B8 000C95F8  38 80 00 01 */ li r4, 1
/* 800CC6BC 000C95FC  7F C5 F3 78 */ mr r5, r30
/* 800CC6C0 000C9600  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC6C4 000C9604  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC6C8 000C9608  7D 89 03 A6 */ mtctr r12
/* 800CC6CC 000C960C  4E 80 04 21 */ bctrl
/* 800CC6D0 000C9610  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC6D4 000C9614  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC6D8 000C9618  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC6DC 000C961C  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC6E0 000C9620  38 80 00 01 */ li r4, 1
/* 800CC6E4 000C9624  7F C5 F3 78 */ mr r5, r30
/* 800CC6E8 000C9628  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC6EC 000C962C  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC6F0 000C9630  7D 89 03 A6 */ mtctr r12
/* 800CC6F4 000C9634  4E 80 04 21 */ bctrl
/* 800CC6F8 000C9638  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC6FC 000C963C  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC700 000C9640  80 63 00 08 */ lwz r3, 8(r3)
/* 800CC704 000C9644  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC708 000C9648  38 80 00 01 */ li r4, 1
/* 800CC70C 000C964C  7F C5 F3 78 */ mr r5, r30
/* 800CC710 000C9650  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC714 000C9654  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC718 000C9658  7D 89 03 A6 */ mtctr r12
/* 800CC71C 000C965C  4E 80 04 21 */ bctrl
/* 800CC720 000C9660  80 7D 06 58 */ lwz r3, 0x658(r29)
/* 800CC724 000C9664  80 63 00 04 */ lwz r3, 4(r3)
/* 800CC728 000C9668  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC72C 000C966C  80 63 00 00 */ lwz r3, 0(r3)
/* 800CC730 000C9670  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC734 000C9674  38 80 00 01 */ li r4, 1
/* 800CC738 000C9678  7F C5 F3 78 */ mr r5, r30
/* 800CC73C 000C967C  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC740 000C9680  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC744 000C9684  7D 89 03 A6 */ mtctr r12
/* 800CC748 000C9688  4E 80 04 21 */ bctrl
/* 800CC74C 000C968C  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC750 000C9690  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC754 000C9694  80 63 00 40 */ lwz r3, 0x40(r3)
/* 800CC758 000C9698  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC75C 000C969C  38 80 00 01 */ li r4, 1
/* 800CC760 000C96A0  7F E5 FB 78 */ mr r5, r31
/* 800CC764 000C96A4  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC768 000C96A8  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC76C 000C96AC  7D 89 03 A6 */ mtctr r12
/* 800CC770 000C96B0  4E 80 04 21 */ bctrl
/* 800CC774 000C96B4  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC778 000C96B8  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC77C 000C96BC  80 63 00 3C */ lwz r3, 0x3c(r3)
/* 800CC780 000C96C0  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC784 000C96C4  38 80 00 01 */ li r4, 1
/* 800CC788 000C96C8  7F E5 FB 78 */ mr r5, r31
/* 800CC78C 000C96CC  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC790 000C96D0  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC794 000C96D4  7D 89 03 A6 */ mtctr r12
/* 800CC798 000C96D8  4E 80 04 21 */ bctrl
/* 800CC79C 000C96DC  80 7D 06 4C */ lwz r3, 0x64c(r29)
/* 800CC7A0 000C96E0  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800CC7A4 000C96E4  80 63 00 38 */ lwz r3, 0x38(r3)
/* 800CC7A8 000C96E8  80 63 00 2C */ lwz r3, 0x2c(r3)
/* 800CC7AC 000C96EC  38 80 00 01 */ li r4, 1
/* 800CC7B0 000C96F0  7F E5 FB 78 */ mr r5, r31
/* 800CC7B4 000C96F4  81 83 00 00 */ lwz r12, 0(r3)
/* 800CC7B8 000C96F8  81 8C 00 60 */ lwz r12, 0x60(r12)
/* 800CC7BC 000C96FC  7D 89 03 A6 */ mtctr r12
/* 800CC7C0 000C9700  4E 80 04 21 */ bctrl
lbl_800CC7C4:
/* 800CC7C4 000C9704  39 61 00 20 */ addi r11, r1, 0x20
/* 800CC7C8 000C9708  48 29 5A 61 */ bl _restgpr_29
/* 800CC7CC 000C970C  80 01 00 24 */ lwz r0, 0x24(r1)
/* 800CC7D0 000C9710  7C 08 03 A6 */ mtlr r0
/* 800CC7D4 000C9714  38 21 00 20 */ addi r1, r1, 0x20
/* 800CC7D8 000C9718  4E 80 00 20 */ blr
