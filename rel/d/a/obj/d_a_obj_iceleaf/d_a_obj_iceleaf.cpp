/**
 * @file d_a_obj_iceleaf.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void initBaseMtx__14daObjIceLeaf_cFv();
extern "C" void setBaseMtx__14daObjIceLeaf_cFv();
extern "C" void Create__14daObjIceLeaf_cFv();
extern "C" void setAnmPos__14daObjIceLeaf_cFv();
extern "C" void CreateHeap__14daObjIceLeaf_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create__14daObjIceLeaf_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void execute__14daObjIceLeaf_cFv();
extern "C" void action__14daObjIceLeaf_cFv();
extern "C" void modeDropWait__14daObjIceLeaf_cFv();
extern "C" void modeDrop__14daObjIceLeaf_cFv();
extern "C" void modePlayerWait__14daObjIceLeaf_cFv();
extern "C" void modeRide__14daObjIceLeaf_cFv();
extern "C" void event_proc_call__14daObjIceLeaf_cFv();
extern "C" void actionWait__14daObjIceLeaf_cFv();
extern "C" void actionOrderEvent__14daObjIceLeaf_cFv();
extern "C" void actionEvent__14daObjIceLeaf_cFv();
extern "C" void actionDead__14daObjIceLeaf_cFv();
extern "C" void setFallSE__14daObjIceLeaf_cFv();
extern "C" void draw__14daObjIceLeaf_cFv();
extern "C" void _delete__14daObjIceLeaf_cFv();
extern "C" static void daObjIceLeaf_Draw__FP14daObjIceLeaf_c();
extern "C" static void daObjIceLeaf_Execute__FP14daObjIceLeaf_c();
extern "C" static void daObjIceLeaf_Delete__FP14daObjIceLeaf_c();
extern "C" static void daObjIceLeaf_Create__FP14daObjIceLeaf_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_80C25D4C();
extern "C" static void func_80C25D54();
extern "C" extern char const* const d_a_obj_iceleaf__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_atan2s__Fff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80C25F98[4];

//
// Declarations:
//

/* 80C24718-80C24738 000078 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C24738-80C24774 000098 003C+00 1/1 0/0 0/0 .text            initBaseMtx__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/initBaseMtx__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C25D64-80C25D68 000000 0004+00 5/5 0/0 0/0 .rodata          @3703 */
SECTION_RODATA static u8 const lit_3703[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C25D64, &lit_3703);

/* 80C25D68-80C25D6C 000004 0004+00 1/1 0/0 0/0 .rodata          @3704 */
SECTION_RODATA static f32 const lit_3704 = -9.0f;
COMPILER_STRIP_GATE(0x80C25D68, &lit_3704);

/* 80C25DA4-80C25DA4 000040 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C25DA4 = "V_IceLeaf";
#pragma pop

/* 80C25DB0-80C25DBC 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C25DBC-80C25DD0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80C25DD0-80C25DD4 -00001 0004+00 7/7 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_iceleaf__stringBase0;

/* 80C24774-80C249E4 0000D4 0270+00 2/2 0/0 0/0 .text            setBaseMtx__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/setBaseMtx__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C25D6C-80C25D70 000008 0004+00 0/1 0/0 0/0 .rodata          @3757 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3757 = 30.0f;
COMPILER_STRIP_GATE(0x80C25D6C, &lit_3757);
#pragma pop

/* 80C25D70-80C25D74 00000C 0004+00 0/1 0/0 0/0 .rodata          @3758 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3758 = 100.0f;
COMPILER_STRIP_GATE(0x80C25D70, &lit_3758);
#pragma pop

/* 80C25D74-80C25D78 000010 0004+00 0/1 0/0 0/0 .rodata          @3759 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3759 = 500.0f;
COMPILER_STRIP_GATE(0x80C25D74, &lit_3759);
#pragma pop

/* 80C25DD4-80C25E18 000024 0044+00 1/1 0/0 0/0 .data            l_cyl_src */
static dCcD_SrcCyl l_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x1f}, {0x400000, 0x11}, 0x78}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x6}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        50.0f, // mRadius
        100.0f // mHeight
    } // mCyl
};

/* 80C249E4-80C24BC4 000344 01E0+00 1/1 0/0 0/0 .text            Create__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/Create__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C24BC4-80C24C9C 000524 00D8+00 2/2 0/0 0/0 .text            setAnmPos__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::setAnmPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/setAnmPos__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C25D78-80C25D7C 000014 0004+00 4/5 0/0 0/0 .rodata          @3806 */
SECTION_RODATA static f32 const lit_3806 = 1.0f;
COMPILER_STRIP_GATE(0x80C25D78, &lit_3806);

/* 80C25E18-80C25E24 -00001 000C+00 0/1 0/0 0/0 .data            @3975 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3975[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDropWait__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25E24-80C25E30 -00001 000C+00 0/1 0/0 0/0 .data            @3976 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3976[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeDrop__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25E30-80C25E3C -00001 000C+00 0/1 0/0 0/0 .data            @3977 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3977[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modePlayerWait__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25E3C-80C25E48 -00001 000C+00 0/1 0/0 0/0 .data            @3978 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3978[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeRide__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25E48-80C25E78 000098 0030+00 0/1 0/0 0/0 .data            l_func$3974 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_3974[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C25E78-80C25E84 -00001 000C+00 0/1 0/0 0/0 .data            @4108 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4108[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25E84-80C25E90 -00001 000C+00 0/1 0/0 0/0 .data            @4109 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4109[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25E90-80C25E9C -00001 000C+00 0/1 0/0 0/0 .data            @4110 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4110[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25E9C-80C25EA8 -00001 000C+00 0/1 0/0 0/0 .data            @4111 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4111[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__14daObjIceLeaf_cFv,
};
#pragma pop

/* 80C25EA8-80C25ED8 0000F8 0030+00 0/1 0/0 0/0 .data            l_func$4107 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_4107[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C25ED8-80C25EF8 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjIceLeaf_Method */
static actor_method_class l_daObjIceLeaf_Method = {
    (process_method_func)daObjIceLeaf_Create__FP14daObjIceLeaf_c,
    (process_method_func)daObjIceLeaf_Delete__FP14daObjIceLeaf_c,
    (process_method_func)daObjIceLeaf_Execute__FP14daObjIceLeaf_c,
    0,
    (process_method_func)daObjIceLeaf_Draw__FP14daObjIceLeaf_c,
};

/* 80C25EF8-80C25F28 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_IceLeaf */
extern actor_process_profile_definition g_profile_Obj_IceLeaf = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_IceLeaf,       // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjIceLeaf_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  567,                    // mPriority
  &l_daObjIceLeaf_Method, // sub_method
  0x00060000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C25F28-80C25F34 000178 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80C25F34-80C25F40 000184 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C25F40-80C25F4C 000190 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C25F4C-80C25F58 00019C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C25F58-80C25F64 0001A8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C25F64-80C25F88 0001B4 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C25D54,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C25D4C,
};

/* 80C25F88-80C25F94 0001D8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C24C9C-80C24DCC 0005FC 0130+00 1/1 0/0 0/0 .text            CreateHeap__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/CreateHeap__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C24DCC-80C24E14 00072C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C24E14-80C24F8C 000774 0178+00 1/1 0/0 0/0 .text            create__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/func_80C24E14.s"
}
#pragma pop

/* 80C24F8C-80C24FD4 0008EC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C24FD4-80C2501C 000934 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C2501C-80C25078 00097C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C25078-80C250E8 0009D8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80C250E8-80C25158 000A48 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C25158-80C25360 000AB8 0208+00 1/1 0/0 0/0 .text            execute__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/execute__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C25360-80C2541C 000CC0 00BC+00 1/1 0/0 0/0 .text            action__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/action__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C25D7C-80C25D84 000018 0008+00 0/1 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4030[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C25D7C, &lit_4030);
#pragma pop

/* 80C25D84-80C25D8C 000020 0008+00 0/1 0/0 0/0 .rodata          @4031 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4031[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C25D84, &lit_4031);
#pragma pop

/* 80C25D8C-80C25D94 000028 0008+00 0/1 0/0 0/0 .rodata          @4032 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4032[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C25D8C, &lit_4032);
#pragma pop

/* 80C25D94-80C25D98 000030 0004+00 0/1 0/0 0/0 .rodata          @4033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4033 = 250.0f;
COMPILER_STRIP_GATE(0x80C25D94, &lit_4033);
#pragma pop

/* 80C2541C-80C25614 000D7C 01F8+00 1/0 0/0 0/0 .text            modeDropWait__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::modeDropWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/modeDropWait__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C25D98-80C25D9C 000034 0004+00 0/1 0/0 0/0 .rodata          @4093 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4093 = 12.0f;
COMPILER_STRIP_GATE(0x80C25D98, &lit_4093);
#pragma pop

/* 80C25D9C-80C25DA0 000038 0004+00 0/1 0/0 0/0 .rodata          @4094 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4094 = 5.0f;
COMPILER_STRIP_GATE(0x80C25D9C, &lit_4094);
#pragma pop

/* 80C25DA0-80C25DA4 00003C 0004+00 1/2 0/0 0/0 .rodata          @4095 */
SECTION_RODATA static f32 const lit_4095 = -1.0f;
COMPILER_STRIP_GATE(0x80C25DA0, &lit_4095);

/* 80C25614-80C258F8 000F74 02E4+00 1/0 0/0 0/0 .text            modeDrop__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::modeDrop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/modeDrop__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C258F8-80C25904 001258 000C+00 1/0 0/0 0/0 .text            modePlayerWait__14daObjIceLeaf_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::modePlayerWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/modePlayerWait__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C25904-80C25908 001264 0004+00 1/0 0/0 0/0 .text            modeRide__14daObjIceLeaf_cFv */
void daObjIceLeaf_c::modeRide() {
    /* empty function */
}

/* 80C25908-80C259C4 001268 00BC+00 1/1 0/0 0/0 .text            event_proc_call__14daObjIceLeaf_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/event_proc_call__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C259C4-80C259C8 001324 0004+00 1/0 0/0 0/0 .text            actionWait__14daObjIceLeaf_cFv */
void daObjIceLeaf_c::actionWait() {
    /* empty function */
}

/* 80C259C8-80C25A68 001328 00A0+00 1/0 0/0 0/0 .text actionOrderEvent__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::actionOrderEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/actionOrderEvent__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C25A68-80C25AC4 0013C8 005C+00 1/0 0/0 0/0 .text            actionEvent__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/actionEvent__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C25AC4-80C25AC8 001424 0004+00 1/0 0/0 0/0 .text            actionDead__14daObjIceLeaf_cFv */
void daObjIceLeaf_c::actionDead() {
    /* empty function */
}

/* 80C25AC8-80C25BB8 001428 00F0+00 1/1 0/0 0/0 .text            setFallSE__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::setFallSE() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/setFallSE__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C25BB8-80C25C50 001518 0098+00 1/1 0/0 0/0 .text            draw__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/draw__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C25C50-80C25C84 0015B0 0034+00 1/1 0/0 0/0 .text            _delete__14daObjIceLeaf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceLeaf_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/_delete__14daObjIceLeaf_cFv.s"
}
#pragma pop

/* 80C25C84-80C25CA4 0015E4 0020+00 1/0 0/0 0/0 .text daObjIceLeaf_Draw__FP14daObjIceLeaf_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceLeaf_Draw(daObjIceLeaf_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/daObjIceLeaf_Draw__FP14daObjIceLeaf_c.s"
}
#pragma pop

/* 80C25CA4-80C25CC4 001604 0020+00 1/0 0/0 0/0 .text daObjIceLeaf_Execute__FP14daObjIceLeaf_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceLeaf_Execute(daObjIceLeaf_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/daObjIceLeaf_Execute__FP14daObjIceLeaf_c.s"
}
#pragma pop

/* 80C25CC4-80C25CE4 001624 0020+00 1/0 0/0 0/0 .text daObjIceLeaf_Delete__FP14daObjIceLeaf_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceLeaf_Delete(daObjIceLeaf_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/daObjIceLeaf_Delete__FP14daObjIceLeaf_c.s"
}
#pragma pop

/* 80C25CE4-80C25D04 001644 0020+00 1/0 0/0 0/0 .text daObjIceLeaf_Create__FP14daObjIceLeaf_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceLeaf_Create(daObjIceLeaf_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/daObjIceLeaf_Create__FP14daObjIceLeaf_c.s"
}
#pragma pop

/* 80C25D04-80C25D4C 001664 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C25D4C-80C25D54 0016AC 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C25D4C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/func_80C25D4C.s"
}
#pragma pop

/* 80C25D54-80C25D5C 0016B4 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C25D54() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf/func_80C25D54.s"
}
#pragma pop

/* 80C25DA4-80C25DA4 000040 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
