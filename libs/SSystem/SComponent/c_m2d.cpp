//
// Generated By: dol2asm
// Translation Unit: c_m2d
//

#include "SSystem/SComponent/c_m2d.h"
#include "dol2asm.h"

//
// Types:
//

struct cM2dGCir {};

//
// Forward References:
//

extern "C" void cM2d_CrossCirLin__FR8cM2dGCirffffPfPf();

//
// External References:
//

extern "C" extern u32 __float_nan;
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 804550F0-804550F4 0036F0 0004+00 1/1 0/0 0/0 .sdata2          @2266 */
SECTION_SDATA2 static f32 lit_2266 = 2.0f;

/* 804550F4-804550F8 0036F4 0004+00 1/1 0/0 0/0 .sdata2          @2267 */
SECTION_SDATA2 static f32 lit_2267 = 4.0f;

/* 804550F8-804550FC 0036F8 0004+00 1/1 0/0 0/0 .sdata2          @2268 */
SECTION_SDATA2 static u8 lit_2268[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804550FC-80455100 0036FC 0004+00 1/1 0/0 0/0 .sdata2          @2269 */
SECTION_SDATA2 static f32 lit_2269 = 1.0f;

/* 80455100-80455108 003700 0008+00 1/1 0/0 0/0 .sdata2          @2270 */
SECTION_SDATA2 static f64 lit_2270 = 0.5;

/* 80455108-80455110 003708 0008+00 1/1 0/0 0/0 .sdata2          @2271 */
SECTION_SDATA2 static f64 lit_2271 = 3.0;

/* 80455110-80455118 003710 0008+00 1/1 0/0 0/0 .sdata2          @2272 */
SECTION_SDATA2 static u8 lit_2272[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80268260-80268560 262BA0 0300+00 0/0 4/4 0/0 .text cM2d_CrossCirLin__FR8cM2dGCirffffPfPf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cM2d_CrossCirLin(cM2dGCir& param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                          f32* param_5, f32* param_6) {
    nofralloc
#include "asm/SSystem/SComponent/c_m2d/cM2d_CrossCirLin__FR8cM2dGCirffffPfPf.s"
}
#pragma pop
