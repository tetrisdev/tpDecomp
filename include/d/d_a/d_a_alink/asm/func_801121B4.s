/* 801121B4 0010F0F4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 801121B8 0010F0F8  7C 08 02 A6 */ mflr r0
/* 801121BC 0010F0FC  90 01 00 14 */ stw r0, 0x14(r1)
/* 801121C0 0010F100  93 E1 00 0C */ stw r31, 0xc(r1)
/* 801121C4 0010F104  7C 7F 1B 78 */ mr r31, r3
/* 801121C8 0010F108  A0 03 2F E8 */ lhz r0, 0x2fe8(r3)
/* 801121CC 0010F10C  28 00 00 BC */ cmplwi r0, 0xbc
/* 801121D0 0010F110  41 82 00 14 */ beq lbl_801121E4
/* 801121D4 0010F114  38 80 00 BB */ li r4, 0xbb
/* 801121D8 0010F118  4B FB 0B CD */ bl commonProcInitNotSameProc__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 801121DC 0010F11C  2C 03 00 00 */ cmpwi r3, 0
/* 801121E0 0010F120  40 82 00 0C */ bne lbl_801121EC
lbl_801121E4:
/* 801121E4 0010F124  38 60 00 00 */ li r3, 0
/* 801121E8 0010F128  48 00 00 24 */ b lbl_8011220C
lbl_801121EC:
/* 801121EC 0010F12C  7F E3 FB 78 */ mr r3, r31
/* 801121F0 0010F130  38 80 01 11 */ li r4, 0x111
/* 801121F4 0010F134  4B F9 AD 8D */ bl setSingleAnimeBase__9daAlink_cFQ29daAlink_c11daAlink_ANM
/* 801121F8 0010F138  7F E3 FB 78 */ mr r3, r31
/* 801121FC 0010F13C  38 80 00 00 */ li r4, 0
/* 80112200 0010F140  38 A0 00 01 */ li r5, 1
/* 80112204 0010F144  4B FA F0 D9 */ bl deleteEquipItem__9daAlink_cFii
/* 80112208 0010F148  38 60 00 01 */ li r3, 1
lbl_8011220C:
/* 8011220C 0010F14C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80112210 0010F150  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80112214 0010F154  7C 08 03 A6 */ mtlr r0
/* 80112218 0010F158  38 21 00 10 */ addi r1, r1, 0x10
/* 8011221C 0010F15C  4E 80 00 20 */ blr