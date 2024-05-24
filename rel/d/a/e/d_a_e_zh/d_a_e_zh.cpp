/**
 * @file d_a_e_zh.cpp
 * 
*/

#include "rel/d/a/e/d_a_e_zh/d_a_e_zh.h"
#include "dol2asm.h"
#include "d/d_camera.h"




//
// Forward References:
//

extern "C" void __ct__12daE_ZH_HIO_cFv();
extern "C" void draw__8daE_ZH_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daE_ZH_Draw__FP8daE_ZH_c();
extern "C" void setBck__8daE_ZH_cFiUcff();
extern "C" void setActionMode__8daE_ZH_cFii();
extern "C" static void s_BallSearch__FPvPv();
extern "C" static void s_BallSearch_Tag__FPvPv();
extern "C" void startDemoCheck__8daE_ZH_cFv();
extern "C" void mBallBGCheck__8daE_ZH_cFv();
extern "C" void mGateOpen__8daE_ZH_cFv();
extern "C" void mColorSet__8daE_ZH_cFbff();
extern "C" void mReturnLineMove__8daE_ZH_cFv();
extern "C" void mBallBgLineCheck__8daE_ZH_cFv();
extern "C" void mSearchMove__8daE_ZH_cFUc();
extern "C" void mStartParticleSet__8daE_ZH_cFv();
extern "C" void mCutTypeCheck__8daE_ZH_cFv();
extern "C" void damage_check__8daE_ZH_cFv();
extern "C" void executeStartDemo__8daE_ZH_cFv();
extern "C" void executeWait__8daE_ZH_cFv();
extern "C" void executeBallWait__8daE_ZH_cFv();
extern "C" void executeOpenStart__8daE_ZH_cFv();
extern "C" void executeSearchMove__8daE_ZH_cFv();
extern "C" void executeBgHitSHMove__8daE_ZH_cFv();
extern "C" void executeCatchMove__8daE_ZH_cFv();
extern "C" void executeCatchFlyMove__8daE_ZH_cFv();
extern "C" void executeReturnDemo__8daE_ZH_cFv();
extern "C" void executeFlyDelete__8daE_ZH_cFv();
extern "C" void executeDamage__8daE_ZH_cFv();
extern "C" void executeDeadStop__8daE_ZH_cFv();
extern "C" void executeEntryCheck__8daE_ZH_cFv();
extern "C" void tagAction__8daE_ZH_cFv();
extern "C" void action__8daE_ZH_cFv();
extern "C" void mtx_set__8daE_ZH_cFv();
extern "C" void cc_set__8daE_ZH_cFv();
extern "C" void execute__8daE_ZH_cFv();
extern "C" static void daE_ZH_Execute__FP8daE_ZH_c();
extern "C" static bool daE_ZH_IsDelete__FP8daE_ZH_c();
extern "C" void _delete__8daE_ZH_cFv();
extern "C" static void daE_ZH_Delete__FP8daE_ZH_c();
extern "C" void CreateHeap__8daE_ZH_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__8daE_ZH_cFv();
extern "C" void __ct__8daE_ZH_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__4cXyzFv();
extern "C" static void daE_ZH_Create__FP8daE_ZH_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_ZH_HIO_cFv();
extern "C" void __sinit_d_a_e_zh_cpp();
extern "C" static void func_8082F1E4();
extern "C" static void func_8082F1EC();
extern "C" extern char const* const d_a_e_zh__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_setCarryNow__FP10fopAc_ac_ci();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void roofCheck__11fopAcM_rc_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void dComIfGs_offOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void onSwitch__12dSv_danBit_cFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUlUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetGroundUpY__9dBgS_AcchFf();
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
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void StartBlure__9dCamera_cFiP10fopAc_ac_cff();
extern "C" void ResetBlure__9dCamera_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_80280808();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mRoofY__11fopAcM_rc_c;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8082F208-8082F20C 000000 0004+00 26/26 0/0 0/0 .rodata          @3778 */
SECTION_RODATA static f32 const lit_3778 = 1.0f;
COMPILER_STRIP_GATE(0x8082F208, &lit_3778);

/* 8082F20C-8082F210 000004 0004+00 0/9 0/0 0/0 .rodata          @3779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3779 = 10.0f;
COMPILER_STRIP_GATE(0x8082F20C, &lit_3779);
#pragma pop

/* 8082F210-8082F214 000008 0004+00 0/2 0/0 0/0 .rodata          @3780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3780 = 500.0f;
COMPILER_STRIP_GATE(0x8082F210, &lit_3780);
#pragma pop

/* 8082F420-8082F42C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8082F42C-8082F440 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8082F440-8082F480 000020 0040+00 0/1 0/0 0/0 .data cc_zhSph_src__22@unnamed@d_a_e_zh_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8082F440[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0x48, 0x60, 0xBA, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x15, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8082F480-8082F4C4 000060 0044+00 0/1 0/0 0/0 .data cc_zhCyl_src__22@unnamed@d_a_e_zh_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8082F480[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0x48, 0x60, 0xBA, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x15,
    0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
};
#pragma pop

/* 8082F4C4-8082F508 0000A4 0044+00 0/1 0/0 0/0 .data cc_zhCyl_at_src__22@unnamed@d_a_e_zh_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8082F4C4[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
};
#pragma pop

/* 8082F508-8082F55C -00001 0054+00 1/1 0/0 0/0 .data            @4709 */
SECTION_DATA static void* lit_4709[21] = {
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x68),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x1F0),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x240),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x290),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x2B4),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x340),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x488),
    (void*)(((char*)executeBallWait__8daE_ZH_cFv) + 0x38C),
};

/* 8082F55C-8082F5A0 -00001 0044+00 1/1 0/0 0/0 .data            @4883 */
SECTION_DATA static void* lit_4883[17] = {
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x6C),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0xDC),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x1D8),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x214),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x584),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x584),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x584),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x584),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x584),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x584),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x258),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x2D4),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x368),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x398),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x4AC),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x4CC),
    (void*)(((char*)executeOpenStart__8daE_ZH_cFv) + 0x550),
};

/* 8082F5A0-8082F5A8 000180 0008+00 1/1 0/0 0/0 .data            effId$5059 */
SECTION_DATA static u8 effId[8] = {
    0x8A, 0x6D, 0x8A, 0x6E, 0x8A, 0x6F, 0x8A, 0x70,
};

/* 8082F5A8-8082F5DC -00001 0034+00 1/1 0/0 0/0 .data            @5390 */
SECTION_DATA static void* lit_5390[13] = {
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x150),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x1A8),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x214),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x23C),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x288),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x3A8),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x690),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x690),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x690),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x690),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x504),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x528),
    (void*)(((char*)executeCatchFlyMove__8daE_ZH_cFv) + 0x3D4),
};

/* 8082F5DC-8082F60C -00001 0030+00 1/1 0/0 0/0 .data            @5782 */
SECTION_DATA static void* lit_5782[12] = {
    (void*)(((char*)action__8daE_ZH_cFv) + 0xA8),  (void*)(((char*)action__8daE_ZH_cFv) + 0xB4),
    (void*)(((char*)action__8daE_ZH_cFv) + 0xC0),  (void*)(((char*)action__8daE_ZH_cFv) + 0xCC),
    (void*)(((char*)action__8daE_ZH_cFv) + 0xD8),  (void*)(((char*)action__8daE_ZH_cFv) + 0xE4),
    (void*)(((char*)action__8daE_ZH_cFv) + 0xF0),  (void*)(((char*)action__8daE_ZH_cFv) + 0xFC),
    (void*)(((char*)action__8daE_ZH_cFv) + 0x108), (void*)(((char*)action__8daE_ZH_cFv) + 0x114),
    (void*)(((char*)action__8daE_ZH_cFv) + 0x120), (void*)(((char*)action__8daE_ZH_cFv) + 0x12C),
};

/* 8082F60C-8082F62C -00001 0020+00 1/0 0/0 0/0 .data            l_daE_ZH_Method */
static actor_method_class l_daE_ZH_Method = {
    (process_method_func)daE_ZH_Create__FP8daE_ZH_c,
    (process_method_func)daE_ZH_Delete__FP8daE_ZH_c,
    (process_method_func)daE_ZH_Execute__FP8daE_ZH_c,
    (process_method_func)daE_ZH_IsDelete__FP8daE_ZH_c,
    (process_method_func)daE_ZH_Draw__FP8daE_ZH_c,
};

/* 8082F62C-8082F65C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_ZH */
extern actor_process_profile_definition g_profile_E_ZH = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_ZH,              // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daE_ZH_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  173,                    // mPriority
  &l_daE_ZH_Method,       // sub_method
  0x00040100,             // mStatus
  fopAc_ENV_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8082F65C-8082F668 00023C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8082F668-8082F674 000248 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8082F674-8082F680 000254 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8082F680-8082F68C 000260 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8082F68C-8082F698 00026C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8082F698-8082F6A4 000278 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8082F6A4-8082F6C8 000284 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8082F1EC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8082F1E4,
};

/* 8082F6C8-8082F6D4 0002A8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8082F6D4-8082F6E0 0002B4 000C+00 2/2 0/0 0/0 .data            __vt__12daE_ZH_HIO_c */
SECTION_DATA extern void* __vt__12daE_ZH_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_ZH_HIO_cFv,
};

/* 8082902C-8082907C 0000EC 0050+00 1/1 0/0 0/0 .text            __ct__12daE_ZH_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_ZH_HIO_c::daE_ZH_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__ct__12daE_ZH_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F214-8082F218 00000C 0004+00 0/1 0/0 0/0 .rodata          @3866 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3866 = 1200.0f;
COMPILER_STRIP_GATE(0x8082F214, &lit_3866);
#pragma pop

/* 8082F218-8082F21C 000010 0004+00 1/20 0/0 0/0 .rodata          @3867 */
SECTION_RODATA static u8 const lit_3867[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8082F218, &lit_3867);

/* 8082F6E8-8082F6EC 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8082F6EC-8082F6F0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8082F6F0-8082F6F4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8082F6F4-8082F6F8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8082F6F8-8082F6FC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8082F6FC-8082F700 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8082F700-8082F704 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8082F704-8082F708 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8082F708-8082F70C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8082F70C-8082F710 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8082F710-8082F714 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8082F714-8082F718 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8082F718-8082F71C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8082F71C-8082F720 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8082F720-8082F724 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8082F724-8082F728 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 8082F724 0001+00 data_8082F724 @1009 */
/* 8082F725 0003+00 data_8082F725 None */
static u8 struct_8082F724[4];

/* 8082F728-8082F734 000048 000C+00 1/1 0/0 0/0 .bss             @3773 */
static u8 lit_3773[12];

/* 8082F734-8082F750 000054 001C+00 8/9 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[28];

/* 8082F750-8082F754 000070 0004+00 4/5 0/0 0/0 .bss             mStartFlag */
static u8 mStartFlag[4];

/* 8082907C-8082934C 00013C 02D0+00 1/1 0/0 0/0 .text            draw__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::draw() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/draw__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082934C-80829388 00040C 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__4cXyzFv.s"
}
#pragma pop

/* 80829388-808293A8 000448 0020+00 1/0 0/0 0/0 .text            daE_ZH_Draw__FP8daE_ZH_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_ZH_Draw(daE_ZH_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/daE_ZH_Draw__FP8daE_ZH_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F21C-8082F220 000014 0004+00 1/1 0/0 0/0 .rodata          @3884 */
SECTION_RODATA static f32 const lit_3884 = -1.0f;
COMPILER_STRIP_GATE(0x8082F21C, &lit_3884);

/* 8082F410-8082F410 000208 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8082F410 = "E_ZH";
#pragma pop

/* 808293A8-80829454 000468 00AC+00 10/10 0/0 0/0 .text            setBck__8daE_ZH_cFiUcff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/setBck__8daE_ZH_cFiUcff.s"
}
#pragma pop

/* 80829454-80829460 000514 000C+00 14/14 0/0 0/0 .text            setActionMode__8daE_ZH_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::setActionMode(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/setActionMode__8daE_ZH_cFii.s"
}
#pragma pop

/* 80829460-80829500 000520 00A0+00 3/3 0/0 0/0 .text            s_BallSearch__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_BallSearch(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/s_BallSearch__FPvPv.s"
}
#pragma pop

/* 80829500-80829570 0005C0 0070+00 2/2 0/0 0/0 .text            s_BallSearch_Tag__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_BallSearch_Tag(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/s_BallSearch_Tag__FPvPv.s"
}
#pragma pop

/* 80829570-80829658 000630 00E8+00 4/4 0/0 0/0 .text            startDemoCheck__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::startDemoCheck() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/startDemoCheck__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F220-8082F224 000018 0004+00 0/8 0/0 0/0 .rodata          @4031 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4031 = 50.0f;
COMPILER_STRIP_GATE(0x8082F220, &lit_4031);
#pragma pop

/* 8082F224-8082F228 00001C 0004+00 0/7 0/0 0/0 .rodata          @4032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4032 = 100.0f;
COMPILER_STRIP_GATE(0x8082F224, &lit_4032);
#pragma pop

/* 8082F228-8082F22C 000020 0004+00 0/1 0/0 0/0 .rodata          @4033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4033 = 180.0f;
COMPILER_STRIP_GATE(0x8082F228, &lit_4033);
#pragma pop

/* 80829658-808298BC 000718 0264+00 2/2 0/0 0/0 .text            mBallBGCheck__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mBallBGCheck() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mBallBGCheck__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F22C-8082F230 000024 0004+00 0/5 0/0 0/0 .rodata          @4053 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4053 = 255.0f;
COMPILER_STRIP_GATE(0x8082F22C, &lit_4053);
#pragma pop

/* 8082F230-8082F234 000028 0004+00 0/1 0/0 0/0 .rodata          @4054 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4054 = 0.5f;
COMPILER_STRIP_GATE(0x8082F230, &lit_4054);
#pragma pop

/* 8082F234-8082F238 00002C 0004+00 0/7 0/0 0/0 .rodata          @4055 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4055 = 5.0f;
COMPILER_STRIP_GATE(0x8082F234, &lit_4055);
#pragma pop

/* 8082F238-8082F23C 000030 0004+00 0/1 0/0 0/0 .rodata          @4056 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4056 = 80.0f;
COMPILER_STRIP_GATE(0x8082F238, &lit_4056);
#pragma pop

/* 8082F23C-8082F240 000034 0004+00 0/2 0/0 0/0 .rodata          @4057 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4057 = 40.0f;
COMPILER_STRIP_GATE(0x8082F23C, &lit_4057);
#pragma pop

/* 8082F240-8082F248 000038 0008+00 0/3 0/0 0/0 .rodata          @4059 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4059[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8082F240, &lit_4059);
#pragma pop

/* 808298BC-808299F8 00097C 013C+00 3/3 0/0 0/0 .text            mGateOpen__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mGateOpen() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mGateOpen__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F248-8082F24C 000040 0004+00 0/3 0/0 0/0 .rodata          @4071 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4071 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8082F248, &lit_4071);
#pragma pop

/* 8082F24C-8082F250 000044 0004+00 0/2 0/0 0/0 .rodata          @4072 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4072 = 253.0f;
COMPILER_STRIP_GATE(0x8082F24C, &lit_4072);
#pragma pop

/* 808299F8-80829AD8 000AB8 00E0+00 4/4 0/0 0/0 .text            mColorSet__8daE_ZH_cFbff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mColorSet(bool param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mColorSet__8daE_ZH_cFbff.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F250-8082F254 000048 0004+00 0/1 0/0 0/0 .rodata          @4172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4172 = -3950.0f;
COMPILER_STRIP_GATE(0x8082F250, &lit_4172);
#pragma pop

/* 8082F254-8082F258 00004C 0004+00 0/1 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4173 = -500.0f;
COMPILER_STRIP_GATE(0x8082F254, &lit_4173);
#pragma pop

/* 8082F258-8082F25C 000050 0004+00 0/1 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4174 = 7612.0f;
COMPILER_STRIP_GATE(0x8082F258, &lit_4174);
#pragma pop

/* 8082F25C-8082F260 000054 0004+00 0/1 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = -725.0f;
COMPILER_STRIP_GATE(0x8082F25C, &lit_4175);
#pragma pop

/* 8082F260-8082F264 000058 0004+00 0/1 0/0 0/0 .rodata          @4176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4176 = 3950.0f;
COMPILER_STRIP_GATE(0x8082F260, &lit_4176);
#pragma pop

/* 8082F264-8082F268 00005C 0004+00 0/1 0/0 0/0 .rodata          @4177 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4177 = 7442.0f;
COMPILER_STRIP_GATE(0x8082F264, &lit_4177);
#pragma pop

/* 8082F268-8082F26C 000060 0004+00 0/1 0/0 0/0 .rodata          @4178 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4178 = 352.0f;
COMPILER_STRIP_GATE(0x8082F268, &lit_4178);
#pragma pop

/* 8082F26C-8082F270 000064 0004+00 0/1 0/0 0/0 .rodata          @4179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4179 = -800.0f;
COMPILER_STRIP_GATE(0x8082F26C, &lit_4179);
#pragma pop

/* 8082F270-8082F274 000068 0004+00 0/9 0/0 0/0 .rodata          @4180 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4180 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8082F270, &lit_4180);
#pragma pop

/* 8082F274-8082F278 00006C 0004+00 0/7 0/0 0/0 .rodata          @4181 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4181 = 20.0f;
COMPILER_STRIP_GATE(0x8082F274, &lit_4181);
#pragma pop

/* 8082F754-8082F764 000074 000C+04 0/1 0/0 0/0 .bss             @4079 */
#pragma push
#pragma force_active on
static u8 lit_4079[12 + 4 /* padding */];
#pragma pop

/* 8082F764-8082F770 000084 000C+00 0/1 0/0 0/0 .bss             @4082 */
#pragma push
#pragma force_active on
static u8 lit_4082[12];
#pragma pop

/* 8082F770-8082F77C 000090 000C+00 0/1 0/0 0/0 .bss             @4083 */
#pragma push
#pragma force_active on
static u8 lit_4083[12];
#pragma pop

/* 8082F77C-8082F788 00009C 000C+00 0/1 0/0 0/0 .bss             @4084 */
#pragma push
#pragma force_active on
static u8 lit_4084[12];
#pragma pop

/* 8082F788-8082F794 0000A8 000C+00 0/1 0/0 0/0 .bss             @4085 */
#pragma push
#pragma force_active on
static u8 lit_4085[12];
#pragma pop

/* 8082F794-8082F7A0 0000B4 000C+00 0/1 0/0 0/0 .bss             @4086 */
#pragma push
#pragma force_active on
static u8 lit_4086[12];
#pragma pop

/* 8082F7A0-8082F7E8 0000C0 0048+00 0/1 0/0 0/0 .bss             mRoomLine_dt$4078 */
#pragma push
#pragma force_active on
static u8 mRoomLine_dt[72];
#pragma pop

/* 80829AD8-80829E44 000B98 036C+00 2/2 0/0 0/0 .text            mReturnLineMove__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mReturnLineMove() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mReturnLineMove__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F278-8082F27C 000070 0004+00 0/3 0/0 0/0 .rodata          @4232 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4232 = 170.0f;
COMPILER_STRIP_GATE(0x8082F278, &lit_4232);
#pragma pop

/* 80829E44-8082A01C 000F04 01D8+00 2/2 0/0 0/0 .text            mBallBgLineCheck__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mBallBgLineCheck() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mBallBgLineCheck__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F27C-8082F280 000074 0004+00 0/3 0/0 0/0 .rodata          @4317 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4317 = -1000000000.0f;
COMPILER_STRIP_GATE(0x8082F27C, &lit_4317);
#pragma pop

/* 8082F280-8082F284 000078 0004+00 0/3 0/0 0/0 .rodata          @4318 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4318 = 600.0f;
COMPILER_STRIP_GATE(0x8082F280, &lit_4318);
#pragma pop

/* 8082F284-8082F288 00007C 0004+00 0/1 0/0 0/0 .rodata          @4319 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4319 = 8.0f;
COMPILER_STRIP_GATE(0x8082F284, &lit_4319);
#pragma pop

/* 8082A01C-8082A390 0010DC 0374+00 2/2 0/0 0/0 .text            mSearchMove__8daE_ZH_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mSearchMove(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mSearchMove__8daE_ZH_cFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F288-8082F2E0 000080 0058+00 0/1 0/0 0/0 .rodata          START_EFF_DT$4324 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const START_EFF_DT[88] = {
    0x8A, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x8A, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x8A, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x8A, 0x65, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x09, 0x8A, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x8A, 0x67, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x8A, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x8A, 0x69, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x8A, 0x6A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x8A, 0x6B, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x05, 0x8A, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
};
COMPILER_STRIP_GATE(0x8082F288, &START_EFF_DT);
#pragma pop

/* 8082F2E0-8082F2E4 0000D8 0004+00 0/7 0/0 0/0 .rodata          @4360 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4360 = 3.0f;
COMPILER_STRIP_GATE(0x8082F2E0, &lit_4360);
#pragma pop

/* 8082A390-8082A4C8 001450 0138+00 1/1 0/0 0/0 .text            mStartParticleSet__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mStartParticleSet() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mStartParticleSet__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082A4C8-8082A534 001588 006C+00 1/1 0/0 0/0 .text            mCutTypeCheck__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mCutTypeCheck() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mCutTypeCheck__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F410-8082F410 000208 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8082F415 = "T_ENE02";
#pragma pop

/* 8082A534-8082A88C 0015F4 0358+00 1/1 0/0 0/0 .text            damage_check__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::damage_check() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/damage_check__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F2E4-8082F2E8 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4539 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4539 = -30.0f;
COMPILER_STRIP_GATE(0x8082F2E4, &lit_4539);
#pragma pop

/* 8082F2E8-8082F2EC 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4540 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4540 = 650.0f;
COMPILER_STRIP_GATE(0x8082F2E8, &lit_4540);
#pragma pop

/* 8082F2EC-8082F2F0 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4541 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4541 = 1955.0f;
COMPILER_STRIP_GATE(0x8082F2EC, &lit_4541);
#pragma pop

/* 8082F2F0-8082F2F4 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4542 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4542 = -25.0f;
COMPILER_STRIP_GATE(0x8082F2F0, &lit_4542);
#pragma pop

/* 8082F2F4-8082F2F8 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4543 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4543 = 720.0f;
COMPILER_STRIP_GATE(0x8082F2F4, &lit_4543);
#pragma pop

/* 8082F2F8-8082F2FC 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4544 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4544 = 2330.0f;
COMPILER_STRIP_GATE(0x8082F2F8, &lit_4544);
#pragma pop

/* 8082F2FC-8082F300 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4545 = 435.0f;
COMPILER_STRIP_GATE(0x8082F2FC, &lit_4545);
#pragma pop

/* 8082F300-8082F304 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4546 = -3355.0f;
COMPILER_STRIP_GATE(0x8082F300, &lit_4546);
#pragma pop

/* 8082F304-8082F308 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4547 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4547 = 505.0f;
COMPILER_STRIP_GATE(0x8082F304, &lit_4547);
#pragma pop

/* 8082F308-8082F30C 000100 0004+00 0/1 0/0 0/0 .rodata          @4548 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4548 = -3140.0f;
COMPILER_STRIP_GATE(0x8082F308, &lit_4548);
#pragma pop

/* 8082F30C-8082F310 000104 0004+00 0/1 0/0 0/0 .rodata          @4549 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4549 = -10.0f;
COMPILER_STRIP_GATE(0x8082F30C, &lit_4549);
#pragma pop

/* 8082F310-8082F314 000108 0004+00 0/1 0/0 0/0 .rodata          @4550 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4550 = 280.0f;
COMPILER_STRIP_GATE(0x8082F310, &lit_4550);
#pragma pop

/* 8082F314-8082F318 00010C 0004+00 0/1 0/0 0/0 .rodata          @4551 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4551 = -3835.0f;
COMPILER_STRIP_GATE(0x8082F314, &lit_4551);
#pragma pop

/* 8082F318-8082F31C 000110 0004+00 0/3 0/0 0/0 .rodata          @4552 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4552 = 2.0f;
COMPILER_STRIP_GATE(0x8082F318, &lit_4552);
#pragma pop

/* 8082F31C-8082F320 000114 0004+00 0/1 0/0 0/0 .rodata          @4553 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4553 = -15.0f;
COMPILER_STRIP_GATE(0x8082F31C, &lit_4553);
#pragma pop

/* 8082F320-8082F324 000118 0004+00 0/1 0/0 0/0 .rodata          @4554 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4554 = 350.0f;
COMPILER_STRIP_GATE(0x8082F320, &lit_4554);
#pragma pop

/* 8082F324-8082F328 00011C 0004+00 0/1 0/0 0/0 .rodata          @4555 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4555 = -3620.0f;
COMPILER_STRIP_GATE(0x8082F324, &lit_4555);
#pragma pop

/* 8082F328-8082F32C 000120 0004+00 0/2 0/0 0/0 .rodata          @4556 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4556 = 4.0f;
COMPILER_STRIP_GATE(0x8082F328, &lit_4556);
#pragma pop

/* 8082F32C-8082F330 000124 0004+00 0/2 0/0 0/0 .rodata          @4557 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4557 = -5.0f;
COMPILER_STRIP_GATE(0x8082F32C, &lit_4557);
#pragma pop

/* 8082F330-8082F334 000128 0004+00 0/1 0/0 0/0 .rodata          @4558 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4558 = 590.0f;
COMPILER_STRIP_GATE(0x8082F330, &lit_4558);
#pragma pop

/* 8082F334-8082F338 00012C 0004+00 0/1 0/0 0/0 .rodata          @4559 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4559 = 2130.0f;
COMPILER_STRIP_GATE(0x8082F334, &lit_4559);
#pragma pop

/* 8082F338-8082F33C 000130 0004+00 0/1 0/0 0/0 .rodata          @4560 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4560 = 680.0f;
COMPILER_STRIP_GATE(0x8082F338, &lit_4560);
#pragma pop

/* 8082F33C-8082F340 000134 0004+00 0/1 0/0 0/0 .rodata          @4561 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4561 = 2340.0f;
COMPILER_STRIP_GATE(0x8082F33C, &lit_4561);
#pragma pop

/* 8082A88C-8082ABDC 00194C 0350+00 1/1 0/0 0/0 .text            executeStartDemo__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeStartDemo() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeStartDemo__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082ABDC-8082ACA8 001C9C 00CC+00 1/1 0/0 0/0 .text            executeWait__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeWait() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeWait__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F340-8082F344 000138 0004+00 0/2 0/0 0/0 .rodata          @4702 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4702 = 2000.0f;
COMPILER_STRIP_GATE(0x8082F340, &lit_4702);
#pragma pop

/* 8082F344-8082F348 00013C 0004+00 0/1 0/0 0/0 .rodata          @4703 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4703 = -300.0f;
COMPILER_STRIP_GATE(0x8082F344, &lit_4703);
#pragma pop

/* 8082ACA8-8082B284 001D68 05DC+00 2/1 0/0 0/0 .text            executeBallWait__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeBallWait() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeBallWait__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082B284-8082B820 002344 059C+00 2/1 0/0 0/0 .text            executeOpenStart__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeOpenStart() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeOpenStart__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F348-8082F34C 000140 0004+00 0/1 0/0 0/0 .rodata          @4704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4704 = 254.0f;
COMPILER_STRIP_GATE(0x8082F348, &lit_4704);
#pragma pop

/* 8082F34C-8082F350 000144 0004+00 0/0 0/0 0/0 .rodata          @4705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4705 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(0x8082F34C, &lit_4705);
#pragma pop

/* 8082F350-8082F354 000148 0004+00 0/3 0/0 0/0 .rodata          @4706 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4706 = 200.0f;
COMPILER_STRIP_GATE(0x8082F350, &lit_4706);
#pragma pop

/* 8082F354-8082F358 00014C 0004+00 0/0 0/0 0/0 .rodata          @4707 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4707 = -200.0f;
COMPILER_STRIP_GATE(0x8082F354, &lit_4707);
#pragma pop

/* 8082F358-8082F35C 000150 0004+00 0/1 0/0 0/0 .rodata          @4708 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4708 = 62.0f;
COMPILER_STRIP_GATE(0x8082F358, &lit_4708);
#pragma pop

/* 8082F35C-8082F360 000154 0004+00 0/0 0/0 0/0 .rodata          @4873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4873 = 42.5f;
COMPILER_STRIP_GATE(0x8082F35C, &lit_4873);
#pragma pop

/* 8082F360-8082F364 000158 0004+00 0/0 0/0 0/0 .rodata          @4874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4874 = 25.0f / 3.0f;
COMPILER_STRIP_GATE(0x8082F360, &lit_4874);
#pragma pop

/* 8082F364-8082F368 00015C 0004+00 0/0 0/0 0/0 .rodata          @4875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4875 = -60.0f;
COMPILER_STRIP_GATE(0x8082F364, &lit_4875);
#pragma pop

/* 8082F368-8082F36C 000160 0004+00 0/0 0/0 0/0 .rodata          @4876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4876 = -3875.0f;
COMPILER_STRIP_GATE(0x8082F368, &lit_4876);
#pragma pop

/* 8082F36C-8082F370 000164 0004+00 0/0 0/0 0/0 .rodata          @4877 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4877 = -250.0f;
COMPILER_STRIP_GATE(0x8082F36C, &lit_4877);
#pragma pop

/* 8082F370-8082F374 000168 0004+00 0/0 0/0 0/0 .rodata          @4878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4878 = -3515.0f;
COMPILER_STRIP_GATE(0x8082F370, &lit_4878);
#pragma pop

/* 8082F374-8082F378 00016C 0004+00 0/0 0/0 0/0 .rodata          @4879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4879 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x8082F374, &lit_4879);
#pragma pop

/* 8082F378-8082F37C 000170 0004+00 0/0 0/0 0/0 .rodata          @4880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4880 = -280.0f;
COMPILER_STRIP_GATE(0x8082F378, &lit_4880);
#pragma pop

/* 8082F37C-8082F380 000174 0004+00 0/2 0/0 0/0 .rodata          @4881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4881 = 30.0f;
COMPILER_STRIP_GATE(0x8082F37C, &lit_4881);
#pragma pop

/* 8082F380-8082F384 000178 0004+00 0/0 0/0 0/0 .rodata          @4882 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4882 = -3460.0f;
COMPILER_STRIP_GATE(0x8082F380, &lit_4882);
#pragma pop

/* 8082F384-8082F388 00017C 0004+00 0/2 0/0 0/0 .rodata          @4943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4943 = 1000000000.0f;
COMPILER_STRIP_GATE(0x8082F384, &lit_4943);
#pragma pop

/* 8082F388-8082F38C 000180 0004+00 0/5 0/0 0/0 .rodata          @4944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4944 = 150.0f;
COMPILER_STRIP_GATE(0x8082F388, &lit_4944);
#pragma pop

/* 8082F38C-8082F390 000184 0004+00 0/2 0/0 0/0 .rodata          @4945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4945 = -150.0f;
COMPILER_STRIP_GATE(0x8082F38C, &lit_4945);
#pragma pop

/* 8082B820-8082BA18 0028E0 01F8+00 1/1 0/0 0/0 .text            executeSearchMove__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeSearchMove() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeSearchMove__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F390-8082F398 000188 0008+00 0/4 0/0 0/0 .rodata          @5024 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5024[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8082F390, &lit_5024);
#pragma pop

/* 8082F398-8082F3A0 000190 0008+00 0/4 0/0 0/0 .rodata          @5025 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5025[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8082F398, &lit_5025);
#pragma pop

/* 8082F3A0-8082F3A8 000198 0008+00 0/4 0/0 0/0 .rodata          @5026 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5026[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8082F3A0, &lit_5026);
#pragma pop

/* 8082F3A8-8082F3AC 0001A0 0004+00 0/1 0/0 0/0 .rodata          @5027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5027 = 16384.0f;
COMPILER_STRIP_GATE(0x8082F3A8, &lit_5027);
#pragma pop

/* 8082BA18-8082BE20 002AD8 0408+00 1/1 0/0 0/0 .text            executeBgHitSHMove__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeBgHitSHMove() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeBgHitSHMove__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F3AC-8082F3B0 0001A4 0004+00 0/2 0/0 0/0 .rodata          @5222 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5222 = 0x41FF0000;
COMPILER_STRIP_GATE(0x8082F3AC, &lit_5222);
#pragma pop

/* 8082F3B0-8082F3B4 0001A8 0004+00 0/2 0/0 0/0 .rodata          @5223 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5223 = 6.25f;
COMPILER_STRIP_GATE(0x8082F3B0, &lit_5223);
#pragma pop

/* 8082F3B4-8082F3B8 0001AC 0004+00 0/1 0/0 0/0 .rodata          @5224 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5224 = 270.0f;
COMPILER_STRIP_GATE(0x8082F3B4, &lit_5224);
#pragma pop

/* 8082BE20-8082C670 002EE0 0850+00 1/1 0/0 0/0 .text            executeCatchMove__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeCatchMove() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeCatchMove__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F3B8-8082F3BC 0001B0 0004+00 0/1 0/0 0/0 .rodata          @5388 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5388 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8082F3B8, &lit_5388);
#pragma pop

/* 8082C670-8082CD34 003730 06C4+00 2/1 0/0 0/0 .text            executeCatchFlyMove__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeCatchFlyMove() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeCatchFlyMove__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F3BC-8082F3C0 0001B4 0004+00 0/1 0/0 0/0 .rodata          @5389 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5389 = 400.0f;
COMPILER_STRIP_GATE(0x8082F3BC, &lit_5389);
#pragma pop

/* 8082F3C0-8082F3C4 0001B8 0004+00 0/2 0/0 0/0 .rodata          @5482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5482 = 300.0f;
COMPILER_STRIP_GATE(0x8082F3C0, &lit_5482);
#pragma pop

/* 8082F3C4-8082F3C8 0001BC 0004+00 0/1 0/0 0/0 .rodata          @5483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5483 = 420.0f;
COMPILER_STRIP_GATE(0x8082F3C4, &lit_5483);
#pragma pop

/* 8082CD34-8082D154 003DF4 0420+00 1/1 0/0 0/0 .text            executeReturnDemo__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeReturnDemo() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeReturnDemo__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082D154-8082D2F0 004214 019C+00 1/1 0/0 0/0 .text            executeFlyDelete__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeFlyDelete() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeFlyDelete__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F3C8-8082F3CC 0001C0 0004+00 0/1 0/0 0/0 .rodata          @5661 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5661 = -40.0f;
COMPILER_STRIP_GATE(0x8082F3C8, &lit_5661);
#pragma pop

/* 8082D2F0-8082D97C 0043B0 068C+00 1/1 0/0 0/0 .text            executeDamage__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeDamage() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeDamage__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082D97C-8082D9B0 004A3C 0034+00 1/1 0/0 0/0 .text            executeDeadStop__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeDeadStop() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeDeadStop__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082D9B0-8082DB64 004A70 01B4+00 1/1 0/0 0/0 .text            executeEntryCheck__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::executeEntryCheck() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/executeEntryCheck__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082DB64-8082DB84 004C24 0020+00 1/1 0/0 0/0 .text            tagAction__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::tagAction() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/tagAction__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082DB84-8082DE18 004C44 0294+00 2/1 0/0 0/0 .text            action__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::action() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/action__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F3CC-8082F3D0 0001C4 0004+00 0/2 0/0 0/0 .rodata          @5819 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5819 = -100.0f;
COMPILER_STRIP_GATE(0x8082F3CC, &lit_5819);
#pragma pop

/* 8082F3D0-8082F3D4 0001C8 0004+00 0/1 0/0 0/0 .rodata          @5820 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5820 = -105.0f;
COMPILER_STRIP_GATE(0x8082F3D0, &lit_5820);
#pragma pop

/* 8082DE18-8082DF44 004ED8 012C+00 1/1 0/0 0/0 .text            mtx_set__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::mtx_set() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/mtx_set__8daE_ZH_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F3D4-8082F3D8 0001CC 0004+00 0/1 0/0 0/0 .rodata          @5913 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5913 = 250.0f;
COMPILER_STRIP_GATE(0x8082F3D4, &lit_5913);
#pragma pop

/* 8082F3D8-8082F3DC 0001D0 0004+00 0/1 0/0 0/0 .rodata          @5914 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5914 = 25.0f;
COMPILER_STRIP_GATE(0x8082F3D8, &lit_5914);
#pragma pop

/* 8082F3DC-8082F3E0 0001D4 0004+00 0/1 0/0 0/0 .rodata          @5915 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5915 = 140.0f;
COMPILER_STRIP_GATE(0x8082F3DC, &lit_5915);
#pragma pop

/* 8082F3E0-8082F3E4 0001D8 0004+00 0/1 0/0 0/0 .rodata          @5916 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5916 = -90.0f;
COMPILER_STRIP_GATE(0x8082F3E0, &lit_5916);
#pragma pop

/* 8082F3E4-8082F3E8 0001DC 0004+00 0/1 0/0 0/0 .rodata          @5917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5917 = 120.0f;
COMPILER_STRIP_GATE(0x8082F3E4, &lit_5917);
#pragma pop

/* 8082F3E8-8082F3EC 0001E0 0004+00 0/1 0/0 0/0 .rodata          @5918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5918 = 55.0f;
COMPILER_STRIP_GATE(0x8082F3E8, &lit_5918);
#pragma pop

/* 8082F3EC-8082F3F0 0001E4 0004+00 0/1 0/0 0/0 .rodata          @5919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5919 = -20.0f;
COMPILER_STRIP_GATE(0x8082F3EC, &lit_5919);
#pragma pop

/* 8082F3F0-8082F3F4 0001E8 0004+00 0/1 0/0 0/0 .rodata          @5920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5920 = 130.0f;
COMPILER_STRIP_GATE(0x8082F3F0, &lit_5920);
#pragma pop

/* 8082DF44-8082E2FC 005004 03B8+00 1/1 0/0 0/0 .text            cc_set__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::cc_set() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/cc_set__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082E2FC-8082E3C0 0053BC 00C4+00 1/1 0/0 0/0 .text            execute__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::execute() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/execute__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082E3C0-8082E3E0 005480 0020+00 2/1 0/0 0/0 .text            daE_ZH_Execute__FP8daE_ZH_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_ZH_Execute(daE_ZH_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/daE_ZH_Execute__FP8daE_ZH_c.s"
}
#pragma pop

/* 8082E3E0-8082E3E8 0054A0 0008+00 1/0 0/0 0/0 .text            daE_ZH_IsDelete__FP8daE_ZH_c */
static bool daE_ZH_IsDelete(daE_ZH_c* param_0) {
    return true;
}

/* 8082E3E8-8082E4C4 0054A8 00DC+00 1/1 0/0 0/0 .text            _delete__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::_delete() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/_delete__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082E4C4-8082E4E4 005584 0020+00 1/0 0/0 0/0 .text            daE_ZH_Delete__FP8daE_ZH_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_ZH_Delete(daE_ZH_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/daE_ZH_Delete__FP8daE_ZH_c.s"
}
#pragma pop

/* 8082E4E4-8082E6C8 0055A4 01E4+00 1/1 0/0 0/0 .text            CreateHeap__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/CreateHeap__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082E6C8-8082E710 005788 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 8082E710-8082E730 0057D0 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F3F4-8082F3F8 0001EC 0004+00 0/1 0/0 0/0 .rodata          @6222 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6222 = -2000.0f;
COMPILER_STRIP_GATE(0x8082F3F4, &lit_6222);
#pragma pop

/* 8082F3F8-8082F3FC 0001F0 0004+00 0/1 0/0 0/0 .rodata          @6223 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6223 = -20000.0f;
COMPILER_STRIP_GATE(0x8082F3F8, &lit_6223);
#pragma pop

/* 8082F3FC-8082F400 0001F4 0004+00 0/1 0/0 0/0 .rodata          @6224 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6224 = 20000.0f;
COMPILER_STRIP_GATE(0x8082F3FC, &lit_6224);
#pragma pop

/* 8082F400-8082F408 0001F8 0004+04 0/1 0/0 0/0 .rodata          @6225 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6225[1 + 1 /* padding */] = {
    90.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8082F400, &lit_6225);
#pragma pop

/* 8082F408-8082F410 000200 0008+00 0/1 0/0 0/0 .rodata          @6227 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_6227[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8082F408, &lit_6227);
#pragma pop

/* 8082E730-8082ECEC 0057F0 05BC+00 1/1 0/0 0/0 .text            create__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_ZH_c::create() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/create__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082ECEC-8082EEE0 005DAC 01F4+00 1/1 0/0 0/0 .text            __ct__8daE_ZH_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_ZH_c::daE_ZH_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__ct__8daE_ZH_cFv.s"
}
#pragma pop

/* 8082EEE0-8082EF28 005FA0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8082EF28-8082EF70 005FE8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8082EF70-8082EFB8 006030 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8082EFB8-8082F014 006078 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 8082F014-8082F084 0060D4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8082F084-8082F0F4 006144 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8082F0F4-8082F0F8 0061B4 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 8082F0F8-8082F118 0061B8 0020+00 1/0 0/0 0/0 .text            daE_ZH_Create__FP8daE_ZH_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_ZH_Create(daE_ZH_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/daE_ZH_Create__FP8daE_ZH_c.s"
}
#pragma pop

/* 8082F118-8082F160 0061D8 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 8082F160-8082F1A8 006220 0048+00 2/1 0/0 0/0 .text            __dt__12daE_ZH_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_ZH_HIO_c::~daE_ZH_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__dt__12daE_ZH_HIO_cFv.s"
}
#pragma pop

/* 8082F1A8-8082F1E4 006268 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_zh_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_zh_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/__sinit_d_a_e_zh_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8082F1A8, __sinit_d_a_e_zh_cpp);
#pragma pop

/* 8082F1E4-8082F1EC 0062A4 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8082F1E4() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/func_8082F1E4.s"
}
#pragma pop

/* 8082F1EC-8082F1F4 0062AC 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8082F1EC() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_zh/d_a_e_zh/func_8082F1EC.s"
}
#pragma pop

/* ############################################################################################## */
/* 8082F7E8-8082F7EC 000108 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8082F7E8[4];
#pragma pop

/* 8082F7EC-8082F7F0 00010C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8082F7EC[4];
#pragma pop

/* 8082F7F0-8082F7F4 000110 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8082F7F0[4];
#pragma pop

/* 8082F7F4-8082F7F8 000114 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8082F7F4[4];
#pragma pop

/* 8082F7F8-8082F7FC 000118 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8082F7F8[4];
#pragma pop

/* 8082F7FC-8082F800 00011C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8082F7FC[4];
#pragma pop

/* 8082F800-8082F804 000120 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8082F800[4];
#pragma pop

/* 8082F804-8082F808 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8082F804[4];
#pragma pop

/* 8082F808-8082F80C 000128 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8082F808[4];
#pragma pop

/* 8082F80C-8082F810 00012C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8082F80C[4];
#pragma pop

/* 8082F810-8082F814 000130 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8082F810[4];
#pragma pop

/* 8082F814-8082F818 000134 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8082F814[4];
#pragma pop

/* 8082F818-8082F81C 000138 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8082F818[4];
#pragma pop

/* 8082F81C-8082F820 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8082F81C[4];
#pragma pop

/* 8082F820-8082F824 000140 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8082F820[4];
#pragma pop

/* 8082F824-8082F828 000144 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8082F824[4];
#pragma pop

/* 8082F828-8082F82C 000148 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8082F828[4];
#pragma pop

/* 8082F82C-8082F830 00014C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8082F82C[4];
#pragma pop

/* 8082F830-8082F834 000150 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8082F830[4];
#pragma pop

/* 8082F834-8082F838 000154 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8082F834[4];
#pragma pop

/* 8082F838-8082F83C 000158 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8082F838[4];
#pragma pop

/* 8082F83C-8082F840 00015C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8082F83C[4];
#pragma pop

/* 8082F840-8082F844 000160 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8082F840[4];
#pragma pop

/* 8082F844-8082F848 000164 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8082F844[4];
#pragma pop

/* 8082F848-8082F84C 000168 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8082F848[4];
#pragma pop

/* 8082F410-8082F410 000208 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
