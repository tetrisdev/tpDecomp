/**
 * @file d_a_obj_onsenTaru.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__15daOnsTaru_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__11daOnsTaru_cFv();
extern "C" void CreateHeap__11daOnsTaru_cFv();
extern "C" void create__11daOnsTaru_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void createHeapCallBack__11daOnsTaru_cFP10fopAc_ac_c();
extern "C" void chkSinkAll__11daOnsTaru_cFv();
extern "C" void chkWaterLineIn__11daOnsTaru_cFv();
extern "C" void bgCheck__11daOnsTaru_cFv();
extern "C" void Execute__11daOnsTaru_cFv();
extern "C" void mode_proc_call__11daOnsTaru_cFv();
extern "C" void mode_init_wait__11daOnsTaru_cFv();
extern "C" void mode_proc_wait__11daOnsTaru_cFv();
extern "C" void mode_init_carry__11daOnsTaru_cFv();
extern "C" void mode_proc_carry__11daOnsTaru_cFv();
extern "C" void mode_init_drop__11daOnsTaru_cFv();
extern "C" void mode_proc_drop__11daOnsTaru_cFv();
extern "C" void mode_init_break__11daOnsTaru_cFv();
extern "C" void mode_proc_break__11daOnsTaru_cFv();
extern "C" void mode_init_sink__11daOnsTaru_cFv();
extern "C" void mode_proc_sink__11daOnsTaru_cFv();
extern "C" void breakEffSet__11daOnsTaru_cFv();
extern "C" void Draw__11daOnsTaru_cFv();
extern "C" void Delete__11daOnsTaru_cFv();
extern "C" static void daOnsTaru_Draw__FP11daOnsTaru_c();
extern "C" static void daOnsTaru_Execute__FP11daOnsTaru_c();
extern "C" static void daOnsTaru_Delete__FP11daOnsTaru_c();
extern "C" static void daOnsTaru_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__15daOnsTaru_HIO_cFv();
extern "C" void __sinit_d_a_obj_onsenTaru_cpp();
extern "C" static void func_80CA9B54();
extern "C" static void func_80CA9B5C();
extern "C" u8 const mCcDObjInfo__11daOnsTaru_c[48];
extern "C" extern char const* const d_a_obj_onsenTaru__stringBase0;
extern "C" u8 mCcDCyl__11daOnsTaru_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fopKyM_createWpillar__FPC4cXyzfi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void
setModel__18dPa_modelEcallBackFP14JPABaseEmitterP12J3DModelDataRC12dKy_tevstr_cUcPvUcUc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void GetAtHitGObj__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mEcallback__18dPa_modelEcallBack[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CA9B78-80CA9B7C 000000 0004+00 7/7 0/0 0/0 .rodata          @3655 */
SECTION_RODATA static f32 const lit_3655 = 1.0f;
COMPILER_STRIP_GATE(0x80CA9B78, &lit_3655);

/* 80CA9B7C-80CA9B80 000004 0004+00 1/2 0/0 0/0 .rodata          @3656 */
SECTION_RODATA static f32 const lit_3656 = 125.0f;
COMPILER_STRIP_GATE(0x80CA9B7C, &lit_3656);

/* 80CA9C18-80CA9C24 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA9C24-80CA9C38 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80CA9C38-80CA9C7C 000020 0044+00 2/2 0/0 0/0 .data            mCcDCyl__11daOnsTaru_c */
SECTION_DATA u8 daOnsTaru_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA9C7C-80CA9C88 -00001 000C+00 0/1 0/0 0/0 .data            @4002 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4002[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_wait__11daOnsTaru_cFv,
};
#pragma pop

/* 80CA9C88-80CA9C94 -00001 000C+00 0/1 0/0 0/0 .data            @4003 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4003[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_carry__11daOnsTaru_cFv,
};
#pragma pop

/* 80CA9C94-80CA9CA0 -00001 000C+00 0/1 0/0 0/0 .data            @4004 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4004[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_drop__11daOnsTaru_cFv,
};
#pragma pop

/* 80CA9CA0-80CA9CAC -00001 000C+00 0/1 0/0 0/0 .data            @4005 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4005[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_break__11daOnsTaru_cFv,
};
#pragma pop

/* 80CA9CAC-80CA9CB8 -00001 000C+00 0/1 0/0 0/0 .data            @4006 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4006[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_sink__11daOnsTaru_cFv,
};
#pragma pop

/* 80CA9CB8-80CA9CF4 0000A0 003C+00 0/1 0/0 0/0 .data            l_mode_func$4001 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_mode_func[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CA9CF4-80CA9D14 -00001 0020+00 1/0 0/0 0/0 .data            l_daOnsTaru_Method */
static actor_method_class l_daOnsTaru_Method = {
    (process_method_func)daOnsTaru_Create__FP10fopAc_ac_c,
    (process_method_func)daOnsTaru_Delete__FP11daOnsTaru_c,
    (process_method_func)daOnsTaru_Execute__FP11daOnsTaru_c,
    0,
    (process_method_func)daOnsTaru_Draw__FP11daOnsTaru_c,
};

/* 80CA9D14-80CA9D44 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_OnsenTaru */
extern actor_process_profile_definition g_profile_Obj_OnsenTaru = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_OnsenTaru,     // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daOnsTaru_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  510,                    // mPriority
  &l_daOnsTaru_Method,    // sub_method
  0x00040020,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80CA9D44-80CA9D50 00012C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80CA9D50-80CA9D5C 000138 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CA9D5C-80CA9D68 000144 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CA9D68-80CA9D74 000150 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CA9D74-80CA9D80 00015C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CA9D80-80CA9DA4 000168 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CA9B5C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CA9B54,
};

/* 80CA9DA4-80CA9DBC 00018C 0018+00 1/1 0/0 0/0 .data            __vt__11daOnsTaru_c */
SECTION_DATA extern void* __vt__11daOnsTaru_c[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daOnsTaru_cFv,
    (void*)Execute__11daOnsTaru_cFv,
    (void*)Draw__11daOnsTaru_cFv,
    (void*)Delete__11daOnsTaru_cFv,
};

/* 80CA9DBC-80CA9DC8 0001A4 000C+00 2/2 0/0 0/0 .data            __vt__15daOnsTaru_HIO_c */
SECTION_DATA extern void* __vt__15daOnsTaru_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daOnsTaru_HIO_cFv,
};

/* 80CA9DC8-80CA9DD4 0001B0 000C+00 3/3 0/0 0/0 .data            __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA extern void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80CA9DD4-80CA9DE0 0001BC 000C+00 4/4 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80CA85CC-80CA861C 0000EC 0050+00 1/1 0/0 0/0 .text            __ct__15daOnsTaru_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daOnsTaru_HIO_c::daOnsTaru_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__ct__15daOnsTaru_HIO_cFv.s"
}
#pragma pop

/* 80CA861C-80CA8678 00013C 005C+00 1/0 0/0 0/0 .text            __dt__18fOpAcm_HIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
extern "C" asm void __dt__18fOpAcm_HIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__18fOpAcm_HIO_entry_cFv.s"
}
#pragma pop

/* 80CA8678-80CA86C0 000198 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" asm void __dt__14mDoHIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80CA86C0-80CA8748 0001E0 0088+00 2/2 0/0 0/0 .text            setBaseMtx__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/setBaseMtx__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9BF4-80CA9BF4 00007C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CA9BF4 = "maroTaru";
#pragma pop

/* 80CA8748-80CA87B4 000268 006C+00 1/0 0/0 0/0 .text            CreateHeap__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/CreateHeap__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9B80-80CA9BB0 000008 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__11daOnsTaru_c */
SECTION_RODATA u8 const daOnsTaru_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
    0xD8, 0xFA, 0xDD, 0xAF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CA9B80, &daOnsTaru_c::mCcDObjInfo);

/* 80CA9BB0-80CA9BB4 000038 0004+00 0/2 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3772 = 110.0f;
COMPILER_STRIP_GATE(0x80CA9BB0, &lit_3772);
#pragma pop

/* 80CA9BB4-80CA9BB8 00003C 0004+00 0/2 0/0 0/0 .rodata          @3773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3773 = 50.0f;
COMPILER_STRIP_GATE(0x80CA9BB4, &lit_3773);
#pragma pop

/* 80CA9BB8-80CA9BBC 000040 0004+00 2/4 0/0 0/0 .rodata          @3774 */
SECTION_RODATA static f32 const lit_3774 = -7.0f;
COMPILER_STRIP_GATE(0x80CA9BB8, &lit_3774);

/* 80CA9BBC-80CA9BC0 000044 0004+00 0/1 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3775 = -100.0f;
COMPILER_STRIP_GATE(0x80CA9BBC, &lit_3775);
#pragma pop

/* 80CA87B4-80CA8A54 0002D4 02A0+00 1/1 0/0 0/0 .text            create__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/create__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA8A54-80CA8A9C 000574 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80CA8A9C-80CA8AE4 0005BC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CA8AE4-80CA8B40 000604 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CA8B40-80CA8BB0 000660 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80CA8BB0-80CA8C20 0006D0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80CA8C20-80CA8C4C 000740 002C+00 1/1 0/0 0/0 .text
 * createHeapCallBack__11daOnsTaru_cFP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/createHeapCallBack__11daOnsTaru_cFP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9BC0-80CA9BC4 000048 0004+00 1/2 0/0 0/0 .rodata          @3863 */
SECTION_RODATA static f32 const lit_3863 = 100.0f;
COMPILER_STRIP_GATE(0x80CA9BC0, &lit_3863);

/* 80CA8C4C-80CA8C70 00076C 0024+00 1/1 0/0 0/0 .text            chkSinkAll__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::chkSinkAll() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/chkSinkAll__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9BC4-80CA9BC8 00004C 0004+00 1/1 0/0 0/0 .rodata          @3869 */
SECTION_RODATA static f32 const lit_3869 = 40.0f;
COMPILER_STRIP_GATE(0x80CA9BC4, &lit_3869);

/* 80CA8C70-80CA8C94 000790 0024+00 3/3 0/0 0/0 .text            chkWaterLineIn__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::chkWaterLineIn() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/chkWaterLineIn__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9BC8-80CA9BCC 000050 0004+00 0/2 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3950 = -1.0f;
COMPILER_STRIP_GATE(0x80CA9BC8, &lit_3950);
#pragma pop

/* 80CA9BCC-80CA9BD0 000054 0004+00 0/2 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3951 = -15.0f;
COMPILER_STRIP_GATE(0x80CA9BCC, &lit_3951);
#pragma pop

/* 80CA9BD0-80CA9BD4 000058 0004+00 0/1 0/0 0/0 .rodata          @3952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3952 = 2.0f;
COMPILER_STRIP_GATE(0x80CA9BD0, &lit_3952);
#pragma pop

/* 80CA9BD4-80CA9BD8 00005C 0004+00 0/2 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CA9BD4, &lit_3953);
#pragma pop

/* 80CA8C94-80CA8F38 0007B4 02A4+00 1/1 0/0 0/0 .text            bgCheck__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::bgCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/bgCheck__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9DE8-80CA9DF4 000008 000C+00 1/1 0/0 0/0 .bss             @3647 */
static u8 lit_3647[12];

/* 80CA9DF4-80CA9E04 000014 0010+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80CA8F38-80CA9184 000A58 024C+00 1/0 0/0 0/0 .text            Execute__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/Execute__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9E04-80CA9E08 000024 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80CA9E04[4];

/* 80CA9184-80CA929C 000CA4 0118+00 1/1 0/0 0/0 .text            mode_proc_call__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_proc_call__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9BD8-80CA9BDC 000060 0004+00 3/5 0/0 0/0 .rodata          @4020 */
SECTION_RODATA static u8 const lit_4020[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CA9BD8, &lit_4020);

/* 80CA929C-80CA92CC 000DBC 0030+00 2/2 0/0 0/0 .text            mode_init_wait__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_init_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_init_wait__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA92CC-80CA92F0 000DEC 0024+00 1/0 0/0 0/0 .text            mode_proc_wait__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_proc_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_proc_wait__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA92F0-80CA9320 000E10 0030+00 1/1 0/0 0/0 .text            mode_init_carry__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_init_carry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_init_carry__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA9320-80CA93C0 000E40 00A0+00 1/0 0/0 0/0 .text            mode_proc_carry__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_proc_carry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_proc_carry__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA93C0-80CA9400 000EE0 0040+00 1/1 0/0 0/0 .text            mode_init_drop__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_init_drop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_init_drop__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA9400-80CA9424 000F20 0024+00 1/0 0/0 0/0 .text            mode_proc_drop__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_proc_drop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_proc_drop__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA9424-80CA9514 000F44 00F0+00 2/2 0/0 0/0 .text            mode_init_break__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_init_break() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_init_break__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA9514-80CA9518 001034 0004+00 1/0 0/0 0/0 .text            mode_proc_break__11daOnsTaru_cFv */
void daOnsTaru_c::mode_proc_break() {
    /* empty function */
}

/* 80CA9518-80CA9530 001038 0018+00 2/2 0/0 0/0 .text            mode_init_sink__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_init_sink() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_init_sink__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9BDC-80CA9BE0 000064 0004+00 0/1 0/0 0/0 .rodata          @4132 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4132 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80CA9BDC, &lit_4132);
#pragma pop

/* 80CA9BE0-80CA9BE4 000068 0004+00 0/1 0/0 0/0 .rodata          @4133 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4133 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80CA9BE0, &lit_4133);
#pragma pop

/* 80CA9BE4-80CA9BE8 00006C 0004+00 0/1 0/0 0/0 .rodata          @4134 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4134 = 13.0f;
COMPILER_STRIP_GATE(0x80CA9BE4, &lit_4134);
#pragma pop

/* 80CA9BE8-80CA9BEC 000070 0004+00 0/1 0/0 0/0 .rodata          @4135 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4135 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CA9BE8, &lit_4135);
#pragma pop

/* 80CA9BEC-80CA9BF0 000074 0004+00 0/1 0/0 0/0 .rodata          @4136 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4136 = -6.0f;
COMPILER_STRIP_GATE(0x80CA9BEC, &lit_4136);
#pragma pop

/* 80CA9530-80CA9620 001050 00F0+00 1/0 0/0 0/0 .text            mode_proc_sink__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::mode_proc_sink() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/mode_proc_sink__11daOnsTaru_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA9BF0-80CA9BF4 000078 0004+00 1/1 0/0 0/0 .rodata          @4186 */
SECTION_RODATA static f32 const lit_4186 = 0.75f;
COMPILER_STRIP_GATE(0x80CA9BF0, &lit_4186);

/* 80CA9BF4-80CA9BF4 00007C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CA9BFD = "Always";
SECTION_DEAD static char const* const stringBase_80CA9C04 = "BreakWoodBox.bmd";
#pragma pop

/* 80CA9620-80CA98B8 001140 0298+00 1/1 0/0 0/0 .text            breakEffSet__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::breakEffSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/breakEffSet__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA98B8-80CA995C 0013D8 00A4+00 1/0 0/0 0/0 .text            Draw__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/Draw__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA995C-80CA998C 00147C 0030+00 1/0 0/0 0/0 .text            Delete__11daOnsTaru_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daOnsTaru_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/Delete__11daOnsTaru_cFv.s"
}
#pragma pop

/* 80CA998C-80CA99B8 0014AC 002C+00 1/0 0/0 0/0 .text            daOnsTaru_Draw__FP11daOnsTaru_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daOnsTaru_Draw(daOnsTaru_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/daOnsTaru_Draw__FP11daOnsTaru_c.s"
}
#pragma pop

/* 80CA99B8-80CA99E4 0014D8 002C+00 1/0 0/0 0/0 .text            daOnsTaru_Execute__FP11daOnsTaru_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daOnsTaru_Execute(daOnsTaru_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/daOnsTaru_Execute__FP11daOnsTaru_c.s"
}
#pragma pop

/* 80CA99E4-80CA9A10 001504 002C+00 1/0 0/0 0/0 .text            daOnsTaru_Delete__FP11daOnsTaru_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daOnsTaru_Delete(daOnsTaru_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/daOnsTaru_Delete__FP11daOnsTaru_c.s"
}
#pragma pop

/* 80CA9A10-80CA9A30 001530 0020+00 1/0 0/0 0/0 .text            daOnsTaru_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daOnsTaru_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/daOnsTaru_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CA9A30-80CA9A78 001550 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80CA9A78-80CA9AE4 001598 006C+00 2/1 0/0 0/0 .text            __dt__15daOnsTaru_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daOnsTaru_HIO_c::~daOnsTaru_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__dt__15daOnsTaru_HIO_cFv.s"
}
#pragma pop

/* 80CA9AE4-80CA9B54 001604 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_onsenTaru_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_onsenTaru_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/__sinit_d_a_obj_onsenTaru_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80CA9AE4, __sinit_d_a_obj_onsenTaru_cpp);
#pragma pop

/* 80CA9B54-80CA9B5C 001674 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CA9B54() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/func_80CA9B54.s"
}
#pragma pop

/* 80CA9B5C-80CA9B64 00167C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CA9B5C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenTaru/d_a_obj_onsenTaru/func_80CA9B5C.s"
}
#pragma pop

/* 80CA9BF4-80CA9BF4 00007C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
