/* 802001AC 001FD0EC  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802001B0 001FD0F0  7C 08 02 A6 */ mflr r0
/* 802001B4 001FD0F4  90 01 00 14 */ stw r0, 0x14(r1)
/* 802001B8 001FD0F8  93 E1 00 0C */ stw r31, 0xc(r1)
/* 802001BC 001FD0FC  7C 7F 1B 78 */ mr r31, r3
/* 802001C0 001FD100  3C 60 80 3C */ lis r3, lbl_803BF10C@ha
/* 802001C4 001FD104  38 03 F1 0C */ addi r0, r3, lbl_803BF10C@l
/* 802001C8 001FD108  90 1F 00 00 */ stw r0, 0(r31)
/* 802001CC 001FD10C  38 00 FF FF */ li r0, -1
/* 802001D0 001FD110  90 1F 00 D0 */ stw r0, 0xd0(r31)
/* 802001D4 001FD114  90 1F 00 D4 */ stw r0, 0xd4(r31)
/* 802001D8 001FD118  90 1F 00 D8 */ stw r0, 0xd8(r31)
/* 802001DC 001FD11C  90 1F 00 DC */ stw r0, 0xdc(r31)
/* 802001E0 001FD120  38 7F 01 30 */ addi r3, r31, 0x130
/*.global __ct__Q28JUtility6TColorFv*/
/* 802001E4 001FD124  3C 80 80 19 */ lis r4, __ct__Q28JUtility6TColorFv@ha
/*.global __ct__Q28JUtility6TColorFv*/
/* 802001E8 001FD128  38 84 39 60 */ addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 802001EC 001FD12C  38 A0 00 00 */ li r5, 0
/* 802001F0 001FD130  38 C0 00 04 */ li r6, 4
/* 802001F4 001FD134  38 E0 00 02 */ li r7, 2
/* 802001F8 001FD138  48 16 1B 69 */ bl __construct_array
/* 802001FC 001FD13C  C0 02 AB 88 */ lfs f0, lbl_80454588-_SDA2_BASE_(r2)
/* 80200200 001FD140  D0 1F 00 08 */ stfs f0, 8(r31)
/* 80200204 001FD144  C0 02 AB DC */ lfs f0, lbl_804545DC-_SDA2_BASE_(r2)
/* 80200208 001FD148  D0 1F 00 0C */ stfs f0, 0xc(r31)
/* 8020020C 001FD14C  38 00 00 05 */ li r0, 5
/* 80200210 001FD150  B0 1F 01 3A */ sth r0, 0x13a(r31)
/* 80200214 001FD154  B0 1F 01 3C */ sth r0, 0x13c(r31)
/* 80200218 001FD158  C0 22 AB D4 */ lfs f1, lbl_804545D4-_SDA2_BASE_(r2)
/* 8020021C 001FD15C  D0 3F 00 14 */ stfs f1, 0x14(r31)
/* 80200220 001FD160  C0 02 AB 04 */ lfs f0, lbl_80454504-_SDA2_BASE_(r2)
/* 80200224 001FD164  D0 1F 00 1C */ stfs f0, 0x1c(r31)
/* 80200228 001FD168  D0 3F 00 18 */ stfs f1, 0x18(r31)
/* 8020022C 001FD16C  C0 62 AA E0 */ lfs f3, lbl_804544E0-_SDA2_BASE_(r2)
/* 80200230 001FD170  D0 7F 00 20 */ stfs f3, 0x20(r31)
/* 80200234 001FD174  C0 22 AB AC */ lfs f1, lbl_804545AC-_SDA2_BASE_(r2)
/* 80200238 001FD178  D0 3F 00 28 */ stfs f1, 0x28(r31)
/* 8020023C 001FD17C  38 00 00 08 */ li r0, 8
/* 80200240 001FD180  98 1F 01 4F */ stb r0, 0x14f(r31)
/* 80200244 001FD184  C0 02 AC 30 */ lfs f0, lbl_80454630-_SDA2_BASE_(r2)
/* 80200248 001FD188  D0 1F 00 24 */ stfs f0, 0x24(r31)
/* 8020024C 001FD18C  38 00 01 2C */ li r0, 0x12c
/* 80200250 001FD190  B0 1F 01 38 */ sth r0, 0x138(r31)
/* 80200254 001FD194  38 80 00 FF */ li r4, 0xff
/* 80200258 001FD198  98 9F 01 55 */ stb r4, 0x155(r31)
/* 8020025C 001FD19C  98 9F 01 56 */ stb r4, 0x156(r31)
/* 80200260 001FD1A0  38 60 00 00 */ li r3, 0
/* 80200264 001FD1A4  98 7F 01 4E */ stb r3, 0x14e(r31)
/* 80200268 001FD1A8  98 9F 01 51 */ stb r4, 0x151(r31)
/* 8020026C 001FD1AC  38 00 00 6E */ li r0, 0x6e
/* 80200270 001FD1B0  98 1F 01 52 */ stb r0, 0x152(r31)
/* 80200274 001FD1B4  98 9F 01 30 */ stb r4, 0x130(r31)
/* 80200278 001FD1B8  98 9F 01 31 */ stb r4, 0x131(r31)
/* 8020027C 001FD1BC  98 9F 01 32 */ stb r4, 0x132(r31)
/* 80200280 001FD1C0  98 7F 01 33 */ stb r3, 0x133(r31)
/* 80200284 001FD1C4  98 9F 01 34 */ stb r4, 0x134(r31)
/* 80200288 001FD1C8  98 9F 01 35 */ stb r4, 0x135(r31)
/* 8020028C 001FD1CC  38 00 00 8C */ li r0, 0x8c
/* 80200290 001FD1D0  98 1F 01 36 */ stb r0, 0x136(r31)
/* 80200294 001FD1D4  98 7F 01 37 */ stb r3, 0x137(r31)
/* 80200298 001FD1D8  C0 02 AC AC */ lfs f0, lbl_804546AC-_SDA2_BASE_(r2)
/* 8020029C 001FD1DC  D0 1F 00 2C */ stfs f0, 0x2c(r31)
/* 802002A0 001FD1E0  C0 02 AC B0 */ lfs f0, lbl_804546B0-_SDA2_BASE_(r2)
/* 802002A4 001FD1E4  D0 1F 00 30 */ stfs f0, 0x30(r31)
/* 802002A8 001FD1E8  D0 3F 00 34 */ stfs f1, 0x34(r31)
/* 802002AC 001FD1EC  C0 42 AA F8 */ lfs f2, lbl_804544F8-_SDA2_BASE_(r2)
/* 802002B0 001FD1F0  D0 5F 00 38 */ stfs f2, 0x38(r31)
/* 802002B4 001FD1F4  D0 5F 00 3C */ stfs f2, 0x3c(r31)
/* 802002B8 001FD1F8  D0 7F 00 40 */ stfs f3, 0x40(r31)
/* 802002BC 001FD1FC  C0 02 AC B4 */ lfs f0, lbl_804546B4-_SDA2_BASE_(r2)
/* 802002C0 001FD200  D0 1F 00 50 */ stfs f0, 0x50(r31)
/* 802002C4 001FD204  C0 02 AC B8 */ lfs f0, lbl_804546B8-_SDA2_BASE_(r2)
/* 802002C8 001FD208  D0 1F 00 54 */ stfs f0, 0x54(r31)
/* 802002CC 001FD20C  C0 02 AC BC */ lfs f0, lbl_804546BC-_SDA2_BASE_(r2)
/* 802002D0 001FD210  D0 1F 00 7C */ stfs f0, 0x7c(r31)
/* 802002D4 001FD214  C0 22 AA F4 */ lfs f1, lbl_804544F4-_SDA2_BASE_(r2)
/* 802002D8 001FD218  D0 3F 00 A4 */ stfs f1, 0xa4(r31)
/* 802002DC 001FD21C  C0 02 AC C0 */ lfs f0, lbl_804546C0-_SDA2_BASE_(r2)
/* 802002E0 001FD220  D0 1F 00 58 */ stfs f0, 0x58(r31)
/* 802002E4 001FD224  C0 02 AC C4 */ lfs f0, lbl_804546C4-_SDA2_BASE_(r2)
/* 802002E8 001FD228  D0 1F 00 80 */ stfs f0, 0x80(r31)
/* 802002EC 001FD22C  D0 3F 00 A8 */ stfs f1, 0xa8(r31)
/* 802002F0 001FD230  D0 5F 00 5C */ stfs f2, 0x5c(r31)
/* 802002F4 001FD234  D0 5F 00 84 */ stfs f2, 0x84(r31)
/* 802002F8 001FD238  D0 7F 00 AC */ stfs f3, 0xac(r31)
/* 802002FC 001FD23C  C0 02 AC C8 */ lfs f0, lbl_804546C8-_SDA2_BASE_(r2)
/* 80200300 001FD240  D0 1F 00 60 */ stfs f0, 0x60(r31)
/* 80200304 001FD244  C0 02 AC CC */ lfs f0, lbl_804546CC-_SDA2_BASE_(r2)
/* 80200308 001FD248  D0 1F 00 88 */ stfs f0, 0x88(r31)
/* 8020030C 001FD24C  D0 3F 00 B0 */ stfs f1, 0xb0(r31)
/* 80200310 001FD250  C0 02 AC 5C */ lfs f0, lbl_8045465C-_SDA2_BASE_(r2)
/* 80200314 001FD254  D0 1F 00 64 */ stfs f0, 0x64(r31)
/* 80200318 001FD258  C0 02 AC 74 */ lfs f0, lbl_80454674-_SDA2_BASE_(r2)
/* 8020031C 001FD25C  D0 1F 00 8C */ stfs f0, 0x8c(r31)
/* 80200320 001FD260  C0 22 AC 98 */ lfs f1, lbl_80454698-_SDA2_BASE_(r2)
/* 80200324 001FD264  D0 3F 00 B4 */ stfs f1, 0xb4(r31)
/* 80200328 001FD268  38 60 00 14 */ li r3, 0x14
/* 8020032C 001FD26C  C0 02 AC 34 */ lfs f0, lbl_80454634-_SDA2_BASE_(r2)
/* 80200330 001FD270  38 00 00 05 */ li r0, 5
/* 80200334 001FD274  7C 09 03 A6 */ mtctr r0
lbl_80200338:
/* 80200338 001FD278  7C 9F 1A 14 */ add r4, r31, r3
/* 8020033C 001FD27C  D0 44 00 54 */ stfs f2, 0x54(r4)
/* 80200340 001FD280  D0 04 00 7C */ stfs f0, 0x7c(r4)
/* 80200344 001FD284  D0 24 00 A4 */ stfs f1, 0xa4(r4)
/* 80200348 001FD288  38 63 00 04 */ addi r3, r3, 4
/* 8020034C 001FD28C  42 00 FF EC */ bdnz lbl_80200338
/* 80200350 001FD290  C0 02 AC 94 */ lfs f0, lbl_80454694-_SDA2_BASE_(r2)
/* 80200354 001FD294  D0 1F 00 E4 */ stfs f0, 0xe4(r31)
/* 80200358 001FD298  C0 02 AB 78 */ lfs f0, lbl_80454578-_SDA2_BASE_(r2)
/* 8020035C 001FD29C  D0 1F 00 E8 */ stfs f0, 0xe8(r31)
/* 80200360 001FD2A0  C0 02 AA F4 */ lfs f0, lbl_804544F4-_SDA2_BASE_(r2)
/* 80200364 001FD2A4  D0 1F 00 EC */ stfs f0, 0xec(r31)
/* 80200368 001FD2A8  C0 02 AC 98 */ lfs f0, lbl_80454698-_SDA2_BASE_(r2)
/* 8020036C 001FD2AC  D0 1F 00 F0 */ stfs f0, 0xf0(r31)
/* 80200370 001FD2B0  C0 42 AA F8 */ lfs f2, lbl_804544F8-_SDA2_BASE_(r2)
/* 80200374 001FD2B4  D0 5F 00 F4 */ stfs f2, 0xf4(r31)
/* 80200378 001FD2B8  C0 02 AC D0 */ lfs f0, lbl_804546D0-_SDA2_BASE_(r2)
/* 8020037C 001FD2BC  D0 1F 00 F8 */ stfs f0, 0xf8(r31)
/* 80200380 001FD2C0  C0 02 AB 6C */ lfs f0, lbl_8045456C-_SDA2_BASE_(r2)
/* 80200384 001FD2C4  D0 1F 00 FC */ stfs f0, 0xfc(r31)
/* 80200388 001FD2C8  C0 22 AA E0 */ lfs f1, lbl_804544E0-_SDA2_BASE_(r2)
/* 8020038C 001FD2CC  D0 3F 01 00 */ stfs f1, 0x100(r31)
/* 80200390 001FD2D0  C0 02 AC D4 */ lfs f0, lbl_804546D4-_SDA2_BASE_(r2)
/* 80200394 001FD2D4  D0 1F 01 04 */ stfs f0, 0x104(r31)
/* 80200398 001FD2D8  D0 5F 01 08 */ stfs f2, 0x108(r31)
/* 8020039C 001FD2DC  C0 02 AA E8 */ lfs f0, lbl_804544E8-_SDA2_BASE_(r2)
/* 802003A0 001FD2E0  D0 1F 01 0C */ stfs f0, 0x10c(r31)
/* 802003A4 001FD2E4  C0 02 AC D8 */ lfs f0, lbl_804546D8-_SDA2_BASE_(r2)
/* 802003A8 001FD2E8  D0 1F 01 10 */ stfs f0, 0x110(r31)
/* 802003AC 001FD2EC  C0 02 AA FC */ lfs f0, lbl_804544FC-_SDA2_BASE_(r2)
/* 802003B0 001FD2F0  D0 1F 01 14 */ stfs f0, 0x114(r31)
/* 802003B4 001FD2F4  C0 02 AC DC */ lfs f0, lbl_804546DC-_SDA2_BASE_(r2)
/* 802003B8 001FD2F8  D0 1F 01 18 */ stfs f0, 0x118(r31)
/* 802003BC 001FD2FC  C0 02 AB A8 */ lfs f0, lbl_804545A8-_SDA2_BASE_(r2)
/* 802003C0 001FD300  D0 1F 01 1C */ stfs f0, 0x11c(r31)
/* 802003C4 001FD304  C0 02 AB 64 */ lfs f0, lbl_80454564-_SDA2_BASE_(r2)
/* 802003C8 001FD308  D0 1F 01 20 */ stfs f0, 0x120(r31)
/* 802003CC 001FD30C  C0 02 AC B4 */ lfs f0, lbl_804546B4-_SDA2_BASE_(r2)
/* 802003D0 001FD310  D0 1F 01 24 */ stfs f0, 0x124(r31)
/* 802003D4 001FD314  C0 02 AA E4 */ lfs f0, lbl_804544E4-_SDA2_BASE_(r2)
/* 802003D8 001FD318  D0 1F 01 28 */ stfs f0, 0x128(r31)
/* 802003DC 001FD31C  D0 1F 01 2C */ stfs f0, 0x12c(r31)
/* 802003E0 001FD320  C0 02 AB 70 */ lfs f0, lbl_80454570-_SDA2_BASE_(r2)
/* 802003E4 001FD324  D0 1F 00 CC */ stfs f0, 0xcc(r31)
/* 802003E8 001FD328  38 80 00 FF */ li r4, 0xff
/* 802003EC 001FD32C  98 9F 00 D0 */ stb r4, 0xd0(r31)
/* 802003F0 001FD330  98 9F 00 D1 */ stb r4, 0xd1(r31)
/* 802003F4 001FD334  98 9F 00 D2 */ stb r4, 0xd2(r31)
/* 802003F8 001FD338  38 00 00 B9 */ li r0, 0xb9
/* 802003FC 001FD33C  98 1F 00 D3 */ stb r0, 0xd3(r31)
/* 80200400 001FD340  38 60 00 00 */ li r3, 0
/* 80200404 001FD344  98 7F 00 D4 */ stb r3, 0xd4(r31)
/* 80200408 001FD348  38 00 00 9B */ li r0, 0x9b
/* 8020040C 001FD34C  98 1F 00 D5 */ stb r0, 0xd5(r31)
/* 80200410 001FD350  98 7F 00 D6 */ stb r3, 0xd6(r31)
/* 80200414 001FD354  98 7F 00 D7 */ stb r3, 0xd7(r31)
/* 80200418 001FD358  98 9F 00 D8 */ stb r4, 0xd8(r31)
/* 8020041C 001FD35C  98 9F 00 D9 */ stb r4, 0xd9(r31)
/* 80200420 001FD360  98 9F 00 DA */ stb r4, 0xda(r31)
/* 80200424 001FD364  38 00 00 57 */ li r0, 0x57
/* 80200428 001FD368  98 1F 00 DB */ stb r0, 0xdb(r31)
/* 8020042C 001FD36C  98 7F 00 DC */ stb r3, 0xdc(r31)
/* 80200430 001FD370  38 00 00 73 */ li r0, 0x73
/* 80200434 001FD374  98 1F 00 DD */ stb r0, 0xdd(r31)
/* 80200438 001FD378  98 7F 00 DE */ stb r3, 0xde(r31)
/* 8020043C 001FD37C  98 7F 00 DF */ stb r3, 0xdf(r31)
/* 80200440 001FD380  C0 02 AB 74 */ lfs f0, lbl_80454574-_SDA2_BASE_(r2)
/* 80200444 001FD384  D0 1F 00 E0 */ stfs f0, 0xe0(r31)
/* 80200448 001FD388  38 00 13 88 */ li r0, 0x1388
/* 8020044C 001FD38C  B0 1F 01 46 */ sth r0, 0x146(r31)
/* 80200450 001FD390  38 00 27 10 */ li r0, 0x2710
/* 80200454 001FD394  B0 1F 01 44 */ sth r0, 0x144(r31)
/* 80200458 001FD398  B0 7F 01 48 */ sth r3, 0x148(r31)
/* 8020045C 001FD39C  38 00 00 02 */ li r0, 2
/* 80200460 001FD3A0  B0 1F 01 4A */ sth r0, 0x14a(r31)
/* 80200464 001FD3A4  C0 02 AC E0 */ lfs f0, lbl_804546E0-_SDA2_BASE_(r2)
/* 80200468 001FD3A8  D0 1F 00 10 */ stfs f0, 0x10(r31)
/* 8020046C 001FD3AC  38 00 00 0C */ li r0, 0xc
/* 80200470 001FD3B0  B0 1F 01 3E */ sth r0, 0x13e(r31)
/* 80200474 001FD3B4  38 00 08 00 */ li r0, 0x800
/* 80200478 001FD3B8  B0 1F 01 40 */ sth r0, 0x140(r31)
/* 8020047C 001FD3BC  38 00 00 80 */ li r0, 0x80
/* 80200480 001FD3C0  B0 1F 01 42 */ sth r0, 0x142(r31)
/* 80200484 001FD3C4  D0 5F 00 44 */ stfs f2, 0x44(r31)
/* 80200488 001FD3C8  D0 5F 00 48 */ stfs f2, 0x48(r31)
/* 8020048C 001FD3CC  D0 3F 00 4C */ stfs f1, 0x4c(r31)
/* 80200490 001FD3D0  98 9F 01 54 */ stb r4, 0x154(r31)
/* 80200494 001FD3D4  38 00 00 04 */ li r0, 4
/* 80200498 001FD3D8  B0 1F 01 4C */ sth r0, 0x14c(r31)
/* 8020049C 001FD3DC  7F E3 FB 78 */ mr r3, r31
/* 802004A0 001FD3E0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 802004A4 001FD3E4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802004A8 001FD3E8  7C 08 03 A6 */ mtlr r0
/* 802004AC 001FD3EC  38 21 00 10 */ addi r1, r1, 0x10
/* 802004B0 001FD3F0  4E 80 00 20 */ blr
