//
// Generated By: dol2asm
// Translation Unit: d_a_obj_kabuto
//

#include "rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF0C */ void ZXYrotS(csXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

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

struct fopAc_ac_c {};

struct daPy_boomerangMove_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

struct daObj_KabHIO_c {
    /* 80C2AE6C */ daObj_KabHIO_c();
    /* 80C2E068 */ ~daObj_KabHIO_c();
};

struct daObjKABUTO_c {
    /* 80C2AEA4 */ void InitCcSph();
    /* 80C2AF10 */ void SetCcSph();
    /* 80C2AF88 */ void CreateHeap();
    /* 80C2B36C */ void ShopWaitAction();
    /* 80C2B4D4 */ void WaitAction();
    /* 80C2B618 */ void WallCheck();
    /* 80C2B88C */ void SpeedSet();
    /* 80C2B998 */ void WallWalk();
    /* 80C2BDE8 */ void WalkAction();
    /* 80C2BFE8 */ void MoveAction();
    /* 80C2C7C8 */ void Z_BufferChk();
    /* 80C2C944 */ void Action();
    /* 80C2CA08 */ void ShopAction();
    /* 80C2CAC4 */ void Insect_Release();
    /* 80C2CADC */ void ParticleSet();
    /* 80C2CC18 */ void Execute();
    /* 80C2D21C */ void ObjHit();
    /* 80C2D3A4 */ void Delete();
    /* 80C2D40C */ void setBaseMtx();
    /* 80C2D578 */ void CreateChk();
    /* 80C2D724 */ void create();
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dMenu_Insect_c {
    /* 801D9F3C */ void isCatchNotGiveInsect(u8);
};

struct dInsect_c {
    /* 8015E010 */ dInsect_c();
    /* 8015E078 */ void Insect_GetDemoMain();
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dDlst_peekZ_c {
    /* 80056018 */ void newData(s16, s16, u32*);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80C2DF60 */ ~dBgS_ObjAcch();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {};

struct cBgS_LinChk {};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct _GXTexObj {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C2B2E0 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__14daObj_KabHIO_cFv();
extern "C" void InitCcSph__13daObjKABUTO_cFv();
extern "C" void SetCcSph__13daObjKABUTO_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void CreateHeap__13daObjKABUTO_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObjKABUTO_Create__FP10fopAc_ac_c();
extern "C" static void daObjKABUTO_Delete__FP13daObjKABUTO_c();
extern "C" void ShopWaitAction__13daObjKABUTO_cFv();
extern "C" void WaitAction__13daObjKABUTO_cFv();
extern "C" void WallCheck__13daObjKABUTO_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void SpeedSet__13daObjKABUTO_cFv();
extern "C" void WallWalk__13daObjKABUTO_cFv();
extern "C" void WalkAction__13daObjKABUTO_cFv();
extern "C" void MoveAction__13daObjKABUTO_cFv();
extern "C" void Z_BufferChk__13daObjKABUTO_cFv();
extern "C" void Action__13daObjKABUTO_cFv();
extern "C" void ShopAction__13daObjKABUTO_cFv();
extern "C" void Insect_Release__13daObjKABUTO_cFv();
extern "C" void ParticleSet__13daObjKABUTO_cFv();
extern "C" void Execute__13daObjKABUTO_cFv();
extern "C" void ObjHit__13daObjKABUTO_cFv();
extern "C" void Delete__13daObjKABUTO_cFv();
extern "C" void setBaseMtx__13daObjKABUTO_cFv();
extern "C" static void daObjKABUTO_Draw__FP13daObjKABUTO_c();
extern "C" static void daObjKABUTO_Execute__FP13daObjKABUTO_c();
extern "C" void CreateChk__13daObjKABUTO_cFv();
extern "C" void create__13daObjKABUTO_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static bool daObjKABUTO_IsDelete__FP13daObjKABUTO_c();
extern "C" void __dt__14daObj_KabHIO_cFv();
extern "C" void __sinit_d_a_obj_kabuto_cpp();
extern "C" static void func_80C2E0EC();
extern "C" static void func_80C2E0F4();
extern "C" extern char const* const d_a_obj_kabuto__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void mDoLib_pos2camera__FP3VecP3Vec();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void newData__13dDlst_peekZ_cFssPUl();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void __ct__9dInsect_cFv();
extern "C" void Insect_GetDemoMain__9dInsect_cFv();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void isCatchNotGiveInsect__14dMenu_Insect_cFUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_24();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C2E110-80C2E114 000000 0004+00 13/13 0/0 0/0 .rodata          @3775 */
SECTION_RODATA static f32 const lit_3775 = 1.5f;
COMPILER_STRIP_GATE(0x80C2E110, &lit_3775);

/* 80C2E114-80C2E118 000004 0004+00 0/2 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3776 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C2E114, &lit_3776);
#pragma pop

/* 80C2E118-80C2E11C 000008 0004+00 0/1 0/0 0/0 .rodata          @3777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3777 = -3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C2E118, &lit_3777);
#pragma pop

/* 80C2E228-80C2E248 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjKABUTO_Method */
SECTION_DATA static void* l_daObjKABUTO_Method[8] = {
    (void*)daObjKABUTO_Create__FP10fopAc_ac_c,
    (void*)daObjKABUTO_Delete__FP13daObjKABUTO_c,
    (void*)daObjKABUTO_Execute__FP13daObjKABUTO_c,
    (void*)daObjKABUTO_IsDelete__FP13daObjKABUTO_c,
    (void*)daObjKABUTO_Draw__FP13daObjKABUTO_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C2E248-80C2E278 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Kabuto */
SECTION_DATA extern void* g_profile_Obj_Kabuto[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01400000, (void*)&g_fpcLf_Method,
    (void*)0x00000A14, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01DD0000, (void*)&l_daObjKABUTO_Method,
    (void*)0x000C0120, (void*)0x030E0000,
};

/* 80C2E278-80C2E29C 000050 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C2E0F4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C2E0EC,
};

/* 80C2E29C-80C2E2A8 000074 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C2E2A8-80C2E2B4 000080 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C2E2B4-80C2E2C0 00008C 000C+00 1/1 0/0 0/0 .data            __vt__13daObjKABUTO_c */
SECTION_DATA extern void* __vt__13daObjKABUTO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)Insect_Release__13daObjKABUTO_cFv,
};

/* 80C2E2C0-80C2E2CC 000098 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80C2E2CC-80C2E2D8 0000A4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C2E2D8-80C2E2E4 0000B0 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_KabHIO_c */
SECTION_DATA extern void* __vt__14daObj_KabHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_KabHIO_cFv,
};

/* 80C2AE6C-80C2AEA4 0000EC 0038+00 1/1 0/0 0/0 .text            __ct__14daObj_KabHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_KabHIO_c::daObj_KabHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__ct__14daObj_KabHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E11C-80C2E15C 00000C 0040+00 1/1 0/0 0/0 .rodata          ccSphSrc$3781 */
const static dCcD_SrcSph ccSphSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x14002, 0x11}, 0x0}}, // mObj
        {dCcD_SE_STONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 100.0f} // mSph
    } // mSphAttr
};

/* 80C2AEA4-80C2AF10 000124 006C+00 1/1 0/0 0/0 .text            InitCcSph__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::InitCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/InitCcSph__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E15C-80C2E160 00004C 0004+00 1/4 0/0 0/0 .rodata          @3790 */
SECTION_RODATA static f32 const lit_3790 = 20.0f;
COMPILER_STRIP_GATE(0x80C2E15C, &lit_3790);

/* 80C2AF10-80C2AF68 000190 0058+00 1/1 0/0 0/0 .text            SetCcSph__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::SetCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/SetCcSph__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2AF68-80C2AF88 0001E8 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E160-80C2E164 000050 0004+00 2/7 0/0 0/0 .rodata          @3896 */
SECTION_RODATA static f32 const lit_3896 = 1.0f;
COMPILER_STRIP_GATE(0x80C2E160, &lit_3896);

/* 80C2E218-80C2E218 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C2E218 = "Kab_m";
#pragma pop

/* 80C2AF88-80C2B2E0 000208 0358+00 1/1 0/0 0/0 .text            CreateHeap__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/CreateHeap__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2B2E0-80C2B328 000560 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C2B328-80C2B348 0005A8 0020+00 1/0 0/0 0/0 .text            daObjKABUTO_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKABUTO_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/daObjKABUTO_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C2B348-80C2B36C 0005C8 0024+00 1/0 0/0 0/0 .text daObjKABUTO_Delete__FP13daObjKABUTO_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKABUTO_Delete(daObjKABUTO_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/daObjKABUTO_Delete__FP13daObjKABUTO_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E164-80C2E168 000054 0004+00 1/12 0/0 0/0 .rodata          @3933 */
SECTION_RODATA static u8 const lit_3933[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C2E164, &lit_3933);

/* 80C2E168-80C2E16C 000058 0004+00 0/6 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3934 = 5.0f;
COMPILER_STRIP_GATE(0x80C2E168, &lit_3934);
#pragma pop

/* 80C2E16C-80C2E170 00005C 0004+00 0/6 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = -1.0f;
COMPILER_STRIP_GATE(0x80C2E16C, &lit_3935);
#pragma pop

/* 80C2E170-80C2E174 000060 0004+00 0/7 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = 50.0f;
COMPILER_STRIP_GATE(0x80C2E170, &lit_3936);
#pragma pop

/* 80C2E174-80C2E178 000064 0004+00 0/5 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937 = 100.0f;
COMPILER_STRIP_GATE(0x80C2E174, &lit_3937);
#pragma pop

/* 80C2B36C-80C2B4D4 0005EC 0168+00 1/1 0/0 0/0 .text            ShopWaitAction__13daObjKABUTO_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::ShopWaitAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/ShopWaitAction__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E178-80C2E180 000068 0004+04 0/1 0/0 0/0 .rodata          @3957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3957[1 + 1 /* padding */] = {
    1500.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80C2E178, &lit_3957);
#pragma pop

/* 80C2B4D4-80C2B618 000754 0144+00 1/1 0/0 0/0 .text            WaitAction__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::WaitAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/WaitAction__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E180-80C2E188 000070 0008+00 0/5 0/0 0/0 .rodata          @4010 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4010[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C2E180, &lit_4010);
#pragma pop

/* 80C2E188-80C2E190 000078 0008+00 0/5 0/0 0/0 .rodata          @4011 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4011[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C2E188, &lit_4011);
#pragma pop

/* 80C2E190-80C2E198 000080 0008+00 0/5 0/0 0/0 .rodata          @4012 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4012[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C2E190, &lit_4012);
#pragma pop

/* 80C2B618-80C2B844 000898 022C+00 1/1 0/0 0/0 .text            WallCheck__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::WallCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/WallCheck__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2B844-80C2B88C 000AC4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGPla::~cM3dGPla() {
extern "C" asm void __dt__8cM3dGPlaFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E198-80C2E19C 000088 0004+00 0/1 0/0 0/0 .rodata          @4036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4036 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C2E198, &lit_4036);
#pragma pop

/* 80C2E19C-80C2E1A0 00008C 0004+00 0/3 0/0 0/0 .rodata          @4037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4037 = 10.0f;
COMPILER_STRIP_GATE(0x80C2E19C, &lit_4037);
#pragma pop

/* 80C2E1A0-80C2E1A4 000090 0004+00 0/1 0/0 0/0 .rodata          @4038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4038 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C2E1A0, &lit_4038);
#pragma pop

/* 80C2E1A4-80C2E1A8 000094 0004+00 0/2 0/0 0/0 .rodata          @4039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4039 = 0.5f;
COMPILER_STRIP_GATE(0x80C2E1A4, &lit_4039);
#pragma pop

/* 80C2B88C-80C2B998 000B0C 010C+00 1/1 0/0 0/0 .text            SpeedSet__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::SpeedSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/SpeedSet__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E1A8-80C2E1AC 000098 0004+00 0/2 0/0 0/0 .rodata          @4140 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4140 = 3.0f;
COMPILER_STRIP_GATE(0x80C2E1A8, &lit_4140);
#pragma pop

/* 80C2E1AC-80C2E1B0 00009C 0004+00 0/1 0/0 0/0 .rodata          @4141 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4141 = -100.0f;
COMPILER_STRIP_GATE(0x80C2E1AC, &lit_4141);
#pragma pop

/* 80C2E1B0-80C2E1B4 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4142 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4142 = 40.0f;
COMPILER_STRIP_GATE(0x80C2E1B0, &lit_4142);
#pragma pop

/* 80C2E1B4-80C2E1B8 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4143 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4143 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C2E1B4, &lit_4143);
#pragma pop

/* 80C2B998-80C2BDE8 000C18 0450+00 1/1 0/0 0/0 .text            WallWalk__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::WallWalk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/WallWalk__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E1B8-80C2E1BC 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4176 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C2E1B8, &lit_4176);
#pragma pop

/* 80C2BDE8-80C2BFE8 001068 0200+00 2/2 0/0 0/0 .text            WalkAction__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::WalkAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/WalkAction__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E1BC-80C2E1C0 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4322 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4322 = 30.0f;
COMPILER_STRIP_GATE(0x80C2E1BC, &lit_4322);
#pragma pop

/* 80C2E1C0-80C2E1C4 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4323 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4323 = 80.0f;
COMPILER_STRIP_GATE(0x80C2E1C0, &lit_4323);
#pragma pop

/* 80C2E1C4-80C2E1C8 0000B4 0004+00 0/3 0/0 0/0 .rodata          @4324 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4324 = 8.0f;
COMPILER_STRIP_GATE(0x80C2E1C4, &lit_4324);
#pragma pop

/* 80C2E1C8-80C2E1CC 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4325 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4325 = 200.0f;
COMPILER_STRIP_GATE(0x80C2E1C8, &lit_4325);
#pragma pop

/* 80C2E1CC-80C2E1D0 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4326 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4326 = 11.0f;
COMPILER_STRIP_GATE(0x80C2E1CC, &lit_4326);
#pragma pop

/* 80C2E1D0-80C2E1D4 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4327 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4327 = 1050.0f;
COMPILER_STRIP_GATE(0x80C2E1D0, &lit_4327);
#pragma pop

/* 80C2BFE8-80C2C7C8 001268 07E0+00 2/2 0/0 0/0 .text            MoveAction__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::MoveAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/MoveAction__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E1D4-80C2E1D8 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4367 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4367 = 608.0f;
COMPILER_STRIP_GATE(0x80C2E1D4, &lit_4367);
#pragma pop

/* 80C2E1D8-80C2E1DC 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4368 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4368 = 448.0f;
COMPILER_STRIP_GATE(0x80C2E1D8, &lit_4368);
#pragma pop

/* 80C2E1DC-80C2E1E0 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4369 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4369 = 16777215.0f;
COMPILER_STRIP_GATE(0x80C2E1DC, &lit_4369);
#pragma pop

/* 80C2C7C8-80C2C944 001A48 017C+00 1/1 0/0 0/0 .text            Z_BufferChk__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::Z_BufferChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/Z_BufferChk__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2C944-80C2CA08 001BC4 00C4+00 1/1 0/0 0/0 .text            Action__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/Action__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2CA08-80C2CAC4 001C88 00BC+00 1/1 0/0 0/0 .text            ShopAction__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::ShopAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/ShopAction__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2CAC4-80C2CADC 001D44 0018+00 1/0 0/0 0/0 .text            Insect_Release__13daObjKABUTO_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::Insect_Release() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/Insect_Release__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E1E0-80C2E1E4 0000D0 0002+02 1/2 0/0 0/0 .rodata          l_kab_itemno */
SECTION_RODATA static u16 const l_kab_itemno[1 + 1 /* padding */] = {
    0xC0C1,
    /* padding */
    0x0000,
};
COMPILER_STRIP_GATE(0x80C2E1E0, &l_kab_itemno);

/* 80C2E1E4-80C2E1E8 0000D4 0004+00 0/0 0/0 0/0 .rodata          @4473 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4473 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80C2E1E4, &lit_4473);
#pragma pop

/* 80C2E1E8-80C2E1EC 0000D8 0004+00 0/0 0/0 0/0 .rodata          @4474 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4474 = -1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C2E1E8, &lit_4474);
#pragma pop

/* 80C2E1EC-80C2E1F0 0000DC 0004+00 0/0 0/0 0/0 .rodata          @4496 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4496 = -9.0f;
COMPILER_STRIP_GATE(0x80C2E1EC, &lit_4496);
#pragma pop

/* 80C2E1F0-80C2E1F8 0000E0 0008+00 1/2 0/0 0/0 .rodata          @4545 */
SECTION_RODATA static u8 const lit_4545[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C2E1F0, &lit_4545);

/* 80C2CADC-80C2CC18 001D5C 013C+00 1/1 0/0 0/0 .text            ParticleSet__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::ParticleSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/ParticleSet__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E1F8-80C2E1FC 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4684 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4684 = 10000.0f;
COMPILER_STRIP_GATE(0x80C2E1F8, &lit_4684);
#pragma pop

/* 80C2CC18-80C2D21C 001E98 0604+00 1/1 0/0 0/0 .text            Execute__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/Execute__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2D21C-80C2D3A4 00249C 0188+00 1/1 0/0 0/0 .text            ObjHit__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::ObjHit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/ObjHit__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E2F0-80C2E2F4 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80C2E2F0[4];

/* 80C2D3A4-80C2D40C 002624 0068+00 1/1 0/0 0/0 .text            Delete__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/Delete__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2D40C-80C2D474 00268C 0068+00 1/1 0/0 0/0 .text            setBaseMtx__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/setBaseMtx__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E1FC-80C2E200 0000EC 0004+00 1/1 0/0 0/0 .rodata          @4779 */
SECTION_RODATA static f32 const lit_4779 = 15.0f;
COMPILER_STRIP_GATE(0x80C2E1FC, &lit_4779);

/* 80C2E2F4-80C2E300 00000C 000C+00 1/1 0/0 0/0 .bss             @3770 */
static u8 lit_3770[12];

/* 80C2E300-80C2E314 000018 0014+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[20];

/* 80C2D474-80C2D558 0026F4 00E4+00 1/0 0/0 0/0 .text            daObjKABUTO_Draw__FP13daObjKABUTO_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKABUTO_Draw(daObjKABUTO_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/daObjKABUTO_Draw__FP13daObjKABUTO_c.s"
}
#pragma pop

/* 80C2D558-80C2D578 0027D8 0020+00 2/1 0/0 0/0 .text daObjKABUTO_Execute__FP13daObjKABUTO_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKABUTO_Execute(daObjKABUTO_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/daObjKABUTO_Execute__FP13daObjKABUTO_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E200-80C2E204 0000F0 0004+00 1/2 0/0 0/0 .rodata          l_musiya_num */
SECTION_RODATA static u32 const l_musiya_num = 0x01910192;
COMPILER_STRIP_GATE(0x80C2E200, &l_musiya_num);

/* 80C2E218-80C2E218 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C2E21E = "R_SP160";
#pragma pop

/* 80C2D578-80C2D724 0027F8 01AC+00 1/1 0/0 0/0 .text            CreateChk__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::CreateChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/CreateChk__13daObjKABUTO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2E204-80C2E208 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5055 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5055 = 500.0f;
COMPILER_STRIP_GATE(0x80C2E204, &lit_5055);
#pragma pop

/* 80C2E208-80C2E20C 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5056 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5056 = -200.0f;
COMPILER_STRIP_GATE(0x80C2E208, &lit_5056);
#pragma pop

/* 80C2E20C-80C2E210 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5057 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5057 = -1000.0f;
COMPILER_STRIP_GATE(0x80C2E20C, &lit_5057);
#pragma pop

/* 80C2E210-80C2E214 000100 0004+00 0/1 0/0 0/0 .rodata          @5058 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5058 = -50.0f;
COMPILER_STRIP_GATE(0x80C2E210, &lit_5058);
#pragma pop

/* 80C2E214-80C2E218 000104 0004+00 0/1 0/0 0/0 .rodata          @5059 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5059 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C2E214, &lit_5059);
#pragma pop

/* 80C2D724-80C2DF60 0029A4 083C+00 1/1 0/0 0/0 .text            create__13daObjKABUTO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKABUTO_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/create__13daObjKABUTO_cFv.s"
}
#pragma pop

/* 80C2DF60-80C2DFD0 0031E0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C2DFD0-80C2E018 003250 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80C2E018-80C2E060 003298 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C2E060-80C2E068 0032E0 0008+00 1/0 0/0 0/0 .text daObjKABUTO_IsDelete__FP13daObjKABUTO_c */
static bool daObjKABUTO_IsDelete(daObjKABUTO_c* param_0) {
    return true;
}

/* 80C2E068-80C2E0B0 0032E8 0048+00 2/1 0/0 0/0 .text            __dt__14daObj_KabHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_KabHIO_c::~daObj_KabHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__dt__14daObj_KabHIO_cFv.s"
}
#pragma pop

/* 80C2E0B0-80C2E0EC 003330 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_kabuto_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_kabuto_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/__sinit_d_a_obj_kabuto_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C2E0B0, __sinit_d_a_obj_kabuto_cpp);
#pragma pop

/* 80C2E0EC-80C2E0F4 00336C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C2E0EC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/func_80C2E0EC.s"
}
#pragma pop

/* 80C2E0F4-80C2E0FC 003374 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C2E0F4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kabuto/d_a_obj_kabuto/func_80C2E0F4.s"
}
#pragma pop

/* 80C2E218-80C2E218 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
