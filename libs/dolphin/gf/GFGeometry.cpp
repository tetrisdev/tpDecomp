//
// Generated By: dol2asm
// Translation Unit: GFGeometry
//

#include "dolphin/gf/GFGeometry.h"
#include "dol2asm.h"

//
// Types:
//

//
// Forward References:
//

extern "C" void GFSetGenMode2__FUcUcUcUc11_GXCullMode();
extern "C" extern u8 data_804508B0[8];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 804508A8-804508B0 000328 0004+04 1/1 0/0 0/0 .sdata           cm2hw$539 */
SECTION_SDATA static u8 cm2hw[4 + 4 /* padding */] = {
    0x00,
    0x02,
    0x01,
    0x03,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 802CDDC8-802CDE54 2C8708 008C+00 0/0 0/0 1/1 .text GFSetGenMode2__FUcUcUcUc11_GXCullMode */
// reg alloc
#ifdef NONMATCHING
void GFSetGenMode2(u8 param_0, u8 param_1, u8 param_2, u8 param_3, _GXCullMode param_4) {
    GFWriteBPCmd(0xFE07FC3F);
    GFWriteBPCmd((param_0) | (param_1 << 4) | ((param_2 - 1) << 10) | (cm2hw[param_4] << 14) | (param_3 << 16));
    GFFill(0x1009, param_1);
    GFFill(0x103f, param_0);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GFSetGenMode2(u8 param_0, u8 param_1, u8 param_2, u8 param_3, _GXCullMode param_4) {
    nofralloc
#include "asm/dolphin/gf/GFGeometry/GFSetGenMode2__FUcUcUcUc11_GXCullMode.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804508B0-804508B8 000330 0008+00 0/0 2/2 0/0 .sdata           None */
SECTION_SDATA extern u8 data_804508B0[8] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
