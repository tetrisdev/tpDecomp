/**
 * @file d_a_obj_key.cpp
 * 
*/

#include "d/actor/d_a_obj_key.h"
#include "dol2asm.h"
#include "d/actor/d_a_obj_smallkey.h"



//
// Forward References:
//

extern "C" void __ct__15daObj_Key_HIO_cFv();
extern "C" static void daObj_Key_Draw__FP13obj_key_class();
extern "C" static void s_count_sub__FPvPv();
extern "C" static void s_master_sub__FPvPv();
extern "C" static void masterkey_check__FP13obj_key_class();
extern "C" static void action_check__FP13obj_key_class();
extern "C" static void chain_control_00__FP13obj_key_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void chain_control_01__FP13obj_key_class();
extern "C" static void action__FP13obj_key_class();
extern "C" static void daObj_Key_Execute__FP13obj_key_class();
extern "C" static bool daObj_Key_IsDelete__FP13obj_key_class();
extern "C" static void daObj_Key_Delete__FP13obj_key_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Key_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__15daObj_Key_HIO_cFv();
extern "C" void __sinit_d_a_obj_key_cpp();
extern "C" static void func_80C40FAC();
extern "C" static void func_80C40FB4();
extern "C" void setPos__7daKey_cF4cXyz();
extern "C" extern char const* const d_a_obj_key__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdate__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C40FEC-80C40FF0 000000 0004+00 5/5 0/0 0/0 .rodata          @3778 */
SECTION_RODATA static f32 const lit_3778 = 1.0f;
COMPILER_STRIP_GATE(0x80C40FEC, &lit_3778);

/* 80C40FF0-80C40FF4 000004 0004+00 1/1 0/0 0/0 .rodata          @3779 */
SECTION_RODATA static f32 const lit_3779 = 1.5f;
COMPILER_STRIP_GATE(0x80C40FF0, &lit_3779);

/* 80C41094-80C41098 000000 0004+00 1/1 0/0 0/0 .data            key_eno$4387 */
SECTION_DATA static u8 key_eno[4] = {
    0x82,
    0x7A,
    0x82,
    0x7B,
};

/* 80C41098-80C410B8 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Key_Method */
static actor_method_class l_daObj_Key_Method = {
    (process_method_func)daObj_Key_Create__FP10fopAc_ac_c,
    (process_method_func)daObj_Key_Delete__FP13obj_key_class,
    (process_method_func)daObj_Key_Execute__FP13obj_key_class,
    (process_method_func)daObj_Key_IsDelete__FP13obj_key_class,
    (process_method_func)daObj_Key_Draw__FP13obj_key_class,
};

/* 80C410B8-80C410E8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_KEY */
extern actor_process_profile_definition g_profile_OBJ_KEY = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_OBJ_KEY,           // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(obj_key_class),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  44,                     // mPriority
  &l_daObj_Key_Method,    // sub_method
  0x00044100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C410E8-80C410F4 000054 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C410F4-80C41100 000060 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C41100-80C41124 00006C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C40FB4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C40FAC,
};

/* 80C41124-80C41130 000090 000C+00 2/2 0/0 0/0 .data            __vt__15daObj_Key_HIO_c */
SECTION_DATA extern void* __vt__15daObj_Key_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daObj_Key_HIO_cFv,
};

/* 80C3F40C-80C3F43C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__15daObj_Key_HIO_cFv */
daObj_Key_HIO_c::daObj_Key_HIO_c() {
    // NONMATCHING
}

/* 80C3F43C-80C3F4D4 00011C 0098+00 1/0 0/0 0/0 .text            daObj_Key_Draw__FP13obj_key_class
 */
static void daObj_Key_Draw(obj_key_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C41138-80C4113C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80C41138[4];

/* 80C4113C-80C41148 00000C 000C+00 1/1 0/0 0/0 .bss             @3773 */
static u8 lit_3773[12];

/* 80C41148-80C41158 000018 0010+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80C41158-80C4115A 000028 0002+00 2/2 0/0 0/0 .bss             target_info_count */
static u8 target_info_count[2];

/* 80C3F4D4-80C3F540 0001B4 006C+00 1/1 0/0 0/0 .text            s_count_sub__FPvPv */
static void s_count_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C40FF4-80C40FF8 000008 0004+00 2/2 0/0 0/0 .rodata          @3836 */
SECTION_RODATA static f32 const lit_3836 = 40000.0f;
COMPILER_STRIP_GATE(0x80C40FF4, &lit_3836);

/* 80C3F540-80C3F600 000220 00C0+00 1/1 0/0 0/0 .text            s_master_sub__FPvPv */
static void s_master_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 80C3F600-80C3F6B4 0002E0 00B4+00 1/1 0/0 0/0 .text            masterkey_check__FP13obj_key_class
 */
static void masterkey_check(obj_key_class* param_0) {
    // NONMATCHING
}

/* 80C3F6B4-80C3F728 000394 0074+00 1/1 0/0 0/0 .text            action_check__FP13obj_key_class */
static void action_check(obj_key_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C40FF8-80C40FFC 00000C 0004+00 0/3 0/0 0/0 .rodata          @3978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3978 = 5.0f;
COMPILER_STRIP_GATE(0x80C40FF8, &lit_3978);
#pragma pop

/* 80C40FFC-80C41000 000010 0004+00 0/2 0/0 0/0 .rodata          @3979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3979 = 20.0f;
COMPILER_STRIP_GATE(0x80C40FFC, &lit_3979);
#pragma pop

/* 80C41000-80C41004 000014 0004+00 0/2 0/0 0/0 .rodata          @3980 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3980[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C41000, &lit_3980);
#pragma pop

/* 80C41004-80C41008 000018 0004+00 0/1 0/0 0/0 .rodata          @3981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3981 = 41.5f;
COMPILER_STRIP_GATE(0x80C41004, &lit_3981);
#pragma pop

/* 80C41008-80C4100C 00001C 0004+00 0/2 0/0 0/0 .rodata          @3982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3982 = -20.0f;
COMPILER_STRIP_GATE(0x80C41008, &lit_3982);
#pragma pop

/* 80C4100C-80C41010 000020 0004+00 0/3 0/0 0/0 .rodata          @3983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3983 = 200.0f;
COMPILER_STRIP_GATE(0x80C4100C, &lit_3983);
#pragma pop

/* 80C41010-80C41014 000024 0004+00 0/1 0/0 0/0 .rodata          @3984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3984 = 16.0f;
COMPILER_STRIP_GATE(0x80C41010, &lit_3984);
#pragma pop

/* 80C41014-80C41018 000028 0004+00 0/2 0/0 0/0 .rodata          @3985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3985 = 10.0f;
COMPILER_STRIP_GATE(0x80C41014, &lit_3985);
#pragma pop

/* 80C3F728-80C3FB84 000408 045C+00 1/1 0/0 0/0 .text            chain_control_00__FP13obj_key_class
 */
static void chain_control_00(obj_key_class* param_0) {
    // NONMATCHING
}

/* 80C3FB84-80C3FBC0 000864 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C41018-80C4101C 00002C 0004+00 0/2 0/0 0/0 .rodata          @4347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4347 = 50.0f;
COMPILER_STRIP_GATE(0x80C41018, &lit_4347);
#pragma pop

/* 80C4101C-80C41020 000030 0004+00 0/1 0/0 0/0 .rodata          @4348 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4348 = 10000.0f;
COMPILER_STRIP_GATE(0x80C4101C, &lit_4348);
#pragma pop

/* 80C41020-80C41024 000034 0004+00 0/1 0/0 0/0 .rodata          @4349 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4349 = -1.0f;
COMPILER_STRIP_GATE(0x80C41020, &lit_4349);
#pragma pop

/* 80C41024-80C41028 000038 0004+00 0/2 0/0 0/0 .rodata          @4350 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4350 = 30.0f;
COMPILER_STRIP_GATE(0x80C41024, &lit_4350);
#pragma pop

/* 80C41028-80C4102C 00003C 0004+00 0/1 0/0 0/0 .rodata          @4351 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4351 = 12.0f;
COMPILER_STRIP_GATE(0x80C41028, &lit_4351);
#pragma pop

/* 80C4102C-80C41030 000040 0004+00 0/1 0/0 0/0 .rodata          @4352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4352 = -5.0f;
COMPILER_STRIP_GATE(0x80C4102C, &lit_4352);
#pragma pop

/* 80C41030-80C41034 000044 0004+00 0/1 0/0 0/0 .rodata          @4353 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4353 = 7.0f;
COMPILER_STRIP_GATE(0x80C41030, &lit_4353);
#pragma pop

/* 80C41034-80C41038 000048 0004+00 0/2 0/0 0/0 .rodata          @4354 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4354 = -3.0f;
COMPILER_STRIP_GATE(0x80C41034, &lit_4354);
#pragma pop

/* 80C41038-80C4103C 00004C 0004+00 0/1 0/0 0/0 .rodata          @4355 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4355 = -15.0f;
COMPILER_STRIP_GATE(0x80C41038, &lit_4355);
#pragma pop

/* 80C4103C-80C41040 000050 0004+00 0/1 0/0 0/0 .rodata          @4356 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4356 = -50.0f;
COMPILER_STRIP_GATE(0x80C4103C, &lit_4356);
#pragma pop

/* 80C41040-80C41044 000054 0004+00 0/1 0/0 0/0 .rodata          @4357 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4357 = -30.0f;
COMPILER_STRIP_GATE(0x80C41040, &lit_4357);
#pragma pop

/* 80C41044-80C41048 000058 0004+00 0/1 0/0 0/0 .rodata          @4358 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4358 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C41044, &lit_4358);
#pragma pop

/* 80C41048-80C4104C 00005C 0004+00 0/1 0/0 0/0 .rodata          @4359 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4359 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C41048, &lit_4359);
#pragma pop

/* 80C4104C-80C41054 000060 0004+04 0/1 0/0 0/0 .rodata          @4360 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4360[1 + 1 /* padding */] = {
    1.0f / 5.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80C4104C, &lit_4360);
#pragma pop

/* 80C41054-80C4105C 000068 0008+00 0/1 0/0 0/0 .rodata          @4361 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4361[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C41054, &lit_4361);
#pragma pop

/* 80C4105C-80C41064 000070 0008+00 0/1 0/0 0/0 .rodata          @4362 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4362[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C4105C, &lit_4362);
#pragma pop

/* 80C41064-80C4106C 000078 0008+00 0/1 0/0 0/0 .rodata          @4363 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4363[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C41064, &lit_4363);
#pragma pop

/* 80C4106C-80C41070 000080 0004+00 0/1 0/0 0/0 .rodata          @4364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4364 = 44.5f;
COMPILER_STRIP_GATE(0x80C4106C, &lit_4364);
#pragma pop

/* 80C41070-80C41074 000084 0004+00 0/1 0/0 0/0 .rodata          @4365 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4365 = 2.0f;
COMPILER_STRIP_GATE(0x80C41070, &lit_4365);
#pragma pop

/* 80C41074-80C41078 000088 0004+00 0/1 0/0 0/0 .rodata          @4366 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4366 = 8.0f;
COMPILER_STRIP_GATE(0x80C41074, &lit_4366);
#pragma pop

/* 80C3FBC0-80C406EC 0008A0 0B2C+00 1/1 0/0 0/0 .text            chain_control_01__FP13obj_key_class
 */
static void chain_control_01(obj_key_class* param_0) {
    // NONMATCHING
}

/* 80C406EC-80C408B4 0013CC 01C8+00 1/1 0/0 0/0 .text            action__FP13obj_key_class */
static void action(obj_key_class* param_0) {
    // NONMATCHING
}

/* 80C408B4-80C4093C 001594 0088+00 2/1 0/0 0/0 .text daObj_Key_Execute__FP13obj_key_class */
static void daObj_Key_Execute(obj_key_class* param_0) {
    // NONMATCHING
}

/* 80C4093C-80C40944 00161C 0008+00 1/0 0/0 0/0 .text daObj_Key_IsDelete__FP13obj_key_class */
static bool daObj_Key_IsDelete(obj_key_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80C4107C-80C4107C 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C4107C = "Obj_key";
#pragma pop

/* 80C40944-80C409AC 001624 0068+00 1/0 0/0 0/0 .text            daObj_Key_Delete__FP13obj_key_class
 */
static void daObj_Key_Delete(obj_key_class* param_0) {
    // NONMATCHING
}

/* 80C409AC-80C40AB8 00168C 010C+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C41078-80C4107C 00008C 0004+00 0/1 0/0 0/0 .rodata          @4555 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4555 = -200.0f;
COMPILER_STRIP_GATE(0x80C41078, &lit_4555);
#pragma pop

/* 80C4107C-80C4107C 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C41084 = "F_SP118";
SECTION_DEAD static char const* const stringBase_80C4108C = "D_MN09";
#pragma pop

/* 80C40AB8-80C40DE4 001798 032C+00 1/0 0/0 0/0 .text            daObj_Key_Create__FP10fopAc_ac_c */
static void daObj_Key_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C40DE4-80C40E2C 001AC4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80C40E2C-80C40E74 001B0C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80C40E74-80C40EE4 001B54 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80C40EE4-80C40F20 001BC4 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 80C40F20-80C40F24 001C00 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 80C40F24-80C40F28 001C04 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80C40F28-80C40F70 001C08 0048+00 2/1 0/0 0/0 .text            __dt__15daObj_Key_HIO_cFv */
daObj_Key_HIO_c::~daObj_Key_HIO_c() {
    // NONMATCHING
}

/* 80C40F70-80C40FAC 001C50 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_key_cpp */
void __sinit_d_a_obj_key_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C40F70, __sinit_d_a_obj_key_cpp);
#pragma pop

/* 80C40FAC-80C40FB4 001C8C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80C40FAC() {
    // NONMATCHING
}

/* 80C40FB4-80C40FBC 001C94 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80C40FB4() {
    // NONMATCHING
}

/* 80C40FBC-80C40FD8 001C9C 001C+00 1/1 0/0 0/0 .text            setPos__7daKey_cF4cXyz */
// void daKey_c::setPos(cXyz param_0) {
extern "C" void setPos__7daKey_cF4cXyz() {
    // NONMATCHING
}

/* 80C4107C-80C4107C 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
