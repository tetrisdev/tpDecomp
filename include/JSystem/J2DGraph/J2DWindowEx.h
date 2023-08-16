#ifndef J2DWINDOWEX_H
#define J2DWINDOWEX_H

#include "JSystem/J2DGraph/J2DWindow.h"
#include "dolphin/types.h"

class J2DWindowEx : public J2DWindow {
public:
    enum stage_enum {};

    /* 80300C94 */ J2DWindowEx(J2DPane*, JSURandomInputStream*, u32, J2DMaterial*);
    /* 80300F80 */ void setMinSize();
    /* 803012CC */ void draw_private(JGeometry::TBox2<f32> const&, JGeometry::TBox2<f32> const&);
    /* 80301D74 */ void drawFrameTexture(f32, f32, f32, f32, u16, u16, u16, u16, J2DMaterial*,
                                         bool);
    /* 80302284 */ void setTevOrder(bool);
    /* 80302388 */ void setTevStage(bool);
    /* 803024B4 */ void setStage(J2DTevStage*, J2DWindowEx::stage_enum);
    /* 80302A4C */ void getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
    /* 80302BE8 */ void isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;
    /* 8030321C */ void isNeedSetAnm(u8);

    /* 80301144 */ virtual ~J2DWindowEx();
    /* 803035C0 */ virtual void setCullBack(bool);
    /* 80302D98 */ virtual void setCullBack(_GXCullMode);
    /* 80302D48 */ virtual void setAlpha(u8);
    /* 8030122C */ virtual void drawSelf(f32, f32, f32 (*)[3][4]);
    /* 80302EDC */ virtual void isUsed(ResTIMG const*);
    /* 803035FC */ virtual void isUsed(ResFONT const*);
    /* 80302DF4 */ virtual void rewriteAlpha();
    /* 8030361C */ virtual void setAnimation(J2DAnmBase*);
    /* 80256084 */ virtual void setAnimation(J2DAnmTransform*);
    /* 80302FFC */ virtual void setAnimation(J2DAnmColor*);
    /* 8030310C */ virtual void setAnimation(J2DAnmTexPattern*);
    /* 80303084 */ virtual void setAnimation(J2DAnmTextureSRTKey*);
    /* 80303194 */ virtual void setAnimation(J2DAnmTevRegKey*);
    /* 80303274 */ virtual void setAnimation(J2DAnmVisibilityFull*);
    /* 8030327C */ virtual void setAnimation(J2DAnmVtxColor*);
    /* 80303370 */ virtual void animationPane(J2DAnmTransform const*);
    /* 80301FC8 */ virtual void draw(JGeometry::TBox2<f32> const&);
    /* 80302164 */ virtual void draw(JGeometry::TBox2<f32> const&, JGeometry::TBox2<f32> const&);
    /* 80303568 */ virtual void draw(f32, f32, f32, f32);
    /* 80302764 */ virtual void setBlack(JUtility::TColor);
    /* 803027EC */ virtual void setWhite(JUtility::TColor);
    /* 80302874 */ virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);
    /* 80302C88 */ virtual void getBlack() const;
    /* 80302CE8 */ virtual void getWhite() const;
    /* 80302E0C */ virtual void getFrameTexture(u8, u8) const;
    /* 80302E74 */ virtual void getContentsTexture(u8) const;
    /* 8030353C */ virtual void getMaterial(J2DWindow::TMaterial&) const;
    /* 80303510 */ virtual void getFrameMaterial(u8) const;
    /* 80303534 */ virtual void getContentsMaterial() const;
    /* 80301994 */ virtual void drawContents(JGeometry::TBox2<f32> const&);

private:
    /* 0x148 */ J2DMaterial* mFrameMaterial[4];
    /* 0x158 */ u16 field_0x158[4];
    /* 0x160 */ J2DMaterial* mContentsMaterial;
    /* 0x164 */ u16 field_0x164;
    /* 0x166 */ u16 field_0x166;
    /* 0x168 */ u16 field_0x168[4];
    /* 0x170 */ u8 field_0x170;
    /* 0x174 */ J2DAnmVisibilityFull* mAnmVisibilityFull;
    /* 0x178 */ J2DAnmVtxColor* mAnmVtxColor;
};

#endif /* J2DWINDOWEX_H */
