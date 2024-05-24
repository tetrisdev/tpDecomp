/**
 * @file d_a_e_dt.cpp
 * 
*/

#include "rel/d/a/e/d_a_e_dt/d_a_e_dt.h"
#include "dol2asm.h"
#include "d/d_camera.h"





//
// Forward References:
//

extern "C" void __ct__12daE_DT_HIO_cFv();
extern "C" void ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel();
extern "C" void JointCallBack__8daE_DT_cFP8J3DJointi();
extern "C" void ctrlJointTuba__8daE_DT_cFP8J3DJointP8J3DModel();
extern "C" void JointCallBackTuba__8daE_DT_cFP8J3DJointi();
extern "C" void draw__8daE_DT_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daE_DT_Draw__FP8daE_DT_c();
extern "C" void demo_skip__8daE_DT_cFi();
extern "C" void DemoSkipCallBack__8daE_DT_cFPvi();
extern "C" void setBck__8daE_DT_cFiUcff();
extern "C" void checkBck__8daE_DT_cFi();
extern "C" void setActionMode__8daE_DT_cFii();
extern "C" void damage_check__8daE_DT_cFv();
extern "C" void setStabPos__8daE_DT_cFv();
extern "C" void checkBeforeBg__8daE_DT_cFf();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void checkTongueBg__8daE_DT_cFv();
extern "C" void checkWaterSurface__8daE_DT_cFv();
extern "C" void setSmallWaterEffect__8daE_DT_cFv();
extern "C" void setLargeWaterEffect__8daE_DT_cFv();
extern "C" void setHamonEffect__8daE_DT_cFi();
extern "C" void setJumpEffect__8daE_DT_cFv();
extern "C" void setJumpSizukuEffect__8daE_DT_cFv();
extern "C" void setDamageShibukiEffect__8daE_DT_cFi();
extern "C" void setDamageYodareEffect__8daE_DT_cFi();
extern "C" void setSwingEffect__8daE_DT_cFv();
extern "C" void setStepEffect__8daE_DT_cFv();
extern "C" void setBombEffect__8daE_DT_cFv();
extern "C" void setBombSmokeEffect__8daE_DT_cFv();
extern "C" void setDeadShibukiEffect__8daE_DT_cFv();
extern "C" void setDeadYodareEffect__8daE_DT_cFv();
extern "C" void setBoxTubaEffect__8daE_DT_cFv();
extern "C" void setBoxTubaLandEffect__8daE_DT_cFv();
extern "C" static void s_otama_todo__FPvPv();
extern "C" void getNumberOfOtama__8daE_DT_cFv();
extern "C" static void s_fall_otama__FPvPv();
extern "C" void setStayOtamaFall__8daE_DT_cFv();
extern "C" void setStayOtamaDelete__8daE_DT_cFv();
extern "C" static void s_demo_otama__FPvPv();
extern "C" static void s_bomb_search__FPvPv();
extern "C" void checkBombEat__8daE_DT_cFv();
extern "C" void isShutterOpen__8daE_DT_cFv();
extern "C" void executeWait__8daE_DT_cFv();
extern "C" void executeCry__8daE_DT_cFv();
extern "C" void executeShake__8daE_DT_cFv();
extern "C" void executeWalk__8daE_DT_cFv();
extern "C" void executeJump__8daE_DT_cFv();
extern "C" void executeDown__8daE_DT_cFv();
extern "C" void executeSearch__8daE_DT_cFv();
extern "C" void executeDamage__8daE_DT_cFv();
extern "C" void executeBombDamage__8daE_DT_cFv();
extern "C" void executeDeath__8daE_DT_cFv();
extern "C" void pointInSight__8daE_DT_cFP4cXyz();
extern "C" void executeOpening__8daE_DT_cFv();
extern "C" void calcCamera__8daE_DT_cFv();
extern "C" void calcBoxAndTuba__8daE_DT_cFv();
extern "C" void action__8daE_DT_cFv();
extern "C" void mtx_set__8daE_DT_cFv();
extern "C" void cc_set__8daE_DT_cFv();
extern "C" void execute__8daE_DT_cFv();
extern "C" static void daE_DT_Execute__FP8daE_DT_c();
extern "C" static bool daE_DT_IsDelete__FP8daE_DT_c();
extern "C" void _delete__8daE_DT_cFv();
extern "C" static void daE_DT_Delete__FP8daE_DT_c();
extern "C" void CreateHeap__8daE_DT_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__8daE_DT_cFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" static void daE_DT_Create__FP8daE_DT_c();
extern "C" void __dt__12daE_DT_HIO_cFv();
extern "C" void __sinit_d_a_e_dt_cpp();
extern "C" static void func_806B5C7C();
extern "C" static void func_806B5C84();
extern "C" void Bank__9dCamera_cFv();
extern "C" extern char const* const d_a_e_dt__stringBase0;
extern "C" u8 eDt_ShakeFrame__6E_DT_n[40];
extern "C" u8 eDt_ShakeFrameDemo__6E_DT_n[40];
extern "C" u8 cc_dt_body_src__6E_DT_n[64];
extern "C" u8 cc_dt_tongue_src__6E_DT_n[64];
extern "C" u8 mDt_OtamaNum__6E_DT_n[4];
extern "C" u8 mDt_OtamaNo__6E_DT_n[80];
extern "C" u8 m_fall_no__6E_DT_n[4];
extern "C" u8 m_tongue_pos__6E_DT_n[12];

//
// External References:
//

extern "C" void onBlure__13mDoGph_gInf_cFv();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleX__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fopCamM_GetParam__FP12camera_class();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void dComIfGs_isOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void setPlayerDamage__9daPy_py_cFii();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ClrCcMove__9cCcD_SttsFv();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void __ct__7cSAngleFs();
extern "C" void __pl__7cSAngleCFRC7cSAngle();
extern "C" void func_80280808();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void changeSubBgmStatus__8Z2SeqMgrFl();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 j3dZModeTable[96];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 mBlureFlag__13mDoGph_gInf_c[4];
extern "C" extern u8 struct_80450C98[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 806B5CD4-806B5CD8 000000 0004+00 22/22 0/0 0/0 .rodata          @3792 */
SECTION_RODATA static f32 const lit_3792 = 1.5f;
COMPILER_STRIP_GATE(0x806B5CD4, &lit_3792);

/* 806B5CD8-806B5CDC 000004 0004+00 0/2 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3793 = 8.0f;
COMPILER_STRIP_GATE(0x806B5CD8, &lit_3793);
#pragma pop

/* 806B5CDC-806B5CE0 000008 0004+00 0/1 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3794 = 170.0f;
COMPILER_STRIP_GATE(0x806B5CDC, &lit_3794);
#pragma pop

/* 806B5CE0-806B5CE4 00000C 0004+00 0/1 0/0 0/0 .rodata          @3795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3795 = 1536.0f;
COMPILER_STRIP_GATE(0x806B5CE0, &lit_3795);
#pragma pop

/* 806B5CE4-806B5CE8 000010 0004+00 0/1 0/0 0/0 .rodata          @3796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3796 = 25.0f;
COMPILER_STRIP_GATE(0x806B5CE4, &lit_3796);
#pragma pop

/* 806B5CE8-806B5CEC 000014 0004+00 1/12 0/0 0/0 .rodata          @3797 */
SECTION_RODATA static f32 const lit_3797 = 3.0f;
COMPILER_STRIP_GATE(0x806B5CE8, &lit_3797);

/* 806B5CEC-806B5CF0 000018 0004+00 1/4 0/0 0/0 .rodata          @3798 */
SECTION_RODATA static f32 const lit_3798 = 300.0f;
COMPILER_STRIP_GATE(0x806B5CEC, &lit_3798);

/* 806B5CF0-806B5CF4 00001C 0004+00 0/1 0/0 0/0 .rodata          @3799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3799 = 120.0f;
COMPILER_STRIP_GATE(0x806B5CF0, &lit_3799);
#pragma pop

/* 806B5CF4-806B5CF8 000020 0004+00 0/1 0/0 0/0 .rodata          @3800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3800 = -55.0f;
COMPILER_STRIP_GATE(0x806B5CF4, &lit_3800);
#pragma pop

/* 806B5CF8-806B5CFC 000024 0004+00 0/1 0/0 0/0 .rodata          @3801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3801 = 105.0f;
COMPILER_STRIP_GATE(0x806B5CF8, &lit_3801);
#pragma pop

/* 806B5EEC-806B5F14 000000 0028+00 1/1 0/0 0/0 .data            eDt_ShakeFrame__6E_DT_n */
SECTION_DATA u8 E_DT_n::eDt_ShakeFrame[40] = {
    0x41, 0xA0, 0x00, 0x00, 0x41, 0xB0, 0x00, 0x00, 0x41, 0xC0, 0x00, 0x00, 0x41, 0xD0,
    0x00, 0x00, 0x41, 0xE0, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
    0x42, 0x08, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00, 0x42, 0x18, 0x00, 0x00,
};

/* 806B5F14-806B5F3C 000028 0028+00 1/1 0/0 0/0 .data            eDt_ShakeFrameDemo__6E_DT_n */
SECTION_DATA u8 E_DT_n::eDt_ShakeFrameDemo[40] = {
    0x43, 0x9B, 0x00, 0x00, 0x43, 0x9C, 0x00, 0x00, 0x43, 0x9D, 0x00, 0x00, 0x43, 0x9E,
    0x00, 0x00, 0x43, 0x9F, 0x00, 0x00, 0x43, 0xA0, 0x00, 0x00, 0x43, 0xA1, 0x00, 0x00,
    0x43, 0xA2, 0x00, 0x00, 0x43, 0xA3, 0x00, 0x00, 0x43, 0xA4, 0x00, 0x00,
};

/* 806B5F3C-806B5F7C 000050 0040+00 1/1 0/0 0/0 .data            cc_dt_body_src__6E_DT_n */
SECTION_DATA u8 E_DT_n::cc_dt_body_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 806B5F7C-806B5FBC 000090 0040+00 1/1 0/0 0/0 .data            cc_dt_tongue_src__6E_DT_n */
SECTION_DATA u8 E_DT_n::cc_dt_tongue_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 806B5FBC-806B6058 -00001 009C+00 1/1 0/0 0/0 .data            @3874 */
SECTION_DATA static void* lit_3874[39] = {
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x100),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x124),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1B4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1A0),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x14C),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x15C),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x1D4),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x174),
    (void*)(((char*)ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel) + 0x188),
};

/* 806B6058-806B6064 00016C 000A+02 1/1 0/0 0/0 .data            w_eff_id$4386 */
SECTION_DATA static u8 w_eff_id_4386[10 + 2 /* padding */] = {
    0x85,
    0x72,
    0x85,
    0x73,
    0x85,
    0x74,
    0x85,
    0x75,
    0x85,
    0x76,
    /* padding */
    0x00,
    0x00,
};

/* 806B6064-806B6070 000178 000A+02 1/1 0/0 0/0 .data            w_eff_id$4410 */
SECTION_DATA static u8 w_eff_id_4410[10 + 2 /* padding */] = {
    0x85,
    0x6D,
    0x85,
    0x6E,
    0x85,
    0x6F,
    0x85,
    0x70,
    0x85,
    0x71,
    /* padding */
    0x00,
    0x00,
};

/* 806B6070-806B6078 000184 0008+00 1/1 0/0 0/0 .data            w_eff_id$4434 */
SECTION_DATA static u8 w_eff_id_4434[8] = {
    0x85, 0x63, 0x85, 0x64, 0x85, 0x61, 0x85, 0x62,
};

/* 806B6078-806B6084 00018C 000A+02 1/1 0/0 0/0 .data            w_eff_id$4470 */
SECTION_DATA static u8 w_eff_id_4470[10 + 2 /* padding */] = {
    0x85,
    0x65,
    0x85,
    0x66,
    0x85,
    0x67,
    0x85,
    0x68,
    0x85,
    0x69,
    /* padding */
    0x00,
    0x00,
};

/* 806B6084-806B6088 000198 0004+00 1/1 0/0 0/0 .data            w_eff_id$4529 */
SECTION_DATA static u8 w_eff_id_4529[4] = {
    0x85,
    0x5D,
    0x85,
    0x5F,
};

/* 806B6088-806B608C 00019C 0004+00 1/1 0/0 0/0 .data            w_eff_id$4547 */
SECTION_DATA static u8 w_eff_id_4547[4] = {
    0x85,
    0x5E,
    0x85,
    0x60,
};

/* 806B608C-806B6094 0001A0 0008+00 1/1 0/0 0/0 .data            w_eff_id$4635 */
SECTION_DATA static u8 w_eff_id_4635[8] = {
    0x85, 0x52, 0x85, 0x53, 0x85, 0x54, 0x85, 0x55,
};

/* 806B6094-806B6098 0001A8 0004+00 1/1 0/0 0/0 .data            w_eff_id$4713 */
SECTION_DATA static u8 w_eff_id_4713[4] = {
    0x85,
    0x57,
    0x85,
    0x58,
};

/* 806B6098-806B60A0 0001AC 0008+00 1/1 0/0 0/0 .data            w_eff_id$4737 */
SECTION_DATA static u8 w_eff_id_4737[8] = {
    0x85, 0x59, 0x85, 0x5A, 0x85, 0x5B, 0x85, 0x5C,
};

/* 806B60A0-806B60A4 0001B4 0004+00 1/1 0/0 0/0 .data            w_eff_id$4815 */
SECTION_DATA static u8 w_eff_id_4815[4] = {
    0x85,
    0x99,
    0x85,
    0x9A,
};

/* 806B60A4-806B60C4 -00001 0020+00 1/1 0/0 0/0 .data            @5320 */
SECTION_DATA static void* lit_5320[8] = {
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0xDC),
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0x10C),
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0x1C8),
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0x214),
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0x480),
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0x4CC),
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0x590),
    (void*)(((char*)executeWalk__8daE_DT_cFv) + 0x62C),
};

/* 806B60C4-806B60E4 -00001 0020+00 1/1 0/0 0/0 .data            @5532 */
SECTION_DATA static void* lit_5532[8] = {
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x120),
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x17C),
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x234),
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x2FC),
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x3FC),
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x4E4),
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x510),
    (void*)(((char*)executeJump__8daE_DT_cFv) + 0x800),
};

/* 806B60E4-806B6100 -00001 001C+00 1/1 0/0 0/0 .data            @5965 */
SECTION_DATA static void* lit_5965[7] = {
    (void*)(((char*)executeDeath__8daE_DT_cFv) + 0x78),
    (void*)(((char*)executeDeath__8daE_DT_cFv) + 0xE8),
    (void*)(((char*)executeDeath__8daE_DT_cFv) + 0x114),
    (void*)(((char*)executeDeath__8daE_DT_cFv) + 0x2C0),
    (void*)(((char*)executeDeath__8daE_DT_cFv) + 0x754),
    (void*)(((char*)executeDeath__8daE_DT_cFv) + 0x7D8),
    (void*)(((char*)executeDeath__8daE_DT_cFv) + 0x800),
};

/* 806B6100-806B6184 -00001 0084+00 1/1 0/0 0/0 .data            @6452 */
SECTION_DATA static void* lit_6452[33] = {
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x84),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0xF0),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0xF0),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x4A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x518),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x568),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x74C),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x838),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x944),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0xB2C),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0xC54),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0xD90),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0xE94),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0x10A8),
    (void*)(((char*)executeOpening__8daE_DT_cFv) + 0xF7C),
};

/* 806B6184-806B61B0 -00001 002C+00 1/1 0/0 0/0 .data            @6804 */
SECTION_DATA static void* lit_6804[11] = {
    (void*)(((char*)action__8daE_DT_cFv) + 0x170), (void*)(((char*)action__8daE_DT_cFv) + 0x17C),
    (void*)(((char*)action__8daE_DT_cFv) + 0x188), (void*)(((char*)action__8daE_DT_cFv) + 0x194),
    (void*)(((char*)action__8daE_DT_cFv) + 0x1A0), (void*)(((char*)action__8daE_DT_cFv) + 0x1AC),
    (void*)(((char*)action__8daE_DT_cFv) + 0x1C4), (void*)(((char*)action__8daE_DT_cFv) + 0x1D0),
    (void*)(((char*)action__8daE_DT_cFv) + 0x1E8), (void*)(((char*)action__8daE_DT_cFv) + 0x1F4),
    (void*)(((char*)action__8daE_DT_cFv) + 0x200),
};

/* 806B61B0-806B61D0 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_DT_Method */
static actor_method_class l_daE_DT_Method = {
    (process_method_func)daE_DT_Create__FP8daE_DT_c,
    (process_method_func)daE_DT_Delete__FP8daE_DT_c,
    (process_method_func)daE_DT_Execute__FP8daE_DT_c,
    (process_method_func)daE_DT_IsDelete__FP8daE_DT_c,
    (process_method_func)daE_DT_Draw__FP8daE_DT_c,
};

/* 806B61D0-806B6200 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_DT */
extern actor_process_profile_definition g_profile_E_DT = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_DT,              // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daE_DT_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  202,                    // mPriority
  &l_daE_DT_Method,       // sub_method
  0x00040000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 806B6200-806B620C 000314 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 806B620C-806B6218 000320 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806B6218-806B623C 00032C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806B5C84,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806B5C7C,
};

/* 806B623C-806B6248 000350 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 806B6248-806B6254 00035C 000C+00 2/2 0/0 0/0 .data            __vt__12daE_DT_HIO_c */
SECTION_DATA extern void* __vt__12daE_DT_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_DT_HIO_cFv,
};

/* 806AD90C-806AD97C 0000EC 0070+00 1/1 0/0 0/0 .text            __ct__12daE_DT_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_DT_HIO_c::daE_DT_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__ct__12daE_DT_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5CFC-806B5D04 000028 0004+04 18/33 0/0 0/0 .rodata          @3868 */
SECTION_RODATA static f32 const lit_3868[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x806B5CFC, &lit_3868);

/* 806B5D04-806B5D0C 000030 0008+00 1/3 0/0 0/0 .rodata          @3870 */
SECTION_RODATA static u8 const lit_3870[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806B5D04, &lit_3870);

/* 806AD97C-806ADBA0 00015C 0224+00 2/1 0/0 0/0 .text ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/ctrlJoint__8daE_DT_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 806ADBA0-806ADBEC 000380 004C+00 1/1 0/0 0/0 .text JointCallBack__8daE_DT_cFP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::JointCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/JointCallBack__8daE_DT_cFP8J3DJointi.s"
}
#pragma pop

/* 806ADBEC-806ADD30 0003CC 0144+00 1/1 0/0 0/0 .text
 * ctrlJointTuba__8daE_DT_cFP8J3DJointP8J3DModel                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::ctrlJointTuba(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/ctrlJointTuba__8daE_DT_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 806ADD30-806ADD7C 000510 004C+00 1/1 0/0 0/0 .text JointCallBackTuba__8daE_DT_cFP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::JointCallBackTuba(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/JointCallBackTuba__8daE_DT_cFP8J3DJointi.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D0C-806B5D10 000038 0004+00 0/2 0/0 0/0 .rodata          @4061 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4061 = 24.0f;
COMPILER_STRIP_GATE(0x806B5D0C, &lit_4061);
#pragma pop

/* 806B5D10-806B5D14 00003C 0004+00 0/1 0/0 0/0 .rodata          @4062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4062 = 18.0f;
COMPILER_STRIP_GATE(0x806B5D10, &lit_4062);
#pragma pop

/* 806B5D14-806B5D18 000040 0004+00 0/1 0/0 0/0 .rodata          @4063 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4063 = 6.0f;
COMPILER_STRIP_GATE(0x806B5D14, &lit_4063);
#pragma pop

/* 806B5D18-806B5D1C 000044 0004+00 0/1 0/0 0/0 .rodata          @4064 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4064 = 255.0f;
COMPILER_STRIP_GATE(0x806B5D18, &lit_4064);
#pragma pop

/* 806B5D1C-806B5D20 000048 0004+00 0/1 0/0 0/0 .rodata          @4065 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4065 = 16.0f;
COMPILER_STRIP_GATE(0x806B5D1C, &lit_4065);
#pragma pop

/* 806B5D20-806B5D24 00004C 0004+00 1/5 0/0 0/0 .rodata          @4066 */
SECTION_RODATA static f32 const lit_4066 = 10.0f;
COMPILER_STRIP_GATE(0x806B5D20, &lit_4066);

/* 806B5D24-806B5D28 000050 0004+00 0/2 0/0 0/0 .rodata          @4067 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4067 = 12.0f;
COMPILER_STRIP_GATE(0x806B5D24, &lit_4067);
#pragma pop

/* 806B5D28-806B5D2C 000054 0004+00 0/2 0/0 0/0 .rodata          @4068 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4068 = -20.0f;
COMPILER_STRIP_GATE(0x806B5D28, &lit_4068);
#pragma pop

/* 806B5D2C-806B5D30 000058 0004+00 0/3 0/0 0/0 .rodata          @4069 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4069 = -30.0f;
COMPILER_STRIP_GATE(0x806B5D2C, &lit_4069);
#pragma pop

/* 806B5D30-806B5D34 00005C 0004+00 0/2 0/0 0/0 .rodata          @4070 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4070 = -10.0f;
COMPILER_STRIP_GATE(0x806B5D30, &lit_4070);
#pragma pop

/* 806B5D34-806B5D38 000060 0004+00 4/24 0/0 0/0 .rodata          @4071 */
SECTION_RODATA static u8 const lit_4071[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x806B5D34, &lit_4071);

/* 806B5D38-806B5D3C 000064 0004+00 1/6 0/0 0/0 .rodata          @4072 */
SECTION_RODATA static f32 const lit_4072 = 100.0f;
COMPILER_STRIP_GATE(0x806B5D38, &lit_4072);

/* 806B5D3C-806B5D40 000068 0004+00 0/1 0/0 0/0 .rodata          @4073 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4073 = 1000.0f;
COMPILER_STRIP_GATE(0x806B5D3C, &lit_4073);
#pragma pop

/* 806B5D40-806B5D44 00006C 0004+00 0/3 0/0 0/0 .rodata          @4074 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4074 = 2000.0f;
COMPILER_STRIP_GATE(0x806B5D40, &lit_4074);
#pragma pop

/* 806B5D44-806B5D48 000070 0004+00 0/2 0/0 0/0 .rodata          @4075 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4075 = 4000.0f;
COMPILER_STRIP_GATE(0x806B5D44, &lit_4075);
#pragma pop

/* 806B6260-806B6264 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 806B6264-806B6268 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 806B6268-806B626C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 806B626C-806B6270 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 806B6270-806B6274 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 806B6274-806B6278 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 806B6278-806B627C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 806B627C-806B6280 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 806B6280-806B6284 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 806B6284-806B6288 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 806B6288-806B628C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 806B628C-806B6290 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 806B6290-806B6294 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 806B6294-806B6298 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 806B6298-806B629C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 806B629C-806B62A0 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 806B629C 0001+00 data_806B629C @1009 */
/* 806B629D 0003+00 data_806B629D None */
static u8 struct_806B629C[4];

/* 806B62A0-806B62AC 000048 000C+00 0/1 0/0 0/0 .bss             @3787 */
#pragma push
#pragma force_active on
static u8 lit_3787[12];
#pragma pop

/* 806B62AC-806B62DC 000054 0030+00 7/8 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[48];

/* 806ADD7C-806AE56C 00055C 07F0+00 1/1 0/0 0/0 .text            draw__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::draw() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/draw__8daE_DT_cFv.s"
}
#pragma pop

/* 806AE56C-806AE5A8 000D4C 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__4cXyzFv.s"
}
#pragma pop

/* 806AE5A8-806AE5C8 000D88 0020+00 1/0 0/0 0/0 .text            daE_DT_Draw__FP8daE_DT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_DT_Draw(daE_DT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/daE_DT_Draw__FP8daE_DT_c.s"
}
#pragma pop

/* 806AE5C8-806AE618 000DA8 0050+00 1/1 0/0 0/0 .text            demo_skip__8daE_DT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::demo_skip(int param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/demo_skip__8daE_DT_cFi.s"
}
#pragma pop

/* 806AE618-806AE64C 000DF8 0034+00 1/1 0/0 0/0 .text            DemoSkipCallBack__8daE_DT_cFPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::DemoSkipCallBack(void* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/DemoSkipCallBack__8daE_DT_cFPvi.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D48-806B5D4C 000074 0004+00 1/3 0/0 0/0 .rodata          @4112 */
SECTION_RODATA static f32 const lit_4112 = -1.0f;
COMPILER_STRIP_GATE(0x806B5D48, &lit_4112);

/* 806B5ED0-806B5ED0 0001FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806B5ED0 = "E_DT";
#pragma pop

/* 806AE64C-806AE6F0 000E2C 00A4+00 11/11 0/0 0/0 .text            setBck__8daE_DT_cFiUcff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setBck__8daE_DT_cFiUcff.s"
}
#pragma pop

/* 806AE6F0-806AE74C 000ED0 005C+00 5/5 0/0 0/0 .text            checkBck__8daE_DT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::checkBck(int param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/checkBck__8daE_DT_cFi.s"
}
#pragma pop

/* 806AE74C-806AE758 000F2C 000C+00 12/12 0/0 0/0 .text            setActionMode__8daE_DT_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setActionMode(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setActionMode__8daE_DT_cFii.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D4C-806B5D50 000078 0004+00 0/1 0/0 0/0 .rodata          @4233 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4233 = -3.0f / 10.0f;
COMPILER_STRIP_GATE(0x806B5D4C, &lit_4233);
#pragma pop

/* 806B5D50-806B5D54 00007C 0004+00 0/2 0/0 0/0 .rodata          @4234 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4234 = 130.0f;
COMPILER_STRIP_GATE(0x806B5D50, &lit_4234);
#pragma pop

/* 806AE758-806AEB48 000F38 03F0+00 1/1 0/0 0/0 .text            damage_check__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::damage_check() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/damage_check__8daE_DT_cFv.s"
}
#pragma pop

/* 806AEB48-806AEBD4 001328 008C+00 1/1 0/0 0/0 .text            setStabPos__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setStabPos() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setStabPos__8daE_DT_cFv.s"
}
#pragma pop

/* 806AEBD4-806AED4C 0013B4 0178+00 1/1 0/0 0/0 .text            checkBeforeBg__8daE_DT_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::checkBeforeBg(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/checkBeforeBg__8daE_DT_cFf.s"
}
#pragma pop

/* 806AED4C-806AED94 00152C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGPla::~cM3dGPla() {
extern "C" asm void __dt__8cM3dGPlaFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D54-806B5D58 000080 0004+00 0/1 0/0 0/0 .rodata          @4367 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4367 = 15.0f;
COMPILER_STRIP_GATE(0x806B5D54, &lit_4367);
#pragma pop

/* 806AED94-806AEEFC 001574 0168+00 1/1 0/0 0/0 .text            checkTongueBg__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::checkTongueBg() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/checkTongueBg__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D58-806B5D5C 000084 0004+00 1/1 0/0 0/0 .rodata          @4382 */
SECTION_RODATA static f32 const lit_4382 = -1000000000.0f;
COMPILER_STRIP_GATE(0x806B5D58, &lit_4382);

/* 806AEEFC-806AEFE8 0016DC 00EC+00 1/1 0/0 0/0 .text            checkWaterSurface__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::checkWaterSurface() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/checkWaterSurface__8daE_DT_cFv.s"
}
#pragma pop

/* 806AEFE8-806AF09C 0017C8 00B4+00 3/3 0/0 0/0 .text            setSmallWaterEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setSmallWaterEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setSmallWaterEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF09C-806AF150 00187C 00B4+00 2/2 0/0 0/0 .text            setLargeWaterEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setLargeWaterEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setLargeWaterEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF150-806AF240 001930 00F0+00 1/1 0/0 0/0 .text            setHamonEffect__8daE_DT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setHamonEffect(int param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setHamonEffect__8daE_DT_cFi.s"
}
#pragma pop

/* 806AF240-806AF2F4 001A20 00B4+00 1/1 0/0 0/0 .text            setJumpEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setJumpEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setJumpEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF2F4-806AF3D0 001AD4 00DC+00 1/1 0/0 0/0 .text            setJumpSizukuEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setJumpSizukuEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setJumpSizukuEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF3D0-806AF460 001BB0 0090+00 2/2 0/0 0/0 .text            setDamageShibukiEffect__8daE_DT_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setDamageShibukiEffect(int param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setDamageShibukiEffect__8daE_DT_cFi.s"
}
#pragma pop

/* 806AF460-806AF548 001C40 00E8+00 2/2 0/0 0/0 .text            setDamageYodareEffect__8daE_DT_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setDamageYodareEffect(int param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setDamageYodareEffect__8daE_DT_cFi.s"
}
#pragma pop

/* 806AF548-806AF5CC 001D28 0084+00 2/2 0/0 0/0 .text            setSwingEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setSwingEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setSwingEffect__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D5C-806B5D60 000088 0004+00 0/1 0/0 0/0 .rodata          @4630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4630 = 29.0f;
COMPILER_STRIP_GATE(0x806B5D5C, &lit_4630);
#pragma pop

/* 806B5D60-806B5D64 00008C 0004+00 0/1 0/0 0/0 .rodata          @4631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4631 = 59.0f;
COMPILER_STRIP_GATE(0x806B5D60, &lit_4631);
#pragma pop

/* 806AF5CC-806AF740 001DAC 0174+00 1/1 0/0 0/0 .text            setStepEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setStepEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setStepEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF740-806AF848 001F20 0108+00 1/1 0/0 0/0 .text            setBombEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setBombEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setBombEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF848-806AF924 002028 00DC+00 1/1 0/0 0/0 .text            setBombSmokeEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setBombSmokeEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setBombSmokeEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF924-806AF9D8 002104 00B4+00 1/1 0/0 0/0 .text            setDeadShibukiEffect__8daE_DT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setDeadShibukiEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setDeadShibukiEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AF9D8-806AFAE0 0021B8 0108+00 1/1 0/0 0/0 .text            setDeadYodareEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setDeadYodareEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setDeadYodareEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AFAE0-806AFBBC 0022C0 00DC+00 1/1 0/0 0/0 .text            setBoxTubaEffect__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setBoxTubaEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setBoxTubaEffect__8daE_DT_cFv.s"
}
#pragma pop

/* 806AFBBC-806AFC98 00239C 00DC+00 1/1 0/0 0/0 .text            setBoxTubaLandEffect__8daE_DT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setBoxTubaLandEffect() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setBoxTubaLandEffect__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B62DC-806B62E0 000084 0004+00 2/2 0/0 0/0 .bss             mDt_OtamaNum__6E_DT_n */
u8 E_DT_n::mDt_OtamaNum[4];

/* 806B62E0-806B6330 000088 0050+00 3/3 0/0 0/0 .bss             mDt_OtamaNo__6E_DT_n */
u8 E_DT_n::mDt_OtamaNo[80];

/* 806AFC98-806AFD30 002478 0098+00 1/1 0/0 0/0 .text            s_otama_todo__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_otama_todo(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/s_otama_todo__FPvPv.s"
}
#pragma pop

/* 806AFD30-806AFD94 002510 0064+00 3/3 0/0 0/0 .text            getNumberOfOtama__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::getNumberOfOtama() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/getNumberOfOtama__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B6330-806B6334 0000D8 0004+00 3/3 0/0 0/0 .bss             m_fall_no__6E_DT_n */
u8 E_DT_n::m_fall_no[4];

/* 806AFD94-806AFE24 002574 0090+00 3/3 0/0 0/0 .text            s_fall_otama__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_fall_otama(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/s_fall_otama__FPvPv.s"
}
#pragma pop

/* 806AFE24-806AFEAC 002604 0088+00 2/2 0/0 0/0 .text            setStayOtamaFall__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setStayOtamaFall() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setStayOtamaFall__8daE_DT_cFv.s"
}
#pragma pop

/* 806AFEAC-806AFF1C 00268C 0070+00 1/1 0/0 0/0 .text            setStayOtamaDelete__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::setStayOtamaDelete() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/setStayOtamaDelete__8daE_DT_cFv.s"
}
#pragma pop

/* 806AFF1C-806AFF8C 0026FC 0070+00 1/1 0/0 0/0 .text            s_demo_otama__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_demo_otama(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/s_demo_otama__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D64-806B5D6C 000090 0008+00 0/2 0/0 0/0 .rodata          @4976 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4976[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806B5D64, &lit_4976);
#pragma pop

/* 806B5D6C-806B5D74 000098 0008+00 0/2 0/0 0/0 .rodata          @4977 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4977[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806B5D6C, &lit_4977);
#pragma pop

/* 806B5D74-806B5D7C 0000A0 0008+00 0/2 0/0 0/0 .rodata          @4978 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4978[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806B5D74, &lit_4978);
#pragma pop

/* 806B5D7C-806B5D80 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4979 = 200.0f;
COMPILER_STRIP_GATE(0x806B5D7C, &lit_4979);
#pragma pop

/* 806B6334-806B6340 0000DC 000C+00 0/1 0/0 0/0 .bss             @3802 */
#pragma push
#pragma force_active on
static u8 lit_3802[12];
#pragma pop

/* 806B6340-806B634C 0000E8 000C+00 2/3 0/0 0/0 .bss             m_tongue_pos__6E_DT_n */
u8 E_DT_n::m_tongue_pos[12];

/* 806AFF8C-806B0114 00276C 0188+00 1/1 0/0 0/0 .text            s_bomb_search__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_bomb_search(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/s_bomb_search__FPvPv.s"
}
#pragma pop

/* 806B0114-806B01B4 0028F4 00A0+00 1/1 0/0 0/0 .text            checkBombEat__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::checkBombEat() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/checkBombEat__8daE_DT_cFv.s"
}
#pragma pop

/* 806B01B4-806B0200 002994 004C+00 1/1 0/0 0/0 .text            isShutterOpen__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::isShutterOpen() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/isShutterOpen__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D80-806B5D84 0000AC 0004+00 0/1 0/0 0/0 .rodata          @5088 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5088 = 45.0f;
COMPILER_STRIP_GATE(0x806B5D80, &lit_5088);
#pragma pop

/* 806B5D84-806B5D88 0000B0 0004+00 0/3 0/0 0/0 .rodata          @5089 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5089 = 150.0f;
COMPILER_STRIP_GATE(0x806B5D84, &lit_5089);
#pragma pop

/* 806B5D88-806B5D8C 0000B4 0004+00 0/5 0/0 0/0 .rodata          @5090 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5090 = 30.0f;
COMPILER_STRIP_GATE(0x806B5D88, &lit_5090);
#pragma pop

/* 806B0200-806B0368 0029E0 0168+00 1/1 0/0 0/0 .text            executeWait__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeWait() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeWait__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D8C-806B5D90 0000B8 0004+00 0/2 0/0 0/0 .rodata          @5155 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5155 = 1200.0f;
COMPILER_STRIP_GATE(0x806B5D8C, &lit_5155);
#pragma pop

/* 806B5D90-806B5D94 0000BC 0004+00 0/1 0/0 0/0 .rodata          @5156 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5156 = 27.0f;
COMPILER_STRIP_GATE(0x806B5D90, &lit_5156);
#pragma pop

/* 806B5D94-806B5D98 0000C0 0004+00 0/1 0/0 0/0 .rodata          @5157 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5157 = 35.0f;
COMPILER_STRIP_GATE(0x806B5D94, &lit_5157);
#pragma pop

/* 806B5D98-806B5D9C 0000C4 0004+00 0/2 0/0 0/0 .rodata          @5158 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5158 = 70.0f;
COMPILER_STRIP_GATE(0x806B5D98, &lit_5158);
#pragma pop

/* 806B0368-806B063C 002B48 02D4+00 1/5 0/0 0/0 .text            executeCry__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeCry() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeCry__8daE_DT_cFv.s"
}
#pragma pop

/* 806B063C-806B07C4 002E1C 0188+00 1/1 0/0 0/0 .text            executeShake__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeShake() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeShake__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5D9C-806B5DA0 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5315 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5315 = 1500.0f;
COMPILER_STRIP_GATE(0x806B5D9C, &lit_5315);
#pragma pop

/* 806B5DA0-806B5DA4 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5316 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5316 = 32768.0f;
COMPILER_STRIP_GATE(0x806B5DA0, &lit_5316);
#pragma pop

/* 806B5DA4-806B5DA8 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5317 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5317 = 8192.0f;
COMPILER_STRIP_GATE(0x806B5DA4, &lit_5317);
#pragma pop

/* 806B07C4-806B0E9C 002FA4 06D8+00 2/1 0/0 0/0 .text            executeWalk__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeWalk() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeWalk__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5DA8-806B5DAC 0000D4 0004+00 0/0 0/0 0/0 .rodata          @5318 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5318 = 23.0f;
COMPILER_STRIP_GATE(0x806B5DA8, &lit_5318);
#pragma pop

/* 806B5DAC-806B5DB0 0000D8 0004+00 0/0 0/0 0/0 .rodata          @5319 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5319 = 65.0f;
COMPILER_STRIP_GATE(0x806B5DAC, &lit_5319);
#pragma pop

/* 806B5DB0-806B5DB4 0000DC 0004+00 0/2 0/0 0/0 .rodata          @5520 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5520 = 160.0f;
COMPILER_STRIP_GATE(0x806B5DB0, &lit_5520);
#pragma pop

/* 806B5DB4-806B5DB8 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5521 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5521 = 20.0f;
COMPILER_STRIP_GATE(0x806B5DB4, &lit_5521);
#pragma pop

/* 806B5DB8-806B5DBC 0000E4 0004+00 0/3 0/0 0/0 .rodata          @5522 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5522 = -5.0f;
COMPILER_STRIP_GATE(0x806B5DB8, &lit_5522);
#pragma pop

/* 806B0E9C-806B177C 00367C 08E0+00 2/1 0/0 0/0 .text            executeJump__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeJump() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeJump__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5DBC-806B5DC0 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5523 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5523 = 700.0f;
COMPILER_STRIP_GATE(0x806B5DBC, &lit_5523);
#pragma pop

/* 806B5DC0-806B5DC4 0000EC 0004+00 0/0 0/0 0/0 .rodata          @5524 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5524 = 87.0f;
COMPILER_STRIP_GATE(0x806B5DC0, &lit_5524);
#pragma pop

/* 806B5DC4-806B5DC8 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5525 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5525 = -50.0f;
COMPILER_STRIP_GATE(0x806B5DC4, &lit_5525);
#pragma pop

/* 806B5DC8-806B5DCC 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5526 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5526 = 4096.0f;
COMPILER_STRIP_GATE(0x806B5DC8, &lit_5526);
#pragma pop

/* 806B5DCC-806B5DD0 0000F8 0004+00 0/0 0/0 0/0 .rodata          @5527 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5527 = 470.0f;
COMPILER_STRIP_GATE(0x806B5DCC, &lit_5527);
#pragma pop

/* 806B5DD0-806B5DD4 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5528 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5528 = 0.5f;
COMPILER_STRIP_GATE(0x806B5DD0, &lit_5528);
#pragma pop

/* 806B5DD4-806B5DD8 000100 0004+00 0/1 0/0 0/0 .rodata          @5529 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5529 = 5.0f;
COMPILER_STRIP_GATE(0x806B5DD4, &lit_5529);
#pragma pop

/* 806B5DD8-806B5DDC 000104 0004+00 0/0 0/0 0/0 .rodata          @5530 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5530 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x806B5DD8, &lit_5530);
#pragma pop

/* 806B5DDC-806B5DE0 000108 0004+00 0/1 0/0 0/0 .rodata          @5531 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5531 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x806B5DDC, &lit_5531);
#pragma pop

/* 806B5DE0-806B5DE4 00010C 0004+00 0/1 0/0 0/0 .rodata          @5613 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5613 = 56.0f;
COMPILER_STRIP_GATE(0x806B5DE0, &lit_5613);
#pragma pop

/* 806B5DE4-806B5DE8 000110 0004+00 0/3 0/0 0/0 .rodata          @5614 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5614 = 50.0f;
COMPILER_STRIP_GATE(0x806B5DE4, &lit_5614);
#pragma pop

/* 806B177C-806B1B60 003F5C 03E4+00 1/1 0/0 0/0 .text            executeDown__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeDown() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeDown__8daE_DT_cFv.s"
}
#pragma pop

/* 806B1B60-806B1BEC 004340 008C+00 1/1 0/0 0/0 .text            executeSearch__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeSearch() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeSearch__8daE_DT_cFv.s"
}
#pragma pop

/* 806B1BEC-806B1D48 0043CC 015C+00 1/1 0/0 0/0 .text            executeDamage__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeDamage() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeDamage__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5DE8-806B5DEC 000114 0004+00 0/1 0/0 0/0 .rodata          @5705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5705 = 119.0f;
COMPILER_STRIP_GATE(0x806B5DE8, &lit_5705);
#pragma pop

/* 806B5DEC-806B5DF0 000118 0004+00 0/1 0/0 0/0 .rodata          @5706 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5706 = 135.0f;
COMPILER_STRIP_GATE(0x806B5DEC, &lit_5706);
#pragma pop

/* 806B1D48-806B1F78 004528 0230+00 1/1 0/0 0/0 .text            executeBombDamage__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeBombDamage() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeBombDamage__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5DF0-806B5DF4 00011C 0004+00 0/1 0/0 0/0 .rodata          @5952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5952 = 450.0f;
COMPILER_STRIP_GATE(0x806B5DF0, &lit_5952);
#pragma pop

/* 806B1F78-806B28E4 004758 096C+00 2/1 0/0 0/0 .text            executeDeath__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeDeath() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeDeath__8daE_DT_cFv.s"
}
#pragma pop

/* 806B28E4-806B29D4 0050C4 00F0+00 1/1 0/0 0/0 .text            pointInSight__8daE_DT_cFP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::pointInSight(cXyz* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/pointInSight__8daE_DT_cFP4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5DF4-806B5DF8 000120 0004+00 0/0 0/0 0/0 .rodata          @5953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5953 = -1000.0f;
COMPILER_STRIP_GATE(0x806B5DF4, &lit_5953);
#pragma pop

/* 806B5DF8-806B5DFC 000124 0004+00 0/0 0/0 0/0 .rodata          @5954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5954 = 800.0f;
COMPILER_STRIP_GATE(0x806B5DF8, &lit_5954);
#pragma pop

/* 806B5DFC-806B5E00 000128 0004+00 0/0 0/0 0/0 .rodata          @5955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5955 = 55.0f;
COMPILER_STRIP_GATE(0x806B5DFC, &lit_5955);
#pragma pop

/* 806B5E00-806B5E04 00012C 0004+00 0/1 0/0 0/0 .rodata          @5956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5956 = 110.0f;
COMPILER_STRIP_GATE(0x806B5E00, &lit_5956);
#pragma pop

/* 806B5E04-806B5E08 000130 0004+00 0/0 0/0 0/0 .rodata          @5957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5957 = 125.0f;
COMPILER_STRIP_GATE(0x806B5E04, &lit_5957);
#pragma pop

/* 806B5E08-806B5E0C 000134 0004+00 0/0 0/0 0/0 .rodata          @5958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5958 = 212.0f;
COMPILER_STRIP_GATE(0x806B5E08, &lit_5958);
#pragma pop

/* 806B5E0C-806B5E10 000138 0004+00 0/0 0/0 0/0 .rodata          @5959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5959 = 176.0f;
COMPILER_STRIP_GATE(0x806B5E0C, &lit_5959);
#pragma pop

/* 806B5E10-806B5E14 00013C 0004+00 0/0 0/0 0/0 .rodata          @5960 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5960 = 0x41D1999A;
COMPILER_STRIP_GATE(0x806B5E10, &lit_5960);
#pragma pop

/* 806B5E14-806B5E18 000140 0004+00 0/0 0/0 0/0 .rodata          @5961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5961 = 180.0f;
COMPILER_STRIP_GATE(0x806B5E14, &lit_5961);
#pragma pop

/* 806B5E18-806B5E1C 000144 0004+00 0/0 0/0 0/0 .rodata          @5962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5962 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x806B5E18, &lit_5962);
#pragma pop

/* 806B5E1C-806B5E20 000148 0004+00 0/1 0/0 0/0 .rodata          @5963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5963 = 600.0f;
COMPILER_STRIP_GATE(0x806B5E1C, &lit_5963);
#pragma pop

/* 806B5E20-806B5E24 00014C 0004+00 0/1 0/0 0/0 .rodata          @5964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5964 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x806B5E20, &lit_5964);
#pragma pop

/* 806B5E24-806B5E2C 000150 0008+00 0/0 0/0 0/0 .rodata          @5967 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5967[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806B5E24, &lit_5967);
#pragma pop

/* 806B5E2C-806B5E30 000158 0004+00 0/4 0/0 0/0 .rodata          @6430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6430 = -100.0f;
COMPILER_STRIP_GATE(0x806B5E2C, &lit_6430);
#pragma pop

/* 806B5E30-806B5E34 00015C 0004+00 0/1 0/0 0/0 .rodata          @6431 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6431 = 29.0f / 10.0f;
COMPILER_STRIP_GATE(0x806B5E30, &lit_6431);
#pragma pop

/* 806B5E34-806B5E38 000160 0004+00 0/1 0/0 0/0 .rodata          @6432 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6432 = 14.0f;
COMPILER_STRIP_GATE(0x806B5E34, &lit_6432);
#pragma pop

/* 806B5E38-806B5E3C 000164 0004+00 0/1 0/0 0/0 .rodata          @6433 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6433 = 19.0f;
COMPILER_STRIP_GATE(0x806B5E38, &lit_6433);
#pragma pop

/* 806B5E3C-806B5E40 000168 0004+00 0/1 0/0 0/0 .rodata          @6434 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6434 = 60.0f;
COMPILER_STRIP_GATE(0x806B5E3C, &lit_6434);
#pragma pop

/* 806B29D4-806B3B08 0051B4 1134+00 2/1 0/0 0/0 .text            executeOpening__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::executeOpening() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/executeOpening__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5E40-806B5E44 00016C 0004+00 0/0 0/0 0/0 .rodata          @6435 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6435 = -300.0f;
COMPILER_STRIP_GATE(0x806B5E40, &lit_6435);
#pragma pop

/* 806B5E44-806B5E48 000170 0004+00 0/1 0/0 0/0 .rodata          @6436 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6436 = 3000.0f;
COMPILER_STRIP_GATE(0x806B5E44, &lit_6436);
#pragma pop

/* 806B5E48-806B5E4C 000174 0004+00 0/0 0/0 0/0 .rodata          @6437 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6437 = 1700.0f;
COMPILER_STRIP_GATE(0x806B5E48, &lit_6437);
#pragma pop

/* 806B5E4C-806B5E50 000178 0004+00 0/0 0/0 0/0 .rodata          @6438 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6438 = 3400.0f;
COMPILER_STRIP_GATE(0x806B5E4C, &lit_6438);
#pragma pop

/* 806B5E50-806B5E54 00017C 0004+00 0/0 0/0 0/0 .rodata          @6439 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6439 = 1400.0f;
COMPILER_STRIP_GATE(0x806B5E50, &lit_6439);
#pragma pop

/* 806B5E54-806B5E58 000180 0004+00 0/0 0/0 0/0 .rodata          @6440 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6440 = 143.0f;
COMPILER_STRIP_GATE(0x806B5E54, &lit_6440);
#pragma pop

/* 806B5E58-806B5E5C 000184 0004+00 0/0 0/0 0/0 .rodata          @6441 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6441 = 3112.0f;
COMPILER_STRIP_GATE(0x806B5E58, &lit_6441);
#pragma pop

/* 806B5E5C-806B5E60 000188 0004+00 0/0 0/0 0/0 .rodata          @6442 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6442 = 243.0f;
COMPILER_STRIP_GATE(0x806B5E5C, &lit_6442);
#pragma pop

/* 806B5E60-806B5E64 00018C 0004+00 0/0 0/0 0/0 .rodata          @6443 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6443 = -150.0f;
COMPILER_STRIP_GATE(0x806B5E60, &lit_6443);
#pragma pop

/* 806B5E64-806B5E68 000190 0004+00 0/0 0/0 0/0 .rodata          @6444 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6444 = 1600.0f;
COMPILER_STRIP_GATE(0x806B5E64, &lit_6444);
#pragma pop

/* 806B5E68-806B5E6C 000194 0004+00 0/0 0/0 0/0 .rodata          @6445 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6445 = 115.0f;
COMPILER_STRIP_GATE(0x806B5E68, &lit_6445);
#pragma pop

/* 806B5E6C-806B5E70 000198 0004+00 0/0 0/0 0/0 .rodata          @6446 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6446 = 1550.0f;
COMPILER_STRIP_GATE(0x806B5E6C, &lit_6446);
#pragma pop

/* 806B5E70-806B5E74 00019C 0004+00 0/1 0/0 0/0 .rodata          @6447 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6447 = 350.0f;
COMPILER_STRIP_GATE(0x806B5E70, &lit_6447);
#pragma pop

/* 806B5E74-806B5E78 0001A0 0004+00 0/2 0/0 0/0 .rodata          @6448 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6448 = -500.0f;
COMPILER_STRIP_GATE(0x806B5E74, &lit_6448);
#pragma pop

/* 806B5E78-806B5E7C 0001A4 0004+00 0/0 0/0 0/0 .rodata          @6449 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6449 = 290.0f;
COMPILER_STRIP_GATE(0x806B5E78, &lit_6449);
#pragma pop

/* 806B5E7C-806B5E80 0001A8 0004+00 0/0 0/0 0/0 .rodata          @6450 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6450 = 330.0f;
COMPILER_STRIP_GATE(0x806B5E7C, &lit_6450);
#pragma pop

/* 806B5E80-806B5E84 0001AC 0004+00 0/1 0/0 0/0 .rodata          @6451 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6451 = 40.0f;
COMPILER_STRIP_GATE(0x806B5E80, &lit_6451);
#pragma pop

/* 806B5E84-806B5E88 0001B0 0004+00 0/2 0/0 0/0 .rodata          @6618 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6618 = 400.0f;
COMPILER_STRIP_GATE(0x806B5E84, &lit_6618);
#pragma pop

/* 806B3B08-806B40D8 0062E8 05D0+00 1/1 0/0 0/0 .text            calcCamera__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::calcCamera() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/calcCamera__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5E88-806B5E8C 0001B4 0004+00 0/1 0/0 0/0 .rodata          @6724 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6724 = -80.0f;
COMPILER_STRIP_GATE(0x806B5E88, &lit_6724);
#pragma pop

/* 806B5E8C-806B5E90 0001B8 0004+00 0/1 0/0 0/0 .rodata          @6725 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6725 = 9.0f;
COMPILER_STRIP_GATE(0x806B5E8C, &lit_6725);
#pragma pop

/* 806B5E90-806B5E94 0001BC 0004+00 0/1 0/0 0/0 .rodata          @6726 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6726 = 2048.0f;
COMPILER_STRIP_GATE(0x806B5E90, &lit_6726);
#pragma pop

/* 806B5E94-806B5E98 0001C0 0004+00 0/1 0/0 0/0 .rodata          @6727 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6727 = 6144.0f;
COMPILER_STRIP_GATE(0x806B5E94, &lit_6727);
#pragma pop

/* 806B5E98-806B5E9C 0001C4 0004+00 0/1 0/0 0/0 .rodata          @6728 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6728 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x806B5E98, &lit_6728);
#pragma pop

/* 806B5E9C-806B5EA0 0001C8 0004+00 0/1 0/0 0/0 .rodata          @6729 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6729 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x806B5E9C, &lit_6729);
#pragma pop

/* 806B5EA0-806B5EA4 0001CC 0004+00 0/1 0/0 0/0 .rodata          @6730 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6730 = 80.0f;
COMPILER_STRIP_GATE(0x806B5EA0, &lit_6730);
#pragma pop

/* 806B5EA4-806B5EA8 0001D0 0004+00 0/1 0/0 0/0 .rodata          @6731 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6731 = 2.0f;
COMPILER_STRIP_GATE(0x806B5EA4, &lit_6731);
#pragma pop

/* 806B5EA8-806B5EAC 0001D4 0004+00 1/2 0/0 0/0 .rodata          @6732 */
SECTION_RODATA static f32 const lit_6732 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x806B5EA8, &lit_6732);

/* 806B5EAC-806B5EB0 0001D8 0004+00 0/1 0/0 0/0 .rodata          @6733 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6733 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x806B5EAC, &lit_6733);
#pragma pop

/* 806B40D8-806B4724 0068B8 064C+00 1/1 0/0 0/0 .text            calcBoxAndTuba__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::calcBoxAndTuba() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/calcBoxAndTuba__8daE_DT_cFv.s"
}
#pragma pop

/* 806B4724-806B49F0 006F04 02CC+00 2/1 0/0 0/0 .text            action__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::action() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/action__8daE_DT_cFv.s"
}
#pragma pop

/* 806B49F0-806B4B24 0071D0 0134+00 1/1 0/0 0/0 .text            mtx_set__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::mtx_set() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/mtx_set__8daE_DT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5EB0-806B5EB4 0001DC 0004+00 0/1 0/0 0/0 .rodata          @6949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6949 = 510.0f;
COMPILER_STRIP_GATE(0x806B5EB0, &lit_6949);
#pragma pop

/* 806B5EB4-806B5EB8 0001E0 0004+00 0/1 0/0 0/0 .rodata          @6950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6950 = 360.0f;
COMPILER_STRIP_GATE(0x806B5EB4, &lit_6950);
#pragma pop

/* 806B5EB8-806B5EBC 0001E4 0004+00 0/1 0/0 0/0 .rodata          @6951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6951 = 370.0f;
COMPILER_STRIP_GATE(0x806B5EB8, &lit_6951);
#pragma pop

/* 806B5EBC-806B5EC0 0001E8 0004+00 0/1 0/0 0/0 .rodata          @6952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6952 = 220.0f;
COMPILER_STRIP_GATE(0x806B5EBC, &lit_6952);
#pragma pop

/* 806B4B24-806B4FD8 007304 04B4+00 1/1 0/0 0/0 .text            cc_set__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::cc_set() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/cc_set__8daE_DT_cFv.s"
}
#pragma pop

/* 806B4FD8-806B5130 0077B8 0158+00 1/1 0/0 0/0 .text            execute__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::execute() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/execute__8daE_DT_cFv.s"
}
#pragma pop

/* 806B5130-806B5150 007910 0020+00 2/1 0/0 0/0 .text            daE_DT_Execute__FP8daE_DT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_DT_Execute(daE_DT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/daE_DT_Execute__FP8daE_DT_c.s"
}
#pragma pop

/* 806B5150-806B5158 007930 0008+00 1/0 0/0 0/0 .text            daE_DT_IsDelete__FP8daE_DT_c */
static bool daE_DT_IsDelete(daE_DT_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 806B5ED0-806B5ED0 0001FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806B5ED5 = "Dalways";
SECTION_DEAD static char const* const stringBase_806B5EDD = "E_OT";
#pragma pop

/* 806B5158-806B51F4 007938 009C+00 1/1 0/0 0/0 .text            _delete__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::_delete() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/_delete__8daE_DT_cFv.s"
}
#pragma pop

/* 806B51F4-806B5214 0079D4 0020+00 1/0 0/0 0/0 .text            daE_DT_Delete__FP8daE_DT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_DT_Delete(daE_DT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/daE_DT_Delete__FP8daE_DT_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5ED0-806B5ED0 0001FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806B5EE2 = "BoxB.bmd";
#pragma pop

/* 806B5214-806B5440 0079F4 022C+00 1/1 0/0 0/0 .text            CreateHeap__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/CreateHeap__8daE_DT_cFv.s"
}
#pragma pop

/* 806B5440-806B5460 007C20 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B5EC0-806B5EC4 0001EC 0004+00 0/1 0/0 0/0 .rodata          @7217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7217 = -700.0f;
COMPILER_STRIP_GATE(0x806B5EC0, &lit_7217);
#pragma pop

/* 806B5EC4-806B5EC8 0001F0 0004+00 0/1 0/0 0/0 .rodata          @7218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7218 = -200.0f;
COMPILER_STRIP_GATE(0x806B5EC4, &lit_7218);
#pragma pop

/* 806B5EC8-806B5ECC 0001F4 0004+00 0/1 0/0 0/0 .rodata          @7219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7219 = 500.0f;
COMPILER_STRIP_GATE(0x806B5EC8, &lit_7219);
#pragma pop

/* 806B5ECC-806B5ED0 0001F8 0004+00 0/1 0/0 0/0 .rodata          @7220 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7220 = -800.0f;
COMPILER_STRIP_GATE(0x806B5ECC, &lit_7220);
#pragma pop

/* 806B5460-806B592C 007C40 04CC+00 1/1 0/0 0/0 .text            create__8daE_DT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_DT_c::create() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/create__8daE_DT_cFv.s"
}
#pragma pop

/* 806B592C-806B59F8 00810C 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::~dCcD_Sph() {
extern "C" asm void __dt__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 806B59F8-806B5A7C 0081D8 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::dCcD_Sph() {
extern "C" asm void __ct__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 806B5A7C-806B5AC4 00825C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 806B5AC4-806B5B0C 0082A4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 806B5B0C-806B5B7C 0082EC 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 806B5B7C-806B5B80 00835C 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" asm void __ct__5csXyzFv() {
    /* empty function */
}

/* 806B5B80-806B5BBC 008360 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__5csXyzFv.s"
}
#pragma pop

/* 806B5BBC-806B5BDC 00839C 0020+00 1/0 0/0 0/0 .text            daE_DT_Create__FP8daE_DT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_DT_Create(daE_DT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/daE_DT_Create__FP8daE_DT_c.s"
}
#pragma pop

/* 806B5BDC-806B5C24 0083BC 0048+00 2/1 0/0 0/0 .text            __dt__12daE_DT_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_DT_HIO_c::~daE_DT_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__dt__12daE_DT_HIO_cFv.s"
}
#pragma pop

/* 806B5C24-806B5C7C 008404 0058+00 0/0 1/0 0/0 .text            __sinit_d_a_e_dt_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_dt_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/__sinit_d_a_e_dt_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x806B5C24, __sinit_d_a_e_dt_cpp);
#pragma pop

/* 806B5C7C-806B5C84 00845C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_806B5C7C() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/func_806B5C7C.s"
}
#pragma pop

/* 806B5C84-806B5C8C 008464 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_806B5C84() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/func_806B5C84.s"
}
#pragma pop

/* 806B5C8C-806B5CC0 00846C 0034+00 1/1 0/0 0/0 .text            Bank__9dCamera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCamera_c::Bank() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dt/d_a_e_dt/Bank__9dCamera_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806B634C-806B6350 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_806B634C[4];
#pragma pop

/* 806B6350-806B6354 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_806B6350[4];
#pragma pop

/* 806B6354-806B6358 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_806B6354[4];
#pragma pop

/* 806B6358-806B635C 000100 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_806B6358[4];
#pragma pop

/* 806B635C-806B6360 000104 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806B635C[4];
#pragma pop

/* 806B6360-806B6364 000108 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806B6360[4];
#pragma pop

/* 806B6364-806B6368 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_806B6364[4];
#pragma pop

/* 806B6368-806B636C 000110 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_806B6368[4];
#pragma pop

/* 806B636C-806B6370 000114 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_806B636C[4];
#pragma pop

/* 806B6370-806B6374 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_806B6370[4];
#pragma pop

/* 806B6374-806B6378 00011C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_806B6374[4];
#pragma pop

/* 806B6378-806B637C 000120 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_806B6378[4];
#pragma pop

/* 806B637C-806B6380 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_806B637C[4];
#pragma pop

/* 806B6380-806B6384 000128 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806B6380[4];
#pragma pop

/* 806B6384-806B6388 00012C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_806B6384[4];
#pragma pop

/* 806B6388-806B638C 000130 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_806B6388[4];
#pragma pop

/* 806B638C-806B6390 000134 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_806B638C[4];
#pragma pop

/* 806B6390-806B6394 000138 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_806B6390[4];
#pragma pop

/* 806B6394-806B6398 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_806B6394[4];
#pragma pop

/* 806B6398-806B639C 000140 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_806B6398[4];
#pragma pop

/* 806B639C-806B63A0 000144 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_806B639C[4];
#pragma pop

/* 806B63A0-806B63A4 000148 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806B63A0[4];
#pragma pop

/* 806B63A4-806B63A8 00014C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806B63A4[4];
#pragma pop

/* 806B63A8-806B63AC 000150 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806B63A8[4];
#pragma pop

/* 806B63AC-806B63B0 000154 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_806B63AC[4];
#pragma pop

/* 806B5ED0-806B5ED0 0001FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
