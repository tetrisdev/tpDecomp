/* 800267DC 0002371C  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 800267E0 00023720  7C 08 02 A6 */ mflr r0
/* 800267E4 00023724  90 01 00 24 */ stw r0, 0x24(r1)
/* 800267E8 00023728  39 61 00 20 */ addi r11, r1, 0x20
/* 800267EC 0002372C  48 33 B9 ED */ bl _savegpr_28
/* 800267F0 00023730  7C 7C 1B 78 */ mr r28, r3
/* 800267F4 00023734  7C 9D 23 78 */ mr r29, r4
/* 800267F8 00023738  7C BE 2B 78 */ mr r30, r5
/* 800267FC 0002373C  7C DF 33 78 */ mr r31, r6
/* 80026800 00023740  38 9D 00 04 */ addi r4, r29, 4
/* 80026804 00023744  81 83 00 00 */ lwz r12, 0(r3)
/* 80026808 00023748  81 8C 01 54 */ lwz r12, 0x154(r12)
/* 8002680C 0002374C  7D 89 03 A6 */ mtctr r12
/* 80026810 00023750  4E 80 04 21 */ bctrl
/* 80026814 00023754  7F 83 E3 78 */ mr r3, r28
/* 80026818 00023758  7F A4 EB 78 */ mr r4, r29
/* 8002681C 0002375C  7F C5 F3 78 */ mr r5, r30
/* 80026820 00023760  7F E6 FB 78 */ mr r6, r31
/* 80026824 00023764  4B FF F4 B9 */ bl dStage_doorInfoInit__FP11dStage_dt_cPviPv
/* 80026828 00023768  38 60 00 01 */ li r3, 1
/* 8002682C 0002376C  39 61 00 20 */ addi r11, r1, 0x20
/* 80026830 00023770  48 33 B9 F5 */ bl _restgpr_28
/* 80026834 00023774  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80026838 00023778  7C 08 03 A6 */ mtlr r0
/* 8002683C 0002377C  38 21 00 20 */ addi r1, r1, 0x20
/* 80026840 00023780  4E 80 00 20 */ blr