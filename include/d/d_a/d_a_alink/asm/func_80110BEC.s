/* 80110BEC 0010DB2C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80110BF0 0010DB30  7C 08 02 A6 */ mflr r0
/* 80110BF4 0010DB34  90 01 00 14 */ stw r0, 0x14(r1)
/* 80110BF8 0010DB38  3C 60 80 43 */ lis r3, lbl_80434AC8@ha
/* 80110BFC 0010DB3C  38 63 4A C8 */ addi r3, r3, lbl_80434AC8@l
/* 80110C00 0010DB40  80 63 00 38 */ lwz r3, 0x38(r3)
/* 80110C04 0010DB44  80 63 00 14 */ lwz r3, 0x14(r3)
/* 80110C08 0010DB48  2C 04 00 00 */ cmpwi r4, 0
/* 80110C0C 0010DB4C  40 82 00 08 */ bne lbl_80110C14
/* 80110C10 0010DB50  4B FF FC DD */ bl kandelaarModelCallBack__9daAlink_cFv
lbl_80110C14:
/* 80110C14 0010DB54  38 60 00 01 */ li r3, 1
/* 80110C18 0010DB58  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80110C1C 0010DB5C  7C 08 03 A6 */ mtlr r0
/* 80110C20 0010DB60  38 21 00 10 */ addi r1, r1, 0x10
/* 80110C24 0010DB64  4E 80 00 20 */ blr