//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ita
//

#include "rel/d/a/obj/d_a_obj_ita/d_a_obj_ita.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {};

struct fopAcM_wt_c {
    /* 8001DD84 */ void waterCheck(cXyz const*);

    static f32 mWaterY[1 + 1 /* padding */];
};

struct daObj_ITA_HIO_c {
    /* 80C2836C */ daObj_ITA_HIO_c();
    /* 80C29184 */ ~daObj_ITA_HIO_c();
};

struct daObjIta_c {
    /* 80C283AC */ void Search_Ymb();
    /* 80C28674 */ void Check_RideOn();
    /* 80C28788 */ void initBaseMtx();
    /* 80C287B4 */ void setBaseMtx();
    /* 80C28928 */ void create();
    /* 80C28BB0 */ void CreateHeap();
    /* 80C28C28 */ void Create();
    /* 80C28C70 */ void Execute(f32 (**)[3][4]);
    /* 80C290AC */ void Draw();
    /* 80C29150 */ void Delete();
};

struct daE_YMB_c {
    /* 808172F8 */ void setHitBoardSe();
};

struct dVibration_c {
    /* 8006FC0C */ void StartQuake(u8 const*, int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
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

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80C28B40 */ ~dBgS_ObjAcch();
};

struct cBgS_PolyInfo {};

struct csXyz {};

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

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JMath {
    template <typename A1, typename B1>
    struct TSinCosTable {};
    /* TSinCosTable<13, f32> */
    struct TSinCosTable__template0 {
        /* 80C291CC */ void func_80C291CC(void* _this, s16) /* const */;
    };

    static u8 sincosTable_[65536];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__15daObj_ITA_HIO_cFv();
extern "C" void Search_Ymb__10daObjIta_cFv();
extern "C" void Check_RideOn__10daObjIta_cFv();
extern "C" void initBaseMtx__10daObjIta_cFv();
extern "C" void setBaseMtx__10daObjIta_cFv();
extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void daObjIta_Draw__FP10daObjIta_c();
extern "C" static void daObjIta_Execute__FP10daObjIta_c();
extern "C" static bool daObjIta_IsDelete__FP10daObjIta_c();
extern "C" static void daObjIta_Delete__FP10daObjIta_c();
extern "C" static void daObjIta_Create__FP10fopAc_ac_c();
extern "C" void create__10daObjIta_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void CreateHeap__10daObjIta_cFv();
extern "C" void Create__10daObjIta_cFv();
extern "C" void Execute__10daObjIta_cFPPA3_A4_f();
extern "C" void Draw__10daObjIta_cFv();
extern "C" void Delete__10daObjIta_cFv();
extern "C" void __dt__15daObj_ITA_HIO_cFv();
extern "C" void func_80C291CC(void* _this, s16);
extern "C" void __sinit_d_a_obj_ita_cpp();
extern "C" static void func_80C29214();
extern "C" static void func_80C2921C();
extern "C" extern char const* const d_a_obj_ita__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void StartQuake__12dVibration_cFPCUcii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
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
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void setHitBoardSe__9daE_YMB_cFv();
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C29238-80C2923C 000000 0004+00 5/5 0/0 0/0 .rodata          @3649 */
SECTION_RODATA static f32 const lit_3649 = 600.0f;
COMPILER_STRIP_GATE(0x80C29238, &lit_3649);

/* 80C2923C-80C29240 000004 0004+00 0/1 0/0 0/0 .rodata          @3650 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3650 = -16.0f;
COMPILER_STRIP_GATE(0x80C2923C, &lit_3650);
#pragma pop

/* 80C29240-80C29244 000008 0004+00 0/1 0/0 0/0 .rodata          @3651 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3651 = 44.0f;
COMPILER_STRIP_GATE(0x80C29240, &lit_3651);
#pragma pop

/* 80C29244-80C29248 00000C 0004+00 0/1 0/0 0/0 .rodata          @3652 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3652 = -9.0f;
COMPILER_STRIP_GATE(0x80C29244, &lit_3652);
#pragma pop

/* 80C292E8-80C292E8 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C292E8 = "M_Ita";
#pragma pop

/* 80C29318-80C2931C -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_ita__stringBase0;

/* 80C2931C-80C2933C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjIta_Method */
SECTION_DATA static void* l_daObjIta_Method[8] = {
    (void*)daObjIta_Create__FP10fopAc_ac_c,
    (void*)daObjIta_Delete__FP10daObjIta_c,
    (void*)daObjIta_Execute__FP10daObjIta_c,
    (void*)daObjIta_IsDelete__FP10daObjIta_c,
    (void*)daObjIta_Draw__FP10daObjIta_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C2933C-80C2936C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_ITA */
SECTION_DATA extern void* g_profile_Obj_ITA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00770000, (void*)&g_fpcLf_Method,
    (void*)0x000008DC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01DA0000, (void*)&l_daObjIta_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C2936C-80C29390 000054 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C2921C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C29214,
};

/* 80C29390-80C293B8 000078 0028+00 1/1 0/0 0/0 .data            __vt__10daObjIta_c */
SECTION_DATA extern void* __vt__10daObjIta_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daObjIta_cFv,
    (void*)Create__10daObjIta_cFv,
    (void*)Execute__10daObjIta_cFPPA3_A4_f,
    (void*)Draw__10daObjIta_cFv,
    (void*)Delete__10daObjIta_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C293B8-80C293C4 0000A0 000C+00 2/2 0/0 0/0 .data            __vt__15daObj_ITA_HIO_c */
SECTION_DATA extern void* __vt__15daObj_ITA_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daObj_ITA_HIO_cFv,
};

/* 80C2836C-80C283AC 0000EC 0040+00 1/1 0/0 0/0 .text            __ct__15daObj_ITA_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_ITA_HIO_c::daObj_ITA_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/__ct__15daObj_ITA_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C29248-80C29250 000010 0004+04 1/4 0/0 0/0 .rodata          @3674 */
SECTION_RODATA static u8 const lit_3674[4 + 4 /* padding */] = {
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
COMPILER_STRIP_GATE(0x80C29248, &lit_3674);

/* 80C29250-80C29258 000018 0008+00 0/1 0/0 0/0 .rodata          @3676 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3676[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C29250, &lit_3676);
#pragma pop

/* 80C29258-80C29260 000020 0006+02 0/1 0/0 0/0 .rodata          @3694 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3694[6 + 2 /* padding */] = {
    0x00,
    0x20,
    0x01,
    0x00,
    0x10,
    0x00,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C29258, &lit_3694);
#pragma pop

/* 80C29260-80C29264 000028 0004+00 0/2 0/0 0/0 .rodata          @3743 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3743 = 750.0f;
COMPILER_STRIP_GATE(0x80C29260, &lit_3743);
#pragma pop

/* 80C29264-80C29268 00002C 0004+00 0/2 0/0 0/0 .rodata          @3744 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3744 = -750.0f;
COMPILER_STRIP_GATE(0x80C29264, &lit_3744);
#pragma pop

/* 80C29268-80C2926C 000030 0004+00 0/2 0/0 0/0 .rodata          @3745 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3745 = 450.0f;
COMPILER_STRIP_GATE(0x80C29268, &lit_3745);
#pragma pop

/* 80C2926C-80C29270 000034 0004+00 0/2 0/0 0/0 .rodata          @3746 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3746 = -450.0f;
COMPILER_STRIP_GATE(0x80C2926C, &lit_3746);
#pragma pop

/* 80C29270-80C29274 000038 0004+00 0/1 0/0 0/0 .rodata          @3747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3747 = 256.0f;
COMPILER_STRIP_GATE(0x80C29270, &lit_3747);
#pragma pop

/* 80C29274-80C29278 00003C 0004+00 0/1 0/0 0/0 .rodata          @3748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3748 = 16.0f;
COMPILER_STRIP_GATE(0x80C29274, &lit_3748);
#pragma pop

/* 80C29278-80C2927C 000040 0004+00 0/1 0/0 0/0 .rodata          @3749 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3749 = 31.0f;
COMPILER_STRIP_GATE(0x80C29278, &lit_3749);
#pragma pop

/* 80C2927C-80C29280 000044 0004+00 0/1 0/0 0/0 .rodata          @3750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3750 = -5.0f;
COMPILER_STRIP_GATE(0x80C2927C, &lit_3750);
#pragma pop

/* 80C29280-80C29284 000048 0004+00 0/2 0/0 0/0 .rodata          @3751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3751 = 1.0f;
COMPILER_STRIP_GATE(0x80C29280, &lit_3751);
#pragma pop

/* 80C29284-80C29288 00004C 0004+00 0/3 0/0 0/0 .rodata          @3752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3752 = 300.0f;
COMPILER_STRIP_GATE(0x80C29284, &lit_3752);
#pragma pop

/* 80C29288-80C2928C 000050 0004+00 0/1 0/0 0/0 .rodata          @3753 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3753 = 1900.0f;
COMPILER_STRIP_GATE(0x80C29288, &lit_3753);
#pragma pop

/* 80C2928C-80C29290 000054 0004+00 0/2 0/0 0/0 .rodata          @3754 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3754 = -1.0f;
COMPILER_STRIP_GATE(0x80C2928C, &lit_3754);
#pragma pop

/* 80C29290-80C29294 000058 0004+00 0/1 0/0 0/0 .rodata          @3755 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3755 = -100.0f;
COMPILER_STRIP_GATE(0x80C29290, &lit_3755);
#pragma pop

/* 80C29294-80C29298 00005C 0004+00 0/1 0/0 0/0 .rodata          @3756 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3756 = 0.5f;
COMPILER_STRIP_GATE(0x80C29294, &lit_3756);
#pragma pop

/* 80C29298-80C2929C 000060 0004+00 0/3 0/0 0/0 .rodata          @3757 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3757 = 100.0f;
COMPILER_STRIP_GATE(0x80C29298, &lit_3757);
#pragma pop

/* 80C293D0-80C293DC 000008 000C+00 1/1 0/0 0/0 .bss             @3644 */
static u8 lit_3644[12];

/* 80C293DC-80C293F4 000014 0018+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[24];

/* 80C293F4-80C293F8 00002C 0004+00 2/2 0/0 0/0 .bss             e_ymb__25@unnamed@d_a_obj_ita_cpp@
 */
static u8 data_80C293F4[4];

/* 80C293F8-80C293FC 000030 0004+00 2/2 0/0 0/0 .bss e_ymb_Pos__25@unnamed@d_a_obj_ita_cpp@ */
static u8 data_80C293F8[4];

/* 80C283AC-80C28674 00012C 02C8+00 1/1 0/0 0/0 .text            Search_Ymb__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::Search_Ymb() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/Search_Ymb__10daObjIta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C2929C-80C292A0 000064 0004+00 0/1 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3793 = 1000.0f;
COMPILER_STRIP_GATE(0x80C2929C, &lit_3793);
#pragma pop

/* 80C292A0-80C292A4 000068 0004+00 0/1 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3794 = -1000.0f;
COMPILER_STRIP_GATE(0x80C292A0, &lit_3794);
#pragma pop

/* 80C292A4-80C292A8 00006C 0004+00 0/1 0/0 0/0 .rodata          @3795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3795 = 700.0f;
COMPILER_STRIP_GATE(0x80C292A4, &lit_3795);
#pragma pop

/* 80C292A8-80C292AC 000070 0004+00 0/1 0/0 0/0 .rodata          @3796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3796 = -700.0f;
COMPILER_STRIP_GATE(0x80C292A8, &lit_3796);
#pragma pop

/* 80C28674-80C28788 0003F4 0114+00 1/1 0/0 0/0 .text            Check_RideOn__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::Check_RideOn() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/Check_RideOn__10daObjIta_cFv.s"
}
#pragma pop

/* 80C28788-80C287B4 000508 002C+00 1/1 0/0 0/0 .text            initBaseMtx__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/initBaseMtx__10daObjIta_cFv.s"
}
#pragma pop

/* 80C287B4-80C28838 000534 0084+00 2/2 0/0 0/0 .text            setBaseMtx__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/setBaseMtx__10daObjIta_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C292AC-80C292B0 000074 0004+00 1/1 0/0 0/0 .rodata          @3847 */
SECTION_RODATA static f32 const lit_3847 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C292AC, &lit_3847);

/* 80C28838-80C28890 0005B8 0058+00 1/1 0/0 0/0 .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80C28890-80C288BC 000610 002C+00 1/0 0/0 0/0 .text            daObjIta_Draw__FP10daObjIta_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIta_Draw(daObjIta_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/daObjIta_Draw__FP10daObjIta_c.s"
}
#pragma pop

/* 80C288BC-80C288DC 00063C 0020+00 1/0 0/0 0/0 .text            daObjIta_Execute__FP10daObjIta_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIta_Execute(daObjIta_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/daObjIta_Execute__FP10daObjIta_c.s"
}
#pragma pop

/* 80C288DC-80C288E4 00065C 0008+00 1/0 0/0 0/0 .text            daObjIta_IsDelete__FP10daObjIta_c
 */
static bool daObjIta_IsDelete(daObjIta_c* param_0) {
    return true;
}

/* 80C288E4-80C28908 000664 0024+00 1/0 0/0 0/0 .text            daObjIta_Delete__FP10daObjIta_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIta_Delete(daObjIta_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/daObjIta_Delete__FP10daObjIta_c.s"
}
#pragma pop

/* 80C28908-80C28928 000688 0020+00 1/0 0/0 0/0 .text            daObjIta_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjIta_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/daObjIta_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C292B0-80C292B4 000078 0004+00 0/1 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3933 = 200.0f;
COMPILER_STRIP_GATE(0x80C292B0, &lit_3933);
#pragma pop

/* 80C292B4-80C292B8 00007C 0004+00 0/1 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3934 = -50.0f;
COMPILER_STRIP_GATE(0x80C292B4, &lit_3934);
#pragma pop

/* 80C292B8-80C292BC 000080 0004+00 0/1 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = 50.0f;
COMPILER_STRIP_GATE(0x80C292B8, &lit_3935);
#pragma pop

/* 80C292E8-80C292E8 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C292EE = "M_FloatingDust00.dzb";
#pragma pop

/* 80C28928-80C28B40 0006A8 0218+00 1/1 0/0 0/0 .text            create__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/create__10daObjIta_cFv.s"
}
#pragma pop

/* 80C28B40-80C28BB0 0008C0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C292E8-80C292E8 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C29303 = "M_FloatingDust00.bmd";
#pragma pop

/* 80C28BB0-80C28C28 000930 0078+00 1/0 0/0 0/0 .text            CreateHeap__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/CreateHeap__10daObjIta_cFv.s"
}
#pragma pop

/* 80C28C28-80C28C70 0009A8 0048+00 1/0 0/0 0/0 .text            Create__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/func_80C28C28.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C292BC-80C292C0 000084 0004+00 0/1 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4013 = 768.0f;
COMPILER_STRIP_GATE(0x80C292BC, &lit_4013);
#pragma pop

/* 80C292C0-80C292C4 000088 0004+00 0/1 0/0 0/0 .rodata          @4014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4014 = 2.0f;
COMPILER_STRIP_GATE(0x80C292C0, &lit_4014);
#pragma pop

/* 80C292C4-80C292C8 00008C 0004+00 0/1 0/0 0/0 .rodata          @4015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4015 = 40.0f;
COMPILER_STRIP_GATE(0x80C292C4, &lit_4015);
#pragma pop

/* 80C292C8-80C292CC 000090 0004+00 0/1 0/0 0/0 .rodata          @4016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4016 = 60.0f;
COMPILER_STRIP_GATE(0x80C292C8, &lit_4016);
#pragma pop

/* 80C292CC-80C292D0 000094 0004+00 0/1 0/0 0/0 .rodata          @4017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4017 = 5.0f;
COMPILER_STRIP_GATE(0x80C292CC, &lit_4017);
#pragma pop

/* 80C292D0-80C292D4 000098 0004+00 0/1 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4018 = 20.0f;
COMPILER_STRIP_GATE(0x80C292D0, &lit_4018);
#pragma pop

/* 80C292D4-80C292D8 00009C 0004+00 0/1 0/0 0/0 .rodata          @4019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4019 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C292D4, &lit_4019);
#pragma pop

/* 80C292D8-80C292DC 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4020 = 15.0f;
COMPILER_STRIP_GATE(0x80C292D8, &lit_4020);
#pragma pop

/* 80C292DC-80C292E0 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4021 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80C292DC, &lit_4021);
#pragma pop

/* 80C292E0-80C292E4 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4022 = 10.0f;
COMPILER_STRIP_GATE(0x80C292E0, &lit_4022);
#pragma pop

/* 80C292E4-80C292E8 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4023 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80C292E4, &lit_4023);
#pragma pop

/* 80C28C70-80C290AC 0009F0 043C+00 1/0 0/0 0/0 .text            Execute__10daObjIta_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/Execute__10daObjIta_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C290AC-80C29150 000E2C 00A4+00 1/0 0/0 0/0 .text            Draw__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/Draw__10daObjIta_cFv.s"
}
#pragma pop

/* 80C29150-80C29184 000ED0 0034+00 1/0 0/0 0/0 .text            Delete__10daObjIta_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjIta_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/Delete__10daObjIta_cFv.s"
}
#pragma pop

/* 80C29184-80C291CC 000F04 0048+00 2/1 0/0 0/0 .text            __dt__15daObj_ITA_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_ITA_HIO_c::~daObj_ITA_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/__dt__15daObj_ITA_HIO_cFv.s"
}
#pragma pop

/* 80C291CC-80C291D8 000F4C 000C+00 1/1 0/0 0/0 .text sinShort__Q25JMath18TSinCosTable<13,f>CFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80C291CC(void* _this, s16 param_0) /* const */ {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/func_80C291CC.s"
}
#pragma pop

/* 80C291D8-80C29214 000F58 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_ita_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_ita_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/__sinit_d_a_obj_ita_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C291D8, __sinit_d_a_obj_ita_cpp);
#pragma pop

/* 80C29214-80C2921C 000F94 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C29214() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/func_80C29214.s"
}
#pragma pop

/* 80C2921C-80C29224 000F9C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C2921C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ita/d_a_obj_ita/func_80C2921C.s"
}
#pragma pop

/* 80C292E8-80C292E8 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
