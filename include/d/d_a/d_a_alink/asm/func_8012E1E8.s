/* 8012E1E8 0012B128  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8012E1EC 0012B12C  7C 08 02 A6 */ mflr r0
/* 8012E1F0 0012B130  90 01 00 14 */ stw r0, 0x14(r1)
/* 8012E1F4 0012B134  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8012E1F8 0012B138  93 C1 00 08 */ stw r30, 8(r1)
/* 8012E1FC 0012B13C  7C 7E 1B 78 */ mr r30, r3
/* 8012E200 0012B140  7C 9F 23 78 */ mr r31, r4
/* 8012E204 0012B144  38 80 00 F8 */ li r4, 0xf8
/* 8012E208 0012B148  4B F9 3D 65 */ bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 8012E20C 0012B14C  88 1E 2F 98 */ lbz r0, 0x2f98(r30)
/* 8012E210 0012B150  28 00 00 01 */ cmplwi r0, 1
/* 8012E214 0012B154  40 82 00 38 */ bne lbl_8012E24C
/* 8012E218 0012B158  7F C3 F3 78 */ mr r3, r30
/* 8012E21C 0012B15C  38 80 00 4D */ li r4, 0x4d
/* 8012E220 0012B160  3C A0 80 39 */ lis r5, lbl_8038EFA8@ha
/* 8012E224 0012B164  38 A5 EF A8 */ addi r5, r5, lbl_8038EFA8@l
/* 8012E228 0012B168  38 A5 00 3C */ addi r5, r5, 0x3c
/* 8012E22C 0012B16C  4B FF B6 1D */ bl setSingleAnimeWolfParam__9daAlink_cFQ29daAlink_c12daAlink_WANMPC16daAlinkHIO_anm_c
/* 8012E230 0012B170  3C 60 80 39 */ lis r3, lbl_8038EFA8@ha
/* 8012E234 0012B174  38 63 EF A8 */ addi r3, r3, lbl_8038EFA8@l
/* 8012E238 0012B178  C0 03 00 4C */ lfs f0, 0x4c(r3)
/* 8012E23C 0012B17C  D0 1E 34 78 */ stfs f0, 0x3478(r30)
/* 8012E240 0012B180  38 00 00 0A */ li r0, 0xa
/* 8012E244 0012B184  98 1E 2F CC */ stb r0, 0x2fcc(r30)
/* 8012E248 0012B188  48 00 00 44 */ b lbl_8012E28C
lbl_8012E24C:
/* 8012E24C 0012B18C  38 00 00 00 */ li r0, 0
/* 8012E250 0012B190  98 1E 2F CC */ stb r0, 0x2fcc(r30)
/* 8012E254 0012B194  7F C3 F3 78 */ mr r3, r30
/* 8012E258 0012B198  88 1E 2F 98 */ lbz r0, 0x2f98(r30)
/* 8012E25C 0012B19C  28 00 00 02 */ cmplwi r0, 2
/* 8012E260 0012B1A0  38 80 00 4B */ li r4, 0x4b
/* 8012E264 0012B1A4  40 82 00 08 */ bne lbl_8012E26C
/* 8012E268 0012B1A8  38 80 00 49 */ li r4, 0x49
lbl_8012E26C:
/* 8012E26C 0012B1AC  3C A0 80 39 */ lis r5, lbl_8038EFA8@ha
/* 8012E270 0012B1B0  38 A5 EF A8 */ addi r5, r5, lbl_8038EFA8@l
/* 8012E274 0012B1B4  38 A5 00 14 */ addi r5, r5, 0x14
/* 8012E278 0012B1B8  4B FF B5 D1 */ bl setSingleAnimeWolfParam__9daAlink_cFQ29daAlink_c12daAlink_WANMPC16daAlinkHIO_anm_c
/* 8012E27C 0012B1BC  3C 60 80 39 */ lis r3, lbl_8038EFA8@ha
/* 8012E280 0012B1C0  38 63 EF A8 */ addi r3, r3, lbl_8038EFA8@l
/* 8012E284 0012B1C4  C0 03 00 24 */ lfs f0, 0x24(r3)
/* 8012E288 0012B1C8  D0 1E 34 78 */ stfs f0, 0x3478(r30)
lbl_8012E28C:
/* 8012E28C 0012B1CC  B3 FE 30 12 */ sth r31, 0x3012(r30)
/* 8012E290 0012B1D0  38 00 00 04 */ li r0, 4
/* 8012E294 0012B1D4  98 1E 2F 9D */ stb r0, 0x2f9d(r30)
/* 8012E298 0012B1D8  7F C3 F3 78 */ mr r3, r30
/* 8012E29C 0012B1DC  38 80 00 02 */ li r4, 2
/* 8012E2A0 0012B1E0  4B FF 2F 21 */ bl setFootEffectProcType__9daAlink_cFi
/* 8012E2A4 0012B1E4  80 1E 05 84 */ lwz r0, 0x584(r30)
/* 8012E2A8 0012B1E8  60 00 00 0C */ ori r0, r0, 0xc
/* 8012E2AC 0012B1EC  90 1E 05 84 */ stw r0, 0x584(r30)
/* 8012E2B0 0012B1F0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8012E2B4 0012B1F4  D0 1E 33 98 */ stfs f0, 0x3398(r30)
/* 8012E2B8 0012B1F8  7F C3 F3 78 */ mr r3, r30
/* 8012E2BC 0012B1FC  4B F8 79 A9 */ bl setStepLandVibration__9daAlink_cFv
/* 8012E2C0 0012B200  38 60 00 01 */ li r3, 1
/* 8012E2C4 0012B204  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8012E2C8 0012B208  83 C1 00 08 */ lwz r30, 8(r1)
/* 8012E2CC 0012B20C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8012E2D0 0012B210  7C 08 03 A6 */ mtlr r0
/* 8012E2D4 0012B214  38 21 00 10 */ addi r1, r1, 0x10
/* 8012E2D8 0012B218  4E 80 00 20 */ blr