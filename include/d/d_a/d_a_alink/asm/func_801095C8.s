/* 801095C8 00106508  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 801095CC 0010650C  7C 08 02 A6 */ mflr r0
/* 801095D0 00106510  90 01 00 24 */ stw r0, 0x24(r1)
/* 801095D4 00106514  39 61 00 20 */ addi r11, r1, 0x20
/* 801095D8 00106518  48 25 8C 05 */ bl _savegpr_29
/* 801095DC 0010651C  7C 7F 1B 78 */ mr r31, r3
/* 801095E0 00106520  A0 03 2F E8 */ lhz r0, 0x2fe8(r3)
/* 801095E4 00106524  28 00 00 C8 */ cmplwi r0, 0xc8
/* 801095E8 00106528  41 82 00 0C */ beq lbl_801095F4
/* 801095EC 0010652C  28 00 00 CB */ cmplwi r0, 0xcb
/* 801095F0 00106530  40 82 00 0C */ bne lbl_801095FC
lbl_801095F4:
/* 801095F4 00106534  38 60 00 00 */ li r3, 0
/* 801095F8 00106538  48 00 01 90 */ b lbl_80109788
lbl_801095FC:
/* 801095FC 0010653C  A8 1F 30 8E */ lha r0, 0x308e(r31)
/* 80109600 00106540  2C 00 00 00 */ cmpwi r0, 0
/* 80109604 00106544  41 82 00 1C */ beq lbl_80109620
/* 80109608 00106548  4B FF F4 11 */ bl checkHookshotWait__9daAlink_cCFv
/* 8010960C 0010654C  2C 03 00 00 */ cmpwi r3, 0
/* 80109610 00106550  41 82 00 10 */ beq lbl_80109620
/* 80109614 00106554  A8 7F 30 8E */ lha r3, 0x308e(r31)
/* 80109618 00106558  38 03 FF FF */ addi r0, r3, -1
/* 8010961C 0010655C  B0 1F 30 8E */ sth r0, 0x308e(r31)
lbl_80109620:
/* 80109620 00106560  38 60 00 00 */ li r3, 0
/* 80109624 00106564  A0 1F 1F BC */ lhz r0, 0x1fbc(r31)
/* 80109628 00106568  28 00 01 8D */ cmplwi r0, 0x18d
/* 8010962C 0010656C  41 82 00 10 */ beq lbl_8010963C
/* 80109630 00106570  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 80109634 00106574  28 00 01 8C */ cmplwi r0, 0x18c
/* 80109638 00106578  40 82 00 08 */ bne lbl_80109640
lbl_8010963C:
/* 8010963C 0010657C  38 60 00 01 */ li r3, 1
lbl_80109640:
/* 80109640 00106580  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80109644 00106584  40 82 00 4C */ bne lbl_80109690
/* 80109648 00106588  7F E3 FB 78 */ mr r3, r31
/* 8010964C 0010658C  4B FF FB 99 */ bl setHookshotReadyAnime__9daAlink_cFv
/* 80109650 00106590  7F E3 FB 78 */ mr r3, r31
/* 80109654 00106594  4B FA DB 15 */ bl setFastShotTimer__9daAlink_cFv
/* 80109658 00106598  83 DF 27 E0 */ lwz r30, 0x27e0(r31)
/* 8010965C 0010659C  3B A0 00 01 */ li r29, 1
/* 80109660 001065A0  7F C3 F3 78 */ mr r3, r30
/* 80109664 001065A4  4B F6 A1 81 */ bl LockonTruth__12dAttention_cFv
/* 80109668 001065A8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8010966C 001065AC  40 82 00 14 */ bne lbl_80109680
/* 80109670 001065B0  80 1E 03 34 */ lwz r0, 0x334(r30)
/* 80109674 001065B4  54 00 00 85 */ rlwinm. r0, r0, 0, 2, 2
/* 80109678 001065B8  40 82 00 08 */ bne lbl_80109680
/* 8010967C 001065BC  3B A0 00 00 */ li r29, 0
lbl_80109680:
/* 80109680 001065C0  57 A0 06 3F */ clrlwi. r0, r29, 0x18
/* 80109684 001065C4  40 82 00 0C */ bne lbl_80109690
/* 80109688 001065C8  A8 1F 04 E6 */ lha r0, 0x4e6(r31)
/* 8010968C 001065CC  B0 1F 2F E4 */ sth r0, 0x2fe4(r31)
lbl_80109690:
/* 80109690 001065D0  83 DF 27 E0 */ lwz r30, 0x27e0(r31)
/* 80109694 001065D4  3B A0 00 01 */ li r29, 1
/* 80109698 001065D8  7F C3 F3 78 */ mr r3, r30
/* 8010969C 001065DC  4B F6 A1 49 */ bl LockonTruth__12dAttention_cFv
/* 801096A0 001065E0  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 801096A4 001065E4  40 82 00 14 */ bne lbl_801096B8
/* 801096A8 001065E8  80 1E 03 34 */ lwz r0, 0x334(r30)
/* 801096AC 001065EC  54 00 00 85 */ rlwinm. r0, r0, 0, 2, 2
/* 801096B0 001065F0  40 82 00 08 */ bne lbl_801096B8
/* 801096B4 001065F4  3B A0 00 00 */ li r29, 0
lbl_801096B8:
/* 801096B8 001065F8  57 A0 06 3F */ clrlwi. r0, r29, 0x18
/* 801096BC 001065FC  40 82 00 70 */ bne lbl_8010972C
/* 801096C0 00106600  A8 1F 30 8E */ lha r0, 0x308e(r31)
/* 801096C4 00106604  2C 00 00 00 */ cmpwi r0, 0
/* 801096C8 00106608  40 82 00 64 */ bne lbl_8010972C
/* 801096CC 0010660C  80 7F 31 A0 */ lwz r3, 0x31a0(r31)
/* 801096D0 00106610  54 60 05 6B */ rlwinm. r0, r3, 0, 0x15, 0x15
/* 801096D4 00106614  41 82 00 38 */ beq lbl_8010970C
/* 801096D8 00106618  7F E3 FB 78 */ mr r3, r31
/* 801096DC 0010661C  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 801096E0 00106620  81 8C 01 90 */ lwz r12, 0x190(r12)
/* 801096E4 00106624  7D 89 03 A6 */ mtctr r12
/* 801096E8 00106628  4E 80 04 21 */ bctrl
/* 801096EC 0010662C  28 03 00 00 */ cmplwi r3, 0
/* 801096F0 00106630  41 82 00 10 */ beq lbl_80109700
/* 801096F4 00106634  7F E3 FB 78 */ mr r3, r31
/* 801096F8 00106638  4B FE DB 11 */ bl procCanoeHookshotSubjectInit__9daAlink_cFv
/* 801096FC 0010663C  48 00 00 8C */ b lbl_80109788
lbl_80109700:
/* 80109700 00106640  7F E3 FB 78 */ mr r3, r31
/* 80109704 00106644  4B FE 8F F1 */ bl procHorseHookshotSubjectInit__9daAlink_cFv
/* 80109708 00106648  48 00 00 80 */ b lbl_80109788
lbl_8010970C:
/* 8010970C 0010664C  54 60 03 5B */ rlwinm. r0, r3, 0, 0xd, 0xd
/* 80109710 00106650  41 82 00 10 */ beq lbl_80109720
/* 80109714 00106654  7F E3 FB 78 */ mr r3, r31
/* 80109718 00106658  4B FF B5 39 */ bl procSwimHookshotSubjectInit__9daAlink_cFv
/* 8010971C 0010665C  48 00 00 6C */ b lbl_80109788
lbl_80109720:
/* 80109720 00106660  7F E3 FB 78 */ mr r3, r31
/* 80109724 00106664  48 00 23 85 */ bl procHookshotSubjectInit__9daAlink_cFv
/* 80109728 00106668  48 00 00 60 */ b lbl_80109788
lbl_8010972C:
/* 8010972C 0010666C  80 7F 31 A0 */ lwz r3, 0x31a0(r31)
/* 80109730 00106670  54 60 05 6B */ rlwinm. r0, r3, 0, 0x15, 0x15
/* 80109734 00106674  41 82 00 38 */ beq lbl_8010976C
/* 80109738 00106678  7F E3 FB 78 */ mr r3, r31
/* 8010973C 0010667C  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 80109740 00106680  81 8C 01 90 */ lwz r12, 0x190(r12)
/* 80109744 00106684  7D 89 03 A6 */ mtctr r12
/* 80109748 00106688  4E 80 04 21 */ bctrl
/* 8010974C 0010668C  28 03 00 00 */ cmplwi r3, 0
/* 80109750 00106690  41 82 00 10 */ beq lbl_80109760
/* 80109754 00106694  7F E3 FB 78 */ mr r3, r31
/* 80109758 00106698  4B FE DB C5 */ bl procCanoeHookshotMoveInit__9daAlink_cFv
/* 8010975C 0010669C  48 00 00 2C */ b lbl_80109788
lbl_80109760:
/* 80109760 001066A0  7F E3 FB 78 */ mr r3, r31
/* 80109764 001066A4  4B FE 90 C1 */ bl procHorseHookshotMoveInit__9daAlink_cFv
/* 80109768 001066A8  48 00 00 20 */ b lbl_80109788
lbl_8010976C:
/* 8010976C 001066AC  54 60 03 5B */ rlwinm. r0, r3, 0, 0xd, 0xd
/* 80109770 001066B0  41 82 00 10 */ beq lbl_80109780
/* 80109774 001066B4  7F E3 FB 78 */ mr r3, r31
/* 80109778 001066B8  4B FF B7 41 */ bl procSwimHookshotMoveInit__9daAlink_cFv
/* 8010977C 001066BC  48 00 00 0C */ b lbl_80109788
lbl_80109780:
/* 80109780 001066C0  7F E3 FB 78 */ mr r3, r31
/* 80109784 001066C4  48 00 24 85 */ bl procHookshotMoveInit__9daAlink_cFv
lbl_80109788:
/* 80109788 001066C8  39 61 00 20 */ addi r11, r1, 0x20
/* 8010978C 001066CC  48 25 8A 9D */ bl _restgpr_29
/* 80109790 001066D0  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80109794 001066D4  7C 08 03 A6 */ mtlr r0
/* 80109798 001066D8  38 21 00 20 */ addi r1, r1, 0x20
/* 8010979C 001066DC  4E 80 00 20 */ blr
