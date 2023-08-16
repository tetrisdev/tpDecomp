//
// Generated By: dol2asm
// Translation Unit: d_a_tag_push
//

#include "rel/d/a/tag/d_a_tag_push/d_a_tag_push.h"
#include "dol2asm.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct cXyz {};

struct daTag_Push_c {
    /* 804902B8 */ void srchActor(void*, void*);
    /* 80490418 */ void create();
    /* 804904D4 */ bool Delete();
    /* 804904DC */ void Execute();
    /* 804906BC */ bool Draw();
    /* 804906C4 */ void isDelete();
    /* 80490724 */ void chkPointInArea(cXyz);
    /* 804908CC */ ~daTag_Push_c();
};

struct daNpcT_ActorMngr_c {
    /* 801456D4 */ void initialize();
    /* 801456E0 */ void entry(fopAc_ac_c*);
    /* 80145708 */ void getActorP();
    /* 80490884 */ ~daNpcT_ActorMngr_c();
};

struct daNpcF_ActorMngr_c {
    /* 801506BC */ void entry(fopAc_ac_c*);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

extern "C" void srchActor__12daTag_Push_cFPvPv();
extern "C" void create__12daTag_Push_cFv();
extern "C" bool Delete__12daTag_Push_cFv();
extern "C" void Execute__12daTag_Push_cFv();
extern "C" bool Draw__12daTag_Push_cFv();
extern "C" void isDelete__12daTag_Push_cFv();
extern "C" void chkPointInArea__12daTag_Push_cF4cXyz();
extern "C" static void daTag_Push_Create__FPv();
extern "C" static void daTag_Push_Delete__FPv();
extern "C" static void daTag_Push_Execute__FPv();
extern "C" static void daTag_Push_Draw__FPv();
extern "C" static bool daTag_Push_IsDelete__FPv();
extern "C" void __dt__18daNpcT_ActorMngr_cFv();
extern "C" void __dt__12daTag_Push_cFv();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcEx_IsExist__FUi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void initialize__18daNpcT_ActorMngr_cFv();
extern "C" void entry__18daNpcT_ActorMngr_cFP10fopAc_ac_c();
extern "C" void getActorP__18daNpcT_ActorMngr_cFv();
extern "C" void daNpcT_chkPointInArea__F4cXyz4cXyz4cXyzsi();
extern "C" void entry__18daNpcF_ActorMngr_cFP10fopAc_ac_c();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80490950-80490978 -00001 0028+00 1/1 0/0 0/0 .data            @3868 */
SECTION_DATA static void* lit_3868[10] = {
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0x138),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0x88),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0x9C),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0xB0),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0xC4),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0xD8),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0xEC),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0x100),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0x114),
    (void*)(((char*)srchActor__12daTag_Push_cFPvPv) + 0x128),
};

/* 804902B8-80490418 000078 0160+00 2/1 0/0 0/0 .text            srchActor__12daTag_Push_cFPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Push_c::srchActor(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/srchActor__12daTag_Push_cFPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8049094C-80490950 000000 0004+00 1/1 0/0 0/0 .rodata          @3887 */
SECTION_RODATA static f32 const lit_3887 = 100.0f;
COMPILER_STRIP_GATE(0x8049094C, &lit_3887);

/* 80490978-80490998 -00001 0020+00 1/0 0/0 0/0 .data            daTag_Push_MethodTable */
SECTION_DATA static void* daTag_Push_MethodTable[8] = {
    (void*)daTag_Push_Create__FPv,
    (void*)daTag_Push_Delete__FPv,
    (void*)daTag_Push_Execute__FPv,
    (void*)daTag_Push_IsDelete__FPv,
    (void*)daTag_Push_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80490998-804909C8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_PUSH */
SECTION_DATA extern void* g_profile_TAG_PUSH[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02EC0000, (void*)&g_fpcLf_Method,
    (void*)0x00000574, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01230000, (void*)&daTag_Push_MethodTable,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 804909C8-804909D4 000078 000C+00 3/3 0/0 0/0 .data            __vt__18daNpcT_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcT_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcT_ActorMngr_cFv,
};

/* 804909D4-804909E0 000084 000C+00 2/2 0/0 0/0 .data            __vt__12daTag_Push_c */
SECTION_DATA extern void* __vt__12daTag_Push_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daTag_Push_cFv,
};

/* 80490418-804904D4 0001D8 00BC+00 1/1 0/0 0/0 .text            create__12daTag_Push_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Push_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/create__12daTag_Push_cFv.s"
}
#pragma pop

/* 804904D4-804904DC 000294 0008+00 1/1 0/0 0/0 .text            Delete__12daTag_Push_cFv */
bool daTag_Push_c::Delete() {
    return true;
}

/* 804904DC-804906BC 00029C 01E0+00 1/1 0/0 0/0 .text            Execute__12daTag_Push_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Push_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/Execute__12daTag_Push_cFv.s"
}
#pragma pop

/* 804906BC-804906C4 00047C 0008+00 1/1 0/0 0/0 .text            Draw__12daTag_Push_cFv */
bool daTag_Push_c::Draw() {
    return true;
}

/* 804906C4-80490724 000484 0060+00 2/2 0/0 0/0 .text            isDelete__12daTag_Push_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Push_c::isDelete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/isDelete__12daTag_Push_cFv.s"
}
#pragma pop

/* 80490724-804907FC 0004E4 00D8+00 1/1 0/0 0/0 .text chkPointInArea__12daTag_Push_cF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Push_c::chkPointInArea(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/chkPointInArea__12daTag_Push_cF4cXyz.s"
}
#pragma pop

/* 804907FC-8049081C 0005BC 0020+00 1/0 0/0 0/0 .text            daTag_Push_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Push_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/daTag_Push_Create__FPv.s"
}
#pragma pop

/* 8049081C-8049083C 0005DC 0020+00 1/0 0/0 0/0 .text            daTag_Push_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Push_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/daTag_Push_Delete__FPv.s"
}
#pragma pop

/* 8049083C-8049085C 0005FC 0020+00 1/0 0/0 0/0 .text            daTag_Push_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Push_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/daTag_Push_Execute__FPv.s"
}
#pragma pop

/* 8049085C-8049087C 00061C 0020+00 1/0 0/0 0/0 .text            daTag_Push_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Push_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/daTag_Push_Draw__FPv.s"
}
#pragma pop

/* 8049087C-80490884 00063C 0008+00 1/0 0/0 0/0 .text            daTag_Push_IsDelete__FPv */
static bool daTag_Push_IsDelete(void* param_0) {
    return true;
}

/* 80490884-804908CC 000644 0048+00 1/0 0/0 0/0 .text            __dt__18daNpcT_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcT_ActorMngr_c::~daNpcT_ActorMngr_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/__dt__18daNpcT_ActorMngr_cFv.s"
}
#pragma pop

/* 804908CC-80490944 00068C 0078+00 1/0 0/0 0/0 .text            __dt__12daTag_Push_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Push_c::~daTag_Push_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_push/d_a_tag_push/__dt__12daTag_Push_cFv.s"
}
#pragma pop
