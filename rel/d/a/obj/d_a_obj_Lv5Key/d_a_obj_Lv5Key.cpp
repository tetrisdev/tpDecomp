/**
 * @file d_a_obj_Lv5Key.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void CreateHeap__13daObjLv5Key_cFv();
extern "C" void Init__13daObjLv5Key_cFv();
extern "C" void setBgc__13daObjLv5Key_cFv();
extern "C" void initCcSph__13daObjLv5Key_cFv();
extern "C" void setCcSph__13daObjLv5Key_cFv();
extern "C" static void daObjLv5Key_Create__FP10fopAc_ac_c();
extern "C" static void daObjLv5Key_Delete__FP13daObjLv5Key_c();
extern "C" void setAction__13daObjLv5Key_cFM13daObjLv5Key_cFPCvPvi_vi();
extern "C" void Action__13daObjLv5Key_cFv();
extern "C" void Wait__13daObjLv5Key_cFi();
extern "C" void Open__13daObjLv5Key_cFi();
extern "C" void Fall__13daObjLv5Key_cFi();
extern "C" void Land__13daObjLv5Key_cFi();
extern "C" void Shake__13daObjLv5Key_cFi();
extern "C" void TranslateByNowDirect__13daObjLv5Key_cFfff();
extern "C" void Execute__13daObjLv5Key_cFv();
extern "C" void Draw__13daObjLv5Key_cFv();
extern "C" void Delete__13daObjLv5Key_cFv();
extern "C" void setBaseMtx__13daObjLv5Key_cFv();
extern "C" static void daObjLv5Key_Draw__FP13daObjLv5Key_c();
extern "C" static void daObjLv5Key_Execute__FP13daObjLv5Key_c();
extern "C" void create_1st__13daObjLv5Key_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static bool daObjLv5Key_IsDelete__FP13daObjLv5Key_c();
extern "C" static void func_80B9C908();
extern "C" static void func_80B9C910();
extern "C" extern char const* const d_a_obj_Lv5Key__stringBase0;

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_calcSpeed__FP10fopAc_ac_c();
extern "C" void fopAcM_posMove__FP10fopAc_ac_cPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetGndThinCellingOff__9dBgS_AcchFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ptmf_test();
extern "C" void __ptmf_cmpr();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80B9C920-80B9C924 000000 0004+00 6/6 0/0 0/0 .rodata          @3755 */
SECTION_RODATA static f32 const lit_3755 = 1.0f;
COMPILER_STRIP_GATE(0x80B9C920, &lit_3755);

/* 80B9C9AC-80B9C9AC 00008C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B9C9AC = "Lv5_KEY";
#pragma pop

/* 80B9C9B4-80B9C9B8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_Lv5Key__stringBase0;

/* 80B9B9B8-80B9BA94 000078 00DC+00 1/1 0/0 0/0 .text            CreateHeap__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/CreateHeap__13daObjLv5Key_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C924-80B9C928 000004 0004+00 0/1 0/0 0/0 .rodata          @3767 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3767 = -50.0f;
COMPILER_STRIP_GATE(0x80B9C924, &lit_3767);
#pragma pop

/* 80B9C928-80B9C92C 000008 0004+00 1/2 0/0 0/0 .rodata          @3768 */
SECTION_RODATA static f32 const lit_3768 = 30.0f;
COMPILER_STRIP_GATE(0x80B9C928, &lit_3768);

/* 80B9C92C-80B9C930 00000C 0004+00 0/1 0/0 0/0 .rodata          @3769 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3769 = -20.0f;
COMPILER_STRIP_GATE(0x80B9C92C, &lit_3769);
#pragma pop

/* 80B9C930-80B9C934 000010 0004+00 0/1 0/0 0/0 .rodata          @3770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3770 = 50.0f;
COMPILER_STRIP_GATE(0x80B9C930, &lit_3770);
#pragma pop

/* 80B9C934-80B9C938 000014 0004+00 0/1 0/0 0/0 .rodata          @3771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3771 = -90.0f;
COMPILER_STRIP_GATE(0x80B9C934, &lit_3771);
#pragma pop

/* 80B9C938-80B9C93C 000018 0004+00 0/1 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3772 = 20.0f;
COMPILER_STRIP_GATE(0x80B9C938, &lit_3772);
#pragma pop

/* 80B9C93C-80B9C940 00001C 0004+00 3/7 0/0 0/0 .rodata          @3773 */
SECTION_RODATA static u8 const lit_3773[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B9C93C, &lit_3773);

/* 80B9C9B8-80B9C9C4 -00001 000C+00 1/1 0/0 0/0 .data            @3759 */
SECTION_DATA static void* lit_3759[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)Wait__13daObjLv5Key_cFi,
};

/* 80B9BA94-80B9BB5C 000154 00C8+00 1/1 0/0 0/0 .text            Init__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Init__13daObjLv5Key_cFv.s"
}
#pragma pop

/* 80B9BB5C-80B9BBCC 00021C 0070+00 1/1 0/0 0/0 .text            setBgc__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::setBgc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/setBgc__13daObjLv5Key_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C940-80B9C980 000020 0040+00 1/1 0/0 0/0 .rodata          ccShpSrc$3784 */
SECTION_RODATA static u8 const ccShpSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC1, 0x8E, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9C940, &ccShpSrc);

/* 80B9BBCC-80B9BC2C 00028C 0060+00 1/1 0/0 0/0 .text            initCcSph__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::initCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/initCcSph__13daObjLv5Key_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C980-80B9C984 000060 0004+00 0/1 0/0 0/0 .rodata          @3797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3797 = -17.5f;
COMPILER_STRIP_GATE(0x80B9C980, &lit_3797);
#pragma pop

/* 80B9C984-80B9C988 000064 0004+00 0/1 0/0 0/0 .rodata          @3798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3798 = 35.0f;
COMPILER_STRIP_GATE(0x80B9C984, &lit_3798);
#pragma pop

/* 80B9BC2C-80B9BCEC 0002EC 00C0+00 1/1 0/0 0/0 .text            setCcSph__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::setCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/setCcSph__13daObjLv5Key_cFv.s"
}
#pragma pop

/* 80B9BCEC-80B9BD0C 0003AC 0020+00 1/0 0/0 0/0 .text            daObjLv5Key_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv5Key_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/daObjLv5Key_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80B9BD0C-80B9BD30 0003CC 0024+00 1/0 0/0 0/0 .text daObjLv5Key_Delete__FP13daObjLv5Key_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv5Key_Delete(daObjLv5Key_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/daObjLv5Key_Delete__FP13daObjLv5Key_c.s"
}
#pragma pop

/* 80B9BD30-80B9BDD8 0003F0 00A8+00 5/5 0/0 0/0 .text
 * setAction__13daObjLv5Key_cFM13daObjLv5Key_cFPCvPvi_vi        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::setAction(void (daObjLv5Key_c::*param_0)(int), int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/setAction__13daObjLv5Key_cFM13daObjLv5Key_cFPCvPvi_vi.s"
}
#pragma pop

/* 80B9BDD8-80B9BE24 000498 004C+00 1/1 0/0 0/0 .text            Action__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Action__13daObjLv5Key_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C9C4-80B9C9D0 -00001 000C+00 1/1 0/0 0/0 .data            @3837 */
SECTION_DATA static void* lit_3837[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)Open__13daObjLv5Key_cFi,
};

/* 80B9C9D0-80B9C9DC -00001 000C+00 1/1 0/0 0/0 .data            @3842 */
SECTION_DATA static void* lit_3842[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)Shake__13daObjLv5Key_cFi,
};

/* 80B9BE24-80B9BF08 0004E4 00E4+00 2/0 0/0 0/0 .text            Wait__13daObjLv5Key_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Wait(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Wait__13daObjLv5Key_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C9DC-80B9C9E8 -00001 000C+00 1/1 0/0 0/0 .data            @3862 */
SECTION_DATA static void* lit_3862[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)Fall__13daObjLv5Key_cFi,
};

/* 80B9BF08-80B9BFDC 0005C8 00D4+00 1/0 0/0 0/0 .text            Open__13daObjLv5Key_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Open(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Open__13daObjLv5Key_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C988-80B9C98C 000068 0004+00 0/1 0/0 0/0 .rodata          @3907 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3907 = -6.0f;
COMPILER_STRIP_GATE(0x80B9C988, &lit_3907);
#pragma pop

/* 80B9C98C-80B9C990 00006C 0004+00 0/1 0/0 0/0 .rodata          @3908 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3908 = 88.0f;
COMPILER_STRIP_GATE(0x80B9C98C, &lit_3908);
#pragma pop

/* 80B9C990-80B9C994 000070 0004+00 0/1 0/0 0/0 .rodata          @3909 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3909 = 4.0f;
COMPILER_STRIP_GATE(0x80B9C990, &lit_3909);
#pragma pop

/* 80B9C994-80B9C998 000074 0004+00 0/1 0/0 0/0 .rodata          @3910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3910 = 22.0f;
COMPILER_STRIP_GATE(0x80B9C994, &lit_3910);
#pragma pop

/* 80B9C998-80B9C99C 000078 0004+00 0/1 0/0 0/0 .rodata          @3911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3911 = 87.0f;
COMPILER_STRIP_GATE(0x80B9C998, &lit_3911);
#pragma pop

/* 80B9C9E8-80B9C9F4 -00001 000C+00 1/1 0/0 0/0 .data            @3891 */
SECTION_DATA static void* lit_3891[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)Land__13daObjLv5Key_cFi,
};

/* 80B9BFDC-80B9C17C 00069C 01A0+00 1/0 0/0 0/0 .text            Fall__13daObjLv5Key_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Fall(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Fall__13daObjLv5Key_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C99C-80B9C9A0 00007C 0004+00 0/1 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 92.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B9C99C, &lit_3929);
#pragma pop

/* 80B9C9A0-80B9C9A4 000080 0004+00 0/1 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3930 = -87.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B9C9A0, &lit_3930);
#pragma pop

/* 80B9C9A4-80B9C9A8 000084 0004+00 0/1 0/0 0/0 .rodata          @3931 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3931 = 0xC2956666;
COMPILER_STRIP_GATE(0x80B9C9A4, &lit_3931);
#pragma pop

/* 80B9C9A8-80B9C9AC 000088 0004+00 0/1 0/0 0/0 .rodata          @3932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3932 = 87.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B9C9A8, &lit_3932);
#pragma pop

/* 80B9C17C-80B9C268 00083C 00EC+00 1/0 0/0 0/0 .text            Land__13daObjLv5Key_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Land(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Land__13daObjLv5Key_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9C9F4-80B9CA00 -00001 000C+00 1/1 0/0 0/0 .data            @3947 */
SECTION_DATA static void* lit_3947[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)Wait__13daObjLv5Key_cFi,
};

/* 80B9C268-80B9C3B0 000928 0148+00 1/0 0/0 0/0 .text            Shake__13daObjLv5Key_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Shake(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Shake__13daObjLv5Key_cFi.s"
}
#pragma pop

/* 80B9C3B0-80B9C410 000A70 0060+00 1/1 0/0 0/0 .text TranslateByNowDirect__13daObjLv5Key_cFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::TranslateByNowDirect(f32 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/TranslateByNowDirect__13daObjLv5Key_cFfff.s"
}
#pragma pop

/* 80B9C410-80B9C450 000AD0 0040+00 1/1 0/0 0/0 .text            Execute__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Execute__13daObjLv5Key_cFv.s"
}
#pragma pop

/* 80B9C450-80B9C500 000B10 00B0+00 1/1 0/0 0/0 .text            Draw__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Draw__13daObjLv5Key_cFv.s"
}
#pragma pop

/* 80B9C500-80B9C534 000BC0 0034+00 1/1 0/0 0/0 .text            Delete__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/Delete__13daObjLv5Key_cFv.s"
}
#pragma pop

/* 80B9C534-80B9C5AC 000BF4 0078+00 1/1 0/0 0/0 .text            setBaseMtx__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/setBaseMtx__13daObjLv5Key_cFv.s"
}
#pragma pop

/* 80B9C5AC-80B9C5CC 000C6C 0020+00 1/0 0/0 0/0 .text            daObjLv5Key_Draw__FP13daObjLv5Key_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv5Key_Draw(daObjLv5Key_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/daObjLv5Key_Draw__FP13daObjLv5Key_c.s"
}
#pragma pop

/* 80B9C5CC-80B9C5EC 000C8C 0020+00 2/1 0/0 0/0 .text daObjLv5Key_Execute__FP13daObjLv5Key_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv5Key_Execute(daObjLv5Key_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/daObjLv5Key_Execute__FP13daObjLv5Key_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9CA00-80B9CA20 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjLv5Key_Method */
static actor_method_class l_daObjLv5Key_Method = {
    (process_method_func)daObjLv5Key_Create__FP10fopAc_ac_c,
    (process_method_func)daObjLv5Key_Delete__FP13daObjLv5Key_c,
    (process_method_func)daObjLv5Key_Execute__FP13daObjLv5Key_c,
    (process_method_func)daObjLv5Key_IsDelete__FP13daObjLv5Key_c,
    (process_method_func)daObjLv5Key_Draw__FP13daObjLv5Key_c,
};

/* 80B9CA20-80B9CA50 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv5Key */
extern actor_process_profile_definition g_profile_Obj_Lv5Key = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Lv5Key,        // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjLv5Key_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  46,                     // mPriority
  &l_daObjLv5Key_Method,  // sub_method
  0x00044180,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80B9CA50-80B9CA5C 00009C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80B9CA5C-80B9CA68 0000A8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80B9CA68-80B9CA8C 0000B4 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B9C910,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B9C908,
};

/* 80B9CA8C-80B9CA98 0000D8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80B9C5EC-80B9C798 000CAC 01AC+00 1/1 0/0 0/0 .text            create_1st__13daObjLv5Key_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv5Key_c::create_1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/create_1st__13daObjLv5Key_cFv.s"
}
#pragma pop

/* 80B9C798-80B9C7E0 000E58 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80B9C7E0-80B9C828 000EA0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80B9C828-80B9C898 000EE8 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80B9C898-80B9C8E0 000F58 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __dt__12J3DFrameCtrlFv() {
//asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80B9C8E0-80B9C900 000FA0 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80B9C900-80B9C908 000FC0 0008+00 1/0 0/0 0/0 .text daObjLv5Key_IsDelete__FP13daObjLv5Key_c */
static bool daObjLv5Key_IsDelete(daObjLv5Key_c* param_0) {
    return true;
}

/* 80B9C908-80B9C910 000FC8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9C908() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/func_80B9C908.s"
}
#pragma pop

/* 80B9C910-80B9C918 000FD0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9C910() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Lv5Key/d_a_obj_Lv5Key/func_80B9C910.s"
}
#pragma pop

/* 80B9C9AC-80B9C9AC 00008C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
