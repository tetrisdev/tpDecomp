/* 800EF35C 000EC29C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800EF360 000EC2A0  7C 08 02 A6 */ mflr r0
/* 800EF364 000EC2A4  90 01 00 14 */ stw r0, 0x14(r1)
/* 800EF368 000EC2A8  38 80 FF FC */ li r4, -4
/* 800EF36C 000EC2AC  38 A0 00 01 */ li r5, 1
/* 800EF370 000EC2B0  38 C0 00 00 */ li r6, 0
/* 800EF374 000EC2B4  38 E0 00 00 */ li r7, 0
/* 800EF378 000EC2B8  39 00 00 00 */ li r8, 0
/* 800EF37C 000EC2BC  39 20 00 00 */ li r9, 0
/* 800EF380 000EC2C0  4B FE A3 5D */ bl procCoLargeDamageInit__9daAlink_cFiissP12dCcD_GObjInfi
/* 800EF384 000EC2C4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800EF388 000EC2C8  7C 08 03 A6 */ mtlr r0
/* 800EF38C 000EC2CC  38 21 00 10 */ addi r1, r1, 0x10
/* 800EF390 000EC2D0  4E 80 00 20 */ blr
