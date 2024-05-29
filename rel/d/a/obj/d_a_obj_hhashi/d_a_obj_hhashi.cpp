/**
 * @file d_a_obj_hhashi.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initCcCylinder__13daObjHHASHI_cFv();
extern "C" void setCcCylinder__13daObjHHASHI_cFv();
extern "C" static void daObjHHASHI_Create__FP10fopAc_ac_c();
extern "C" static void daObjHHASHI_Delete__FP13daObjHHASHI_c();
extern "C" void Set_Hahen__13daObjHHASHI_cFP4cXyz();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" void Set_Speed__13daObjHHASHI_cFssffff();
extern "C" void Obj_Damage__13daObjHHASHI_cFv();
extern "C" void Wall_Check__13daObjHHASHI_cFs();
extern "C" void Hahen_Motion__13daObjHHASHI_cFs();
extern "C" void CheckCull__13daObjHHASHI_cFv();
extern "C" void checkViewArea__13daObjHHASHI_cFi();
extern "C" void Rolling__13daObjHHASHI_cFP4cXyzffSc();
extern "C" void Roll_Set__13daObjHHASHI_cFP4cXyzfs();
extern "C" void setBaseMtx__13daObjHHASHI_cFv();
extern "C" static void daObjHHASHI_Draw__FP13daObjHHASHI_c();
extern "C" static void daObjHHASHI_Execute__FP13daObjHHASHI_c();
extern "C" void CreateHeap__13daObjHHASHI_cFv();
extern "C" void create__13daObjHHASHI_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjHHASHI_IsDelete__FP13daObjHHASHI_c();
extern "C" void Create__13daObjHHASHI_cFv();
extern "C" void Execute__13daObjHHASHI_cFPPA3_A4_f();
extern "C" void Draw__13daObjHHASHI_cFv();
extern "C" void Delete__13daObjHHASHI_cFv();
extern "C" extern char const* const d_a_obj_hhashi__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void ResetTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void startChainSound__12Z2CreatureFMF10JAISoundIDUcfUlSc();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
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
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 805814AC-805814F0 000000 0044+00 10/10 0/0 0/0 .rodata          ccCylSrc$3773 */
const static dCcD_SrcCyl ccCylSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x100000, 0x1f}, 0x11}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        110.0f, // mRadius
        158.0f // mHeight
    } // mCyl
};

/* 8057F9B8-8057FA18 000078 0060+00 1/1 0/0 0/0 .text            initCcCylinder__13daObjHHASHI_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/initCcCylinder__13daObjHHASHI_cFv.s"
}
#pragma pop

/* 8057FA18-8057FA4C 0000D8 0034+00 1/1 0/0 0/0 .text            setCcCylinder__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::setCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/setCcCylinder__13daObjHHASHI_cFv.s"
}
#pragma pop

/* 8057FA4C-8057FA6C 00010C 0020+00 1/0 0/0 0/0 .text            daObjHHASHI_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHHASHI_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/daObjHHASHI_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8057FA6C-8057FA90 00012C 0024+00 1/0 0/0 0/0 .text daObjHHASHI_Delete__FP13daObjHHASHI_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHHASHI_Delete(daObjHHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/daObjHHASHI_Delete__FP13daObjHHASHI_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805814F0-805814F4 000044 0004+00 0/2 0/0 0/0 .rodata          @3844 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3844 = 1.0f;
COMPILER_STRIP_GATE(0x805814F0, &lit_3844);
#pragma pop

/* 805814F4-805814F8 000048 0004+00 0/2 0/0 0/0 .rodata          @3845 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3845 = -1.0f;
COMPILER_STRIP_GATE(0x805814F4, &lit_3845);
#pragma pop

/* 805814F8-805814FC 00004C 0004+00 0/1 0/0 0/0 .rodata          @3846 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3846 = 300.0f;
COMPILER_STRIP_GATE(0x805814F8, &lit_3846);
#pragma pop

/* 805814FC-80581500 000050 0004+00 0/1 0/0 0/0 .rodata          @3847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3847 = 50.0f;
COMPILER_STRIP_GATE(0x805814FC, &lit_3847);
#pragma pop

/* 8057FA90-8057FD30 000150 02A0+00 1/1 0/0 0/0 .text            Set_Hahen__13daObjHHASHI_cFP4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Set_Hahen(cXyz* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Set_Hahen__13daObjHHASHI_cFP4cXyz.s"
}
#pragma pop

/* 8057FD30-8057FD6C 0003F0 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/__dt__4cXyzFv.s"
}
#pragma pop

/* 8057FD6C-8057FDA8 00042C 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/__dt__5csXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80581500-80581504 000054 0004+00 0/1 0/0 0/0 .rodata          @3915 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3915 = 70.0f;
COMPILER_STRIP_GATE(0x80581500, &lit_3915);
#pragma pop

/* 80581504-80581508 000058 0004+00 0/1 0/0 0/0 .rodata          @3916 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3916 = 0.5f;
COMPILER_STRIP_GATE(0x80581504, &lit_3916);
#pragma pop

/* 80581508-8058150C 00005C 0004+00 0/1 0/0 0/0 .rodata          @3917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3917 = 2.5f;
COMPILER_STRIP_GATE(0x80581508, &lit_3917);
#pragma pop

/* 8058150C-80581510 000060 0004+00 0/1 0/0 0/0 .rodata          @3918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3918 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x8058150C, &lit_3918);
#pragma pop

/* 80581510-80581514 000064 0004+00 0/1 0/0 0/0 .rodata          @3919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3919 = 1.5f;
COMPILER_STRIP_GATE(0x80581510, &lit_3919);
#pragma pop

/* 80581514-80581518 000068 0004+00 0/1 0/0 0/0 .rodata          @3920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3920 = 30.0f;
COMPILER_STRIP_GATE(0x80581514, &lit_3920);
#pragma pop

/* 80581518-8058151C 00006C 0004+00 0/1 0/0 0/0 .rodata          @3921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3921 = 32768.0f;
COMPILER_STRIP_GATE(0x80581518, &lit_3921);
#pragma pop

/* 8058151C-80581520 000070 0004+00 0/1 0/0 0/0 .rodata          @3922 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3922 = 8192.0f;
COMPILER_STRIP_GATE(0x8058151C, &lit_3922);
#pragma pop

/* 80581520-80581524 000074 0004+00 1/7 0/0 0/0 .rodata          @3923 */
SECTION_RODATA static u8 const lit_3923[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80581520, &lit_3923);

/* 80581524-80581528 000078 0004+00 0/1 0/0 0/0 .rodata          @3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3924 = 15000.0f;
COMPILER_STRIP_GATE(0x80581524, &lit_3924);
#pragma pop

/* 80581528-8058152C 00007C 0004+00 0/1 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3925 = 65536.0f;
COMPILER_STRIP_GATE(0x80581528, &lit_3925);
#pragma pop

/* 8058152C-80581530 000080 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3926 = 20.0f;
COMPILER_STRIP_GATE(0x8058152C, &lit_3926);
#pragma pop

/* 80581530-80581534 000084 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 10.0f;
COMPILER_STRIP_GATE(0x80581530, &lit_3927);
#pragma pop

/* 80581534-8058153C 000088 0004+04 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928[1 + 1 /* padding */] = {
    32000.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80581534, &lit_3928);
#pragma pop

/* 8058153C-80581544 000090 0008+00 0/2 0/0 0/0 .rodata          @3931 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3931[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8058153C, &lit_3931);
#pragma pop

/* 8057FDA8-805801B0 000468 0408+00 1/1 0/0 0/0 .text            Set_Speed__13daObjHHASHI_cFssffff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Set_Speed(s16 param_0, s16 param_1, f32 param_2, f32 param_3, f32 param_4,
                                  f32 param_5) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Set_Speed__13daObjHHASHI_cFssffff.s"
}
#pragma pop

/* ############################################################################################## */
/* 80581544-80581548 000098 0004+00 0/1 0/0 0/0 .rodata          @3979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3979 = 16384.0f;
COMPILER_STRIP_GATE(0x80581544, &lit_3979);
#pragma pop

/* 80581548-8058154C 00009C 0004+00 0/1 0/0 0/0 .rodata          @3980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3980 = 100.0f;
COMPILER_STRIP_GATE(0x80581548, &lit_3980);
#pragma pop

/* 805801B0-80580358 000870 01A8+00 1/1 0/0 0/0 .text            Obj_Damage__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Obj_Damage() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Obj_Damage__13daObjHHASHI_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058154C-80581550 0000A0 0004+00 1/1 0/0 0/0 .rodata          @4006 */
SECTION_RODATA static f32 const lit_4006 = -1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8058154C, &lit_4006);

/* 80580358-8058043C 000A18 00E4+00 1/1 0/0 0/0 .text            Wall_Check__13daObjHHASHI_cFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Wall_Check(s16 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Wall_Check__13daObjHHASHI_cFs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80581550-80581554 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4035 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4035 = 15.0f;
COMPILER_STRIP_GATE(0x80581550, &lit_4035);
#pragma pop

/* 80581554-80581558 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4036 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80581554, &lit_4036);
#pragma pop

/* 80581558-8058155C 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4037 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80581558, &lit_4037);
#pragma pop

/* 8058155C-80581560 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4038 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8058155C, &lit_4038);
#pragma pop

/* 80581560-80581564 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4039 = 4.0f;
COMPILER_STRIP_GATE(0x80581560, &lit_4039);
#pragma pop

/* 80581564-80581568 0000B8 0004+00 0/2 0/0 0/0 .rodata          @4040 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4040 = 5000.0f;
COMPILER_STRIP_GATE(0x80581564, &lit_4040);
#pragma pop

/* 80581568-8058156C 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4041 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4041 = 5.0f;
COMPILER_STRIP_GATE(0x80581568, &lit_4041);
#pragma pop

/* 8058043C-805805F4 000AFC 01B8+00 1/1 0/0 0/0 .text            Hahen_Motion__13daObjHHASHI_cFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Hahen_Motion(s16 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Hahen_Motion__13daObjHHASHI_cFs.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058156C-80581574 0000C0 0008+00 0/3 0/0 0/0 .rodata          @4103 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4103[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8058156C, &lit_4103);
#pragma pop

/* 80581574-8058157C 0000C8 0008+00 0/3 0/0 0/0 .rodata          @4104 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4104[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80581574, &lit_4104);
#pragma pop

/* 8058157C-80581584 0000D0 0008+00 0/3 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4105[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8058157C, &lit_4105);
#pragma pop

/* 80581584-80581588 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4106 = 1500.0f;
COMPILER_STRIP_GATE(0x80581584, &lit_4106);
#pragma pop

/* 805805F4-805807C4 000CB4 01D0+00 1/1 0/0 0/0 .text            CheckCull__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::CheckCull() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/CheckCull__13daObjHHASHI_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80581588-8058158C 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4119 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4119 = 608.0f;
COMPILER_STRIP_GATE(0x80581588, &lit_4119);
#pragma pop

/* 8058158C-80581590 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4120 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4120 = 448.0f;
COMPILER_STRIP_GATE(0x8058158C, &lit_4120);
#pragma pop

/* 805807C4-80580854 000E84 0090+00 1/1 0/0 0/0 .text            checkViewArea__13daObjHHASHI_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::checkViewArea(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/checkViewArea__13daObjHHASHI_cFi.s"
}
#pragma pop

/* 80580854-80580A48 000F14 01F4+00 0/0 0/0 1/1 .text            Rolling__13daObjHHASHI_cFP4cXyzffSc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Rolling(cXyz* param_0, f32 param_1, f32 param_2, s8 param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Rolling__13daObjHHASHI_cFP4cXyzffSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80581590-80581594 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4214 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4214 = 3.0f;
COMPILER_STRIP_GATE(0x80581590, &lit_4214);
#pragma pop

/* 80580A48-80580C80 001108 0238+00 1/1 0/0 0/0 .text            Roll_Set__13daObjHHASHI_cFP4cXyzfs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Roll_Set(cXyz* param_0, f32 param_1, s16 param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Roll_Set__13daObjHHASHI_cFP4cXyzfs.s"
}
#pragma pop

/* 80580C80-80580D58 001340 00D8+00 1/1 0/0 0/0 .text            setBaseMtx__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/setBaseMtx__13daObjHHASHI_cFv.s"
}
#pragma pop

/* 80580D58-80580D84 001418 002C+00 1/0 0/0 0/0 .text            daObjHHASHI_Draw__FP13daObjHHASHI_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHHASHI_Draw(daObjHHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/daObjHHASHI_Draw__FP13daObjHHASHI_c.s"
}
#pragma pop

/* 80580D84-80580DA4 001444 0020+00 2/1 0/0 0/0 .text daObjHHASHI_Execute__FP13daObjHHASHI_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHHASHI_Execute(daObjHHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/daObjHHASHI_Execute__FP13daObjHHASHI_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805815AC-805815AC 000100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805815AC = "L_hhashi";
SECTION_DEAD static char const* const stringBase_805815B5 = "L_hhashi00.bmd";
SECTION_DEAD static char const* const stringBase_805815C4 = "L_hhashi02.bmd";
#pragma pop

/* 805815E4-805815E8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_hhashi__stringBase0;

/* 80580DA4-80580EA0 001464 00FC+00 1/0 0/0 0/0 .text            CreateHeap__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/CreateHeap__13daObjHHASHI_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80581594-80581598 0000E8 0004+00 1/1 0/0 0/0 .rodata          @4365 */
SECTION_RODATA static f32 const lit_4365 = -9.0f;
COMPILER_STRIP_GATE(0x80581594, &lit_4365);

/* 805815AC-805815AC 000100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805815D3 = "L_hhashi00.dzb";
#pragma pop

/* 805815E8-80581608 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjHHASHI_Method */
static actor_method_class l_daObjHHASHI_Method = {
    (process_method_func)daObjHHASHI_Create__FP10fopAc_ac_c,
    (process_method_func)daObjHHASHI_Delete__FP13daObjHHASHI_c,
    (process_method_func)daObjHHASHI_Execute__FP13daObjHHASHI_c,
    (process_method_func)daObjHHASHI_IsDelete__FP13daObjHHASHI_c,
    (process_method_func)daObjHHASHI_Draw__FP13daObjHHASHI_c,
};

/* 80581608-80581638 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_HHASHI */
extern actor_process_profile_definition g_profile_Obj_HHASHI = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_HHASHI,        // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjHHASHI_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  462,                    // mPriority
  &l_daObjHHASHI_Method,  // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80581638-80581644 000054 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80581644-80581650 000060 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80581650-80581678 00006C 0028+00 1/1 0/0 0/0 .data            __vt__13daObjHHASHI_c */
SECTION_DATA extern void* __vt__13daObjHHASHI_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daObjHHASHI_cFv,
    (void*)Create__13daObjHHASHI_cFv,
    (void*)Execute__13daObjHHASHI_cFPPA3_A4_f,
    (void*)Draw__13daObjHHASHI_cFv,
    (void*)Delete__13daObjHHASHI_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80580EA0-8058112C 001560 028C+00 1/1 0/0 0/0 .text            create__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/create__13daObjHHASHI_cFv.s"
}
#pragma pop

/* 8058112C-80581174 0017EC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80581174-805811BC 001834 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 805811BC-805811C0 00187C 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" asm void __ct__5csXyzFv() {
    /* empty function */
}

/* 805811C0-805811C4 001880 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 805811C4-805811CC 001884 0008+00 1/0 0/0 0/0 .text daObjHHASHI_IsDelete__FP13daObjHHASHI_c */
static bool daObjHHASHI_IsDelete(daObjHHASHI_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80581598-8058159C 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4443 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4443 = -1000.0f;
COMPILER_STRIP_GATE(0x80581598, &lit_4443);
#pragma pop

/* 8058159C-805815A0 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4444 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4444 = -500.0f;
COMPILER_STRIP_GATE(0x8058159C, &lit_4444);
#pragma pop

/* 805815A0-805815A4 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4445 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4445 = 1000.0f;
COMPILER_STRIP_GATE(0x805815A0, &lit_4445);
#pragma pop

/* 805815A4-805815A8 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4446 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4446 = 500.0f;
COMPILER_STRIP_GATE(0x805815A4, &lit_4446);
#pragma pop

/* 805811CC-80581210 00188C 0044+00 1/0 0/0 0/0 .text            Create__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/func_805811CC.s"
}
#pragma pop

/* 80581210-805812BC 0018D0 00AC+00 1/0 0/0 0/0 .text            Execute__13daObjHHASHI_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Execute__13daObjHHASHI_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 805815A8-805815AC 0000FC 0004+00 1/1 0/0 0/0 .rodata          @4485 */
SECTION_RODATA static f32 const lit_4485 = 200.0f;
COMPILER_STRIP_GATE(0x805815A8, &lit_4485);

/* 805812BC-8058140C 00197C 0150+00 1/0 0/0 0/0 .text            Draw__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Draw__13daObjHHASHI_cFv.s"
}
#pragma pop

/* 8058140C-805814A4 001ACC 0098+00 1/0 0/0 0/0 .text            Delete__13daObjHHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHHASHI_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hhashi/d_a_obj_hhashi/Delete__13daObjHHASHI_cFv.s"
}
#pragma pop

/* 805815AC-805815AC 000100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
