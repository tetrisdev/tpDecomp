/* 8000FBC0 0000CB00  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8000FBC4 0000CB04  7C 08 02 A6 */ mflr r0
/* 8000FBC8 0000CB08  90 01 00 14 */ stw r0, 0x14(r1)
/* 8000FBCC 0000CB0C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8000FBD0 0000CB10  7C 7F 1B 78 */ mr r31, r3
/* 8000FBD4 0000CB14  C0 03 00 28 */ lfs f0, 0x28(r3)
/* 8000FBD8 0000CB18  C0 22 81 18 */ lfs f1, lbl_80451B18-_SDA2_BASE_(r2)
/* 8000FBDC 0000CB1C  FC 00 08 40 */ fcmpo cr0, f0, f1
/* 8000FBE0 0000CB20  40 80 00 50 */ bge lbl_8000FC30
/* 8000FBE4 0000CB24  D0 1F 00 2C */ stfs f0, 0x2c(r31)
/* 8000FBE8 0000CB28  C0 5F 00 34 */ lfs f2, 0x34(r31)
/* 8000FBEC 0000CB2C  C0 02 81 1C */ lfs f0, lbl_80451B1C-_SDA2_BASE_(r2)
/* 8000FBF0 0000CB30  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 8000FBF4 0000CB34  40 80 00 34 */ bge lbl_8000FC28
/* 8000FBF8 0000CB38  38 7F 00 30 */ addi r3, r31, 0x30
/* 8000FBFC 0000CB3C  FC 40 10 50 */ fneg f2, f2
/* 8000FC00 0000CB40  48 26 0B 41 */ bl cLib_chaseF__FPfff
/* 8000FC04 0000CB44  C0 3F 00 28 */ lfs f1, 0x28(r31)
/* 8000FC08 0000CB48  C0 5F 00 30 */ lfs f2, 0x30(r31)
/* 8000FC0C 0000CB4C  C0 02 81 18 */ lfs f0, lbl_80451B18-_SDA2_BASE_(r2)
/* 8000FC10 0000CB50  EC 00 08 28 */ fsubs f0, f0, f1
/* 8000FC14 0000CB54  EC 00 00 B2 */ fmuls f0, f0, f2
/* 8000FC18 0000CB58  EC 02 00 32 */ fmuls f0, f2, f0
/* 8000FC1C 0000CB5C  EC 01 00 2A */ fadds f0, f1, f0
/* 8000FC20 0000CB60  D0 1F 00 28 */ stfs f0, 0x28(r31)
/* 8000FC24 0000CB64  48 00 00 0C */ b lbl_8000FC30
lbl_8000FC28:
/* 8000FC28 0000CB68  38 7F 00 28 */ addi r3, r31, 0x28
/* 8000FC2C 0000CB6C  48 26 0B 15 */ bl cLib_chaseF__FPfff
lbl_8000FC30:
/* 8000FC30 0000CB70  38 7F 00 0C */ addi r3, r31, 0xc
/* 8000FC34 0000CB74  48 31 8D 99 */ bl update__12J3DFrameCtrlFv
/* 8000FC38 0000CB78  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8000FC3C 0000CB7C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8000FC40 0000CB80  7C 08 03 A6 */ mtlr r0
/* 8000FC44 0000CB84  38 21 00 10 */ addi r1, r1, 0x10
/* 8000FC48 0000CB88  4E 80 00 20 */ blr