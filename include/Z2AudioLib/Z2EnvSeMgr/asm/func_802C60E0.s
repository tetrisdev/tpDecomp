/* 802C60E0 002C3020  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802C60E4 002C3024  7C 08 02 A6 */ mflr r0
/* 802C60E8 002C3028  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C60EC 002C302C  FC A0 18 90 */ fmr f5, f3
/* 802C60F0 002C3030  80 04 00 00 */ lwz r0, 0(r4)
/* 802C60F4 002C3034  90 01 00 08 */ stw r0, 8(r1)
/* 802C60F8 002C3038  38 81 00 08 */ addi r4, r1, 8
/* 802C60FC 002C303C  C0 63 00 08 */ lfs f3, 8(r3)
/* 802C6100 002C3040  C0 83 00 0C */ lfs f4, 0xc(r3)
/* 802C6104 002C3044  38 A0 00 00 */ li r5, 0
/* 802C6108 002C3048  4B FF F9 AD */ bl startEnvSeLevel__11Z2EnvSeBaseF10JAISoundIDfffffUl
/* 802C610C 002C304C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802C6110 002C3050  7C 08 03 A6 */ mtlr r0
/* 802C6114 002C3054  38 21 00 10 */ addi r1, r1, 0x10
/* 802C6118 002C3058  4E 80 00 20 */ blr
