//
// Generated By: dol2asm
// Translation Unit: d_a_tag_attack_item
//

#include "rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item.h"
#include "dol2asm.h"

//
// Types:
//

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagAtkItem_c {
    /* 805A2958 */ void setBaseMtx();
    /* 805A2990 */ void Create();
    /* 805A2A34 */ void create();
    /* 805A2C48 */ void execute();
    /* 805A2CA8 */ void action();
    /* 805A2D10 */ void eventStart();
    /* 805A2D34 */ void eventEnd();
    /* 805A2D58 */ void checkHit();
    /* 805A2F54 */ void createItem();
    /* 805A3038 */ bool _delete();
    /* 805A3118 */ ~daTagAtkItem_c();
};

struct dEvLib_callback_c {
    /* 8004886C */ void eventUpdate();
    /* 80048940 */ void orderEvent(int, int, int);
    /* 805A30A0 */ ~dEvLib_callback_c();
    /* 805A30E8 */ bool eventRun();
    /* 805A30F0 */ bool eventStart();
    /* 805A30F8 */ bool eventEnd();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 805A2BEC */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 805A2B5C */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 805A2BA4 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 805A3278 */ ~cCcD_GStts();
};

//
// Forward References:
//

extern "C" void setBaseMtx__14daTagAtkItem_cFv();
extern "C" void Create__14daTagAtkItem_cFv();
extern "C" void create__14daTagAtkItem_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void execute__14daTagAtkItem_cFv();
extern "C" void action__14daTagAtkItem_cFv();
extern "C" void eventStart__14daTagAtkItem_cFv();
extern "C" void eventEnd__14daTagAtkItem_cFv();
extern "C" void checkHit__14daTagAtkItem_cFv();
extern "C" void createItem__14daTagAtkItem_cFv();
extern "C" bool _delete__14daTagAtkItem_cFv();
extern "C" static void daTagAtkItem_Execute__FP14daTagAtkItem_c();
extern "C" static void daTagAtkItem_Delete__FP14daTagAtkItem_c();
extern "C" static void daTagAtkItem_Create__FP14daTagAtkItem_c();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" static void func_805A3100();
extern "C" static void func_805A3108();
extern "C" static void func_805A3110();
extern "C" void __dt__14daTagAtkItem_cFv();
extern "C" void __dt__10cCcD_GSttsFv();

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* 805A2958-805A2990 000078 0038+00 1/1 0/0 0/0 .text            setBaseMtx__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/setBaseMtx__14daTagAtkItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A32C8-805A32CC 000000 0004+00 2/2 0/0 0/0 .rodata          @3657 */
SECTION_RODATA static f32 const lit_3657 = 50.0f;
COMPILER_STRIP_GATE(0x805A32C8, &lit_3657);

/* 805A32CC-805A32D0 000004 0004+00 1/2 0/0 0/0 .rodata          @3658 */
SECTION_RODATA static f32 const lit_3658 = 100.0f;
COMPILER_STRIP_GATE(0x805A32CC, &lit_3658);

/* 805A32F4-805A3338 000000 0044+00 1/1 0/0 0/0 .data            l_cyl_src */
SECTION_DATA static u8 l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x78,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};

/* 805A2990-805A2A34 0000B0 00A4+00 1/1 0/0 0/0 .text            Create__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::Create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/Create__14daTagAtkItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A3338-805A3358 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagAtkItem_Method */
SECTION_DATA static void* l_daTagAtkItem_Method[8] = {
    (void*)daTagAtkItem_Create__FP14daTagAtkItem_c,
    (void*)daTagAtkItem_Delete__FP14daTagAtkItem_c,
    (void*)daTagAtkItem_Execute__FP14daTagAtkItem_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A3358-805A3388 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_AttackItem */
SECTION_DATA extern void* g_profile_Tag_AttackItem[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01AA0000, (void*)&g_fpcLf_Method,
    (void*)0x000006FC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02490000, (void*)&l_daTagAtkItem_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 805A3388-805A33B4 000094 002C+00 2/2 0/0 0/0 .data            __vt__14daTagAtkItem_c */
SECTION_DATA extern void* __vt__14daTagAtkItem_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805A3110,
    (void*)func_805A3108,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)func_805A3100,
    (void*)__dt__14daTagAtkItem_cFv,
    (void*)eventStart__14daTagAtkItem_cFv,
    (void*)eventEnd__14daTagAtkItem_cFv,
};

/* 805A33B4-805A33C0 0000C0 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 805A33C0-805A33CC 0000CC 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 805A33CC-805A33D8 0000D8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 805A33D8-805A33E4 0000E4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 805A33E4-805A33FC 0000F0 0018+00 3/3 0/0 0/0 .data            __vt__17dEvLib_callback_c */
SECTION_DATA extern void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 805A2A34-805A2B5C 000154 0128+00 1/1 0/0 0/0 .text            create__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/func_805A2A34.s"
}
#pragma pop

/* 805A2B5C-805A2BA4 00027C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 805A2BA4-805A2BEC 0002C4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 805A2BEC-805A2C48 00030C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 805A2C48-805A2CA8 000368 0060+00 1/1 0/0 0/0 .text            execute__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/execute__14daTagAtkItem_cFv.s"
}
#pragma pop

/* 805A2CA8-805A2D10 0003C8 0068+00 1/1 0/0 0/0 .text            action__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::action() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/action__14daTagAtkItem_cFv.s"
}
#pragma pop

/* 805A2D10-805A2D34 000430 0024+00 2/1 0/0 0/0 .text            eventStart__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::eventStart() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/eventStart__14daTagAtkItem_cFv.s"
}
#pragma pop

/* 805A2D34-805A2D58 000454 0024+00 2/1 0/0 0/0 .text            eventEnd__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::eventEnd() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/eventEnd__14daTagAtkItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A32D0-805A32D8 000008 0004+04 0/1 0/0 0/0 .rodata          @3859 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3859[4 + 4 /* padding */] = {
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
COMPILER_STRIP_GATE(0x805A32D0, &lit_3859);
#pragma pop

/* 805A32D8-805A32E0 000010 0008+00 0/1 0/0 0/0 .rodata          @3860 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3860[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805A32D8, &lit_3860);
#pragma pop

/* 805A32E0-805A32E8 000018 0008+00 0/1 0/0 0/0 .rodata          @3861 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3861[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805A32E0, &lit_3861);
#pragma pop

/* 805A32E8-805A32F0 000020 0008+00 0/1 0/0 0/0 .rodata          @3862 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3862[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805A32E8, &lit_3862);
#pragma pop

/* 805A2D58-805A2F54 000478 01FC+00 1/1 0/0 0/0 .text            checkHit__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::checkHit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/checkHit__14daTagAtkItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A32F0-805A32F4 000028 0004+00 1/1 0/0 0/0 .rodata          @3898 */
SECTION_RODATA static f32 const lit_3898 = 32767.0f;
COMPILER_STRIP_GATE(0x805A32F0, &lit_3898);

/* 805A2F54-805A3038 000674 00E4+00 2/2 0/0 0/0 .text            createItem__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagAtkItem_c::createItem() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/createItem__14daTagAtkItem_cFv.s"
}
#pragma pop

/* 805A3038-805A3040 000758 0008+00 1/1 0/0 0/0 .text            _delete__14daTagAtkItem_cFv */
bool daTagAtkItem_c::_delete() {
    return true;
}

/* 805A3040-805A3060 000760 0020+00 1/0 0/0 0/0 .text daTagAtkItem_Execute__FP14daTagAtkItem_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagAtkItem_Execute(daTagAtkItem_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/daTagAtkItem_Execute__FP14daTagAtkItem_c.s"
}
#pragma pop

/* 805A3060-805A3080 000780 0020+00 1/0 0/0 0/0 .text daTagAtkItem_Delete__FP14daTagAtkItem_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagAtkItem_Delete(daTagAtkItem_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/daTagAtkItem_Delete__FP14daTagAtkItem_c.s"
}
#pragma pop

/* 805A3080-805A30A0 0007A0 0020+00 1/0 0/0 0/0 .text daTagAtkItem_Create__FP14daTagAtkItem_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagAtkItem_Create(daTagAtkItem_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/daTagAtkItem_Create__FP14daTagAtkItem_c.s"
}
#pragma pop

/* 805A30A0-805A30E8 0007C0 0048+00 1/0 0/0 0/0 .text            __dt__17dEvLib_callback_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop

/* 805A30E8-805A30F0 000808 0008+00 2/0 0/0 0/0 .text            eventRun__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventRun() {
    return true;
}

/* 805A30F0-805A30F8 000810 0008+00 1/0 0/0 0/0 .text            eventStart__17dEvLib_callback_cFv
 */
bool dEvLib_callback_c::eventStart() {
    return true;
}

/* 805A30F8-805A3100 000818 0008+00 1/0 0/0 0/0 .text            eventEnd__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventEnd() {
    return true;
}

/* 805A3100-805A3108 000820 0008+00 1/0 0/0 0/0 .text            @1384@eventEnd__14daTagAtkItem_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_805A3100() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/func_805A3100.s"
}
#pragma pop

/* 805A3108-805A3110 000828 0008+00 1/0 0/0 0/0 .text @1384@eventStart__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_805A3108() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/func_805A3108.s"
}
#pragma pop

/* 805A3110-805A3118 000830 0008+00 1/0 0/0 0/0 .text            @1384@__dt__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_805A3110() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/func_805A3110.s"
}
#pragma pop

/* 805A3118-805A3278 000838 0160+00 2/1 0/0 0/0 .text            __dt__14daTagAtkItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagAtkItem_c::~daTagAtkItem_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/__dt__14daTagAtkItem_cFv.s"
}
#pragma pop

/* 805A3278-805A32C0 000998 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attack_item/d_a_tag_attack_item/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
