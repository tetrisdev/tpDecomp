/* 800B32B0 000B01F0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800B32B4 000B01F4  7C 08 02 A6 */ mflr r0
/* 800B32B8 000B01F8  90 01 00 14 */ stw r0, 0x14(r1)
/* 800B32BC 000B01FC  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800B32C0 000B0200  7C 7F 1B 78 */ mr r31, r3
/* 800B32C4 000B0204  80 63 27 EC */ lwz r3, 0x27ec(r3)
/* 800B32C8 000B0208  28 03 00 00 */ cmplwi r3, 0
/* 800B32CC 000B020C  41 82 00 3C */ beq lbl_800B3308
/* 800B32D0 000B0210  48 02 92 79 */ bl checkEnemyGroup__9daAlink_cFP10fopAc_ac_c
/* 800B32D4 000B0214  2C 03 00 00 */ cmpwi r3, 0
/* 800B32D8 000B0218  40 82 00 60 */ bne lbl_800B3338
/* 800B32DC 000B021C  7F E3 FB 78 */ mr r3, r31
/* 800B32E0 000B0220  80 9F 27 EC */ lwz r4, 0x27ec(r31)
/* 800B32E4 000B0224  48 03 4F CD */ bl checkGoatCatchActor__9daAlink_cFP10fopAc_ac_c
/* 800B32E8 000B0228  2C 03 00 00 */ cmpwi r3, 0
/* 800B32EC 000B022C  40 82 00 4C */ bne lbl_800B3338
/* 800B32F0 000B0230  80 7F 27 EC */ lwz r3, 0x27ec(r31)
/* 800B32F4 000B0234  A8 03 00 08 */ lha r0, 8(r3)
/* 800B32F8 000B0238  2C 00 02 F4 */ cmpwi r0, 0x2f4
/* 800B32FC 000B023C  41 82 00 3C */ beq lbl_800B3338
/* 800B3300 000B0240  2C 00 00 FE */ cmpwi r0, 0xfe
/* 800B3304 000B0244  41 82 00 34 */ beq lbl_800B3338
lbl_800B3308:
/* 800B3308 000B0248  A0 1F 1F BC */ lhz r0, 0x1fbc(r31)
/* 800B330C 000B024C  28 00 01 6C */ cmplwi r0, 0x16c
/* 800B3310 000B0250  41 82 00 28 */ beq lbl_800B3338
/* 800B3314 000B0254  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800B3318 000B0258  28 00 00 50 */ cmplwi r0, 0x50
/* 800B331C 000B025C  41 82 00 1C */ beq lbl_800B3338
/* 800B3320 000B0260  80 1F 06 14 */ lwz r0, 0x614(r31)
/* 800B3324 000B0264  28 00 00 17 */ cmplwi r0, 0x17
/* 800B3328 000B0268  41 82 00 10 */ beq lbl_800B3338
/* 800B332C 000B026C  88 1F 05 6A */ lbz r0, 0x56a(r31)
/* 800B3330 000B0270  28 00 00 2A */ cmplwi r0, 0x2a
/* 800B3334 000B0274  40 82 00 0C */ bne lbl_800B3340
lbl_800B3338:
/* 800B3338 000B0278  38 60 00 01 */ li r3, 1
/* 800B333C 000B027C  48 00 00 08 */ b lbl_800B3344
lbl_800B3340:
/* 800B3340 000B0280  38 60 00 00 */ li r3, 0
lbl_800B3344:
/* 800B3344 000B0284  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800B3348 000B0288  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800B334C 000B028C  7C 08 03 A6 */ mtlr r0
/* 800B3350 000B0290  38 21 00 10 */ addi r1, r1, 0x10
/* 800B3354 000B0294  4E 80 00 20 */ blr
