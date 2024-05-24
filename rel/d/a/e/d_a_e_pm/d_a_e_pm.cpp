/**
 * @file d_a_e_pm.cpp
 * 
*/

#include "rel/d/a/e/d_a_e_pm/d_a_e_pm.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"




//
// Forward References:
//

extern "C" void __ct__12daE_PM_HIO_cFv();
extern "C" void DemoSkip__8daE_PM_cFi();
extern "C" void DemoSkipCallBack__8daE_PM_cFPvi();
extern "C" void CreateHeap__8daE_PM_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void s_pm_sub__FPvPv();
extern "C" void initCcCylinder__8daE_PM_cFv();
extern "C" void setCcCylinder__8daE_PM_cFv();
extern "C" void ctrlJoint__8daE_PM_cFP8J3DJointP8J3DModel();
extern "C" static void JointCallBack__FP8J3DJointi();
extern "C" void Particle_Set__8daE_PM_cFUs4cXyz();
extern "C" void SetAnm__8daE_PM_cFiiff();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void way_bg_check2__FP8daE_PM_c4cXyz4cXyz();
extern "C" void Yazirushi__8daE_PM_cFv();
extern "C" void SearchRndP__8daE_PM_cFv();
extern "C" void SearchFarP__8daE_PM_cFv();
extern "C" void SearchNearP__8daE_PM_cFv();
extern "C" void SearchNextPos__8daE_PM_cFv();
extern "C" void SetGakkiEffect__8daE_PM_cFv();
extern "C" void CameraSet__8daE_PM_cFv();
extern "C" void SetStopingCam__8daE_PM_cFv();
extern "C" void SetStopCam__8daE_PM_cF4cXyzffs();
extern "C" void SetMoveCam2__8daE_PM_cFff();
extern "C" void SetMoveCam__8daE_PM_cFff();
extern "C" void SetReleaseCam__8daE_PM_cFv();
extern "C" void Ap_StartAction__8daE_PM_cFv();
extern "C" static void s_obj_sub__FPvPv();
extern "C" void Ap_CreateAction__8daE_PM_cFv();
extern "C" void Ap_EscapeAction__8daE_PM_cFv();
extern "C" void AppearAction__8daE_PM_cFv();
extern "C" void DemoBeforeEscape__8daE_PM_cFv();
extern "C" void DemoAfterEscape__8daE_PM_cFv();
extern "C" void DemoMoveAction__8daE_PM_cFv();
extern "C" void WaitAction__8daE_PM_cFv();
extern "C" void GroundCheck__8daE_PM_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void EscapeAction__8daE_PM_cFv();
extern "C" void DeathAction__8daE_PM_cFv();
extern "C" void Action__8daE_PM_cFv();
extern "C" void DemoBossStart2__8daE_PM_cFv();
extern "C" void DemoBossStart__8daE_PM_cFv();
extern "C" void BossEscapeAction__8daE_PM_cFv();
extern "C" static void s_boss_sub__FPvPv();
extern "C" void BossDamageAction__8daE_PM_cFv();
extern "C" void BossWaitAction__8daE_PM_cFv();
extern "C" void BossDeathAction__8daE_PM_cFv();
extern "C" void BossAction__8daE_PM_cFv();
extern "C" void Execute__8daE_PM_cFv();
extern "C" void StartAction__8daE_PM_cFv();
extern "C" void GakkiLoopAction__8daE_PM_cF4cXyzf();
extern "C" void DemoCreateAction__8daE_PM_cFv();
extern "C" void CreateAction__8daE_PM_cFv();
extern "C" void CreateChk__8daE_PM_cFv();
extern "C" void LampAction__8daE_PM_cFv();
extern "C" void DamageAction__8daE_PM_cFv();
extern "C" void At_Check__8daE_PM_cFv();
extern "C" void ObjHit__8daE_PM_cFv();
extern "C" void EyeMove__8daE_PM_cFv();
extern "C" void Draw__8daE_PM_cFv();
extern "C" void Delete__8daE_PM_cFv();
extern "C" void setBaseMtx__8daE_PM_cFv();
extern "C" void setGakkiBaseMtx__8daE_PM_cFv();
extern "C" void setLampBaseMtx__8daE_PM_cFv();
extern "C" static void daE_PM_Draw__FP8daE_PM_c();
extern "C" static void daE_PM_Execute__FP8daE_PM_c();
extern "C" static bool daE_PM_IsDelete__FP8daE_PM_c();
extern "C" static void daE_PM_Delete__FP8daE_PM_c();
extern "C" void SkipChk__8daE_PM_cFv();
extern "C" void Create__8daE_PM_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" static void daE_PM_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_PM_HIO_cFv();
extern "C" void __sinit_d_a_e_pm_cpp();
extern "C" static void func_8074BAEC();
extern "C" static void func_8074BAF4();
extern "C" static void func_8074BAFC();
extern "C" static void func_8074BB04();
extern "C" static void func_8074BB0C();
extern "C" static void setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz();
extern "C" extern char const* const d_a_e_pm__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetPnt__FPC5dPathi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void _savegpr_19();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
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
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 struct_80450C98[4];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" extern u8 pauseTimer__9dScnPly_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8074BF3C-8074BF40 000000 0004+00 35/35 0/0 0/0 .rodata          @3910 */
SECTION_RODATA static f32 const lit_3910 = 100.0f;
COMPILER_STRIP_GATE(0x8074BF3C, &lit_3910);

/* 8074BF40-8074BF44 000004 0004+00 5/35 0/0 0/0 .rodata          @3911 */
SECTION_RODATA static u8 const lit_3911[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8074BF40, &lit_3911);

/* 8074BF44-8074BF4C 000008 0004+04 3/28 0/0 0/0 .rodata          @3912 */
SECTION_RODATA static f32 const lit_3912[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8074BF44, &lit_3912);

/* 8074BF4C-8074BF54 000010 0008+00 0/9 0/0 0/0 .rodata          @3913 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3913[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8074BF4C, &lit_3913);
#pragma pop

/* 8074BF54-8074BF5C 000018 0008+00 0/9 0/0 0/0 .rodata          @3914 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3914[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8074BF54, &lit_3914);
#pragma pop

/* 8074BF5C-8074BF64 000020 0008+00 0/9 0/0 0/0 .rodata          @3915 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3915[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8074BF5C, &lit_3915);
#pragma pop

/* 8074BF64-8074BF68 000028 0004+00 0/2 0/0 0/0 .rodata          @3916 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3916 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8074BF64, &lit_3916);
#pragma pop

/* 8074BF68-8074BF6C 00002C 0004+00 0/1 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3933 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x8074BF68, &lit_3933);
#pragma pop

/* 8074BF6C-8074BF70 000030 0004+00 0/7 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3934 = 400.0f;
COMPILER_STRIP_GATE(0x8074BF6C, &lit_3934);
#pragma pop

/* 8074BF70-8074BF74 000034 0004+00 0/4 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = 20.0f;
COMPILER_STRIP_GATE(0x8074BF70, &lit_3935);
#pragma pop

/* 8074BF74-8074BF78 000038 0004+00 0/6 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = 300.0f;
COMPILER_STRIP_GATE(0x8074BF74, &lit_3936);
#pragma pop

/* 8074BF78-8074BF7C 00003C 0004+00 0/2 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937 = 180.0f;
COMPILER_STRIP_GATE(0x8074BF78, &lit_3937);
#pragma pop

/* 8074BF7C-8074BF80 000040 0004+00 0/1 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3938 = 90.0f;
COMPILER_STRIP_GATE(0x8074BF7C, &lit_3938);
#pragma pop

/* 8074BF80-8074BF84 000044 0004+00 0/1 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3939 = 255.0f;
COMPILER_STRIP_GATE(0x8074BF80, &lit_3939);
#pragma pop

/* 8074BF84-8074BF88 000048 0004+00 0/1 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 85.0f;
COMPILER_STRIP_GATE(0x8074BF84, &lit_3940);
#pragma pop

/* 8074BF88-8074BF8C 00004C 0004+00 0/1 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3941 = 4.0f;
COMPILER_STRIP_GATE(0x8074BF88, &lit_3941);
#pragma pop

/* 8074C150-8074C15C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8074C15C-8074C170 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8074C170-8074C178 000020 0008+00 0/1 0/0 0/0 .data            e_prim$3789 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_prim[8] = {
    0xFF, 0x78, 0x00, 0x00, 0xFF, 0x64, 0x78, 0x00,
};
#pragma pop

/* 8074C178-8074C180 000028 0008+00 0/1 0/0 0/0 .data            e_env$3790 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_env[8] = {
    0x5A, 0x2D, 0x2D, 0x00, 0x3C, 0x1E, 0x1E, 0x00,
};
#pragma pop

/* 8074C180-8074C188 000030 0006+02 0/1 0/0 0/0 .data            eff_id$3798 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 eff_id[6 + 2 /* padding */] = {
    0x02,
    0x9D,
    0x02,
    0x9E,
    0x02,
    0x9F,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 8074C188-8074C190 000038 0006+02 1/1 0/0 0/0 .data            gakki_eff_id$4453 */
SECTION_DATA static u8 gakki_eff_id_4453[6 + 2 /* padding */] = {
    0x82,
    0x01,
    0x82,
    0x02,
    0x82,
    0x03,
    /* padding */
    0x00,
    0x00,
};

/* 8074C190-8074C1AC -00001 001C+00 1/1 0/0 0/0 .data            @5539 */
SECTION_DATA static void* lit_5539[7] = {
    (void*)(((char*)Action__8daE_PM_cFv) + 0x40), (void*)(((char*)Action__8daE_PM_cFv) + 0x60),
    (void*)(((char*)Action__8daE_PM_cFv) + 0x78), (void*)(((char*)Action__8daE_PM_cFv) + 0x50),
    (void*)(((char*)Action__8daE_PM_cFv) + 0x90), (void*)(((char*)Action__8daE_PM_cFv) + 0xA0),
    (void*)(((char*)Action__8daE_PM_cFv) + 0xA8),
};

/* 8074C1AC-8074C1C8 -00001 001C+00 1/1 0/0 0/0 .data            @5721 */
SECTION_DATA static void* lit_5721[7] = {
    (void*)(((char*)DemoBossStart2__8daE_PM_cFv) + 0x7C),
    (void*)(((char*)DemoBossStart2__8daE_PM_cFv) + 0x138),
    (void*)(((char*)DemoBossStart2__8daE_PM_cFv) + 0x2D0),
    (void*)(((char*)DemoBossStart2__8daE_PM_cFv) + 0x530),
    (void*)(((char*)DemoBossStart2__8daE_PM_cFv) + 0x5B8),
    (void*)(((char*)DemoBossStart2__8daE_PM_cFv) + 0x66C),
    (void*)(((char*)DemoBossStart2__8daE_PM_cFv) + 0x6D8),
};

/* 8074C1C8-8074C1E8 -00001 0020+00 1/1 0/0 0/0 .data            @5995 */
SECTION_DATA static void* lit_5995[8] = {
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0x6C),
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0x11C),
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0x3D4),
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0x750),
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0x93C),
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0x9D4),
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0xA90),
    (void*)(((char*)DemoBossStart__8daE_PM_cFv) + 0xB0C),
};

/* 8074C1E8-8074C218 -00001 0030+00 1/1 0/0 0/0 .data            @6344 */
SECTION_DATA static void* lit_6344[12] = {
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x50),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x28C),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x324),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x614),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x73C),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x880),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x880),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x880),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x880),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x880),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x818),
    (void*)(((char*)BossDamageAction__8daE_PM_cFv) + 0x83C),
};

/* 8074C218-8074C234 -00001 001C+00 1/1 0/0 0/0 .data            @6659 */
SECTION_DATA static void* lit_6659[7] = {
    (void*)(((char*)BossAction__8daE_PM_cFv) + 0x44),
    (void*)(((char*)BossAction__8daE_PM_cFv) + 0xA0),
    (void*)(((char*)BossAction__8daE_PM_cFv) + 0xB8),
    (void*)(((char*)BossAction__8daE_PM_cFv) + 0x4C),
    (void*)(((char*)BossAction__8daE_PM_cFv) + 0xC0),
    (void*)(((char*)BossAction__8daE_PM_cFv) + 0xC8),
    (void*)(((char*)BossAction__8daE_PM_cFv) + 0xD0),
};

/* 8074C234-8074C23C 0000E4 0006+02 1/1 0/0 0/0 .data            gakki_eff_id$6954 */
SECTION_DATA static u8 gakki_eff_id_6954[6 + 2 /* padding */] = {
    0x82,
    0x01,
    0x82,
    0x02,
    0x82,
    0x03,
    /* padding */
    0x00,
    0x00,
};

/* 8074C23C-8074C25C -00001 0020+00 1/0 0/0 0/0 .data            l_daE_PM_Method */
static actor_method_class l_daE_PM_Method = {
    (process_method_func)daE_PM_Create__FP10fopAc_ac_c,
    (process_method_func)daE_PM_Delete__FP8daE_PM_c,
    (process_method_func)daE_PM_Execute__FP8daE_PM_c,
    (process_method_func)daE_PM_IsDelete__FP8daE_PM_c,
    (process_method_func)daE_PM_Draw__FP8daE_PM_c,
};

/* 8074C25C-8074C28C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_PM */
extern actor_process_profile_definition g_profile_E_PM = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_PM,              // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daE_PM_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  161,                    // mPriority
  &l_daE_PM_Method,       // sub_method
  0x00040100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8074C28C-8074C298 00013C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8074C298-8074C2A4 000148 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8074C2A4-8074C2B0 000154 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8074C2B0-8074C2BC 000160 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8074C2BC-8074C2C8 00016C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8074C2C8-8074C2EC 000178 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8074BB0C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8074BB04,
};

/* 8074C2EC-8074C31C 00019C 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8074BAEC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8074BAFC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8074BAF4,
};

/* 8074C31C-8074C328 0001CC 000C+00 1/1 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 8074C328-8074C334 0001D8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8074C334-8074C340 0001E4 000C+00 2/2 0/0 0/0 .data            __vt__12daE_PM_HIO_c */
SECTION_DATA extern void* __vt__12daE_PM_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_PM_HIO_cFv,
};

/* 80741EEC-80741FB4 0000EC 00C8+00 1/1 0/0 0/0 .text            __ct__12daE_PM_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_PM_HIO_c::daE_PM_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__ct__12daE_PM_HIO_cFv.s"
}
#pragma pop

/* 80741FB4-80742004 0001B4 0050+00 1/1 0/0 0/0 .text            DemoSkip__8daE_PM_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoSkip(int param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoSkip__8daE_PM_cFi.s"
}
#pragma pop

/* 80742004-80742038 000204 0034+00 2/2 0/0 0/0 .text            DemoSkipCallBack__8daE_PM_cFPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoSkipCallBack(void* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoSkipCallBack__8daE_PM_cFPvi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C148-8074C148 00020C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8074C148 = "E_PM";
#pragma pop

/* 80742038-80742388 000238 0350+00 1/1 0/0 0/0 .text            CreateHeap__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/CreateHeap__8daE_PM_cFv.s"
}
#pragma pop

/* 80742388-807423D0 000588 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 807423D0-807423F0 0005D0 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807423F0-80742448 0005F0 0058+00 2/2 0/0 0/0 .text            s_pm_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_pm_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/s_pm_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BF8C-8074BFD0 000050 0044+00 1/1 0/0 0/0 .rodata          ccCylSrc$4052 */
const static dCcD_SrcCyl ccCylSrc = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0xd}, {0xd8fbfdff, 0x51}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        40.0f, // mRadius
        130.0f // mHeight
    } // mCyl
};

/* 80742448-807424C0 000648 0078+00 1/1 0/0 0/0 .text            initCcCylinder__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/initCcCylinder__8daE_PM_cFv.s"
}
#pragma pop

/* 807424C0-80742508 0006C0 0048+00 1/1 0/0 0/0 .text            setCcCylinder__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::setCcCylinder() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/setCcCylinder__8daE_PM_cFv.s"
}
#pragma pop

/* 80742508-807425B4 000708 00AC+00 1/1 0/0 0/0 .text ctrlJoint__8daE_PM_cFP8J3DJointP8J3DModel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/ctrlJoint__8daE_PM_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 807425B4-80742600 0007B4 004C+00 1/1 0/0 0/0 .text            JointCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void JointCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/JointCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 80742600-80742674 000800 0074+00 6/6 0/0 0/0 .text            Particle_Set__8daE_PM_cFUs4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Particle_Set(u16 param_0, cXyz param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Particle_Set__8daE_PM_cFUs4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFD0-8074BFD4 000094 0004+00 1/3 0/0 0/0 .rodata          @4114 */
SECTION_RODATA static f32 const lit_4114 = -1.0f;
COMPILER_STRIP_GATE(0x8074BFD0, &lit_4114);

/* 80742674-80742720 000874 00AC+00 20/20 0/0 0/0 .text            SetAnm__8daE_PM_cFiiff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SetAnm(int param_0, int param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SetAnm__8daE_PM_cFiiff.s"
}
#pragma pop

/* 80742720-80742768 000920 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGPla::~cM3dGPla() {
extern "C" asm void __dt__8cM3dGPlaFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFD4-8074BFD8 000098 0004+00 2/4 0/0 0/0 .rodata          @4153 */
SECTION_RODATA static f32 const lit_4153 = 30.0f;
COMPILER_STRIP_GATE(0x8074BFD4, &lit_4153);

/* 80742768-80742810 000968 00A8+00 2/2 0/0 0/0 .text way_bg_check2__FP8daE_PM_c4cXyz4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void way_bg_check2(daE_PM_c* param_0, cXyz param_1, cXyz param_2) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/way_bg_check2__FP8daE_PM_c4cXyz4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFD8-8074BFDC 00009C 0004+00 1/1 0/0 0/0 .rodata          @4223 */
SECTION_RODATA static f32 const lit_4223 = 40.0f;
COMPILER_STRIP_GATE(0x8074BFD8, &lit_4223);

/* 80742810-807428A8 000A10 0098+00 1/1 0/0 0/0 .text            Yazirushi__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Yazirushi() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Yazirushi__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFDC-8074BFE4 0000A0 0008+00 3/7 0/0 0/0 .rodata          @4239 */
SECTION_RODATA static u8 const lit_4239[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8074BFDC, &lit_4239);

/* 807428A8-80742958 000AA8 00B0+00 1/1 0/0 0/0 .text            SearchRndP__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SearchRndP() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SearchRndP__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C348-8074C34C 000008 0001+03 3/3 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8074C34C-8074C350 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8074C350-8074C354 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8074C354-8074C358 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8074C358-8074C35C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8074C35C-8074C360 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8074C360-8074C364 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8074C364-8074C368 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8074C368-8074C36C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8074C36C-8074C370 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8074C370-8074C374 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8074C374-8074C378 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8074C378-8074C37C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8074C37C-8074C380 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8074C380-8074C384 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8074C384-8074C388 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 8074C384 0001+00 data_8074C384 @1009 */
/* 8074C385 0003+00 data_8074C385 None */
static u8 struct_8074C384[4];

/* 8074C388-8074C394 000048 000C+00 1/1 0/0 0/0 .bss             @3928 */
static u8 lit_3928[12];

/* 8074C394-8074C3E0 000054 004C+00 11/13 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[76];

/* 8074C3E0-8074C3E4 0000A0 0004+00 2/5 0/0 0/0 .bss             s_dis__22@unnamed@d_a_e_pm_cpp@ */
static u8 data_8074C3E0[4];

/* 8074C3E4-8074C3E8 0000A4 0004+00 10/11 0/0 0/0 .bss s_LinkPos__22@unnamed@d_a_e_pm_cpp@ */
static u8 data_8074C3E4[4];

/* 80742958-80742C94 000B58 033C+00 1/1 0/0 0/0 .text            SearchFarP__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SearchFarP() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SearchFarP__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFE4-8074BFE8 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4407 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4407 = 1000000000.0f;
COMPILER_STRIP_GATE(0x8074BFE4, &lit_4407);
#pragma pop

/* 80742C94-80742E1C 000E94 0188+00 3/3 0/0 0/0 .text            SearchNearP__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SearchNearP() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SearchNearP__8daE_PM_cFv.s"
}
#pragma pop

/* 80742E1C-80742FB4 00101C 0198+00 2/2 0/0 0/0 .text            SearchNextPos__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SearchNextPos() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SearchNextPos__8daE_PM_cFv.s"
}
#pragma pop

/* 80742FB4-807430C4 0011B4 0110+00 1/1 0/0 0/0 .text            SetGakkiEffect__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SetGakkiEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SetGakkiEffect__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFE8-8074BFEC 0000AC 0004+00 1/1 0/0 0/0 .rodata          @4520 */
SECTION_RODATA static f32 const lit_4520 = 65.0f;
COMPILER_STRIP_GATE(0x8074BFE8, &lit_4520);

/* 807430C4-80743210 0012C4 014C+00 4/4 0/0 0/0 .text            CameraSet__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::CameraSet() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/CameraSet__8daE_PM_cFv.s"
}
#pragma pop

/* 80743210-80743294 001410 0084+00 5/5 0/0 0/0 .text            SetStopingCam__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SetStopingCam() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SetStopingCam__8daE_PM_cFv.s"
}
#pragma pop

/* 80743294-807433E8 001494 0154+00 6/6 0/0 0/0 .text            SetStopCam__8daE_PM_cF4cXyzffs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SetStopCam(cXyz param_0, f32 param_1, f32 param_2, s16 param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SetStopCam__8daE_PM_cF4cXyzffs.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFEC-8074BFF0 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4593 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4593 = 2.0f;
COMPILER_STRIP_GATE(0x8074BFEC, &lit_4593);
#pragma pop

/* 8074BFF0-8074BFF4 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4594 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4594 = 160.0f;
COMPILER_STRIP_GATE(0x8074BFF0, &lit_4594);
#pragma pop

/* 8074BFF4-8074BFF8 0000B8 0004+00 0/2 0/0 0/0 .rodata          @4595 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4595 = 80.0f;
COMPILER_STRIP_GATE(0x8074BFF4, &lit_4595);
#pragma pop

/* 807433E8-80743524 0015E8 013C+00 1/1 0/0 0/0 .text            SetMoveCam2__8daE_PM_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SetMoveCam2(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SetMoveCam2__8daE_PM_cFff.s"
}
#pragma pop

/* 80743524-80743600 001724 00DC+00 9/9 0/0 0/0 .text            SetMoveCam__8daE_PM_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SetMoveCam(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SetMoveCam__8daE_PM_cFff.s"
}
#pragma pop

/* 80743600-807436A4 001800 00A4+00 7/7 0/0 0/0 .text            SetReleaseCam__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SetReleaseCam() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SetReleaseCam__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074BFF8-8074BFFC 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4778 = -10728.0f;
COMPILER_STRIP_GATE(0x8074BFF8, &lit_4778);
#pragma pop

/* 8074BFFC-8074C000 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4779 = 17052.0f;
COMPILER_STRIP_GATE(0x8074BFFC, &lit_4779);
#pragma pop

/* 8074C000-8074C004 0000C4 0004+00 0/2 0/0 0/0 .rodata          @4780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4780 = 800.0f;
COMPILER_STRIP_GATE(0x8074C000, &lit_4780);
#pragma pop

/* 8074C004-8074C008 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4781 = -10477.0f;
COMPILER_STRIP_GATE(0x8074C004, &lit_4781);
#pragma pop

/* 8074C008-8074C00C 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4782 = 17710.0f;
COMPILER_STRIP_GATE(0x8074C008, &lit_4782);
#pragma pop

/* 8074C00C-8074C010 0000D0 0004+00 0/2 0/0 0/0 .rodata          @4783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4783 = 1500.0f;
COMPILER_STRIP_GATE(0x8074C00C, &lit_4783);
#pragma pop

/* 8074C010-8074C014 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4784 = 8500.0f;
COMPILER_STRIP_GATE(0x8074C010, &lit_4784);
#pragma pop

/* 8074C014-8074C018 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4785 = 600.0f;
COMPILER_STRIP_GATE(0x8074C014, &lit_4785);
#pragma pop

/* 8074C018-8074C01C 0000DC 0004+00 0/11 0/0 0/0 .rodata          @4786 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4786 = 200.0f;
COMPILER_STRIP_GATE(0x8074C018, &lit_4786);
#pragma pop

/* 8074C01C-8074C020 0000E0 0004+00 0/2 0/0 0/0 .rodata          @4787 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4787 = -5.0f;
COMPILER_STRIP_GATE(0x8074C01C, &lit_4787);
#pragma pop

/* 8074C020-8074C024 0000E4 0004+00 0/20 0/0 0/0 .rodata          @4788 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4788 = 5.0f;
COMPILER_STRIP_GATE(0x8074C020, &lit_4788);
#pragma pop

/* 8074C024-8074C028 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4789 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4789 = 900.0f;
COMPILER_STRIP_GATE(0x8074C024, &lit_4789);
#pragma pop

/* 8074C028-8074C02C 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4790 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4790 = 1.0f / 40.0f;
COMPILER_STRIP_GATE(0x8074C028, &lit_4790);
#pragma pop

/* 8074C02C-8074C030 0000F0 0004+00 0/13 0/0 0/0 .rodata          @4791 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4791 = 50.0f;
COMPILER_STRIP_GATE(0x8074C02C, &lit_4791);
#pragma pop

/* 8074C030-8074C034 0000F4 0004+00 0/2 0/0 0/0 .rodata          @4792 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4792 = -300.0f;
COMPILER_STRIP_GATE(0x8074C030, &lit_4792);
#pragma pop

/* 8074C034-8074C038 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4793 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x8074C034, &lit_4793);
#pragma pop

/* 8074C038-8074C03C 0000FC 0004+00 0/8 0/0 0/0 .rodata          @4794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4794 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8074C038, &lit_4794);
#pragma pop

/* 807436A4-80743D10 0018A4 066C+00 1/1 0/0 0/0 .text            Ap_StartAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Ap_StartAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Ap_StartAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80743D10-80743D8C 001F10 007C+00 1/1 0/0 0/0 .text            s_obj_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_obj_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/s_obj_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C03C-8074C040 000100 0004+00 0/6 0/0 0/0 .rodata          @4972 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4972 = 500.0f;
COMPILER_STRIP_GATE(0x8074C03C, &lit_4972);
#pragma pop

/* 8074C040-8074C044 000104 0004+00 0/3 0/0 0/0 .rodata          @4973 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4973 = 150.0f;
COMPILER_STRIP_GATE(0x8074C040, &lit_4973);
#pragma pop

/* 8074C044-8074C048 000108 0004+00 0/1 0/0 0/0 .rodata          @4974 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4974 = -11239.0f;
COMPILER_STRIP_GATE(0x8074C044, &lit_4974);
#pragma pop

/* 8074C048-8074C04C 00010C 0004+00 0/1 0/0 0/0 .rodata          @4975 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4975 = 1850.0f;
COMPILER_STRIP_GATE(0x8074C048, &lit_4975);
#pragma pop

/* 8074C04C-8074C050 000110 0004+00 0/1 0/0 0/0 .rodata          @4976 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4976 = 16932.0f;
COMPILER_STRIP_GATE(0x8074C04C, &lit_4976);
#pragma pop

/* 8074C050-8074C054 000114 0004+00 0/1 0/0 0/0 .rodata          @4977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4977 = -10954.0f;
COMPILER_STRIP_GATE(0x8074C050, &lit_4977);
#pragma pop

/* 8074C054-8074C058 000118 0004+00 0/2 0/0 0/0 .rodata          @4978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4978 = 1900.0f;
COMPILER_STRIP_GATE(0x8074C054, &lit_4978);
#pragma pop

/* 8074C058-8074C05C 00011C 0004+00 0/1 0/0 0/0 .rodata          @4979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4979 = 17025.0f;
COMPILER_STRIP_GATE(0x8074C058, &lit_4979);
#pragma pop

/* 8074C05C-8074C060 000120 0004+00 0/2 0/0 0/0 .rodata          @4980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4980 = -500.0f;
COMPILER_STRIP_GATE(0x8074C05C, &lit_4980);
#pragma pop

/* 8074C060-8074C064 000124 0004+00 0/1 0/0 0/0 .rodata          @4981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4981 = 120.0f;
COMPILER_STRIP_GATE(0x8074C060, &lit_4981);
#pragma pop

/* 8074C064-8074C068 000128 0004+00 0/1 0/0 0/0 .rodata          @4982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4982 = -70.0f;
COMPILER_STRIP_GATE(0x8074C064, &lit_4982);
#pragma pop

/* 80743D8C-807444F0 001F8C 0764+00 1/2 0/0 0/0 .text            Ap_CreateAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Ap_CreateAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Ap_CreateAction__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C068-8074C06C 00012C 0004+00 0/3 0/0 0/0 .rodata          @5045 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5045 = 13.0f;
COMPILER_STRIP_GATE(0x8074C068, &lit_5045);
#pragma pop

/* 8074C06C-8074C070 000130 0004+00 0/3 0/0 0/0 .rodata          @5046 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5046 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8074C06C, &lit_5046);
#pragma pop

/* 8074C070-8074C074 000134 0004+00 0/3 0/0 0/0 .rodata          @5047 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5047 = 10.0f;
COMPILER_STRIP_GATE(0x8074C070, &lit_5047);
#pragma pop

/* 8074C074-8074C078 000138 0004+00 0/2 0/0 0/0 .rodata          @5048 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5048 = -9881.0f;
COMPILER_STRIP_GATE(0x8074C074, &lit_5048);
#pragma pop

/* 8074C078-8074C07C 00013C 0004+00 0/2 0/0 0/0 .rodata          @5049 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5049 = 1892.0f;
COMPILER_STRIP_GATE(0x8074C078, &lit_5049);
#pragma pop

/* 8074C07C-8074C080 000140 0004+00 0/2 0/0 0/0 .rodata          @5050 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5050 = 17971.0f;
COMPILER_STRIP_GATE(0x8074C07C, &lit_5050);
#pragma pop

/* 8074C3E8-8074C3EC 0000A8 0002+02 13/16 0/0 0/0 .bss s_TargetAngle__22@unnamed@d_a_e_pm_cpp@ */
static u8 data_8074C3E8[2 + 2 /* padding */];

/* 807444F0-80744790 0026F0 02A0+00 1/1 0/0 0/0 .text            Ap_EscapeAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Ap_EscapeAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Ap_EscapeAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80744790-80744878 002990 00E8+00 1/1 0/0 0/0 .text            AppearAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::AppearAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/AppearAction__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C080-8074C084 000144 0004+00 1/2 0/0 0/0 .rodata          @5216 */
SECTION_RODATA static f32 const lit_5216 = 0.5f;
COMPILER_STRIP_GATE(0x8074C080, &lit_5216);

/* 8074C084-8074C088 000148 0004+00 0/4 0/0 0/0 .rodata          @5217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5217 = -30.0f;
COMPILER_STRIP_GATE(0x8074C084, &lit_5217);
#pragma pop

/* 8074C088-8074C08C 00014C 0004+00 0/1 0/0 0/0 .rodata          @5218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5218 = 15000.0f;
COMPILER_STRIP_GATE(0x8074C088, &lit_5218);
#pragma pop

/* 80744878-80744DA0 002A78 0528+00 1/1 0/0 0/0 .text            DemoBeforeEscape__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoBeforeEscape() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoBeforeEscape__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C08C-8074C090 000150 0004+00 0/1 0/0 0/0 .rodata          @5341 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5341 = -100.0f;
COMPILER_STRIP_GATE(0x8074C08C, &lit_5341);
#pragma pop

/* 8074C090-8074C094 000154 0004+00 0/2 0/0 0/0 .rodata          @5342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5342 = -3.0f;
COMPILER_STRIP_GATE(0x8074C090, &lit_5342);
#pragma pop

/* 8074C094-8074C098 000158 0004+00 0/4 0/0 0/0 .rodata          @5343 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5343 = 10000.0f;
COMPILER_STRIP_GATE(0x8074C094, &lit_5343);
#pragma pop

/* 80744DA0-807453F4 002FA0 0654+00 1/1 0/0 0/0 .text            DemoAfterEscape__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoAfterEscape() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoAfterEscape__8daE_PM_cFv.s"
}
#pragma pop

/* 807453F4-80745438 0035F4 0044+00 1/1 0/0 0/0 .text            DemoMoveAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoMoveAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoMoveAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80745438-807455F4 003638 01BC+00 1/1 0/0 0/0 .text            WaitAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::WaitAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/WaitAction__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C098-8074C09C 00015C 0004+00 0/1 0/0 0/0 .rodata          @5440 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5440 = -1000000000.0f;
COMPILER_STRIP_GATE(0x8074C098, &lit_5440);
#pragma pop

/* 8074C09C-8074C0A0 000160 0004+00 0/1 0/0 0/0 .rodata          @5441 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5441 = -50.0f;
COMPILER_STRIP_GATE(0x8074C09C, &lit_5441);
#pragma pop

/* 807455F4-807458F8 0037F4 0304+00 1/1 0/0 0/0 .text            GroundCheck__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::GroundCheck() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/GroundCheck__8daE_PM_cFv.s"
}
#pragma pop

/* 807458F8-80745970 003AF8 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" asm void __dt__14dBgS_ObjGndChkFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C0A0-8074C0A4 000164 0004+00 0/1 0/0 0/0 .rodata          @5483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5483 = 29.0f / 5.0f;
COMPILER_STRIP_GATE(0x8074C0A0, &lit_5483);
#pragma pop

/* 8074C0A4-8074C0A8 000168 0004+00 0/1 0/0 0/0 .rodata          @5484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5484 = 5.5f;
COMPILER_STRIP_GATE(0x8074C0A4, &lit_5484);
#pragma pop

/* 8074C0A8-8074C0AC 00016C 0004+00 0/1 0/0 0/0 .rodata          @5485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5485 = 12.0f;
COMPILER_STRIP_GATE(0x8074C0A8, &lit_5485);
#pragma pop

/* 80745970-80745C44 003B70 02D4+00 1/1 0/0 0/0 .text            EscapeAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::EscapeAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/EscapeAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80745C44-80745DBC 003E44 0178+00 1/1 0/0 0/0 .text            DeathAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DeathAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DeathAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80745DBC-80745ED0 003FBC 0114+00 2/1 0/0 0/0 .text            Action__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Action() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Action__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C0AC-8074C0B0 000170 0004+00 0/1 0/0 0/0 .rodata          @5709 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5709 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x8074C0AC, &lit_5709);
#pragma pop

/* 8074C0B0-8074C0B4 000174 0004+00 0/1 0/0 0/0 .rodata          @5710 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5710 = 3.0f;
COMPILER_STRIP_GATE(0x8074C0B0, &lit_5710);
#pragma pop

/* 8074C0B4-8074C0B8 000178 0004+00 0/1 0/0 0/0 .rodata          @5711 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5711 = 2500.0f;
COMPILER_STRIP_GATE(0x8074C0B4, &lit_5711);
#pragma pop

/* 80745ED0-80746624 0040D0 0754+00 2/1 0/0 0/0 .text            DemoBossStart2__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoBossStart2() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoBossStart2__8daE_PM_cFv.s"
}
#pragma pop

/* 80746624-80747194 004824 0B70+00 2/1 0/0 0/0 .text            DemoBossStart__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoBossStart() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoBossStart__8daE_PM_cFv.s"
}
#pragma pop

/* 80747194-80747500 005394 036C+00 1/1 0/0 0/0 .text            BossEscapeAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::BossEscapeAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/BossEscapeAction__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C0B8-8074C0BC 00017C 0004+00 0/0 0/0 0/0 .rodata          @5712 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5712 = 106.0f;
COMPILER_STRIP_GATE(0x8074C0B8, &lit_5712);
#pragma pop

/* 8074C0BC-8074C0C0 000180 0004+00 0/0 0/0 0/0 .rodata          @5713 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5713 = 124.0f;
COMPILER_STRIP_GATE(0x8074C0BC, &lit_5713);
#pragma pop

/* 8074C0C0-8074C0C4 000184 0004+00 0/0 0/0 0/0 .rodata          @5714 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5714 = 115.0f;
COMPILER_STRIP_GATE(0x8074C0C0, &lit_5714);
#pragma pop

/* 8074C0C4-8074C0C8 000188 0004+00 0/0 0/0 0/0 .rodata          @5715 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5715 = 133.0f;
COMPILER_STRIP_GATE(0x8074C0C4, &lit_5715);
#pragma pop

/* 8074C0C8-8074C0CC 00018C 0004+00 0/0 0/0 0/0 .rodata          @5716 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5716 = 146.0f;
COMPILER_STRIP_GATE(0x8074C0C8, &lit_5716);
#pragma pop

/* 8074C0CC-8074C0D0 000190 0004+00 0/0 0/0 0/0 .rodata          @5717 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5717 = 159.0f;
COMPILER_STRIP_GATE(0x8074C0CC, &lit_5717);
#pragma pop

/* 8074C0D0-8074C0D4 000194 0004+00 0/0 0/0 0/0 .rodata          @5718 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5718 = 173.0f;
COMPILER_STRIP_GATE(0x8074C0D0, &lit_5718);
#pragma pop

/* 8074C0D4-8074C0D8 000198 0004+00 0/0 0/0 0/0 .rodata          @5719 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5719 = 184.0f;
COMPILER_STRIP_GATE(0x8074C0D4, &lit_5719);
#pragma pop

/* 8074C0D8-8074C0DC 00019C 0004+00 0/0 0/0 0/0 .rodata          @5720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5720 = -80.0f;
COMPILER_STRIP_GATE(0x8074C0D8, &lit_5720);
#pragma pop

/* 8074C0DC-8074C0E0 0001A0 0004+00 0/0 0/0 0/0 .rodata          @5991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5991 = 240.0f;
COMPILER_STRIP_GATE(0x8074C0DC, &lit_5991);
#pragma pop

/* 8074C0E0-8074C0E4 0001A4 0004+00 0/5 0/0 0/0 .rodata          @5992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5992 = 1000.0f;
COMPILER_STRIP_GATE(0x8074C0E0, &lit_5992);
#pragma pop

/* 8074C0E4-8074C0E8 0001A8 0004+00 0/0 0/0 0/0 .rodata          @5993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5993 = 250.0f;
COMPILER_STRIP_GATE(0x8074C0E4, &lit_5993);
#pragma pop

/* 8074C0E8-8074C0EC 0001AC 0004+00 0/0 0/0 0/0 .rodata          @5994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5994 = 2.0f / 25.0f;
COMPILER_STRIP_GATE(0x8074C0E8, &lit_5994);
#pragma pop

/* 8074C0EC-8074C0F0 0001B0 0004+00 0/1 0/0 0/0 .rodata          @6124 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6124 = 16000.0f;
COMPILER_STRIP_GATE(0x8074C0EC, &lit_6124);
#pragma pop

/* 80747500-807476A0 005700 01A0+00 2/2 0/0 0/0 .text            s_boss_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_boss_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/s_boss_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C0F0-8074C0F4 0001B4 0004+00 0/1 0/0 0/0 .rodata          @6337 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6337 = 2000.0f;
COMPILER_STRIP_GATE(0x8074C0F0, &lit_6337);
#pragma pop

/* 8074C0F4-8074C0F8 0001B8 0004+00 0/1 0/0 0/0 .rodata          @6338 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6338 = -5355.0f;
COMPILER_STRIP_GATE(0x8074C0F4, &lit_6338);
#pragma pop

/* 8074C0F8-8074C0FC 0001BC 0004+00 0/1 0/0 0/0 .rodata          @6339 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6339 = 11060.0f;
COMPILER_STRIP_GATE(0x8074C0F8, &lit_6339);
#pragma pop

/* 8074C0FC-8074C100 0001C0 0004+00 0/1 0/0 0/0 .rodata          @6340 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6340 = -5700.0f;
COMPILER_STRIP_GATE(0x8074C0FC, &lit_6340);
#pragma pop

/* 8074C100-8074C104 0001C4 0004+00 0/1 0/0 0/0 .rodata          @6341 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6341 = 5190.0f;
COMPILER_STRIP_GATE(0x8074C100, &lit_6341);
#pragma pop

/* 8074C104-8074C108 0001C8 0004+00 0/1 0/0 0/0 .rodata          @6342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6342 = 350.0f;
COMPILER_STRIP_GATE(0x8074C104, &lit_6342);
#pragma pop

/* 807476A0-80747F38 0058A0 0898+00 2/1 0/0 0/0 .text            BossDamageAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::BossDamageAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/BossDamageAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80747F38-807480A4 006138 016C+00 1/1 0/0 0/0 .text            BossWaitAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::BossWaitAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/BossWaitAction__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C108-8074C10C 0001CC 0004+00 0/1 0/0 0/0 .rodata          @6343 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6343 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8074C108, &lit_6343);
#pragma pop

/* 8074C10C-8074C110 0001D0 0004+00 0/1 0/0 0/0 .rodata          @6623 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6623 = 196.0f;
COMPILER_STRIP_GATE(0x8074C10C, &lit_6623);
#pragma pop

/* 8074C110-8074C114 0001D4 0004+00 0/1 0/0 0/0 .rodata          @6624 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6624 = 195.0f;
COMPILER_STRIP_GATE(0x8074C110, &lit_6624);
#pragma pop

/* 8074C114-8074C118 0001D8 0004+00 0/1 0/0 0/0 .rodata          @6625 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6625 = 30000.0f;
COMPILER_STRIP_GATE(0x8074C114, &lit_6625);
#pragma pop

/* 8074C118-8074C11C 0001DC 0004+00 0/1 0/0 0/0 .rodata          @6626 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6626 = 15.0f;
COMPILER_STRIP_GATE(0x8074C118, &lit_6626);
#pragma pop

/* 8074C11C-8074C120 0001E0 0004+00 0/2 0/0 0/0 .rodata          @6627 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6627 = -200.0f;
COMPILER_STRIP_GATE(0x8074C11C, &lit_6627);
#pragma pop

/* 807480A4-80748964 0062A4 08C0+00 1/1 0/0 0/0 .text            BossDeathAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::BossDeathAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/BossDeathAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80748964-80748B18 006B64 01B4+00 2/1 0/0 0/0 .text            BossAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::BossAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/BossAction__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C120-8074C124 0001E4 0004+00 0/1 0/0 0/0 .rodata          @6712 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6712 = 1.5f;
COMPILER_STRIP_GATE(0x8074C120, &lit_6712);
#pragma pop

/* 80748B18-80748D74 006D18 025C+00 1/1 0/0 0/0 .text            Execute__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Execute() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Execute__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C124-8074C128 0001E8 0004+00 0/1 0/0 0/0 .rodata          @6921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6921 = -10000.0f;
COMPILER_STRIP_GATE(0x8074C124, &lit_6921);
#pragma pop

/* 8074C128-8074C12C 0001EC 0004+00 0/2 0/0 0/0 .rodata          @6922 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6922 = -9.0f;
COMPILER_STRIP_GATE(0x8074C128, &lit_6922);
#pragma pop

/* 8074C12C-8074C130 0001F0 0004+00 0/1 0/0 0/0 .rodata          @6923 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6923 = -150.0f;
COMPILER_STRIP_GATE(0x8074C12C, &lit_6923);
#pragma pop

/* 80748D74-8074954C 006F74 07D8+00 2/2 0/0 0/0 .text            StartAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::StartAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/StartAction__8daE_PM_cFv.s"
}
#pragma pop

/* 8074954C-807499C0 00774C 0474+00 4/4 0/0 0/0 .text            GakkiLoopAction__8daE_PM_cF4cXyzf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::GakkiLoopAction(cXyz param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/GakkiLoopAction__8daE_PM_cF4cXyzf.s"
}
#pragma pop

/* 807499C0-80749C0C 007BC0 024C+00 1/1 0/0 0/0 .text            DemoCreateAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DemoCreateAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DemoCreateAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80749C0C-80749D9C 007E0C 0190+00 1/1 0/0 0/0 .text            CreateAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::CreateAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/CreateAction__8daE_PM_cFv.s"
}
#pragma pop

/* 80749D9C-80749ED0 007F9C 0134+00 2/2 0/0 0/0 .text            CreateChk__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::CreateChk() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/CreateChk__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C130-8074C134 0001F4 0004+00 0/1 0/0 0/0 .rodata          @7229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7229 = 1280.0f;
COMPILER_STRIP_GATE(0x8074C130, &lit_7229);
#pragma pop

/* 8074C134-8074C13C 0001F8 0004+04 0/1 0/0 0/0 .rodata          @7230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7230[1 + 1 /* padding */] = {
    556.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8074C134, &lit_7230);
#pragma pop

/* 80749ED0-8074A14C 0080D0 027C+00 1/1 0/0 0/0 .text            LampAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::LampAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/LampAction__8daE_PM_cFv.s"
}
#pragma pop

/* 8074A14C-8074A210 00834C 00C4+00 1/1 0/0 0/0 .text            DamageAction__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::DamageAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/DamageAction__8daE_PM_cFv.s"
}
#pragma pop

/* 8074A210-8074A3DC 008410 01CC+00 1/1 0/0 0/0 .text            At_Check__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::At_Check() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/At_Check__8daE_PM_cFv.s"
}
#pragma pop

/* 8074A3DC-8074A644 0085DC 0268+00 2/2 0/0 0/0 .text            ObjHit__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::ObjHit() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/ObjHit__8daE_PM_cFv.s"
}
#pragma pop

/* 8074A644-8074A6CC 008844 0088+00 1/1 0/0 0/0 .text            EyeMove__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::EyeMove() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/EyeMove__8daE_PM_cFv.s"
}
#pragma pop

/* 8074A6CC-8074AAC0 0088CC 03F4+00 1/1 0/0 0/0 .text            Draw__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Draw() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Draw__8daE_PM_cFv.s"
}
#pragma pop

/* 8074AAC0-8074AB28 008CC0 0068+00 1/1 0/0 0/0 .text            Delete__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Delete() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Delete__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C13C-8074C144 000200 0008+00 1/1 0/0 0/0 .rodata          @7464 */
SECTION_RODATA static u8 const lit_7464[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8074C13C, &lit_7464);

/* 8074AB28-8074ABA8 008D28 0080+00 1/1 0/0 0/0 .text            setBaseMtx__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/setBaseMtx__8daE_PM_cFv.s"
}
#pragma pop

/* 8074ABA8-8074AC10 008DA8 0068+00 1/1 0/0 0/0 .text            setGakkiBaseMtx__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::setGakkiBaseMtx() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/setGakkiBaseMtx__8daE_PM_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C144-8074C148 000208 0004+00 0/1 0/0 0/0 .rodata          @7575 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7575 = -35.0f;
COMPILER_STRIP_GATE(0x8074C144, &lit_7575);
#pragma pop

/* 8074AC10-8074AE90 008E10 0280+00 1/1 0/0 0/0 .text            setLampBaseMtx__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::setLampBaseMtx() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/setLampBaseMtx__8daE_PM_cFv.s"
}
#pragma pop

/* 8074AE90-8074AEB0 009090 0020+00 1/0 0/0 0/0 .text            daE_PM_Draw__FP8daE_PM_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_PM_Draw(daE_PM_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/daE_PM_Draw__FP8daE_PM_c.s"
}
#pragma pop

/* 8074AEB0-8074AED0 0090B0 0020+00 2/1 0/0 0/0 .text            daE_PM_Execute__FP8daE_PM_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_PM_Execute(daE_PM_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/daE_PM_Execute__FP8daE_PM_c.s"
}
#pragma pop

/* 8074AED0-8074AED8 0090D0 0008+00 1/0 0/0 0/0 .text            daE_PM_IsDelete__FP8daE_PM_c */
static bool daE_PM_IsDelete(daE_PM_c* param_0) {
    return true;
}

/* 8074AED8-8074AEF8 0090D8 0020+00 1/0 0/0 0/0 .text            daE_PM_Delete__FP8daE_PM_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_PM_Delete(daE_PM_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/daE_PM_Delete__FP8daE_PM_c.s"
}
#pragma pop

/* 8074AEF8-8074B4DC 0090F8 05E4+00 1/1 0/0 0/0 .text            SkipChk__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::SkipChk() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/SkipChk__8daE_PM_cFv.s"
}
#pragma pop

/* 8074B4DC-8074B834 0096DC 0358+00 1/1 0/0 0/0 .text            Create__8daE_PM_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_PM_c::Create() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/Create__8daE_PM_cFv.s"
}
#pragma pop

/* 8074B834-8074B87C 009A34 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8074B87C-8074B8C4 009A7C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8074B8C4-8074B920 009AC4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 8074B920-8074B990 009B20 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8074B990-8074BA00 009B90 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8074BA00-8074BA20 009C00 0020+00 1/0 0/0 0/0 .text            daE_PM_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_PM_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/daE_PM_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8074BA20-8074BA68 009C20 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 8074BA68-8074BAB0 009C68 0048+00 2/1 0/0 0/0 .text            __dt__12daE_PM_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_PM_HIO_c::~daE_PM_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__dt__12daE_PM_HIO_cFv.s"
}
#pragma pop

/* 8074BAB0-8074BAEC 009CB0 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_pm_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_pm_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/__sinit_d_a_e_pm_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8074BAB0, __sinit_d_a_e_pm_cpp);
#pragma pop

/* 8074BAEC-8074BAF4 009CEC 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8074BAEC() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/func_8074BAEC.s"
}
#pragma pop

/* 8074BAF4-8074BAFC 009CF4 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8074BAF4() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/func_8074BAF4.s"
}
#pragma pop

/* 8074BAFC-8074BB04 009CFC 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8074BAFC() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/func_8074BAFC.s"
}
#pragma pop

/* 8074BB04-8074BB0C 009D04 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8074BB04() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/func_8074BB04.s"
}
#pragma pop

/* 8074BB0C-8074BB14 009D0C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8074BB0C() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/func_8074BB0C.s"
}
#pragma pop

/* 8074BB14-8074BF28 009D14 0414+00 1/1 0/0 0/0 .text
 * setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void setMidnaBindEffect(fopEn_enemy_c* param_0, Z2CreatureEnemy* param_1, cXyz* param_2,
                                   cXyz* param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_pm/d_a_e_pm/setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 8074C3EC-8074C3F0 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8074C3EC[4];
#pragma pop

/* 8074C3F0-8074C3F4 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8074C3F0[4];
#pragma pop

/* 8074C3F4-8074C3F8 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8074C3F4[4];
#pragma pop

/* 8074C3F8-8074C3FC 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8074C3F8[4];
#pragma pop

/* 8074C3FC-8074C400 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8074C3FC[4];
#pragma pop

/* 8074C400-8074C404 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8074C400[4];
#pragma pop

/* 8074C404-8074C408 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8074C404[4];
#pragma pop

/* 8074C408-8074C40C 0000C8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8074C408[4];
#pragma pop

/* 8074C40C-8074C410 0000CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8074C40C[4];
#pragma pop

/* 8074C410-8074C414 0000D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8074C410[4];
#pragma pop

/* 8074C414-8074C418 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8074C414[4];
#pragma pop

/* 8074C418-8074C41C 0000D8 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8074C418[4];
#pragma pop

/* 8074C41C-8074C420 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8074C41C[4];
#pragma pop

/* 8074C420-8074C424 0000E0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8074C420[4];
#pragma pop

/* 8074C424-8074C428 0000E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8074C424[4];
#pragma pop

/* 8074C428-8074C42C 0000E8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8074C428[4];
#pragma pop

/* 8074C42C-8074C430 0000EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8074C42C[4];
#pragma pop

/* 8074C430-8074C434 0000F0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8074C430[4];
#pragma pop

/* 8074C434-8074C438 0000F4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8074C434[4];
#pragma pop

/* 8074C438-8074C43C 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8074C438[4];
#pragma pop

/* 8074C43C-8074C440 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8074C43C[4];
#pragma pop

/* 8074C440-8074C444 000100 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8074C440[4];
#pragma pop

/* 8074C444-8074C448 000104 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8074C444[4];
#pragma pop

/* 8074C448-8074C44C 000108 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8074C448[4];
#pragma pop

/* 8074C44C-8074C450 00010C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8074C44C[4];
#pragma pop

/* 8074C148-8074C148 00020C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
