/* 80140DCC 0013DD0C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80140DD0 0013DD10  7C 08 02 A6 */ mflr r0
/* 80140DD4 0013DD14  90 01 00 14 */ stw r0, 0x14(r1)
/* 80140DD8 0013DD18  38 80 00 00 */ li r4, 0
/* 80140DDC 0013DD1C  48 01 DF 35 */ bl __ct__14daPy_anmHeap_cFUl
/* 80140DE0 0013DD20  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80140DE4 0013DD24  7C 08 03 A6 */ mtlr r0
/* 80140DE8 0013DD28  38 21 00 10 */ addi r1, r1, 0x10
/* 80140DEC 0013DD2C  4E 80 00 20 */ blr