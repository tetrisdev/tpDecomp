/* 8011894C 0011588C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80118950 00115890  7C 08 02 A6 */ mflr r0
/* 80118954 00115894  90 01 00 14 */ stw r0, 0x14(r1)
/* 80118958 00115898  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8011895C 0011589C  7C 7F 1B 78 */ mr r31, r3
/* 80118960 001158A0  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80118964 001158A4  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80118968 001158A8  80 63 5D B8 */ lwz r3, 0x5db8(r3)
/* 8011896C 001158AC  54 80 04 3E */ clrlwi r0, r4, 0x10
/* 80118970 001158B0  28 00 00 01 */ cmplwi r0, 1
/* 80118974 001158B4  40 82 00 48 */ bne lbl_801189BC
/* 80118978 001158B8  28 03 00 00 */ cmplwi r3, 0
/* 8011897C 001158BC  41 82 00 68 */ beq lbl_801189E4
/* 80118980 001158C0  80 1F 31 A0 */ lwz r0, 0x31a0(r31)
/* 80118984 001158C4  54 00 05 6B */ rlwinm. r0, r0, 0, 0x15, 0x15
/* 80118988 001158C8  40 82 00 5C */ bne lbl_801189E4
/* 8011898C 001158CC  80 1F 31 A0 */ lwz r0, 0x31a0(r31)
/* 80118990 001158D0  60 00 04 00 */ ori r0, r0, 0x400
/* 80118994 001158D4  90 1F 31 A0 */ stw r0, 0x31a0(r31)
/* 80118998 001158D8  39 83 18 EC */ addi r12, r3, 0x18ec
/* 8011899C 001158DC  48 24 96 E9 */ bl __ptmf_scall
/* 801189A0 001158E0  60 00 00 00 */ nop
/* 801189A4 001158E4  3C 60 80 42 */ lis r3, lbl_8042558C@ha
/* 801189A8 001158E8  38 03 55 8C */ addi r0, r3, lbl_8042558C@l
/* 801189AC 001158EC  90 1F 38 4C */ stw r0, 0x384c(r31)
/* 801189B0 001158F0  38 00 00 01 */ li r0, 1
/* 801189B4 001158F4  98 1F 2F AA */ stb r0, 0x2faa(r31)
/* 801189B8 001158F8  48 00 00 2C */ b lbl_801189E4
lbl_801189BC:
/* 801189BC 001158FC  28 03 00 00 */ cmplwi r3, 0
/* 801189C0 00115900  41 82 00 10 */ beq lbl_801189D0
/* 801189C4 00115904  39 83 18 F8 */ addi r12, r3, 0x18f8
/* 801189C8 00115908  48 24 96 BD */ bl __ptmf_scall
/* 801189CC 0011590C  60 00 00 00 */ nop
lbl_801189D0:
/* 801189D0 00115910  38 00 00 00 */ li r0, 0
/* 801189D4 00115914  98 1F 2F AA */ stb r0, 0x2faa(r31)
/* 801189D8 00115918  80 1F 31 A0 */ lwz r0, 0x31a0(r31)
/* 801189DC 0011591C  54 00 05 A8 */ rlwinm r0, r0, 0, 0x16, 0x14
/* 801189E0 00115920  90 1F 31 A0 */ stw r0, 0x31a0(r31)
lbl_801189E4:
/* 801189E4 00115924  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 801189E8 00115928  80 01 00 14 */ lwz r0, 0x14(r1)
/* 801189EC 0011592C  7C 08 03 A6 */ mtlr r0
/* 801189F0 00115930  38 21 00 10 */ addi r1, r1, 0x10
/* 801189F4 00115934  4E 80 00 20 */ blr
