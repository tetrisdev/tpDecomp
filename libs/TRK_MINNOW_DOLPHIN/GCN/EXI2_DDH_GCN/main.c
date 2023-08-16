//
// Generated By: dol2asm
// Translation Unit: GCN/EXI2_DDH_GCN/main
//

#include "TRK_MINNOW_DOLPHIN/GCN/EXI2_DDH_GCN/main.h"
#include "TRK_MINNOW_DOLPHIN/utils/common/CircleBuffer.h"
#include "TRK_MINNOW_DOLPHIN/utils/common/MWTrace.h"
#include "amcstubs/AmcExi2Stubs.h"
#include "dol2asm.h"

//
// Forward References:
//

int ddh_cc_initinterrupts();
void ddh_cc_peek();
int ddh_cc_post_stop();
int ddh_cc_pre_continue();
void ddh_cc_write();
void ddh_cc_read();
u8 ddh_cc_close();
s32 ddh_cc_open();
u8 ddh_cc_shutdown();
void ddh_cc_initialize();

//
// Declarations:
//

/* ############################################################################################## */
/* 8044F830-80450030 07C550 0800+00 1/1 0/0 0/0 .bss             gRecvBuf */
static u8 gRecvBuf[2048];

/* 80450030-80450050 07CD50 001C+04 3/3 0/0 0/0 .bss             gRecvCB */
static CircleBuffer gRecvCB;

// copied from pikmin2. should try to find a real fix
static makeMainBSSOrderingWork() {
    u8 buff[0x500];
    memcpy(buff, gRecvBuf, 0x500);
}

/* 8037235C-80372380 36CC9C 0024+00 0/0 1/1 0/0 .text            ddh_cc_initinterrupts */
int ddh_cc_initinterrupts() {
    EXI2_EnableInterrupts();
    return 0;
}

/* 80372380-803723F0 36CCC0 0070+00 0/0 1/1 0/0 .text            ddh_cc_peek */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ddh_cc_peek() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_DDH_GCN/main/ddh_cc_peek.s"
}
#pragma pop

/* 803723F0-80372414 36CD30 0024+00 0/0 1/1 0/0 .text            ddh_cc_post_stop */
int ddh_cc_post_stop() {
    EXI2_Reserve();
    return 0;
}

/* 80372414-80372438 36CD54 0024+00 0/0 1/1 0/0 .text            ddh_cc_pre_continue */
int ddh_cc_pre_continue() {
    EXI2_Unreserve();
    return 0;
}

/* ############################################################################################## */
/* 803A2D10-803A2D24 02F370 0014+00 1/1 0/0 0/0 .rodata          @318 */
SECTION_RODATA static char const lit_318[] = "cc not initialized\n";
COMPILER_STRIP_GATE(0x803A2D10, &lit_318);

/* 803A2D24-803A2D50 02F384 0029+03 0/1 0/0 0/0 .rodata          @319 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_319[] = "cc_write : Output data 0x%08x %ld bytes\n";
COMPILER_STRIP_GATE(0x803A2D24, &lit_319);
#pragma pop

/* 803A2D50-803A2D6C 02F3B0 001C+00 0/1 0/0 0/0 .rodata          @320 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_320[] = "cc_write sending %ld bytes\n";
COMPILER_STRIP_GATE(0x803A2D50, &lit_320);
#pragma pop

/* 804519C0-804519C8 000EC0 0004+04 3/3 0/0 0/0 .sbss            gIsInitialized */
static BOOL gIsInitialized;

/* 80372438-803724F8 36CD78 00C0+00 0/0 1/1 0/0 .text            ddh_cc_write */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ddh_cc_write() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_DDH_GCN/main/ddh_cc_write.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2D6C-803A2D94 02F3CC 0025+03 1/1 0/0 0/0 .rodata          @342 */
SECTION_RODATA static char const lit_342[] = "Expected packet size : 0x%08x (%ld)\n";
COMPILER_STRIP_GATE(0x803A2D6C, &lit_342);

/* 803A2D94-803A2DC4 02F3F4 002D+03 1/1 0/0 0/0 .rodata          @343 */
SECTION_RODATA static char const lit_343[] = "cc_read : error reading bytes from EXI2 %ld\n";
COMPILER_STRIP_GATE(0x803A2D94, &lit_343);

/* 803724F8-803725E4 36CE38 00EC+00 0/0 1/1 0/0 .text            ddh_cc_read */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ddh_cc_read() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_DDH_GCN/main/ddh_cc_read.s"
}
#pragma pop

/* 803725E4-803725EC 36CF24 0008+00 0/0 1/1 0/0 .text            ddh_cc_close */
u8 ddh_cc_close() {
    return 0;
}

/* 803725EC-80372610 36CF2C 0024+00 0/0 1/1 0/0 .text            ddh_cc_open */
s32 ddh_cc_open() {
    if (gIsInitialized != FALSE) {
        return -10005;
    }
    gIsInitialized = TRUE;
    return 0;
}

/* 80372610-80372618 36CF50 0008+00 0/0 1/1 0/0 .text            ddh_cc_shutdown */
u8 ddh_cc_shutdown() {
    return 0;
}

/* ############################################################################################## */
/* 803A2DC4-803A2DD8 02F424 0013+01 1/1 0/0 0/0 .rodata          @349 */
SECTION_RODATA static char const lit_349[] = "CALLING EXI2_Init\n";
COMPILER_STRIP_GATE(0x803A2DC4, &lit_349);

/* 803A2DD8-803A2DF0 02F438 0018+00 1/1 0/0 0/0 .rodata          @350 */
SECTION_RODATA static char const lit_350[] = "DONE CALLING EXI2_Init\n";
COMPILER_STRIP_GATE(0x803A2DD8, &lit_350);

/* 80372618-803726A0 36CF58 0088+00 0/0 1/1 0/0 .text            ddh_cc_initialize */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ddh_cc_initialize() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_DDH_GCN/main/ddh_cc_initialize.s"
}
#pragma pop
