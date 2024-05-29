/**
 * @file d_a_obj_rfHole.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__14daRfHole_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daRfHole_cFv();
extern "C" void CreateHeap__10daRfHole_cFv();
extern "C" void create__10daRfHole_cFv();
extern "C" void rideCallBack__10daRfHole_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void playerAreaCheck__10daRfHole_cFv();
extern "C" void Execute__10daRfHole_cFPPA3_A4_f();
extern "C" void holeProc__10daRfHole_cFv();
extern "C" void init_modeWait__10daRfHole_cFv();
extern "C" void modeWait__10daRfHole_cFv();
extern "C" void init_modeBreak__10daRfHole_cFv();
extern "C" void modeBreak__10daRfHole_cFv();
extern "C" void init_modeBreakEff__10daRfHole_cFv();
extern "C" void modeBreakEff__10daRfHole_cFv();
extern "C" void init_modeEnd__10daRfHole_cFv();
extern "C" void modeEnd__10daRfHole_cFv();
extern "C" void setBreakEffect__10daRfHole_cFv();
extern "C" void Draw__10daRfHole_cFv();
extern "C" void Delete__10daRfHole_cFv();
extern "C" static void daRfHole_Draw__FP10daRfHole_c();
extern "C" static void daRfHole_Execute__FP10daRfHole_c();
extern "C" static void daRfHole_Delete__FP10daRfHole_c();
extern "C" static void daRfHole_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daRfHole_HIO_cFv();
extern "C" void __sinit_d_a_obj_rfHole_cpp();
extern "C" extern char const* const d_a_obj_rfHole__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
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
extern "C" void StartShock__12dVibration_cFii4cXyz();
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
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CB9A84-80CB9A88 000000 0004+00 4/4 0/0 0/0 .rodata          @3649 */
SECTION_RODATA static f32 const lit_3649 = 130.0f;
COMPILER_STRIP_GATE(0x80CB9A84, &lit_3649);

/* 80CB9A88-80CB9A8C 000004 0004+00 0/1 0/0 0/0 .rodata          @3650 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3650 = 200.0f;
COMPILER_STRIP_GATE(0x80CB9A88, &lit_3650);
#pragma pop

/* 80CB9A8C-80CB9A94 000008 0004+04 0/4 0/0 0/0 .rodata          @3651 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3651[4 + 4 /* padding */] = {
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
COMPILER_STRIP_GATE(0x80CB9A8C, &lit_3651);
#pragma pop

/* 80CB9ACC-80CB9AD8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CB9AD8-80CB9AEC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80CB9AEC-80CB9AF8 -00001 000C+00 0/1 0/0 0/0 .data            @3835 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3835[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__10daRfHole_cFv,
};
#pragma pop

/* 80CB9AF8-80CB9B04 -00001 000C+00 0/1 0/0 0/0 .data            @3836 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3836[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreak__10daRfHole_cFv,
};
#pragma pop

/* 80CB9B04-80CB9B10 -00001 000C+00 0/1 0/0 0/0 .data            @3837 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3837[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreakEff__10daRfHole_cFv,
};
#pragma pop

/* 80CB9B10-80CB9B1C -00001 000C+00 0/1 0/0 0/0 .data            @3838 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3838[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeEnd__10daRfHole_cFv,
};
#pragma pop

/* 80CB9B1C-80CB9B4C 000050 0030+00 0/1 0/0 0/0 .data            mode_proc$3834 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CB9B4C-80CB9B6C -00001 0020+00 1/0 0/0 0/0 .data            l_daRfHole_Method */
static actor_method_class l_daRfHole_Method = {
    (process_method_func)daRfHole_Create__FP10fopAc_ac_c,
    (process_method_func)daRfHole_Delete__FP10daRfHole_c,
    (process_method_func)daRfHole_Execute__FP10daRfHole_c,
    0,
    (process_method_func)daRfHole_Draw__FP10daRfHole_c,
};

/* 80CB9B6C-80CB9B9C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_RfHole */
extern actor_process_profile_definition g_profile_Obj_RfHole = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_RfHole,        // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daRfHole_c),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  514,                    // mPriority
  &l_daRfHole_Method,     // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80CB9B9C-80CB9BC4 0000D0 0028+00 1/1 0/0 0/0 .data            __vt__10daRfHole_c */
SECTION_DATA extern void* __vt__10daRfHole_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daRfHole_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__10daRfHole_cFPPA3_A4_f,
    (void*)Draw__10daRfHole_cFv,
    (void*)Delete__10daRfHole_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CB9BC4-80CB9BD0 0000F8 000C+00 2/2 0/0 0/0 .data            __vt__14daRfHole_HIO_c */
SECTION_DATA extern void* __vt__14daRfHole_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daRfHole_HIO_cFv,
};

/* 80CB9BD0-80CB9BDC 000104 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80CB8E6C-80CB8EBC 0000EC 0050+00 1/1 0/0 0/0 .text            __ct__14daRfHole_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daRfHole_HIO_c::daRfHole_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/__ct__14daRfHole_HIO_cFv.s"
}
#pragma pop

/* 80CB8EBC-80CB8F04 00013C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" asm void __dt__14mDoHIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80CB8F04-80CB8F8C 000184 0088+00 2/2 0/0 0/0 .text            setBaseMtx__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/setBaseMtx__10daRfHole_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB9AC0-80CB9AC0 00003C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CB9AC0 = "Otosiana";
#pragma pop

/* 80CB8F8C-80CB8FF8 00020C 006C+00 1/0 0/0 0/0 .text            CreateHeap__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/CreateHeap__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB8FF8-80CB9148 000278 0150+00 1/1 0/0 0/0 .text            create__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/create__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB9148-80CB9194 0003C8 004C+00 1/1 0/0 0/0 .text
 * rideCallBack__10daRfHole_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/rideCallBack__10daRfHole_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB9A94-80CB9A9C 000010 0008+00 0/1 0/0 0/0 .rodata          @3817 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3817[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB9A94, &lit_3817);
#pragma pop

/* 80CB9A9C-80CB9AA4 000018 0008+00 0/1 0/0 0/0 .rodata          @3818 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3818[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB9A9C, &lit_3818);
#pragma pop

/* 80CB9AA4-80CB9AAC 000020 0008+00 0/1 0/0 0/0 .rodata          @3819 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3819[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB9AA4, &lit_3819);
#pragma pop

/* 80CB9AAC-80CB9AB0 000028 0004+00 0/3 0/0 0/0 .rodata          @3820 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3820 = 1.0f;
COMPILER_STRIP_GATE(0x80CB9AAC, &lit_3820);
#pragma pop

/* 80CB9AB0-80CB9AB4 00002C 0004+00 0/2 0/0 0/0 .rodata          @3821 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3821 = -1.0f;
COMPILER_STRIP_GATE(0x80CB9AB0, &lit_3821);
#pragma pop

/* 80CB9BE8-80CB9BF4 000008 000C+00 1/1 0/0 0/0 .bss             @3643 */
static u8 lit_3643[12];

/* 80CB9BF4-80CB9C0C 000014 0018+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[24];

/* 80CB9194-80CB940C 000414 0278+00 1/1 0/0 0/0 .text            playerAreaCheck__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::playerAreaCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/playerAreaCheck__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB940C-80CB9464 00068C 0058+00 1/0 0/0 0/0 .text            Execute__10daRfHole_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/Execute__10daRfHole_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB9C0C-80CB9C10 00002C 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80CB9C0C[4];

/* 80CB9464-80CB9520 0006E4 00BC+00 1/1 0/0 0/0 .text            holeProc__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::holeProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/holeProc__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB9520-80CB952C 0007A0 000C+00 1/1 0/0 0/0 .text            init_modeWait__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/init_modeWait__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB952C-80CB9558 0007AC 002C+00 1/0 0/0 0/0 .text            modeWait__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/modeWait__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB9558-80CB96AC 0007D8 0154+00 1/1 0/0 0/0 .text            init_modeBreak__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::init_modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/init_modeBreak__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB96AC-80CB96CC 00092C 0020+00 1/0 0/0 0/0 .text            modeBreak__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/modeBreak__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB96CC-80CB971C 00094C 0050+00 1/1 0/0 0/0 .text            init_modeBreakEff__10daRfHole_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::init_modeBreakEff() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/init_modeBreakEff__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB971C-80CB973C 00099C 0020+00 1/0 0/0 0/0 .text            modeBreakEff__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::modeBreakEff() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/modeBreakEff__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB973C-80CB9748 0009BC 000C+00 1/1 0/0 0/0 .text            init_modeEnd__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::init_modeEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/init_modeEnd__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB9748-80CB9768 0009C8 0020+00 1/0 0/0 0/0 .text            modeEnd__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::modeEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/modeEnd__10daRfHole_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CB9AB4-80CB9AC0 000030 000A+02 0/1 0/0 0/0 .rodata          particle_id$3917 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const particle_id[10 + 2 /* padding */] = {
    0x83,
    0xB0,
    0x83,
    0xB1,
    0x83,
    0xB2,
    0x83,
    0xB3,
    0x83,
    0xB4,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CB9AB4, &particle_id);
#pragma pop

/* 80CB9768-80CB9878 0009E8 0110+00 2/2 0/0 0/0 .text            setBreakEffect__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::setBreakEffect() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/setBreakEffect__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB9878-80CB991C 000AF8 00A4+00 1/0 0/0 0/0 .text            Draw__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/Draw__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB991C-80CB994C 000B9C 0030+00 1/0 0/0 0/0 .text            Delete__10daRfHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRfHole_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/Delete__10daRfHole_cFv.s"
}
#pragma pop

/* 80CB994C-80CB9978 000BCC 002C+00 1/0 0/0 0/0 .text            daRfHole_Draw__FP10daRfHole_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daRfHole_Draw(daRfHole_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/daRfHole_Draw__FP10daRfHole_c.s"
}
#pragma pop

/* 80CB9978-80CB9998 000BF8 0020+00 1/0 0/0 0/0 .text            daRfHole_Execute__FP10daRfHole_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daRfHole_Execute(daRfHole_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/daRfHole_Execute__FP10daRfHole_c.s"
}
#pragma pop

/* 80CB9998-80CB99B8 000C18 0020+00 1/0 0/0 0/0 .text            daRfHole_Delete__FP10daRfHole_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daRfHole_Delete(daRfHole_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/daRfHole_Delete__FP10daRfHole_c.s"
}
#pragma pop

/* 80CB99B8-80CB99D8 000C38 0020+00 1/0 0/0 0/0 .text            daRfHole_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daRfHole_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/daRfHole_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CB99D8-80CB9A34 000C58 005C+00 2/1 0/0 0/0 .text            __dt__14daRfHole_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daRfHole_HIO_c::~daRfHole_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/__dt__14daRfHole_HIO_cFv.s"
}
#pragma pop

/* 80CB9A34-80CB9A70 000CB4 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_rfHole_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_rfHole_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rfHole/d_a_obj_rfHole/__sinit_d_a_obj_rfHole_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80CB9A34, __sinit_d_a_obj_rfHole_cpp);
#pragma pop

/* 80CB9AC0-80CB9AC0 00003C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
