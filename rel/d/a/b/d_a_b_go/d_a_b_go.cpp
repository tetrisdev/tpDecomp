//
// Generated By: dol2asm
// Translation Unit: d_a_b_go
//

#include "rel/d/a/b/d_a_b_go/d_a_b_go.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "SSystem/SComponent/c_lib.h"
#include "SSystem/SComponent/c_math.h"
#include "Z2AudioLib/Z2Creature.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

//
// Types:
//

enum daB_GO_ANM {
    /* 0x04 */ ANM_ATTACK = 4,
    /* 0x05 */ ANM_DAMAGE_01,
    /* 0x06 */ ANM_DAMAGE_02,
    /* 0x07 */ ANM_DEAD_01,
    /* 0x08 */ ANM_DEAD_02,
    /* 0x09 */ ANM_FALL,
    /* 0x0A */ ANM_START_L,
    /* 0x0B */ ANM_START_R,
    /* 0x0C */ ANM_STEP,
    /* 0x0D */ ANM_TRAP,
    /* 0x0E */ ANM_WAIT_02,
    /* 0x0F */ ANM_WAIT_03,
    /* 0x10 */ ANM_WALK,
};

enum daB_GO_Action {
    /* 0x0 */ ACT_WAIT,
    /* 0x1 */ ACT_WALK,
    /* 0x2 */ ACT_ATTACK,
};

#define RES_IS_MODEL 0x13

class daB_GO_HIO_c {
public:
    /* 806031AC */ daB_GO_HIO_c();
    /* 80603F9C */ ~daB_GO_HIO_c();

    /* 0x00 */ u8 field_0x0[4];
    /* 0x04 */ s8 field_0x4;
    /* 0x08 */ f32 mSmallSize;
    /* 0x0C */ f32 mNormalSpeed;
    /* 0x10 */ f32 mAttackInitRange;
    /* 0x14 */ bool mDisplayModelImage;
};

class b_go_class : public fopAc_ac_c {
public:
    /* 80603CA0 */ b_go_class();

    // private:
    /* 0x568 */ u8 field_0x568[0x5ac - 0x568];
    /* 0x5AC */ request_of_phase_process_class mPhase;
    /* 0x5B4 */ mDoExt_McaMorfSO* mpMorf;
    /* 0x5B8 */ Z2CreatureEnemy mZ2Enemy;
    /* 0x65C */ int field_0x65c;
    /* 0x660 */ u8 field_0x660;
    /* 0x661 */ u8 field_0x661[0x668 - 0x661];
    /* 0x668 */ s16 field_0x668;
    /* 0x66A */ s16 mActionID;
    /* 0x66C */ s16 field_0x66c;
    /* 0x66E */ u8 field_0x66e[0x67e - 0x66e];
    /* 0x67E */ s16 mAngleToPlayer;
    /* 0x680 */ f32 mDistToPlayer;
    /* 0x684 */ u8 field_0x684[4];
    /* 0x688 */ s16 field_0x688[4];
    /* 0x690 */ s16 field_0x690;
    /* 0x692 */ s16 field_0x692;
    /* 0x694 */ dBgS_AcchCir mAcchCir;
    /* 0x6D4 */ dBgS_Acch mAcch;
    /* 0x8AC */ dCcD_Stts mStts;
    /* 0x8E8 */ dCcD_Sph field_0x8e8;
    /* 0xA20 */ dCcD_Sph field_0xa20;
    /* 0xB58 */ dCcD_Cyl field_0xb58;
    /* 0xC94 */ u8 field_0xc94[0xc9c - 0xc94];
    /* 0xC9C */ Z2CreatureEnemy* field_0xc9c;
    /* 0xCA0 */ u8 field_0xca0[0xcb8 - 0xca0];
    /* 0xCB8 */ u32 mGoronAcID[31];
    /* 0xD34 */ u8 field_0xd34;
};

//
// Forward References:
//

extern "C" void __ct__12daB_GO_HIO_cFv();
extern "C" static void daB_GO_Draw__FP10b_go_class();
extern "C" static void anm_init__FP10b_go_classifUcf();
extern "C" static void damage_check__FP10b_go_class();
extern "C" static void h_wait__FP10b_go_class();
extern "C" static void h_walk__FP10b_go_class();
extern "C" static void h_attack__FP10b_go_class();
extern "C" static void action__FP10b_go_class();
extern "C" static void daB_GO_Execute__FP10b_go_class();
extern "C" static bool daB_GO_IsDelete__FP10b_go_class();
extern "C" static void daB_GO_Delete__FP10b_go_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daB_GO_Create__FP10fopAc_ac_c();
extern "C" void __ct__10b_go_classFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12daB_GO_HIO_cFv();
extern "C" void __sinit_d_a_b_go_cpp();
extern "C" static void func_80604020();
extern "C" static void func_80604028();
extern "C" extern char const* const d_a_b_go__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80604044-80604048 000000 0004+00 6/6 0/0 0/0 .rodata          @3646 */
SECTION_RODATA static f32 const lit_3646 = 1.5f;
COMPILER_STRIP_GATE(0x80604044, &lit_3646);

/* 80604048-8060404C 000004 0004+00 0/1 0/0 0/0 .rodata          @3647 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3647 = 15.0f;
COMPILER_STRIP_GATE(0x80604048, &lit_3647);
#pragma pop

/* 8060404C-80604050 000008 0004+00 0/3 0/0 0/0 .rodata          @3648 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3648 = 300.0f;
COMPILER_STRIP_GATE(0x8060404C, &lit_3648);
#pragma pop

/* 80604094-806040B4 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_GO_Method */
SECTION_DATA static void* l_daB_GO_Method[8] = {
    (void*)daB_GO_Create__FP10fopAc_ac_c,
    (void*)daB_GO_Delete__FP10b_go_class,
    (void*)daB_GO_Execute__FP10b_go_class,
    (void*)daB_GO_IsDelete__FP10b_go_class,
    (void*)daB_GO_Draw__FP10b_go_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 806040B4-806040E4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_GO */
SECTION_DATA extern void* g_profile_B_GO[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x020F0000, (void*)&g_fpcLf_Method,
    (void*)0x00000D38, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00D70000, (void*)&l_daB_GO_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 806040E4-806040F0 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 806040F0-806040FC 00005C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806040FC-80604108 000068 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80604108-8060412C 000074 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80604028,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80604020,
};

/* 8060412C-80604138 000098 000C+00 2/2 0/0 0/0 .data            __vt__12daB_GO_HIO_c */
SECTION_DATA extern void* __vt__12daB_GO_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_GO_HIO_cFv,
};

/* 806031AC-806031EC 0000EC 0040+00 1/1 0/0 0/0 .text            __ct__12daB_GO_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_GO_HIO_c::daB_GO_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__ct__12daB_GO_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80604140-80604144 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80604140[4];

/* 80604144-80604150 00000C 000C+00 1/1 0/0 0/0 .bss             @3641 */
static u8 lit_3641[12];

/* 80604150-80604168 000018 0018+00 6/6 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[24];

/* 806031EC-80603270 00012C 0084+00 1/0 0/0 0/0 .text            daB_GO_Draw__FP10b_go_class */
static int daB_GO_Draw(b_go_class* b_go) {
    if ((*(daB_GO_HIO_c*)l_HIO).mDisplayModelImage) {
        J3DModel* model = b_go->mpMorf->getModel();

        g_env_light.settingTevStruct(0, &b_go->current.pos, &b_go->mTevStr);
        g_env_light.setLightTevColorType_MAJI(model->getModelData(), &b_go->mTevStr);
        b_go->mpMorf->entryDL();
    }
    return 1;
}

/* ############################################################################################## */
/* 80604050-80604054 00000C 0004+00 1/5 0/0 0/0 .rodata          @3673 */
SECTION_RODATA static u8 const lit_3673[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80604050, &lit_3673);

/* 80604054-80604058 000010 0004+00 1/1 0/0 0/0 .rodata          @3674 */
SECTION_RODATA static f32 const lit_3674 = -1.0f;
COMPILER_STRIP_GATE(0x80604054, &lit_3674);

/* 8060408C-8060408C 000048 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8060408C = "B_go";
#pragma pop

/* 80603270-8060331C 0001B0 00AC+00 3/3 0/0 0/0 .text            anm_init__FP10b_go_classifUcf */
// matches with literals
#ifdef NONMATCHING
static void anm_init(b_go_class* b_go, int resID, f32 param_2, u8 param_3, f32 param_4) {
    J3DAnmTransform* bck = (J3DAnmTransform*)dComIfG_getObjectRes("B_go", resID);
    b_go->mpMorf->setAnm(bck, param_3, param_2, param_4, 0.0f, -1.0f);
    b_go->field_0x65c = resID;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(b_go_class* b_go, int resID, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/anm_init__FP10b_go_classifUcf.s"
}
#pragma pop
#endif

/* 8060331C-80603320 00025C 0004+00 1/1 0/0 0/0 .text            damage_check__FP10b_go_class */
static void damage_check(b_go_class* b_go) {
    /* empty function */
}

/* ############################################################################################## */
/* 80604058-8060405C 000014 0004+00 0/3 0/0 0/0 .rodata          @3702 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3702 = 10.0f;
COMPILER_STRIP_GATE(0x80604058, &lit_3702);
#pragma pop

/* 8060405C-80604060 000018 0004+00 1/4 0/0 0/0 .rodata          @3703 */
SECTION_RODATA static f32 const lit_3703 = 1.0f;
COMPILER_STRIP_GATE(0x8060405C, &lit_3703);

/* 80604060-80604064 00001C 0004+00 0/3 0/0 0/0 .rodata          @3704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3704 = 100.0f;
COMPILER_STRIP_GATE(0x80604060, &lit_3704);
#pragma pop

/* 80604064-80604068 000020 0004+00 0/2 0/0 0/0 .rodata          @3705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3705 = 60.0f;
COMPILER_STRIP_GATE(0x80604064, &lit_3705);
#pragma pop

/* 80603320-806033F0 000260 00D0+00 1/1 0/0 0/0 .text            h_wait__FP10b_go_class */
// matches with literals
#ifdef NONMATCHING
static void h_wait(b_go_class* b_go) {
    b_go->speedF = 0.0f;

    switch (b_go->field_0x66c) {
    case 0:
        anm_init(b_go, ANM_WAIT_03, 10.0f, 2, 1.0f);
        b_go->field_0x66c = 1;
        b_go->field_0x688[0] = cM_rndF(60.0f) + 100.0f;
        break;
    case 1:
        if (b_go->field_0x688[0] == 0 ||
            b_go->mDistToPlayer < (*(daB_GO_HIO_c*)l_HIO).mAttackInitRange) {
            b_go->mActionID = ACT_WALK;
            b_go->field_0x66c = 0;
        }
        break;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void h_wait(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/h_wait__FP10b_go_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80604068-8060406C 000024 0004+00 0/1 0/0 0/0 .rodata          @3719 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3719 = 150.0f;
COMPILER_STRIP_GATE(0x80604068, &lit_3719);
#pragma pop

/* 806033F0-80603508 000330 0118+00 1/1 0/0 0/0 .text            h_walk__FP10b_go_class */
// matches with literals
#ifdef NONMATCHING
static void h_walk(b_go_class* b_go) {
    f32 speed = 0.0f;

    switch (b_go->field_0x66c) {
    case 0:
        anm_init(b_go, ANM_WALK, 10.0f, 2, 1.0f);
        b_go->field_0x66c = 1;
        b_go->field_0x688[0] = cM_rndF(60.0f) + 150.0f;
        break;
    case 1:
        speed = (*(daB_GO_HIO_c*)l_HIO).mNormalSpeed;
        if (b_go->field_0x688[0] == 0) {
            b_go->mActionID = ACT_WAIT;
            b_go->field_0x66c = 0;
        } else if (b_go->mDistToPlayer < (*(daB_GO_HIO_c*)l_HIO).mAttackInitRange) {
            b_go->mActionID = ACT_ATTACK;
            b_go->field_0x66c = 0;
        }
        break;
    }

    cLib_addCalc2(&b_go->speedF, speed, 1.0f, 1.0f);
    cLib_addCalcAngleS2(&b_go->current.angle.y, b_go->mAngleToPlayer, 1, 0x200);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void h_walk(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/h_walk__FP10b_go_class.s"
}
#pragma pop
#endif

/* 80603508-80603638 000448 0130+00 1/1 0/0 0/0 .text            h_attack__FP10b_go_class */
#ifdef NONMATCHING
static void h_attack(b_go_class* b_go) {
    int frame = b_go->mpMorf->getFrame();
    cLib_addCalc0(&b_go->speedF, 1.0f, 1.0f);

    switch (b_go->field_0x66c) {
    case 0:
        anm_init(b_go, ANM_ATTACK, 10.0f, 0, 1.0f);
        b_go->field_0x66c = 1;
        break;
    case 1:
        if (frame >= 25 && frame <= 33) {
            if (frame == 25) {
                b_go->mZ2Enemy.startCreatureSound(Z2SE_CM_KAZAKIRI_S, 0, -1);
                b_go->field_0x660 = 1;
            } else {
                b_go->field_0x660 = 2;
            }
        }

        if (b_go->mpMorf->isStop()) {
            b_go->mActionID = ACT_WAIT;
            b_go->field_0x66c = 0;
        }
        break;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void h_attack(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/h_attack__FP10b_go_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8060406C-80604070 000028 0004+00 0/1 0/0 0/0 .rodata          @3784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3784 = 1000.0f;
COMPILER_STRIP_GATE(0x8060406C, &lit_3784);
#pragma pop

/* 80604070-80604074 00002C 0004+00 0/1 0/0 0/0 .rodata          @3785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3785 = 200.0f;
COMPILER_STRIP_GATE(0x80604070, &lit_3785);
#pragma pop

/* 80603638-806037E8 000578 01B0+00 1/1 0/0 0/0 .text            action__FP10b_go_class */
#ifdef NONMATCHING
static void action(b_go_class* b_go) {
    b_go->mAngleToPlayer = fopAcM_searchActorAngleY(b_go, (fopAc_ac_c*)dComIfGp_getPlayer(0));
    b_go->mDistToPlayer = fopAcM_searchActorDistance(b_go, (fopAc_ac_c*)dComIfGp_getPlayer(0));

    b_go->mStatus = b_go->mStatus;
    b_go->mAttentionInfo.mFlags = 0;

    if (b_go->field_0x688[1] == 0) {
        if (b_go->field_0x692 != 2) {
            b_go->field_0x692 = 2;
            b_go->field_0x688[1] = cM_rndF(200.0f) + 1000.0f;
        } else {
            b_go->field_0x692 = 1;
            b_go->field_0x688[1] = cM_rndF(100.0f) + 300.0f;
        }
    }

    switch (b_go->mActionID) {
    case ACT_WAIT:
        h_wait(b_go);
        break;
    case ACT_WALK:
        h_walk(b_go);
        break;
    case ACT_ATTACK:
        h_attack(b_go);
        break;
    }

    cLib_addCalcAngleS2(&b_go->shape_angle.y, b_go->current.angle.y, 4, 0x2000);
    mDoMtx_stack_c::YrotS(b_go->current.angle.y);

    cXyz speed;
    speed.x = 0.0f;
    speed.y = 0.0f;
    speed.z = b_go->speedF;

    cXyz newSpeed;
    MtxPosition(&speed, &newSpeed);
    b_go->speed.x = newSpeed.x;
    b_go->speed.z = newSpeed.z;

    PSVECAdd(&b_go->current.pos, &b_go->speed, &b_go->current.pos);
    b_go->speed.y += b_go->mGravity;

    b_go->mAcch.CrrPos(dComIfG_Bgsp());
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/action__FP10b_go_class.s"
}
#pragma pop
#endif

/* 806037E8-806038EC 000728 0104+00 2/1 0/0 0/0 .text            daB_GO_Execute__FP10b_go_class */
#ifdef NONMATCHING
static int daB_GO_Execute(b_go_class* b_go) {
    b_go->field_0x668++;

    for (int i = 0; i < 4; i++) {
        if (b_go->field_0x688[i] != 0) {
            b_go->field_0x688[i]--;
        }
    }

    if (b_go->field_0x690 != 0) {
        b_go->field_0x690--;
    }

    action(b_go);
    damage_check(b_go);

    mDoMtx_stack_c::transS(b_go->current.pos.x, b_go->current.pos.y, b_go->current.pos.z);
    mDoMtx_stack_c::YrotM(b_go->shape_angle.y);
    mDoMtx_stack_c::scaleM((*(daB_GO_HIO_c*)l_HIO).mSmallSize, (*(daB_GO_HIO_c*)l_HIO).mSmallSize, (*(daB_GO_HIO_c*)l_HIO).mSmallSize);
    mDoMtx_stack_c::copy(b_go->mpMorf->getModel()->getBaseTRMtx());
    b_go->mpMorf->play(0, dComIfGp_getReverb(b_go->current.roomNo));
    b_go->mpMorf->modelCalc();

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_GO_Execute(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/daB_GO_Execute__FP10b_go_class.s"
}
#pragma pop
#endif

/* 806038EC-806038F4 00082C 0008+00 1/0 0/0 0/0 .text            daB_GO_IsDelete__FP10b_go_class */
static int daB_GO_IsDelete(b_go_class* param_0) {
    return 1;
}

/* 806038F4-8060395C 000834 0068+00 1/0 0/0 0/0 .text            daB_GO_Delete__FP10b_go_class */
static int daB_GO_Delete(b_go_class* b_go) {
    dComIfG_resDelete(&b_go->mPhase, "B_go");

    if (b_go->field_0xd34) {
        data_80604140[0] = 0;
    }

    if (b_go->mHeap != NULL) {
        b_go->mpMorf->stopZelAnime();
    }

    return 1;
}

/* 8060395C-80603A54 00089C 00F8+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
// matches with literals
#ifdef NONMATCHING
static int useHeapInit(fopAc_ac_c* i_actor) {
    b_go_class* b_go = (b_go_class*)i_actor;

    b_go->mpMorf = new mDoExt_McaMorfSO((J3DModelData*)dComIfG_getObjectRes("B_go", RES_IS_MODEL),
                                        NULL, NULL,
                                        (J3DAnmTransform*)dComIfG_getObjectRes("B_go", ANM_WAIT_03),
                                        2, 1.0f, 0, -1, &b_go->mZ2Enemy, 0x80000, 0x11000084);
    
    if (b_go->mpMorf == NULL || b_go->mpMorf->getModel() == NULL) {
        return 0;
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80604074-80604078 000030 0004+00 0/1 0/0 0/0 .rodata          @3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3924 = -500.0f;
COMPILER_STRIP_GATE(0x80604074, &lit_3924);
#pragma pop

/* 80604078-8060407C 000034 0004+00 0/1 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3925 = -2000.0f;
COMPILER_STRIP_GATE(0x80604078, &lit_3925);
#pragma pop

/* 8060407C-80604080 000038 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3926 = 500.0f;
COMPILER_STRIP_GATE(0x8060407C, &lit_3926);
#pragma pop

/* 80604080-80604084 00003C 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 2000.0f;
COMPILER_STRIP_GATE(0x80604080, &lit_3927);
#pragma pop

/* 80604084-80604088 000040 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = -7.0f;
COMPILER_STRIP_GATE(0x80604084, &lit_3928);
#pragma pop

/* 80604088-8060408C 000044 0004+00 0/1 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 65536.0f;
COMPILER_STRIP_GATE(0x80604088, &lit_3929);
#pragma pop

/* 80603A54-80603CA0 000994 024C+00 1/0 0/0 0/0 .text            daB_GO_Create__FP10fopAc_ac_c */
// matches with literals
#ifdef NONMATCHING
static int daB_GO_Create(fopAc_ac_c* i_actor) {
    if (!fopAcM_CheckCondition(i_actor, 8)) {
        new (i_actor) b_go_class();
        fopAcM_OnCondition(i_actor, 8);
    }
    b_go_class* b_go = (b_go_class*)i_actor;

    int phase_state = dComIfG_resLoad(&b_go->mPhase, "B_go");
    if (phase_state == cPhs_COMPLEATE_e) {
        if (!fopAcM_entrySolidHeap(i_actor, (heapCallbackFunc)useHeapInit, 0x4B000)) {
            return cPhs_ERROR_e;
        }

        if (data_80604140[0] == 0) {
            b_go->field_0xd34 = 1;
            data_80604140[0] = 1;
            (*(daB_GO_HIO_c*)l_HIO).field_0x4 = -1;
        }

        b_go->mAttentionInfo.mFlags = 4;
        b_go->mCullMtx = b_go->mpMorf->getModel()->getBaseTRMtx();
        fopAcM_SetMin(b_go, -500.0f, -2000.0f, -500.0f);
        fopAcM_SetMax(b_go, 500.0f, 2000.0f, 500.0f);
        b_go->field_0x562 = 1000;
        b_go->field_0x560 = 1000;

        b_go->mAcch.Set(&b_go->current.pos, &b_go->next.pos, b_go, 1, &b_go->mAcchCir,
                        &b_go->speed, NULL, NULL);
        b_go->mAcchCir.SetWall(100.0f, 300.0f);

        b_go->mZ2Enemy.init(&b_go->current.pos, &b_go->mEyePos, 3, 1);
        b_go->field_0xc9c = &b_go->mZ2Enemy;

        b_go->mGravity = -7.0f;
        b_go->mActionID = ACT_WAIT;

        daB_GO_Execute(b_go);

        cXyz pos;
        pos.y = b_go->current.pos.y;

        csXyz angle(0, 0, 0);

        for (int i = 0; i < 31; i++) {
            pos.x = cM_rndFX(500.0f) + b_go->current.pos.x;
            pos.z = cM_rndFX(500.0f) + b_go->current.pos.z;
            angle.y = cM_rndF(65536.0f);

            b_go->mGoronAcID[i] =
                fopAcM_createChild(PROC_B_GOS, fopAcM_GetID(b_go), i, &pos, fopAcM_GetRoomNo(b_go),
                                   &angle, NULL, -1, NULL);
        }
    }

    return phase_state;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_GO_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/daB_GO_Create__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* 80603CA0-80603E54 000BE0 01B4+00 1/1 0/0 0/0 .text            __ct__10b_go_classFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm b_go_class::b_go_class() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__ct__10b_go_classFv.s"
}
#pragma pop

/* 80603E54-80603E9C 000D94 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80603E9C-80603EE4 000DDC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80603EE4-80603F2C 000E24 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80603F2C-80603F9C 000E6C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80603F9C-80603FE4 000EDC 0048+00 2/1 0/0 0/0 .text            __dt__12daB_GO_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_GO_HIO_c::~daB_GO_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__12daB_GO_HIO_cFv.s"
}
#pragma pop

/* 80603FE4-80604020 000F24 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_b_go_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_go_cpp(){
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__sinit_d_a_b_go_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80603FE4, __sinit_d_a_b_go_cpp);
#pragma pop

/* 80604020-80604028 000F60 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80604020() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/func_80604020.s"
}
#pragma pop

/* 80604028-80604030 000F68 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80604028() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/func_80604028.s"
}
#pragma pop

/* 8060408C-8060408C 000048 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
