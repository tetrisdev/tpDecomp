/* 8002CF5C 00029E9C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8002CF60 00029EA0  7C 08 02 A6 */ mflr r0
/* 8002CF64 00029EA4  90 01 00 14 */ stw r0, 0x14(r1)
/* 8002CF68 00029EA8  80 63 00 00 */ lwz r3, 0(r3)
/* 8002CF6C 00029EAC  3C 80 80 40 */ lis r4, g_dComIfG_gameInfo@ha
/* 8002CF70 00029EB0  38 84 61 C0 */ addi r4, r4, g_dComIfG_gameInfo@l
/* 8002CF74 00029EB4  3C 84 00 02 */ addis r4, r4, 2
/* 8002CF78 00029EB8  38 A0 00 80 */ li r5, 0x80
/* 8002CF7C 00029EBC  38 84 C2 F8 */ addi r4, r4, -15624
/* 8002CF80 00029EC0  48 00 F1 E1 */ bl syncRes__14dRes_control_cFPCcP11dRes_info_ci
/* 8002CF84 00029EC4  2C 03 00 00 */ cmpwi r3, 0
/* 8002CF88 00029EC8  40 80 00 0C */ bge lbl_8002CF94
/* 8002CF8C 00029ECC  38 60 00 05 */ li r3, 5
/* 8002CF90 00029ED0  48 00 00 18 */ b lbl_8002CFA8
lbl_8002CF94:
/* 8002CF94 00029ED4  7C 03 00 D0 */ neg r0, r3
/* 8002CF98 00029ED8  7C 00 18 78 */ andc r0, r0, r3
/* 8002CF9C 00029EDC  7C 03 FE 70 */ srawi r3, r0, 0x1f
/* 8002CFA0 00029EE0  38 00 00 02 */ li r0, 2
/* 8002CFA4 00029EE4  7C 03 18 78 */ andc r3, r0, r3
lbl_8002CFA8:
/* 8002CFA8 00029EE8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8002CFAC 00029EEC  7C 08 03 A6 */ mtlr r0
/* 8002CFB0 00029EF0  38 21 00 10 */ addi r1, r1, 0x10
/* 8002CFB4 00029EF4  4E 80 00 20 */ blr