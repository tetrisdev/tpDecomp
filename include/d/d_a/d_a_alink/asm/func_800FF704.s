/* 800FF704 000FC644  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 800FF708 000FC648  7C 08 02 A6 */ mflr r0
/* 800FF70C 000FC64C  90 01 00 44 */ stw r0, 0x44(r1)
/* 800FF710 000FC650  93 E1 00 3C */ stw r31, 0x3c(r1)
/* 800FF714 000FC654  93 C1 00 38 */ stw r30, 0x38(r1)
/* 800FF718 000FC658  7C 7E 1B 78 */ mr r30, r3
/* 800FF71C 000FC65C  4B FF F1 4D */ bl setMoveBGClimbCorrect__9daAlink_cFv
/* 800FF720 000FC660  2C 03 00 00 */ cmpwi r3, 0
/* 800FF724 000FC664  41 82 00 0C */ beq lbl_800FF730
/* 800FF728 000FC668  38 60 00 01 */ li r3, 1
/* 800FF72C 000FC66C  48 00 00 D4 */ b lbl_800FF800
lbl_800FF730:
/* 800FF730 000FC670  3B FE 1F D0 */ addi r31, r30, 0x1fd0
/* 800FF734 000FC674  38 00 00 02 */ li r0, 2
/* 800FF738 000FC678  98 1E 2F 99 */ stb r0, 0x2f99(r30)
/* 800FF73C 000FC67C  38 00 00 00 */ li r0, 0
/* 800FF740 000FC680  B0 1E 30 12 */ sth r0, 0x3012(r30)
/* 800FF744 000FC684  80 7E 20 60 */ lwz r3, 0x2060(r30)
/* 800FF748 000FC688  C0 23 00 0C */ lfs f1, 0xc(r3)
/* 800FF74C 000FC68C  38 61 00 20 */ addi r3, r1, 0x20
/* 800FF750 000FC690  38 9E 35 88 */ addi r4, r30, 0x3588
/* 800FF754 000FC694  48 16 74 31 */ bl __ml__4cXyzCFf
/* 800FF758 000FC698  80 7E 20 60 */ lwz r3, 0x2060(r30)
/* 800FF75C 000FC69C  C0 23 00 0C */ lfs f1, 0xc(r3)
/* 800FF760 000FC6A0  38 61 00 14 */ addi r3, r1, 0x14
/* 800FF764 000FC6A4  38 9E 37 C8 */ addi r4, r30, 0x37c8
/* 800FF768 000FC6A8  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800FF76C 000FC6AC  EC 20 08 28 */ fsubs f1, f0, f1
/* 800FF770 000FC6B0  48 16 74 15 */ bl __ml__4cXyzCFf
/* 800FF774 000FC6B4  38 61 00 08 */ addi r3, r1, 8
/* 800FF778 000FC6B8  38 81 00 20 */ addi r4, r1, 0x20
/* 800FF77C 000FC6BC  38 A1 00 14 */ addi r5, r1, 0x14
/* 800FF780 000FC6C0  48 16 73 65 */ bl __pl__4cXyzCFRC3Vec
/* 800FF784 000FC6C4  C0 01 00 08 */ lfs f0, 8(r1)
/* 800FF788 000FC6C8  D0 1E 35 88 */ stfs f0, 0x3588(r30)
/* 800FF78C 000FC6CC  C0 01 00 0C */ lfs f0, 0xc(r1)
/* 800FF790 000FC6D0  D0 1E 35 8C */ stfs f0, 0x358c(r30)
/* 800FF794 000FC6D4  C0 01 00 10 */ lfs f0, 0x10(r1)
/* 800FF798 000FC6D8  D0 1E 35 90 */ stfs f0, 0x3590(r30)
/* 800FF79C 000FC6DC  C0 1E 35 8C */ lfs f0, 0x358c(r30)
/* 800FF7A0 000FC6E0  D0 1E 33 B0 */ stfs f0, 0x33b0(r30)
/* 800FF7A4 000FC6E4  7F C3 F3 78 */ mr r3, r30
/* 800FF7A8 000FC6E8  4B FF E9 CD */ bl setClimbShapeOffset__9daAlink_cFv
/* 800FF7AC 000FC6EC  7F C3 F3 78 */ mr r3, r30
/* 800FF7B0 000FC6F0  4B FF DE 35 */ bl checkLadderFall__9daAlink_cFv
/* 800FF7B4 000FC6F4  2C 03 00 00 */ cmpwi r3, 0
/* 800FF7B8 000FC6F8  40 82 00 44 */ bne lbl_800FF7FC
/* 800FF7BC 000FC6FC  7F E3 FB 78 */ mr r3, r31
/* 800FF7C0 000FC700  48 05 ED 0D */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800FF7C4 000FC704  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800FF7C8 000FC708  40 82 00 24 */ bne lbl_800FF7EC
/* 800FF7CC 000FC70C  C0 3E 33 AC */ lfs f1, 0x33ac(r30)
/* 800FF7D0 000FC710  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800FF7D4 000FC714  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800FF7D8 000FC718  40 81 00 24 */ ble lbl_800FF7FC
/* 800FF7DC 000FC71C  C0 3F 00 10 */ lfs f1, 0x10(r31)
/* 800FF7E0 000FC720  C0 1E 34 78 */ lfs f0, 0x3478(r30)
/* 800FF7E4 000FC724  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800FF7E8 000FC728  40 81 00 14 */ ble lbl_800FF7FC
lbl_800FF7EC:
/* 800FF7EC 000FC72C  7F C3 F3 78 */ mr r3, r30
/* 800FF7F0 000FC730  38 80 00 00 */ li r4, 0
/* 800FF7F4 000FC734  38 A0 00 00 */ li r5, 0
/* 800FF7F8 000FC738  48 00 09 01 */ bl procClimbWaitInit__9daAlink_cFii
lbl_800FF7FC:
/* 800FF7FC 000FC73C  38 60 00 01 */ li r3, 1
lbl_800FF800:
/* 800FF800 000FC740  83 E1 00 3C */ lwz r31, 0x3c(r1)
/* 800FF804 000FC744  83 C1 00 38 */ lwz r30, 0x38(r1)
/* 800FF808 000FC748  80 01 00 44 */ lwz r0, 0x44(r1)
/* 800FF80C 000FC74C  7C 08 03 A6 */ mtlr r0
/* 800FF810 000FC750  38 21 00 40 */ addi r1, r1, 0x40
/* 800FF814 000FC754  4E 80 00 20 */ blr
