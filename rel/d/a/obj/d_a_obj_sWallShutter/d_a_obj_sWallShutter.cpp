/**
 * @file d_a_obj_sWallShutter.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__17daSwShutter_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daSwShutter_cFv();
extern "C" void CreateHeap__13daSwShutter_cFv();
extern "C" void create__13daSwShutter_cFv();
extern "C" void Execute__13daSwShutter_cFPPA3_A4_f();
extern "C" void moveMain__13daSwShutter_cFv();
extern "C" void init_modeWait__13daSwShutter_cFv();
extern "C" void modeWait__13daSwShutter_cFv();
extern "C" void init_modeMoveDownInit__13daSwShutter_cFv();
extern "C" void modeMoveDownInit__13daSwShutter_cFv();
extern "C" void init_modeMoveDown__13daSwShutter_cFv();
extern "C" void modeMoveDown__13daSwShutter_cFv();
extern "C" void init_modeMoveDownEnd__13daSwShutter_cFv();
extern "C" void modeMoveDownEnd__13daSwShutter_cFv();
extern "C" void Draw__13daSwShutter_cFv();
extern "C" void Delete__13daSwShutter_cFv();
extern "C" static void daSwShutter_Draw__FP13daSwShutter_c();
extern "C" static void daSwShutter_Execute__FP13daSwShutter_c();
extern "C" static void daSwShutter_Delete__FP13daSwShutter_c();
extern "C" static void daSwShutter_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daSwShutter_HIO_cFv();
extern "C" void __sinit_d_a_obj_sWallShutter_cpp();
extern "C" extern char const* const d_a_obj_sWallShutter__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
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
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80598F78-80598F7C 000000 0004+00 6/6 0/0 0/0 .rodata          @3630 */
SECTION_RODATA static u8 const lit_3630[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80598F78, &lit_3630);

/* 80598F7C-80598F80 000004 0004+00 0/1 0/0 0/0 .rodata          @3631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3631 = 100.0f;
COMPILER_STRIP_GATE(0x80598F7C, &lit_3631);
#pragma pop

/* 80598F80-80598F84 000008 0004+00 0/1 0/0 0/0 .rodata          @3632 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3632 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80598F80, &lit_3632);
#pragma pop

/* 80598F84-80598F88 00000C 0004+00 0/1 0/0 0/0 .rodata          @3633 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3633 = 90.0f;
COMPILER_STRIP_GATE(0x80598F84, &lit_3633);
#pragma pop

/* 80598F88-80598F8C 000010 0004+00 0/1 0/0 0/0 .rodata          @3634 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3634 = 45.0f;
COMPILER_STRIP_GATE(0x80598F88, &lit_3634);
#pragma pop

/* 80598F8C-80598F90 000014 0004+00 0/1 0/0 0/0 .rodata          @3635 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3635 = 150.0f;
COMPILER_STRIP_GATE(0x80598F8C, &lit_3635);
#pragma pop

/* 80598F90-80598F94 000018 0004+00 0/1 0/0 0/0 .rodata          @3636 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3636 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80598F90, &lit_3636);
#pragma pop

/* 80598F94-80598F98 00001C 0004+00 0/1 0/0 0/0 .rodata          @3637 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3637 = 5.0f;
COMPILER_STRIP_GATE(0x80598F94, &lit_3637);
#pragma pop

/* 80598FB8-80598FB8 000040 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80598FB8 = "P_Rgate";
SECTION_DEAD static char const* const stringBase_80598FC0 = "SDGate";
#pragma pop

/* 80598FC8-80598FD4 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80598FD4-80598FE8 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80598FE8-80598FF0 -00001 0008+00 3/3 0/0 0/0 .data            l_resNameIdx */
SECTION_DATA static void* l_resNameIdx[2] = {
    (void*)&d_a_obj_sWallShutter__stringBase0,
    (void*)(((char*)&d_a_obj_sWallShutter__stringBase0) + 0x8),
};

/* 80598FF0-80598FFC -00001 000C+00 0/1 0/0 0/0 .data            @3746 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3746[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__13daSwShutter_cFv,
};
#pragma pop

/* 80598FFC-80599008 -00001 000C+00 0/1 0/0 0/0 .data            @3747 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3747[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveDownInit__13daSwShutter_cFv,
};
#pragma pop

/* 80599008-80599014 -00001 000C+00 0/1 0/0 0/0 .data            @3748 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3748[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveDown__13daSwShutter_cFv,
};
#pragma pop

/* 80599014-80599020 -00001 000C+00 0/1 0/0 0/0 .data            @3749 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3749[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveDownEnd__13daSwShutter_cFv,
};
#pragma pop

/* 80599020-80599050 000058 0030+00 0/1 0/0 0/0 .data            mode_proc$3745 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80599050-80599070 -00001 0020+00 1/0 0/0 0/0 .data            l_daSwShutter_Method */
static actor_method_class l_daSwShutter_Method = {
    (process_method_func)daSwShutter_Create__FP10fopAc_ac_c,
    (process_method_func)daSwShutter_Delete__FP13daSwShutter_c,
    (process_method_func)daSwShutter_Execute__FP13daSwShutter_c,
    0,
    (process_method_func)daSwShutter_Draw__FP13daSwShutter_c,
};

/* 80599070-805990A0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_SwallShutter */
extern actor_process_profile_definition g_profile_Obj_SwallShutter = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_SwallShutter,  // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daSwShutter_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  619,                    // mPriority
  &l_daSwShutter_Method,  // sub_method
  0x00044000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 805990A0-805990C8 0000D8 0028+00 1/1 0/0 0/0 .data            __vt__13daSwShutter_c */
SECTION_DATA extern void* __vt__13daSwShutter_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daSwShutter_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__13daSwShutter_cFPPA3_A4_f,
    (void*)Draw__13daSwShutter_cFv,
    (void*)Delete__13daSwShutter_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 805990C8-805990D4 000100 000C+00 2/2 0/0 0/0 .data            __vt__17daSwShutter_HIO_c */
SECTION_DATA extern void* __vt__17daSwShutter_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daSwShutter_HIO_cFv,
};

/* 805990D4-805990E0 00010C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 805981EC-8059825C 0000EC 0070+00 1/1 0/0 0/0 .text            __ct__17daSwShutter_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSwShutter_HIO_c::daSwShutter_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/__ct__17daSwShutter_HIO_cFv.s"
}
#pragma pop

/* 8059825C-805982A4 00015C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" asm void __dt__14mDoHIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 805982A4-80598344 0001A4 00A0+00 2/2 0/0 0/0 .text            setBaseMtx__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/setBaseMtx__13daSwShutter_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80598F98-80598FA0 000020 0008+00 1/1 0/0 0/0 .rodata          l_bmdIdx */
SECTION_RODATA static u8 const l_bmdIdx[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(0x80598F98, &l_bmdIdx);

/* 80598344-805983C4 000244 0080+00 1/0 0/0 0/0 .text            CreateHeap__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/CreateHeap__13daSwShutter_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80598FA0-80598FA8 000028 0008+00 0/1 0/0 0/0 .rodata          l_dzbIdx */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_dzbIdx[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};
COMPILER_STRIP_GATE(0x80598FA0, &l_dzbIdx);
#pragma pop

/* 80598FA8-80598FAC 000030 0004+00 0/2 0/0 0/0 .rodata          @3730 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3730 = -450.0f;
COMPILER_STRIP_GATE(0x80598FA8, &lit_3730);
#pragma pop

/* 805983C4-80598564 0002C4 01A0+00 1/1 0/0 0/0 .text            create__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/create__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598564-805985B4 000464 0050+00 1/0 0/0 0/0 .text            Execute__13daSwShutter_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/Execute__13daSwShutter_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80598FAC-80598FB0 000034 0004+00 1/1 0/0 0/0 .rodata          @3766 */
SECTION_RODATA static u32 const lit_3766 = 0x43360B61;
COMPILER_STRIP_GATE(0x80598FAC, &lit_3766);

/* 805990E8-805990F4 000008 000C+00 1/1 0/0 0/0 .bss             @3624 */
static u8 lit_3624[12];

/* 805990F4-80599120 000014 002C+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[44];

/* 80599120-80599124 000040 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80599120[4];

/* 805985B4-8059873C 0004B4 0188+00 1/1 0/0 0/0 .text            moveMain__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::moveMain() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/moveMain__13daSwShutter_cFv.s"
}
#pragma pop

/* 8059873C-80598748 00063C 000C+00 1/1 0/0 0/0 .text            init_modeWait__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/init_modeWait__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598748-8059879C 000648 0054+00 1/0 0/0 0/0 .text            modeWait__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/modeWait__13daSwShutter_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80598FB0-80598FB4 000038 0004+00 1/3 0/0 0/0 .rodata          @3826 */
SECTION_RODATA static f32 const lit_3826 = 1.0f;
COMPILER_STRIP_GATE(0x80598FB0, &lit_3826);

/* 80598FB4-80598FB8 00003C 0004+00 0/1 0/0 0/0 .rodata          @3827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3827 = -1.0f;
COMPILER_STRIP_GATE(0x80598FB4, &lit_3827);
#pragma pop

/* 8059879C-805989D0 00069C 0234+00 1/1 0/0 0/0 .text init_modeMoveDownInit__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::init_modeMoveDownInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/init_modeMoveDownInit__13daSwShutter_cFv.s"
}
#pragma pop

/* 805989D0-80598A04 0008D0 0034+00 1/0 0/0 0/0 .text            modeMoveDownInit__13daSwShutter_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::modeMoveDownInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/modeMoveDownInit__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598A04-80598AFC 000904 00F8+00 1/1 0/0 0/0 .text init_modeMoveDown__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::init_modeMoveDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/init_modeMoveDown__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598AFC-80598D4C 0009FC 0250+00 1/0 0/0 0/0 .text            modeMoveDown__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::modeMoveDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/modeMoveDown__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598D4C-80598D58 000C4C 000C+00 2/2 0/0 0/0 .text init_modeMoveDownEnd__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::init_modeMoveDownEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/init_modeMoveDownEnd__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598D58-80598D5C 000C58 0004+00 1/0 0/0 0/0 .text            modeMoveDownEnd__13daSwShutter_cFv
 */
void daSwShutter_c::modeMoveDownEnd() {
    /* empty function */
}

/* 80598D5C-80598E00 000C5C 00A4+00 1/0 0/0 0/0 .text            Draw__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/Draw__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598E00-80598E40 000D00 0040+00 1/0 0/0 0/0 .text            Delete__13daSwShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwShutter_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/Delete__13daSwShutter_cFv.s"
}
#pragma pop

/* 80598E40-80598E6C 000D40 002C+00 1/0 0/0 0/0 .text            daSwShutter_Draw__FP13daSwShutter_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwShutter_Draw(daSwShutter_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/daSwShutter_Draw__FP13daSwShutter_c.s"
}
#pragma pop

/* 80598E6C-80598E8C 000D6C 0020+00 1/0 0/0 0/0 .text daSwShutter_Execute__FP13daSwShutter_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwShutter_Execute(daSwShutter_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/daSwShutter_Execute__FP13daSwShutter_c.s"
}
#pragma pop

/* 80598E8C-80598EAC 000D8C 0020+00 1/0 0/0 0/0 .text daSwShutter_Delete__FP13daSwShutter_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwShutter_Delete(daSwShutter_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/daSwShutter_Delete__FP13daSwShutter_c.s"
}
#pragma pop

/* 80598EAC-80598ECC 000DAC 0020+00 1/0 0/0 0/0 .text            daSwShutter_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwShutter_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/daSwShutter_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80598ECC-80598F28 000DCC 005C+00 2/1 0/0 0/0 .text            __dt__17daSwShutter_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSwShutter_HIO_c::~daSwShutter_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/__dt__17daSwShutter_HIO_cFv.s"
}
#pragma pop

/* 80598F28-80598F64 000E28 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_sWallShutter_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_sWallShutter_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sWallShutter/d_a_obj_sWallShutter/__sinit_d_a_obj_sWallShutter_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80598F28, __sinit_d_a_obj_sWallShutter_cpp);
#pragma pop

/* 80598FB8-80598FB8 000040 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
