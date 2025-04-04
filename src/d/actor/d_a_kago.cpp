/**
 * @file d_a_kago.cpp
 * 
*/

#include "d/actor/d_a_kago.h"
#include "dol2asm.h"
#include "d/d_camera.h"

//
// Forward References:
//

extern "C" void __ct__12daKago_HIO_cFv();
extern "C" void getBckName__8daKago_cFi();
extern "C" void setBck__8daKago_cFiUcff();
extern "C" void checkBck__8daKago_cFi();
extern "C" void draw__8daKago_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daKago_Draw__FP8daKago_c();
extern "C" void executeBalloonMenu__8daKago_cFv();
extern "C" void checkGroundHeight__8daKago_cF4cXyzPf();
extern "C" void checkRoofHeight__8daKago_cF4cXyz();
extern "C" void checkMoveHeight__8daKago_cFv();
extern "C" void checkSizeBg__8daKago_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" bool getBeforeGroundHeight__8daKago_cFUc();
extern "C" void demo_skip__8daKago_cFi();
extern "C" void DemoSkipCallBack__8daKago_cFPvi();
extern "C" void setActionMode__8daKago_cFii();
extern "C" void setMidnaTagPos__8daKago_cFv();
extern "C" void setMidnaRideOn__8daKago_cFv();
extern "C" void setPlayerRideOn__8daKago_cFv();
extern "C" void setRideOff__8daKago_cFv();
extern "C" void searchNearPassPoint__8daKago_cFv();
extern "C" void setSceneChange__8daKago_cFi();
extern "C" void createBalloonScore__8daKago_cFv();
extern "C" void startBalloonScore__8daKago_cFv();
extern "C" void endBalloonScore__8daKago_cFv();
extern "C" void checkNextPath__8daKago_cF4cXyz();
extern "C" void checkHeight__8daKago_cFv();
extern "C" void checkYaguraPos__8daKago_cF4cXyz();
extern "C" void checkWallHitFall__8daKago_cFi();
extern "C" void checkAttackStart__8daKago_cFv();
extern "C" void getValueY__8daKago_cFf();
extern "C" void getValueX__8daKago_cFf();
extern "C" void getValueAbsX__8daKago_cFf();
extern "C" void flySpeedCalcLockOn__8daKago_cFv();
extern "C" void flySpeedCalc__8daKago_cFsi();
extern "C" void checkFlySceneChange__8daKago_cFv();
extern "C" void setFlyAway__8daKago_cFv();
extern "C" void setFlyAnime__8daKago_cFv();
extern "C" void executeFly__8daKago_cFv();
extern "C" void executeStagger__8daKago_cFv();
extern "C" void executeWait__8daKago_cFv();
extern "C" void calcAttackMove__8daKago_cFi();
extern "C" void executeAttack__8daKago_cFv();
extern "C" void calcCircleCamera__8daKago_cFi();
extern "C" void executeEvent__8daKago_cFv();
extern "C" void initPerchDemo__8daKago_cFv();
extern "C" void executePerchDemo__8daKago_cFv();
extern "C" void PerchDemoAwayForward__8daKago_cFv();
extern "C" void executePerch__8daKago_cFv();
extern "C" void executeEvent2__8daKago_cFv();
extern "C" void initFirstDemo__8daKago_cFv();
extern "C" void executeFirstDemo__8daKago_cFv();
extern "C" void executePerch2__8daKago_cFv();
extern "C" void executeLandingLakeHairia__8daKago_cFv();
extern "C" void executeLandingBoartHouse__8daKago_cFv();
extern "C" void executeLanding__8daKago_cFv();
extern "C" void moveDemoFly__8daKago_cFv();
extern "C" void setFlyEffect__8daKago_cFv();
extern "C" void setDashEffect__8daKago_cFv();
extern "C" void setDamageEffect__8daKago_cFv();
extern "C" void setDashBlurEffect__8daKago_cFi();
extern "C" void setWallHitEffect__8daKago_cF4cXyzi();
extern "C" void setSibukiEffect__8daKago_cFv();
extern "C" void setDashSibukiEffect__8daKago_cFv();
extern "C" void setWaterFallEffect__8daKago_cFv();
extern "C" static void s_waterfall__FPvPv();
extern "C" void setFlySound__8daKago_cFv();
extern "C" void action__8daKago_cFv();
extern "C" void mtx_set__8daKago_cFv();
extern "C" void cc_set__8daKago_cFv();
extern "C" void execute__8daKago_cFv();
extern "C" static void daKago_Execute__FP8daKago_c();
extern "C" static bool daKago_IsDelete__FP8daKago_c();
extern "C" void _delete__8daKago_cFv();
extern "C" static void daKago_Delete__FP8daKago_c();
extern "C" void ctrlJoint__8daKago_cFP8J3DJointP8J3DModel();
extern "C" void JointCallBack__8daKago_cFP8J3DJointi();
extern "C" void CreateHeap__8daKago_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__8daKago_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__4cXyzFv();
extern "C" static void daKago_Create__FP8daKago_c();
extern "C" void __dt__12daKago_HIO_cFv();
extern "C" void __sinit_d_a_kago_cpp();
extern "C" static void func_80854AD0();
extern "C" static void func_80854AD8();
extern "C" void getMidnaActor__9daPy_py_cFv();
extern "C" extern char const* const d_a_kago__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGp_setNextStage__FPCcsScScfUliScsii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__12dSv_memBit_cFi();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetPnt__FPC5dPathi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LockonTarget__12dAttention_cFl();
extern "C" void LockonTruth__12dAttention_cFv();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetActorPointer__4cBgSCFi();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetSpecialCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void RoofChk__4dBgSFP12dBgS_RoofChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__12dBgS_RoofChkFv();
extern "C" void __dt__12dBgS_RoofChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void setPlayerDamage__9daPy_py_cFii();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void SetTrimTypeForce__9dCamera_cFl();
extern "C" void ModeFix__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void Reset__9dCamera_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void getSelectCursorPos__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void remove__10dMsgFlow_cFv();
extern "C" void getNowMsgNo__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rnd__Fv();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseUC__FPUcUcUc();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void func_80280808();
extern "C" void setDemoName__11Z2StatusMgrFPc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void setScoreCount__13daBalloon2D_cFUl();
extern "C" void setLockByCargo__8daE_YM_cFv();
extern "C" void __register_global_object();
extern "C" void saveBestScore__15daObj_Balloon_cFv();
extern "C" void checkHitWaterFall__16daTagWaterFall_cF4cXyz();

//
// Declarations:
//

/* ############################################################################################## */
/* 80854B04-80854B08 000000 0004+00 27/27 0/0 0/0 .rodata          @3929 */
SECTION_RODATA static f32 const lit_3929 = 1024.0f;
COMPILER_STRIP_GATE(0x80854B04, &lit_3929);

/* 80854B08-80854B0C 000004 0004+00 0/1 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3930 = 512.0f;
COMPILER_STRIP_GATE(0x80854B08, &lit_3930);
#pragma pop

/* 80854B0C-80854B10 000008 0004+00 0/1 0/0 0/0 .rodata          @3931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3931 = 256.0f;
COMPILER_STRIP_GATE(0x80854B0C, &lit_3931);
#pragma pop

/* 80854B10-80854B14 00000C 0004+00 11/25 0/0 0/0 .rodata          @3932 */
SECTION_RODATA static f32 const lit_3932 = 1.0f;
COMPILER_STRIP_GATE(0x80854B10, &lit_3932);

/* 80854B14-80854B18 000010 0004+00 0/6 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3933 = 50.0f;
COMPILER_STRIP_GATE(0x80854B14, &lit_3933);
#pragma pop

/* 80854B18-80854B1C 000014 0004+00 0/7 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3934 = 70.0f;
COMPILER_STRIP_GATE(0x80854B18, &lit_3934);
#pragma pop

/* 80854B1C-80854B20 000018 0004+00 0/1 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = 90.0f;
COMPILER_STRIP_GATE(0x80854B1C, &lit_3935);
#pragma pop

/* 80854B20-80854B24 00001C 0004+00 0/6 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = 5.0f;
COMPILER_STRIP_GATE(0x80854B20, &lit_3936);
#pragma pop

/* 80854B24-80854B28 000020 0004+00 0/5 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937 = 300.0f;
COMPILER_STRIP_GATE(0x80854B24, &lit_3937);
#pragma pop

/* 80854B28-80854B2C 000024 0004+00 0/6 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3938 = 3.0f;
COMPILER_STRIP_GATE(0x80854B28, &lit_3938);
#pragma pop

/* 80854B2C-80854B30 000028 0004+00 0/1 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3939 = 85.0f;
COMPILER_STRIP_GATE(0x80854B2C, &lit_3939);
#pragma pop

/* 80854B30-80854B34 00002C 0004+00 0/2 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 700.0f;
COMPILER_STRIP_GATE(0x80854B30, &lit_3940);
#pragma pop

/* 80854B34-80854B38 000030 0004+00 1/7 0/0 0/0 .rodata          @3941 */
SECTION_RODATA static f32 const lit_3941 = 200.0f;
COMPILER_STRIP_GATE(0x80854B34, &lit_3941);

/* 80854B38-80854B3C 000034 0004+00 4/27 0/0 0/0 .rodata          @3942 */
SECTION_RODATA static u8 const lit_3942[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80854B38, &lit_3942);

/* 80854B3C-80854B40 000038 0004+00 2/13 0/0 0/0 .rodata          @3943 */
SECTION_RODATA static f32 const lit_3943 = 10.0f;
COMPILER_STRIP_GATE(0x80854B3C, &lit_3943);

/* 80854D4C-80854D8C 000000 0040+00 1/1 0/0 0/0 .data cc_sph_src__22@unnamed@d_a_kago_cpp@ */
SECTION_DATA static u8 data_80854D4C[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
};

/* 80854D8C-80854DC8 -00001 003C+00 1/1 0/0 0/0 .data            @3969 */
SECTION_DATA static void* lit_3969[15] = {
    (void*)(((char*)getBckName__8daKago_cFi) + 0x38),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x40),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x48),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x50),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x58),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x60),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x68),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x70),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x78),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x88),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x88),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x88),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x88),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x88),
    (void*)(((char*)getBckName__8daKago_cFi) + 0x80),
};

/* 80854DC8-80854DF4 -00001 002C+00 1/1 0/0 0/0 .data            @4496 */
SECTION_DATA static void* lit_4496[11] = {
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x4C),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x60),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x74),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x6C),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0xC0),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0xD8),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0xD8),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x114),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x11C),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x240),
    (void*)(((char*)demo_skip__8daKago_cFi) + 0x248),
};

/* 80854DF4-80854E10 -00001 001C+00 1/1 0/0 0/0 .data            @6166 */
SECTION_DATA static void* lit_6166[7] = {
    (void*)(((char*)executePerchDemo__8daKago_cFv) + 0xAC),
    (void*)(((char*)executePerchDemo__8daKago_cFv) + 0x3B8),
    (void*)(((char*)executePerchDemo__8daKago_cFv) + 0x5A8),
    (void*)(((char*)executePerchDemo__8daKago_cFv) + 0xA7C),
    (void*)(((char*)executePerchDemo__8daKago_cFv) + 0xC2C),
    (void*)(((char*)executePerchDemo__8daKago_cFv) + 0xCA8),
    (void*)(((char*)executePerchDemo__8daKago_cFv) + 0xD9C),
};

/* 80854E10-80854E34 -00001 0024+00 1/1 0/0 0/0 .data            @6560 */
SECTION_DATA static void* lit_6560[9] = {
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x98),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x2A0),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x390),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x3B4),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x4C8),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x53C),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x598),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x5F4),
    (void*)(((char*)initFirstDemo__8daKago_cFv) + 0x5FC),
};

/* 80854E34-80854E5C -00001 0028+00 1/1 0/0 0/0 .data            @6924 */
SECTION_DATA static void* lit_6924[10] = {
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0x9C),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0x1E0),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0x3F4),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0x50C),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0x5C8),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0x920),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0xBF4),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0xE24),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0xE24),
    (void*)(((char*)executeFirstDemo__8daKago_cFv) + 0xF28),
};

/* 80854E5C-80854E78 -00001 001C+00 1/1 0/0 0/0 .data            @7130 */
SECTION_DATA static void* lit_7130[7] = {
    (void*)(((char*)executeLandingLakeHairia__8daKago_cFv) + 0x64),
    (void*)(((char*)executeLandingLakeHairia__8daKago_cFv) + 0x188),
    (void*)(((char*)executeLandingLakeHairia__8daKago_cFv) + 0x1A8),
    (void*)(((char*)executeLandingLakeHairia__8daKago_cFv) + 0x2F4),
    (void*)(((char*)executeLandingLakeHairia__8daKago_cFv) + 0x3E0),
    (void*)(((char*)executeLandingLakeHairia__8daKago_cFv) + 0x480),
    (void*)(((char*)executeLandingLakeHairia__8daKago_cFv) + 0x56C),
};

/* 80854E78-80854E84 00012C 000C+00 1/1 0/0 0/0 .data            kago_wall_hit_id$7718 */
SECTION_DATA static u8 kago_wall_hit_id[12] = {
    0x86, 0x58, 0x86, 0xF9, 0x86, 0xFA, 0x86, 0x59, 0x86, 0xFB, 0x86, 0xFC,
};

/* 80854E84-80854E8C 000138 0006+02 1/1 0/0 0/0 .data            kago_wave_id$7737 */
SECTION_DATA static u8 kago_wave_id_7737[6 + 2 /* padding */] = {
    0x86,
    0x5A,
    0x86,
    0x5B,
    0x86,
    0x5C,
    /* padding */
    0x00,
    0x00,
};

/* 80854E8C-80854E90 000140 0004+00 1/1 0/0 0/0 .data            kago_wave_id$7791 */
SECTION_DATA static u8 kago_wave_id_7791[4] = {
    0x86,
    0x5B,
    0x86,
    0x5C,
};

/* 80854E90-80854EBC -00001 002C+00 1/1 0/0 0/0 .data            @7982 */
SECTION_DATA static void* lit_7982[11] = {
    (void*)(((char*)action__8daKago_cFv) + 0x13C), (void*)(((char*)action__8daKago_cFv) + 0x148),
    (void*)(((char*)action__8daKago_cFv) + 0x154), (void*)(((char*)action__8daKago_cFv) + 0x160),
    (void*)(((char*)action__8daKago_cFv) + 0x16C), (void*)(((char*)action__8daKago_cFv) + 0x178),
    (void*)(((char*)action__8daKago_cFv) + 0x184), (void*)(((char*)action__8daKago_cFv) + 0x190),
    (void*)(((char*)action__8daKago_cFv) + 0x19C), (void*)(((char*)action__8daKago_cFv) + 0x1A8),
    (void*)(((char*)action__8daKago_cFv) + 0x1B4),
};

/* 80854EBC-80854EDC -00001 0020+00 1/0 0/0 0/0 .data            l_daKago_Method */
static actor_method_class l_daKago_Method = {
    (process_method_func)daKago_Create__FP8daKago_c,
    (process_method_func)daKago_Delete__FP8daKago_c,
    (process_method_func)daKago_Execute__FP8daKago_c,
    (process_method_func)daKago_IsDelete__FP8daKago_c,
    (process_method_func)daKago_Draw__FP8daKago_c,
};

/* 80854EDC-80854F0C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KAGO */
extern actor_process_profile_definition g_profile_KAGO = {
  fpcLy_CURRENT_e,        // mLayerID
  4,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_KAGO,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daKago_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  693,                    // mPriority
  &l_daKago_Method,       // sub_method
  0x00044000,             // mStatus
  fopAc_NPC_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80854F0C-80854F18 0001C0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80854F18-80854F24 0001CC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80854F24-80854F48 0001D8 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80854AD8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80854AD0,
};

/* 80854F48-80854F54 0001FC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80854F54-80854F60 000208 000C+00 2/2 0/0 0/0 .data            __vt__12daKago_HIO_c */
SECTION_DATA extern void* __vt__12daKago_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daKago_HIO_cFv,
};

/* 808495AC-80849660 0000EC 00B4+00 1/1 0/0 0/0 .text            __ct__12daKago_HIO_cFv */
daKago_HIO_c::daKago_HIO_c() {
    // NONMATCHING
}

/* 80849660-808496F0 0001A0 0090+00 4/3 0/0 0/0 .text            getBckName__8daKago_cFi */
void daKago_c::getBckName(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854B40-80854B44 00003C 0004+00 1/1 0/0 0/0 .rodata          @3978 */
SECTION_RODATA static f32 const lit_3978 = -1.0f;
COMPILER_STRIP_GATE(0x80854B40, &lit_3978);

/* 808496F0-80849798 000230 00A8+00 13/13 0/0 0/0 .text            setBck__8daKago_cFiUcff */
void daKago_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* 80849798-808497F8 0002D8 0060+00 6/6 0/0 0/0 .text            checkBck__8daKago_cFi */
void daKago_c::checkBck(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854B44-80854B48 000040 0004+00 1/9 0/0 0/0 .rodata          @4033 */
SECTION_RODATA static f32 const lit_4033 = 100.0f;
COMPILER_STRIP_GATE(0x80854B44, &lit_4033);

/* 80854B48-80854B4C 000044 0004+00 0/1 0/0 0/0 .rodata          @4034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4034 = 3500.0f;
COMPILER_STRIP_GATE(0x80854B48, &lit_4034);
#pragma pop

/* 808497F8-80849924 000338 012C+00 1/1 0/0 0/0 .text            draw__8daKago_cFv */
void daKago_c::draw() {
    // NONMATCHING
}

/* 80849924-80849960 000464 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80849960-80849980 0004A0 0020+00 1/0 0/0 0/0 .text            daKago_Draw__FP8daKago_c */
static void daKago_Draw(daKago_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854D14-80854D14 000210 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80854D14 = "F_SP112";
#pragma pop

/* 80849980-80849BA8 0004C0 0228+00 1/1 0/0 0/0 .text            executeBalloonMenu__8daKago_cFv */
void daKago_c::executeBalloonMenu() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854B4C-80854B54 000048 0008+00 0/6 0/0 0/0 .rodata          @4201 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4201[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80854B4C, &lit_4201);
#pragma pop

/* 80854B54-80854B5C 000050 0008+00 0/5 0/0 0/0 .rodata          @4202 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4202[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80854B54, &lit_4202);
#pragma pop

/* 80854B5C-80854B64 000058 0008+00 0/5 0/0 0/0 .rodata          @4203 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4203[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80854B5C, &lit_4203);
#pragma pop

/* 80854B64-80854B68 000060 0004+00 0/5 0/0 0/0 .rodata          @4204 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4204 = 500.0f;
COMPILER_STRIP_GATE(0x80854B64, &lit_4204);
#pragma pop

/* 80854B68-80854B6C 000064 0004+00 0/1 0/0 0/0 .rodata          @4205 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4205 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80854B68, &lit_4205);
#pragma pop

/* 80854B6C-80854B70 000068 0004+00 0/1 0/0 0/0 .rodata          @4206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4206 = 80.0f;
COMPILER_STRIP_GATE(0x80854B6C, &lit_4206);
#pragma pop

/* 80854F68-80854F6C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80854F68[4];

/* 80854F6C-80854F78 00000C 000C+00 1/1 0/0 0/0 .bss             @3924 */
static u8 lit_3924[12];

/* 80854F78-80854FD4 000018 005C+00 14/14 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[92];

/* 80849BA8-8084A070 0006E8 04C8+00 4/4 0/0 0/0 .text checkGroundHeight__8daKago_cF4cXyzPf */
void daKago_c::checkGroundHeight(cXyz param_0, f32* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854B70-80854B74 00006C 0004+00 0/1 0/0 0/0 .rodata          @4255 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4255 = 1000000000.0f;
COMPILER_STRIP_GATE(0x80854B70, &lit_4255);
#pragma pop

/* 80854B74-80854B78 000070 0004+00 0/1 0/0 0/0 .rodata          @4256 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4256 = 310.0f;
COMPILER_STRIP_GATE(0x80854B74, &lit_4256);
#pragma pop

/* 8084A070-8084A210 000BB0 01A0+00 4/4 0/0 0/0 .text            checkRoofHeight__8daKago_cF4cXyz */
void daKago_c::checkRoofHeight(cXyz param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854B78-80854B7C 000074 0004+00 2/9 0/0 0/0 .rodata          @4270 */
SECTION_RODATA static f32 const lit_4270 = 30.0f;
COMPILER_STRIP_GATE(0x80854B78, &lit_4270);

/* 8084A210-8084A2A8 000D50 0098+00 1/1 0/0 0/0 .text            checkMoveHeight__8daKago_cFv */
void daKago_c::checkMoveHeight() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854B7C-80854B80 000078 0004+00 0/1 0/0 0/0 .rodata          @4415 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4415 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80854B7C, &lit_4415);
#pragma pop

/* 8084A2A8-8084A694 000DE8 03EC+00 1/1 0/0 0/0 .text            checkSizeBg__8daKago_cFv */
void daKago_c::checkSizeBg() {
    // NONMATCHING
}

/* 8084A694-8084A6DC 0011D4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* 8084A6DC-8084A6E4 00121C 0008+00 1/1 0/0 0/0 .text            getBeforeGroundHeight__8daKago_cFUc
 */
bool daKago_c::getBeforeGroundHeight(u8 param_0) {
    return false;
}

/* 8084A6E4-8084AA64 001224 0380+00 2/1 0/0 0/0 .text            demo_skip__8daKago_cFi */
void daKago_c::demo_skip(int param_0) {
    // NONMATCHING
}

/* 8084AA64-8084AA98 0015A4 0034+00 4/4 0/0 0/0 .text            DemoSkipCallBack__8daKago_cFPvi */
void daKago_c::DemoSkipCallBack(void* param_0, int param_1) {
    // NONMATCHING
}

/* 8084AA98-8084AAAC 0015D8 0014+00 17/17 0/0 0/0 .text            setActionMode__8daKago_cFii */
void daKago_c::setActionMode(int param_0, int param_1) {
    // NONMATCHING
}

/* 8084AAAC-8084AB40 0015EC 0094+00 2/2 0/0 0/0 .text            setMidnaTagPos__8daKago_cFv */
void daKago_c::setMidnaTagPos() {
    // NONMATCHING
}

/* 8084AB40-8084AB8C 001680 004C+00 5/5 0/0 0/0 .text            setMidnaRideOn__8daKago_cFv */
void daKago_c::setMidnaRideOn() {
    // NONMATCHING
}

/* 8084AB8C-8084ABC8 0016CC 003C+00 7/7 0/0 0/0 .text            setPlayerRideOn__8daKago_cFv */
void daKago_c::setPlayerRideOn() {
    // NONMATCHING
}

/* 8084ABC8-8084AC2C 001708 0064+00 5/5 0/0 0/0 .text            setRideOff__8daKago_cFv */
void daKago_c::setRideOff() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854B80-80854B84 00007C 0004+00 0/0 0/0 0/0 .rodata          @4478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4478 = -77875.0f;
COMPILER_STRIP_GATE(0x80854B80, &lit_4478);
#pragma pop

/* 80854B84-80854B88 000080 0004+00 0/0 0/0 0/0 .rodata          @4479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4479 = -18287.0f;
COMPILER_STRIP_GATE(0x80854B84, &lit_4479);
#pragma pop

/* 80854B88-80854B8C 000084 0004+00 0/0 0/0 0/0 .rodata          @4480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4480 = 42000.0f;
COMPILER_STRIP_GATE(0x80854B88, &lit_4480);
#pragma pop

/* 80854B8C-80854B90 000088 0004+00 0/0 0/0 0/0 .rodata          @4481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4481 = -77275.0f;
COMPILER_STRIP_GATE(0x80854B8C, &lit_4481);
#pragma pop

/* 80854B90-80854B94 00008C 0004+00 0/1 0/0 0/0 .rodata          @4482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4482 = -18500.0f;
COMPILER_STRIP_GATE(0x80854B90, &lit_4482);
#pragma pop

/* 80854B94-80854B98 000090 0004+00 0/0 0/0 0/0 .rodata          @4483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4483 = 41090.0f;
COMPILER_STRIP_GATE(0x80854B94, &lit_4483);
#pragma pop

/* 80854B98-80854B9C 000094 0004+00 0/1 0/0 0/0 .rodata          @4484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4484 = -77615.0f;
COMPILER_STRIP_GATE(0x80854B98, &lit_4484);
#pragma pop

/* 80854B9C-80854BA0 000098 0004+00 0/0 0/0 0/0 .rodata          @4485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4485 = -18640.0f;
COMPILER_STRIP_GATE(0x80854B9C, &lit_4485);
#pragma pop

/* 80854BA0-80854BA4 00009C 0004+00 0/1 0/0 0/0 .rodata          @4486 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4486 = 41400.0f;
COMPILER_STRIP_GATE(0x80854BA0, &lit_4486);
#pragma pop

/* 80854BA4-80854BA8 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4487 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4487 = 3703.0f;
COMPILER_STRIP_GATE(0x80854BA4, &lit_4487);
#pragma pop

/* 80854BA8-80854BAC 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4488 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4488 = 337.0f;
COMPILER_STRIP_GATE(0x80854BA8, &lit_4488);
#pragma pop

/* 80854BAC-80854BB0 0000A8 0004+00 0/0 0/0 0/0 .rodata          @4489 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4489 = 863.0f;
COMPILER_STRIP_GATE(0x80854BAC, &lit_4489);
#pragma pop

/* 80854BB0-80854BB4 0000AC 0004+00 0/0 0/0 0/0 .rodata          @4490 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4490 = 3726.0f;
COMPILER_STRIP_GATE(0x80854BB0, &lit_4490);
#pragma pop

/* 80854BB4-80854BB8 0000B0 0004+00 0/0 0/0 0/0 .rodata          @4491 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4491 = 272.0f;
COMPILER_STRIP_GATE(0x80854BB4, &lit_4491);
#pragma pop

/* 80854BB8-80854BBC 0000B4 0004+00 0/0 0/0 0/0 .rodata          @4492 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4492 = 1196.0f;
COMPILER_STRIP_GATE(0x80854BB8, &lit_4492);
#pragma pop

/* 80854BBC-80854BC0 0000B8 0004+00 0/0 0/0 0/0 .rodata          @4493 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4493 = 3782.0f;
COMPILER_STRIP_GATE(0x80854BBC, &lit_4493);
#pragma pop

/* 80854BC0-80854BC4 0000BC 0004+00 0/0 0/0 0/0 .rodata          @4494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4494 = 222.0f;
COMPILER_STRIP_GATE(0x80854BC0, &lit_4494);
#pragma pop

/* 80854BC4-80854BC8 0000C0 0004+00 0/0 0/0 0/0 .rodata          @4495 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4495 = 690.0f;
COMPILER_STRIP_GATE(0x80854BC4, &lit_4495);
#pragma pop

/* 80854BC8-80854BCC 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4657 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4657 = 100000.0f;
COMPILER_STRIP_GATE(0x80854BC8, &lit_4657);
#pragma pop

/* 8084AC2C-8084AE78 00176C 024C+00 1/1 0/0 0/0 .text            searchNearPassPoint__8daKago_cFv */
void daKago_c::searchNearPassPoint() {
    // NONMATCHING
}

/* 8084AE78-8084AF40 0019B8 00C8+00 4/4 0/0 0/0 .text            setSceneChange__8daKago_cFi */
void daKago_c::setSceneChange(int param_0) {
    // NONMATCHING
}

/* 8084AF40-8084AFB0 001A80 0070+00 1/1 0/0 0/0 .text            createBalloonScore__8daKago_cFv */
void daKago_c::createBalloonScore() {
    // NONMATCHING
}

/* 8084AFB0-8084B024 001AF0 0074+00 1/1 0/0 0/0 .text            startBalloonScore__8daKago_cFv */
void daKago_c::startBalloonScore() {
    // NONMATCHING
}

/* 8084B024-8084B088 001B64 0064+00 1/1 0/0 0/0 .text            endBalloonScore__8daKago_cFv */
void daKago_c::endBalloonScore() {
    // NONMATCHING
}

/* 8084B088-8084B108 001BC8 0080+00 3/3 0/0 1/1 .text            checkNextPath__8daKago_cF4cXyz */
f32 daKago_c::checkNextPath(cXyz param_0) {
    // NONMATCHING
}

/* 8084B108-8084B134 001C48 002C+00 4/4 0/0 0/0 .text            checkHeight__8daKago_cFv */
void daKago_c::checkHeight() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854BCC-80854BD0 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4759 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4759 = -22984.0f;
COMPILER_STRIP_GATE(0x80854BCC, &lit_4759);
#pragma pop

/* 80854BD0-80854BD4 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4760 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4760 = 7455.0f;
COMPILER_STRIP_GATE(0x80854BD0, &lit_4760);
#pragma pop

/* 8084B134-8084B1E0 001C74 00AC+00 2/2 0/0 0/0 .text            checkYaguraPos__8daKago_cF4cXyz */
void daKago_c::checkYaguraPos(cXyz param_0) {
    // NONMATCHING
}

/* 8084B1E0-8084B56C 001D20 038C+00 3/3 0/0 0/0 .text            checkWallHitFall__8daKago_cFi */
void daKago_c::checkWallHitFall(int param_0) {
    // NONMATCHING
}

/* 8084B56C-8084B5DC 0020AC 0070+00 1/1 0/0 0/0 .text            checkAttackStart__8daKago_cFv */
void daKago_c::checkAttackStart() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854BD4-80854BDC 0000D0 0008+00 2/3 0/0 0/0 .rodata          @4923 */
SECTION_RODATA static u8 const lit_4923[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80854BD4, &lit_4923);

/* 8084B5DC-8084B6F4 00211C 0118+00 1/1 0/0 0/0 .text            getValueY__8daKago_cFf */
void daKago_c::getValueY(f32 param_0) {
    // NONMATCHING
}

/* 8084B6F4-8084B718 002234 0024+00 1/1 0/0 0/0 .text            getValueX__8daKago_cFf */
void daKago_c::getValueX(f32 param_0) {
    // NONMATCHING
}

/* 8084B718-8084B744 002258 002C+00 1/1 0/0 0/0 .text            getValueAbsX__8daKago_cFf */
void daKago_c::getValueAbsX(f32 param_0) {
    // NONMATCHING
}

/* 8084B744-8084B96C 002284 0228+00 1/1 0/0 0/0 .text            flySpeedCalcLockOn__8daKago_cFv */
void daKago_c::flySpeedCalcLockOn() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854BDC-80854BE0 0000D8 0004+00 0/3 0/0 0/0 .rodata          @5091 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5091 = 40.0f;
COMPILER_STRIP_GATE(0x80854BDC, &lit_5091);
#pragma pop

/* 80854BE0-80854BE4 0000DC 0004+00 0/5 0/0 0/0 .rodata          @5092 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5092 = 20.0f;
COMPILER_STRIP_GATE(0x80854BE0, &lit_5092);
#pragma pop

/* 8084B96C-8084C078 0024AC 070C+00 2/2 0/0 0/0 .text            flySpeedCalc__8daKago_cFsi */
void daKago_c::flySpeedCalc(s16 param_0, int param_1) {
    // NONMATCHING
}

/* 8084C078-8084C178 002BB8 0100+00 3/3 0/0 0/0 .text            checkFlySceneChange__8daKago_cFv */
void daKago_c::checkFlySceneChange() {
    // NONMATCHING
}

/* 8084C178-8084C204 002CB8 008C+00 1/1 0/0 0/0 .text            setFlyAway__8daKago_cFv */
void daKago_c::setFlyAway() {
    // NONMATCHING
}

/* 8084C204-8084C2CC 002D44 00C8+00 3/3 0/0 0/0 .text            setFlyAnime__8daKago_cFv */
void daKago_c::setFlyAnime() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854BE4-80854BE8 0000E0 0004+00 0/3 0/0 0/0 .rodata          @5329 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5329 = 2.0f;
COMPILER_STRIP_GATE(0x80854BE4, &lit_5329);
#pragma pop

/* 8084C2CC-8084C8FC 002E0C 0630+00 1/1 0/0 0/0 .text            executeFly__8daKago_cFv */
void daKago_c::executeFly() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854BE8-80854BEC 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5478 = -30.0f;
COMPILER_STRIP_GATE(0x80854BE8, &lit_5478);
#pragma pop

/* 80854BEC-80854BF0 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5479 = -50.0f;
COMPILER_STRIP_GATE(0x80854BEC, &lit_5479);
#pragma pop

/* 80854BF0-80854BF4 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5480 = 22.0f;
COMPILER_STRIP_GATE(0x80854BF0, &lit_5480);
#pragma pop

/* 80854BF4-80854BF8 0000F0 0004+00 1/5 0/0 0/0 .rodata          @5481 */
SECTION_RODATA static f32 const lit_5481 = 0.5f;
COMPILER_STRIP_GATE(0x80854BF4, &lit_5481);

/* 80854BF8-80854BFC 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5482 = -10.0f;
COMPILER_STRIP_GATE(0x80854BF8, &lit_5482);
#pragma pop

/* 8084C8FC-8084D108 00343C 080C+00 1/1 0/0 0/0 .text            executeStagger__8daKago_cFv */
void daKago_c::executeStagger() {
    // NONMATCHING
}

/* 8084D108-8084D354 003C48 024C+00 1/1 0/0 0/0 .text            executeWait__8daKago_cFv */
void daKago_c::executeWait() {
    // NONMATCHING
}

/* 8084D354-8084D50C 003E94 01B8+00 1/1 0/0 0/0 .text            calcAttackMove__8daKago_cFi */
void daKago_c::calcAttackMove(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854BFC-80854C00 0000F8 0004+00 0/2 0/0 0/0 .rodata          @5671 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5671 = 9.0f;
COMPILER_STRIP_GATE(0x80854BFC, &lit_5671);
#pragma pop

/* 80854C00-80854C04 0000FC 0004+00 0/2 0/0 0/0 .rodata          @5672 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5672 = 12.0f;
COMPILER_STRIP_GATE(0x80854C00, &lit_5672);
#pragma pop

/* 80854C04-80854C08 000100 0004+00 0/2 0/0 0/0 .rodata          @5673 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5673 = 35.0f;
COMPILER_STRIP_GATE(0x80854C04, &lit_5673);
#pragma pop

/* 80854C08-80854C0C 000104 0004+00 0/1 0/0 0/0 .rodata          @5674 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5674 = 23.0f;
COMPILER_STRIP_GATE(0x80854C08, &lit_5674);
#pragma pop

/* 80854C0C-80854C10 000108 0004+00 0/2 0/0 0/0 .rodata          @5675 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5675 = 8000.0f;
COMPILER_STRIP_GATE(0x80854C0C, &lit_5675);
#pragma pop

/* 8084D50C-8084DA18 00404C 050C+00 1/1 0/0 0/0 .text            executeAttack__8daKago_cFv */
void daKago_c::executeAttack() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854C10-80854C14 00010C 0004+00 0/1 0/0 0/0 .rodata          @5722 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5722 = 1500.0f;
COMPILER_STRIP_GATE(0x80854C10, &lit_5722);
#pragma pop

/* 80854C14-80854C18 000110 0004+00 0/2 0/0 0/0 .rodata          @5723 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5723 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80854C14, &lit_5723);
#pragma pop

/* 80854C18-80854C1C 000114 0004+00 0/3 0/0 0/0 .rodata          @5724 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5724 = -1000.0f;
COMPILER_STRIP_GATE(0x80854C18, &lit_5724);
#pragma pop

/* 80854C1C-80854C20 000118 0004+00 0/1 0/0 0/0 .rodata          @5725 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5725 = 60.0f;
COMPILER_STRIP_GATE(0x80854C1C, &lit_5725);
#pragma pop

/* 8084DA18-8084DBFC 004558 01E4+00 2/2 0/0 0/0 .text            calcCircleCamera__8daKago_cFi */
void daKago_c::calcCircleCamera(int param_0) {
    // NONMATCHING
}

/* 8084DBFC-8084DD18 00473C 011C+00 1/1 0/0 0/0 .text            executeEvent__8daKago_cFv */
void daKago_c::executeEvent() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854C20-80854C24 00011C 0004+00 0/1 0/0 0/0 .rodata          @5852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5852 = -90000.0f;
COMPILER_STRIP_GATE(0x80854C20, &lit_5852);
#pragma pop

/* 80854C24-80854C28 000120 0004+00 0/1 0/0 0/0 .rodata          @5853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5853 = 1000.0f;
COMPILER_STRIP_GATE(0x80854C24, &lit_5853);
#pragma pop

/* 80854C28-80854C2C 000124 0004+00 0/3 0/0 0/0 .rodata          @5854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5854 = -300.0f;
COMPILER_STRIP_GATE(0x80854C28, &lit_5854);
#pragma pop

/* 80854C2C-80854C30 000128 0004+00 0/2 0/0 0/0 .rodata          @5855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5855 = -100.0f;
COMPILER_STRIP_GATE(0x80854C2C, &lit_5855);
#pragma pop

/* 80854C30-80854C34 00012C 0004+00 0/1 0/0 0/0 .rodata          @5856 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5856 = -16000.0f;
COMPILER_STRIP_GATE(0x80854C30, &lit_5856);
#pragma pop

/* 80854C34-80854C38 000130 0004+00 0/1 0/0 0/0 .rodata          @5857 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5857 = 40000.0f;
COMPILER_STRIP_GATE(0x80854C34, &lit_5857);
#pragma pop

/* 8084DD18-8084E2D4 004858 05BC+00 1/1 0/0 0/0 .text            initPerchDemo__8daKago_cFv */
void daKago_c::initPerchDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854C38-80854C3C 000134 0004+00 0/1 0/0 0/0 .rodata          @6160 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6160 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80854C38, &lit_6160);
#pragma pop

/* 80854C3C-80854C40 000138 0004+00 0/1 0/0 0/0 .rodata          @6161 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6161 = -3.0f;
COMPILER_STRIP_GATE(0x80854C3C, &lit_6161);
#pragma pop

/* 8084E2D4-8084F09C 004E14 0DC8+00 2/1 0/0 0/0 .text            executePerchDemo__8daKago_cFv */
void daKago_c::executePerchDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854C40-80854C44 00013C 0004+00 0/0 0/0 0/0 .rodata          @6162 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6162 = 2000.0f;
COMPILER_STRIP_GATE(0x80854C40, &lit_6162);
#pragma pop

/* 80854C44-80854C48 000140 0004+00 0/3 0/0 0/0 .rodata          @6163 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6163 = 400.0f;
COMPILER_STRIP_GATE(0x80854C44, &lit_6163);
#pragma pop

/* 80854C48-80854C4C 000144 0004+00 0/0 0/0 0/0 .rodata          @6164 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6164 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80854C48, &lit_6164);
#pragma pop

/* 80854C4C-80854C50 000148 0004+00 0/1 0/0 0/0 .rodata          @6165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6165 = -800.0f;
COMPILER_STRIP_GATE(0x80854C4C, &lit_6165);
#pragma pop

/* 80854C50-80854C54 00014C 0004+00 0/3 0/0 0/0 .rodata          @6372 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6372 = -200.0f;
COMPILER_STRIP_GATE(0x80854C50, &lit_6372);
#pragma pop

/* 80854C54-80854C58 000150 0004+00 0/1 0/0 0/0 .rodata          @6373 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6373 = -500.0f;
COMPILER_STRIP_GATE(0x80854C54, &lit_6373);
#pragma pop

/* 8084F09C-8084FA58 005BDC 09BC+00 1/1 0/0 0/0 .text            PerchDemoAwayForward__8daKago_cFv
 */
void daKago_c::PerchDemoAwayForward() {
    // NONMATCHING
}

/* 8084FA58-8084FAA8 006598 0050+00 1/1 0/0 0/0 .text            executePerch__8daKago_cFv */
void daKago_c::executePerch() {
    // NONMATCHING
}

/* 8084FAA8-8084FB50 0065E8 00A8+00 1/1 0/0 0/0 .text            executeEvent2__8daKago_cFv */
void daKago_c::executeEvent2() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854C58-80854C5C 000154 0004+00 0/1 0/0 0/0 .rodata          @6544 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6544 = -103292.0f;
COMPILER_STRIP_GATE(0x80854C58, &lit_6544);
#pragma pop

/* 80854C5C-80854C60 000158 0004+00 0/1 0/0 0/0 .rodata          @6545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6545 = -23437.0f;
COMPILER_STRIP_GATE(0x80854C5C, &lit_6545);
#pragma pop

/* 80854C60-80854C64 00015C 0004+00 0/1 0/0 0/0 .rodata          @6546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6546 = 39925.0f;
COMPILER_STRIP_GATE(0x80854C60, &lit_6546);
#pragma pop

/* 80854C64-80854C68 000160 0004+00 0/1 0/0 0/0 .rodata          @6547 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6547 = -60000.0f;
COMPILER_STRIP_GATE(0x80854C64, &lit_6547);
#pragma pop

/* 80854C68-80854C6C 000164 0004+00 0/1 0/0 0/0 .rodata          @6548 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6548 = -11000.0f;
COMPILER_STRIP_GATE(0x80854C68, &lit_6548);
#pragma pop

/* 80854C6C-80854C70 000168 0004+00 0/1 0/0 0/0 .rodata          @6549 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6549 = 28000.0f;
COMPILER_STRIP_GATE(0x80854C6C, &lit_6549);
#pragma pop

/* 8084FB50-80850384 006690 0834+00 2/1 0/0 0/0 .text            initFirstDemo__8daKago_cFv */
void daKago_c::initFirstDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854C70-80854C74 00016C 0004+00 1/2 0/0 0/0 .rodata          @6550 */
SECTION_RODATA static f32 const lit_6550 = 150.0f;
COMPILER_STRIP_GATE(0x80854C70, &lit_6550);

/* 80854C74-80854C78 000170 0004+00 0/0 0/0 0/0 .rodata          @6551 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6551 = -67000.0f;
COMPILER_STRIP_GATE(0x80854C74, &lit_6551);
#pragma pop

/* 80854C78-80854C7C 000174 0004+00 0/1 0/0 0/0 .rodata          @6552 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6552 = -13000.0f;
COMPILER_STRIP_GATE(0x80854C78, &lit_6552);
#pragma pop

/* 80854C7C-80854C80 000178 0004+00 0/0 0/0 0/0 .rodata          @6553 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6553 = -76600.0f;
COMPILER_STRIP_GATE(0x80854C7C, &lit_6553);
#pragma pop

/* 80854C80-80854C84 00017C 0004+00 0/0 0/0 0/0 .rodata          @6554 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6554 = -15500.0f;
COMPILER_STRIP_GATE(0x80854C80, &lit_6554);
#pragma pop

/* 80854C84-80854C88 000180 0004+00 0/0 0/0 0/0 .rodata          @6555 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6555 = 37340.0f;
COMPILER_STRIP_GATE(0x80854C84, &lit_6555);
#pragma pop

/* 80854C88-80854C8C 000184 0004+00 0/0 0/0 0/0 .rodata          @6556 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6556 = -75232.0f;
COMPILER_STRIP_GATE(0x80854C88, &lit_6556);
#pragma pop

/* 80854C8C-80854C90 000188 0004+00 0/0 0/0 0/0 .rodata          @6557 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6557 = -14685.0f;
COMPILER_STRIP_GATE(0x80854C8C, &lit_6557);
#pragma pop

/* 80854C90-80854C94 00018C 0004+00 0/0 0/0 0/0 .rodata          @6558 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6558 = 34417.0f;
COMPILER_STRIP_GATE(0x80854C90, &lit_6558);
#pragma pop

/* 80854C94-80854C98 000190 0004+00 0/0 0/0 0/0 .rodata          @6559 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6559 = 5000.0f;
COMPILER_STRIP_GATE(0x80854C94, &lit_6559);
#pragma pop

/* 80854C98-80854C9C 000194 0004+00 0/1 0/0 0/0 .rodata          @6917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6917 = 1250.0f;
COMPILER_STRIP_GATE(0x80854C98, &lit_6917);
#pragma pop

/* 80854C9C-80854CA0 000198 0004+00 0/1 0/0 0/0 .rodata          @6918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6918 = 67.0f / 10.0f;
COMPILER_STRIP_GATE(0x80854C9C, &lit_6918);
#pragma pop

/* 80854CA0-80854CA4 00019C 0004+00 0/1 0/0 0/0 .rodata          @6919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6919 = -400.0f;
COMPILER_STRIP_GATE(0x80854CA0, &lit_6919);
#pragma pop

/* 80854CA4-80854CA8 0001A0 0004+00 0/1 0/0 0/0 .rodata          @6920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6920 = 71.0f / 10.0f;
COMPILER_STRIP_GATE(0x80854CA4, &lit_6920);
#pragma pop

/* 80854CA8-80854CAC 0001A4 0004+00 0/1 0/0 0/0 .rodata          @6921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6921 = 4.0f;
COMPILER_STRIP_GATE(0x80854CA8, &lit_6921);
#pragma pop

/* 80850384-808513E4 006EC4 1060+00 2/1 0/0 0/0 .text            executeFirstDemo__8daKago_cFv */
void daKago_c::executeFirstDemo() {
    // NONMATCHING
}

/* 808513E4-80851434 007F24 0050+00 1/1 0/0 0/0 .text            executePerch2__8daKago_cFv */
void daKago_c::executePerch2() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854CAC-80854CB0 0001A8 0004+00 0/0 0/0 0/0 .rodata          @6922 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6922 = 350.0f;
COMPILER_STRIP_GATE(0x80854CAC, &lit_6922);
#pragma pop

/* 80854CB0-80854CB4 0001AC 0004+00 0/0 0/0 0/0 .rodata          @6923 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6923 = 6.0f;
COMPILER_STRIP_GATE(0x80854CB0, &lit_6923);
#pragma pop

/* 80854CB4-80854CB8 0001B0 0004+00 0/1 0/0 0/0 .rodata          @7121 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7121 = -700.0f;
COMPILER_STRIP_GATE(0x80854CB4, &lit_7121);
#pragma pop

/* 80854CB8-80854CBC 0001B4 0004+00 0/1 0/0 0/0 .rodata          @7122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7122 = -74500.0f;
COMPILER_STRIP_GATE(0x80854CB8, &lit_7122);
#pragma pop

/* 80854CBC-80854CC0 0001B8 0004+00 0/1 0/0 0/0 .rodata          @7123 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7123 = -12775.0f;
COMPILER_STRIP_GATE(0x80854CBC, &lit_7123);
#pragma pop

/* 80854CC0-80854CC4 0001BC 0004+00 0/1 0/0 0/0 .rodata          @7124 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7124 = 31400.0f;
COMPILER_STRIP_GATE(0x80854CC0, &lit_7124);
#pragma pop

/* 80854CC4-80854CC8 0001C0 0004+00 0/1 0/0 0/0 .rodata          @7125 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7125 = -79460.0f;
COMPILER_STRIP_GATE(0x80854CC4, &lit_7125);
#pragma pop

/* 80854CC8-80854CCC 0001C4 0004+00 0/1 0/0 0/0 .rodata          @7126 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7126 = 34200.0f;
COMPILER_STRIP_GATE(0x80854CC8, &lit_7126);
#pragma pop

/* 80851434-80851DEC 007F74 09B8+00 2/1 0/0 0/0 .text executeLandingLakeHairia__8daKago_cFv */
void daKago_c::executeLandingLakeHairia() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854CCC-80854CD0 0001C8 0004+00 0/0 0/0 0/0 .rodata          @7127 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7127 = -76900.0f;
COMPILER_STRIP_GATE(0x80854CCC, &lit_7127);
#pragma pop

/* 80854CD0-80854CD4 0001CC 0004+00 0/0 0/0 0/0 .rodata          @7128 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7128 = -18550.0f;
COMPILER_STRIP_GATE(0x80854CD0, &lit_7128);
#pragma pop

/* 80854CD4-80854CD8 0001D0 0004+00 0/0 0/0 0/0 .rodata          @7129 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7129 = 41660.0f;
COMPILER_STRIP_GATE(0x80854CD4, &lit_7129);
#pragma pop

/* 80854CD8-80854CDC 0001D4 0004+00 0/1 0/0 0/0 .rodata          @7286 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7286 = 5750.0f;
COMPILER_STRIP_GATE(0x80854CD8, &lit_7286);
#pragma pop

/* 80854CDC-80854CE0 0001D8 0004+00 0/1 0/0 0/0 .rodata          @7287 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7287 = 1600.0f;
COMPILER_STRIP_GATE(0x80854CDC, &lit_7287);
#pragma pop

/* 80854CE0-80854CE4 0001DC 0004+00 0/1 0/0 0/0 .rodata          @7288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7288 = 6100.0f;
COMPILER_STRIP_GATE(0x80854CE0, &lit_7288);
#pragma pop

/* 80854CE4-80854CE8 0001E0 0004+00 0/1 0/0 0/0 .rodata          @7289 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7289 = 2900.0f;
COMPILER_STRIP_GATE(0x80854CE4, &lit_7289);
#pragma pop

/* 80854CE8-80854CEC 0001E4 0004+00 0/1 0/0 0/0 .rodata          @7290 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7290 = 3630.0f;
COMPILER_STRIP_GATE(0x80854CE8, &lit_7290);
#pragma pop

/* 80854CEC-80854CF0 0001E8 0004+00 0/1 0/0 0/0 .rodata          @7291 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7291 = 600.0f;
COMPILER_STRIP_GATE(0x80854CEC, &lit_7291);
#pragma pop

/* 80854CF0-80854CF4 0001EC 0004+00 0/1 0/0 0/0 .rodata          @7292 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7292 = 15.0f;
COMPILER_STRIP_GATE(0x80854CF0, &lit_7292);
#pragma pop

/* 80854CF4-80854CF8 0001F0 0004+00 0/1 0/0 0/0 .rodata          @7293 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7293 = 3440.0f;
COMPILER_STRIP_GATE(0x80854CF4, &lit_7293);
#pragma pop

/* 80854CF8-80854CFC 0001F4 0004+00 0/1 0/0 0/0 .rodata          @7294 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7294 = 3584.0f;
COMPILER_STRIP_GATE(0x80854CF8, &lit_7294);
#pragma pop

/* 80854CFC-80854D00 0001F8 0004+00 0/1 0/0 0/0 .rodata          @7295 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7295 = 270.0f;
COMPILER_STRIP_GATE(0x80854CFC, &lit_7295);
#pragma pop

/* 80854D00-80854D04 0001FC 0004+00 0/1 0/0 0/0 .rodata          @7296 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7296 = 1007.0f;
COMPILER_STRIP_GATE(0x80854D00, &lit_7296);
#pragma pop

/* 80851DEC-808525B0 00892C 07C4+00 1/1 0/0 0/0 .text executeLandingBoartHouse__8daKago_cFv */
void daKago_c::executeLandingBoartHouse() {
    // NONMATCHING
}

/* 808525B0-80852610 0090F0 0060+00 2/2 0/0 0/0 .text            executeLanding__8daKago_cFv */
void daKago_c::executeLanding() {
    // NONMATCHING
}

/* 80852610-80852D90 009150 0780+00 2/2 0/0 0/0 .text            moveDemoFly__8daKago_cFv */
void daKago_c::moveDemoFly() {
    // NONMATCHING
}

/* 80852D90-80852F14 0098D0 0184+00 1/1 0/0 0/0 .text            setFlyEffect__8daKago_cFv */
void daKago_c::setFlyEffect() {
    // NONMATCHING
}

/* 80852F14-808530A4 009A54 0190+00 2/2 0/0 0/0 .text            setDashEffect__8daKago_cFv */
void daKago_c::setDashEffect() {
    // NONMATCHING
}

/* 808530A4-80853228 009BE4 0184+00 1/1 0/0 0/0 .text            setDamageEffect__8daKago_cFv */
void daKago_c::setDamageEffect() {
    // NONMATCHING
}

/* 80853228-80853460 009D68 0238+00 3/3 0/0 0/0 .text            setDashBlurEffect__8daKago_cFi */
void daKago_c::setDashBlurEffect(int param_0) {
    // NONMATCHING
}

/* 80853460-8085350C 009FA0 00AC+00 1/1 0/0 0/0 .text            setWallHitEffect__8daKago_cF4cXyzi
 */
void daKago_c::setWallHitEffect(cXyz param_0, int param_1) {
    // NONMATCHING
}

/* 8085350C-8085366C 00A04C 0160+00 2/2 0/0 0/0 .text            setSibukiEffect__8daKago_cFv */
void daKago_c::setSibukiEffect() {
    // NONMATCHING
}

/* 8085366C-80853730 00A1AC 00C4+00 1/1 0/0 0/0 .text            setDashSibukiEffect__8daKago_cFv */
void daKago_c::setDashSibukiEffect() {
    // NONMATCHING
}

/* 80853730-80853880 00A270 0150+00 1/1 0/0 0/0 .text            setWaterFallEffect__8daKago_cFv */
void daKago_c::setWaterFallEffect() {
    // NONMATCHING
}

/* 80853880-8085392C 00A3C0 00AC+00 1/1 0/0 0/0 .text            s_waterfall__FPvPv */
static void s_waterfall(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854D04-80854D08 000200 0004+00 0/1 0/0 0/0 .rodata          @7910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7910 = 27.0f;
COMPILER_STRIP_GATE(0x80854D04, &lit_7910);
#pragma pop

/* 80854D08-80854D0C 000204 0004+00 0/1 0/0 0/0 .rodata          @7911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7911 = 29.0f;
COMPILER_STRIP_GATE(0x80854D08, &lit_7911);
#pragma pop

/* 80854D0C-80854D10 000208 0004+00 0/1 0/0 0/0 .rodata          @7912 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7912 = 26.0f;
COMPILER_STRIP_GATE(0x80854D0C, &lit_7912);
#pragma pop

/* 8085392C-80853BCC 00A46C 02A0+00 1/1 0/0 0/0 .text            setFlySound__8daKago_cFv */
void daKago_c::setFlySound() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854D10-80854D14 00020C 0004+00 0/1 0/0 0/0 .rodata          @7981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7981 = 1.5f;
COMPILER_STRIP_GATE(0x80854D10, &lit_7981);
#pragma pop

/* 80853BCC-80853EF0 00A70C 0324+00 2/1 0/0 0/0 .text            action__8daKago_cFv */
void daKago_c::action() {
    // NONMATCHING
}

/* 80853EF0-80853FB0 00AA30 00C0+00 2/2 0/0 0/0 .text            mtx_set__8daKago_cFv */
void daKago_c::mtx_set() {
    // NONMATCHING
}

/* 80853FB0-80854058 00AAF0 00A8+00 1/1 0/0 0/0 .text            cc_set__8daKago_cFv */
void daKago_c::cc_set() {
    // NONMATCHING
}

/* 80854058-80854168 00AB98 0110+00 1/1 0/0 0/0 .text            execute__8daKago_cFv */
void daKago_c::execute() {
    // NONMATCHING
}

/* 80854168-80854188 00ACA8 0020+00 2/1 0/0 0/0 .text            daKago_Execute__FP8daKago_c */
static void daKago_Execute(daKago_c* param_0) {
    // NONMATCHING
}

/* 80854188-80854190 00ACC8 0008+00 1/0 0/0 0/0 .text            daKago_IsDelete__FP8daKago_c */
static bool daKago_IsDelete(daKago_c* param_0) {
    return true;
}

/* 80854190-80854200 00ACD0 0070+00 1/1 0/0 0/0 .text            _delete__8daKago_cFv */
void daKago_c::_delete() {
    // NONMATCHING
}

/* 80854200-80854220 00AD40 0020+00 1/0 0/0 0/0 .text            daKago_Delete__FP8daKago_c */
static void daKago_Delete(daKago_c* param_0) {
    // NONMATCHING
}

/* 80854220-808542DC 00AD60 00BC+00 1/1 0/0 0/0 .text ctrlJoint__8daKago_cFP8J3DJointP8J3DModel */
void daKago_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    // NONMATCHING
}

/* 808542DC-80854328 00AE1C 004C+00 1/1 0/0 0/0 .text JointCallBack__8daKago_cFP8J3DJointi */
void daKago_c::JointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 80854328-808544B8 00AE68 0190+00 1/1 0/0 0/0 .text            CreateHeap__8daKago_cFv */
void daKago_c::CreateHeap() {
    // NONMATCHING
}

/* 808544B8-808544D8 00AFF8 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80854D14-80854D14 000210 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80854D1C = "E_YC";
SECTION_DEAD static char const* const stringBase_80854D21 = "KAGO_YAMI";
SECTION_DEAD static char const* const stringBase_80854D2B = "E_KC";
SECTION_DEAD static char const* const stringBase_80854D30 = "KAGO_HIKARI";
SECTION_DEAD static char const* const stringBase_80854D3C = "F_SP115";
SECTION_DEAD static char const* const stringBase_80854D44 = "F_SP126";
#pragma pop

/* 808544D8-80854928 00B018 0450+00 1/1 0/0 0/0 .text            create__8daKago_cFv */
void daKago_c::create() {
    // NONMATCHING
}

/* 80854928-80854970 00B468 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80854970-808549B8 00B4B0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 808549B8-80854A28 00B4F8 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80854A28-80854A2C 00B568 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80854A2C-80854A4C 00B56C 0020+00 1/0 0/0 0/0 .text            daKago_Create__FP8daKago_c */
static void daKago_Create(daKago_c* param_0) {
    // NONMATCHING
}

/* 80854A4C-80854A94 00B58C 0048+00 2/1 0/0 0/0 .text            __dt__12daKago_HIO_cFv */
daKago_HIO_c::~daKago_HIO_c() {
    // NONMATCHING
}

/* 80854A94-80854AD0 00B5D4 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_kago_cpp */
void __sinit_d_a_kago_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80854A94, __sinit_d_a_kago_cpp);
#pragma pop

/* 80854AD0-80854AD8 00B610 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80854AD0() {
    // NONMATCHING
}

/* 80854AD8-80854AE0 00B618 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80854AD8() {
    // NONMATCHING
}

/* 80854AE0-80854AF0 00B620 0010+00 7/7 0/0 0/0 .text            getMidnaActor__9daPy_py_cFv */
// void daPy_py_c::getMidnaActor() {
extern "C" void getMidnaActor__9daPy_py_cFv() {
    // NONMATCHING
}

/* 80854D14-80854D14 000210 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
