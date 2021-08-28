//
// Generated By: dol2asm
// Translation Unit: JSUMemoryStream
//

#include "JSystem/JSupport/JSUMemoryStream.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "msl_c/string.h"

//
// Declarations:
//

/* 802DC520-802DC534 2D6E60 0014+00 0/0 3/3 0/0 .text setBuffer__20JSUMemoryInputStreamFPCvl */
void JSUMemoryInputStream::setBuffer(void const* pBuffer, s32 length) {
    mBuffer = pBuffer;
    mLength = length;
    mPosition = 0;
}

/* 802DC534-802DC5AC 2D6E74 0078+00 1/0 0/0 0/0 .text readData__20JSUMemoryInputStreamFPvl */
u32 JSUMemoryInputStream::readData(void* pData, s32 length) {
    if (mPosition + length > mLength) {
        length = mLength - mPosition;
    }
    if (length > 0) {
        memcpy(pData, (void*)((s32)mBuffer + mPosition), length);
        mPosition += length;
    }
    return length;
}

/* 802DC5AC-802DC628 2D6EEC 007C+00 1/0 0/0 0/0 .text
 * seekPos__20JSUMemoryInputStreamFl17JSUStreamSeekFrom         */
s32 JSUMemoryInputStream::seekPos(s32 pos, JSUStreamSeekFrom seekFrom) {
    s32 oldPos = mPosition;
    switch (seekFrom) {
    case JSUStreamSeekFrom_SET:
        mPosition = pos;
        break;
    case JSUStreamSeekFrom_END:
        mPosition = mLength - pos;
        break;
    case JSUStreamSeekFrom_CUR:
        mPosition += pos;
        break;
    }
    if (mPosition < 0) {
        mPosition = 0;
    }
    if (mPosition > mLength) {
        mPosition = mLength;
    }
    return mPosition - oldPos;
}

/* 802DC628-802DC630 2D6F68 0008+00 1/0 0/0 0/0 .text getLength__20JSUMemoryInputStreamCFv */
s32 JSUMemoryInputStream::getLength() const {
    return mLength;
}

/* 802DC630-802DC638 2D6F70 0008+00 1/0 0/0 0/0 .text getPosition__20JSUMemoryInputStreamCFv */
s32 JSUMemoryInputStream::getPosition() const {
    return mPosition;
}
