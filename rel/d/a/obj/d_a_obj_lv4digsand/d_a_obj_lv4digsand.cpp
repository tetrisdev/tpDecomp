/**
 * @file d_a_obj_lv4digsand.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initBaseMtx__16daObjL4DigSand_cFv();
extern "C" void setBaseMtx__16daObjL4DigSand_cFv();
extern "C" void Create__16daObjL4DigSand_cFv();
extern "C" void CreateHeap__16daObjL4DigSand_cFv();
extern "C" void create1st__16daObjL4DigSand_cFv();
extern "C" void Execute__16daObjL4DigSand_cFPPA3_A4_f();
extern "C" void action__16daObjL4DigSand_cFv();
extern "C" void mode_init_wait__16daObjL4DigSand_cFv();
extern "C" void mode_wait__16daObjL4DigSand_cFv();
extern "C" void mode_init_dig__16daObjL4DigSand_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void mode_dig__16daObjL4DigSand_cFv();
extern "C" void mode_init_end__16daObjL4DigSand_cFv();
extern "C" void mode_end__16daObjL4DigSand_cFv();
extern "C" void Draw__16daObjL4DigSand_cFv();
extern "C" void Delete__16daObjL4DigSand_cFv();
extern "C" static void daObjL4DigSand_create1st__FP16daObjL4DigSand_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c();
extern "C" static void daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c();
extern "C" static void daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80C67588(void* _this, u8*);
extern "C" static void func_80C675A4();
extern "C" static void func_80C675AC();
extern "C" static void func_80C675B4();
extern "C" static void func_80C675BC();
extern "C" static void func_80C675C4();
extern "C" extern char const* const d_a_obj_lv4digsand__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
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
extern "C" void checkItemGet__FUci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 data_80C67760[4];

//
// Declarations:
//

/* 80C66B18-80C66B54 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__16daObjL4DigSand_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/initBaseMtx__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66B54-80C66BC8 0000B4 0074+00 2/2 0/0 0/0 .text            setBaseMtx__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/setBaseMtx__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66BC8-80C66C24 000128 005C+00 1/0 0/0 0/0 .text            Create__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Create__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C675E4-80C675E4 000010 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C675E4 = "P_DSand";
#pragma pop

/* 80C675EC-80C675F8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C675F8-80C6760C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C6760C-80C67610 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_lv4digsand__stringBase0;

/* 80C66C24-80C66C94 000184 0070+00 1/0 0/0 0/0 .text            CreateHeap__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/CreateHeap__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66C94-80C66D40 0001F4 00AC+00 1/1 0/0 0/0 .text            create1st__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/create1st__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66D40-80C66DD0 0002A0 0090+00 1/0 0/0 0/0 .text Execute__16daObjL4DigSand_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Execute__16daObjL4DigSand_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C67610-80C6761C -00001 000C+00 0/1 0/0 0/0 .data            @3715 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3715[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_wait__16daObjL4DigSand_cFv,
};
#pragma pop

/* 80C6761C-80C67628 -00001 000C+00 0/1 0/0 0/0 .data            @3716 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3716[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_dig__16daObjL4DigSand_cFv,
};
#pragma pop

/* 80C67628-80C67634 -00001 000C+00 0/1 0/0 0/0 .data            @3717 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3717[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_end__16daObjL4DigSand_cFv,
};
#pragma pop

/* 80C67634-80C67658 000048 0024+00 0/1 0/0 0/0 .data            l_func$3714 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C66DD0-80C66E74 000330 00A4+00 1/1 0/0 0/0 .text            action__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/action__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66E74-80C66E80 0003D4 000C+00 1/1 0/0 0/0 .text mode_init_wait__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_init_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_init_wait__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66E80-80C66EAC 0003E0 002C+00 1/0 0/0 0/0 .text            mode_wait__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_wait__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C675D4-80C675D8 000000 0004+00 2/2 0/0 0/0 .rodata          @3746 */
SECTION_RODATA static f32 const lit_3746 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80C675D4, &lit_3746);

/* 80C67658-80C67678 -00001 0020+00 1/0 0/0 0/0 .data            daObjL4DigSand_METHODS */
static actor_method_class daObjL4DigSand_METHODS = {
    (process_method_func)daObjL4DigSand_create1st__FP16daObjL4DigSand_c,
    (process_method_func)daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c,
    (process_method_func)daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c,
    0,
    (process_method_func)daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c,
};

/* 80C67678-80C676A8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv4DigSand */
extern actor_process_profile_definition g_profile_Obj_Lv4DigSand = {
  fpcLy_CURRENT_e,          // mLayerID
  3,                        // mListID
  fpcPi_CURRENT_e,          // mListPrio
  PROC_Obj_Lv4DigSand,      // mProcName
  &g_fpcLf_Method.mBase,    // sub_method
  sizeof(daObjL4DigSand_c), // mSize
  0,                        // mSizeOther
  0,                        // mParameters
  &g_fopAc_Method.base,     // sub_method
  551,                      // mPriority
  &daObjL4DigSand_METHODS,  // sub_method
  0x00044100,               // mStatus
  fopAc_ACTOR_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e,   // cullType
};

/* 80C676A8-80C676B4 0000BC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80C676B4-80C676C0 0000C8 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C676C0-80C676CC 0000D4 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C676CC-80C676D8 0000E0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C676D8-80C676E4 0000EC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C676E4-80C67708 0000F8 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C675C4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C675BC,
};

/* 80C67708-80C67738 00011C 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C675A4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C675B4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C675AC,
};

/* 80C66EAC-80C66F84 00040C 00D8+00 1/1 0/0 0/0 .text            mode_init_dig__16daObjL4DigSand_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_init_dig() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_init_dig__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66F84-80C66FFC 0004E4 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" asm void __dt__14dBgS_ObjGndChkFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C675D8-80C675DC 000004 0004+00 0/1 0/0 0/0 .rodata          @3765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3765 = 10.0f;
COMPILER_STRIP_GATE(0x80C675D8, &lit_3765);
#pragma pop

/* 80C675DC-80C675E0 000008 0004+00 0/1 0/0 0/0 .rodata          @3766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3766 = 15.0f;
COMPILER_STRIP_GATE(0x80C675DC, &lit_3766);
#pragma pop

/* 80C675E0-80C675E4 00000C 0004+00 0/1 0/0 0/0 .rodata          @3767 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3767 = 1.0f;
COMPILER_STRIP_GATE(0x80C675E0, &lit_3767);
#pragma pop

/* 80C66FFC-80C670AC 00055C 00B0+00 1/0 0/0 0/0 .text            mode_dig__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_dig() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_dig__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C670AC-80C67100 00060C 0054+00 1/1 0/0 0/0 .text            mode_init_end__16daObjL4DigSand_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_init_end() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_init_end__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C67100-80C67104 000660 0004+00 1/0 0/0 0/0 .text            mode_end__16daObjL4DigSand_cFv */
void daObjL4DigSand_c::mode_end() {
    /* empty function */
}

/* 80C67104-80C671A8 000664 00A4+00 1/0 0/0 0/0 .text            Draw__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Draw__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C671A8-80C671DC 000708 0034+00 1/0 0/0 0/0 .text            Delete__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Delete__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C67738-80C67760 00014C 0028+00 1/1 0/0 0/0 .data            __vt__16daObjL4DigSand_c */
SECTION_DATA extern void* __vt__16daObjL4DigSand_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__16daObjL4DigSand_cFv,
    (void*)Create__16daObjL4DigSand_cFv,
    (void*)Execute__16daObjL4DigSand_cFPPA3_A4_f,
    (void*)Draw__16daObjL4DigSand_cFv,
    (void*)Delete__16daObjL4DigSand_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C671DC-80C67308 00073C 012C+00 1/0 0/0 0/0 .text
 * daObjL4DigSand_create1st__FP16daObjL4DigSand_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjL4DigSand_create1st(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_create1st__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C67308-80C67350 000868 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C67350-80C67398 0008B0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C67398-80C673F4 0008F8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C673F4-80C67464 000954 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80C67464-80C674D4 0009C4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C674D4-80C674F4 000A34 0020+00 1/0 0/0 0/0 .text
 * daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjL4DigSand_MoveBGDelete(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C674F4-80C67514 000A54 0020+00 1/0 0/0 0/0 .text
 * daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjL4DigSand_MoveBGExecute(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C67514-80C67540 000A74 002C+00 1/0 0/0 0/0 .text
 * daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjL4DigSand_MoveBGDraw(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C67540-80C67588 000AA0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C67588-80C675A4 000AE8 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80C67588(void* _this, u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C67588.s"
}
#pragma pop

/* 80C675A4-80C675AC 000B04 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C675A4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675A4.s"
}
#pragma pop

/* 80C675AC-80C675B4 000B0C 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C675AC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675AC.s"
}
#pragma pop

/* 80C675B4-80C675BC 000B14 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C675B4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675B4.s"
}
#pragma pop

/* 80C675BC-80C675C4 000B1C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C675BC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675BC.s"
}
#pragma pop

/* 80C675C4-80C675CC 000B24 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C675C4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675C4.s"
}
#pragma pop

/* 80C675E4-80C675E4 000010 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
