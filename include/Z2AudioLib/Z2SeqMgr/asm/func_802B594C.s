/* 802B594C 002B288C  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 802B5950 002B2890  7C 08 02 A6 */ mflr r0
/* 802B5954 002B2894  90 01 00 34 */ stw r0, 0x34(r1)
/* 802B5958 002B2898  93 E1 00 2C */ stw r31, 0x2c(r1)
/* 802B595C 002B289C  7C 7F 1B 78 */ mr r31, r3
/* 802B5960 002B28A0  80 6D 86 00 */ lwz r3, lbl_80450B80-_SDA_BASE_(r13)
/* 802B5964 002B28A4  88 03 00 1D */ lbz r0, 0x1d(r3)
/* 802B5968 002B28A8  28 00 00 00 */ cmplwi r0, 0
/* 802B596C 002B28AC  41 82 05 00 */ beq lbl_802B5E6C
/* 802B5970 002B28B0  88 03 00 1E */ lbz r0, 0x1e(r3)
/* 802B5974 002B28B4  28 00 00 00 */ cmplwi r0, 0
/* 802B5978 002B28B8  40 82 04 F4 */ bne lbl_802B5E6C
/* 802B597C 002B28BC  80 03 00 04 */ lwz r0, 4(r3)
/* 802B5980 002B28C0  2C 00 00 1E */ cmpwi r0, 0x1e
/* 802B5984 002B28C4  41 82 00 0C */ beq lbl_802B5990
/* 802B5988 002B28C8  2C 00 00 1F */ cmpwi r0, 0x1f
/* 802B598C 002B28CC  40 82 04 E0 */ bne lbl_802B5E6C
lbl_802B5990:
/* 802B5990 002B28D0  88 1F 00 D0 */ lbz r0, 0xd0(r31)
/* 802B5994 002B28D4  54 00 F7 FF */ rlwinm. r0, r0, 0x1e, 0x1f, 0x1f
/* 802B5998 002B28D8  41 82 04 D4 */ beq lbl_802B5E6C
/* 802B599C 002B28DC  88 7F 00 C3 */ lbz r3, 0xc3(r31)
/* 802B59A0 002B28E0  28 03 00 00 */ cmplwi r3, 0
/* 802B59A4 002B28E4  41 82 00 0C */ beq lbl_802B59B0
/* 802B59A8 002B28E8  38 03 FF FF */ addi r0, r3, -1
/* 802B59AC 002B28EC  98 1F 00 C3 */ stb r0, 0xc3(r31)
lbl_802B59B0:
/* 802B59B0 002B28F0  80 7F 00 00 */ lwz r3, 0(r31)
/* 802B59B4 002B28F4  28 03 00 00 */ cmplwi r3, 0
/* 802B59B8 002B28F8  41 82 00 10 */ beq lbl_802B59C8
/* 802B59BC 002B28FC  80 83 00 18 */ lwz r4, 0x18(r3)
/* 802B59C0 002B2900  90 81 00 10 */ stw r4, 0x10(r1)
/* 802B59C4 002B2904  48 00 00 08 */ b lbl_802B59CC
lbl_802B59C8:
/* 802B59C8 002B2908  38 80 FF FF */ li r4, -1
lbl_802B59CC:
/* 802B59CC 002B290C  3C 04 FF 00 */ addis r0, r4, 0xff00
/* 802B59D0 002B2910  28 00 00 00 */ cmplwi r0, 0
/* 802B59D4 002B2914  40 82 02 D4 */ bne lbl_802B5CA8
/* 802B59D8 002B2918  80 6D 85 F4 */ lwz r3, lbl_80450B74-_SDA_BASE_(r13)
/* 802B59DC 002B291C  7F E4 FB 78 */ mr r4, r31
/* 802B59E0 002B2920  38 A0 00 0A */ li r5, 0xa
/* 802B59E4 002B2924  38 C0 FF FF */ li r6, -1
/* 802B59E8 002B2928  4B FF 55 8D */ bl getPortData__14Z2SoundStarterFP14JAISoundHandleUlSc
/* 802B59EC 002B292C  98 7F 00 C4 */ stb r3, 0xc4(r31)
/* 802B59F0 002B2930  80 6D 85 FC */ lwz r3, lbl_80450B7C-_SDA_BASE_(r13)
/* 802B59F4 002B2934  88 03 00 0C */ lbz r0, 0xc(r3)
/* 802B59F8 002B2938  28 00 00 00 */ cmplwi r0, 0
/* 802B59FC 002B293C  41 82 00 14 */ beq lbl_802B5A10
/* 802B5A00 002B2940  7F E3 FB 78 */ mr r3, r31
/* 802B5A04 002B2944  38 80 00 0D */ li r4, 0xd
/* 802B5A08 002B2948  4B FF A5 85 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5A0C 002B294C  48 00 04 60 */ b lbl_802B5E6C
lbl_802B5A10:
/* 802B5A10 002B2950  88 1F 00 C4 */ lbz r0, 0xc4(r31)
/* 802B5A14 002B2954  28 00 00 10 */ cmplwi r0, 0x10
/* 802B5A18 002B2958  41 82 00 38 */ beq lbl_802B5A50
/* 802B5A1C 002B295C  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802B5A20 002B2960  88 03 00 CB */ lbz r0, 0xcb(r3)
/* 802B5A24 002B2964  54 04 FF FE */ rlwinm r4, r0, 0x1f, 0x1f, 0x1f
/* 802B5A28 002B2968  88 7F 00 D0 */ lbz r3, 0xd0(r31)
/* 802B5A2C 002B296C  54 60 EF FE */ rlwinm r0, r3, 0x1d, 0x1f, 0x1f
/* 802B5A30 002B2970  7C 00 20 40 */ cmplw r0, r4
/* 802B5A34 002B2974  41 82 00 1C */ beq lbl_802B5A50
/* 802B5A38 002B2978  50 83 1F 38 */ rlwimi r3, r4, 3, 0x1c, 0x1c
/* 802B5A3C 002B297C  98 7F 00 D0 */ stb r3, 0xd0(r31)
/* 802B5A40 002B2980  38 00 00 32 */ li r0, 0x32
/* 802B5A44 002B2984  98 1F 00 C3 */ stb r0, 0xc3(r31)
/* 802B5A48 002B2988  7F E3 FB 78 */ mr r3, r31
/* 802B5A4C 002B298C  4B FF FB 21 */ bl fieldRidingMute__8Z2SeqMgrFv
lbl_802B5A50:
/* 802B5A50 002B2990  88 9F 00 C4 */ lbz r4, 0xc4(r31)
/* 802B5A54 002B2994  28 04 00 00 */ cmplwi r4, 0
/* 802B5A58 002B2998  41 82 04 14 */ beq lbl_802B5E6C
/* 802B5A5C 002B299C  28 04 00 15 */ cmplwi r4, 0x15
/* 802B5A60 002B29A0  41 82 04 0C */ beq lbl_802B5E6C
/* 802B5A64 002B29A4  28 04 00 16 */ cmplwi r4, 0x16
/* 802B5A68 002B29A8  41 82 04 04 */ beq lbl_802B5E6C
/* 802B5A6C 002B29AC  28 04 00 17 */ cmplwi r4, 0x17
/* 802B5A70 002B29B0  41 82 03 FC */ beq lbl_802B5E6C
/* 802B5A74 002B29B4  28 04 00 18 */ cmplwi r4, 0x18
/* 802B5A78 002B29B8  40 82 00 08 */ bne lbl_802B5A80
/* 802B5A7C 002B29BC  48 00 03 F0 */ b lbl_802B5E6C
lbl_802B5A80:
/* 802B5A80 002B29C0  80 6D 85 FC */ lwz r3, lbl_80450B7C-_SDA_BASE_(r13)
/* 802B5A84 002B29C4  88 03 00 2C */ lbz r0, 0x2c(r3)
/* 802B5A88 002B29C8  28 00 00 0A */ cmplwi r0, 0xa
/* 802B5A8C 002B29CC  40 82 00 44 */ bne lbl_802B5AD0
/* 802B5A90 002B29D0  2C 04 00 10 */ cmpwi r4, 0x10
/* 802B5A94 002B29D4  41 82 00 2C */ beq lbl_802B5AC0
/* 802B5A98 002B29D8  40 80 00 10 */ bge lbl_802B5AA8
/* 802B5A9C 002B29DC  2C 04 00 07 */ cmpwi r4, 7
/* 802B5AA0 002B29E0  40 80 00 10 */ bge lbl_802B5AB0
/* 802B5AA4 002B29E4  48 00 00 1C */ b lbl_802B5AC0
lbl_802B5AA8:
/* 802B5AA8 002B29E8  2C 04 00 15 */ cmpwi r4, 0x15
/* 802B5AAC 002B29EC  40 80 00 14 */ bge lbl_802B5AC0
lbl_802B5AB0:
/* 802B5AB0 002B29F0  7F E3 FB 78 */ mr r3, r31
/* 802B5AB4 002B29F4  38 80 00 02 */ li r4, 2
/* 802B5AB8 002B29F8  4B FF A4 D5 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5ABC 002B29FC  48 00 03 B0 */ b lbl_802B5E6C
lbl_802B5AC0:
/* 802B5AC0 002B2A00  7F E3 FB 78 */ mr r3, r31
/* 802B5AC4 002B2A04  38 80 00 0D */ li r4, 0xd
/* 802B5AC8 002B2A08  4B FF A4 C5 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5ACC 002B2A0C  48 00 03 A0 */ b lbl_802B5E6C
lbl_802B5AD0:
/* 802B5AD0 002B2A10  88 1F 00 BE */ lbz r0, 0xbe(r31)
/* 802B5AD4 002B2A14  28 00 00 02 */ cmplwi r0, 2
/* 802B5AD8 002B2A18  41 81 00 7C */ bgt lbl_802B5B54
/* 802B5ADC 002B2A1C  28 04 00 07 */ cmplwi r4, 7
/* 802B5AE0 002B2A20  41 80 00 0C */ blt lbl_802B5AEC
/* 802B5AE4 002B2A24  28 04 00 0F */ cmplwi r4, 0xf
/* 802B5AE8 002B2A28  40 81 03 84 */ ble lbl_802B5E6C
lbl_802B5AEC:
/* 802B5AEC 002B2A2C  28 00 00 01 */ cmplwi r0, 1
/* 802B5AF0 002B2A30  41 81 03 7C */ bgt lbl_802B5E6C
/* 802B5AF4 002B2A34  28 04 00 14 */ cmplwi r4, 0x14
/* 802B5AF8 002B2A38  41 81 00 4C */ bgt lbl_802B5B44
/* 802B5AFC 002B2A3C  3C 60 80 3D */ lis r3, lbl_803CA4B4@ha
/* 802B5B00 002B2A40  38 63 A4 B4 */ addi r3, r3, lbl_803CA4B4@l
/* 802B5B04 002B2A44  54 80 10 3A */ slwi r0, r4, 2
/* 802B5B08 002B2A48  7C 03 00 2E */ lwzx r0, r3, r0
/* 802B5B0C 002B2A4C  7C 09 03 A6 */ mtctr r0
/* 802B5B10 002B2A50  4E 80 04 20 */ bctr
/* 802B5B14 002B2A54  7F E3 FB 78 */ mr r3, r31
/* 802B5B18 002B2A58  38 80 00 07 */ li r4, 7
/* 802B5B1C 002B2A5C  4B FF A4 71 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5B20 002B2A60  48 00 03 4C */ b lbl_802B5E6C
/* 802B5B24 002B2A64  7F E3 FB 78 */ mr r3, r31
/* 802B5B28 002B2A68  38 80 00 06 */ li r4, 6
/* 802B5B2C 002B2A6C  4B FF A4 61 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5B30 002B2A70  48 00 03 3C */ b lbl_802B5E6C
/* 802B5B34 002B2A74  7F E3 FB 78 */ mr r3, r31
/* 802B5B38 002B2A78  38 80 00 05 */ li r4, 5
/* 802B5B3C 002B2A7C  4B FF A4 51 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5B40 002B2A80  48 00 03 2C */ b lbl_802B5E6C
lbl_802B5B44:
/* 802B5B44 002B2A84  7F E3 FB 78 */ mr r3, r31
/* 802B5B48 002B2A88  38 80 00 04 */ li r4, 4
/* 802B5B4C 002B2A8C  4B FF A4 41 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5B50 002B2A90  48 00 03 1C */ b lbl_802B5E6C
lbl_802B5B54:
/* 802B5B54 002B2A94  48 00 0B E1 */ bl checkDayTime__11Z2StatusMgrFv
/* 802B5B58 002B2A98  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802B5B5C 002B2A9C  41 82 00 CC */ beq lbl_802B5C28
/* 802B5B60 002B2AA0  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802B5B64 002B2AA4  88 03 00 C9 */ lbz r0, 0xc9(r3)
/* 802B5B68 002B2AA8  28 00 00 96 */ cmplwi r0, 0x96
/* 802B5B6C 002B2AAC  40 80 00 84 */ bge lbl_802B5BF0
/* 802B5B70 002B2AB0  88 1F 00 C4 */ lbz r0, 0xc4(r31)
/* 802B5B74 002B2AB4  2C 00 00 10 */ cmpwi r0, 0x10
/* 802B5B78 002B2AB8  41 82 00 68 */ beq lbl_802B5BE0
/* 802B5B7C 002B2ABC  40 80 00 1C */ bge lbl_802B5B98
/* 802B5B80 002B2AC0  2C 00 00 03 */ cmpwi r0, 3
/* 802B5B84 002B2AC4  41 82 00 20 */ beq lbl_802B5BA4
/* 802B5B88 002B2AC8  41 80 00 58 */ blt lbl_802B5BE0
/* 802B5B8C 002B2ACC  2C 00 00 07 */ cmpwi r0, 7
/* 802B5B90 002B2AD0  40 80 00 40 */ bge lbl_802B5BD0
/* 802B5B94 002B2AD4  48 00 00 4C */ b lbl_802B5BE0
lbl_802B5B98:
/* 802B5B98 002B2AD8  2C 00 00 15 */ cmpwi r0, 0x15
/* 802B5B9C 002B2ADC  40 80 00 44 */ bge lbl_802B5BE0
/* 802B5BA0 002B2AE0  48 00 00 30 */ b lbl_802B5BD0
lbl_802B5BA4:
/* 802B5BA4 002B2AE4  88 1F 00 D0 */ lbz r0, 0xd0(r31)
/* 802B5BA8 002B2AE8  54 00 EF FF */ rlwinm. r0, r0, 0x1d, 0x1f, 0x1f
/* 802B5BAC 002B2AEC  41 82 02 C0 */ beq lbl_802B5E6C
/* 802B5BB0 002B2AF0  80 6D 85 C8 */ lwz r3, lbl_80450B48-_SDA_BASE_(r13)
/* 802B5BB4 002B2AF4  88 03 00 17 */ lbz r0, 0x17(r3)
/* 802B5BB8 002B2AF8  28 00 00 00 */ cmplwi r0, 0
/* 802B5BBC 002B2AFC  40 82 02 B0 */ bne lbl_802B5E6C
/* 802B5BC0 002B2B00  7F E3 FB 78 */ mr r3, r31
/* 802B5BC4 002B2B04  38 80 00 03 */ li r4, 3
/* 802B5BC8 002B2B08  4B FF A3 C5 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5BCC 002B2B0C  48 00 02 A0 */ b lbl_802B5E6C
lbl_802B5BD0:
/* 802B5BD0 002B2B10  7F E3 FB 78 */ mr r3, r31
/* 802B5BD4 002B2B14  38 80 00 02 */ li r4, 2
/* 802B5BD8 002B2B18  4B FF A3 B5 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5BDC 002B2B1C  48 00 02 90 */ b lbl_802B5E6C
lbl_802B5BE0:
/* 802B5BE0 002B2B20  7F E3 FB 78 */ mr r3, r31
/* 802B5BE4 002B2B24  38 80 00 0D */ li r4, 0xd
/* 802B5BE8 002B2B28  4B FF A3 A5 */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5BEC 002B2B2C  48 00 02 80 */ b lbl_802B5E6C
lbl_802B5BF0:
/* 802B5BF0 002B2B30  88 1F 00 C4 */ lbz r0, 0xc4(r31)
/* 802B5BF4 002B2B34  2C 00 00 04 */ cmpwi r0, 4
/* 802B5BF8 002B2B38  40 80 00 20 */ bge lbl_802B5C18
/* 802B5BFC 002B2B3C  2C 00 00 02 */ cmpwi r0, 2
/* 802B5C00 002B2B40  40 80 00 08 */ bge lbl_802B5C08
/* 802B5C04 002B2B44  48 00 00 14 */ b lbl_802B5C18
lbl_802B5C08:
/* 802B5C08 002B2B48  7F E3 FB 78 */ mr r3, r31
/* 802B5C0C 002B2B4C  38 80 00 0D */ li r4, 0xd
/* 802B5C10 002B2B50  4B FF A3 7D */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5C14 002B2B54  48 00 02 58 */ b lbl_802B5E6C
lbl_802B5C18:
/* 802B5C18 002B2B58  7F E3 FB 78 */ mr r3, r31
/* 802B5C1C 002B2B5C  38 80 00 0C */ li r4, 0xc
/* 802B5C20 002B2B60  4B FF A3 6D */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5C24 002B2B64  48 00 02 48 */ b lbl_802B5E6C
lbl_802B5C28:
/* 802B5C28 002B2B68  88 9F 00 C4 */ lbz r4, 0xc4(r31)
/* 802B5C2C 002B2B6C  28 04 00 07 */ cmplwi r4, 7
/* 802B5C30 002B2B70  41 80 00 34 */ blt lbl_802B5C64
/* 802B5C34 002B2B74  28 04 00 0F */ cmplwi r4, 0xf
/* 802B5C38 002B2B78  41 81 00 2C */ bgt lbl_802B5C64
/* 802B5C3C 002B2B7C  80 6D 85 FC */ lwz r3, lbl_80450B7C-_SDA_BASE_(r13)
/* 802B5C40 002B2B80  88 03 00 00 */ lbz r0, 0(r3)
/* 802B5C44 002B2B84  28 00 00 14 */ cmplwi r0, 0x14
/* 802B5C48 002B2B88  41 80 00 1C */ blt lbl_802B5C64
/* 802B5C4C 002B2B8C  80 7F 00 00 */ lwz r3, 0(r31)
/* 802B5C50 002B2B90  38 80 00 3C */ li r4, 0x3c
/* 802B5C54 002B2B94  4B FE C8 89 */ bl stop__8JAISoundFUl
/* 802B5C58 002B2B98  7F E3 FB 78 */ mr r3, r31
/* 802B5C5C 002B2B9C  4B FE C5 29 */ bl releaseSound__14JAISoundHandleFv
/* 802B5C60 002B2BA0  48 00 02 0C */ b lbl_802B5E6C
lbl_802B5C64:
/* 802B5C64 002B2BA4  2C 04 00 11 */ cmpwi r4, 0x11
/* 802B5C68 002B2BA8  40 80 00 18 */ bge lbl_802B5C80
/* 802B5C6C 002B2BAC  2C 04 00 04 */ cmpwi r4, 4
/* 802B5C70 002B2BB0  40 80 00 28 */ bge lbl_802B5C98
/* 802B5C74 002B2BB4  2C 04 00 02 */ cmpwi r4, 2
/* 802B5C78 002B2BB8  40 80 01 F4 */ bge lbl_802B5E6C
/* 802B5C7C 002B2BBC  48 00 00 1C */ b lbl_802B5C98
lbl_802B5C80:
/* 802B5C80 002B2BC0  2C 04 00 15 */ cmpwi r4, 0x15
/* 802B5C84 002B2BC4  40 80 00 14 */ bge lbl_802B5C98
/* 802B5C88 002B2BC8  7F E3 FB 78 */ mr r3, r31
/* 802B5C8C 002B2BCC  38 80 00 0B */ li r4, 0xb
/* 802B5C90 002B2BD0  4B FF A2 FD */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5C94 002B2BD4  48 00 01 D8 */ b lbl_802B5E6C
lbl_802B5C98:
/* 802B5C98 002B2BD8  7F E3 FB 78 */ mr r3, r31
/* 802B5C9C 002B2BDC  38 80 00 0A */ li r4, 0xa
/* 802B5CA0 002B2BE0  4B FF A2 ED */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5CA4 002B2BE4  48 00 01 C8 */ b lbl_802B5E6C
lbl_802B5CA8:
/* 802B5CA8 002B2BE8  28 03 00 00 */ cmplwi r3, 0
/* 802B5CAC 002B2BEC  41 82 00 10 */ beq lbl_802B5CBC
/* 802B5CB0 002B2BF0  80 83 00 18 */ lwz r4, 0x18(r3)
/* 802B5CB4 002B2BF4  90 81 00 0C */ stw r4, 0xc(r1)
/* 802B5CB8 002B2BF8  48 00 00 08 */ b lbl_802B5CC0
lbl_802B5CBC:
/* 802B5CBC 002B2BFC  38 80 FF FF */ li r4, -1
lbl_802B5CC0:
/* 802B5CC0 002B2C00  3C 04 FF 00 */ addis r0, r4, 0xff00
/* 802B5CC4 002B2C04  28 00 00 01 */ cmplwi r0, 1
/* 802B5CC8 002B2C08  40 82 00 3C */ bne lbl_802B5D04
/* 802B5CCC 002B2C0C  80 8D 85 FC */ lwz r4, lbl_80450B7C-_SDA_BASE_(r13)
/* 802B5CD0 002B2C10  88 04 00 0C */ lbz r0, 0xc(r4)
/* 802B5CD4 002B2C14  28 00 00 00 */ cmplwi r0, 0
/* 802B5CD8 002B2C18  40 82 01 94 */ bne lbl_802B5E6C
/* 802B5CDC 002B2C1C  88 04 00 00 */ lbz r0, 0(r4)
/* 802B5CE0 002B2C20  28 00 00 05 */ cmplwi r0, 5
/* 802B5CE4 002B2C24  41 80 01 88 */ blt lbl_802B5E6C
/* 802B5CE8 002B2C28  28 00 00 14 */ cmplwi r0, 0x14
/* 802B5CEC 002B2C2C  40 80 01 80 */ bge lbl_802B5E6C
/* 802B5CF0 002B2C30  38 80 00 3C */ li r4, 0x3c
/* 802B5CF4 002B2C34  4B FE C7 E9 */ bl stop__8JAISoundFUl
/* 802B5CF8 002B2C38  7F E3 FB 78 */ mr r3, r31
/* 802B5CFC 002B2C3C  4B FE C4 89 */ bl releaseSound__14JAISoundHandleFv
/* 802B5D00 002B2C40  48 00 01 6C */ b lbl_802B5E6C
lbl_802B5D04:
/* 802B5D04 002B2C44  28 03 00 00 */ cmplwi r3, 0
/* 802B5D08 002B2C48  41 82 00 10 */ beq lbl_802B5D18
/* 802B5D0C 002B2C4C  80 63 00 18 */ lwz r3, 0x18(r3)
/* 802B5D10 002B2C50  90 61 00 08 */ stw r3, 8(r1)
/* 802B5D14 002B2C54  48 00 00 08 */ b lbl_802B5D1C
lbl_802B5D18:
/* 802B5D18 002B2C58  38 60 FF FF */ li r3, -1
lbl_802B5D1C:
/* 802B5D1C 002B2C5C  3C 03 00 01 */ addis r0, r3, 1
/* 802B5D20 002B2C60  28 00 FF FF */ cmplwi r0, 0xffff
/* 802B5D24 002B2C64  40 82 01 48 */ bne lbl_802B5E6C
/* 802B5D28 002B2C68  80 6D 85 FC */ lwz r3, lbl_80450B7C-_SDA_BASE_(r13)
/* 802B5D2C 002B2C6C  88 03 00 0C */ lbz r0, 0xc(r3)
/* 802B5D30 002B2C70  28 00 00 00 */ cmplwi r0, 0
/* 802B5D34 002B2C74  40 82 01 38 */ bne lbl_802B5E6C
/* 802B5D38 002B2C78  88 1F 00 BF */ lbz r0, 0xbf(r31)
/* 802B5D3C 002B2C7C  28 00 00 00 */ cmplwi r0, 0
/* 802B5D40 002B2C80  40 82 01 2C */ bne lbl_802B5E6C
/* 802B5D44 002B2C84  88 03 00 00 */ lbz r0, 0(r3)
/* 802B5D48 002B2C88  28 00 00 06 */ cmplwi r0, 6
/* 802B5D4C 002B2C8C  41 80 00 E4 */ blt lbl_802B5E30
/* 802B5D50 002B2C90  28 00 00 13 */ cmplwi r0, 0x13
/* 802B5D54 002B2C94  40 80 00 DC */ bge lbl_802B5E30
/* 802B5D58 002B2C98  28 00 00 08 */ cmplwi r0, 8
/* 802B5D5C 002B2C9C  41 80 00 44 */ blt lbl_802B5DA0
/* 802B5D60 002B2CA0  3C 00 01 00 */ lis r0, 0x100
/* 802B5D64 002B2CA4  90 01 00 1C */ stw r0, 0x1c(r1)
/* 802B5D68 002B2CA8  80 6D 85 E0 */ lwz r3, lbl_80450B60-_SDA_BASE_(r13)
/* 802B5D6C 002B2CAC  38 81 00 1C */ addi r4, r1, 0x1c
/* 802B5D70 002B2CB0  7F E5 FB 78 */ mr r5, r31
/* 802B5D74 002B2CB4  38 C0 00 00 */ li r6, 0
/* 802B5D78 002B2CB8  81 83 00 00 */ lwz r12, 0(r3)
/* 802B5D7C 002B2CBC  81 8C 00 08 */ lwz r12, 8(r12)
/* 802B5D80 002B2CC0  7D 89 03 A6 */ mtctr r12
/* 802B5D84 002B2CC4  4E 80 04 21 */ bctrl
/* 802B5D88 002B2CC8  7F E3 FB 78 */ mr r3, r31
/* 802B5D8C 002B2CCC  38 80 00 09 */ li r4, 9
/* 802B5D90 002B2CD0  4B FF A1 FD */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5D94 002B2CD4  38 00 00 18 */ li r0, 0x18
/* 802B5D98 002B2CD8  98 1F 00 C4 */ stb r0, 0xc4(r31)
/* 802B5D9C 002B2CDC  48 00 00 40 */ b lbl_802B5DDC
lbl_802B5DA0:
/* 802B5DA0 002B2CE0  3C 00 01 00 */ lis r0, 0x100
/* 802B5DA4 002B2CE4  90 01 00 18 */ stw r0, 0x18(r1)
/* 802B5DA8 002B2CE8  80 6D 85 E0 */ lwz r3, lbl_80450B60-_SDA_BASE_(r13)
/* 802B5DAC 002B2CEC  38 81 00 18 */ addi r4, r1, 0x18
/* 802B5DB0 002B2CF0  7F E5 FB 78 */ mr r5, r31
/* 802B5DB4 002B2CF4  38 C0 00 00 */ li r6, 0
/* 802B5DB8 002B2CF8  81 83 00 00 */ lwz r12, 0(r3)
/* 802B5DBC 002B2CFC  81 8C 00 08 */ lwz r12, 8(r12)
/* 802B5DC0 002B2D00  7D 89 03 A6 */ mtctr r12
/* 802B5DC4 002B2D04  4E 80 04 21 */ bctrl
/* 802B5DC8 002B2D08  7F E3 FB 78 */ mr r3, r31
/* 802B5DCC 002B2D0C  38 80 00 08 */ li r4, 8
/* 802B5DD0 002B2D10  4B FF A1 BD */ bl changeBgmStatus__8Z2SeqMgrFl
/* 802B5DD4 002B2D14  38 00 00 17 */ li r0, 0x17
/* 802B5DD8 002B2D18  98 1F 00 C4 */ stb r0, 0xc4(r31)
lbl_802B5DDC:
/* 802B5DDC 002B2D1C  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802B5DE0 002B2D20  88 03 00 CB */ lbz r0, 0xcb(r3)
/* 802B5DE4 002B2D24  54 00 FF FF */ rlwinm. r0, r0, 0x1f, 0x1f, 0x1f
/* 802B5DE8 002B2D28  41 82 00 28 */ beq lbl_802B5E10
/* 802B5DEC 002B2D2C  38 60 00 01 */ li r3, 1
/* 802B5DF0 002B2D30  88 1F 00 D0 */ lbz r0, 0xd0(r31)
/* 802B5DF4 002B2D34  50 60 1F 38 */ rlwimi r0, r3, 3, 0x1c, 0x1c
/* 802B5DF8 002B2D38  98 1F 00 D0 */ stb r0, 0xd0(r31)
/* 802B5DFC 002B2D3C  38 00 00 00 */ li r0, 0
/* 802B5E00 002B2D40  98 1F 00 C3 */ stb r0, 0xc3(r31)
/* 802B5E04 002B2D44  7F E3 FB 78 */ mr r3, r31
/* 802B5E08 002B2D48  4B FF F7 65 */ bl fieldRidingMute__8Z2SeqMgrFv
/* 802B5E0C 002B2D4C  48 00 00 60 */ b lbl_802B5E6C
lbl_802B5E10:
/* 802B5E10 002B2D50  38 60 00 00 */ li r3, 0
/* 802B5E14 002B2D54  88 1F 00 D0 */ lbz r0, 0xd0(r31)
/* 802B5E18 002B2D58  50 60 1F 38 */ rlwimi r0, r3, 3, 0x1c, 0x1c
/* 802B5E1C 002B2D5C  98 1F 00 D0 */ stb r0, 0xd0(r31)
/* 802B5E20 002B2D60  98 7F 00 C3 */ stb r3, 0xc3(r31)
/* 802B5E24 002B2D64  7F E3 FB 78 */ mr r3, r31
/* 802B5E28 002B2D68  4B FF F7 45 */ bl fieldRidingMute__8Z2SeqMgrFv
/* 802B5E2C 002B2D6C  48 00 00 40 */ b lbl_802B5E6C
lbl_802B5E30:
/* 802B5E30 002B2D70  28 00 00 14 */ cmplwi r0, 0x14
/* 802B5E34 002B2D74  40 80 00 0C */ bge lbl_802B5E40
/* 802B5E38 002B2D78  28 00 00 05 */ cmplwi r0, 5
/* 802B5E3C 002B2D7C  40 80 00 30 */ bge lbl_802B5E6C
lbl_802B5E40:
/* 802B5E40 002B2D80  3C 60 01 00 */ lis r3, 0x01000001@ha
/* 802B5E44 002B2D84  38 03 00 01 */ addi r0, r3, 0x01000001@l
/* 802B5E48 002B2D88  90 01 00 14 */ stw r0, 0x14(r1)
/* 802B5E4C 002B2D8C  80 6D 85 E0 */ lwz r3, lbl_80450B60-_SDA_BASE_(r13)
/* 802B5E50 002B2D90  38 81 00 14 */ addi r4, r1, 0x14
/* 802B5E54 002B2D94  7F E5 FB 78 */ mr r5, r31
/* 802B5E58 002B2D98  38 C0 00 00 */ li r6, 0
/* 802B5E5C 002B2D9C  81 83 00 00 */ lwz r12, 0(r3)
/* 802B5E60 002B2DA0  81 8C 00 08 */ lwz r12, 8(r12)
/* 802B5E64 002B2DA4  7D 89 03 A6 */ mtctr r12
/* 802B5E68 002B2DA8  4E 80 04 21 */ bctrl
lbl_802B5E6C:
/* 802B5E6C 002B2DAC  83 E1 00 2C */ lwz r31, 0x2c(r1)
/* 802B5E70 002B2DB0  80 01 00 34 */ lwz r0, 0x34(r1)
/* 802B5E74 002B2DB4  7C 08 03 A6 */ mtlr r0
/* 802B5E78 002B2DB8  38 21 00 30 */ addi r1, r1, 0x30
/* 802B5E7C 002B2DBC  4E 80 00 20 */ blr
