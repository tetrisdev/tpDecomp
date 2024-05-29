/**
 * @file d_a_obj_firepillar2.cpp
 * 
*/

#include "rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void initBaseMtx__15daObjFPillar2_cFv();
extern "C" void setBaseMtx__15daObjFPillar2_cFv();
extern "C" void Create__15daObjFPillar2_cFv();
extern "C" void CreateHeap__15daObjFPillar2_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create__15daObjFPillar2_cFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void execute__15daObjFPillar2_cFv();
extern "C" void action__15daObjFPillar2_cFv();
extern "C" void actionOffInit__15daObjFPillar2_cFv();
extern "C" void actionOff__15daObjFPillar2_cFv();
extern "C" void actionOnWaitInit__15daObjFPillar2_cFv();
extern "C" void actionOnWait__15daObjFPillar2_cFv();
extern "C" void actionOnInit__15daObjFPillar2_cFv();
extern "C" void actionOn__15daObjFPillar2_cFv();
extern "C" void draw__15daObjFPillar2_cFv();
extern "C" void _delete__15daObjFPillar2_cFv();
extern "C" static void daObjFPillar2_Draw__FP15daObjFPillar2_c();
extern "C" static void daObjFPillar2_Execute__FP15daObjFPillar2_c();
extern "C" static void daObjFPillar2_Delete__FP15daObjFPillar2_c();
extern "C" static void daObjFPillar2_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80BEB490(void* _this, u8*);
extern "C" static void func_80BEB4AC();
extern "C" static void func_80BEB4B4();
extern "C" extern char const* const d_a_obj_firepillar2__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_btkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC9cM3dGCpsS();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void func_802807E0();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 BaseY__4cXyz[12];
extern "C" u8 BaseZ__4cXyz[12];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80BEB6E0[4];

//
// Declarations:
//

/* 80BE9CB8-80BE9CD8 000078 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BE9CD8-80BE9D5C 000098 0084+00 1/1 0/0 0/0 .text            initBaseMtx__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/initBaseMtx__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4C4-80BEB4C8 000000 0004+00 9/9 0/0 0/0 .rodata          @3656 */
SECTION_RODATA static f32 const lit_3656 = 1.0f;
COMPILER_STRIP_GATE(0x80BEB4C4, &lit_3656);

/* 80BE9D5C-80BE9DDC 00011C 0080+00 2/2 0/0 0/0 .text            setBaseMtx__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/setBaseMtx__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4C8-80BEB4CC 000004 0004+00 0/2 0/0 0/0 .rodata          @3712 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3712 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BEB4C8, &lit_3712);
#pragma pop

/* 80BEB4CC-80BEB4D0 000008 0004+00 0/1 0/0 0/0 .rodata          @3713 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3713 = 1.5f;
COMPILER_STRIP_GATE(0x80BEB4CC, &lit_3713);
#pragma pop

/* 80BEB4D0-80BEB4D4 00000C 0004+00 0/1 0/0 0/0 .rodata          @3714 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3714 = 7.5f;
COMPILER_STRIP_GATE(0x80BEB4D0, &lit_3714);
#pragma pop

/* 80BEB4D4-80BEB4D8 000010 0004+00 0/2 0/0 0/0 .rodata          @3715 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3715 = 50.0f;
COMPILER_STRIP_GATE(0x80BEB4D4, &lit_3715);
#pragma pop

/* 80BEB4D8-80BEB4DC 000014 0004+00 0/1 0/0 0/0 .rodata          @3716 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3716 = 11.0f;
COMPILER_STRIP_GATE(0x80BEB4D8, &lit_3716);
#pragma pop

/* 80BEB4DC-80BEB4E0 000018 0004+00 0/1 0/0 0/0 .rodata          @3717 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3717 = 2.0f;
COMPILER_STRIP_GATE(0x80BEB4DC, &lit_3717);
#pragma pop

/* 80BEB51C-80BEB51C 000058 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BEB51C = "Obj_yogan";
#pragma pop

/* 80BEB528-80BEB534 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BEB534-80BEB548 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BEB548-80BEB54C -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_firepillar2__stringBase0;

/* 80BEB54C-80BEB564 000024 0018+00 1/1 0/0 0/0 .data            l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC3, 0x16, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00, 0xC3, 0x16, 0x00, 0x00,
    0x43, 0x16, 0x00, 0x00, 0x44, 0x96, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00,
};

/* 80BEB564-80BEB5B0 00003C 004C+00 1/1 0/0 0/0 .data            l_cps_src */
static dCcD_SrcCps l_cps_src = {
    {
        {0x0, {{0x100, 0x1, 0x1d}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0xe, 0x1, 0x2}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x4}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, {0.0f, 100.0f, 0.0f}, 50.0f}, // mCps
    } // mCpsAttr
};

/* 80BE9DDC-80BEA034 00019C 0258+00 1/1 0/0 0/0 .text            Create__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/Create__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB5B0-80BEB5BC -00001 000C+00 0/1 0/0 0/0 .data            @3934 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3934[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOff__15daObjFPillar2_cFv,
};
#pragma pop

/* 80BEB5BC-80BEB5C8 -00001 000C+00 0/1 0/0 0/0 .data            @3935 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3935[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOnWait__15daObjFPillar2_cFv,
};
#pragma pop

/* 80BEB5C8-80BEB5D4 -00001 000C+00 0/1 0/0 0/0 .data            @3936 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3936[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOn__15daObjFPillar2_cFv,
};
#pragma pop

/* 80BEB5D4-80BEB5F8 0000AC 0024+00 0/1 0/0 0/0 .data            l_func$3933 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BEB5F8-80BEB600 0000D0 0006+02 1/1 0/0 0/0 .data            l_pipe_fire_id$4005 */
SECTION_DATA static u8 l_pipe_fire_id[6 + 2 /* padding */] = {
    0x84,
    0xE1,
    0x84,
    0xE2,
    0x84,
    0xE3,
    /* padding */
    0x00,
    0x00,
};

/* 80BEB600-80BEB608 0000D8 0006+02 1/1 0/0 0/0 .data            l_yogan_foot_id$4014 */
SECTION_DATA static u8 l_yogan_foot_id[6 + 2 /* padding */] = {
    0x81,
    0x6F,
    0x81,
    0x70,
    0x81,
    0x71,
    /* padding */
    0x00,
    0x00,
};

/* 80BEB608-80BEB610 0000E0 0006+02 1/0 0/0 0/0 .data            l_yogan_headL_id$4092 */
SECTION_DATA static u8 l_yogan_headL_id[6 + 2 /* padding */] = {
    0x84,
    0xE4,
    0x84,
    0xE5,
    0x84,
    0xE6,
    /* padding */
    0x00,
    0x00,
};

/* 80BEB610-80BEB618 0000E8 0006+02 1/0 0/0 0/0 .data            l_yogan_headM_id$4093 */
SECTION_DATA static u8 l_yogan_headM_id[6 + 2 /* padding */] = {
    0x84,
    0xE7,
    0x84,
    0xE8,
    0x84,
    0xE9,
    /* padding */
    0x00,
    0x00,
};

/* 80BEB618-80BEB620 0000F0 0006+02 1/0 0/0 0/0 .data            l_yogan_headS_id$4094 */
SECTION_DATA static u8 l_yogan_headS_id[6 + 2 /* padding */] = {
    0x84,
    0xEA,
    0x84,
    0xEB,
    0x84,
    0xEC,
    /* padding */
    0x00,
    0x00,
};

/* 80BEB620-80BEB62C -00001 000C+00 1/1 0/0 0/0 .data            l_yogan_head_id$4095 */
SECTION_DATA static void* l_yogan_head_id[3] = {
    (void*)&l_yogan_headS_id,
    (void*)&l_yogan_headM_id,
    (void*)&l_yogan_headL_id,
};

/* 80BEB62C-80BEB64C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjFPillar2_Method */
static actor_method_class l_daObjFPillar2_Method = {
    (process_method_func)daObjFPillar2_Create__FP10fopAc_ac_c,
    (process_method_func)daObjFPillar2_Delete__FP15daObjFPillar2_c,
    (process_method_func)daObjFPillar2_Execute__FP15daObjFPillar2_c,
    0,
    (process_method_func)daObjFPillar2_Draw__FP15daObjFPillar2_c,
};

/* 80BEB64C-80BEB67C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_FirePillar2 */
extern actor_process_profile_definition g_profile_Obj_FirePillar2 = {
  fpcLy_CURRENT_e,         // mLayerID
  7,                       // mListID
  fpcPi_CURRENT_e,         // mListPrio
  PROC_Obj_FirePillar2,    // mProcName
  &g_fpcLf_Method.mBase,   // sub_method
  sizeof(daObjFPillar2_c), // mSize
  0,                       // mSizeOther
  0,                       // mParameters
  &g_fopAc_Method.base,    // sub_method
  529,                     // mPriority
  &l_daObjFPillar2_Method, // sub_method
  0x00040100,              // mStatus
  fopAc_ACTOR_e,           // mActorType
  fopAc_CULLBOX_CUSTOM_e,  // cullType
};

/* 80BEB67C-80BEB688 000154 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80BEB688-80BEB694 000160 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BEB694-80BEB6A0 00016C 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BEB6A0-80BEB6AC 000178 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BEB6AC-80BEB6D0 000184 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BEB4B4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BEB4AC,
};

/* 80BEB6D0-80BEB6DC 0001A8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BEA034-80BEA1E0 0003F4 01AC+00 1/1 0/0 0/0 .text            CreateHeap__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/CreateHeap__15daObjFPillar2_cFv.s"
}
#pragma pop

/* 80BEA1E0-80BEA228 0005A0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80BEA228-80BEA400 0005E8 01D8+00 1/1 0/0 0/0 .text            create__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/func_80BEA228.s"
}
#pragma pop

/* 80BEA400-80BEA448 0007C0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BEA448-80BEA4A4 000808 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80BEA4A4-80BEA514 000864 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80BEA514-80BEA584 0008D4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4E0-80BEB4E4 00001C 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 100.0f;
COMPILER_STRIP_GATE(0x80BEB4E0, &lit_3928);
#pragma pop

/* 80BEB4E4-80BEB4E8 000020 0004+00 0/4 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BEB4E4, &lit_3929);
#pragma pop

/* 80BEA584-80BEA734 000944 01B0+00 1/1 0/0 0/0 .text            execute__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/execute__15daObjFPillar2_cFv.s"
}
#pragma pop

/* 80BEA734-80BEA808 000AF4 00D4+00 1/1 0/0 0/0 .text            action__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/action__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4E8-80BEB4EC 000024 0004+00 1/4 0/0 0/0 .rodata          @3961 */
SECTION_RODATA static u8 const lit_3961[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BEB4E8, &lit_3961);

/* 80BEA808-80BEA854 000BC8 004C+00 3/3 0/0 0/0 .text            actionOffInit__15daObjFPillar2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::actionOffInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/actionOffInit__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4EC-80BEB4F0 000028 0004+00 0/3 0/0 0/0 .rodata          @3999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3999 = -1.0f;
COMPILER_STRIP_GATE(0x80BEB4EC, &lit_3999);
#pragma pop

/* 80BEA854-80BEA98C 000C14 0138+00 1/0 0/0 0/0 .text            actionOff__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::actionOff() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/actionOff__15daObjFPillar2_cFv.s"
}
#pragma pop

/* 80BEA98C-80BEAAE4 000D4C 0158+00 1/1 0/0 0/0 .text actionOnWaitInit__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::actionOnWaitInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/actionOnWaitInit__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4F0-80BEB4F4 00002C 0004+00 0/2 0/0 0/0 .rodata          @4086 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4086 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x80BEB4F0, &lit_4086);
#pragma pop

/* 80BEAAE4-80BEAC68 000EA4 0184+00 1/0 0/0 0/0 .text            actionOnWait__15daObjFPillar2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::actionOnWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/actionOnWait__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4F4-80BEB4F8 000030 0004+00 0/1 0/0 0/0 .rodata          @4142 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4142 = 30.0f;
COMPILER_STRIP_GATE(0x80BEB4F4, &lit_4142);
#pragma pop

/* 80BEB4F8-80BEB4FC 000034 0004+00 0/1 0/0 0/0 .rodata          @4143 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4143 = 80.0f;
COMPILER_STRIP_GATE(0x80BEB4F8, &lit_4143);
#pragma pop

/* 80BEAC68-80BEADD0 001028 0168+00 1/1 0/0 0/0 .text            actionOnInit__15daObjFPillar2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::actionOnInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/actionOnInit__15daObjFPillar2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BEB4FC-80BEB500 000038 0004+00 0/1 0/0 0/0 .rodata          @4288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4288 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x80BEB4FC, &lit_4288);
#pragma pop

/* 80BEB500-80BEB504 00003C 0004+00 0/1 0/0 0/0 .rodata          @4289 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4289 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BEB500, &lit_4289);
#pragma pop

/* 80BEB504-80BEB508 000040 0004+00 0/1 0/0 0/0 .rodata          @4290 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4290 = 2.0f / 125.0f;
COMPILER_STRIP_GATE(0x80BEB504, &lit_4290);
#pragma pop

/* 80BEB508-80BEB50C 000044 0004+00 0/1 0/0 0/0 .rodata          @4291 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4291 = 15.0f;
COMPILER_STRIP_GATE(0x80BEB508, &lit_4291);
#pragma pop

/* 80BEB50C-80BEB510 000048 0004+00 0/1 0/0 0/0 .rodata          @4292 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4292 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BEB50C, &lit_4292);
#pragma pop

/* 80BEB510-80BEB514 00004C 0004+00 0/1 0/0 0/0 .rodata          @4293 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4293 = 8.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BEB510, &lit_4293);
#pragma pop

/* 80BEB514-80BEB518 000050 0004+00 0/1 0/0 0/0 .rodata          @4294 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4294 = 0x3B83126E;
COMPILER_STRIP_GATE(0x80BEB514, &lit_4294);
#pragma pop

/* 80BEB518-80BEB51C 000054 0004+00 0/1 0/0 0/0 .rodata          @4295 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4295 = 60.0f;
COMPILER_STRIP_GATE(0x80BEB518, &lit_4295);
#pragma pop

/* 80BEADD0-80BEB1B4 001190 03E4+00 1/0 0/0 0/0 .text            actionOn__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::actionOn() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/actionOn__15daObjFPillar2_cFv.s"
}
#pragma pop

/* 80BEB1B4-80BEB278 001574 00C4+00 1/1 0/0 0/0 .text            draw__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/draw__15daObjFPillar2_cFv.s"
}
#pragma pop

/* 80BEB278-80BEB3C8 001638 0150+00 1/1 0/0 0/0 .text            _delete__15daObjFPillar2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFPillar2_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/_delete__15daObjFPillar2_cFv.s"
}
#pragma pop

/* 80BEB3C8-80BEB3E8 001788 0020+00 1/0 0/0 0/0 .text daObjFPillar2_Draw__FP15daObjFPillar2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFPillar2_Draw(daObjFPillar2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/daObjFPillar2_Draw__FP15daObjFPillar2_c.s"
}
#pragma pop

/* 80BEB3E8-80BEB408 0017A8 0020+00 1/0 0/0 0/0 .text daObjFPillar2_Execute__FP15daObjFPillar2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFPillar2_Execute(daObjFPillar2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/daObjFPillar2_Execute__FP15daObjFPillar2_c.s"
}
#pragma pop

/* 80BEB408-80BEB428 0017C8 0020+00 1/0 0/0 0/0 .text daObjFPillar2_Delete__FP15daObjFPillar2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFPillar2_Delete(daObjFPillar2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/daObjFPillar2_Delete__FP15daObjFPillar2_c.s"
}
#pragma pop

/* 80BEB428-80BEB448 0017E8 0020+00 1/0 0/0 0/0 .text daObjFPillar2_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjFPillar2_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/daObjFPillar2_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BEB448-80BEB490 001808 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80BEB490-80BEB4AC 001850 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80BEB490(void* _this, u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/func_80BEB490.s"
}
#pragma pop

/* 80BEB4AC-80BEB4B4 00186C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BEB4AC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/func_80BEB4AC.s"
}
#pragma pop

/* 80BEB4B4-80BEB4BC 001874 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BEB4B4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar2/d_a_obj_firepillar2/func_80BEB4B4.s"
}
#pragma pop

/* 80BEB51C-80BEB51C 000058 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
