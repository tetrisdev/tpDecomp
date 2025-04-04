/**
 * @file d_a_obj_so.cpp
 * 
*/

#include "d/actor/d_a_obj_so.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"



//
// Forward References:
//

extern "C" void __ct__14daObj_So_HIO_cFv();
extern "C" static void daObj_So_Draw__FP12obj_so_class();
extern "C" static void ride_call_back_0__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void ride_call_back_1__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void so_hasira__FP12obj_so_class();
extern "C" static void part_set__FP12obj_so_classSc();
extern "C" void __dt__4cXyzFv();
extern "C" static void so_drop__FP12obj_so_class();
extern "C" void __dt__5csXyzFv();
extern "C" static void so_break__FP12obj_so_class();
extern "C" static void so_hang__FP12obj_so_class();
extern "C" static void action__FP12obj_so_class();
extern "C" static void part_move__FP12obj_so_class();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" static void demo_camera__FP12obj_so_class();
extern "C" static void daObj_So_Execute__FP12obj_so_class();
extern "C" static bool daObj_So_IsDelete__FP12obj_so_class();
extern "C" static void daObj_So_Delete__FP12obj_so_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_So_Create__FP10fopAc_ac_c();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__14daObj_So_HIO_cFv();
extern "C" void __sinit_d_a_obj_so_cpp();
extern "C" static void func_80CE39AC();
extern "C" static void func_80CE39B4();
extern "C" static void func_80CE39BC();
extern "C" static void func_80CE39C4();
extern "C" static void func_80CE39CC();
extern "C" extern char const* const d_a_obj_so__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzsf();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void setBattleBgmOff__8Z2SeqMgrFb();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void stopAnime__10Z2CreatureFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_14();
extern "C" void _savegpr_18();
extern "C" void _savegpr_23();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_14();
extern "C" void _restgpr_18();
extern "C" void _restgpr_23();
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
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CE39E8-80CE39EC 000000 0004+00 10/10 0/0 0/0 .rodata          @3779 */
SECTION_RODATA static f32 const lit_3779 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80CE39E8, &lit_3779);

/* 80CE3B70-80CE3B78 000000 0006+02 1/1 0/0 0/0 .data            e_id$4326 */
SECTION_DATA static u8 e_id[6 + 2 /* padding */] = {
    0x82,
    0xAB,
    0x82,
    0xAC,
    0x82,
    0xAD,
    /* padding */
    0x00,
    0x00,
};

/* 80CE3B78-80CE3BBC 000008 0044+00 1/1 0/0 0/0 .data            cc_cyl_src$5220 */
static dCcD_SrcCyl cc_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fafd3f, 0x1f}, 0x79}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_STONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        10.0f, // mRadius
        120.0f // mHeight
    } // mCyl
};

/* 80CE3BBC-80CE3BDC -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_So_Method */
static actor_method_class l_daObj_So_Method = {
    (process_method_func)daObj_So_Create__FP10fopAc_ac_c,
    (process_method_func)daObj_So_Delete__FP12obj_so_class,
    (process_method_func)daObj_So_Execute__FP12obj_so_class,
    (process_method_func)daObj_So_IsDelete__FP12obj_so_class,
    (process_method_func)daObj_So_Draw__FP12obj_so_class,
};

/* 80CE3BDC-80CE3C0C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_SO */
extern actor_process_profile_definition g_profile_OBJ_SO = {
  fpcLy_CURRENT_e,        // mLayerID
  2,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_OBJ_SO,            // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(obj_so_class),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  55,                     // mPriority
  &l_daObj_So_Method,     // sub_method
  0x00044000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80CE3C0C-80CE3C18 00009C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CE3C18-80CE3C24 0000A8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CE3C24-80CE3C48 0000B4 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CE39CC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CE39C4,
};

/* 80CE3C48-80CE3C78 0000D8 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CE39AC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CE39BC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CE39B4,
};

/* 80CE3C78-80CE3C84 000108 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_So_HIO_c */
SECTION_DATA extern void* __vt__14daObj_So_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_So_HIO_cFv,
};

/* 80CE03CC-80CE03F0 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__14daObj_So_HIO_cFv */
daObj_So_HIO_c::daObj_So_HIO_c() {
    // NONMATCHING
}

/* 80CE03F0-80CE04FC 000110 010C+00 1/0 0/0 0/0 .text            daObj_So_Draw__FP12obj_so_class */
static void daObj_So_Draw(obj_so_class* param_0) {
    // NONMATCHING
}

/* 80CE04FC-80CE0510 00021C 0014+00 1/1 0/0 0/0 .text
 * ride_call_back_0__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c          */
static void ride_call_back_0(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    // NONMATCHING
}

/* 80CE0510-80CE0524 000230 0014+00 1/1 0/0 0/0 .text
 * ride_call_back_1__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c          */
static void ride_call_back_1(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE39EC-80CE39F0 000004 0004+00 0/6 0/0 0/0 .rodata          @3898 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3898[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CE39EC, &lit_3898);
#pragma pop

/* 80CE39F0-80CE39F4 000008 0004+00 0/1 0/0 0/0 .rodata          @3899 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3899 = 510.0f;
COMPILER_STRIP_GATE(0x80CE39F0, &lit_3899);
#pragma pop

/* 80CE39F4-80CE39F8 00000C 0004+00 0/3 0/0 0/0 .rodata          @3900 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3900 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CE39F4, &lit_3900);
#pragma pop

/* 80CE39F8-80CE39FC 000010 0004+00 0/3 0/0 0/0 .rodata          @3901 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3901 = 33.0f;
COMPILER_STRIP_GATE(0x80CE39F8, &lit_3901);
#pragma pop

/* 80CE39FC-80CE3A00 000014 0004+00 0/3 0/0 0/0 .rodata          @3902 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3902 = 200.0f;
COMPILER_STRIP_GATE(0x80CE39FC, &lit_3902);
#pragma pop

/* 80CE0524-80CE0744 000244 0220+00 1/1 0/0 0/0 .text            so_hasira__FP12obj_so_class */
static void so_hasira(obj_so_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE3A00-80CE3A04 000018 0004+00 0/1 0/0 0/0 .rodata          @4004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4004 = 210.0f;
COMPILER_STRIP_GATE(0x80CE3A00, &lit_4004);
#pragma pop

/* 80CE3A04-80CE3A08 00001C 0004+00 0/5 0/0 0/0 .rodata          @4005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4005 = 1.0f;
COMPILER_STRIP_GATE(0x80CE3A04, &lit_4005);
#pragma pop

/* 80CE3A08-80CE3A0C 000020 0004+00 0/2 0/0 0/0 .rodata          @4006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4006 = 4000.0f;
COMPILER_STRIP_GATE(0x80CE3A08, &lit_4006);
#pragma pop

/* 80CE3A0C-80CE3A10 000024 0004+00 0/2 0/0 0/0 .rodata          @4007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4007 = 110.0f;
COMPILER_STRIP_GATE(0x80CE3A0C, &lit_4007);
#pragma pop

/* 80CE3A10-80CE3A14 000028 0004+00 0/3 0/0 0/0 .rodata          @4008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4008 = 90.0f;
COMPILER_STRIP_GATE(0x80CE3A10, &lit_4008);
#pragma pop

/* 80CE3A14-80CE3A18 00002C 0004+00 0/3 0/0 0/0 .rodata          @4009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4009 = 2.0f;
COMPILER_STRIP_GATE(0x80CE3A14, &lit_4009);
#pragma pop

/* 80CE3A18-80CE3A1C 000030 0004+00 0/1 0/0 0/0 .rodata          @4010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4010 = 60.0f;
COMPILER_STRIP_GATE(0x80CE3A18, &lit_4010);
#pragma pop

/* 80CE3A1C-80CE3A20 000034 0004+00 0/1 0/0 0/0 .rodata          @4011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4011 = 205.0f;
COMPILER_STRIP_GATE(0x80CE3A1C, &lit_4011);
#pragma pop

/* 80CE3A20-80CE3A24 000038 0004+00 0/1 0/0 0/0 .rodata          @4012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4012 = -5.0f;
COMPILER_STRIP_GATE(0x80CE3A20, &lit_4012);
#pragma pop

/* 80CE3A24-80CE3A28 00003C 0004+00 0/2 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4013 = 8.0f;
COMPILER_STRIP_GATE(0x80CE3A24, &lit_4013);
#pragma pop

/* 80CE3A28-80CE3A2C 000040 0004+00 0/1 0/0 0/0 .rodata          @4014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4014 = 95.0f;
COMPILER_STRIP_GATE(0x80CE3A28, &lit_4014);
#pragma pop

/* 80CE3A2C-80CE3A30 000044 0004+00 0/1 0/0 0/0 .rodata          @4015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4015 = 6000.0f;
COMPILER_STRIP_GATE(0x80CE3A2C, &lit_4015);
#pragma pop

/* 80CE3A30-80CE3A34 000048 0004+00 0/2 0/0 0/0 .rodata          @4016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4016 = 30.0f;
COMPILER_STRIP_GATE(0x80CE3A30, &lit_4016);
#pragma pop

/* 80CE3A34-80CE3A38 00004C 0004+00 0/4 0/0 0/0 .rodata          @4017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4017 = 5.0f;
COMPILER_STRIP_GATE(0x80CE3A34, &lit_4017);
#pragma pop

/* 80CE3A38-80CE3A3C 000050 0004+00 0/2 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4018 = 20.0f;
COMPILER_STRIP_GATE(0x80CE3A38, &lit_4018);
#pragma pop

/* 80CE3A3C-80CE3A40 000054 0004+00 0/1 0/0 0/0 .rodata          @4019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4019 = 15.0f;
COMPILER_STRIP_GATE(0x80CE3A3C, &lit_4019);
#pragma pop

/* 80CE3A40-80CE3A44 000058 0004+00 0/1 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4020 = 6.0f;
COMPILER_STRIP_GATE(0x80CE3A40, &lit_4020);
#pragma pop

/* 80CE3A44-80CE3A48 00005C 0004+00 0/1 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4021 = 32768.0f;
COMPILER_STRIP_GATE(0x80CE3A44, &lit_4021);
#pragma pop

/* 80CE3A48-80CE3A4C 000060 0004+00 0/1 0/0 0/0 .rodata          @4022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4022 = 1000.0f;
COMPILER_STRIP_GATE(0x80CE3A48, &lit_4022);
#pragma pop

/* 80CE3A4C-80CE3A50 000064 0004+00 0/3 0/0 0/0 .rodata          @4023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4023 = 10.0f;
COMPILER_STRIP_GATE(0x80CE3A4C, &lit_4023);
#pragma pop

/* 80CE3A50-80CE3A54 000068 0004+00 0/2 0/0 0/0 .rodata          @4024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4024 = 4.0f;
COMPILER_STRIP_GATE(0x80CE3A50, &lit_4024);
#pragma pop

/* 80CE0744-80CE0C54 000464 0510+00 4/4 0/0 0/0 .text            part_set__FP12obj_so_classSc */
static void part_set(obj_so_class* param_0, s8 param_1) {
    // NONMATCHING
}

/* 80CE0C54-80CE0C90 000974 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE3A54-80CE3A58 00006C 0004+00 0/2 0/0 0/0 .rodata          @4085 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4085 = -10.0f;
COMPILER_STRIP_GATE(0x80CE3A54, &lit_4085);
#pragma pop

/* 80CE3A58-80CE3A5C 000070 0004+00 0/2 0/0 0/0 .rodata          @4086 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4086 = -1.0f;
COMPILER_STRIP_GATE(0x80CE3A58, &lit_4086);
#pragma pop

/* 80CE3A5C-80CE3A60 000074 0004+00 0/2 0/0 0/0 .rodata          @4087 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4087 = 2.5f;
COMPILER_STRIP_GATE(0x80CE3A5C, &lit_4087);
#pragma pop

/* 80CE0C90-80CE0F58 0009B0 02C8+00 1/1 0/0 0/0 .text            so_drop__FP12obj_so_class */
static void so_drop(obj_so_class* param_0) {
    // NONMATCHING
}

/* 80CE0F58-80CE0F94 000C78 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 80CE0F94-80CE1084 000CB4 00F0+00 1/1 0/0 0/0 .text            so_break__FP12obj_so_class */
static void so_break(obj_so_class* param_0) {
    // NONMATCHING
}

/* 80CE1084-80CE12D8 000DA4 0254+00 1/1 0/0 0/0 .text            so_hang__FP12obj_so_class */
static void so_hang(obj_so_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE3A60-80CE3A64 000078 0004+00 0/1 0/0 0/0 .rodata          @4205 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4205 = -60.0f;
COMPILER_STRIP_GATE(0x80CE3A60, &lit_4205);
#pragma pop

/* 80CE3A64-80CE3A68 00007C 0004+00 0/1 0/0 0/0 .rodata          @4206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4206 = -200.0f;
COMPILER_STRIP_GATE(0x80CE3A64, &lit_4206);
#pragma pop

/* 80CE12D8-80CE14DC 000FF8 0204+00 1/1 0/0 0/0 .text            action__FP12obj_so_class */
static void action(obj_so_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE3A68-80CE3A6C 000080 0004+00 0/1 0/0 0/0 .rodata          @4943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4943 = 12000.0f;
COMPILER_STRIP_GATE(0x80CE3A68, &lit_4943);
#pragma pop

/* 80CE3A6C-80CE3A70 000084 0004+00 0/1 0/0 0/0 .rodata          @4944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4944 = 70.0f;
COMPILER_STRIP_GATE(0x80CE3A6C, &lit_4944);
#pragma pop

/* 80CE3A70-80CE3A74 000088 0004+00 0/2 0/0 0/0 .rodata          @4945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4945 = 40.0f;
COMPILER_STRIP_GATE(0x80CE3A70, &lit_4945);
#pragma pop

/* 80CE3A74-80CE3A78 00008C 0004+00 0/1 0/0 0/0 .rodata          @4946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4946 = -100.0f;
COMPILER_STRIP_GATE(0x80CE3A74, &lit_4946);
#pragma pop

/* 80CE3A78-80CE3A7C 000090 0004+00 0/1 0/0 0/0 .rodata          @4947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4947 = 2570.0f;
COMPILER_STRIP_GATE(0x80CE3A78, &lit_4947);
#pragma pop

/* 80CE3A7C-80CE3A80 000094 0004+00 0/1 0/0 0/0 .rodata          @4948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4948 = 2000.0f;
COMPILER_STRIP_GATE(0x80CE3A7C, &lit_4948);
#pragma pop

/* 80CE3A80-80CE3A84 000098 0004+00 0/1 0/0 0/0 .rodata          @4949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4949 = -3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CE3A80, &lit_4949);
#pragma pop

/* 80CE3A84-80CE3A88 00009C 0004+00 0/2 0/0 0/0 .rodata          @4950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4950 = 0.5f;
COMPILER_STRIP_GATE(0x80CE3A84, &lit_4950);
#pragma pop

/* 80CE3A88-80CE3A8C 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4951 = 400.0f;
COMPILER_STRIP_GATE(0x80CE3A88, &lit_4951);
#pragma pop

/* 80CE3A8C-80CE3A90 0000A4 0004+00 0/2 0/0 0/0 .rodata          @4952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4952 = 300.0f;
COMPILER_STRIP_GATE(0x80CE3A8C, &lit_4952);
#pragma pop

/* 80CE3A90-80CE3A94 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4953 = -1024.0f;
COMPILER_STRIP_GATE(0x80CE3A90, &lit_4953);
#pragma pop

/* 80CE3A94-80CE3A98 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4954 = 500.0f;
COMPILER_STRIP_GATE(0x80CE3A94, &lit_4954);
#pragma pop

/* 80CE3A98-80CE3A9C 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4955 = 180.0f;
COMPILER_STRIP_GATE(0x80CE3A98, &lit_4955);
#pragma pop

/* 80CE3A9C-80CE3AA0 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4956 = -80.0f;
COMPILER_STRIP_GATE(0x80CE3A9C, &lit_4956);
#pragma pop

/* 80CE3AA0-80CE3AA4 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4957 = 165.0f;
COMPILER_STRIP_GATE(0x80CE3AA0, &lit_4957);
#pragma pop

/* 80CE3AA4-80CE3AA8 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4958 = -90.0f;
COMPILER_STRIP_GATE(0x80CE3AA4, &lit_4958);
#pragma pop

/* 80CE3AA8-80CE3AAC 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4959 = -87.0f;
COMPILER_STRIP_GATE(0x80CE3AA8, &lit_4959);
#pragma pop

/* 80CE3AAC-80CE3AB0 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4960 = 2500.0f;
COMPILER_STRIP_GATE(0x80CE3AAC, &lit_4960);
#pragma pop

/* 80CE3AB0-80CE3AB4 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4961 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CE3AB0, &lit_4961);
#pragma pop

/* 80CE3AB4-80CE3AB8 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4962 = 20000.0f;
COMPILER_STRIP_GATE(0x80CE3AB4, &lit_4962);
#pragma pop

/* 80CE3AB8-80CE3AC0 0000D0 0008+00 0/1 0/0 0/0 .rodata          @4963 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4963[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CE3AB8, &lit_4963);
#pragma pop

/* 80CE3AC0-80CE3AC8 0000D8 0008+00 0/1 0/0 0/0 .rodata          @4964 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4964[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CE3AC0, &lit_4964);
#pragma pop

/* 80CE3AC8-80CE3AD0 0000E0 0008+00 0/1 0/0 0/0 .rodata          @4965 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4965[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CE3AC8, &lit_4965);
#pragma pop

/* 80CE3AD0-80CE3AD4 0000E8 0004+00 0/3 0/0 0/0 .rodata          @4966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4966 = 50.0f;
COMPILER_STRIP_GATE(0x80CE3AD0, &lit_4966);
#pragma pop

/* 80CE3AD4-80CE3AD8 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4967 = 100.0f;
COMPILER_STRIP_GATE(0x80CE3AD4, &lit_4967);
#pragma pop

/* 80CE3AD8-80CE3ADC 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4968 = 9.0f / 20.0f;
COMPILER_STRIP_GATE(0x80CE3AD8, &lit_4968);
#pragma pop

/* 80CE3ADC-80CE3AE0 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4969 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4969 = -20.0f;
COMPILER_STRIP_GATE(0x80CE3ADC, &lit_4969);
#pragma pop

/* 80CE3AE0-80CE3AE4 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4970 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4970 = 80.0f;
COMPILER_STRIP_GATE(0x80CE3AE0, &lit_4970);
#pragma pop

/* 80CE3AE4-80CE3AE8 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4971 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4971 = 77.0f;
COMPILER_STRIP_GATE(0x80CE3AE4, &lit_4971);
#pragma pop

/* 80CE3AE8-80CE3AF0 000100 0004+04 0/1 0/0 0/0 .rodata          @4972 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4972[1 + 1 /* padding */] = {
    -30.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80CE3AE8, &lit_4972);
#pragma pop

/* 80CE3AF0-80CE3AF8 000108 0008+00 0/1 0/0 0/0 .rodata          @4979 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4979[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CE3AF0, &lit_4979);
#pragma pop

/* 80CE3B60-80CE3B60 000178 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CE3B60 = "F_SP108";
#pragma pop

/* 80CE14DC-80CE2A64 0011FC 1588+00 1/1 0/0 0/0 .text            part_move__FP12obj_so_class */
static void part_move(obj_so_class* param_0) {
    // NONMATCHING
}

/* 80CE2A64-80CE2ADC 002784 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
// dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" void __dt__14dBgS_ObjGndChkFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE3AF8-80CE3AFC 000110 0004+00 0/1 0/0 0/0 .rodata          @5077 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5077 = -550.0f;
COMPILER_STRIP_GATE(0x80CE3AF8, &lit_5077);
#pragma pop

/* 80CE3AFC-80CE3B00 000114 0004+00 0/1 0/0 0/0 .rodata          @5078 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5078 = 3300.0f;
COMPILER_STRIP_GATE(0x80CE3AFC, &lit_5078);
#pragma pop

/* 80CE3B00-80CE3B04 000118 0004+00 0/1 0/0 0/0 .rodata          @5079 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5079 = -600.0f;
COMPILER_STRIP_GATE(0x80CE3B00, &lit_5079);
#pragma pop

/* 80CE3B04-80CE3B08 00011C 0004+00 0/1 0/0 0/0 .rodata          @5080 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5080 = 12459.0f;
COMPILER_STRIP_GATE(0x80CE3B04, &lit_5080);
#pragma pop

/* 80CE3B08-80CE3B0C 000120 0004+00 0/2 0/0 0/0 .rodata          @5081 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5081 = 3152.0f;
COMPILER_STRIP_GATE(0x80CE3B08, &lit_5081);
#pragma pop

/* 80CE3B0C-80CE3B10 000124 0004+00 0/1 0/0 0/0 .rodata          @5082 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5082 = 4628.0f;
COMPILER_STRIP_GATE(0x80CE3B0C, &lit_5082);
#pragma pop

/* 80CE3B10-80CE3B14 000128 0004+00 0/1 0/0 0/0 .rodata          @5083 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5083 = 150.0f;
COMPILER_STRIP_GATE(0x80CE3B10, &lit_5083);
#pragma pop

/* 80CE3B14-80CE3B18 00012C 0004+00 0/1 0/0 0/0 .rodata          @5084 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5084 = 3602.0f;
COMPILER_STRIP_GATE(0x80CE3B14, &lit_5084);
#pragma pop

/* 80CE3B18-80CE3B1C 000130 0004+00 0/1 0/0 0/0 .rodata          @5085 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5085 = 65.0f;
COMPILER_STRIP_GATE(0x80CE3B18, &lit_5085);
#pragma pop

/* 80CE3B1C-80CE3B20 000134 0004+00 0/1 0/0 0/0 .rodata          @5086 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5086 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80CE3B1C, &lit_5086);
#pragma pop

/* 80CE3B20-80CE3B24 000138 0004+00 0/1 0/0 0/0 .rodata          @5087 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5087 = -4264.0f;
COMPILER_STRIP_GATE(0x80CE3B20, &lit_5087);
#pragma pop

/* 80CE3B24-80CE3B28 00013C 0004+00 0/1 0/0 0/0 .rodata          @5088 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5088 = 302.0f;
COMPILER_STRIP_GATE(0x80CE3B24, &lit_5088);
#pragma pop

/* 80CE3B28-80CE3B2C 000140 0004+00 0/1 0/0 0/0 .rodata          @5089 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5089 = -2330.0f;
COMPILER_STRIP_GATE(0x80CE3B28, &lit_5089);
#pragma pop

/* 80CE3B2C-80CE3B30 000144 0004+00 0/1 0/0 0/0 .rodata          @5090 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5090 = 16400.0f;
COMPILER_STRIP_GATE(0x80CE3B2C, &lit_5090);
#pragma pop

/* 80CE3B30-80CE3B34 000148 0004+00 0/1 0/0 0/0 .rodata          @5091 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5091 = 3529.0f;
COMPILER_STRIP_GATE(0x80CE3B30, &lit_5091);
#pragma pop

/* 80CE3B34-80CE3B38 00014C 0004+00 0/1 0/0 0/0 .rodata          @5092 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5092 = 8385.0f;
COMPILER_STRIP_GATE(0x80CE3B34, &lit_5092);
#pragma pop

/* 80CE3B38-80CE3B3C 000150 0004+00 0/1 0/0 0/0 .rodata          @5093 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5093 = 16200.0f;
COMPILER_STRIP_GATE(0x80CE3B38, &lit_5093);
#pragma pop

/* 80CE3B3C-80CE3B40 000154 0004+00 0/1 0/0 0/0 .rodata          @5094 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5094 = 3481.0f;
COMPILER_STRIP_GATE(0x80CE3B3C, &lit_5094);
#pragma pop

/* 80CE3B40-80CE3B44 000158 0004+00 0/1 0/0 0/0 .rodata          @5095 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5095 = 8418.0f;
COMPILER_STRIP_GATE(0x80CE3B40, &lit_5095);
#pragma pop

/* 80CE2ADC-80CE2EAC 0027FC 03D0+00 1/1 0/0 0/0 .text            demo_camera__FP12obj_so_class */
static void demo_camera(obj_so_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE3C90-80CE3C94 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80CE3C90[4];

/* 80CE3C94-80CE3CA0 00000C 000C+00 1/1 0/0 0/0 .bss             @3774 */
static u8 lit_3774[12];

/* 80CE3CA0-80CE3CAC 000018 000C+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 80CE2EAC-80CE2F60 002BCC 00B4+00 2/1 0/0 0/0 .text            daObj_So_Execute__FP12obj_so_class
 */
static void daObj_So_Execute(obj_so_class* param_0) {
    // NONMATCHING
}

/* 80CE2F60-80CE2F68 002C80 0008+00 1/0 0/0 0/0 .text            daObj_So_IsDelete__FP12obj_so_class
 */
static bool daObj_So_IsDelete(obj_so_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80CE3B60-80CE3B60 000178 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CE3B68 = "Obj_so";
#pragma pop

/* 80CE2F68-80CE3018 002C88 00B0+00 1/0 0/0 0/0 .text            daObj_So_Delete__FP12obj_so_class
 */
static void daObj_So_Delete(obj_so_class* param_0) {
    // NONMATCHING
}

/* 80CE3018-80CE327C 002D38 0264+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CE3B44-80CE3B48 00015C 0004+00 0/1 0/0 0/0 .rodata          @5327 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5327 = -300.0f;
COMPILER_STRIP_GATE(0x80CE3B44, &lit_5327);
#pragma pop

/* 80CE3B48-80CE3B4C 000160 0004+00 0/1 0/0 0/0 .rodata          @5328 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5328 = -500.0f;
COMPILER_STRIP_GATE(0x80CE3B48, &lit_5328);
#pragma pop

/* 80CE3B4C-80CE3B50 000164 0004+00 0/1 0/0 0/0 .rodata          @5329 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5329 = 26.0f;
COMPILER_STRIP_GATE(0x80CE3B4C, &lit_5329);
#pragma pop

/* 80CE3B50-80CE3B54 000168 0004+00 0/1 0/0 0/0 .rodata          @5330 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5330 = 1100.0f;
COMPILER_STRIP_GATE(0x80CE3B50, &lit_5330);
#pragma pop

/* 80CE3B54-80CE3B58 00016C 0004+00 0/1 0/0 0/0 .rodata          @5331 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5331 = -5374.0f;
COMPILER_STRIP_GATE(0x80CE3B54, &lit_5331);
#pragma pop

/* 80CE3B58-80CE3B5C 000170 0004+00 0/1 0/0 0/0 .rodata          @5332 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5332 = 4280.0f;
COMPILER_STRIP_GATE(0x80CE3B58, &lit_5332);
#pragma pop

/* 80CE3B5C-80CE3B60 000174 0004+00 0/1 0/0 0/0 .rodata          @5333 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5333 = -2342.0f;
COMPILER_STRIP_GATE(0x80CE3B5C, &lit_5333);
#pragma pop

/* 80CE327C-80CE36D0 002F9C 0454+00 1/0 0/0 0/0 .text            daObj_So_Create__FP10fopAc_ac_c */
static void daObj_So_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80CE36D0-80CE379C 0033F0 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_CylFv */
// dCcD_Cyl::~dCcD_Cyl() {
extern "C" void __dt__8dCcD_CylFv() {
    // NONMATCHING
}

/* 80CE379C-80CE3820 0034BC 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
// dCcD_Cyl::dCcD_Cyl() {
extern "C" void __ct__8dCcD_CylFv() {
    // NONMATCHING
}

/* 80CE3820-80CE3868 003540 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80CE3868-80CE38B0 003588 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80CE38B0-80CE3920 0035D0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80CE3920-80CE3924 003640 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 80CE3924-80CE3928 003644 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80CE3928-80CE3970 003648 0048+00 2/1 0/0 0/0 .text            __dt__14daObj_So_HIO_cFv */
daObj_So_HIO_c::~daObj_So_HIO_c() {
    // NONMATCHING
}

/* 80CE3970-80CE39AC 003690 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_so_cpp */
void __sinit_d_a_obj_so_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80CE3970, __sinit_d_a_obj_so_cpp);
#pragma pop

/* 80CE39AC-80CE39B4 0036CC 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
static void func_80CE39AC() {
    // NONMATCHING
}

/* 80CE39B4-80CE39BC 0036D4 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
static void func_80CE39B4() {
    // NONMATCHING
}

/* 80CE39BC-80CE39C4 0036DC 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
static void func_80CE39BC() {
    // NONMATCHING
}

/* 80CE39C4-80CE39CC 0036E4 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80CE39C4() {
    // NONMATCHING
}

/* 80CE39CC-80CE39D4 0036EC 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80CE39CC() {
    // NONMATCHING
}

/* 80CE3B60-80CE3B60 000178 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
