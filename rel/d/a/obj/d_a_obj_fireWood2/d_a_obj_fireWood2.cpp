/**
 * d_a_obj_fireWood2.cpp
 *
 */

#include "rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2.h"
#include "dol2asm.h"
#include "m_Do/m_Do_hostIO.h"


//
// Forward References:
//

extern "C" void __ct__17daFireWood2_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daFireWood2_cFv();
extern "C" void create__13daFireWood2_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void lightInit__13daFireWood2_cFv();
extern "C" void setLight__13daFireWood2_cFv();
extern "C" void cutLight__13daFireWood2_cFv();
extern "C" void pointLightProc__13daFireWood2_cFv();
extern "C" void Execute__13daFireWood2_cFv();
extern "C" bool Draw__13daFireWood2_cFv();
extern "C" void Delete__13daFireWood2_cFv();
extern "C" static void daFireWood2_Draw__FP13daFireWood2_c();
extern "C" static void daFireWood2_Execute__FP13daFireWood2_c();
extern "C" static void daFireWood2_Delete__FP13daFireWood2_c();
extern "C" static void daFireWood2_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daFireWood2_HIO_cFv();
extern "C" void __sinit_d_a_obj_fireWood2_cpp();
extern "C" u8 const mCcDObjInfo__13daFireWood2_c[48];
extern "C" u8 mCcDCyl__13daFireWood2_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BE8F34-80BE8F38 000000 0004+00 3/3 0/0 0/0 .rodata          @3625 */
SECTION_RODATA static f32 const lit_3625 = 15.0f;
COMPILER_STRIP_GATE(0x80BE8F34, &lit_3625);

/* 80BE8F38-80BE8F3C 000004 0004+00 0/1 0/0 0/0 .rodata          @3626 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3626 = 25.0f;
COMPILER_STRIP_GATE(0x80BE8F38, &lit_3626);
#pragma pop

/* 80BE8F3C-80BE8F40 000008 0004+00 0/2 0/0 0/0 .rodata          @3627 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3627 = 50.0f;
COMPILER_STRIP_GATE(0x80BE8F3C, &lit_3627);
#pragma pop

/* 80BE8F98-80BE8FDC 000000 0044+00 2/2 0/0 0/0 .data            mCcDCyl__13daFireWood2_c */
SECTION_DATA u8 daFireWood2_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE8FDC-80BE8FF4 000044 0018+00 1/1 0/0 0/0 .data            l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 80BE8FF4-80BE9014 -00001 0020+00 1/0 0/0 0/0 .data            l_daFireWood2_Method */
static actor_method_class l_daFireWood2_Method = {
    (process_method_func)daFireWood2_Create__FP10fopAc_ac_c,
    (process_method_func)daFireWood2_Delete__FP13daFireWood2_c,
    (process_method_func)daFireWood2_Execute__FP13daFireWood2_c,
    0,
    (process_method_func)daFireWood2_Draw__FP13daFireWood2_c,
};

/* 80BE9014-80BE9044 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_FireWood2 */
extern actor_process_profile_definition g_profile_Obj_FireWood2 = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Lv1Cdl00,      // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daFireWood2_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  494,                    // mPriority
  &l_daFireWood2_Method,  // sub_method
  0x00060000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BE9044-80BE9050 0000AC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BE9050-80BE905C 0000B8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BE905C-80BE9068 0000C4 000C+00 2/2 0/0 0/0 .data            __vt__17daFireWood2_HIO_c */
SECTION_DATA extern void* __vt__17daFireWood2_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daFireWood2_HIO_cFv,
};

/* 80BE9068-80BE9074 0000D0 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BE824C-80BE8288 0000EC 003C+00 1/1 0/0 0/0 .text            __ct__17daFireWood2_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood2_HIO_c::daFireWood2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__ct__17daFireWood2_HIO_cFv.s"
}
#pragma pop

/* 80BE8288-80BE82D0 000128 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// mDoHIO_entry_c::~mDoHIO_entry_c()
extern "C" asm void __dt__14mDoHIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80BE82D0-80BE8328 000170 0058+00 2/2 0/0 0/0 .text            setBaseMtx__13daFireWood2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/setBaseMtx__13daFireWood2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE9080-80BE908C 000008 000C+00 1/1 0/0 0/0 .bss             @3619 */
static u8 lit_3619[12];

/* 80BE908C-80BE909C 000014 0010+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80BE8328-80BE85B0 0001C8 0288+00 1/1 0/0 0/0 .text            create__13daFireWood2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/create__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE85B0-80BE85F8 000450 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// cM3dGCyl::~cM3dGCyl()
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BE85F8-80BE8640 000498 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// cM3dGAab::~cM3dGAab()
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE8F40-80BE8F70 00000C 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__13daFireWood2_c */
SECTION_RODATA u8 const daFireWood2_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BE8F40, &daFireWood2_c::mCcDObjInfo);

/* 80BE8F70-80BE8F74 00003C 0004+00 0/1 0/0 0/0 .rodata          @3834 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3834 = 10.0f;
COMPILER_STRIP_GATE(0x80BE8F70, &lit_3834);
#pragma pop

/* 80BE8F74-80BE8F78 000040 0004+00 0/1 0/0 0/0 .rodata          @3835 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3835 = 500.0f;
COMPILER_STRIP_GATE(0x80BE8F74, &lit_3835);
#pragma pop

/* 80BE8F78-80BE8F7C 000044 0004+00 1/3 0/0 0/0 .rodata          @3836 */
SECTION_RODATA static f32 const lit_3836 = 1.0f;
COMPILER_STRIP_GATE(0x80BE8F78, &lit_3836);

/* 80BE8F7C-80BE8F80 000048 0004+00 0/2 0/0 0/0 .rodata          @3837 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3837[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BE8F7C, &lit_3837);
#pragma pop

/* 80BE8640-80BE86CC 0004E0 008C+00 1/1 0/0 0/0 .text            lightInit__13daFireWood2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::lightInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/lightInit__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE86CC-80BE86FC 00056C 0030+00 2/2 0/0 0/0 .text            setLight__13daFireWood2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::setLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/setLight__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE86FC-80BE872C 00059C 0030+00 1/1 0/0 0/0 .text            cutLight__13daFireWood2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::cutLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/cutLight__13daFireWood2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE8F80-80BE8F84 00004C 0004+00 0/1 0/0 0/0 .rodata          @3855 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3855 = 0xBC6642FF;
COMPILER_STRIP_GATE(0x80BE8F80, &lit_3855);
#pragma pop

/* 80BE8F84-80BE8F88 000050 0004+00 0/1 0/0 0/0 .rodata          @3863 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3863 = 0.5f;
COMPILER_STRIP_GATE(0x80BE8F84, &lit_3863);
#pragma pop

/* 80BE8F88-80BE8F8C 000054 0004+00 0/1 0/0 0/0 .rodata          @3864 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3864 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BE8F88, &lit_3864);
#pragma pop

/* 80BE8F8C-80BE8F90 000058 0004+00 0/1 0/0 0/0 .rodata          @3865 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3865 = 0x38D1B717;
COMPILER_STRIP_GATE(0x80BE8F8C, &lit_3865);
#pragma pop

/* 80BE8F90-80BE8F94 00005C 0004+00 0/1 0/0 0/0 .rodata          @3866 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3866 = 0x358637BD;
COMPILER_STRIP_GATE(0x80BE8F90, &lit_3866);
#pragma pop

/* 80BE872C-80BE87DC 0005CC 00B0+00 1/1 0/0 0/0 .text            pointLightProc__13daFireWood2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::pointLightProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/pointLightProc__13daFireWood2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE8F94-80BE8F98 000060 0004+00 1/2 0/0 0/0 .rodata          @4018 */
SECTION_RODATA static f32 const lit_4018 = -1.0f;
COMPILER_STRIP_GATE(0x80BE8F94, &lit_4018);

/* 80BE87DC-80BE8D98 00067C 05BC+00 1/1 0/0 0/0 .text            Execute__13daFireWood2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/Execute__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE8D98-80BE8DA0 000C38 0008+00 1/1 0/0 0/0 .text            Draw__13daFireWood2_cFv */
int daFireWood2_c::Draw() {
    return 1;
}

/* 80BE8DA0-80BE8DD4 000C40 0034+00 1/1 0/0 0/0 .text            Delete__13daFireWood2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/Delete__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE8DD4-80BE8DF4 000C74 0020+00 1/0 0/0 0/0 .text            daFireWood2_Draw__FP13daFireWood2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood2_Draw(daFireWood2_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Draw__FP13daFireWood2_c.s"
}
#pragma pop

/* 80BE8DF4-80BE8E14 000C94 0020+00 1/0 0/0 0/0 .text daFireWood2_Execute__FP13daFireWood2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood2_Execute(daFireWood2_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Execute__FP13daFireWood2_c.s"
}
#pragma pop

/* 80BE8E14-80BE8E34 000CB4 0020+00 1/0 0/0 0/0 .text daFireWood2_Delete__FP13daFireWood2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood2_Delete(daFireWood2_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Delete__FP13daFireWood2_c.s"
}
#pragma pop

/* 80BE8E34-80BE8E54 000CD4 0020+00 1/0 0/0 0/0 .text            daFireWood2_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood2_Create(fopAc_ac_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BE8E54-80BE8EB0 000CF4 005C+00 2/1 0/0 0/0 .text            __dt__17daFireWood2_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood2_HIO_c::~daFireWood2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__17daFireWood2_HIO_cFv.s"
}
#pragma pop

/* 80BE8EB0-80BE8F20 000D50 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_fireWood2_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_fireWood2_cpp(){nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__sinit_d_a_obj_fireWood2_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80BE8EB0, __sinit_d_a_obj_fireWood2_cpp);
#pragma pop
