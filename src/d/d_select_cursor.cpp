//
// Generated By: dol2asm
// Translation Unit: d/d_select_cursor
//

#include "d/d_select_cursor.h"
#include "d/com/d_com_inf_game.h"
#include "JSystem/J2DGraph/J2DAnimation.h"
#include "dol2asm.h"
#include "dolphin/os/OS.h"
#include "global.h"

//
// Types:
//

//
// Forward References:
//

extern "C" void __ct__19dSelect_cursorHIO_cFv();
extern "C" void __ct__16dSelect_cursor_cFUcfP10JKRArchive();
extern "C" void __dt__16dSelect_cursor_cFv();
extern "C" void draw__16dSelect_cursor_cFv();
extern "C" void update__16dSelect_cursor_cFv();
extern "C" void setPos__16dSelect_cursor_cFffP7J2DPaneb();
extern "C" void setParam__16dSelect_cursor_cFfffff();
extern "C" void setScale__16dSelect_cursor_cFf();
extern "C" void setAlphaRate__16dSelect_cursor_cFf();
extern "C" void addAlpha__16dSelect_cursor_cFv();
extern "C" void decAlpha__16dSelect_cursor_cFv();
extern "C" void setBpkAnimation__16dSelect_cursor_cFP11J2DAnmColor();
extern "C" void setBtk0Animation__16dSelect_cursor_cFP19J2DAnmTextureSRTKey();
extern "C" void setCursorAnimation__16dSelect_cursor_cFv();
extern "C" void setBckAnimation__16dSelect_cursor_cFP18J2DAnmTransformKey();
extern "C" void moveCenter__16dSelect_cursor_cFP7J2DPaneff();
extern "C" void __dt__19dSelect_cursorHIO_cFv();
extern "C" void __dt__18J2DAnmTransformKeyFv();
extern "C" extern char const* const d_d_select_cursor__stringBase0;

//
// External References:
//

extern "C" void animation__14dSelect_icon_cFv();
extern "C" void setAlpha__14dSelect_icon_cFUc();
extern "C" void setPos__14dSelect_icon_cFP7J2DPaneff();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void isVisible__13CPaneMgrAlphaFv();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void getAlphaRate__13CPaneMgrAlphaFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void animation__9J2DScreenFv();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern void* __vt__10J2DAnmBase[4];
extern "C" extern void* __vt__15J2DAnmTransform[5 + 4 /* padding */];
extern "C" extern void* __vt__18J2DAnmTransformKey[6];

//
// Declarations:
//

/* ############################################################################################## */
/* 80394AA0-80394AA0 021100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */


/* 803BB700-803BB70C 018820 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BB70C-803BB71C -00001 0010+00 0/1 0/0 0/0 .data            blo_name$3684 */
#pragma push
#pragma force_active on
SECTION_DATA static char* blo_name[4] = {
    "zelda_select_cursor_4parts.blo",
    "zelda_store_select_icon.blo",
    "zelda_map_screen_portal_icon.blo",
    "zelda_map_screen_batsumark.blo",
};
#pragma pop

/* 803BB71C-803BB72C -00001 0010+00 0/1 0/0 0/0 .data            bck_name$3685 */
#pragma push
#pragma force_active on
SECTION_DATA static char* bck_name[4] = {
    "",
    "zelda_store_select_icon.bck",
    "",
    "",
};
#pragma pop

/* 803BB72C-803BB73C -00001 0010+00 0/1 0/0 0/0 .data            bpk_name$3686 */
#pragma push
#pragma force_active on
SECTION_DATA static char* bpk_name[4] = {
    "zelda_select_cursor_4parts.bpk",
    "zelda_store_select_icon.bpk",
    "zelda_map_screen_portal_icon.bpk",
    "zelda_map_screen_batsumark.bpk",
};
#pragma pop

/* 803BB73C-803BB74C -00001 0010+00 0/1 0/0 0/0 .data            btk_name$3687 */
#pragma push
#pragma force_active on
SECTION_DATA static char* btk_name[4] = {
    "zelda_select_cursor_4parts.btk",
    "zelda_store_select_icon.btk",
    "",
    "",
};
#pragma pop

/* 803BB74C-803BB78C -00001 0010+30 0/1 0/0 0/0 .data            btk2_name$3688 */
#pragma push
#pragma force_active on
SECTION_DATA static char* btk2_name[4 + 12 /* padding */] = {
    "",
    "zelda_store_select_icon_02.btk",
    "",
    "",
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};
#pragma pop

#pragma push
#pragma force_active on
SECTION_DEAD static char const* const pad_80394C0D = "\0\0";
#pragma pop

/* 803BB78C-803BB7A8 0188AC 0010+0C 2/2 0/0 0/0 .data            __vt__16dSelect_cursor_c */
SECTION_DATA extern void* __vt__16dSelect_cursor_c[4 + 3 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__16dSelect_cursor_cFv,
    (void*)__dt__16dSelect_cursor_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 803BB7A8-803BB7B8 0188C8 000C+04 2/2 0/0 0/0 .data            __vt__19dSelect_cursorHIO_c */
SECTION_DATA extern void* __vt__19dSelect_cursorHIO_c[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19dSelect_cursorHIO_cFv,
    /* padding */
    NULL,
};

/* 80453A48-80453A4C 002048 0004+00 4/4 0/0 0/0 .sdata2          @3673 */
SECTION_SDATA2 static f32 lit_3673 = 1.0f;

/* 80453A4C-80453A50 00204C 0004+00 1/1 0/0 0/0 .sdata2          @3674 */
SECTION_SDATA2 static f32 lit_3674 = 3.0f / 10.0f;

/* 801941E4-80194220 18EB24 003C+00 1/1 0/0 0/0 .text            __ct__19dSelect_cursorHIO_cFv */
// matches with literals
#ifdef NONMATCHING
dSelect_cursorHIO_c::dSelect_cursorHIO_c() {
    field_0x8 = 1.0f;
    mXAxisExpansion = 1.0f;
    mYAxisExpansion = 1.0f;
    mOscillation = 3.0f / 10.0f;
    field_0x18 = 1.0f;
    mRatioX = 1.0f;
    mRatioY = 1.0f;
    mDebugON = false;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSelect_cursorHIO_c::dSelect_cursorHIO_c() {
    nofralloc
#include "asm/d/d_select_cursor/__ct__19dSelect_cursorHIO_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80394A10-80394A30 021070 0020+00 1/1 0/0 0/0 .rodata          corner_tag$3707 */
SECTION_RODATA static u64 const corner_tag[4] = {
    'l_u_null', 'l_d_null', 'r_u_null', 'r_d_null',
};
COMPILER_STRIP_GATE(0x80394A10, &corner_tag);

/* 80453A50-80453A54 002050 0004+00 4/4 0/0 0/0 .sdata2          @3808 */
SECTION_SDATA2 static u8 lit_3808[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80194220-801949EC 18EB60 07CC+00 0/0 14/14 0/0 .text __ct__16dSelect_cursor_cFUcfP10JKRArchive
 */
// Matches with literals
#ifdef NONMATCHING
dSelect_cursor_c::dSelect_cursor_c(u8 param_0, f32 param_1, JKRArchive* param_2) {
    mpCursorHIO = new dSelect_cursorHIO_c();
    mpCursorHIO->field_0x4 = -1;
    mNameIdx = 0;
    field_0xb6 = param_0;
    field_0xb4 = 0xff;
    mUpdateFlag = true;
    mpPane = NULL;
    for (int i = 0; i < 4; i++) {
        field_0x94[i] = 0.0f;
        field_0xa4[i] = 0.0f;
        field_0x74[i] = 0.0f;
        field_0x84[i] = 0.0f;
    }
    mParam1 = mpCursorHIO->mXAxisExpansion;
    mParam2 = mpCursorHIO->mYAxisExpansion;
    mParam3 = mpCursorHIO->mOscillation;
    mParam4 = mpCursorHIO->mRatioX;
    mParam5 = mpCursorHIO->mRatioY;

    switch(field_0xb6) {
        case 1:
        case 2:
        case 3:
        case 4:
            mNameIdx = 0;
            break;
        case 5:
            mNameIdx = 2;
            break;
        case 6:
            mNameIdx = 3;
            break;
    }

    if (param_2 == NULL) {
        param_2 = dComIfGp_getMain2DArchive();
    }

    mpScreen = new J2DScreen();
    mpScreen->setPriority((char*) blo_name[mNameIdx], 0x20000, param_2);
    dPaneClass_showNullPane(mpScreen);

    for (int i = 0; i < 4; i++) {
        field_0x1C[i] = NULL;
    }

    switch(mNameIdx) {
        case 0:
            mpPaneMgr = new CPaneMgr(mpScreen, 'n_all', 2, NULL);
            mpPaneMgr->hide();
            mpPaneMgr->setAlpha(0);

            for (int i = 0; i< 4; i++) {
                field_0x1C[i] = new CPaneMgr(mpScreen, ((u64*)corner_tag)[i], 0, NULL);
                field_0x94[i] = mpScreen->search( ((u64*)corner_tag)[i])->getTranslateX();
                field_0xa4[i] = mpScreen->search( ((u64*)corner_tag)[i])->getTranslateY();
                field_0x74[i] = field_0x94[i];
                field_0x84[i] = field_0xa4[i];
            }

            mpPaneMgr->scale(param_1, param_1);
            field_0x14 = NULL;
            field_0x18 = NULL;
            break;
        case 1:
            mpPaneMgr = new CPaneMgr(mpScreen, 'n_all', 2, NULL);
            mpPaneMgr->hide();
            mpPaneMgr->setAlpha(0);
            mpPaneMgr->scale(param_1, param_1);
            field_0x14 = new CPaneMgr(mpScreen, 'sel_po00', 0, NULL);
            field_0x14->hide();
            field_0x18 = new CPaneMgr(mpScreen, 'n_all2', 2, NULL);
            break;
        case 2:
            mpPaneMgr = new CPaneMgr(mpScreen, 'Null', 2, NULL);
            mpPaneMgr->hide();
            mpPaneMgr->setAlpha(0);
            mpPaneMgr->scale(param_1, param_1);
            field_0x14 = NULL;
            field_0x18 = NULL;
            break;
        case 3:
            mpPaneMgr = new CPaneMgr(mpScreen, 'batsu', 2, NULL);
            mpPaneMgr->hide();
            mpPaneMgr->setAlpha(0);
            mpPaneMgr->scale(param_1, param_1);
            field_0x14 = NULL;
            field_0x18 = NULL;
            break;
    }

    mpSelectIcon = NULL;
    i_OSInitFastCast();
    if (strcmp(bpk_name[mNameIdx], "") != 0) {
        field_0x30 = (J2DAnmColor*)J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource(bpk_name[mNameIdx], param_2));
        field_0x30->searchUpdateMaterialID(mpScreen);
    } else {
        field_0x30 = NULL;
    }

    field_0x44 = 0.0f;
    if (strcmp(btk_name[mNameIdx], "") != 0) {
        field_0x34[0] = (J2DAnmTextureSRTKey*)J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource(btk_name[mNameIdx], param_2));
        field_0x34[0]->searchUpdateMaterialID(mpScreen);
    } else {
        field_0x34[0] = NULL;
    }

    field_0x48[0] = 0.0f;
    if (strcmp(btk2_name[mNameIdx], "") != 0) {
        field_0x34[1] = (J2DAnmTextureSRTKey*)J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource(btk2_name[mNameIdx], param_2));
        field_0x34[1]->searchUpdateMaterialID(mpScreen);
    } else {
        field_0x34[1] = NULL;
    }

    field_0x48[1] = 0.0f;
    if (strcmp(bck_name[mNameIdx], "") != 0) {
        field_0x2C = (J2DAnmTransformKey*)J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource(bck_name[mNameIdx], param_2));
    } else {
        field_0x2C = NULL;
    }

    field_0x40 = 0.0f;
    switch(mNameIdx) {
        case 1:
            field_0x50 = mpScreen->search('ssel_ico')->getTranslateX();
            field_0x54 = mpScreen->search('ssel_ico')->getTranslateY();
            break;
        case 0:
        case 2:
        case 3:
            field_0x50 = 0.0f;
            field_0x54 = 0.0f;
            break;
    }

    mPositionY = 0.0f;
    mPositionX = 0.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSelect_cursor_c::dSelect_cursor_c(u8 param_0, f32 param_1, JKRArchive* param_2) {
    nofralloc
#include "asm/d/d_select_cursor/__ct__16dSelect_cursor_cFUcfP10JKRArchive.s"
}
#pragma pop
#endif

/* 801949EC-80194C30 18F32C 0244+00 1/0 0/0 0/0 .text            __dt__16dSelect_cursor_cFv */
dSelect_cursor_c::~dSelect_cursor_c() {
    delete mpScreen;
    mpScreen = NULL;
    if (mpPaneMgr) {
        delete mpPaneMgr;
        mpPaneMgr = NULL;
    }
    for (int i = 0; i < 4; i++) {
        if (field_0x1C[i]) {
            delete field_0x1C[i];
            field_0x1C[i] = NULL;
        }
    }
    if (field_0x14) {
        delete field_0x14;
        field_0x14 = NULL;
    }
    if (field_0x18) {
        delete field_0x18;
        field_0x18 = NULL;
    }
    if (mpSelectIcon) {
        delete mpSelectIcon;
        mpSelectIcon = NULL;
    }
    if (field_0x30) {
        delete field_0x30;
        field_0x30 = NULL;
    }
    for (int i = 0; i < 2; i++) {
        if (field_0x34[i]) {
            delete field_0x34[i];
            field_0x34[i] = NULL;
        }
    }
    if (field_0x2C) {
        delete field_0x2C;
        field_0x2C = NULL;
    }
    if (mpCursorHIO) {
        delete mpCursorHIO;
        mpCursorHIO = NULL;
    }
}

/* 80194C30-80194CC0 18F570 0090+00 1/0 0/0 0/0 .text            draw__16dSelect_cursor_cFv */
#ifdef NONMATCHING
void dSelect_cursor_c::draw() {
    mpPaneMgr->getAlphaRate();
    update();
    J2DGrafContext* gphCtx = dComIfGp_getCurrentGrafPort();
    gphCtx->setup2D();
    mpScreen->draw(0.0f, 0.0f, gphCtx);
    if (mpSelectIcon) {
        mpSelectIcon->drawSelf(); // inline here, but not sure how to properly define it
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dSelect_cursor_c::draw() {
extern "C" asm void draw__16dSelect_cursor_cFv() {
    nofralloc
#include "asm/d/d_select_cursor/draw__16dSelect_cursor_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80453A54-80453A58 002054 0004+00 3/3 0/0 0/0 .sdata2          @4062 */
SECTION_SDATA2 static f32 lit_4062 = 0.5f;

/* 80453A58-80453A60 002058 0008+00 3/3 0/0 0/0 .sdata2          @4064 */
SECTION_SDATA2 static f64 lit_4064 = 4503601774854144.0 /* cast s32 to float */;

/* 80194CC0-801950F4 18F600 0434+00 1/1 0/0 0/0 .text            update__16dSelect_cursor_cFv */
// matches with literals
#ifdef NONMATCHING
void dSelect_cursor_c::update() {
    f32 fVar1 = 1.0f;
    if (field_0xb6 == 3) {
        fVar1 = 0.5f;
    }
    mpPaneMgr->translate(mPositionX, mPositionY);
    if (mpCursorHIO->mDebugON) {
        mParam1 = mpCursorHIO->mXAxisExpansion;
        mParam2 = mpCursorHIO->mYAxisExpansion;
        mParam3 = mpCursorHIO->mOscillation;
        mParam4 = mpCursorHIO->mRatioX;
        mParam5 = mpCursorHIO->mRatioY;
    }

    if (mUpdateFlag) {
        if (field_0x30) {
            if (chkPlayAnime(0)) {
                if (mNameIdx == 1) {
                    field_0x44 += mpCursorHIO->field_0x8 * fVar1;
                } else {
                    field_0x44 += fVar1;
                }

                if (field_0x44 >= field_0x30->getFrameMax()) {
                    field_0x44 -= field_0x30->getFrameMax();
                }

                field_0x30->setFrame(field_0x44);
                setBpkAnimation(field_0x30);
            } else {
                if (field_0x44 != 1.0f) {
                    field_0x44 = 1.0f;
                    field_0x30->setFrame(field_0x44);
                    setBpkAnimation(field_0x30);
                }
            }
        }

        for (int i = 0; i < 2; i++) {
            if (field_0x34[i]) {
                if ((i == 0 && chkPlayAnime(2)) || (i == 1 && chkPlayAnime(3))) {
                    if (mNameIdx == 1) {
                        field_0x48[i] += mpCursorHIO->field_0x8 * fVar1;
                    } else {
                        field_0x48[i] += fVar1;
                    }
                    if (field_0x48[i] >= field_0x34[i]->getFrameMax()) {
                        field_0x48[i] -= field_0x34[i]->getFrameMax();
                    }

                    field_0x34[i]->setFrame(field_0x48[i]);
                }
                setBtk0Animation(field_0x34[i]);
            }
        }

        if (field_0x2C && chkPlayAnime(1)) {
            if (mNameIdx == 1) {
                    field_0x40 += mpCursorHIO->field_0x8 * fVar1;
                } else {
                    field_0x40 += fVar1;
                }
                if (field_0x40 >= field_0x2C->getFrameMax()) {
                    field_0x40 -= field_0x2C->getFrameMax();
                }
                
                field_0x2C->setFrame(field_0x40);
                setBckAnimation(field_0x2C);

        }

        if (chkPlayAnime(1) && mNameIdx == 0) {
            setCursorAnimation();
        }

        mpScreen->animation();
    }

    if (mpSelectIcon && field_0x14) {
        Vec res = field_0x14->getGlobalVtxCenter(field_0x14->mPane, false, 0);
        mpSelectIcon->setPos(field_0x14->getPanePtr(), res.x, res.y);
        mpSelectIcon->animation();
        mpSelectIcon->setAlpha(field_0x14->getPanePtr()->getAlpha());
    }

    for (int i = 0; i < 4; i++) {
        if (field_0x1C[i]) {
            field_0x1C[i]->scale(mParam4, mParam5);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::update() {
    nofralloc
#include "asm/d/d_select_cursor/update__16dSelect_cursor_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80453A60-80453A64 002060 0004+00 1/1 0/0 0/0 .sdata2          @4089 */
SECTION_SDATA2 static f32 lit_4089 = -1.0f;

/* 801950F4-801951B0 18FA34 00BC+00 0/0 30/30 0/0 .text setPos__16dSelect_cursor_cFffP7J2DPaneb */
// matches with literals
#ifdef NONMATCHING
void dSelect_cursor_c::setPos(f32 i_posX, f32 i_posY, J2DPane* i_pane, bool i_scaleBounds) {
    mpPane = i_pane;
    setPos(i_posX,i_posY);

    if (!i_pane) {
        return;
    }

    f32 val1 = 1.0f;
    f32 width = (i_pane->getWidth()) * val1 * 0.5f;
    f32 height = i_pane->getHeight() * 0.5f;

    if (i_scaleBounds) {
        width *= i_pane->getScaleX();
        height *= i_pane->getScaleY();
    }

    f32 tmp7 = -1.0f;

    for (int i = 0; i < 4; i++) {
        
        field_0x94[i] = width;
        field_0xa4[i] = height;

        if (i < 2) {
            field_0x94[i] *= tmp7;
        }

        if (i % 2 == 0) {
            field_0xa4[i] *= tmp7;
        }
    }

}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setPos(f32 param_0, f32 param_1, J2DPane* param_2, bool param_3) {
    nofralloc
#include "asm/d/d_select_cursor/setPos__16dSelect_cursor_cFffP7J2DPaneb.s"
}
#pragma pop
#endif

/* 801951B0-801951C8 18FAF0 0018+00 0/0 24/24 0/0 .text setParam__16dSelect_cursor_cFfffff */
void dSelect_cursor_c::setParam(f32 i_param1, f32 i_param2, f32 i_param3, f32 i_param4,
                                    f32 i_param5) {
    mParam1 = i_param1;
    mParam2 = i_param2;
    mParam3 = i_param3;
    mParam4 = i_param4;
    mParam5 = i_param5;
}

/* 801951C8-801952A0 18FB08 00D8+00 0/0 14/14 0/0 .text            setScale__16dSelect_cursor_cFf */
// matches with literals
#ifdef NONMATCHING
void dSelect_cursor_c::setScale(f32 i_scale) {
    J2DPane* pane = mpPaneMgr->getPanePtr();
    pane->scale(i_scale,i_scale);

    switch (mNameIdx) {
    case 1:
        field_0x50 = mpScreen->search('ssel_ico')->getTranslateX();
        field_0x54 = mpScreen->search('ssel_ico')->getTranslateY();
        break;
    case 0:
    case 2:
    case 3:
        field_0x50 = 0.0f;
        field_0x54 = 0.0f;
        break;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setScale(f32 param_0) {
    nofralloc
#include "asm/d/d_select_cursor/setScale__16dSelect_cursor_cFf.s"
}
#pragma pop
#endif

/* 801952A0-80195330 18FBE0 0090+00 0/0 77/77 0/0 .text setAlphaRate__16dSelect_cursor_cFf */
void dSelect_cursor_c::setAlphaRate(f32 i_alphaRate) {
    if (i_alphaRate > FLOAT_LABEL(lit_3808)) {
        if (mpPaneMgr->isVisible() == 0) {
            mpPaneMgr->show();
        }
    } else {
        i_alphaRate = FLOAT_LABEL(lit_3808);
        if (mpPaneMgr->isVisible() == 1) {
            mpPaneMgr->hide();
        }
    }

    mpPaneMgr->setAlphaRate(i_alphaRate);
}

/* ############################################################################################## */
/* 80453A64-80453A68 002064 0004+00 2/2 0/0 0/0 .sdata2          @4157 */
SECTION_SDATA2 static f32 lit_4157 = 5.0f;

/* 80195330-801953CC 18FC70 009C+00 0/0 1/1 0/0 .text            addAlpha__16dSelect_cursor_cFv */
// matches with literals
#ifdef NONMATCHING
int dSelect_cursor_c::addAlpha() {
    s16 alpha_timer = mpPaneMgr->getAlphaTimer();

    if (mpPaneMgr->isVisible() == 0) {
        mpPaneMgr->show();
    }

    if (alpha_timer >= 5) {
        return 1;
    } else {
        alpha_timer++;
        mpPaneMgr->alphaAnimeStart(alpha_timer);
        mpPaneMgr->setAlphaRate(alpha_timer/5.0f);
    }

    return 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dSelect_cursor_c::addAlpha() {
    nofralloc
#include "asm/d/d_select_cursor/addAlpha__16dSelect_cursor_cFv.s"
}
#pragma pop
#endif

/* 801953CC-80195460 18FD0C 0094+00 0/0 1/1 0/0 .text            decAlpha__16dSelect_cursor_cFv */
// matches with literals
#ifdef NONMATCHING
int dSelect_cursor_c::decAlpha() {
    s16 alpha_timer = mpPaneMgr->getAlphaTimer();

    if (alpha_timer <= 0) {
        if (mpPaneMgr->isVisible() == 1) {
            mpPaneMgr->hide();
        }
        return 1;
    } else {
        alpha_timer--;
        mpPaneMgr->alphaAnimeStart(alpha_timer);
        mpPaneMgr->setAlphaRate(alpha_timer/5.0f);
    }

    return 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dSelect_cursor_c::decAlpha() {
    nofralloc
#include "asm/d/d_select_cursor/decAlpha__16dSelect_cursor_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80394A30-80394A50 021090 0020+00 1/1 0/0 0/0 .rodata          tag$4181 */
static u64 const tag_4181[4] = {
    'l_ld', 'l_lu', 'l_rd', 'l_ru',
};

/* 80195460-801955F0 18FDA0 0190+00 1/1 0/0 0/0 .text
 * setBpkAnimation__16dSelect_cursor_cFP11J2DAnmColor           */
void dSelect_cursor_c::setBpkAnimation(J2DAnmColor* param_0) {
    switch (mNameIdx) {
    case 0:
        for (int i = 0; i < 4; i++) {
            mpScreen->search(tag_4181[i])->setAnimation(param_0);
        }
        break;
    case 2:
        mpScreen->search('light')->setAnimation(param_0);
        mpScreen->search('back_l')->setAnimation(param_0);
        break;
    case 3:
        mpScreen->search('batsu')->setAnimation(param_0);
        break;
    default:
        mpScreen->search('light00')->setAnimation(param_0);
        break;
    }
}

/* ############################################################################################## */
/* 80394A50-80394A90 0210B0 0040+00 1/1 0/0 0/0 .rodata          tag$4197 */
static u64 const tag_4197[8] = {
    'i_c_ld1', 'i_c_ld2', 'i_c_lu1', 'i_c_lu2', 'i_c_rd1', 'i_c_rd2', 'i_c_ru1', 'i_c_ru2', 
};

/* 80394A90-80394AA0 0210F0 0010+00 1/1 0/0 0/0 .rodata          tag$4204 */
static u64 const tag_4204[2] = {
    'gold01', 'gold02',
};

/* 801955F0-80195724 18FF30 0134+00 1/1 0/0 0/0 .text
 * setBtk0Animation__16dSelect_cursor_cFP19J2DAnmTextureSRTKey  */
void dSelect_cursor_c::setBtk0Animation(J2DAnmTextureSRTKey* param_0) {
    switch (mNameIdx) {
    case 0:
        for (int i = 0; i < 8; i++) {
            mpScreen->search(tag_4197[i])->setAnimation(param_0);
        }
        break;
    case 1:
        for (int i = 0; i < 2; i++) {
            mpScreen->search(tag_4204[i])->setAnimation(param_0);
        }
        break;
    default:
        mpScreen->search('gold01')->setAnimation(param_0);
        break;
    }
}

/* ############################################################################################## */
/* 80453A68-80453A6C 002068 0004+00 1/1 0/0 0/0 .sdata2          @4237 */
SECTION_SDATA2 static f32 lit_4237 = 20.0f;

/* 80453A6C-80453A70 00206C 0004+00 1/1 0/0 0/0 .sdata2          @4238 */
SECTION_SDATA2 static f32 lit_4238 = 10.0f;

/* 80195724-801958E0 190064 01BC+00 1/1 0/0 0/0 .text setCursorAnimation__16dSelect_cursor_cFv */
// Matches without literals
#ifdef NONMATCHING
void dSelect_cursor_c::setCursorAnimation() {
    f32 fVar1 = 1.0f;
    if (field_0xb6 == 3) {
        fVar1 = 0.5f;
    }

    field_0x40 += fVar1;
    if (field_0x40 >= 20.0f) {
        field_0x40 -= 20.0f;
    }
    f32 fVar2;
    f32 param3 = mParam3;
    fVar2 = field_0x40;
    if (fVar2 < 10.0f) {
        fVar2 /= 10.0f;
    } else {
        fVar2 = (20.0f - fVar2) / 10.0f;
    }

    for (int i = 0; i < 4; i++) {
        field_0x74[i] = mParam1 * (field_0x94[i] * ((1.0f - param3) + fVar2 * param3));
        field_0x84[i] = mParam2 * (field_0xa4[i] * ((1.0f - param3) + fVar2 * param3));
    }

    moveCenter(mpScreen->search('l_u_null'), field_0x74[0], field_0x84[0]);
    moveCenter(mpScreen->search('l_d_null'), field_0x74[1], field_0x84[1]);
    moveCenter(mpScreen->search('r_u_null'), field_0x74[2], field_0x84[2]);
    moveCenter(mpScreen->search('r_d_null'), field_0x74[3], field_0x84[3]);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setCursorAnimation() {
    nofralloc
#include "asm/d/d_select_cursor/setCursorAnimation__16dSelect_cursor_cFv.s"
}
#pragma pop
#endif

/* 801958E0-80195940 190220 0060+00 1/1 0/0 0/0 .text
 * setBckAnimation__16dSelect_cursor_cFP18J2DAnmTransformKey    */
void dSelect_cursor_c::setBckAnimation(J2DAnmTransformKey* param_0) {
    mpScreen->search('ssel_ico')->setAnimation((J2DAnmTransform*)param_0);
}

/* 80195940-80195978 190280 0038+00 1/1 0/0 0/0 .text moveCenter__16dSelect_cursor_cFP7J2DPaneff
 */
void dSelect_cursor_c::moveCenter(J2DPane* i_pane, f32 i_x, f32 i_y) {
    i_pane->translate(i_x,i_y);
}

/* 80195978-801959C0 1902B8 0048+00 1/0 0/0 0/0 .text            __dt__19dSelect_cursorHIO_cFv */
dSelect_cursorHIO_c::~dSelect_cursorHIO_c() {
}

/* 801959C0-80195A2C 190300 006C+00 0/0 1/0 0/0 .text            __dt__18J2DAnmTransformKeyFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J2DAnmTransformKey::~J2DAnmTransformKey() {
extern "C" asm void __dt__18J2DAnmTransformKeyFv() {
    nofralloc
#include "asm/d/d_select_cursor/__dt__18J2DAnmTransformKeyFv.s"
}
#pragma pop

/* 80394AA0-80394AA0 021100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
