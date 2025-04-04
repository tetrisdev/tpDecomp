/**
 * @file d_a_b_gg.cpp
 * 
*/

#include "d/actor/d_a_b_gg.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" void __ct__12daB_GG_HIO_cFv();
extern "C" void CreateHeap__8daB_GG_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void initCc__8daB_GG_cFv();
extern "C" void setCcCylinder__8daB_GG_cFv();
extern "C" void G_setCcCylinder__8daB_GG_cFv();
extern "C" void MoveCo__8daB_GG_cFv();
extern "C" void ctrlJoint__8daB_GG_cFP8J3DJointP8J3DModel();
extern "C" static void JointCallBack__FP8J3DJointi();
extern "C" void HeadctrlJoint__8daB_GG_cFP8J3DJointP8J3DModel();
extern "C" static void HeadJointCallBack__FP8J3DJointi();
extern "C" void SetAnm__8daB_GG_cFiiff();
extern "C" static void way_bg_check2__FP8daB_GG_c4cXyz4cXyz();
extern "C" static void roofchk__FP8daB_GG_c();
extern "C" static void other_bg_check__FP8daB_GG_cP10fopAc_ac_c();
extern "C" static void Hanekaeri__FP8daB_GG_c4cXyz4cXyzf();
extern "C" void Yazirushi__8daB_GG_cFv();
extern "C" void SpeedClear__8daB_GG_cFv();
extern "C" void SetAction__8daB_GG_cFUcUcUc();
extern "C" void GetAction__8daB_GG_cFUcUcUc();
extern "C" void DemoSkip__8daB_GG_cFi();
extern "C" void DemoSkipCallBack__8daB_GG_cFPvi();
extern "C" void CameraSet__8daB_GG_cFv();
extern "C" void SetStopingCam__8daB_GG_cFv();
extern "C" void SetStopCam__8daB_GG_cF4cXyzffs();
extern "C" void SetMoveCam__8daB_GG_cF4cXyzffsff();
extern "C" void SetMoveCam1__8daB_GG_cFff();
extern "C" void SetReleaseCam__8daB_GG_cFv();
extern "C" void St_CamAction__8daB_GG_cFv();
extern "C" void St_DemoAction__8daB_GG_cFv();
extern "C" void Md_CamAction__8daB_GG_cFv();
extern "C" void Md_DemoAction__8daB_GG_cFv();
extern "C" void Gn_CamAction__8daB_GG_cFv();
extern "C" void Gn_DemoAction__8daB_GG_cFv();
extern "C" void DemoAction__8daB_GG_cFv();
extern "C" void F_WaitAction__8daB_GG_cFv();
extern "C" void F_FookChk__8daB_GG_cFv();
extern "C" void F_MoveAction__8daB_GG_cFv();
extern "C" void F_LV7_W_MoveAction__8daB_GG_cFv();
extern "C" void F_AttackAction__8daB_GG_cFv();
extern "C" void F_DamageAction__8daB_GG_cFv();
extern "C" void AttentionChk__8daB_GG_cFv();
extern "C" void FlyAction__8daB_GG_cFv();
extern "C" void F_A_TargetMove__8daB_GG_cF4cXyzUc();
extern "C" void F_A_TargetMove__8daB_GG_cF4cXyz();
extern "C" void F_A_MoveAction__8daB_GG_cFv();
extern "C" void F_A_WaitAction__8daB_GG_cFv();
extern "C" void F_A_Action__8daB_GG_cFv();
extern "C" void FookChk__8daB_GG_cFv();
extern "C" void CutChk__8daB_GG_cFv();
extern "C" void G_MoveAction__8daB_GG_cFv();
extern "C" void FallChk__8daB_GG_cFv();
extern "C" void G_AttackAction__8daB_GG_cFv();
extern "C" void G_DamageAction__8daB_GG_cFv();
extern "C" void G_DeathAction__8daB_GG_cFv();
extern "C" void G_DeathAction1__8daB_GG_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void DeathCam__8daB_GG_cFv();
extern "C" void GroundAction__8daB_GG_cFv();
extern "C" void StopAction__8daB_GG_cFv();
extern "C" void HitChk__8daB_GG_cFv();
extern "C" void Action__8daB_GG_cFv();
extern "C" void HeadAction__8daB_GG_cFv();
extern "C" void SetHeadAngle__8daB_GG_cFv();
extern "C" void SoundChk__8daB_GG_cFv();
extern "C" void Execute__8daB_GG_cFv();
extern "C" void ObjHit__8daB_GG_cFv();
extern "C" void At_Check__8daB_GG_cFv();
extern "C" void MoveAt__8daB_GG_cFv();
extern "C" void F_AtHit__8daB_GG_cFv();
extern "C" void ChanceTime__8daB_GG_cFv();
extern "C" void ArmAngleSet__8daB_GG_cFv();
extern "C" void Guard__8daB_GG_cFv();
extern "C" void Draw__8daB_GG_cFv();
extern "C" void Delete__8daB_GG_cFv();
extern "C" void setBaseMtx__8daB_GG_cFv();
extern "C" void setShieldMtx__8daB_GG_cFv();
extern "C" void setSwordMtx__8daB_GG_cFv();
extern "C" void setSwordMtx1__8daB_GG_cFv();
extern "C" void setHeadMtx__8daB_GG_cFv();
extern "C" void setHeadMtx1__8daB_GG_cFv();
extern "C" static void daB_GG_Draw__FP8daB_GG_c();
extern "C" static void daB_GG_Execute__FP8daB_GG_c();
extern "C" static bool daB_GG_IsDelete__FP8daB_GG_c();
extern "C" static void daB_GG_Delete__FP8daB_GG_c();
extern "C" void Create__8daB_GG_cFv();
extern "C" void __ct__8daB_GG_cFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static void daB_GG_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daB_GG_HIO_cFv();
extern "C" void __sinit_d_a_b_gg_cpp();
extern "C" static void func_805ECBEC();
extern "C" static void func_805ECBF4();
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const d_a_b_gg__stringBase0;

//
// External References:
//

extern "C" void onBlure__13mDoGph_gInf_cFv();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void checkMasterSwordEquip__9daPy_py_cFv();
extern "C" void cancelBoomerangLockActor__9daPy_py_cFP10fopAc_ac_c();
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
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
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
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 mBlureFlag__13mDoGph_gInf_c[4];
extern "C" extern u8 struct_80450C98[4];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 805ED08C-805ED090 00002C 0004+00 0/4 0/0 0/0 .rodata          @3932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3932 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED08C, &lit_3932);
#pragma pop

/* 805ED090-805ED094 000030 0004+00 0/4 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3933 = 3.0f;
COMPILER_STRIP_GATE(0x805ED090, &lit_3933);
#pragma pop

/* 805ED094-805ED098 000034 0004+00 1/8 0/0 0/0 .rodata          @3934 */
SECTION_RODATA static f32 const lit_3934 = 0.5f;
COMPILER_STRIP_GATE(0x805ED094, &lit_3934);

/* 805ED428-805ED47C -00001 0054+00 1/1 0/0 0/0 .data            @5037 */
SECTION_DATA static void* lit_5037[21] = {
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x88),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x264),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x2B8),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x3DC),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x46C),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x668),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x868),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x8C4),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x924),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xA70),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0x160),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xC40),
    (void*)(((char*)St_CamAction__8daB_GG_cFv) + 0xA80),
};

/* 805ED47C-805ED498 -00001 001C+00 1/1 0/0 0/0 .data            @5652 */
SECTION_DATA static void* lit_5652[7] = {
    (void*)(((char*)Gn_CamAction__8daB_GG_cFv) + 0x50),
    (void*)(((char*)Gn_CamAction__8daB_GG_cFv) + 0xB4),
    (void*)(((char*)Gn_CamAction__8daB_GG_cFv) + 0x164),
    (void*)(((char*)Gn_CamAction__8daB_GG_cFv) + 0x2A4),
    (void*)(((char*)Gn_CamAction__8daB_GG_cFv) + 0x394),
    (void*)(((char*)Gn_CamAction__8daB_GG_cFv) + 0x3BC),
    (void*)(((char*)Gn_CamAction__8daB_GG_cFv) + 0x4EC),
};

/* 805ED498-805ED4D0 -00001 0038+00 1/1 0/0 0/0 .data            @6629 */
SECTION_DATA static void* lit_6629[14] = {
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x58),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x94),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0xD8),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x864),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x864),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x864),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x864),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x864),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x864),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x864),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x140),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x364),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x584),
    (void*)(((char*)F_DamageAction__8daB_GG_cFv) + 0x768),
};

/* 805ED4D0-805ED4FC -00001 002C+00 1/1 0/0 0/0 .data            @7820 */
SECTION_DATA static void* lit_7820[11] = {
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x84),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x474),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x524),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x738),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x86C),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x988),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x988),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x988),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x988),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x988),
    (void*)(((char*)G_DamageAction__8daB_GG_cFv) + 0x938),
};

/* 805ED4FC-805ED56C -00001 0070+00 1/1 0/0 0/0 .data            @8743 */
SECTION_DATA static void* lit_8743[28] = {
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x48),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x100),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x1A8),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x1F0),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x238),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x298),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x2DC),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x324),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x3B0),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x43C),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x4C8),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x510),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x5E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x628),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x7E4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x670),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x6B4),
    (void*)(((char*)SoundChk__8daB_GG_cFv) + 0x714),
};

/* 805ED56C-805ED5E0 -00001 0074+00 1/1 0/0 0/0 .data            @9091 */
SECTION_DATA static void* lit_9091[29] = {
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x34),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x48),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x54),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x48),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x54),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x54),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x34),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x48),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x64),
    (void*)(((char*)ArmAngleSet__8daB_GG_cFv) + 0x34),
};

/* 805ED5E0-805ED600 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_GG_Method */
static actor_method_class l_daB_GG_Method = {
    (process_method_func)daB_GG_Create__FP10fopAc_ac_c,
    (process_method_func)daB_GG_Delete__FP8daB_GG_c,
    (process_method_func)daB_GG_Execute__FP8daB_GG_c,
    (process_method_func)daB_GG_IsDelete__FP8daB_GG_c,
    (process_method_func)daB_GG_Draw__FP8daB_GG_c,
};

/* 805ED600-805ED630 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_GG */
extern actor_process_profile_definition g_profile_B_GG = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_GG,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daB_GG_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  230,                    // mPriority
  &l_daB_GG_Method,       // sub_method
  0x000C0100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 805ED630-805ED63C 000240 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 805ED63C-805ED648 00024C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 805ED648-805ED654 000258 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 805ED654-805ED678 000264 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805ECBF4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805ECBEC,
};

/* 805ED678-805ED684 000288 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 805ED684-805ED690 000294 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 805ED690-805ED69C 0002A0 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 805ED69C-805ED6A8 0002AC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 805ED6A8-805ED6B4 0002B8 000C+00 2/2 0/0 0/0 .data            __vt__12daB_GG_HIO_c */
SECTION_DATA extern void* __vt__12daB_GG_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_GG_HIO_cFv,
};

/* 805DE40C-805DE464 0000EC 0058+00 1/1 0/0 0/0 .text            __ct__12daB_GG_HIO_cFv */
daB_GG_HIO_c::daB_GG_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED3D4-805ED3D4 000374 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805ED3D4 = "B_gg";
#pragma pop

/* 805DE464-805DE630 000144 01CC+00 1/1 0/0 0/0 .text            CreateHeap__8daB_GG_cFv */
void daB_GG_c::CreateHeap() {
    // NONMATCHING
}

/* 805DE630-805DE650 000310 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED098-805ED0DC 000038 0044+00 0/1 0/0 0/0 .rodata          ccCylSrc$3979 */
#pragma push
#pragma force_active on
const static dCcD_SrcCyl ccCylSrc = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0x3}, {0xd8fbbdff, 0x43}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x2, 0x0, 0x0, 0x1}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        130.0f, // mRadius
        200.0f // mHeight
    } // mCyl
};
#pragma pop

/* 805ED0DC-805ED120 00007C 0044+00 0/1 0/0 0/0 .rodata          ccHookSrc$3980 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const ccHookSrc[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x43, 0x02, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805ED0DC, &ccHookSrc);
#pragma pop

/* 805ED120-805ED160 0000C0 0040+00 0/1 0/0 0/0 .rodata          ccShieldSphSrc$3981 */
#pragma push
#pragma force_active on
const static dCcD_SrcSph ccShieldSphSrc = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0x0}, {0xd8fbbdff, 0x3}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 50.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 805ED160-805ED1A0 000100 0040+00 0/1 0/0 0/0 .rodata          ccSphSrc$3982 */
#pragma push
#pragma force_active on
const static dCcD_SrcSph ccSphSrc = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0xd}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_SWORD, 0x0, 0x7, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x1}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 50.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 805DE650-805DE7A4 000330 0154+00 1/1 0/0 0/0 .text            initCc__8daB_GG_cFv */
void daB_GG_c::initCc() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1A0-805ED1A8 000140 0004+04 0/10 0/0 0/0 .rodata          @4064 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4064[1 + 1 /* padding */] = {
    50.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x805ED1A0, &lit_4064);
#pragma pop

/* 805ED1A8-805ED1B0 000148 0008+00 3/10 0/0 0/0 .rodata          @4066 */
SECTION_RODATA static u8 const lit_4066[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805ED1A8, &lit_4066);

/* 805ED6C0-805ED6C4 000008 0001+03 14/14 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 805ED6C4-805ED6C8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 805ED6C8-805ED6CC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 805ED6CC-805ED6D0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 805ED6D0-805ED6D4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 805ED6D4-805ED6D8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 805ED6D8-805ED6DC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 805ED6DC-805ED6E0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 805ED6E0-805ED6E4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 805ED6E4-805ED6E8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 805ED6E8-805ED6EC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 805ED6EC-805ED6F0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 805ED6F0-805ED6F4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 805ED6F4-805ED6F8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 805ED6F8-805ED6FC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 805ED6FC-805ED700 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 805ED6FC 0001+00 data_805ED6FC @1009 */
/* 805ED6FD 0003+00 data_805ED6FD None */
static u8 struct_805ED6FC[4];

/* 805ED700-805ED70C 000048 000C+00 0/1 0/0 0/0 .bss             @3927 */
#pragma push
#pragma force_active on
static u8 lit_3927[12];
#pragma pop

/* 805ED70C-805ED728 000054 001C+00 4/9 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[28];

/* 805DE7A4-805DE9B8 000484 0214+00 1/1 0/0 0/0 .text            setCcCylinder__8daB_GG_cFv */
void daB_GG_c::setCcCylinder() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1B0-805ED1B4 000150 0004+00 1/5 0/0 0/0 .rodata          @4089 */
SECTION_RODATA static f32 const lit_4089 = 150.0f;
COMPILER_STRIP_GATE(0x805ED1B0, &lit_4089);

/* 805DE9B8-805DEAD0 000698 0118+00 1/1 0/0 0/0 .text            G_setCcCylinder__8daB_GG_cFv */
void daB_GG_c::G_setCcCylinder() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1B4-805ED1B8 000154 0004+00 2/6 0/0 0/0 .rodata          @4100 */
SECTION_RODATA static f32 const lit_4100 = 10000.0f;
COMPILER_STRIP_GATE(0x805ED1B4, &lit_4100);

/* 805DEAD0-805DEB44 0007B0 0074+00 1/1 0/0 0/0 .text            MoveCo__8daB_GG_cFv */
void daB_GG_c::MoveCo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1B8-805ED1BC 000158 0004+00 1/1 0/0 0/0 .rodata          @4147 */
SECTION_RODATA static f32 const lit_4147 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x805ED1B8, &lit_4147);

/* 805ED1BC-805ED1C0 00015C 0004+00 1/1 0/0 0/0 .rodata          @4148 */
SECTION_RODATA static f32 const lit_4148 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x805ED1BC, &lit_4148);

/* 805DEB44-805DED0C 000824 01C8+00 1/1 0/0 0/0 .text ctrlJoint__8daB_GG_cFP8J3DJointP8J3DModel */
void daB_GG_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    // NONMATCHING
}

/* 805DED0C-805DED58 0009EC 004C+00 1/1 0/0 0/0 .text            JointCallBack__FP8J3DJointi */
static void JointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 805DED58-805DEF18 000A38 01C0+00 1/1 0/0 0/0 .text
 * HeadctrlJoint__8daB_GG_cFP8J3DJointP8J3DModel                */
void daB_GG_c::HeadctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    // NONMATCHING
}

/* 805DEF18-805DEF64 000BF8 004C+00 1/1 0/0 0/0 .text            HeadJointCallBack__FP8J3DJointi */
static void HeadJointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1C0-805ED1C4 000160 0004+00 1/5 0/0 0/0 .rodata          @4220 */
SECTION_RODATA static f32 const lit_4220 = -1.0f;
COMPILER_STRIP_GATE(0x805ED1C0, &lit_4220);

/* 805DEF64-805DF010 000C44 00AC+00 15/15 0/0 0/0 .text            SetAnm__8daB_GG_cFiiff */
void daB_GG_c::SetAnm(int param_0, int param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1C4-805ED1C8 000164 0004+00 1/4 0/0 0/0 .rodata          @4250 */
SECTION_RODATA static f32 const lit_4250 = 30.0f;
COMPILER_STRIP_GATE(0x805ED1C4, &lit_4250);

/* 805DF010-805DF0B8 000CF0 00A8+00 1/1 0/0 0/0 .text way_bg_check2__FP8daB_GG_c4cXyz4cXyz */
static void way_bg_check2(daB_GG_c* param_0, cXyz param_1, cXyz param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1C8-805ED1CC 000168 0004+00 0/7 0/0 0/0 .rodata          @4251 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4251 = 300.0f;
COMPILER_STRIP_GATE(0x805ED1C8, &lit_4251);
#pragma pop

/* 805ED1CC-805ED1D0 00016C 0004+00 1/2 0/0 0/0 .rodata          @4291 */
SECTION_RODATA static f32 const lit_4291 = 700.0f;
COMPILER_STRIP_GATE(0x805ED1CC, &lit_4291);

/* 805DF0B8-805DF178 000D98 00C0+00 1/1 0/0 0/0 .text            roofchk__FP8daB_GG_c */
static void roofchk(daB_GG_c* param_0) {
    // NONMATCHING
}

/* 805DF178-805DF250 000E58 00D8+00 2/2 0/0 0/0 .text other_bg_check__FP8daB_GG_cP10fopAc_ac_c */
static void other_bg_check(daB_GG_c* param_0, fopAc_ac_c* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1D0-805ED1D4 000170 0004+00 0/1 0/0 0/0 .rodata          @4320 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4320 = 800.0f;
COMPILER_STRIP_GATE(0x805ED1D0, &lit_4320);
#pragma pop

/* 805ED1D4-805ED1D8 000174 0004+00 0/4 0/0 0/0 .rodata          @4530 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4530 = 2.0f;
COMPILER_STRIP_GATE(0x805ED1D4, &lit_4530);
#pragma pop

/* 805DF250-805DF9F4 000F30 07A4+00 1/1 0/0 0/0 .text            Hanekaeri__FP8daB_GG_c4cXyz4cXyzf
 */
static void Hanekaeri(daB_GG_c* param_0, cXyz param_1, cXyz param_2, f32 param_3) {
    // NONMATCHING
}

/* 805DF9F4-805DFA48 0016D4 0054+00 1/1 0/0 0/0 .text            Yazirushi__8daB_GG_cFv */
void daB_GG_c::Yazirushi() {
    // NONMATCHING
}

/* 805DFA48-805DFA64 001728 001C+00 8/8 0/0 0/0 .text            SpeedClear__8daB_GG_cFv */
void daB_GG_c::SpeedClear() {
    // NONMATCHING
}

/* 805DFA64-805DFA8C 001744 0028+00 13/13 0/0 0/0 .text            SetAction__8daB_GG_cFUcUcUc */
void daB_GG_c::SetAction(u8 param_0, u8 param_1, u8 param_2) {
    // NONMATCHING
}

/* 805DFA8C-805DFACC 00176C 0040+00 1/1 0/0 0/0 .text            GetAction__8daB_GG_cFUcUcUc */
void daB_GG_c::GetAction(u8 param_0, u8 param_1, u8 param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1D8-805ED1DC 000178 0004+00 0/6 0/0 0/0 .rodata          @4585 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4585 = 200.0f;
COMPILER_STRIP_GATE(0x805ED1D8, &lit_4585);
#pragma pop

/* 805ED1DC-805ED1E0 00017C 0004+00 0/2 0/0 0/0 .rodata          @4586 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4586 = 5930.0f;
COMPILER_STRIP_GATE(0x805ED1DC, &lit_4586);
#pragma pop

/* 805ED1E0-805ED1E4 000180 0004+00 0/2 0/0 0/0 .rodata          @4587 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4587 = 3157.0f;
COMPILER_STRIP_GATE(0x805ED1E0, &lit_4587);
#pragma pop

/* 805ED1E4-805ED1E8 000184 0004+00 0/2 0/0 0/0 .rodata          @4588 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4588 = 6993.0f;
COMPILER_STRIP_GATE(0x805ED1E4, &lit_4588);
#pragma pop

/* 805ED728-805ED72C 000070 0004+00 4/7 0/0 0/0 .bss             s_dis__22@unnamed@d_a_b_gg_cpp@ */
static u8 data_805ED728[4];

/* 805ED72C-805ED730 000074 0004+00 8/16 0/0 0/0 .bss s_LinkPos__22@unnamed@d_a_b_gg_cpp@ */
static u8 data_805ED72C[4];

/* 805ED730-805ED734 000078 0002+02 12/19 0/0 0/0 .bss s_TargetAngle__22@unnamed@d_a_b_gg_cpp@ */
static u8 data_805ED730[2 + 2 /* padding */];

/* 805DFACC-805DFC24 0017AC 0158+00 1/1 0/0 0/0 .text            DemoSkip__8daB_GG_cFi */
void daB_GG_c::DemoSkip(int param_0) {
    // NONMATCHING
}

/* 805DFC24-805DFC58 001904 0034+00 2/2 0/0 0/0 .text            DemoSkipCallBack__8daB_GG_cFPvi */
void daB_GG_c::DemoSkipCallBack(void* param_0, int param_1) {
    // NONMATCHING
}

/* 805DFC58-805DFD78 001938 0120+00 4/4 0/0 0/0 .text            CameraSet__8daB_GG_cFv */
void daB_GG_c::CameraSet() {
    // NONMATCHING
}

/* 805DFD78-805DFDFC 001A58 0084+00 2/2 0/0 0/0 .text            SetStopingCam__8daB_GG_cFv */
void daB_GG_c::SetStopingCam() {
    // NONMATCHING
}

/* 805DFDFC-805DFF4C 001ADC 0150+00 5/5 0/0 0/0 .text            SetStopCam__8daB_GG_cF4cXyzffs */
void daB_GG_c::SetStopCam(cXyz param_0, f32 param_1, f32 param_2, s16 param_3) {
    // NONMATCHING
}

/* 805DFF4C-805E00D4 001C2C 0188+00 2/2 0/0 0/0 .text            SetMoveCam__8daB_GG_cF4cXyzffsff */
void daB_GG_c::SetMoveCam(cXyz param_0, f32 param_1, f32 param_2, s16 param_3, f32 param_4,
                              f32 param_5) {
    // NONMATCHING
}

/* 805E00D4-805E01F8 001DB4 0124+00 4/4 0/0 0/0 .text            SetMoveCam1__8daB_GG_cFff */
void daB_GG_c::SetMoveCam1(f32 param_0, f32 param_1) {
    // NONMATCHING
}

/* 805E01F8-805E029C 001ED8 00A4+00 6/6 0/0 0/0 .text            SetReleaseCam__8daB_GG_cFv */
void daB_GG_c::SetReleaseCam() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1E8-805ED1EC 000188 0004+00 0/5 0/0 0/0 .rodata          @5006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5006 = -300.0f;
COMPILER_STRIP_GATE(0x805ED1E8, &lit_5006);
#pragma pop

/* 805ED1EC-805ED1F0 00018C 0004+00 0/5 0/0 0/0 .rodata          @5007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5007 = 1000.0f;
COMPILER_STRIP_GATE(0x805ED1EC, &lit_5007);
#pragma pop

/* 805ED1F0-805ED1F4 000190 0004+00 0/1 0/0 0/0 .rodata          @5008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5008 = 550.0f;
COMPILER_STRIP_GATE(0x805ED1F0, &lit_5008);
#pragma pop

/* 805E029C-805E0F2C 001F7C 0C90+00 2/1 0/0 0/0 .text            St_CamAction__8daB_GG_cFv */
void daB_GG_c::St_CamAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED1F4-805ED1F8 000194 0004+00 0/0 0/0 0/0 .rodata          @5009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5009 = 180.0f;
COMPILER_STRIP_GATE(0x805ED1F4, &lit_5009);
#pragma pop

/* 805ED1F8-805ED1FC 000198 0004+00 0/1 0/0 0/0 .rodata          @5010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5010 = 120.0f;
COMPILER_STRIP_GATE(0x805ED1F8, &lit_5010);
#pragma pop

/* 805ED1FC-805ED200 00019C 0004+00 0/0 0/0 0/0 .rodata          @5011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5011 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED1FC, &lit_5011);
#pragma pop

/* 805ED200-805ED204 0001A0 0004+00 0/3 0/0 0/0 .rodata          @5012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5012 = 60.0f;
COMPILER_STRIP_GATE(0x805ED200, &lit_5012);
#pragma pop

/* 805ED204-805ED208 0001A4 0004+00 0/2 0/0 0/0 .rodata          @5013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5013 = 40.0f;
COMPILER_STRIP_GATE(0x805ED204, &lit_5013);
#pragma pop

/* 805ED208-805ED20C 0001A8 0004+00 0/0 0/0 0/0 .rodata          @5014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5014 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x805ED208, &lit_5014);
#pragma pop

/* 805ED20C-805ED210 0001AC 0004+00 0/0 0/0 0/0 .rodata          @5015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5015 = -60.0f;
COMPILER_STRIP_GATE(0x805ED20C, &lit_5015);
#pragma pop

/* 805ED210-805ED214 0001B0 0004+00 0/0 0/0 0/0 .rodata          @5016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5016 = -110.0f;
COMPILER_STRIP_GATE(0x805ED210, &lit_5016);
#pragma pop

/* 805ED214-805ED218 0001B4 0004+00 0/0 0/0 0/0 .rodata          @5017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5017 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED214, &lit_5017);
#pragma pop

/* 805ED218-805ED21C 0001B8 0004+00 2/4 0/0 0/0 .rodata          @5018 */
SECTION_RODATA static f32 const lit_5018 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED218, &lit_5018);

/* 805ED21C-805ED220 0001BC 0004+00 0/0 0/0 0/0 .rodata          @5019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5019 = 110.0f;
COMPILER_STRIP_GATE(0x805ED21C, &lit_5019);
#pragma pop

/* 805ED220-805ED224 0001C0 0004+00 0/0 0/0 0/0 .rodata          @5020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5020 = -90.0f;
COMPILER_STRIP_GATE(0x805ED220, &lit_5020);
#pragma pop

/* 805ED224-805ED228 0001C4 0004+00 0/0 0/0 0/0 .rodata          @5021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5021 = -25.0f;
COMPILER_STRIP_GATE(0x805ED224, &lit_5021);
#pragma pop

/* 805ED228-805ED22C 0001C8 0004+00 0/1 0/0 0/0 .rodata          @5022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5022 = -20.0f;
COMPILER_STRIP_GATE(0x805ED228, &lit_5022);
#pragma pop

/* 805ED22C-805ED230 0001CC 0004+00 0/1 0/0 0/0 .rodata          @5023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5023 = -30.0f;
COMPILER_STRIP_GATE(0x805ED22C, &lit_5023);
#pragma pop

/* 805ED230-805ED234 0001D0 0004+00 0/1 0/0 0/0 .rodata          @5024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5024 = -10.0f;
COMPILER_STRIP_GATE(0x805ED230, &lit_5024);
#pragma pop

/* 805ED234-805ED238 0001D4 0004+00 0/0 0/0 0/0 .rodata          @5025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5025 = 25.0f;
COMPILER_STRIP_GATE(0x805ED234, &lit_5025);
#pragma pop

/* 805ED238-805ED23C 0001D8 0004+00 0/1 0/0 0/0 .rodata          @5026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5026 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x805ED238, &lit_5026);
#pragma pop

/* 805ED23C-805ED240 0001DC 0004+00 0/5 0/0 0/0 .rodata          @5027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5027 = 400.0f;
COMPILER_STRIP_GATE(0x805ED23C, &lit_5027);
#pragma pop

/* 805ED240-805ED244 0001E0 0004+00 0/2 0/0 0/0 .rodata          @5028 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5028 = 80.0f;
COMPILER_STRIP_GATE(0x805ED240, &lit_5028);
#pragma pop

/* 805ED244-805ED248 0001E4 0004+00 0/0 0/0 0/0 .rodata          @5029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5029 = -50.0f;
COMPILER_STRIP_GATE(0x805ED244, &lit_5029);
#pragma pop

/* 805ED248-805ED24C 0001E8 0004+00 0/1 0/0 0/0 .rodata          @5030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5030 = 250.0f;
COMPILER_STRIP_GATE(0x805ED248, &lit_5030);
#pragma pop

/* 805ED24C-805ED250 0001EC 0004+00 0/1 0/0 0/0 .rodata          @5031 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5031 = -200.0f;
COMPILER_STRIP_GATE(0x805ED24C, &lit_5031);
#pragma pop

/* 805ED250-805ED254 0001F0 0004+00 0/1 0/0 0/0 .rodata          @5032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5032 = 52.0f;
COMPILER_STRIP_GATE(0x805ED250, &lit_5032);
#pragma pop

/* 805ED254-805ED258 0001F4 0004+00 0/0 0/0 0/0 .rodata          @5033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5033 = -120.0f;
COMPILER_STRIP_GATE(0x805ED254, &lit_5033);
#pragma pop

/* 805ED258-805ED25C 0001F8 0004+00 0/0 0/0 0/0 .rodata          @5034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5034 = 3.5f;
COMPILER_STRIP_GATE(0x805ED258, &lit_5034);
#pragma pop

/* 805ED25C-805ED260 0001FC 0004+00 0/0 0/0 0/0 .rodata          @5035 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5035 = -80.0f;
COMPILER_STRIP_GATE(0x805ED25C, &lit_5035);
#pragma pop

/* 805ED260-805ED264 000200 0004+00 0/0 0/0 0/0 .rodata          @5036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5036 = 340.0f;
COMPILER_STRIP_GATE(0x805ED260, &lit_5036);
#pragma pop

/* 805ED264-805ED268 000204 0004+00 0/1 0/0 0/0 .rodata          @5245 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5245 = -400.0f;
COMPILER_STRIP_GATE(0x805ED264, &lit_5245);
#pragma pop

/* 805ED268-805ED26C 000208 0004+00 0/1 0/0 0/0 .rodata          @5246 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5246 = -250.0f;
COMPILER_STRIP_GATE(0x805ED268, &lit_5246);
#pragma pop

/* 805ED26C-805ED270 00020C 0004+00 0/18 0/0 0/0 .rodata          @5247 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5247 = 5.0f;
COMPILER_STRIP_GATE(0x805ED26C, &lit_5247);
#pragma pop

/* 805ED270-805ED274 000210 0004+00 0/3 0/0 0/0 .rodata          @5248 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5248 = 600.0f;
COMPILER_STRIP_GATE(0x805ED270, &lit_5248);
#pragma pop

/* 805ED274-805ED278 000214 0004+00 0/1 0/0 0/0 .rodata          @5249 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5249 = -150.0f;
COMPILER_STRIP_GATE(0x805ED274, &lit_5249);
#pragma pop

/* 805ED278-805ED27C 000218 0004+00 0/2 0/0 0/0 .rodata          @5250 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5250 = -500.0f;
COMPILER_STRIP_GATE(0x805ED278, &lit_5250);
#pragma pop

/* 805ED27C-805ED280 00021C 0004+00 0/5 0/0 0/0 .rodata          @5251 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5251 = 500.0f;
COMPILER_STRIP_GATE(0x805ED27C, &lit_5251);
#pragma pop

/* 805ED280-805ED284 000220 0004+00 0/3 0/0 0/0 .rodata          @5252 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5252 = -5.0f;
COMPILER_STRIP_GATE(0x805ED280, &lit_5252);
#pragma pop

/* 805ED284-805ED288 000224 0004+00 0/1 0/0 0/0 .rodata          @5253 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5253 = 33.0f;
COMPILER_STRIP_GATE(0x805ED284, &lit_5253);
#pragma pop

/* 805E0F2C-805E18E8 002C0C 09BC+00 1/1 0/0 0/0 .text            St_DemoAction__8daB_GG_cFv */
void daB_GG_c::St_DemoAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED288-805ED28C 000228 0004+00 0/3 0/0 0/0 .rodata          @5315 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5315 = 217.0f;
COMPILER_STRIP_GATE(0x805ED288, &lit_5315);
#pragma pop

/* 805ED28C-805ED290 00022C 0004+00 0/5 0/0 0/0 .rodata          @5316 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5316 = -57.0f;
COMPILER_STRIP_GATE(0x805ED28C, &lit_5316);
#pragma pop

/* 805ED290-805ED294 000230 0004+00 0/2 0/0 0/0 .rodata          @5317 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5317 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED290, &lit_5317);
#pragma pop

/* 805ED734-805ED740 00007C 000C+00 0/1 0/0 0/0 .bss             @3935 */
#pragma push
#pragma force_active on
static u8 lit_3935[12];
#pragma pop

/* 805ED740-805ED74C 000088 000C+00 0/2 0/0 0/0 .bss s_centerpos__22@unnamed@d_a_b_gg_cpp@ */
#pragma push
#pragma force_active on
static u8 data_805ED740[12];
#pragma pop

/* 805ED74C-805ED750 -00001 0004+00 0/3 0/0 0/0 .bss             None */
#pragma push
#pragma force_active on
/* 805ED74C 0002+00 data_805ED74C s_M_Action__22@unnamed@d_a_b_gg_cpp@ */
/* 805ED74E 0002+00 data_805ED74E s_W_Action__22@unnamed@d_a_b_gg_cpp@ */
static u8 struct_805ED74C[4];
#pragma pop

/* 805ED750-805ED75C 000098 000C+00 0/1 0/0 0/0 .bss             @3936 */
#pragma push
#pragma force_active on
static u8 lit_3936[12];
#pragma pop

/* 805ED75C-805ED768 0000A4 000C+00 0/1 0/0 0/0 .bss             @3937 */
#pragma push
#pragma force_active on
static u8 lit_3937[12];
#pragma pop

/* 805ED768-805ED774 0000B0 000C+00 0/1 0/0 0/0 .bss             @3938 */
#pragma push
#pragma force_active on
static u8 lit_3938[12];
#pragma pop

/* 805ED774-805ED798 0000BC 0024+00 2/5 0/0 0/0 .bss             out_pos */
static u8 out_pos[36];

/* 805ED798-805ED7A4 0000E0 000C+00 0/1 0/0 0/0 .bss             @3939 */
#pragma push
#pragma force_active on
static u8 lit_3939[12];
#pragma pop

/* 805ED7A4-805ED7B0 0000EC 000C+00 0/1 0/0 0/0 .bss             @3940 */
#pragma push
#pragma force_active on
static u8 lit_3940[12];
#pragma pop

/* 805ED7B0-805ED7BC 0000F8 000C+00 0/1 0/0 0/0 .bss             @3941 */
#pragma push
#pragma force_active on
static u8 lit_3941[12];
#pragma pop

/* 805ED7BC-805ED7E0 000104 0024+00 1/7 0/0 0/0 .bss             in_pos */
static u8 in_pos[36];

/* 805E18E8-805E1C28 0035C8 0340+00 1/1 0/0 0/0 .text            Md_CamAction__8daB_GG_cFv */
void daB_GG_c::Md_CamAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED294-805ED298 000234 0004+00 0/3 0/0 0/0 .rodata          @5506 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5506 = 18.0f;
COMPILER_STRIP_GATE(0x805ED294, &lit_5506);
#pragma pop

/* 805ED298-805ED29C 000238 0004+00 1/2 0/0 0/0 .rodata          @5507 */
SECTION_RODATA static f32 const lit_5507 = 90.0f;
COMPILER_STRIP_GATE(0x805ED298, &lit_5507);

/* 805ED29C-805ED2A0 00023C 0004+00 0/3 0/0 0/0 .rodata          @5508 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5508 = -21.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED29C, &lit_5508);
#pragma pop

/* 805E1C28-805E23E8 003908 07C0+00 2/2 0/0 0/0 .text            Md_DemoAction__8daB_GG_cFv */
void daB_GG_c::Md_DemoAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED2A0-805ED2A4 000240 0004+00 0/2 0/0 0/0 .rodata          @5639 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5639 = -7853.0f;
COMPILER_STRIP_GATE(0x805ED2A0, &lit_5639);
#pragma pop

/* 805ED2A4-805ED2A8 000244 0004+00 0/1 0/0 0/0 .rodata          @5640 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5640 = 10535.0f;
COMPILER_STRIP_GATE(0x805ED2A4, &lit_5640);
#pragma pop

/* 805ED2A8-805ED2AC 000248 0004+00 0/2 0/0 0/0 .rodata          @5641 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5641 = 8619.0f;
COMPILER_STRIP_GATE(0x805ED2A8, &lit_5641);
#pragma pop

/* 805E23E8-805E2974 0040C8 058C+00 2/1 0/0 0/0 .text            Gn_CamAction__8daB_GG_cFv */
void daB_GG_c::Gn_CamAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED2AC-805ED2B0 00024C 0004+00 0/0 0/0 0/0 .rodata          @5642 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5642 = 4000.0f;
COMPILER_STRIP_GATE(0x805ED2AC, &lit_5642);
#pragma pop

/* 805ED2B0-805ED2B4 000250 0004+00 0/0 0/0 0/0 .rodata          @5643 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5643 = -4000.0f;
COMPILER_STRIP_GATE(0x805ED2B0, &lit_5643);
#pragma pop

/* 805ED2B4-805ED2B8 000254 0004+00 0/0 0/0 0/0 .rodata          @5644 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5644 = 6469.0f;
COMPILER_STRIP_GATE(0x805ED2B4, &lit_5644);
#pragma pop

/* 805ED2B8-805ED2BC 000258 0004+00 0/0 0/0 0/0 .rodata          @5645 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5645 = 6465.0f;
COMPILER_STRIP_GATE(0x805ED2B8, &lit_5645);
#pragma pop

/* 805ED2BC-805ED2C0 00025C 0004+00 0/0 0/0 0/0 .rodata          @5646 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5646 = 6133.0f;
COMPILER_STRIP_GATE(0x805ED2BC, &lit_5646);
#pragma pop

/* 805ED2C0-805ED2C4 000260 0004+00 0/1 0/0 0/0 .rodata          @5647 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5647 = -100.0f;
COMPILER_STRIP_GATE(0x805ED2C0, &lit_5647);
#pragma pop

/* 805ED2C4-805ED2C8 000264 0004+00 0/0 0/0 0/0 .rodata          @5648 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5648 = 1146.0f;
COMPILER_STRIP_GATE(0x805ED2C4, &lit_5648);
#pragma pop

/* 805ED2C8-805ED2CC 000268 0004+00 0/0 0/0 0/0 .rodata          @5649 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5649 = 4907.0f;
COMPILER_STRIP_GATE(0x805ED2C8, &lit_5649);
#pragma pop

/* 805ED2CC-805ED2D0 00026C 0004+00 0/0 0/0 0/0 .rodata          @5650 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5650 = 7269.0f;
COMPILER_STRIP_GATE(0x805ED2CC, &lit_5650);
#pragma pop

/* 805ED2D0-805ED2D4 000270 0004+00 0/9 0/0 0/0 .rodata          @5651 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5651 = 10.0f;
COMPILER_STRIP_GATE(0x805ED2D0, &lit_5651);
#pragma pop

/* 805ED2D4-805ED2D8 000274 0004+00 0/1 0/0 0/0 .rodata          @5779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5779 = 170.0f;
COMPILER_STRIP_GATE(0x805ED2D4, &lit_5779);
#pragma pop

/* 805ED2D8-805ED2DC 000278 0004+00 0/1 0/0 0/0 .rodata          @5780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5780 = 140.0f;
COMPILER_STRIP_GATE(0x805ED2D8, &lit_5780);
#pragma pop

/* 805ED2DC-805ED2E0 00027C 0004+00 0/2 0/0 0/0 .rodata          @5781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5781 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x805ED2DC, &lit_5781);
#pragma pop

/* 805ED2E0-805ED2E4 000280 0004+00 0/1 0/0 0/0 .rodata          @5782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5782 = 1400.0f;
COMPILER_STRIP_GATE(0x805ED2E0, &lit_5782);
#pragma pop

/* 805ED2E4-805ED2E8 000284 0004+00 0/1 0/0 0/0 .rodata          @5783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5783 = 900.0f;
COMPILER_STRIP_GATE(0x805ED2E4, &lit_5783);
#pragma pop

/* 805ED2E8-805ED2EC 000288 0004+00 1/5 0/0 0/0 .rodata          @5784 */
SECTION_RODATA static f32 const lit_5784 = 15.0f;
COMPILER_STRIP_GATE(0x805ED2E8, &lit_5784);

/* 805ED2EC-805ED2F0 00028C 0004+00 0/2 0/0 0/0 .rodata          @5785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5785 = -2.0f;
COMPILER_STRIP_GATE(0x805ED2EC, &lit_5785);
#pragma pop

/* 805E2974-805E2F44 004654 05D0+00 1/1 0/0 0/0 .text            Gn_DemoAction__8daB_GG_cFv */
void daB_GG_c::Gn_DemoAction() {
    // NONMATCHING
}

/* 805E2F44-805E3024 004C24 00E0+00 1/1 0/0 0/0 .text            DemoAction__8daB_GG_cFv */
void daB_GG_c::DemoAction() {
    // NONMATCHING
}

/* 805E3024-805E31E4 004D04 01C0+00 1/1 0/0 0/0 .text            F_WaitAction__8daB_GG_cFv */
void daB_GG_c::F_WaitAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED2F0-805ED2F4 000290 0004+00 0/3 0/0 0/0 .rodata          @5883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5883 = 1500.0f;
COMPILER_STRIP_GATE(0x805ED2F0, &lit_5883);
#pragma pop

/* 805ED2F4-805ED2F8 000294 0004+00 1/6 0/0 0/0 .rodata          @5884 */
SECTION_RODATA static f32 const lit_5884 = 20.0f;
COMPILER_STRIP_GATE(0x805ED2F4, &lit_5884);

/* 805ED2F8-805ED2FC 000298 0004+00 0/2 0/0 0/0 .rodata          @5885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5885 = 9.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED2F8, &lit_5885);
#pragma pop

/* 805ED2FC-805ED300 00029C 0004+00 0/1 0/0 0/0 .rodata          @5886 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5886 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED2FC, &lit_5886);
#pragma pop

/* 805E31E4-805E3448 004EC4 0264+00 2/2 0/0 0/0 .text            F_FookChk__8daB_GG_cFv */
void daB_GG_c::F_FookChk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED300-805ED304 0002A0 0004+00 1/2 0/0 0/0 .rodata          @6106 */
SECTION_RODATA static f32 const lit_6106 = 5000.0f;
COMPILER_STRIP_GATE(0x805ED300, &lit_6106);

/* 805ED304-805ED308 0002A4 0004+00 0/1 0/0 0/0 .rodata          @6107 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6107 = 1550.0f;
COMPILER_STRIP_GATE(0x805ED304, &lit_6107);
#pragma pop

/* 805ED308-805ED30C 0002A8 0004+00 0/3 0/0 0/0 .rodata          @6108 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6108 = 8.0f;
COMPILER_STRIP_GATE(0x805ED308, &lit_6108);
#pragma pop

/* 805ED30C-805ED310 0002AC 0004+00 0/1 0/0 0/0 .rodata          @6109 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6109 = -3.0f;
COMPILER_STRIP_GATE(0x805ED30C, &lit_6109);
#pragma pop

/* 805ED310-805ED314 0002B0 0004+00 0/4 0/0 0/0 .rodata          @6110 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6110 = 1200.0f;
COMPILER_STRIP_GATE(0x805ED310, &lit_6110);
#pragma pop

/* 805ED314-805ED318 0002B4 0004+00 0/2 0/0 0/0 .rodata          @6111 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6111 = -1200.0f;
COMPILER_STRIP_GATE(0x805ED314, &lit_6111);
#pragma pop

/* 805ED3D4-805ED3D4 000374 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805ED3D9 = "D_MN07";
#pragma pop

/* 805E3448-805E3CAC 005128 0864+00 1/1 0/0 0/0 .text            F_MoveAction__8daB_GG_cFv */
void daB_GG_c::F_MoveAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED318-805ED31C 0002B8 0004+00 0/1 0/0 0/0 .rodata          @6174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6174 = 2350.0f;
COMPILER_STRIP_GATE(0x805ED318, &lit_6174);
#pragma pop

/* 805E3CAC-805E3F0C 00598C 0260+00 1/1 0/0 0/0 .text            F_LV7_W_MoveAction__8daB_GG_cFv */
void daB_GG_c::F_LV7_W_MoveAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED31C-805ED320 0002BC 0004+00 0/4 0/0 0/0 .rodata          @6430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6430 = 70.0f;
COMPILER_STRIP_GATE(0x805ED31C, &lit_6430);
#pragma pop

/* 805E3F0C-805E4914 005BEC 0A08+00 1/1 0/0 0/0 .text            F_AttackAction__8daB_GG_cFv */
void daB_GG_c::F_AttackAction() {
    // NONMATCHING
}

/* 805E4914-805E5190 0065F4 087C+00 2/1 0/0 0/0 .text            F_DamageAction__8daB_GG_cFv */
void daB_GG_c::F_DamageAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED320-805ED324 0002C0 0004+00 0/0 0/0 0/0 .rodata          @6626 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6626 = -40.0f;
COMPILER_STRIP_GATE(0x805ED320, &lit_6626);
#pragma pop

/* 805ED324-805ED328 0002C4 0004+00 0/2 0/0 0/0 .rodata          @6627 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6627 = -9.0f;
COMPILER_STRIP_GATE(0x805ED324, &lit_6627);
#pragma pop

/* 805ED328-805ED32C 0002C8 0004+00 0/1 0/0 0/0 .rodata          @6628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6628 = 13.0f;
COMPILER_STRIP_GATE(0x805ED328, &lit_6628);
#pragma pop

/* 805ED32C-805ED330 0002CC 0004+00 1/3 0/0 0/0 .rodata          @6653 */
SECTION_RODATA static f32 const lit_6653 = 3000.0f;
COMPILER_STRIP_GATE(0x805ED32C, &lit_6653);

/* 805E5190-805E5220 006E70 0090+00 1/1 0/0 0/0 .text            AttentionChk__8daB_GG_cFv */
void daB_GG_c::AttentionChk() {
    // NONMATCHING
}

/* 805E5220-805E53DC 006F00 01BC+00 1/1 0/0 0/0 .text            FlyAction__8daB_GG_cFv */
void daB_GG_c::FlyAction() {
    // NONMATCHING
}

/* 805E53DC-805E561C 0070BC 0240+00 2/2 0/0 0/0 .text            F_A_TargetMove__8daB_GG_cF4cXyzUc
 */
void daB_GG_c::F_A_TargetMove(cXyz param_0, u8 param_1) {
    // NONMATCHING
}

/* 805E561C-805E5808 0072FC 01EC+00 2/2 0/0 0/0 .text            F_A_TargetMove__8daB_GG_cF4cXyz */
void daB_GG_c::F_A_TargetMove(cXyz param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED330-805ED334 0002D0 0004+00 0/1 0/0 0/0 .rodata          @6924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6924 = 29.0f / 10.0f;
COMPILER_STRIP_GATE(0x805ED330, &lit_6924);
#pragma pop

/* 805E5808-805E5D0C 0074E8 0504+00 1/1 0/0 0/0 .text            F_A_MoveAction__8daB_GG_cFv */
void daB_GG_c::F_A_MoveAction() {
    // NONMATCHING
}

/* 805E5D0C-805E5D2C 0079EC 0020+00 1/1 0/0 0/0 .text            F_A_WaitAction__8daB_GG_cFv */
void daB_GG_c::F_A_WaitAction() {
    // NONMATCHING
}

/* 805E5D2C-805E5E78 007A0C 014C+00 1/1 0/0 0/0 .text            F_A_Action__8daB_GG_cFv */
void daB_GG_c::F_A_Action() {
    // NONMATCHING
}

/* 805E5E78-805E608C 007B58 0214+00 2/2 0/0 0/0 .text            FookChk__8daB_GG_cFv */
void daB_GG_c::FookChk() {
    // NONMATCHING
}

/* 805E608C-805E6174 007D6C 00E8+00 2/2 0/0 0/0 .text            CutChk__8daB_GG_cFv */
void daB_GG_c::CutChk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED334-805ED338 0002D4 0004+00 0/2 0/0 0/0 .rodata          @7247 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7247 = 4.0f;
COMPILER_STRIP_GATE(0x805ED334, &lit_7247);
#pragma pop

/* 805E6174-805E6AB0 007E54 093C+00 1/1 0/0 0/0 .text            G_MoveAction__8daB_GG_cFv */
void daB_GG_c::G_MoveAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED338-805ED33C 0002D8 0004+00 0/2 0/0 0/0 .rodata          @7347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7347 = 1.5f;
COMPILER_STRIP_GATE(0x805ED338, &lit_7347);
#pragma pop

/* 805E6AB0-805E6E30 008790 0380+00 2/2 0/0 0/0 .text            FallChk__8daB_GG_cFv */
void daB_GG_c::FallChk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED33C-805ED340 0002DC 0004+00 0/1 0/0 0/0 .rodata          @7534 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7534 = 37.0f;
COMPILER_STRIP_GATE(0x805ED33C, &lit_7534);
#pragma pop

/* 805ED340-805ED344 0002E0 0004+00 0/1 0/0 0/0 .rodata          @7535 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7535 = 11.0f;
COMPILER_STRIP_GATE(0x805ED340, &lit_7535);
#pragma pop

/* 805E6E30-805E73A8 008B10 0578+00 1/1 0/0 0/0 .text            G_AttackAction__8daB_GG_cFv */
void daB_GG_c::G_AttackAction() {
    // NONMATCHING
}

/* 805E73A8-805E7D50 009088 09A8+00 2/1 0/0 0/0 .text            G_DamageAction__8daB_GG_cFv */
void daB_GG_c::G_DamageAction() {
    // NONMATCHING
}

/* 805E7D50-805E7F50 009A30 0200+00 1/1 0/0 0/0 .text            G_DeathAction__8daB_GG_cFv */
void daB_GG_c::G_DeathAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED344-805ED348 0002E4 0004+00 0/0 0/0 0/0 .rodata          @7819 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7819 = -8.0f;
COMPILER_STRIP_GATE(0x805ED344, &lit_7819);
#pragma pop

/* 805ED348-805ED34C 0002E8 0004+00 0/1 0/0 0/0 .rodata          @7984 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_7984 = 0x3A83126F;
COMPILER_STRIP_GATE(0x805ED348, &lit_7984);
#pragma pop

/* 805E7F50-805E82A8 009C30 0358+00 1/1 0/0 0/0 .text            G_DeathAction1__8daB_GG_cFv */
void daB_GG_c::G_DeathAction1() {
    // NONMATCHING
}

/* 805E82A8-805E82F0 009F88 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED34C-805ED350 0002EC 0004+00 0/1 0/0 0/0 .rodata          @8242 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8242 = 176.0f;
COMPILER_STRIP_GATE(0x805ED34C, &lit_8242);
#pragma pop

/* 805ED350-805ED354 0002F0 0004+00 0/2 0/0 0/0 .rodata          @8243 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8243 = -7.0f;
COMPILER_STRIP_GATE(0x805ED350, &lit_8243);
#pragma pop

/* 805ED354-805ED358 0002F4 0004+00 0/2 0/0 0/0 .rodata          @8244 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8244 = -3.0f / 5.0f;
COMPILER_STRIP_GATE(0x805ED354, &lit_8244);
#pragma pop

/* 805ED358-805ED35C 0002F8 0004+00 0/1 0/0 0/0 .rodata          @8245 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8245 = 350.0f;
COMPILER_STRIP_GATE(0x805ED358, &lit_8245);
#pragma pop

/* 805E82F0-805E8D48 009FD0 0A58+00 1/1 0/0 0/0 .text            DeathCam__8daB_GG_cFv */
void daB_GG_c::DeathCam() {
    // NONMATCHING
}

/* 805E8D48-805E8EE8 00AA28 01A0+00 1/1 0/0 0/0 .text            GroundAction__8daB_GG_cFv */
void daB_GG_c::GroundAction() {
    // NONMATCHING
}

/* 805E8EE8-805E92A0 00ABC8 03B8+00 1/1 0/0 0/0 .text            StopAction__8daB_GG_cFv */
void daB_GG_c::StopAction() {
    // NONMATCHING
}

/* 805E92A0-805E9310 00AF80 0070+00 2/2 0/0 0/0 .text            HitChk__8daB_GG_cFv */
void daB_GG_c::HitChk() {
    // NONMATCHING
}

/* 805E9310-805E9418 00AFF0 0108+00 1/1 0/0 0/0 .text            Action__8daB_GG_cFv */
void daB_GG_c::Action() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED35C-805ED360 0002FC 0004+00 0/1 0/0 0/0 .rodata          @8519 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8519 = 2.5f;
COMPILER_STRIP_GATE(0x805ED35C, &lit_8519);
#pragma pop

/* 805ED360-805ED364 000300 0004+00 0/1 0/0 0/0 .rodata          @8520 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8520 = -0.5f;
COMPILER_STRIP_GATE(0x805ED360, &lit_8520);
#pragma pop

/* 805E9418-805E9A28 00B0F8 0610+00 1/1 0/0 0/0 .text            HeadAction__8daB_GG_cFv */
void daB_GG_c::HeadAction() {
    // NONMATCHING
}

/* 805E9A28-805E9B48 00B708 0120+00 1/1 0/0 0/0 .text            SetHeadAngle__8daB_GG_cFv */
void daB_GG_c::SetHeadAngle() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED364-805ED368 000304 0004+00 0/2 0/0 0/0 .rodata          @8732 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8732 = 7.0f;
COMPILER_STRIP_GATE(0x805ED364, &lit_8732);
#pragma pop

/* 805E9B48-805EA344 00B828 07FC+00 2/1 0/0 0/0 .text            SoundChk__8daB_GG_cFv */
void daB_GG_c::SoundChk() {
    // NONMATCHING
}

/* 805EA344-805EA72C 00C024 03E8+00 1/1 0/0 0/0 .text            Execute__8daB_GG_cFv */
void daB_GG_c::Execute() {
    // NONMATCHING
}

/* 805EA72C-805EA74C 00C40C 0020+00 1/1 0/0 0/0 .text            ObjHit__8daB_GG_cFv */
void daB_GG_c::ObjHit() {
    // NONMATCHING
}

/* 805EA74C-805EA938 00C42C 01EC+00 3/3 0/0 0/0 .text            At_Check__8daB_GG_cFv */
void daB_GG_c::At_Check() {
    // NONMATCHING
}

/* 805EA938-805EA9AC 00C618 0074+00 1/1 0/0 0/0 .text            MoveAt__8daB_GG_cFv */
void daB_GG_c::MoveAt() {
    // NONMATCHING
}

/* 805EA9AC-805EAAFC 00C68C 0150+00 2/2 0/0 0/0 .text            F_AtHit__8daB_GG_cFv */
void daB_GG_c::F_AtHit() {
    // NONMATCHING
}

/* 805EAAFC-805EB028 00C7DC 052C+00 1/1 0/0 0/0 .text            ChanceTime__8daB_GG_cFv */
void daB_GG_c::ChanceTime() {
    // NONMATCHING
}

/* 805EB028-805EB090 00CD08 0068+00 2/1 0/0 0/0 .text            ArmAngleSet__8daB_GG_cFv */
void daB_GG_c::ArmAngleSet() {
    // NONMATCHING
}

/* 805EB090-805EB5E0 00CD70 0550+00 1/1 0/0 0/0 .text            Guard__8daB_GG_cFv */
void daB_GG_c::Guard() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED368-805ED36C 000308 0004+00 0/0 0/0 0/0 .rodata          @8733 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8733 = 16.0f;
COMPILER_STRIP_GATE(0x805ED368, &lit_8733);
#pragma pop

/* 805ED36C-805ED370 00030C 0004+00 0/0 0/0 0/0 .rodata          @8734 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8734 = 6.0f;
COMPILER_STRIP_GATE(0x805ED36C, &lit_8734);
#pragma pop

/* 805ED370-805ED374 000310 0004+00 0/0 0/0 0/0 .rodata          @8735 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8735 = 27.0f;
COMPILER_STRIP_GATE(0x805ED370, &lit_8735);
#pragma pop

/* 805ED374-805ED378 000314 0004+00 0/0 0/0 0/0 .rodata          @8736 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8736 = 26.0f;
COMPILER_STRIP_GATE(0x805ED374, &lit_8736);
#pragma pop

/* 805ED378-805ED37C 000318 0004+00 0/0 0/0 0/0 .rodata          @8737 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8737 = 29.0f;
COMPILER_STRIP_GATE(0x805ED378, &lit_8737);
#pragma pop

/* 805ED37C-805ED380 00031C 0004+00 0/0 0/0 0/0 .rodata          @8738 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8738 = 190.0f;
COMPILER_STRIP_GATE(0x805ED37C, &lit_8738);
#pragma pop

/* 805ED380-805ED384 000320 0004+00 0/0 0/0 0/0 .rodata          @8739 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8739 = 226.0f;
COMPILER_STRIP_GATE(0x805ED380, &lit_8739);
#pragma pop

/* 805ED384-805ED388 000324 0004+00 0/0 0/0 0/0 .rodata          @8740 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8740 = 23.0f;
COMPILER_STRIP_GATE(0x805ED384, &lit_8740);
#pragma pop

/* 805ED388-805ED38C 000328 0004+00 0/0 0/0 0/0 .rodata          @8741 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8741 = 22.0f;
COMPILER_STRIP_GATE(0x805ED388, &lit_8741);
#pragma pop

/* 805ED38C-805ED390 00032C 0004+00 0/0 0/0 0/0 .rodata          @8742 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8742 = 42.0f;
COMPILER_STRIP_GATE(0x805ED38C, &lit_8742);
#pragma pop

/* 805ED390-805ED394 000330 0004+00 0/1 0/0 0/0 .rodata          @9281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9281 = -255.0f;
COMPILER_STRIP_GATE(0x805ED390, &lit_9281);
#pragma pop

/* 805ED394-805ED398 000334 0004+00 0/1 0/0 0/0 .rodata          @9282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9282 = 32.0f;
COMPILER_STRIP_GATE(0x805ED394, &lit_9282);
#pragma pop

/* 805EB5E0-805EB8A8 00D2C0 02C8+00 1/1 0/0 0/0 .text            Draw__8daB_GG_cFv */
void daB_GG_c::Draw() {
    // NONMATCHING
}

/* 805EB8A8-805EB910 00D588 0068+00 1/1 0/0 0/0 .text            Delete__8daB_GG_cFv */
void daB_GG_c::Delete() {
    // NONMATCHING
}

/* 805EB910-805EB980 00D5F0 0070+00 2/2 0/0 0/0 .text            setBaseMtx__8daB_GG_cFv */
void daB_GG_c::setBaseMtx() {
    // NONMATCHING
}

/* 805EB980-805EB9DC 00D660 005C+00 1/1 0/0 0/0 .text            setShieldMtx__8daB_GG_cFv */
void daB_GG_c::setShieldMtx() {
    // NONMATCHING
}

/* 805EB9DC-805EBA4C 00D6BC 0070+00 1/1 0/0 0/0 .text            setSwordMtx__8daB_GG_cFv */
void daB_GG_c::setSwordMtx() {
    // NONMATCHING
}

/* 805EBA4C-805EBAB8 00D72C 006C+00 1/1 0/0 0/0 .text            setSwordMtx1__8daB_GG_cFv */
void daB_GG_c::setSwordMtx1() {
    // NONMATCHING
}

/* 805EBAB8-805EBB30 00D798 0078+00 1/1 0/0 0/0 .text            setHeadMtx__8daB_GG_cFv */
void daB_GG_c::setHeadMtx() {
    // NONMATCHING
}

/* 805EBB30-805EBB7C 00D810 004C+00 1/1 0/0 0/0 .text            setHeadMtx1__8daB_GG_cFv */
void daB_GG_c::setHeadMtx1() {
    // NONMATCHING
}

/* 805EBB7C-805EBB9C 00D85C 0020+00 1/0 0/0 0/0 .text            daB_GG_Draw__FP8daB_GG_c */
static void daB_GG_Draw(daB_GG_c* param_0) {
    // NONMATCHING
}

/* 805EBB9C-805EBBBC 00D87C 0020+00 2/1 0/0 0/0 .text            daB_GG_Execute__FP8daB_GG_c */
static void daB_GG_Execute(daB_GG_c* param_0) {
    // NONMATCHING
}

/* 805EBBBC-805EBBC4 00D89C 0008+00 1/0 0/0 0/0 .text            daB_GG_IsDelete__FP8daB_GG_c */
static bool daB_GG_IsDelete(daB_GG_c* param_0) {
    return true;
}

/* 805EBBC4-805EBBE4 00D8A4 0020+00 1/0 0/0 0/0 .text            daB_GG_Delete__FP8daB_GG_c */
static void daB_GG_Delete(daB_GG_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED398-805ED39C 000338 0004+00 0/1 0/0 0/0 .rodata          @9660 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9660 = -700.0f;
COMPILER_STRIP_GATE(0x805ED398, &lit_9660);
#pragma pop

/* 805ED39C-805ED3A0 00033C 0004+00 0/1 0/0 0/0 .rodata          @9661 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9661 = -60535.0f;
COMPILER_STRIP_GATE(0x805ED39C, &lit_9661);
#pragma pop

/* 805ED3A0-805ED3A4 000340 0004+00 0/1 0/0 0/0 .rodata          @9662 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9662 = -1000000000.0f;
COMPILER_STRIP_GATE(0x805ED3A0, &lit_9662);
#pragma pop

/* 805ED3D4-805ED3D4 000374 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805ED3E0 = "D_MN07B";
SECTION_DEAD static char const* const stringBase_805ED3E8 = "B_GG";
#pragma pop

/* 805EBBE4-805EC424 00D8C4 0840+00 1/1 0/0 0/0 .text            Create__8daB_GG_cFv */
void daB_GG_c::Create() {
    // NONMATCHING
}

/* 805EC424-805EC5F8 00E104 01D4+00 1/1 0/0 0/0 .text            __ct__8daB_GG_cFv */
daB_GG_c::daB_GG_c() {
    // NONMATCHING
}

/* 805EC5F8-805EC654 00E2D8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 805EC654-805EC6C4 00E334 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 805EC6C4-805EC734 00E3A4 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 805EC734-805EC77C 00E414 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 805EC77C-805EC848 00E45C 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 805EC848-805EC8CC 00E528 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 805EC8CC-805EC914 00E5AC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 805EC914-805EC95C 00E5F4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 805EC95C-805EC97C 00E63C 0020+00 1/0 0/0 0/0 .text            daB_GG_Create__FP10fopAc_ac_c */
static void daB_GG_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 805EC97C-805EC9C4 00E65C 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 805EC9C4-805ECA0C 00E6A4 0048+00 2/1 0/0 0/0 .text            __dt__12daB_GG_HIO_cFv */
daB_GG_HIO_c::~daB_GG_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED3A4-805ED3A8 000344 0004+00 0/1 0/0 0/0 .rodata          @9929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9929 = 1275.0f;
COMPILER_STRIP_GATE(0x805ED3A4, &lit_9929);
#pragma pop

/* 805ED3A8-805ED3AC 000348 0004+00 0/1 0/0 0/0 .rodata          @9930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9930 = 5714.0f;
COMPILER_STRIP_GATE(0x805ED3A8, &lit_9930);
#pragma pop

/* 805ED3AC-805ED3B0 00034C 0004+00 0/1 0/0 0/0 .rodata          @9931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9931 = 218.0f;
COMPILER_STRIP_GATE(0x805ED3AC, &lit_9931);
#pragma pop

/* 805ED3B0-805ED3B4 000350 0004+00 0/1 0/0 0/0 .rodata          @9932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9932 = 950.0f;
COMPILER_STRIP_GATE(0x805ED3B0, &lit_9932);
#pragma pop

/* 805ED3B4-805ED3B8 000354 0004+00 0/1 0/0 0/0 .rodata          @9933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9933 = -4937.0f;
COMPILER_STRIP_GATE(0x805ED3B4, &lit_9933);
#pragma pop

/* 805ED3B8-805ED3BC 000358 0004+00 0/1 0/0 0/0 .rodata          @9934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9934 = -5560.0f;
COMPILER_STRIP_GATE(0x805ED3B8, &lit_9934);
#pragma pop

/* 805ED3BC-805ED3C0 00035C 0004+00 0/1 0/0 0/0 .rodata          @9935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9935 = 222.0f;
COMPILER_STRIP_GATE(0x805ED3BC, &lit_9935);
#pragma pop

/* 805ED3C0-805ED3C4 000360 0004+00 0/1 0/0 0/0 .rodata          @9936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9936 = 1185.0f;
COMPILER_STRIP_GATE(0x805ED3C0, &lit_9936);
#pragma pop

/* 805ED3C4-805ED3C8 000364 0004+00 0/1 0/0 0/0 .rodata          @9937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9937 = 152.0f;
COMPILER_STRIP_GATE(0x805ED3C4, &lit_9937);
#pragma pop

/* 805ED3C8-805ED3CC 000368 0004+00 0/1 0/0 0/0 .rodata          @9938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9938 = -121.0f;
COMPILER_STRIP_GATE(0x805ED3C8, &lit_9938);
#pragma pop

/* 805ED3CC-805ED3D0 00036C 0004+00 0/1 0/0 0/0 .rodata          @9939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9939 = -1190.0f;
COMPILER_STRIP_GATE(0x805ED3CC, &lit_9939);
#pragma pop

/* 805ED3D0-805ED3D4 000370 0004+00 0/1 0/0 0/0 .rodata          @9940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9940 = -1080.0f;
COMPILER_STRIP_GATE(0x805ED3D0, &lit_9940);
#pragma pop

/* 805ECA0C-805ECBEC 00E6EC 01E0+00 0/0 1/0 0/0 .text            __sinit_d_a_b_gg_cpp */
void __sinit_d_a_b_gg_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x805ECA0C, __sinit_d_a_b_gg_cpp);
#pragma pop

/* 805ECBEC-805ECBF4 00E8CC 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_805ECBEC() {
    // NONMATCHING
}

/* 805ECBF4-805ECBFC 00E8D4 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_805ECBF4() {
    // NONMATCHING
}

/* 805ED010-805ED04C 00ECF0 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805ED7E0-805ED7E4 000128 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_805ED7E0[4];
#pragma pop

/* 805ED7E4-805ED7E8 00012C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_805ED7E4[4];
#pragma pop

/* 805ED7E8-805ED7EC 000130 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_805ED7E8[4];
#pragma pop

/* 805ED7EC-805ED7F0 000134 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805ED7EC[4];
#pragma pop

/* 805ED7F0-805ED7F4 000138 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805ED7F0[4];
#pragma pop

/* 805ED7F4-805ED7F8 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805ED7F4[4];
#pragma pop

/* 805ED7F8-805ED7FC 000140 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_805ED7F8[4];
#pragma pop

/* 805ED7FC-805ED800 000144 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_805ED7FC[4];
#pragma pop

/* 805ED800-805ED804 000148 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_805ED800[4];
#pragma pop

/* 805ED804-805ED808 00014C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_805ED804[4];
#pragma pop

/* 805ED808-805ED80C 000150 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_805ED808[4];
#pragma pop

/* 805ED80C-805ED810 000154 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805ED80C[4];
#pragma pop

/* 805ED810-805ED814 000158 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_805ED810[4];
#pragma pop

/* 805ED814-805ED818 00015C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805ED814[4];
#pragma pop

/* 805ED818-805ED81C 000160 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805ED818[4];
#pragma pop

/* 805ED81C-805ED820 000164 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_805ED81C[4];
#pragma pop

/* 805ED820-805ED824 000168 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_805ED820[4];
#pragma pop

/* 805ED824-805ED828 00016C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805ED824[4];
#pragma pop

/* 805ED828-805ED82C 000170 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_805ED828[4];
#pragma pop

/* 805ED82C-805ED830 000174 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_805ED82C[4];
#pragma pop

/* 805ED830-805ED834 000178 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_805ED830[4];
#pragma pop

/* 805ED834-805ED838 00017C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805ED834[4];
#pragma pop

/* 805ED838-805ED83C 000180 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805ED838[4];
#pragma pop

/* 805ED83C-805ED840 000184 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805ED83C[4];
#pragma pop

/* 805ED840-805ED844 000188 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_805ED840[4];
#pragma pop

/* 805ED3D4-805ED3D4 000374 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
