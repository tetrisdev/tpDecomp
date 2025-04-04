/**
 * @file d_a_obj_flag3.cpp
 * 
*/

#include "d/actor/d_a_obj_flag3.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void createHeap__12daObjFlag3_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" static void daObjFlag3_Draw__FP12daObjFlag3_c();
extern "C" static void daObjFlag3_Execute__FP12daObjFlag3_c();
extern "C" void execute__12daObjFlag3_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void execute__12FlagCloth2_cFv();
extern "C" void calcFlagNormal__12FlagCloth2_cFP4cXyzi();
extern "C" void calcFlagFactor__12FlagCloth2_cFP4cXyzP4cXyzP4cXyzi();
extern "C" static bool daObjFlag3_IsDelete__FP12daObjFlag3_c();
extern "C" static void daObjFlag3_Delete__FP12daObjFlag3_c();
extern "C" void __dt__12daObjFlag3_cFv();
extern "C" void __dt__12FlagCloth2_cFv();
extern "C" static void daObjFlag3_Create__FP10fopAc_ac_c();
extern "C" void create__12daObjFlag3_cFv();
extern "C" void create_init__12daObjFlag3_cFv();
extern "C" void initFlagPos__12FlagCloth2_cFP4cXyzP10fopAc_ac_c();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __ct__11J3DLightObjFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void draw__12FlagCloth2_cFv();
extern "C" void getTargetPos__12FlagCloth2_cFv();
extern "C" u8 const M_attr__12daObjFlag3_c[20];
extern "C" extern char const* const d_a_obj_flag3__stringBase0;

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getArcName__12daSetBgObj_cFP10fopAc_ac_c();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_setLight_again__Fv();
extern "C" void dKy_Global_amb_set__FP12dKy_tevstr_c();
extern "C" void dKy_GxFog_tevstr_set__FP12dKy_tevstr_c();
extern "C" void dKy_setLight_mine__FP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void outprod__4cXyzCFRC3Vec();
extern "C" void normZC__4cXyzCFv();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_rndFX__Ff();
extern "C" void __dl__FPv();
extern "C" void reinitGX__6J3DSysFv();
extern "C" bool entry__9J3DPacketFP13J3DDrawBuffer();
extern "C" void entryImm__13J3DDrawBufferFP9J3DPacketUs();
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 sOldVcdVatCmd__8J3DShape[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80BF0458-80BF046C 000000 0014+00 3/3 0/0 0/0 .rodata          M_attr__12daObjFlag3_c */
SECTION_RODATA u8 const daObjFlag3_c::M_attr[20] = {
    0xC0, 0x00, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x2E,
    0x14, 0x7B, 0x42, 0x20, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF0458, &daObjFlag3_c::M_attr);

/* 80BF046C-80BF048C 000014 0020+00 0/0 0/0 0/0 .rodata          @3637 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3637[32] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
COMPILER_STRIP_GATE(0x80BF046C, &lit_3637);
#pragma pop

/* 80BF048C-80BF04B0 000034 0024+00 1/1 0/0 0/0 .rodata          @3672 */
SECTION_RODATA static u8 const lit_3672[36] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
COMPILER_STRIP_GATE(0x80BF048C, &lit_3672);

/* 80BF04B0-80BF04F0 000058 0040+00 0/0 0/0 0/0 .rodata
 * ccSphSrc$localstatic3$initCcSphere__12FlagCloth2_cFP10fopAc_ac_c */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const data_80BF04B0[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF04B0, &data_80BF04B0);
#pragma pop

/* 80BF04F0-80BF04F4 000098 0004+00 1/1 0/0 0/0 .rodata          @3757 */
SECTION_RODATA static u32 const lit_3757 = 0x000000FF;
COMPILER_STRIP_GATE(0x80BF04F0, &lit_3757);

/* 80BF04F4-80BF04F8 00009C 0004+00 1/1 0/0 0/0 .rodata          @3760 */
SECTION_RODATA static u32 const lit_3760 = 0x000000FF;
COMPILER_STRIP_GATE(0x80BF04F4, &lit_3760);

/* 80BF04F8-80BF04FC 0000A0 0004+00 1/1 0/0 0/0 .rodata          @3813 */
SECTION_RODATA static f32 const lit_3813 = 0.125f;
COMPILER_STRIP_GATE(0x80BF04F8, &lit_3813);

/* 80BF04FC-80BF0500 0000A4 0004+00 1/1 0/0 0/0 .rodata          @3814 */
SECTION_RODATA static f32 const lit_3814 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80BF04FC, &lit_3814);

/* 80BF0500-80BF0508 0000A8 0008+00 1/2 0/0 0/0 .rodata          @3816 */
SECTION_RODATA static u8 const lit_3816[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF0500, &lit_3816);

/* 80BF0554-80BF0554 0000FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BF0554 = "flag%02d.bti";
SECTION_DEAD static char const* const stringBase_80BF0561 = "flag.bti";
SECTION_DEAD static char const* const stringBase_80BF056A = "model0.bmd";
#pragma pop

/* 80BEEA78-80BEEC3C 000078 01C4+00 1/1 0/0 0/0 .text            createHeap__12daObjFlag3_cFv */
void daObjFlag3_c::createHeap() {
    // NONMATCHING
}

/* 80BEEC3C-80BEEC5C 00023C 0020+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
static void createSolidHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80BEEC5C-80BEED1C 00025C 00C0+00 1/0 0/0 0/0 .text            daObjFlag3_Draw__FP12daObjFlag3_c
 */
static void daObjFlag3_Draw(daObjFlag3_c* param_0) {
    // NONMATCHING
}

/* 80BEED1C-80BEED3C 00031C 0020+00 1/0 0/0 0/0 .text daObjFlag3_Execute__FP12daObjFlag3_c */
static void daObjFlag3_Execute(daObjFlag3_c* param_0) {
    // NONMATCHING
}

/* 80BEED3C-80BEEDA8 00033C 006C+00 1/1 0/0 0/0 .text            execute__12daObjFlag3_cFv */
void daObjFlag3_c::execute() {
    // NONMATCHING
}

/* 80BEEDA8-80BEEDE4 0003A8 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80BEEDE4-80BEEF74 0003E4 0190+00 1/1 0/0 0/0 .text            execute__12FlagCloth2_cFv */
void FlagCloth2_c::execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF0508-80BF050C 0000B0 0004+00 1/3 0/0 0/0 .rodata          @4012 */
SECTION_RODATA static u8 const lit_4012[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BF0508, &lit_4012);

/* 80BEEF74-80BEF278 000574 0304+00 2/2 0/0 0/0 .text calcFlagNormal__12FlagCloth2_cFP4cXyzi */
void FlagCloth2_c::calcFlagNormal(cXyz* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF050C-80BF0510 0000B4 0004+00 0/2 0/0 0/0 .rodata          @4104 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4104 = 60.0f;
COMPILER_STRIP_GATE(0x80BF050C, &lit_4104);
#pragma pop

/* 80BF0510-80BF0518 0000B8 0004+04 0/1 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4105[1 + 1 /* padding */] = {
    0x42A9B4A4,
    /* padding */
    0x00000000,
};
COMPILER_STRIP_GATE(0x80BF0510, &lit_4105);
#pragma pop

/* 80BF0518-80BF0520 0000C0 0008+00 0/1 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4106[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF0518, &lit_4106);
#pragma pop

/* 80BF0520-80BF0528 0000C8 0008+00 0/1 0/0 0/0 .rodata          @4107 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4107[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF0520, &lit_4107);
#pragma pop

/* 80BF0528-80BF0530 0000D0 0008+00 0/1 0/0 0/0 .rodata          @4108 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4108[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF0528, &lit_4108);
#pragma pop

/* 80BEF278-80BEF6D0 000878 0458+00 1/1 0/0 0/0 .text
 * calcFlagFactor__12FlagCloth2_cFP4cXyzP4cXyzP4cXyzi           */
void FlagCloth2_c::calcFlagFactor(cXyz* param_0, cXyz* param_1, cXyz* param_2, int param_3) {
    // NONMATCHING
}

/* 80BEF6D0-80BEF6D8 000CD0 0008+00 1/0 0/0 0/0 .text daObjFlag3_IsDelete__FP12daObjFlag3_c */
static bool daObjFlag3_IsDelete(daObjFlag3_c* param_0) {
    return true;
}

/* 80BEF6D8-80BEF700 000CD8 0028+00 1/0 0/0 0/0 .text            daObjFlag3_Delete__FP12daObjFlag3_c
 */
static void daObjFlag3_Delete(daObjFlag3_c* param_0) {
    // NONMATCHING
}

/* 80BEF700-80BEF790 000D00 0090+00 1/1 0/0 0/0 .text            __dt__12daObjFlag3_cFv */
daObjFlag3_c::~daObjFlag3_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF058C-80BF05AC -00001 0020+00 1/0 0/0 0/0 .data            l_daObjFlag3_Method */
static actor_method_class l_daObjFlag3_Method = {
    (process_method_func)daObjFlag3_Create__FP10fopAc_ac_c,
    (process_method_func)daObjFlag3_Delete__FP12daObjFlag3_c,
    (process_method_func)daObjFlag3_Execute__FP12daObjFlag3_c,
    (process_method_func)daObjFlag3_IsDelete__FP12daObjFlag3_c,
    (process_method_func)daObjFlag3_Draw__FP12daObjFlag3_c,
};

/* 80BF05AC-80BF05DC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Flag3 */
extern actor_process_profile_definition g_profile_Obj_Flag3 = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Flag3,         // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjFlag3_c),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  28,                     // mPriority
  &l_daObjFlag3_Method,   // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BF05DC-80BF05E8 000050 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BF05E8-80BF05F4 00005C 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BF05F4-80BF0600 000068 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BF0600-80BF060C 000074 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BF060C-80BF0620 000080 0014+00 2/2 0/0 0/0 .data            __vt__12FlagCloth2_c */
SECTION_DATA extern void* __vt__12FlagCloth2_c[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__12FlagCloth2_cFv,
    (void*)__dt__12FlagCloth2_cFv,
};

/* 80BEF790-80BEF93C 000D90 01AC+00 2/1 0/0 0/0 .text            __dt__12FlagCloth2_cFv */
FlagCloth2_c::~FlagCloth2_c() {
    // NONMATCHING
}

/* 80BEF93C-80BEF95C 000F3C 0020+00 1/0 0/0 0/0 .text            daObjFlag3_Create__FP10fopAc_ac_c
 */
static void daObjFlag3_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF0554-80BF0554 0000FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BF0575 = "FlagObj%02d";
#pragma pop

/* 80BEF95C-80BEFBC4 000F5C 0268+00 1/1 0/0 0/0 .text            create__12daObjFlag3_cFv */
void daObjFlag3_c::create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF0530-80BF0534 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4242 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4242 = -600.0f;
COMPILER_STRIP_GATE(0x80BF0530, &lit_4242);
#pragma pop

/* 80BF0534-80BF0538 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4243 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4243 = 600.0f;
COMPILER_STRIP_GATE(0x80BF0534, &lit_4243);
#pragma pop

/* 80BF0538-80BF0540 0000E0 0004+04 0/1 0/0 0/0 .rodata          @4244 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4244[1 + 1 /* padding */] = {
    400.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BF0538, &lit_4244);
#pragma pop

/* 80BF0540-80BF0548 0000E8 0008+00 0/1 0/0 0/0 .rodata          @4246 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4246[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF0540, &lit_4246);
#pragma pop

/* 80BF0554-80BF0554 0000FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BF0581 = "spec.dat";
#pragma pop

/* 80BEFBC4-80BEFD08 0011C4 0144+00 1/1 0/0 0/0 .text            create_init__12daObjFlag3_cFv */
void daObjFlag3_c::create_init() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF0548-80BF054C 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4287 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4287 = -150.0f;
COMPILER_STRIP_GATE(0x80BF0548, &lit_4287);
#pragma pop

/* 80BF054C-80BF0550 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4288 = 10.0f;
COMPILER_STRIP_GATE(0x80BF054C, &lit_4288);
#pragma pop

/* 80BF0550-80BF0554 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4289 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4289 = 5.0f;
COMPILER_STRIP_GATE(0x80BF0550, &lit_4289);
#pragma pop

/* 80BEFD08-80BEFF30 001308 0228+00 1/1 0/0 0/0 .text
 * initFlagPos__12FlagCloth2_cFP4cXyzP10fopAc_ac_c              */
void FlagCloth2_c::initFlagPos(cXyz* param_0, fopAc_ac_c* param_1) {
    // NONMATCHING
}

/* 80BEFF30-80BEFF34 001530 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80BEFF34-80BEFF7C 001534 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80BEFF7C-80BEFFC4 00157C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80BEFFC4-80BF0020 0015C4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80BF0020-80BF0058 001620 0038+00 1/1 0/0 0/0 .text            __ct__11J3DLightObjFv */
// J3DLightObj::J3DLightObj() {
extern "C" void __ct__11J3DLightObjFv() {
    // NONMATCHING
}

/* 80BF0058-80BF00A0 001658 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80BF00A0-80BF0434 0016A0 0394+00 1/0 0/0 0/0 .text            draw__12FlagCloth2_cFv */
void FlagCloth2_c::draw() {
    // NONMATCHING
}

/* 80BF0434-80BF0450 001A34 001C+00 2/2 0/0 0/0 .text            getTargetPos__12FlagCloth2_cFv */
void FlagCloth2_c::getTargetPos() {
    // NONMATCHING
}

/* 80BF0554-80BF0554 0000FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
