/**
 * @file d_a_obj_cblock.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initBaseMtx__11daObjCBlk_cFv();
extern "C" void setBaseMtx__11daObjCBlk_cFv();
extern "C" void Create__11daObjCBlk_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void CreateHeap__11daObjCBlk_cFv();
extern "C" void __dt__Q211daObjCBlk_c7chain_sFv();
extern "C" void __ct__Q211daObjCBlk_c7chain_sFv();
extern "C" void create__11daObjCBlk_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void Execute__11daObjCBlk_cFPPA3_A4_f();
extern "C" void initWait__11daObjCBlk_cFv();
extern "C" void modeWait__11daObjCBlk_cFv();
extern "C" void initWalk__11daObjCBlk_cFv();
extern "C" void modeWalk__11daObjCBlk_cFv();
extern "C" void getChainBasePos__11daObjCBlk_cFP4cXyz();
extern "C" void setPower__11daObjCBlk_cFf();
extern "C" void checkWall__11daObjCBlk_cFv();
extern "C" bool Draw__11daObjCBlk_cFv();
extern "C" void Delete__11daObjCBlk_cFv();
extern "C" static void daObjCBlk_Draw__FP11daObjCBlk_c();
extern "C" static void daObjCBlk_Execute__FP11daObjCBlk_c();
extern "C" static void daObjCBlk_Delete__FP11daObjCBlk_c();
extern "C" static void daObjCBlk_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80BC6978(void* _this, s16*);
extern "C" void __sinit_d_a_obj_cblock_cpp();
extern "C" extern char const* const d_a_obj_cblock__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void lineCheck__11fopAcM_lc_cFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dPath_GetPnt__FPC5dPathi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
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
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 80BC5A0C-80BC5A48 0000EC 003C+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/initBaseMtx__11daObjCBlk_cFv.s"
}
#pragma pop

/* 80BC5A48-80BC5ABC 000128 0074+00 1/1 0/0 0/0 .text            setBaseMtx__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/setBaseMtx__11daObjCBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC6A38-80BC6A50 000000 0018+00 5/5 0/0 0/0 .rodata          l_cull_box */
SECTION_RODATA static u8 const l_cull_box[24] = {
    0xC3, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0xE1, 0x00, 0x00,
    0x43, 0x7A, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BC6A38, &l_cull_box);

/* 80BC6A50-80BC6A54 000018 0004+00 0/5 0/0 0/0 .rodata          @3731 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3731[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BC6A50, &lit_3731);
#pragma pop

/* 80BC6A54-80BC6A58 00001C 0004+00 0/3 0/0 0/0 .rodata          @3732 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3732 = 50.0f;
COMPILER_STRIP_GATE(0x80BC6A54, &lit_3732);
#pragma pop

/* 80BC6AC8-80BC6AC8 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BC6AC8 = "P_Cblock";
#pragma pop

/* 80BC6AD4-80BC6AE0 000000 000C+00 0/0 0/0 0/0 .data            cNullVec__6Z2Calc */
#pragma push
#pragma force_active on
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BC6AE0-80BC6AF4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BC6AF4-80BC6AF8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_cblock__stringBase0;

/* 80BC6AF8-80BC6B28 000024 0030+00 0/0 0/0 0/0 .data            l_side_co_offset */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_side_co_offset[48] = {
    0xC3, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00, 0xC3, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00, 0x43, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC1, 0xF0, 0x00, 0x00, 0x43, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00,
};
#pragma pop

/* 80BC6B28-80BC6B6C 000054 0044+00 1/1 0/0 0/0 .data            l_cyl_src */
static dCcD_SrcCyl l_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x19}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x6}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        60.0f, // mRadius
        300.0f // mHeight
    } // mCyl
};

/* 80BC5ABC-80BC5CBC 00019C 0200+00 1/0 0/0 0/0 .text            Create__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/Create__11daObjCBlk_cFv.s"
}
#pragma pop

/* 80BC5CBC-80BC5CF8 00039C 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__dt__4cXyzFv.s"
}
#pragma pop

/* 80BC5CF8-80BC5E58 0003D8 0160+00 1/0 0/0 0/0 .text            CreateHeap__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/CreateHeap__11daObjCBlk_cFv.s"
}
#pragma pop

/* 80BC5E58-80BC5E94 000538 003C+00 1/1 0/0 0/0 .text            __dt__Q211daObjCBlk_c7chain_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjCBlk_c::chain_s::~chain_s() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__dt__Q211daObjCBlk_c7chain_sFv.s"
}
#pragma pop

/* 80BC5E94-80BC5E98 000574 0004+00 1/1 0/0 0/0 .text            __ct__Q211daObjCBlk_c7chain_sFv */
daObjCBlk_c::chain_s::chain_s() {
    /* empty function */
}

/* ############################################################################################## */
/* 80BC6B6C-80BC6B78 -00001 000C+00 0/0 0/0 0/0 .data            @3921 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3921[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__11daObjCBlk_cFv,
};
#pragma pop

/* 80BC6B78-80BC6B84 -00001 000C+00 0/0 0/0 0/0 .data            @3922 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3922[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWalk__11daObjCBlk_cFv,
};
#pragma pop

/* 80BC6B84-80BC6B9C 0000B0 0018+00 0/0 0/0 0/0 .data            l_func$3920 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BC6B9C-80BC6BBC -00001 0020+00 1/0 0/0 0/0 .data            l_daObjCBlk_Method */
static actor_method_class l_daObjCBlk_Method = {
    (process_method_func)daObjCBlk_Create__FP10fopAc_ac_c,
    (process_method_func)daObjCBlk_Delete__FP11daObjCBlk_c,
    (process_method_func)daObjCBlk_Execute__FP11daObjCBlk_c,
    0,
    (process_method_func)daObjCBlk_Draw__FP11daObjCBlk_c,
};

/* 80BC6BBC-80BC6BEC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_ChainBlock */
extern actor_process_profile_definition g_profile_Obj_ChainBlock = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_ChainBlock,    // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjCBlk_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  597,                    // mPriority
  &l_daObjCBlk_Method,    // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BC6BEC-80BC6BF8 000118 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BC6BF8-80BC6C04 000124 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BC6C04-80BC6C10 000130 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BC6C10-80BC6C1C 00013C 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BC6C1C-80BC6C44 000148 0028+00 1/1 0/0 0/0 .data            __vt__11daObjCBlk_c */
SECTION_DATA extern void* __vt__11daObjCBlk_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daObjCBlk_cFv,
    (void*)Create__11daObjCBlk_cFv,
    (void*)Execute__11daObjCBlk_cFPPA3_A4_f,
    (void*)Draw__11daObjCBlk_cFv,
    (void*)Delete__11daObjCBlk_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BC5E98-80BC6020 000578 0188+00 1/1 0/0 0/0 .text            create__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/func_80BC5E98.s"
}
#pragma pop

/* 80BC6020-80BC6024 000700 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 80BC6024-80BC60A8 000704 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Cyl::dCcD_Cyl() {
extern "C" asm void __ct__8dCcD_CylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__ct__8dCcD_CylFv.s"
}
#pragma pop

/* 80BC60A8-80BC6174 000788 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Cyl::~dCcD_Cyl() {
extern "C" asm void __dt__8dCcD_CylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__dt__8dCcD_CylFv.s"
}
#pragma pop

/* 80BC6174-80BC61BC 000854 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BC61BC-80BC6204 00089C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BC6204-80BC6260 0008E4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80BC6260-80BC6270 000940 0010+00 1/0 0/0 0/0 .text            Execute__11daObjCBlk_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/Execute__11daObjCBlk_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BC6270-80BC627C 000950 000C+00 2/2 0/0 0/0 .text            initWait__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::initWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/initWait__11daObjCBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC6A58-80BC6A5C 000020 0004+00 0/3 0/0 0/0 .rodata          @3977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3977 = 1.0f;
COMPILER_STRIP_GATE(0x80BC6A58, &lit_3977);
#pragma pop

/* 80BC6A5C-80BC6A60 000024 0004+00 0/1 0/0 0/0 .rodata          @3978 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3978 = 0x3F733334;
COMPILER_STRIP_GATE(0x80BC6A5C, &lit_3978);
#pragma pop

/* 80BC6A60-80BC6A64 000028 0004+00 0/1 0/0 0/0 .rodata          @3979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3979 = 6.0f;
COMPILER_STRIP_GATE(0x80BC6A60, &lit_3979);
#pragma pop

/* 80BC6A64-80BC6A68 00002C 0004+00 0/1 0/0 0/0 .rodata          @3980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3980 = 8.0f;
COMPILER_STRIP_GATE(0x80BC6A64, &lit_3980);
#pragma pop

/* 80BC627C-80BC6414 00095C 0198+00 1/0 0/0 0/0 .text            modeWait__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/modeWait__11daObjCBlk_cFv.s"
}
#pragma pop

/* 80BC6414-80BC6430 000AF4 001C+00 1/1 0/0 0/0 .text            initWalk__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::initWalk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/initWalk__11daObjCBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC6A68-80BC6A6C 000030 0004+00 0/1 0/0 0/0 .rodata          @4012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4012 = 0.5f;
COMPILER_STRIP_GATE(0x80BC6A68, &lit_4012);
#pragma pop

/* 80BC6A6C-80BC6A70 000034 0004+00 0/1 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4013 = -1.0f;
COMPILER_STRIP_GATE(0x80BC6A6C, &lit_4013);
#pragma pop

/* 80BC6A70-80BC6A78 000038 0008+00 0/1 0/0 0/0 .rodata          @4015 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4015[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BC6A70, &lit_4015);
#pragma pop

/* 80BC6430-80BC65CC 000B10 019C+00 1/0 0/0 0/0 .text            modeWalk__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::modeWalk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/modeWalk__11daObjCBlk_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC6C50-80BC6C54 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80BC6C54-80BC6C58 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80BC6C58-80BC6C5C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80BC6C5C-80BC6C60 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80BC6C60-80BC6C64 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80BC6C64-80BC6C68 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80BC6C68-80BC6C6C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80BC6C6C-80BC6C70 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80BC6C70-80BC6C74 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80BC6C74-80BC6C78 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80BC6C78-80BC6C7C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80BC6C7C-80BC6C80 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80BC6C80-80BC6C84 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80BC6C84-80BC6C88 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80BC6C88-80BC6C8C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80BC6C8C-80BC6C90 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80BC6C90-80BC6C9C 000048 000C+00 0/1 0/0 0/0 .bss             @3644 */
#pragma push
#pragma force_active on
static u8 lit_3644[12];
#pragma pop

/* 80BC6C9C-80BC6CA8 000054 000C+00 1/2 0/0 0/0 .bss             l_chainOffset */
static u8 l_chainOffset[12];

/* 80BC65CC-80BC6648 000CAC 007C+00 2/2 0/0 0/0 .text getChainBasePos__11daObjCBlk_cFP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::getChainBasePos(cXyz* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/getChainBasePos__11daObjCBlk_cFP4cXyz.s"
}
#pragma pop

/* 80BC6648-80BC66DC 000D28 0094+00 2/2 0/0 0/0 .text            setPower__11daObjCBlk_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::setPower(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/setPower__11daObjCBlk_cFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC6A78-80BC6A7C 000040 0004+00 0/0 0/0 0/0 .rodata          @4103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4103 = -6.0f;
COMPILER_STRIP_GATE(0x80BC6A78, &lit_4103);
#pragma pop

/* 80BC6A7C-80BC6A80 000044 0004+00 0/0 0/0 0/0 .rodata          @4104 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4104 = 3.0f / 40.0f;
COMPILER_STRIP_GATE(0x80BC6A7C, &lit_4104);
#pragma pop

/* 80BC6A80-80BC6A84 000048 0004+00 0/0 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4105 = 100.0f;
COMPILER_STRIP_GATE(0x80BC6A80, &lit_4105);
#pragma pop

/* 80BC6A84-80BC6A88 00004C 0004+00 0/0 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4106 = 15.0f;
COMPILER_STRIP_GATE(0x80BC6A84, &lit_4106);
#pragma pop

/* 80BC6A88-80BC6A90 000050 0004+04 0/0 0/0 0/0 .rodata          @4107 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4107[1 + 1 /* padding */] = {
    35.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BC6A88, &lit_4107);
#pragma pop

/* 80BC6A90-80BC6A98 000058 0008+00 0/0 0/0 0/0 .rodata          @4310 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4310[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BC6A90, &lit_4310);
#pragma pop

/* 80BC6A98-80BC6AA0 000060 0008+00 0/0 0/0 0/0 .rodata          @4311 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4311[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BC6A98, &lit_4311);
#pragma pop

/* 80BC6AA0-80BC6AA8 000068 0008+00 0/0 0/0 0/0 .rodata          @4312 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4312[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BC6AA0, &lit_4312);
#pragma pop

/* 80BC6AA8-80BC6AAC 000070 0004+00 0/0 0/0 0/0 .rodata          @4313 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4313 = 195.0f;
COMPILER_STRIP_GATE(0x80BC6AA8, &lit_4313);
#pragma pop

/* 80BC6AAC-80BC6AB0 000074 0004+00 0/0 0/0 0/0 .rodata          @4314 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4314 = 210.0f;
COMPILER_STRIP_GATE(0x80BC6AAC, &lit_4314);
#pragma pop

/* 80BC6AB0-80BC6AB4 000078 0004+00 0/1 0/0 0/0 .rodata          @4389 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4389 = -95.0f;
COMPILER_STRIP_GATE(0x80BC6AB0, &lit_4389);
#pragma pop

/* 80BC6AB4-80BC6AB8 00007C 0004+00 0/1 0/0 0/0 .rodata          @4390 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4390 = 5.0f;
COMPILER_STRIP_GATE(0x80BC6AB4, &lit_4390);
#pragma pop

/* 80BC6AB8-80BC6ABC 000080 0004+00 0/1 0/0 0/0 .rodata          @4391 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4391 = 95.0f;
COMPILER_STRIP_GATE(0x80BC6AB8, &lit_4391);
#pragma pop

/* 80BC66DC-80BC6868 000DBC 018C+00 1/1 0/0 0/0 .text            checkWall__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::checkWall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/checkWall__11daObjCBlk_cFv.s"
}
#pragma pop

/* 80BC6868-80BC6870 000F48 0008+00 1/0 0/0 0/0 .text            Draw__11daObjCBlk_cFv */
bool daObjCBlk_c::Draw() {
    return true;
}

/* 80BC6870-80BC68A4 000F50 0034+00 1/0 0/0 0/0 .text            Delete__11daObjCBlk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCBlk_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/Delete__11daObjCBlk_cFv.s"
}
#pragma pop

/* 80BC68A4-80BC68D0 000F84 002C+00 1/0 0/0 0/0 .text            daObjCBlk_Draw__FP11daObjCBlk_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCBlk_Draw(daObjCBlk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/daObjCBlk_Draw__FP11daObjCBlk_c.s"
}
#pragma pop

/* 80BC68D0-80BC68F0 000FB0 0020+00 1/0 0/0 0/0 .text            daObjCBlk_Execute__FP11daObjCBlk_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCBlk_Execute(daObjCBlk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/daObjCBlk_Execute__FP11daObjCBlk_c.s"
}
#pragma pop

/* 80BC68F0-80BC6910 000FD0 0020+00 1/0 0/0 0/0 .text            daObjCBlk_Delete__FP11daObjCBlk_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCBlk_Delete(daObjCBlk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/daObjCBlk_Delete__FP11daObjCBlk_c.s"
}
#pragma pop

/* 80BC6910-80BC6930 000FF0 0020+00 1/0 0/0 0/0 .text            daObjCBlk_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCBlk_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/daObjCBlk_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BC6930-80BC6978 001010 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80BC6978-80BC6994 001058 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<s>__FPs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80BC6978(void* _this, s16* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/func_80BC6978.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC6ABC-80BC6AC0 000084 0004+00 0/1 0/0 0/0 .rodata          @4440 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4440 = 105.0f;
COMPILER_STRIP_GATE(0x80BC6ABC, &lit_4440);
#pragma pop

/* 80BC6AC0-80BC6AC4 000088 0004+00 0/1 0/0 0/0 .rodata          @4441 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4441 = 30.0f;
COMPILER_STRIP_GATE(0x80BC6AC0, &lit_4441);
#pragma pop

/* 80BC6AC4-80BC6AC8 00008C 0004+00 0/1 0/0 0/0 .rodata          @4442 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4442 = -200.0f;
COMPILER_STRIP_GATE(0x80BC6AC4, &lit_4442);
#pragma pop

/* 80BC6CA8-80BC6CB4 000060 000C+00 0/1 0/0 0/0 .bss             @3645 */
#pragma push
#pragma force_active on
static u8 lit_3645[12];
#pragma pop

/* 80BC6CB4-80BC6CC4 00006C 000C+04 0/1 0/0 0/0 .bss             l_smokeSetOffset */
#pragma push
#pragma force_active on
static u8 l_smokeSetOffset[12 + 4 /* padding */];
#pragma pop

/* 80BC6994-80BC6A24 001074 0090+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_cblock_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_cblock_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/d_a_obj_cblock/__sinit_d_a_obj_cblock_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80BC6994, __sinit_d_a_obj_cblock_cpp);
#pragma pop

/* ############################################################################################## */
/* 80BC6CC4-80BC6CC8 00007C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80BC6CC4[4];
#pragma pop

/* 80BC6CC8-80BC6CCC 000080 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80BC6CC8[4];
#pragma pop

/* 80BC6CCC-80BC6CD0 000084 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80BC6CCC[4];
#pragma pop

/* 80BC6CD0-80BC6CD4 000088 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80BC6CD0[4];
#pragma pop

/* 80BC6CD4-80BC6CD8 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6CD4[4];
#pragma pop

/* 80BC6CD8-80BC6CDC 000090 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6CD8[4];
#pragma pop

/* 80BC6CDC-80BC6CE0 000094 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6CDC[4];
#pragma pop

/* 80BC6CE0-80BC6CE4 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80BC6CE0[4];
#pragma pop

/* 80BC6CE4-80BC6CE8 00009C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80BC6CE4[4];
#pragma pop

/* 80BC6CE8-80BC6CEC 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80BC6CE8[4];
#pragma pop

/* 80BC6CEC-80BC6CF0 0000A4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80BC6CEC[4];
#pragma pop

/* 80BC6CF0-80BC6CF4 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80BC6CF0[4];
#pragma pop

/* 80BC6CF4-80BC6CF8 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80BC6CF4[4];
#pragma pop

/* 80BC6CF8-80BC6CFC 0000B0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6CF8[4];
#pragma pop

/* 80BC6CFC-80BC6D00 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80BC6CFC[4];
#pragma pop

/* 80BC6D00-80BC6D04 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80BC6D00[4];
#pragma pop

/* 80BC6D04-80BC6D08 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80BC6D04[4];
#pragma pop

/* 80BC6D08-80BC6D0C 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80BC6D08[4];
#pragma pop

/* 80BC6D0C-80BC6D10 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6D0C[4];
#pragma pop

/* 80BC6D10-80BC6D14 0000C8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80BC6D10[4];
#pragma pop

/* 80BC6D14-80BC6D18 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6D14[4];
#pragma pop

/* 80BC6D18-80BC6D1C 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6D18[4];
#pragma pop

/* 80BC6D1C-80BC6D20 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6D1C[4];
#pragma pop

/* 80BC6D20-80BC6D24 0000D8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BC6D20[4];
#pragma pop

/* 80BC6D24-80BC6D28 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80BC6D24[4];
#pragma pop

/* 80BC6AC8-80BC6AC8 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
