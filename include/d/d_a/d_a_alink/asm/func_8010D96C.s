/* 8010D96C 0010A8AC  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8010D970 0010A8B0  7C 08 02 A6 */ mflr r0
/* 8010D974 0010A8B4  90 01 00 14 */ stw r0, 0x14(r1)
/* 8010D978 0010A8B8  48 00 01 85 */ bl checkLv4BossRoom__9daAlink_cFv
/* 8010D97C 0010A8BC  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8010D980 0010A8C0  41 82 00 14 */ beq lbl_8010D994
/* 8010D984 0010A8C4  3C 60 80 39 */ lis r3, lbl_8038EA30@ha
/* 8010D988 0010A8C8  38 63 EA 30 */ addi r3, r3, lbl_8038EA30@l
/* 8010D98C 0010A8CC  A8 63 00 1C */ lha r3, 0x1c(r3)
/* 8010D990 0010A8D0  48 00 00 10 */ b lbl_8010D9A0
lbl_8010D994:
/* 8010D994 0010A8D4  3C 60 80 39 */ lis r3, lbl_8038EA30@ha
/* 8010D998 0010A8D8  38 63 EA 30 */ addi r3, r3, lbl_8038EA30@l
/* 8010D99C 0010A8DC  A8 63 00 14 */ lha r3, 0x14(r3)
lbl_8010D9A0:
/* 8010D9A0 0010A8E0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8010D9A4 0010A8E4  7C 08 03 A6 */ mtlr r0
/* 8010D9A8 0010A8E8  38 21 00 10 */ addi r1, r1, 0x10
/* 8010D9AC 0010A8EC  4E 80 00 20 */ blr
