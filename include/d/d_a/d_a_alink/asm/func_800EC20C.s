/* 800EC20C 000E914C  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 800EC210 000E9150  7C 08 02 A6 */ mflr r0
/* 800EC214 000E9154  90 01 00 34 */ stw r0, 0x34(r1)
/* 800EC218 000E9158  DB E1 00 20 */ stfd f31, 0x20(r1)
/* 800EC21C 000E915C  F3 E1 00 28 */ psq_st f31, 40(r1), 0, 0
/* 800EC220 000E9160  39 61 00 20 */ addi r11, r1, 0x20
/* 800EC224 000E9164  48 27 5F B9 */ bl _savegpr_29
/* 800EC228 000E9168  7C 7F 1B 78 */ mr r31, r3
/* 800EC22C 000E916C  88 03 05 6A */ lbz r0, 0x56a(r3)
/* 800EC230 000E9170  28 00 00 0B */ cmplwi r0, 0xb
/* 800EC234 000E9174  40 82 00 20 */ bne lbl_800EC254
/* 800EC238 000E9178  88 1F 1F D4 */ lbz r0, 0x1fd4(r31)
/* 800EC23C 000E917C  28 00 00 02 */ cmplwi r0, 2
/* 800EC240 000E9180  40 82 00 14 */ bne lbl_800EC254
/* 800EC244 000E9184  4B FF E6 8D */ bl cancelSumouMode__9daAlink_cFv
/* 800EC248 000E9188  7F E3 FB 78 */ mr r3, r31
/* 800EC24C 000E918C  4B FD 71 6D */ bl procWaitInit__9daAlink_cFv
/* 800EC250 000E9190  48 00 01 68 */ b lbl_800EC3B8
lbl_800EC254:
/* 800EC254 000E9194  83 DF 28 58 */ lwz r30, 0x2858(r31)
/* 800EC258 000E9198  7F E3 FB 78 */ mr r3, r31
/* 800EC25C 000E919C  38 80 00 D3 */ li r4, 0xd3
/* 800EC260 000E91A0  4B FD 5D 0D */ bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800EC264 000E91A4  C0 02 93 B8 */ lfs f0, lbl_80452DB8-_SDA2_BASE_(r2)
/* 800EC268 000E91A8  D0 1F 34 78 */ stfs f0, 0x3478(r31)
/* 800EC26C 000E91AC  3B A0 00 19 */ li r29, 0x19
/* 800EC270 000E91B0  88 1F 05 6A */ lbz r0, 0x56a(r31)
/* 800EC274 000E91B4  28 00 00 0B */ cmplwi r0, 0xb
/* 800EC278 000E91B8  40 82 00 10 */ bne lbl_800EC288
/* 800EC27C 000E91BC  38 00 00 01 */ li r0, 1
/* 800EC280 000E91C0  B0 1F 30 0C */ sth r0, 0x300c(r31)
/* 800EC284 000E91C4  48 00 00 F0 */ b lbl_800EC374
lbl_800EC288:
/* 800EC288 000E91C8  28 00 00 0D */ cmplwi r0, 0xd
/* 800EC28C 000E91CC  40 82 00 54 */ bne lbl_800EC2E0
/* 800EC290 000E91D0  38 00 00 0C */ li r0, 0xc
/* 800EC294 000E91D4  98 1F 2F 99 */ stb r0, 0x2f99(r31)
/* 800EC298 000E91D8  88 1E 04 99 */ lbz r0, 0x499(r30)
/* 800EC29C 000E91DC  54 00 06 7F */ clrlwi. r0, r0, 0x19
/* 800EC2A0 000E91E0  38 80 01 57 */ li r4, 0x157
/* 800EC2A4 000E91E4  41 82 00 08 */ beq lbl_800EC2AC
/* 800EC2A8 000E91E8  38 80 01 58 */ li r4, 0x158
lbl_800EC2AC:
/* 800EC2AC 000E91EC  7C 9D 23 78 */ mr r29, r4
/* 800EC2B0 000E91F0  7F E3 FB 78 */ mr r3, r31
/* 800EC2B4 000E91F4  4B FC 0C CD */ bl setSingleAnimeBase__9daAlink_cFQ29daAlink_c11daAlink_ANM
/* 800EC2B8 000E91F8  38 00 00 01 */ li r0, 1
/* 800EC2BC 000E91FC  B0 1F 30 0C */ sth r0, 0x300c(r31)
/* 800EC2C0 000E9200  C0 02 93 30 */ lfs f0, lbl_80452D30-_SDA2_BASE_(r2)
/* 800EC2C4 000E9204  D0 1F 34 78 */ stfs f0, 0x3478(r31)
/* 800EC2C8 000E9208  3C 60 00 01 */ lis r3, 0x0001004E@ha
/* 800EC2CC 000E920C  38 03 00 4E */ addi r0, r3, 0x0001004E@l
/* 800EC2D0 000E9210  90 1F 32 CC */ stw r0, 0x32cc(r31)
/* 800EC2D4 000E9214  38 00 00 0D */ li r0, 0xd
/* 800EC2D8 000E9218  90 1F 31 98 */ stw r0, 0x3198(r31)
/* 800EC2DC 000E921C  48 00 00 98 */ b lbl_800EC374
lbl_800EC2E0:
/* 800EC2E0 000E9220  28 00 00 0C */ cmplwi r0, 0xc
/* 800EC2E4 000E9224  40 82 00 28 */ bne lbl_800EC30C
/* 800EC2E8 000E9228  C3 E2 93 20 */ lfs f31, lbl_80452D20-_SDA2_BASE_(r2)
/* 800EC2EC 000E922C  7F E3 FB 78 */ mr r3, r31
/* 800EC2F0 000E9230  3C 80 00 01 */ lis r4, 0x0001004F@ha
/* 800EC2F4 000E9234  38 84 00 4F */ addi r4, r4, 0x0001004F@l
/* 800EC2F8 000E9238  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 800EC2FC 000E923C  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 800EC300 000E9240  7D 89 03 A6 */ mtctr r12
/* 800EC304 000E9244  4E 80 04 21 */ bctrl
/* 800EC308 000E9248  48 00 00 1C */ b lbl_800EC324
lbl_800EC30C:
/* 800EC30C 000E924C  C3 E2 92 C0 */ lfs f31, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800EC310 000E9250  C0 02 94 74 */ lfs f0, lbl_80452E74-_SDA2_BASE_(r2)
/* 800EC314 000E9254  D0 1F 34 78 */ stfs f0, 0x3478(r31)
/* 800EC318 000E9258  3C 60 00 01 */ lis r3, 0x0001004F@ha
/* 800EC31C 000E925C  38 03 00 4F */ addi r0, r3, 0x0001004F@l
/* 800EC320 000E9260  90 1F 32 CC */ stw r0, 0x32cc(r31)
lbl_800EC324:
/* 800EC324 000E9264  88 1E 04 99 */ lbz r0, 0x499(r30)
/* 800EC328 000E9268  54 00 06 7F */ clrlwi. r0, r0, 0x19
/* 800EC32C 000E926C  38 80 01 59 */ li r4, 0x159
/* 800EC330 000E9270  41 82 00 08 */ beq lbl_800EC338
/* 800EC334 000E9274  38 80 01 5A */ li r4, 0x15a
lbl_800EC338:
/* 800EC338 000E9278  7C 9D 23 78 */ mr r29, r4
/* 800EC33C 000E927C  7F E3 FB 78 */ mr r3, r31
/* 800EC340 000E9280  C0 22 92 B8 */ lfs f1, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800EC344 000E9284  FC 40 F8 90 */ fmr f2, f31
/* 800EC348 000E9288  38 A0 FF FF */ li r5, -1
/* 800EC34C 000E928C  C0 62 92 C4 */ lfs f3, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800EC350 000E9290  4B FC 0C BD */ bl setSingleAnime__9daAlink_cFQ29daAlink_c11daAlink_ANMffsf
/* 800EC354 000E9294  38 00 00 0F */ li r0, 0xf
/* 800EC358 000E9298  98 1F 2F 99 */ stb r0, 0x2f99(r31)
/* 800EC35C 000E929C  38 00 00 00 */ li r0, 0
/* 800EC360 000E92A0  B0 1F 30 0C */ sth r0, 0x300c(r31)
/* 800EC364 000E92A4  C0 3F 04 D4 */ lfs f1, 0x4d4(r31)
/* 800EC368 000E92A8  C0 02 93 10 */ lfs f0, lbl_80452D10-_SDA2_BASE_(r2)
/* 800EC36C 000E92AC  EC 01 00 2A */ fadds f0, f1, f0
/* 800EC370 000E92B0  D0 1F 04 D4 */ stfs f0, 0x4d4(r31)
lbl_800EC374:
/* 800EC374 000E92B4  93 BF 31 98 */ stw r29, 0x3198(r31)
/* 800EC378 000E92B8  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800EC37C 000E92BC  D0 3F 33 98 */ stfs f1, 0x3398(r31)
/* 800EC380 000E92C0  7F E3 FB 78 */ mr r3, r31
/* 800EC384 000E92C4  C0 5F 05 34 */ lfs f2, 0x534(r31)
/* 800EC388 000E92C8  38 80 00 00 */ li r4, 0
/* 800EC38C 000E92CC  4B FC F3 E5 */ bl setSpecialGravity__9daAlink_cFffi
/* 800EC390 000E92D0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800EC394 000E92D4  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
/* 800EC398 000E92D8  7F E3 FB 78 */ mr r3, r31
/* 800EC39C 000E92DC  38 80 00 05 */ li r4, 5
/* 800EC3A0 000E92E0  48 03 4E 21 */ bl setFootEffectProcType__9daAlink_cFi
/* 800EC3A4 000E92E4  38 00 00 00 */ li r0, 0
/* 800EC3A8 000E92E8  B0 1F 30 0E */ sth r0, 0x300e(r31)
/* 800EC3AC 000E92EC  C0 02 93 78 */ lfs f0, lbl_80452D78-_SDA2_BASE_(r2)
/* 800EC3B0 000E92F0  D0 1F 33 B0 */ stfs f0, 0x33b0(r31)
/* 800EC3B4 000E92F4  38 60 00 01 */ li r3, 1
lbl_800EC3B8:
/* 800EC3B8 000E92F8  E3 E1 00 28 */ psq_l f31, 40(r1), 0, 0
/* 800EC3BC 000E92FC  CB E1 00 20 */ lfd f31, 0x20(r1)
/* 800EC3C0 000E9300  39 61 00 20 */ addi r11, r1, 0x20
/* 800EC3C4 000E9304  48 27 5E 65 */ bl _restgpr_29
/* 800EC3C8 000E9308  80 01 00 34 */ lwz r0, 0x34(r1)
/* 800EC3CC 000E930C  7C 08 03 A6 */ mtlr r0
/* 800EC3D0 000E9310  38 21 00 30 */ addi r1, r1, 0x30
/* 800EC3D4 000E9314  4E 80 00 20 */ blr