//
// Generated By: dol2asm
// Translation Unit: d/menu/d_menu_map_common
//

#include "d/menu/d_menu_map_common.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_select_cursor.h"
#include "d/meter/d_meter_HIO.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "global.h"

struct dMenuMapCommon_c {
    /* 801C2718 */ dMenuMapCommon_c();
    /* 801C27B4 */ virtual ~dMenuMapCommon_c();
    /* 801C28D8 */ void initiate(JKRArchive*);
    /* 801C38E4 */ void drawIcon(f32, f32, f32, f32);
    /* 801C3EC4 */ void iconScale(int, f32, f32, f32);
    /* 801C43A8 */ void setIconInfo(u8, f32, f32, f32, f32, f32, u8);
    /* 801C443C */ void clearIconInfo();
    /* 801C4494 */ void setBlendRatio(u8, f32, f32);
    /* 801C452C */ void blinkMove(s16);
    /* 801C4600 */ void moveLightDropAnime();
    /* 801C4738 */ float getIconSizeX(u8 index);
    /* 801C4778 */ float getIconSizeY(u8 index);
    /* 801C47C4 */ void debugIcon();

    struct data {
        /* 0x00 */ float _0;
        /* 0x04 */ float _4;
        /* 0x08 */ float _8;
        /* 0x0C */ float _C;
        /* 0x10 */ float _10;
        /* 0x14 */ u8 _14;
        /* 0x15 */ u8 _15;
    };

    /* 0x004 */ J2DPicture* mPictures[23];
    /* 0x060 */ J2DPicture* _60;
    /* 0x064 */ dSelect_cursor_c* mpDrawCursor;
    /* 0x068 */ dSelect_cursor_c* mpPortalIcon;
    /* 0x06C */ u32 _6c;
    /* 0x070 */ data _70[128];
    /* 0xC70 */ u16 _c70;
    /* 0xC72 */ u16 _c72;
    /* 0xC74 */ u16 _c74;
    /* 0xC76 */ u16 _c76;
    /* 0xC78 */ float _c78;
    /* 0xC7C */ float _c7c;
    /* 0xC80 */ float _c80;
    /* 0xC84 */ float _c84;
    /* 0xC88 */ float _c88;
    /* 0xC8C */ float _c8c;
    /* 0xC90 */ u8 _c90;
};

//
// Forward References:
//

extern "C" void __ct__16dMenuMapCommon_cFv();
extern "C" void __dt__16dMenuMapCommon_cFv();
extern "C" void initiate__16dMenuMapCommon_cFP10JKRArchive();
extern "C" void drawIcon__16dMenuMapCommon_cFffff();
extern "C" void iconScale__16dMenuMapCommon_cFifff();
extern "C" void setIconInfo__16dMenuMapCommon_cFUcfffffUc();
extern "C" void clearIconInfo__16dMenuMapCommon_cFv();
extern "C" void setBlendRatio__16dMenuMapCommon_cFUcff();
extern "C" void blinkMove__16dMenuMapCommon_cFs();
extern "C" void moveLightDropAnime__16dMenuMapCommon_cFv();
extern "C" void getIconSizeX__16dMenuMapCommon_cFUc();
extern "C" void getIconSizeY__16dMenuMapCommon_cFUc();
extern "C" void debugIcon__16dMenuMapCommon_cFv();
extern "C" extern char const* const d_menu_d_menu_map_common__stringBase0;

//
// External References:
//

extern "C" void __ct__16dSelect_cursor_cFUcfP10JKRArchive();
extern "C" void setScale__16dSelect_cursor_cFf();
extern "C" void setAlphaRate__16dSelect_cursor_cFf();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void rotate__7J2DPaneFff13J2DRotateAxisf();
extern "C" void setBasePosition__7J2DPaneF15J2DBasePosition();
extern "C" void setInfluencedAlpha__7J2DPaneFbb();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803BCF18-803BD02C 01A038 0114+00 2/2 0/0 0/0 .data            map_icon_size */
struct map_icon_size_t {
    float mXSize;
    float mYSize;
    u8 mIndex;
};

static map_icon_size_t map_icon_size[] = {
    {1.0f, 1.0f, 0x0},    {1.0f, 1.0f, 0x1},    {40.0f, 40.0f, 0x11}, {40.0f, 40.0f, 0x2},
    {40.0f, 40.0f, 0x12}, {40.0f, 40.0f, 0x4},  {40.0f, 40.0f, 0x3},  {40.0f, 40.0f, 0x5},
    {40.0f, 40.0f, 0x6},  {40.0f, 40.0f, 0x7},  {40.0f, 40.0f, 0x9},  {40.0f, 40.0f, 0xa},
    {40.0f, 40.0f, 0xb},  {40.0f, 40.0f, 0xc},  {40.0f, 40.0f, 0xf},  {40.0f, 40.0f, 0x10},
    {40.0f, 40.0f, 0x8},  {67.5f, 40.0f, 0xd},  {40.0f, 40.0f, 0xe},  {40.0f, 40.0f, 0x13},
    {40.0f, 40.0f, 0x14}, {40.0f, 40.0f, 0x15}, {40.0f, 40.0f, 0x16}};
/* 803BD02C-803BD038 01A14C 000C+00 2/2 0/0 0/0 .data            __vt__16dMenuMapCommon_c */
SECTION_DATA extern void* __vt__16dMenuMapCommon_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16dMenuMapCommon_cFv,
};

/* 804540D8-804540DC 0026D8 0004+00 6/6 0/0 0/0 .sdata2          @3703 */
SECTION_SDATA2 static u8 lit_3703[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 801C2718-801C27B4 1BD058 009C+00 0/0 2/2 0/0 .text            __ct__16dMenuMapCommon_cFv */
// matches with literals
#ifdef NONMATCHING
dMenuMapCommon_c::dMenuMapCommon_c() {
    for (int i = 0; i < 23; i++) {
        mPictures[i] = NULL;
    }
    _60 = 0;
    mpDrawCursor = NULL;
    mpPortalIcon = NULL;
    _6c = 0;
    _c72 = 0;
    _c78 = 0.0f;
    _c74 = 0;
    _c80 = 0.0f;
    _c7c = 0.0f;
    _c84 = 0.0f;
    _c88 = 0.0f;
    _c8c = 0.0f;
    _c90 = 0;
    clearIconInfo();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenuMapCommon_c::dMenuMapCommon_c() {
    nofralloc
#include "asm/d/menu/d_menu_map_common/__ct__16dMenuMapCommon_cFv.s"
}
#pragma pop
#endif

/* 801C27B4-801C28D8 1BD0F4 0124+00 1/0 2/2 0/0 .text            __dt__16dMenuMapCommon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenuMapCommon_c::~dMenuMapCommon_c() {
    nofralloc
#include "asm/d/menu/d_menu_map_common/__dt__16dMenuMapCommon_cFv.s"
}
#pragma pop

/* 804540DC-804540E0 0026DC 0004+00 7/7 0/0 0/0 .sdata2          @3882 */
SECTION_SDATA2 static f32 lit_3882 = 1.0f;

/* 801C28D8-801C38E4 1BD218 100C+00 0/0 2/2 0/0 .text initiate__16dMenuMapCommon_cFP10JKRArchive
 */
// matches with literals
#ifdef NONMATCHING
void dMenuMapCommon_c::initiate(JKRArchive* arc) {
    ResTIMG* mp_image;

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_s_ci8_16_00.bti");
    ASSERT(mp_image != 0);
    mPictures[4] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[4]->append(mp_image, 1.0f);
    mPictures[4]->setBasePosition(J2DBasePosition_4);
    mPictures[4]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_s_ci8_16_00.bti");
    ASSERT(mp_image != 0);
    mPictures[3] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[3]->append(mp_image, 1.0f);
    mPictures[3]->setBasePosition(J2DBasePosition_4);
    mPictures[3]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_enter_ci8_24_02.bti");
    ASSERT(mp_image != 0);
    mPictures[20] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_enter_ci8_02.bti");
    ASSERT(mp_image != 0);
    mPictures[20]->append(mp_image, 1.0f);
    mPictures[20]->setBasePosition(J2DBasePosition_4);
    mPictures[20]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_enter_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[21] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_enter_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[21]->append(mp_image, 1.0f);
    mPictures[21]->setBasePosition(J2DBasePosition_4);
    mPictures[21]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_warp_24_ci8_00.bti");
    ASSERT(mp_image != 0);
    mPictures[22] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_warp_32_ci8_00.bti");
    ASSERT(mp_image != 0);
    mPictures[22]->append(mp_image, 1.0f);
    mPictures[22]->setBasePosition(J2DBasePosition_4);
    mPictures[22]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_box_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[19] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_box_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[19]->append(mp_image, 1.0f);
    mPictures[19]->setBasePosition(J2DBasePosition_4);
    mPictures[19]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_gray_00.bti");
    ASSERT(mp_image != 0);
    mPictures[14] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_key_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[14]->append(mp_image, 1.0f);
    mPictures[14]->setBasePosition(J2DBasePosition_4);
    mPictures[14]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[9] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "st_yuki_M.bti");
    ASSERT(mp_image != 0);
    mPictures[9]->append(mp_image, 1.0f);
    mPictures[9]->setBasePosition(J2DBasePosition_4);
    mPictures[9]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[10] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "st_yuki_W.bti");
    ASSERT(mp_image != 0);
    mPictures[10]->append(mp_image, 1.0f);
    mPictures[10]->setBasePosition(J2DBasePosition_4);
    mPictures[10]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_yellow_00.bti");
    ASSERT(mp_image != 0);
    mPictures[11] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "st_gold_wolf.bti");
    ASSERT(mp_image != 0);
    mPictures[11]->append(mp_image, 1.0f);
    mPictures[11]->setBasePosition(J2DBasePosition_4);
    mPictures[11]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[12] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_monkey_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[12]->append(mp_image, 1.0f);
    mPictures[12]->setBasePosition(J2DBasePosition_4);
    mPictures[12]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_blue_00.bti");
    ASSERT(mp_image != 0);
    mPictures[15] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "ni_obacyan.bti");
    ASSERT(mp_image != 0);
    mPictures[15]->append(mp_image, 1.0f);
    mPictures[15]->setBasePosition(J2DBasePosition_4);
    mPictures[15]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_blue_00.bti");
    ASSERT(mp_image != 0);
    mPictures[16] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "ni_obacyan.bti");
    ASSERT(mp_image != 0);
    mPictures[16]->append(mp_image, 1.0f);
    mPictures[16]->setBasePosition(J2DBasePosition_4);
    mPictures[16]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[8] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG',
                                          "im_zelda_map_icon_copy_stone_statue_snup_try_00_04.bti");
    ASSERT(mp_image != 0);
    mPictures[8]->append(mp_image, 1.0f);
    mPictures[8]->setBasePosition(J2DBasePosition_4);
    mPictures[8]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_link_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[17] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_link_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[17]->append(mp_image, 1.0f);
    mPictures[17]->setBasePosition(J2DBasePosition_4);
    mPictures[17]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_penant_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[2] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_penant_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[2]->append(mp_image, 1.0f);
    mPictures[2]->setBasePosition(J2DBasePosition_4);
    mPictures[2]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_black_32.bti");
    ASSERT(mp_image != 0);
    mPictures[5] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_black_32.bti");
    ASSERT(mp_image != 0);
    mPictures[5]->append(mp_image, 1.0f);
    mPictures[5]->setBasePosition(J2DBasePosition_4);
    mPictures[5]->setInfluencedAlpha(false, false);

    mPictures[5]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));

    // todo check if this value is mPictures[23] (out of the array) or field 0x60
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_hikari_no_shizuku_try_10_00_24x24.bti");
    ASSERT(mp_image != 0);
    mPictures[23] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_hikari_no_shizuku_try_10_00_24x24.bti");
    ASSERT(mp_image != 0);
    mPictures[23]->append(mp_image, 1.0f);
    mPictures[23]->setBasePosition(J2DBasePosition_4);
    mPictures[23]->setInfluencedAlpha(false, false);

    mPictures[23]->setBlackWhite(JUtility::TColor(0, 240, 170, 0),
                                 JUtility::TColor(255, 255, 230, 255));

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[6] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_zelda_map_icon_hikari_ball_03.bti");
    ASSERT(mp_image != 0);
    mPictures[6]->append(mp_image, 1.0f);
    mPictures[6]->setBasePosition(J2DBasePosition_4);
    mPictures[6]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[7] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_iron_ball_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[7]->append(mp_image, 1.0f);
    mPictures[7]->setBasePosition(J2DBasePosition_4);
    mPictures[7]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[13] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_basha_ci8.bti");
    ASSERT(mp_image != 0);
    mPictures[13]->append(mp_image, 1.0f);
    mPictures[13]->setBasePosition(J2DBasePosition_4);
    mPictures[13]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_nijumaru_40x40_ind_01.bti");
    ASSERT(mp_image != 0);
    mPictures[18] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_nijumaru_40x40_ind_01.bti");
    ASSERT(mp_image != 0);
    mPictures[18]->append(mp_image, 1.0f);
    mPictures[18]->setBasePosition(J2DBasePosition_4);
    mPictures[18]->setInfluencedAlpha(false, false);

    mpDrawCursor = new dSelect_cursor_c(4, 1.0f, NULL);
    ASSERT(mpDrawCursor != 0);

    if (arc == dComIfGp_getFmapResArchive()) {
        mpPortalIcon = new dSelect_cursor_c(5, 1.0f, arc);
        ASSERT(mpPortalIcon != 0);
    }
}
#else

/* ############################################################################################## */
/* 803959C0-803959C0 022020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803959C0 = "tt_map_icon_boss_s_ci8_16_00.bti";
SECTION_DEAD static char const* const stringBase_803959E1 = "tt_map_icon_boss_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395A00 = "im_map_icon_enter_ci8_24_02.bti";
SECTION_DEAD static char const* const stringBase_80395A20 = "im_map_icon_enter_ci8_02.bti";
SECTION_DEAD static char const* const stringBase_80395A3D = "tt_map_icon_enter_s_ci8_24_00.bti";
SECTION_DEAD static char const* const stringBase_80395A5F = "tt_map_icon_enter_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395A7F = "im_map_icon_warp_24_ci8_00.bti";
SECTION_DEAD static char const* const stringBase_80395A9E = "im_map_icon_warp_32_ci8_00.bti";
SECTION_DEAD static char const* const stringBase_80395ABD = "tt_map_icon_box_s_ci8_24_00.bti";
SECTION_DEAD static char const* const stringBase_80395ADD = "tt_map_icon_box_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395AFB =
    "tt_map_icon_s_size_circle_ci4_gray_00.bti";
SECTION_DEAD static char const* const stringBase_80395B25 = "tt_map_icon_key_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395B43 = "tt_map_icon_s_size_circle_ci4_00.bti";
SECTION_DEAD static char const* const stringBase_80395B68 = "st_yuki_M.bti";
SECTION_DEAD static char const* const stringBase_80395B76 = "st_yuki_W.bti";
SECTION_DEAD static char const* const stringBase_80395B84 =
    "tt_map_icon_s_size_circle_ci4_yellow_00.bti";
SECTION_DEAD static char const* const stringBase_80395BB0 = "st_gold_wolf.bti";
SECTION_DEAD static char const* const stringBase_80395BC1 = "tt_map_icon_monkey_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395BE2 =
    "tt_map_icon_s_size_circle_ci4_blue_00.bti";
SECTION_DEAD static char const* const stringBase_80395C0C = "ni_obacyan.bti";
SECTION_DEAD static char const* const stringBase_80395C1B =
    "im_zelda_map_icon_copy_stone_statue_snup_try_00_"
    "04.bti";
SECTION_DEAD static char const* const stringBase_80395C52 = "tt_map_icon_link_s_ci8_24_00.bti";
SECTION_DEAD static char const* const stringBase_80395C73 = "tt_map_icon_link_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395C92 = "tt_map_icon_penant_s_ci8_24_00.bti";
SECTION_DEAD static char const* const stringBase_80395CB5 = "tt_map_icon_penant_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395CD6 = "im_black_32.bti";
SECTION_DEAD static char const* const stringBase_80395CE6 =
    "im_hikari_no_shizuku_try_10_00_24x24.bti";
SECTION_DEAD static char const* const stringBase_80395D0F = "im_zelda_map_icon_hikari_ball_03.bti";
SECTION_DEAD static char const* const stringBase_80395D34 = "im_map_icon_iron_ball_ci8_32_00.bti";
SECTION_DEAD static char const* const stringBase_80395D58 = "im_map_icon_basha_ci8.bti";
SECTION_DEAD static char const* const stringBase_80395D72 = "im_nijumaru_40x40_ind_01.bti";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80395D8F = "";
#pragma pop

#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::initiate(JKRArchive* param_0) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/initiate__16dMenuMapCommon_cFP10JKRArchive.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804540E0-804540E4 0026E0 0004+00 1/1 0/0 0/0 .sdata2          @4010 */
SECTION_SDATA2 static f32 lit_4010 = 255.0f;

/* 804540E4-804540E8 0026E4 0004+00 1/1 0/0 0/0 .sdata2          @4011 */
SECTION_SDATA2 static f32 lit_4011 = 4.0f / 7.0f;

/* 804540E8-804540EC 0026E8 0004+00 3/3 0/0 0/0 .sdata2          @4012 */
SECTION_SDATA2 static f32 lit_4012 = 0.5f;

/* 804540EC-804540F0 0026EC 0004+00 1/1 0/0 0/0 .sdata2          @4013 */
SECTION_SDATA2 static f32 lit_4013 = 180.0f;

/* 801C38E4-801C3EC4 1BE224 05E0+00 0/0 2/2 0/0 .text            drawIcon__16dMenuMapCommon_cFffff
 */
//unfinished
#ifdef NONMATCHING
void dMenuMapCommon_c::drawIcon(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
    s16 tmp[128];
    if (g_fmapHIO.mMapIconHIO.mIconDebug) {
        debugIcon();
    }
    if (mpDrawCursor) {
        mpDrawCursor->onUpdateFlag();
    }
    if (mpPortalIcon) {
        mpPortalIcon->onUpdateFlag();
    }
    int counter = 0;
    for (int i = 0; i < 128; i++) {
        tmp[i] = -1;
    }

    for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 128; j++) {
            if (i == _70[j]._14 && _70[j]._15 != 0) {
                tmp[counter] = j;
                counter++;
            }
        }
    }

    for (int i = 0; i < 128; i++) {
        s16 val = tmp[i];
        if (val != -1) {
            if (_70[val]._14 == 0) {
                float float1 = _70[val]._0;
                float float2 = _70[val]._4;
                if (mpPortalIcon) {
                    if (mpPortalIcon->getUpdateFlag()) {
                        if (_70[val]._15 == 2) {
                            mpPortalIcon->setAlphaRate(255.0f);
                        }
                    }
                }
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::drawIcon(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/drawIcon__16dMenuMapCommon_cFffff.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804540F0-804540F4 0026F0 0004+00 1/1 0/0 0/0 .sdata2          @4072 */
SECTION_SDATA2 static f32 lit_4072 = 16.0f / 27.0f;

/* 804540F4-804540F8 0026F4 0004+00 1/1 0/0 0/0 .sdata2          @4073 */
SECTION_SDATA2 static f32 lit_4073 = 11.0f / 27.0f;

/* 801C3EC4-801C43A8 1BE804 04E4+00 0/0 4/4 0/0 .text            iconScale__16dMenuMapCommon_cFifff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::iconScale(int param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/iconScale__16dMenuMapCommon_cFifff.s"
}
#pragma pop

/* 801C43A8-801C443C 1BECE8 0094+00 1/1 3/3 0/0 .text setIconInfo__16dMenuMapCommon_cFUcfffffUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::setIconInfo(u8 param_0, f32 param_1, f32 param_2, f32 param_3,
                                       f32 param_4, f32 param_5, u8 param_6) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/setIconInfo__16dMenuMapCommon_cFUcfffffUc.s"
}
#pragma pop

/* 801C443C-801C4494 1BED7C 0058+00 1/1 2/2 0/0 .text            clearIconInfo__16dMenuMapCommon_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::clearIconInfo() {
    nofralloc
#include "asm/d/menu/d_menu_map_common/clearIconInfo__16dMenuMapCommon_cFv.s"
}
#pragma pop

/* 801C4494-801C452C 1BEDD4 0098+00 1/1 0/0 0/0 .text setBlendRatio__16dMenuMapCommon_cFUcff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::setBlendRatio(u8 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/setBlendRatio__16dMenuMapCommon_cFUcff.s"
}
#pragma pop

/* ############################################################################################## */
/* 804540F8-80454100 0026F8 0008+00 2/2 0/0 0/0 .sdata2          @4119 */
SECTION_SDATA2 static f64 lit_4119 = 4503601774854144.0 /* cast s32 to float */;

/* 801C452C-801C4600 1BEE6C 00D4+00 0/0 1/1 0/0 .text            blinkMove__16dMenuMapCommon_cFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::blinkMove(s16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/blinkMove__16dMenuMapCommon_cFs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454100-80454108 002700 0008+00 1/1 0/0 0/0 .sdata2          @4140 */
SECTION_SDATA2 static f64 lit_4140 = 4503599627370496.0 /* cast u32 to float */;

/* 801C4600-801C4738 1BEF40 0138+00 0/0 1/1 0/0 .text moveLightDropAnime__16dMenuMapCommon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::moveLightDropAnime() {
    nofralloc
#include "asm/d/menu/d_menu_map_common/moveLightDropAnime__16dMenuMapCommon_cFv.s"
}
#pragma pop

/* 801C4738-801C4778 1BF078 0040+00 1/1 0/0 0/0 .text            getIconSizeX__16dMenuMapCommon_cFUc
 */
#ifdef NONMATCHING
float dMenuMapCommon_c::getIconSizeX(u8 index) {
    for (int i = 0; i < ARRAY_SIZE(map_icon_size); i++) {
        if (map_icon_size[index].mIndex == index) {
            return map_icon_size[index].mXSize;
        }
    }
    return 0.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm float dMenuMapCommon_c::getIconSizeX(u8 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/getIconSizeX__16dMenuMapCommon_cFUc.s"
}
#pragma pop
#endif

/* 801C4778-801C47C4 1BF0B8 004C+00 1/1 0/0 0/0 .text            getIconSizeY__16dMenuMapCommon_cFUc
 */
#ifdef NONMATCHING
float dMenuMapCommon_c::getIconSizeY(u8 index) {
    for (int i = 0; i < ARRAY_SIZE(map_icon_size); i++) {
        if (map_icon_size[index].mIndex == index) {
            return map_icon_size[index].mYSize;
        }
    }
    return 0.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm float dMenuMapCommon_c::getIconSizeY(u8 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_map_common/getIconSizeY__16dMenuMapCommon_cFUc.s"
}
#pragma pop
#endif

/* 801C47C4-801C4D54 1BF104 0590+00 1/1 0/0 0/0 .text            debugIcon__16dMenuMapCommon_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenuMapCommon_c::debugIcon() {
    nofralloc
#include "asm/d/menu/d_menu_map_common/debugIcon__16dMenuMapCommon_cFv.s"
}
#pragma pop

/* 803959C0-803959C0 022020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
