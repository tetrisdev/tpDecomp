/* 8013A8FC 0013783C  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 8013A900 00137840  7C 08 02 A6 */ mflr r0
/* 8013A904 00137844  90 01 00 24 */ stw r0, 0x24(r1)
/* 8013A908 00137848  39 61 00 20 */ addi r11, r1, 0x20
/* 8013A90C 0013784C  48 22 78 CD */ bl _savegpr_28
/* 8013A910 00137850  7C 7D 1B 78 */ mr r29, r3
/* 8013A914 00137854  7C 9C 23 78 */ mr r28, r4
/* 8013A918 00137858  7C BE 2B 78 */ mr r30, r5
/* 8013A91C 0013785C  7C DF 33 78 */ mr r31, r6
/* 8013A920 00137860  38 80 01 1E */ li r4, 0x11e
/* 8013A924 00137864  4B F8 76 49 */ bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 8013A928 00137868  80 7D 27 EC */ lwz r3, 0x27ec(r29)
/* 8013A92C 0013786C  28 03 00 00 */ cmplwi r3, 0
/* 8013A930 00137870  41 82 00 24 */ beq lbl_8013A954
/* 8013A934 00137874  2C 1C 00 00 */ cmpwi r28, 0
/* 8013A938 00137878  41 82 00 1C */ beq lbl_8013A954
/* 8013A93C 0013787C  88 03 04 96 */ lbz r0, 0x496(r3)
/* 8013A940 00137880  28 00 00 02 */ cmplwi r0, 2
/* 8013A944 00137884  40 82 00 1C */ bne lbl_8013A960
/* 8013A948 00137888  A0 03 05 8E */ lhz r0, 0x58e(r3)
/* 8013A94C 0013788C  54 00 07 39 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8013A950 00137890  41 82 00 10 */ beq lbl_8013A960
lbl_8013A954:
/* 8013A954 00137894  38 00 00 00 */ li r0, 0
/* 8013A958 00137898  B0 1D 30 10 */ sth r0, 0x3010(r29)
/* 8013A95C 0013789C  48 00 00 0C */ b lbl_8013A968
lbl_8013A960:
/* 8013A960 001378A0  38 00 00 01 */ li r0, 1
/* 8013A964 001378A4  B0 1D 30 10 */ sth r0, 0x3010(r29)
lbl_8013A968:
/* 8013A968 001378A8  80 9D 27 EC */ lwz r4, 0x27ec(r29)
/* 8013A96C 001378AC  28 04 00 00 */ cmplwi r4, 0
/* 8013A970 001378B0  41 82 00 34 */ beq lbl_8013A9A4
/* 8013A974 001378B4  88 04 04 96 */ lbz r0, 0x496(r4)
/* 8013A978 001378B8  28 00 00 02 */ cmplwi r0, 2
/* 8013A97C 001378BC  40 82 00 28 */ bne lbl_8013A9A4
/* 8013A980 001378C0  2C 1C 00 00 */ cmpwi r28, 0
/* 8013A984 001378C4  41 82 00 20 */ beq lbl_8013A9A4
/* 8013A988 001378C8  A0 04 05 8E */ lhz r0, 0x58e(r4)
/* 8013A98C 001378CC  54 00 07 39 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8013A990 001378D0  40 82 00 14 */ bne lbl_8013A9A4
/* 8013A994 001378D4  7F A3 EB 78 */ mr r3, r29
/* 8013A998 001378D8  4B ED FE 05 */ bl fopAcM_seenActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 8013A99C 001378DC  2C 03 50 00 */ cmpwi r3, 0x5000
/* 8013A9A0 001378E0  41 81 00 0C */ bgt lbl_8013A9AC
lbl_8013A9A4:
/* 8013A9A4 001378E4  2C 1F 00 00 */ cmpwi r31, 0
/* 8013A9A8 001378E8  41 82 00 60 */ beq lbl_8013AA08
lbl_8013A9AC:
/* 8013A9AC 001378EC  7F A3 EB 78 */ mr r3, r29
/* 8013A9B0 001378F0  38 80 00 54 */ li r4, 0x54
/* 8013A9B4 001378F4  3C A0 80 39 */ lis r5, lbl_8038F618@ha
/* 8013A9B8 001378F8  38 A5 F6 18 */ addi r5, r5, lbl_8038F618@l
/* 8013A9BC 001378FC  38 A5 00 28 */ addi r5, r5, 0x28
/* 8013A9C0 00137900  4B FE EE 89 */ bl setSingleAnimeWolfParam__9daAlink_cFQ29daAlink_c12daAlink_WANMPC16daAlinkHIO_anm_c
/* 8013A9C4 00137904  38 00 00 01 */ li r0, 1
/* 8013A9C8 00137908  B0 1D 30 0C */ sth r0, 0x300c(r29)
/* 8013A9CC 0013790C  3C 60 80 42 */ lis r3, lbl_8042561C@ha
/* 8013A9D0 00137910  38 63 56 1C */ addi r3, r3, lbl_8042561C@l
/* 8013A9D4 00137914  C0 03 00 08 */ lfs f0, 8(r3)
/* 8013A9D8 00137918  FC 40 00 50 */ fneg f2, f0
/* 8013A9DC 0013791C  C0 23 00 04 */ lfs f1, 4(r3)
/* 8013A9E0 00137920  C0 03 00 00 */ lfs f0, 0(r3)
/* 8013A9E4 00137924  FC 00 00 50 */ fneg f0, f0
/* 8013A9E8 00137928  D0 1D 35 88 */ stfs f0, 0x3588(r29)
/* 8013A9EC 0013792C  D0 3D 35 8C */ stfs f1, 0x358c(r29)
/* 8013A9F0 00137930  D0 5D 35 90 */ stfs f2, 0x3590(r29)
/* 8013A9F4 00137934  3C 60 80 39 */ lis r3, lbl_8038F618@ha
/* 8013A9F8 00137938  38 63 F6 18 */ addi r3, r3, lbl_8038F618@l
/* 8013A9FC 0013793C  C0 03 00 38 */ lfs f0, 0x38(r3)
/* 8013AA00 00137940  D0 1D 34 78 */ stfs f0, 0x3478(r29)
/* 8013AA04 00137944  48 00 00 50 */ b lbl_8013AA54
lbl_8013AA08:
/* 8013AA08 00137948  7F A3 EB 78 */ mr r3, r29
/* 8013AA0C 0013794C  38 80 00 53 */ li r4, 0x53
/* 8013AA10 00137950  3C A0 80 39 */ lis r5, lbl_8038F618@ha
/* 8013AA14 00137954  38 A5 F6 18 */ addi r5, r5, lbl_8038F618@l
/* 8013AA18 00137958  38 A5 00 14 */ addi r5, r5, 0x14
/* 8013AA1C 0013795C  4B FE EE 2D */ bl setSingleAnimeWolfParam__9daAlink_cFQ29daAlink_c12daAlink_WANMPC16daAlinkHIO_anm_c
/* 8013AA20 00137960  38 00 00 00 */ li r0, 0
/* 8013AA24 00137964  B0 1D 30 0C */ sth r0, 0x300c(r29)
/* 8013AA28 00137968  3C 60 80 42 */ lis r3, lbl_8042561C@ha
/* 8013AA2C 0013796C  C4 03 56 1C */ lfsu f0, lbl_8042561C@l(r3)
/* 8013AA30 00137970  D0 1D 35 88 */ stfs f0, 0x3588(r29)
/* 8013AA34 00137974  C0 03 00 04 */ lfs f0, 4(r3)
/* 8013AA38 00137978  D0 1D 35 8C */ stfs f0, 0x358c(r29)
/* 8013AA3C 0013797C  C0 03 00 08 */ lfs f0, 8(r3)
/* 8013AA40 00137980  D0 1D 35 90 */ stfs f0, 0x3590(r29)
/* 8013AA44 00137984  3C 60 80 39 */ lis r3, lbl_8038F618@ha
/* 8013AA48 00137988  38 63 F6 18 */ addi r3, r3, lbl_8038F618@l
/* 8013AA4C 0013798C  C0 03 00 24 */ lfs f0, 0x24(r3)
/* 8013AA50 00137990  D0 1D 34 78 */ stfs f0, 0x3478(r29)
lbl_8013AA54:
/* 8013AA54 00137994  38 00 00 04 */ li r0, 4
/* 8013AA58 00137998  98 1D 2F 9D */ stb r0, 0x2f9d(r29)
/* 8013AA5C 0013799C  7F A3 EB 78 */ mr r3, r29
/* 8013AA60 001379A0  38 80 00 01 */ li r4, 1
/* 8013AA64 001379A4  4B FE 67 5D */ bl setFootEffectProcType__9daAlink_cFi
/* 8013AA68 001379A8  B3 FD 30 08 */ sth r31, 0x3008(r29)
/* 8013AA6C 001379AC  C0 3D 33 98 */ lfs f1, 0x3398(r29)
/* 8013AA70 001379B0  C0 02 92 98 */ lfs f0, lbl_80452C98-_SDA2_BASE_(r2)
/* 8013AA74 001379B4  EC 01 00 32 */ fmuls f0, f1, f0
/* 8013AA78 001379B8  D0 1D 33 98 */ stfs f0, 0x3398(r29)
/* 8013AA7C 001379BC  2C 1E 00 00 */ cmpwi r30, 0
/* 8013AA80 001379C0  41 82 00 0C */ beq lbl_8013AA8C
/* 8013AA84 001379C4  38 00 00 04 */ li r0, 4
/* 8013AA88 001379C8  98 1D 2F 99 */ stb r0, 0x2f99(r29)
lbl_8013AA8C:
/* 8013AA8C 001379CC  38 80 00 00 */ li r4, 0
/* 8013AA90 001379D0  B0 9D 30 12 */ sth r4, 0x3012(r29)
/* 8013AA94 001379D4  3C 60 80 39 */ lis r3, lbl_8038F7A4@ha
/* 8013AA98 001379D8  38 63 F7 A4 */ addi r3, r3, lbl_8038F7A4@l
/* 8013AA9C 001379DC  A8 03 00 16 */ lha r0, 0x16(r3)
/* 8013AAA0 001379E0  B0 1D 30 7E */ sth r0, 0x307e(r29)
/* 8013AAA4 001379E4  98 9D 2F 98 */ stb r4, 0x2f98(r29)
/* 8013AAA8 001379E8  38 60 00 01 */ li r3, 1
/* 8013AAAC 001379EC  39 61 00 20 */ addi r11, r1, 0x20
/* 8013AAB0 001379F0  48 22 77 75 */ bl _restgpr_28
/* 8013AAB4 001379F4  80 01 00 24 */ lwz r0, 0x24(r1)
/* 8013AAB8 001379F8  7C 08 03 A6 */ mtlr r0
/* 8013AABC 001379FC  38 21 00 20 */ addi r1, r1, 0x20
/* 8013AAC0 00137A00  4E 80 00 20 */ blr