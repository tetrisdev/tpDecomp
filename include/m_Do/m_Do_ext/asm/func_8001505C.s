/* 8001505C 00011F9C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80015060 00011FA0  7C 08 02 A6 */ mflr r0
/* 80015064 00011FA4  90 01 00 14 */ stw r0, 0x14(r1)
/* 80015068 00011FA8  7C 83 23 78 */ mr r3, r4
/* 8001506C 00011FAC  7C A4 2B 78 */ mr r4, r5
/* 80015070 00011FB0  48 31 9C 3D */ bl init__24J3DMtxCalcJ3DSysInitMayaFRC3VecRA3_A4_Cf
/* 80015074 00011FB4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80015078 00011FB8  7C 08 03 A6 */ mtlr r0
/* 8001507C 00011FBC  38 21 00 10 */ addi r1, r1, 0x10
/* 80015080 00011FC0  4E 80 00 20 */ blr