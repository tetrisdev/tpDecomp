//
// Generated By: dol2asm
// Translation Unit: d_a_obj_gomikabe
//

#include "rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {
    /* 80BFF8C8 */ csXyz();
    /* 802673F4 */ csXyz(s16, s16, s16);
    /* 8026745C */ void operator+=(csXyz&);
    /* 80BFEA24 */ ~csXyz();
};

struct cXyz {
    /* 80BFE3FC */ ~cXyz();
    /* 80BFF8CC */ cXyz();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {};

struct fopAcM_wt_c {
    /* 8001DD84 */ void waterCheck(cXyz const*);

    static f32 mWaterY[1 + 1 /* padding */];
};

struct daObjGOMIKABE_c {
    /* 80BFE244 */ void initCcCylinder();
    /* 80BFE2CC */ void SetCcCyl();
    /* 80BFE47C */ void WaitAction();
    /* 80BFE4C4 */ void BreakChk();
    /* 80BFE52C */ void BreakSet();
    /* 80BFEA60 */ void getWaterStream(cXyz&, cXyz&, f32);
    /* 80BFEB90 */ void SpeedSet();
    /* 80BFED54 */ void BreakAction();
    /* 80BFED74 */ void CheckCull();
    /* 80BFEE24 */ void checkViewArea(cXyz);
    /* 80BFEEA8 */ void Action();
    /* 80BFEF20 */ void setBaseMtx();
    /* 80BFEF84 */ void setBaseMtx2();
    /* 80BFF064 */ void CreateHeap();
    /* 80BFF164 */ void create();
    /* 80BFF8D8 */ void Create();
    /* 80BFF938 */ void Execute(f32 (**)[3][4]);
    /* 80BFFA00 */ void Draw();
    /* 80BFFB1C */ void Delete();
};

struct daObjGOMIKABE_HIO_c {
    /* 80BFE22C */ daObjGOMIKABE_HIO_c();
    /* 80BFFB74 */ ~daObjGOMIKABE_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 80BFF5B4 */ ~dCcD_Sph();
    /* 80BFF680 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
};

struct dBgW_Base {};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BFF794 */ ~dBgS_ObjAcch();
    /* 80BFF804 */ dBgS_ObjAcch();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80BFF858 */ ~dBgS_AcchCir();
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80BFF704 */ ~cM3dGSph();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80BFF74C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__19daObjGOMIKABE_HIO_cFv();
extern "C" void initCcCylinder__15daObjGOMIKABE_cFv();
extern "C" void SetCcCyl__15daObjGOMIKABE_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daObjGOMIKABE_Create__FP10fopAc_ac_c();
extern "C" static void daObjGOMIKABE_Delete__FP15daObjGOMIKABE_c();
extern "C" void WaitAction__15daObjGOMIKABE_cFv();
extern "C" void BreakChk__15daObjGOMIKABE_cFv();
extern "C" void BreakSet__15daObjGOMIKABE_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void getWaterStream__15daObjGOMIKABE_cFR4cXyzR4cXyzf();
extern "C" void SpeedSet__15daObjGOMIKABE_cFv();
extern "C" void BreakAction__15daObjGOMIKABE_cFv();
extern "C" void CheckCull__15daObjGOMIKABE_cFv();
extern "C" void checkViewArea__15daObjGOMIKABE_cF4cXyz();
extern "C" void Action__15daObjGOMIKABE_cFv();
extern "C" void setBaseMtx__15daObjGOMIKABE_cFv();
extern "C" void setBaseMtx2__15daObjGOMIKABE_cFv();
extern "C" static void daObjGOMIKABE_Draw__FP15daObjGOMIKABE_c();
extern "C" static void daObjGOMIKABE_Execute__FP15daObjGOMIKABE_c();
extern "C" void CreateHeap__15daObjGOMIKABE_cFv();
extern "C" void create__15daObjGOMIKABE_cFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjGOMIKABE_IsDelete__FP15daObjGOMIKABE_c();
extern "C" void Create__15daObjGOMIKABE_cFv();
extern "C" void Execute__15daObjGOMIKABE_cFPPA3_A4_f();
extern "C" void Draw__15daObjGOMIKABE_cFv();
extern "C" void Delete__15daObjGOMIKABE_cFv();
extern "C" void __dt__19daObjGOMIKABE_HIO_cFv();
extern "C" void __sinit_d_a_obj_gomikabe_cpp();
extern "C" static void func_80BFFBF8();
extern "C" static void func_80BFFC00();
extern "C" extern char const* const d_a_obj_gomikabe__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_setupStageTexture__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_getWaterStream__FPC4cXyzRC13cBgS_PolyInfoP4cXyzPii();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__5csXyzFsss();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BFFCF4-80BFFCF4 0000D8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BFFCF4 = "GomiKabe";
#pragma pop

/* 80BFFD30-80BFFD34 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_gomikabe__stringBase0;

/* 80BFFD34-80BFFD54 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjGOMIKABE_Method */
SECTION_DATA static void* l_daObjGOMIKABE_Method[8] = {
    (void*)daObjGOMIKABE_Create__FP10fopAc_ac_c,
    (void*)daObjGOMIKABE_Delete__FP15daObjGOMIKABE_c,
    (void*)daObjGOMIKABE_Execute__FP15daObjGOMIKABE_c,
    (void*)daObjGOMIKABE_IsDelete__FP15daObjGOMIKABE_c,
    (void*)daObjGOMIKABE_Draw__FP15daObjGOMIKABE_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BFFD54-80BFFD84 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_GOMIKABE */
SECTION_DATA extern void* g_profile_Obj_GOMIKABE[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x013E0000, (void*)&g_fpcLf_Method,
    (void*)0x000013C4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02070000, (void*)&l_daObjGOMIKABE_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80BFFD84-80BFFD90 000054 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80BFFD90-80BFFDB4 000060 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BFFC00,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BFFBF8,
};

/* 80BFFDB4-80BFFDC0 000084 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BFFDC0-80BFFDCC 000090 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BFFDCC-80BFFDF4 00009C 0028+00 1/1 0/0 0/0 .data            __vt__15daObjGOMIKABE_c */
SECTION_DATA extern void* __vt__15daObjGOMIKABE_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjGOMIKABE_cFv,
    (void*)Create__15daObjGOMIKABE_cFv,
    (void*)Execute__15daObjGOMIKABE_cFPPA3_A4_f,
    (void*)Draw__15daObjGOMIKABE_cFv,
    (void*)Delete__15daObjGOMIKABE_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BFFDF4-80BFFE00 0000C4 000C+00 2/2 0/0 0/0 .data            __vt__19daObjGOMIKABE_HIO_c */
SECTION_DATA extern void* __vt__19daObjGOMIKABE_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19daObjGOMIKABE_HIO_cFv,
};

/* 80BFE22C-80BFE244 0000EC 0018+00 1/1 0/0 0/0 .text            __ct__19daObjGOMIKABE_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjGOMIKABE_HIO_c::daObjGOMIKABE_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__ct__19daObjGOMIKABE_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFC1C-80BFFC5C 000000 0040+00 7/7 0/0 0/0 .rodata          ccSphSrc$3769 */
SECTION_RODATA static u8 const ccSphSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BFFC1C, &ccSphSrc);

/* 80BFE244-80BFE2CC 000104 0088+00 1/1 0/0 0/0 .text            initCcCylinder__15daObjGOMIKABE_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/initCcCylinder__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFC5C-80BFFC60 000040 0004+00 0/1 0/0 0/0 .rodata          @3801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3801 = -200.0f;
COMPILER_STRIP_GATE(0x80BFFC5C, &lit_3801);
#pragma pop

/* 80BFFC60-80BFFC64 000044 0004+00 0/4 0/0 0/0 .rodata          @3802 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3802[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BFFC60, &lit_3802);
#pragma pop

/* 80BFFC64-80BFFC6C 000048 0004+04 0/1 0/0 0/0 .rodata          @3803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3803[1 + 1 /* padding */] = {
    200.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BFFC64, &lit_3803);
#pragma pop

/* 80BFFC6C-80BFFC74 000050 0008+00 1/3 0/0 0/0 .rodata          @3805 */
SECTION_RODATA static u8 const lit_3805[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BFFC6C, &lit_3805);

/* 80BFE2CC-80BFE3FC 00018C 0130+00 1/1 0/0 0/0 .text            SetCcCyl__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::SetCcCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/SetCcCyl__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFE3FC-80BFE438 0002BC 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__4cXyzFv.s"
}
#pragma pop

/* 80BFE438-80BFE458 0002F8 0020+00 1/0 0/0 0/0 .text daObjGOMIKABE_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGOMIKABE_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/daObjGOMIKABE_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BFE458-80BFE47C 000318 0024+00 1/0 0/0 0/0 .text daObjGOMIKABE_Delete__FP15daObjGOMIKABE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGOMIKABE_Delete(daObjGOMIKABE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/daObjGOMIKABE_Delete__FP15daObjGOMIKABE_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFC74-80BFFC78 000058 0004+00 1/2 0/0 0/0 .rodata          @3842 */
SECTION_RODATA static f32 const lit_3842 = 300.0f;
COMPILER_STRIP_GATE(0x80BFFC74, &lit_3842);

/* 80BFE47C-80BFE4C4 00033C 0048+00 1/1 0/0 0/0 .text            WaitAction__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::WaitAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/WaitAction__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFE4C4-80BFE52C 000384 0068+00 1/1 0/0 0/0 .text            BreakChk__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::BreakChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/BreakChk__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFC78-80BFFC7C 00005C 0004+00 0/1 0/0 0/0 .rodata          @3977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3977 = 50.0f;
COMPILER_STRIP_GATE(0x80BFFC78, &lit_3977);
#pragma pop

/* 80BFFC7C-80BFFC80 000060 0004+00 0/1 0/0 0/0 .rodata          @3978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3978 = 15.0f;
COMPILER_STRIP_GATE(0x80BFFC7C, &lit_3978);
#pragma pop

/* 80BFFC80-80BFFC84 000064 0004+00 0/1 0/0 0/0 .rodata          @3979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3979 = 10.0f;
COMPILER_STRIP_GATE(0x80BFFC80, &lit_3979);
#pragma pop

/* 80BFFC84-80BFFC88 000068 0004+00 0/3 0/0 0/0 .rodata          @3980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3980 = 1000.0f;
COMPILER_STRIP_GATE(0x80BFFC84, &lit_3980);
#pragma pop

/* 80BFFC88-80BFFC8C 00006C 0004+00 0/1 0/0 0/0 .rodata          @3981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3981 = 32000.0f;
COMPILER_STRIP_GATE(0x80BFFC88, &lit_3981);
#pragma pop

/* 80BFFC8C-80BFFC90 000070 0004+00 0/1 0/0 0/0 .rodata          @3982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3982 = -50.0f;
COMPILER_STRIP_GATE(0x80BFFC8C, &lit_3982);
#pragma pop

/* 80BFFC90-80BFFC94 000074 0004+00 0/1 0/0 0/0 .rodata          @3983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3983 = 5.0f;
COMPILER_STRIP_GATE(0x80BFFC90, &lit_3983);
#pragma pop

/* 80BFFC94-80BFFC98 000078 0004+00 0/2 0/0 0/0 .rodata          @3984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3984 = 1.0f;
COMPILER_STRIP_GATE(0x80BFFC94, &lit_3984);
#pragma pop

/* 80BFFC98-80BFFC9C 00007C 0004+00 0/1 0/0 0/0 .rodata          @3985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3985 = -1.0f;
COMPILER_STRIP_GATE(0x80BFFC98, &lit_3985);
#pragma pop

/* 80BFE52C-80BFEA24 0003EC 04F8+00 1/1 0/0 1/1 .text            BreakSet__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::BreakSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/BreakSet__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFEA24-80BFEA60 0008E4 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__5csXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFC9C-80BFFCA0 000080 0004+00 1/1 0/0 0/0 .rodata          @4011 */
SECTION_RODATA static f32 const lit_4011 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BFFC9C, &lit_4011);

/* 80BFFCA0-80BFFCA4 000084 0004+00 1/1 0/0 0/0 .rodata          @4012 */
SECTION_RODATA static f32 const lit_4012 = 0.5f;
COMPILER_STRIP_GATE(0x80BFFCA0, &lit_4012);

/* 80BFEA60-80BFEB90 000920 0130+00 1/1 0/0 0/0 .text
 * getWaterStream__15daObjGOMIKABE_cFR4cXyzR4cXyzf              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::getWaterStream(cXyz& param_0, cXyz& param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/getWaterStream__15daObjGOMIKABE_cFR4cXyzR4cXyzf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFCA4-80BFFCAC 000088 0008+00 0/0 0/0 0/0 .rodata          @4156 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4156[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BFFCA4, &lit_4156);
#pragma pop

/* 80BFFCAC-80BFFCB4 000090 0008+00 0/0 0/0 0/0 .rodata          @4157 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4157[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BFFCAC, &lit_4157);
#pragma pop

/* 80BFFCB4-80BFFCBC 000098 0008+00 0/0 0/0 0/0 .rodata          @4158 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4158[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BFFCB4, &lit_4158);
#pragma pop

/* 80BFFCBC-80BFFCC0 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4159 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4159 = 2.0f;
COMPILER_STRIP_GATE(0x80BFFCBC, &lit_4159);
#pragma pop

/* 80BFFCC0-80BFFCC4 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4160 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4160 = 3000.0f;
COMPILER_STRIP_GATE(0x80BFFCC0, &lit_4160);
#pragma pop

/* 80BFFCC4-80BFFCC8 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4278 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4278 = 100.0f;
COMPILER_STRIP_GATE(0x80BFFCC4, &lit_4278);
#pragma pop

/* 80BFEB90-80BFED54 000A50 01C4+00 1/1 0/0 0/0 .text            SpeedSet__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::SpeedSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/SpeedSet__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFED54-80BFED74 000C14 0020+00 1/1 0/0 0/0 .text            BreakAction__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::BreakAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/BreakAction__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFCC8-80BFFCCC 0000AC 0004+00 1/1 0/0 0/0 .rodata          @4308 */
SECTION_RODATA static f32 const lit_4308 = 7000.0f;
COMPILER_STRIP_GATE(0x80BFFCC8, &lit_4308);

/* 80BFED74-80BFEE24 000C34 00B0+00 1/1 0/0 0/0 .text            CheckCull__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::CheckCull() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/CheckCull__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFCCC-80BFFCD0 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4321 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4321 = 608.0f;
COMPILER_STRIP_GATE(0x80BFFCCC, &lit_4321);
#pragma pop

/* 80BFFCD0-80BFFCD4 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4322 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4322 = 448.0f;
COMPILER_STRIP_GATE(0x80BFFCD0, &lit_4322);
#pragma pop

/* 80BFEE24-80BFEEA8 000CE4 0084+00 1/1 0/0 0/0 .text checkViewArea__15daObjGOMIKABE_cF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::checkViewArea(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/checkViewArea__15daObjGOMIKABE_cF4cXyz.s"
}
#pragma pop

/* 80BFEEA8-80BFEF20 000D68 0078+00 1/1 0/0 0/0 .text            Action__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/Action__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFEF20-80BFEF84 000DE0 0064+00 1/1 0/0 0/0 .text            setBaseMtx__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/setBaseMtx__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFEF84-80BFF018 000E44 0094+00 2/2 0/0 0/0 .text            setBaseMtx2__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::setBaseMtx2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/setBaseMtx2__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFF018-80BFF044 000ED8 002C+00 1/0 0/0 0/0 .text daObjGOMIKABE_Draw__FP15daObjGOMIKABE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGOMIKABE_Draw(daObjGOMIKABE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/daObjGOMIKABE_Draw__FP15daObjGOMIKABE_c.s"
}
#pragma pop

/* 80BFF044-80BFF064 000F04 0020+00 2/1 0/0 0/0 .text daObjGOMIKABE_Execute__FP15daObjGOMIKABE_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGOMIKABE_Execute(daObjGOMIKABE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/daObjGOMIKABE_Execute__FP15daObjGOMIKABE_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFCF4-80BFFCF4 0000D8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BFFCFD = "M_Gomikabe.bmd";
SECTION_DEAD static char const* const stringBase_80BFFD0C = "M_Gomikabe_Hahen.bmd";
#pragma pop

/* 80BFF064-80BFF164 000F24 0100+00 1/0 0/0 0/0 .text            CreateHeap__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/CreateHeap__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFCD4-80BFFCD8 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4498 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4498 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80BFFCD4, &lit_4498);
#pragma pop

/* 80BFFCD8-80BFFCDC 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4499 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4499 = 30.0f;
COMPILER_STRIP_GATE(0x80BFFCD8, &lit_4499);
#pragma pop

/* 80BFFCDC-80BFFCE0 0000C0 0004+00 0/2 0/0 0/0 .rodata          @4500 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4500 = -1000.0f;
COMPILER_STRIP_GATE(0x80BFFCDC, &lit_4500);
#pragma pop

/* 80BFFCE0-80BFFCE4 0000C4 0004+00 0/2 0/0 0/0 .rodata          @4501 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4501 = -500.0f;
COMPILER_STRIP_GATE(0x80BFFCE0, &lit_4501);
#pragma pop

/* 80BFFCE4-80BFFCEC 0000C8 0008+00 0/1 0/0 0/0 .rodata          @4503 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4503[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BFFCE4, &lit_4503);
#pragma pop

/* 80BFFCF4-80BFFCF4 0000D8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BFFD21 = "M_Gomikabe.dzb";
#pragma pop

/* 80BFFE08-80BFFE0C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80BFFE08[4];

/* 80BFFE0C-80BFFE18 00000C 000C+00 1/1 0/0 0/0 .bss             @3761 */
static u8 lit_3761[12];

/* 80BFFE18-80BFFE20 000018 0008+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 80BFF164-80BFF5B4 001024 0450+00 1/1 0/0 0/0 .text            create__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/create__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFF5B4-80BFF680 001474 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80BFF680-80BFF704 001540 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80BFF704-80BFF74C 0015C4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BFF74C-80BFF794 00160C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BFF794-80BFF804 001654 0070+00 4/3 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BFF804-80BFF858 0016C4 0054+00 1/1 0/0 0/0 .text            __ct__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__ct__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BFF858-80BFF8C8 001718 0070+00 2/1 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80BFF8C8-80BFF8CC 001788 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 80BFF8CC-80BFF8D0 00178C 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80BFF8D0-80BFF8D8 001790 0008+00 1/0 0/0 0/0 .text daObjGOMIKABE_IsDelete__FP15daObjGOMIKABE_c
 */
static bool daObjGOMIKABE_IsDelete(daObjGOMIKABE_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80BFFCEC-80BFFCF0 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4607 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4607 = 500.0f;
COMPILER_STRIP_GATE(0x80BFFCEC, &lit_4607);
#pragma pop

/* 80BFF8D8-80BFF938 001798 0060+00 1/0 0/0 0/0 .text            Create__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/func_80BFF8D8.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BFFCF0-80BFFCF4 0000D4 0004+00 1/1 0/0 0/0 .rodata          @4620 */
SECTION_RODATA static f32 const lit_4620 = -5.0f;
COMPILER_STRIP_GATE(0x80BFFCF0, &lit_4620);

/* 80BFF938-80BFFA00 0017F8 00C8+00 1/0 0/0 0/0 .text Execute__15daObjGOMIKABE_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/Execute__15daObjGOMIKABE_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BFFA00-80BFFB1C 0018C0 011C+00 1/0 0/0 0/0 .text            Draw__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/Draw__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFFB1C-80BFFB74 0019DC 0058+00 1/0 0/0 0/0 .text            Delete__15daObjGOMIKABE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGOMIKABE_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/Delete__15daObjGOMIKABE_cFv.s"
}
#pragma pop

/* 80BFFB74-80BFFBBC 001A34 0048+00 2/1 0/0 0/0 .text            __dt__19daObjGOMIKABE_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjGOMIKABE_HIO_c::~daObjGOMIKABE_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__dt__19daObjGOMIKABE_HIO_cFv.s"
}
#pragma pop

/* 80BFFBBC-80BFFBF8 001A7C 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_gomikabe_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_gomikabe_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/__sinit_d_a_obj_gomikabe_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80BFFBBC, __sinit_d_a_obj_gomikabe_cpp);
#pragma pop

/* 80BFFBF8-80BFFC00 001AB8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BFFBF8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/func_80BFFBF8.s"
}
#pragma pop

/* 80BFFC00-80BFFC08 001AC0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BFFC00() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe/func_80BFFC00.s"
}
#pragma pop

/* 80BFFCF4-80BFFCF4 0000D8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
