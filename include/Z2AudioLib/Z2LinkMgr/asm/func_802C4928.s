/* 802C4928 002C1868  94 21 FF 30 */ stwu r1, -0xd0(r1)
/* 802C492C 002C186C  7C 08 02 A6 */ mflr r0
/* 802C4930 002C1870  90 01 00 D4 */ stw r0, 0xd4(r1)
/* 802C4934 002C1874  DB E1 00 C0 */ stfd f31, 0xc0(r1)
/* 802C4938 002C1878  F3 E1 00 C8 */ psq_st f31, 200(r1), 0, 0
/* 802C493C 002C187C  DB C1 00 B0 */ stfd f30, 0xb0(r1)
/* 802C4940 002C1880  F3 C1 00 B8 */ psq_st f30, 184(r1), 0, 0
/* 802C4944 002C1884  DB A1 00 A0 */ stfd f29, 0xa0(r1)
/* 802C4948 002C1888  F3 A1 00 A8 */ psq_st f29, 168(r1), 0, 0
/* 802C494C 002C188C  DB 81 00 90 */ stfd f28, 0x90(r1)
/* 802C4950 002C1890  F3 81 00 98 */ psq_st f28, 152(r1), 0, 0
/* 802C4954 002C1894  DB 61 00 80 */ stfd f27, 0x80(r1)
/* 802C4958 002C1898  F3 61 00 88 */ psq_st f27, 136(r1), 0, 0
/* 802C495C 002C189C  39 61 00 80 */ addi r11, r1, 0x80
/* 802C4960 002C18A0  48 09 D8 69 */ bl _savegpr_24
/* 802C4964 002C18A4  7C 78 1B 78 */ mr r24, r3
/* 802C4968 002C18A8  7C 99 23 78 */ mr r25, r4
/* 802C496C 002C18AC  7C BA 2B 78 */ mr r26, r5
/* 802C4970 002C18B0  7C DB 33 78 */ mr r27, r6
/* 802C4974 002C18B4  7C FC 3B 78 */ mr r28, r7
/* 802C4978 002C18B8  FF E0 08 90 */ fmr f31, f1
/* 802C497C 002C18BC  FF 60 10 90 */ fmr f27, f2
/* 802C4980 002C18C0  FF 80 18 90 */ fmr f28, f3
/* 802C4984 002C18C4  FF A0 20 90 */ fmr f29, f4
/* 802C4988 002C18C8  FF C0 28 90 */ fmr f30, f5
/* 802C498C 002C18CC  7D 1D 43 78 */ mr r29, r8
/* 802C4990 002C18D0  3B E0 00 00 */ li r31, 0
/* 802C4994 002C18D4  3B C0 00 00 */ li r30, 0
/* 802C4998 002C18D8  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C499C 002C18DC  88 03 00 CB */ lbz r0, 0xcb(r3)
/* 802C49A0 002C18E0  54 00 D7 FF */ rlwinm. r0, r0, 0x1a, 0x1f, 0x1f
/* 802C49A4 002C18E4  41 82 00 E8 */ beq lbl_802C4A8C
/* 802C49A8 002C18E8  80 6D 85 FC */ lwz r3, lbl_80450B7C-_SDA_BASE_(r13)
/* 802C49AC 002C18EC  C0 23 00 1C */ lfs f1, 0x1c(r3)
/* 802C49B0 002C18F0  C0 02 C2 A0 */ lfs f0, lbl_80455CA0-_SDA2_BASE_(r2)
/* 802C49B4 002C18F4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802C49B8 002C18F8  40 81 00 D4 */ ble lbl_802C4A8C
/* 802C49BC 002C18FC  80 99 00 00 */ lwz r4, 0(r25)
/* 802C49C0 002C1900  3C 60 00 02 */ lis r3, 0x000200A5@ha
/* 802C49C4 002C1904  38 03 00 A5 */ addi r0, r3, 0x000200A5@l
/* 802C49C8 002C1908  7C 04 00 00 */ cmpw r4, r0
/* 802C49CC 002C190C  41 82 00 80 */ beq lbl_802C4A4C
/* 802C49D0 002C1910  40 80 00 44 */ bge lbl_802C4A14
/* 802C49D4 002C1914  38 03 00 04 */ addi r0, r3, 4
/* 802C49D8 002C1918  7C 04 00 00 */ cmpw r4, r0
/* 802C49DC 002C191C  41 82 00 94 */ beq lbl_802C4A70
/* 802C49E0 002C1920  40 80 00 18 */ bge lbl_802C49F8
/* 802C49E4 002C1924  38 03 00 02 */ addi r0, r3, 2
/* 802C49E8 002C1928  7C 04 00 00 */ cmpw r4, r0
/* 802C49EC 002C192C  41 82 00 60 */ beq lbl_802C4A4C
/* 802C49F0 002C1930  40 80 00 70 */ bge lbl_802C4A60
/* 802C49F4 002C1934  48 00 00 98 */ b lbl_802C4A8C
lbl_802C49F8:
/* 802C49F8 002C1938  38 03 00 08 */ addi r0, r3, 8
/* 802C49FC 002C193C  7C 04 00 00 */ cmpw r4, r0
/* 802C4A00 002C1940  40 80 00 8C */ bge lbl_802C4A8C
/* 802C4A04 002C1944  38 03 00 06 */ addi r0, r3, 6
/* 802C4A08 002C1948  7C 04 00 00 */ cmpw r4, r0
/* 802C4A0C 002C194C  40 80 00 40 */ bge lbl_802C4A4C
/* 802C4A10 002C1950  48 00 00 70 */ b lbl_802C4A80
lbl_802C4A14:
/* 802C4A14 002C1954  3C 60 00 03 */ lis r3, 0x0003001F@ha
/* 802C4A18 002C1958  38 03 00 1F */ addi r0, r3, 0x0003001F@l
/* 802C4A1C 002C195C  7C 04 00 00 */ cmpw r4, r0
/* 802C4A20 002C1960  41 82 00 18 */ beq lbl_802C4A38
/* 802C4A24 002C1964  40 80 00 68 */ bge lbl_802C4A8C
/* 802C4A28 002C1968  38 03 00 1B */ addi r0, r3, 0x1b
/* 802C4A2C 002C196C  7C 04 00 00 */ cmpw r4, r0
/* 802C4A30 002C1970  41 82 00 08 */ beq lbl_802C4A38
/* 802C4A34 002C1974  48 00 00 58 */ b lbl_802C4A8C
lbl_802C4A38:
/* 802C4A38 002C1978  3C 60 00 03 */ lis r3, 0x00030020@ha
/* 802C4A3C 002C197C  38 03 00 20 */ addi r0, r3, 0x00030020@l
/* 802C4A40 002C1980  90 01 00 4C */ stw r0, 0x4c(r1)
/* 802C4A44 002C1984  90 19 00 00 */ stw r0, 0(r25)
/* 802C4A48 002C1988  48 00 00 44 */ b lbl_802C4A8C
lbl_802C4A4C:
/* 802C4A4C 002C198C  3C 60 00 02 */ lis r3, 0x00020063@ha
/* 802C4A50 002C1990  38 03 00 63 */ addi r0, r3, 0x00020063@l
/* 802C4A54 002C1994  90 01 00 48 */ stw r0, 0x48(r1)
/* 802C4A58 002C1998  90 19 00 00 */ stw r0, 0(r25)
/* 802C4A5C 002C199C  48 00 00 30 */ b lbl_802C4A8C
lbl_802C4A60:
/* 802C4A60 002C19A0  38 03 00 64 */ addi r0, r3, 0x64
/* 802C4A64 002C19A4  90 01 00 44 */ stw r0, 0x44(r1)
/* 802C4A68 002C19A8  90 19 00 00 */ stw r0, 0(r25)
/* 802C4A6C 002C19AC  48 00 00 20 */ b lbl_802C4A8C
lbl_802C4A70:
/* 802C4A70 002C19B0  38 03 00 65 */ addi r0, r3, 0x65
/* 802C4A74 002C19B4  90 01 00 40 */ stw r0, 0x40(r1)
/* 802C4A78 002C19B8  90 19 00 00 */ stw r0, 0(r25)
/* 802C4A7C 002C19BC  48 00 00 10 */ b lbl_802C4A8C
lbl_802C4A80:
/* 802C4A80 002C19C0  38 03 00 66 */ addi r0, r3, 0x66
/* 802C4A84 002C19C4  90 01 00 3C */ stw r0, 0x3c(r1)
/* 802C4A88 002C19C8  90 19 00 00 */ stw r0, 0(r25)
lbl_802C4A8C:
/* 802C4A8C 002C19CC  88 19 00 01 */ lbz r0, 1(r25)
/* 802C4A90 002C19D0  28 00 00 03 */ cmplwi r0, 3
/* 802C4A94 002C19D4  40 82 00 20 */ bne lbl_802C4AB4
/* 802C4A98 002C19D8  28 1C 00 1A */ cmplwi r28, 0x1a
/* 802C4A9C 002C19DC  40 81 00 18 */ ble lbl_802C4AB4
/* 802C4AA0 002C19E0  28 1C 00 2C */ cmplwi r28, 0x2c
/* 802C4AA4 002C19E4  40 82 00 0C */ bne lbl_802C4AB0
/* 802C4AA8 002C19E8  3B 80 00 17 */ li r28, 0x17
/* 802C4AAC 002C19EC  48 00 00 08 */ b lbl_802C4AB4
lbl_802C4AB0:
/* 802C4AB0 002C19F0  3B 80 00 00 */ li r28, 0
lbl_802C4AB4:
/* 802C4AB4 002C19F4  80 B9 00 00 */ lwz r5, 0(r25)
/* 802C4AB8 002C19F8  3C 80 00 03 */ lis r4, 0x0003001E@ha
/* 802C4ABC 002C19FC  38 04 00 1E */ addi r0, r4, 0x0003001E@l
/* 802C4AC0 002C1A00  7C 05 00 00 */ cmpw r5, r0
/* 802C4AC4 002C1A04  41 82 00 E8 */ beq lbl_802C4BAC
/* 802C4AC8 002C1A08  40 80 00 78 */ bge lbl_802C4B40
/* 802C4ACC 002C1A0C  38 04 00 08 */ addi r0, r4, 8
/* 802C4AD0 002C1A10  7C 05 00 00 */ cmpw r5, r0
/* 802C4AD4 002C1A14  40 80 00 3C */ bge lbl_802C4B10
/* 802C4AD8 002C1A18  38 04 00 01 */ addi r0, r4, 1
/* 802C4ADC 002C1A1C  7C 05 00 00 */ cmpw r5, r0
/* 802C4AE0 002C1A20  41 82 01 30 */ beq lbl_802C4C10
/* 802C4AE4 002C1A24  40 80 00 10 */ bge lbl_802C4AF4
/* 802C4AE8 002C1A28  7C 05 20 00 */ cmpw r5, r4
/* 802C4AEC 002C1A2C  40 80 00 E8 */ bge lbl_802C4BD4
/* 802C4AF0 002C1A30  48 00 02 14 */ b lbl_802C4D04
lbl_802C4AF4:
/* 802C4AF4 002C1A34  38 04 00 06 */ addi r0, r4, 6
/* 802C4AF8 002C1A38  7C 05 00 00 */ cmpw r5, r0
/* 802C4AFC 002C1A3C  40 80 00 D8 */ bge lbl_802C4BD4
/* 802C4B00 002C1A40  38 04 00 04 */ addi r0, r4, 4
/* 802C4B04 002C1A44  7C 05 00 00 */ cmpw r5, r0
/* 802C4B08 002C1A48  40 80 01 FC */ bge lbl_802C4D04
/* 802C4B0C 002C1A4C  48 00 01 7C */ b lbl_802C4C88
lbl_802C4B10:
/* 802C4B10 002C1A50  38 04 00 1B */ addi r0, r4, 0x1b
/* 802C4B14 002C1A54  7C 05 00 00 */ cmpw r5, r0
/* 802C4B18 002C1A58  41 82 01 EC */ beq lbl_802C4D04
/* 802C4B1C 002C1A5C  40 80 00 14 */ bge lbl_802C4B30
/* 802C4B20 002C1A60  38 04 00 1A */ addi r0, r4, 0x1a
/* 802C4B24 002C1A64  7C 05 00 00 */ cmpw r5, r0
/* 802C4B28 002C1A68  40 80 01 68 */ bge lbl_802C4C90
/* 802C4B2C 002C1A6C  48 00 01 D8 */ b lbl_802C4D04
lbl_802C4B30:
/* 802C4B30 002C1A70  38 04 00 1D */ addi r0, r4, 0x1d
/* 802C4B34 002C1A74  7C 05 00 00 */ cmpw r5, r0
/* 802C4B38 002C1A78  40 80 01 CC */ bge lbl_802C4D04
/* 802C4B3C 002C1A7C  48 00 00 70 */ b lbl_802C4BAC
lbl_802C4B40:
/* 802C4B40 002C1A80  38 04 00 3E */ addi r0, r4, 0x3e
/* 802C4B44 002C1A84  7C 05 00 00 */ cmpw r5, r0
/* 802C4B48 002C1A88  41 82 00 90 */ beq lbl_802C4BD8
/* 802C4B4C 002C1A8C  40 80 00 24 */ bge lbl_802C4B70
/* 802C4B50 002C1A90  38 04 00 38 */ addi r0, r4, 0x38
/* 802C4B54 002C1A94  7C 05 00 00 */ cmpw r5, r0
/* 802C4B58 002C1A98  41 82 00 80 */ beq lbl_802C4BD8
/* 802C4B5C 002C1A9C  40 80 01 A8 */ bge lbl_802C4D04
/* 802C4B60 002C1AA0  38 04 00 22 */ addi r0, r4, 0x22
/* 802C4B64 002C1AA4  7C 05 00 00 */ cmpw r5, r0
/* 802C4B68 002C1AA8  41 82 00 44 */ beq lbl_802C4BAC
/* 802C4B6C 002C1AAC  48 00 01 98 */ b lbl_802C4D04
lbl_802C4B70:
/* 802C4B70 002C1AB0  3C 60 00 08 */ lis r3, 0x0008000C@ha
/* 802C4B74 002C1AB4  38 03 00 0C */ addi r0, r3, 0x0008000C@l
/* 802C4B78 002C1AB8  7C 05 00 00 */ cmpw r5, r0
/* 802C4B7C 002C1ABC  40 80 00 20 */ bge lbl_802C4B9C
/* 802C4B80 002C1AC0  38 03 00 04 */ addi r0, r3, 4
/* 802C4B84 002C1AC4  7C 05 00 00 */ cmpw r5, r0
/* 802C4B88 002C1AC8  40 80 01 7C */ bge lbl_802C4D04
/* 802C4B8C 002C1ACC  38 03 00 02 */ addi r0, r3, 2
/* 802C4B90 002C1AD0  7C 05 00 00 */ cmpw r5, r0
/* 802C4B94 002C1AD4  40 80 01 40 */ bge lbl_802C4CD4
/* 802C4B98 002C1AD8  48 00 01 6C */ b lbl_802C4D04
lbl_802C4B9C:
/* 802C4B9C 002C1ADC  38 03 00 0E */ addi r0, r3, 0xe
/* 802C4BA0 002C1AE0  7C 05 00 00 */ cmpw r5, r0
/* 802C4BA4 002C1AE4  40 80 01 60 */ bge lbl_802C4D04
/* 802C4BA8 002C1AE8  48 00 01 2C */ b lbl_802C4CD4
lbl_802C4BAC:
/* 802C4BAC 002C1AEC  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4BB0 002C1AF0  38 63 00 50 */ addi r3, r3, 0x50
/* 802C4BB4 002C1AF4  4B FE 69 51 */ bl isActive__14Z2SoundHandlesCFv
/* 802C4BB8 002C1AF8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802C4BBC 002C1AFC  41 82 01 48 */ beq lbl_802C4D04
/* 802C4BC0 002C1B00  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4BC4 002C1B04  38 63 00 50 */ addi r3, r3, 0x50
/* 802C4BC8 002C1B08  38 80 00 01 */ li r4, 1
/* 802C4BCC 002C1B0C  4B FE 68 D5 */ bl stopAllSounds__14Z2SoundHandlesFUl
/* 802C4BD0 002C1B10  48 00 01 34 */ b lbl_802C4D04
lbl_802C4BD4:
/* 802C4BD4 002C1B14  3B E0 00 01 */ li r31, 1
lbl_802C4BD8:
/* 802C4BD8 002C1B18  80 8D 8D E0 */ lwz r4, lbl_80451360-_SDA_BASE_(r13)
/* 802C4BDC 002C1B1C  88 04 00 C4 */ lbz r0, 0xc4(r4)
/* 802C4BE0 002C1B20  28 00 00 01 */ cmplwi r0, 1
/* 802C4BE4 002C1B24  40 82 00 24 */ bne lbl_802C4C08
/* 802C4BE8 002C1B28  3C 60 00 03 */ lis r3, 0x00030004@ha
/* 802C4BEC 002C1B2C  38 03 00 04 */ addi r0, r3, 0x00030004@l
/* 802C4BF0 002C1B30  90 01 00 38 */ stw r0, 0x38(r1)
/* 802C4BF4 002C1B34  90 19 00 00 */ stw r0, 0(r25)
/* 802C4BF8 002C1B38  88 04 00 CB */ lbz r0, 0xcb(r4)
/* 802C4BFC 002C1B3C  54 00 07 FF */ clrlwi. r0, r0, 0x1f
/* 802C4C00 002C1B40  41 82 00 08 */ beq lbl_802C4C08
/* 802C4C04 002C1B44  3B 80 00 7F */ li r28, 0x7f
lbl_802C4C08:
/* 802C4C08 002C1B48  3B C0 00 01 */ li r30, 1
/* 802C4C0C 002C1B4C  48 00 00 F8 */ b lbl_802C4D04
lbl_802C4C10:
/* 802C4C10 002C1B50  3B E0 00 01 */ li r31, 1
/* 802C4C14 002C1B54  3B C0 00 01 */ li r30, 1
/* 802C4C18 002C1B58  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4C1C 002C1B5C  88 03 00 C4 */ lbz r0, 0xc4(r3)
/* 802C4C20 002C1B60  28 00 00 01 */ cmplwi r0, 1
/* 802C4C24 002C1B64  40 82 00 20 */ bne lbl_802C4C44
/* 802C4C28 002C1B68  38 04 00 05 */ addi r0, r4, 5
/* 802C4C2C 002C1B6C  90 01 00 34 */ stw r0, 0x34(r1)
/* 802C4C30 002C1B70  90 19 00 00 */ stw r0, 0(r25)
/* 802C4C34 002C1B74  88 03 00 CB */ lbz r0, 0xcb(r3)
/* 802C4C38 002C1B78  54 00 07 FF */ clrlwi. r0, r0, 0x1f
/* 802C4C3C 002C1B7C  41 82 00 08 */ beq lbl_802C4C44
/* 802C4C40 002C1B80  3B 80 00 7F */ li r28, 0x7f
lbl_802C4C44:
/* 802C4C44 002C1B84  3C 60 00 01 */ lis r3, 0x0001000C@ha
/* 802C4C48 002C1B88  38 03 00 0C */ addi r0, r3, 0x0001000C@l
/* 802C4C4C 002C1B8C  90 01 00 30 */ stw r0, 0x30(r1)
/* 802C4C50 002C1B90  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4C54 002C1B94  38 63 00 50 */ addi r3, r3, 0x50
/* 802C4C58 002C1B98  38 81 00 30 */ addi r4, r1, 0x30
/* 802C4C5C 002C1B9C  4B FE 65 F9 */ bl getHandleSoundID__14Z2SoundHandlesF10JAISoundID
/* 802C4C60 002C1BA0  28 03 00 00 */ cmplwi r3, 0
/* 802C4C64 002C1BA4  41 82 00 A0 */ beq lbl_802C4D04
/* 802C4C68 002C1BA8  3C 60 00 01 */ lis r3, 0x0001000B@ha
/* 802C4C6C 002C1BAC  38 03 00 0B */ addi r0, r3, 0x0001000B@l
/* 802C4C70 002C1BB0  90 01 00 2C */ stw r0, 0x2c(r1)
/* 802C4C74 002C1BB4  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4C78 002C1BB8  38 81 00 2C */ addi r4, r1, 0x2c
/* 802C4C7C 002C1BBC  38 A0 FF FF */ li r5, -1
/* 802C4C80 002C1BC0  4B FF F6 A1 */ bl startLinkVoice__14Z2CreatureLinkF10JAISoundIDSc
/* 802C4C84 002C1BC4  48 00 00 80 */ b lbl_802C4D04
lbl_802C4C88:
/* 802C4C88 002C1BC8  3B E0 00 01 */ li r31, 1
/* 802C4C8C 002C1BCC  48 00 00 78 */ b lbl_802C4D04
lbl_802C4C90:
/* 802C4C90 002C1BD0  3C 60 00 01 */ lis r3, 0x0001000C@ha
/* 802C4C94 002C1BD4  38 03 00 0C */ addi r0, r3, 0x0001000C@l
/* 802C4C98 002C1BD8  90 01 00 28 */ stw r0, 0x28(r1)
/* 802C4C9C 002C1BDC  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4CA0 002C1BE0  38 63 00 50 */ addi r3, r3, 0x50
/* 802C4CA4 002C1BE4  38 81 00 28 */ addi r4, r1, 0x28
/* 802C4CA8 002C1BE8  4B FE 65 AD */ bl getHandleSoundID__14Z2SoundHandlesF10JAISoundID
/* 802C4CAC 002C1BEC  28 03 00 00 */ cmplwi r3, 0
/* 802C4CB0 002C1BF0  41 82 00 54 */ beq lbl_802C4D04
/* 802C4CB4 002C1BF4  3C 60 00 01 */ lis r3, 0x0001000D@ha
/* 802C4CB8 002C1BF8  38 03 00 0D */ addi r0, r3, 0x0001000D@l
/* 802C4CBC 002C1BFC  90 01 00 24 */ stw r0, 0x24(r1)
/* 802C4CC0 002C1C00  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4CC4 002C1C04  38 81 00 24 */ addi r4, r1, 0x24
/* 802C4CC8 002C1C08  38 A0 FF FF */ li r5, -1
/* 802C4CCC 002C1C0C  4B FF F6 55 */ bl startLinkVoice__14Z2CreatureLinkF10JAISoundIDSc
/* 802C4CD0 002C1C10  48 00 00 34 */ b lbl_802C4D04
lbl_802C4CD4:
/* 802C4CD4 002C1C14  3C 60 00 02 */ lis r3, 0x00020042@ha
/* 802C4CD8 002C1C18  38 03 00 42 */ addi r0, r3, 0x00020042@l
/* 802C4CDC 002C1C1C  90 01 00 08 */ stw r0, 8(r1)
/* 802C4CE0 002C1C20  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4CE4 002C1C24  38 63 00 08 */ addi r3, r3, 8
/* 802C4CE8 002C1C28  38 81 00 08 */ addi r4, r1, 8
/* 802C4CEC 002C1C2C  4B FE 65 69 */ bl getHandleSoundID__14Z2SoundHandlesF10JAISoundID
/* 802C4CF0 002C1C30  28 03 00 00 */ cmplwi r3, 0
/* 802C4CF4 002C1C34  41 82 00 10 */ beq lbl_802C4D04
/* 802C4CF8 002C1C38  80 63 00 00 */ lwz r3, 0(r3)
/* 802C4CFC 002C1C3C  38 80 00 00 */ li r4, 0
/* 802C4D00 002C1C40  4B FD D7 DD */ bl stop__8JAISoundFUl
lbl_802C4D04:
/* 802C4D04 002C1C44  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4D08 002C1C48  88 A3 00 CA */ lbz r5, 0xca(r3)
/* 802C4D0C 002C1C4C  7C A0 07 75 */ extsb. r0, r5
/* 802C4D10 002C1C50  40 81 00 C8 */ ble lbl_802C4DD8
/* 802C4D14 002C1C54  80 99 00 00 */ lwz r4, 0(r25)
/* 802C4D18 002C1C58  3C 60 00 03 */ lis r3, 0x00030008@ha
/* 802C4D1C 002C1C5C  38 03 00 08 */ addi r0, r3, 0x00030008@l
/* 802C4D20 002C1C60  7C 04 00 00 */ cmpw r4, r0
/* 802C4D24 002C1C64  40 80 00 1C */ bge lbl_802C4D40
/* 802C4D28 002C1C68  38 03 00 06 */ addi r0, r3, 6
/* 802C4D2C 002C1C6C  7C 04 00 00 */ cmpw r4, r0
/* 802C4D30 002C1C70  40 80 00 A8 */ bge lbl_802C4DD8
/* 802C4D34 002C1C74  7C 04 18 00 */ cmpw r4, r3
/* 802C4D38 002C1C78  40 80 00 14 */ bge lbl_802C4D4C
/* 802C4D3C 002C1C7C  48 00 00 9C */ b lbl_802C4DD8
lbl_802C4D40:
/* 802C4D40 002C1C80  38 03 00 0C */ addi r0, r3, 0xc
/* 802C4D44 002C1C84  7C 04 00 00 */ cmpw r4, r0
/* 802C4D48 002C1C88  40 80 00 90 */ bge lbl_802C4DD8
lbl_802C4D4C:
/* 802C4D4C 002C1C8C  28 1C 00 03 */ cmplwi r28, 3
/* 802C4D50 002C1C90  40 82 00 44 */ bne lbl_802C4D94
/* 802C4D54 002C1C94  7C A0 07 74 */ extsb r0, r5
/* 802C4D58 002C1C98  C8 22 C2 E0 */ lfd f1, lbl_80455CE0-_SDA2_BASE_(r2)
/* 802C4D5C 002C1C9C  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 802C4D60 002C1CA0  90 01 00 54 */ stw r0, 0x54(r1)
/* 802C4D64 002C1CA4  3C 00 43 30 */ lis r0, 0x4330
/* 802C4D68 002C1CA8  90 01 00 50 */ stw r0, 0x50(r1)
/* 802C4D6C 002C1CAC  C8 01 00 50 */ lfd f0, 0x50(r1)
/* 802C4D70 002C1CB0  EC 20 08 28 */ fsubs f1, f0, f1
/* 802C4D74 002C1CB4  C0 42 C2 A0 */ lfs f2, lbl_80455CA0-_SDA2_BASE_(r2)
/* 802C4D78 002C1CB8  C0 62 C2 C8 */ lfs f3, lbl_80455CC8-_SDA2_BASE_(r2)
/* 802C4D7C 002C1CBC  C0 82 C2 98 */ lfs f4, lbl_80455C98-_SDA2_BASE_(r2)
/* 802C4D80 002C1CC0  C0 A2 C2 D8 */ lfs f5, lbl_80455CD8-_SDA2_BASE_(r2)
/* 802C4D84 002C1CC4  38 60 00 01 */ li r3, 1
/* 802C4D88 002C1CC8  4B FE 49 05 */ bl linearTransform__6Z2CalcFfffffb
/* 802C4D8C 002C1CCC  EF 7B 00 72 */ fmuls f27, f27, f1
/* 802C4D90 002C1CD0  48 00 00 48 */ b lbl_802C4DD8
lbl_802C4D94:
/* 802C4D94 002C1CD4  28 1C 00 19 */ cmplwi r28, 0x19
/* 802C4D98 002C1CD8  40 82 00 40 */ bne lbl_802C4DD8
/* 802C4D9C 002C1CDC  7C A0 07 74 */ extsb r0, r5
/* 802C4DA0 002C1CE0  C8 22 C2 E0 */ lfd f1, lbl_80455CE0-_SDA2_BASE_(r2)
/* 802C4DA4 002C1CE4  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 802C4DA8 002C1CE8  90 01 00 54 */ stw r0, 0x54(r1)
/* 802C4DAC 002C1CEC  3C 00 43 30 */ lis r0, 0x4330
/* 802C4DB0 002C1CF0  90 01 00 50 */ stw r0, 0x50(r1)
/* 802C4DB4 002C1CF4  C8 01 00 50 */ lfd f0, 0x50(r1)
/* 802C4DB8 002C1CF8  EC 20 08 28 */ fsubs f1, f0, f1
/* 802C4DBC 002C1CFC  C0 42 C2 A0 */ lfs f2, lbl_80455CA0-_SDA2_BASE_(r2)
/* 802C4DC0 002C1D00  C0 62 C2 D4 */ lfs f3, lbl_80455CD4-_SDA2_BASE_(r2)
/* 802C4DC4 002C1D04  C0 82 C2 98 */ lfs f4, lbl_80455C98-_SDA2_BASE_(r2)
/* 802C4DC8 002C1D08  C0 A2 C2 D0 */ lfs f5, lbl_80455CD0-_SDA2_BASE_(r2)
/* 802C4DCC 002C1D0C  38 60 00 01 */ li r3, 1
/* 802C4DD0 002C1D10  4B FE 48 BD */ bl linearTransform__6Z2CalcFfffffb
/* 802C4DD4 002C1D14  EF 7B 00 72 */ fmuls f27, f27, f1
lbl_802C4DD8:
/* 802C4DD8 002C1D18  80 19 00 00 */ lwz r0, 0(r25)
/* 802C4DDC 002C1D1C  90 01 00 20 */ stw r0, 0x20(r1)
/* 802C4DE0 002C1D20  7F 03 C3 78 */ mr r3, r24
/* 802C4DE4 002C1D24  38 81 00 20 */ addi r4, r1, 0x20
/* 802C4DE8 002C1D28  7F 45 D3 78 */ mr r5, r26
/* 802C4DEC 002C1D2C  7F 66 DB 78 */ mr r6, r27
/* 802C4DF0 002C1D30  7F 87 E3 78 */ mr r7, r28
/* 802C4DF4 002C1D34  FC 20 F8 90 */ fmr f1, f31
/* 802C4DF8 002C1D38  FC 40 D8 90 */ fmr f2, f27
/* 802C4DFC 002C1D3C  FC 60 E0 90 */ fmr f3, f28
/* 802C4E00 002C1D40  FC 80 E8 90 */ fmr f4, f29
/* 802C4E04 002C1D44  FC A0 F0 90 */ fmr f5, f30
/* 802C4E08 002C1D48  7F A8 EB 78 */ mr r8, r29
/* 802C4E0C 002C1D4C  4B FE 5E 31 */ bl startSound__14Z2SoundStarterF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3_SUB_0f_SUB_1UlfffffUl
/* 802C4E10 002C1D50  7C 7D 1B 78 */ mr r29, r3
/* 802C4E14 002C1D54  57 E0 06 3F */ clrlwi. r0, r31, 0x18
/* 802C4E18 002C1D58  41 82 01 24 */ beq lbl_802C4F3C
/* 802C4E1C 002C1D5C  80 6D 86 00 */ lwz r3, lbl_80450B80-_SDA_BASE_(r13)
/* 802C4E20 002C1D60  88 03 00 16 */ lbz r0, 0x16(r3)
/* 802C4E24 002C1D64  28 00 00 72 */ cmplwi r0, 0x72
/* 802C4E28 002C1D68  41 82 01 14 */ beq lbl_802C4F3C
/* 802C4E2C 002C1D6C  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4E30 002C1D70  88 03 00 CB */ lbz r0, 0xcb(r3)
/* 802C4E34 002C1D74  54 00 F7 FF */ rlwinm. r0, r0, 0x1e, 0x1f, 0x1f
/* 802C4E38 002C1D78  41 82 00 30 */ beq lbl_802C4E68
/* 802C4E3C 002C1D7C  3C 80 00 02 */ lis r4, 0x00020026@ha
/* 802C4E40 002C1D80  38 04 00 26 */ addi r0, r4, 0x00020026@l
/* 802C4E44 002C1D84  90 01 00 1C */ stw r0, 0x1c(r1)
/* 802C4E48 002C1D88  38 81 00 1C */ addi r4, r1, 0x1c
/* 802C4E4C 002C1D8C  38 A0 00 00 */ li r5, 0
/* 802C4E50 002C1D90  C0 02 C2 C8 */ lfs f0, lbl_80455CC8-_SDA2_BASE_(r2)
/* 802C4E54 002C1D94  EC 00 07 F2 */ fmuls f0, f0, f31
/* 802C4E58 002C1D98  FC 00 00 1E */ fctiwz f0, f0
/* 802C4E5C 002C1D9C  D8 01 00 50 */ stfd f0, 0x50(r1)
/* 802C4E60 002C1DA0  80 C1 00 54 */ lwz r6, 0x54(r1)
/* 802C4E64 002C1DA4  4B FF ED 71 */ bl startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc
lbl_802C4E68:
/* 802C4E68 002C1DA8  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4E6C 002C1DAC  88 03 00 CC */ lbz r0, 0xcc(r3)
/* 802C4E70 002C1DB0  54 00 D7 FF */ rlwinm. r0, r0, 0x1a, 0x1f, 0x1f
/* 802C4E74 002C1DB4  41 82 00 30 */ beq lbl_802C4EA4
/* 802C4E78 002C1DB8  3C 80 00 02 */ lis r4, 0x00020035@ha
/* 802C4E7C 002C1DBC  38 04 00 35 */ addi r0, r4, 0x00020035@l
/* 802C4E80 002C1DC0  90 01 00 18 */ stw r0, 0x18(r1)
/* 802C4E84 002C1DC4  38 81 00 18 */ addi r4, r1, 0x18
/* 802C4E88 002C1DC8  38 A0 00 00 */ li r5, 0
/* 802C4E8C 002C1DCC  C0 02 C2 C8 */ lfs f0, lbl_80455CC8-_SDA2_BASE_(r2)
/* 802C4E90 002C1DD0  EC 00 07 F2 */ fmuls f0, f0, f31
/* 802C4E94 002C1DD4  FC 00 00 1E */ fctiwz f0, f0
/* 802C4E98 002C1DD8  D8 01 00 50 */ stfd f0, 0x50(r1)
/* 802C4E9C 002C1DDC  80 C1 00 54 */ lwz r6, 0x54(r1)
/* 802C4EA0 002C1DE0  4B FF ED 35 */ bl startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc
lbl_802C4EA4:
/* 802C4EA4 002C1DE4  80 8D 8D E0 */ lwz r4, lbl_80451360-_SDA_BASE_(r13)
/* 802C4EA8 002C1DE8  88 04 00 C5 */ lbz r0, 0xc5(r4)
/* 802C4EAC 002C1DEC  28 00 00 00 */ cmplwi r0, 0
/* 802C4EB0 002C1DF0  41 82 00 8C */ beq lbl_802C4F3C
/* 802C4EB4 002C1DF4  3C 60 00 02 */ lis r3, 0x00020029@ha
/* 802C4EB8 002C1DF8  38 03 00 29 */ addi r0, r3, 0x00020029@l
/* 802C4EBC 002C1DFC  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C4EC0 002C1E00  38 64 00 94 */ addi r3, r4, 0x94
/* 802C4EC4 002C1E04  38 81 00 14 */ addi r4, r1, 0x14
/* 802C4EC8 002C1E08  38 A0 00 00 */ li r5, 0
/* 802C4ECC 002C1E0C  C0 02 C2 C8 */ lfs f0, lbl_80455CC8-_SDA2_BASE_(r2)
/* 802C4ED0 002C1E10  EC 00 07 F2 */ fmuls f0, f0, f31
/* 802C4ED4 002C1E14  FC 00 00 1E */ fctiwz f0, f0
/* 802C4ED8 002C1E18  D8 01 00 50 */ stfd f0, 0x50(r1)
/* 802C4EDC 002C1E1C  80 C1 00 54 */ lwz r6, 0x54(r1)
/* 802C4EE0 002C1E20  81 83 00 10 */ lwz r12, 0x10(r3)
/* 802C4EE4 002C1E24  81 8C 00 18 */ lwz r12, 0x18(r12)
/* 802C4EE8 002C1E28  7D 89 03 A6 */ mtctr r12
/* 802C4EEC 002C1E2C  4E 80 04 21 */ bctrl
/* 802C4EF0 002C1E30  7C 78 1B 78 */ mr r24, r3
/* 802C4EF4 002C1E34  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4EF8 002C1E38  88 03 00 C5 */ lbz r0, 0xc5(r3)
/* 802C4EFC 002C1E3C  28 00 00 02 */ cmplwi r0, 2
/* 802C4F00 002C1E40  40 82 00 3C */ bne lbl_802C4F3C
/* 802C4F04 002C1E44  28 18 00 00 */ cmplwi r24, 0
/* 802C4F08 002C1E48  41 82 00 34 */ beq lbl_802C4F3C
/* 802C4F0C 002C1E4C  80 78 00 00 */ lwz r3, 0(r24)
/* 802C4F10 002C1E50  28 03 00 00 */ cmplwi r3, 0
/* 802C4F14 002C1E54  41 82 00 28 */ beq lbl_802C4F3C
/* 802C4F18 002C1E58  38 63 00 48 */ addi r3, r3, 0x48
/* 802C4F1C 002C1E5C  C0 22 C2 FC */ lfs f1, lbl_80455CFC-_SDA2_BASE_(r2)
/* 802C4F20 002C1E60  38 80 00 00 */ li r4, 0
/* 802C4F24 002C1E64  4B FD DE 91 */ bl moveVolume__18JAISoundParamsMoveFfUl
/* 802C4F28 002C1E68  80 78 00 00 */ lwz r3, 0(r24)
/* 802C4F2C 002C1E6C  38 63 00 48 */ addi r3, r3, 0x48
/* 802C4F30 002C1E70  C0 22 C3 1C */ lfs f1, lbl_80455D1C-_SDA2_BASE_(r2)
/* 802C4F34 002C1E74  38 80 00 00 */ li r4, 0
/* 802C4F38 002C1E78  4B FD DE D5 */ bl movePitch__18JAISoundParamsMoveFfUl
lbl_802C4F3C:
/* 802C4F3C 002C1E7C  57 C0 06 3F */ clrlwi. r0, r30, 0x18
/* 802C4F40 002C1E80  41 82 00 78 */ beq lbl_802C4FB8
/* 802C4F44 002C1E84  80 6D 8D E0 */ lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802C4F48 002C1E88  88 03 00 C0 */ lbz r0, 0xc0(r3)
/* 802C4F4C 002C1E8C  28 00 00 04 */ cmplwi r0, 4
/* 802C4F50 002C1E90  40 82 00 34 */ bne lbl_802C4F84
/* 802C4F54 002C1E94  3C 80 00 03 */ lis r4, 0x0003004B@ha
/* 802C4F58 002C1E98  38 04 00 4B */ addi r0, r4, 0x0003004B@l
/* 802C4F5C 002C1E9C  90 01 00 10 */ stw r0, 0x10(r1)
/* 802C4F60 002C1EA0  38 81 00 10 */ addi r4, r1, 0x10
/* 802C4F64 002C1EA4  38 A0 00 00 */ li r5, 0
/* 802C4F68 002C1EA8  C0 02 C2 C8 */ lfs f0, lbl_80455CC8-_SDA2_BASE_(r2)
/* 802C4F6C 002C1EAC  EC 00 07 F2 */ fmuls f0, f0, f31
/* 802C4F70 002C1EB0  FC 00 00 1E */ fctiwz f0, f0
/* 802C4F74 002C1EB4  D8 01 00 50 */ stfd f0, 0x50(r1)
/* 802C4F78 002C1EB8  80 C1 00 54 */ lwz r6, 0x54(r1)
/* 802C4F7C 002C1EBC  4B FF EC 59 */ bl startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc
/* 802C4F80 002C1EC0  48 00 00 38 */ b lbl_802C4FB8
lbl_802C4F84:
/* 802C4F84 002C1EC4  28 00 00 05 */ cmplwi r0, 5
/* 802C4F88 002C1EC8  40 82 00 30 */ bne lbl_802C4FB8
/* 802C4F8C 002C1ECC  3C 80 00 03 */ lis r4, 0x0003004C@ha
/* 802C4F90 002C1ED0  38 04 00 4C */ addi r0, r4, 0x0003004C@l
/* 802C4F94 002C1ED4  90 01 00 0C */ stw r0, 0xc(r1)
/* 802C4F98 002C1ED8  38 81 00 0C */ addi r4, r1, 0xc
/* 802C4F9C 002C1EDC  38 A0 00 00 */ li r5, 0
/* 802C4FA0 002C1EE0  C0 02 C2 C8 */ lfs f0, lbl_80455CC8-_SDA2_BASE_(r2)
/* 802C4FA4 002C1EE4  EC 00 07 F2 */ fmuls f0, f0, f31
/* 802C4FA8 002C1EE8  FC 00 00 1E */ fctiwz f0, f0
/* 802C4FAC 002C1EEC  D8 01 00 50 */ stfd f0, 0x50(r1)
/* 802C4FB0 002C1EF0  80 C1 00 54 */ lwz r6, 0x54(r1)
/* 802C4FB4 002C1EF4  4B FF EC 21 */ bl startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc
lbl_802C4FB8:
/* 802C4FB8 002C1EF8  7F A3 EB 78 */ mr r3, r29
/* 802C4FBC 002C1EFC  E3 E1 00 C8 */ psq_l f31, 200(r1), 0, 0
/* 802C4FC0 002C1F00  CB E1 00 C0 */ lfd f31, 0xc0(r1)
/* 802C4FC4 002C1F04  E3 C1 00 B8 */ psq_l f30, 184(r1), 0, 0
/* 802C4FC8 002C1F08  CB C1 00 B0 */ lfd f30, 0xb0(r1)
/* 802C4FCC 002C1F0C  E3 A1 00 A8 */ psq_l f29, 168(r1), 0, 0
/* 802C4FD0 002C1F10  CB A1 00 A0 */ lfd f29, 0xa0(r1)
/* 802C4FD4 002C1F14  E3 81 00 98 */ psq_l f28, 152(r1), 0, 0
/* 802C4FD8 002C1F18  CB 81 00 90 */ lfd f28, 0x90(r1)
/* 802C4FDC 002C1F1C  E3 61 00 88 */ psq_l f27, 136(r1), 0, 0
/* 802C4FE0 002C1F20  CB 61 00 80 */ lfd f27, 0x80(r1)
/* 802C4FE4 002C1F24  39 61 00 80 */ addi r11, r1, 0x80
/* 802C4FE8 002C1F28  48 09 D2 2D */ bl _restgpr_24
/* 802C4FEC 002C1F2C  80 01 00 D4 */ lwz r0, 0xd4(r1)
/* 802C4FF0 002C1F30  7C 08 03 A6 */ mtlr r0
/* 802C4FF4 002C1F34  38 21 00 D0 */ addi r1, r1, 0xd0
/* 802C4FF8 002C1F38  4E 80 00 20 */ blr