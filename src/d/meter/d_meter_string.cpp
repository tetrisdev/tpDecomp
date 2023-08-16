//
// Generated By: dol2asm
// Translation Unit: d/meter/d_meter_string
//

#include "d/meter/d_meter_string.h"
#include "dol2asm.h"

//
// Types:
//

struct dMeterSub_c {
    /* 80194138 */ bool isDead();
};

struct dMeterString_c {
    /* 8020ED60 */ dMeterString_c(int);
    /* 8020EDF4 */ ~dMeterString_c();
    /* 8020EE70 */ void _create();
    /* 8020F150 */ void _execute(u32);
    /* 8020F1B0 */ void draw();
    /* 8020F49C */ void _delete();
    /* 8020F5A4 */ void createString(int);
    /* 8020F66C */ void playBckAnimation(f32);
    /* 8020F6EC */ void drawPikari();
    /* 8020FA88 */ void isLeadByte(int);
};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C250 */ void getString(u32, char*, JMSMesgEntry_c*);
    /* 8021CC00 */ void resetMeterString();
};

struct JUtility {
    struct TColor {};
};

struct dMeter2Draw_c {
    /* 802140DC */ void drawPikari(f32, f32, f32*, f32, JUtility::TColor, JUtility::TColor,
                                   JUtility::TColor, JUtility::TColor, f32, u8);
};

struct JKRFileLoader {
    /* 802D4270 */ void getGlbResource(char const*, JKRFileLoader*);
};

struct JKRExpHeap {};

struct JKRArchive {};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct J2DPane {
    /* 802F7AFC */ void getParentPane();
    /* 802F7FCC */ void animationTransform();
};

struct J2DAnmLoaderDataBase {
    /* 80308A6C */ void load(void const*);
};

struct CPaneMgrAlpha {
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802545B0 */ void paneTrans(f32, f32);
    /* 80254EBC */ void getGlobalVtxCenter(J2DPane*, bool, s16);
};

//
// Forward References:
//

extern "C" void __ct__14dMeterString_cFi();
extern "C" void __dt__14dMeterString_cFv();
extern "C" void _create__14dMeterString_cFv();
extern "C" void _execute__14dMeterString_cFUl();
extern "C" void draw__14dMeterString_cFv();
extern "C" void _delete__14dMeterString_cFv();
extern "C" void createString__14dMeterString_cFi();
extern "C" void playBckAnimation__14dMeterString_cFf();
extern "C" void drawPikari__14dMeterString_cFv();
extern "C" void isLeadByte__14dMeterString_cFi();
extern "C" extern char const* const d_meter_d_meter_string__stringBase0;

//
// External References:
//

extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void dComIfG_TimerDeleteRequest__Fi();
extern "C" bool isDead__11dMeterSub_cFv();
extern "C" void
drawPikari__13dMeter2Draw_cFffPffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorfUc();
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void resetMeterString__13dMeter2Info_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void dTimer_createTimer__FlUlUcUcffff();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void getParentPane__7J2DPaneFv();
extern "C" void animationTransform__7J2DPaneFv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void _savegpr_23();
extern "C" void _restgpr_23();
extern "C" void strcpy();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern void* __vt__11dMeterSub_c[8 + 3 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_drawHIO[3880];
extern "C" extern u8 g_meter2_info[248];

//
// Declarations:
//

/* ############################################################################################## */
/* 803BF308-803BF328 01C428 0020+00 2/2 0/0 0/0 .data            __vt__14dMeterString_c */
SECTION_DATA extern void* __vt__14dMeterString_c[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__14dMeterString_cFv,
    (void*)__dt__14dMeterString_cFv,
    (void*)_create__14dMeterString_cFv,
    (void*)_execute__14dMeterString_cFUl,
    (void*)_delete__14dMeterString_cFv,
    (void*)isDead__11dMeterSub_cFv,
};

/* 8020ED60-8020EDF4 2096A0 0094+00 0/0 1/1 0/0 .text            __ct__14dMeterString_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMeterString_c::dMeterString_c(int param_0) {
    nofralloc
#include "asm/d/meter/d_meter_string/__ct__14dMeterString_cFi.s"
}
#pragma pop

/* 8020EDF4-8020EE70 209734 007C+00 1/0 0/0 0/0 .text            __dt__14dMeterString_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMeterString_c::~dMeterString_c() {
    nofralloc
#include "asm/d/meter/d_meter_string/__dt__14dMeterString_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80398210-80398210 024870 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80398210 = "zelda_game_image_cow_get_in.blo";
SECTION_DEAD static char const* const stringBase_80398230 = "zelda_game_image_cow_get_in.bck";
SECTION_DEAD static char const* const stringBase_80398250 = "";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80398251 = "\0\0\0\0\0\0";
#pragma pop

/* 80454848-8045484C 002E48 0004+00 1/1 0/0 0/0 .sdata2          @3758 */
SECTION_SDATA2 static f32 lit_3758 = 210.0f;

/* 8045484C-80454850 002E4C 0004+00 1/1 0/0 0/0 .sdata2          @3759 */
SECTION_SDATA2 static f32 lit_3759 = 410.0f;

/* 80454850-80454854 002E50 0004+00 1/1 0/0 0/0 .sdata2          @3760 */
SECTION_SDATA2 static f32 lit_3760 = 32.0f;

/* 80454854-80454858 002E54 0004+00 1/1 0/0 0/0 .sdata2          @3761 */
SECTION_SDATA2 static f32 lit_3761 = 419.0f;

/* 80454858-8045485C 002E58 0004+00 3/3 0/0 0/0 .sdata2          @3762 */
SECTION_SDATA2 static u8 lit_3762[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8020EE70-8020F150 2097B0 02E0+00 1/0 0/0 0/0 .text            _create__14dMeterString_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::_create() {
    nofralloc
#include "asm/d/meter/d_meter_string/_create__14dMeterString_cFv.s"
}
#pragma pop

/* 8020F150-8020F1B0 209A90 0060+00 1/0 0/0 0/0 .text            _execute__14dMeterString_cFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::_execute(u32 param_0) {
    nofralloc
#include "asm/d/meter/d_meter_string/_execute__14dMeterString_cFUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045485C-80454860 002E5C 0004+00 1/1 0/0 0/0 .sdata2          @3819 */
SECTION_SDATA2 static f32 lit_3819 = 60.0f;

/* 80454860-80454864 002E60 0004+00 2/2 0/0 0/0 .sdata2          @3820 */
SECTION_SDATA2 static f32 lit_3820 = 1.0f;

/* 80454864-80454868 002E64 0004+00 2/2 0/0 0/0 .sdata2          @3821 */
SECTION_SDATA2 static f32 lit_3821 = -1.0f;

/* 80454868-80454870 002E68 0004+04 1/1 0/0 0/0 .sdata2          @3822 */
SECTION_SDATA2 static f32 lit_3822[1 + 1 /* padding */] = {
    18.0f,
    /* padding */
    0.0f,
};

/* 80454870-80454878 002E70 0008+00 2/2 0/0 0/0 .sdata2          @3824 */
SECTION_SDATA2 static f64 lit_3824 = 4503601774854144.0 /* cast s32 to float */;

/* 8020F1B0-8020F49C 209AF0 02EC+00 1/0 0/0 0/0 .text            draw__14dMeterString_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::draw() {
    nofralloc
#include "asm/d/meter/d_meter_string/draw__14dMeterString_cFv.s"
}
#pragma pop

/* 8020F49C-8020F5A4 209DDC 0108+00 1/0 0/0 0/0 .text            _delete__14dMeterString_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::_delete() {
    nofralloc
#include "asm/d/meter/d_meter_string/_delete__14dMeterString_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454878-8045487C 002E78 0004+00 1/1 0/0 0/0 .sdata2          @3866 */
SECTION_SDATA2 static f32 lit_3866 = 40.0f;

/* 8020F5A4-8020F66C 209EE4 00C8+00 2/2 1/1 0/0 .text            createString__14dMeterString_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::createString(int param_0) {
    nofralloc
#include "asm/d/meter/d_meter_string/createString__14dMeterString_cFi.s"
}
#pragma pop

/* 8020F66C-8020F6EC 209FAC 0080+00 2/2 0/0 0/0 .text playBckAnimation__14dMeterString_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::playBckAnimation(f32 param_0) {
    nofralloc
#include "asm/d/meter/d_meter_string/playBckAnimation__14dMeterString_cFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045487C-80454880 002E7C 0004+00 1/1 0/0 0/0 .sdata2          @3979 */
SECTION_SDATA2 static f32 lit_3979 = 0.5f;

/* 8020F6EC-8020FA88 20A02C 039C+00 1/1 0/0 0/0 .text            drawPikari__14dMeterString_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::drawPikari() {
    nofralloc
#include "asm/d/meter/d_meter_string/drawPikari__14dMeterString_cFv.s"
}
#pragma pop

/* 8020FA88-8020FAB4 20A3C8 002C+00 1/1 0/0 0/0 .text            isLeadByte__14dMeterString_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeterString_c::isLeadByte(int param_0) {
    nofralloc
#include "asm/d/meter/d_meter_string/isLeadByte__14dMeterString_cFi.s"
}
#pragma pop

/* 80398210-80398210 024870 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
