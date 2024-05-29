/**
 * @file d_a_obj_hfuta.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initBaseMtx__11daObjFuta_cFv();
extern "C" void setBaseMtx__11daObjFuta_cFv();
extern "C" void Create__11daObjFuta_cFv();
extern "C" void CreateHeap__11daObjFuta_cFv();
extern "C" void create1st__11daObjFuta_cFv();
extern "C" void Execute__11daObjFuta_cFPPA3_A4_f();
extern "C" void __dt__5csXyzFv();
extern "C" void mode_proc_call__11daObjFuta_cFv();
extern "C" void mode_wait__11daObjFuta_cFv();
extern "C" void mode_move__11daObjFuta_cFv();
extern "C" void mode_end__11daObjFuta_cFv();
extern "C" void Draw__11daObjFuta_cFv();
extern "C" void Delete__11daObjFuta_cFv();
extern "C" static void daObjFuta_create1st__FP11daObjFuta_c();
extern "C" static void daObjFuta_MoveBGDelete__FP11daObjFuta_c();
extern "C" static void daObjFuta_MoveBGExecute__FP11daObjFuta_c();
extern "C" static void daObjFuta_MoveBGDraw__FP11daObjFuta_c();
extern "C" extern char const* const d_a_obj_hfuta__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 Zero__5csXyz[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 80C1DD8C-80C1DDC8 0000EC 003C+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/initBaseMtx__11daObjFuta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1EE78-80C1EE7C 000000 0004+00 2/2 0/0 0/0 .rodata          @3644 */
SECTION_RODATA static u8 const lit_3644[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C1EE78, &lit_3644);

/* 80C1EE7C-80C1EE80 000004 0004+00 0/1 0/0 0/0 .rodata          @3645 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3645 = 87.5f;
COMPILER_STRIP_GATE(0x80C1EE7C, &lit_3645);
#pragma pop

/* 80C1EE80-80C1EE84 000008 0004+00 0/1 0/0 0/0 .rodata          @3646 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3646 = -87.5f;
COMPILER_STRIP_GATE(0x80C1EE80, &lit_3646);
#pragma pop

/* 80C1DDC8-80C1DE94 000128 00CC+00 2/2 0/0 0/0 .text            setBaseMtx__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/setBaseMtx__11daObjFuta_cFv.s"
}
#pragma pop

/* 80C1DE94-80C1DF2C 0001F4 0098+00 1/0 0/0 0/0 .text            Create__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/Create__11daObjFuta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1EE98-80C1EE98 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C1EE98 = "Obj_hfuta";
#pragma pop

/* 80C1EEA4-80C1EEB0 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C1EEB0-80C1EEC4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C1EEC4-80C1EEC8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_hfuta__stringBase0;

/* 80C1DF2C-80C1DF9C 00028C 0070+00 1/0 0/0 0/0 .text            CreateHeap__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/CreateHeap__11daObjFuta_cFv.s"
}
#pragma pop

/* 80C1DF9C-80C1E020 0002FC 0084+00 1/1 0/0 0/0 .text            create1st__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/create1st__11daObjFuta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1EF90-80C1EF94 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80C1EF94-80C1EF98 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80C1EF98-80C1EF9C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80C1EF9C-80C1EFA0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80C1EFA0-80C1EFA4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80C1EFA4-80C1EFA8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80C1EFA8-80C1EFAC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80C1EFAC-80C1EFB0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80C1EFB0-80C1EFB4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80C1EFB4-80C1EFB8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80C1EFB8-80C1EFBC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80C1EFBC-80C1EFC0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80C1EFC0-80C1EFC4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80C1EFC4-80C1EFC8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80C1EFC8-80C1EFCC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80C1EFCC-80C1EFD0 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80C1EFD0-80C1EFE0 000048 000C+04 0/1 0/0 0/0 .bss             @3687 */
#pragma push
#pragma force_active on
static u8 lit_3687[12 + 4 /* padding */];
#pragma pop

/* 80C1EFE0-80C1EFEC 000058 000C+00 0/1 0/0 0/0 .bss             @3690 */
#pragma push
#pragma force_active on
static u8 lit_3690[12];
#pragma pop

/* 80C1EFEC-80C1EFF8 000064 000C+00 0/1 0/0 0/0 .bss             @3691 */
#pragma push
#pragma force_active on
static u8 lit_3691[12];
#pragma pop

/* 80C1EFF8-80C1F004 000070 000C+00 0/1 0/0 0/0 .bss             @3692 */
#pragma push
#pragma force_active on
static u8 lit_3692[12];
#pragma pop

/* 80C1F004-80C1F010 00007C 000C+00 0/1 0/0 0/0 .bss             @3693 */
#pragma push
#pragma force_active on
static u8 lit_3693[12];
#pragma pop

/* 80C1F010-80C1F01C 000088 000C+00 0/1 0/0 0/0 .bss             @3694 */
#pragma push
#pragma force_active on
static u8 lit_3694[12];
#pragma pop

/* 80C1F01C-80C1F028 000094 000C+00 0/1 0/0 0/0 .bss             @3695 */
#pragma push
#pragma force_active on
static u8 lit_3695[12];
#pragma pop

/* 80C1F028-80C1F034 0000A0 000C+00 0/1 0/0 0/0 .bss             @3696 */
#pragma push
#pragma force_active on
static u8 lit_3696[12];
#pragma pop

/* 80C1F034-80C1F040 0000AC 000C+00 0/1 0/0 0/0 .bss             @3697 */
#pragma push
#pragma force_active on
static u8 lit_3697[12];
#pragma pop

/* 80C1F040-80C1F04C 0000B8 000C+00 0/1 0/0 0/0 .bss             @3698 */
#pragma push
#pragma force_active on
static u8 lit_3698[12];
#pragma pop

/* 80C1F04C-80C1F058 0000C4 000C+00 0/1 0/0 0/0 .bss             @3699 */
#pragma push
#pragma force_active on
static u8 lit_3699[12];
#pragma pop

/* 80C1F058-80C1F064 0000D0 000C+00 0/1 0/0 0/0 .bss             @3700 */
#pragma push
#pragma force_active on
static u8 lit_3700[12];
#pragma pop

/* 80C1F064-80C1F070 0000DC 000C+00 0/1 0/0 0/0 .bss             @3701 */
#pragma push
#pragma force_active on
static u8 lit_3701[12];
#pragma pop

/* 80C1F070-80C1F07C 0000E8 000C+00 0/1 0/0 0/0 .bss             @3702 */
#pragma push
#pragma force_active on
static u8 lit_3702[12];
#pragma pop

/* 80C1F07C-80C1F088 0000F4 000C+00 0/1 0/0 0/0 .bss             @3703 */
#pragma push
#pragma force_active on
static u8 lit_3703[12];
#pragma pop

/* 80C1F088-80C1F094 000100 000C+00 0/1 0/0 0/0 .bss             @3704 */
#pragma push
#pragma force_active on
static u8 lit_3704[12];
#pragma pop

/* 80C1F094-80C1F0A0 00010C 000C+00 0/1 0/0 0/0 .bss             @3705 */
#pragma push
#pragma force_active on
static u8 lit_3705[12];
#pragma pop

/* 80C1F0A0-80C1F0AC 000118 000C+00 0/1 0/0 0/0 .bss             @3706 */
#pragma push
#pragma force_active on
static u8 lit_3706[12];
#pragma pop

/* 80C1F0AC-80C1F0B8 000124 000C+00 0/1 0/0 0/0 .bss             @3707 */
#pragma push
#pragma force_active on
static u8 lit_3707[12];
#pragma pop

/* 80C1F0B8-80C1F0C4 000130 000C+00 0/1 0/0 0/0 .bss             @3708 */
#pragma push
#pragma force_active on
static u8 lit_3708[12];
#pragma pop

/* 80C1F0C4-80C1F0D0 00013C 000C+00 0/1 0/0 0/0 .bss             @3709 */
#pragma push
#pragma force_active on
static u8 lit_3709[12];
#pragma pop

/* 80C1F0D0-80C1F0DC 000148 000C+00 0/1 0/0 0/0 .bss             @3710 */
#pragma push
#pragma force_active on
static u8 lit_3710[12];
#pragma pop

/* 80C1F0DC-80C1F0E8 000154 000C+00 0/1 0/0 0/0 .bss             @3711 */
#pragma push
#pragma force_active on
static u8 lit_3711[12];
#pragma pop

/* 80C1F0E8-80C1F0F4 000160 000C+00 0/1 0/0 0/0 .bss             @3712 */
#pragma push
#pragma force_active on
static u8 lit_3712[12];
#pragma pop

/* 80C1F0F4-80C1F100 00016C 000C+00 0/1 0/0 0/0 .bss             @3713 */
#pragma push
#pragma force_active on
static u8 lit_3713[12];
#pragma pop

/* 80C1F100-80C1F10C 000178 000C+00 0/1 0/0 0/0 .bss             @3714 */
#pragma push
#pragma force_active on
static u8 lit_3714[12];
#pragma pop

/* 80C1F10C-80C1F118 000184 000C+00 0/1 0/0 0/0 .bss             @3715 */
#pragma push
#pragma force_active on
static u8 lit_3715[12];
#pragma pop

/* 80C1F118-80C1F124 000190 000C+00 0/1 0/0 0/0 .bss             @3716 */
#pragma push
#pragma force_active on
static u8 lit_3716[12];
#pragma pop

/* 80C1F124-80C1F130 00019C 000C+00 0/1 0/0 0/0 .bss             @3717 */
#pragma push
#pragma force_active on
static u8 lit_3717[12];
#pragma pop

/* 80C1F130-80C1F13C 0001A8 000C+00 0/1 0/0 0/0 .bss             @3718 */
#pragma push
#pragma force_active on
static u8 lit_3718[12];
#pragma pop

/* 80C1F13C-80C1F148 0001B4 000C+00 0/1 0/0 0/0 .bss             @3719 */
#pragma push
#pragma force_active on
static u8 lit_3719[12];
#pragma pop

/* 80C1F148-80C1F154 0001C0 000C+00 0/1 0/0 0/0 .bss             @3720 */
#pragma push
#pragma force_active on
static u8 lit_3720[12];
#pragma pop

/* 80C1F154-80C1F160 0001CC 000C+00 0/1 0/0 0/0 .bss             @3721 */
#pragma push
#pragma force_active on
static u8 lit_3721[12];
#pragma pop

/* 80C1F160-80C1F16C 0001D8 000C+00 0/1 0/0 0/0 .bss             @3722 */
#pragma push
#pragma force_active on
static u8 lit_3722[12];
#pragma pop

/* 80C1F16C-80C1F178 0001E4 000C+00 0/1 0/0 0/0 .bss             @3723 */
#pragma push
#pragma force_active on
static u8 lit_3723[12];
#pragma pop

/* 80C1F178-80C1F184 0001F0 000C+00 0/1 0/0 0/0 .bss             @3724 */
#pragma push
#pragma force_active on
static u8 lit_3724[12];
#pragma pop

/* 80C1F184-80C1F190 0001FC 000C+00 0/1 0/0 0/0 .bss             @3725 */
#pragma push
#pragma force_active on
static u8 lit_3725[12];
#pragma pop

/* 80C1F190-80C1F19C 000208 000C+00 0/1 0/0 0/0 .bss             @3726 */
#pragma push
#pragma force_active on
static u8 lit_3726[12];
#pragma pop

/* 80C1F19C-80C1F1A8 000214 000C+00 0/1 0/0 0/0 .bss             @3727 */
#pragma push
#pragma force_active on
static u8 lit_3727[12];
#pragma pop

/* 80C1F1A8-80C1F1B4 000220 000C+00 0/1 0/0 0/0 .bss             @3728 */
#pragma push
#pragma force_active on
static u8 lit_3728[12];
#pragma pop

/* 80C1F1B4-80C1F1C0 00022C 000C+00 0/1 0/0 0/0 .bss             @3729 */
#pragma push
#pragma force_active on
static u8 lit_3729[12];
#pragma pop

/* 80C1F1C0-80C1F1CC 000238 000C+00 0/1 0/0 0/0 .bss             @3730 */
#pragma push
#pragma force_active on
static u8 lit_3730[12];
#pragma pop

/* 80C1F1CC-80C1F1D8 000244 000C+00 0/1 0/0 0/0 .bss             @3731 */
#pragma push
#pragma force_active on
static u8 lit_3731[12];
#pragma pop

/* 80C1F1D8-80C1F2DC -00001 0104+00 1/2 0/0 0/0 .bss             None */
/* 80C1F1D8 0102+00 data_80C1F1D8 l_rot_data$3686 */
/* 80C1F2DA 0002+00 data_80C1F2DA None */
static u8 struct_80C1F1D8[260];

/* 80C1E020-80C1EAFC 000380 0ADC+00 1/0 0/0 0/0 .text            Execute__11daObjFuta_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/Execute__11daObjFuta_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C1EAFC-80C1EB38 000E5C 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/__dt__5csXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1EEC8-80C1EED4 -00001 000C+00 0/1 0/0 0/0 .data            @3966 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3966[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_wait__11daObjFuta_cFv,
};
#pragma pop

/* 80C1EED4-80C1EEE0 -00001 000C+00 0/1 0/0 0/0 .data            @3967 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3967[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_move__11daObjFuta_cFv,
};
#pragma pop

/* 80C1EEE0-80C1EEEC -00001 000C+00 0/1 0/0 0/0 .data            @3968 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3968[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_end__11daObjFuta_cFv,
};
#pragma pop

/* 80C1EEEC-80C1EF10 000048 0024+00 0/1 0/0 0/0 .data            l_func$3965 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C1EB38-80C1EBDC 000E98 00A4+00 1/1 0/0 0/0 .text            mode_proc_call__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::mode_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/mode_proc_call__11daObjFuta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1EE84-80C1EE88 00000C 0004+00 1/1 0/0 0/0 .rodata          @3985 */
SECTION_RODATA static f32 const lit_3985 = 900.0f;
COMPILER_STRIP_GATE(0x80C1EE84, &lit_3985);

/* 80C1EBDC-80C1EC44 000F3C 0068+00 2/1 0/0 0/0 .text            mode_wait__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::mode_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/mode_wait__11daObjFuta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1EE88-80C1EE8C 000010 0004+00 1/2 0/0 0/0 .rodata          @3995 */
SECTION_RODATA static f32 const lit_3995 = 120.0f;
COMPILER_STRIP_GATE(0x80C1EE88, &lit_3995);

/* 80C1EE8C-80C1EE90 000014 0004+00 0/1 0/0 0/0 .rodata          @3996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3996 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C1EE8C, &lit_3996);
#pragma pop

/* 80C1EE90-80C1EE94 000018 0004+00 0/1 0/0 0/0 .rodata          @3997 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3997 = 5.0f;
COMPILER_STRIP_GATE(0x80C1EE90, &lit_3997);
#pragma pop

/* 80C1EE94-80C1EE98 00001C 0004+00 0/1 0/0 0/0 .rodata          @3998 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3998 = 2.0f;
COMPILER_STRIP_GATE(0x80C1EE94, &lit_3998);
#pragma pop

/* 80C1EC44-80C1ECB4 000FA4 0070+00 1/0 0/0 0/0 .text            mode_move__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::mode_move() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/mode_move__11daObjFuta_cFv.s"
}
#pragma pop

/* 80C1ECB4-80C1ECC4 001014 0010+00 2/1 0/0 0/0 .text            mode_end__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::mode_end() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/mode_end__11daObjFuta_cFv.s"
}
#pragma pop

/* 80C1ECC4-80C1ED68 001024 00A4+00 1/0 0/0 0/0 .text            Draw__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/Draw__11daObjFuta_cFv.s"
}
#pragma pop

/* 80C1ED68-80C1ED9C 0010C8 0034+00 1/0 0/0 0/0 .text            Delete__11daObjFuta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFuta_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/Delete__11daObjFuta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1EF10-80C1EF30 -00001 0020+00 1/0 0/0 0/0 .data            daObjFuta_METHODS */
static actor_method_class daObjFuta_METHODS = {
    (process_method_func)daObjFuta_create1st__FP11daObjFuta_c,
    (process_method_func)daObjFuta_MoveBGDelete__FP11daObjFuta_c,
    (process_method_func)daObjFuta_MoveBGExecute__FP11daObjFuta_c,
    0,
    (process_method_func)daObjFuta_MoveBGDraw__FP11daObjFuta_c,
};

/* 80C1EF30-80C1EF60 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Hfuta */
extern actor_process_profile_definition g_profile_Obj_Hfuta = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Hfuta,         // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjFuta_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  450,                    // mPriority
  &daObjFuta_METHODS,     // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C1EF60-80C1EF88 0000BC 0028+00 1/1 0/0 0/0 .data            __vt__11daObjFuta_c */
SECTION_DATA extern void* __vt__11daObjFuta_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daObjFuta_cFv,
    (void*)Create__11daObjFuta_cFv,
    (void*)Execute__11daObjFuta_cFPPA3_A4_f,
    (void*)Draw__11daObjFuta_cFv,
    (void*)Delete__11daObjFuta_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C1ED9C-80C1EDFC 0010FC 0060+00 1/0 0/0 0/0 .text daObjFuta_create1st__FP11daObjFuta_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFuta_create1st(daObjFuta_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/daObjFuta_create1st__FP11daObjFuta_c.s"
}
#pragma pop

/* 80C1EDFC-80C1EE1C 00115C 0020+00 1/0 0/0 0/0 .text daObjFuta_MoveBGDelete__FP11daObjFuta_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFuta_MoveBGDelete(daObjFuta_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/daObjFuta_MoveBGDelete__FP11daObjFuta_c.s"
}
#pragma pop

/* 80C1EE1C-80C1EE3C 00117C 0020+00 1/0 0/0 0/0 .text daObjFuta_MoveBGExecute__FP11daObjFuta_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFuta_MoveBGExecute(daObjFuta_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/daObjFuta_MoveBGExecute__FP11daObjFuta_c.s"
}
#pragma pop

/* 80C1EE3C-80C1EE68 00119C 002C+00 1/0 0/0 0/0 .text daObjFuta_MoveBGDraw__FP11daObjFuta_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFuta_MoveBGDraw(daObjFuta_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hfuta/d_a_obj_hfuta/daObjFuta_MoveBGDraw__FP11daObjFuta_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1F2DC-80C1F2E0 000354 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80C1F2DC[4];
#pragma pop

/* 80C1F2E0-80C1F2E4 000358 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80C1F2E0[4];
#pragma pop

/* 80C1F2E4-80C1F2E8 00035C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C1F2E4[4];
#pragma pop

/* 80C1F2E8-80C1F2EC 000360 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C1F2E8[4];
#pragma pop

/* 80C1F2EC-80C1F2F0 000364 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F2EC[4];
#pragma pop

/* 80C1F2F0-80C1F2F4 000368 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F2F0[4];
#pragma pop

/* 80C1F2F4-80C1F2F8 00036C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F2F4[4];
#pragma pop

/* 80C1F2F8-80C1F2FC 000370 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80C1F2F8[4];
#pragma pop

/* 80C1F2FC-80C1F300 000374 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80C1F2FC[4];
#pragma pop

/* 80C1F300-80C1F304 000378 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80C1F300[4];
#pragma pop

/* 80C1F304-80C1F308 00037C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C1F304[4];
#pragma pop

/* 80C1F308-80C1F30C 000380 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C1F308[4];
#pragma pop

/* 80C1F30C-80C1F310 000384 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80C1F30C[4];
#pragma pop

/* 80C1F310-80C1F314 000388 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F310[4];
#pragma pop

/* 80C1F314-80C1F318 00038C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C1F314[4];
#pragma pop

/* 80C1F318-80C1F31C 000390 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80C1F318[4];
#pragma pop

/* 80C1F31C-80C1F320 000394 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80C1F31C[4];
#pragma pop

/* 80C1F320-80C1F324 000398 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C1F320[4];
#pragma pop

/* 80C1F324-80C1F328 00039C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F324[4];
#pragma pop

/* 80C1F328-80C1F32C 0003A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C1F328[4];
#pragma pop

/* 80C1F32C-80C1F330 0003A4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F32C[4];
#pragma pop

/* 80C1F330-80C1F334 0003A8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F330[4];
#pragma pop

/* 80C1F334-80C1F338 0003AC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F334[4];
#pragma pop

/* 80C1F338-80C1F33C 0003B0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C1F338[4];
#pragma pop

/* 80C1F33C-80C1F340 0003B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C1F33C[4];
#pragma pop

/* 80C1EE98-80C1EE98 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
