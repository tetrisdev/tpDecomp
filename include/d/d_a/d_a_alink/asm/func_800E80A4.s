/* 800E80A4 000E4FE4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800E80A8 000E4FE8  7C 08 02 A6 */ mflr r0
/* 800E80AC 000E4FEC  90 01 00 14 */ stw r0, 0x14(r1)
/* 800E80B0 000E4FF0  38 80 00 01 */ li r4, 1
/* 800E80B4 000E4FF4  38 63 1E 1C */ addi r3, r3, 0x1e1c
/* 800E80B8 000E4FF8  4B FB A1 29 */ bl getMoveBGActorName__9daAlink_cFR13cBgS_PolyInfoi
/* 800E80BC 000E4FFC  38 A0 00 01 */ li r5, 1
/* 800E80C0 000E5000  7C A6 2B 78 */ mr r6, r5
/* 800E80C4 000E5004  7C A7 2B 78 */ mr r7, r5
/* 800E80C8 000E5008  7C A8 2B 78 */ mr r8, r5
/* 800E80CC 000E500C  38 03 FF E2 */ addi r0, r3, -30
/* 800E80D0 000E5010  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800E80D4 000E5014  38 80 FF FF */ li r4, -1
/* 800E80D8 000E5018  7C 00 28 10 */ subfc r0, r0, r5
/* 800E80DC 000E501C  7C 04 01 90 */ subfze r0, r4
/* 800E80E0 000E5020  54 00 06 3F */ clrlwi. r0, r0, 0x18
/* 800E80E4 000E5024  40 82 00 08 */ bne lbl_800E80EC
/* 800E80E8 000E5028  39 00 00 00 */ li r8, 0
lbl_800E80EC:
/* 800E80EC 000E502C  55 00 06 3F */ clrlwi. r0, r8, 0x18
/* 800E80F0 000E5030  40 82 00 14 */ bne lbl_800E8104
/* 800E80F4 000E5034  7C 60 07 34 */ extsh r0, r3
/* 800E80F8 000E5038  2C 00 00 BE */ cmpwi r0, 0xbe
/* 800E80FC 000E503C  41 82 00 08 */ beq lbl_800E8104
/* 800E8100 000E5040  38 E0 00 00 */ li r7, 0
lbl_800E8104:
/* 800E8104 000E5044  54 E0 06 3F */ clrlwi. r0, r7, 0x18
/* 800E8108 000E5048  40 82 00 14 */ bne lbl_800E811C
/* 800E810C 000E504C  7C 60 07 34 */ extsh r0, r3
/* 800E8110 000E5050  2C 00 00 BF */ cmpwi r0, 0xbf
/* 800E8114 000E5054  41 82 00 08 */ beq lbl_800E811C
/* 800E8118 000E5058  38 C0 00 00 */ li r6, 0
lbl_800E811C:
/* 800E811C 000E505C  54 C0 06 3F */ clrlwi. r0, r6, 0x18
/* 800E8120 000E5060  40 82 00 14 */ bne lbl_800E8134
/* 800E8124 000E5064  7C 60 07 34 */ extsh r0, r3
/* 800E8128 000E5068  2C 00 00 91 */ cmpwi r0, 0x91
/* 800E812C 000E506C  41 82 00 08 */ beq lbl_800E8134
/* 800E8130 000E5070  38 A0 00 00 */ li r5, 0
lbl_800E8134:
/* 800E8134 000E5074  54 A3 06 3E */ clrlwi r3, r5, 0x18
/* 800E8138 000E5078  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800E813C 000E507C  7C 08 03 A6 */ mtlr r0
/* 800E8140 000E5080  38 21 00 10 */ addi r1, r1, 0x10
/* 800E8144 000E5084  4E 80 00 20 */ blr
