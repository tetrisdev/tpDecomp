//
// Generated By: dol2asm
// Translation Unit: d_a_obj_automata
//

#include "rel/d/a/obj/d_a_obj_automata/d_a_obj_automata.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {
    /* 8032F7B4 */ void removeTexMtxAnimator(J3DAnmTextureSRTKey*);
};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct Vec {};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0420 */ ~Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObj_AutoMata_c {
    /* 80BA56EC */ ~daObj_AutoMata_c();
    /* 80BA5990 */ void create();
    /* 80BA5F88 */ void CreateHeap();
    /* 80BA60A0 */ void Delete();
    /* 80BA60D4 */ void Execute();
    /* 80BA639C */ void Draw();
    /* 80BA6480 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80BA64A0 */ void srchTHouse(fopAc_ac_c*, void*);
    /* 80BA6500 */ void setAnm(int, bool);
    /* 80BA6634 */ void setEnvTevColor();
    /* 80BA6690 */ void setRoomNo();
    /* 80BA66D4 */ void setMtx();
    /* 80BA674C */ void setSe();
};

struct daObj_AutoMata_Param_c {
    /* 80BA6BA4 */ ~daObj_AutoMata_Param_c();

    static u8 const m[12];
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_SrcCyl {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80BA5E74 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BA5ED0 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80BA5E04 */ ~dBgS_AcchCir();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS {
    /* 80074BE8 */ void GetPolyColor(cBgS_PolyInfo const&);
    /* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80BA5D2C */ ~cM3dGSph();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80BA5D74 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80BA5DBC */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80BA6A98 */ ~cCcD_GStts();
};

struct cBgS_GndChk {
    /* 80267C1C */ cBgS_GndChk();
    /* 80267C94 */ ~cBgS_GndChk();
};

struct _GXTexObj {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 8032842C */ void checkPass(f32);
    /* 80BA5F40 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __dt__16daObj_AutoMata_cFv();
extern "C" void create__16daObj_AutoMata_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void CreateHeap__16daObj_AutoMata_cFv();
extern "C" void Delete__16daObj_AutoMata_cFv();
extern "C" void Execute__16daObj_AutoMata_cFv();
extern "C" void Draw__16daObj_AutoMata_cFv();
extern "C" void createHeapCallBack__16daObj_AutoMata_cFP10fopAc_ac_c();
extern "C" void srchTHouse__16daObj_AutoMata_cFP10fopAc_ac_cPv();
extern "C" void setAnm__16daObj_AutoMata_cFib();
extern "C" void setEnvTevColor__16daObj_AutoMata_cFv();
extern "C" void setRoomNo__16daObj_AutoMata_cFv();
extern "C" void setMtx__16daObj_AutoMata_cFv();
extern "C" void setSe__16daObj_AutoMata_cFv();
extern "C" static void daObj_AutoMata_Create__FPv();
extern "C" static void daObj_AutoMata_Delete__FPv();
extern "C" static void daObj_AutoMata_Execute__FPv();
extern "C" static void daObj_AutoMata_Draw__FPv();
extern "C" static bool daObj_AutoMata_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_obj_automata_cpp();
extern "C" void __dt__22daObj_AutoMata_Param_cFv();
extern "C" static void func_80BA6BEC();
extern "C" static void func_80BA6BF4();
extern "C" u8 const m__22daObj_AutoMata_Param_c[12];
extern "C" extern char const* const d_a_obj_automata__stringBase0;

//
// External References:
//

extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fpcEx_IsExist__FUi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BA6CA4-80BA6CA4 000094 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BA6CA4 = "";
SECTION_DEAD static char const* const stringBase_80BA6CA5 = "AutoMata";
#pragma pop

/* 80BA6CB0-80BA6CBC 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA6CBC-80BA6CD0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BA6CD0-80BA6CD8 000020 0008+00 4/5 0/0 0/0 .data            l_bmdData */
SECTION_DATA static u8 l_bmdData[8] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01,
};

/* 80BA6CD8-80BA6CE0 -00001 0008+00 4/6 0/0 0/0 .data            l_resNameList */
SECTION_DATA static void* l_resNameList[2] = {
    (void*)&d_a_obj_automata__stringBase0,
    (void*)(((char*)&d_a_obj_automata__stringBase0) + 0x1),
};

/* 80BA6CE0-80BA6D24 000030 0044+00 1/2 0/0 0/0 .data            l_ccDCyl */
SECTION_DATA static u8 l_ccDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA6D24-80BA6D64 000074 0040+00 1/2 0/0 0/0 .data            l_ccDSph */
SECTION_DATA static u8 l_ccDSph[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA6D64-80BA6D84 -00001 0020+00 1/0 0/0 0/0 .data            daObj_AutoMata_MethodTable */
SECTION_DATA static void* daObj_AutoMata_MethodTable[8] = {
    (void*)daObj_AutoMata_Create__FPv,
    (void*)daObj_AutoMata_Delete__FPv,
    (void*)daObj_AutoMata_Execute__FPv,
    (void*)daObj_AutoMata_IsDelete__FPv,
    (void*)daObj_AutoMata_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BA6D84-80BA6DB4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_AUTOMATA */
SECTION_DATA extern void* g_profile_OBJ_AUTOMATA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02F90000, (void*)&g_fpcLf_Method,
    (void*)0x00000B38, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00510000, (void*)&daObj_AutoMata_MethodTable,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80BA6DB4-80BA6DC0 000104 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BA6DC0-80BA6DE4 000110 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BA6BF4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BA6BEC,
};

/* 80BA6DE4-80BA6DF0 000134 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BA6DF0-80BA6DFC 000140 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BA6DFC-80BA6E08 00014C 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80BA6E08-80BA6E14 000158 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BA6E14-80BA6E20 000164 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BA6E20-80BA6E2C 000170 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BA6E2C-80BA6E38 00017C 000C+00 2/2 0/0 0/0 .data            __vt__16daObj_AutoMata_c */
SECTION_DATA extern void* __vt__16daObj_AutoMata_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daObj_AutoMata_cFv,
};

/* 80BA56EC-80BA5990 0000EC 02A4+00 1/0 0/0 0/0 .text            __dt__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_AutoMata_c::~daObj_AutoMata_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA6C10-80BA6C1C 000000 000C+00 5/5 0/0 0/0 .rodata          m__22daObj_AutoMata_Param_c */
SECTION_RODATA u8 const daObj_AutoMata_Param_c::m[12] = {
    0x43, 0x5C, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BA6C10, &daObj_AutoMata_Param_c::m);

/* 80BA6C1C-80BA6C4C 00000C 0030+00 1/1 0/0 0/0 .rodata          l_ccDObjData */
SECTION_RODATA static u8 const l_ccDObjData[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BA6C1C, &l_ccDObjData);

/* 80BA6C4C-80BA6C50 00003C 0004+00 0/1 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = -200.0f;
COMPILER_STRIP_GATE(0x80BA6C4C, &lit_3962);
#pragma pop

/* 80BA6C50-80BA6C54 000040 0004+00 0/1 0/0 0/0 .rodata          @3963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3963 = -100.0f;
COMPILER_STRIP_GATE(0x80BA6C50, &lit_3963);
#pragma pop

/* 80BA6C54-80BA6C58 000044 0004+00 0/1 0/0 0/0 .rodata          @3964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3964 = 200.0f;
COMPILER_STRIP_GATE(0x80BA6C54, &lit_3964);
#pragma pop

/* 80BA6C58-80BA6C5C 000048 0004+00 0/1 0/0 0/0 .rodata          @3965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3965 = 300.0f;
COMPILER_STRIP_GATE(0x80BA6C58, &lit_3965);
#pragma pop

/* 80BA6C5C-80BA6C60 00004C 0004+00 0/3 0/0 0/0 .rodata          @3966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3966 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80BA6C5C, &lit_3966);
#pragma pop

/* 80BA5990-80BA5D2C 000390 039C+00 1/1 0/0 0/0 .text            create__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/create__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* 80BA5D2C-80BA5D74 00072C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BA5D74-80BA5DBC 000774 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BA5DBC-80BA5E04 0007BC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BA5E04-80BA5E74 000804 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80BA5E74-80BA5ED0 000874 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80BA5ED0-80BA5F40 0008D0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BA5F40-80BA5F88 000940 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA6C60-80BA6C64 000050 0004+00 1/3 0/0 0/0 .rodata          @4108 */
SECTION_RODATA static f32 const lit_4108 = 1.0f;
COMPILER_STRIP_GATE(0x80BA6C60, &lit_4108);

/* 80BA5F88-80BA60A0 000988 0118+00 1/1 0/0 0/0 .text            CreateHeap__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/CreateHeap__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* 80BA60A0-80BA60D4 000AA0 0034+00 1/1 0/0 0/0 .text            Delete__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/Delete__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA6C64-80BA6C68 000054 0004+00 0/2 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4173[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BA6C64, &lit_4173);
#pragma pop

/* 80BA6C68-80BA6C6C 000058 0004+00 0/1 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4174 = -4.0f;
COMPILER_STRIP_GATE(0x80BA6C68, &lit_4174);
#pragma pop

/* 80BA6C6C-80BA6C70 00005C 0004+00 0/1 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 40.0f;
COMPILER_STRIP_GATE(0x80BA6C6C, &lit_4175);
#pragma pop

/* 80BA60D4-80BA639C 000AD4 02C8+00 2/2 0/0 0/0 .text            Execute__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/Execute__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA6C70-80BA6C74 000060 0004+00 0/1 0/0 0/0 .rodata          @4197 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4197 = 600.0f;
COMPILER_STRIP_GATE(0x80BA6C70, &lit_4197);
#pragma pop

/* 80BA6C74-80BA6C78 000064 0004+00 0/1 0/0 0/0 .rodata          @4198 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4198 = 20.0f;
COMPILER_STRIP_GATE(0x80BA6C74, &lit_4198);
#pragma pop

/* 80BA639C-80BA6480 000D9C 00E4+00 1/1 0/0 0/0 .text            Draw__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/Draw__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* 80BA6480-80BA64A0 000E80 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__16daObj_AutoMata_cFP10fopAc_ac_c         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/createHeapCallBack__16daObj_AutoMata_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80BA64A0-80BA6500 000EA0 0060+00 1/1 0/0 0/0 .text
 * srchTHouse__16daObj_AutoMata_cFP10fopAc_ac_cPv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::srchTHouse(fopAc_ac_c* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/srchTHouse__16daObj_AutoMata_cFP10fopAc_ac_cPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA6C78-80BA6C80 000068 0008+00 0/1 0/0 0/0 .rodata          bckArcIx$4220 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const bckArcIx[8] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06,
};
COMPILER_STRIP_GATE(0x80BA6C78, &bckArcIx);
#pragma pop

/* 80BA6C80-80BA6C88 000070 0008+00 0/1 0/0 0/0 .rodata          btkArcIx$4221 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const btkArcIx[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D,
};
COMPILER_STRIP_GATE(0x80BA6C80, &btkArcIx);
#pragma pop

/* 80BA6C88-80BA6C90 000078 0008+00 0/1 0/0 0/0 .rodata          playMode$4222 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const playMode[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
};
COMPILER_STRIP_GATE(0x80BA6C88, &playMode);
#pragma pop

/* 80BA6C90-80BA6C94 000080 0004+00 0/2 0/0 0/0 .rodata          @4252 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4252 = -1.0f;
COMPILER_STRIP_GATE(0x80BA6C90, &lit_4252);
#pragma pop

/* 80BA6500-80BA6634 000F00 0134+00 1/1 0/0 1/1 .text            setAnm__16daObj_AutoMata_cFib */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::setAnm(int param_0, bool param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/setAnm__16daObj_AutoMata_cFib.s"
}
#pragma pop

/* 80BA6634-80BA6690 001034 005C+00 2/2 0/0 0/0 .text setEnvTevColor__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::setEnvTevColor() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/setEnvTevColor__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* 80BA6690-80BA66D4 001090 0044+00 2/2 0/0 0/0 .text            setRoomNo__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::setRoomNo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/setRoomNo__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* 80BA66D4-80BA674C 0010D4 0078+00 1/1 0/0 0/0 .text            setMtx__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/setMtx__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA6C94-80BA6C98 000084 0004+00 0/1 0/0 0/0 .rodata          @4349 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4349 = 17.0f;
COMPILER_STRIP_GATE(0x80BA6C94, &lit_4349);
#pragma pop

/* 80BA6C98-80BA6C9C 000088 0004+00 0/1 0/0 0/0 .rodata          @4350 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4350 = 100.0f;
COMPILER_STRIP_GATE(0x80BA6C98, &lit_4350);
#pragma pop

/* 80BA6C9C-80BA6CA0 00008C 0004+00 0/1 0/0 0/0 .rodata          @4351 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4351 = 7.0f;
COMPILER_STRIP_GATE(0x80BA6C9C, &lit_4351);
#pragma pop

/* 80BA6CA0-80BA6CA4 000090 0004+00 0/1 0/0 0/0 .rodata          @4352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4352 = 67.0f;
COMPILER_STRIP_GATE(0x80BA6CA0, &lit_4352);
#pragma pop

/* 80BA674C-80BA6A10 00114C 02C4+00 1/1 0/0 0/0 .text            setSe__16daObj_AutoMata_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_AutoMata_c::setSe() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/setSe__16daObj_AutoMata_cFv.s"
}
#pragma pop

/* 80BA6A10-80BA6A30 001410 0020+00 1/0 0/0 0/0 .text            daObj_AutoMata_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_AutoMata_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/daObj_AutoMata_Create__FPv.s"
}
#pragma pop

/* 80BA6A30-80BA6A50 001430 0020+00 1/0 0/0 0/0 .text            daObj_AutoMata_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_AutoMata_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/daObj_AutoMata_Delete__FPv.s"
}
#pragma pop

/* 80BA6A50-80BA6A70 001450 0020+00 1/0 0/0 0/0 .text            daObj_AutoMata_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_AutoMata_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/daObj_AutoMata_Execute__FPv.s"
}
#pragma pop

/* 80BA6A70-80BA6A90 001470 0020+00 1/0 0/0 0/0 .text            daObj_AutoMata_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_AutoMata_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/daObj_AutoMata_Draw__FPv.s"
}
#pragma pop

/* 80BA6A90-80BA6A98 001490 0008+00 1/0 0/0 0/0 .text            daObj_AutoMata_IsDelete__FPv */
static bool daObj_AutoMata_IsDelete(void* param_0) {
    return true;
}

/* 80BA6A98-80BA6AE0 001498 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA6E38-80BA6E44 000188 000C+00 2/2 0/0 0/0 .data            __vt__22daObj_AutoMata_Param_c */
SECTION_DATA extern void* __vt__22daObj_AutoMata_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22daObj_AutoMata_Param_cFv,
};

/* 80BA6E50-80BA6E5C 000008 000C+00 1/1 0/0 0/0 .bss             @3801 */
static u8 lit_3801[12];

/* 80BA6E5C-80BA6E60 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80BA6AE0-80BA6BA4 0014E0 00C4+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_automata_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_automata_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__sinit_d_a_obj_automata_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80BA6AE0, __sinit_d_a_obj_automata_cpp);
#pragma pop

/* 80BA6BA4-80BA6BEC 0015A4 0048+00 2/1 0/0 0/0 .text            __dt__22daObj_AutoMata_Param_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_AutoMata_Param_c::~daObj_AutoMata_Param_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/__dt__22daObj_AutoMata_Param_cFv.s"
}
#pragma pop

/* 80BA6BEC-80BA6BF4 0015EC 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BA6BEC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/func_80BA6BEC.s"
}
#pragma pop

/* 80BA6BF4-80BA6BFC 0015F4 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BA6BF4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_automata/d_a_obj_automata/func_80BA6BF4.s"
}
#pragma pop

/* 80BA6CA4-80BA6CA4 000094 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
