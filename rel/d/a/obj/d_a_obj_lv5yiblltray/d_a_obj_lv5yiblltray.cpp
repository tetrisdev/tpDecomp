/**
 * @file d_a_obj_lv5yiblltray.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void create1st__16daObjYIblltray_cFv();
extern "C" void setMtx__16daObjYIblltray_cFv();
extern "C" void CreateHeap__16daObjYIblltray_cFv();
extern "C" static void rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void Create__16daObjYIblltray_cFv();
extern "C" void rideActor__16daObjYIblltray_cFP10fopAc_ac_c();
extern "C" void sendBall__16daObjYIblltray_cFUi();
extern "C" static void searchObjYIblltray__FPvPv();
extern "C" static void searchNearIronball__FPvPv();
extern "C" static void searchNearBackTrayIronball__FPvPv();
extern "C" void onAttention__16daObjYIblltray_cFv();
extern "C" void offAttention__16daObjYIblltray_cFv();
extern "C" void Execute__16daObjYIblltray_cFPPA3_A4_f();
extern "C" void initRotTo__16daObjYIblltray_cFv();
extern "C" void Draw__16daObjYIblltray_cFv();
extern "C" void Delete__16daObjYIblltray_cFv();
extern "C" static void daObjYIblltray_create1st__FP16daObjYIblltray_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static void daObjYIblltray_MoveBGDelete__FP16daObjYIblltray_c();
extern "C" static void daObjYIblltray_MoveBGExecute__FP16daObjYIblltray_c();
extern "C" static void daObjYIblltray_MoveBGDraw__FP16daObjYIblltray_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daObjYIblltray_cFv();
extern "C" extern char const* const d_a_obj_lv5yiblltray__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
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
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void SetVsGrp__10cCcD_ObjCoFUl();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
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
/* 80C70A2C-80C70A2C 00008C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C70A2C = "YIblltray";
#pragma pop

/* 80C70A38-80C70A3C -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_lv5yiblltray__stringBase0;

/* 80C6EBF8-80C6EC88 000078 0090+00 1/1 0/0 0/0 .text            create1st__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/create1st__16daObjYIblltray_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C709A0-80C709B8 000000 0018+00 3/3 0/0 0/0 .rodata          l_cull_box */
SECTION_RODATA static u8 const l_cull_box[24] = {
    0xC3, 0x6E, 0xF5, 0xC2, 0xC3, 0x48, 0x00, 0x00, 0xC3, 0x06, 0x38, 0x52,
    0x43, 0x6E, 0xF5, 0xC2, 0x43, 0x48, 0x00, 0x00, 0x43, 0x5A, 0xAB, 0x85,
};
COMPILER_STRIP_GATE(0x80C709A0, &l_cull_box);

/* 80C709B8-80C709BC 000018 0004+00 0/2 0/0 0/0 .rodata          @3692 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3692 = 125.0f;
COMPILER_STRIP_GATE(0x80C709B8, &lit_3692);
#pragma pop

/* 80C709BC-80C709C0 00001C 0004+00 0/3 0/0 0/0 .rodata          @3693 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3693 = 100.0f;
COMPILER_STRIP_GATE(0x80C709BC, &lit_3693);
#pragma pop

/* 80C709C0-80C709C4 000020 0004+00 3/6 0/0 0/0 .rodata          @3694 */
SECTION_RODATA static u8 const lit_3694[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C709C0, &lit_3694);

/* 80C709C4-80C709C8 000024 0004+00 0/2 0/0 0/0 .rodata          @3695 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3695 = -125.0f;
COMPILER_STRIP_GATE(0x80C709C4, &lit_3695);
#pragma pop

/* 80C70A3C-80C70A48 000004 000C+00 1/1 0/0 0/0 .data            l_in_ball */
SECTION_DATA static u8 l_in_ball[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xAE, 0x00, 0x00,
};

/* 80C70A48-80C70A54 000010 000C+00 1/1 0/0 0/0 .data            l_base */
SECTION_DATA static u8 l_base[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x70, 0x00, 0x00,
};

/* 80C6EC88-80C6EDA8 000108 0120+00 3/3 0/0 0/0 .text            setMtx__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/setMtx__16daObjYIblltray_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C709C8-80C709CC 000028 0004+00 1/2 0/0 0/0 .rodata          @3719 */
SECTION_RODATA static f32 const lit_3719 = 1.0f;
COMPILER_STRIP_GATE(0x80C709C8, &lit_3719);

/* 80C6EDA8-80C6EED4 000228 012C+00 1/0 0/0 0/0 .text            CreateHeap__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/CreateHeap__16daObjYIblltray_cFv.s"
}
#pragma pop

/* 80C6EED4-80C6EEFC 000354 0028+00 1/1 0/0 0/0 .text
 * rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void rideCallback(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C709CC-80C709D0 00002C 0004+00 0/1 0/0 0/0 .rodata          @3797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3797 = 40.0f;
COMPILER_STRIP_GATE(0x80C709CC, &lit_3797);
#pragma pop

/* 80C709D0-80C709D4 000030 0004+00 0/1 0/0 0/0 .rodata          @3798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3798 = 300.0f;
COMPILER_STRIP_GATE(0x80C709D0, &lit_3798);
#pragma pop

/* 80C709D4-80C709D8 000034 0004+00 0/2 0/0 0/0 .rodata          @3799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3799 = 10.0f;
COMPILER_STRIP_GATE(0x80C709D4, &lit_3799);
#pragma pop

/* 80C709D8-80C709E0 000038 0008+00 0/2 0/0 0/0 .rodata          @3801 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3801[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C709D8, &lit_3801);
#pragma pop

/* 80C70A54-80C70A60 00001C 000C+00 1/1 0/0 0/0 .data            l_back_pos */
SECTION_DATA static u8 l_back_pos[12] = {
    0x00, 0x00, 0x00, 0x00, 0xC2, 0x50, 0x00, 0x00, 0xC3, 0xB8, 0x80, 0x00,
};

/* 80C70A60-80C70AA4 000028 0044+00 1/1 0/0 0/0 .data            l_cc_cyl_src */
static dCcD_SrcCyl l_cc_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x39}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x5, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        90.0f, // mRadius
        200.0f // mHeight
    } // mCyl
};

/* 80C6EEFC-80C6F1E8 00037C 02EC+00 1/0 0/0 0/0 .text            Create__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/Create__16daObjYIblltray_cFv.s"
}
#pragma pop

/* 80C6F1E8-80C6F23C 000668 0054+00 2/2 0/0 0/0 .text rideActor__16daObjYIblltray_cFP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::rideActor(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/rideActor__16daObjYIblltray_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80C6F23C-80C6F2BC 0006BC 0080+00 1/1 0/0 0/0 .text            sendBall__16daObjYIblltray_cFUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::sendBall(unsigned int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/sendBall__16daObjYIblltray_cFUi.s"
}
#pragma pop

/* 80C6F2BC-80C6F338 00073C 007C+00 1/1 0/0 0/0 .text            searchObjYIblltray__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void searchObjYIblltray(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/searchObjYIblltray__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C709E0-80C709E4 000040 0004+00 2/2 0/0 0/0 .rodata          @3868 */
SECTION_RODATA static f32 const lit_3868 = 900.0f;
COMPILER_STRIP_GATE(0x80C709E0, &lit_3868);

/* 80C6F338-80C6F3BC 0007B8 0084+00 1/1 0/0 0/0 .text            searchNearIronball__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void searchNearIronball(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/searchNearIronball__FPvPv.s"
}
#pragma pop

/* 80C6F3BC-80C6F440 00083C 0084+00 1/1 0/0 0/0 .text            searchNearBackTrayIronball__FPvPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void searchNearBackTrayIronball(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/searchNearBackTrayIronball__FPvPv.s"
}
#pragma pop

/* 80C6F440-80C6F450 0008C0 0010+00 1/1 0/0 0/0 .text            onAttention__16daObjYIblltray_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::onAttention() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/onAttention__16daObjYIblltray_cFv.s"
}
#pragma pop

/* 80C6F450-80C6F460 0008D0 0010+00 1/1 0/0 0/0 .text            offAttention__16daObjYIblltray_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::offAttention() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/offAttention__16daObjYIblltray_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C709E4-80C709E8 000044 0004+00 0/1 0/0 0/0 .rodata          @4438 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4438 = -1.0f;
COMPILER_STRIP_GATE(0x80C709E4, &lit_4438);
#pragma pop

/* 80C709E8-80C709F0 000048 0004+04 0/1 0/0 0/0 .rodata          @4439 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4439[1 + 1 /* padding */] = {
    -1.0f / 10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80C709E8, &lit_4439);
#pragma pop

/* 80C709F0-80C709F8 000050 0008+00 0/1 0/0 0/0 .rodata          @4440 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4440[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C709F0, &lit_4440);
#pragma pop

/* 80C709F8-80C70A00 000058 0008+00 0/1 0/0 0/0 .rodata          @4441 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4441[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C709F8, &lit_4441);
#pragma pop

/* 80C70A00-80C70A08 000060 0008+00 0/1 0/0 0/0 .rodata          @4442 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4442[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C70A00, &lit_4442);
#pragma pop

/* 80C70A08-80C70A0C 000068 0004+00 0/1 0/0 0/0 .rodata          @4443 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4443 = 30.0f;
COMPILER_STRIP_GATE(0x80C70A08, &lit_4443);
#pragma pop

/* 80C70A0C-80C70A10 00006C 0004+00 0/1 0/0 0/0 .rodata          @4444 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4444 = -7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C70A0C, &lit_4444);
#pragma pop

/* 80C70A10-80C70A14 000070 0004+00 0/1 0/0 0/0 .rodata          @4445 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4445 = -50.0f;
COMPILER_STRIP_GATE(0x80C70A10, &lit_4445);
#pragma pop

/* 80C70A14-80C70A18 000074 0004+00 0/1 0/0 0/0 .rodata          @4446 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4446 = 50.0f;
COMPILER_STRIP_GATE(0x80C70A14, &lit_4446);
#pragma pop

/* 80C70A18-80C70A1C 000078 0004+00 0/1 0/0 0/0 .rodata          @4447 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4447 = 160.0f;
COMPILER_STRIP_GATE(0x80C70A18, &lit_4447);
#pragma pop

/* 80C70A1C-80C70A20 00007C 0004+00 0/1 0/0 0/0 .rodata          @4448 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4448 = 175.0f;
COMPILER_STRIP_GATE(0x80C70A1C, &lit_4448);
#pragma pop

/* 80C70A20-80C70A24 000080 0004+00 0/1 0/0 0/0 .rodata          @4449 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4449 = 75.0f;
COMPILER_STRIP_GATE(0x80C70A20, &lit_4449);
#pragma pop

/* 80C70A24-80C70A28 000084 0004+00 0/1 0/0 0/0 .rodata          @4450 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4450 = -55.0f;
COMPILER_STRIP_GATE(0x80C70A24, &lit_4450);
#pragma pop

/* 80C70A28-80C70A2C 000088 0004+00 0/1 0/0 0/0 .rodata          @4451 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4451 = -195.0f;
COMPILER_STRIP_GATE(0x80C70A28, &lit_4451);
#pragma pop

/* 80C6F460-80C702E0 0008E0 0E80+00 1/0 0/0 0/0 .text Execute__16daObjYIblltray_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/Execute__16daObjYIblltray_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C702E0-80C70330 001760 0050+00 1/1 0/0 0/0 .text            initRotTo__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::initRotTo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/initRotTo__16daObjYIblltray_cFv.s"
}
#pragma pop

/* 80C70330-80C70408 0017B0 00D8+00 1/0 0/0 0/0 .text            Draw__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/Draw__16daObjYIblltray_cFv.s"
}
#pragma pop

/* 80C70408-80C70480 001888 0078+00 1/0 0/0 0/0 .text            Delete__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYIblltray_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/Delete__16daObjYIblltray_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C70AA4-80C70AC4 -00001 0020+00 1/0 0/0 0/0 .data            daObjYIblltray_METHODS */
static actor_method_class daObjYIblltray_METHODS = {
    (process_method_func)daObjYIblltray_create1st__FP16daObjYIblltray_c,
    (process_method_func)daObjYIblltray_MoveBGDelete__FP16daObjYIblltray_c,
    (process_method_func)daObjYIblltray_MoveBGExecute__FP16daObjYIblltray_c,
    0,
    (process_method_func)daObjYIblltray_MoveBGDraw__FP16daObjYIblltray_c,
};

/* 80C70AC4-80C70AF4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_YIblltray */
extern actor_process_profile_definition g_profile_Obj_YIblltray = {
  fpcLy_CURRENT_e,          // mLayerID
  3,                        // mListID
  fpcPi_CURRENT_e,          // mListPrio
  PROC_Obj_YIblltray,       // mProcName
  &g_fpcLf_Method.mBase,    // sub_method
  sizeof(daObjYIblltray_c), // mSize
  0,                        // mSizeOther
  0,                        // mParameters
  &g_fopAc_Method.base,     // sub_method
  667,                      // mPriority
  &daObjYIblltray_METHODS,  // sub_method
  0x00044100,               // mStatus
  fopAc_ACTOR_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e,   // cullType
};

/* 80C70AF4-80C70B00 0000BC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C70B00-80C70B0C 0000C8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C70B0C-80C70B18 0000D4 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C70B18-80C70B24 0000E0 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C70B24-80C70B30 0000EC 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C70B30-80C70B5C 0000F8 002C+00 2/2 0/0 0/0 .data            __vt__16daObjYIblltray_c */
SECTION_DATA extern void* __vt__16daObjYIblltray_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__16daObjYIblltray_cFv,
    (void*)Create__16daObjYIblltray_cFv,
    (void*)Execute__16daObjYIblltray_cFPPA3_A4_f,
    (void*)Draw__16daObjYIblltray_cFv,
    (void*)Delete__16daObjYIblltray_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)__dt__16daObjYIblltray_cFv,
};

/* 80C70480-80C70554 001900 00D4+00 1/0 0/0 0/0 .text
 * daObjYIblltray_create1st__FP16daObjYIblltray_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYIblltray_create1st(daObjYIblltray_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/daObjYIblltray_create1st__FP16daObjYIblltray_c.s"
}
#pragma pop

/* 80C70554-80C7059C 0019D4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C7059C-80C705F8 001A1C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C705F8-80C706C4 001A78 00CC+00 2/2 0/0 0/0 .text            __dt__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Cyl::~dCcD_Cyl() {
extern "C" asm void __dt__8dCcD_CylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__dt__8dCcD_CylFv.s"
}
#pragma pop

/* 80C706C4-80C70748 001B44 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Cyl::dCcD_Cyl() {
extern "C" asm void __ct__8dCcD_CylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__ct__8dCcD_CylFv.s"
}
#pragma pop

/* 80C70748-80C70790 001BC8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C70790-80C707D8 001C10 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C707D8-80C707F8 001C58 0020+00 1/0 0/0 0/0 .text
 * daObjYIblltray_MoveBGDelete__FP16daObjYIblltray_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYIblltray_MoveBGDelete(daObjYIblltray_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/daObjYIblltray_MoveBGDelete__FP16daObjYIblltray_c.s"
}
#pragma pop

/* 80C707F8-80C70818 001C78 0020+00 1/0 0/0 0/0 .text
 * daObjYIblltray_MoveBGExecute__FP16daObjYIblltray_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYIblltray_MoveBGExecute(daObjYIblltray_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/daObjYIblltray_MoveBGExecute__FP16daObjYIblltray_c.s"
}
#pragma pop

/* 80C70818-80C70844 001C98 002C+00 1/0 0/0 0/0 .text
 * daObjYIblltray_MoveBGDraw__FP16daObjYIblltray_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjYIblltray_MoveBGDraw(daObjYIblltray_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/daObjYIblltray_MoveBGDraw__FP16daObjYIblltray_c.s"
}
#pragma pop

/* 80C70844-80C7088C 001CC4 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C7088C-80C70998 001D0C 010C+00 1/0 0/0 0/0 .text            __dt__16daObjYIblltray_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjYIblltray_c::~daObjYIblltray_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5yiblltray/d_a_obj_lv5yiblltray/__dt__16daObjYIblltray_cFv.s"
}
#pragma pop

/* 80C70A2C-80C70A2C 00008C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
