//
// Generated By: dol2asm
// Translation Unit: c_cc_d
//

#include "SSystem/SComponent/c_cc_d.h"
#include "dolphin/types.h"

/* 80430CB4-80430CC0 05D9D4 000C+00 1/1 2/2 0/0 .bss             m_virtual_center__14cCcD_ShapeAttr
 */
cXyz cCcD_ShapeAttr::m_virtual_center = cXyz::Zero;

/* 80263358-80263368 25DC98 0010+00 2/2 1/1 0/0 .text            Set__15cCcD_DivideInfoFUlUlUl */
void cCcD_DivideInfo::Set(u32 xDivInfo, u32 yDivInfo, u32 zDivInfo) {
    mXDivInfo = xDivInfo;
    mYDivInfo = yDivInfo;
    mZDivInfo = zDivInfo;
}

/* 80263368-802633A8 25DCA8 0040+00 0/0 5/5 0/0 .text Chk__15cCcD_DivideInfoCFRC15cCcD_DivideInfo
 */
bool cCcD_DivideInfo::Chk(cCcD_DivideInfo const& other) const {
    if ((mXDivInfo & other.mXDivInfo) == 0 || (mZDivInfo & other.mZDivInfo) == 0 ||
        (mYDivInfo & other.mYDivInfo) == 0) {
        return false;
    } else {
        return true;
    }
}

/* 802633A8-802634D4 25DCE8 012C+00 0/0 2/2 0/0 .text SetArea__15cCcD_DivideAreaFRC8cM3dGAab */
void cCcD_DivideArea::SetArea(cM3dGAab const& aab) {
    Set(&aab.mMin, &aab.mMax);

    mScaledXDiff = 1.0f / 32.0f * (mMax.x - mMin.x);
    mXDiffIsZero = cM3d_IsZero(mScaledXDiff);
    if (!mXDiffIsZero) {
        mInvScaledXDiff = 1.0f / mScaledXDiff;
    }

    mScaledYDiff = 1.0f / 32.0f * (mMax.y - mMin.y);
    mYDiffIsZero = cM3d_IsZero(mScaledYDiff);
    if (!mYDiffIsZero) {
        mInvScaledYDiff = 1.0f / mScaledYDiff;
    }

    mScaledZDiff = 1.0f / 32.0f * (mMax.z - mMin.z);
    mZDiffIsZero = cM3d_IsZero(mScaledZDiff);
    if (!mZDiffIsZero) {
        mInvScaledZDiff = 1.0f / mScaledZDiff;
    }
}

/* ############################################################################################## */
/* 8039A7E8-8039A868 026E48 0080+00 2/2 0/0 0/0 .rodata          l_base */
static u32 const l_base[32] = {
    0x00000001, 0x00000003, 0x00000007, 0x0000000F, 0x0000001F, 0x0000003F, 0x0000007F, 0x000000FF,
    0x000001FF, 0x000003FF, 0x000007FF, 0x00000FFF, 0x00001FFF, 0x00003FFF, 0x00007FFF, 0x0000FFFF,
    0x0001FFFF, 0x0003FFFF, 0x0007FFFF, 0x000FFFFF, 0x001FFFFF, 0x003FFFFF, 0x007FFFFF, 0x00FFFFFF,
    0x01FFFFFF, 0x03FFFFFF, 0x07FFFFFF, 0x0FFFFFFF, 0x1FFFFFFF, 0x3FFFFFFF, 0x7FFFFFFF, 0xFFFFFFFF,
};

/* 802634D4-802636A0 25DE14 01CC+00 0/0 2/2 0/0 .text
 * CalcDivideInfo__15cCcD_DivideAreaFP15cCcD_DivideInfoRC8cM3dGAabUl */
void cCcD_DivideArea::CalcDivideInfo(cCcD_DivideInfo* pDivideInfo, cM3dGAab const& aab,
                                     u32 param_2) {
    if (param_2 != 0) {
        pDivideInfo->Set(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    } else {
        u32 xDivInfo, yDivInfo, zDivInfo;
        if (!mXDiffIsZero) {
            s32 var1 = mInvScaledXDiff * (aab.mMin.x - mMin.x);
            s32 var3 = mInvScaledXDiff * (aab.mMax.x - mMin.x);
            if (31 < var3) {
                var3 = 31;
            }

            xDivInfo = l_base[var3];
            if (0 < var1) {
                var1--;
                xDivInfo &= ~l_base[var1];
            }
        } else {
            xDivInfo = 0xFFFFFFFF;
        }

        if (!mYDiffIsZero) {
            s32 var1 = mInvScaledYDiff * (aab.mMin.y - mMin.y);
            s32 var3 = mInvScaledYDiff * (aab.mMax.y - mMin.y);
            if (31 < var3) {
                var3 = 31;
            }

            yDivInfo = l_base[var3];
            if (0 < var1) {
                var1--;
                yDivInfo &= ~l_base[var1];
            }
        } else {
            yDivInfo = 0xFFFFFFFF;
        }

        if (!mZDiffIsZero) {
            s32 var1 = mInvScaledZDiff * (aab.mMin.z - mMin.z);
            s32 var3 = mInvScaledZDiff * (aab.mMax.z - mMin.z);
            if (31 < var3) {
                var3 = 31;
            }

            zDivInfo = l_base[var3];
            if (0 < var1) {
                var1--;
                zDivInfo &= ~l_base[var1];
            }
        } else {
            zDivInfo = 0xFFFFFFFF;
        }

        pDivideInfo->Set(xDivInfo, yDivInfo, zDivInfo);
    }
}

/* 802636A0-80263894 25DFE0 01F4+00 0/0 3/3 0/0 .text
 * CalcDivideInfoOverArea__15cCcD_DivideAreaFP15cCcD_DivideInfoRC8cM3dGAab */
void cCcD_DivideArea::CalcDivideInfoOverArea(cCcD_DivideInfo* pDivideInfo,
                                             cM3dGAab const& aab) {
    u32 xDivInfo, yDivInfo, zDivInfo;
    if (!mXDiffIsZero) {
        s32 var1 = mInvScaledXDiff * (aab.mMin.x - mMin.x);
        s32 var3 = mInvScaledXDiff * (aab.mMax.x - mMin.x);
        if (var3 < 0 || 31 < var1) {
            xDivInfo = 0;
        } else {
            if (31 < var3) {
                var3 = 31;
            }
            xDivInfo = l_base[var3];
            if (0 < var1) {
                var1--;
                xDivInfo &= ~l_base[var1];
            }
        }
    } else {
        xDivInfo = 0xFFFFFFFF;
    }

    if (!mYDiffIsZero) {
        s32 var1 = mInvScaledYDiff * (aab.mMin.y - mMin.y);
        s32 var3 = mInvScaledYDiff * (aab.mMax.y - mMin.y);
        if (var3 < 0 || 31 < var1) {
            yDivInfo = 0;
        } else {
            if (31 < var3) {
                var3 = 31;
            }
            yDivInfo = l_base[var3];
            if (0 < var1) {
                var1--;
                yDivInfo &= ~l_base[var1];
            }
        }
    } else {
        yDivInfo = 0xFFFFFFFF;
    }

    if (!mZDiffIsZero) {
        s32 var1 = mInvScaledZDiff * (aab.mMin.z - mMin.z);
        s32 var3 = mInvScaledZDiff * (aab.mMax.z - mMin.z);
        if (var3 < 0 || 31 < var1) {
            zDivInfo = 0;
        } else {
            if (31 < var3) {
                var3 = 31;
            }
            zDivInfo = l_base[var3];
            if (0 < var1) {
                var1--;
                zDivInfo &= ~l_base[var1];
            }
        }
    } else {
        zDivInfo = 0xFFFFFFFF;
    }

    pDivideInfo->Set(xDivInfo, yDivInfo, zDivInfo);
}

/* 80263894-8026389C 25E1D4 0008+00 1/0 1/0 0/0 .text            GetGStts__9cCcD_SttsCFv */
const cCcD_GStts* cCcD_Stts::GetGStts() const {
    return NULL;
}

/* 8026389C-802638A4 25E1DC 0008+00 1/0 0/0 0/0 .text            GetGStts__9cCcD_SttsFv */
cCcD_GStts* cCcD_Stts::GetGStts() {
    return NULL;
}

/* 802638A4-80263904 25E1E4 0060+00 0/0 1/1 0/0 .text            Init__9cCcD_SttsFiiPvUi */
void cCcD_Stts::Init(int weight, int param_1, void* pActor, unsigned int apid) {
    Ct();
    mWeight = weight;
    field_0x15 = param_1;
    mActor = static_cast<fopAc_ac_c*>(pActor);
    mApid = apid;
}

/* 80263904-80263934 25E244 0030+00 1/0 1/1 0/0 .text            Ct__9cCcD_SttsFv */
void cCcD_Stts::Ct() {
    mXyz.x = 0.0f;
    mXyz.y = 0.0f;
    mXyz.z = 0.0f;
    mActor = 0;
    mApid = 0xFFFFFFFF;
    mWeight = 0;
    field_0x15 = 0;
    mTg = 0;
}

/* 80263934-8026395C 25E274 0028+00 0/0 3/3 0/0 .text            PlusCcMove__9cCcD_SttsFfff */
void cCcD_Stts::PlusCcMove(f32 x, f32 y, f32 z) {
    mXyz.x += x;
    mXyz.y += y;
    mXyz.z += z;
}

/* 8026395C-80263970 25E29C 0014+00 0/0 10/10 23/23 .text            ClrCcMove__9cCcD_SttsFv */
void cCcD_Stts::ClrCcMove() {
    mXyz.z = 0.0f;
    mXyz.y = 0.0f;
    mXyz.x = 0.0f;
}

/* 80263970-80263984 25E2B0 0014+00 0/0 2/2 0/0 .text            PlusDmg__9cCcD_SttsFi */
void cCcD_Stts::PlusDmg(int dmg) {
    if (mTg >= dmg) {
        return;
    }
    mTg = dmg;
}

/* 80263984-802639B0 25E2C4 002C+00 0/0 1/1 0/0 .text            GetWeightF__9cCcD_SttsCFv */
f32 cCcD_Stts::GetWeightF() const {
    return (s32)mWeight;
}

/* 802639B0-802639C4 25E2F0 0014+00 0/0 1/1 0/0 .text            ct__18cCcD_ObjCommonBaseFv */
void cCcD_ObjCommonBase::ct() {
    mSPrm = 0;
    mRPrm = 0;
    mHitObj = NULL;
}

/* 802639C4-80263A10 25E304 004C+00 1/1 0/0 0/0 .text Set__14cCcD_ObjHitInfFRC17cCcD_SrcObjHitInf
 */
void cCcD_ObjHitInf::Set(cCcD_SrcObjHitInf const& src) {
    mObjAt.Set(src.mObjAt);
    mObjTg.Set(src.mObjTg);
    mObjCo.Set(src.mObjCo);
}

/* 80263A10-80263A1C 25E350 000C+00 0/0 1/1 0/0 .text            ct__8cCcD_ObjFv */
void cCcD_Obj::ct() {
    mFlags = 0;
}

/* 80263A1C-80263A48 25E35C 002C+00 0/0 1/1 0/0 .text            Set__8cCcD_ObjFRC11cCcD_SrcObj */
void cCcD_Obj::Set(cCcD_SrcObj const& src) {
    mFlags = src.mFlags;
    cCcD_ObjHitInf::Set(src.mSrcObjHitInf);
}

/* 80263A48-80263A64 25E388 001C+00 0/0 9/9 87/87 .text            GetAc__8cCcD_ObjFv */
fopAc_ac_c* cCcD_Obj::GetAc() {
    if (mStts == NULL) {
        return NULL;
    } else {
        return mStts->GetAc();
    }
}

/* 80263A64-80263A88 25E3A4 0024+00 3/0 2/0 0/0 .text
 * getShapeAccess__14cCcD_ShapeAttrCFPQ214cCcD_ShapeAttr5Shape  */
void cCcD_ShapeAttr::getShapeAccess(cCcD_ShapeAttr::Shape* p_shape) const {
    p_shape->_0 = 2;
    p_shape->_14 = 0.0f;
    p_shape->_10 = 0.0f;
    p_shape->_C = 0.0f;
    p_shape->_8 = 0.0f;
    p_shape->_4 = 0.0f;
}

/* 80263A88-80263B58 25E3C8 00D0+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_TriAttrCFRC12cCcD_CpsAttrP4cXyz            */
bool cCcD_TriAttr::CrossAtTg(cCcD_CpsAttr const& cpsAttr, cXyz* p_xyz) const {
    if (cM3dGTri::Cross(cpsAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263B58-80263B90 25E498 0038+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_TriAttrCFRC12cCcD_CylAttrP4cXyz            */
bool cCcD_TriAttr::CrossAtTg(cCcD_CylAttr const& cylAttr, cXyz* p_xyz) const {
    if (cM3dGTri::Cross(cylAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263B90-80263BCC 25E4D0 003C+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_TriAttrCFRC12cCcD_SphAttrP4cXyz            */
bool cCcD_TriAttr::CrossAtTg(cCcD_SphAttr const& sphAttr, cXyz* p_xyz) const {
    if (cM3dGTri::Cross(sphAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263BCC-80263C04 25E50C 0038+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_TriAttrCFRC12cCcD_TriAttrP4cXyz            */
bool cCcD_TriAttr::CrossAtTg(cCcD_TriAttr const& other, cXyz* p_xyz) const {
    if (cM3dGTri::Cross(other, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263C04-80263C9C 25E544 0098+00 1/0 1/0 0/0 .text            CalcAabBox__12cCcD_TriAttrFv */
void cCcD_TriAttr::CalcAabBox() {
    mAab.ClearForMinMax();
    mAab.SetMinMax(mA);
    mAab.SetMinMax(mB);
    mAab.SetMinMax(mC);
}

/* 80263C9C-80263D38 25E5DC 009C+00 1/0 1/0 0/0 .text GetNVec__12cCcD_TriAttrCFRC4cXyzP4cXyz */
bool cCcD_TriAttr::GetNVec(cXyz const& param_0, cXyz* pOut) const {
    if (getPlaneFunc(&param_0) >= 0.0f) {
        *pOut = mNormal;
    } else {
        *pOut = mNormal;
        PSVECScale(pOut, pOut, -1.0f);
    }
    return true;
}

/* 80263D38-80263D7C 25E678 0044+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CpsAttrCFRC12cCcD_CpsAttrP4cXyz            */
bool cCcD_CpsAttr::CrossAtTg(cCcD_CpsAttr const& other, cXyz* p_xyz) const {
    if (cM3dGCps::Cross(&other, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263D7C-80263DC0 25E6BC 0044+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CpsAttrCFRC12cCcD_CylAttrP4cXyz            */
bool cCcD_CpsAttr::CrossAtTg(cCcD_CylAttr const& cylAttr, cXyz* p_xyz) const {
    if (cM3dGCps::Cross(&cylAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263DC0-80263E04 25E700 0044+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CpsAttrCFRC12cCcD_SphAttrP4cXyz            */
bool cCcD_CpsAttr::CrossAtTg(cCcD_SphAttr const& sphAttr, cXyz* p_xyz) const {
    if (cM3dGCps::Cross(&sphAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263E04-80263ED4 25E744 00D0+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CpsAttrCFRC12cCcD_TriAttrP4cXyz            */
bool cCcD_CpsAttr::CrossAtTg(cCcD_TriAttr const& triAttr, cXyz* p_xyz) const {
    if (triAttr.cM3dGTri::Cross(*this, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263ED4-80263F24 25E814 0050+00 1/0 1/0 0/0 .text CrossCo__12cCcD_CpsAttrCFRC12cCcD_CpsAttrPf
 */
bool cCcD_CpsAttr::CrossCo(cCcD_CpsAttr const& other, f32* param_1) const {
    *param_1 = 0.0f;
    cXyz xyz;
    if (cM3dGCps::Cross(&other, &xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263F24-80263F74 25E864 0050+00 1/0 1/0 0/0 .text CrossCo__12cCcD_CpsAttrCFRC12cCcD_CylAttrPf
 */
bool cCcD_CpsAttr::CrossCo(cCcD_CylAttr const& cylAttr, f32* param_1) const {
    *param_1 = 0.0f;
    cXyz xyz;
    if (cM3dGCps::Cross(&cylAttr, &xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263F74-80263FC4 25E8B4 0050+00 1/0 1/0 0/0 .text CrossCo__12cCcD_CpsAttrCFRC12cCcD_SphAttrPf
 */
bool cCcD_CpsAttr::CrossCo(cCcD_SphAttr const& sphAttr, f32* param_1) const {
    *param_1 = 0.0f;
    cXyz xyz;
    if (cM3dGCps::Cross(&sphAttr, &xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80263FC4-80264014 25E904 0050+00 1/0 2/1 0/0 .text            CalcAabBox__12cCcD_CpsAttrFv */
void cCcD_CpsAttr::CalcAabBox() {
    mAab.ClearForMinMax();
    mAab.SetMinMax(mStart);
    mAab.SetMinMax(mEnd);
    mAab.PlusR(mRadius);
}

/* 80264014-8026417C 25E954 0168+00 1/0 1/0 0/0 .text GetNVec__12cCcD_CpsAttrCFRC4cXyzP4cXyz */
bool cCcD_CpsAttr::GetNVec(cXyz const& param_0, cXyz* param_1) const {
    Vec diff;
    const cXyz& endP = GetEndP();
    PSVECSubtract(&endP, &mStart, &diff);

    f32 diffLen = PSVECDotProduct(&diff, &diff);
    if (cM3d_IsZero(diffLen)) {
        return false;
    } else {
        Vec vec1, vec2;
        PSVECSubtract(&param_0, &mStart, &vec1);
        f32 vec1Len = PSVECDotProduct(&vec1, &diff) / diffLen;
        if (vec1Len < 0.0f) {
            vec2 = mStart;
        } else {
            if (vec1Len > 1.0f) {
                vec2 = endP;
            } else {
                PSVECScale(&diff, &diff, vec1Len);
                PSVECAdd(&diff, &mStart, &vec2);
            }
        }

        PSVECSubtract(&param_0, &vec2, param_1);
        if (cM3d_IsZero(PSVECMag(param_1))) {
            param_1->set(0.0f, 0.0f, 0.0f);
            return false;
        } else {
            PSVECNormalize(param_1, param_1);
            return true;
        }
    }
}

/* 8026417C-802641C8 25EABC 004C+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CylAttrCFRC12cCcD_CpsAttrP4cXyz            */
bool cCcD_CylAttr::CrossAtTg(cCcD_CpsAttr const& cpsAttr, cXyz* p_xyz) const {
    if (cM3dGCyl::Cross(&cpsAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 802641C8-8026420C 25EB08 0044+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CylAttrCFRC12cCcD_CylAttrP4cXyz            */
bool cCcD_CylAttr::CrossAtTg(cCcD_CylAttr const& other, cXyz* p_xyz) const {
    if (cross(&other, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 8026420C-80264250 25EB4C 0044+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CylAttrCFRC12cCcD_SphAttrP4cXyz            */
bool cCcD_CylAttr::CrossAtTg(cCcD_SphAttr const& sphAttr, cXyz* p_xyz) const {
    if (cross(&sphAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80264250-80264288 25EB90 0038+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_CylAttrCFRC12cCcD_TriAttrP4cXyz            */
bool cCcD_CylAttr::CrossAtTg(cCcD_TriAttr const& triAttr, cXyz* p_xyz) const {
    if (cM3dGCyl::Cross(triAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80264288-802642CC 25EBC8 0044+00 1/0 1/0 0/0 .text CrossCo__12cCcD_CylAttrCFRC12cCcD_CylAttrPf
 */
bool cCcD_CylAttr::CrossCo(cCcD_CylAttr const& other, f32* f) const {
    if (cM3dGCyl::Cross(&other, f)) {
        return true;
    } else {
        return false;
    }
}

/* 802642CC-80264310 25EC0C 0044+00 1/0 1/0 0/0 .text CrossCo__12cCcD_CylAttrCFRC12cCcD_SphAttrPf
 */
bool cCcD_CylAttr::CrossCo(cCcD_SphAttr const& sphAttr, f32* f) const {
    if (cM3dGCyl::Cross(&sphAttr, f)) {
        return true;
    } else {
        return false;
    }
}

/* 80264310-80264368 25EC50 0058+00 1/0 1/0 0/0 .text CrossCo__12cCcD_CylAttrCFRC12cCcD_CpsAttrPf
 */
bool cCcD_CylAttr::CrossCo(cCcD_CpsAttr const& cpsAttr, f32* f) const {
    *f = 0.0f;
    cXyz xyz;
    if (cM3dGCyl::Cross(&cpsAttr, &xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80264368-802643D0 25ECA8 0068+00 1/0 1/0 0/0 .text            CalcAabBox__12cCcD_CylAttrFv */
void cCcD_CylAttr::CalcAabBox() {
    cXyz min;
    cXyz max;
    min.x = mCenter.x - mRadius;
    min.y = mCenter.y;
    min.z = mCenter.z - mRadius;
    max.x = mCenter.x + mRadius;
    max.y = mCenter.y + mHeight;
    max.z = mCenter.z + mRadius;
    mAab.Set(&min, &max);
}

/* 802643D0-802644B8 25ED10 00E8+00 1/0 1/0 0/0 .text GetNVec__12cCcD_CylAttrCFRC4cXyzP4cXyz */
bool cCcD_CylAttr::GetNVec(cXyz const& param_0, cXyz* param_1) const {
    Vec vec;
    if (mCenter.y > param_0.y) {
        vec = mCenter;
    } else {
        if (mCenter.y + mHeight < param_0.y) {
            vec.x = mCenter.x;
            vec.y = mCenter.y;
            vec.z = mCenter.z;
            vec.y = mCenter.y + mHeight;
        } else {
            vec = mCenter;
            vec.y = param_0.y;
        }
    }

    PSVECSubtract(&param_0, &vec, param_1);
    if (cM3d_IsZero(PSVECMag(param_1))) {
        param_1->set(0.0f, 0.0f, 0.0f);
        return false;
    } else {
        PSVECNormalize(param_1, param_1);
        return true;
    }
    return false;
}

/* 802644B8-802644EC 25EDF8 0034+00 1/0 1/0 0/0 .text
 * getShapeAccess__12cCcD_CylAttrCFPQ214cCcD_ShapeAttr5Shape    */
void cCcD_CylAttr::getShapeAccess(cCcD_ShapeAttr::Shape* p_shape) const {
    p_shape->_0 = 1;
    p_shape->_4 = mCenter.x;
    p_shape->_8 = mCenter.y;
    p_shape->_C = mCenter.z;
    p_shape->_10 = mRadius;
    p_shape->_14 = mHeight;
}

inline bool inlineCross(cM3dGSph const& sph, cM3dGCps const* p_cps, cXyz* p_xyz) {
    return cM3d_Cross_CpsSph(*p_cps, sph, p_xyz);
}

/* 802644EC-80264538 25EE2C 004C+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_SphAttrCFRC12cCcD_CpsAttrP4cXyz            */
bool cCcD_SphAttr::CrossAtTg(cCcD_CpsAttr const& cpsAttr, cXyz* p_xyz) const {
    if (inlineCross(*this, &cpsAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 80264538-8026457C 25EE78 0044+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_SphAttrCFRC12cCcD_CylAttrP4cXyz            */
bool cCcD_SphAttr::CrossAtTg(cCcD_CylAttr const& cylAttr, cXyz* p_xyz) const {
    if (cross(&cylAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 8026457C-802645C0 25EEBC 0044+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_SphAttrCFRC12cCcD_SphAttrP4cXyz            */
bool cCcD_SphAttr::CrossAtTg(cCcD_SphAttr const& sphAttr, cXyz* p_xyz) const {
    if (cross(&sphAttr, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 802645C0-802645F8 25EF00 0038+00 1/0 1/0 0/0 .text
 * CrossAtTg__12cCcD_SphAttrCFRC12cCcD_TriAttrP4cXyz            */
bool cCcD_SphAttr::CrossAtTg(cCcD_TriAttr const& triAttr, cXyz* p_xyz) const {
    if (triAttr.cM3dGTri::Cross(*this, p_xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 802645F8-80264644 25EF38 004C+00 1/0 1/0 0/0 .text CrossCo__12cCcD_SphAttrCFRC12cCcD_CylAttrPf
 */
bool cCcD_SphAttr::CrossCo(cCcD_CylAttr const& cylAttr, f32* f) const {
    if (cM3dGSph::Cross(&cylAttr, f)) {
        return true;
    } else {
        return false;
    }
}

/* 80264644-80264688 25EF84 0044+00 1/0 1/0 0/0 .text CrossCo__12cCcD_SphAttrCFRC12cCcD_SphAttrPf
 */
bool cCcD_SphAttr::CrossCo(cCcD_SphAttr const& sphAttr, f32* f) const {
    if (cM3dGSph::Cross(&sphAttr, f)) {
        return true;
    } else {
        return false;
    }
}

/* 80264688-802646E0 25EFC8 0058+00 1/0 1/0 0/0 .text CrossCo__12cCcD_SphAttrCFRC12cCcD_CpsAttrPf
 */
bool cCcD_SphAttr::CrossCo(cCcD_CpsAttr const& cpsAttr, f32* f) const {
    *f = 0.0f;
    cXyz xyz;
    if (cM3dGSph::Cross(&cpsAttr, &xyz)) {
        return true;
    } else {
        return false;
    }
}

/* 802646E0-8026476C 25F020 008C+00 1/0 2/1 0/0 .text            CalcAabBox__12cCcD_SphAttrFv */
void cCcD_SphAttr::CalcAabBox() {
    cXyz min;
    cXyz max;

    min = max = mCenter;

    // min -= mRadius; doesn't work :(
    min.x -= mRadius;
    min.y -= mRadius;
    min.z -= mRadius;

    max.x += mRadius;
    max.y += mRadius;
    max.z += mRadius;

    mAab.Set(&min, &max);
}

/* 8026476C-80264808 25F0AC 009C+00 1/0 1/0 0/0 .text GetNVec__12cCcD_SphAttrCFRC4cXyzP4cXyz */
bool cCcD_SphAttr::GetNVec(cXyz const& param_0, cXyz* param_1) const {
    param_1->x = param_0.x - mCenter.x;
    param_1->y = param_0.y - mCenter.y;
    param_1->z = param_0.z - mCenter.z;

    if (cM3d_IsZero(PSVECMag(param_1))) {
        param_1->x = 0.0f;
        param_1->y = 0.0f;
        param_1->z = 0.0f;
        return false;
    } else {
        PSVECNormalize(param_1, param_1);
        return true;
    }
}

/* 80264808-8026483C 25F148 0034+00 1/0 1/0 0/0 .text
 * getShapeAccess__12cCcD_SphAttrCFPQ214cCcD_ShapeAttr5Shape    */
void cCcD_SphAttr::getShapeAccess(cCcD_ShapeAttr::Shape* p_shape) const {
    p_shape->_0 = 0;
    p_shape->_4 = mCenter.x;
    p_shape->_8 = mCenter.y;
    p_shape->_C = mCenter.z;
    p_shape->_10 = mRadius;
    p_shape->_14 = 0.0f;
}

/* 8026483C-8026484C 25F17C 0010+00 0/0 1/1 0/0 .text            SetHit__10cCcD_ObjAtFP8cCcD_Obj */
void cCcD_ObjAt::SetHit(cCcD_Obj* pObj) {
    mRPrm = 1;
    mHitObj = pObj;
}

/* 8026484C-80264868 25F18C 001C+00 1/1 0/0 0/0 .text            Set__10cCcD_ObjAtFRC13cCcD_SrcObjAt
 */
void cCcD_ObjAt::Set(cCcD_SrcObjAt const& src) {
    cCcD_ObjCommonBase::Set(src.mBase);
    mType = src.mType;
    mAtp = src.mAtp;
}

/* 80264868-80264880 25F1A8 0018+00 0/0 2/2 0/0 .text            ClrHit__10cCcD_ObjAtFv */
void cCcD_ObjAt::ClrHit() {
    mRPrm &= ~1;
    mHitObj = NULL;
}

/* 80264880-80264894 25F1C0 0014+00 1/1 0/0 0/0 .text            Set__10cCcD_ObjTgFRC13cCcD_SrcObjTg
 */
void cCcD_ObjTg::Set(cCcD_SrcObjTg const& src) {
    cCcD_ObjCommonBase::Set(src.mBase);
    mType = src.mType;
}

/* 80264894-802648B0 25F1D4 001C+00 0/0 0/0 2/2 .text            SetGrp__10cCcD_ObjTgFUl */
void cCcD_ObjTg::SetGrp(u32 grp) {
    mSPrm &= ~0x1E;
    mSPrm |= grp;
}

/* 802648B0-802648C8 25F1F0 0018+00 0/0 2/2 0/0 .text            ClrHit__10cCcD_ObjTgFv */
void cCcD_ObjTg::ClrHit() {
    mRPrm &= ~1;
    mHitObj = NULL;
}

/* 802648C8-802648D8 25F208 0010+00 0/0 1/1 0/0 .text            SetHit__10cCcD_ObjTgFP8cCcD_Obj */
void cCcD_ObjTg::SetHit(cCcD_Obj* pObj) {
    mRPrm = 1;
    mHitObj = pObj;
}

/* 802648D8-802648E8 25F218 0010+00 0/0 1/1 0/0 .text            SetHit__10cCcD_ObjCoFP8cCcD_Obj */
void cCcD_ObjCo::SetHit(cCcD_Obj* pObj) {
    mRPrm = 1;
    mHitObj = pObj;
}

/* 802648E8-80264900 25F228 0018+00 0/0 2/2 0/0 .text            ClrHit__10cCcD_ObjCoFv */
void cCcD_ObjCo::ClrHit() {
    mRPrm &= ~1;
    mHitObj = NULL;
}

/* 80264900-8026491C 25F240 001C+00 0/0 1/1 1/1 .text            SetIGrp__10cCcD_ObjCoFUl */
void cCcD_ObjCo::SetIGrp(u32 grp) {
    mSPrm &= ~0xE;
    mSPrm |= grp;
}

/* 8026491C-80264938 25F25C 001C+00 0/0 1/1 7/7 .text            SetVsGrp__10cCcD_ObjCoFUl */
void cCcD_ObjCo::SetVsGrp(u32 grp) {
    mSPrm &= ~0x70;
    mSPrm |= grp;
}
