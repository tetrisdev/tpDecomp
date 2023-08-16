//
// Generated By: dol2asm
// Translation Unit: d_a_obj_bbox
//

#include "rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox.h"
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

struct daObjBBox_c {
    /* 80BACD38 */ void initBaseMtx();
    /* 80BACD74 */ void setBaseMtx();
    /* 80BACDD8 */ void Create();
    /* 80BACE50 */ void CreateHeap();
    /* 80BACEC0 */ void create1st();
    /* 80BAD0C0 */ void Execute(f32 (**)[3][4]);
    /* 80BAD234 */ void Draw();
    /* 80BAD2D8 */ void Delete();
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

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
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
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW {};

struct cBgS_PolyInfo {};

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

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 80BAD030 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80BAD078 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
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

extern "C" void initBaseMtx__11daObjBBox_cFv();
extern "C" void setBaseMtx__11daObjBBox_cFv();
extern "C" void Create__11daObjBBox_cFv();
extern "C" void CreateHeap__11daObjBBox_cFv();
extern "C" void create1st__11daObjBBox_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void Execute__11daObjBBox_cFPPA3_A4_f();
extern "C" void Draw__11daObjBBox_cFv();
extern "C" void Delete__11daObjBBox_cFv();
extern "C" static void daObjBBox_create1st__FP11daObjBBox_c();
extern "C" static void daObjBBox_MoveBGDelete__FP11daObjBBox_c();
extern "C" static void daObjBBox_MoveBGExecute__FP11daObjBBox_c();
extern "C" static void daObjBBox_MoveBGDraw__FP11daObjBBox_c();
extern "C" extern char const* const d_a_obj_bbox__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
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
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_25();
extern "C" void _restgpr_25();
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
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80BACD38-80BACD74 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjBBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/initBaseMtx__11daObjBBox_cFv.s"
}
#pragma pop

/* 80BACD74-80BACDD8 0000B4 0064+00 2/2 0/0 0/0 .text            setBaseMtx__11daObjBBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/setBaseMtx__11daObjBBox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BAD474-80BAD4B8 000000 0044+00 2/2 0/0 0/0 .rodata          l_cyl_src */
SECTION_RODATA static u8 const l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x78,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xB4, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BAD474, &l_cyl_src);

/* 80BACDD8-80BACE50 000118 0078+00 1/0 0/0 0/0 .text            Create__11daObjBBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/Create__11daObjBBox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BAD4CC-80BAD4CC 000058 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BAD4CC = "M_BBox";
#pragma pop

/* 80BAD4D4-80BAD4D8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_bbox__stringBase0;

/* 80BACE50-80BACEC0 000190 0070+00 1/0 0/0 0/0 .text            CreateHeap__11daObjBBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/CreateHeap__11daObjBBox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BAD4D8-80BAD4F8 -00001 0020+00 1/0 0/0 0/0 .data            daObjBBox_METHODS */
SECTION_DATA static void* daObjBBox_METHODS[8] = {
    (void*)daObjBBox_create1st__FP11daObjBBox_c,
    (void*)daObjBBox_MoveBGDelete__FP11daObjBBox_c,
    (void*)daObjBBox_MoveBGExecute__FP11daObjBBox_c,
    (void*)NULL,
    (void*)daObjBBox_MoveBGDraw__FP11daObjBBox_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BAD4F8-80BAD528 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_BBox */
SECTION_DATA extern void* g_profile_Obj_BBox[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x007A0000, (void*)&g_fpcLf_Method,
    (void*)0x00000724, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01F30000, (void*)&daObjBBox_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80BAD528-80BAD534 000054 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BAD534-80BAD540 000060 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BAD540-80BAD568 00006C 0028+00 2/2 0/0 0/0 .data            __vt__11daObjBBox_c */
SECTION_DATA extern void* __vt__11daObjBBox_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daObjBBox_cFv,
    (void*)Create__11daObjBBox_cFv,
    (void*)Execute__11daObjBBox_cFPPA3_A4_f,
    (void*)Draw__11daObjBBox_cFv,
    (void*)Delete__11daObjBBox_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BACEC0-80BAD030 000200 0170+00 1/1 0/0 0/0 .text            create1st__11daObjBBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/create1st__11daObjBBox_cFv.s"
}
#pragma pop

/* 80BAD030-80BAD078 000370 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BAD078-80BAD0C0 0003B8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BAD4B8-80BAD4C4 000044 000A+02 0/1 0/0 0/0 .rodata          particle_id$3793 */
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
COMPILER_STRIP_GATE(0x80BAD4B8, &particle_id);
#pragma pop

/* 80BAD4C4-80BAD4C8 000050 0004+00 0/1 0/0 0/0 .rodata          @3821 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3821 = 1.0f;
COMPILER_STRIP_GATE(0x80BAD4C4, &lit_3821);
#pragma pop

/* 80BAD4C8-80BAD4CC 000054 0004+00 0/1 0/0 0/0 .rodata          @3822 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3822 = -1.0f;
COMPILER_STRIP_GATE(0x80BAD4C8, &lit_3822);
#pragma pop

/* 80BAD0C0-80BAD234 000400 0174+00 1/0 0/0 0/0 .text            Execute__11daObjBBox_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/Execute__11daObjBBox_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BAD234-80BAD2D8 000574 00A4+00 1/0 0/0 0/0 .text            Draw__11daObjBBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/Draw__11daObjBBox_cFv.s"
}
#pragma pop

/* 80BAD2D8-80BAD30C 000618 0034+00 1/0 0/0 0/0 .text            Delete__11daObjBBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBBox_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/Delete__11daObjBBox_cFv.s"
}
#pragma pop

/* 80BAD30C-80BAD400 00064C 00F4+00 1/0 0/0 0/0 .text daObjBBox_create1st__FP11daObjBBox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjBBox_create1st(daObjBBox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/daObjBBox_create1st__FP11daObjBBox_c.s"
}
#pragma pop

/* 80BAD400-80BAD420 000740 0020+00 1/0 0/0 0/0 .text daObjBBox_MoveBGDelete__FP11daObjBBox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjBBox_MoveBGDelete(daObjBBox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/daObjBBox_MoveBGDelete__FP11daObjBBox_c.s"
}
#pragma pop

/* 80BAD420-80BAD440 000760 0020+00 1/0 0/0 0/0 .text daObjBBox_MoveBGExecute__FP11daObjBBox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjBBox_MoveBGExecute(daObjBBox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/daObjBBox_MoveBGExecute__FP11daObjBBox_c.s"
}
#pragma pop

/* 80BAD440-80BAD46C 000780 002C+00 1/0 0/0 0/0 .text daObjBBox_MoveBGDraw__FP11daObjBBox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjBBox_MoveBGDraw(daObjBBox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox/daObjBBox_MoveBGDraw__FP11daObjBBox_c.s"
}
#pragma pop

/* 80BAD4CC-80BAD4CC 000058 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
