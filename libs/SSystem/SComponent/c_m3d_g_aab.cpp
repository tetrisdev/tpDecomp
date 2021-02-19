/* c_m3d_g_aab.cpp autogenerated by split.py v0.3 at 2021-01-01 14:25:53.398196 */

#include "SComponent/c_m3d_g_aab.h"

// additional symbols needed for c_m3d_g_aab.cpp
// autogenerated by split.py v0.3 at 2021-01-01 14:25:53.390342

extern f32 lbl_804551D4;
extern f32 lbl_804551D0;
extern f32 lbl_804551D8;

// Set__8cM3dGAabFPC4cXyzPC4cXyz
void cM3dGAab::Set(const cXyz* pMin, const cXyz* pMax) {
    mMin = *pMin;
    mMax = *pMax;
}

// CrossY__8cM3dGAabCFPC4cXyz
bool cM3dGAab::CrossY(const cXyz* pOther) const {
    if (mMin.x > pOther->x || mMax.x < pOther->x || mMin.z > pOther->z || mMax.z < pOther->z) {
        return false;
    } else {
        return true;
    }
}

// UnderPlaneYUnder__8cM3dGAabCFf
bool cM3dGAab::UnderPlaneYUnder(f32 pY) const {
    return mMin.y < pY;
}

// TopPlaneYUnder__8cM3dGAabCFf
bool cM3dGAab::TopPlaneYUnder(f32 pY) const {
    return mMax.y < pY;
}

// ClearForMinMax__8cM3dGAabFv
void cM3dGAab::ClearForMinMax(void) {
    mMin.setAll(lbl_804551D0);
    mMax.setAll(lbl_804551D4);
}

// SetMinMax__8cM3dGAabFRC4cXyz
void cM3dGAab::SetMinMax(const cXyz& pMinMax) {
    this->SetMin(pMinMax);
    this->SetMax(pMinMax);
}

// SetMinMax__8cM3dGAabFRC8cM3dGAab
void cM3dGAab::SetMinMax(const cM3dGAab& pOther) {
    this->SetMinMax(pOther.mMin);
    this->SetMinMax(pOther.mMax);
}

// SetMin__8cM3dGAabFRC4cXyz
void cM3dGAab::SetMin(const cXyz& pMin) {
    mMin.setMin(pMin);
}

// SetMax__8cM3dGAabFRC4cXyz
void cM3dGAab::SetMax(const cXyz& pMax) {
    mMax.setMax(pMax);
}

// CalcCenter__8cM3dGAabCFP4cXyz
void cM3dGAab::CalcCenter(cXyz* pOut) const {
    PSVECAdd(&mMin, &mMax, pOut);
    PSVECScale(pOut, pOut, lbl_804551D8);
}

// PlusR__8cM3dGAabFf
void cM3dGAab::PlusR(f32 pR) {
    mMin -= pR;
    mMax += pR;
}
