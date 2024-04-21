//
// Generated By: dol2asm
// Translation Unit: J3DJointFactory
//

#include "JSystem/J3DGraphLoader/J3DJointFactory.h"
#include "JSystem/J3DGraphLoader/J3DModelLoader.h"
#include "JSystem/J3DGraphAnimator/J3DJoint.h"
#include "JSystem/JSupport/JSupport.h"

//
// Types:
//

extern "C" u16* func_8033677C(const void*, const void*);  // JSUConvertOffsetToPtr<u16>
extern "C" void* __nw__FUl();
extern "C" void __ct__8J3DJointFv();

/* 80337178-803371D0 331AB8 0058+00 0/0 1/1 0/0 .text __ct__15J3DJointFactoryFRC13J3DJointBlock */
J3DJointFactory::J3DJointFactory(J3DJointBlock const& block) {
    mJointInitData = JSUConvertOffsetToPtr<J3DJointInitData>(&block, block.mpJointInitData);

    // Fix when we have our ODR working.
    // mIndexTable = JSUConvertOffsetToPtr<u16>(&block, block.mpIndexTable);
    mIndexTable = func_8033677C(&block, block.mpIndexTable);
}

/* 803371D0-80337338 331B10 0168+00 0/0 1/1 0/0 .text            create__15J3DJointFactoryFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DJoint* J3DJointFactory::create(int param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DJointFactory/create__15J3DJointFactoryFi.s"
}
#pragma pop

/* J3DJoint* J3DJointFactory::create(int no) {
    J3DJoint* joint = new J3DJoint();
    joint->mJntNo = no;
    joint->mKind = getKind(no);
    joint->mScaleCompensate = getScaleCompensate(no);
    joint->mTransformInfo = getTransformInfo(no);
    joint->mBoundingSphereRadius = getRadius(no);
    joint->mMin = getMin(no);
    joint->mMax = getMax(no);
    joint->mMtxCalc = NULL;

    if (joint->mScaleCompensate == 0xFF)
        joint->mScaleCompensate = 0;

    return joint;
} */