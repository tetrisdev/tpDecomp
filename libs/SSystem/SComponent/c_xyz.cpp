/* c_xyz.cpp autogenerated by split.py v0.1 at 2020-12-27 17:32:37.883661 */

#include "SComponent/c_xyz.h"

extern "C" {
void __ml__4cXyzCFf(void);
void cM_atan2s__Fff(void);
void cXyz_NS_dtor(void);
void normZP__4cXyzCFv(void);
void func_80361C24(void);
}

// __pl__4cXyzCFRC3Vec
cXyz cXyz::operator+(const Vec& vec) const {
    Vec ret;
    PSVECAdd(this, &vec, &ret);
    return cXyz(ret);
}

// __mi__4cXyzCFRC3Vec
cXyz cXyz::operator-(const Vec& vec) const {
    Vec ret;
    PSVECSubtract(this, &vec, &ret);
    return cXyz(ret);
}

// __ml__4cXyzCFf
cXyz cXyz::operator*(float scale) const {
    Vec ret;
    PSVECScale(this, &ret, scale);
    return cXyz(ret);
}

inline void vecMul(const Vec* src1, const Vec* src2, Vec* dst) {
    dst->x = src1->x * src2->x;
    dst->y = src1->y * src2->y;
    dst->z = src1->z * src2->z;
}

// __ml__4cXyzCFRC3Vec
cXyz cXyz::operator*(const Vec& vec) const {
    cXyz ret;
    vecMul(this, &vec, &ret);
    return cXyz(ret);
}

// __dv__4cXyzCFf
cXyz cXyz::operator/(float scale) const {
    Vec ret;
    PSVECScale(this, &ret, /* 1.0 */ lbl_80455070 / scale);
    return cXyz(ret);
}

// getCrossProduct__4cXyzCFRC3Vec
cXyz cXyz::getCrossProduct(const Vec& vec) const {
    Vec ret;
    PSVECCrossProduct(this, &vec, &ret);
    return cXyz(ret);
}

// outprod__4cXyzCFRC3Vec
cXyz cXyz::outprod(const Vec& vec) const {
    return this->getCrossProduct(vec);
}

// norm__4cXyzCFv
cXyz cXyz::norm(void) const {
    Vec ret;
    PSVECNormalize(this, &ret);
    return cXyz(ret);
}

// normZP__4cXyzCFv
cXyz cXyz::normZP(void) const {
    Vec vec;
    if (this->checkEpsilon()) {
        PSVECNormalize(this, &vec);
    } else {
        vec = lbl_80430CF4;
    }
    return cXyz(vec);
}

extern cXyz lbl_8039A868;

// normZC__4cXyzCFv
#ifdef NON_MATCHING
cXyz cXyz::normZC(void) const {
    Vec vec;
    if (this->checkEpsilon()) {
        PSVECNormalize(this, &vec);
    } else {
        cXyz local_40 = (*this * lbl_8045507C * lbl_80455078).normZP();
        vec.x = local_40.x;
        vec.y = local_40.y;
        vec.z = local_40.z;
        // return tmp.checkEpsilon() ? tmp : cXyz::xonly();
        if (!local_40.checkEpsilon()) {
            cXyz ret;
            // ret.baseZ();
            float v = lbl_80455080;
            ret.x = v;
            ret.y = v;
            v = lbl_80455070;
            ret.z = v;
            // should do a struct copy with word and not float loads
            vec = lbl_8039A868;
            vec = ret;
        }
    }
    return cXyz(vec);
}
#else
asm cXyz cXyz::normZC(void) const {
    nofralloc
#include "SComponent/c_xyz/asm/func_80266DC4.s"
}
#endif

// normalize__4cXyzFv
cXyz cXyz::normalize(void) {
    PSVECNormalize(this, this);
    return *this;
}

// normalizeZP__4cXyzFv
cXyz cXyz::normalizeZP(void) {
    if (this->checkEpsilon()) {
        PSVECNormalize(this, this);
    } else {
        *this = lbl_80430CF4;
    }
    return *this;
}

// normalizeRS__4cXyzFv
bool cXyz::normalizeRS(void) {
    if ((PSVECSquareMag(this) < lbl_80455074)) {
        return false;
    } else {
        PSVECNormalize(this, this);
        return true;
    }
}

// __eq__4cXyzCFRC3Vec
bool cXyz::operator==(const Vec& vec) const {
    return this->x == vec.x && this->y == vec.y && this->z == vec.z;
}

// __ne__4cXyzCFRC3Vec
bool cXyz::operator!=(const Vec& vec) const {
    return !(this->x == vec.x && this->y == vec.y && this->z == vec.z);
}

// isZero__4cXyzCFv
bool cXyz::isZero(void) const {
    // return (float)fabsf(this->x) < lbl_80455084 * lbl_80450AEC &&
    //     (float)fabsf(this->y) < lbl_80455084 * lbl_80450AEC &&
    //     (float)fabsf(this->z) < lbl_80455084 * lbl_80450AEC;
    return (float)fabsf(this->x) <
               /* 32 */ lbl_80455084 *
                   /* MSL_C.PPCEABI.bare.H::__float_epsilon */ *(float*)0x80450AEC &&
           (float)fabsf(this->y) < lbl_80455084 * *(float*)0x80450AEC &&
           (float)fabsf(this->z) < lbl_80455084 * *(float*)0x80450AEC;
}

// atan2sX_Z__4cXyzCFv
s16 cXyz::atan2sX_Z(void) const {
    return cM_atan2s(this->x, this->z);
}

// atan2sY_XZ__4cXyzCFv
asm s16 cXyz::atan2sY_XZ(void) const {
    nofralloc
#include "SComponent/c_xyz/asm/func_80267150.s"
}

extern "C" {

// __sinit_c_xyz_cpp
asm void __sinit_c_xyz_cpp(void) {
    nofralloc
#include "SComponent/c_xyz/asm/func_80267290.s"
}
};