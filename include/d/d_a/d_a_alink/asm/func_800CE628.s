/* 800CE628 000CB568  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800CE62C 000CB56C  7C 08 02 A6 */ mflr r0
/* 800CE630 000CB570  90 01 00 14 */ stw r0, 0x14(r1)
/* 800CE634 000CB574  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800CE638 000CB578  7C 7F 1B 78 */ mr r31, r3
/* 800CE63C 000CB57C  4B FF FE 2D */ bl acceptSubjectModeChange__9daAlink_cFv
/* 800CE640 000CB580  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800CE644 000CB584  41 82 00 CC */ beq lbl_800CE710
/* 800CE648 000CB588  80 1F 05 80 */ lwz r0, 0x580(r31)
/* 800CE64C 000CB58C  64 00 04 00 */ oris r0, r0, 0x400
/* 800CE650 000CB590  90 1F 05 80 */ stw r0, 0x580(r31)
/* 800CE654 000CB594  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800CE658 000CB598  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800CE65C 000CB59C  80 1F 31 7C */ lwz r0, 0x317c(r31)
/* 800CE660 000CB5A0  1C 00 00 38 */ mulli r0, r0, 0x38
/* 800CE664 000CB5A4  7C 63 02 14 */ add r3, r3, r0
/* 800CE668 000CB5A8  80 03 5D 7C */ lwz r0, 0x5d7c(r3)
/* 800CE66C 000CB5AC  54 00 04 E7 */ rlwinm. r0, r0, 0, 0x13, 0x13
/* 800CE670 000CB5B0  41 82 00 A0 */ beq lbl_800CE710
/* 800CE674 000CB5B4  80 7F 31 A0 */ lwz r3, 0x31a0(r31)
/* 800CE678 000CB5B8  54 60 05 6B */ rlwinm. r0, r3, 0, 0x15, 0x15
/* 800CE67C 000CB5BC  41 82 00 60 */ beq lbl_800CE6DC
/* 800CE680 000CB5C0  7F E3 FB 78 */ mr r3, r31
/* 800CE684 000CB5C4  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 800CE688 000CB5C8  81 8C 01 90 */ lwz r12, 0x190(r12)
/* 800CE68C 000CB5CC  7D 89 03 A6 */ mtctr r12
/* 800CE690 000CB5D0  4E 80 04 21 */ bctrl
/* 800CE694 000CB5D4  28 03 00 00 */ cmplwi r3, 0
/* 800CE698 000CB5D8  41 82 00 10 */ beq lbl_800CE6A8
/* 800CE69C 000CB5DC  7F E3 FB 78 */ mr r3, r31
/* 800CE6A0 000CB5E0  48 02 85 4D */ bl procCanoeSubjectivityInit__9daAlink_cFv
/* 800CE6A4 000CB5E4  48 00 00 70 */ b lbl_800CE714
lbl_800CE6A8:
/* 800CE6A8 000CB5E8  7F E3 FB 78 */ mr r3, r31
/* 800CE6AC 000CB5EC  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 800CE6B0 000CB5F0  81 8C 01 94 */ lwz r12, 0x194(r12)
/* 800CE6B4 000CB5F4  7D 89 03 A6 */ mtctr r12
/* 800CE6B8 000CB5F8  4E 80 04 21 */ bctrl
/* 800CE6BC 000CB5FC  28 03 00 00 */ cmplwi r3, 0
/* 800CE6C0 000CB600  41 82 00 10 */ beq lbl_800CE6D0
/* 800CE6C4 000CB604  7F E3 FB 78 */ mr r3, r31
/* 800CE6C8 000CB608  48 03 8D 09 */ bl procBoardSubjectivityInit__9daAlink_cFv
/* 800CE6CC 000CB60C  48 00 00 48 */ b lbl_800CE714
lbl_800CE6D0:
/* 800CE6D0 000CB610  7F E3 FB 78 */ mr r3, r31
/* 800CE6D4 000CB614  48 02 2B C1 */ bl procHorseSubjectivityInit__9daAlink_cFv
/* 800CE6D8 000CB618  48 00 00 3C */ b lbl_800CE714
lbl_800CE6DC:
/* 800CE6DC 000CB61C  54 60 03 9D */ rlwinm. r0, r3, 0, 0xe, 0xe
/* 800CE6E0 000CB620  41 82 00 10 */ beq lbl_800CE6F0
/* 800CE6E4 000CB624  7F E3 FB 78 */ mr r3, r31
/* 800CE6E8 000CB628  48 06 51 65 */ bl procWolfRopeSubjectivityInit__9daAlink_cFv
/* 800CE6EC 000CB62C  48 00 00 28 */ b lbl_800CE714
lbl_800CE6F0:
/* 800CE6F0 000CB630  54 60 03 5B */ rlwinm. r0, r3, 0, 0xd, 0xd
/* 800CE6F4 000CB634  41 82 00 10 */ beq lbl_800CE704
/* 800CE6F8 000CB638  7F E3 FB 78 */ mr r3, r31
/* 800CE6FC 000CB63C  48 00 08 75 */ bl procCoSwimSubjectivityInit__9daAlink_cFv
/* 800CE700 000CB640  48 00 00 14 */ b lbl_800CE714
lbl_800CE704:
/* 800CE704 000CB644  7F E3 FB 78 */ mr r3, r31
/* 800CE708 000CB648  48 00 06 7D */ bl procCoSubjectivityInit__9daAlink_cFv
/* 800CE70C 000CB64C  48 00 00 08 */ b lbl_800CE714
lbl_800CE710:
/* 800CE710 000CB650  38 60 00 00 */ li r3, 0
lbl_800CE714:
/* 800CE714 000CB654  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800CE718 000CB658  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800CE71C 000CB65C  7C 08 03 A6 */ mtlr r0
/* 800CE720 000CB660  38 21 00 10 */ addi r1, r1, 0x10
/* 800CE724 000CB664  4E 80 00 20 */ blr
