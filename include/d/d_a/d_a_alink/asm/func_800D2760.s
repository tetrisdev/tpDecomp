/* 800D2760 000CF6A0  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 800D2764 000CF6A4  7C 08 02 A6 */ mflr r0
/* 800D2768 000CF6A8  90 01 00 24 */ stw r0, 0x24(r1)
/* 800D276C 000CF6AC  DB E1 00 10 */ stfd f31, 0x10(r1)
/* 800D2770 000CF6B0  F3 E1 00 18 */ psq_st f31, 24(r1), 0, 0
/* 800D2774 000CF6B4  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800D2778 000CF6B8  93 C1 00 08 */ stw r30, 8(r1)
/* 800D277C 000CF6BC  7C 7E 1B 78 */ mr r30, r3
/* 800D2780 000CF6C0  C3 E3 33 98 */ lfs f31, 0x3398(r3)
/* 800D2784 000CF6C4  8B E3 2F 98 */ lbz r31, 0x2f98(r3)
/* 800D2788 000CF6C8  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800D278C 000CF6CC  D0 03 33 98 */ stfs f0, 0x3398(r3)
/* 800D2790 000CF6D0  98 83 2F 98 */ stb r4, 0x2f98(r3)
/* 800D2794 000CF6D4  80 03 31 A0 */ lwz r0, 0x31a0(r3)
/* 800D2798 000CF6D8  60 00 00 04 */ ori r0, r0, 4
/* 800D279C 000CF6DC  90 03 31 A0 */ stw r0, 0x31a0(r3)
/* 800D27A0 000CF6E0  38 80 00 01 */ li r4, 1
/* 800D27A4 000CF6E4  4B FE 79 2D */ bl checkNextAction__9daAlink_cFi
/* 800D27A8 000CF6E8  2C 03 00 00 */ cmpwi r3, 0
/* 800D27AC 000CF6EC  41 82 00 0C */ beq lbl_800D27B8
/* 800D27B0 000CF6F0  38 60 00 01 */ li r3, 1
/* 800D27B4 000CF6F4  48 00 00 10 */ b lbl_800D27C4
lbl_800D27B8:
/* 800D27B8 000CF6F8  D3 FE 33 98 */ stfs f31, 0x3398(r30)
/* 800D27BC 000CF6FC  9B FE 2F 98 */ stb r31, 0x2f98(r30)
/* 800D27C0 000CF700  38 60 00 00 */ li r3, 0
lbl_800D27C4:
/* 800D27C4 000CF704  E3 E1 00 18 */ psq_l f31, 24(r1), 0, 0
/* 800D27C8 000CF708  CB E1 00 10 */ lfd f31, 0x10(r1)
/* 800D27CC 000CF70C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800D27D0 000CF710  83 C1 00 08 */ lwz r30, 8(r1)
/* 800D27D4 000CF714  80 01 00 24 */ lwz r0, 0x24(r1)
/* 800D27D8 000CF718  7C 08 03 A6 */ mtlr r0
/* 800D27DC 000CF71C  38 21 00 20 */ addi r1, r1, 0x20
/* 800D27E0 000CF720  4E 80 00 20 */ blr
