/* 800D62A0 000D31E0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800D62A4 000D31E4  7C 08 02 A6 */ mflr r0
/* 800D62A8 000D31E8  90 01 00 14 */ stw r0, 0x14(r1)
/* 800D62AC 000D31EC  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800D62B0 000D31F0  7C 7F 1B 78 */ mr r31, r3
/* 800D62B4 000D31F4  4B FE 3C 9D */ bl checkGroundSpecialMode__9daAlink_cFv
/* 800D62B8 000D31F8  2C 03 00 00 */ cmpwi r3, 0
/* 800D62BC 000D31FC  41 82 00 0C */ beq lbl_800D62C8
/* 800D62C0 000D3200  38 60 00 01 */ li r3, 1
/* 800D62C4 000D3204  48 00 00 9C */ b lbl_800D6360
lbl_800D62C8:
/* 800D62C8 000D3208  7F E3 FB 78 */ mr r3, r31
/* 800D62CC 000D320C  4B FF C7 09 */ bl checkDownAttackState__9daAlink_cFv
/* 800D62D0 000D3210  2C 03 00 00 */ cmpwi r3, 0
/* 800D62D4 000D3214  41 82 00 14 */ beq lbl_800D62E8
/* 800D62D8 000D3218  7F E3 FB 78 */ mr r3, r31
/* 800D62DC 000D321C  38 80 00 30 */ li r4, 0x30
/* 800D62E0 000D3220  4B FD CF 89 */ bl setDoStatusEmphasys__9daAlink_cFUc
/* 800D62E4 000D3224  48 00 00 30 */ b lbl_800D6314
lbl_800D62E8:
/* 800D62E8 000D3228  7F E3 FB 78 */ mr r3, r31
/* 800D62EC 000D322C  4B FF C6 09 */ bl checkCutHeadState__9daAlink_cFv
/* 800D62F0 000D3230  2C 03 00 00 */ cmpwi r3, 0
/* 800D62F4 000D3234  41 82 00 14 */ beq lbl_800D6308
/* 800D62F8 000D3238  7F E3 FB 78 */ mr r3, r31
/* 800D62FC 000D323C  38 80 00 77 */ li r4, 0x77
/* 800D6300 000D3240  4B FD CF 69 */ bl setDoStatusEmphasys__9daAlink_cFUc
/* 800D6304 000D3244  48 00 00 10 */ b lbl_800D6314
lbl_800D6308:
/* 800D6308 000D3248  7F E3 FB 78 */ mr r3, r31
/* 800D630C 000D324C  38 80 00 86 */ li r4, 0x86
/* 800D6310 000D3250  4B FD CF 41 */ bl setDoStatus__9daAlink_cFUc
lbl_800D6314:
/* 800D6314 000D3254  7F E3 FB 78 */ mr r3, r31
/* 800D6318 000D3258  4B FF BF A5 */ bl setSwordChargeVoiceSe__9daAlink_cFv
/* 800D631C 000D325C  88 1F 2F 8E */ lbz r0, 0x2f8e(r31)
/* 800D6320 000D3260  54 00 06 F7 */ rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 800D6324 000D3264  40 82 00 1C */ bne lbl_800D6340
/* 800D6328 000D3268  80 1F 06 14 */ lwz r0, 0x614(r31)
/* 800D632C 000D326C  28 00 00 5C */ cmplwi r0, 0x5c
/* 800D6330 000D3270  41 82 00 10 */ beq lbl_800D6340
/* 800D6334 000D3274  7F E3 FB 78 */ mr r3, r31
/* 800D6338 000D3278  4B FF C4 AD */ bl checkDoCutAction__9daAlink_cFv
/* 800D633C 000D327C  48 00 00 20 */ b lbl_800D635C
lbl_800D6340:
/* 800D6340 000D3280  38 7F 1F D0 */ addi r3, r31, 0x1fd0
/* 800D6344 000D3284  48 08 81 89 */ bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 800D6348 000D3288  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800D634C 000D328C  41 82 00 10 */ beq lbl_800D635C
/* 800D6350 000D3290  7F E3 FB 78 */ mr r3, r31
/* 800D6354 000D3294  38 80 00 01 */ li r4, 1
/* 800D6358 000D3298  4B FF EA 85 */ bl procCutTurnMoveInit__9daAlink_cFi
lbl_800D635C:
/* 800D635C 000D329C  38 60 00 01 */ li r3, 1
lbl_800D6360:
/* 800D6360 000D32A0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800D6364 000D32A4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800D6368 000D32A8  7C 08 03 A6 */ mtlr r0
/* 800D636C 000D32AC  38 21 00 10 */ addi r1, r1, 0x10
/* 800D6370 000D32B0  4E 80 00 20 */ blr
