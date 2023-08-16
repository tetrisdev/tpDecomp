//
// Generated By: dol2asm
// Translation Unit: d_a_e_yd_leaf
//

#include "rel/d/a/e/d_a_e_yd_leaf/d_a_e_yd_leaf.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DModelData {};

struct J3DAnmTransform {};

struct mDoExt_McaMorf {
    /* 8000FC4C */ mDoExt_McaMorf(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                  mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int,
                                  int, void*, u32, u32);
    /* 80010680 */ void entryDL();
    /* 800106AC */ void modelCalc();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_yd_leaf_class {};

struct dKy_tevstr_c {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

//
// Forward References:
//

extern "C" static void daE_YD_LEAF_Draw__FP15e_yd_leaf_class();
extern "C" static void daE_YD_LEAF_Execute__FP15e_yd_leaf_class();
extern "C" static bool daE_YD_LEAF_IsDelete__FP15e_yd_leaf_class();
extern "C" static void daE_YD_LEAF_Delete__FP15e_yd_leaf_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_YD_LEAF_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_e_yd_leaf__stringBase0;
extern "C" extern void* g_profile_E_YD_LEAF[12];

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void* __nw__FUl();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* 807F7E18-807F7EC0 000078 00A8+00 1/0 0/0 0/0 .text daE_YD_LEAF_Draw__FP15e_yd_leaf_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YD_LEAF_Draw(e_yd_leaf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yd_leaf/d_a_e_yd_leaf/daE_YD_LEAF_Draw__FP15e_yd_leaf_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F81E8-807F81EC 000000 0004+00 3/3 0/0 0/0 .rodata          @3707 */
SECTION_RODATA static f32 const lit_3707 = 1.0f;
COMPILER_STRIP_GATE(0x807F81E8, &lit_3707);

/* 807F81EC-807F81F0 000004 0004+00 0/1 0/0 0/0 .rodata          @3708 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3708 = 2.0f / 25.0f;
COMPILER_STRIP_GATE(0x807F81EC, &lit_3708);
#pragma pop

/* 807F81F0-807F81F4 000008 0004+00 0/1 0/0 0/0 .rodata          @3709 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3709 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x807F81F0, &lit_3709);
#pragma pop

/* 807F7EC0-807F7FEC 000120 012C+00 2/1 0/0 0/0 .text daE_YD_LEAF_Execute__FP15e_yd_leaf_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YD_LEAF_Execute(e_yd_leaf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yd_leaf/d_a_e_yd_leaf/daE_YD_LEAF_Execute__FP15e_yd_leaf_class.s"
}
#pragma pop

/* 807F7FEC-807F7FF4 00024C 0008+00 1/0 0/0 0/0 .text daE_YD_LEAF_IsDelete__FP15e_yd_leaf_class */
static bool daE_YD_LEAF_IsDelete(e_yd_leaf_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 807F81F4-807F81F4 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_807F81F4 = "E_YD";
#pragma pop

/* 807F7FF4-807F8024 000254 0030+00 1/0 0/0 0/0 .text daE_YD_LEAF_Delete__FP15e_yd_leaf_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YD_LEAF_Delete(e_yd_leaf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yd_leaf/d_a_e_yd_leaf/daE_YD_LEAF_Delete__FP15e_yd_leaf_class.s"
}
#pragma pop

/* 807F8024-807F8124 000284 0100+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yd_leaf/d_a_e_yd_leaf/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807F8124-807F81E0 000384 00BC+00 1/0 0/0 0/0 .text            daE_YD_LEAF_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YD_LEAF_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yd_leaf/d_a_e_yd_leaf/daE_YD_LEAF_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F81FC-807F821C -00001 0020+00 1/0 0/0 0/0 .data            l_daE_YD_LEAF_Method */
SECTION_DATA static void* l_daE_YD_LEAF_Method[8] = {
    (void*)daE_YD_LEAF_Create__FP10fopAc_ac_c,
    (void*)daE_YD_LEAF_Delete__FP15e_yd_leaf_class,
    (void*)daE_YD_LEAF_Execute__FP15e_yd_leaf_class,
    (void*)daE_YD_LEAF_IsDelete__FP15e_yd_leaf_class,
    (void*)daE_YD_LEAF_Draw__FP15e_yd_leaf_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 807F821C-807F824C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_YD_LEAF */
SECTION_DATA extern void* g_profile_E_YD_LEAF[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01CE0000, (void*)&g_fpcLf_Method,
    (void*)0x000005C0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00910000, (void*)&l_daE_YD_LEAF_Method,
    (void*)0x00040000, (void*)NULL,
};

/* 807F81F4-807F81F4 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
