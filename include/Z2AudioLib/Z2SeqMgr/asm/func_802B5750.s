/* 802B5750 002B2690  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802B5754 002B2694  7C 08 02 A6 */ mflr r0
/* 802B5758 002B2698  90 01 00 14 */ stw r0, 0x14(r1)
/* 802B575C 002B269C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 802B5760 002B26A0  7C 7F 1B 78 */ mr r31, r3
/* 802B5764 002B26A4  7F E4 FB 78 */ mr r4, r31
/* 802B5768 002B26A8  38 A0 00 05 */ li r5, 5
/* 802B576C 002B26AC  4B FF E7 D5 */ bl getChildTrackVolume__8Z2SeqMgrFP14JAISoundHandlei
/* 802B5770 002B26B0  D0 3F 00 C8 */ stfs f1, 0xc8(r31)
/* 802B5774 002B26B4  7F E3 FB 78 */ mr r3, r31
/* 802B5778 002B26B8  7F E4 FB 78 */ mr r4, r31
/* 802B577C 002B26BC  38 A0 00 0C */ li r5, 0xc
/* 802B5780 002B26C0  4B FF E7 C1 */ bl getChildTrackVolume__8Z2SeqMgrFP14JAISoundHandlei
/* 802B5784 002B26C4  D0 3F 00 CC */ stfs f1, 0xcc(r31)
/* 802B5788 002B26C8  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 802B578C 002B26CC  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802B5790 002B26D0  7C 08 03 A6 */ mtlr r0
/* 802B5794 002B26D4  38 21 00 10 */ addi r1, r1, 0x10
/* 802B5798 002B26D8  4E 80 00 20 */ blr
