/* 800D2304 000CF244  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800D2308 000CF248  7C 08 02 A6 */ mflr r0
/* 800D230C 000CF24C  90 01 00 14 */ stw r0, 0x14(r1)
/* 800D2310 000CF250  A0 03 2F E8 */ lhz r0, 0x2fe8(r3)
/* 800D2314 000CF254  28 00 00 26 */ cmplwi r0, 0x26
/* 800D2318 000CF258  41 82 00 10 */ beq lbl_800D2328
/* 800D231C 000CF25C  88 03 05 69 */ lbz r0, 0x569(r3)
/* 800D2320 000CF260  28 00 00 04 */ cmplwi r0, 4
/* 800D2324 000CF264  40 82 00 14 */ bne lbl_800D2338
lbl_800D2328:
/* 800D2328 000CF268  3C 80 00 01 */ lis r4, 0x00010001@ha
/* 800D232C 000CF26C  38 84 00 01 */ addi r4, r4, 0x00010001@l
/* 800D2330 000CF270  4B FF FF 55 */ bl setSwordVoiceSe__9daAlink_cFUl
/* 800D2334 000CF274  48 00 00 24 */ b lbl_800D2358
lbl_800D2338:
/* 800D2338 000CF278  28 00 00 01 */ cmplwi r0, 1
/* 800D233C 000CF27C  40 82 00 10 */ bne lbl_800D234C
/* 800D2340 000CF280  3C 80 00 01 */ lis r4, 1
/* 800D2344 000CF284  4B FF FF 41 */ bl setSwordVoiceSe__9daAlink_cFUl
/* 800D2348 000CF288  48 00 00 10 */ b lbl_800D2358
lbl_800D234C:
/* 800D234C 000CF28C  3C 80 00 01 */ lis r4, 0x00010004@ha
/* 800D2350 000CF290  38 84 00 04 */ addi r4, r4, 0x00010004@l
/* 800D2354 000CF294  4B FF FF 31 */ bl setSwordVoiceSe__9daAlink_cFUl
lbl_800D2358:
/* 800D2358 000CF298  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800D235C 000CF29C  7C 08 03 A6 */ mtlr r0
/* 800D2360 000CF2A0  38 21 00 10 */ addi r1, r1, 0x10
/* 800D2364 000CF2A4  4E 80 00 20 */ blr
