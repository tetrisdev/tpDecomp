/* 800F715C 000F409C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800F7160 000F40A0  7C 08 02 A6 */ mflr r0
/* 800F7164 000F40A4  90 01 00 14 */ stw r0, 0x14(r1)
/* 800F7168 000F40A8  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800F716C 000F40AC  7C 7F 1B 78 */ mr r31, r3
/* 800F7170 000F40B0  4B FC 01 75 */ bl checkItemActorPointer__9daAlink_cFv
/* 800F7174 000F40B4  2C 03 00 00 */ cmpwi r3, 0
/* 800F7178 000F40B8  40 82 00 0C */ bne lbl_800F7184
/* 800F717C 000F40BC  38 60 00 01 */ li r3, 1
/* 800F7180 000F40C0  48 00 00 74 */ b lbl_800F71F4
lbl_800F7184:
/* 800F7184 000F40C4  38 60 00 00 */ li r3, 0
/* 800F7188 000F40C8  A0 1F 2F DC */ lhz r0, 0x2fdc(r31)
/* 800F718C 000F40CC  28 00 00 40 */ cmplwi r0, 0x40
/* 800F7190 000F40D0  41 82 00 0C */ beq lbl_800F719C
/* 800F7194 000F40D4  28 00 01 02 */ cmplwi r0, 0x102
/* 800F7198 000F40D8  40 82 00 14 */ bne lbl_800F71AC
lbl_800F719C:
/* 800F719C 000F40DC  A0 1F 1F BC */ lhz r0, 0x1fbc(r31)
/* 800F71A0 000F40E0  28 00 00 54 */ cmplwi r0, 0x54
/* 800F71A4 000F40E4  40 82 00 08 */ bne lbl_800F71AC
/* 800F71A8 000F40E8  38 60 00 01 */ li r3, 1
lbl_800F71AC:
/* 800F71AC 000F40EC  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800F71B0 000F40F0  41 82 00 10 */ beq lbl_800F71C0
/* 800F71B4 000F40F4  7F E3 FB 78 */ mr r3, r31
/* 800F71B8 000F40F8  38 80 00 12 */ li r4, 0x12
/* 800F71BC 000F40FC  4B FB C0 95 */ bl setDoStatus__9daAlink_cFUc
lbl_800F71C0:
/* 800F71C0 000F4100  7F E3 FB 78 */ mr r3, r31
/* 800F71C4 000F4104  4B FF D6 15 */ bl canoeCommon__9daAlink_cFv
/* 800F71C8 000F4108  2C 03 00 00 */ cmpwi r3, 0
/* 800F71CC 000F410C  41 82 00 0C */ beq lbl_800F71D8
/* 800F71D0 000F4110  38 60 00 01 */ li r3, 1
/* 800F71D4 000F4114  48 00 00 20 */ b lbl_800F71F4
lbl_800F71D8:
/* 800F71D8 000F4118  7F E3 FB 78 */ mr r3, r31
/* 800F71DC 000F411C  4B FF D7 49 */ bl checkNextActionCanoe__9daAlink_cFv
/* 800F71E0 000F4120  2C 03 00 00 */ cmpwi r3, 0
/* 800F71E4 000F4124  40 82 00 0C */ bne lbl_800F71F0
/* 800F71E8 000F4128  7F E3 FB 78 */ mr r3, r31
/* 800F71EC 000F412C  4B FF 7E 65 */ bl setBodyAngleRideReadyAnime__9daAlink_cFv
lbl_800F71F0:
/* 800F71F0 000F4130  38 60 00 01 */ li r3, 1
lbl_800F71F4:
/* 800F71F4 000F4134  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800F71F8 000F4138  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800F71FC 000F413C  7C 08 03 A6 */ mtlr r0
/* 800F7200 000F4140  38 21 00 10 */ addi r1, r1, 0x10
/* 800F7204 000F4144  4E 80 00 20 */ blr
