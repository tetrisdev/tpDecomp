/* 801371FC 0013413C  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 80137200 00134140  7C 08 02 A6 */ mflr r0
/* 80137204 00134144  90 01 00 34 */ stw r0, 0x34(r1)
/* 80137208 00134148  93 E1 00 2C */ stw r31, 0x2c(r1)
/* 8013720C 0013414C  7C 7F 1B 78 */ mr r31, r3
/* 80137210 00134150  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 80137214 00134154  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 80137218 00134158  90 01 00 18 */ stw r0, 0x18(r1)
/* 8013721C 0013415C  2C 04 00 00 */ cmpwi r4, 0
/* 80137220 00134160  40 82 00 30 */ bne lbl_80137250
/* 80137224 00134164  80 7F 27 EC */ lwz r3, 0x27ec(r31)
/* 80137228 00134168  28 03 00 00 */ cmplwi r3, 0
/* 8013722C 0013416C  41 82 00 64 */ beq lbl_80137290
/* 80137230 00134170  80 03 05 5C */ lwz r0, 0x55c(r3)
/* 80137234 00134174  54 00 02 11 */ rlwinm. r0, r0, 0, 8, 8
/* 80137238 00134178  41 82 00 58 */ beq lbl_80137290
/* 8013723C 0013417C  A8 03 00 08 */ lha r0, 8(r3)
/* 80137240 00134180  2C 00 02 58 */ cmpwi r0, 0x258
/* 80137244 00134184  41 82 00 0C */ beq lbl_80137250
/* 80137248 00134188  2C 00 02 46 */ cmpwi r0, 0x246
/* 8013724C 0013418C  40 82 00 44 */ bne lbl_80137290
lbl_80137250:
/* 80137250 00134190  7F E3 FB 78 */ mr r3, r31
/* 80137254 00134194  38 81 00 08 */ addi r4, r1, 8
/* 80137258 00134198  4B F7 AD 81 */ bl getSlidePolygon__9daAlink_cFP8cM3dGPla
/* 8013725C 0013419C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80137260 001341A0  40 82 00 30 */ bne lbl_80137290
/* 80137264 001341A4  C0 5F 33 B4 */ lfs f2, 0x33b4(r31)
/* 80137268 001341A8  C0 22 97 A8 */ lfs f1, lbl_804531A8-_SDA2_BASE_(r2)
/* 8013726C 001341AC  C0 1F 04 D4 */ lfs f0, 0x4d4(r31)
/* 80137270 001341B0  EC 01 00 2A */ fadds f0, f1, f0
/* 80137274 001341B4  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 80137278 001341B8  41 81 00 18 */ bgt lbl_80137290
/* 8013727C 001341BC  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 80137280 001341C0  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 80137284 001341C4  90 01 00 18 */ stw r0, 0x18(r1)
/* 80137288 001341C8  38 60 00 01 */ li r3, 1
/* 8013728C 001341CC  48 00 00 14 */ b lbl_801372A0
lbl_80137290:
/* 80137290 001341D0  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 80137294 001341D4  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 80137298 001341D8  90 01 00 18 */ stw r0, 0x18(r1)
/* 8013729C 001341DC  38 60 00 00 */ li r3, 0
lbl_801372A0:
/* 801372A0 001341E0  83 E1 00 2C */ lwz r31, 0x2c(r1)
/* 801372A4 001341E4  80 01 00 34 */ lwz r0, 0x34(r1)
/* 801372A8 001341E8  7C 08 03 A6 */ mtlr r0
/* 801372AC 001341EC  38 21 00 30 */ addi r1, r1, 0x30
/* 801372B0 001341F0  4E 80 00 20 */ blr
