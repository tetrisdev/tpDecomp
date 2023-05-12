//
// Generated By: dol2asm
// Translation Unit: JUTCacheFont
//

#include "JSystem/JUtility/JUTCacheFont.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JUtility/JUTException.h"
#include "dol2asm.h"
#include "dolphin/gx/GX.h"

//
// Forward References:
//

extern "C" void __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap();
extern "C" void __dt__12JUTCacheFontFv();
extern "C" void deleteMemBlocks_CacheFont__12JUTCacheFontFv();
extern "C" void initialize_state__12JUTCacheFontFv();
extern "C" void getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl();
extern "C" void initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap();
extern "C" void internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap();
extern "C" void allocArea__12JUTCacheFontFPvUlP7JKRHeap();
extern "C" void allocArray__12JUTCacheFontFP7JKRHeap();
extern "C" void setBlock__12JUTCacheFontFv();
extern "C" void determineBlankPage__12JUTCacheFontFv();
extern "C" void
getGlyphFromAram__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfoPQ212JUTCacheFont10TCachePagePiPi();
extern "C" void loadImage__12JUTCacheFontFi11_GXTexMapID();
extern "C" void loadCache_char_subroutine__12JUTCacheFontFPib();
extern "C" void invalidiateAllCache__12JUTCacheFontFv();
extern "C" void unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo();
extern "C" void prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo();
extern "C" void getResFont__10JUTResFontCFv();
extern "C" void getFontType__10JUTResFontCFv();
extern "C" void getLeading__10JUTResFontCFv();
extern "C" void getWidth__10JUTResFontCFv();
extern "C" void getAscent__10JUTResFontCFv();
extern "C" void getDescent__10JUTResFontCFv();
extern "C" void getHeight__10JUTResFontCFv();
extern "C" extern char const* const JUTCacheFont__stringBase0;

//
// External References:
//

extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dla__FPv();
extern "C" void mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void initialize_state__7JUTFontFv();
extern "C" void __ct__10JUTResFontFv();
extern "C" void __dt__10JUTResFontFv();
extern "C" void deleteMemBlocks_ResFont__10JUTResFontFv();
extern "C" void initialize_state__10JUTResFontFv();
extern "C" void setGX__10JUTResFontFv();
extern "C" void setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void drawChar_scale__10JUTResFontFffffib();
extern "C" void getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth();
extern "C" void getCellWidth__10JUTResFontCFv();
extern "C" void getCellHeight__10JUTResFontCFv();
extern "C" void isLeadByte__10JUTResFontCFi();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void JUTReportConsole(const char*);
extern "C" void __save_gpr();
extern "C" void _savegpr_14();
extern "C" void _savegpr_21();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_21();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _restgpr_14();
extern "C" void* const saoAboutEncoding___10JUTResFont[3];
extern "C" u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* 802DD188-802DD208 2D7AC8 0080+00 0/0 1/1 0/0 .text __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap
 */
JUTCacheFont::JUTCacheFont(ResFONT const* p_fontRes, u32 cacheSize, JKRHeap* p_heap) {
    initialize_state();
    JUTResFont::initialize_state();
    JUTFont::initialize_state();
    initiate(p_fontRes, NULL, cacheSize, p_heap);
}

/* 802DD208-802DD29C 2D7B48 0094+00 1/0 0/0 0/0 .text            __dt__12JUTCacheFontFv */
JUTCacheFont::~JUTCacheFont() {
    if (isValid()) {
        deleteMemBlocks_CacheFont();
        initialize_state();

        deleteMemBlocks_ResFont();
        JUTResFont::initialize_state();

        JUTFont::initialize_state();
    }
}

/* 802DD29C-802DD320 2D7BDC 0084+00 3/3 0/0 0/0 .text deleteMemBlocks_CacheFont__12JUTCacheFontFv
 */
void JUTCacheFont::deleteMemBlocks_CacheFont() {
    if (field_0xb0 != 0) {
        delete[] mCacheBuffer;
    }

    delete field_0xac;
    delete mInf1Ptr;
    delete mMemBlocks;
    delete field_0x7c;
    delete field_0x80;
    delete field_0x84;
}

/* 802DD320-802DD35C 2D7C60 003C+00 3/3 0/0 0/0 .text            initialize_state__12JUTCacheFontFv
 */
void JUTCacheFont::initialize_state() {
    field_0xb0 = 0;
    mCacheBuffer = NULL;

    field_0xac = NULL;
    mInf1Ptr = NULL;
    field_0x7c = NULL;
    field_0x80 = NULL;
    field_0x84 = NULL;
    mMemBlocks = NULL;

    mPagingType = PAGE_TYPE_0;
    mMaxSheetSize = 0;

    mCacheBuffer = NULL;
    field_0x9c = NULL;
    field_0xa0 = NULL;
}

/* ############################################################################################## */
/* 8039D2F0-8039D2F0 029950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D2F0 = "JUTCacheFont: Unknown data block\n";
#pragma pop

/* 802DD35C-802DD4EC 2D7C9C 0190+00 1/1 0/0 0/0 .text
 * getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl */
#ifdef NONMATCHING
struct BlockHeader {
    u32 magic;
    u32 size;
};

int JUTCacheFont::getMemorySize(ResFONT const* p_font, u16* o_widCount, u32* o_widSize,
                                u16* o_glyCount, u32* o_glySize, u16* o_mapCount, u32* o_mapSize,
                                u32* o_glyTexSize) {
    if (p_font == NULL) {
        return 0;
    }

    u16 widBlockCount = 0;
    u16 glyBlockCount = 0;
    u16 mapBlockCount = 0;
    u32 totalWidSize = 0;
    u32 totalGlySize = 0;
    u32 totalMapSize = 0;
    u32 maxGlyTexSize = 0;
    u32 glyTexSize;

    u8* fontInf = (u8*)&p_font + 0x20;
    for (int i = 0; i < p_font->numBlocks; i++) {
        switch (((BlockHeader*)fontInf)->magic) {
        case 'INF1':
            break;
        case 'WID1':
            totalWidSize += ((BlockHeader*)fontInf)->size;
            widBlockCount++;
            break;
        case 'GLY1':
            totalGlySize += ((BlockHeader*)fontInf)->size;
            glyTexSize = ((ResFONT::GLY1*)fontInf)->textureSize;
            glyBlockCount++;
            if (glyTexSize > maxGlyTexSize) {
                maxGlyTexSize = glyTexSize;
            }
            break;
        case 'MAP1':
            totalMapSize += ((BlockHeader*)fontInf)->size;
            mapBlockCount++;
            break;
        default:
            JUTReportConsole("JUTCacheFont: Unknown data block\n");
            break;
        }

        fontInf += ((BlockHeader*)fontInf)->size;
    }

    if (o_widCount != NULL) {
        *o_widCount = widBlockCount;
    }

    if (o_glyCount != NULL) {
        *o_glyCount = glyBlockCount;
    }

    if (o_mapCount != NULL) {
        *o_mapCount = mapBlockCount;
    }

    if (o_widSize != NULL) {
        *o_widSize = totalWidSize;
    }

    if (o_glySize != NULL) {
        *o_glySize = totalGlySize;
    }

    if (o_mapSize != NULL) {
        *o_mapSize = totalMapSize;
    }

    if (o_glyTexSize != NULL) {
        *o_glyTexSize = maxGlyTexSize;
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int JUTCacheFont::getMemorySize(ResFONT const* param_0, u16* param_1, u32* param_2,
                                    u16* param_3, u32* param_4, u16* param_5, u32* param_6,
                                    u32* param_7) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl.s"
}
#pragma pop
#endif

/* 802DD4EC-802DD54C 2D7E2C 0060+00 1/1 0/0 0/0 .text
 * initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap             */
int JUTCacheFont::initiate(ResFONT const* p_fontRes, void* param_1, u32 param_2, JKRHeap* p_heap) {
    if (!internal_initiate(p_fontRes, param_1, param_2, p_heap)) {
        deleteMemBlocks_CacheFont();
        deleteMemBlocks_ResFont();
        JUTFont::initialize_state();
        mValid = false;
        return 0;
    }

    return 1;
}

/* 802DD54C-802DD650 2D7E8C 0104+00 1/1 0/0 0/0 .text
 * internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap    */
bool JUTCacheFont::internal_initiate(ResFONT const* p_fontRes, void* param_1, u32 param_2,
                                     JKRHeap* param_3) {
    deleteMemBlocks_CacheFont();
    initialize_state();
    deleteMemBlocks_ResFont();
    JUTResFont::initialize_state();
    JUTFont::initialize_state();

    if (p_fontRes == NULL) {
        return false;
    }

    mResFont = p_fontRes;
    mValid = true;
    getMemorySize(p_fontRes, &mWid1BlockNum, &mTotalWidSize, &mGly1BlockNum, &mTotalGlySize,
                  &mMap1BlockNum, &mTotalMapSize, &mMaxSheetSize);

    if (!allocArea(param_1, param_2, param_3)) {
        return false;
    } else if (!allocArray(param_3)) {
        return false;
    }

    setBlock();
    return true;
}

/* 802DD650-802DD804 2D7F90 01B4+00 1/1 0/0 0/0 .text allocArea__12JUTCacheFontFPvUlP7JKRHeap */
bool JUTCacheFont::allocArea(void* param_0, u32 param_1, JKRHeap* heap) {
    mInf1Ptr = (ResFONT::INF1*)new (heap, 0) ResFONT();
    if (mInf1Ptr == NULL) {
        return false;
    }

    if (mTotalWidSize != 0) {
        field_0x7c = new (heap, 0) u8[mTotalWidSize];
        if (field_0x7c == NULL) {
            return false;
        }
    }

    if (mGly1BlockNum != 0) {
        field_0x80 = new (heap, 0) ResFONT::GLY1[mGly1BlockNum];
        if (field_0x80 == NULL) {
            return false;
        }

        field_0xac = JKRAram::getManager()->mAramHeap->alloc(
            mTotalGlySize - (mGly1BlockNum * sizeof(ResFONT::GLY1)), JKRAramHeap::HEAD);
        if (field_0xac == NULL) {
            return false;
        }
    }

    if (mTotalMapSize != 0) {
        field_0x84 = new (heap, 0) u8[mTotalMapSize];
        if (field_0x84 == NULL) {
            return false;
        }
    }

    field_0x94 = mMaxSheetSize + 0x40;
    mCachePage = param_1 / field_0x94;
    u32 v1 = field_0x94 * mCachePage;
    if (mCachePage == 0) {
        return false;
    }

    if (param_0 != NULL) {
        mCacheBuffer = param_0;
        field_0xb0 = 0;
    } else {
        mCacheBuffer = new (heap, 0x20) u8[v1];
        if (mCacheBuffer == NULL) {
            return false;
        }
        field_0xb0 = 1;
    }

    invalidiateAllCache();
    return true;
}

/* 802DD804-802DD8EC 2D8144 00E8+00 1/1 0/0 0/0 .text allocArray__12JUTCacheFontFP7JKRHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JUTCacheFont::allocArray(JKRHeap* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/allocArray__12JUTCacheFontFP7JKRHeap.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D2F0-8039D2F0 029950 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D312 = "JUTCacheFont.cpp";
SECTION_DEAD static char const* const stringBase_8039D323 = "%s";
SECTION_DEAD static char const* const stringBase_8039D326 = "trouble occurred in JKRMainRamToAram.";
SECTION_DEAD static char const* const stringBase_8039D34C = "Unknown data block\n";
#pragma pop

/* 802DD8EC-802DDB0C 2D822C 0220+00 1/0 0/0 0/0 .text            setBlock__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::setBlock() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/setBlock__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DDB0C-802DDBBC 2D844C 00B0+00 1/1 0/0 0/0 .text determineBlankPage__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::determineBlankPage() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/determineBlankPage__12JUTCacheFontFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455FD0-80455FD8 0045D0 0004+04 1/1 0/0 0/0 .sdata2          @721 */
SECTION_SDATA2 static f32 lit_721[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 802DDBBC-802DDCE4 2D84FC 0128+00 1/1 0/0 0/0 .text
 * getGlyphFromAram__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfoPQ212JUTCacheFont10TCachePagePiPi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo* param_0,
                                        JUTCacheFont::TCachePage* param_1, int* param_2,
                                        int* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/func_802DDBBC.s"
}
#pragma pop

/* 802DDCE4-802DDD98 2D8624 00B4+00 1/0 0/0 0/0 .text loadImage__12JUTCacheFontFi11_GXTexMapID */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::loadImage(int param_0, _GXTexMapID param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/loadImage__12JUTCacheFontFi11_GXTexMapID.s"
}
#pragma pop

/* 802DDD98-802DDEE0 2D86D8 0148+00 1/1 0/0 0/0 .text
 * loadCache_char_subroutine__12JUTCacheFontFPib                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::loadCache_char_subroutine(int* param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/loadCache_char_subroutine__12JUTCacheFontFPib.s"
}
#pragma pop

/* 802DDEE0-802DDF68 2D8820 0088+00 1/1 0/0 0/0 .text invalidiateAllCache__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::invalidiateAllCache() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/invalidiateAllCache__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DDF68-802DDFAC 2D88A8 0044+00 2/2 0/0 0/0 .text
 * unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo    */
void JUTCacheFont::unlink(JUTCacheFont::TGlyphCacheInfo* cacheInfo) {
    if (cacheInfo->mPrev == NULL) {
        field_0x9c = cacheInfo->mNext;
    } else {
        cacheInfo->mPrev->mNext = cacheInfo->mNext;
    }

    if (cacheInfo->mNext == NULL) {
        field_0xa0 = cacheInfo->mPrev;
    } else {
        cacheInfo->mNext->mPrev = cacheInfo->mPrev;
    }
}

/* 802DDFAC-802DDFD8 2D88EC 002C+00 2/2 0/0 0/0 .text
 * prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo   */
void JUTCacheFont::prepend(JUTCacheFont::TGlyphCacheInfo* cacheInfo) {
    TGlyphCacheInfo* oldHead = field_0x9c;
    field_0x9c = cacheInfo;
    cacheInfo->mPrev = NULL;
    cacheInfo->mNext = oldHead;

    if (oldHead == NULL) {
        field_0xa0 = cacheInfo;
    } else {
        oldHead->mPrev = cacheInfo;
    }
}

/* 802DDFD8-802DDFE0 2D8918 0008+00 1/0 1/0 0/0 .text            getResFont__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm ResFONT* JUTResFont::getResFont() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getResFont__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFE0-802DDFEC 2D8920 000C+00 1/0 1/0 0/0 .text            getFontType__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u16 JUTResFont::getFontType() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getFontType__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFEC-802DDFF8 2D892C 000C+00 1/0 1/0 0/0 .text            getLeading__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int JUTResFont::getLeading() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getLeading__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFF8-802DE004 2D8938 000C+00 1/0 1/0 0/0 .text            getWidth__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 JUTResFont::getWidth() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getWidth__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE004-802DE010 2D8944 000C+00 1/0 1/0 0/0 .text            getAscent__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u16 JUTResFont::getAscent() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getAscent__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE010-802DE01C 2D8950 000C+00 1/0 1/0 0/0 .text            getDescent__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u16 JUTResFont::getDescent() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getDescent__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE01C-802DE078 2D895C 005C+00 1/0 1/0 0/0 .text            getHeight__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 JUTResFont::getHeight() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getHeight__10JUTResFontCFv.s"
}
#pragma pop
