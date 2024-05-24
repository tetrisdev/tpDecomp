/**
 * @file d_a_e_s1.cpp
 * 
*/

#include "rel/d/a/e/d_a_e_s1/d_a_e_s1.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"




//
// Forward References:
//

extern "C" void __ct__12daE_S1_HIO_cFv();
extern "C" static void anm_init__FP10e_s1_classifUcf();
extern "C" static void daE_S1_Draw__FP10e_s1_class();
extern "C" static void pl_check__FP10e_s1_classf();
extern "C" static void pl_at_check__FP10e_s1_classf();
extern "C" static void path_check__FP10e_s1_class();
extern "C" static void path_check2__FP10e_s1_class();
extern "C" static void s_last_sub__FPvPv();
extern "C" static void damage_check__FP10e_s1_class();
extern "C" static void e_s1_wait__FP10e_s1_class();
extern "C" static void e_s1_roof__FP10e_s1_class();
extern "C" static void e_s1_fight_run__FP10e_s1_class();
extern "C" static void e_s1_fight__FP10e_s1_class();
extern "C" static void e_s1_bibiri__FP10e_s1_class();
extern "C" static void e_s1_damage__FP10e_s1_class();
extern "C" static void e_s1_path__FP10e_s1_class();
extern "C" static void s_down_sub__FPvPv();
extern "C" static void s_fail_sub__FPvPv();
extern "C" static void all_fail_check__FP10e_s1_class();
extern "C" static void s_allfail_sub__FPvPv();
extern "C" static void all_fail__FP10e_s1_class();
extern "C" static void s_allwakeup_sub__FPvPv();
extern "C" static void s_posrevise_sub__FPvPv();
extern "C" static void e_s1_failwait__FP10e_s1_class();
extern "C" static void e_s1_fail__FP10e_s1_class();
extern "C" static void e_s1_shout__FP10e_s1_class();
extern "C" static void e_s1_warpappear__FP10e_s1_class();
extern "C" static void ke_control__FP10e_s1_classP7s1_ke_sif();
extern "C" static void ke_move__FP10e_s1_classP19mDoExt_3DlineMat0_cP7s1_ke_sif();
extern "C" static void e_s1_wolfbite__FP10e_s1_class();
extern "C" static void action__FP10e_s1_class();
extern "C" static void ke_set__FP10e_s1_class();
extern "C" static void demo_camera__FP10e_s1_class();
extern "C" static void anm_se_set__FP10e_s1_class();
extern "C" static void body_eff_set__FP10e_s1_class();
extern "C" static void daE_S1_Execute__FP10e_s1_class();
extern "C" static bool daE_S1_IsDelete__FP10e_s1_class();
extern "C" static void daE_S1_Delete__FP10e_s1_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_S1_Create__FP10fopAc_ac_c();
extern "C" void __dt__7s1_ke_sFv();
extern "C" void __ct__7s1_ke_sFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_S1_HIO_cFv();
extern "C" void __sinit_d_a_e_s1_cpp();
extern "C" static void func_80780950();
extern "C" static void func_80780958();
extern "C" static void setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz();
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const d_a_e_s1__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void init__19mDoExt_3DlineMat0_cFUsUsi();
extern "C" void update__19mDoExt_3DlineMat0_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __ct__9dJntCol_cFv();
extern "C" void init__9dJntCol_cFP10fopAc_ac_cPC13dJntColData_cP8J3DModeli();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void StartShock__12dVibration_cFii4cXyz();
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
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void StartCAt__8dCcD_SphFR4cXyz();
extern "C" void MoveCAt__8dCcD_SphFR4cXyz();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cM_initRnd2__Fiii();
extern "C" void cM_rndF2__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void func_802807E0();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80780DC4-80780DC8 000000 0004+00 25/25 0/0 0/0 .rodata          @3903 */
SECTION_RODATA static f32 const lit_3903 = 100.0f;
COMPILER_STRIP_GATE(0x80780DC4, &lit_3903);

/* 80780DC8-80780DCC 000004 0004+00 3/21 0/0 0/0 .rodata          @3904 */
SECTION_RODATA static u8 const lit_3904[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80780DC8, &lit_3904);

/* 80780DCC-80780DD4 000008 0004+04 3/21 0/0 0/0 .rodata          @3905 */
SECTION_RODATA static f32 const lit_3905[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80780DCC, &lit_3905);

/* 80780DD4-80780DDC 000010 0008+00 0/1 0/0 0/0 .rodata          @3906 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3906[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80780DD4, &lit_3906);
#pragma pop

/* 80780DDC-80780DE4 000018 0008+00 0/1 0/0 0/0 .rodata          @3907 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3907[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80780DDC, &lit_3907);
#pragma pop

/* 80780DE4-80780DEC 000020 0008+00 0/1 0/0 0/0 .rodata          @3908 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3908[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80780DE4, &lit_3908);
#pragma pop

/* 80780DEC-80780DF0 000028 0004+00 0/1 0/0 0/0 .rodata          @3909 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3909 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80780DEC, &lit_3909);
#pragma pop

/* 80780DF0-80780DF4 00002C 0004+00 0/2 0/0 0/0 .rodata          @3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3924 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x80780DF0, &lit_3924);
#pragma pop

/* 80780DF4-80780DF8 000030 0004+00 0/3 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3925 = 4.0f;
COMPILER_STRIP_GATE(0x80780DF4, &lit_3925);
#pragma pop

/* 80780DF8-80780DFC 000034 0004+00 1/5 0/0 0/0 .rodata          @3926 */
SECTION_RODATA static f32 const lit_3926 = 20.0f;
COMPILER_STRIP_GATE(0x80780DF8, &lit_3926);

/* 80780DFC-80780E00 000038 0004+00 0/4 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 300.0f;
COMPILER_STRIP_GATE(0x80780DFC, &lit_3927);
#pragma pop

/* 80780E00-80780E04 00003C 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 700.0f;
COMPILER_STRIP_GATE(0x80780E00, &lit_3928);
#pragma pop

/* 80780E04-80780E08 000040 0004+00 0/1 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 90.0f;
COMPILER_STRIP_GATE(0x80780E04, &lit_3929);
#pragma pop

/* 80780FA8-80780FB4 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80780FB4-80780FC8 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80780FC8-80780FD0 000020 0008+00 0/1 0/0 0/0 .data            e_prim$3782 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_prim[8] = {
    0xFF, 0x78, 0x00, 0x00, 0xFF, 0x64, 0x78, 0x00,
};
#pragma pop

/* 80780FD0-80780FD8 000028 0008+00 0/1 0/0 0/0 .data            e_env$3783 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_env[8] = {
    0x5A, 0x2D, 0x2D, 0x00, 0x3C, 0x1E, 0x1E, 0x00,
};
#pragma pop

/* 80780FD8-80780FE0 000030 0006+02 0/1 0/0 0/0 .data            eff_id$3791 */
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

/* 80780FE0-80780FE4 000038 0004+00 1/1 0/0 0/0 .data            s_ya */
SECTION_DATA static u8 s_ya[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80780FE4-80781060 -00001 007C+00 1/1 0/0 0/0 .data            @4986 */
SECTION_DATA static void* lit_4986[31] = {
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x6C),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x144),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x1CC),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x210),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x2D4),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x398),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x3E8),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x42C),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x500),
    (void*)(((char*)e_s1_fail__FP10e_s1_class) + 0x464),
};

/* 80781060-807810B4 -00001 0054+00 1/1 0/0 0/0 .data            @5100 */
SECTION_DATA static void* lit_5100[21] = {
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x4C),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x68),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x88),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x94),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x168),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x18C),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1F0),
    (void*)(((char*)e_s1_warpappear__FP10e_s1_class) + 0x1E0),
};

/* 807810B4-80781108 -00001 0054+00 1/1 0/0 0/0 .data            @5377 */
SECTION_DATA static void* lit_5377[21] = {
    (void*)(((char*)action__FP10e_s1_class) + 0x7C),
    (void*)(((char*)action__FP10e_s1_class) + 0x8C),
    (void*)(((char*)action__FP10e_s1_class) + 0x98),
    (void*)(((char*)action__FP10e_s1_class) + 0xAC),
    (void*)(((char*)action__FP10e_s1_class) + 0xC0),
    (void*)(((char*)action__FP10e_s1_class) + 0xCC),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0xD8),
    (void*)(((char*)action__FP10e_s1_class) + 0xE4),
    (void*)(((char*)action__FP10e_s1_class) + 0xF0),
    (void*)(((char*)action__FP10e_s1_class) + 0x120),
    (void*)(((char*)action__FP10e_s1_class) + 0x108),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x148),
    (void*)(((char*)action__FP10e_s1_class) + 0x138),
};

/* 80781108-80781134 000160 002C+00 1/1 0/0 0/0 .data            ke_za$5382 */
SECTION_DATA static u8 ke_za[44] = {
    0xFC, 0xE0, 0xFE, 0x70, 0x00, 0x00, 0x01, 0x90, 0x03, 0x20, 0xFC, 0xE0, 0xFE, 0x70, 0x00,
    0x00, 0x01, 0x90, 0x03, 0x20, 0xFC, 0xE0, 0xFE, 0x70, 0x00, 0x00, 0x01, 0x90, 0x03, 0x20,
    0x04, 0xB0, 0xFC, 0xE0, 0xFE, 0x70, 0x00, 0x00, 0x01, 0x90, 0x03, 0x20, 0x04, 0xB0,
};

/* 80781134-8078116C -00001 0038+00 1/1 0/0 0/0 .data            @5617 */
SECTION_DATA static void* lit_5617[14] = {
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x68),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0xDC),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x420),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x210),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x2AC),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x30C),
    (void*)(((char*)demo_camera__FP10e_s1_class) + 0x3B8),
};

/* 8078116C-80781178 0001C4 000C+00 1/0 0/0 0/0 .data            jv_offset */
SECTION_DATA static u8 jv_offset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80781178-807811E4 -00001 006C+00 1/1 0/0 0/0 .data            jc_data */
SECTION_DATA static void* jc_data[27] = {
    (void*)0x00010001, (void*)0x41F00000, (void*)&jv_offset, (void*)0x00010002, (void*)0x41F00000,
    (void*)&jv_offset, (void*)0x00010003, (void*)0x41C80000, (void*)&jv_offset, (void*)0x00010007,
    (void*)0x41700000, (void*)&jv_offset, (void*)0x00010008, (void*)0x41200000, (void*)&jv_offset,
    (void*)0x0001000E, (void*)0x41700000, (void*)&jv_offset, (void*)0x0001000F, (void*)0x41200000,
    (void*)&jv_offset, (void*)0x00010015, (void*)0x41200000, (void*)&jv_offset, (void*)0x00010018,
    (void*)0x41200000, (void*)&jv_offset,
};

/* 807811E4-80781224 00023C 0040+00 1/1 0/0 0/0 .data            cc_sph_src$6084 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 80781224-80781264 00027C 0040+00 1/1 0/0 0/0 .data            at_sph_src$6085 */
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0xd}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_HARD_BODY, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 35.0f} // mSph
    } // mSphAttr
};

/* 80781264-80781284 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_S1_Method */
static actor_method_class l_daE_S1_Method = {
    (process_method_func)daE_S1_Create__FP10fopAc_ac_c,
    (process_method_func)daE_S1_Delete__FP10e_s1_class,
    (process_method_func)daE_S1_Execute__FP10e_s1_class,
    (process_method_func)daE_S1_IsDelete__FP10e_s1_class,
    (process_method_func)daE_S1_Draw__FP10e_s1_class,
};

/* 80781284-807812B4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_S1 */
extern actor_process_profile_definition g_profile_E_S1 = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_S1,              // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(e_s1_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  121,                    // mPriority
  &l_daE_S1_Method,       // sub_method
  0x00040000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 807812B4-807812C0 00030C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 807812C0-807812CC 000318 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 807812CC-807812D8 000324 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 807812D8-807812EC 000330 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 807812EC-807812F8 000344 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 807812F8-80781304 000350 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80781304-80781328 00035C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80780958,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80780950,
};

/* 80781328-80781334 000380 000C+00 2/2 0/0 0/0 .data            __vt__12daE_S1_HIO_c */
SECTION_DATA extern void* __vt__12daE_S1_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_S1_HIO_cFv,
};

/* 8077AB8C-8077ABF8 0000EC 006C+00 1/1 0/0 0/0 .text            __ct__12daE_S1_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_S1_HIO_c::daE_S1_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__ct__12daE_S1_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E08-80780E0C 000044 0004+00 1/1 0/0 0/0 .rodata          @3943 */
SECTION_RODATA static f32 const lit_3943 = -1.0f;
COMPILER_STRIP_GATE(0x80780E08, &lit_3943);

/* 80780F74-80780F74 0001B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80780F74 = "E_S2";
#pragma pop

/* 8077ABF8-8077ACA4 000158 00AC+00 12/12 0/0 0/0 .text            anm_init__FP10e_s1_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(e_s1_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/anm_init__FP10e_s1_classifUcf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E0C-80780E10 000048 0004+00 0/1 0/0 0/0 .rodata          @3989 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3989 = 1300.0f;
COMPILER_STRIP_GATE(0x80780E0C, &lit_3989);
#pragma pop

/* 8077ACA4-8077AE38 000204 0194+00 1/0 0/0 0/0 .text            daE_S1_Draw__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_S1_Draw(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/daE_S1_Draw__FP10e_s1_class.s"
}
#pragma pop

/* 8077AE38-8077AEFC 000398 00C4+00 3/3 0/0 0/0 .text            pl_check__FP10e_s1_classf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void pl_check(e_s1_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/pl_check__FP10e_s1_classf.s"
}
#pragma pop

/* 8077AEFC-8077AF40 00045C 0044+00 4/4 0/0 0/0 .text            pl_at_check__FP10e_s1_classf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void pl_at_check(e_s1_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/pl_at_check__FP10e_s1_classf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E10-80780E14 00004C 0004+00 2/9 0/0 0/0 .rodata          @4096 */
SECTION_RODATA static f32 const lit_4096 = 10.0f;
COMPILER_STRIP_GATE(0x80780E10, &lit_4096);

/* 80780E14-80780E18 000050 0004+00 0/9 0/0 0/0 .rodata          @4097 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4097 = 50.0f;
COMPILER_STRIP_GATE(0x80780E14, &lit_4097);
#pragma pop

/* 80780E18-80780E1C 000054 0004+00 0/3 0/0 0/0 .rodata          @4098 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4098 = 0.5f;
COMPILER_STRIP_GATE(0x80780E18, &lit_4098);
#pragma pop

/* 80781340-80781344 000008 0001+03 3/3 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80781344-80781348 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80781348-8078134C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8078134C-80781350 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80781350-80781354 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80781354-80781358 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80781358-8078135C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8078135C-80781360 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80781360-80781364 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80781364-80781368 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80781368-8078136C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8078136C-80781370 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80781370-80781374 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80781374-80781378 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80781378-8078137C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8078137C-80781380 -00001 0004+00 2/4 0/0 0/0 .bss             None */
/* 8078137C 0001+00 data_8078137C @1009 */
/* 8078137D 0001+00 data_8078137D None */
/* 8078137E 0002+00 data_8078137E None */
static u8 struct_8078137C[4];

/* 80781380-8078138C 000048 000C+00 0/1 0/0 0/0 .bss             @3919 */
#pragma push
#pragma force_active on
static u8 lit_3919[12];
#pragma pop

/* 8078138C-807813B8 000054 002C+00 8/11 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[44];

/* 807813B8-807814B8 000080 00FF+01 1/1 0/0 0/0 .bss             check_index$4023 */
static u8 check_index[255 + 1 /* padding */];

/* 8077AF40-8077B1A8 0004A0 0268+00 1/1 0/0 0/0 .text            path_check__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void path_check(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/path_check__FP10e_s1_class.s"
}
#pragma pop

/* 8077B1A8-8077B274 000708 00CC+00 1/1 0/0 0/0 .text            path_check2__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void path_check2(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/path_check2__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807814B8-807814BC 000180 0004+00 1/2 0/0 0/0 .bss             same_id */
static u8 same_id[4];

/* 807814BC-807814C0 000184 0004+00 1/2 0/0 0/0 .bss             fail_id */
static u8 fail_id[4];

/* 8077B274-8077B318 0007D4 00A4+00 1/1 0/0 0/0 .text            s_last_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_last_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/s_last_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E1C-80780E20 000058 0004+00 1/6 0/0 0/0 .rodata          @4353 */
SECTION_RODATA static f32 const lit_4353 = 30.0f;
COMPILER_STRIP_GATE(0x80780E1C, &lit_4353);

/* 80780E20-80780E24 00005C 0004+00 0/1 0/0 0/0 .rodata          @4354 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4354 = 65.0f;
COMPILER_STRIP_GATE(0x80780E20, &lit_4354);
#pragma pop

/* 80780E24-80780E28 000060 0004+00 0/2 0/0 0/0 .rodata          @4355 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4355 = 60.0f;
COMPILER_STRIP_GATE(0x80780E24, &lit_4355);
#pragma pop

/* 8077B318-8077B928 000878 0610+00 1/1 0/0 0/0 .text            damage_check__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/damage_check__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E28-80780E2C 000064 0004+00 0/3 0/0 0/0 .rodata          @4428 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4428 = 15.0f;
COMPILER_STRIP_GATE(0x80780E28, &lit_4428);
#pragma pop

/* 8077B928-8077BC8C 000E88 0364+00 1/1 0/0 0/0 .text            e_s1_wait__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_wait(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_wait__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E2C-80780E34 000068 0008+00 0/2 0/0 0/0 .rodata          @4475 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4475[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80780E2C, &lit_4475);
#pragma pop

/* 8077BC8C-8077BEAC 0011EC 0220+00 1/1 0/0 0/0 .text            e_s1_roof__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_roof(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_roof__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E34-80780E38 000070 0004+00 0/8 0/0 0/0 .rodata          @4501 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4501 = 3.0f;
COMPILER_STRIP_GATE(0x80780E34, &lit_4501);
#pragma pop

/* 80780E38-80780E3C 000074 0004+00 0/1 0/0 0/0 .rodata          @4502 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4502 = 0x3EAA7EFA;
COMPILER_STRIP_GATE(0x80780E38, &lit_4502);
#pragma pop

/* 80780E3C-80780E44 000078 0008+00 0/4 0/0 0/0 .rodata          @4505 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4505[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80780E3C, &lit_4505);
#pragma pop

/* 8077BEAC-8077BFFC 00140C 0150+00 1/1 0/0 0/0 .text            e_s1_fight_run__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_fight_run(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_fight_run__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E44-80780E48 000080 0004+00 0/3 0/0 0/0 .rodata          @4568 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4568 = 0x3EAAA64C;
COMPILER_STRIP_GATE(0x80780E44, &lit_4568);
#pragma pop

/* 8077BFFC-8077C2F8 00155C 02FC+00 1/1 0/0 0/0 .text            e_s1_fight__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_fight(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_fight__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E48-80780E4C 000084 0004+00 0/4 0/0 0/0 .rodata          @4603 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4603 = 5.0f;
COMPILER_STRIP_GATE(0x80780E48, &lit_4603);
#pragma pop

/* 80780E4C-80780E50 000088 0004+00 0/3 0/0 0/0 .rodata          @4604 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4604 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80780E4C, &lit_4604);
#pragma pop

/* 8077C2F8-8077C52C 001858 0234+00 1/1 0/0 0/0 .text            e_s1_bibiri__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_bibiri(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_bibiri__FP10e_s1_class.s"
}
#pragma pop

/* 8077C52C-8077C5FC 001A8C 00D0+00 1/1 0/0 0/0 .text            e_s1_damage__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_damage(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_damage__FP10e_s1_class.s"
}
#pragma pop

/* 8077C5FC-8077C894 001B5C 0298+00 1/1 0/0 0/0 .text            e_s1_path__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_path(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_path__FP10e_s1_class.s"
}
#pragma pop

/* 8077C894-8077C938 001DF4 00A4+00 1/1 0/0 0/0 .text            s_down_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_down_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/s_down_sub__FPvPv.s"
}
#pragma pop

/* 8077C938-8077C9D8 001E98 00A0+00 1/1 0/0 0/0 .text            s_fail_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_fail_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/s_fail_sub__FPvPv.s"
}
#pragma pop

/* 8077C9D8-8077CA0C 001F38 0034+00 2/2 0/0 0/0 .text            all_fail_check__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void all_fail_check(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/all_fail_check__FP10e_s1_class.s"
}
#pragma pop

/* 8077CA0C-8077CAA4 001F6C 0098+00 1/1 0/0 0/0 .text            s_allfail_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_allfail_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/s_allfail_sub__FPvPv.s"
}
#pragma pop

/* 8077CAA4-8077CAD0 002004 002C+00 1/1 0/0 0/0 .text            all_fail__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void all_fail(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/all_fail__FP10e_s1_class.s"
}
#pragma pop

/* 8077CAD0-8077CB68 002030 0098+00 1/1 0/0 0/0 .text            s_allwakeup_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_allwakeup_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/s_allwakeup_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 807814C0-807814C4 000188 0004+00 2/2 0/0 0/0 .bss             s_check */
static u8 s_check[4];

/* 807814C4-807814D0 00018C 000C+00 0/1 0/0 0/0 .bss             @4755 */
#pragma push
#pragma force_active on
static u8 lit_4755[12];
#pragma pop

/* 807814D0-807814DC 000198 000C+00 0/1 0/0 0/0 .bss             @4756 */
#pragma push
#pragma force_active on
static u8 lit_4756[12];
#pragma pop

/* 807814DC-807814F4 0001A4 0018+00 1/2 0/0 0/0 .bss             s_p */
static u8 s_p[24];

/* 8077CB68-8077CC54 0020C8 00EC+00 1/1 0/0 0/0 .text            s_posrevise_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_posrevise_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/s_posrevise_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E50-80780E54 00008C 0004+00 0/3 0/0 0/0 .rodata          @4840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4840 = 2.0f;
COMPILER_STRIP_GATE(0x80780E50, &lit_4840);
#pragma pop

/* 80780E54-80780E58 000090 0004+00 0/1 0/0 0/0 .rodata          @4841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4841 = 9.0f;
COMPILER_STRIP_GATE(0x80780E54, &lit_4841);
#pragma pop

/* 8077CC54-8077CF30 0021B4 02DC+00 1/1 0/0 0/0 .text            e_s1_failwait__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_failwait(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_failwait__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780F74-80780F74 0001B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80780F79 = "D_MN08";
#pragma pop

/* 8077CF30-8077D448 002490 0518+00 2/1 0/0 0/0 .text            e_s1_fail__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_fail(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_fail__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E58-80780E5C 000094 0004+00 0/0 0/0 0/0 .rodata          @4985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4985 = 25.0f;
COMPILER_STRIP_GATE(0x80780E58, &lit_4985);
#pragma pop

/* 80780E5C-80780E60 000098 0004+00 0/1 0/0 0/0 .rodata          @5043 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5043 = -16000.0f;
COMPILER_STRIP_GATE(0x80780E5C, &lit_5043);
#pragma pop

/* 80780E60-80780E64 00009C 0004+00 0/1 0/0 0/0 .rodata          @5044 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5044 = -1000.0f;
COMPILER_STRIP_GATE(0x80780E60, &lit_5044);
#pragma pop

/* 80780F74-80780F74 0001B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80780F80 = "F_SP108";
#pragma pop

/* 8077D448-8077D6A0 0029A8 0258+00 1/1 0/0 0/0 .text            e_s1_shout__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_shout(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_shout__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E64-80780E68 0000A0 0004+00 0/3 0/0 0/0 .rodata          @5099 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5099 = 50000.0f;
COMPILER_STRIP_GATE(0x80780E64, &lit_5099);
#pragma pop

/* 8077D6A0-8077D8A8 002C00 0208+00 2/1 0/0 0/0 .text            e_s1_warpappear__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_warpappear(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_warpappear__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E68-80780E6C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @5149 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5149 = 65536.0f;
COMPILER_STRIP_GATE(0x80780E68, &lit_5149);
#pragma pop

/* 80780E6C-80780E70 0000A8 0004+00 0/1 0/0 0/0 .rodata          @5150 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5150 = -12.0f;
COMPILER_STRIP_GATE(0x80780E6C, &lit_5150);
#pragma pop

/* 80780E70-80780E74 0000AC 0004+00 0/1 0/0 0/0 .rodata          @5151 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5151 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80780E70, &lit_5151);
#pragma pop

/* 8077D8A8-8077DBB8 002E08 0310+00 1/1 0/0 0/0 .text ke_control__FP10e_s1_classP7s1_ke_sif */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ke_control(e_s1_class* param_0, s1_ke_s* param_1, int param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/ke_control__FP10e_s1_classP7s1_ke_sif.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E74-80780E78 0000B0 0004+00 0/1 0/0 0/0 .rodata          @5175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5175 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80780E74, &lit_5175);
#pragma pop

/* 80780E78-80780E7C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @5176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5176 = 3.5f;
COMPILER_STRIP_GATE(0x80780E78, &lit_5176);
#pragma pop

/* 80780E7C-80780E80 0000B8 0004+00 0/1 0/0 0/0 .rodata          @5177 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5177 = 9.0f / 5.0f;
COMPILER_STRIP_GATE(0x80780E7C, &lit_5177);
#pragma pop

/* 8077DBB8-8077DC90 003118 00D8+00 1/1 0/0 0/0 .text
 * ke_move__FP10e_s1_classP19mDoExt_3DlineMat0_cP7s1_ke_sif     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ke_move(e_s1_class* param_0, mDoExt_3DlineMat0_c* param_1, s1_ke_s* param_2,
                        int param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/ke_move__FP10e_s1_classP19mDoExt_3DlineMat0_cP7s1_ke_sif.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E80-80780E84 0000BC 0004+00 0/1 0/0 0/0 .rodata          @5247 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5247 = 250.0f;
COMPILER_STRIP_GATE(0x80780E80, &lit_5247);
#pragma pop

/* 8077DC90-8077E070 0031F0 03E0+00 1/1 0/0 0/0 .text            e_s1_wolfbite__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_s1_wolfbite(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/e_s1_wolfbite__FP10e_s1_class.s"
}
#pragma pop

/* 8077E070-8077E618 0035D0 05A8+00 2/1 0/0 0/0 .text            action__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/action__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780E84-80780E88 0000C0 0004+00 0/0 0/0 0/0 .rodata          @5373 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5373 = 0x43360A3D;
COMPILER_STRIP_GATE(0x80780E84, &lit_5373);
#pragma pop

/* 80780E88-80780E8C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5374 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5374 = 40.0f;
COMPILER_STRIP_GATE(0x80780E88, &lit_5374);
#pragma pop

/* 80780E8C-80780E90 0000C8 0004+00 0/0 0/0 0/0 .rodata          @5375 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5375 = -120.0f;
COMPILER_STRIP_GATE(0x80780E8C, &lit_5375);
#pragma pop

/* 80780E90-80780E94 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5376 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5376 = 7.0f;
COMPILER_STRIP_GATE(0x80780E90, &lit_5376);
#pragma pop

/* 80780E94-80780E98 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5430 = 2000.0f;
COMPILER_STRIP_GATE(0x80780E94, &lit_5430);
#pragma pop

/* 80780E98-80780E9C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5431 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5431 = 7.5f;
COMPILER_STRIP_GATE(0x80780E98, &lit_5431);
#pragma pop

/* 80780E9C-80780EA0 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5432 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5432 = 2.25f;
COMPILER_STRIP_GATE(0x80780E9C, &lit_5432);
#pragma pop

/* 80780EA0-80780EA4 0000DC 0004+00 0/2 0/0 0/0 .rodata          @5433 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5433 = 8.0f;
COMPILER_STRIP_GATE(0x80780EA0, &lit_5433);
#pragma pop

/* 80780EA4-80780EA8 0000E0 0004+00 0/2 0/0 0/0 .rodata          @5434 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5434 = 35.0f;
COMPILER_STRIP_GATE(0x80780EA4, &lit_5434);
#pragma pop

/* 8077E618-8077E870 003B78 0258+00 1/1 0/0 0/0 .text            ke_set__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ke_set(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/ke_set__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780EA8-80780EAC 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5588 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5588 = 55.0f;
COMPILER_STRIP_GATE(0x80780EA8, &lit_5588);
#pragma pop

/* 80780EAC-80780EB0 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5589 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5589 = 1200.0f;
COMPILER_STRIP_GATE(0x80780EAC, &lit_5589);
#pragma pop

/* 80780EB0-80780EB4 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5590 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5590 = 270.0f;
COMPILER_STRIP_GATE(0x80780EB0, &lit_5590);
#pragma pop

/* 80780EB4-80780EB8 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5591 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5591 = 750.0f;
COMPILER_STRIP_GATE(0x80780EB4, &lit_5591);
#pragma pop

/* 80780EB8-80780EBC 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5592 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5592 = 850.0f;
COMPILER_STRIP_GATE(0x80780EB8, &lit_5592);
#pragma pop

/* 80780EBC-80780EC0 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5593 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5593 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80780EBC, &lit_5593);
#pragma pop

/* 80780EC0-80780EC4 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5594 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5594 = 0x3BA3D70A;
COMPILER_STRIP_GATE(0x80780EC0, &lit_5594);
#pragma pop

/* 8077E870-8077EE10 003DD0 05A0+00 2/1 0/0 0/0 .text            demo_camera__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void demo_camera(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/demo_camera__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780EC4-80780EC8 000100 0004+00 0/0 0/0 0/0 .rodata          @5595 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5595 = -16046.0f;
COMPILER_STRIP_GATE(0x80780EC4, &lit_5595);
#pragma pop

/* 80780EC8-80780ECC 000104 0004+00 0/0 0/0 0/0 .rodata          @5596 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5596 = 177.0f;
COMPILER_STRIP_GATE(0x80780EC8, &lit_5596);
#pragma pop

/* 80780ECC-80780ED0 000108 0004+00 0/0 0/0 0/0 .rodata          @5597 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5597 = -955.0f;
COMPILER_STRIP_GATE(0x80780ECC, &lit_5597);
#pragma pop

/* 80780ED0-80780ED4 00010C 0004+00 0/0 0/0 0/0 .rodata          @5598 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5598 = -16174.0f;
COMPILER_STRIP_GATE(0x80780ED0, &lit_5598);
#pragma pop

/* 80780ED4-80780ED8 000110 0004+00 0/0 0/0 0/0 .rodata          @5599 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5599 = 331.0f;
COMPILER_STRIP_GATE(0x80780ED4, &lit_5599);
#pragma pop

/* 80780ED8-80780EDC 000114 0004+00 0/0 0/0 0/0 .rodata          @5600 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5600 = -731.0f;
COMPILER_STRIP_GATE(0x80780ED8, &lit_5600);
#pragma pop

/* 80780EDC-80780EE0 000118 0004+00 0/0 0/0 0/0 .rodata          @5601 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5601 = -15400.0f;
COMPILER_STRIP_GATE(0x80780EDC, &lit_5601);
#pragma pop

/* 80780EE0-80780EE4 00011C 0004+00 0/0 0/0 0/0 .rodata          @5602 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5602 = 400.0f;
COMPILER_STRIP_GATE(0x80780EE0, &lit_5602);
#pragma pop

/* 80780EE4-80780EE8 000120 0004+00 0/0 0/0 0/0 .rodata          @5603 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5603 = 0x4234999A;
COMPILER_STRIP_GATE(0x80780EE4, &lit_5603);
#pragma pop

/* 80780EE8-80780EEC 000124 0004+00 0/0 0/0 0/0 .rodata          @5604 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5604 = -40.0f;
COMPILER_STRIP_GATE(0x80780EE8, &lit_5604);
#pragma pop

/* 80780EEC-80780EF0 000128 0004+00 0/0 0/0 0/0 .rodata          @5605 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5605 = -39.0f;
COMPILER_STRIP_GATE(0x80780EEC, &lit_5605);
#pragma pop

/* 80780EF0-80780EF4 00012C 0004+00 0/0 0/0 0/0 .rodata          @5606 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5606 = -68.0f;
COMPILER_STRIP_GATE(0x80780EF0, &lit_5606);
#pragma pop

/* 80780EF4-80780EF8 000130 0004+00 0/0 0/0 0/0 .rodata          @5607 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5607 = 218.0f;
COMPILER_STRIP_GATE(0x80780EF4, &lit_5607);
#pragma pop

/* 80780EF8-80780EFC 000134 0004+00 0/0 0/0 0/0 .rodata          @5608 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5608 = -3.0f;
COMPILER_STRIP_GATE(0x80780EF8, &lit_5608);
#pragma pop

/* 80780EFC-80780F00 000138 0004+00 0/0 0/0 0/0 .rodata          @5609 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5609 = 78.0f;
COMPILER_STRIP_GATE(0x80780EFC, &lit_5609);
#pragma pop

/* 80780F00-80780F04 00013C 0004+00 0/0 0/0 0/0 .rodata          @5610 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5610 = 42.0f;
COMPILER_STRIP_GATE(0x80780F00, &lit_5610);
#pragma pop

/* 80780F04-80780F08 000140 0004+00 0/0 0/0 0/0 .rodata          @5611 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5611 = -16232.0f;
COMPILER_STRIP_GATE(0x80780F04, &lit_5611);
#pragma pop

/* 80780F08-80780F0C 000144 0004+00 0/0 0/0 0/0 .rodata          @5612 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5612 = 0x42366666;
COMPILER_STRIP_GATE(0x80780F08, &lit_5612);
#pragma pop

/* 80780F0C-80780F10 000148 0004+00 0/0 0/0 0/0 .rodata          @5613 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5613 = 234.0f;
COMPILER_STRIP_GATE(0x80780F0C, &lit_5613);
#pragma pop

/* 80780F10-80780F14 00014C 0004+00 0/0 0/0 0/0 .rodata          @5614 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5614 = -16140.0f;
COMPILER_STRIP_GATE(0x80780F10, &lit_5614);
#pragma pop

/* 80780F14-80780F18 000150 0004+00 0/0 0/0 0/0 .rodata          @5615 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5615 = 88.0f / 5.0f;
COMPILER_STRIP_GATE(0x80780F14, &lit_5615);
#pragma pop

/* 80780F18-80780F1C 000154 0004+00 0/0 0/0 0/0 .rodata          @5616 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5616 = 518.0f;
COMPILER_STRIP_GATE(0x80780F18, &lit_5616);
#pragma pop

/* 80780F1C-80780F20 000158 0004+00 0/1 0/0 0/0 .rodata          @5717 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5717 = 27.0f;
COMPILER_STRIP_GATE(0x80780F1C, &lit_5717);
#pragma pop

/* 80780F20-80780F24 00015C 0004+00 0/1 0/0 0/0 .rodata          @5718 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5718 = 57.0f;
COMPILER_STRIP_GATE(0x80780F20, &lit_5718);
#pragma pop

/* 80780F24-80780F28 000160 0004+00 0/1 0/0 0/0 .rodata          @5719 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5719 = 6.0f;
COMPILER_STRIP_GATE(0x80780F24, &lit_5719);
#pragma pop

/* 80780F28-80780F2C 000164 0004+00 0/1 0/0 0/0 .rodata          @5720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5720 = 14.0f;
COMPILER_STRIP_GATE(0x80780F28, &lit_5720);
#pragma pop

/* 80780F2C-80780F30 000168 0004+00 0/2 0/0 0/0 .rodata          @5721 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5721 = 45.0f;
COMPILER_STRIP_GATE(0x80780F2C, &lit_5721);
#pragma pop

/* 8077EE10-8077F250 004370 0440+00 1/1 0/0 0/0 .text            anm_se_set__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_se_set(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/anm_se_set__FP10e_s1_class.s"
}
#pragma pop

/* 8077F250-8077F314 0047B0 00C4+00 1/1 0/0 0/0 .text            body_eff_set__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void body_eff_set(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/body_eff_set__FP10e_s1_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780F30-80780F34 00016C 0004+00 0/1 0/0 0/0 .rodata          @5995 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5995 = -27035.0f;
COMPILER_STRIP_GATE(0x80780F30, &lit_5995);
#pragma pop

/* 80780F34-80780F38 000170 0004+00 0/1 0/0 0/0 .rodata          @5996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5996 = -35400.0f;
COMPILER_STRIP_GATE(0x80780F34, &lit_5996);
#pragma pop

/* 80780F38-80780F3C 000174 0004+00 0/1 0/0 0/0 .rodata          @5997 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5997 = -28750.0f;
COMPILER_STRIP_GATE(0x80780F38, &lit_5997);
#pragma pop

/* 80780F3C-80780F40 000178 0004+00 0/1 0/0 0/0 .rodata          @5998 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5998 = 35330.0f;
COMPILER_STRIP_GATE(0x80780F3C, &lit_5998);
#pragma pop

/* 80780F40-80780F44 00017C 0004+00 0/1 0/0 0/0 .rodata          @5999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5999 = 34270.0f;
COMPILER_STRIP_GATE(0x80780F40, &lit_5999);
#pragma pop

/* 80780F44-80780F48 000180 0004+00 0/1 0/0 0/0 .rodata          @6000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6000 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80780F44, &lit_6000);
#pragma pop

/* 80780F48-80780F4C 000184 0004+00 0/1 0/0 0/0 .rodata          @6001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6001 = 75.0f;
COMPILER_STRIP_GATE(0x80780F48, &lit_6001);
#pragma pop

/* 80780F4C-80780F50 000188 0004+00 0/1 0/0 0/0 .rodata          @6002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6002 = 22340.0f;
COMPILER_STRIP_GATE(0x80780F4C, &lit_6002);
#pragma pop

/* 80780F50-80780F54 00018C 0004+00 0/1 0/0 0/0 .rodata          @6003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6003 = 20000.0f;
COMPILER_STRIP_GATE(0x80780F50, &lit_6003);
#pragma pop

/* 80780F54-80780F58 000190 0004+00 0/1 0/0 0/0 .rodata          @6004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6004 = 130.0f;
COMPILER_STRIP_GATE(0x80780F54, &lit_6004);
#pragma pop

/* 80780F74-80780F74 0001B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80780F88 = "F_SP121";
#pragma pop

/* 8077F314-8077FC88 004874 0974+00 2/1 0/0 0/0 .text            daE_S1_Execute__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_S1_Execute(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/daE_S1_Execute__FP10e_s1_class.s"
}
#pragma pop

/* 8077FC88-8077FC90 0051E8 0008+00 1/0 0/0 0/0 .text            daE_S1_IsDelete__FP10e_s1_class */
static bool daE_S1_IsDelete(e_s1_class* param_0) {
    return true;
}

/* 8077FC90-8077FCF8 0051F0 0068+00 1/0 0/0 0/0 .text            daE_S1_Delete__FP10e_s1_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_S1_Delete(e_s1_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/daE_S1_Delete__FP10e_s1_class.s"
}
#pragma pop

/* 8077FCF8-8077FE38 005258 0140+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780F58-80780F5C 000194 0004+00 0/1 0/0 0/0 .rodata          @6234 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6234 = -200.0f;
COMPILER_STRIP_GATE(0x80780F58, &lit_6234);
#pragma pop

/* 80780F5C-80780F60 000198 0004+00 0/1 0/0 0/0 .rodata          @6235 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6235 = 200.0f;
COMPILER_STRIP_GATE(0x80780F5C, &lit_6235);
#pragma pop

/* 80780F60-80780F64 00019C 0004+00 0/1 0/0 0/0 .rodata          @6236 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6236 = -7.0f;
COMPILER_STRIP_GATE(0x80780F60, &lit_6236);
#pragma pop

/* 80780F74-80780F74 0001B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80780F90 = "D_MN08B";
SECTION_DEAD static char const* const stringBase_80780F98 = "D_MN08C";
SECTION_DEAD static char const* const stringBase_80780FA0 = "E_s1";
#pragma pop

/* 8077FE38-807803F4 005398 05BC+00 1/0 0/0 0/0 .text            daE_S1_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_S1_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/daE_S1_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807803F4-80780470 005954 007C+00 1/1 0/0 0/0 .text            __dt__7s1_ke_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s1_ke_s::~s1_ke_s() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__7s1_ke_sFv.s"
}
#pragma pop

/* 80780470-807804D8 0059D0 0068+00 1/1 0/0 0/0 .text            __ct__7s1_ke_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s1_ke_s::s1_ke_s() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__ct__7s1_ke_sFv.s"
}
#pragma pop

/* 807804D8-807804DC 005A38 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 807804DC-80780524 005A3C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80780524-8078056C 005A84 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8078056C-80780638 005ACC 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::~dCcD_Sph() {
extern "C" asm void __dt__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80780638-807806BC 005B98 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::dCcD_Sph() {
extern "C" asm void __ct__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 807806BC-80780718 005C1C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80780718-80780788 005C78 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80780788-807807F8 005CE8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 807807F8-80780840 005D58 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80780840-80780888 005DA0 0048+00 2/1 0/0 0/0 .text            __dt__12daE_S1_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_S1_HIO_c::~daE_S1_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__12daE_S1_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80780F64-80780F68 0001A0 0004+00 0/1 0/0 0/0 .rodata          @6362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6362 = -16500.0f;
COMPILER_STRIP_GATE(0x80780F64, &lit_6362);
#pragma pop

/* 80780F68-80780F6C 0001A4 0004+00 0/1 0/0 0/0 .rodata          @6363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6363 = -100.0f;
COMPILER_STRIP_GATE(0x80780F68, &lit_6363);
#pragma pop

/* 80780F6C-80780F70 0001A8 0004+00 0/1 0/0 0/0 .rodata          @6364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6364 = -16300.0f;
COMPILER_STRIP_GATE(0x80780F6C, &lit_6364);
#pragma pop

/* 80780F70-80780F74 0001AC 0004+00 0/1 0/0 0/0 .rodata          @6365 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6365 = -400.0f;
COMPILER_STRIP_GATE(0x80780F70, &lit_6365);
#pragma pop

/* 80780888-80780950 005DE8 00C8+00 0/0 1/0 0/0 .text            __sinit_d_a_e_s1_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_s1_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__sinit_d_a_e_s1_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80780888, __sinit_d_a_e_s1_cpp);
#pragma pop

/* 80780950-80780958 005EB0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80780950() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/func_80780950.s"
}
#pragma pop

/* 80780958-80780960 005EB8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80780958() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/func_80780958.s"
}
#pragma pop

/* 80780960-80780D74 005EC0 0414+00 1/1 0/0 0/0 .text
 * setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void setMidnaBindEffect(fopEn_enemy_c* param_0, Z2CreatureEnemy* param_1, cXyz* param_2,
                                   cXyz* param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz.s"
}
#pragma pop

/* 80780D74-80780DB0 0062D4 003C+00 3/3 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_s1/d_a_e_s1/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 807814F4-807814F8 0001BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_807814F4[4];
#pragma pop

/* 807814F8-807814FC 0001C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_807814F8[4];
#pragma pop

/* 807814FC-80781500 0001C4 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_807814FC[4];
#pragma pop

/* 80781500-80781504 0001C8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80781500[4];
#pragma pop

/* 80781504-80781508 0001CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80781504[4];
#pragma pop

/* 80781508-8078150C 0001D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80781508[4];
#pragma pop

/* 8078150C-80781510 0001D4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8078150C[4];
#pragma pop

/* 80781510-80781514 0001D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80781510[4];
#pragma pop

/* 80781514-80781518 0001DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80781514[4];
#pragma pop

/* 80781518-8078151C 0001E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80781518[4];
#pragma pop

/* 8078151C-80781520 0001E4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8078151C[4];
#pragma pop

/* 80781520-80781524 0001E8 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80781520[4];
#pragma pop

/* 80781524-80781528 0001EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80781524[4];
#pragma pop

/* 80781528-8078152C 0001F0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80781528[4];
#pragma pop

/* 8078152C-80781530 0001F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8078152C[4];
#pragma pop

/* 80781530-80781534 0001F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80781530[4];
#pragma pop

/* 80781534-80781538 0001FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80781534[4];
#pragma pop

/* 80781538-8078153C 000200 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80781538[4];
#pragma pop

/* 8078153C-80781540 000204 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8078153C[4];
#pragma pop

/* 80781540-80781544 000208 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80781540[4];
#pragma pop

/* 80781544-80781548 00020C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80781544[4];
#pragma pop

/* 80781548-8078154C 000210 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80781548[4];
#pragma pop

/* 8078154C-80781550 000214 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8078154C[4];
#pragma pop

/* 80781550-80781554 000218 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80781550[4];
#pragma pop

/* 80781554-80781558 00021C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80781554[4];
#pragma pop

/* 80780F74-80780F74 0001B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
