/* 800FE114 000FB054  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800FE118 000FB058  7C 08 02 A6 */ mflr r0
/* 800FE11C 000FB05C  90 01 00 14 */ stw r0, 0x14(r1)
/* 800FE120 000FB060  80 03 05 7C */ lwz r0, 0x57c(r3)
/* 800FE124 000FB064  64 00 00 40 */ oris r0, r0, 0x40
/* 800FE128 000FB068  90 03 05 7C */ stw r0, 0x57c(r3)
/* 800FE12C 000FB06C  80 03 31 A0 */ lwz r0, 0x31a0(r3)
/* 800FE130 000FB070  54 00 03 5B */ rlwinm. r0, r0, 0, 0xd, 0xd
/* 800FE134 000FB074  41 82 00 2C */ beq lbl_800FE160
/* 800FE138 000FB078  A8 83 30 6E */ lha r4, 0x306e(r3)
/* 800FE13C 000FB07C  3C 84 00 01 */ addis r4, r4, 1
/* 800FE140 000FB080  38 04 80 00 */ addi r0, r4, -32768
/* 800FE144 000FB084  B0 03 04 E6 */ sth r0, 0x4e6(r3)
/* 800FE148 000FB088  C0 23 04 D4 */ lfs f1, 0x4d4(r3)
/* 800FE14C 000FB08C  C0 02 95 50 */ lfs f0, lbl_80452F50-_SDA2_BASE_(r2)
/* 800FE150 000FB090  EC 01 00 28 */ fsubs f0, f1, f0
/* 800FE154 000FB094  D0 03 04 D4 */ stfs f0, 0x4d4(r3)
/* 800FE158 000FB098  48 00 11 35 */ bl setClimbStartNotGround__9daAlink_cFv
/* 800FE15C 000FB09C  48 00 00 08 */ b lbl_800FE164
lbl_800FE160:
/* 800FE160 000FB0A0  4B FF E0 19 */ bl procHangReadyInit__9daAlink_cFv
lbl_800FE164:
/* 800FE164 000FB0A4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800FE168 000FB0A8  7C 08 03 A6 */ mtlr r0
/* 800FE16C 000FB0AC  38 21 00 10 */ addi r1, r1, 0x10
/* 800FE170 000FB0B0  4E 80 00 20 */ blr
