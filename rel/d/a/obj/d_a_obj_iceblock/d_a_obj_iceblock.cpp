/**
 * @file d_a_obj_iceblock.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"




//
// Forward References:
//

extern "C" void
PPCallBack__13daObjIceBlk_cFP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel();
extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void initBaseMtx__13daObjIceBlk_cFv();
extern "C" void setBaseMtx__13daObjIceBlk_cFv();
extern "C" void getPointNo__13daObjIceBlk_cFv();
extern "C" void loadCurrentPos__13daObjIceBlk_cFv();
extern "C" void saveCurrentPos__13daObjIceBlk_cFv();
extern "C" void enablePushPull__13daObjIceBlk_cFv();
extern "C" void disablePushPull__13daObjIceBlk_cFv();
extern "C" void Create__13daObjIceBlk_cFv();
extern "C" void CreateHeap__13daObjIceBlk_cFv();
extern "C" void create1st__13daObjIceBlk_cFv();
extern "C" void Execute__13daObjIceBlk_cFPPA3_A4_f();
extern "C" void checkWalk__13daObjIceBlk_cFv();
extern "C" void clrCounter__13daObjIceBlk_cFv();
extern "C" void mode_proc_call__13daObjIceBlk_cFv();
extern "C" void mode_init_wait__13daObjIceBlk_cFv();
extern "C" void mode_proc_wait__13daObjIceBlk_cFv();
extern "C" void mode_init_walk__13daObjIceBlk_cFv();
extern "C" void mode_proc_walk__13daObjIceBlk_cFv();
extern "C" void setEffect__13daObjIceBlk_cFv();
extern "C" void checkWallPre__13daObjIceBlk_cFs();
extern "C" void checkBgHit__13daObjIceBlk_cFv();
extern "C" void bgCheck__13daObjIceBlk_cFv();
extern "C" void init_bgCheck__13daObjIceBlk_cFv();
extern "C" void checkFall__13daObjIceBlk_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void event_proc_call__13daObjIceBlk_cFv();
extern "C" void actionWait__13daObjIceBlk_cFv();
extern "C" void actionOrderEvent__13daObjIceBlk_cFv();
extern "C" void actionEvent__13daObjIceBlk_cFv();
extern "C" void actionDead__13daObjIceBlk_cFv();
extern "C" void Draw__13daObjIceBlk_cFv();
extern "C" void Delete__13daObjIceBlk_cFv();
extern "C" static void daObjIceBlk_create1st__FP13daObjIceBlk_c();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daObjIceBlk_MoveBGDelete__FP13daObjIceBlk_c();
extern "C" static void daObjIceBlk_MoveBGExecute__FP13daObjIceBlk_c();
extern "C" static void daObjIceBlk_MoveBGDraw__FP13daObjIceBlk_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_80C242C4();
extern "C" static void func_80C242CC();
extern "C" static void func_80C242D4();
extern "C" static void func_80C242DC();
extern "C" static void func_80C242E4();
extern "C" extern char const* const d_a_obj_iceblock__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_setupShareTexture__FP12J3DModelDataP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_posMove__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void entry__10daMirror_cFP8J3DModel();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Trans__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void RideCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__14dBgS_ObjLinChkFv();
extern "C" void __dt__14dBgS_ObjLinChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cBgW_CheckBGround__Ff();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 BaseZ__4cXyz[12];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80C24698[4];

//
// Declarations:
//

/* 80C21CD8-80C21DAC 000078 00D4+00 1/1 0/0 0/0 .text
 * PPCallBack__13daObjIceBlk_cFP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::PPCallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1, s16 param_2,
                                   dBgW_Base::PushPullLabel param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/func_80C21CD8.s"
}
#pragma pop

/* 80C21DAC-80C21DC4 00014C 0018+00 1/1 0/0 0/0 .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80C21DC4-80C21E24 000164 0060+00 1/1 0/0 0/0 .text            initBaseMtx__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/initBaseMtx__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C21E24-80C21EA4 0001C4 0080+00 2/2 0/0 0/0 .text            setBaseMtx__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/setBaseMtx__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C21EA4-80C21F2C 000244 0088+00 1/1 0/0 0/0 .text            getPointNo__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::getPointNo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/getPointNo__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C21F2C-80C21FC8 0002CC 009C+00 1/1 0/0 0/0 .text            loadCurrentPos__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::loadCurrentPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/loadCurrentPos__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C242F4-80C24324 000000 0030+00 8/8 0/0 0/0 .rodata          l_dir_vec */
SECTION_RODATA static u8 const l_dir_vec[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xBF, 0x80, 0x00, 0x00, 0xBF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C242F4, &l_dir_vec);

/* 80C24324-80C2432C 000030 0008+00 1/3 0/0 0/0 .rodata          l_dir_angle */
SECTION_RODATA static u8 const l_dir_angle[8] = {
    0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 0xC0, 0x00,
};
COMPILER_STRIP_GATE(0x80C24324, &l_dir_angle);

/* 80C2432C-80C24370 000038 0044+00 0/1 0/0 0/0 .rodata          l_cyl_src */
#pragma push
#pragma force_active on
const static dCcD_SrcCyl l_cyl_src = {
    {
        {0x0, {{0x100, 0x1, 0x1d}, {0x400000, 0x11}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x2, 0x1}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x6}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        180.0f, // mRadius
        290.0f // mHeight
    } // mCyl
};
#pragma pop

/* 80C24370-80C24374 00007C 0004+00 2/5 0/0 0/0 .rodata          @3936 */
SECTION_RODATA static u8 const lit_3936[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C24370, &lit_3936);

/* 80C24374-80C2437C 000080 0008+00 0/1 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3937[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C24374, &lit_3937);
#pragma pop

/* 80C2437C-80C24384 000088 0008+00 0/1 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3938[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C2437C, &lit_3938);
#pragma pop

/* 80C24384-80C2438C 000090 0008+00 0/1 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3939[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C24384, &lit_3939);
#pragma pop

/* 80C2438C-80C24390 000098 0004+00 0/1 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 5.0f;
COMPILER_STRIP_GATE(0x80C2438C, &lit_3940);
#pragma pop

/* 80C21FC8-80C22200 000368 0238+00 2/2 0/0 0/0 .text            saveCurrentPos__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::saveCurrentPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/saveCurrentPos__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C22200-80C2224C 0005A0 004C+00 1/1 0/0 0/0 .text            enablePushPull__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::enablePushPull() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/enablePushPull__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C2224C-80C22298 0005EC 004C+00 2/2 0/0 0/0 .text            disablePushPull__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::disablePushPull() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/disablePushPull__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C24390-80C24394 00009C 0004+00 0/1 0/0 0/0 .rodata          l_eff_id$4008 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_eff_id[4] = {
    0x8A,
    0xE1,
    0x8A,
    0xE2,
};
COMPILER_STRIP_GATE(0x80C24390, &l_eff_id);
#pragma pop

/* 80C24394-80C24398 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4078 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4078 = 30.0f;
COMPILER_STRIP_GATE(0x80C24394, &lit_4078);
#pragma pop

/* 80C24398-80C2439C 0000A4 0004+00 2/3 0/0 0/0 .rodata          @4079 */
SECTION_RODATA static f32 const lit_4079 = -6.0f;
COMPILER_STRIP_GATE(0x80C24398, &lit_4079);

/* 80C2439C-80C243A0 0000A8 0004+00 0/5 0/0 0/0 .rodata          @4080 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4080 = 1.0f;
COMPILER_STRIP_GATE(0x80C2439C, &lit_4080);
#pragma pop

/* 80C2449C-80C2449C 0001A8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C2449C = "Y_icecube";
SECTION_DEAD static char const* const stringBase_80C244A6 =
    "氷ブロック：パスポイント数が多すぎます！\n";
#pragma pop

/* 80C22298-80C22618 000638 0380+00 1/0 0/0 0/0 .text            Create__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/Create__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C243A0-80C243A8 0000AC 0008+00 1/1 0/0 0/0 .rodata          l_bmd$4084 */
SECTION_RODATA static u8 const l_bmd[8] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x08,
};
COMPILER_STRIP_GATE(0x80C243A0, &l_bmd);

/* 80C244D0-80C244DC 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C244DC-80C244F0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C244F0-80C244F4 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_iceblock__stringBase0;

/* 80C22618-80C227F4 0009B8 01DC+00 1/0 0/0 0/0 .text            CreateHeap__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/CreateHeap__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C227F4-80C228B4 000B94 00C0+00 1/1 0/0 0/0 .text            create1st__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/create1st__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C228B4-80C2294C 000C54 0098+00 1/0 0/0 0/0 .text            Execute__13daObjIceBlk_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/Execute__13daObjIceBlk_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C2294C-80C22B04 000CEC 01B8+00 1/1 0/0 0/0 .text            checkWalk__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::checkWalk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/checkWalk__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C22B04-80C22B28 000EA4 0024+00 3/3 0/0 0/0 .text            clrCounter__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::clrCounter() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/clrCounter__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C243A8-80C243AC 0000B4 0004+00 0/3 0/0 0/0 .rodata          @4361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4361 = -1.0f;
COMPILER_STRIP_GATE(0x80C243A8, &lit_4361);
#pragma pop

/* 80C244F4-80C24500 -00001 000C+00 0/1 0/0 0/0 .data            @4231 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4231[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_wait__13daObjIceBlk_cFv,
};
#pragma pop

/* 80C24500-80C2450C -00001 000C+00 0/1 0/0 0/0 .data            @4232 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4232[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_walk__13daObjIceBlk_cFv,
};
#pragma pop

/* 80C2450C-80C24524 00003C 0018+00 0/1 0/0 0/0 .data            l_func$4230 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_4230[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C22B28-80C22EF8 000EC8 03D0+00 1/1 0/0 0/0 .text            mode_proc_call__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::mode_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/mode_proc_call__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C22EF8-80C22F74 001298 007C+00 2/2 0/0 0/0 .text            mode_init_wait__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::mode_init_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/mode_init_wait__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C22F74-80C23058 001314 00E4+00 1/0 0/0 0/0 .text            mode_proc_wait__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::mode_proc_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/mode_proc_wait__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23058-80C23088 0013F8 0030+00 1/1 0/0 0/0 .text            mode_init_walk__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::mode_init_walk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/mode_init_walk__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C243AC-80C243B0 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4451 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4451 = 21.0f;
COMPILER_STRIP_GATE(0x80C243AC, &lit_4451);
#pragma pop

/* 80C243B0-80C243B4 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4452 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4452 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80C243B0, &lit_4452);
#pragma pop

/* 80C243B4-80C243B8 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4453 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4453 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80C243B4, &lit_4453);
#pragma pop

/* 80C243B8-80C243BC 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4454 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4454 = 27.0f;
COMPILER_STRIP_GATE(0x80C243B8, &lit_4454);
#pragma pop

/* 80C243BC-80C243C0 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4455 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4455 = 23.0f;
COMPILER_STRIP_GATE(0x80C243BC, &lit_4455);
#pragma pop

/* 80C243C0-80C243C4 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4456 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4456 = 300.0f;
COMPILER_STRIP_GATE(0x80C243C0, &lit_4456);
#pragma pop

/* 80C243C4-80C243CC 0000D0 0008+00 0/1 0/0 0/0 .rodata          @4459 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4459[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C243C4, &lit_4459);
#pragma pop

/* 80C23088-80C23388 001428 0300+00 1/0 0/0 0/0 .text            mode_proc_walk__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::mode_proc_walk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/mode_proc_walk__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C243CC-80C243D0 0000D8 0004+00 0/1 0/0 0/0 .rodata          l_eff_break_b$4463 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_eff_break_b[4] = {
    0x86,
    0x79,
    0x86,
    0x7A,
};
COMPILER_STRIP_GATE(0x80C243CC, &l_eff_break_b);
#pragma pop

/* 80C243D0-80C243D4 0000DC 0004+00 0/1 0/0 0/0 .rodata          l_eff_break_id$4464 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_eff_break_id[4] = {
    0x8A,
    0xDF,
    0x8A,
    0xE0,
};
COMPILER_STRIP_GATE(0x80C243D0, &l_eff_break_id);
#pragma pop

/* 80C23388-80C2350C 001728 0184+00 1/1 0/0 0/0 .text            setEffect__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::setEffect() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/setEffect__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C243D4-80C24410 0000E0 003C+00 0/1 0/0 0/0 .rodata          l_check_offsetXY$4509 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_check_offsetXY[60] = {
    0xC3, 0x11, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x11, 0x00,
    0x00, 0x43, 0x93, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x43, 0x93,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C243D4, &l_check_offsetXY);
#pragma pop

/* 80C24410-80C24414 00011C 0004+00 0/1 0/0 0/0 .rodata          @4571 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4571 = 150.0f;
COMPILER_STRIP_GATE(0x80C24410, &lit_4571);
#pragma pop

/* 80C24414-80C24418 000120 0004+00 0/1 0/0 0/0 .rodata          @4572 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4572 = 155.0f;
COMPILER_STRIP_GATE(0x80C24414, &lit_4572);
#pragma pop

/* 80C2350C-80C236C8 0018AC 01BC+00 2/2 0/0 0/0 .text            checkWallPre__13daObjIceBlk_cFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::checkWallPre(s16 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/checkWallPre__13daObjIceBlk_cFs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C24418-80C24454 000124 003C+00 0/1 0/0 0/0 .rodata          l_check_offsetXZ$4577 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_check_offsetXZ_4577[60] = {
    0xC3, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x11, 0x00, 0x00, 0xC3, 0x11, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3,
    0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C24418, &l_check_offsetXZ_4577);
#pragma pop

/* 80C24454-80C24458 000160 0004+00 0/1 0/0 0/0 .rodata          @4603 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4603 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80C24454, &lit_4603);
#pragma pop

/* 80C24458-80C2445C 000164 0004+00 0/1 0/0 0/0 .rodata          @4604 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4604 = 100.0f;
COMPILER_STRIP_GATE(0x80C24458, &lit_4604);
#pragma pop

/* 80C236C8-80C237B0 001A68 00E8+00 2/2 0/0 0/0 .text            checkBgHit__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::checkBgHit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/checkBgHit__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C237B0-80C23860 001B50 00B0+00 1/1 0/0 0/0 .text            bgCheck__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::bgCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/bgCheck__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23860-80C238B0 001C00 0050+00 1/1 0/0 0/0 .text            init_bgCheck__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::init_bgCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/init_bgCheck__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2445C-80C24498 000168 003C+00 1/1 0/0 0/0 .rodata          l_check_offsetXZ$4641 */
SECTION_RODATA static u8 const l_check_offsetXZ_4641[60] = {
    0xC3, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x11, 0x00, 0x00, 0xC3, 0x11, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x43, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3,
    0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C2445C, &l_check_offsetXZ_4641);

/* 80C24498-80C2449C 0001A4 0004+00 1/1 0/0 0/0 .rodata          @4696 */
SECTION_RODATA static f32 const lit_4696 = 50.0f;
COMPILER_STRIP_GATE(0x80C24498, &lit_4696);

/* 80C24524-80C24530 -00001 000C+00 0/1 0/0 0/0 .data            @4705 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4705[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__13daObjIceBlk_cFv,
};
#pragma pop

/* 80C24530-80C2453C -00001 000C+00 0/1 0/0 0/0 .data            @4706 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4706[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__13daObjIceBlk_cFv,
};
#pragma pop

/* 80C2453C-80C24548 -00001 000C+00 0/1 0/0 0/0 .data            @4707 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4707[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__13daObjIceBlk_cFv,
};
#pragma pop

/* 80C24548-80C24554 -00001 000C+00 0/1 0/0 0/0 .data            @4708 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4708[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__13daObjIceBlk_cFv,
};
#pragma pop

/* 80C24554-80C24584 000084 0030+00 0/1 0/0 0/0 .data            l_func$4704 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_4704[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C24584-80C245A4 -00001 0020+00 1/0 0/0 0/0 .data            daObjIceBlk_METHODS */
static actor_method_class daObjIceBlk_METHODS = {
    (process_method_func)daObjIceBlk_create1st__FP13daObjIceBlk_c,
    (process_method_func)daObjIceBlk_MoveBGDelete__FP13daObjIceBlk_c,
    (process_method_func)daObjIceBlk_MoveBGExecute__FP13daObjIceBlk_c,
    0,
    (process_method_func)daObjIceBlk_MoveBGDraw__FP13daObjIceBlk_c,
};

/* 80C245A4-80C245D4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_IceBlock */
extern actor_process_profile_definition g_profile_Obj_IceBlock = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_IceBlock,      // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjIceBlk_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  535,                    // mPriority
  &daObjIceBlk_METHODS,   // sub_method
  0x00040500,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C245D4-80C245E0 000104 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80C245E0-80C245EC 000110 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C245EC-80C245F8 00011C 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C245F8-80C24628 000128 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C242D4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C242E4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C242DC,
};

/* 80C24628-80C24634 000158 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C24634-80C24640 000164 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C24640-80C24664 000170 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C242CC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C242C4,
};

/* 80C24664-80C24670 000194 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80C238B0-80C23A08 001C50 0158+00 1/1 0/0 0/0 .text            checkFall__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::checkFall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/checkFall__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23A08-80C23A50 001DA8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGPla::~cM3dGPla() {
extern "C" asm void __dt__8cM3dGPlaFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80C23A50-80C23B0C 001DF0 00BC+00 1/1 0/0 0/0 .text            event_proc_call__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/event_proc_call__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23B0C-80C23B70 001EAC 0064+00 1/0 0/0 0/0 .text            actionWait__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/actionWait__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23B70-80C23C1C 001F10 00AC+00 1/0 0/0 0/0 .text            actionOrderEvent__13daObjIceBlk_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::actionOrderEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/actionOrderEvent__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23C1C-80C23CA0 001FBC 0084+00 1/0 0/0 0/0 .text            actionEvent__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/actionEvent__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23CA0-80C23CA4 002040 0004+00 1/0 0/0 0/0 .text            actionDead__13daObjIceBlk_cFv */
void daObjIceBlk_c::actionDead() {
    /* empty function */
}

/* 80C23CA4-80C23DA8 002044 0104+00 1/0 0/0 0/0 .text            Draw__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/Draw__13daObjIceBlk_cFv.s"
}
#pragma pop

/* 80C23DA8-80C23E68 002148 00C0+00 1/0 0/0 0/0 .text            Delete__13daObjIceBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIceBlk_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/Delete__13daObjIceBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C24670-80C24698 0001A0 0028+00 1/1 0/0 0/0 .data            __vt__13daObjIceBlk_c */
SECTION_DATA extern void* __vt__13daObjIceBlk_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daObjIceBlk_cFv,
    (void*)Create__13daObjIceBlk_cFv,
    (void*)Execute__13daObjIceBlk_cFPPA3_A4_f,
    (void*)Draw__13daObjIceBlk_cFv,
    (void*)Delete__13daObjIceBlk_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C23E68-80C23FCC 002208 0164+00 1/0 0/0 0/0 .text daObjIceBlk_create1st__FP13daObjIceBlk_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceBlk_create1st(daObjIceBlk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/daObjIceBlk_create1st__FP13daObjIceBlk_c.s"
}
#pragma pop

/* 80C23FCC-80C24044 00236C 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" asm void __dt__14dBgS_ObjGndChkFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 80C24044-80C2408C 0023E4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C2408C-80C240D4 00242C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C240D4-80C24130 002474 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C24130-80C241A0 0024D0 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80C241A0-80C24210 002540 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C24210-80C24230 0025B0 0020+00 1/0 0/0 0/0 .text daObjIceBlk_MoveBGDelete__FP13daObjIceBlk_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceBlk_MoveBGDelete(daObjIceBlk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/daObjIceBlk_MoveBGDelete__FP13daObjIceBlk_c.s"
}
#pragma pop

/* 80C24230-80C24250 0025D0 0020+00 1/0 0/0 0/0 .text daObjIceBlk_MoveBGExecute__FP13daObjIceBlk_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceBlk_MoveBGExecute(daObjIceBlk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/daObjIceBlk_MoveBGExecute__FP13daObjIceBlk_c.s"
}
#pragma pop

/* 80C24250-80C2427C 0025F0 002C+00 1/0 0/0 0/0 .text daObjIceBlk_MoveBGDraw__FP13daObjIceBlk_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIceBlk_MoveBGDraw(daObjIceBlk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/daObjIceBlk_MoveBGDraw__FP13daObjIceBlk_c.s"
}
#pragma pop

/* 80C2427C-80C242C4 00261C 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C242C4-80C242CC 002664 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C242C4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/func_80C242C4.s"
}
#pragma pop

/* 80C242CC-80C242D4 00266C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C242CC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/func_80C242CC.s"
}
#pragma pop

/* 80C242D4-80C242DC 002674 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C242D4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/func_80C242D4.s"
}
#pragma pop

/* 80C242DC-80C242E4 00267C 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C242DC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/func_80C242DC.s"
}
#pragma pop

/* 80C242E4-80C242EC 002684 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C242E4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_iceblock/d_a_obj_iceblock/func_80C242E4.s"
}
#pragma pop

/* 80C2449C-80C2449C 0001A8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
