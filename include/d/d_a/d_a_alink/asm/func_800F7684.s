/* 800F7684 000F45C4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800F7688 000F45C8  7C 08 02 A6 */ mflr r0
/* 800F768C 000F45CC  90 01 00 14 */ stw r0, 0x14(r1)
/* 800F7690 000F45D0  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800F7694 000F45D4  7C 7F 1B 78 */ mr r31, r3
/* 800F7698 000F45D8  4B FF D1 41 */ bl canoeCommon__9daAlink_cFv
/* 800F769C 000F45DC  2C 03 00 00 */ cmpwi r3, 0
/* 800F76A0 000F45E0  41 82 00 2C */ beq lbl_800F76CC
/* 800F76A4 000F45E4  7F E3 FB 78 */ mr r3, r31
/* 800F76A8 000F45E8  38 80 00 02 */ li r4, 2
/* 800F76AC 000F45EC  C0 22 92 C4 */ lfs f1, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800F76B0 000F45F0  4B FB 60 75 */ bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 800F76B4 000F45F4  7F E3 FB 78 */ mr r3, r31
/* 800F76B8 000F45F8  48 01 98 D1 */ bl resetOilBottleModel__9daAlink_cFv
/* 800F76BC 000F45FC  7F E3 FB 78 */ mr r3, r31
/* 800F76C0 000F4600  48 02 05 D1 */ bl resetSpecialEvent__9daAlink_cFv
/* 800F76C4 000F4604  38 60 00 01 */ li r3, 1
/* 800F76C8 000F4608  48 00 00 2C */ b lbl_800F76F4
lbl_800F76CC:
/* 800F76CC 000F460C  7F E3 FB 78 */ mr r3, r31
/* 800F76D0 000F4610  38 80 00 01 */ li r4, 1
/* 800F76D4 000F4614  48 01 99 E5 */ bl commonKandelaarPour__9daAlink_cFi
/* 800F76D8 000F4618  2C 03 00 00 */ cmpwi r3, 0
/* 800F76DC 000F461C  41 82 00 14 */ beq lbl_800F76F0
/* 800F76E0 000F4620  7F E3 FB 78 */ mr r3, r31
/* 800F76E4 000F4624  38 80 02 68 */ li r4, 0x268
/* 800F76E8 000F4628  C0 22 92 BC */ lfs f1, lbl_80452CBC-_SDA2_BASE_(r2)
/* 800F76EC 000F462C  4B FB 5C 89 */ bl setUpperAnimeBaseMorf__9daAlink_cFUsf
lbl_800F76F0:
/* 800F76F0 000F4630  38 60 00 01 */ li r3, 1
lbl_800F76F4:
/* 800F76F4 000F4634  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800F76F8 000F4638  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800F76FC 000F463C  7C 08 03 A6 */ mtlr r0
/* 800F7700 000F4640  38 21 00 10 */ addi r1, r1, 0x10
/* 800F7704 000F4644  4E 80 00 20 */ blr
