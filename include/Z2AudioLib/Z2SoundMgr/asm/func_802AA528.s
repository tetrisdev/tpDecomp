/* 802AA528 002A7468  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 802AA52C 002A746C  7C 08 02 A6 */ mflr r0
/* 802AA530 002A7470  90 01 00 24 */ stw r0, 0x24(r1)
/* 802AA534 002A7474  39 61 00 20 */ addi r11, r1, 0x20
/* 802AA538 002A7478  48 0B 7C 99 */ bl _savegpr_26
/* 802AA53C 002A747C  7C 7E 1B 78 */ mr r30, r3
/* 802AA540 002A7480  88 0D 8D C0 */ lbz r0, lbl_80451340-_SDA_BASE_(r13)
/* 802AA544 002A7484  28 00 00 00 */ cmplwi r0, 0
/* 802AA548 002A7488  41 82 01 04 */ beq lbl_802AA64C
/* 802AA54C 002A748C  80 6D 86 00 */ lwz r3, lbl_80450B80-_SDA_BASE_(r13)
/* 802AA550 002A7490  88 03 00 1E */ lbz r0, 0x1e(r3)
/* 802AA554 002A7494  28 00 00 00 */ cmplwi r0, 0
/* 802AA558 002A7498  41 82 00 F4 */ beq lbl_802AA64C
/* 802AA55C 002A749C  3B E0 00 01 */ li r31, 1
/* 802AA560 002A74A0  88 0D 8D C2 */ lbz r0, lbl_80451342-_SDA_BASE_(r13)
/* 802AA564 002A74A4  28 00 00 00 */ cmplwi r0, 0
/* 802AA568 002A74A8  41 82 00 08 */ beq lbl_802AA570
/* 802AA56C 002A74AC  3B E0 00 00 */ li r31, 0
lbl_802AA570:
/* 802AA570 002A74B0  1F BF 00 6C */ mulli r29, r31, 0x6c
/* 802AA574 002A74B4  48 00 00 D0 */ b lbl_802AA644
lbl_802AA578:
/* 802AA578 002A74B8  7C 7E EA 14 */ add r3, r30, r29
/* 802AA57C 002A74BC  80 03 00 80 */ lwz r0, 0x80(r3)
/* 802AA580 002A74C0  7C 1B 03 78 */ mr r27, r0
/* 802AA584 002A74C4  2C 00 00 00 */ cmpwi r0, 0
/* 802AA588 002A74C8  40 81 00 64 */ ble lbl_802AA5EC
/* 802AA58C 002A74CC  83 43 00 70 */ lwz r26, 0x70(r3)
/* 802AA590 002A74D0  3C 60 80 3A */ lis r3, lbl_8039ABB8@ha
/* 802AA594 002A74D4  3B 83 AB B8 */ addi r28, r3, lbl_8039ABB8@l
/* 802AA598 002A74D8  48 00 00 2C */ b lbl_802AA5C4
lbl_802AA59C:
/* 802AA59C 002A74DC  28 04 00 00 */ cmplwi r4, 0
/* 802AA5A0 002A74E0  41 82 00 08 */ beq lbl_802AA5A8
/* 802AA5A4 002A74E4  38 84 00 10 */ addi r4, r4, 0x10
lbl_802AA5A8:
/* 802AA5A8 002A74E8  7F C3 F3 78 */ mr r3, r30
/* 802AA5AC 002A74EC  88 0D 8D C1 */ lbz r0, lbl_80451341-_SDA_BASE_(r13)
/* 802AA5B0 002A74F0  54 00 18 38 */ slwi r0, r0, 3
/* 802AA5B4 002A74F4  7C BC 02 14 */ add r5, r28, r0
/* 802AA5B8 002A74F8  4B FF FC B9 */ bl setIIR__10Z2SoundMgrFP8JAISoundPCs
/* 802AA5BC 002A74FC  83 5A 00 0C */ lwz r26, 0xc(r26)
/* 802AA5C0 002A7500  3B 7B FF FF */ addi r27, r27, -1
lbl_802AA5C4:
/* 802AA5C4 002A7504  28 1A 00 00 */ cmplwi r26, 0
/* 802AA5C8 002A7508  41 82 00 74 */ beq lbl_802AA63C
/* 802AA5CC 002A750C  2C 1B 00 00 */ cmpwi r27, 0
/* 802AA5D0 002A7510  40 81 00 6C */ ble lbl_802AA63C
/* 802AA5D4 002A7514  80 9A 00 00 */ lwz r4, 0(r26)
/* 802AA5D8 002A7518  80 64 00 B0 */ lwz r3, 0xb0(r4)
/* 802AA5DC 002A751C  3C 03 00 01 */ addis r0, r3, 1
/* 802AA5E0 002A7520  28 00 FF FF */ cmplwi r0, 0xffff
/* 802AA5E4 002A7524  40 82 FF B8 */ bne lbl_802AA59C
/* 802AA5E8 002A7528  48 00 00 54 */ b lbl_802AA63C
lbl_802AA5EC:
/* 802AA5EC 002A752C  83 43 00 70 */ lwz r26, 0x70(r3)
/* 802AA5F0 002A7530  3C 60 80 3A */ lis r3, lbl_8039ABB8@ha
/* 802AA5F4 002A7534  3B 83 AB B8 */ addi r28, r3, lbl_8039ABB8@l
/* 802AA5F8 002A7538  48 00 00 28 */ b lbl_802AA620
lbl_802AA5FC:
/* 802AA5FC 002A753C  28 04 00 00 */ cmplwi r4, 0
/* 802AA600 002A7540  41 82 00 08 */ beq lbl_802AA608
/* 802AA604 002A7544  38 84 00 10 */ addi r4, r4, 0x10
lbl_802AA608:
/* 802AA608 002A7548  7F C3 F3 78 */ mr r3, r30
/* 802AA60C 002A754C  88 0D 8D C1 */ lbz r0, lbl_80451341-_SDA_BASE_(r13)
/* 802AA610 002A7550  54 00 18 38 */ slwi r0, r0, 3
/* 802AA614 002A7554  7C BC 02 14 */ add r5, r28, r0
/* 802AA618 002A7558  4B FF FC 59 */ bl setIIR__10Z2SoundMgrFP8JAISoundPCs
/* 802AA61C 002A755C  83 5A 00 0C */ lwz r26, 0xc(r26)
lbl_802AA620:
/* 802AA620 002A7560  28 1A 00 00 */ cmplwi r26, 0
/* 802AA624 002A7564  41 82 00 18 */ beq lbl_802AA63C
/* 802AA628 002A7568  80 9A 00 00 */ lwz r4, 0(r26)
/* 802AA62C 002A756C  80 64 00 B0 */ lwz r3, 0xb0(r4)
/* 802AA630 002A7570  3C 03 00 01 */ addis r0, r3, 1
/* 802AA634 002A7574  28 00 FF FF */ cmplwi r0, 0xffff
/* 802AA638 002A7578  40 82 FF C4 */ bne lbl_802AA5FC
lbl_802AA63C:
/* 802AA63C 002A757C  3B FF 00 01 */ addi r31, r31, 1
/* 802AA640 002A7580  3B BD 00 6C */ addi r29, r29, 0x6c
lbl_802AA644:
/* 802AA644 002A7584  2C 1F 00 09 */ cmpwi r31, 9
/* 802AA648 002A7588  41 80 FF 30 */ blt lbl_802AA578
lbl_802AA64C:
/* 802AA64C 002A758C  38 7E 00 04 */ addi r3, r30, 4
/* 802AA650 002A7590  4B FF 60 B5 */ bl mixOut__8JAISeMgrFv
/* 802AA654 002A7594  38 7E 07 28 */ addi r3, r30, 0x728
/* 802AA658 002A7598  4B FF 78 A5 */ bl mixOut__9JAISeqMgrFv
/* 802AA65C 002A759C  38 7E 07 9C */ addi r3, r30, 0x79c
/* 802AA660 002A75A0  4B FF 9A B9 */ bl mixOut__12JAIStreamMgrFv
/* 802AA664 002A75A4  39 61 00 20 */ addi r11, r1, 0x20
/* 802AA668 002A75A8  48 0B 7B B5 */ bl _restgpr_26
/* 802AA66C 002A75AC  80 01 00 24 */ lwz r0, 0x24(r1)
/* 802AA670 002A75B0  7C 08 03 A6 */ mtlr r0
/* 802AA674 002A75B4  38 21 00 20 */ addi r1, r1, 0x20
/* 802AA678 002A75B8  4E 80 00 20 */ blr
