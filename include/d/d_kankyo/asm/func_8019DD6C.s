/* 8019DD6C 0019ACAC  94 21 FF A0 */ stwu r1, -0x60(r1)
/* 8019DD70 0019ACB0  7C 08 02 A6 */ mflr r0
/* 8019DD74 0019ACB4  90 01 00 64 */ stw r0, 0x64(r1)
/* 8019DD78 0019ACB8  DB E1 00 50 */ stfd f31, 0x50(r1)
/* 8019DD7C 0019ACBC  F3 E1 00 58 */ psq_st f31, 88(r1), 0, 0
/* 8019DD80 0019ACC0  DB C1 00 40 */ stfd f30, 0x40(r1)
/* 8019DD84 0019ACC4  F3 C1 00 48 */ psq_st f30, 72(r1), 0, 0
/* 8019DD88 0019ACC8  39 61 00 40 */ addi r11, r1, 0x40
/* 8019DD8C 0019ACCC  48 1C 44 31 */ bl _savegpr_21
/* 8019DD90 0019ACD0  7C 76 1B 78 */ mr r22, r3
/* 8019DD94 0019ACD4  7C 97 23 78 */ mr r23, r4
/* 8019DD98 0019ACD8  C3 E2 A2 70 */ lfs f31, lbl_80453C70-_SDA2_BASE_(r2)
/* 8019DD9C 0019ACDC  3B 80 FF FF */ li r28, -1
/* 8019DDA0 0019ACE0  3B 60 FF FF */ li r27, -1
/* 8019DDA4 0019ACE4  3B 20 FF FF */ li r25, -1
/* 8019DDA8 0019ACE8  C3 C2 A2 74 */ lfs f30, lbl_80453C74-_SDA2_BASE_(r2)
/* 8019DDAC 0019ACEC  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8019DDB0 0019ACF0  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8019DDB4 0019ACF4  3B C3 4E 00 */ addi r30, r3, 0x4e00
/* 8019DDB8 0019ACF8  7F C3 F3 78 */ mr r3, r30
/* 8019DDBC 0019ACFC  3C 80 80 39 */ lis r4, lbl_80394C6C@ha
/* 8019DDC0 0019AD00  38 84 4C 6C */ addi r4, r4, lbl_80394C6C@l
/* 8019DDC4 0019AD04  38 84 01 6C */ addi r4, r4, 0x16c
/* 8019DDC8 0019AD08  48 1C AB CD */ bl strcmp
/* 8019DDCC 0019AD0C  2C 03 00 00 */ cmpwi r3, 0
/* 8019DDD0 0019AD10  40 82 00 08 */ bne lbl_8019DDD8
/* 8019DDD4 0019AD14  C3 C2 A2 78 */ lfs f30, lbl_80453C78-_SDA2_BASE_(r2)
lbl_8019DDD8:
/* 8019DDD8 0019AD18  3B 00 00 00 */ li r24, 0
/* 8019DDDC 0019AD1C  3C 60 80 43 */ lis r3, lbl_8042CA54@ha
/* 8019DDE0 0019AD20  3B E3 CA 54 */ addi r31, r3, lbl_8042CA54@l
/* 8019DDE4 0019AD24  48 00 03 18 */ b lbl_8019E0FC
lbl_8019DDE8:
/* 8019DDE8 0019AD28  3B 40 00 00 */ li r26, 0
/* 8019DDEC 0019AD2C  3A A0 00 00 */ li r21, 0
lbl_8019DDF0:
/* 8019DDF0 0019AD30  7C 7F AA 14 */ add r3, r31, r21
/* 8019DDF4 0019AD34  3B A3 03 F8 */ addi r29, r3, 0x3f8
/* 8019DDF8 0019AD38  80 83 03 F8 */ lwz r4, 0x3f8(r3)
/* 8019DDFC 0019AD3C  28 04 00 00 */ cmplwi r4, 0
/* 8019DE00 0019AD40  41 82 02 E4 */ beq lbl_8019E0E4
/* 8019DE04 0019AD44  2C 18 00 00 */ cmpwi r24, 0
/* 8019DE08 0019AD48  41 82 00 0C */ beq lbl_8019DE14
/* 8019DE0C 0019AD4C  7C 1A E0 00 */ cmpw r26, r28
/* 8019DE10 0019AD50  41 82 02 D4 */ beq lbl_8019E0E4
lbl_8019DE14:
/* 8019DE14 0019AD54  C0 24 00 14 */ lfs f1, 0x14(r4)
/* 8019DE18 0019AD58  C0 02 A2 68 */ lfs f0, lbl_80453C68-_SDA2_BASE_(r2)
/* 8019DE1C 0019AD5C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8019DE20 0019AD60  40 81 02 C4 */ ble lbl_8019E0E4
/* 8019DE24 0019AD64  7E C3 B3 78 */ mr r3, r22
/* 8019DE28 0019AD68  48 1A 95 75 */ bl PSVECSquareDistance
/* 8019DE2C 0019AD6C  C0 02 A2 0C */ lfs f0, lbl_80453C0C-_SDA2_BASE_(r2)
/* 8019DE30 0019AD70  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8019DE34 0019AD74  40 81 00 58 */ ble lbl_8019DE8C
/* 8019DE38 0019AD78  FC 00 08 34 */ frsqrte f0, f1
/* 8019DE3C 0019AD7C  C8 82 A2 10 */ lfd f4, lbl_80453C10-_SDA2_BASE_(r2)
/* 8019DE40 0019AD80  FC 44 00 32 */ fmul f2, f4, f0
/* 8019DE44 0019AD84  C8 62 A2 18 */ lfd f3, lbl_80453C18-_SDA2_BASE_(r2)
/* 8019DE48 0019AD88  FC 00 00 32 */ fmul f0, f0, f0
/* 8019DE4C 0019AD8C  FC 01 00 32 */ fmul f0, f1, f0
/* 8019DE50 0019AD90  FC 03 00 28 */ fsub f0, f3, f0
/* 8019DE54 0019AD94  FC 02 00 32 */ fmul f0, f2, f0
/* 8019DE58 0019AD98  FC 44 00 32 */ fmul f2, f4, f0
/* 8019DE5C 0019AD9C  FC 00 00 32 */ fmul f0, f0, f0
/* 8019DE60 0019ADA0  FC 01 00 32 */ fmul f0, f1, f0
/* 8019DE64 0019ADA4  FC 03 00 28 */ fsub f0, f3, f0
/* 8019DE68 0019ADA8  FC 02 00 32 */ fmul f0, f2, f0
/* 8019DE6C 0019ADAC  FC 44 00 32 */ fmul f2, f4, f0
/* 8019DE70 0019ADB0  FC 00 00 32 */ fmul f0, f0, f0
/* 8019DE74 0019ADB4  FC 01 00 32 */ fmul f0, f1, f0
/* 8019DE78 0019ADB8  FC 03 00 28 */ fsub f0, f3, f0
/* 8019DE7C 0019ADBC  FC 02 00 32 */ fmul f0, f2, f0
/* 8019DE80 0019ADC0  FC 21 00 32 */ fmul f1, f1, f0
/* 8019DE84 0019ADC4  FC 20 08 18 */ frsp f1, f1
/* 8019DE88 0019ADC8  48 00 00 88 */ b lbl_8019DF10
lbl_8019DE8C:
/* 8019DE8C 0019ADCC  C8 02 A2 20 */ lfd f0, lbl_80453C20-_SDA2_BASE_(r2)
/* 8019DE90 0019ADD0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8019DE94 0019ADD4  40 80 00 10 */ bge lbl_8019DEA4
/* 8019DE98 0019ADD8  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 8019DE9C 0019ADDC  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 8019DEA0 0019ADE0  48 00 00 70 */ b lbl_8019DF10
lbl_8019DEA4:
/* 8019DEA4 0019ADE4  D0 21 00 0C */ stfs f1, 0xc(r1)
/* 8019DEA8 0019ADE8  80 81 00 0C */ lwz r4, 0xc(r1)
/* 8019DEAC 0019ADEC  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 8019DEB0 0019ADF0  3C 00 7F 80 */ lis r0, 0x7f80
/* 8019DEB4 0019ADF4  7C 03 00 00 */ cmpw r3, r0
/* 8019DEB8 0019ADF8  41 82 00 14 */ beq lbl_8019DECC
/* 8019DEBC 0019ADFC  40 80 00 40 */ bge lbl_8019DEFC
/* 8019DEC0 0019AE00  2C 03 00 00 */ cmpwi r3, 0
/* 8019DEC4 0019AE04  41 82 00 20 */ beq lbl_8019DEE4
/* 8019DEC8 0019AE08  48 00 00 34 */ b lbl_8019DEFC
lbl_8019DECC:
/* 8019DECC 0019AE0C  54 80 02 7F */ clrlwi. r0, r4, 9
/* 8019DED0 0019AE10  41 82 00 0C */ beq lbl_8019DEDC
/* 8019DED4 0019AE14  38 00 00 01 */ li r0, 1
/* 8019DED8 0019AE18  48 00 00 28 */ b lbl_8019DF00
lbl_8019DEDC:
/* 8019DEDC 0019AE1C  38 00 00 02 */ li r0, 2
/* 8019DEE0 0019AE20  48 00 00 20 */ b lbl_8019DF00
lbl_8019DEE4:
/* 8019DEE4 0019AE24  54 80 02 7F */ clrlwi. r0, r4, 9
/* 8019DEE8 0019AE28  41 82 00 0C */ beq lbl_8019DEF4
/* 8019DEEC 0019AE2C  38 00 00 05 */ li r0, 5
/* 8019DEF0 0019AE30  48 00 00 10 */ b lbl_8019DF00
lbl_8019DEF4:
/* 8019DEF4 0019AE34  38 00 00 03 */ li r0, 3
/* 8019DEF8 0019AE38  48 00 00 08 */ b lbl_8019DF00
lbl_8019DEFC:
/* 8019DEFC 0019AE3C  38 00 00 04 */ li r0, 4
lbl_8019DF00:
/* 8019DF00 0019AE40  2C 00 00 01 */ cmpwi r0, 1
/* 8019DF04 0019AE44  40 82 00 0C */ bne lbl_8019DF10
/* 8019DF08 0019AE48  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 8019DF0C 0019AE4C  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_8019DF10:
/* 8019DF10 0019AE50  FC 1F 08 40 */ fcmpo cr0, f31, f1
/* 8019DF14 0019AE54  40 81 01 A8 */ ble lbl_8019E0BC
/* 8019DF18 0019AE58  80 9D 00 00 */ lwz r4, 0(r29)
/* 8019DF1C 0019AE5C  80 04 00 1C */ lwz r0, 0x1c(r4)
/* 8019DF20 0019AE60  54 00 04 21 */ rlwinm. r0, r0, 0, 0x10, 0x10
/* 8019DF24 0019AE64  41 82 00 2C */ beq lbl_8019DF50
/* 8019DF28 0019AE68  FC 1F F0 40 */ fcmpo cr0, f31, f30
/* 8019DF2C 0019AE6C  40 81 01 90 */ ble lbl_8019E0BC
/* 8019DF30 0019AE70  2C 18 00 00 */ cmpwi r24, 0
/* 8019DF34 0019AE74  40 82 00 08 */ bne lbl_8019DF3C
/* 8019DF38 0019AE78  7F 5C D3 78 */ mr r28, r26
lbl_8019DF3C:
/* 8019DF3C 0019AE7C  2C 18 00 00 */ cmpwi r24, 0
/* 8019DF40 0019AE80  41 82 00 08 */ beq lbl_8019DF48
/* 8019DF44 0019AE84  7F 5B D3 78 */ mr r27, r26
lbl_8019DF48:
/* 8019DF48 0019AE88  FF E0 F0 90 */ fmr f31, f30
/* 8019DF4C 0019AE8C  48 00 01 70 */ b lbl_8019E0BC
lbl_8019DF50:
/* 8019DF50 0019AE90  7E C3 B3 78 */ mr r3, r22
/* 8019DF54 0019AE94  48 1A 94 49 */ bl PSVECSquareDistance
/* 8019DF58 0019AE98  C0 02 A2 0C */ lfs f0, lbl_80453C0C-_SDA2_BASE_(r2)
/* 8019DF5C 0019AE9C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8019DF60 0019AEA0  40 81 00 58 */ ble lbl_8019DFB8
/* 8019DF64 0019AEA4  FC 00 08 34 */ frsqrte f0, f1
/* 8019DF68 0019AEA8  C8 82 A2 10 */ lfd f4, lbl_80453C10-_SDA2_BASE_(r2)
/* 8019DF6C 0019AEAC  FC 44 00 32 */ fmul f2, f4, f0
/* 8019DF70 0019AEB0  C8 62 A2 18 */ lfd f3, lbl_80453C18-_SDA2_BASE_(r2)
/* 8019DF74 0019AEB4  FC 00 00 32 */ fmul f0, f0, f0
/* 8019DF78 0019AEB8  FC 01 00 32 */ fmul f0, f1, f0
/* 8019DF7C 0019AEBC  FC 03 00 28 */ fsub f0, f3, f0
/* 8019DF80 0019AEC0  FC 02 00 32 */ fmul f0, f2, f0
/* 8019DF84 0019AEC4  FC 44 00 32 */ fmul f2, f4, f0
/* 8019DF88 0019AEC8  FC 00 00 32 */ fmul f0, f0, f0
/* 8019DF8C 0019AECC  FC 01 00 32 */ fmul f0, f1, f0
/* 8019DF90 0019AED0  FC 03 00 28 */ fsub f0, f3, f0
/* 8019DF94 0019AED4  FC 02 00 32 */ fmul f0, f2, f0
/* 8019DF98 0019AED8  FC 44 00 32 */ fmul f2, f4, f0
/* 8019DF9C 0019AEDC  FC 00 00 32 */ fmul f0, f0, f0
/* 8019DFA0 0019AEE0  FC 01 00 32 */ fmul f0, f1, f0
/* 8019DFA4 0019AEE4  FC 03 00 28 */ fsub f0, f3, f0
/* 8019DFA8 0019AEE8  FC 02 00 32 */ fmul f0, f2, f0
/* 8019DFAC 0019AEEC  FF E1 00 32 */ fmul f31, f1, f0
/* 8019DFB0 0019AEF0  FF E0 F8 18 */ frsp f31, f31
/* 8019DFB4 0019AEF4  48 00 00 90 */ b lbl_8019E044
lbl_8019DFB8:
/* 8019DFB8 0019AEF8  C8 02 A2 20 */ lfd f0, lbl_80453C20-_SDA2_BASE_(r2)
/* 8019DFBC 0019AEFC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8019DFC0 0019AF00  40 80 00 10 */ bge lbl_8019DFD0
/* 8019DFC4 0019AF04  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 8019DFC8 0019AF08  C3 E3 0A E0 */ lfs f31, lbl_80450AE0@l(r3)
/* 8019DFCC 0019AF0C  48 00 00 78 */ b lbl_8019E044
lbl_8019DFD0:
/* 8019DFD0 0019AF10  D0 21 00 08 */ stfs f1, 8(r1)
/* 8019DFD4 0019AF14  80 81 00 08 */ lwz r4, 8(r1)
/* 8019DFD8 0019AF18  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 8019DFDC 0019AF1C  3C 00 7F 80 */ lis r0, 0x7f80
/* 8019DFE0 0019AF20  7C 03 00 00 */ cmpw r3, r0
/* 8019DFE4 0019AF24  41 82 00 14 */ beq lbl_8019DFF8
/* 8019DFE8 0019AF28  40 80 00 40 */ bge lbl_8019E028
/* 8019DFEC 0019AF2C  2C 03 00 00 */ cmpwi r3, 0
/* 8019DFF0 0019AF30  41 82 00 20 */ beq lbl_8019E010
/* 8019DFF4 0019AF34  48 00 00 34 */ b lbl_8019E028
lbl_8019DFF8:
/* 8019DFF8 0019AF38  54 80 02 7F */ clrlwi. r0, r4, 9
/* 8019DFFC 0019AF3C  41 82 00 0C */ beq lbl_8019E008
/* 8019E000 0019AF40  38 00 00 01 */ li r0, 1
/* 8019E004 0019AF44  48 00 00 28 */ b lbl_8019E02C
lbl_8019E008:
/* 8019E008 0019AF48  38 00 00 02 */ li r0, 2
/* 8019E00C 0019AF4C  48 00 00 20 */ b lbl_8019E02C
lbl_8019E010:
/* 8019E010 0019AF50  54 80 02 7F */ clrlwi. r0, r4, 9
/* 8019E014 0019AF54  41 82 00 0C */ beq lbl_8019E020
/* 8019E018 0019AF58  38 00 00 05 */ li r0, 5
/* 8019E01C 0019AF5C  48 00 00 10 */ b lbl_8019E02C
lbl_8019E020:
/* 8019E020 0019AF60  38 00 00 03 */ li r0, 3
/* 8019E024 0019AF64  48 00 00 08 */ b lbl_8019E02C
lbl_8019E028:
/* 8019E028 0019AF68  38 00 00 04 */ li r0, 4
lbl_8019E02C:
/* 8019E02C 0019AF6C  2C 00 00 01 */ cmpwi r0, 1
/* 8019E030 0019AF70  40 82 00 10 */ bne lbl_8019E040
/* 8019E034 0019AF74  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 8019E038 0019AF78  C3 E3 0A E0 */ lfs f31, lbl_80450AE0@l(r3)
/* 8019E03C 0019AF7C  48 00 00 08 */ b lbl_8019E044
lbl_8019E040:
/* 8019E040 0019AF80  FF E0 08 90 */ fmr f31, f1
lbl_8019E044:
/* 8019E044 0019AF84  80 7D 00 00 */ lwz r3, 0(r29)
/* 8019E048 0019AF88  C0 03 00 14 */ lfs f0, 0x14(r3)
/* 8019E04C 0019AF8C  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 8019E050 0019AF90  40 80 00 50 */ bge lbl_8019E0A0
/* 8019E054 0019AF94  7F C3 F3 78 */ mr r3, r30
/* 8019E058 0019AF98  3C 80 80 39 */ lis r4, lbl_80394C6C@ha
/* 8019E05C 0019AF9C  38 84 4C 6C */ addi r4, r4, lbl_80394C6C@l
/* 8019E060 0019AFA0  38 84 00 2F */ addi r4, r4, 0x2f
/* 8019E064 0019AFA4  48 1C A9 31 */ bl strcmp
/* 8019E068 0019AFA8  2C 03 00 00 */ cmpwi r3, 0
/* 8019E06C 0019AFAC  40 82 00 30 */ bne lbl_8019E09C
/* 8019E070 0019AFB0  88 0D 87 E4 */ lbz r0, lbl_80450D64-_SDA_BASE_(r13)
/* 8019E074 0019AFB4  7C 00 07 75 */ extsb. r0, r0
/* 8019E078 0019AFB8  40 82 00 24 */ bne lbl_8019E09C
/* 8019E07C 0019AFBC  C0 22 A2 60 */ lfs f1, lbl_80453C60-_SDA2_BASE_(r2)
/* 8019E080 0019AFC0  80 7D 00 00 */ lwz r3, 0(r29)
/* 8019E084 0019AFC4  C0 03 00 14 */ lfs f0, 0x14(r3)
/* 8019E088 0019AFC8  EC 01 00 32 */ fmuls f0, f1, f0
/* 8019E08C 0019AFCC  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 8019E090 0019AFD0  40 80 00 10 */ bge lbl_8019E0A0
/* 8019E094 0019AFD4  3B 20 00 63 */ li r25, 0x63
/* 8019E098 0019AFD8  48 00 00 08 */ b lbl_8019E0A0
lbl_8019E09C:
/* 8019E09C 0019AFDC  3B 20 00 63 */ li r25, 0x63
lbl_8019E0A0:
/* 8019E0A0 0019AFE0  2C 19 FF FE */ cmpwi r25, -2
/* 8019E0A4 0019AFE4  41 82 00 18 */ beq lbl_8019E0BC
/* 8019E0A8 0019AFE8  2C 18 00 00 */ cmpwi r24, 0
/* 8019E0AC 0019AFEC  40 82 00 0C */ bne lbl_8019E0B8
/* 8019E0B0 0019AFF0  7F 5C D3 78 */ mr r28, r26
/* 8019E0B4 0019AFF4  48 00 00 08 */ b lbl_8019E0BC
lbl_8019E0B8:
/* 8019E0B8 0019AFF8  7F 5B D3 78 */ mr r27, r26
lbl_8019E0BC:
/* 8019E0BC 0019AFFC  80 7D 00 00 */ lwz r3, 0(r29)
/* 8019E0C0 0019B000  80 03 00 1C */ lwz r0, 0x1c(r3)
/* 8019E0C4 0019B004  2C 00 00 00 */ cmpwi r0, 0
/* 8019E0C8 0019B008  40 80 00 1C */ bge lbl_8019E0E4
/* 8019E0CC 0019B00C  2C 19 00 63 */ cmpwi r25, 0x63
/* 8019E0D0 0019B010  41 82 00 14 */ beq lbl_8019E0E4
/* 8019E0D4 0019B014  2C 18 00 00 */ cmpwi r24, 0
/* 8019E0D8 0019B018  40 82 00 08 */ bne lbl_8019E0E0
/* 8019E0DC 0019B01C  7F 5C D3 78 */ mr r28, r26
lbl_8019E0E0:
/* 8019E0E0 0019B020  3B 20 FF FE */ li r25, -2
lbl_8019E0E4:
/* 8019E0E4 0019B024  3B 5A 00 01 */ addi r26, r26, 1
/* 8019E0E8 0019B028  2C 1A 00 64 */ cmpwi r26, 0x64
/* 8019E0EC 0019B02C  3A B5 00 04 */ addi r21, r21, 4
/* 8019E0F0 0019B030  41 80 FD 00 */ blt lbl_8019DDF0
/* 8019E0F4 0019B034  C3 E2 A2 70 */ lfs f31, lbl_80453C70-_SDA2_BASE_(r2)
/* 8019E0F8 0019B038  3B 18 00 01 */ addi r24, r24, 1
lbl_8019E0FC:
/* 8019E0FC 0019B03C  7C 18 B8 00 */ cmpw r24, r23
/* 8019E100 0019B040  40 81 FC E8 */ ble lbl_8019DDE8
/* 8019E104 0019B044  2C 17 00 00 */ cmpwi r23, 0
/* 8019E108 0019B048  7F 63 DB 78 */ mr r3, r27
/* 8019E10C 0019B04C  40 82 00 08 */ bne lbl_8019E114
/* 8019E110 0019B050  7F 83 E3 78 */ mr r3, r28
lbl_8019E114:
/* 8019E114 0019B054  E3 E1 00 58 */ psq_l f31, 88(r1), 0, 0
/* 8019E118 0019B058  CB E1 00 50 */ lfd f31, 0x50(r1)
/* 8019E11C 0019B05C  E3 C1 00 48 */ psq_l f30, 72(r1), 0, 0
/* 8019E120 0019B060  CB C1 00 40 */ lfd f30, 0x40(r1)
/* 8019E124 0019B064  39 61 00 40 */ addi r11, r1, 0x40
/* 8019E128 0019B068  48 1C 40 E1 */ bl _restgpr_21
/* 8019E12C 0019B06C  80 01 00 64 */ lwz r0, 0x64(r1)
/* 8019E130 0019B070  7C 08 03 A6 */ mtlr r0
/* 8019E134 0019B074  38 21 00 60 */ addi r1, r1, 0x60
/* 8019E138 0019B078  4E 80 00 20 */ blr
