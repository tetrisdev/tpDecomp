/* 8016608C 00162FCC  94 21 FD F0 */ stwu r1, -0x210(r1)
/* 80166090 00162FD0  7C 08 02 A6 */ mflr r0
/* 80166094 00162FD4  90 01 02 14 */ stw r0, 0x214(r1)
/* 80166098 00162FD8  DB E1 02 00 */ stfd f31, 0x200(r1)
/* 8016609C 00162FDC  F3 E1 02 08 */ psq_st f31, 520(r1), 0, 0
/* 801660A0 00162FE0  DB C1 01 F0 */ stfd f30, 0x1f0(r1)
/* 801660A4 00162FE4  F3 C1 01 F8 */ psq_st f30, 504(r1), 0, 0
/* 801660A8 00162FE8  39 61 01 F0 */ addi r11, r1, 0x1f0
/* 801660AC 00162FEC  48 1F C1 2D */ bl _savegpr_28
/* 801660B0 00162FF0  7C 7D 1B 78 */ mr r29, r3
/* 801660B4 00162FF4  7C 9E 23 78 */ mr r30, r4
/* 801660B8 00162FF8  38 61 01 64 */ addi r3, r1, 0x164
/* 801660BC 00162FFC  4B F1 1C E9 */ bl __ct__14dBgS_CamLinChkFv
/* 801660C0 00163000  38 61 00 3C */ addi r3, r1, 0x3c
/* 801660C4 00163004  38 8D 8C 08 */ addi r4, r13, 0x80451188 - 0x80458580 /*SDA HACK; original: lbl_80451188-_SDA_BASE_*/
/* 801660C8 00163008  48 10 AE A1 */ bl __ct__7cSAngleFRC7cSAngle
/* 801660CC 0016300C  38 61 01 10 */ addi r3, r1, 0x110
/* 801660D0 00163010  7F C4 F3 78 */ mr r4, r30
/* 801660D4 00163014  80 BE 01 80 */ lwz r5, 0x180(r30)
/* 801660D8 00163018  4B F3 16 85 */ bl positionOf__9dCamera_cFP10fopAc_ac_c
/* 801660DC 0016301C  C0 01 01 10 */ lfs f0, 0x110(r1)
/* 801660E0 00163020  D0 01 01 58 */ stfs f0, 0x158(r1)
/* 801660E4 00163024  C0 01 01 14 */ lfs f0, 0x114(r1)
/* 801660E8 00163028  D0 01 01 5C */ stfs f0, 0x15c(r1)
/* 801660EC 0016302C  C0 01 01 18 */ lfs f0, 0x118(r1)
/* 801660F0 00163030  D0 01 01 60 */ stfs f0, 0x160(r1)
/* 801660F4 00163034  7F C3 F3 78 */ mr r3, r30
/* 801660F8 00163038  80 9E 01 80 */ lwz r4, 0x180(r30)
/* 801660FC 0016303C  4B FF EC 31 */ bl heightOf__9dCamera_cFP10fopAc_ac_c
/* 80166100 00163040  FF E0 08 90 */ fmr f31, f1
/* 80166104 00163044  C0 01 01 5C */ lfs f0, 0x15c(r1)
/* 80166108 00163048  EC 00 F8 2A */ fadds f0, f0, f31
/* 8016610C 0016304C  D0 01 01 5C */ stfs f0, 0x15c(r1)
/* 80166110 00163050  C0 22 9D 20 */ lfs f1, lbl_80453720-_SDA2_BASE_(r2)
/* 80166114 00163054  C0 1E 0A 8C */ lfs f0, 0xa8c(r30)
/* 80166118 00163058  EC 01 00 32 */ fmuls f0, f1, f0
/* 8016611C 0016305C  FC 00 00 1E */ fctiwz f0, f0
/* 80166120 00163060  D8 01 01 D8 */ stfd f0, 0x1d8(r1)
/* 80166124 00163064  80 81 01 DC */ lwz r4, 0x1dc(r1)
/* 80166128 00163068  38 61 00 30 */ addi r3, r1, 0x30
/* 8016612C 0016306C  48 10 AE 6D */ bl __ct__7cSAngleFs
/* 80166130 00163070  AB 81 00 30 */ lha r28, 0x30(r1)
/* 80166134 00163074  C3 DE 0A 88 */ lfs f30, 0xa88(r30)
/* 80166138 00163078  3B FE 00 2E */ addi r31, r30, 0x2e
/* 8016613C 0016307C  7F E3 FB 78 */ mr r3, r31
/* 80166140 00163080  48 10 AF A9 */ bl Inv__7cSAngleCFv
/* 80166144 00163084  7C 65 1B 78 */ mr r5, r3
/* 80166148 00163088  38 61 00 60 */ addi r3, r1, 0x60
/* 8016614C 0016308C  EC 3F 07 B2 */ fmuls f1, f31, f30
/* 80166150 00163090  7F 84 E3 78 */ mr r4, r28
/* 80166154 00163094  48 10 B6 CD */ bl __ct__7cSGlobeFfss
/* 80166158 00163098  38 61 01 04 */ addi r3, r1, 0x104
/* 8016615C 0016309C  38 81 00 60 */ addi r4, r1, 0x60
/* 80166160 001630A0  48 10 B9 55 */ bl Xyz__7cSGlobeCFv
/* 80166164 001630A4  38 61 00 F8 */ addi r3, r1, 0xf8
/* 80166168 001630A8  38 81 01 58 */ addi r4, r1, 0x158
/* 8016616C 001630AC  38 A1 01 04 */ addi r5, r1, 0x104
/* 80166170 001630B0  48 10 09 75 */ bl __pl__4cXyzCFRC3Vec
/* 80166174 001630B4  C0 01 00 F8 */ lfs f0, 0xf8(r1)
/* 80166178 001630B8  D0 01 01 40 */ stfs f0, 0x140(r1)
/* 8016617C 001630BC  C0 01 00 FC */ lfs f0, 0xfc(r1)
/* 80166180 001630C0  D0 01 01 44 */ stfs f0, 0x144(r1)
/* 80166184 001630C4  C0 01 01 00 */ lfs f0, 0x100(r1)
/* 80166188 001630C8  D0 01 01 48 */ stfs f0, 0x148(r1)
/* 8016618C 001630CC  7F C3 F3 78 */ mr r3, r30
/* 80166190 001630D0  38 81 01 58 */ addi r4, r1, 0x158
/* 80166194 001630D4  38 A1 01 40 */ addi r5, r1, 0x140
/* 80166198 001630D8  38 C1 01 4C */ addi r6, r1, 0x14c
/* 8016619C 001630DC  38 E0 40 B7 */ li r7, 0x40b7
/* 801661A0 001630E0  4B FF F8 55 */ bl lineBGCheck__9dCamera_cFP4cXyzP4cXyzP4cXyzUl
/* 801661A4 001630E4  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 801661A8 001630E8  41 82 01 84 */ beq lbl_8016632C
/* 801661AC 001630EC  38 61 00 EC */ addi r3, r1, 0xec
/* 801661B0 001630F0  38 81 01 40 */ addi r4, r1, 0x140
/* 801661B4 001630F4  38 A1 01 58 */ addi r5, r1, 0x158
/* 801661B8 001630F8  48 10 09 7D */ bl __mi__4cXyzCFRC3Vec
/* 801661BC 001630FC  C0 01 00 EC */ lfs f0, 0xec(r1)
/* 801661C0 00163100  D0 01 01 34 */ stfs f0, 0x134(r1)
/* 801661C4 00163104  C0 01 00 F0 */ lfs f0, 0xf0(r1)
/* 801661C8 00163108  D0 01 01 38 */ stfs f0, 0x138(r1)
/* 801661CC 0016310C  C0 01 00 F4 */ lfs f0, 0xf4(r1)
/* 801661D0 00163110  D0 01 01 3C */ stfs f0, 0x13c(r1)
/* 801661D4 00163114  38 61 01 34 */ addi r3, r1, 0x134
/* 801661D8 00163118  48 1E 0F 61 */ bl PSVECSquareMag
/* 801661DC 0016311C  C0 02 9C A0 */ lfs f0, lbl_804536A0-_SDA2_BASE_(r2)
/* 801661E0 00163120  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 801661E4 00163124  40 81 00 58 */ ble lbl_8016623C
/* 801661E8 00163128  FC 00 08 34 */ frsqrte f0, f1
/* 801661EC 0016312C  C8 82 9C C8 */ lfd f4, lbl_804536C8-_SDA2_BASE_(r2)
/* 801661F0 00163130  FC 44 00 32 */ fmul f2, f4, f0
/* 801661F4 00163134  C8 62 9C D0 */ lfd f3, lbl_804536D0-_SDA2_BASE_(r2)
/* 801661F8 00163138  FC 00 00 32 */ fmul f0, f0, f0
/* 801661FC 0016313C  FC 01 00 32 */ fmul f0, f1, f0
/* 80166200 00163140  FC 03 00 28 */ fsub f0, f3, f0
/* 80166204 00163144  FC 02 00 32 */ fmul f0, f2, f0
/* 80166208 00163148  FC 44 00 32 */ fmul f2, f4, f0
/* 8016620C 0016314C  FC 00 00 32 */ fmul f0, f0, f0
/* 80166210 00163150  FC 01 00 32 */ fmul f0, f1, f0
/* 80166214 00163154  FC 03 00 28 */ fsub f0, f3, f0
/* 80166218 00163158  FC 02 00 32 */ fmul f0, f2, f0
/* 8016621C 0016315C  FC 44 00 32 */ fmul f2, f4, f0
/* 80166220 00163160  FC 00 00 32 */ fmul f0, f0, f0
/* 80166224 00163164  FC 01 00 32 */ fmul f0, f1, f0
/* 80166228 00163168  FC 03 00 28 */ fsub f0, f3, f0
/* 8016622C 0016316C  FC 02 00 32 */ fmul f0, f2, f0
/* 80166230 00163170  FC 21 00 32 */ fmul f1, f1, f0
/* 80166234 00163174  FC 20 08 18 */ frsp f1, f1
/* 80166238 00163178  48 00 00 88 */ b lbl_801662C0
lbl_8016623C:
/* 8016623C 0016317C  C8 02 9C D8 */ lfd f0, lbl_804536D8-_SDA2_BASE_(r2)
/* 80166240 00163180  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80166244 00163184  40 80 00 10 */ bge lbl_80166254
/* 80166248 00163188  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 8016624C 0016318C  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 80166250 00163190  48 00 00 70 */ b lbl_801662C0
lbl_80166254:
/* 80166254 00163194  D0 21 00 44 */ stfs f1, 0x44(r1)
/* 80166258 00163198  80 81 00 44 */ lwz r4, 0x44(r1)
/* 8016625C 0016319C  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80166260 001631A0  3C 00 7F 80 */ lis r0, 0x7f80
/* 80166264 001631A4  7C 03 00 00 */ cmpw r3, r0
/* 80166268 001631A8  41 82 00 14 */ beq lbl_8016627C
/* 8016626C 001631AC  40 80 00 40 */ bge lbl_801662AC
/* 80166270 001631B0  2C 03 00 00 */ cmpwi r3, 0
/* 80166274 001631B4  41 82 00 20 */ beq lbl_80166294
/* 80166278 001631B8  48 00 00 34 */ b lbl_801662AC
lbl_8016627C:
/* 8016627C 001631BC  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80166280 001631C0  41 82 00 0C */ beq lbl_8016628C
/* 80166284 001631C4  38 00 00 01 */ li r0, 1
/* 80166288 001631C8  48 00 00 28 */ b lbl_801662B0
lbl_8016628C:
/* 8016628C 001631CC  38 00 00 02 */ li r0, 2
/* 80166290 001631D0  48 00 00 20 */ b lbl_801662B0
lbl_80166294:
/* 80166294 001631D4  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80166298 001631D8  41 82 00 0C */ beq lbl_801662A4
/* 8016629C 001631DC  38 00 00 05 */ li r0, 5
/* 801662A0 001631E0  48 00 00 10 */ b lbl_801662B0
lbl_801662A4:
/* 801662A4 001631E4  38 00 00 03 */ li r0, 3
/* 801662A8 001631E8  48 00 00 08 */ b lbl_801662B0
lbl_801662AC:
/* 801662AC 001631EC  38 00 00 04 */ li r0, 4
lbl_801662B0:
/* 801662B0 001631F0  2C 00 00 01 */ cmpwi r0, 1
/* 801662B4 001631F4  40 82 00 0C */ bne lbl_801662C0
/* 801662B8 001631F8  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 801662BC 001631FC  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_801662C0:
/* 801662C0 00163200  C0 02 9C A8 */ lfs f0, lbl_804536A8-_SDA2_BASE_(r2)
/* 801662C4 00163204  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 801662C8 00163208  40 80 00 20 */ bge lbl_801662E8
/* 801662CC 0016320C  C0 01 01 4C */ lfs f0, 0x14c(r1)
/* 801662D0 00163210  D0 01 01 40 */ stfs f0, 0x140(r1)
/* 801662D4 00163214  C0 01 01 50 */ lfs f0, 0x150(r1)
/* 801662D8 00163218  D0 01 01 44 */ stfs f0, 0x144(r1)
/* 801662DC 0016321C  C0 01 01 54 */ lfs f0, 0x154(r1)
/* 801662E0 00163220  D0 01 01 48 */ stfs f0, 0x148(r1)
/* 801662E4 00163224  48 00 00 48 */ b lbl_8016632C
lbl_801662E8:
/* 801662E8 00163228  38 61 00 E0 */ addi r3, r1, 0xe0
/* 801662EC 0016322C  38 81 01 34 */ addi r4, r1, 0x134
/* 801662F0 00163230  48 10 09 F5 */ bl norm__4cXyzCFv
/* 801662F4 00163234  38 61 00 D4 */ addi r3, r1, 0xd4
/* 801662F8 00163238  38 81 00 E0 */ addi r4, r1, 0xe0
/* 801662FC 0016323C  C0 3E 0A A8 */ lfs f1, 0xaa8(r30)
/* 80166300 00163240  48 10 08 85 */ bl __ml__4cXyzCFf
/* 80166304 00163244  38 61 00 C8 */ addi r3, r1, 0xc8
/* 80166308 00163248  38 81 01 4C */ addi r4, r1, 0x14c
/* 8016630C 0016324C  38 A1 00 D4 */ addi r5, r1, 0xd4
/* 80166310 00163250  48 10 08 25 */ bl __mi__4cXyzCFRC3Vec
/* 80166314 00163254  C0 01 00 C8 */ lfs f0, 0xc8(r1)
/* 80166318 00163258  D0 01 01 40 */ stfs f0, 0x140(r1)
/* 8016631C 0016325C  C0 01 00 CC */ lfs f0, 0xcc(r1)
/* 80166320 00163260  D0 01 01 44 */ stfs f0, 0x144(r1)
/* 80166324 00163264  C0 01 00 D0 */ lfs f0, 0xd0(r1)
/* 80166328 00163268  D0 01 01 48 */ stfs f0, 0x148(r1)
lbl_8016632C:
/* 8016632C 0016326C  C0 01 01 40 */ lfs f0, 0x140(r1)
/* 80166330 00163270  D0 01 01 4C */ stfs f0, 0x14c(r1)
/* 80166334 00163274  C0 01 01 44 */ lfs f0, 0x144(r1)
/* 80166338 00163278  D0 01 01 50 */ stfs f0, 0x150(r1)
/* 8016633C 0016327C  C0 01 01 48 */ lfs f0, 0x148(r1)
/* 80166340 00163280  D0 01 01 54 */ stfs f0, 0x154(r1)
/* 80166344 00163284  7F C3 F3 78 */ mr r3, r30
/* 80166348 00163288  38 81 01 40 */ addi r4, r1, 0x140
/* 8016634C 0016328C  4B FF F4 A1 */ bl groundHeight__9dCamera_cFP4cXyz
/* 80166350 00163290  EC 1F 08 2A */ fadds f0, f31, f1
/* 80166354 00163294  D0 01 01 50 */ stfs f0, 0x150(r1)
/* 80166358 00163298  38 61 00 BC */ addi r3, r1, 0xbc
/* 8016635C 0016329C  38 81 01 4C */ addi r4, r1, 0x14c
/* 80166360 001632A0  38 A1 01 58 */ addi r5, r1, 0x158
/* 80166364 001632A4  48 10 07 D1 */ bl __mi__4cXyzCFRC3Vec
/* 80166368 001632A8  38 61 00 58 */ addi r3, r1, 0x58
/* 8016636C 001632AC  38 81 00 BC */ addi r4, r1, 0xbc
/* 80166370 001632B0  48 10 B5 11 */ bl __ct__7cSGlobeFRC4cXyz
/* 80166374 001632B4  38 81 00 5C */ addi r4, r1, 0x5c
/* 80166378 001632B8  A8 61 00 5C */ lha r3, 0x5c(r1)
/* 8016637C 001632BC  A8 0D 8C 08 */ lha r0, lbl_80451188-_SDA_BASE_(r13)
/* 80166380 001632C0  7C 03 00 00 */ cmpw r3, r0
/* 80166384 001632C4  41 80 00 1C */ blt lbl_801663A0
/* 80166388 001632C8  38 61 00 28 */ addi r3, r1, 0x28
/* 8016638C 001632CC  C0 3E 0A 90 */ lfs f1, 0xa90(r30)
/* 80166390 001632D0  48 10 AE D5 */ bl __ml__7cSAngleCFf
/* 80166394 001632D4  A8 01 00 28 */ lha r0, 0x28(r1)
/* 80166398 001632D8  B0 01 00 38 */ sth r0, 0x38(r1)
/* 8016639C 001632DC  48 00 00 18 */ b lbl_801663B4
lbl_801663A0:
/* 801663A0 001632E0  38 61 00 24 */ addi r3, r1, 0x24
/* 801663A4 001632E4  C0 3E 0A 94 */ lfs f1, 0xa94(r30)
/* 801663A8 001632E8  48 10 AE BD */ bl __ml__7cSAngleCFf
/* 801663AC 001632EC  A8 01 00 24 */ lha r0, 0x24(r1)
/* 801663B0 001632F0  B0 01 00 38 */ sth r0, 0x38(r1)
lbl_801663B4:
/* 801663B4 001632F4  C0 22 9D 20 */ lfs f1, lbl_80453720-_SDA2_BASE_(r2)
/* 801663B8 001632F8  C0 1E 0A 9C */ lfs f0, 0xa9c(r30)
/* 801663BC 001632FC  EC 01 00 32 */ fmuls f0, f1, f0
/* 801663C0 00163300  FC 00 00 1E */ fctiwz f0, f0
/* 801663C4 00163304  D8 01 01 D8 */ stfd f0, 0x1d8(r1)
/* 801663C8 00163308  80 81 01 DC */ lwz r4, 0x1dc(r1)
/* 801663CC 0016330C  38 61 00 2C */ addi r3, r1, 0x2c
/* 801663D0 00163310  48 10 AB C9 */ bl __ct__7cSAngleFs
/* 801663D4 00163314  AB 81 00 2C */ lha r28, 0x2c(r1)
/* 801663D8 00163318  C3 DE 0A 98 */ lfs f30, 0xa98(r30)
/* 801663DC 0016331C  7F E3 FB 78 */ mr r3, r31
/* 801663E0 00163320  48 10 AD 09 */ bl Inv__7cSAngleCFv
/* 801663E4 00163324  7C 65 1B 78 */ mr r5, r3
/* 801663E8 00163328  38 61 00 50 */ addi r3, r1, 0x50
/* 801663EC 0016332C  EC 3F 07 B2 */ fmuls f1, f31, f30
/* 801663F0 00163330  7F 84 E3 78 */ mr r4, r28
/* 801663F4 00163334  48 10 B4 2D */ bl __ct__7cSGlobeFfss
/* 801663F8 00163338  38 61 00 B0 */ addi r3, r1, 0xb0
/* 801663FC 0016333C  38 81 00 50 */ addi r4, r1, 0x50
/* 80166400 00163340  48 10 B6 B5 */ bl Xyz__7cSGlobeCFv
/* 80166404 00163344  38 61 00 A4 */ addi r3, r1, 0xa4
/* 80166408 00163348  38 81 01 58 */ addi r4, r1, 0x158
/* 8016640C 0016334C  38 A1 00 B0 */ addi r5, r1, 0xb0
/* 80166410 00163350  48 10 06 D5 */ bl __pl__4cXyzCFRC3Vec
/* 80166414 00163354  C0 01 00 A4 */ lfs f0, 0xa4(r1)
/* 80166418 00163358  D0 01 01 28 */ stfs f0, 0x128(r1)
/* 8016641C 0016335C  C0 01 00 A8 */ lfs f0, 0xa8(r1)
/* 80166420 00163360  D0 01 01 2C */ stfs f0, 0x12c(r1)
/* 80166424 00163364  C0 01 00 AC */ lfs f0, 0xac(r1)
/* 80166428 00163368  D0 01 01 30 */ stfs f0, 0x130(r1)
/* 8016642C 0016336C  7F C3 F3 78 */ mr r3, r30
/* 80166430 00163370  38 81 01 58 */ addi r4, r1, 0x158
/* 80166434 00163374  38 A1 01 28 */ addi r5, r1, 0x128
/* 80166438 00163378  38 C1 01 4C */ addi r6, r1, 0x14c
/* 8016643C 0016337C  38 E0 40 B7 */ li r7, 0x40b7
/* 80166440 00163380  4B FF F5 B5 */ bl lineBGCheck__9dCamera_cFP4cXyzP4cXyzP4cXyzUl
/* 80166444 00163384  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80166448 00163388  41 82 01 84 */ beq lbl_801665CC
/* 8016644C 0016338C  38 61 00 98 */ addi r3, r1, 0x98
/* 80166450 00163390  38 81 01 28 */ addi r4, r1, 0x128
/* 80166454 00163394  38 A1 01 58 */ addi r5, r1, 0x158
/* 80166458 00163398  48 10 06 DD */ bl __mi__4cXyzCFRC3Vec
/* 8016645C 0016339C  C0 01 00 98 */ lfs f0, 0x98(r1)
/* 80166460 001633A0  D0 01 01 1C */ stfs f0, 0x11c(r1)
/* 80166464 001633A4  C0 01 00 9C */ lfs f0, 0x9c(r1)
/* 80166468 001633A8  D0 01 01 20 */ stfs f0, 0x120(r1)
/* 8016646C 001633AC  C0 01 00 A0 */ lfs f0, 0xa0(r1)
/* 80166470 001633B0  D0 01 01 24 */ stfs f0, 0x124(r1)
/* 80166474 001633B4  38 61 01 1C */ addi r3, r1, 0x11c
/* 80166478 001633B8  48 1E 0C C1 */ bl PSVECSquareMag
/* 8016647C 001633BC  C0 02 9C A0 */ lfs f0, lbl_804536A0-_SDA2_BASE_(r2)
/* 80166480 001633C0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80166484 001633C4  40 81 00 58 */ ble lbl_801664DC
/* 80166488 001633C8  FC 00 08 34 */ frsqrte f0, f1
/* 8016648C 001633CC  C8 82 9C C8 */ lfd f4, lbl_804536C8-_SDA2_BASE_(r2)
/* 80166490 001633D0  FC 44 00 32 */ fmul f2, f4, f0
/* 80166494 001633D4  C8 62 9C D0 */ lfd f3, lbl_804536D0-_SDA2_BASE_(r2)
/* 80166498 001633D8  FC 00 00 32 */ fmul f0, f0, f0
/* 8016649C 001633DC  FC 01 00 32 */ fmul f0, f1, f0
/* 801664A0 001633E0  FC 03 00 28 */ fsub f0, f3, f0
/* 801664A4 001633E4  FC 02 00 32 */ fmul f0, f2, f0
/* 801664A8 001633E8  FC 44 00 32 */ fmul f2, f4, f0
/* 801664AC 001633EC  FC 00 00 32 */ fmul f0, f0, f0
/* 801664B0 001633F0  FC 01 00 32 */ fmul f0, f1, f0
/* 801664B4 001633F4  FC 03 00 28 */ fsub f0, f3, f0
/* 801664B8 001633F8  FC 02 00 32 */ fmul f0, f2, f0
/* 801664BC 001633FC  FC 44 00 32 */ fmul f2, f4, f0
/* 801664C0 00163400  FC 00 00 32 */ fmul f0, f0, f0
/* 801664C4 00163404  FC 01 00 32 */ fmul f0, f1, f0
/* 801664C8 00163408  FC 03 00 28 */ fsub f0, f3, f0
/* 801664CC 0016340C  FC 02 00 32 */ fmul f0, f2, f0
/* 801664D0 00163410  FC 21 00 32 */ fmul f1, f1, f0
/* 801664D4 00163414  FC 20 08 18 */ frsp f1, f1
/* 801664D8 00163418  48 00 00 88 */ b lbl_80166560
lbl_801664DC:
/* 801664DC 0016341C  C8 02 9C D8 */ lfd f0, lbl_804536D8-_SDA2_BASE_(r2)
/* 801664E0 00163420  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 801664E4 00163424  40 80 00 10 */ bge lbl_801664F4
/* 801664E8 00163428  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 801664EC 0016342C  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 801664F0 00163430  48 00 00 70 */ b lbl_80166560
lbl_801664F4:
/* 801664F4 00163434  D0 21 00 40 */ stfs f1, 0x40(r1)
/* 801664F8 00163438  80 81 00 40 */ lwz r4, 0x40(r1)
/* 801664FC 0016343C  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80166500 00163440  3C 00 7F 80 */ lis r0, 0x7f80
/* 80166504 00163444  7C 03 00 00 */ cmpw r3, r0
/* 80166508 00163448  41 82 00 14 */ beq lbl_8016651C
/* 8016650C 0016344C  40 80 00 40 */ bge lbl_8016654C
/* 80166510 00163450  2C 03 00 00 */ cmpwi r3, 0
/* 80166514 00163454  41 82 00 20 */ beq lbl_80166534
/* 80166518 00163458  48 00 00 34 */ b lbl_8016654C
lbl_8016651C:
/* 8016651C 0016345C  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80166520 00163460  41 82 00 0C */ beq lbl_8016652C
/* 80166524 00163464  38 00 00 01 */ li r0, 1
/* 80166528 00163468  48 00 00 28 */ b lbl_80166550
lbl_8016652C:
/* 8016652C 0016346C  38 00 00 02 */ li r0, 2
/* 80166530 00163470  48 00 00 20 */ b lbl_80166550
lbl_80166534:
/* 80166534 00163474  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80166538 00163478  41 82 00 0C */ beq lbl_80166544
/* 8016653C 0016347C  38 00 00 05 */ li r0, 5
/* 80166540 00163480  48 00 00 10 */ b lbl_80166550
lbl_80166544:
/* 80166544 00163484  38 00 00 03 */ li r0, 3
/* 80166548 00163488  48 00 00 08 */ b lbl_80166550
lbl_8016654C:
/* 8016654C 0016348C  38 00 00 04 */ li r0, 4
lbl_80166550:
/* 80166550 00163490  2C 00 00 01 */ cmpwi r0, 1
/* 80166554 00163494  40 82 00 0C */ bne lbl_80166560
/* 80166558 00163498  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 8016655C 0016349C  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_80166560:
/* 80166560 001634A0  C0 02 9C A8 */ lfs f0, lbl_804536A8-_SDA2_BASE_(r2)
/* 80166564 001634A4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80166568 001634A8  40 80 00 20 */ bge lbl_80166588
/* 8016656C 001634AC  C0 01 01 4C */ lfs f0, 0x14c(r1)
/* 80166570 001634B0  D0 01 01 28 */ stfs f0, 0x128(r1)
/* 80166574 001634B4  C0 01 01 50 */ lfs f0, 0x150(r1)
/* 80166578 001634B8  D0 01 01 2C */ stfs f0, 0x12c(r1)
/* 8016657C 001634BC  C0 01 01 54 */ lfs f0, 0x154(r1)
/* 80166580 001634C0  D0 01 01 30 */ stfs f0, 0x130(r1)
/* 80166584 001634C4  48 00 00 48 */ b lbl_801665CC
lbl_80166588:
/* 80166588 001634C8  38 61 00 8C */ addi r3, r1, 0x8c
/* 8016658C 001634CC  38 81 01 1C */ addi r4, r1, 0x11c
/* 80166590 001634D0  48 10 07 55 */ bl norm__4cXyzCFv
/* 80166594 001634D4  38 61 00 80 */ addi r3, r1, 0x80
/* 80166598 001634D8  38 81 00 8C */ addi r4, r1, 0x8c
/* 8016659C 001634DC  C0 3E 0A A8 */ lfs f1, 0xaa8(r30)
/* 801665A0 001634E0  48 10 05 E5 */ bl __ml__4cXyzCFf
/* 801665A4 001634E4  38 61 00 74 */ addi r3, r1, 0x74
/* 801665A8 001634E8  38 81 01 4C */ addi r4, r1, 0x14c
/* 801665AC 001634EC  38 A1 00 80 */ addi r5, r1, 0x80
/* 801665B0 001634F0  48 10 05 85 */ bl __mi__4cXyzCFRC3Vec
/* 801665B4 001634F4  C0 01 00 74 */ lfs f0, 0x74(r1)
/* 801665B8 001634F8  D0 01 01 28 */ stfs f0, 0x128(r1)
/* 801665BC 001634FC  C0 01 00 78 */ lfs f0, 0x78(r1)
/* 801665C0 00163500  D0 01 01 2C */ stfs f0, 0x12c(r1)
/* 801665C4 00163504  C0 01 00 7C */ lfs f0, 0x7c(r1)
/* 801665C8 00163508  D0 01 01 30 */ stfs f0, 0x130(r1)
lbl_801665CC:
/* 801665CC 0016350C  C0 01 01 28 */ lfs f0, 0x128(r1)
/* 801665D0 00163510  D0 01 01 4C */ stfs f0, 0x14c(r1)
/* 801665D4 00163514  C0 01 01 2C */ lfs f0, 0x12c(r1)
/* 801665D8 00163518  D0 01 01 50 */ stfs f0, 0x150(r1)
/* 801665DC 0016351C  C0 01 01 30 */ lfs f0, 0x130(r1)
/* 801665E0 00163520  D0 01 01 54 */ stfs f0, 0x154(r1)
/* 801665E4 00163524  7F C3 F3 78 */ mr r3, r30
/* 801665E8 00163528  38 81 01 28 */ addi r4, r1, 0x128
/* 801665EC 0016352C  4B FF F2 01 */ bl groundHeight__9dCamera_cFP4cXyz
/* 801665F0 00163530  EC 1F 08 2A */ fadds f0, f31, f1
/* 801665F4 00163534  D0 01 01 50 */ stfs f0, 0x150(r1)
/* 801665F8 00163538  38 61 00 68 */ addi r3, r1, 0x68
/* 801665FC 0016353C  38 81 01 4C */ addi r4, r1, 0x14c
/* 80166600 00163540  38 A1 01 58 */ addi r5, r1, 0x158
/* 80166604 00163544  48 10 05 31 */ bl __mi__4cXyzCFRC3Vec
/* 80166608 00163548  38 61 00 48 */ addi r3, r1, 0x48
/* 8016660C 0016354C  38 81 00 68 */ addi r4, r1, 0x68
/* 80166610 00163550  48 10 B2 71 */ bl __ct__7cSGlobeFRC4cXyz
/* 80166614 00163554  38 81 00 4C */ addi r4, r1, 0x4c
/* 80166618 00163558  A8 61 00 4C */ lha r3, 0x4c(r1)
/* 8016661C 0016355C  A8 0D 8C 08 */ lha r0, lbl_80451188-_SDA_BASE_(r13)
/* 80166620 00163560  7C 03 00 00 */ cmpw r3, r0
/* 80166624 00163564  41 80 00 1C */ blt lbl_80166640
/* 80166628 00163568  38 61 00 20 */ addi r3, r1, 0x20
/* 8016662C 0016356C  C0 3E 0A A0 */ lfs f1, 0xaa0(r30)
/* 80166630 00163570  48 10 AC 35 */ bl __ml__7cSAngleCFf
/* 80166634 00163574  A8 01 00 20 */ lha r0, 0x20(r1)
/* 80166638 00163578  B0 01 00 34 */ sth r0, 0x34(r1)
/* 8016663C 0016357C  48 00 00 18 */ b lbl_80166654
lbl_80166640:
/* 80166640 00163580  38 61 00 1C */ addi r3, r1, 0x1c
/* 80166644 00163584  C0 3E 0A A4 */ lfs f1, 0xaa4(r30)
/* 80166648 00163588  48 10 AC 1D */ bl __ml__7cSAngleCFf
/* 8016664C 0016358C  A8 01 00 1C */ lha r0, 0x1c(r1)
/* 80166650 00163590  B0 01 00 34 */ sth r0, 0x34(r1)
lbl_80166654:
/* 80166654 00163594  A8 81 00 38 */ lha r4, 0x38(r1)
/* 80166658 00163598  A8 0D 8C 08 */ lha r0, lbl_80451188-_SDA_BASE_(r13)
/* 8016665C 0016359C  7C 04 00 00 */ cmpw r4, r0
/* 80166660 001635A0  41 80 00 48 */ blt lbl_801666A8
/* 80166664 001635A4  A8 61 00 34 */ lha r3, 0x34(r1)
/* 80166668 001635A8  7C 03 00 00 */ cmpw r3, r0
/* 8016666C 001635AC  41 80 00 3C */ blt lbl_801666A8
/* 80166670 001635B0  7C 04 18 00 */ cmpw r4, r3
/* 80166674 001635B4  41 80 00 18 */ blt lbl_8016668C
/* 80166678 001635B8  38 61 00 18 */ addi r3, r1, 0x18
/* 8016667C 001635BC  38 81 00 38 */ addi r4, r1, 0x38
/* 80166680 001635C0  48 10 AA C9 */ bl __mi__7cSAngleCFv
/* 80166684 001635C4  38 61 00 18 */ addi r3, r1, 0x18
/* 80166688 001635C8  48 00 00 14 */ b lbl_8016669C
lbl_8016668C:
/* 8016668C 001635CC  38 61 00 14 */ addi r3, r1, 0x14
/* 80166690 001635D0  38 81 00 34 */ addi r4, r1, 0x34
/* 80166694 001635D4  48 10 AA B5 */ bl __mi__7cSAngleCFv
/* 80166698 001635D8  38 61 00 14 */ addi r3, r1, 0x14
lbl_8016669C:
/* 8016669C 001635DC  A8 03 00 00 */ lha r0, 0(r3)
/* 801666A0 001635E0  B0 01 00 3C */ sth r0, 0x3c(r1)
/* 801666A4 001635E4  48 00 00 64 */ b lbl_80166708
lbl_801666A8:
/* 801666A8 001635E8  7C 04 00 00 */ cmpw r4, r0
/* 801666AC 001635EC  41 81 00 48 */ bgt lbl_801666F4
/* 801666B0 001635F0  A8 61 00 34 */ lha r3, 0x34(r1)
/* 801666B4 001635F4  7C 03 00 00 */ cmpw r3, r0
/* 801666B8 001635F8  41 81 00 3C */ bgt lbl_801666F4
/* 801666BC 001635FC  7C 04 18 00 */ cmpw r4, r3
/* 801666C0 00163600  41 81 00 18 */ bgt lbl_801666D8
/* 801666C4 00163604  38 61 00 10 */ addi r3, r1, 0x10
/* 801666C8 00163608  38 81 00 38 */ addi r4, r1, 0x38
/* 801666CC 0016360C  48 10 AA 7D */ bl __mi__7cSAngleCFv
/* 801666D0 00163610  38 61 00 10 */ addi r3, r1, 0x10
/* 801666D4 00163614  48 00 00 14 */ b lbl_801666E8
lbl_801666D8:
/* 801666D8 00163618  38 61 00 0C */ addi r3, r1, 0xc
/* 801666DC 0016361C  38 81 00 34 */ addi r4, r1, 0x34
/* 801666E0 00163620  48 10 AA 69 */ bl __mi__7cSAngleCFv
/* 801666E4 00163624  38 61 00 0C */ addi r3, r1, 0xc
lbl_801666E8:
/* 801666E8 00163628  A8 03 00 00 */ lha r0, 0(r3)
/* 801666EC 0016362C  B0 01 00 3C */ sth r0, 0x3c(r1)
/* 801666F0 00163630  48 00 00 18 */ b lbl_80166708
lbl_801666F4:
/* 801666F4 00163634  38 61 00 08 */ addi r3, r1, 8
/* 801666F8 00163638  38 81 00 38 */ addi r4, r1, 0x38
/* 801666FC 0016363C  48 10 AA 4D */ bl __mi__7cSAngleCFv
/* 80166700 00163640  A8 01 00 08 */ lha r0, 8(r1)
/* 80166704 00163644  B0 01 00 3C */ sth r0, 0x3c(r1)
lbl_80166708:
/* 80166708 00163648  A8 61 00 3C */ lha r3, 0x3c(r1)
/* 8016670C 0016364C  A8 0D 8C 08 */ lha r0, lbl_80451188-_SDA_BASE_(r13)
/* 80166710 00163650  7C 03 00 00 */ cmpw r3, r0
/* 80166714 00163654  41 81 00 10 */ bgt lbl_80166724
/* 80166718 00163658  38 61 00 3C */ addi r3, r1, 0x3c
/* 8016671C 0016365C  C0 22 9D 24 */ lfs f1, lbl_80453724-_SDA2_BASE_(r2)
/* 80166720 00163660  48 10 AB 95 */ bl __amu__7cSAngleFf
lbl_80166724:
/* 80166724 00163664  7F A3 EB 78 */ mr r3, r29
/* 80166728 00163668  38 81 00 3C */ addi r4, r1, 0x3c
/* 8016672C 0016366C  48 10 A8 3D */ bl __ct__7cSAngleFRC7cSAngle
/* 80166730 00163670  38 61 01 64 */ addi r3, r1, 0x164
/* 80166734 00163674  38 80 FF FF */ li r4, -1
/* 80166738 00163678  4B F1 16 C9 */ bl __dt__14dBgS_CamLinChkFv
/* 8016673C 0016367C  E3 E1 02 08 */ psq_l f31, 520(r1), 0, 0
/* 80166740 00163680  CB E1 02 00 */ lfd f31, 0x200(r1)
/* 80166744 00163684  E3 C1 01 F8 */ psq_l f30, 504(r1), 0, 0
/* 80166748 00163688  CB C1 01 F0 */ lfd f30, 0x1f0(r1)
/* 8016674C 0016368C  39 61 01 F0 */ addi r11, r1, 0x1f0
/* 80166750 00163690  48 1F BA D5 */ bl _restgpr_28
/* 80166754 00163694  80 01 02 14 */ lwz r0, 0x214(r1)
/* 80166758 00163698  7C 08 03 A6 */ mtlr r0
/* 8016675C 0016369C  38 21 02 10 */ addi r1, r1, 0x210
/* 80166760 001636A0  4E 80 00 20 */ blr
