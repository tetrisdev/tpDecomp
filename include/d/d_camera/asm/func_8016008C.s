/* 8016008C 0015CFCC  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80160090 0015CFD0  7C 08 02 A6 */ mflr r0
/* 80160094 0015CFD4  90 01 00 24 */ stw r0, 0x24(r1)
/* 80160098 0015CFD8  39 61 00 20 */ addi r11, r1, 0x20
/* 8016009C 0015CFDC  48 20 21 35 */ bl _savegpr_26
/* 801600A0 0015CFE0  7C 7E 1B 78 */ mr r30, r3
/* 801600A4 0015CFE4  7C 9F 23 78 */ mr r31, r4
/* 801600A8 0015CFE8  38 7E 00 D0 */ addi r3, r30, 0xd0
/*.global __ct__Q29dCamera_c10dCamInfo_cFv*/
/* 801600AC 0015CFEC  3C 80 80 18 */ lis r4, __ct__Q29dCamera_c10dCamInfo_cFv@ha
/*.global __ct__Q29dCamera_c10dCamInfo_cFv*/
/* 801600B0 0015CFF0  38 84 29 1C */ addi r4, r4, __ct__Q29dCamera_c10dCamInfo_cFv@l
/*.global __dt__Q29dCamera_c10dCamInfo_cFv*/
/* 801600B4 0015CFF4  3C A0 80 18 */ lis r5, __dt__Q29dCamera_c10dCamInfo_cFv@ha
/*.global __dt__Q29dCamera_c10dCamInfo_cFv*/
/* 801600B8 0015CFF8  38 A5 29 20 */ addi r5, r5, __dt__Q29dCamera_c10dCamInfo_cFv@l
/* 801600BC 0015CFFC  38 C0 00 20 */ li r6, 0x20
/* 801600C0 0015D000  38 E0 00 02 */ li r7, 2
/* 801600C4 0015D004  48 20 1C 9D */ bl __construct_array
/* 801600C8 0015D008  3C 60 80 3A */ lis r3, lbl_803A6F88@ha
/* 801600CC 0015D00C  38 03 6F 88 */ addi r0, r3, lbl_803A6F88@l
/* 801600D0 0015D010  90 1E 02 28 */ stw r0, 0x228(r30)
/* 801600D4 0015D014  3C 60 80 3B */ lis r3, lbl_803A8DF8@ha
/* 801600D8 0015D018  38 03 8D F8 */ addi r0, r3, lbl_803A8DF8@l
/* 801600DC 0015D01C  90 1E 02 28 */ stw r0, 0x228(r30)
/* 801600E0 0015D020  38 7E 02 2C */ addi r3, r30, 0x22c
/* 801600E4 0015D024  38 80 00 64 */ li r4, 0x64
/* 801600E8 0015D028  38 A0 00 64 */ li r5, 0x64
/* 801600EC 0015D02C  38 C0 00 64 */ li r6, 0x64
/* 801600F0 0015D030  4B EF 3B ED */ bl init__8cM_rnd_cFiii
/* 801600F4 0015D034  3B 5E 02 D0 */ addi r26, r30, 0x2d0
/* 801600F8 0015D038  7F 43 D3 78 */ mr r3, r26
/* 801600FC 0015D03C  4B F1 74 81 */ bl __ct__11dBgS_GndChkFv
/* 80160100 0015D040  3C 60 80 3B */ lis r3, lbl_803AB6B8@ha
/* 80160104 0015D044  38 63 B6 B8 */ addi r3, r3, lbl_803AB6B8@l
/* 80160108 0015D048  90 7A 00 10 */ stw r3, 0x10(r26)
/* 8016010C 0015D04C  3B 83 00 0C */ addi r28, r3, 0xc
/* 80160110 0015D050  93 9A 00 20 */ stw r28, 0x20(r26)
/* 80160114 0015D054  3B A3 00 18 */ addi r29, r3, 0x18
/* 80160118 0015D058  93 BA 00 3C */ stw r29, 0x3c(r26)
/* 8016011C 0015D05C  3B 63 00 24 */ addi r27, r3, 0x24
/* 80160120 0015D060  93 7A 00 4C */ stw r27, 0x4c(r26)
/* 80160124 0015D064  38 7A 00 3C */ addi r3, r26, 0x3c
/* 80160128 0015D068  4B F1 8D 59 */ bl SetCam__16dBgS_PolyPassChkFv
/* 8016012C 0015D06C  3B 5E 03 2C */ addi r26, r30, 0x32c
/* 80160130 0015D070  7F 43 D3 78 */ mr r3, r26
/* 80160134 0015D074  4B F1 74 49 */ bl __ct__11dBgS_GndChkFv
/* 80160138 0015D078  3C 60 80 3B */ lis r3, lbl_803AB6B8@ha
/* 8016013C 0015D07C  38 03 B6 B8 */ addi r0, r3, lbl_803AB6B8@l
/* 80160140 0015D080  90 1A 00 10 */ stw r0, 0x10(r26)
/* 80160144 0015D084  93 9A 00 20 */ stw r28, 0x20(r26)
/* 80160148 0015D088  93 BA 00 3C */ stw r29, 0x3c(r26)
/* 8016014C 0015D08C  93 7A 00 4C */ stw r27, 0x4c(r26)
/* 80160150 0015D090  38 7A 00 3C */ addi r3, r26, 0x3c
/* 80160154 0015D094  4B F1 8D 2D */ bl SetCam__16dBgS_PolyPassChkFv
/* 80160158 0015D098  3C 60 80 3C */ lis r3, lbl_803BA7EC@ha
/* 8016015C 0015D09C  38 03 A7 EC */ addi r0, r3, lbl_803BA7EC@l
/* 80160160 0015D0A0  90 1E 06 08 */ stw r0, 0x608(r30)
/* 80160164 0015D0A4  38 7E 05 D8 */ addi r3, r30, 0x5d8
/* 80160168 0015D0A8  38 80 00 00 */ li r4, 0
/* 8016016C 0015D0AC  38 A0 00 00 */ li r5, 0
/* 80160170 0015D0B0  4B F3 77 09 */ bl Init__14d2DBSplinePathFll
/* 80160174 0015D0B4  38 7E 06 14 */ addi r3, r30, 0x614
/*.global dCamera_c_NS__class_3665d_camera_cpp*/
/* 80160178 0015D0B8  3C 80 80 16 */ lis r4, dCamera_c_NS__class_3665d_camera_cpp@ha
/*.global dCamera_c_NS__class_3665d_camera_cpp*/
/* 8016017C 0015D0BC  38 84 03 00 */ addi r4, r4, dCamera_c_NS__class_3665d_camera_cpp@l
/*.global dCamera_c_NS__class_3665d_camera_cpp_NS_dtor*/
/* 80160180 0015D0C0  3C A0 80 16 */ lis r5, dCamera_c_NS__class_3665d_camera_cpp_NS_dtor@ha
/*.global dCamera_c_NS__class_3665d_camera_cpp_NS_dtor*/
/* 80160184 0015D0C4  38 A5 02 C4 */ addi r5, r5, dCamera_c_NS__class_3665d_camera_cpp_NS_dtor@l
/* 80160188 0015D0C8  38 C0 00 14 */ li r6, 0x14
/* 8016018C 0015D0CC  38 E0 00 04 */ li r7, 4
/* 80160190 0015D0D0  48 20 1B D1 */ bl __construct_array
/* 80160194 0015D0D4  38 60 00 FF */ li r3, 0xff
/* 80160198 0015D0D8  90 7E 07 D8 */ stw r3, 0x7d8(r30)
/* 8016019C 0015D0DC  90 7E 07 DC */ stw r3, 0x7dc(r30)
/* 801601A0 0015D0E0  38 00 00 00 */ li r0, 0
/* 801601A4 0015D0E4  98 1E 07 E6 */ stb r0, 0x7e6(r30)
/* 801601A8 0015D0E8  90 1E 07 E0 */ stw r0, 0x7e0(r30)
/* 801601AC 0015D0EC  98 7E 07 E7 */ stb r3, 0x7e7(r30)
/* 801601B0 0015D0F0  B0 7E 07 E4 */ sth r3, 0x7e4(r30)
/* 801601B4 0015D0F4  90 7E 08 14 */ stw r3, 0x814(r30)
/* 801601B8 0015D0F8  90 7E 08 18 */ stw r3, 0x818(r30)
/* 801601BC 0015D0FC  98 1E 08 22 */ stb r0, 0x822(r30)
/* 801601C0 0015D100  90 1E 08 1C */ stw r0, 0x81c(r30)
/* 801601C4 0015D104  98 7E 08 23 */ stb r3, 0x823(r30)
/* 801601C8 0015D108  B0 7E 08 20 */ sth r3, 0x820(r30)
/* 801601CC 0015D10C  90 7E 08 50 */ stw r3, 0x850(r30)
/* 801601D0 0015D110  90 7E 08 54 */ stw r3, 0x854(r30)
/* 801601D4 0015D114  98 1E 08 5E */ stb r0, 0x85e(r30)
/* 801601D8 0015D118  90 1E 08 58 */ stw r0, 0x858(r30)
/* 801601DC 0015D11C  98 7E 08 5F */ stb r3, 0x85f(r30)
/* 801601E0 0015D120  B0 7E 08 5C */ sth r3, 0x85c(r30)
/* 801601E4 0015D124  90 7E 08 8C */ stw r3, 0x88c(r30)
/* 801601E8 0015D128  90 7E 08 90 */ stw r3, 0x890(r30)
/* 801601EC 0015D12C  98 1E 08 9A */ stb r0, 0x89a(r30)
/* 801601F0 0015D130  90 1E 08 94 */ stw r0, 0x894(r30)
/* 801601F4 0015D134  98 7E 08 9B */ stb r3, 0x89b(r30)
/* 801601F8 0015D138  B0 7E 08 98 */ sth r3, 0x898(r30)
/* 801601FC 0015D13C  90 7E 08 C8 */ stw r3, 0x8c8(r30)
/* 80160200 0015D140  90 7E 08 CC */ stw r3, 0x8cc(r30)
/* 80160204 0015D144  98 1E 08 D6 */ stb r0, 0x8d6(r30)
/* 80160208 0015D148  90 1E 08 D0 */ stw r0, 0x8d0(r30)
/* 8016020C 0015D14C  98 7E 08 D7 */ stb r3, 0x8d7(r30)
/* 80160210 0015D150  B0 7E 08 D4 */ sth r3, 0x8d4(r30)
/* 80160214 0015D154  90 7E 09 04 */ stw r3, 0x904(r30)
/* 80160218 0015D158  90 7E 09 08 */ stw r3, 0x908(r30)
/* 8016021C 0015D15C  98 1E 09 12 */ stb r0, 0x912(r30)
/* 80160220 0015D160  90 1E 09 0C */ stw r0, 0x90c(r30)
/* 80160224 0015D164  98 7E 09 13 */ stb r3, 0x913(r30)
/* 80160228 0015D168  B0 7E 09 10 */ sth r3, 0x910(r30)
/* 8016022C 0015D16C  38 7E 09 70 */ addi r3, r30, 0x970
/* 80160230 0015D170  4B F2 84 39 */ bl __ct__11dCamSetup_cFv
/* 80160234 0015D174  38 7E 0A EC */ addi r3, r30, 0xaec
/* 80160238 0015D178  38 80 00 00 */ li r4, 0
/* 8016023C 0015D17C  4B F2 82 B5 */ bl __ct__11dCamParam_cFl
/* 80160240 0015D180  7F E3 FB 78 */ mr r3, r31
/* 80160244 0015D184  4B EB E0 C5 */ bl fopCamM_GetParam__FP12camera_class
/* 80160248 0015D188  3C 80 80 40 */ lis r4, g_dComIfG_gameInfo@ha
/* 8016024C 0015D18C  38 84 61 C0 */ addi r4, r4, g_dComIfG_gameInfo@l
/* 80160250 0015D190  3B 64 5D 79 */ addi r27, r4, 0x5d79
/* 80160254 0015D194  1C 03 00 38 */ mulli r0, r3, 0x38
/* 80160258 0015D198  7F BB 00 AE */ lbzx r29, r27, r0
/* 8016025C 0015D19C  7F BD 07 74 */ extsb r29, r29
/* 80160260 0015D1A0  7F E3 FB 78 */ mr r3, r31
/* 80160264 0015D1A4  4B EB E0 A5 */ bl fopCamM_GetParam__FP12camera_class
/* 80160268 0015D1A8  7C 7C 1B 78 */ mr r28, r3
/* 8016026C 0015D1AC  7F E3 FB 78 */ mr r3, r31
/* 80160270 0015D1B0  4B EB E0 99 */ bl fopCamM_GetParam__FP12camera_class
/* 80160274 0015D1B4  1C 03 00 38 */ mulli r0, r3, 0x38
/* 80160278 0015D1B8  7C 1B 00 AE */ lbzx r0, r27, r0
/* 8016027C 0015D1BC  7C 00 07 74 */ extsb r0, r0
/* 80160280 0015D1C0  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80160284 0015D1C4  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80160288 0015D1C8  54 00 18 38 */ slwi r0, r0, 3
/* 8016028C 0015D1CC  7C 63 02 14 */ add r3, r3, r0
/* 80160290 0015D1D0  80 A3 5D AC */ lwz r5, 0x5dac(r3)
/* 80160294 0015D1D4  7F C3 F3 78 */ mr r3, r30
/* 80160298 0015D1D8  7F E4 FB 78 */ mr r4, r31
/* 8016029C 0015D1DC  7F 86 E3 78 */ mr r6, r28
/* 801602A0 0015D1E0  7F A7 EB 78 */ mr r7, r29
/* 801602A4 0015D1E4  48 00 01 CD */ bl initialize__9dCamera_cFP12camera_classP10fopAc_ac_cUlUl
/* 801602A8 0015D1E8  7F C3 F3 78 */ mr r3, r30
/* 801602AC 0015D1EC  39 61 00 20 */ addi r11, r1, 0x20
/* 801602B0 0015D1F0  48 20 1F 6D */ bl _restgpr_26
/* 801602B4 0015D1F4  80 01 00 24 */ lwz r0, 0x24(r1)
/* 801602B8 0015D1F8  7C 08 03 A6 */ mtlr r0
/* 801602BC 0015D1FC  38 21 00 20 */ addi r1, r1, 0x20
/* 801602C0 0015D200  4E 80 00 20 */ blr