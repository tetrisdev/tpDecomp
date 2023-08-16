//
// Generated By: dol2asm
// Translation Unit: d_a_b_gos
//

#include "rel/d/a/b/d_a_b_gos/d_a_b_gos.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct Z2Creature {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daB_GOS_HIO_c {
    /* 8060426C */ daB_GOS_HIO_c();
    /* 80605320 */ ~daB_GOS_HIO_c();
};

struct dKy_tevstr_c {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 806052B0 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct csXyz {};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 80605220 */ ~cM3dGSph();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F200 */ void SetR(f32);
    /* 806051D8 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80605268 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {};

struct b_gos_class {
    /* 80605024 */ b_gos_class();
};

struct _GXTexObj {};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__13daB_GOS_HIO_cFv();
extern "C" static void daB_GOS_Draw__FP11b_gos_class();
extern "C" static void anm_init__FP11b_gos_classifUcf();
extern "C" static void damage_check__FP11b_gos_class();
extern "C" static void wait__FP11b_gos_class();
extern "C" static void walk__FP11b_gos_class();
extern "C" static void ball__FP11b_gos_class();
extern "C" static void stick__FP11b_gos_class();
extern "C" static void action__FP11b_gos_class();
extern "C" static void daB_GOS_Execute__FP11b_gos_class();
extern "C" static bool daB_GOS_IsDelete__FP11b_gos_class();
extern "C" static void daB_GOS_Delete__FP11b_gos_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daB_GOS_Create__FP10fopAc_ac_c();
extern "C" void __ct__11b_gos_classFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__13daB_GOS_HIO_cFv();
extern "C" void __sinit_d_a_b_gos_cpp();
extern "C" static void func_806053A4();
extern "C" static void func_806053AC();
extern "C" extern char const* const d_a_b_gos__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_rndF__Ff();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 806053C8-806053CC 000000 0004+00 9/9 0/0 0/0 .rodata          @3646 */
SECTION_RODATA static f32 const lit_3646 = 1.0f;
COMPILER_STRIP_GATE(0x806053C8, &lit_3646);

/* 806053CC-806053D0 000004 0004+00 1/2 0/0 0/0 .rodata          @3647 */
SECTION_RODATA static f32 const lit_3647 = 10.0f;
COMPILER_STRIP_GATE(0x806053CC, &lit_3647);

/* 8060541C-80605514 000000 00F8+00 1/1 0/0 0/0 .data            j_info */
SECTION_DATA static u8 j_info[248] = {
    0x00, 0x0E, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x0F, 0x0D, 0x00, 0x00, 0x3E, 0xAA, 0x7E, 0xFA, 0x0F, 0x0D, 0x00, 0x00, 0x3F, 0x2A, 0x7E, 0xFA,
    0x00, 0x0F, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x03, 0x04, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x04, 0x05, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x08, 0x09, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x09, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x09, 0x0A, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x0A, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x10, 0x11, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x11, 0x12, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x00, 0x13, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x13, 0x14, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x14, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x14, 0x15, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x15, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x03, 0x10, 0x00, 0x00, 0x3E, 0xAA, 0x7E, 0xFA,
    0x03, 0x10, 0x00, 0x00, 0x3F, 0x2A, 0x7E, 0xFA, 0x08, 0x13, 0x00, 0x00, 0x3E, 0xAA, 0x7E, 0xFA,
    0x08, 0x13, 0x00, 0x00, 0x3F, 0x2A, 0x7E, 0xFA, 0x0D, 0x03, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x0D, 0x08, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
};

/* 80605514-80605558 0000F8 0044+00 1/1 0/0 0/0 .data            cc_cyl_src$3915 */
SECTION_DATA static u8 cc_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00,
};

/* 80605558-80605578 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_GOS_Method */
SECTION_DATA static void* l_daB_GOS_Method[8] = {
    (void*)daB_GOS_Create__FP10fopAc_ac_c,
    (void*)daB_GOS_Delete__FP11b_gos_class,
    (void*)daB_GOS_Execute__FP11b_gos_class,
    (void*)daB_GOS_IsDelete__FP11b_gos_class,
    (void*)daB_GOS_Draw__FP11b_gos_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80605578-806055A8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_GOS */
SECTION_DATA extern void* g_profile_B_GOS[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02F10000, (void*)&g_fpcLf_Method,
    (void*)0x00000CCC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00D80000, (void*)&l_daB_GOS_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 806055A8-806055B4 00018C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 806055B4-806055C0 000198 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806055C0-806055CC 0001A4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 806055CC-806055F0 0001B0 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806053AC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806053A4,
};

/* 806055F0-806055FC 0001D4 000C+00 2/2 0/0 0/0 .data            __vt__13daB_GOS_HIO_c */
SECTION_DATA extern void* __vt__13daB_GOS_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daB_GOS_HIO_cFv,
};

/* 8060426C-8060429C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__13daB_GOS_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_GOS_HIO_c::daB_GOS_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__ct__13daB_GOS_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806053D0-806053D4 000008 0004+00 0/2 0/0 0/0 .rodata          @3674 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3674 = 50.0f;
COMPILER_STRIP_GATE(0x806053D0, &lit_3674);
#pragma pop

/* 806053D4-806053D8 00000C 0004+00 0/1 0/0 0/0 .rodata          @3675 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3675 = 800.0f;
COMPILER_STRIP_GATE(0x806053D4, &lit_3675);
#pragma pop

/* 806053D8-806053DC 000010 0004+00 2/7 0/0 0/0 .rodata          @3676 */
SECTION_RODATA static u8 const lit_3676[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x806053D8, &lit_3676);

/* 8060429C-80604370 00011C 00D4+00 1/0 0/0 0/0 .text            daB_GOS_Draw__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_GOS_Draw(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/daB_GOS_Draw__FP11b_gos_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 806053DC-806053E0 000014 0004+00 1/1 0/0 0/0 .rodata          @3684 */
SECTION_RODATA static f32 const lit_3684 = -1.0f;
COMPILER_STRIP_GATE(0x806053DC, &lit_3684);

/* 80605414-80605414 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80605414 = "B_gos";
#pragma pop

/* 80604370-8060441C 0001F0 00AC+00 3/3 0/0 0/0 .text            anm_init__FP11b_gos_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(b_gos_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/anm_init__FP11b_gos_classifUcf.s"
}
#pragma pop

/* 8060441C-80604420 00029C 0004+00 1/1 0/0 0/0 .text            damage_check__FP11b_gos_class */
static void damage_check(b_gos_class* param_0) {
    /* empty function */
}

/* ############################################################################################## */
/* 806053E0-806053E4 000018 0004+00 0/4 0/0 0/0 .rodata          @3699 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3699 = 5.0f;
COMPILER_STRIP_GATE(0x806053E0, &lit_3699);
#pragma pop

/* 806053E4-806053E8 00001C 0004+00 0/2 0/0 0/0 .rodata          @3700 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3700 = 30.0f;
COMPILER_STRIP_GATE(0x806053E4, &lit_3700);
#pragma pop

/* 80604420-806044D8 0002A0 00B8+00 1/1 0/0 0/0 .text            wait__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wait(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/wait__FP11b_gos_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 806053E8-806053EC 000020 0004+00 1/3 0/0 0/0 .rodata          @3711 */
SECTION_RODATA static f32 const lit_3711 = 60.0f;
COMPILER_STRIP_GATE(0x806053E8, &lit_3711);

/* 806053EC-806053F0 000024 0004+00 0/2 0/0 0/0 .rodata          @3712 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3712 = 65536.0f;
COMPILER_STRIP_GATE(0x806053EC, &lit_3712);
#pragma pop

/* 80605608-8060560C 000008 0004+00 3/3 0/0 0/0 .bss             boss */
static u8 boss[4];

/* 8060560C-80605610 00000C 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_8060560C[4];

/* 80605610-8060561C 000010 000C+00 1/1 0/0 0/0 .bss             @3641 */
static u8 lit_3641[12];

/* 8060561C-8060562C 00001C 0010+00 5/5 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 806044D8-806045E4 000358 010C+00 1/1 0/0 0/0 .text            walk__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void walk(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/walk__FP11b_gos_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 806053F0-806053F4 000028 0004+00 0/1 0/0 0/0 .rodata          @3727 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3727 = 20.0f;
COMPILER_STRIP_GATE(0x806053F0, &lit_3727);
#pragma pop

/* 806045E4-806046E0 000464 00FC+00 1/1 0/0 0/0 .text            ball__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ball(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/ball__FP11b_gos_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 806053F4-806053F8 00002C 0004+00 0/2 0/0 0/0 .rodata          @3774 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3774 = 200.0f;
COMPILER_STRIP_GATE(0x806053F4, &lit_3774);
#pragma pop

/* 806046E0-806048E0 000560 0200+00 1/1 0/0 0/0 .text            stick__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void stick(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/stick__FP11b_gos_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 806053F8-806053FC 000030 0004+00 0/1 0/0 0/0 .rodata          @3827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3827 = 0.5f;
COMPILER_STRIP_GATE(0x806053F8, &lit_3827);
#pragma pop

/* 806053FC-80605400 000034 0004+00 0/1 0/0 0/0 .rodata          @3828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3828 = -60.0f;
COMPILER_STRIP_GATE(0x806053FC, &lit_3828);
#pragma pop

/* 80605400-80605404 000038 0004+00 0/1 0/0 0/0 .rodata          @3829 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3829 = 2.0f;
COMPILER_STRIP_GATE(0x80605400, &lit_3829);
#pragma pop

/* 80605404-80605408 00003C 0004+00 0/1 0/0 0/0 .rodata          @3830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3830 = -30.0f;
COMPILER_STRIP_GATE(0x80605404, &lit_3830);
#pragma pop

/* 80605408-8060540C 000040 0004+00 0/1 0/0 0/0 .rodata          @3831 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3831 = 2.5f;
COMPILER_STRIP_GATE(0x80605408, &lit_3831);
#pragma pop

/* 806048E0-80604B7C 000760 029C+00 1/1 0/0 0/0 .text            action__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/action__FP11b_gos_class.s"
}
#pragma pop

/* 80604B7C-80604CF4 0009FC 0178+00 2/1 0/0 0/0 .text            daB_GOS_Execute__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_GOS_Execute(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/daB_GOS_Execute__FP11b_gos_class.s"
}
#pragma pop

/* 80604CF4-80604CFC 000B74 0008+00 1/0 0/0 0/0 .text            daB_GOS_IsDelete__FP11b_gos_class
 */
static bool daB_GOS_IsDelete(b_gos_class* param_0) {
    return true;
}

/* 80604CFC-80604D64 000B7C 0068+00 1/0 0/0 0/0 .text            daB_GOS_Delete__FP11b_gos_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_GOS_Delete(b_gos_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/daB_GOS_Delete__FP11b_gos_class.s"
}
#pragma pop

/* 80604D64-80604E5C 000BE4 00F8+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8060540C-80605410 000044 0004+00 0/1 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = -200.0f;
COMPILER_STRIP_GATE(0x8060540C, &lit_3953);
#pragma pop

/* 80605410-80605414 000048 0004+00 0/1 0/0 0/0 .rodata          @3954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3954 = -7.0f;
COMPILER_STRIP_GATE(0x80605410, &lit_3954);
#pragma pop

/* 80604E5C-80605024 000CDC 01C8+00 1/0 0/0 0/0 .text            daB_GOS_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_GOS_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/daB_GOS_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80605024-806051D8 000EA4 01B4+00 1/1 0/0 0/0 .text            __ct__11b_gos_classFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm b_gos_class::b_gos_class() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__ct__11b_gos_classFv.s"
}
#pragma pop

/* 806051D8-80605220 001058 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80605220-80605268 0010A0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80605268-806052B0 0010E8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 806052B0-80605320 001130 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80605320-80605368 0011A0 0048+00 2/1 0/0 0/0 .text            __dt__13daB_GOS_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_GOS_HIO_c::~daB_GOS_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__dt__13daB_GOS_HIO_cFv.s"
}
#pragma pop

/* 80605368-806053A4 0011E8 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_b_gos_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_gos_cpp() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/__sinit_d_a_b_gos_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80605368, __sinit_d_a_b_gos_cpp);
#pragma pop

/* 806053A4-806053AC 001224 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_806053A4() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/func_806053A4.s"
}
#pragma pop

/* 806053AC-806053B4 00122C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_806053AC() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gos/d_a_b_gos/func_806053AC.s"
}
#pragma pop

/* 80605414-80605414 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
