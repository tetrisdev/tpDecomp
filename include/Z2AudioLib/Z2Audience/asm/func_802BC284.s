/* 802BC284 002B91C4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802BC288 002B91C8  7C 08 02 A6 */ mflr r0
/* 802BC28C 002B91CC  90 01 00 14 */ stw r0, 0x14(r1)
/* 802BC290 002B91D0  93 E1 00 0C */ stw r31, 0xc(r1)
/* 802BC294 002B91D4  7C 7F 1B 78 */ mr r31, r3
/* 802BC298 002B91D8  C0 0D 8D B8 */ lfs f0, lbl_80451338-_SDA_BASE_(r13)
/* 802BC29C 002B91DC  D0 03 00 40 */ stfs f0, 0x40(r3)
/* 802BC2A0 002B91E0  C0 0D 82 68 */ lfs f0, lbl_804507E8-_SDA_BASE_(r13)
/* 802BC2A4 002B91E4  D0 03 00 48 */ stfs f0, 0x48(r3)
/* 802BC2A8 002B91E8  C0 0D 82 64 */ lfs f0, lbl_804507E4-_SDA_BASE_(r13)
/* 802BC2AC 002B91EC  D0 03 00 44 */ stfs f0, 0x44(r3)
/* 802BC2B0 002B91F0  C0 0D 82 6C */ lfs f0, lbl_804507EC-_SDA_BASE_(r13)
/* 802BC2B4 002B91F4  D0 03 00 54 */ stfs f0, 0x54(r3)
/* 802BC2B8 002B91F8  C0 02 C0 A0 */ lfs f0, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BC2BC 002B91FC  D0 03 00 50 */ stfs f0, 0x50(r3)
/* 802BC2C0 002B9200  C0 0D 82 60 */ lfs f0, lbl_804507E0-_SDA_BASE_(r13)
/* 802BC2C4 002B9204  D0 03 00 4C */ stfs f0, 0x4c(r3)
/* 802BC2C8 002B9208  C0 02 C0 A8 */ lfs f0, lbl_80455AA8-_SDA2_BASE_(r2)
/* 802BC2CC 002B920C  D0 03 00 58 */ stfs f0, 0x58(r3)
/* 802BC2D0 002B9210  38 00 00 FF */ li r0, 0xff
/* 802BC2D4 002B9214  90 03 00 64 */ stw r0, 0x64(r3)
/* 802BC2D8 002B9218  C0 0D 82 70 */ lfs f0, lbl_804507F0-_SDA_BASE_(r13)
/* 802BC2DC 002B921C  D0 03 00 5C */ stfs f0, 0x5c(r3)
/* 802BC2E0 002B9220  C0 02 C0 D8 */ lfs f0, lbl_80455AD8-_SDA2_BASE_(r2)
/* 802BC2E4 002B9224  D0 03 00 60 */ stfs f0, 0x60(r3)
/* 802BC2E8 002B9228  48 00 00 21 */ bl initVolumeDist__19Z2Audience3DSettingFv
/* 802BC2EC 002B922C  7F E3 FB 78 */ mr r3, r31
/* 802BC2F0 002B9230  48 00 03 B5 */ bl initDolbyDist__19Z2Audience3DSettingFv
/* 802BC2F4 002B9234  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 802BC2F8 002B9238  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802BC2FC 002B923C  7C 08 03 A6 */ mtlr r0
/* 802BC300 002B9240  38 21 00 10 */ addi r1, r1, 0x10
/* 802BC304 002B9244  4E 80 00 20 */ blr
