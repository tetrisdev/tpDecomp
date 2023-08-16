//
// Generated By: dol2asm
// Translation Unit: JASTrack
//

#include "JSystem/JAudio2/JASTrack.h"
#include "dol2asm.h"

//
// Types:
//

namespace JGadget {
struct TLinkListNode {};

struct TNodeLinkList {
    struct iterator {};

    /* 802DCA1C */ ~TNodeLinkList();
    /* 802DCBA8 */ void Insert(JGadget::TNodeLinkList::iterator, JGadget::TLinkListNode*);
    /* 802DCBF8 */ void Remove(JGadget::TLinkListNode*);
};

};  // namespace JGadget

struct JASTrackPort {
    /* 8029354C */ void init();
    /* 8029357C */ void readImport(u32);
    /* 802935A0 */ void readExport(u32);
    /* 802935C4 */ void writeImport(u32, u16);
    /* 802935E8 */ void writeExport(u32, u16);
};

struct JASSeqCtrl {
    struct IntrType {};

    /* 802938BC */ JASSeqCtrl();
    /* 80293924 */ void init();
    /* 80293980 */ void start(void*, u32);
    /* 802939C4 */ void tickProc(JASTrack*);
    /* 80293ABC */ void interrupt(JASSeqCtrl::IntrType);
};

struct JASRegisterParam {
    /* 80293644 */ JASRegisterParam();
    /* 80293664 */ void init();
};

template <typename A0>
struct JASMemPool_MultiThreaded {};
/* JASMemPool_MultiThreaded<JASTrack> */
struct JASMemPool_MultiThreaded__template0 {
    /* 802932E0 */ void func_802932E0(void* _this);
};

/* JASMemPool_MultiThreaded<JASTrack::TChannelMgr> */
struct JASMemPool_MultiThreaded__template1 {
    /* 80293334 */ void func_80293334(void* _this);
};

struct JASGenericMemPool {
    /* 80290848 */ JASGenericMemPool();
    /* 80290860 */ ~JASGenericMemPool();
    /* 80290948 */ void alloc(u32);
    /* 80290994 */ void free(void*, u32);
};

struct JASDriver {
    /* 8029C9E8 */ void getDacRate();
    /* 8029E274 */ void registerSubFrameCallback(s32 (*)(void*), void*);
};

template <typename A0>
struct JASBankTable {};
/* JASBankTable<256> */
struct JASBankTable__template0 {
    /* 80293528 */ void func_80293528(void* _this, u32) /* const */;
};

struct JASBank {
    /* 80297930 */ void noteOn(JASBank const*, int, u8, u8, u16,
                               void (*)(u32, JASChannel*, JASDsp::TChannel*, void*), void*);
};

//
// Forward References:
//

extern "C" void __ct__8JASTrackFv();
extern "C" void __dt__8JASTrackFv();
extern "C" void setChannelMgrCount__8JASTrackFUl();
extern "C" void init__8JASTrackFv();
extern "C" void initTimed__8JASTrackFv();
extern "C" void inherit__8JASTrackFRC8JASTrack();
extern "C" void assignExtBuffer__8JASTrackFUlP14JASSoundParams();
extern "C" void setSeqData__8JASTrackFPvUl();
extern "C" void startSeq__8JASTrackFv();
extern "C" void stopSeq__8JASTrackFv();
extern "C" void start__8JASTrackFv();
extern "C" void close__8JASTrackFv();
extern "C" void connectChild__8JASTrackFUlP8JASTrack();
extern "C" void closeChild__8JASTrackFUl();
extern "C" void openChild__8JASTrackFUl();
extern "C" void connectBus__8JASTrackFii();
extern "C" void setLatestKey__8JASTrackFUc();
extern "C" void channelStart__8JASTrackFPQ28JASTrack11TChannelMgrUlUlUl();
extern "C" void noteOn__8JASTrackFUlUlUl();
extern "C" void gateOn__8JASTrackFUlUlfUl();
extern "C" void noteOff__8JASTrackFUlUs();
extern "C" void checkNoteStop__8JASTrackCFUl();
extern "C" void overwriteOsc__8JASTrackFP10JASChannel();
extern "C" void updateTimedParam__8JASTrackFv();
extern "C" void updateTrack__8JASTrackFf();
extern "C" void updateTempo__8JASTrackFv();
extern "C" void updateSeq__8JASTrackFbf();
extern "C" void seqTimeToDspTime__8JASTrackFf();
extern "C" void setParam__8JASTrackFUlfUl();
extern "C" void noteOffAll__8JASTrackFUs();
extern "C" void mute__8JASTrackFb();
extern "C" void setOscScale__8JASTrackFUlf();
extern "C" void setOscTable__8JASTrackFUlPCQ213JASOscillator5Point();
extern "C" void setOscAdsr__8JASTrackFssssUs();
extern "C" void setFIR__8JASTrackFPCs();
extern "C" void setIIR__8JASTrackFPCs();
extern "C" void readPortSelf__8JASTrackFUl();
extern "C" void writePortSelf__8JASTrackFUlUs();
extern "C" void writePort__8JASTrackFUlUs();
extern "C" void readPort__8JASTrackFUl();
extern "C" void setChannelPauseFlag__8JASTrackFb();
extern "C" void pause__8JASTrackFb();
extern "C" void getTransposeTotal__8JASTrackCFv();
extern "C" void isMute__8JASTrackCFv();
extern "C" void setTempo__8JASTrackFUs();
extern "C" void setTempoRate__8JASTrackFf();
extern "C" void setTimebase__8JASTrackFUs();
extern "C" void updateChannel__8JASTrackFP10JASChannelPQ26JASDsp8TChannel();
extern "C" void channelUpdateCallback__8JASTrackFUlP10JASChannelPQ26JASDsp8TChannelPv();
extern "C" void getRootTrack__8JASTrackFv();
extern "C" void tickProc__8JASTrackFv();
extern "C" void seqMain__8JASTrackFv();
extern "C" void cbSeqMain__Q28JASTrack5TListFPv();
extern "C" void append__Q28JASTrack5TListFP8JASTrack();
extern "C" void seqMain__Q28JASTrack5TListFv();
extern "C" void __ct__Q28JASTrack11TChannelMgrFP8JASTrack();
extern "C" void init__Q28JASTrack11TChannelMgrFv();
extern "C" void releaseAll__Q28JASTrack11TChannelMgrFv();
extern "C" void noteOff__Q28JASTrack11TChannelMgrFUlUs();
extern "C" void setPauseFlag__Q28JASTrack11TChannelMgrFb();
extern "C" void __ct__Q28JASTrack10MoveParam_Fv();
extern "C" void func_802932E0(void* _this);
extern "C" void func_80293334(void* _this);
extern "C" void __sinit_JASTrack_cpp();
extern "C" void __dt__Q28JASTrack5TListFv();
extern "C" void __dt__19JASDefaultBankTableFv();
extern "C" void func_80293528(void* _this, u32);
extern "C" u8 const sAdsTable__8JASTrack[24];
extern "C" u8 const sEnvOsc__8JASTrack[24];
extern "C" u8 const sPitchEnvOsc__8JASTrack[24];
extern "C" u8 sDefaultBankTable__8JASTrack[1036];
extern "C" u8 sTrackList__8JASTrack[16];
extern "C" u32 FILTER_MODE_IIR__6JASDsp;

//
// External References:
//

SECTION_INIT void memset();
extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void __dt__17JASGenericMemPoolFv();
extern "C" void alloc__17JASGenericMemPoolFUl();
extern "C" void free__17JASGenericMemPoolFPvUl();
extern "C" void init__12JASTrackPortFv();
extern "C" void readImport__12JASTrackPortFUl();
extern "C" void readExport__12JASTrackPortFUl();
extern "C" void writeImport__12JASTrackPortFUlUs();
extern "C" void writeExport__12JASTrackPortFUlUs();
extern "C" void __ct__16JASRegisterParamFv();
extern "C" void init__16JASRegisterParamFv();
extern "C" void __ct__10JASSeqCtrlFv();
extern "C" void init__10JASSeqCtrlFv();
extern "C" void start__10JASSeqCtrlFPvUl();
extern "C" void tickProc__10JASSeqCtrlFP8JASTrack();
extern "C" void interrupt__10JASSeqCtrlFQ210JASSeqCtrl8IntrType();
extern "C" void noteOn__7JASBankFPC7JASBankiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv();
extern "C" void release__10JASChannelFUs();
extern "C" void setOscInit__10JASChannelFUlPCQ213JASOscillator4Data();
extern "C" void setMixConfig__10JASChannelFUlUs();
extern "C" void setKeySweepTarget__10JASChannelFlUl();
extern "C" void free__10JASChannelFv();
extern "C" void getDacRate__9JASDriverFv();
extern "C" void getSubFrames__9JASDriverFv();
extern "C" void setFilterMode__Q26JASDsp8TChannelFUs();
extern "C" void setIIRFilterParam__Q26JASDsp8TChannelFPs();
extern "C" void setFIR8FilterParam__Q26JASDsp8TChannelFPs();
extern "C" void setDistFilter__Q26JASDsp8TChannelFs();
extern "C" void registerSubFrameCallback__9JASDriverFPFPv_lPv();
extern "C" void __dl__FPv();
extern "C" void __dt__Q27JGadget13TNodeLinkListFv();
extern "C" void
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode();
extern "C" void Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 struct_80451230[8];
extern "C" extern u8 __OSReport_disable;

//
// Declarations:
//

/* ############################################################################################## */
/* 804555A0-804555A4 003BA0 0004+00 6/6 0/0 0/0 .sdata2          @457 */
SECTION_SDATA2 static u8 lit_457[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80291228-8029131C 28BB68 00F4+00 1/1 3/3 0/0 .text            __ct__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASTrack::JASTrack() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/__ct__8JASTrackFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804316A8-804316B4 05E3C8 000C+00 1/1 0/0 0/0 .bss             @431 */
static u8 lit_431[12];

/* 804316B4-80431AC0 05E3D4 040C+00 1/2 0/0 0/0 .bss             sDefaultBankTable__8JASTrack */
u8 JASTrack::sDefaultBankTable[1036];

/* 80431AC0-80431ACC 05E7E0 000C+00 0/1 0/0 0/0 .bss             @433 */
#pragma push
#pragma force_active on
static u8 lit_433[12];
#pragma pop

/* 80431ACC-80431ADC 05E7EC 0010+00 1/2 0/0 0/0 .bss             sTrackList__8JASTrack */
u8 JASTrack::sTrackList[16];

/* 80431ADC-80431AE8 05E7FC 000C+00 3/3 0/0 0/0 .bss             @470 */
static u8 lit_470[12];

/* 80431AE8-80431AF4 05E808 000C+00 2/2 0/0 0/0 .bss             @476 */
static u8 lit_476[12];

/* 80431AF4-80431B04 05E814 0010+00 3/3 1/1 0/0 .bss
 * memPool_$localstatic3$getMemPool___58JASPoolAllocObject_MultiThreaded<Q28JASTrack11TChannelMgr>Fv
 */
extern u8 data_80431AF4[16];
u8 data_80431AF4[16];

/* 80431B04-80431B18 05E824 0010+04 2/2 2/2 0/0 .bss
 * memPool_$localstatic3$getMemPool___43JASPoolAllocObject_MultiThreaded<8JASTrack>Fv */
extern u8 data_80431B04[16 + 4 /* padding */];
u8 data_80431B04[16 + 4 /* padding */];

/* 8029131C-80291444 28BC5C 0128+00 4/4 4/4 0/0 .text            __dt__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASTrack::~JASTrack() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/__dt__8JASTrackFv.s"
}
#pragma pop

/* 80291444-802915D4 28BD84 0190+00 1/1 3/3 0/0 .text            setChannelMgrCount__8JASTrackFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setChannelMgrCount(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setChannelMgrCount__8JASTrackFUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039AFD0-8039AFE8 027630 0018+00 1/1 0/0 0/0 .rodata          sAdsTable__8JASTrack */
SECTION_RODATA u8 const JASTrack::sAdsTable[24] = {
    0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8039AFD0, &JASTrack::sAdsTable);

/* 8039AFE8-8039B000 027648 0018+00 1/2 0/0 0/0 .rodata          sEnvOsc__8JASTrack */
SECTION_RODATA u8 const JASTrack::sEnvOsc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8039AFE8, &JASTrack::sEnvOsc);

/* 8039B000-8039B018 027660 0018+00 0/1 0/0 0/0 .rodata          sPitchEnvOsc__8JASTrack */
#pragma push
#pragma force_active on
SECTION_RODATA u8 const JASTrack::sPitchEnvOsc[24] = {
    0x00, 0x00, 0x00, 0x01, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8039B000, &JASTrack::sPitchEnvOsc);
#pragma pop

/* 804555A4-804555A8 003BA4 0004+00 9/9 0/0 0/0 .sdata2          @679 */
SECTION_SDATA2 static f32 lit_679 = 1.0f;

/* 802915D4-802918FC 28BF14 0328+00 2/2 1/1 0/0 .text            init__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::init() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/init__8JASTrackFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804555A8-804555AC 003BA8 0004+00 4/4 0/0 0/0 .sdata2          @690 */
SECTION_SDATA2 static f32 lit_690 = 0.5f;

/* 802918FC-8029194C 28C23C 0050+00 1/1 0/0 0/0 .text            initTimed__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::initTimed() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/initTimed__8JASTrackFv.s"
}
#pragma pop

/* 8029194C-802919F4 28C28C 00A8+00 1/1 0/0 0/0 .text            inherit__8JASTrackFRC8JASTrack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::inherit(JASTrack const& param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/inherit__8JASTrackFRC8JASTrack.s"
}
#pragma pop

/* 802919F4-80291A08 28C334 0014+00 0/0 5/5 0/0 .text
 * assignExtBuffer__8JASTrackFUlP14JASSoundParams               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::assignExtBuffer(u32 param_0, JASSoundParams* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/assignExtBuffer__8JASTrackFUlP14JASSoundParams.s"
}
#pragma pop

/* 80291A08-80291A28 28C348 0020+00 0/0 3/3 0/0 .text            setSeqData__8JASTrackFPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setSeqData(void* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setSeqData__8JASTrackFPvUl.s"
}
#pragma pop

/* 80291A28-80291A78 28C368 0050+00 0/0 2/2 0/0 .text            startSeq__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::startSeq() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/startSeq__8JASTrackFv.s"
}
#pragma pop

/* 80291A78-80291ABC 28C3B8 0044+00 0/0 2/2 0/0 .text            stopSeq__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::stopSeq() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/stopSeq__8JASTrackFv.s"
}
#pragma pop

/* 80291ABC-80291AC8 28C3FC 000C+00 0/0 1/1 0/0 .text            start__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::start() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/start__8JASTrackFv.s"
}
#pragma pop

/* 80291AC8-80291B8C 28C408 00C4+00 4/4 0/0 0/0 .text            close__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::close() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/close__8JASTrackFv.s"
}
#pragma pop

/* 80291B8C-80291BB8 28C4CC 002C+00 1/1 1/1 0/0 .text connectChild__8JASTrackFUlP8JASTrack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::connectChild(u32 param_0, JASTrack* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/connectChild__8JASTrackFUlP8JASTrack.s"
}
#pragma pop

/* 80291BB8-80291C30 28C4F8 0078+00 0/0 1/1 0/0 .text            closeChild__8JASTrackFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::closeChild(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/closeChild__8JASTrackFUl.s"
}
#pragma pop

/* 80291C30-80291DAC 28C570 017C+00 0/0 2/2 0/0 .text            openChild__8JASTrackFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::openChild(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/openChild__8JASTrackFUl.s"
}
#pragma pop

/* 80291DAC-80291DBC 28C6EC 0010+00 0/0 1/1 0/0 .text            connectBus__8JASTrackFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::connectBus(int param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/connectBus__8JASTrackFii.s"
}
#pragma pop

/* 80291DBC-80291DF8 28C6FC 003C+00 0/0 1/1 0/0 .text            setLatestKey__8JASTrackFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setLatestKey(u8 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setLatestKey__8JASTrackFUc.s"
}
#pragma pop

/* 80291DF8-80291F38 28C738 0140+00 2/2 0/0 0/0 .text
 * channelStart__8JASTrackFPQ28JASTrack11TChannelMgrUlUlUl      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::channelStart(JASTrack::TChannelMgr* param_0, u32 param_1, u32 param_2,
                                u32 param_3) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/channelStart__8JASTrackFPQ28JASTrack11TChannelMgrUlUlUl.s"
}
#pragma pop

/* 80291F38-80292008 28C878 00D0+00 0/0 1/1 0/0 .text            noteOn__8JASTrackFUlUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::noteOn(u32 param_0, u32 param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/noteOn__8JASTrackFUlUlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 804555AC-804555B0 003BAC 0004+00 1/1 0/0 0/0 .sdata2          @952 */
SECTION_SDATA2 static f32 lit_952 = 100.0f;

/* 804555B0-804555B8 003BB0 0008+00 4/4 0/0 0/0 .sdata2          @954 */
SECTION_SDATA2 static f64 lit_954 = 4503599627370496.0 /* cast u32 to float */;

/* 80292008-80292198 28C948 0190+00 0/0 1/1 0/0 .text            gateOn__8JASTrackFUlUlfUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::gateOn(u32 param_0, u32 param_1, f32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/gateOn__8JASTrackFUlUlfUl.s"
}
#pragma pop

/* 80292198-80292220 28CAD8 0088+00 1/1 1/1 0/0 .text            noteOff__8JASTrackFUlUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::noteOff(u32 param_0, u16 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/noteOff__8JASTrackFUlUs.s"
}
#pragma pop

/* 80292220-8029226C 28CB60 004C+00 0/0 1/1 0/0 .text            checkNoteStop__8JASTrackCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JASTrack::checkNoteStop(u32 param_0) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/checkNoteStop__8JASTrackCFUl.s"
}
#pragma pop

/* 8029226C-802922D8 28CBAC 006C+00 1/1 0/0 0/0 .text overwriteOsc__8JASTrackFP10JASChannel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::overwriteOsc(JASChannel* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/overwriteOsc__8JASTrackFP10JASChannel.s"
}
#pragma pop

/* 802922D8-80292348 28CC18 0070+00 1/1 0/0 0/0 .text            updateTimedParam__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::updateTimedParam() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/updateTimedParam__8JASTrackFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804555B8-804555BC 003BB8 0004+00 1/1 0/0 0/0 .sdata2          @1032 */
SECTION_SDATA2 static f32 lit_1032 = 1.0f / 3.0f;

/* 80292348-802924E4 28CC88 019C+00 1/1 0/0 0/0 .text            updateTrack__8JASTrackFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::updateTrack(f32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/updateTrack__8JASTrackFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 804555BC-804555C0 003BBC 0004+00 1/1 0/0 0/0 .sdata2          @1042 */
SECTION_SDATA2 static f32 lit_1042 = 4.0f / 3.0f;

/* 804555C0-804555C8 003BC0 0008+00 1/1 0/0 0/0 .sdata2          @1044 */
SECTION_SDATA2 static f64 lit_1044 = 4503601774854144.0 /* cast s32 to float */;

/* 802924E4-80292580 28CE24 009C+00 5/5 0/0 0/0 .text            updateTempo__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::updateTempo() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/updateTempo__8JASTrackFv.s"
}
#pragma pop

/* 80292580-80292644 28CEC0 00C4+00 4/4 0/0 0/0 .text            updateSeq__8JASTrackFbf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::updateSeq(bool param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/updateSeq__8JASTrackFbf.s"
}
#pragma pop

/* ############################################################################################## */
/* 804555C8-804555CC 003BC8 0004+00 1/1 0/0 0/0 .sdata2          @1069 */
SECTION_SDATA2 static f32 lit_1069 = 120.0f;

/* 804555CC-804555D0 003BCC 0004+00 1/1 0/0 0/0 .sdata2          @1070 */
SECTION_SDATA2 static f32 lit_1070 = 10.0f;

/* 80292644-802926E0 28CF84 009C+00 1/1 0/0 0/0 .text            seqTimeToDspTime__8JASTrackFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::seqTimeToDspTime(f32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/seqTimeToDspTime__8JASTrackFf.s"
}
#pragma pop

/* 802926E0-80292708 28D020 0028+00 0/0 4/4 0/0 .text            setParam__8JASTrackFUlfUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setParam(u32 param_0, f32 param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setParam__8JASTrackFUlfUl.s"
}
#pragma pop

/* 80292708-802927A0 28D048 0098+00 1/1 0/0 0/0 .text            noteOffAll__8JASTrackFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::noteOffAll(u16 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/noteOffAll__8JASTrackFUs.s"
}
#pragma pop

/* 802927A0-802927D8 28D0E0 0038+00 0/0 2/2 0/0 .text            mute__8JASTrackFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::mute(bool param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/mute__8JASTrackFb.s"
}
#pragma pop

/* 802927D8-802927E8 28D118 0010+00 0/0 1/1 0/0 .text            setOscScale__8JASTrackFUlf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setOscScale(u32 param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setOscScale__8JASTrackFUlf.s"
}
#pragma pop

/* 802927E8-80292808 28D128 0020+00 0/0 1/1 0/0 .text
 * setOscTable__8JASTrackFUlPCQ213JASOscillator5Point           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setOscTable(u32 param_0, JASOscillator::Point const* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setOscTable__8JASTrackFUlPCQ213JASOscillator5Point.s"
}
#pragma pop

/* 80292808-8029285C 28D148 0054+00 0/0 1/1 0/0 .text            setOscAdsr__8JASTrackFssssUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setOscAdsr(s16 param_0, s16 param_1, s16 param_2, s16 param_3, u16 param_4) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setOscAdsr__8JASTrackFssssUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 804555D0-804555D4 003BD0 0004+00 2/2 0/0 0/0 .sdata2          FILTER_MODE_IIR__6JASDsp */
SECTION_SDATA2 u32 JASDsp::FILTER_MODE_IIR = 0x00000020;

/* 8029285C-8029289C 28D19C 0040+00 0/0 2/2 0/0 .text            setFIR__8JASTrackFPCs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setFIR(s16 const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setFIR__8JASTrackFPCs.s"
}
#pragma pop

/* 8029289C-802928D0 28D1DC 0034+00 0/0 4/4 0/0 .text            setIIR__8JASTrackFPCs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setIIR(s16 const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setIIR__8JASTrackFPCs.s"
}
#pragma pop

/* 802928D0-802928F4 28D210 0024+00 0/0 1/1 0/0 .text            readPortSelf__8JASTrackFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::readPortSelf(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/readPortSelf__8JASTrackFUl.s"
}
#pragma pop

/* 802928F4-80292918 28D234 0024+00 0/0 1/1 0/0 .text            writePortSelf__8JASTrackFUlUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::writePortSelf(u32 param_0, u16 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/writePortSelf__8JASTrackFUlUs.s"
}
#pragma pop

/* 80292918-8029297C 28D258 0064+00 0/0 4/4 0/0 .text            writePort__8JASTrackFUlUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::writePort(u32 param_0, u16 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/writePort__8JASTrackFUlUs.s"
}
#pragma pop

/* 8029297C-802929A0 28D2BC 0024+00 0/0 3/3 0/0 .text            readPort__8JASTrackFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::readPort(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/readPort__8JASTrackFUl.s"
}
#pragma pop

/* 802929A0-80292A3C 28D2E0 009C+00 1/1 0/0 0/0 .text            setChannelPauseFlag__8JASTrackFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setChannelPauseFlag(bool param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setChannelPauseFlag__8JASTrackFb.s"
}
#pragma pop

/* 80292A3C-80292AA4 28D37C 0068+00 0/0 2/2 0/0 .text            pause__8JASTrackFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::pause(bool param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/pause__8JASTrackFb.s"
}
#pragma pop

/* 80292AA4-80292AF4 28D3E4 0050+00 3/3 0/0 0/0 .text            getTransposeTotal__8JASTrackCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::getTransposeTotal() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/getTransposeTotal__8JASTrackCFv.s"
}
#pragma pop

/* 80292AF4-80292B58 28D434 0064+00 2/2 0/0 0/0 .text            isMute__8JASTrackCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::isMute() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/isMute__8JASTrackCFv.s"
}
#pragma pop

/* 80292B58-80292B8C 28D498 0034+00 0/0 1/1 0/0 .text            setTempo__8JASTrackFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setTempo(u16 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setTempo__8JASTrackFUs.s"
}
#pragma pop

/* 80292B8C-80292BC0 28D4CC 0034+00 0/0 2/2 0/0 .text            setTempoRate__8JASTrackFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setTempoRate(f32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setTempoRate__8JASTrackFf.s"
}
#pragma pop

/* 80292BC0-80292BF4 28D500 0034+00 0/0 1/1 0/0 .text            setTimebase__8JASTrackFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::setTimebase(u16 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setTimebase__8JASTrackFUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 804555D4-804555D8 003BD4 0004+00 1/1 0/0 0/0 .sdata2          @1246 */
SECTION_SDATA2 static f32 lit_1246 = 32767.0f;

/* 80292BF4-80292CA4 28D534 00B0+00 1/1 0/0 0/0 .text
 * updateChannel__8JASTrackFP10JASChannelPQ26JASDsp8TChannel    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::updateChannel(JASChannel* param_0, JASDsp::TChannel* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/updateChannel__8JASTrackFP10JASChannelPQ26JASDsp8TChannel.s"
}
#pragma pop

/* 80292CA4-80292D88 28D5E4 00E4+00 1/1 0/0 0/0 .text
 * channelUpdateCallback__8JASTrackFUlP10JASChannelPQ26JASDsp8TChannelPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::channelUpdateCallback(u32 param_0, JASChannel* param_1,
                                         JASDsp::TChannel* param_2, void* param_3) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/channelUpdateCallback__8JASTrackFUlP10JASChannelPQ26JASDsp8TChannelPv.s"
}
#pragma pop

/* 80292D88-80292DA0 28D6C8 0018+00 3/3 0/0 0/0 .text            getRootTrack__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::getRootTrack() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/getRootTrack__8JASTrackFv.s"
}
#pragma pop

/* 80292DA0-80292E9C 28D6E0 00FC+00 1/1 0/0 0/0 .text            tickProc__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::tickProc() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/tickProc__8JASTrackFv.s"
}
#pragma pop

/* 80292E9C-80292F6C 28D7DC 00D0+00 1/1 0/0 0/0 .text            seqMain__8JASTrackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::seqMain() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/seqMain__8JASTrackFv.s"
}
#pragma pop

/* 80292F6C-80292F90 28D8AC 0024+00 1/1 0/0 0/0 .text            cbSeqMain__Q28JASTrack5TListFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::TList::cbSeqMain(void* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/cbSeqMain__Q28JASTrack5TListFPv.s"
}
#pragma pop

/* 80292F90-8029301C 28D8D0 008C+00 1/1 0/0 0/0 .text append__Q28JASTrack5TListFP8JASTrack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::TList::append(JASTrack* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/append__Q28JASTrack5TListFP8JASTrack.s"
}
#pragma pop

/* 8029301C-802930DC 28D95C 00C0+00 1/1 0/0 0/0 .text            seqMain__Q28JASTrack5TListFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::TList::seqMain() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/seqMain__Q28JASTrack5TListFv.s"
}
#pragma pop

/* 802930DC-80293148 28DA1C 006C+00 2/2 0/0 0/0 .text __ct__Q28JASTrack11TChannelMgrFP8JASTrack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASTrack::TChannelMgr::TChannelMgr(JASTrack* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/__ct__Q28JASTrack11TChannelMgrFP8JASTrack.s"
}
#pragma pop

/* 80293148-802931B0 28DA88 0068+00 1/1 0/0 0/0 .text            init__Q28JASTrack11TChannelMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::TChannelMgr::init() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/init__Q28JASTrack11TChannelMgrFv.s"
}
#pragma pop

/* 802931B0-80293220 28DAF0 0070+00 1/1 0/0 0/0 .text releaseAll__Q28JASTrack11TChannelMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::TChannelMgr::releaseAll() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/releaseAll__Q28JASTrack11TChannelMgrFv.s"
}
#pragma pop

/* 80293220-802932A0 28DB60 0080+00 3/3 0/0 0/0 .text noteOff__Q28JASTrack11TChannelMgrFUlUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::TChannelMgr::noteOff(u32 param_0, u16 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/noteOff__Q28JASTrack11TChannelMgrFUlUs.s"
}
#pragma pop

/* 802932A0-802932C8 28DBE0 0028+00 1/1 0/0 0/0 .text setPauseFlag__Q28JASTrack11TChannelMgrFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASTrack::TChannelMgr::setPauseFlag(bool param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/setPauseFlag__Q28JASTrack11TChannelMgrFb.s"
}
#pragma pop

/* 802932C8-802932E0 28DC08 0018+00 1/1 0/0 0/0 .text            __ct__Q28JASTrack10MoveParam_Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASTrack::MoveParam_::MoveParam_() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/__ct__Q28JASTrack10MoveParam_Fv.s"
}
#pragma pop

/* 802932E0-80293334 28DC20 0054+00 2/2 2/2 0/0 .text
 * __dt__35JASMemPool_MultiThreaded<8JASTrack>Fv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802932E0(void* _this) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/func_802932E0.s"
}
#pragma pop

/* 80293334-80293388 28DC74 0054+00 3/3 1/1 0/0 .text
 * __dt__50JASMemPool_MultiThreaded<Q28JASTrack11TChannelMgr>Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80293334(void* _this) {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/func_80293334.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C5B68-803C5B74 022C88 000C+00 2/2 0/0 0/0 .data            __vt__19JASDefaultBankTable */
SECTION_DATA extern void* __vt__19JASDefaultBankTable[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_80293528,
};

/* 803C5B74-803C5B80 022C94 000C+00 1/1 0/0 0/0 .data            __vt__17JASBankTable<256> */
SECTION_DATA extern void* data_803C5B74[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_80293528,
};

/* 803C5B80-803C5B90 022CA0 000C+04 1/1 1/1 0/0 .data            __vt__11JASBankList */
SECTION_DATA extern void* __vt__11JASBankList[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    /* padding */
    NULL,
};

/* 80293388-8029345C 28DCC8 00D4+00 0/0 1/0 0/0 .text            __sinit_JASTrack_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_JASTrack_cpp() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/__sinit_JASTrack_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80293388, __sinit_JASTrack_cpp);
#pragma pop

/* 8029345C-802934B4 28DD9C 0058+00 1/1 0/0 0/0 .text            __dt__Q28JASTrack5TListFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASTrack::TList::~TList() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/__dt__Q28JASTrack5TListFv.s"
}
#pragma pop

/* 802934B4-80293528 28DDF4 0074+00 1/1 0/0 0/0 .text            __dt__19JASDefaultBankTableFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASDefaultBankTable::~JASDefaultBankTable() {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/__dt__19JASDefaultBankTableFv.s"
}
#pragma pop

/* 80293528-8029354C 28DE68 0024+00 2/0 0/0 0/0 .text            getBank__17JASBankTable<256>CFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80293528(void* _this, u32 param_0) /* const */ {
    nofralloc
#include "asm/JSystem/JAudio2/JASTrack/func_80293528.s"
}
#pragma pop
