/* 80140338 0013D278  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8014033C 0013D27C  7C 08 02 A6 */ mflr r0
/* 80140340 0013D280  90 01 00 14 */ stw r0, 0x14(r1)
/* 80140344 0013D284  93 E1 00 0C */ stw r31, 0xc(r1)
/* 80140348 0013D288  7C 7F 1B 78 */ mr r31, r3
/* 8014034C 0013D28C  80 63 06 50 */ lwz r3, 0x650(r3)
/* 80140350 0013D290  80 03 00 04 */ lwz r0, 4(r3)
/* 80140354 0013D294  90 1F 06 4C */ stw r0, 0x64c(r31)
/* 80140358 0013D298  80 7F 06 54 */ lwz r3, 0x654(r31)
/* 8014035C 0013D29C  80 03 00 04 */ lwz r0, 4(r3)
/* 80140360 0013D2A0  90 1F 06 C0 */ stw r0, 0x6c0(r31)
/* 80140364 0013D2A4  80 1F 05 78 */ lwz r0, 0x578(r31)
/* 80140368 0013D2A8  54 00 02 53 */ rlwinm. r0, r0, 0, 9, 9
/* 8014036C 0013D2AC  40 82 00 EC */ bne lbl_80140458
/* 80140370 0013D2B0  80 7F 06 4C */ lwz r3, 0x64c(r31)
/* 80140374 0013D2B4  80 63 00 28 */ lwz r3, 0x28(r3)
/* 80140378 0013D2B8  80 63 00 00 */ lwz r3, 0(r3)
/* 8014037C 0013D2BC  80 1F 1F 20 */ lwz r0, 0x1f20(r31)
/* 80140380 0013D2C0  90 03 00 54 */ stw r0, 0x54(r3)
/* 80140384 0013D2C4  80 7F 06 4C */ lwz r3, 0x64c(r31)
/* 80140388 0013D2C8  80 63 00 28 */ lwz r3, 0x28(r3)
/* 8014038C 0013D2CC  80 63 00 04 */ lwz r3, 4(r3)
/* 80140390 0013D2D0  80 1F 1F 24 */ lwz r0, 0x1f24(r31)
/* 80140394 0013D2D4  90 03 00 54 */ stw r0, 0x54(r3)
/* 80140398 0013D2D8  80 7F 06 4C */ lwz r3, 0x64c(r31)
/* 8014039C 0013D2DC  80 63 00 28 */ lwz r3, 0x28(r3)
/* 801403A0 0013D2E0  80 63 00 40 */ lwz r3, 0x40(r3)
/* 801403A4 0013D2E4  80 1F 1F 20 */ lwz r0, 0x1f20(r31)
/* 801403A8 0013D2E8  90 03 00 54 */ stw r0, 0x54(r3)
/* 801403AC 0013D2EC  38 C0 00 00 */ li r6, 0
/*.global daAlink_modelCallBack__FP8J3DJointi*/
/* 801403B0 0013D2F0  3C 60 80 0A */ lis r3, daAlink_modelCallBack__FP8J3DJointi@ha
/*.global daAlink_modelCallBack__FP8J3DJointi*/
/* 801403B4 0013D2F4  38 63 EC 28 */ addi r3, r3, daAlink_modelCallBack__FP8J3DJointi@l
/* 801403B8 0013D2F8  48 00 00 1C */ b lbl_801403D4
lbl_801403BC:
/* 801403BC 0013D2FC  80 BF 06 4C */ lwz r5, 0x64c(r31)
/* 801403C0 0013D300  80 A5 00 28 */ lwz r5, 0x28(r5)
/* 801403C4 0013D304  54 C0 13 BA */ rlwinm r0, r6, 2, 0xe, 0x1d
/* 801403C8 0013D308  7C A5 00 2E */ lwzx r5, r5, r0
/* 801403CC 0013D30C  90 65 00 04 */ stw r3, 4(r5)
/* 801403D0 0013D310  38 C6 00 01 */ addi r6, r6, 1
lbl_801403D4:
/* 801403D4 0013D314  54 C0 04 3E */ clrlwi r0, r6, 0x10
/* 801403D8 0013D318  28 00 00 23 */ cmplwi r0, 0x23
/* 801403DC 0013D31C  41 80 FF E0 */ blt lbl_801403BC
/* 801403E0 0013D320  80 7F 06 58 */ lwz r3, 0x658(r31)
/* 801403E4 0013D324  80 C3 00 04 */ lwz r6, 4(r3)
/* 801403E8 0013D328  38 E0 00 01 */ li r7, 1
/*.global daAlink_headModelCallBack__FP8J3DJointi*/
/* 801403EC 0013D32C  3C 60 80 0A */ lis r3, daAlink_headModelCallBack__FP8J3DJointi@ha
/*.global daAlink_headModelCallBack__FP8J3DJointi*/
/* 801403F0 0013D330  38 A3 EF 38 */ addi r5, r3, daAlink_headModelCallBack__FP8J3DJointi@l
/* 801403F4 0013D334  48 00 00 18 */ b lbl_8014040C
lbl_801403F8:
/* 801403F8 0013D338  80 66 00 28 */ lwz r3, 0x28(r6)
/* 801403FC 0013D33C  54 E0 13 BA */ rlwinm r0, r7, 2, 0xe, 0x1d
/* 80140400 0013D340  7C 63 00 2E */ lwzx r3, r3, r0
/* 80140404 0013D344  90 A3 00 04 */ stw r5, 4(r3)
/* 80140408 0013D348  38 E7 00 01 */ addi r7, r7, 1
lbl_8014040C:
/* 8014040C 0013D34C  54 E3 04 3E */ clrlwi r3, r7, 0x10
/* 80140410 0013D350  A0 06 00 2C */ lhz r0, 0x2c(r6)
/* 80140414 0013D354  7C 03 00 40 */ cmplw r3, r0
/* 80140418 0013D358  41 80 FF E0 */ blt lbl_801403F8
/* 8014041C 0013D35C  2C 04 00 00 */ cmpwi r4, 0
/* 80140420 0013D360  41 82 01 1C */ beq lbl_8014053C
/* 80140424 0013D364  80 9F 21 54 */ lwz r4, 0x2154(r31)
/* 80140428 0013D368  28 04 00 00 */ cmplwi r4, 0
/* 8014042C 0013D36C  41 82 00 10 */ beq lbl_8014043C
/* 80140430 0013D370  80 7F 06 C0 */ lwz r3, 0x6c0(r31)
/* 80140434 0013D374  38 63 00 58 */ addi r3, r3, 0x58
/* 80140438 0013D378  48 1E F7 91 */ bl entryTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern
lbl_8014043C:
/* 8014043C 0013D37C  80 9F 21 58 */ lwz r4, 0x2158(r31)
/* 80140440 0013D380  28 04 00 00 */ cmplwi r4, 0
/* 80140444 0013D384  41 82 00 F8 */ beq lbl_8014053C
/* 80140448 0013D388  80 7F 06 C0 */ lwz r3, 0x6c0(r31)
/* 8014044C 0013D38C  38 63 00 58 */ addi r3, r3, 0x58
/* 80140450 0013D390  48 1E F8 75 */ bl entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey
/* 80140454 0013D394  48 00 00 E8 */ b lbl_8014053C
lbl_80140458:
/* 80140458 0013D398  80 7F 06 4C */ lwz r3, 0x64c(r31)
/* 8014045C 0013D39C  80 63 00 28 */ lwz r3, 0x28(r3)
/* 80140460 0013D3A0  80 63 00 00 */ lwz r3, 0(r3)
/* 80140464 0013D3A4  38 80 00 00 */ li r4, 0
/* 80140468 0013D3A8  90 83 00 54 */ stw r4, 0x54(r3)
/* 8014046C 0013D3AC  80 7F 06 4C */ lwz r3, 0x64c(r31)
/* 80140470 0013D3B0  80 63 00 28 */ lwz r3, 0x28(r3)
/* 80140474 0013D3B4  80 63 00 04 */ lwz r3, 4(r3)
/* 80140478 0013D3B8  90 83 00 54 */ stw r4, 0x54(r3)
/* 8014047C 0013D3BC  80 7F 06 4C */ lwz r3, 0x64c(r31)
/* 80140480 0013D3C0  80 63 00 28 */ lwz r3, 0x28(r3)
/* 80140484 0013D3C4  80 63 00 40 */ lwz r3, 0x40(r3)
/* 80140488 0013D3C8  90 83 00 54 */ stw r4, 0x54(r3)
/* 8014048C 0013D3CC  80 7F 06 C0 */ lwz r3, 0x6c0(r31)
/* 80140490 0013D3D0  80 63 00 28 */ lwz r3, 0x28(r3)
/* 80140494 0013D3D4  80 63 00 00 */ lwz r3, 0(r3)
/* 80140498 0013D3D8  90 83 00 54 */ stw r4, 0x54(r3)
/* 8014049C 0013D3DC  7C 85 23 78 */ mr r5, r4
/* 801404A0 0013D3E0  48 00 00 1C */ b lbl_801404BC
lbl_801404A4:
/* 801404A4 0013D3E4  80 7F 06 4C */ lwz r3, 0x64c(r31)
/* 801404A8 0013D3E8  80 63 00 28 */ lwz r3, 0x28(r3)
/* 801404AC 0013D3EC  54 A0 13 BA */ rlwinm r0, r5, 2, 0xe, 0x1d
/* 801404B0 0013D3F0  7C 63 00 2E */ lwzx r3, r3, r0
/* 801404B4 0013D3F4  90 83 00 04 */ stw r4, 4(r3)
/* 801404B8 0013D3F8  38 A5 00 01 */ addi r5, r5, 1
lbl_801404BC:
/* 801404BC 0013D3FC  54 A0 04 3E */ clrlwi r0, r5, 0x10
/* 801404C0 0013D400  28 00 00 23 */ cmplwi r0, 0x23
/* 801404C4 0013D404  41 80 FF E0 */ blt lbl_801404A4
/* 801404C8 0013D408  80 7F 06 58 */ lwz r3, 0x658(r31)
/* 801404CC 0013D40C  80 A3 00 04 */ lwz r5, 4(r3)
/* 801404D0 0013D410  38 C0 00 01 */ li r6, 1
/* 801404D4 0013D414  38 80 00 00 */ li r4, 0
/* 801404D8 0013D418  48 00 00 18 */ b lbl_801404F0
lbl_801404DC:
/* 801404DC 0013D41C  80 65 00 28 */ lwz r3, 0x28(r5)
/* 801404E0 0013D420  54 C0 13 BA */ rlwinm r0, r6, 2, 0xe, 0x1d
/* 801404E4 0013D424  7C 63 00 2E */ lwzx r3, r3, r0
/* 801404E8 0013D428  90 83 00 04 */ stw r4, 4(r3)
/* 801404EC 0013D42C  38 C6 00 01 */ addi r6, r6, 1
lbl_801404F0:
/* 801404F0 0013D430  54 C3 04 3E */ clrlwi r3, r6, 0x10
/* 801404F4 0013D434  A0 05 00 2C */ lhz r0, 0x2c(r5)
/* 801404F8 0013D438  7C 03 00 40 */ cmplw r3, r0
/* 801404FC 0013D43C  41 80 FF E0 */ blt lbl_801404DC
/* 80140500 0013D440  80 1F 05 78 */ lwz r0, 0x578(r31)
/* 80140504 0013D444  54 00 02 D9 */ rlwinm. r0, r0, 0, 0xb, 0xc
/* 80140508 0013D448  40 82 00 34 */ bne lbl_8014053C
/* 8014050C 0013D44C  38 C0 00 06 */ li r6, 6
/*.global daAlink_headModelCallBack__FP8J3DJointi*/
/* 80140510 0013D450  3C 60 80 0A */ lis r3, daAlink_headModelCallBack__FP8J3DJointi@ha
/*.global daAlink_headModelCallBack__FP8J3DJointi*/
/* 80140514 0013D454  38 63 EF 38 */ addi r3, r3, daAlink_headModelCallBack__FP8J3DJointi@l
/* 80140518 0013D458  48 00 00 18 */ b lbl_80140530
lbl_8014051C:
/* 8014051C 0013D45C  80 85 00 28 */ lwz r4, 0x28(r5)
/* 80140520 0013D460  54 C0 13 BA */ rlwinm r0, r6, 2, 0xe, 0x1d
/* 80140524 0013D464  7C 84 00 2E */ lwzx r4, r4, r0
/* 80140528 0013D468  90 64 00 04 */ stw r3, 4(r4)
/* 8014052C 0013D46C  38 C6 00 01 */ addi r6, r6, 1
lbl_80140530:
/* 80140530 0013D470  54 C0 04 3E */ clrlwi r0, r6, 0x10
/* 80140534 0013D474  28 00 00 08 */ cmplwi r0, 8
/* 80140538 0013D478  41 80 FF E4 */ blt lbl_8014051C
lbl_8014053C:
/* 8014053C 0013D47C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80140540 0013D480  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80140544 0013D484  7C 08 03 A6 */ mtlr r0
/* 80140548 0013D488  38 21 00 10 */ addi r1, r1, 0x10
/* 8014054C 0013D48C  4E 80 00 20 */ blr
