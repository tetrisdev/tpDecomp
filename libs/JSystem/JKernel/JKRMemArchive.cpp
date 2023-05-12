//
// Generated By: dol2asm
// Translation Unit: JKRMemArchive
//

#include "JSystem/JKernel/JKRMemArchive.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTException.h"
#include "MSL_C/string.h"
#include "dol2asm.h"
#include "dolphin/os/OSCache.h"
#include "global.h"

//
// Forward References:
//

extern "C" void __ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection();
extern "C" void __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag();
extern "C" void __dt__13JKRMemArchiveFv();
extern "C" void open__13JKRMemArchiveFlQ210JKRArchive15EMountDirection();
extern "C" void open__13JKRMemArchiveFPvUl15JKRMemBreakFlag();
extern "C" void fetchResource__13JKRMemArchiveFPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void fetchResource__13JKRMemArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void removeResourceAll__13JKRMemArchiveFv();
extern "C" void removeResource__13JKRMemArchiveFPv();
extern "C" void fetchResource_subroutine__13JKRMemArchiveFPUcUlPUcUli();
extern "C" void getExpandedResSize__13JKRMemArchiveCFPCv();
extern "C" extern char const* const JKRMemArchive__stringBase0;

//
// External References:
//

extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void findFromRoot__7JKRHeapFPv();
extern "C" void __dl__FPv();
extern "C" void unmount__13JKRFileLoaderFv();
extern "C" void becomeCurrent__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlPCc();
extern "C" void detachResource__10JKRArchiveFPv();
extern "C" void getResSize__10JKRArchiveCFPCv();
extern "C" void countFile__10JKRArchiveCFPCc();
extern "C" void getFirstFile__10JKRArchiveCFPCc();
extern "C" void __ct__10JKRArchiveFlQ210JKRArchive10EMountMode();
extern "C" void __dt__10JKRArchiveFv();
extern "C" void findPtrResource__10JKRArchiveCFPCv();
extern "C" void setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl();
extern "C" void getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry();
extern "C" void
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl();
extern "C" void orderSync__9JKRDecompFPUcPUcUlUl();
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 sVolumeList__13JKRFileLoader[12];

//
// Declarations:
//

/* 802D69B8-802D6A6C 2D12F8 00B4+00 0/0 2/2 0/0 .text
 * __ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection       */
JKRMemArchive::JKRMemArchive(long entryNum, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(entryNum, MOUNT_MEM) {
    mIsMounted = false;
    mMountDirection = mountDirection;
    if (!open(entryNum, mMountDirection)) {
        return;
    }

    mVolumeType = 'RARC';
    mVolumeName = mStringTable + mNodes->name_offset;

    getVolumeList().prepend(&mFileLoaderLink);
    mIsMounted = true;
}

/* 802D6A6C-802D6B24 2D13AC 00B8+00 0/0 2/2 0/0 .text __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag
 */
JKRMemArchive::JKRMemArchive(void* buffer, u32 bufferSize, JKRMemBreakFlag param_3)
    : JKRArchive((s32)buffer, MOUNT_MEM) {
    mIsMounted = false;
    if (!open(buffer, bufferSize, param_3)) {
        return;
    }

    mVolumeType = 'RARC';
    mVolumeName = mStringTable + mNodes->name_offset;

    getVolumeList().prepend(&mFileLoaderLink);
    mIsMounted = true;
}

/* 802D6B24-802D6BCC 2D1464 00A8+00 1/0 0/0 0/0 .text            __dt__13JKRMemArchiveFv */
JKRMemArchive::~JKRMemArchive() {
    if (mIsMounted == true) {
        if (mIsOpen) {
            if (mArcHeader)
                JKRFreeToHeap(mHeap, mArcHeader);
        }

        getVolumeList().remove(&mFileLoaderLink);
        mIsMounted = false;
    }
}

/* 802D6BCC-802D6D30 2D150C 0164+00 1/1 0/0 0/0 .text
 * open__13JKRMemArchiveFlQ210JKRArchive15EMountDirection       */
// full match, except:
// mArchiveData = (u8*)(mArcHeader->file_data_offset + mArcHeader->header_length + (u32)mArcHeader);
// where the addition is swapped.
#ifdef NONMATCHING
bool JKRMemArchive::open(long entryNum, JKRArchive::EMountDirection mountDirection) {
    mArcHeader = NULL;
    mArcInfoBlock = NULL;
    mArchiveData = NULL;
    mNodes = NULL;
    mFiles = NULL;
    mStringTable = NULL;
    mIsOpen = false;
    mMountDirection = mountDirection;

    if (mMountDirection == JKRArchive::MOUNT_DIRECTION_HEAD) {
        u32 loadedSize;
        mArcHeader = (SArcHeader*)JKRDvdRipper::loadToMainRAM(
            entryNum, NULL, EXPAND_SWITCH_UNKNOWN1, 0, mHeap, JKRDvdRipper::ALLOC_DIRECTION_FORWARD,
            0, &mCompression, &loadedSize);
        if (mArcHeader) {
            DCInvalidateRange(mArcHeader, loadedSize);
        }
    } else {
        u32 loadedSize;
        mArcHeader = (SArcHeader*)JKRDvdRipper::loadToMainRAM(
            entryNum, NULL, EXPAND_SWITCH_UNKNOWN1, 0, mHeap,
            JKRDvdRipper::ALLOC_DIRECTION_BACKWARD, 0, &mCompression, &loadedSize);
        if (mArcHeader) {
            DCInvalidateRange(mArcHeader, loadedSize);
        }
    }

    if (!mArcHeader) {
        mMountMode = UNKNOWN_MOUNT_MODE;
    } else {
        ASSERT(mArcHeader->signature == 'RARC');
        mArcInfoBlock = (SArcDataInfo*)((u8*)mArcHeader + mArcHeader->header_length);
        mNodes = (SDIDirEntry*)((u8*)&mArcInfoBlock->num_nodes + mArcInfoBlock->node_offset);
        mFiles = (SDIFileEntry*)((u8*)&mArcInfoBlock->num_nodes + mArcInfoBlock->file_entry_offset);
        mStringTable = (char*)((u8*)&mArcInfoBlock->num_nodes + mArcInfoBlock->string_table_offset);

        mArchiveData =
            (u8*)(mArcHeader->file_data_offset + mArcHeader->header_length + (u32)mArcHeader);
        mIsOpen = true;
    }

    return mMountMode != UNKNOWN_MOUNT_MODE;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JKRMemArchive::open(s32 param_0, JKRArchive::EMountDirection param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRMemArchive/open__13JKRMemArchiveFlQ210JKRArchive15EMountDirection.s"
}
#pragma pop
#endif

/* 802D6D30-802D6DDC 2D1670 00AC+00 1/1 0/0 0/0 .text open__13JKRMemArchiveFPvUl15JKRMemBreakFlag
 */
// full match, except:
// mArchiveData = (u8*)(mArcHeader->file_data_offset + mArcHeader->header_length + (u32)mArcHeader);
// where the addition is swapped.
#ifdef NONMATCHING
bool JKRMemArchive::open(void* buffer, u32 bufferSize, JKRMemBreakFlag flag) {
    mArcHeader = (SArcHeader*)buffer;

    ASSERT(mArcHeader->signature == 'RARC');
    mArcInfoBlock = (SArcDataInfo*)((u8*)mArcHeader + mArcHeader->header_length);
    mNodes = (SDIDirEntry*)((u8*)&mArcInfoBlock->num_nodes + mArcInfoBlock->node_offset);
    mFiles = (SDIFileEntry*)((u8*)&mArcInfoBlock->num_nodes + mArcInfoBlock->file_entry_offset);
    mStringTable = (char*)((u8*)&mArcInfoBlock->num_nodes + mArcInfoBlock->string_table_offset);
    mArchiveData =
        (u8*)(mArcHeader->file_data_offset + mArcHeader->header_length + (u32)mArcHeader);
    mIsOpen = (flag == JKRMEMBREAK_FLAG_UNKNOWN1);
    mHeap = JKRHeap::findFromRoot(buffer);
    mCompression = COMPRESSION_NONE;
    return true;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JKRMemArchive::open(void* param_0, u32 param_1, JKRMemBreakFlag param_2) {
    nofralloc
#include "asm/JSystem/JKernel/JKRMemArchive/open__13JKRMemArchiveFPvUl15JKRMemBreakFlag.s"
}
#pragma pop
#endif

/* 802D6DDC-802D6E10 2D171C 0034+00 1/0 0/0 0/0 .text
 * fetchResource__13JKRMemArchiveFPQ210JKRArchive12SDIFileEntryPUl */
void* JKRMemArchive::fetchResource(SDIFileEntry* fileEntry, u32* resourceSize) {
    if (!fileEntry->data) {
        fileEntry->data = mArchiveData + fileEntry->data_offset;
    }

    if (resourceSize) {
        *resourceSize = fileEntry->data_size;
    }

    return fileEntry->data;
}

/* 802D6E10-802D6ED0 2D1750 00C0+00 1/0 0/0 0/0 .text
 * fetchResource__13JKRMemArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl */
void* JKRMemArchive::fetchResource(void* buffer, u32 bufferSize, SDIFileEntry* fileEntry,
                                   u32* resourceSize) {
    u32 srcLength = fileEntry->data_size;
    if (srcLength > bufferSize) {
        srcLength = bufferSize;
    }

    if (fileEntry->data != NULL) {
        memcpy(buffer, fileEntry->data, srcLength);
    } else {
        JKRCompression compression = JKRConvertAttrToCompressionType(fileEntry->getAttr());
        void* data = mArchiveData + fileEntry->data_offset;
        srcLength =
            fetchResource_subroutine((u8*)data, srcLength, (u8*)buffer, bufferSize, compression);
    }

    if (resourceSize) {
        *resourceSize = srcLength;
    }

    return buffer;
}

/* 802D6ED0-802D6F20 2D1810 0050+00 1/0 0/0 0/0 .text removeResourceAll__13JKRMemArchiveFv */
void JKRMemArchive::removeResourceAll(void) {
    ASSERT(isMounted());

    if (mArcInfoBlock == NULL)
        return;
    if (mMountMode == MOUNT_MEM)
        return;

    // !@bug: looping over file entries without incrementing the fileEntry pointer. Thus, only the
    // first fileEntry will clear/remove the resource data.
    SDIFileEntry* fileEntry = mFiles;
    for (int i = 0; i < mArcInfoBlock->num_file_entries; i++) {
        if (fileEntry->data) {
            fileEntry->data = NULL;
        }
    }
}

/* 802D6F20-802D6F5C 2D1860 003C+00 1/0 0/0 0/0 .text            removeResource__13JKRMemArchiveFPv
 */
bool JKRMemArchive::removeResource(void* resource) {
    ASSERT(isMounted());

    SDIFileEntry* fileEntry = findPtrResource(resource);
    if (!fileEntry)
        return false;

    fileEntry->data = NULL;
    return true;
}

/* 802D6F5C-802D7030 2D189C 00D4+00 1/1 1/1 0/0 .text
 * fetchResource_subroutine__13JKRMemArchiveFPUcUlPUcUli        */
u32 JKRMemArchive::fetchResource_subroutine(u8* src, u32 srcLength, u8* dst, u32 dstLength,
                                            JKRCompression compression) {
    switch (compression) {
    case COMPRESSION_NONE:
        if (srcLength > dstLength) {
            srcLength = dstLength;
        }

        memcpy(dst, src, srcLength);
        return srcLength;

    case COMPRESSION_YAY0:
    case COMPRESSION_YAZ0:
        u32 expendedSize = JKRDecompExpandSize((SArcHeader*)src);
        srcLength = expendedSize;
        if (expendedSize > dstLength) {
            srcLength = dstLength;
        }

        JKRDecompress(src, dst, srcLength, 0);
        return srcLength;

    default: {
        JUTException::panic_f(__FILE__, 723, "%s", "??? bad sequence\n");
    } break;
    }

    return 0;
}

/* 802D7030-802D70C0 2D1970 0090+00 1/0 0/0 0/0 .text getExpandedResSize__13JKRMemArchiveCFPCv */
u32 JKRMemArchive::getExpandedResSize(const void* resource) const {
    SDIFileEntry* fileEntry = findPtrResource(resource);
    if (fileEntry == NULL)
        return -1;

    if (fileEntry->isCompressed() == false) {
        return getResSize(resource);
    } else {
        return JKRDecompExpandSize((SArcHeader*)resource);
    }
}
