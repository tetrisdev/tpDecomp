/**
 * @file d_a_obj_TvCdlst.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__15daTvCdlst_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__11daTvCdlst_cFv();
extern "C" void CreateHeap__11daTvCdlst_cFv();
extern "C" void create__11daTvCdlst_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void createHeapCallBack__11daTvCdlst_cFP10fopAc_ac_c();
extern "C" void lightInit__11daTvCdlst_cFv();
extern "C" void setLight__11daTvCdlst_cFv();
extern "C" void cutLight__11daTvCdlst_cFv();
extern "C" void pointLightProc__11daTvCdlst_cFv();
extern "C" void Execute__11daTvCdlst_cFv();
extern "C" void Draw__11daTvCdlst_cFv();
extern "C" void Delete__11daTvCdlst_cFv();
extern "C" static void daTvCdlst_Draw__FP11daTvCdlst_c();
extern "C" static void daTvCdlst_Execute__FP11daTvCdlst_c();
extern "C" static void daTvCdlst_Delete__FP11daTvCdlst_c();
extern "C" static void daTvCdlst_Create__FP10fopAc_ac_c();
extern "C" void __dt__15daTvCdlst_HIO_cFv();
extern "C" void __sinit_d_a_obj_TvCdlst_cpp();
extern "C" u8 const mCcDObjInfo__11daTvCdlst_c[48];
extern "C" extern char const* const d_a_obj_TvCdlst__stringBase0;
extern "C" u8 mCcDCyl__11daTvCdlst_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 g_whiteColor;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80B9F900-80B9F944 000000 0044+00 2/2 0/0 0/0 .data            mCcDCyl__11daTvCdlst_c */
SECTION_DATA u8 daTvCdlst_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B9F944-80B9F964 -00001 0020+00 1/0 0/0 0/0 .data            l_daTvCdlst_Method */
static actor_method_class l_daTvCdlst_Method = {
    (process_method_func)daTvCdlst_Create__FP10fopAc_ac_c,
    (process_method_func)daTvCdlst_Delete__FP11daTvCdlst_c,
    (process_method_func)daTvCdlst_Execute__FP11daTvCdlst_c,
    0,
    (process_method_func)daTvCdlst_Draw__FP11daTvCdlst_c,
};

/* 80B9F964-80B9F994 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_TvCdlst */
extern actor_process_profile_definition g_profile_Obj_TvCdlst = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_TvCdlst,       // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daTvCdlst_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  496,                    // mPriority
  &l_daTvCdlst_Method,    // sub_method
  0x00044000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80B9F994-80B9F9A0 000094 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80B9F9A0-80B9F9AC 0000A0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80B9F9AC-80B9F9B8 0000AC 000C+00 2/2 0/0 0/0 .data            __vt__15daTvCdlst_HIO_c */
SECTION_DATA extern void* __vt__15daTvCdlst_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daTvCdlst_HIO_cFv,
};

/* 80B9F9B8-80B9F9C4 0000B8 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80B9ECCC-80B9ECF8 0000EC 002C+00 1/1 0/0 0/0 .text            __ct__15daTvCdlst_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTvCdlst_HIO_c::daTvCdlst_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/__ct__15daTvCdlst_HIO_cFv.s"
}
#pragma pop

/* 80B9ECF8-80B9ED40 000118 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" asm void __dt__14mDoHIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80B9ED40-80B9EDC8 000160 0088+00 2/2 0/0 0/0 .text            setBaseMtx__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/setBaseMtx__11daTvCdlst_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9F8F4-80B9F8F4 000064 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B9F8F4 = "HShokudai";
#pragma pop

/* 80B9EDC8-80B9EE34 0001E8 006C+00 1/1 0/0 0/0 .text            CreateHeap__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/CreateHeap__11daTvCdlst_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9F890-80B9F8C0 000000 0030+00 4/4 0/0 0/0 .rodata          mCcDObjInfo__11daTvCdlst_c */
SECTION_RODATA u8 const daTvCdlst_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9F890, &daTvCdlst_c::mCcDObjInfo);

/* 80B9F8C0-80B9F8C4 000030 0004+00 1/1 0/0 0/0 .rodata          @3750 */
SECTION_RODATA static f32 const lit_3750 = 155.0f;
COMPILER_STRIP_GATE(0x80B9F8C0, &lit_3750);

/* 80B9EE34-80B9F0B4 000254 0280+00 1/1 0/0 0/0 .text            create__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/create__11daTvCdlst_cFv.s"
}
#pragma pop

/* 80B9F0B4-80B9F0FC 0004D4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80B9F0FC-80B9F144 00051C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80B9F144-80B9F164 000564 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__11daTvCdlst_cFP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/createHeapCallBack__11daTvCdlst_cFP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9F8C4-80B9F8C8 000034 0004+00 0/1 0/0 0/0 .rodata          @3840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3840 = 10.0f;
COMPILER_STRIP_GATE(0x80B9F8C4, &lit_3840);
#pragma pop

/* 80B9F8C8-80B9F8CC 000038 0004+00 0/1 0/0 0/0 .rodata          @3841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3841 = 500.0f;
COMPILER_STRIP_GATE(0x80B9F8C8, &lit_3841);
#pragma pop

/* 80B9F8CC-80B9F8D0 00003C 0004+00 0/3 0/0 0/0 .rodata          @3842 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3842 = 1.0f;
COMPILER_STRIP_GATE(0x80B9F8CC, &lit_3842);
#pragma pop

/* 80B9F8D0-80B9F8D4 000040 0004+00 0/3 0/0 0/0 .rodata          @3843 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3843[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B9F8D0, &lit_3843);
#pragma pop

/* 80B9F164-80B9F1F0 000584 008C+00 1/1 0/0 0/0 .text            lightInit__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::lightInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/lightInit__11daTvCdlst_cFv.s"
}
#pragma pop

/* 80B9F1F0-80B9F220 000610 0030+00 2/2 0/0 0/0 .text            setLight__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::setLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/setLight__11daTvCdlst_cFv.s"
}
#pragma pop

/* 80B9F220-80B9F250 000640 0030+00 1/1 0/0 0/0 .text            cutLight__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::cutLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/cutLight__11daTvCdlst_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9F8D4-80B9F8D8 000044 0004+00 0/1 0/0 0/0 .rodata          @3861 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3861 = 0xBC6642FF;
COMPILER_STRIP_GATE(0x80B9F8D4, &lit_3861);
#pragma pop

/* 80B9F8D8-80B9F8DC 000048 0004+00 0/1 0/0 0/0 .rodata          @3869 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3869 = 0.5f;
COMPILER_STRIP_GATE(0x80B9F8D8, &lit_3869);
#pragma pop

/* 80B9F8DC-80B9F8E0 00004C 0004+00 0/1 0/0 0/0 .rodata          @3870 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3870 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B9F8DC, &lit_3870);
#pragma pop

/* 80B9F8E0-80B9F8E4 000050 0004+00 0/1 0/0 0/0 .rodata          @3871 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3871 = 0x38D1B717;
COMPILER_STRIP_GATE(0x80B9F8E0, &lit_3871);
#pragma pop

/* 80B9F8E4-80B9F8E8 000054 0004+00 0/1 0/0 0/0 .rodata          @3872 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3872 = 0x358637BD;
COMPILER_STRIP_GATE(0x80B9F8E4, &lit_3872);
#pragma pop

/* 80B9F250-80B9F300 000670 00B0+00 1/1 0/0 0/0 .text            pointLightProc__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::pointLightProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/pointLightProc__11daTvCdlst_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9F8E8-80B9F8EC 000058 0004+00 0/1 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937 = -1.0f;
COMPILER_STRIP_GATE(0x80B9F8E8, &lit_3937);
#pragma pop

/* 80B9F8EC-80B9F8F0 00005C 0004+00 0/1 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3938 = 25.0f;
COMPILER_STRIP_GATE(0x80B9F8EC, &lit_3938);
#pragma pop

/* 80B9F8F0-80B9F8F4 000060 0004+00 0/1 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3939 = 140.0f;
COMPILER_STRIP_GATE(0x80B9F8F0, &lit_3939);
#pragma pop

/* 80B9F300-80B9F634 000720 0334+00 1/1 0/0 0/0 .text            Execute__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/Execute__11daTvCdlst_cFv.s"
}
#pragma pop

/* 80B9F634-80B9F6D8 000A54 00A4+00 1/1 0/0 0/0 .text            Draw__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/Draw__11daTvCdlst_cFv.s"
}
#pragma pop

/* 80B9F6D8-80B9F730 000AF8 0058+00 1/1 0/0 0/0 .text            Delete__11daTvCdlst_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTvCdlst_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/Delete__11daTvCdlst_cFv.s"
}
#pragma pop

/* 80B9F730-80B9F750 000B50 0020+00 1/0 0/0 0/0 .text            daTvCdlst_Draw__FP11daTvCdlst_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTvCdlst_Draw(daTvCdlst_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/daTvCdlst_Draw__FP11daTvCdlst_c.s"
}
#pragma pop

/* 80B9F750-80B9F770 000B70 0020+00 1/0 0/0 0/0 .text            daTvCdlst_Execute__FP11daTvCdlst_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTvCdlst_Execute(daTvCdlst_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/daTvCdlst_Execute__FP11daTvCdlst_c.s"
}
#pragma pop

/* 80B9F770-80B9F790 000B90 0020+00 1/0 0/0 0/0 .text            daTvCdlst_Delete__FP11daTvCdlst_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTvCdlst_Delete(daTvCdlst_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/daTvCdlst_Delete__FP11daTvCdlst_c.s"
}
#pragma pop

/* 80B9F790-80B9F7B0 000BB0 0020+00 1/0 0/0 0/0 .text            daTvCdlst_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTvCdlst_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/daTvCdlst_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80B9F7B0-80B9F80C 000BD0 005C+00 2/1 0/0 0/0 .text            __dt__15daTvCdlst_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTvCdlst_HIO_c::~daTvCdlst_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/__dt__15daTvCdlst_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9F9D0-80B9F9DC 000008 000C+00 1/1 0/0 0/0 .bss             @3622 */
static u8 lit_3622[12];

/* 80B9F9DC-80B9F9E4 000014 0008+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 80B9F80C-80B9F87C 000C2C 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_TvCdlst_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_TvCdlst_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_TvCdlst/d_a_obj_TvCdlst/__sinit_d_a_obj_TvCdlst_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80B9F80C, __sinit_d_a_obj_TvCdlst_cpp);
#pragma pop

/* 80B9F8F4-80B9F8F4 000064 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
