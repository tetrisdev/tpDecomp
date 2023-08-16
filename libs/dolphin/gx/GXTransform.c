//
// Generated By: dol2asm
// Translation Unit: GXTransform
//

#include "dolphin/gx/GXTransform.h"
#include "dol2asm.h"

//
// Forward References:
//

void GXSetProjection();
void GXSetProjectionv();
void GXGetProjectionv();
void GXLoadPosMtxImm();
void GXLoadNrmMtxImm();
void GXSetCurrentMtx();
void GXLoadTexMtxImm();
void __GXSetViewport();
void GXGetViewportv();
void GXSetScissor();
void GXGetScissor();
void GXSetScissorBoxOffset();
void GXSetClipMode();
void __GXSetMatrixIndex();

//
// External References:
//

extern void* __GXData;

//
// Declarations:
//

/* ############################################################################################## */
/* 80456650-80456654 004C50 0004+00 3/3 0/0 0/0 .sdata2          @26 */
SECTION_SDATA2 static u8 lit_26[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456654-80456658 004C54 0004+00 2/2 0/0 0/0 .sdata2          @27 */
SECTION_SDATA2 static f32 lit_27 = 1.0f;

/* 80456658-8045665C 004C58 0004+00 2/2 0/0 0/0 .sdata2          @28 */
SECTION_SDATA2 static f32 lit_28 = 0.5f;

/* 8035FF60-803600D4 35A8A0 0174+00 0/0 1/1 0/0 .text            GXProject */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXProject(f32 model_x, f32 model_y, f32 model_z, Mtx model_mtx, f32* proj_mtx,
                   f32* viewpoint, f32* screen_x, f32* screen_y, f32* screen_z) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXProject.s"
}
#pragma pop

/* 803600D4-80360178 35AA14 00A4+00 0/0 15/15 2/2 .text            GXSetProjection */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetProjection(Mtx44 mtx, GXProjectionType type) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXSetProjection.s"
}
#pragma pop

/* 80360178-80360204 35AAB8 008C+00 0/0 1/1 1/1 .text            GXSetProjectionv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetProjectionv(f32* p) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXSetProjectionv.s"
}
#pragma pop

/* 80360204-8036024C 35AB44 0048+00 0/0 1/1 1/1 .text            GXGetProjectionv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXGetProjectionv(f32* p) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXGetProjectionv.s"
}
#pragma pop

/* 8036024C-8036029C 35AB8C 0050+00 0/0 83/83 9/9 .text            GXLoadPosMtxImm */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXLoadPosMtxImm(Mtx mtx, u32 id) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXLoadPosMtxImm.s"
}
#pragma pop

/* 8036029C-803602EC 35ABDC 0050+00 0/0 11/11 7/7 .text            GXLoadNrmMtxImm */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXLoadNrmMtxImm(Mtx mtx, u32 id) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXLoadNrmMtxImm.s"
}
#pragma pop

/* 803602EC-80360320 35AC2C 0034+00 0/0 51/51 2/2 .text            GXSetCurrentMtx */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetCurrentMtx(u32 id) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXSetCurrentMtx.s"
}
#pragma pop

/* 80360320-803603D4 35AC60 00B4+00 0/0 15/15 0/0 .text            GXLoadTexMtxImm */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXLoadTexMtxImm(Mtx mtx, u32 id, GXTexMtxType type) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXLoadTexMtxImm.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045665C-80456660 004C5C 0004+00 1/1 0/0 0/0 .sdata2          @201 */
SECTION_SDATA2 static f32 lit_201 = 342.0f;

/* 803603D4-80360464 35AD14 0090+00 1/1 0/0 0/0 .text            __GXSetViewport */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXSetViewport(void) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/__GXSetViewport.s"
}
#pragma pop

/* 80360464-803604AC 35ADA4 0048+00 0/0 10/10 1/1 .text            GXSetViewport */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetViewport(f32 x_orig, f32 y_orig, f32 width, f32 height, f32 near_z, f32 far_z) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXSetViewport.s"
}
#pragma pop

/* 803604AC-803604D0 35ADEC 0024+00 0/0 1/1 1/1 .text            GXGetViewportv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXGetViewportv(f32* p) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXGetViewportv.s"
}
#pragma pop

/* 803604D0-80360548 35AE10 0078+00 0/0 11/11 4/4 .text            GXSetScissor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetScissor(u32 left, u32 top, u32 width, u32 height) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXSetScissor.s"
}
#pragma pop

/* 80360548-80360590 35AE88 0048+00 0/0 6/6 2/2 .text            GXGetScissor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXGetScissor(u32* left, u32* top, u32* width, u32* height) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXGetScissor.s"
}
#pragma pop

/* 80360590-803605D0 35AED0 0040+00 0/0 1/1 0/0 .text            GXSetScissorBoxOffset */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetScissorBoxOffset(u32 x_offset, u32 y_offset) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXSetScissorBoxOffset.s"
}
#pragma pop

/* 803605D0-803605F8 35AF10 0028+00 0/0 27/27 2/2 .text            GXSetClipMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetClipMode(GXClipMode mode) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/GXSetClipMode.s"
}
#pragma pop

/* 803605F8-8036067C 35AF38 0084+00 1/1 1/1 0/0 .text            __GXSetMatrixIndex */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXSetMatrixIndex(u32 id) {
    nofralloc
#include "asm/dolphin/gx/GXTransform/__GXSetMatrixIndex.s"
}
#pragma pop
