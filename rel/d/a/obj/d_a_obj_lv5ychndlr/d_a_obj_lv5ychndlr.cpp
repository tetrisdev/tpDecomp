/**
 * @file d_a_obj_lv5ychndlr.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void create1st__14daObjYchndlr_cFv();
extern "C" void setMtx__14daObjYchndlr_cFv();
extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void rideActor__14daObjYchndlr_cFP10fopAc_ac_c();
extern "C" void CreateHeap__14daObjYchndlr_cFv();
extern "C" void Create__14daObjYchndlr_cFv();
extern "C" void Execute__14daObjYchndlr_cFPPA3_A4_f();
extern "C" void Draw__14daObjYchndlr_cFv();
extern "C" void Delete__14daObjYchndlr_cFv();
extern "C" static void daObjYchndlr_create1st__FP14daObjYchndlr_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" static void daObjYchndlr_MoveBGDelete__FP14daObjYchndlr_c();
extern "C" static void daObjYchndlr_MoveBGExecute__FP14daObjYchndlr_c();
extern "C" static void daObjYchndlr_MoveBGDraw__FP14daObjYchndlr_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__14daObjYchndlr_cFv();
extern "C" extern char const* const d_a_obj_lv5ychndlr__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalize__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C6E9E8-80C6E9E8 000068 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C6E9E8 = "Ychandelr";
#pragma pop

/* 80C6E9F4-80C6E9F8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_lv5ychndlr__stringBase0;

/* 80C6D758-80C6D7E0 000078 0088+00 1/1 0/0 0/0 .text            create1st__14daObjYchndlr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/create1st__14daObjYchndlr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6E980-80C6E988 000000 0008+00 2/2 0/0 0/0 .rodata          l_bmdidx */
SECTION_RODATA static u8 const l_bmdidx[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};
COMPILER_STRIP_GATE(0x80C6E980, &l_bmdidx);

/* 80C6E988-80C6E9A0 000008 0018+00 1/1 0/0 0/0 .rodata          l_cull_box */
SECTION_RODATA static u8 const l_cull_box[24] = {
    0xC4, 0xBB, 0x80, 0x00, 0xC5, 0x1C, 0x40, 0x00, 0xC3, 0xFA, 0x00, 0x00,
    0x44, 0xBB, 0x80, 0x00, 0x43, 0x48, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C6E988, &l_cull_box);

/* 80C6E9A0-80C6E9A4 000020 0004+00 3/4 0/0 0/0 .rodata          @3699 */
SECTION_RODATA static u8 const lit_3699[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C6E9A0, &lit_3699);

/* 80C6E9A4-80C6E9A8 000024 0004+00 1/1 0/0 0/0 .rodata          @3700 */
SECTION_RODATA static f32 const lit_3700 = -840.0f;
COMPILER_STRIP_GATE(0x80C6E9A4, &lit_3700);

/* 80C6E9F8-80C6EA28 000004 0030+00 2/2 0/0 0/0 .data            l_shaft_vec */
SECTION_DATA static u8 l_shaft_vec[48] = {
    0xC3, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC3, 0x48, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x48, 0x00, 0x00,
};

/* 80C6EA28-80C6EA30 000034 0008+00 1/1 0/0 0/0 .data            l_shaft_roty */
SECTION_DATA static u8 l_shaft_roty[8] = {
    0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6D7E0-80C6D980 000100 01A0+00 2/2 0/0 0/0 .text            setMtx__14daObjYchndlr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/setMtx__14daObjYchndlr_cFv.s"
}
#pragma pop

/* 80C6D980-80C6D9A8 0002A0 0028+00 1/1 0/0 0/0 .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6E9A8-80C6E9AC 000028 0004+00 1/2 0/0 0/0 .rodata          @3718 */
SECTION_RODATA static f32 const lit_3718 = 1.0f;
COMPILER_STRIP_GATE(0x80C6E9A8, &lit_3718);

/* 80C6D9A8-80C6DA5C 0002C8 00B4+00 1/1 0/0 0/0 .text rideActor__14daObjYchndlr_cFP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::rideActor(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/rideActor__14daObjYchndlr_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80C6DA5C-80C6DB5C 00037C 0100+00 1/0 0/0 0/0 .text            CreateHeap__14daObjYchndlr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/CreateHeap__14daObjYchndlr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6EA30-80C6EA74 00003C 0044+00 1/1 0/0 0/0 .data            l_cc_src_shaft_cyl */
static dCcD_SrcCyl l_cc_src_shaft_cyl = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x11}, 0x79}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x5, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        50.0f, // mRadius
        100.0f // mHeight
    } // mCyl
};

/* 80C6EA74-80C6EAB8 000080 0044+00 1/1 0/0 0/0 .data            l_cc_cyl_src */
static dCcD_SrcCyl l_cc_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x408000, 0x11}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x5, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        350.0f, // mRadius
        150.0f // mHeight
    } // mCyl
};

/* 80C6DB5C-80C6DC64 00047C 0108+00 1/0 0/0 0/0 .text            Create__14daObjYchndlr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/Create__14daObjYchndlr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6E9AC-80C6E9B0 00002C 0004+00 0/1 0/0 0/0 .rodata          @3881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3881 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C6E9AC, &lit_3881);
#pragma pop

/* 80C6E9B0-80C6E9B4 000030 0004+00 0/1 0/0 0/0 .rodata          @3882 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3882 = 350.0f;
COMPILER_STRIP_GATE(0x80C6E9B0, &lit_3882);
#pragma pop

/* 80C6E9B4-80C6E9B8 000034 0004+00 0/1 0/0 0/0 .rodata          @3883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3883 = 4750.0f;
COMPILER_STRIP_GATE(0x80C6E9B4, &lit_3883);
#pragma pop

/* 80C6E9B8-80C6E9BC 000038 0004+00 0/1 0/0 0/0 .rodata          @3884 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3884 = -1.0f;
COMPILER_STRIP_GATE(0x80C6E9B8, &lit_3884);
#pragma pop

/* 80C6E9BC-80C6E9C0 00003C 0004+00 0/1 0/0 0/0 .rodata          @3885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3885 = -350.0f;
COMPILER_STRIP_GATE(0x80C6E9BC, &lit_3885);
#pragma pop

/* 80C6E9C0-80C6E9C4 000040 0004+00 0/1 0/0 0/0 .rodata          @3886 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3886 = -4750.0f;
COMPILER_STRIP_GATE(0x80C6E9C0, &lit_3886);
#pragma pop

/* 80C6E9C4-80C6E9C8 000044 0004+00 0/1 0/0 0/0 .rodata          @3887 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3887 = 0x3F7F9DB2;
COMPILER_STRIP_GATE(0x80C6E9C4, &lit_3887);
#pragma pop

/* 80C6E9C8-80C6E9CC 000048 0004+00 0/1 0/0 0/0 .rodata          @3888 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3888 = 3.0f / 25.0f;
COMPILER_STRIP_GATE(0x80C6E9C8, &lit_3888);
#pragma pop

/* 80C6E9CC-80C6E9D0 00004C 0004+00 0/1 0/0 0/0 .rodata          @3889 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3889 = 120.0f;
COMPILER_STRIP_GATE(0x80C6E9CC, &lit_3889);
#pragma pop

/* 80C6E9D0-80C6E9D4 000050 0004+00 0/1 0/0 0/0 .rodata          @3890 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3890 = 210.0f;
COMPILER_STRIP_GATE(0x80C6E9D0, &lit_3890);
#pragma pop

/* 80C6E9D4-80C6E9D8 000054 0004+00 0/1 0/0 0/0 .rodata          @3891 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3891 = -30.0f;
COMPILER_STRIP_GATE(0x80C6E9D4, &lit_3891);
#pragma pop

/* 80C6E9D8-80C6E9E0 000058 0004+04 0/1 0/0 0/0 .rodata          @3892 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3892[1 + 1 /* padding */] = {
    -210.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80C6E9D8, &lit_3892);
#pragma pop

/* 80C6E9E0-80C6E9E8 000060 0008+00 0/1 0/0 0/0 .rodata          @3894 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3894[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C6E9E0, &lit_3894);
#pragma pop

/* 80C6DC64-80C6E300 000584 069C+00 1/0 0/0 0/0 .text            Execute__14daObjYchndlr_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/Execute__14daObjYchndlr_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C6E300-80C6E3C8 000C20 00C8+00 1/0 0/0 0/0 .text            Draw__14daObjYchndlr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/Draw__14daObjYchndlr_cFv.s"
}
#pragma pop

/* 80C6E3C8-80C6E404 000CE8 003C+00 1/0 0/0 0/0 .text            Delete__14daObjYchndlr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYchndlr_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/Delete__14daObjYchndlr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6EAB8-80C6EAD8 -00001 0020+00 1/0 0/0 0/0 .data            daObjYchndlr_METHODS */
static actor_method_class daObjYchndlr_METHODS = {
    (process_method_func)daObjYchndlr_create1st__FP14daObjYchndlr_c,
    (process_method_func)daObjYchndlr_MoveBGDelete__FP14daObjYchndlr_c,
    (process_method_func)daObjYchndlr_MoveBGExecute__FP14daObjYchndlr_c,
    0,
    (process_method_func)daObjYchndlr_MoveBGDraw__FP14daObjYchndlr_c,
};

/* 80C6EAD8-80C6EB08 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Ychndlr */
extern actor_process_profile_definition g_profile_Obj_Ychndlr = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Ychndlr,       // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjYchndlr_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  664,                    // mPriority
  &daObjYchndlr_METHODS,  // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C6EB08-80C6EB14 000114 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C6EB14-80C6EB20 000120 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C6EB20-80C6EB2C 00012C 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C6EB2C-80C6EB38 000138 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C6EB38-80C6EB64 000144 002C+00 2/2 0/0 0/0 .data            __vt__14daObjYchndlr_c */
SECTION_DATA extern void* __vt__14daObjYchndlr_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daObjYchndlr_cFv,
    (void*)Create__14daObjYchndlr_cFv,
    (void*)Execute__14daObjYchndlr_cFPPA3_A4_f,
    (void*)Draw__14daObjYchndlr_cFv,
    (void*)Delete__14daObjYchndlr_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)__dt__14daObjYchndlr_cFv,
};

/* 80C6E404-80C6E518 000D24 0114+00 1/0 0/0 0/0 .text daObjYchndlr_create1st__FP14daObjYchndlr_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYchndlr_create1st(daObjYchndlr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/daObjYchndlr_create1st__FP14daObjYchndlr_c.s"
}
#pragma pop

/* 80C6E518-80C6E560 000E38 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C6E560-80C6E5A8 000E80 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C6E5A8-80C6E674 000EC8 00CC+00 2/2 0/0 0/0 .text            __dt__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Cyl::~dCcD_Cyl() {
extern "C" asm void __dt__8dCcD_CylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/__dt__8dCcD_CylFv.s"
}
#pragma pop

/* 80C6E674-80C6E6F8 000F94 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Cyl::dCcD_Cyl() {
extern "C" asm void __ct__8dCcD_CylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/__ct__8dCcD_CylFv.s"
}
#pragma pop

/* 80C6E6F8-80C6E754 001018 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C6E754-80C6E774 001074 0020+00 1/0 0/0 0/0 .text
 * daObjYchndlr_MoveBGDelete__FP14daObjYchndlr_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYchndlr_MoveBGDelete(daObjYchndlr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/daObjYchndlr_MoveBGDelete__FP14daObjYchndlr_c.s"
}
#pragma pop

/* 80C6E774-80C6E794 001094 0020+00 1/0 0/0 0/0 .text
 * daObjYchndlr_MoveBGExecute__FP14daObjYchndlr_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYchndlr_MoveBGExecute(daObjYchndlr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/daObjYchndlr_MoveBGExecute__FP14daObjYchndlr_c.s"
}
#pragma pop

/* 80C6E794-80C6E7C0 0010B4 002C+00 1/0 0/0 0/0 .text daObjYchndlr_MoveBGDraw__FP14daObjYchndlr_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYchndlr_MoveBGDraw(daObjYchndlr_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/daObjYchndlr_MoveBGDraw__FP14daObjYchndlr_c.s"
}
#pragma pop

/* 80C6E7C0-80C6E808 0010E0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C6E808-80C6E978 001128 0170+00 1/0 0/0 0/0 .text            __dt__14daObjYchndlr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjYchndlr_c::~daObjYchndlr_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5ychndlr/d_a_obj_lv5ychndlr/__dt__14daObjYchndlr_cFv.s"
}
#pragma pop

/* 80C6E9E8-80C6E9E8 000068 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
