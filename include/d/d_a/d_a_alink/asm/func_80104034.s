/* 80104034 00100F74  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80104038 00100F78  7C 08 02 A6 */ mflr r0
/* 8010403C 00100F7C  90 01 00 24 */ stw r0, 0x24(r1)
/* 80104040 00100F80  93 E1 00 1C */ stw r31, 0x1c(r1)
/* 80104044 00100F84  7C 7F 1B 78 */ mr r31, r3
/* 80104048 00100F88  C0 22 94 A8 */ lfs f1, lbl_80452EA8-_SDA2_BASE_(r2)
/* 8010404C 00100F8C  48 16 39 09 */ bl cM_rndF__Ff
/* 80104050 00100F90  C0 02 95 DC */ lfs f0, lbl_80452FDC-_SDA2_BASE_(r2)
/* 80104054 00100F94  EC 20 08 2A */ fadds f1, f0, f1
/* 80104058 00100F98  C0 02 95 D8 */ lfs f0, lbl_80452FD8-_SDA2_BASE_(r2)
/* 8010405C 00100F9C  EC 00 00 72 */ fmuls f0, f0, f1
/* 80104060 00100FA0  FC 00 00 1E */ fctiwz f0, f0
/* 80104064 00100FA4  D8 01 00 08 */ stfd f0, 8(r1)
/* 80104068 00100FA8  80 61 00 0C */ lwz r3, 0xc(r1)
/* 8010406C 00100FAC  A8 1F 30 0C */ lha r0, 0x300c(r31)
/* 80104070 00100FB0  7C 00 1A 14 */ add r0, r0, r3
/* 80104074 00100FB4  B0 1F 30 0C */ sth r0, 0x300c(r31)
/* 80104078 00100FB8  80 1F 05 74 */ lwz r0, 0x574(r31)
/* 8010407C 00100FBC  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 80104080 00100FC0  41 82 00 3C */ beq lbl_801040BC
/* 80104084 00100FC4  7F E3 FB 78 */ mr r3, r31
/* 80104088 00100FC8  38 80 00 01 */ li r4, 1
/* 8010408C 00100FCC  38 A0 00 01 */ li r5, 1
/* 80104090 00100FD0  4B FB 74 29 */ bl checkHeavyStateOn__9daAlink_cFii
/* 80104094 00100FD4  2C 03 00 00 */ cmpwi r3, 0
/* 80104098 00100FD8  41 82 00 14 */ beq lbl_801040AC
/* 8010409C 00100FDC  3C 60 80 39 */ lis r3, lbl_8038F8B4@ha
/* 801040A0 00100FE0  38 63 F8 B4 */ addi r3, r3, lbl_8038F8B4@l
/* 801040A4 00100FE4  C0 23 00 98 */ lfs f1, 0x98(r3)
/* 801040A8 00100FE8  48 00 00 20 */ b lbl_801040C8
lbl_801040AC:
/* 801040AC 00100FEC  3C 60 80 39 */ lis r3, lbl_8038F8B4@ha
/* 801040B0 00100FF0  38 63 F8 B4 */ addi r3, r3, lbl_8038F8B4@l
/* 801040B4 00100FF4  C0 23 00 6C */ lfs f1, 0x6c(r3)
/* 801040B8 00100FF8  48 00 00 10 */ b lbl_801040C8
lbl_801040BC:
/* 801040BC 00100FFC  3C 60 80 39 */ lis r3, lbl_8038ED2C@ha
/* 801040C0 00101000  38 63 ED 2C */ addi r3, r3, lbl_8038ED2C@l
/* 801040C4 00101004  C0 23 00 98 */ lfs f1, 0x98(r3)
lbl_801040C8:
/* 801040C8 00101008  A8 1F 30 0C */ lha r0, 0x300c(r31)
/* 801040CC 0010100C  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 801040D0 00101010  3C 60 80 44 */ lis r3, lbl_80439A20@ha
/* 801040D4 00101014  38 63 9A 20 */ addi r3, r3, lbl_80439A20@l
/* 801040D8 00101018  7C 03 04 2E */ lfsx f0, r3, r0
/* 801040DC 0010101C  EC 01 00 32 */ fmuls f0, f1, f0
/* 801040E0 00101020  D0 1F 2B 98 */ stfs f0, 0x2b98(r31)
/* 801040E4 00101024  83 E1 00 1C */ lwz r31, 0x1c(r1)
/* 801040E8 00101028  80 01 00 24 */ lwz r0, 0x24(r1)
/* 801040EC 0010102C  7C 08 03 A6 */ mtlr r0
/* 801040F0 00101030  38 21 00 20 */ addi r1, r1, 0x20
/* 801040F4 00101034  4E 80 00 20 */ blr
