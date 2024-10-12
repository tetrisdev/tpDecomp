/**
 * @file d_a_myna.cpp
 * 
*/

#include "d/actor/d_a_myna.h"
#include "d/actor/d_a_player.h"
#include "d/d_kankyo.h"
#include "d/d_msg_object.h"
#include "dol2asm.h"
#include "d/actor/d_a_obj_ss_item.h"
#include "d/actor/d_a_tag_myna_light.h"
#include "SSystem/SComponent/c_math.h"

//
// Forward References:
//

extern "C" static void createHeapCallBack__FP10fopAc_ac_c();
extern "C" static void jntNodeCallBack__FP8J3DJointi();
extern "C" static void daMyna_searchSSItem__FPvPv();
extern "C" static void daMyna_searchLight__FPvPv();
extern "C" static void daMyna_searchEvtTag__FPvPv();
extern "C" void baseMotion00__8daMyna_cFi();
extern "C" void baseMotion01__8daMyna_cFi();
extern "C" void baseMotion02__8daMyna_cFi();
extern "C" void baseMotion03__8daMyna_cFi();
extern "C" void baseMotion04__8daMyna_cFi();
extern "C" void baseMotion05__8daMyna_cFi();
extern "C" void baseMotion06__8daMyna_cFi();
extern "C" void create__8daMyna_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void destroy__8daMyna_cFv();
extern "C" void draw__8daMyna_cFv();
extern "C" void execute__8daMyna_cFv();
extern "C" void createHeap__8daMyna_cFv();
extern "C" void jntNodeCB__8daMyna_cFP8J3DJointP8J3DModel();
extern "C" void attack_wait_init__8daMyna_cFv();
extern "C" void attack_wait_move__8daMyna_cFv();
extern "C" void attack_before_talk_init__8daMyna_cFv();
extern "C" void attack_before_talk_move__8daMyna_cFv();
extern "C" void attack_fly_init__8daMyna_cFv();
extern "C" void attack_fly_move__8daMyna_cFv();
extern "C" void attack_init__8daMyna_cFv();
extern "C" void attack_move__8daMyna_cFv();
extern "C" void attack_after_talk_init__8daMyna_cFv();
extern "C" void attack_after_talk_move__8daMyna_cFv();
extern "C" void greet_wait_init__8daMyna_cFv();
extern "C" void greet_wait_move__8daMyna_cFv();
extern "C" void greet_talk_init__8daMyna_cFv();
extern "C" void greet_talk_move__8daMyna_cFv();
extern "C" void shopping_wait_init__8daMyna_cFv();
extern "C" void shopping_wait_move__8daMyna_cFv();
extern "C" void shopping_talk_init__8daMyna_cFv();
extern "C" void shopping_talk_move__8daMyna_cFv();
extern "C" void thanks_talk_init__8daMyna_cFv();
extern "C" void thanks_talk_move__8daMyna_cFv();
extern "C" void byebye_talk_init__8daMyna_cFv();
extern "C" void byebye_talk_move__8daMyna_cFv();
extern "C" void turn_on_start_init__8daMyna_cFv();
extern "C" void turn_on_start_move__8daMyna_cFv();
extern "C" void turn_on_init__8daMyna_cFv();
extern "C" void turn_on_move__8daMyna_cFv();
extern "C" void turn_on_end1_init__8daMyna_cFv();
extern "C" void turn_on_end1_move__8daMyna_cFv();
extern "C" void turn_on_end2_init__8daMyna_cFv();
extern "C" void turn_on_end2_move__8daMyna_cFv();
extern "C" void turn_on_end3_init__8daMyna_cFv();
extern "C" void turn_on_end3_move__8daMyna_cFv();
extern "C" void wolf_talk_init__8daMyna_cFv();
extern "C" void wolf_talk_move__8daMyna_cFv();
extern "C" void attack_wait2_init__8daMyna_cFv();
extern "C" void attack_wait2_move__8daMyna_cFv();
extern "C" void attack_before_talk2_init__8daMyna_cFv();
extern "C" void attack_before_talk2_move__8daMyna_cFv();
extern "C" void attack_fly2_init__8daMyna_cFv();
extern "C" void attack_fly2_move__8daMyna_cFv();
extern "C" void attack2_init__8daMyna_cFv();
extern "C" void attack2_move__8daMyna_cFv();
extern "C" void attack2_talk_init__8daMyna_cFv();
extern "C" void attack2_talk_move__8daMyna_cFv();
extern "C" void soldoutItem__8daMyna_cFUi();
extern "C" void fly_attack_move__8daMyna_cFv();
extern "C" void fly_return_move__8daMyna_cFv();
extern "C" void fly_body_wave__8daMyna_cFv();
extern "C" void talkAnime__8daMyna_cFP9msg_class();
extern "C" void chkEvent__8daMyna_cFv();
extern "C" void orderEvent__8daMyna_cFv();
extern "C" void deleteItem__8daMyna_cFi();
extern "C" void deleteItem__8daMyna_cFUi();
extern "C" void initiate__8daMyna_cFv();
extern "C" void setItemInfo__8daMyna_cFv();
extern "C" void setRoomNo__8daMyna_cFv();
extern "C" void setCollision__8daMyna_cFv();
extern "C" void set_mtx__8daMyna_cFv();
extern "C" void animePlay__8daMyna_cFv();
extern "C" void setMcaMorfAnm__8daMyna_cFP18J3DAnmTransformKeyffiii();
extern "C" void setBtpAnm__8daMyna_cFP16J3DAnmTexPatternP12J3DModelDatafi();
extern "C" void getTrnsfrmKeyAnm__8daMyna_cFPc();
extern "C" void getTexPtrnAnm__8daMyna_cFPc();
extern "C" void checkEndAnm__8daMyna_cFf();
extern "C" void checkEndAnm__8daMyna_cFP12J3DFrameCtrl();
extern "C" void getItemNumMax__8daMyna_cFv();
extern "C" void getItemType__8daMyna_cFPv();
extern "C" void getFlowNodeNum__8daMyna_cFv();
extern "C" void checkDead__8daMyna_cFv();
extern "C" void chkPlayerInEvtArea__8daMyna_cFP10fopAc_ac_c4cXyz();
extern "C" void animeControl__8daMyna_cFv();
extern "C" void setAnimeType__8daMyna_cFUcf();
extern "C" void playDefaultWaitAnime__8daMyna_cFv();
extern "C" void setDefaultWaitAnime__8daMyna_cFUc();
extern "C" static void daMyna_Create__FPv();
extern "C" static void daMyna_Delete__FPv();
extern "C" static void daMyna_Execute__FPv();
extern "C" static void daMyna_Draw__FPv();
extern "C" static bool daMyna_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daMyna_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void getHeadTopPos__9daPy_py_cCFv();
extern "C" void __dt__8daMyna_cFv();
extern "C" void func_8094ABAC(void* _this, s16*);
extern "C" void func_8094ABC8(void* _this, int, int);
extern "C" void __sinit_d_a_myna_cpp();
extern "C" u8 const mCcDSph__8daMyna_c[64];
extern "C" extern char const* const d_a_myna__stringBase0;
extern "C" u8 mBaseMotionTBL__8daMyna_c[84];
extern "C" void* __vt__8daMyna_c[3];
extern "C" void* __vt__12J3DFrameCtrl[3];
extern "C" void* __vt__8cM3dGAab[3];
extern "C" void* __vt__8cM3dGSph[3];
extern "C" void* __vt__10cCcD_GStts[3];
extern "C" void* __vt__10dCcD_GStts[3];

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FUi();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcEx_IsExist__FUi();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void convPId__14dEvt_control_cFUi();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void getStatus__12dMsgObject_cFv();
extern "C" void dMsgObject_getTotalPrice__Fv();
extern "C" void dMsgObject_setTotalPrice__FUs();
extern "C" void dMsgObject_addTotalPrice__Fs();
extern "C" void dMsgObject_getTotalPayment__Fv();
extern "C" void dMsgObject_setTotalPayment__FUs();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void getMsg__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void removeTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();
extern "C" void getExchangeItemPtr__14daObj_SSItem_cFv();
extern "C" void setTurnOnOffChange__17daTag_MynaLight_cFv();

//
// Declarations:
//

/* 80945C6C-80945C8C 0000EC 0020+00 1/1 0/0 0/0 .text            createHeapCallBack__FP10fopAc_ac_c
 */
static void createHeapCallBack(fopAc_ac_c* i_this) {
    static_cast<daMyna_c*>(i_this)->createHeap();
}

/* 80945C8C-80945CD8 00010C 004C+00 1/1 0/0 0/0 .text            jntNodeCallBack__FP8J3DJointi */
static int jntNodeCallBack(J3DJoint* i_jnt, int param_1) {
    if (param_1 == 0) {
        if (j3dSys.getModel()->getUserArea() != 0) {
            ((daMyna_c*)j3dSys.getModel()->getUserArea())->jntNodeCB(i_jnt, j3dSys.getModel());
        }
    }
    return 1;
}

/* ############################################################################################## */
/* 8094B9F0-8094B9F4 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8094B9F4-8094B9F8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8094B9F8-8094B9FC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8094B9FC-8094BA00 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8094BA00-8094BA04 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8094BA04-8094BA08 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8094BA08-8094BA0C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8094BA0C-8094BA10 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8094BA10-8094BA14 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8094BA14-8094BA18 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8094BA18-8094BA1C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8094BA1C-8094BA20 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8094BA20-8094BA24 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8094BA24-8094BA28 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8094BA28-8094BA2C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8094BA2C-8094BA30 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 8094BA30-8094BA3C 000048 000C+00 1/1 0/0 0/0 .bss             @3847 */
static u8 lit_3847[12];

/* 8094BA3C-8094BA70 000054 0034+00 15/15 0/0 0/0 .bss             l_HOSTIO */
static daMyna_HIO_c l_HOSTIO;

/* 8094BA70-8094BA98 000088 0028+00 0/2 0/0 0/0 .bss             daMyna_targetActor */
static fopAc_ac_c* daMyna_targetActor[10];

/* 8094BA98-8094BAC0 0000B0 0028+00 0/2 0/0 0/0 .bss             daMyna_subActor */
static fopAc_ac_c* daMyna_subActor[10];

/* 8094BAC0-8094BAC4 0000D8 0004+00 7/7 0/0 0/0 .bss             daMyna_LightActor */
static daTag_MynaLight_c* daMyna_LightActor;

/* 8094BAC4-8094BAC8 0000DC 0004+00 0/2 0/0 0/0 .bss             daMyna_actor_count */
static s32 daMyna_actor_count;

/* 80945CD8-80945D9C 000158 00C4+00 1/1 0/0 0/0 .text            daMyna_searchSSItem__FPvPv */
static void* daMyna_searchSSItem(void* param_0, void* param_1) {
    if (fopAcM_IsActor(param_0) && (fopAcM_GetName(param_0) == PROC_OBJ_SSITEM ||
                                    fopAcM_GetName(param_0) == PROC_OBJ_SSDRINK ||
                                    fopAcM_GetName(param_0) == PROC_TAG_SSDRINK))
    {
        if ((fopAcM_GetParam(param_1) & 0xF0000000) == (fopAcM_GetParam(param_0) & 0xF0000000) &&
            daMyna_actor_count < 10)
        {
            fopAc_ac_c* pfVar4 = static_cast<fopAc_ac_c*>(param_0);
            if (fopAcM_GetName(param_0) == PROC_OBJ_SSITEM) {
                pfVar4 = static_cast<daObj_SSItem_c*>(param_0)->getExchangeItemPtr();
            }
            if (pfVar4 != NULL) {
                daMyna_targetActor[daMyna_actor_count] = pfVar4;
                daMyna_subActor[daMyna_actor_count] = static_cast<fopAc_ac_c*>(param_0);
                daMyna_actor_count++;
            }
        }
    }
    return 0;
}

/* 80945D9C-80945E0C 00021C 0070+00 1/1 0/0 0/0 .text            daMyna_searchLight__FPvPv */
static void* daMyna_searchLight(void* i_mynaLightTagActor, void* param_1) {
    if (fopAcM_IsActor(i_mynaLightTagActor) &&
        fopAcM_GetName(i_mynaLightTagActor) == PROC_TAG_MNLIGHT)
    {
        if ((fopAcM_GetParam(param_1) & 0xF0000000) ==
            (fopAcM_GetParam(i_mynaLightTagActor) & 0xF0000000))
        {
            daMyna_LightActor = static_cast<daTag_MynaLight_c*>(i_mynaLightTagActor);
        }
    }
    return 0;
}

/* ############################################################################################## */
/* 8094BAC8-8094BACC 0000E0 0004+00 8/9 0/0 0/0 .bss             daMyna_evtTagActor0 */
static fopAc_ac_c* daMyna_evtTagActor0;

/* 8094BACC-8094BAD0 0000E4 0004+00 2/2 0/0 0/0 .bss             daMyna_evtTagActor1 */
static fopAc_ac_c* daMyna_evtTagActor1;

/* 80945E0C-80945E80 00028C 0074+00 1/1 0/0 0/0 .text            daMyna_searchEvtTag__FPvPv */
static void* daMyna_searchEvtTag(void* i_evtTagActor, void* param_1) {
    if (fopAcM_IsActor(i_evtTagActor) && fopAcM_GetName(i_evtTagActor) == PROC_TAG_EVT) {
        if (((fopAcM_GetParam(i_evtTagActor) >> 24) & 0xF) == 0) {
            daMyna_evtTagActor0 = static_cast<fopAc_ac_c*>(i_evtTagActor);
        } else if (((fopAcM_GetParam(i_evtTagActor) >> 24) & 0xF) == 1) {
            daMyna_evtTagActor1 = static_cast<fopAc_ac_c*>(i_evtTagActor);
        }
        return 0;
    }
    return 0;
}

/* ############################################################################################## */
/* 8094B1B0-8094B1F0 000000 0040+00 7/7 0/0 0/0 .rodata          mCcDSph__8daMyna_c */
SECTION_RODATA dCcD_SrcSph const daMyna_c::mCcDSph = {
    0, 0x400, 1, 0x1F, 0, 0, 0x79, 0xA, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 15.0f,
};
COMPILER_STRIP_GATE(0x8094B1B0, &daMyna_c::mCcDSph);

/* 8094B1F0-8094B1F4 000040 0004+00 25/32 0/0 0/0 .rodata          @3926 */
SECTION_RODATA static u8 const lit_3926[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8094B1F0, &lit_3926);

/* 80945E80-80945EC0 000300 0040+00 1/0 0/0 0/0 .text            baseMotion00__8daMyna_cFi */
int daMyna_c::baseMotion00(int param_0) {
    if (param_0 != 0) {
        field_0x916 = 0;
        setAnimeType(1, 0.0f);
    }
    return 1;
}


/* 80945EC0-80945F00 000340 0040+00 1/0 0/0 0/0 .text            baseMotion01__8daMyna_cFi */
int daMyna_c::baseMotion01(int param_0) {
    if (param_0 != 0) {
        field_0x916 = 1;
        setAnimeType(11, 0.0f);
    }
    return 1;
}


/* 80945F00-80945F40 000380 0040+00 1/0 0/0 0/0 .text            baseMotion02__8daMyna_cFi */
int daMyna_c::baseMotion02(int param_0) {
    if (param_0 != 0) {
        field_0x916 = 2;
        setAnimeType(12, 0.0f);
    }
    return 1;
}


/* 80945F40-80945FA0 0003C0 0060+00 1/0 0/0 0/0 .text            baseMotion03__8daMyna_cFi */
int daMyna_c::baseMotion03(int param_0) {
    if (param_0 != 0) {
        field_0x916 = 3;
        setAnimeType(9, 0.0f);
    } else {
        if (field_0x91E != 0) {
            setAnimeType(11, 0.0f);
        }
    }
    return 1;
}


/* 80945FA0-80946000 000420 0060+00 1/0 0/0 0/0 .text            baseMotion04__8daMyna_cFi */
int daMyna_c::baseMotion04(int param_0) {
    if (param_0 != 0) {
        field_0x916 = 4;
        setAnimeType(10, 0.0f);
    } else {
        if (field_0x91E != 0) {
            setAnimeType(12, 0.0f);
        }
    }
    return 1;
}


/* 80946000-80946060 000480 0060+00 1/0 0/0 0/0 .text            baseMotion05__8daMyna_cFi */
int daMyna_c::baseMotion05(int param_0) {
    if (param_0 != 0) {
        field_0x916 = 5;
        setAnimeType(13, 0.0f);
    } else {
        if (field_0x91E != 0) {
            setAnimeType(14, 0.0f);
        }
    }
    return 1;
}


/* 80946060-809460A0 0004E0 0040+00 1/0 0/0 0/0 .text            baseMotion06__8daMyna_cFi */
int daMyna_c::baseMotion06(int param_0) {
    if (param_0 != 0) {
        field_0x916 = 6;
        setAnimeType(14, 0.0f);
    }
    return 1;
}


/* ############################################################################################## */
/* 8094B24C-8094B24C 00009C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8094B24C = "MYNA_hovering.bck";
SECTION_DEAD static char const* const stringBase_8094B25E = "MYNA_wait_a.bck";
SECTION_DEAD static char const* const stringBase_8094B26E = "MYNA_pick_a.bck";
SECTION_DEAD static char const* const stringBase_8094B27E = "MYNA_pick_b.bck";
SECTION_DEAD static char const* const stringBase_8094B28E = "MYNA_jump.bck";
SECTION_DEAD static char const* const stringBase_8094B29C = "MYNA_sidestepL.bck";
SECTION_DEAD static char const* const stringBase_8094B2AF = "MYNA_sidestepR.bck";
SECTION_DEAD static char const* const stringBase_8094B2C2 = "MYNA_lightup.bck";
SECTION_DEAD static char const* const stringBase_8094B2D3 = "MYNA_attack.bck";
SECTION_DEAD static char const* const stringBase_8094B2E3 = "MYNA_talk_a.bck";
SECTION_DEAD static char const* const stringBase_8094B2F3 = "MYNA_talk_b.bck";
SECTION_DEAD static char const* const stringBase_8094B303 = "MYNA_wait_b.bck";
SECTION_DEAD static char const* const stringBase_8094B313 = "MYNA_wait_c.bck";
SECTION_DEAD static char const* const stringBase_8094B323 = "MYNA_talk_c.bck";
SECTION_DEAD static char const* const stringBase_8094B333 = "MYNA_wait_d.bck";
SECTION_DEAD static char const* const stringBase_8094B343 = "MYNA.btp";
SECTION_DEAD static char const* const stringBase_8094B34C = "Npc_myna";
#pragma pop

/* 8094B360-8094B36C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8094B36C-8094B380 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8094B488-8094B590 000128 0108+00 2/3 0/0 0/0 .data            init_proc */
static daMyna_c::ProcFunc init_proc[] = {
    &daMyna_c::attack_wait_init,
    &daMyna_c::attack_before_talk_init,
    &daMyna_c::attack_fly_init,
    &daMyna_c::attack_init,
    &daMyna_c::attack_after_talk_init,
    &daMyna_c::greet_wait_init,
    &daMyna_c::greet_talk_init,
    &daMyna_c::shopping_wait_init,
    &daMyna_c::shopping_talk_init,
    &daMyna_c::thanks_talk_init,
    &daMyna_c::byebye_talk_init,
    &daMyna_c::turn_on_start_init,
    &daMyna_c::turn_on_init,
    &daMyna_c::turn_on_end1_init,
    &daMyna_c::turn_on_end2_init,
    &daMyna_c::turn_on_end3_init,
    &daMyna_c::wolf_talk_init,
    &daMyna_c::attack_wait2_init,
    &daMyna_c::attack_before_talk2_init,
    &daMyna_c::attack_fly2_init,
    &daMyna_c::attack2_init,
    &daMyna_c::attack2_talk_init,
};

/* 8094B698-8094B7A0 000338 0108+00 2/3 0/0 0/0 .data            move_proc */
static daMyna_c::ProcFunc move_proc[] = {
    &daMyna_c::attack_wait_move,
    &daMyna_c::attack_before_talk_move,
    &daMyna_c::attack_fly_move,
    &daMyna_c::attack_move,
    &daMyna_c::attack_after_talk_move,
    &daMyna_c::greet_wait_move,
    &daMyna_c::greet_talk_move,
    &daMyna_c::shopping_wait_move,
    &daMyna_c::shopping_talk_move,
    &daMyna_c::thanks_talk_move,
    &daMyna_c::byebye_talk_move,
    &daMyna_c::turn_on_start_move,
    &daMyna_c::turn_on_move,
    &daMyna_c::turn_on_end1_move,
    &daMyna_c::turn_on_end2_move,
    &daMyna_c::turn_on_end3_move,
    &daMyna_c::wolf_talk_move,
    &daMyna_c::attack_wait2_move,
    &daMyna_c::attack_before_talk2_move,
    &daMyna_c::attack_fly2_move,
    &daMyna_c::attack2_move,
    &daMyna_c::attack2_talk_move,
};

/* 8094B7A0-8094B7DC -00001 003C+00 2/2 0/0 0/0 .data            l_bckFileNameTBL */
static char* l_bckFileNameTBL[] = {
    "MYNA_hovering.bck", "MYNA_wait_a.bck",    "MYNA_pick_a.bck",    "MYNA_pick_b.bck",
    "MYNA_jump.bck",     "MYNA_sidestepL.bck", "MYNA_sidestepR.bck", "MYNA_lightup.bck",
    "MYNA_attack.bck",   "MYNA_talk_a.bck",    "MYNA_talk_b.bck",    "MYNA_wait_b.bck",
    "MYNA_wait_c.bck",   "MYNA_talk_c.bck",    "MYNA_wait_d.bck",
};

/* 8094B7DC-8094B7E0 -00001 0004+00 2/2 0/0 0/0 .data            l_btpFileNameTBL */
static char* l_btpFileNameTBL[] = {"MYNA.btp"};

/* 8094B7E0-8094B810 000480 0030+00 1/1 0/0 0/0 .data aParam$localstatic3$__ct__12daMyna_HIO_cFv
 */
// sinit matches, but with incorrect weak function ordering
#ifdef NONMATCHING
daMyna_HIO_c::daMyna_HIO_c() {
    // This could probably be cleaned up a bit. Equivalent to:
    /*
    field_0x04 = 1.0f;
    field_0x08 = 1.0f;
    field_0x0C = 0.08f;
    field_0x10 = 0.4f;
    field_0x14 = 30.0f;
    field_0x18 = 45.0f;
    field_0x1C = 42.0f;
    field_0x20 = 2.0f;
    field_0x24 = 75;
    field_0x26 = 4;
    field_0x28 = 32767;
    field_0x2A = 1500;
    field_0x2C = 5;
    field_0x2E = 8192;
    field_0x30 = 30;
    */
    static u8 data_8094B7E0[48] = {
        0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3D, 0xA3, 0xD7, 0x0A,
        0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0xF0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00,
        0x42, 0x28, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4B, 0x00, 0x04,
        0x7F, 0xFF, 0x05, 0xDC, 0x00, 0x05, 0x20, 0x00, 0x00, 0x1E, 0x00, 0x00,
    };
    memcpy(&field_0x04, data_8094B7E0, 0x30);
}
#else
SECTION_DATA static u8 data_8094B7E0[48] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3D, 0xA3, 0xD7, 0x0A, 0x3E, 0xCC, 0xCC, 0xCD,
    0x41, 0xF0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00, 0x42, 0x28, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x00, 0x4B, 0x00, 0x04, 0x7F, 0xFF, 0x05, 0xDC, 0x00, 0x05, 0x20, 0x00, 0x00, 0x1E, 0x00, 0x00,
};
#endif

/* 8094B810-8094B81C -00001 000C+00 0/1 0/0 0/0 .data            @3913 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3913[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)baseMotion00__8daMyna_cFi,
};
#pragma pop

/* 8094B81C-8094B828 -00001 000C+00 0/1 0/0 0/0 .data            @3914 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3914[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)baseMotion01__8daMyna_cFi,
};
#pragma pop

/* 8094B828-8094B834 -00001 000C+00 0/1 0/0 0/0 .data            @3915 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3915[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)baseMotion02__8daMyna_cFi,
};
#pragma pop

/* 8094B834-8094B840 -00001 000C+00 0/1 0/0 0/0 .data            @3916 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3916[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)baseMotion03__8daMyna_cFi,
};
#pragma pop

/* 8094B840-8094B84C -00001 000C+00 0/1 0/0 0/0 .data            @3917 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3917[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)baseMotion04__8daMyna_cFi,
};
#pragma pop

/* 8094B84C-8094B858 -00001 000C+00 0/1 0/0 0/0 .data            @3918 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3918[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)baseMotion05__8daMyna_cFi,
};
#pragma pop

/* 8094B858-8094B864 -00001 000C+00 0/1 0/0 0/0 .data            @3919 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3919[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)baseMotion06__8daMyna_cFi,
};
#pragma pop

/* 8094B864-8094B8B8 000504 0054+00 1/2 0/0 0/0 .data            mBaseMotionTBL__8daMyna_c */
// sinit matches, but with incorrect weak function ordering
#ifdef NONMATCHING
daMyna_c::BaseMotionFunc daMyna_c::mBaseMotionTBL[] = {
    &daMyna_c::baseMotion00, &daMyna_c::baseMotion01, &daMyna_c::baseMotion02,
    &daMyna_c::baseMotion03, &daMyna_c::baseMotion04, &daMyna_c::baseMotion05,
    &daMyna_c::baseMotion06,
};
#else
SECTION_DATA u8 daMyna_c::mBaseMotionTBL[84] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#endif

/* 809460A0-80946284 000520 01E4+00 1/1 0/0 0/0 .text            create__8daMyna_cFv */
int daMyna_c::create() {
    fopAcM_SetupActor(this, daMyna_c);
    cPhs__Step phase = (cPhs__Step)dComIfG_resLoad(&mPhase, "Npc_myna");
    if (phase != cPhs_COMPLEATE_e) {
        return phase;
    } else {
        if (!fopAcM_entrySolidHeap(this, (heapCallbackFunc)&createHeapCallBack, 0x21F0)) {
            return cPhs_ERROR_e;
        } else {
            fopAcM_SetMtx(this, mpMorf->getModel()->getBaseTRMtx());
            mCreature.init(&current.pos, &eyePos, 3, 1);
            initiate();
            setRoomNo();
            execute();
            field_0x844.set(field_0x82C);
            field_0x850.set(field_0x838);
            return phase;
        }
    }
}


/* 80946284-809462CC 000704 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 809462CC-80946314 00074C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80946314-80946370 000794 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80946370-809463B8 0007F0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 809463B8-8094640C 000838 0054+00 1/1 0/0 0/0 .text            destroy__8daMyna_cFv */
int daMyna_c::destroy() {
    dComIfG_resDelete(&mPhase, "Npc_myna");
    if (heap != NULL) {
        mpMorf->stopZelAnime();
    }
    return 1;
}

/* 8094640C-809464CC 00088C 00C0+00 1/1 0/0 0/0 .text            draw__8daMyna_cFv */
int daMyna_c::draw() {
    J3DModel* model = mpMorf->getModel();
    J3DModelData* modelData = model->getModelData();
    g_env_light.settingTevStruct(0, &current.pos, &tevStr);
    g_env_light.setLightTevColorType_MAJI(model, &tevStr);
    if (cLib_checkBit<u16>(field_0x914, 0x40)) {
        mBtpAnm.entry(modelData);
    }
    fopAcM_setEffectMtx(this, modelData);
    mpMorf->entryDL();
    if (cLib_checkBit<u16>(field_0x914, 0x40)) {
        mBtpAnm.remove(modelData);
    }
    return 1;
}

/* ############################################################################################## */
/* 8094B1F4-8094B1F8 000044 0004+00 1/1 0/0 0/0 .rodata          @4207 */
SECTION_RODATA static f32 const lit_4207 = 40.0f;
COMPILER_STRIP_GATE(0x8094B1F4, &lit_4207);

/* 8094B1F8-8094B1FC 000048 0004+00 1/3 0/0 0/0 .rodata          @4208 */
SECTION_RODATA static f32 const lit_4208 = 100.0f;
COMPILER_STRIP_GATE(0x8094B1F8, &lit_4208);

/* 809464CC-809466D8 00094C 020C+00 2/2 0/0 0/0 .text            execute__8daMyna_cFv */
int daMyna_c::execute() {
    u8 uVar1 = field_0x92C;
    u8 uVar2 = field_0x935;
    bool isTalkNow = dMsgObject_isTalkNowCheck();
    setItemInfo();
    int iVar1 = chkEvent();
    if (daMyna_LightActor == NULL) {
        fpcM_Search(daMyna_searchLight, this);
    }
    setRoomNo();
    attention_info.position.set(current.pos.x, current.pos.y + 40.0f, current.pos.z);
    eyePos.set(attention_info.position);
    if (field_0x926 > 0) {
        field_0x926--;
    }
    if (isTalkNow) {
        talkAnime(mMsgFlow.getMsg());
    } else if (field_0x824 != 0) {
        field_0x824 = 0;
    }
    if (iVar1 != 0) {
        (this->*move_proc[field_0x92C])();
        orderEvent();
    }
    if (!isTalkNow) {
        playDefaultWaitAnime();
        setDefaultWaitAnime(uVar2);
    }
    if (uVar1 != field_0x92C) {
        (this->*init_proc[field_0x92C])();
    }
    if (uVar2 != field_0x935) {
        if (field_0x935 == 1) {
            field_0x924 = cM_rndF(100.0f) + 100.0f;
        }
        animeControl();
    }
    animePlay();
    set_mtx();
    shape_angle = current.angle;
    shape_angle.y = -current.angle.y;
    setCollision();
    checkDead();
    return 1;
}


/* ############################################################################################## */
/* 8094B1FC-8094B200 00004C 0004+00 11/12 0/0 0/0 .rodata          @4270 */
SECTION_RODATA static f32 const lit_4270 = 1.0f;
COMPILER_STRIP_GATE(0x8094B1FC, &lit_4270);

/* 8094B24C-8094B24C 00009C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8094B355 = "MYNA.bmd";
#pragma pop

/* 809466D8-8094686C 000B58 0194+00 1/1 0/0 0/0 .text            createHeap__8daMyna_cFv */
int daMyna_c::createHeap() {
    J3DModelData* modelData =
        static_cast<J3DModelData*>(dComIfG_getObjectRes("Npc_myna", "MYNA.bmd"));
    mpMorf = new mDoExt_McaMorfSO(modelData, NULL, NULL, NULL, -1, 1.0f, 0, -1, &mCreature, 0x80000,
                                  0x11020084);
    if (mpMorf != NULL && mpMorf->getModel() == NULL) {
        mpMorf->stopZelAnime();
        mpMorf = NULL;
    }
    if (mpMorf == NULL) {
        return 0;
    } else {
        for (u16 i = 0; i < modelData->getJointNum(); i++) {
            modelData->getJointNodePointer(i)->setCallBack(jntNodeCallBack);
        }
        field_0x916 = 7;
        field_0x914 = 0;
        field_0x918 = 0;
        field_0x91A = 0;
        field_0x936 = 0;
        J3DAnmTexPattern* anmTexPattern = getTexPtrnAnm(l_btpFileNameTBL[field_0x936]);
        if (anmTexPattern != NULL) {
            setBtpAnm(anmTexPattern, mpMorf->getModel()->getModelData(), 1.0f, 2);
            cLib_onBit<u16>(field_0x914, 0x44);
        }
        return 1;
    }
}


/* 8094686C-809468EC 000CEC 0080+00 1/1 0/0 0/0 .text jntNodeCB__8daMyna_cFP8J3DJointP8J3DModel */
int daMyna_c::jntNodeCB(J3DJoint* i_jnt, J3DModel* i_model) {
    u16 jntNo = i_jnt->getJntNo();
    mDoMtx_stack_c::copy(i_model->getAnmMtx(jntNo));
    i_model->setAnmMtx(jntNo, mDoMtx_stack_c::get());
    cMtx_copy(mDoMtx_stack_c::get(), J3DSys::mCurrentMtx);
    return 1;
}

/* 809468EC-8094692C 000D6C 0040+00 1/0 0/0 0/0 .text            attack_wait_init__8daMyna_cFv */
void daMyna_c::attack_wait_init() {
    setAnimeType(1, 0.0f);
    field_0x92A = 0;
}


/* 8094692C-80946AEC 000DAC 01C0+00 1/0 0/0 0/0 .text            attack_wait_move__8daMyna_cFv */
void daMyna_c::attack_wait_move() {
    if (current.angle.y != home.angle.y) {
        cLib_addCalcAngleS(&current.angle.y, home.angle.y, 4, 32767, 1500);
        cLib_addCalcAngleS(&current.angle.x, home.angle.x, 4, 32767, 1500);
        if (abs(s16(current.angle.y - home.angle.y)) < 128) {
            current.angle = home.angle;
        }
    }
    if (!daPy_py_c::i_checkNowWolf() && daMyna_evtTagActor0 != NULL) {
        cXyz var1(1.0f, 1.0f, 1.0f);
        if (!dComIfGs_isSaveSwitch(0x3C)) {
            if (chkPlayerInEvtArea(daMyna_evtTagActor0, var1)) {
                if (!isEventFlag(1)) {
                    eventInfo.i_onCondition(1);
                    fopAcM_orderSpeakEvent(this, 0, 0);
                    if (eventInfo.checkCommandTalk()) {
                        field_0x92C = 1;
                    }
                } else {
                    field_0x92C = 2;
                }
            }
        } else if (field_0x92A < l_HOSTIO.field_0x24) {
            field_0x92A++;
        } else {
            eventInfo.i_onCondition(1);
            fopAcM_orderSpeakEvent(this, 0, 0);
            if (eventInfo.checkCommandTalk()) {
                field_0x92C = 4;
            }
        }
    }
}


/* 80946AEC-80946B40 000F6C 0054+00 1/0 0/0 0/0 .text attack_before_talk_init__8daMyna_cFv */
void daMyna_c::attack_before_talk_init() {
    mMsgFlow.init(this, field_0x91C, 0, NULL);
    setAnimeType(10, 0.0f);
}


/* 80946B40-80946BB4 000FC0 0074+00 1/0 0/0 0/0 .text attack_before_talk_move__8daMyna_cFv */
void daMyna_c::attack_before_talk_move() {
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        onEventFlag(1);
        field_0x92C = 2;
    }
}

/* 80946BB4-80946BF4 001034 0040+00 1/0 0/0 0/0 .text            attack_fly_init__8daMyna_cFv */
void daMyna_c::attack_fly_init() {
    setAnimeType(0, 0.0f);
    field_0x91A = 0;
}


/* 80946BF4-80946D20 001074 012C+00 1/0 0/0 0/0 .text            attack_fly_move__8daMyna_cFv */
// regswap
#ifdef NONMATCHING
void daMyna_c::attack_fly_move() {
    if (daMyna_evtTagActor0 != NULL) {
        cXyz var1(1.0f, 1.0f, 1.0f);
        fly_body_wave();
        if (field_0x926 > 0 && dComIfGs_isSaveSwitch(0x3C)) {
            field_0x926 = 0;
        }
        if (chkPlayerInEvtArea(daMyna_evtTagActor0, var1) && !daPy_py_c::i_checkNowWolf() &&
            !dComIfGs_isSaveSwitch(0x3C) && field_0x926 == 0)
        {
            mStatus.Move();
            if (fly_attack_move()) {
                field_0x92C = 3;
            }
        } else if (fly_return_move()) {
            field_0x92C = 0;
        }
    }
}
#else
void daMyna_c::attack_fly_move() {
    // NONMATCHING
}
#endif

/* 80946D20-80946D64 0011A0 0044+00 1/0 0/0 0/0 .text            attack_init__8daMyna_cFv */
void daMyna_c::attack_init() {
    setAnimeType(8, 0.0f);
    mSph.OnAtVsPlayerBit();
}


/* 80946D64-80946DD4 0011E4 0070+00 1/0 0/0 0/0 .text            attack_move__8daMyna_cFv */
// Matches when l_HOSTIO is the correct type
#ifdef NONMATCHING
void daMyna_c::attack_move() {
    mStatus.Move();
    if (field_0x91E != 0) {
        field_0x92C = 2;
    }
    if (mSph.ChkAtHit()) {
        field_0x926 = l_HOSTIO.field_0x30;
        mSph.OffAtVsPlayerBit();
    }
}
#else
void daMyna_c::attack_move() {
    // NONMATCHING
}
#endif

/* 80946DD4-80946E08 001254 0034+00 1/0 0/0 0/0 .text            attack_after_talk_init__8daMyna_cFv
 */
void daMyna_c::attack_after_talk_init() {
    mMsgFlow.init(this, field_0x91C, 0, NULL);
}

/* 80946E08-80946E84 001288 007C+00 1/0 0/0 0/0 .text            attack_after_talk_move__8daMyna_cFv
 */
void daMyna_c::attack_after_talk_move() {
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        onEventFlag(2);
        field_0x91C = 0x139;
        field_0x92C = 5;
    }
}

/* 80946E84-80946EB0 001304 002C+00 1/0 0/0 0/0 .text            greet_wait_init__8daMyna_cFv */
void daMyna_c::greet_wait_init() {
    setAnimeType(1, 0.0f);
}


/* ############################################################################################## */
/* 8094B200-8094B204 000050 0004+00 1/1 0/0 0/0 .rodata          @4481 */
SECTION_RODATA static f32 const lit_4481 = 350.0f;
COMPILER_STRIP_GATE(0x8094B200, &lit_4481);

/* 80946EB0-80947030 001330 0180+00 1/0 0/0 0/0 .text            greet_wait_move__8daMyna_cFv */
void daMyna_c::greet_wait_move() {
    if (!daPy_py_c::i_checkNowWolf()) {
        if (daMyna_evtTagActor0 != NULL) {
            if (chkPlayerInEvtArea(daMyna_evtTagActor0, cXyz(cXyz(1.0f, 1.0f, 1.0f)))) {
                eventInfo.i_onCondition(1);
                fopAcM_orderSpeakEvent(this, 0, 0);
                if (eventInfo.checkCommandTalk()) {
                    field_0x92C = 6;
                }
            } else {
                if (isEventFlag(0)) {
                    eventInfo.i_onCondition(1);
                    fopAcM_orderSpeakEvent(this, 0, 0);
                    if (eventInfo.checkCommandTalk()) {
                        field_0x92C = 10;
                    }
                }
            }
        } else {
            if (fopAcM_searchPlayerDistanceXZ(this) < 350.0f) {
                eventInfo.i_onCondition(1);
                fopAcM_orderSpeakEvent(this, 0, 0);
                if (eventInfo.checkCommandTalk()) {
                    field_0x92C = 6;
                }
            } else {
                if (isEventFlag(0)) {
                    eventInfo.i_onCondition(1);
                    fopAcM_orderSpeakEvent(this, 0, 0);
                    if (eventInfo.checkCommandTalk()) {
                        field_0x92C = 10;
                    }
                }
            }
        }
    }
}


/* 80947030-8094711C 0014B0 00EC+00 1/0 0/0 0/0 .text            greet_talk_init__8daMyna_cFv */
void daMyna_c::greet_talk_init() {
    dMsgObject_setTotalPayment(0);
    dMsgObject_setTotalPrice(0);
    field_0x922 = dMsgObject_getTotalPayment();
    field_0x920 = dMsgObject_getTotalPrice();
    dMsgObject_getMsgObjectClass()->setNowTotalPrice(0);
    dMsgObject_getMsgObjectClass()->setNowTotalPayment(0);

    switch (field_0x932) {
    case 0:
        field_0x91C = getFlowNodeNum();
        break;
    case 1:
        field_0x91C = getFlowNodeNum() + 1;
        break;
    case 2:
        field_0x91C = getFlowNodeNum() + 2;
        break;
    }

    setAnimeType(9, 0.0f);
    mMsgFlow.init(this, field_0x91C, 0, NULL);
}


/* 8094711C-809471BC 00159C 00A0+00 1/0 0/0 0/0 .text            greet_talk_move__8daMyna_cFv */
void daMyna_c::greet_talk_move() {
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        if (dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[802])) {
            field_0x937 = 20;
            field_0x92C = 19;
        } else {
            field_0x92C = 7;
        }
    }
}

/* 809471BC-809471E8 00163C 002C+00 1/0 0/0 0/0 .text            shopping_wait_init__8daMyna_cFv */
void daMyna_c::shopping_wait_init() {
    setAnimeType(1, 0.0f);
}


/* ############################################################################################## */
/* 8094B204-8094B208 000054 0004+00 1/1 0/0 0/0 .rodata          @4655 */
SECTION_RODATA static f32 const lit_4655 = 450.0f;
COMPILER_STRIP_GATE(0x8094B204, &lit_4655);

/* 809471E8-809475B4 001668 03CC+00 1/0 0/0 0/0 .text            shopping_wait_move__8daMyna_cFv */
// regswap
#ifdef NONMATCHING
void daMyna_c::shopping_wait_move() {
    if (!daPy_py_c::i_checkNowWolf()) {
        if (dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[802])) {
            field_0x92C = 17;
            field_0x937 = 20;
        } else {
            daPy_py_c* player = daPy_getPlayerActorClass();
            bool bVar1 = false;
            s16 nowTotalPrice = dMsgObject_getMsgObjectClass()->getNowTotalPrice();
            if (dMsgObject_getMsgObjectClass()->isPaymentFlag()) {
                eventInfo.i_onCondition(1);
                fopAcM_orderSpeakEvent(this, 0, 0);
                if (eventInfo.checkCommandTalk()) {
                    field_0x92C = 9;
                    dMsgObject_getMsgObjectClass()->offPaymentFlag();
                }
            } else {
                if (player->getGrabUpEnd()) {
                    for (int i = 0; i < 10; i++) {
                        if (mShopItems[i].mTargetActorID == player->getGrabActorID() &&
                            mShopItems[i].mItemStatus == 2)
                        {
                            dMsgObject_addTotalPrice(mShopItems[i].mValueNum);
                            field_0x931 = i;
                            if (mShopItems[i].mFlowNodeNum != 0xFFFF) {
                                eventInfo.i_onCondition(1);
                                fopAcM_orderSpeakEvent(this, 0, 0);
                            }
                        }
                    }
                }

                if (field_0x931 != 0xFF) {
                    if (mShopItems[field_0x931].mTargetActorID != player->getGrabActorID() &&
                        mShopItems[field_0x931].mItemStatus == 2)
                    {
                        dMsgObject_addTotalPrice(-mShopItems[field_0x931].mValueNum);
                        field_0x931 = -1;
                    }
                }

                if (!dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[203]) &&
                    daMyna_evtTagActor1 != NULL)
                {
                    cXyz stack_2c(1.0f, 1.0f, 1.0f);
                    if (chkPlayerInEvtArea(daMyna_evtTagActor1, stack_2c)) {
                        if (isEventFlag(0)) {
                            eventInfo.i_onCondition(1);
                            fopAcM_orderSpeakEvent(this, 0, 0);
                            bVar1 = true;
                            field_0x933 = 1;
                        } else if (field_0x931 != 0xFF && mShopItems[field_0x931].mItemStatus == 2)
                        {
                            eventInfo.i_onCondition(1);
                            fopAcM_orderSpeakEvent(this, 0, 0);
                            bVar1 = true;
                            field_0x933 = 1;
                        }
                    }
                }

                if (daMyna_evtTagActor0 != NULL) {
                    cXyz stack_38(1.0f, 1.0f, 1.0f);
                    if (!chkPlayerInEvtArea(daMyna_evtTagActor0, stack_38) && nowTotalPrice > 0) {
                        eventInfo.i_onCondition(1);
                        fopAcM_orderSpeakEvent(this, 0, 0);
                        bVar1 = true;
                    }
                } else if (fopAcM_searchPlayerDistanceXZ(this) > 450.0f) {
                    if (isEventFlag(0)) {
                        eventInfo.i_onCondition(1);
                        fopAcM_orderSpeakEvent(this, 0, 0);
                        bVar1 = true;
                    } else if (field_0x931 != 0xFF && mShopItems[field_0x931].mItemStatus == 2) {
                        eventInfo.i_onCondition(1);
                        fopAcM_orderSpeakEvent(this, 0, 0);
                        bVar1 = true;
                    }
                }

                if (eventInfo.checkCommandTalk()) {
                    if (!bVar1) {
                        field_0x92C = 8;
                    } else {
                        field_0x92C = 10;
                    }
                }
            }
        }
    }
}
#else
void daMyna_c::shopping_wait_move() {
    // NONMATCHING
}
#endif

/* 809475B4-80947630 001A34 007C+00 1/0 0/0 0/0 .text            shopping_talk_init__8daMyna_cFv */
void daMyna_c::shopping_talk_init() {
    field_0x828 = fopAcM_SearchByID(mShopItems[field_0x931].mTargetActorID);
    field_0x91C = mShopItems[field_0x931].mFlowNodeNum;
    mMsgFlow.init(this, field_0x91C, 0, NULL);
}

/* 80947630-809476A0 001AB0 0070+00 1/0 0/0 0/0 .text            shopping_talk_move__8daMyna_cFv */
void daMyna_c::shopping_talk_move() {
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        field_0x828 = NULL;
        field_0x92C = 7;
    }
}

/* 809476A0-8094772C 001B20 008C+00 1/0 0/0 0/0 .text            thanks_talk_init__8daMyna_cFv */
void daMyna_c::thanks_talk_init() {
    s16 nowTotalPayment = dMsgObject_getMsgObjectClass()->getNowTotalPayment();
    s16 nowTotalPrice = dMsgObject_getMsgObjectClass()->getNowTotalPrice();
    if (nowTotalPayment == nowTotalPrice) {
        field_0x91C = getFlowNodeNum() + 6;
    } else if (nowTotalPayment > nowTotalPrice) {
        field_0x91C = getFlowNodeNum() + 7;
    } else {
        field_0x91C = getFlowNodeNum() + 8;
    }
    mMsgFlow.init(this, field_0x91C, 0, NULL);
}

/* 8094772C-80947794 001BAC 0068+00 1/0 0/0 0/0 .text            thanks_talk_move__8daMyna_cFv */
void daMyna_c::thanks_talk_move() {
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        field_0x92C = 7;
    }
}

/* 80947794-809478D0 001C14 013C+00 1/0 0/0 0/0 .text            byebye_talk_init__8daMyna_cFv */
void daMyna_c::byebye_talk_init() {
    int var1 = dMsgObject_getTotalPayment() - field_0x922;
    if (var1 >= dMsgObject_getTotalPrice() - field_0x920) {
        field_0x932 = 0;
    } else if (var1 > 0) {
        field_0x932 = 1;
    } else {
        field_0x932 = 2;
    }

    switch (field_0x932) {
    case 0:
        field_0x91C = getFlowNodeNum() + 3;
        break;
    case 1:
        field_0x91C = getFlowNodeNum() + 4;
        break;
    case 2:
        field_0x91C = getFlowNodeNum() + 5;
        break;
    }

    if (field_0x933 == 0) {
        field_0x922 = dMsgObject_getTotalPayment();
        field_0x920 = dMsgObject_getTotalPrice();
        dMsgObject_getMsgObjectClass()->setNowTotalPrice(0);
        dMsgObject_getMsgObjectClass()->setNowTotalPayment(0);
        offEventFlag(0);
    }

    mMsgFlow.init(this, field_0x91C, 0, NULL);
}

/* 809478D0-80947A00 001D50 0130+00 1/0 0/0 0/0 .text            byebye_talk_move__8daMyna_cFv */
void daMyna_c::byebye_talk_move() {
    bool bVar1 = true;
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        if (field_0x933 == 0) {
            if (field_0x931 != 0xFF) {
                mShopItems[field_0x931].mItemStatus = 3;
                field_0x931 = -1;
            }
            for (int i = 0; i < mNumShopItems; i++) {
                if (mShopItems[i].mItemStatus == 2) {
                    bVar1 = false;
                }
            }
        } else {
            field_0x933 = 0;
            bVar1 = false;
        }

        dComIfGp_event_reset();
        if (dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[802])) {
            field_0x92C = 0x11;
            field_0x937 = 0x14;
        } else if (bVar1) {
            field_0x92C = 7;
        } else {
            field_0x92C = 7;
        }
    }
}

/* 80947A00-80947AA4 001E80 00A4+00 1/0 0/0 0/0 .text            turn_on_start_init__8daMyna_cFv */
void daMyna_c::turn_on_start_init() {
    setAnimeType(4, 0.0f);
    if (daMyna_LightActor->getTurnOnFlag()) {
        mCreature.startCreatureVoice(JAISoundID(Z2SE_MYNA_V_LIGHT_ON), -1);
    } else {
        mCreature.startCreatureVoice(JAISoundID(Z2SE_MYNA_V_LIGHT_OFF), -1);
    }
}


/* ############################################################################################## */
/* 8094B208-8094B210 000058 0004+04 0/5 0/0 0/0 .rodata          @4828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4828[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8094B208, &lit_4828);
#pragma pop

/* 8094B210-8094B218 000060 0008+00 0/6 0/0 0/0 .rodata          @4829 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4829[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8094B210, &lit_4829);
#pragma pop

/* 8094B218-8094B220 000068 0008+00 0/6 0/0 0/0 .rodata          @4830 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4830[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8094B218, &lit_4830);
#pragma pop

/* 8094B220-8094B228 000070 0008+00 0/6 0/0 0/0 .rodata          @4831 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4831[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8094B220, &lit_4831);
#pragma pop

/* 80947AA4-80947CD0 001F24 022C+00 1/0 0/0 0/0 .text            turn_on_start_move__8daMyna_cFv */
void daMyna_c::turn_on_start_move() {
    cXyz stack_28;
    cXyz local_34;
    cXyz local_40;

    local_40.x = daMyna_LightActor->current.pos.x;
    local_40.y = current.pos.y;
    local_40.z = daMyna_LightActor->current.pos.z;

    cXyz local_4c = local_40 - current.pos;

    s16 sVar2 = cM_atan2s(local_4c.x, local_4c.z);
    f32 fVar1 = 0.5f * ((field_0x82C.y - field_0x844.y) + (field_0x838.y - field_0x850.y));

    local_34.x = 0.0f;
    local_34.y = 0.0f;
    local_34.z = l_HOSTIO.field_0x0C * (fVar1 * fVar1);

    cLib_offsetPos(&stack_28, &current.pos, sVar2, &local_34);
    current.pos = stack_28;

    cXyz stack_58 = local_40 - current.pos;

    if (stack_58.abs() < l_HOSTIO.field_0x1C) {
        field_0x92C = 12;
    }
}


/* 80947CD0-80947CFC 002150 002C+00 1/0 0/0 0/0 .text            turn_on_init__8daMyna_cFv */
void daMyna_c::turn_on_init() {
    setAnimeType(7, 0.0f);
}


/* 80947CFC-80947D48 00217C 004C+00 1/0 0/0 0/0 .text            turn_on_move__8daMyna_cFv */
void daMyna_c::turn_on_move() {
    if (field_0x91E != 0) {
        daMyna_LightActor->setTurnOnOffChange();
        field_0x92C = 13;
    }
}

/* 80947D48-80947D74 0021C8 002C+00 1/0 0/0 0/0 .text            turn_on_end1_init__8daMyna_cFv */
void daMyna_c::turn_on_end1_init() {
    setAnimeType(4, 0.0f);
}


/* 80947D74-80947E18 0021F4 00A4+00 1/0 0/0 0/0 .text            turn_on_end1_move__8daMyna_cFv */
// Matches when l_HOSTIO is the correct type
#ifdef NONMATCHING
void daMyna_c::turn_on_end1_move() {
    cXyz local_18 = home.pos - current.pos;
    s16 sVar2 = cM_atan2s(local_18.x, local_18.z);
    cLib_addCalcAngleS(&current.angle.y, sVar2, l_HOSTIO.field_0x26, l_HOSTIO.field_0x28,
                       l_HOSTIO.field_0x2A);

    if (abs(current.angle.y - sVar2) <= 16) {
        current.angle.y = sVar2;
        field_0x92C = 14;
    }
}
#else
void daMyna_c::turn_on_end1_move() {
    // NONMATCHING
}
#endif

/* 80947E18-80947E50 002298 0038+00 1/0 0/0 0/0 .text            turn_on_end2_init__8daMyna_cFv */
void daMyna_c::turn_on_end2_init() {
    if (field_0x935 != 4) {
        setAnimeType(4, 0.0f);
    }
}


/* 80947E50-80948070 0022D0 0220+00 1/0 0/0 0/0 .text            turn_on_end2_move__8daMyna_cFv */
void daMyna_c::turn_on_end2_move() {
    cXyz stack_24;
    cXyz local_30;
    cXyz local_3c = home.pos - current.pos;

    s16 sVar2 = cM_atan2s(local_3c.x, local_3c.z);
    f32 fVar1 = ((field_0x82C.y - field_0x844.y) + (field_0x838.y - field_0x850.y)) * 0.5f;

    local_30.x = 0.0f;
    local_30.y = 0.0f;
    local_30.z = l_HOSTIO.field_0x0C * (fVar1 * fVar1);

    cLib_offsetPos(&stack_24, &current.pos, sVar2, &local_30);
    current.pos = stack_24;

    cXyz stack_48 = home.pos - current.pos;

    if (stack_48.abs() < l_HOSTIO.field_0x20) {
        current.pos.set(home.pos);
        field_0x92C = 15;
    }
}


/* 80948070-80948074 0024F0 0004+00 1/0 0/0 0/0 .text            turn_on_end3_init__8daMyna_cFv */
void daMyna_c::turn_on_end3_init() {
    /* empty function */
}

/* 80948074-809480E4 0024F4 0070+00 1/0 0/0 0/0 .text            turn_on_end3_move__8daMyna_cFv */
// Matches when l_HOSTIO is the correct type
#ifdef NONMATCHING
void daMyna_c::turn_on_end3_move() {
    cLib_addCalcAngleS(&current.angle.y, home.angle.y, l_HOSTIO.field_0x26, l_HOSTIO.field_0x28,
                       l_HOSTIO.field_0x2A);

    if (abs(current.angle.y - home.angle.y) <= 16) {
        current.angle.y = home.angle.y;
        field_0x92C = field_0x92D;
    }
}
#else
void daMyna_c::turn_on_end3_move() {
    // NONMATCHING
}
#endif

/* 809480E4-80948118 002564 0034+00 1/0 0/0 0/0 .text            wolf_talk_init__8daMyna_cFv */
void daMyna_c::wolf_talk_init() {
    mMsgFlow.init(this, 0xC9, 0, NULL);
}

/* 80948118-80948174 002598 005C+00 1/0 0/0 0/0 .text            wolf_talk_move__8daMyna_cFv */
void daMyna_c::wolf_talk_move() {
    if (mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        field_0x92C = field_0x92E;
    }
}

/* 80948174-809481B4 0025F4 0040+00 1/0 0/0 0/0 .text            attack_wait2_init__8daMyna_cFv */
void daMyna_c::attack_wait2_init() {
    setAnimeType(1, 0.0f);
    field_0x92A = 0;
}


/* 809481B4-80948388 002634 01D4+00 1/0 0/0 0/0 .text            attack_wait2_move__8daMyna_cFv */
void daMyna_c::attack_wait2_move() {
    if (daPy_py_c::i_checkNowWolf()) {
        field_0x92C = 7;
    } else {
        if (current.angle.y != home.angle.y) {
            cLib_addCalcAngleS(&current.angle.y, home.angle.y, 4, 0x7FFF, 0x5DC);
            cLib_addCalcAngleS(&current.angle.x, home.angle.x, 4, 0x7FFF, 0x5DC);
            if (abs(s16(current.angle.y - home.angle.y)) < 128) {
                current.angle = home.angle;
            }
        }

        if (daMyna_evtTagActor0 != NULL) {
            cXyz stack_1c(1.0f, 1.0f, 1.0f);
            if (dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[802])) {
                if (chkPlayerInEvtArea(daMyna_evtTagActor0, stack_1c)) {
                    field_0x937 = 20;
                    field_0x92C = 19;
                }
            } else {
                if (field_0x939 == 1) {
                    current.angle = home.angle;
                    eventInfo.i_onCondition(1);
                    fopAcM_orderSpeakEvent(this, 0, 0);
                    if (eventInfo.checkCommandTalk()) {
                        field_0x92C = 21;
                    }
                } else if (field_0x92A < l_HOSTIO.field_0x24) {
                    field_0x92A++;
                } else {
                    field_0x92C = 7;
                }
            }
        }
    }
}


/* 80948388-809483DC 002808 0054+00 1/0 0/0 0/0 .text attack_before_talk2_init__8daMyna_cFv */
void daMyna_c::attack_before_talk2_init() {
    mMsgFlow.init(this, field_0x91C, 0, NULL);
    setAnimeType(10, 0.0f);
}


/* 809483DC-80948444 00285C 0068+00 1/0 0/0 0/0 .text attack_before_talk2_move__8daMyna_cFv */
void daMyna_c::attack_before_talk2_move() {
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        field_0x92C = 19;
    }
}

/* 80948444-80948484 0028C4 0040+00 1/0 0/0 0/0 .text            attack_fly2_init__8daMyna_cFv */
void daMyna_c::attack_fly2_init() {
    setAnimeType(0, 0.0f);
    field_0x91A = 0;
}


/* 80948484-80948600 002904 017C+00 1/0 0/0 0/0 .text            attack_fly2_move__8daMyna_cFv */
void daMyna_c::attack_fly2_move() {
    if (daMyna_evtTagActor0 != NULL) {
        cXyz stack_2c(1.0f, 1.0f, 1.0f);
        fly_body_wave();

        if (field_0x926 > 0 && field_0x937 == 0) {
            field_0x926 = 0;
        }

        if (dMsgObject_getTotalPayment() > field_0x922) {
            field_0x937 = 0;
            dComIfGs_onEventBit(dSv_event_flag_c::saveBitLabels[802]);
            field_0x939 = 1;
        }

        if (chkPlayerInEvtArea(daMyna_evtTagActor0, stack_2c) && !daPy_py_c::i_checkNowWolf() &&
            field_0x937 != 0 && field_0x926 == 0)
        {
            mStatus.Move();
            if (fly_attack_move()) {
                field_0x92C = 20;
            }
        } else if (fly_return_move()) {
            if (field_0x937 == 0) {
                dComIfGs_offEventBit(dSv_event_flag_c::saveBitLabels[802]);
            }
            field_0x92C = 17;
        }
    }
}


/* 80948600-80948644 002A80 0044+00 1/0 0/0 0/0 .text            attack2_init__8daMyna_cFv */
void daMyna_c::attack2_init() {
    setAnimeType(8, 0.0f);
    mSph.OnAtVsPlayerBit();
}


/* 80948644-809486F8 002AC4 00B4+00 1/0 0/0 0/0 .text            attack2_move__8daMyna_cFv */
// Matches when l_HOSTIO is the correct type
#ifdef NONMATCHING
void daMyna_c::attack2_move() {
    mStatus.Move();
    if (field_0x91E != 0) {
        field_0x92C = 19;
    }

    if (mSph.ChkAtHit()) {
        field_0x926 = l_HOSTIO.field_0x30;
        mSph.OffAtVsPlayerBit();
        if (field_0x937 != 0) {
            field_0x937--;
            if (dComIfGs_getLife() <= 1) {
                dComIfGs_offEventBit(dSv_event_flag_c::saveBitLabels[802]);
                field_0x937 = 0;
            }
        }
    }
}
#else
void daMyna_c::attack2_move() {
    // NONMATCHING
}
#endif

/* 809486F8-80948734 002B78 003C+00 1/0 0/0 0/0 .text            attack2_talk_init__8daMyna_cFv */
void daMyna_c::attack2_talk_init() {
    field_0x91C = 214;
    mMsgFlow.init(this, field_0x91C, 0, NULL);
}

/* 80948734-809487EC 002BB4 00B8+00 1/0 0/0 0/0 .text            attack2_talk_move__8daMyna_cFv */
void daMyna_c::attack2_talk_move() {
    if (eventInfo.checkCommandTalk() && mMsgFlow.doFlow(this, NULL, 0) != 0) {
        dComIfGp_event_reset();
        field_0x828 = NULL;
        field_0x92C = 7;
        dMsgObject_setTotalPayment(0);
        dMsgObject_setTotalPrice(0);
        field_0x922 = dMsgObject_getTotalPayment();
        field_0x920 = dMsgObject_getTotalPrice();
        dMsgObject_getMsgObjectClass()->setNowTotalPrice(0);
        dMsgObject_getMsgObjectClass()->setNowTotalPayment(0);
        dMsgObject_getMsgObjectClass()->offPaymentFlag();
        field_0x939 = 0;
    }
}

/* 809487EC-80948828 002C6C 003C+00 0/0 0/0 2/2 .text            soldoutItem__8daMyna_cFUi */
void daMyna_c::soldoutItem(fpc_ProcID i_itemId) {
    for (int i = 0; i < mNumShopItems; i++) {
        if (i_itemId == mShopItems[i].mTargetActorID) {
            mShopItems[i].mItemStatus = 3;
        }
    }
}

/* ############################################################################################## */
/* 8094B228-8094B22C 000078 0004+00 1/2 0/0 0/0 .rodata          @5221 */
SECTION_RODATA static f32 const lit_5221 = 15.0f;
COMPILER_STRIP_GATE(0x8094B228, &lit_5221);

/* 80948828-80948ADC 002CA8 02B4+00 2/2 0/0 0/0 .text            fly_attack_move__8daMyna_cFv */
bool daMyna_c::fly_attack_move() {
    daPy_py_c* playerActorClass = daPy_getPlayerActorClass();
    cXyz local_28;
    cXyz stack_34;
    cXyz stack_40;
    cXyz stack_4c;
    cXyz stack_58;

    stack_34.set(playerActorClass->getHeadTopPos());
    stack_34.y += l_HOSTIO.field_0x14;
    stack_40.set(field_0x85C);
    stack_4c = current.pos - stack_40;
    local_28 = stack_34 - stack_40;

    f32 fVar4 = JMAFastSqrt(local_28.x * local_28.x + local_28.z * local_28.z);
    s16 sVar1 = -cM_atan2s(local_28.y, fVar4);
    s16 sVar2 = cM_atan2s(local_28.x, local_28.z);
    cLib_addCalcAngleS(&current.angle.y, sVar2, 4, 0x7FFF, 0x5DC);
    cLib_addCalcAngleS(&current.angle.x, sVar1, 4, 0x7FFF, 0x5DC);
    cLib_addCalcPos2(&stack_40, stack_34, 0.5f, 15.0f);
    stack_58 = stack_34 - stack_40;
    current.pos = stack_40 + stack_4c;
    return stack_58.abs() < l_HOSTIO.field_0x18;
}


/* ############################################################################################## */
/* 8094B22C-8094B230 00007C 0004+00 0/1 0/0 0/0 .rodata          @5317 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5317 = 0x3A83126F;
COMPILER_STRIP_GATE(0x8094B22C, &lit_5317);
#pragma pop

/* 8094B230-8094B234 000080 0004+00 0/1 0/0 0/0 .rodata          @5318 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5318 = 25.0f;
COMPILER_STRIP_GATE(0x8094B230, &lit_5318);
#pragma pop

/* 8094B234-8094B238 000084 0004+00 0/1 0/0 0/0 .rodata          @5319 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5319 = 3.0f;
COMPILER_STRIP_GATE(0x8094B234, &lit_5319);
#pragma pop

/* 80948ADC-80948DFC 002F5C 0320+00 2/2 0/0 0/0 .text            fly_return_move__8daMyna_cFv */
// Possibly matches with literals? Will need to double check
#ifdef NONMATCHING
bool daMyna_c::fly_return_move() {
    if (field_0x926 > 0) {
        daPy_py_c* playerActorClass = daPy_getPlayerActorClass();
        cXyz stack_3c;
        stack_3c.set(playerActorClass->getHeadTopPos());

        cXyz local_30 = stack_3c - current.pos;
        f32 fVar4 = JMAFastSqrt(local_30.x * local_30.x + local_30.z * local_30.z);
        s16 sVar1 = -cM_atan2s(local_30.y, fVar4);
        s16 sVar2 = cM_atan2s(local_30.x, local_30.z);

        cLib_addCalcAngleS(&current.angle.y, sVar2, 4, 0x7FFF, 0x5DC);
        cLib_addCalcAngleS(&current.angle.x, sVar1, 4, 0x7FFF, 0x5DC);
        cLib_addCalcPos2(&current.pos, home.pos, 0.001f, 100.0f);

    } else {
        cXyz stack_48 = home.pos;
        cXyz local_30 = stack_48 - current.pos;
        f32 fVar4 = JMAFastSqrt(local_30.x * local_30.x + local_30.z * local_30.z);
        s16 sVar1 = -cM_atan2s(local_30.y, fVar4);
        s16 sVar2 = cM_atan2s(local_30.x, local_30.z);

        cLib_addCalcAngleS(&current.angle.y, sVar2, 4, 0x7FFF, 0x5DC);
        cLib_addCalcAngleS(&current.angle.x, sVar1, 4, 0x7FFF, 0x5DC);
        cLib_addCalcPos2(&current.pos, stack_48, 0.5f, 25.0f);

        cXyz local_44 = stack_48 - current.pos;
        if (local_44.abs() < 3.0f) {
            current.pos.set(home.pos);
            return true;
        }
    }
    return false;
}
#else
bool daMyna_c::fly_return_move() {
    // NONMATCHING
}
#endif

/* ############################################################################################## */
/* 8094B238-8094B240 000088 0008+00 3/3 0/0 0/0 .rodata          @5332 */
SECTION_RODATA static u8 const lit_5332[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8094B238, &lit_5332);

/* 80948DFC-80948E84 00327C 0088+00 2/2 0/0 0/0 .text            fly_body_wave__8daMyna_cFv */
void daMyna_c::fly_body_wave() {
    if (field_0x935 == 0) {
        field_0x91A = field_0x91A + l_HOSTIO.field_0x2E;
        f32 fVar1 = cM_scos(field_0x91A) * l_HOSTIO.field_0x2C;
        current.pos.y += fVar1;
        field_0x85C.y += fVar1;
    }
}


/* 80948E84-80948FAC 003304 0128+00 1/1 0/0 0/0 .text            talkAnime__8daMyna_cFP9msg_class */
// Matches when mBaseMotionTBL is the correct type
#ifdef NONMATCHING
void daMyna_c::talkAnime(msg_class* param_0) {
    u32 uVar4 = 0;
    if (param_0 != NULL && this == dComIfGp_event_getTalkPartner()) {
        switch (param_0->mMode) {
        case 2:
            field_0x81C = 1;
            break;
        default:
            if (param_0->mMsgID != field_0x824) {
                field_0x81C = 1;
            }
        }

        if (param_0->mMode == 6 && field_0x81C != 0) {
            field_0x81C = 0;
            field_0x820 = dComIfGp_getMesgAnimeAttrInfo();
            field_0x824 = param_0->mMsgID;
            uVar4 = 1;
        }
    }

    if (field_0x824 != 0 && field_0x820 >= 0 && field_0x820 < 7 &&
        mBaseMotionTBL[field_0x820] != NULL)
    {
        (this->*mBaseMotionTBL[field_0x820])(uVar4);
    }
}
#else
void daMyna_c::talkAnime(msg_class* param_0) {
    // NONMATCHING
}
#endif

/* 80948FAC-809490B8 00342C 010C+00 1/1 0/0 0/0 .text            chkEvent__8daMyna_cFv */
int daMyna_c::chkEvent() {
    int retVal = 1;
    if (daPy_py_c::i_checkNowWolf()) {
        if (!dComIfGp_getEvent().isOrderOK()) {
            retVal = 0;
            if (eventInfo.checkCommandTalk()) {
                if (field_0x92C == 0x10) {
                    (this->*move_proc[field_0x92C])();
                    retVal = 0;
                } else {
                    if (dComIfGp_event_chkTalkXY() == 0 || dComIfGp_evmng_ChkPresentEnd()) {
                        field_0x92E = field_0x92C;
                        field_0x92C = 0x10;
                        retVal = 0;
                    }
                }
                return retVal;
            }
        }
    }
    return retVal;
}


/* 809490B8-80949128 003538 0070+00 2/1 0/0 0/0 .text            orderEvent__8daMyna_cFv */
int daMyna_c::orderEvent() {
    if (daPy_py_c::i_checkNowWolf()) {
        switch (field_0x92C) {
        case 0:
        case 5:
        case 7:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            attention_info.flags = 10;
        }
        if (attention_info.flags == 10) {
            attention_info.distances[fopAc_attn_TALK_e] = 0x8B;
            attention_info.distances[fopAc_attn_SPEAK_e] = 0x8B;
            eventInfo.i_onCondition(1);
        }
    }
    return 1;
}

/* 8094B8F8-8094B934 -00001 003C+00 1/1 0/0 0/0 .data            @5890 */
SECTION_DATA static void* lit_5890[15] = {
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0x5C),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0x74),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0x7C),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0x84),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0x94),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xA4),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xAC),
    (void*)(((char*)animeControl__8daMyna_cFv) + 0xB0),
};

/* 80949128-80949144 0035A8 001C+00 1/1 0/0 0/0 .text            deleteItem__8daMyna_cFi */
void daMyna_c::deleteItem(int i_itemIndex) {
    mShopItems[i_itemIndex].mTargetActorID = -1;
    mShopItems[i_itemIndex].mItemStatus = 4;
}

/* 80949144-80949190 0035C4 004C+00 0/0 0/0 0/0 .text            deleteItem__8daMyna_cFUi */
// Nonmatching, no clue what's going on here
#ifdef NONMATCHING
void daMyna_c::deleteItem(fpc_ProcID i_itemId) {
    for (int i = 0; i < mNumShopItems; i++) {
        if (i_itemId == mShopItems[i].mTargetActorID) {
            mShopItems[i].mTargetActorID = -1;
            mShopItems[i].mItemStatus = 4;
        }
    }
}
#else
void daMyna_c::deleteItem(fpc_ProcID param_0) {
    // NONMATCHING
}
#endif

/* ############################################################################################## */
/* 8094B240-8094B244 000090 0004+00 0/1 0/0 0/0 .rodata          @5455 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5455 = 200.0f;
COMPILER_STRIP_GATE(0x8094B240, &lit_5455);
#pragma pop

/* 80949190-80949408 003610 0278+00 1/1 0/0 0/0 .text            initiate__8daMyna_cFv */
void daMyna_c::initiate() {
    for (int i = 0; i < 10; i++) {
        mShopItems[i].mTargetActorID = -1;
        mShopItems[i].mSubActorID = -1;
        mShopItems[i].mFlowNodeNum = 0;
        mShopItems[i].mValueNum = 0;
        mShopItems[i].mItemStatus = 0;
        mShopItems[i].mItemType = 0xF;
    }
    if (dComIfGs_isSaveSwitch(0x3C)) {
        field_0x91C = 0x139;
        field_0x92C = 5;
    } else {
        field_0x91C = 200;
        field_0x92C = 0;
    }
    field_0x92D = field_0x92C;
    field_0x92E = field_0x92C;
    field_0x920 = 0;
    field_0x922 = 0;

    if (!dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[802])) {
        field_0x932 = 0;
        field_0x938 = 0;
    } else {
        field_0x932 = 2;
        field_0x938 = 1;
    }

    field_0x939 = 0;
    field_0x937 = 0;
    field_0x935 = 1;
    field_0x934 = 1;
    field_0x90C = 0.0f;
    field_0x910 = 0.0f;
    field_0x924 = cM_rndF(200.0f) + 200.0f;
    field_0x933 = 0;
    field_0x908 = -1;
    field_0x91E = 0;
    field_0x92F = 0;
    mNumShopItems = getItemNumMax();
    field_0x931 = -1;
    field_0x828 = NULL;
    field_0x926 = 0;
    field_0x92A = 0;
    field_0x82C.set(0.0f, 0.0f, 0.0f);
    field_0x838.set(0.0f, 0.0f, 0.0f);
    field_0x85C.set(0.0f, 0.0f, 0.0f);
    field_0x844.set(0.0f, 0.0f, 0.0f);
    field_0x850.set(0.0f, 0.0f, 0.0f);
    (this->*init_proc[field_0x92C])();
    field_0x928 = current.angle.y;
    current.angle.x = 0;
    current.angle.z = 0;
    mStatus.Init(100, 0, this);
    mSph.Set(mCcDSph);
    mSph.SetStts(&mStatus);
    mSph.OffAtVsPlayerBit();
    setMcaMorfAnm(getTrnsfrmKeyAnm(l_bckFileNameTBL[1]), 1.0f, 0.0f, 2, 0, -1);
}


/* 80949408-80949544 003888 013C+00 1/1 0/0 0/0 .text            setItemInfo__8daMyna_cFv */
void daMyna_c::setItemInfo() {
    if (daMyna_actor_count != -1 && mNumShopItems > daMyna_actor_count) {
        daMyna_actor_count = 0;
        fpcM_Search(daMyna_searchSSItem, this);
    }
    if (daMyna_evtTagActor0 == NULL) {
        fpcM_Search(daMyna_searchEvtTag, this);
    }
    if (daMyna_actor_count != -1 && mNumShopItems <= daMyna_actor_count) {
        for (int i = 0; i < mNumShopItems; i++) {
            daObj_SSBase_c* subActor = static_cast<daObj_SSBase_c*>(daMyna_subActor[i]);
            subActor->setParentPtr(this);
            mShopItems[i].mTargetActorID = fopAcM_GetID(daMyna_targetActor[i]);
            mShopItems[i].mSubActorID = fopAcM_GetID(daMyna_subActor[i]);
            mShopItems[i].mFlowNodeNum = subActor->getFlowNodeNumber();
            mShopItems[i].mValueNum = subActor->getValueNumber();
            mShopItems[i].mItemType = getItemType(subActor);
            mShopItems[i].mItemStatus = 2;
        }
        daMyna_actor_count = -1;
    }
}

/* 80949544-80949588 0039C4 0044+00 2/2 0/0 0/0 .text            setRoomNo__8daMyna_cFv */
void daMyna_c::setRoomNo() {
    s32 roomId = dComIfG_Bgsp().GetRoomId(mGndChk);
    fopAcM_SetRoomNo(this, roomId);
    mStatus.SetRoomId(roomId);
}

/* 80949588-809495E0 003A08 0058+00 1/1 0/0 0/0 .text            setCollision__8daMyna_cFv */
void daMyna_c::setCollision() {
    mSph.SetC(field_0x85C);
    mSph.SetR(15.0f);
    dComIfG_Ccsp()->Set(&mSph);
}


/* 809495E0-80949744 003A60 0164+00 1/1 0/0 0/0 .text            set_mtx__8daMyna_cFv */
// Matches when l_HOSTIO is the correct type
#ifdef NONMATCHING
void daMyna_c::set_mtx() {
    J3DModel* model = mpMorf->getModel();
    cXyz local_18(current.pos);
    scale.set(l_HOSTIO.field_0x04, l_HOSTIO.field_0x04, l_HOSTIO.field_0x04);
    mDoMtx_stack_c::transS(local_18);
    mDoMtx_stack_c::ZXYrotM(current.angle);
    mDoMtx_stack_c::scaleM(scale);
    model->setBaseTRMtx(mDoMtx_stack_c::get());
    mpMorf->modelCalc();
    mDoMtx_stack_c::copy(mpMorf->getModel()->getAnmMtx(4));
    mDoMtx_stack_c::multVecZero(&field_0x82C);
    mDoMtx_stack_c::copy(mpMorf->getModel()->getAnmMtx(4));
    mDoMtx_stack_c::multVecZero(&field_0x838);
    mDoMtx_stack_c::copy(mpMorf->getModel()->getAnmMtx(0x10));
    mDoMtx_stack_c::multVecZero(&field_0x85C);
    field_0x82C -= current.pos;
    field_0x838 -= current.pos;
}
#else
void daMyna_c::set_mtx() {
    // NONMATCHING
}
#endif

/* 80949744-8094983C 003BC4 00F8+00 1/1 0/0 0/0 .text            animePlay__8daMyna_cFv */
// Function matches with literals, but the weak functions "cLib_getRndValue" and "cLib_calcTimer"
// are generated in the wrong order
#ifdef NONMATCHING
void daMyna_c::animePlay() {
    f32 speed = mpMorf->getPlaySpeed();
    mpMorf->play(0, 0);
    if (checkEndAnm(speed) != 0) {
        field_0x91E += 1;
    }

    if (cLib_checkBit<u16>(field_0x914, 0x40) != 0 && cLib_checkBit<u16>(field_0x914, 4) == 0) {
        mBtpAnm.play();
        if (mBtpAnm.getFrameCtrl()->getAttribute() == 2) {
            if (checkEndAnm(mBtpAnm.getFrameCtrl()) != 0) {
                field_0x918 = cLib_getRndValue(0x3C, 100);
                mBtpAnm.setPlaySpeed(0.0f);
            }
        } else {
            field_0x918 = 0;
        }
        if (cLib_calcTimer(&field_0x918) == 0) {
            mBtpAnm.setPlaySpeed(1.0f);
        }
    }
    cLib_offBit<u16>(field_0x914, 0xF);
}
#else
void daMyna_c::animePlay() {
    // NONMATCHING
}
#endif

/* 8094983C-809498B8 003CBC 007C+00 2/2 0/0 0/0 .text
 * setMcaMorfAnm__8daMyna_cFP18J3DAnmTransformKeyffiii          */
int daMyna_c::setMcaMorfAnm(J3DAnmTransformKey* i_anm, f32 i_rate, f32 i_morf, int i_attr,
                            int i_start, int i_end) {
    mpMorf->setAnm(i_anm, i_attr, i_morf, i_rate, i_start, i_end);
    field_0x91E = 0;
    return 1;
}


/* 809498B8-809498F8 003D38 0040+00 2/2 0/0 0/0 .text
 * setBtpAnm__8daMyna_cFP16J3DAnmTexPatternP12J3DModelDatafi    */
void daMyna_c::setBtpAnm(J3DAnmTexPattern* i_btk, J3DModelData* param_1, f32 i_rate,
                         int i_attribute) {
    mBtpAnm.init(&param_1->getMaterialTable(), i_btk, 1, i_attribute, i_rate, 0, -1);
}

/* 809498F8-80949948 003D78 0050+00 2/2 0/0 0/0 .text            getTrnsfrmKeyAnm__8daMyna_cFPc */
J3DAnmTransformKey* daMyna_c::getTrnsfrmKeyAnm(char* i_resName) {
    J3DAnmTransformKey* key;
    if (i_resName != NULL) {
        key = static_cast<J3DAnmTransformKey*>(dComIfG_getObjectRes("Npc_myna", i_resName));
    } else {
        key = NULL;
    }
    return key;
}

/* 80949948-80949998 003DC8 0050+00 2/2 0/0 0/0 .text            getTexPtrnAnm__8daMyna_cFPc */
J3DAnmTexPattern* daMyna_c::getTexPtrnAnm(char* i_resName) {
    J3DAnmTexPattern* pattern;
    if (i_resName != NULL) {
        pattern = static_cast<J3DAnmTexPattern*>(dComIfG_getObjectRes("Npc_myna", i_resName));
    } else {
        pattern = NULL;
    }
    return pattern;
}

/* 80949998-80949A70 003E18 00D8+00 1/1 0/0 0/0 .text            checkEndAnm__8daMyna_cFf */
// regswap
#ifdef NONMATCHING
int daMyna_c::checkEndAnm(f32 param_0) {
    bool retVal;
    switch (mpMorf->getPlayMode()) {
    case 2:
        return mpMorf->isLoop();
    case 0:
    case 1:
        retVal = false;
        if (mpMorf->isStop() && mpMorf->getPlaySpeed() != param_0) {
            retVal = true;
        }
        return retVal;
    case 3:
    case 4:
        retVal = false;
        if (mpMorf->isStop() && mpMorf->getPlaySpeed() != param_0) {
            retVal = true;
        }
        return retVal;
    default:
        return false;
    }
}
#else
int daMyna_c::checkEndAnm(f32 param_0) {
    // NONMATCHING
}
#endif

/* 80949A70-80949AD4 003EF0 0064+00 1/1 0/0 0/0 .text checkEndAnm__8daMyna_cFP12J3DFrameCtrl */
int daMyna_c::checkEndAnm(J3DFrameCtrl* param_0) {
    switch (param_0->getAttribute()) {
    case 2:
        return param_0->checkState(2);
    case 0:
    case 1:
        u8 retVal = 1;
        if (param_0->checkState(1) == 0 && param_0->getRate() != 0.0f) {
            retVal = 0;
        }
        return retVal;
    case 3:
    default:
        return 0;
    }
}


/* 80949AD4-80949AE0 003F54 000C+00 1/1 0/0 0/0 .text            getItemNumMax__8daMyna_cFv */
int daMyna_c::getItemNumMax() {
    return (fopAcM_GetParam(this) >> 0x18) & 0xF;
}

/* 80949AE0-80949C0C 003F60 012C+00 1/1 0/0 0/0 .text            getItemType__8daMyna_cFPv */
int daMyna_c::getItemType(void* param_0) {
    int itemType = 0xF;
    u8 uVar1 = fopAcM_GetParam(param_0) & 0xFF;

    if (fopAcM_GetName(param_0) == PROC_OBJ_SSITEM) {
        switch (uVar1) {
        case 0:
            itemType = 1;
            break;
        case 1:
            itemType = 2;
            break;
        case 2:
            itemType = 0;
            break;
        }
    } else if (fopAcM_GetName(param_0) == PROC_OBJ_SSDRINK) {
        switch (uVar1) {
        case 0:
            itemType = 3;
            break;
        case 1:
            itemType = 4;
            break;
        case 2:
            itemType = 5;
            break;
        case 3:
            itemType = 6;
            break;
        case 4:
            itemType = 7;
            break;
        case 5:
            itemType = 8;
            break;
        }
    } else if (fopAcM_GetName(param_0) == PROC_TAG_SSDRINK) {
        switch (uVar1) {
        case 0:
            itemType = 9;
            break;
        case 1:
            itemType = 10;
            break;
        case 2:
            itemType = 11;
            break;
        case 3:
            itemType = 12;
            break;
        case 4:
            itemType = 13;
            break;
        case 5:
            itemType = 14;
            break;
        }
    }

    return itemType;
}

/* 80949C0C-80949C44 00408C 0038+00 3/3 0/0 0/0 .text            getFlowNodeNum__8daMyna_cFv */
u16 daMyna_c::getFlowNodeNum() {
    u16 num = home.angle.x;
    bool bVar1 = false;
    if (num == 0xFFFF || num == 0) {
        bVar1 = true;
    }

    int num2;
    if (!bVar1) {
        num2 = num;
    } else {
        num2 = -1;
    }

    return num2;
}

/* 80949C44-80949D54 0040C4 0110+00 1/1 0/0 0/0 .text            checkDead__8daMyna_cFv */
void daMyna_c::checkDead() {
    for (int i = 0; i < 10; i++) {
        if (mShopItems[i].mItemStatus == 2 && !fopAcM_IsExecuting(mShopItems[i].mTargetActorID)) {
            deleteItem(i);
            onEventFlag(0);
            dMsgObject_addTotalPrice(mShopItems[i].mValueNum);
            fopAcM_delete(mShopItems[i].mSubActorID);
            cXyz var1(1.0f, 1.0f, 1.0f);
            if (daMyna_evtTagActor0 == NULL ||
                (daMyna_evtTagActor0 != NULL && !chkPlayerInEvtArea(daMyna_evtTagActor0, var1)))
            {
                if (!dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[203])) {
                    dComIfGs_onEventBit(dSv_event_flag_c::saveBitLabels[203]);
                }
            }
        }
    }
}


/* 80949D54-80949EE8 0041D4 0194+00 7/7 0/0 0/0 .text
 * chkPlayerInEvtArea__8daMyna_cFP10fopAc_ac_c4cXyz             */
int daMyna_c::chkPlayerInEvtArea(fopAc_ac_c* param_0, cXyz param_1) {
    int retVal = 0;
    cXyz local_60;
    cXyz local_6c;

    if (param_0 != NULL) {
        mDoMtx_stack_c::YrotS(-param_0->current.angle.y);
        mDoMtx_stack_c::transM(-param_0->current.pos.x, -param_0->current.pos.y,
                               -param_0->current.pos.z);
        mDoMtx_stack_c::multVec(&daPy_getPlayerActorClass()->current.pos, &local_6c);
        f32 fVar1 = fabsf(param_0->scale.x + param_1.x);
        f32 fVar2 = fabsf(param_0->scale.z + param_1.z);
        f32 fVar3 = fabsf(local_6c.x);
        f32 fVar4 = fabsf(local_6c.z);
        local_60 = param_0->current.pos - daPy_getPlayerActorClass()->current.pos;
        if ((fVar3 * fVar3) / (fVar1 * fVar1) + (fVar4 * fVar4) / (fVar2 * fVar2) <= 1.0f &&
            -(param_0->scale.y + param_1.y) < local_60.y &&
            local_60.y < (param_0->scale.y + param_1.y))
        {
            retVal = 1;
        }
    }

    return retVal;
}


/* ############################################################################################## */
/* 8094B244-8094B248 000094 0004+00 2/3 0/0 0/0 .rodata          @5889 */
SECTION_RODATA static f32 const lit_5889 = 6.0f;
COMPILER_STRIP_GATE(0x8094B244, &lit_5889);

/* 80949EE8-8094A054 004368 016C+00 2/1 0/0 0/0 .text            animeControl__8daMyna_cFv */
// regswap
#ifdef NONMATCHING
void daMyna_c::animeControl() {
    f32 fVar1 = 1.0f;
    int iVar5 = 2;
    f32 fVar2 = field_0x90C;
    switch (field_0x935) {
    case 1:
        if (field_0x934 == 4) {
            fVar2 = 6.0f;
        }
        break;
    case 2:
        iVar5 = 0;
        break;
    case 3:
        iVar5 = 0;
        break;
    case 4:
        fVar1 = l_HOSTIO.field_0x08;
        break;
    case 7:
        iVar5 = 0;
        fVar2 = 6.0f;
        break;
    case 8:
        iVar5 = 0;
        break;
    case 14:
        iVar5 = 0;
        break;
    }

    setMcaMorfAnm(getTrnsfrmKeyAnm(l_bckFileNameTBL[field_0x935]), fVar1, fVar2, iVar5, 0, -1);
    if (cLib_checkBit<u16>(field_0x914, 0x40) == 0) {
        J3DAnmTexPattern* btk = getTexPtrnAnm(l_btpFileNameTBL[field_0x936]);
        if (btk != NULL) {
            setBtpAnm(btk, mpMorf->getModel()->getModelData(), 1.0f, 2);
            cLib_onBit<u16>(field_0x914, 0x44);
        }
    }
}
#else
void daMyna_c::animeControl() {
    // NONMATCHING
}
#endif

/* 8094A054-8094A098 0044D4 0044+00 24/24 0/0 0/0 .text            setAnimeType__8daMyna_cFUcf */
void daMyna_c::setAnimeType(u8 param_0, f32 param_1) {
    if (param_0 == 13 || param_0 == 1 || (param_0 == 14 && field_0x935 != 13)) {
        param_1 = 6.0f;
    }
    field_0x934 = field_0x935;
    field_0x935 = param_0;
    field_0x90C = param_1;
}


/* 8094A098-8094A608 004518 0570+00 1/1 0/0 0/0 .text            playDefaultWaitAnime__8daMyna_cFv
 */
// Mostly matching, still has a few issues that need to be fixed
#ifdef NONMATCHING
void daMyna_c::playDefaultWaitAnime() {
    switch (field_0x935) {
    case 2:
    case 3:
        if (field_0x91E != 0) {
            setAnimeType(1, 0.0f);
        }
        break;
    case 6:
        cXyz local_58;
        cXyz local_64;
        cXyz stack_70;

        local_58.x = daMyna_LightActor->current.pos.x;
        local_58.y = home.pos.y;
        local_58.z = daMyna_LightActor->current.pos.z;

        cXyz stack_7c = local_58 - home.pos;

        s16 sVar42 = cM_atan2s(stack_7c.x, stack_7c.z);
        f32 fVar7 = stack_7c.abs();
        f32 fVar3 = ((field_0x82C.y - field_0x844.y) + (field_0x838.y - field_0x850.y)) * 0.5f;

        local_64.x = 0.0f;
        local_64.y = 0.0f;
        local_64.z = l_HOSTIO.field_0x10 * (fVar3 * fVar3);

        cLib_offsetPos(&stack_70, &current.pos, sVar42, &local_64);
        current.pos = stack_70;

        cXyz stack_88 = current.pos - home.pos;
        if (fVar7 > field_0x910 * stack_88.abs()) {
            setAnimeType(1, 6.0f);
        }
        break;
    case 5:
        cXyz local_94;
        cXyz stack_a0;
        cXyz local_ac = home.pos - current.pos;

        s16 sVar4 = cM_atan2s(local_ac.x, local_ac.z);
        f32 fVar2 = ((field_0x82C.y - field_0x844.y) + (field_0x838.y - field_0x850.y)) * 0.5f;

        local_94.x = 0.0f;
        local_94.y = 0.0f;
        local_94.z = l_HOSTIO.field_0x10 * (fVar2 * fVar2);

        cLib_offsetPos(&stack_a0, &current.pos, sVar4, &local_94);
        current.pos = stack_a0;

        cXyz stack_b8 = home.pos - current.pos;

        if (stack_b8.abs() < l_HOSTIO.field_0x20) {
            current.pos.set(home.pos);
            setAnimeType(1, 6.0f);
        }
        break;
    }
}
#else
void daMyna_c::playDefaultWaitAnime() {
    // NONMATCHING
}
#endif

/* ############################################################################################## */
/* 8094B248-8094B24C 000098 0004+00 0/1 0/0 0/0 .rodata          @6108 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6108 = 0.25f;
COMPILER_STRIP_GATE(0x8094B248, &lit_6108);
#pragma pop

/* 8094A608-8094A890 004A88 0288+00 1/1 0/0 0/0 .text            setDefaultWaitAnime__8daMyna_cFUc
 */
void daMyna_c::setDefaultWaitAnime(u8 param_0) {
    if (daMyna_LightActor != NULL && field_0x935 == 1 &&
        (field_0x92C == 0 || field_0x92C == 5 || field_0x92C == 7) &&
        daMyna_LightActor->field_0x578 != daMyna_LightActor->mTurnOnFlag)
    {
        field_0x92D = field_0x92C;
        field_0x92C = 11;
    } else {
        if (field_0x935 == param_0) {
            switch (field_0x935) {
            case 1:
                field_0x924--;
                if (field_0x924 <= 0) {
                    switch (int(cM_rndF(100.0f)) % 3) {
                    case 0:
                        setAnimeType(2, 0.0f);
                        break;
                    case 1:
                        setAnimeType(3, 0.0f);
                        break;
                    default:
                        cXyz stack_24 = home.pos - current.pos;
                        if (stack_24.abs() < l_HOSTIO.field_0x20) {
                            field_0x910 = cM_rnd() * 0.25f + 0.25f;
                            setAnimeType(6, 0.0f);
                        } else {
                            setAnimeType(5, 0.0f);
                        }
                    }
                }
            }
        }
    }
}


/* 8094A890-8094A8B0 004D10 0020+00 1/0 0/0 0/0 .text            daMyna_Create__FPv */
static int daMyna_Create(void* i_this) {
    return static_cast<daMyna_c*>(i_this)->create();
}

/* 8094A8B0-8094A8D0 004D30 0020+00 1/0 0/0 0/0 .text            daMyna_Delete__FPv */
static int daMyna_Delete(void* i_this) {
    return static_cast<daMyna_c*>(i_this)->destroy();
}

/* 8094A8D0-8094A8F0 004D50 0020+00 1/0 0/0 0/0 .text            daMyna_Execute__FPv */
static int daMyna_Execute(void* i_this) {
    return static_cast<daMyna_c*>(i_this)->execute();
}

/* 8094A8F0-8094A910 004D70 0020+00 1/0 0/0 0/0 .text            daMyna_Draw__FPv */
static int daMyna_Draw(void* i_this) {
    return static_cast<daMyna_c*>(i_this)->draw();
}

/* 8094A910-8094A918 004D90 0008+00 1/0 0/0 0/0 .text            daMyna_IsDelete__FPv */
static int daMyna_IsDelete(void* i_this) {
    return 1;
}

/* 8094B934-8094B954 -00001 0020+00 1/0 0/0 0/0 .data            daMyna_MethodTable */
static actor_method_class daMyna_MethodTable = {
    (process_method_func)daMyna_Create,  (process_method_func)daMyna_Delete,
    (process_method_func)daMyna_Execute, (process_method_func)daMyna_IsDelete,
    (process_method_func)daMyna_Draw,
};

/* 8094B954-8094B984 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_MYNA */
extern actor_process_profile_definition g_profile_MYNA = {fpcLy_CURRENT_e,
                                                          7,
                                                          fpcLy_CURRENT_e,
                                                          PROC_MYNA,
                                                          &g_fpcLf_Method.mBase,
                                                          sizeof(daMyna_c),
                                                          0,
                                                          0,
                                                          &g_fopAc_Method.base,
                                                          0x0130,
                                                          &daMyna_MethodTable,
                                                          0x40000,
                                                          0,
                                                          fopAc_CULLBOX_0_e};

/* 8094B984-8094B990 000624 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8094B990-8094B99C 000630 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8094B99C-8094B9A8 00063C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8094B9A8-8094B9B4 000648 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8094B9B4-8094B9C0 000654 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8094B9C0-8094B9CC 000660 000C+00 2/2 0/0 0/0 .data            __vt__8daMyna_c */
SECTION_DATA extern void* __vt__8daMyna_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8daMyna_cFv,
};

/* 8094A918-8094A960 004D98 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8094B9CC-8094B9D8 00066C 000C+00 2/2 0/0 0/0 .data            __vt__12daMyna_HIO_c */
SECTION_DATA extern void* __vt__12daMyna_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daMyna_HIO_cFv,
};

/* 8094B9D8-8094B9E4 000678 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 8094A960-8094A9BC 004DE0 005C+00 2/1 0/0 0/0 .text            __dt__12daMyna_HIO_cFv */
// daMyna_HIO_c::~daMyna_HIO_c() {
extern "C" void __dt__12daMyna_HIO_cFv() {
    // NONMATCHING
}

/* 8094A9BC-8094AA04 004E3C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* 8094AA04-8094AA20 004E84 001C+00 2/2 0/0 0/0 .text            getHeadTopPos__9daPy_py_cCFv */
cXyz daPy_py_c::getHeadTopPos() const {
    return mHeadTopPos;
}

/* 8094AA20-8094ABAC 004EA0 018C+00 1/0 0/0 0/0 .text            __dt__8daMyna_cFv */
// daMyna_c::~daMyna_c() {
extern "C" void __dt__8daMyna_cFv() {
    // NONMATCHING
}

/* 8094ABAC-8094ABC8 00502C 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<s>__FPs */
extern "C" void func_8094ABAC(void* _this, s16* param_0) {
    // NONMATCHING
}

/* 8094ABC8-8094AC44 005048 007C+00 1/1 0/0 0/0 .text            cLib_getRndValue<i>__Fii */
extern "C" void func_8094ABC8(void* _this, int param_0, int param_1) {
    // NONMATCHING
}

/* 8094AC44-8094B19C 0050C4 0558+00 0/0 1/0 0/0 .text            __sinit_d_a_myna_cpp */
void __sinit_d_a_myna_cpp(){// NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8094AC44, __sinit_d_a_myna_cpp);
#pragma pop

/* ############################################################################################## */
/* 8094BAD0-8094BAD4 0000E8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8094BAD0[4];
#pragma pop

/* 8094BAD4-8094BAD8 0000EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8094BAD4[4];
#pragma pop

/* 8094BAD8-8094BADC 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8094BAD8[4];
#pragma pop

/* 8094BADC-8094BAE0 0000F4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8094BADC[4];
#pragma pop

/* 8094BAE0-8094BAE4 0000F8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8094BAE0[4];
#pragma pop

/* 8094BAE4-8094BAE8 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8094BAE4[4];
#pragma pop

/* 8094BAE8-8094BAEC 000100 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8094BAE8[4];
#pragma pop

/* 8094BAEC-8094BAF0 000104 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8094BAEC[4];
#pragma pop

/* 8094BAF0-8094BAF4 000108 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8094BAF0[4];
#pragma pop

/* 8094BAF4-8094BAF8 00010C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8094BAF4[4];
#pragma pop

/* 8094BAF8-8094BAFC 000110 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8094BAF8[4];
#pragma pop

/* 8094BAFC-8094BB00 000114 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8094BAFC[4];
#pragma pop

/* 8094BB00-8094BB04 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8094BB00[4];
#pragma pop

/* 8094BB04-8094BB08 00011C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8094BB04[4];
#pragma pop

/* 8094BB08-8094BB0C 000120 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8094BB08[4];
#pragma pop

/* 8094BB0C-8094BB10 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8094BB0C[4];
#pragma pop

/* 8094BB10-8094BB14 000128 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8094BB10[4];
#pragma pop

/* 8094BB14-8094BB18 00012C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8094BB14[4];
#pragma pop

/* 8094BB18-8094BB1C 000130 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8094BB18[4];
#pragma pop

/* 8094BB1C-8094BB20 000134 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8094BB1C[4];
#pragma pop

/* 8094BB20-8094BB24 000138 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8094BB20[4];
#pragma pop

/* 8094BB24-8094BB28 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8094BB24[4];
#pragma pop

/* 8094BB28-8094BB2C 000140 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8094BB28[4];
#pragma pop

/* 8094BB2C-8094BB30 000144 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8094BB2C[4];
#pragma pop

/* 8094BB30-8094BB34 000148 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8094BB30[4];
#pragma pop

/* 8094B24C-8094B24C 00009C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
