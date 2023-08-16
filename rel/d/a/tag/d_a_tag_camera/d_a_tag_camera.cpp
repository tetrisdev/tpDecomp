//
// Generated By: dol2asm
// Translation Unit: d_a_tag_camera
//

#include "rel/d/a/tag/d_a_tag_camera/d_a_tag_camera.h"
#include "dol2asm.h"

//
// Types:
//

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Cam_c {
    /* 80489F14 */ void getSwType();
    /* 80489F20 */ void getPrio();
    /* 80489F2C */ void getSwBit();
    /* 80489F38 */ void getCondition();
    /* 80489F44 */ void getCameraId();
    /* 80489F50 */ void getRailID();
    /* 80489F5C */ void getAreaType();
    /* 80489F68 */ void getAreaNoChk();
    /* 80489F74 */ void execute();
};

struct daAlink_c {
    /* 800E1390 */ void getCopyRodCameraActor();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dCamera_c {
    /* 80163558 */ void SetTagData(fopAc_ac_c*, s32, u16, u8);
};

//
// Forward References:
//

extern "C" static bool func_80489A98();
extern "C" static void func_80489AA0();
extern "C" static void func_80489B18();
extern "C" static void func_80489B2C();
extern "C" static void func_80489B6C();
extern "C" static void func_80489BE0();
extern "C" static void func_80489C04();
extern "C" static void func_80489C1C();
extern "C" static void func_80489C34();
extern "C" static void func_80489C6C();
extern "C" static void func_80489CAC();
extern "C" static void func_80489CE4();
extern "C" static void func_80489CF8();
extern "C" static void func_80489D30();
extern "C" static void func_80489D5C();
extern "C" static void func_80489D70();
extern "C" static void func_80489DB0();
extern "C" static void func_80489DE4();
extern "C" static void func_80489DF8();
extern "C" static void func_80489E18();
extern "C" static void func_80489E8C();
extern "C" static void func_80489EDC();
extern "C" void getSwType__11daTag_Cam_cFv();
extern "C" void getPrio__11daTag_Cam_cFv();
extern "C" void getSwBit__11daTag_Cam_cFv();
extern "C" void getCondition__11daTag_Cam_cFv();
extern "C" void getCameraId__11daTag_Cam_cFv();
extern "C" void getRailID__11daTag_Cam_cFv();
extern "C" void getAreaType__11daTag_Cam_cFv();
extern "C" void getAreaNoChk__11daTag_Cam_cFv();
extern "C" void execute__11daTag_Cam_cFv();
extern "C" static bool daTag_Cam_Draw__FP11daTag_Cam_c();
extern "C" static void daTag_Cam_Execute__FP11daTag_Cam_c();
extern "C" static bool daTag_Cam_IsDelete__FP11daTag_Cam_c();
extern "C" static void daTag_Cam_Delete__FP11daTag_Cam_c();
extern "C" static void daTag_Cam_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_TAG_CAMERA[12];

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getCopyRodCameraActor__9daAlink_cFv();
extern "C" void SetTagData__9dCamera_cFP10fopAc_ac_clUsUc();
extern "C" void dCam_getBody__Fv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];

//
// Declarations:
//

/* 80489A98-80489AA0 000078 0008+00 1/0 0/0 0/0 .text
 * always_true__28@unnamed@d_a_tag_camera_cpp@Fv                */
static bool func_80489A98() {
    return true;
}

/* ############################################################################################## */
/* 8048A670-8048A674 000000 0004+00 15/15 0/0 0/0 .bss Player__28@unnamed@d_a_tag_camera_cpp@ */
static u8 data_8048A670[4];

/* 80489AA0-80489B18 000080 0078+00 1/0 0/0 0/0 .text
 * is_player_riding_horse__28@unnamed@d_a_tag_camera_cpp@Fv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489AA0() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489AA0.s"
}
#pragma pop

/* 80489B18-80489B2C 0000F8 0014+00 1/0 0/0 0/0 .text
 * is_player_swimming__28@unnamed@d_a_tag_camera_cpp@Fv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489B18() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489B18.s"
}
#pragma pop

/* 80489B2C-80489B6C 00010C 0040+00 1/0 0/0 0/0 .text
 * is_player_riding_canoe__28@unnamed@d_a_tag_camera_cpp@Fv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489B2C() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489B2C.s"
}
#pragma pop

/* 80489B6C-80489BE0 00014C 0074+00 1/0 0/0 0/0 .text
 * is_player_jumping_by_horse__28@unnamed@d_a_tag_camera_cpp@Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489B6C() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489B6C.s"
}
#pragma pop

/* 80489BE0-80489C04 0001C0 0024+00 1/0 0/0 0/0 .text
 * is_player_climbing__28@unnamed@d_a_tag_camera_cpp@Fv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489BE0() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489BE0.s"
}
#pragma pop

/* 80489C04-80489C1C 0001E4 0018+00 1/0 0/0 0/0 .text
 * is_player_wear_magneboots__28@unnamed@d_a_tag_camera_cpp@Fv  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489C04() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489C04.s"
}
#pragma pop

/* 80489C1C-80489C34 0001FC 0018+00 1/0 0/0 0/0 .text
 * is_player_wolf__28@unnamed@d_a_tag_camera_cpp@Fv             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489C1C() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489C1C.s"
}
#pragma pop

/* 80489C34-80489C6C 000214 0038+00 1/0 0/0 0/0 .text
 * is_player_pulling_chainblock__28@unnamed@d_a_tag_camera_cpp@Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489C34() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489C34.s"
}
#pragma pop

/* 80489C6C-80489CAC 00024C 0040+00 1/0 0/0 0/0 .text
 * is_player_playing_spinner__28@unnamed@d_a_tag_camera_cpp@Fv  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489C6C() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489C6C.s"
}
#pragma pop

/* 80489CAC-80489CE4 00028C 0038+00 1/0 0/0 0/0 .text
 * is_player_sliding_slope__28@unnamed@d_a_tag_camera_cpp@Fv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489CAC() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489CAC.s"
}
#pragma pop

/* 80489CE4-80489CF8 0002C4 0014+00 2/1 0/0 0/0 .text
 * is_player_on_watersurface__28@unnamed@d_a_tag_camera_cpp@Fv  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489CE4() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489CE4.s"
}
#pragma pop

/* 80489CF8-80489D30 0002D8 0038+00 1/0 0/0 0/0 .text
 * is_player_moving_on_spinnerrail__28@unnamed@d_a_tag_camera_cpp@Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489CF8() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489CF8.s"
}
#pragma pop

/* 80489D30-80489D5C 000310 002C+00 1/0 0/0 0/0 .text
 * is_player_gliding__28@unnamed@d_a_tag_camera_cpp@Fv          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489D30() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489D30.s"
}
#pragma pop

/* 80489D5C-80489D70 00033C 0014+00 1/0 0/0 0/0 .text
 * is_player_hunging_by_hookshot__28@unnamed@d_a_tag_camera_cpp@Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489D5C() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489D5C.s"
}
#pragma pop

/* 80489D70-80489DB0 000350 0040+00 1/0 0/0 0/0 .text
 * is_player_on_rope__28@unnamed@d_a_tag_camera_cpp@Fv          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489D70() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489D70.s"
}
#pragma pop

/* 80489DB0-80489DE4 000390 0034+00 1/0 0/0 0/0 .text
 * is_player_using_copyrod__28@unnamed@d_a_tag_camera_cpp@Fv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489DB0() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489DB0.s"
}
#pragma pop

/* 80489DE4-80489DF8 0003C4 0014+00 1/0 0/0 0/0 .text
 * is_player_hunging_wall_by_hookshot__28@unnamed@d_a_tag_camera_cpp@Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489DE4() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489DE4.s"
}
#pragma pop

/* 80489DF8-80489E18 0003D8 0020+00 1/0 0/0 0/0 .text
 * is_player_carried_by_cargo__28@unnamed@d_a_tag_camera_cpp@Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489DF8() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489DF8.s"
}
#pragma pop

/* 80489E18-80489E8C 0003F8 0074+00 1/0 0/0 0/0 .text
 * is_player_playing_rodeo__28@unnamed@d_a_tag_camera_cpp@Fv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489E18() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489E18.s"
}
#pragma pop

/* 80489E8C-80489EDC 00046C 0050+00 1/0 0/0 0/0 .text
 * is_player_in_water__28@unnamed@d_a_tag_camera_cpp@Fv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489E8C() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489E8C.s"
}
#pragma pop

/* 80489EDC-80489F14 0004BC 0038+00 1/0 0/0 0/0 .text
 * is_player_hugging_eal__28@unnamed@d_a_tag_camera_cpp@Fv      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80489EDC() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/func_80489EDC.s"
}
#pragma pop

/* 80489F14-80489F20 0004F4 000C+00 1/1 0/0 0/0 .text            getSwType__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getSwType() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getSwType__11daTag_Cam_cFv.s"
}
#pragma pop

/* 80489F20-80489F2C 000500 000C+00 1/1 0/0 0/0 .text            getPrio__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getPrio() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getPrio__11daTag_Cam_cFv.s"
}
#pragma pop

/* 80489F2C-80489F38 00050C 000C+00 1/1 0/0 0/0 .text            getSwBit__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getSwBit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getSwBit__11daTag_Cam_cFv.s"
}
#pragma pop

/* 80489F38-80489F44 000518 000C+00 2/2 0/0 0/0 .text            getCondition__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getCondition() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getCondition__11daTag_Cam_cFv.s"
}
#pragma pop

/* 80489F44-80489F50 000524 000C+00 1/1 0/0 0/0 .text            getCameraId__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getCameraId() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getCameraId__11daTag_Cam_cFv.s"
}
#pragma pop

/* 80489F50-80489F5C 000530 000C+00 1/1 0/0 0/0 .text            getRailID__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getRailID() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getRailID__11daTag_Cam_cFv.s"
}
#pragma pop

/* 80489F5C-80489F68 00053C 000C+00 2/2 0/0 0/0 .text            getAreaType__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getAreaType() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getAreaType__11daTag_Cam_cFv.s"
}
#pragma pop

/* 80489F68-80489F74 000548 000C+00 1/1 0/0 0/0 .text            getAreaNoChk__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::getAreaNoChk() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/getAreaNoChk__11daTag_Cam_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048A590-8048A59C 000000 000C+00 2/2 0/0 0/0 .rodata          @3874 */
SECTION_RODATA static u8 const lit_3874[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048A590, &lit_3874);

/* 8048A59C-8048A5F4 -00001 0058+00 0/0 0/0 0/0 .rodata          @4358 */
#pragma push
#pragma force_active on
SECTION_RODATA static void* const lit_4358[22] = {
    (void*)func_80489AA0, (void*)func_80489B18, (void*)func_80489B2C, (void*)func_80489A98,
    (void*)func_80489B6C, (void*)func_80489BE0, (void*)func_80489C04, (void*)func_80489C1C,
    (void*)func_80489C34, (void*)func_80489C6C, (void*)func_80489CAC, (void*)func_80489CE4,
    (void*)func_80489CF8, (void*)func_80489D30, (void*)func_80489D5C, (void*)func_80489D70,
    (void*)func_80489DB0, (void*)func_80489DE4, (void*)func_80489DF8, (void*)func_80489E18,
    (void*)func_80489E8C, (void*)func_80489EDC,
};
COMPILER_STRIP_GATE(0x8048A59C, &lit_4358);
#pragma pop

/* 8048A5F4-8048A5F8 000064 0004+00 0/1 0/0 0/0 .rodata          @4466 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4466 = 80.0f;
COMPILER_STRIP_GATE(0x8048A5F4, &lit_4466);
#pragma pop

/* 8048A5F8-8048A600 000068 0004+04 0/2 0/0 0/0 .rodata          @4467 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4467[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8048A5F8, &lit_4467);
#pragma pop

/* 8048A600-8048A608 000070 0008+00 0/1 0/0 0/0 .rodata          @4468 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4468[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048A600, &lit_4468);
#pragma pop

/* 8048A608-8048A610 000078 0008+00 0/1 0/0 0/0 .rodata          @4469 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4469[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048A608, &lit_4469);
#pragma pop

/* 8048A610-8048A618 000080 0008+00 0/1 0/0 0/0 .rodata          @4470 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4470[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048A610, &lit_4470);
#pragma pop

/* 80489F74-8048A378 000554 0404+00 1/1 0/0 0/0 .text            execute__11daTag_Cam_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Cam_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/execute__11daTag_Cam_cFv.s"
}
#pragma pop

/* 8048A378-8048A380 000958 0008+00 1/0 0/0 0/0 .text            daTag_Cam_Draw__FP11daTag_Cam_c */
static bool daTag_Cam_Draw(daTag_Cam_c* param_0) {
    return true;
}

/* 8048A380-8048A3A4 000960 0024+00 1/0 0/0 0/0 .text            daTag_Cam_Execute__FP11daTag_Cam_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Cam_Execute(daTag_Cam_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/daTag_Cam_Execute__FP11daTag_Cam_c.s"
}
#pragma pop

/* 8048A3A4-8048A3AC 000984 0008+00 1/0 0/0 0/0 .text            daTag_Cam_IsDelete__FP11daTag_Cam_c
 */
static bool daTag_Cam_IsDelete(daTag_Cam_c* param_0) {
    return true;
}

/* 8048A3AC-8048A3DC 00098C 0030+00 1/0 0/0 0/0 .text            daTag_Cam_Delete__FP11daTag_Cam_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Cam_Delete(daTag_Cam_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/daTag_Cam_Delete__FP11daTag_Cam_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048A618-8048A61C 000088 0004+00 0/1 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4545 = 500.0f;
COMPILER_STRIP_GATE(0x8048A618, &lit_4545);
#pragma pop

/* 8048A61C-8048A620 00008C 0004+00 0/1 0/0 0/0 .rodata          @4546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4546 = 1000.0f;
COMPILER_STRIP_GATE(0x8048A61C, &lit_4546);
#pragma pop

/* 8048A3DC-8048A588 0009BC 01AC+00 1/0 0/0 0/0 .text            daTag_Cam_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Cam_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_camera/d_a_tag_camera/daTag_Cam_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048A620-8048A640 -00001 0020+00 1/0 0/0 0/0 .data            l_daTag_Cam_Method */
SECTION_DATA static void* l_daTag_Cam_Method[8] = {
    (void*)daTag_Cam_Create__FP10fopAc_ac_c,
    (void*)daTag_Cam_Delete__FP11daTag_Cam_c,
    (void*)daTag_Cam_Execute__FP11daTag_Cam_c,
    (void*)daTag_Cam_IsDelete__FP11daTag_Cam_c,
    (void*)daTag_Cam_Draw__FP11daTag_Cam_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8048A640-8048A670 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_CAMERA */
SECTION_DATA extern void* g_profile_TAG_CAMERA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02CF0000, (void*)&g_fpcLf_Method,
    (void*)0x0000058C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01170000, (void*)&l_daTag_Cam_Method,
    (void*)0x00044000, (void*)0x00060000,
};
