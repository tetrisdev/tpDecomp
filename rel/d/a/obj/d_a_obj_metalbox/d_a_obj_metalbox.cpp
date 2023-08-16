//
// Generated By: dol2asm
// Translation Unit: d_a_obj_metalbox
//

#include "rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct fopAc_ac_c {};

struct daObjMBox_c {
    /* 80592E98 */ void initBaseMtx();
    /* 80592ED4 */ void setBaseMtx();
    /* 80592F48 */ void Create();
    /* 80592FD4 */ void CreateHeap();
    /* 80593044 */ void create();
    /* 805932C4 */ void Execute(f32 (**)[3][4]);
    /* 805932F0 */ void Draw();
    /* 80593394 */ void Delete();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80593254 */ ~dBgS_ObjAcch();
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

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
};

struct cM3dGCyl {
    /* 805931C4 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 8059320C */ ~cM3dGAab();
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void initBaseMtx__11daObjMBox_cFv();
extern "C" void setBaseMtx__11daObjMBox_cFv();
extern "C" void Create__11daObjMBox_cFv();
extern "C" void CreateHeap__11daObjMBox_cFv();
extern "C" void create__11daObjMBox_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void Execute__11daObjMBox_cFPPA3_A4_f();
extern "C" void Draw__11daObjMBox_cFv();
extern "C" void Delete__11daObjMBox_cFv();
extern "C" static void daObjMBox_Draw__FP11daObjMBox_c();
extern "C" static void daObjMBox_Execute__FP11daObjMBox_c();
extern "C" static void daObjMBox_Delete__FP11daObjMBox_c();
extern "C" static void daObjMBox_Create__FP10fopAc_ac_c();
extern "C" static void func_80593454();
extern "C" static void func_8059345C();
extern "C" extern char const* const d_a_obj_metalbox__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
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
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
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

//
// Declarations:
//

/* 80592E98-80592ED4 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjMBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/initBaseMtx__11daObjMBox_cFv.s"
}
#pragma pop

/* 80592ED4-80592F48 0000B4 0074+00 2/2 0/0 0/0 .text            setBaseMtx__11daObjMBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/setBaseMtx__11daObjMBox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059346C-80593470 000000 0004+00 1/1 0/0 0/0 .rodata          @3655 */
SECTION_RODATA static f32 const lit_3655 = 30.0f;
COMPILER_STRIP_GATE(0x8059346C, &lit_3655);

/* 80592F48-80592FD4 000128 008C+00 1/0 0/0 0/0 .text            Create__11daObjMBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Create__11daObjMBox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80593470-80593470 000004 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80593470 = "L_mbox_00";
#pragma pop

/* 8059347C-80593480 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_metalbox__stringBase0;

/* 80592FD4-80593044 0001B4 0070+00 1/0 0/0 0/0 .text            CreateHeap__11daObjMBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/CreateHeap__11daObjMBox_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80593480-805934A0 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjMBox_Method */
SECTION_DATA static void* l_daObjMBox_Method[8] = {
    (void*)daObjMBox_Create__FP10fopAc_ac_c,
    (void*)daObjMBox_Delete__FP11daObjMBox_c,
    (void*)daObjMBox_Execute__FP11daObjMBox_c,
    (void*)NULL,
    (void*)daObjMBox_Draw__FP11daObjMBox_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805934A0-805934D0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_MetalBox */
SECTION_DATA extern void* g_profile_Obj_MetalBox[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00790000, (void*)&g_fpcLf_Method,
    (void*)0x00000944, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01F20000, (void*)&l_daObjMBox_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 805934D0-805934DC 000054 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 805934DC-805934E8 000060 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 805934E8-8059350C 00006C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8059345C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80593454,
};

/* 8059350C-80593534 000090 0028+00 1/1 0/0 0/0 .data            __vt__11daObjMBox_c */
SECTION_DATA extern void* __vt__11daObjMBox_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daObjMBox_cFv,
    (void*)Create__11daObjMBox_cFv,
    (void*)Execute__11daObjMBox_cFPPA3_A4_f,
    (void*)Draw__11daObjMBox_cFv,
    (void*)Delete__11daObjMBox_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80593044-805931C4 000224 0180+00 1/1 0/0 0/0 .text            create__11daObjMBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/func_80593044.s"
}
#pragma pop

/* 805931C4-8059320C 0003A4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8059320C-80593254 0003EC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80593254-805932C4 000434 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 805932C4-805932F0 0004A4 002C+00 1/0 0/0 0/0 .text            Execute__11daObjMBox_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Execute__11daObjMBox_cFPPA3_A4_f.s"
}
#pragma pop

/* 805932F0-80593394 0004D0 00A4+00 1/0 0/0 0/0 .text            Draw__11daObjMBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Draw__11daObjMBox_cFv.s"
}
#pragma pop

/* 80593394-805933C8 000574 0034+00 1/0 0/0 0/0 .text            Delete__11daObjMBox_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMBox_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Delete__11daObjMBox_cFv.s"
}
#pragma pop

/* 805933C8-805933F4 0005A8 002C+00 1/0 0/0 0/0 .text            daObjMBox_Draw__FP11daObjMBox_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjMBox_Draw(daObjMBox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Draw__FP11daObjMBox_c.s"
}
#pragma pop

/* 805933F4-80593414 0005D4 0020+00 1/0 0/0 0/0 .text            daObjMBox_Execute__FP11daObjMBox_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjMBox_Execute(daObjMBox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Execute__FP11daObjMBox_c.s"
}
#pragma pop

/* 80593414-80593434 0005F4 0020+00 1/0 0/0 0/0 .text            daObjMBox_Delete__FP11daObjMBox_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjMBox_Delete(daObjMBox_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Delete__FP11daObjMBox_c.s"
}
#pragma pop

/* 80593434-80593454 000614 0020+00 1/0 0/0 0/0 .text            daObjMBox_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjMBox_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80593454-8059345C 000634 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80593454() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/func_80593454.s"
}
#pragma pop

/* 8059345C-80593464 00063C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8059345C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/func_8059345C.s"
}
#pragma pop

/* 80593470-80593470 000004 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
