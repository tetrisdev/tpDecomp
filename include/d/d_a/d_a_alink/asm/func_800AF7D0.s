/* 800AF7D0 000AC710  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 800AF7D4 000AC714  7C 08 02 A6 */ mflr r0
/* 800AF7D8 000AC718  90 01 00 24 */ stw r0, 0x24(r1)
/* 800AF7DC 000AC71C  93 E1 00 1C */ stw r31, 0x1c(r1)
/* 800AF7E0 000AC720  93 C1 00 18 */ stw r30, 0x18(r1)
/* 800AF7E4 000AC724  7C 7E 1B 78 */ mr r30, r3
/* 800AF7E8 000AC728  B0 81 00 08 */ sth r4, 8(r1)
/* 800AF7EC 000AC72C  7C BF 2B 78 */ mr r31, r5
/* 800AF7F0 000AC730  B0 C1 00 0A */ sth r6, 0xa(r1)
/* 800AF7F4 000AC734  38 81 00 0A */ addi r4, r1, 0xa
/* 800AF7F8 000AC738  38 A1 00 08 */ addi r5, r1, 8
/* 800AF7FC 000AC73C  4B FF 44 E9 */ bl setIdxMask__9daAlink_cFPUsPUs
/* 800AF800 000AC740  A0 A1 00 0A */ lhz r5, 0xa(r1)
/* 800AF804 000AC744  28 05 FF FF */ cmplwi r5, 0xffff
/* 800AF808 000AC748  41 82 00 20 */ beq lbl_800AF828
/* 800AF80C 000AC74C  38 7E 21 2C */ addi r3, r30, 0x212c
/* 800AF810 000AC750  A0 81 00 08 */ lhz r4, 8(r1)
/* 800AF814 000AC754  48 0A F9 05 */ bl loadDataDemoRID__14daPy_anmHeap_cFUsUs
/* 800AF818 000AC758  80 1E 05 74 */ lwz r0, 0x574(r30)
/* 800AF81C 000AC75C  54 00 04 E2 */ rlwinm r0, r0, 0, 0x13, 0x11
/* 800AF820 000AC760  90 1E 05 74 */ stw r0, 0x574(r30)
/* 800AF824 000AC764  48 00 00 28 */ b lbl_800AF84C
lbl_800AF828:
/* 800AF828 000AC768  2C 1F 00 00 */ cmpwi r31, 0
/* 800AF82C 000AC76C  41 82 00 14 */ beq lbl_800AF840
/* 800AF830 000AC770  38 7E 21 2C */ addi r3, r30, 0x212c
/* 800AF834 000AC774  A0 81 00 08 */ lhz r4, 8(r1)
/* 800AF838 000AC778  48 0A F8 99 */ bl loadDataPriIdx__14daPy_anmHeap_cFUs
/* 800AF83C 000AC77C  48 00 00 10 */ b lbl_800AF84C
lbl_800AF840:
/* 800AF840 000AC780  38 7E 21 2C */ addi r3, r30, 0x212c
/* 800AF844 000AC784  A0 81 00 08 */ lhz r4, 8(r1)
/* 800AF848 000AC788  48 0A F8 21 */ bl loadDataIdx__14daPy_anmHeap_cFUs
lbl_800AF84C:
/* 800AF84C 000AC78C  28 03 00 00 */ cmplwi r3, 0
/* 800AF850 000AC790  41 82 00 38 */ beq lbl_800AF888
/* 800AF854 000AC794  90 7E 21 58 */ stw r3, 0x2158(r30)
/* 800AF858 000AC798  80 7E 21 58 */ lwz r3, 0x2158(r30)
/* 800AF85C 000AC79C  80 9E 06 C0 */ lwz r4, 0x6c0(r30)
/* 800AF860 000AC7A0  48 27 B9 75 */ bl searchUpdateMaterialID__19J3DAnmTextureSRTKeyFP12J3DModelData
/* 800AF864 000AC7A4  80 7E 06 C0 */ lwz r3, 0x6c0(r30)
/* 800AF868 000AC7A8  38 63 00 58 */ addi r3, r3, 0x58
/* 800AF86C 000AC7AC  80 9E 21 58 */ lwz r4, 0x2158(r30)
/* 800AF870 000AC7B0  48 28 04 55 */ bl entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey
/* 800AF874 000AC7B4  38 00 00 03 */ li r0, 3
/* 800AF878 000AC7B8  98 0D 8A 49 */ stb r0, lbl_80450FC9-_SDA_BASE_(r13)
/* 800AF87C 000AC7BC  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800AF880 000AC7C0  80 7E 21 58 */ lwz r3, 0x2158(r30)
/* 800AF884 000AC7C4  D0 03 00 08 */ stfs f0, 8(r3)
lbl_800AF888:
/* 800AF888 000AC7C8  83 E1 00 1C */ lwz r31, 0x1c(r1)
/* 800AF88C 000AC7CC  83 C1 00 18 */ lwz r30, 0x18(r1)
/* 800AF890 000AC7D0  80 01 00 24 */ lwz r0, 0x24(r1)
/* 800AF894 000AC7D4  7C 08 03 A6 */ mtlr r0
/* 800AF898 000AC7D8  38 21 00 20 */ addi r1, r1, 0x20
/* 800AF89C 000AC7DC  4E 80 00 20 */ blr
