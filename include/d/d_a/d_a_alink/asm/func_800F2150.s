/* 800F2150 000EF090  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800F2154 000EF094  7C 08 02 A6 */ mflr r0
/* 800F2158 000EF098  90 01 00 14 */ stw r0, 0x14(r1)
/* 800F215C 000EF09C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800F2160 000EF0A0  7C 7F 1B 78 */ mr r31, r3
/* 800F2164 000EF0A4  38 80 00 45 */ li r4, 0x45
/* 800F2168 000EF0A8  4B FD 0C 3D */ bl commonProcInitNotSameProc__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800F216C 000EF0AC  2C 03 00 00 */ cmpwi r3, 0
/* 800F2170 000EF0B0  40 82 00 0C */ bne lbl_800F217C
/* 800F2174 000EF0B4  38 60 00 00 */ li r3, 0
/* 800F2178 000EF0B8  48 00 00 28 */ b lbl_800F21A0
lbl_800F217C:
/* 800F217C 000EF0BC  7F E3 FB 78 */ mr r3, r31
/* 800F2180 000EF0C0  4B FF B8 A5 */ bl setSyncRidePos__9daAlink_cFv
/* 800F2184 000EF0C4  7F E3 FB 78 */ mr r3, r31
/* 800F2188 000EF0C8  4B FF CC 11 */ bl setBaseRideAnime__9daAlink_cFv
/* 800F218C 000EF0CC  38 00 00 00 */ li r0, 0
/* 800F2190 000EF0D0  B0 1F 30 0C */ sth r0, 0x300c(r31)
/* 800F2194 000EF0D4  7F E3 FB 78 */ mr r3, r31
/* 800F2198 000EF0D8  4B FE C9 F5 */ bl setBowOrSlingStatus__9daAlink_cFv
/* 800F219C 000EF0DC  38 60 00 01 */ li r3, 1
lbl_800F21A0:
/* 800F21A0 000EF0E0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800F21A4 000EF0E4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800F21A8 000EF0E8  7C 08 03 A6 */ mtlr r0
/* 800F21AC 000EF0EC  38 21 00 10 */ addi r1, r1, 0x10
/* 800F21B0 000EF0F0  4E 80 00 20 */ blr