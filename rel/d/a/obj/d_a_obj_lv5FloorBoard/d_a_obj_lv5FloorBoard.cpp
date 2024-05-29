/**
 * @file d_a_obj_lv5FloorBoard.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__16daFlorBoad_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daFlorBoad_cFv();
extern "C" void CreateHeap__12daFlorBoad_cFv();
extern "C" void create__12daFlorBoad_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void Execute__12daFlorBoad_cFPPA3_A4_f();
extern "C" void procMain__12daFlorBoad_cFv();
extern "C" void init_modeWait__12daFlorBoad_cFv();
extern "C" void modeWait__12daFlorBoad_cFv();
extern "C" void init_modeBreak__12daFlorBoad_cFv();
extern "C" void modeBreak__12daFlorBoad_cFv();
extern "C" void Draw__12daFlorBoad_cFv();
extern "C" void Delete__12daFlorBoad_cFv();
extern "C" static void daFlorBoad_Draw__FP12daFlorBoad_c();
extern "C" static void daFlorBoad_Execute__FP12daFlorBoad_c();
extern "C" static void daFlorBoad_Delete__FP12daFlorBoad_c();
extern "C" static void daFlorBoad_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daFlorBoad_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv5FloorBoard_cpp();
extern "C" u8 const mCcDObjInfo__12daFlorBoad_c[48];
extern "C" extern char const* const d_a_obj_lv5FloorBoard__stringBase0;
extern "C" u8 mCcDCyl__12daFlorBoad_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
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
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C6B148-80C6B14C 000000 0004+00 4/5 0/0 0/0 .rodata          @3656 */
SECTION_RODATA static f32 const lit_3656 = 1.0f;
COMPILER_STRIP_GATE(0x80C6B148, &lit_3656);

/* 80C6B198-80C6B1A4 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6B1A4-80C6B1B8 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C6B1B8-80C6B1FC 000020 0044+00 2/2 0/0 0/0 .data            mCcDCyl__12daFlorBoad_c */
SECTION_DATA u8 daFlorBoad_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6B1FC-80C6B208 -00001 000C+00 0/1 0/0 0/0 .data            @3839 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3839[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daFlorBoad_cFv,
};
#pragma pop

/* 80C6B208-80C6B214 -00001 000C+00 0/1 0/0 0/0 .data            @3840 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3840[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreak__12daFlorBoad_cFv,
};
#pragma pop

/* 80C6B214-80C6B22C 00007C 0018+00 0/1 0/0 0/0 .data            mode_proc$3838 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C6B22C-80C6B24C -00001 0020+00 1/0 0/0 0/0 .data            l_daFlorBoad_Method */
static actor_method_class l_daFlorBoad_Method = {
    (process_method_func)daFlorBoad_Create__FP10fopAc_ac_c,
    (process_method_func)daFlorBoad_Delete__FP12daFlorBoad_c,
    (process_method_func)daFlorBoad_Execute__FP12daFlorBoad_c,
    0,
    (process_method_func)daFlorBoad_Draw__FP12daFlorBoad_c,
};

/* 80C6B24C-80C6B27C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv5FBoard */
extern actor_process_profile_definition g_profile_Obj_Lv5FBoard = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Lv5FBoard,     // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daFlorBoad_c),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  538,                    // mPriority
  &l_daFlorBoad_Method,   // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C6B27C-80C6B288 0000E4 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C6B288-80C6B294 0000F0 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C6B294-80C6B2A0 0000FC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C6B2A0-80C6B2AC 000108 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C6B2AC-80C6B2D4 000114 0028+00 1/1 0/0 0/0 .data            __vt__12daFlorBoad_c */
SECTION_DATA extern void* __vt__12daFlorBoad_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daFlorBoad_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daFlorBoad_cFPPA3_A4_f,
    (void*)Draw__12daFlorBoad_cFv,
    (void*)Delete__12daFlorBoad_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C6B2D4-80C6B2E0 00013C 000C+00 2/2 0/0 0/0 .data            __vt__16daFlorBoad_HIO_c */
SECTION_DATA extern void* __vt__16daFlorBoad_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daFlorBoad_HIO_cFv,
};

/* 80C6B2E0-80C6B2EC 000148 000C+00 3/3 0/0 0/0 .data            __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA extern void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80C6B2EC-80C6B2F8 000154 000C+00 4/4 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C6A60C-80C6A658 0000EC 004C+00 1/1 0/0 0/0 .text            __ct__16daFlorBoad_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFlorBoad_HIO_c::daFlorBoad_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__ct__16daFlorBoad_HIO_cFv.s"
}
#pragma pop

/* 80C6A658-80C6A6B4 000138 005C+00 1/0 0/0 0/0 .text            __dt__18fOpAcm_HIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
extern "C" asm void __dt__18fOpAcm_HIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__18fOpAcm_HIO_entry_cFv.s"
}
#pragma pop

/* 80C6A6B4-80C6A6FC 000194 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" asm void __dt__14mDoHIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C6A6FC-80C6A784 0001DC 0088+00 2/2 0/0 0/0 .text            setBaseMtx__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/setBaseMtx__12daFlorBoad_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6B18C-80C6B18C 000044 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C6B18C = "L5haYuka";
#pragma pop

/* 80C6A784-80C6A7F0 000264 006C+00 1/0 0/0 0/0 .text            CreateHeap__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/CreateHeap__12daFlorBoad_cFv.s"
}
#pragma pop

/* 80C6A7F0-80C6A9C0 0002D0 01D0+00 1/1 0/0 0/0 .text            create__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/create__12daFlorBoad_cFv.s"
}
#pragma pop

/* 80C6A9C0-80C6AA08 0004A0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C6AA08-80C6AA50 0004E8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C6AA50-80C6AAAC 000530 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C6AAAC-80C6AB04 00058C 0058+00 1/0 0/0 0/0 .text            Execute__12daFlorBoad_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/Execute__12daFlorBoad_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6B300-80C6B30C 000008 000C+00 1/1 0/0 0/0 .bss             @3647 */
static u8 lit_3647[12];

/* 80C6B30C-80C6B320 000014 0014+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[20];

/* 80C6B320-80C6B324 000028 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80C6B320[4];

/* 80C6AB04-80C6AB90 0005E4 008C+00 1/1 0/0 0/0 .text            procMain__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::procMain() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/procMain__12daFlorBoad_cFv.s"
}
#pragma pop

/* 80C6AB90-80C6ABAC 000670 001C+00 1/1 0/0 0/0 .text            init_modeWait__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/init_modeWait__12daFlorBoad_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6B14C-80C6B17C 000004 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__12daFlorBoad_c */
SECTION_RODATA u8 const daFlorBoad_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C6B14C, &daFlorBoad_c::mCcDObjInfo);

/* 80C6B17C-80C6B180 000034 0004+00 0/1 0/0 0/0 .rodata          @3870 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3870 = 280.0f;
COMPILER_STRIP_GATE(0x80C6B17C, &lit_3870);
#pragma pop

/* 80C6B180-80C6B184 000038 0004+00 0/1 0/0 0/0 .rodata          @3871 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3871 = 170.0f;
COMPILER_STRIP_GATE(0x80C6B180, &lit_3871);
#pragma pop

/* 80C6B184-80C6B188 00003C 0004+00 0/1 0/0 0/0 .rodata          @3872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3872 = 150.0f;
COMPILER_STRIP_GATE(0x80C6B184, &lit_3872);
#pragma pop

/* 80C6ABAC-80C6AC9C 00068C 00F0+00 1/0 0/0 0/0 .text            modeWait__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/modeWait__12daFlorBoad_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6B188-80C6B18C 000040 0004+00 1/1 0/0 0/0 .rodata          @3891 */
SECTION_RODATA static f32 const lit_3891 = -1.0f;
COMPILER_STRIP_GATE(0x80C6B188, &lit_3891);

/* 80C6AC9C-80C6AD40 00077C 00A4+00 1/1 0/0 0/0 .text            init_modeBreak__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::init_modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/init_modeBreak__12daFlorBoad_cFv.s"
}
#pragma pop

/* 80C6AD40-80C6AEB0 000820 0170+00 1/0 0/0 0/0 .text            modeBreak__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/modeBreak__12daFlorBoad_cFv.s"
}
#pragma pop

/* 80C6AEB0-80C6AF54 000990 00A4+00 1/0 0/0 0/0 .text            Draw__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/Draw__12daFlorBoad_cFv.s"
}
#pragma pop

/* 80C6AF54-80C6AF84 000A34 0030+00 1/0 0/0 0/0 .text            Delete__12daFlorBoad_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/Delete__12daFlorBoad_cFv.s"
}
#pragma pop

/* 80C6AF84-80C6AFB0 000A64 002C+00 1/0 0/0 0/0 .text            daFlorBoad_Draw__FP12daFlorBoad_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFlorBoad_Draw(daFlorBoad_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Draw__FP12daFlorBoad_c.s"
}
#pragma pop

/* 80C6AFB0-80C6AFD0 000A90 0020+00 1/0 0/0 0/0 .text daFlorBoad_Execute__FP12daFlorBoad_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFlorBoad_Execute(daFlorBoad_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Execute__FP12daFlorBoad_c.s"
}
#pragma pop

/* 80C6AFD0-80C6AFF0 000AB0 0020+00 1/0 0/0 0/0 .text            daFlorBoad_Delete__FP12daFlorBoad_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFlorBoad_Delete(daFlorBoad_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Delete__FP12daFlorBoad_c.s"
}
#pragma pop

/* 80C6AFF0-80C6B010 000AD0 0020+00 1/0 0/0 0/0 .text            daFlorBoad_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFlorBoad_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C6B010-80C6B058 000AF0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C6B058-80C6B0C4 000B38 006C+00 2/1 0/0 0/0 .text            __dt__16daFlorBoad_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFlorBoad_HIO_c::~daFlorBoad_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__16daFlorBoad_HIO_cFv.s"
}
#pragma pop

/* 80C6B0C4-80C6B134 000BA4 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv5FloorBoard_cpp
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lv5FloorBoard_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__sinit_d_a_obj_lv5FloorBoard_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C6B0C4, __sinit_d_a_obj_lv5FloorBoard_cpp);
#pragma pop

/* 80C6B18C-80C6B18C 000044 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
