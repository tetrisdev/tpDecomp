//
// Generated By: dol2asm
// Translation Unit: J3DUClipper
//

#include "JSystem/J3DU/J3DUClipper.h"
#include "MSL_C/math.h"
#include "dolphin/types.h"

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* 80273778-8027378C 26E0B8 0014+00 0/0 1/1 0/0 .text            init__11J3DUClipperFv */
void J3DUClipper::init() {
    mNear = 1.0f;
    mFar = 100000.0f;
}

/* ############################################################################################## */
/* 8027378C-802738FC 26E0CC 0170+00 0/0 3/3 4/4 .text            calcViewFrustum__11J3DUClipperFv */
void J3DUClipper::calcViewFrustum() {
    static const f32 unused[3] = {0.0f};
    f32 f0 = tan(0.5f * mFovY * 0.01745329238474369f);
    f32 f4 = mNear * f0;
    f32 f5 = mAspect * f4;
    Vec tmp1 = {-f5, -f4, -mNear};
    Vec tmp2 = {-f5, f4, -mNear};
    Vec tmp3 = {f5, f4, -mNear};
    Vec tmp4 = {f5, -f4, -mNear};
    PSVECCrossProduct(&tmp2, &tmp1, &_04);
    PSVECCrossProduct(&tmp3, &tmp2, &_10);
    PSVECCrossProduct(&tmp4, &tmp3, &_1C);
    PSVECCrossProduct(&tmp1, &tmp4, &_28);
    PSVECNormalize(&_04, &_04);
    PSVECNormalize(&_10, &_10);
    PSVECNormalize(&_1C, &_1C);
    PSVECNormalize(&_28, &_28);
}

/* 802738FC-80273A44 26E23C 0148+00 0/0 3/3 2/2 .text            clip__11J3DUClipperCFPA4_Cf3Vecf */
u32 J3DUClipper::clip(f32 const (*param_0)[4], Vec param_1, f32 param_2) const {
    Vec vec1;
    PSMTXMultVec(param_0, &param_1, &vec1);
    if (-vec1.z < mNear - param_2) {
        return 1;
    }

    if (-vec1.z > mFar + param_2) {
        return 1;
    }

    if (vec1.x * _04.x + vec1.y * _04.y + vec1.z * _04.z > param_2) {
        return 1;
    }

    if (vec1.x * _10.x + vec1.y * _10.y + vec1.z * _10.z > param_2) {
        return 1;
    }

    if (vec1.x * _1C.x + vec1.y * _1C.y + vec1.z * _1C.z > param_2) {
        return 1;
    }
    
    if (vec1.x * _28.x + vec1.y * _28.y + vec1.z * _28.z > param_2) {
        return 1;
    }

    return 0;
}

/* ############################################################################################## */

/* 80273A44-80273E08 26E384 03C4+00 0/0 3/3 2/2 .text clip__11J3DUClipperCFPA4_CfP3VecP3Vec */
u32 J3DUClipper::clip(f32 const (*param_1)[4], Vec* param_2, Vec* param_3) const {
    s32 local_98[6];
    for (int i = 0; i < 6; i++) {
        local_98[i] = 0;
    }
    Vec local_80[8];
    local_80[0].x = param_3->x;
    local_80[0].y = param_3->y;
    local_80[0].z = param_2->z;
    local_80[1].x = param_3->x;
    local_80[1].y = param_3->y;
    local_80[1].z = param_3->z;
    local_80[2].x = param_2->x;
    local_80[2].y = param_3->y;
    local_80[2].z = param_3->z;
    local_80[3].x = param_2->x;
    local_80[3].y = param_3->y;
    local_80[3].z = param_2->z;
    local_80[4].x = param_3->x;
    local_80[4].y = param_2->y;
    local_80[4].z = param_2->z;
    local_80[5].x = param_3->x;
    local_80[5].y = param_2->y;
    local_80[5].z = param_3->z;
    local_80[6].x = param_2->x;
    local_80[6].y = param_2->y;
    local_80[6].z = param_3->z;
    local_80[7].x = param_2->x;
    local_80[7].y = param_2->y;
    local_80[7].z = param_2->z;

    for (u32 i = 0; i < 8; i++) {
        Vec vec1;
        PSMTXMultVec(param_1, local_80 + i, &vec1);
        s32 r4 = 0;
        if (-vec1.z < mNear) {
            local_98[4]++;
            r4 = 1;
        }

        if (-vec1.z > mFar) {
            local_98[5]++;
            r4++;
        }

        if (vec1.x * _04.x + vec1.y * _04.y + vec1.z * _04.z > 0.0f) {
            local_98[0]++;
            r4++;
        }

        if (vec1.x * _10.x + vec1.y * _10.y + vec1.z * _10.z > 0.0f) {
            local_98[1]++;
            r4++;
        }

        if (vec1.x * _1C.x + vec1.y * _1C.y + vec1.z * _1C.z > 0.0f) {
            local_98[2]++;
            r4++;
        }

        if (vec1.x * _28.x + vec1.y * _28.y + vec1.z * _28.z > 0.0f) {
            local_98[3]++;
            r4++;
        }

        if (r4 == 0) {
            return 0;
        }
    }

    if (local_98[0] == 8) {
        return 1;
    }
    if (local_98[2] == 8) {
        return 1;
    }
    if (local_98[1] == 8) {
        return 1;
    }
    if (local_98[3] == 8) {
        return 1;
    }
    if (local_98[4] == 8) {
        return 1;
    }
    if (local_98[5] == 8) {
        return 1;
    }
    return 0;
}

/* ############################################################################################## */
/* 8039A984-8039A99D 026FE4 0019+00 0/0 0/0 0/0 .rodata          None */
static char const* const stringBase_8039A984 = " J3DUClipper::mFovy = %f";

/* 8039A99D-8039A9B8 026FFD 001B+00 0/0 0/0 0/0 .rodata          None */
static char const* const stringBase_8039A99D = " J3DUClipper::mAspect = %f";

/* 8039A9B8-8039A9D1 027018 0019+00 0/0 0/0 0/0 .rodata          None */
static char const* const stringBase_8039A9B8 = " J3DUClipper::mNear = %f";

/* 8039A9D1-8039A9F0 027031 0018+07 0/0 0/0 0/0 .rodata          None */
static char const* const stringBase_8039A9D1 = " J3DUClipper::mFar = %f";
/* @stringBase0 padding */
static char const* const pad_8039A9E9 = "\0\0\0\0\0\0";

/* 8039A984-8039A984 026FE4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
