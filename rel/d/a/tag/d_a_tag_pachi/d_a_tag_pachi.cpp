//
// Generated By: dol2asm
// Translation Unit: d_a_tag_pachi
//

#include "rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi.h"
#include "dol2asm.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagPati_c {
    /* 80D5D438 */ ~daTagPati_c();
    /* 80D5D570 */ void create();
    /* 80D5D78C */ void Execute();
    /* 80D5D7C8 */ void col_set();
    /* 80D5D830 */ void chk_CoHit();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80D5D6A0 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084658 */ void ChkCoHit();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cXyz {};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80D5D6FC */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D5D744 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80D5D8C4 */ ~cCcD_GStts();
};

//
// Forward References:
//

extern "C" void __dt__11daTagPati_cFv();
extern "C" void create__11daTagPati_cFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void Execute__11daTagPati_cFv();
extern "C" void col_set__11daTagPati_cFv();
extern "C" void chk_CoHit__11daTagPati_cFv();
extern "C" static void daTagPati_Create__FP10fopAc_ac_c();
extern "C" static void daTagPati_Execute__FP10fopAc_ac_c();
extern "C" static void daTagPati_Delete__FP11daTagPati_c();
extern "C" void __dt__10cCcD_GSttsFv();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5D960-80D5D980 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagPati_Method */
SECTION_DATA static void* l_daTagPati_Method[8] = {
    (void*)daTagPati_Create__FP10fopAc_ac_c,
    (void*)daTagPati_Delete__FP11daTagPati_c,
    (void*)daTagPati_Execute__FP10fopAc_ac_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5D980-80D5D9B0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_PATI */
SECTION_DATA extern void* g_profile_TAG_PATI[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02720000, (void*)&g_fpcLf_Method,
    (void*)0x000006E8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01730000, (void*)&l_daTagPati_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D5D9B0-80D5D9BC 000050 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D5D9BC-80D5D9C8 00005C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D5D9C8-80D5D9D4 000068 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D5D9D4-80D5D9E0 000074 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D5D438-80D5D570 000078 0138+00 1/1 0/0 0/0 .text            __dt__11daTagPati_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagPati_c::~daTagPati_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/__dt__11daTagPati_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5D914-80D5D958 000000 0044+00 1/1 0/0 0/0 .rodata          l_sph_src */
SECTION_RODATA static u8 const l_sph_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5D914, &l_sph_src);

/* 80D5D570-80D5D6A0 0001B0 0130+00 1/1 0/0 0/0 .text            create__11daTagPati_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagPati_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/create__11daTagPati_cFv.s"
}
#pragma pop

/* 80D5D6A0-80D5D6FC 0002E0 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80D5D6FC-80D5D744 00033C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D5D744-80D5D78C 000384 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D5D78C-80D5D7C8 0003CC 003C+00 1/1 0/0 0/0 .text            Execute__11daTagPati_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagPati_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/Execute__11daTagPati_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5D958-80D5D95C 000044 0004+00 1/1 0/0 0/0 .rodata          @3802 */
SECTION_RODATA static f32 const lit_3802 = 1350.0f;
COMPILER_STRIP_GATE(0x80D5D958, &lit_3802);

/* 80D5D95C-80D5D960 000048 0004+00 1/1 0/0 0/0 .rodata          @3803 */
SECTION_RODATA static f32 const lit_3803 = 300000.0f;
COMPILER_STRIP_GATE(0x80D5D95C, &lit_3803);

/* 80D5D7C8-80D5D830 000408 0068+00 1/1 0/0 0/0 .text            col_set__11daTagPati_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagPati_c::col_set() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/col_set__11daTagPati_cFv.s"
}
#pragma pop

/* 80D5D830-80D5D85C 000470 002C+00 1/1 0/0 0/0 .text            chk_CoHit__11daTagPati_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagPati_c::chk_CoHit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/chk_CoHit__11daTagPati_cFv.s"
}
#pragma pop

/* 80D5D85C-80D5D87C 00049C 0020+00 1/0 0/0 0/0 .text            daTagPati_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagPati_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/daTagPati_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D5D87C-80D5D89C 0004BC 0020+00 1/0 0/0 0/0 .text            daTagPati_Execute__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagPati_Execute(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/daTagPati_Execute__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D5D89C-80D5D8C4 0004DC 0028+00 1/0 0/0 0/0 .text            daTagPati_Delete__FP11daTagPati_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagPati_Delete(daTagPati_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/daTagPati_Delete__FP11daTagPati_c.s"
}
#pragma pop

/* 80D5D8C4-80D5D90C 000504 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_pachi/d_a_tag_pachi/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
