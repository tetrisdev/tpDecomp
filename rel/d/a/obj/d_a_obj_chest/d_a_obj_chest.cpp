//
// Generated By: dol2asm
// Translation Unit: d_a_obj_chest
//

#include "rel/d/a/obj/d_a_obj_chest/d_a_obj_chest.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {
    /* 8026745C */ void operator+=(csXyz&);
};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE38 */ void scaleM(f32, f32, f32);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);

    static f32 mGroundY;
};

struct daObjChest_c {
    /* 80BC8EF8 */ void initBaseMtx();
    /* 80BC8F34 */ void setBaseMtx();
    /* 80BC9088 */ void Create();
    /* 80BC9240 */ void CreateHeap();
    /* 80BC92B0 */ void create();
    /* 80BC970C */ void Execute(f32 (**)[3][4]);
    /* 80BC9764 */ void action();
    /* 80BC9808 */ void actionWait();
    /* 80BC9BF0 */ void actionMove();
    /* 80BC9DFC */ void actionEnd();
    /* 80BC9E00 */ void Draw();
    /* 80BC9EA4 */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
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
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80BC95D0 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
    /* 80BC93F0 */ ~dCcD_Cyl();
    /* 80BC94BC */ dCcD_Cyl();
};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BC969C */ ~dBgS_ObjAcch();
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

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80BC962C */ ~dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
};

struct cM3dGCyl {
    /* 80BC9540 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80BC9588 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 80BC9F64 */ ~cCcD_GStts();
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

extern "C" void initBaseMtx__12daObjChest_cFv();
extern "C" void setBaseMtx__12daObjChest_cFv();
extern "C" void Create__12daObjChest_cFv();
extern "C" void CreateHeap__12daObjChest_cFv();
extern "C" void create__12daObjChest_cFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void Execute__12daObjChest_cFPPA3_A4_f();
extern "C" void action__12daObjChest_cFv();
extern "C" void actionWait__12daObjChest_cFv();
extern "C" void actionMove__12daObjChest_cFv();
extern "C" void actionEnd__12daObjChest_cFv();
extern "C" void Draw__12daObjChest_cFv();
extern "C" void Delete__12daObjChest_cFv();
extern "C" static void daObjChest_Draw__FP12daObjChest_c();
extern "C" static void daObjChest_Execute__FP12daObjChest_c();
extern "C" static void daObjChest_Delete__FP12daObjChest_c();
extern "C" static void daObjChest_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80BC9FAC(void* _this, u8*);
extern "C" void func_80BC9FC8(void* _this, u16*);
extern "C" static void func_80BC9FE4();
extern "C" static void func_80BC9FEC();
extern "C" extern char const* const d_a_obj_chest__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
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
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECScale();
extern "C" void PSVECSquareDistance();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 __float_nan;
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80BCA200[4];

//
// Declarations:
//

/* 80BC8EF8-80BC8F34 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/initBaseMtx__12daObjChest_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC9FFC-80BCA040 000000 0044+00 3/3 0/0 0/0 .rodata          l_cyl_src */
SECTION_RODATA static u8 const l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x43, 0x82, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BC9FFC, &l_cyl_src);

/* 80BCA040-80BCA044 000044 0004+00 1/4 0/0 0/0 .rodata          @3679 */
SECTION_RODATA static f32 const lit_3679 = 1.0f;
COMPILER_STRIP_GATE(0x80BCA040, &lit_3679);

/* 80BCA044-80BCA04C 000048 0008+00 1/2 0/0 0/0 .rodata          @3681 */
SECTION_RODATA static u8 const lit_3681[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BCA044, &lit_3681);

/* 80BC8F34-80BC9088 0000B4 0154+00 2/2 0/0 0/0 .text            setBaseMtx__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/setBaseMtx__12daObjChest_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCA04C-80BCA050 000050 0004+00 0/1 0/0 0/0 .rodata          @3730 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3730 = 5.0f;
COMPILER_STRIP_GATE(0x80BCA04C, &lit_3730);
#pragma pop

/* 80BCA050-80BCA054 000054 0004+00 0/3 0/0 0/0 .rodata          @3731 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3731[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BCA050, &lit_3731);
#pragma pop

/* 80BCA054-80BCA058 000058 0004+00 0/2 0/0 0/0 .rodata          @3732 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3732 = 150.0f;
COMPILER_STRIP_GATE(0x80BCA054, &lit_3732);
#pragma pop

/* 80BCA058-80BCA05C 00005C 0004+00 0/1 0/0 0/0 .rodata          @3733 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3733 = 30.0f;
COMPILER_STRIP_GATE(0x80BCA058, &lit_3733);
#pragma pop

/* 80BC9088-80BC9240 000208 01B8+00 1/0 0/0 0/0 .text            Create__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/Create__12daObjChest_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCA0B0-80BCA0B0 0000B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BCA0B0 = "H_Tansu";
#pragma pop

/* 80BCA0B8-80BCA0C4 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BCA0C4-80BCA0D8 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BCA0D8-80BCA0DC -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_chest__stringBase0;

/* 80BC9240-80BC92B0 0003C0 0070+00 1/0 0/0 0/0 .text            CreateHeap__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/CreateHeap__12daObjChest_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCA0DC-80BCA0E8 -00001 000C+00 0/1 0/0 0/0 .data            @3876 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3876[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__12daObjChest_cFv,
};
#pragma pop

/* 80BCA0E8-80BCA0F4 -00001 000C+00 0/1 0/0 0/0 .data            @3877 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3877[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionMove__12daObjChest_cFv,
};
#pragma pop

/* 80BCA0F4-80BCA100 -00001 000C+00 0/1 0/0 0/0 .data            @3878 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3878[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEnd__12daObjChest_cFv,
};
#pragma pop

/* 80BCA100-80BCA124 000048 0024+00 0/1 0/0 0/0 .data            l_func$3875 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BCA124-80BCA144 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjChest_Method */
SECTION_DATA static void* l_daObjChest_Method[8] = {
    (void*)daObjChest_Create__FP10fopAc_ac_c,
    (void*)daObjChest_Delete__FP12daObjChest_c,
    (void*)daObjChest_Execute__FP12daObjChest_c,
    (void*)NULL,
    (void*)daObjChest_Draw__FP12daObjChest_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BCA144-80BCA174 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Chest */
SECTION_DATA extern void* g_profile_Obj_Chest[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00830000, (void*)&g_fpcLf_Method,
    (void*)0x00000AA4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x025B0000, (void*)&l_daObjChest_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80BCA174-80BCA180 0000BC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80BCA180-80BCA18C 0000C8 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BCA18C-80BCA198 0000D4 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BCA198-80BCA1A4 0000E0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BCA1A4-80BCA1B0 0000EC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BCA1B0-80BCA1D4 0000F8 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BC9FEC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BC9FE4,
};

/* 80BCA1D4-80BCA1FC 00011C 0028+00 1/1 0/0 0/0 .data            __vt__12daObjChest_c */
SECTION_DATA extern void* __vt__12daObjChest_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daObjChest_cFv,
    (void*)Create__12daObjChest_cFv,
    (void*)Execute__12daObjChest_cFPPA3_A4_f,
    (void*)Draw__12daObjChest_cFv,
    (void*)Delete__12daObjChest_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BC92B0-80BC93F0 000430 0140+00 1/1 0/0 0/0 .text            create__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/func_80BC92B0.s"
}
#pragma pop

/* 80BC93F0-80BC94BC 000570 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::~dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__dt__8dCcD_CylFv.s"
}
#pragma pop

/* 80BC94BC-80BC9540 00063C 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__ct__8dCcD_CylFv.s"
}
#pragma pop

/* 80BC9540-80BC9588 0006C0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BC9588-80BC95D0 000708 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BC95D0-80BC962C 000750 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80BC962C-80BC969C 0007AC 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80BC969C-80BC970C 00081C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BC970C-80BC9764 00088C 0058+00 1/0 0/0 0/0 .text            Execute__12daObjChest_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/Execute__12daObjChest_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BC9764-80BC9808 0008E4 00A4+00 1/1 0/0 0/0 .text            action__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/action__12daObjChest_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCA05C-80BCA060 000060 0004+00 0/1 0/0 0/0 .rodata          @4015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4015 = 70.0f;
COMPILER_STRIP_GATE(0x80BCA05C, &lit_4015);
#pragma pop

/* 80BCA060-80BCA064 000064 0004+00 0/1 0/0 0/0 .rodata          @4016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4016 = 90.0f;
COMPILER_STRIP_GATE(0x80BCA060, &lit_4016);
#pragma pop

/* 80BCA064-80BCA068 000068 0004+00 0/1 0/0 0/0 .rodata          @4017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4017 = 450.0f;
COMPILER_STRIP_GATE(0x80BCA064, &lit_4017);
#pragma pop

/* 80BCA068-80BCA06C 00006C 0004+00 0/1 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4018 = 100.0f;
COMPILER_STRIP_GATE(0x80BCA068, &lit_4018);
#pragma pop

/* 80BCA06C-80BCA070 000070 0004+00 0/1 0/0 0/0 .rodata          @4019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4019 = 0.5f;
COMPILER_STRIP_GATE(0x80BCA06C, &lit_4019);
#pragma pop

/* 80BCA070-80BCA074 000074 0004+00 0/1 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4020 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BCA070, &lit_4020);
#pragma pop

/* 80BCA074-80BCA078 000078 0004+00 0/2 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4021 = -1.0f;
COMPILER_STRIP_GATE(0x80BCA074, &lit_4021);
#pragma pop

/* 80BCA078-80BCA07C 00007C 0004+00 0/1 0/0 0/0 .rodata          @4022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4022 = 50.0f;
COMPILER_STRIP_GATE(0x80BCA078, &lit_4022);
#pragma pop

/* 80BCA07C-80BCA084 000080 0004+04 0/1 0/0 0/0 .rodata          @4023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4023[1 + 1 /* padding */] = {
    -50.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BCA07C, &lit_4023);
#pragma pop

/* 80BCA084-80BCA08C 000088 0008+00 0/1 0/0 0/0 .rodata          @4024 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4024[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BCA084, &lit_4024);
#pragma pop

/* 80BCA08C-80BCA094 000090 0008+00 0/1 0/0 0/0 .rodata          @4025 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4025[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BCA08C, &lit_4025);
#pragma pop

/* 80BCA094-80BCA09C 000098 0008+00 0/1 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4026[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BCA094, &lit_4026);
#pragma pop

/* 80BCA09C-80BCA0A0 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4027 = 260.0f;
COMPILER_STRIP_GATE(0x80BCA09C, &lit_4027);
#pragma pop

/* 80BC9808-80BC9BF0 000988 03E8+00 1/0 0/0 0/0 .text            actionWait__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/actionWait__12daObjChest_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCA0A0-80BCA0A4 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4070 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4070 = 16384.0f;
COMPILER_STRIP_GATE(0x80BCA0A0, &lit_4070);
#pragma pop

/* 80BCA0A4-80BCA0A8 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4071 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4071 = -4.0f;
COMPILER_STRIP_GATE(0x80BCA0A4, &lit_4071);
#pragma pop

/* 80BCA0A8-80BCA0AC 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4072 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4072 = 2.5f;
COMPILER_STRIP_GATE(0x80BCA0A8, &lit_4072);
#pragma pop

/* 80BCA0AC-80BCA0B0 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4073 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4073 = 5.0f / 3.0f;
COMPILER_STRIP_GATE(0x80BCA0AC, &lit_4073);
#pragma pop

/* 80BC9BF0-80BC9DFC 000D70 020C+00 1/0 0/0 0/0 .text            actionMove__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::actionMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/actionMove__12daObjChest_cFv.s"
}
#pragma pop

/* 80BC9DFC-80BC9E00 000F7C 0004+00 1/0 0/0 0/0 .text            actionEnd__12daObjChest_cFv */
void daObjChest_c::actionEnd() {
    /* empty function */
}

/* 80BC9E00-80BC9EA4 000F80 00A4+00 1/0 0/0 0/0 .text            Draw__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/Draw__12daObjChest_cFv.s"
}
#pragma pop

/* 80BC9EA4-80BC9ED8 001024 0034+00 1/0 0/0 0/0 .text            Delete__12daObjChest_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChest_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/Delete__12daObjChest_cFv.s"
}
#pragma pop

/* 80BC9ED8-80BC9F04 001058 002C+00 1/0 0/0 0/0 .text            daObjChest_Draw__FP12daObjChest_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjChest_Draw(daObjChest_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/daObjChest_Draw__FP12daObjChest_c.s"
}
#pragma pop

/* 80BC9F04-80BC9F24 001084 0020+00 1/0 0/0 0/0 .text daObjChest_Execute__FP12daObjChest_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjChest_Execute(daObjChest_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/daObjChest_Execute__FP12daObjChest_c.s"
}
#pragma pop

/* 80BC9F24-80BC9F44 0010A4 0020+00 1/0 0/0 0/0 .text            daObjChest_Delete__FP12daObjChest_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjChest_Delete(daObjChest_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/daObjChest_Delete__FP12daObjChest_c.s"
}
#pragma pop

/* 80BC9F44-80BC9F64 0010C4 0020+00 1/0 0/0 0/0 .text            daObjChest_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjChest_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/daObjChest_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BC9F64-80BC9FAC 0010E4 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80BC9FAC-80BC9FC8 00112C 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80BC9FAC(void* _this, u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/func_80BC9FAC.s"
}
#pragma pop

/* 80BC9FC8-80BC9FE4 001148 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Us>__FPUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80BC9FC8(void* _this, u16* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/func_80BC9FC8.s"
}
#pragma pop

/* 80BC9FE4-80BC9FEC 001164 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BC9FE4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/func_80BC9FE4.s"
}
#pragma pop

/* 80BC9FEC-80BC9FF4 00116C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BC9FEC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chest/d_a_obj_chest/func_80BC9FEC.s"
}
#pragma pop

/* 80BCA0B0-80BCA0B0 0000B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
