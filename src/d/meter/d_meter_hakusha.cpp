//
// Generated By: dol2asm
// Translation Unit: d/meter/d_meter_hakusha
//

#include "d/meter/d_meter_hakusha.h"
#include "dol2asm.h"

//
// Types:
//

struct dMeterSub_c {
    /* 80194138 */ bool isDead();
};

struct dMeterHakusha_c {
    /* 8020C320 */ dMeterHakusha_c(void*);
    /* 8020C384 */ ~dMeterHakusha_c();
    /* 8020C400 */ void _create();
    /* 8020C808 */ void _execute(u32);
    /* 8020C850 */ void draw();
    /* 8020CABC */ void _delete();
    /* 8020CC58 */ void alphaAnimeHakusha(u32);
    /* 8020CD6C */ void updateHakusha();
    /* 8020D258 */ void setAlphaHakushaAnimeMin();
    /* 8020D308 */ void setAlphaHakushaAnimeMax();
    /* 8020D3B8 */ void setAlphaButtonAnimeMin();
    /* 8020D41C */ void setAlphaButtonAnimeMax();
    /* 8020D480 */ void getHakushaNum();
};

struct JUtility {
    struct TColor {};
};

struct CPaneMgrAlpha {
    /* 802555C8 */ void show();
    /* 80255608 */ void hide();
    /* 802557D0 */ void setAlphaRate(f32);
    /* 80255828 */ void getAlphaRate();
};

struct dMeter2Draw_c {
    /* 8021462C */ void drawPikariHakusha(f32, f32, f32, f32, JUtility::TColor, JUtility::TColor,
                                          JUtility::TColor, JUtility::TColor);
    /* 8021A9C8 */ void setAlphaAnimeMin(CPaneMgrAlpha*, s16);
    /* 8021AAA4 */ void setAlphaAnimeMax(CPaneMgrAlpha*, s16);
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct JKRExpHeap {};

struct JKRArchive {};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct J2DPane {};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802545B0 */ void paneTrans(f32, f32);
    /* 80254EBC */ void getGlobalVtxCenter(J2DPane*, bool, s16);
};

//
// Forward References:
//

extern "C" void __ct__15dMeterHakusha_cFPv();
extern "C" void __dt__15dMeterHakusha_cFv();
extern "C" void _create__15dMeterHakusha_cFv();
extern "C" void _execute__15dMeterHakusha_cFUl();
extern "C" void draw__15dMeterHakusha_cFv();
extern "C" void _delete__15dMeterHakusha_cFv();
extern "C" void alphaAnimeHakusha__15dMeterHakusha_cFUl();
extern "C" void updateHakusha__15dMeterHakusha_cFv();
extern "C" void setAlphaHakushaAnimeMin__15dMeterHakusha_cFv();
extern "C" void setAlphaHakushaAnimeMax__15dMeterHakusha_cFv();
extern "C" void setAlphaButtonAnimeMin__15dMeterHakusha_cFv();
extern "C" void setAlphaButtonAnimeMax__15dMeterHakusha_cFv();
extern "C" void getHakushaNum__15dMeterHakusha_cFv();
extern "C" extern char const* const d_meter_d_meter_hakusha__stringBase0;

//
// External References:
//

extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" bool isDead__11dMeterSub_cFv();
extern "C" void
drawPikariHakusha__13dMeter2Draw_cFffffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void setAlphaAnimeMin__13dMeter2Draw_cFP13CPaneMgrAlphas();
extern "C" void setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void getAlphaRate__13CPaneMgrAlphaFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void strcmp();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern void* __vt__11dMeterSub_c[8 + 3 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_drawHIO[3880];
extern "C" extern u8 g_meter2_info[248];

//
// Declarations:
//

/* ############################################################################################## */
/* 803BF288-803BF2B8 01C3A8 0030+00 1/1 0/0 0/0 .data            haku_tag$3719 */
SECTION_DATA static u8 haku_tag[48] = {
    0x68, 0x61, 0x6B, 0x75, 0x5F, 0x6E, 0x30, 0x30, 0x68, 0x61, 0x6B, 0x75, 0x5F, 0x6E, 0x30, 0x31,
    0x68, 0x61, 0x6B, 0x75, 0x5F, 0x6E, 0x30, 0x32, 0x68, 0x61, 0x6B, 0x75, 0x5F, 0x6E, 0x30, 0x33,
    0x68, 0x61, 0x6B, 0x75, 0x5F, 0x6E, 0x30, 0x34, 0x68, 0x61, 0x6B, 0x75, 0x5F, 0x6E, 0x30, 0x35,
};

/* 803BF2B8-803BF2D8 01C3D8 0020+00 2/2 0/0 0/0 .data            __vt__15dMeterHakusha_c */
SECTION_DATA extern void* __vt__15dMeterHakusha_c[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__15dMeterHakusha_cFv,
    (void*)__dt__15dMeterHakusha_cFv,
    (void*)_create__15dMeterHakusha_cFv,
    (void*)_execute__15dMeterHakusha_cFUl,
    (void*)_delete__15dMeterHakusha_cFv,
    (void*)isDead__11dMeterSub_cFv,
};

/* 8020C320-8020C384 206C60 0064+00 0/0 1/1 0/0 .text            __ct__15dMeterHakusha_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMeterHakusha_c::dMeterHakusha_c(void* param_0) {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/__ct__15dMeterHakusha_cFPv.s"
}
#pragma pop

/* 8020C384-8020C400 206CC4 007C+00 1/0 0/0 0/0 .text            __dt__15dMeterHakusha_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMeterHakusha_c::~dMeterHakusha_c() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/__dt__15dMeterHakusha_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803981B0-803981B0 024810 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803981B0 = "zelda_game_image_hakusha_parts.blo";
SECTION_DEAD static char const* const stringBase_803981D3 = "zelda_game_image_hakusha_a_btn.blo";
SECTION_DEAD static char const* const stringBase_803981F6 = "F_SP108";
#pragma pop

/* 80454800-80454804 002E00 0004+00 6/6 0/0 0/0 .sdata2          @3793 */
SECTION_SDATA2 static u8 lit_3793[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454804-80454808 002E04 0004+00 2/2 0/0 0/0 .sdata2          @3794 */
SECTION_SDATA2 static f32 lit_3794 = 28.399999618530273f;

/* 8020C400-8020C808 206D40 0408+00 1/0 0/0 0/0 .text            _create__15dMeterHakusha_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::_create() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/_create__15dMeterHakusha_cFv.s"
}
#pragma pop

/* 8020C808-8020C850 207148 0048+00 1/0 0/0 0/0 .text            _execute__15dMeterHakusha_cFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::_execute(u32 param_0) {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/_execute__15dMeterHakusha_cFUl.s"
}
#pragma pop

/* 8020C850-8020CABC 207190 026C+00 1/0 0/0 0/0 .text            draw__15dMeterHakusha_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::draw() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/draw__15dMeterHakusha_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454808-8045480C 002E08 0004+00 3/3 0/0 0/0 .sdata2          @3936 */
SECTION_SDATA2 static f32 lit_3936 = 1.0f;

/* 8020CABC-8020CC58 2073FC 019C+00 1/0 0/0 0/0 .text            _delete__15dMeterHakusha_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::_delete() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/_delete__15dMeterHakusha_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803981B0-803981B0 024810 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803981FE = "F_SP00";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80398205 = "\0\0";
#pragma pop

/* 8020CC58-8020CD6C 207598 0114+00 1/1 0/0 0/0 .text alphaAnimeHakusha__15dMeterHakusha_cFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::alphaAnimeHakusha(u32 param_0) {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/alphaAnimeHakusha__15dMeterHakusha_cFUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045480C-80454810 002E0C 0004+00 1/1 0/0 0/0 .sdata2          @4094 */
SECTION_SDATA2 static f32 lit_4094 = 18.0f;

/* 80454810-80454814 002E10 0004+00 1/1 0/0 0/0 .sdata2          @4095 */
SECTION_SDATA2 static f32 lit_4095 = 28.0f;

/* 80454814-80454818 002E14 0004+00 1/1 0/0 0/0 .sdata2          @4096 */
SECTION_SDATA2 static f32 lit_4096 = 20.0f;

/* 80454818-80454820 002E18 0008+00 1/1 0/0 0/0 .sdata2          @4098 */
SECTION_SDATA2 static f64 lit_4098 = 4503601774854144.0 /* cast s32 to float */;

/* 8020CD6C-8020D258 2076AC 04EC+00 1/1 0/0 0/0 .text            updateHakusha__15dMeterHakusha_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::updateHakusha() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/updateHakusha__15dMeterHakusha_cFv.s"
}
#pragma pop

/* 8020D258-8020D308 207B98 00B0+00 1/1 0/0 0/0 .text setAlphaHakushaAnimeMin__15dMeterHakusha_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::setAlphaHakushaAnimeMin() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/setAlphaHakushaAnimeMin__15dMeterHakusha_cFv.s"
}
#pragma pop

/* 8020D308-8020D3B8 207C48 00B0+00 1/1 0/0 0/0 .text setAlphaHakushaAnimeMax__15dMeterHakusha_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::setAlphaHakushaAnimeMax() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/setAlphaHakushaAnimeMax__15dMeterHakusha_cFv.s"
}
#pragma pop

/* 8020D3B8-8020D41C 207CF8 0064+00 1/1 0/0 0/0 .text setAlphaButtonAnimeMin__15dMeterHakusha_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::setAlphaButtonAnimeMin() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/setAlphaButtonAnimeMin__15dMeterHakusha_cFv.s"
}
#pragma pop

/* 8020D41C-8020D480 207D5C 0064+00 1/1 0/0 0/0 .text setAlphaButtonAnimeMax__15dMeterHakusha_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::setAlphaButtonAnimeMax() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/setAlphaButtonAnimeMax__15dMeterHakusha_cFv.s"
}
#pragma pop

/* 8020D480-8020D49C 207DC0 001C+00 2/2 0/0 0/0 .text            getHakushaNum__15dMeterHakusha_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterHakusha_c::getHakushaNum() {
    nofralloc
#include "asm/d/meter/d_meter_hakusha/getHakushaNum__15dMeterHakusha_cFv.s"
}
#pragma pop

/* 803981B0-803981B0 024810 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
