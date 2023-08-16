//
// Generated By: dol2asm
// Translation Unit: d/msg/d_msg_string_base
//

#include "d/msg/d_msg_string_base.h"
#include "d/com/d_com_inf_game.h"
#include "d/meter/d_meter2_info.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__16dMsgStringBase_cFv();
extern "C" void __dt__16dMsgStringBase_cFv();
extern "C" void getResource__16dMsgStringBase_cFv();
extern "C" void
getStringLocal__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc();
extern "C" void
getStringPageLocal__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc();
extern "C" void getPageMax__16dMsgStringBase_cFi();
extern "C" void getMessageLocal__16dMsgStringBase_cFUlPc();
extern "C" void drawFontLocal__16dMsgStringBase_cFP10J2DTextBoxUcffffUlUc();
extern "C" void
getString__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc();
extern "C" void
getStringPage__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc();
extern "C" void getMessage__16dMsgStringBase_cFUlPc();
extern "C" void resetStringLocal__16dMsgStringBase_cFP10J2DTextBox();
extern "C" void drawOutFontLocal__16dMsgStringBase_cFP10J2DTextBoxf();
extern "C" extern char const* const d_msg_d_msg_string_base__stringBase0;

//
// External References:
//

extern "C" void __ct__26jmessage_string_tReferenceFv();
extern "C" void
init__26jmessage_string_tReferenceFP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc();
extern "C" void getLineLength__26jmessage_string_tReferenceFi();
extern "C" void __ct__24jmessage_string_tControlFv();
extern "C" void
__ct__34jmessage_string_tSequenceProcessorFPC26jmessage_string_tReferenceP24jmessage_string_tControl();
extern "C" void __ct__35jmessage_string_tRenderingProcessorFPC26jmessage_string_tReference();
extern "C" void reset__Q28JMessage8TControlFv();
extern "C" void update__Q28JMessage8TControlFv();
extern "C" void render__Q28JMessage8TControlFv();
extern "C" void setMessageID__Q28JMessage8TControlFUlUlPb();
extern "C" void __dt__Q38JMessage18TResourceContainer10TCResourceFv();
extern "C" void __ct__Q28JMessage18TResourceContainerFv();
extern "C" void __ct__Q28JMessage6TParseFPQ28JMessage18TResourceContainer();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__10JKRArchiveFUlPCcP10JKRArchive();
extern "C" void parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl();
extern "C" void erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iterator();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C1478-803C1498 01E598 0020+00 2/2 0/0 0/0 .data            __vt__16dMsgStringBase_c */
SECTION_DATA extern void* __vt__16dMsgStringBase_c[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getString__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc,
    (void*)
        getStringPage__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc,
    (void*)getMessage__16dMsgStringBase_cFUlPc,
    (void*)resetStringLocal__16dMsgStringBase_cFP10J2DTextBox,
    (void*)drawOutFontLocal__16dMsgStringBase_cFP10J2DTextBoxf,
    (void*)drawFontLocal__16dMsgStringBase_cFP10J2DTextBoxUcffffUlUc,
};

/* 802493B4-80249528 243CF4 0174+00 0/0 2/2 0/0 .text            __ct__16dMsgStringBase_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgStringBase_c::dMsgStringBase_c() {
    nofralloc
#include "asm/d/msg/d_msg_string_base/__ct__16dMsgStringBase_cFv.s"
}
#pragma pop

/* 80249528-80249700 243E68 01D8+00 0/0 1/1 0/0 .text            __dt__16dMsgStringBase_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgStringBase_c::~dMsgStringBase_c() {
    nofralloc
#include "asm/d/msg/d_msg_string_base/__dt__16dMsgStringBase_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80399C98-80399C98 0262F8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80399C98 = "zel_00.bmg";
#pragma pop

/* 80249700-80249768 244040 0068+00 1/1 2/2 0/0 .text            getResource__16dMsgStringBase_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getResource() {
    nofralloc
#include "asm/d/msg/d_msg_string_base/getResource__16dMsgStringBase_cFv.s"
}
#pragma pop

/* 80249768-802498D8 2440A8 0170+00 1/1 1/1 0/0 .text
 * getStringLocal__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getStringLocal(u32 param_0, J2DTextBox* param_1, J2DTextBox* param_2,
                                          JUTFont* param_3, COutFont_c* param_4, u8 param_5) {
    nofralloc
#include "asm/d/msg/d_msg_string_base/getStringLocal__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454D70-80454D78 003370 0004+04 2/2 0/0 0/0 .sdata2          @4046 */
SECTION_SDATA2 static f32 lit_4046[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 802498D8-80249A48 244218 0170+00 1/1 1/1 0/0 .text
 * getStringPageLocal__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getStringPageLocal(u32 param_0, u8 param_1, u8 param_2,
                                              J2DTextBox* param_3, J2DTextBox* param_4,
                                              JUTFont* param_5, COutFont_c* param_6, u8 param_7) {
    nofralloc
#include "asm/d/msg/d_msg_string_base/func_802498D8.s"
}
#pragma pop

/* 80249A48-80249A70 244388 0028+00 0/0 1/1 0/0 .text            getPageMax__16dMsgStringBase_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getPageMax(int param_0) {
    nofralloc
#include "asm/d/msg/d_msg_string_base/getPageMax__16dMsgStringBase_cFi.s"
}
#pragma pop

/* 80249A70-80249BAC 2443B0 013C+00 1/1 0/0 0/0 .text getMessageLocal__16dMsgStringBase_cFUlPc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getMessageLocal(u32 param_0, char* param_1) {
    nofralloc
#include "asm/d/msg/d_msg_string_base/getMessageLocal__16dMsgStringBase_cFUlPc.s"
}
#pragma pop

/* 80249BAC-80249BB0 2444EC 0004+00 1/0 0/0 0/0 .text
 * drawFontLocal__16dMsgStringBase_cFP10J2DTextBoxUcffffUlUc    */
void dMsgStringBase_c::drawFontLocal(J2DTextBox* param_0, u8 param_1, f32 param_2, f32 param_3,
                                     f32 param_4, f32 param_5, u32 param_6, u8 param_7) {
    /* empty function */
}

/* 80249BB0-80249BD0 2444F0 0020+00 1/0 0/0 0/0 .text
 * getString__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getString(u32 param_0, J2DTextBox* param_1, J2DTextBox* param_2,
                                     JUTFont* param_3, COutFont_c* param_4, u8 param_5) {
    nofralloc
#include "asm/d/msg/d_msg_string_base/getString__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc.s"
}
#pragma pop

/* 80249BD0-80249BF8 244510 0028+00 1/0 0/0 0/0 .text
 * getStringPage__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getStringPage(u32 param_0, u8 param_1, u8 param_2, J2DTextBox* param_3,
                                         J2DTextBox* param_4, JUTFont* param_5, COutFont_c* param_6,
                                         u8 param_7) {
    nofralloc
#include "asm/d/msg/d_msg_string_base/getStringPage__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc.s"
}
#pragma pop

/* 80249BF8-80249C18 244538 0020+00 1/0 1/0 0/0 .text            getMessage__16dMsgStringBase_cFUlPc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgStringBase_c::getMessage(u32 param_0, char* param_1) {
    nofralloc
#include "asm/d/msg/d_msg_string_base/getMessage__16dMsgStringBase_cFUlPc.s"
}
#pragma pop

/* 80249C18-80249C1C 244558 0004+00 1/0 0/0 0/0 .text
 * resetStringLocal__16dMsgStringBase_cFP10J2DTextBox           */
void dMsgStringBase_c::resetStringLocal(J2DTextBox* param_0) {
    /* empty function */
}

/* 80249C1C-80249C20 24455C 0004+00 1/0 0/0 0/0 .text
 * drawOutFontLocal__16dMsgStringBase_cFP10J2DTextBoxf          */
void dMsgStringBase_c::drawOutFontLocal(J2DTextBox* param_0, f32 param_1) {
    /* empty function */
}

/* ############################################################################################## */
/* 80399CA3-80399CB0 026303 0008+05 0/0 0/0 0/0 .rodata          None */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80399CA3 = ""
                                                            "\x1B"
                                                            "CR[%d]";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80399CAB = "\0\0\0\0";
#pragma pop

/* 80399C98-80399C98 0262F8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
