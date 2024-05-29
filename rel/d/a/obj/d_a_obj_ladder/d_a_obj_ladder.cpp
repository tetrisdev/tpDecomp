/**
 * @file d_a_obj_ladder.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void CreateHeap__Q211daObjLadder5Act_cFv();
extern "C" void Create__Q211daObjLadder5Act_cFv();
extern "C" void Mthd_Create__Q211daObjLadder5Act_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" bool Delete__Q211daObjLadder5Act_cFv();
extern "C" void Mthd_Delete__Q211daObjLadder5Act_cFv();
extern "C" void demo_end_reset__Q211daObjLadder5Act_cFv();
extern "C" void mode_wait_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_wait__Q211daObjLadder5Act_cFv();
extern "C" void mode_demoreq_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_demoreq__Q211daObjLadder5Act_cFv();
extern "C" void mode_vib_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_vib__Q211daObjLadder5Act_cFv();
extern "C" void mode_drop_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_drop__Q211daObjLadder5Act_cFv();
extern "C" void mode_fell_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_fell__Q211daObjLadder5Act_cFv();
extern "C" void set_mtx__Q211daObjLadder5Act_cFv();
extern "C" void init_mtx__Q211daObjLadder5Act_cFv();
extern "C" void Execute__Q211daObjLadder5Act_cFPPA3_A4_f();
extern "C" void Draw__Q211daObjLadder5Act_cFv();
extern "C" static void func_8058DC5C();
extern "C" static void func_8058DC7C();
extern "C" static void func_8058DC9C();
extern "C" static void func_8058DCBC();
extern "C" static void func_8058DCE8();
extern "C" void func_8058DD14(void* _this, fopAc_ac_c const*, daObjLadder::Act_c::Prm_e,
                              daObjLadder::Act_c::Prm_e);
extern "C" static void func_8058DD30();
extern "C" static void func_8058DD38();
extern "C" static void func_8058DD40();
extern "C" u8 const M_arcname__Q211daObjLadder5Act_c[5 + 3 /* padding */];
extern "C" u8 M_tmp_mtx__Q211daObjLadder5Act_c[48];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void posMoveF_stream__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzff();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventData__16dEvent_manager_cFs();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void dBgS_MoveBGProc_Trans__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_pol_sound_get__FPC13cBgS_PolyInfo();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 8058DD50-8058DD74 000000 0024+00 5/5 0/0 0/0 .rodata
 * L_attr__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@        */
SECTION_RODATA static u8 const data_8058DD50[36] = {
    0xC0, 0x40, 0x00, 0x00, 0x3B, 0xA3, 0xD7, 0x0A, 0x3A, 0x03, 0x12, 0x6F,
    0x3F, 0x00, 0x00, 0x00, 0x03, 0x4B, 0x32, 0x2D, 0x28, 0x00, 0x4E, 0x20,
    0x3C, 0xC3, 0x00, 0x0F, 0x40, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8058DD50, &data_8058DD50);

/* 8058DD74-8058DD7C 000024 0005+03 3/3 0/0 0/0 .rodata          M_arcname__Q211daObjLadder5Act_c */
SECTION_RODATA u8 const daObjLadder::Act_c::M_arcname[5 + 3 /* padding */] = {
    0x4D,
    0x68,
    0x73,
    0x67,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8058DD74, &daObjLadder::Act_c::M_arcname);

/* 8058DDAC-8058DDB8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8058DDB8-8058DDCC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8058DDCC-8058DDFC 000020 0030+00 3/3 0/0 0/0 .data
 * L_attr_type__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@   */
SECTION_DATA static u8 data_8058DDCC[48] = {
    0x00, 0x08, 0x00, 0x10, 0x44, 0x16, 0x00, 0x00, 0x00, 0x09, 0x00, 0x11, 0x44, 0x61, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x0C, 0x44, 0x96, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0D, 0x44, 0xBB, 0x80, 0x00,
    0x00, 0x07, 0x00, 0x0F, 0x43, 0xE1, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0E, 0x43, 0x96, 0x00, 0x00,
};

/* 8058D158-8058D1D8 000078 0080+00 1/0 0/0 0/0 .text            CreateHeap__Q211daObjLadder5Act_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/CreateHeap__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DD7C-8058DD80 00002C 0004+00 0/1 0/0 0/0 .rodata          @3667 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3667 = -55.0f;
COMPILER_STRIP_GATE(0x8058DD7C, &lit_3667);
#pragma pop

/* 8058DD80-8058DD84 000030 0004+00 0/2 0/0 0/0 .rodata          @3668 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3668 = -1.0f;
COMPILER_STRIP_GATE(0x8058DD80, &lit_3668);
#pragma pop

/* 8058DD84-8058DD88 000034 0004+00 0/1 0/0 0/0 .rodata          @3669 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3669 = -10.0f;
COMPILER_STRIP_GATE(0x8058DD84, &lit_3669);
#pragma pop

/* 8058DD88-8058DD8C 000038 0004+00 0/1 0/0 0/0 .rodata          @3670 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3670 = 55.0f;
COMPILER_STRIP_GATE(0x8058DD88, &lit_3670);
#pragma pop

/* 8058DD8C-8058DD90 00003C 0004+00 0/1 0/0 0/0 .rodata          @3671 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3671 = 41.0f;
COMPILER_STRIP_GATE(0x8058DD8C, &lit_3671);
#pragma pop

/* 8058DD90-8058DD94 000040 0004+00 0/1 0/0 0/0 .rodata          @3672 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3672 = 10.0f;
COMPILER_STRIP_GATE(0x8058DD90, &lit_3672);
#pragma pop

/* 8058DD94-8058DD98 000044 0004+00 1/3 0/0 0/0 .rodata          @3673 */
SECTION_RODATA static u8 const lit_3673[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8058DD94, &lit_3673);

/* 8058DD98-8058DD9C 000048 0004+00 0/1 0/0 0/0 .rodata          @3674 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3674 = 5.0f;
COMPILER_STRIP_GATE(0x8058DD98, &lit_3674);
#pragma pop

/* 8058D1D8-8058D378 0000F8 01A0+00 1/0 0/0 0/0 .text            Create__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Create__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DDFC-8058DE08 -00001 000C+00 0/1 0/0 0/0 .data            @3878 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3878[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_wait__Q211daObjLadder5Act_cFv,
};
#pragma pop

/* 8058DE08-8058DE14 -00001 000C+00 0/1 0/0 0/0 .data            @3879 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3879[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_demoreq__Q211daObjLadder5Act_cFv,
};
#pragma pop

/* 8058DE14-8058DE20 -00001 000C+00 0/1 0/0 0/0 .data            @3880 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3880[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_vib__Q211daObjLadder5Act_cFv,
};
#pragma pop

/* 8058DE20-8058DE2C -00001 000C+00 0/1 0/0 0/0 .data            @3881 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3881[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_drop__Q211daObjLadder5Act_cFv,
};
#pragma pop

/* 8058DE2C-8058DE38 -00001 000C+00 0/1 0/0 0/0 .data            @3882 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3882[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_fell__Q211daObjLadder5Act_cFv,
};
#pragma pop

/* 8058DE38-8058DE74 00008C 003C+00 0/1 0/0 0/0 .data            mode_proc$3877 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8058DE74-8058DE94 -00001 0020+00 1/0 0/0 0/0 .data
 * Mthd_Table__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@    */
static actor_method_class data_8058DE74 = {
    (process_method_func)func_8058DC5C, 
    (process_method_func)func_8058DC7C, 
    (process_method_func)func_8058DC9C, 
    (process_method_func)func_8058DCE8,
    (process_method_func)func_8058DCBC,
};

/* 8058DE94-8058DEC4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Ladder */
extern actor_process_profile_definition g_profile_Obj_Ladder = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Ladder,        // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjLadder),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  23,                     // mPriority
  &data_8058DE74,         // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8058DEC4-8058DEF4 000118 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8058DD30,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8058DD40,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8058DD38,
};

/* 8058DEF4-8058DF1C 000148 0028+00 1/1 0/0 0/0 .data            __vt__Q211daObjLadder5Act_c */
SECTION_DATA extern void* __vt__Q211daObjLadder5Act_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__Q211daObjLadder5Act_cFv,
    (void*)Create__Q211daObjLadder5Act_cFv,
    (void*)Execute__Q211daObjLadder5Act_cFPPA3_A4_f,
    (void*)Draw__Q211daObjLadder5Act_cFv,
    (void*)Delete__Q211daObjLadder5Act_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 8058D378-8058D478 000298 0100+00 1/1 0/0 0/0 .text Mthd_Create__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Mthd_Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Mthd_Create__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D478-8058D4F0 000398 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" asm void __dt__14dBgS_ObjGndChkFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 8058D4F0-8058D4F8 000410 0008+00 1/0 0/0 0/0 .text            Delete__Q211daObjLadder5Act_cFv */
bool daObjLadder::Act_c::Delete() {
    return true;
}

/* 8058D4F8-8058D544 000418 004C+00 1/1 0/0 0/0 .text Mthd_Delete__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Mthd_Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Mthd_Delete__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D544-8058D5AC 000464 0068+00 1/1 0/0 0/0 .text demo_end_reset__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::demo_end_reset() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/demo_end_reset__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D5AC-8058D5B8 0004CC 000C+00 1/1 0/0 0/0 .text mode_wait_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_wait_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_wait_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D5B8-8058D614 0004D8 005C+00 1/0 0/0 0/0 .text            mode_wait__Q211daObjLadder5Act_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_wait__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D614-8058D628 000534 0014+00 1/1 0/0 0/0 .text mode_demoreq_init__Q211daObjLadder5Act_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_demoreq_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_demoreq_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D628-8058D6E8 000548 00C0+00 1/0 0/0 0/0 .text mode_demoreq__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_demoreq() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_demoreq__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D6E8-8058D710 000608 0028+00 1/1 0/0 0/0 .text mode_vib_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_vib_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_vib_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D710-8058D7A8 000630 0098+00 1/0 0/0 0/0 .text            mode_vib__Q211daObjLadder5Act_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_vib() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_vib__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DD9C-8058DDA0 00004C 0004+00 1/1 0/0 0/0 .rodata          @3792 */
SECTION_RODATA static f32 const lit_3792 = -5.0f;
COMPILER_STRIP_GATE(0x8058DD9C, &lit_3792);

/* 8058D7A8-8058D7EC 0006C8 0044+00 1/1 0/0 0/0 .text mode_drop_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_drop_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_drop_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DDA0-8058DDA4 000050 0004+00 0/1 0/0 0/0 .rodata          @3838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3838 = 1.0f;
COMPILER_STRIP_GATE(0x8058DDA0, &lit_3838);
#pragma pop

/* 8058DDA4-8058DDA8 000054 0004+00 0/1 0/0 0/0 .rodata          @3839 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3839 = 0.5f;
COMPILER_STRIP_GATE(0x8058DDA4, &lit_3839);
#pragma pop

/* 8058DDA8-8058DDAC 000058 0004+00 0/1 0/0 0/0 .rodata          @3840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3840 = -0.5f;
COMPILER_STRIP_GATE(0x8058DDA8, &lit_3840);
#pragma pop

/* 8058D7EC-8058D9C0 00070C 01D4+00 1/0 0/0 0/0 .text            mode_drop__Q211daObjLadder5Act_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_drop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_drop__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D9C0-8058D9CC 0008E0 000C+00 2/2 0/0 0/0 .text mode_fell_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_fell_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_fell_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D9CC-8058D9D0 0008EC 0004+00 1/0 0/0 0/0 .text            mode_fell__Q211daObjLadder5Act_cFv
 */
void daObjLadder::Act_c::mode_fell() {
    /* empty function */
}

/* ############################################################################################## */
/* 8058DF20-8058DF50 000000 0030+00 2/2 0/0 0/0 .bss             M_tmp_mtx__Q211daObjLadder5Act_c */
u8 daObjLadder::Act_c::M_tmp_mtx[48];

/* 8058D9D0-8058DA64 0008F0 0094+00 3/3 0/0 0/0 .text            set_mtx__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::set_mtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/set_mtx__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058DA64-8058DAA0 000984 003C+00 1/1 0/0 0/0 .text            init_mtx__Q211daObjLadder5Act_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::init_mtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/init_mtx__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DF50-8058DF54 000030 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_8058DF50[4];

/* 8058DAA0-8058DBB8 0009C0 0118+00 1/0 0/0 0/0 .text Execute__Q211daObjLadder5Act_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Execute__Q211daObjLadder5Act_cFPPA3_A4_f.s"
}
#pragma pop

/* 8058DBB8-8058DC5C 000AD8 00A4+00 1/0 0/0 0/0 .text            Draw__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Draw__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058DC5C-8058DC7C 000B7C 0020+00 1/0 0/0 0/0 .text
 * Mthd_Create__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DC5C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DC5C.s"
}
#pragma pop

/* 8058DC7C-8058DC9C 000B9C 0020+00 1/0 0/0 0/0 .text
 * Mthd_Delete__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DC7C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DC7C.s"
}
#pragma pop

/* 8058DC9C-8058DCBC 000BBC 0020+00 1/0 0/0 0/0 .text
 * Mthd_Execute__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DC9C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DC9C.s"
}
#pragma pop

/* 8058DCBC-8058DCE8 000BDC 002C+00 1/0 0/0 0/0 .text
 * Mthd_Draw__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DCBC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DCBC.s"
}
#pragma pop

/* 8058DCE8-8058DD14 000C08 002C+00 1/0 0/0 0/0 .text
 * Mthd_IsDelete__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DCE8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DCE8.s"
}
#pragma pop

/* 8058DD14-8058DD30 000C34 001C+00 4/4 0/0 0/0 .text
 * PrmAbstract<Q311daObjLadder5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjLadder5Act_c5Prm_eQ311daObjLadder5Act_c5Prm_e
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8058DD14(void* _this, fopAc_ac_c const* param_0,
                                  daObjLadder::Act_c::Prm_e param_1,
                                  daObjLadder::Act_c::Prm_e param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD14.s"
}
#pragma pop

/* 8058DD30-8058DD38 000C50 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DD30() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD30.s"
}
#pragma pop

/* 8058DD38-8058DD40 000C58 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DD38() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD38.s"
}
#pragma pop

/* 8058DD40-8058DD48 000C60 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8058DD40() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD40.s"
}
#pragma pop
