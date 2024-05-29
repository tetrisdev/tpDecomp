/**
 * @file d_a_obj_flag2.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void initFlagPos__11FlagCloth_cFP4cXyzP10fopAc_ac_c();
extern "C" void __dt__4cXyzFv();
extern "C" void calcFlagFactor__11FlagCloth_cFP4cXyzP4cXyzP4cXyzi();
extern "C" void calcFlagFactorSub__11FlagCloth_cFP4cXyzP4cXyzP4cXyzf();
extern "C" void calcFlagNormal__11FlagCloth_cFP4cXyzi();
extern "C" void calcFlagNormalBack__11FlagCloth_cFv();
extern "C" void initCcSphere__11FlagCloth_cFP10fopAc_ac_c();
extern "C" void setCcSphere__11FlagCloth_cFv();
extern "C" void execute__11FlagCloth_cFv();
extern "C" void draw__11FlagCloth_cFv();
extern "C" void create_init__12daObjFlag2_cFv();
extern "C" void initBaseMtx__12daObjFlag2_cFv();
extern "C" void initCollision__12daObjFlag2_cFv();
extern "C" void setCollision__12daObjFlag2_cFv();
extern "C" void createHeap__12daObjFlag2_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void create__12daObjFlag2_cFv();
extern "C" void __ct__12daObjFlag2_cFv();
extern "C" void __dt__11FlagCloth_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __ct__11J3DLightObjFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void draw__12daObjFlag2_cFv();
extern "C" static void daObjFlag2_Draw__FP12daObjFlag2_c();
extern "C" static void daObjFlag2_Execute__FP12daObjFlag2_c();
extern "C" static bool daObjFlag2_IsDelete__FP12daObjFlag2_c();
extern "C" static void daObjFlag2_Delete__FP12daObjFlag2_c();
extern "C" void __dt__12daObjFlag2_cFv();
extern "C" static void daObjFlag2_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void getTargetPos__11FlagCloth_cFv();
extern "C" u8 const M_attr__12daObjFlag2_c[20];
extern "C" extern char const* const d_a_obj_flag2__stringBase0;

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
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_setLight_again__Fv();
extern "C" void dKy_Global_amb_set__FP12dKy_tevstr_c();
extern "C" void dKy_GxFog_tevstr_set__FP12dKy_tevstr_c();
extern "C" void dKy_setLight_mine__FP12dKy_tevstr_c();
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void outprod__4cXyzCFRC3Vec();
extern "C" void normZC__4cXyzCFv();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void reinitGX__6J3DSysFv();
extern "C" bool entry__9J3DPacketFP13J3DDrawBuffer();
extern "C" void entryImm__13J3DDrawBufferFP9J3DPacketUs();
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void sprintf();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" u8 sOldVcdVatCmd__8J3DShape[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80BEE0DC-80BEE0F0 000000 0014+00 5/5 0/0 0/0 .rodata          M_attr__12daObjFlag2_c */
SECTION_RODATA u8 const daObjFlag2_c::M_attr[20] = {
    0xC0, 0x00, 0x00, 0x00, 0x3F, 0x3D, 0x70, 0xA4, 0x3F, 0x2E,
    0x14, 0x7B, 0x42, 0x20, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEE0DC, &daObjFlag2_c::M_attr);

/* 80BEE0F0-80BEE0F4 000014 0004+00 1/1 0/0 0/0 .rodata          @3643 */
SECTION_RODATA static f32 const lit_3643 = 10.0f;
COMPILER_STRIP_GATE(0x80BEE0F0, &lit_3643);

/* 80BEE220-80BEE31C 000000 00FC+00 1/1 0/0 0/0 .data            l_pennant_flag_pos */
SECTION_DATA static u8 l_pennant_flag_pos[252] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00,
    0x43, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC2, 0x70, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xB4, 0x00, 0x00,
    0x43, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC2, 0xB4, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xF0, 0x00, 0x00,
    0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC2, 0x70, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0xF0, 0x00, 0x00,
    0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC3, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BEC658-80BEC790 000078 0138+00 1/1 0/0 0/0 .text
 * initFlagPos__11FlagCloth_cFP4cXyzP10fopAc_ac_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::initFlagPos(cXyz* param_0, fopAc_ac_c* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/initFlagPos__11FlagCloth_cFP4cXyzP10fopAc_ac_c.s"
}
#pragma pop

/* 80BEC790-80BEC7CC 0001B0 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE0F4-80BEE0F8 000018 0004+00 1/4 0/0 0/0 .rodata          @3685 */
SECTION_RODATA static u8 const lit_3685[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BEE0F4, &lit_3685);

/* 80BEE0F8-80BEE0FC 00001C 0004+00 0/1 0/0 0/0 .rodata          @3686 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3686 = 0x42D0CE5F;
COMPILER_STRIP_GATE(0x80BEE0F8, &lit_3686);
#pragma pop

/* 80BEE0FC-80BEE104 000020 0004+04 0/1 0/0 0/0 .rodata          @3687 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3687[1 + 1 /* padding */] = {
    60.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BEE0FC, &lit_3687);
#pragma pop

/* 80BEE31C-80BEE3C4 0000FC 00A8+00 1/1 0/0 0/0 .data            l_texCoord_64x64 */
SECTION_DATA static u8 l_texCoord_64x64[168] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x4C, 0xCC, 0xCD, 0x3E, 0xCC, 0xCC, 0xCD,
    0x3F, 0x4C, 0xCC, 0xCD, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A, 0x3E, 0x99, 0x99, 0x9A,
    0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x33, 0x33, 0x33,
    0x3E, 0xCC, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0xCC, 0xCC, 0xCD, 0x3E, 0xCC, 0xCC, 0xCD,
    0x3E, 0xCC, 0xCC, 0xCD, 0x3F, 0x19, 0x99, 0x9A, 0x3E, 0xCC, 0xCC, 0xCD, 0x3F, 0x4C, 0xCC, 0xCD,
    0x3E, 0x4C, 0xCC, 0xCD, 0x3D, 0xCC, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x99, 0x99, 0x9A,
    0x3E, 0x4C, 0xCC, 0xCD, 0x3F, 0x00, 0x00, 0x00, 0x3E, 0x4C, 0xCC, 0xCD, 0x3F, 0x33, 0x33, 0x33,
    0x3E, 0x4C, 0xCC, 0xCD, 0x3F, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x4C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x4C, 0xCC, 0xCD,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 80BEE3C4-80BEE480 0001A4 00A8+14 1/1 0/0 0/0 .data            l_texCoord */
SECTION_DATA static u8 l_texCoord[168 + 20 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x3F,
    0x00,
    0x00,
    0x00,
    0x3E,
    0x4C,
    0xCC,
    0xCD,
    0x3E,
    0xCC,
    0xCC,
    0xCD,
    0x3E,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x19,
    0x99,
    0x9A,
    0x3E,
    0xCC,
    0xCC,
    0xCD,
    0x3E,
    0x99,
    0x99,
    0x9A,
    0x3E,
    0xCC,
    0xCC,
    0xCD,
    0x3F,
    0x00,
    0x00,
    0x00,
    0x3E,
    0xCC,
    0xCC,
    0xCD,
    0x3F,
    0x33,
    0x33,
    0x33,
    0x3F,
    0x19,
    0x99,
    0x9A,
    0x3E,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x19,
    0x99,
    0x9A,
    0x3E,
    0xCC,
    0xCC,
    0xCD,
    0x3F,
    0x19,
    0x99,
    0x9A,
    0x3F,
    0x19,
    0x99,
    0x9A,
    0x3F,
    0x19,
    0x99,
    0x9A,
    0x3F,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x4C,
    0xCC,
    0xCD,
    0x3D,
    0xCC,
    0xCC,
    0xCD,
    0x3F,
    0x4C,
    0xCC,
    0xCD,
    0x3E,
    0x99,
    0x99,
    0x9A,
    0x3F,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x00,
    0x00,
    0x00,
    0x3F,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x33,
    0x33,
    0x33,
    0x3F,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x66,
    0x66,
    0x66,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x3E,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x3E,
    0xCC,
    0xCC,
    0xCD,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x3F,
    0x19,
    0x99,
    0x9A,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x3F,
    0x4C,
    0xCC,
    0xCD,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x3F,
    0x80,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BEE480-80BEE518 000260 0098+00 1/1 0/0 0/0 .data            l_pennant_flagDL */
SECTION_DATA static u8 l_pennant_flagDL[152] ALIGN_DECL(32) = {
    0x98, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x05,
    0x05, 0x05, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0D, 0x0D, 0x0D, 0x0E, 0x0E, 0x0E, 0x13, 0x13,
    0x13, 0x14, 0x14, 0x14, 0x98, 0x00, 0x09, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04,
    0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x0C, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D, 0x12, 0x12, 0x12, 0x13,
    0x13, 0x13, 0x98, 0x00, 0x07, 0x03, 0x03, 0x03, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x0B, 0x0B,
    0x0B, 0x0C, 0x0C, 0x0C, 0x11, 0x11, 0x11, 0x12, 0x12, 0x12, 0x98, 0x00, 0x05, 0x06, 0x06, 0x06,
    0x0A, 0x0A, 0x0A, 0x0B, 0x0B, 0x0B, 0x10, 0x10, 0x10, 0x11, 0x11, 0x11, 0x90, 0x00, 0x03, 0x10,
    0x10, 0x10, 0x0A, 0x0A, 0x0A, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BEE518-80BEE710 0002F8 01F8+00 1/1 0/0 0/0 .data            rel_pos_idx_tbl$3652 */
SECTION_DATA static u8 rel_pos_idx_tbl_3652[504] = {
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x06,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0A,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0C,
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x09,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0A,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x0C,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x11,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x0E,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x12, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x13, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80BEC7CC-80BEC928 0001EC 015C+00 1/1 0/0 0/0 .text
 * calcFlagFactor__11FlagCloth_cFP4cXyzP4cXyzP4cXyzi            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::calcFlagFactor(cXyz* param_0, cXyz* param_1, cXyz* param_2, int param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/calcFlagFactor__11FlagCloth_cFP4cXyzP4cXyzP4cXyzi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE104-80BEE10C 000028 0008+00 0/1 0/0 0/0 .rodata          @3728 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3728[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEE104, &lit_3728);
#pragma pop

/* 80BEE10C-80BEE114 000030 0008+00 0/1 0/0 0/0 .rodata          @3729 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3729[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEE10C, &lit_3729);
#pragma pop

/* 80BEE114-80BEE11C 000038 0008+00 0/1 0/0 0/0 .rodata          @3730 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3730[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEE114, &lit_3730);
#pragma pop

/* 80BEC928-80BECAE0 000348 01B8+00 1/1 0/0 0/0 .text
 * calcFlagFactorSub__11FlagCloth_cFP4cXyzP4cXyzP4cXyzf         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::calcFlagFactorSub(cXyz* param_0, cXyz* param_1, cXyz* param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/calcFlagFactorSub__11FlagCloth_cFP4cXyzP4cXyzP4cXyzf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE710-80BEE95C 0004F0 024C+00 1/1 0/0 0/0 .data            rel_pos_idx_tbl$3734 */
SECTION_DATA static u8 rel_pos_idx_tbl_3734[588] = {
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0B,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0E,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0A, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x12,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x11, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x12, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x13, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80BECAE0-80BECC34 000500 0154+00 2/2 0/0 0/0 .text calcFlagNormal__11FlagCloth_cFP4cXyzi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::calcFlagNormal(cXyz* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/calcFlagNormal__11FlagCloth_cFP4cXyzi.s"
}
#pragma pop

/* 80BECC34-80BECC78 000654 0044+00 1/1 0/0 0/0 .text            calcFlagNormalBack__11FlagCloth_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::calcFlagNormalBack() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/calcFlagNormalBack__11FlagCloth_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE11C-80BEE15C 000040 0040+00 1/1 0/0 0/0 .rodata          ccSphSrc$3809 */
const static dCcD_SrcSph ccSphSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x10000, 0x11}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x1}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 100.0f} // mSph
    } // mSphAttr
};

/* 80BECC78-80BECCE4 000698 006C+00 1/1 0/0 0/0 .text initCcSphere__11FlagCloth_cFP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::initCcSphere(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/initCcSphere__11FlagCloth_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80BECCE4-80BECD98 000704 00B4+00 1/1 0/0 0/0 .text            setCcSphere__11FlagCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::setCcSphere() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/setCcSphere__11FlagCloth_cFv.s"
}
#pragma pop

/* 80BECD98-80BECF30 0007B8 0198+00 1/1 0/0 0/0 .text            execute__11FlagCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/execute__11FlagCloth_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE15C-80BEE160 000080 0004+00 1/1 0/0 0/0 .rodata          @3907 */
SECTION_RODATA static u32 const lit_3907 = 0x000000FF;
COMPILER_STRIP_GATE(0x80BEE15C, &lit_3907);

/* 80BEE160-80BEE164 000084 0004+00 1/1 0/0 0/0 .rodata          @3910 */
SECTION_RODATA static u32 const lit_3910 = 0x000000FF;
COMPILER_STRIP_GATE(0x80BEE160, &lit_3910);

/* 80BECF30-80BED22C 000950 02FC+00 1/0 0/0 0/0 .text            draw__11FlagCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/draw__11FlagCloth_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE164-80BEE168 000088 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = -600.0f;
COMPILER_STRIP_GATE(0x80BEE164, &lit_3959);
#pragma pop

/* 80BEE168-80BEE16C 00008C 0004+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 600.0f;
COMPILER_STRIP_GATE(0x80BEE168, &lit_3960);
#pragma pop

/* 80BEE16C-80BEE174 000090 0004+04 0/1 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961[1 + 1 /* padding */] = {
    400.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BEE16C, &lit_3961);
#pragma pop

/* 80BEE174-80BEE17C 000098 0008+00 0/1 0/0 0/0 .rodata          @3963 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3963[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEE174, &lit_3963);
#pragma pop

/* 80BEE1E8-80BEE1E8 00010C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BEE1E8 = "spec.dat";
#pragma pop

/* 80BED22C-80BED368 000C4C 013C+00 1/1 0/0 0/0 .text            create_init__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFlag2_c::create_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/create_init__12daObjFlag2_cFv.s"
}
#pragma pop

/* 80BED368-80BED3B8 000D88 0050+00 1/1 0/0 0/0 .text            initBaseMtx__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFlag2_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/initBaseMtx__12daObjFlag2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE17C-80BEE1C0 0000A0 0044+00 0/1 0/0 0/0 .rodata          ccCylSrc$3979 */
#pragma push
#pragma force_active on
const static dCcD_SrcCyl ccCylSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x79}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x4}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        15.0f, // mRadius
        30.0f // mHeight
    } // mCyl
};
#pragma pop

/* 80BEE1C0-80BEE1C4 0000E4 0004+00 0/1 0/0 0/0 .rodata          @3982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3982 = 15.0f;
COMPILER_STRIP_GATE(0x80BEE1C0, &lit_3982);
#pragma pop

/* 80BEE1C4-80BEE1C8 0000E8 0004+00 0/1 0/0 0/0 .rodata          @3983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3983 = 200.0f;
COMPILER_STRIP_GATE(0x80BEE1C4, &lit_3983);
#pragma pop

/* 80BED3B8-80BED44C 000DD8 0094+00 1/1 0/0 0/0 .text            initCollision__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFlag2_c::initCollision() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/initCollision__12daObjFlag2_cFv.s"
}
#pragma pop

/* 80BED44C-80BED480 000E6C 0034+00 2/2 0/0 0/0 .text            setCollision__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFlag2_c::setCollision() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/setCollision__12daObjFlag2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE1C8-80BEE1CC 0000EC 0004+00 1/1 0/0 0/0 .rodata          @4020 */
SECTION_RODATA static f32 const lit_4020 = 0.125f;
COMPILER_STRIP_GATE(0x80BEE1C8, &lit_4020);

/* 80BEE1CC-80BEE1D4 0000F0 0004+04 1/1 0/0 0/0 .rodata          @4021 */
SECTION_RODATA static f32 const lit_4021[1 + 1 /* padding */] = {
    1.0f / 100.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BEE1CC, &lit_4021);

/* 80BEE1D4-80BEE1DC 0000F8 0008+00 1/1 0/0 0/0 .rodata          @4023 */
SECTION_RODATA static u8 const lit_4023[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BEE1D4, &lit_4023);

/* 80BEE1E8-80BEE1E8 00010C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BEE1F1 = "flag%02d.bti";
SECTION_DEAD static char const* const stringBase_80BEE1FE = "flag.bti";
SECTION_DEAD static char const* const stringBase_80BEE207 = "model0.bmd";
#pragma pop

/* 80BED480-80BED680 000EA0 0200+00 1/1 0/0 0/0 .text            createHeap__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFlag2_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/createHeap__12daObjFlag2_cFv.s"
}
#pragma pop

/* 80BED680-80BED6A0 0010A0 0020+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE1E8-80BEE1E8 00010C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BEE212 = "FlagObj%02d";
#pragma pop

/* 80BED6A0-80BED7A4 0010C0 0104+00 1/1 0/0 0/0 .text            create__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFlag2_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/create__12daObjFlag2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE95C-80BEE97C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjFlag2_Method */
static actor_method_class l_daObjFlag2_Method = {
    (process_method_func)daObjFlag2_Create__FP10fopAc_ac_c,
    (process_method_func)daObjFlag2_Delete__FP12daObjFlag2_c,
    (process_method_func)daObjFlag2_Execute__FP12daObjFlag2_c,
    (process_method_func)daObjFlag2_IsDelete__FP12daObjFlag2_c,
    (process_method_func)daObjFlag2_Draw__FP12daObjFlag2_c,
};

/* 80BEE97C-80BEE9AC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Flag2 */
extern actor_process_profile_definition g_profile_Obj_Flag2 = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Flag2,         // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjFlag2_c),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  27,                     // mPriority
  &l_daObjFlag2_Method,   // sub_method
  0x00044180,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BEE9AC-80BEE9B8 00078C 000C+00 4/4 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BEE9B8-80BEE9C4 000798 000C+00 3/3 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BEE9C4-80BEE9D0 0007A4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BEE9D0-80BEE9DC 0007B0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BEE9DC-80BEE9E8 0007BC 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BEE9E8-80BEE9FC 0007C8 0014+00 2/2 0/0 0/0 .data            __vt__11FlagCloth_c */
SECTION_DATA extern void* __vt__11FlagCloth_c[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__11FlagCloth_cFv,
    (void*)__dt__11FlagCloth_cFv,
};

/* 80BED7A4-80BED9C4 0011C4 0220+00 1/1 0/0 0/0 .text            __ct__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjFlag2_c::daObjFlag2_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__ct__12daObjFlag2_cFv.s"
}
#pragma pop

/* 80BED9C4-80BEDB70 0013E4 01AC+00 2/1 0/0 0/0 .text            __dt__11FlagCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm FlagCloth_c::~FlagCloth_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__11FlagCloth_cFv.s"
}
#pragma pop

/* 80BEDB70-80BEDB74 001590 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 80BEDB74-80BEDBBC 001594 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BEDBBC-80BEDBF4 0015DC 0038+00 1/1 0/0 0/0 .text            __ct__11J3DLightObjFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DLightObj::J3DLightObj() {
extern "C" asm void __ct__11J3DLightObjFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__ct__11J3DLightObjFv.s"
}
#pragma pop

/* 80BEDBF4-80BEDC3C 001614 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BEDC3C-80BEDC84 00165C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BEDC84-80BEDCE0 0016A4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80BEDCE0-80BEDDA0 001700 00C0+00 1/1 0/0 0/0 .text            draw__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFlag2_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/draw__12daObjFlag2_cFv.s"
}
#pragma pop

/* 80BEDDA0-80BEDDC0 0017C0 0020+00 1/0 0/0 0/0 .text            daObjFlag2_Draw__FP12daObjFlag2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFlag2_Draw(daObjFlag2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/daObjFlag2_Draw__FP12daObjFlag2_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEE1DC-80BEE1E0 000100 0004+00 0/1 0/0 0/0 .rodata          @4334 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4334 = 127.0f;
COMPILER_STRIP_GATE(0x80BEE1DC, &lit_4334);
#pragma pop

/* 80BEE1E0-80BEE1E4 000104 0004+00 0/1 0/0 0/0 .rodata          @4335 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4335 = 1.0f;
COMPILER_STRIP_GATE(0x80BEE1E0, &lit_4335);
#pragma pop

/* 80BEE1E4-80BEE1E8 000108 0004+00 0/1 0/0 0/0 .rodata          @4336 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4336 = -1.0f;
COMPILER_STRIP_GATE(0x80BEE1E4, &lit_4336);
#pragma pop

/* 80BEDDC0-80BEDEB0 0017E0 00F0+00 1/0 0/0 0/0 .text daObjFlag2_Execute__FP12daObjFlag2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFlag2_Execute(daObjFlag2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/daObjFlag2_Execute__FP12daObjFlag2_c.s"
}
#pragma pop

/* 80BEDEB0-80BEDEB8 0018D0 0008+00 1/0 0/0 0/0 .text daObjFlag2_IsDelete__FP12daObjFlag2_c */
static bool daObjFlag2_IsDelete(daObjFlag2_c* param_0) {
    return true;
}

/* 80BEDEB8-80BEDEE0 0018D8 0028+00 1/0 0/0 0/0 .text            daObjFlag2_Delete__FP12daObjFlag2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFlag2_Delete(daObjFlag2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/daObjFlag2_Delete__FP12daObjFlag2_c.s"
}
#pragma pop

/* 80BEDEE0-80BEE050 001900 0170+00 1/1 0/0 0/0 .text            __dt__12daObjFlag2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjFlag2_c::~daObjFlag2_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__12daObjFlag2_cFv.s"
}
#pragma pop

/* 80BEE050-80BEE070 001A70 0020+00 1/0 0/0 0/0 .text            daObjFlag2_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFlag2_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/daObjFlag2_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BEE070-80BEE0B8 001A90 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80BEE0B8-80BEE0D4 001AD8 001C+00 4/4 0/0 0/0 .text            getTargetPos__11FlagCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void FlagCloth_c::getTargetPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_flag2/d_a_obj_flag2/getTargetPos__11FlagCloth_cFv.s"
}
#pragma pop

/* 80BEE1E8-80BEE1E8 00010C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
