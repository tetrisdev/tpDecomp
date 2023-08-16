//
// Generated By: dol2asm
// Translation Unit: object-light
//

#include "JSystem/JStudio/JStudio_JStage/object-light.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __ct__Q214JStudio_JStage14TAdaptor_lightFPCQ26JStage7TSystemPQ26JStage6TLight();
extern "C" void __dt__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFUl();
extern "C" void adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCvUlPCvUl();
extern "C" void
adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
__cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor();
extern "C" void __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv();
extern "C" void func_8028D2B8();
extern "C" u8 saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light[72];

//
// External References:
//

extern "C" void __dt__Q37JStudio14TVariableValue7TOutputFv();
extern "C" void update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued();
extern "C" void adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec();
extern "C" void adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl();
extern "C" void adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor();
extern "C" void adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl();
extern "C" void __dt__Q27JStudio14TAdaptor_lightFv();
extern "C" void adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl();
extern "C" void
adaptor_object_ENABLE___Q214JStudio_JStage16TAdaptor_object_FQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void __ct__Q27JStudio14TVariableValueFv();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void cos();
extern "C" void sin();
extern "C" void atan2();
extern "C" u8 const sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light[16];
extern "C" u8 const sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light[12];
extern "C" u8 const sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light[12];
extern "C" extern void* __vt__Q27JStudio14TAdaptor_light[10];
extern "C" extern void* __vt__Q27JStudio8TAdaptor[8];
extern "C" extern void* __vt__Q37JStudio14TVariableValue7TOutput[4];
extern "C" extern u32 __float_nan;
extern "C" u8 soOutput_none___Q27JStudio14TVariableValue[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C5A30-803C5A40 022B50 0010+00 2/2 0/0 0/0 .data
 * __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_ */
SECTION_DATA extern void* __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor,
    (void*)__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv,
};

/* 803C5A40-803C5A68 022B60 0028+00 2/2 0/0 0/0 .data __vt__Q214JStudio_JStage14TAdaptor_light */
SECTION_DATA extern void* __vt__Q214JStudio_JStage14TAdaptor_light[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q214JStudio_JStage14TAdaptor_lightFv,
    (void*)adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFv,
    (void*)adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFv,
    (void*)adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFv,
    (void*)adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFUl,
    (void*)adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCvUlPCvUl,
    (void*)
        adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl,
};

/* 8028CB50-8028CBF4 287490 00A4+00 0/0 1/1 0/0 .text
 * __ct__Q214JStudio_JStage14TAdaptor_lightFPCQ26JStage7TSystemPQ26JStage6TLight */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_light::TAdaptor_light(JStage::TSystem const* param_0,
                                                   JStage::TLight* param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/func_8028CB50.s"
}
#pragma pop

/* 8028CBF4-8028CC68 287534 0074+00 1/0 0/0 0/0 .text __dt__Q214JStudio_JStage14TAdaptor_lightFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_light::~TAdaptor_light() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/__dt__Q214JStudio_JStage14TAdaptor_lightFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431400-8043140C 05E120 000C+00 1/1 0/0 0/0 .bss             @930 */
static u8 lit_930[12];

/* 8043140C-80431418 05E12C 000C+00 0/1 0/0 0/0 .bss             @931 */
#pragma push
#pragma force_active on
static u8 lit_931[12];
#pragma pop

/* 80431418-80431424 05E138 000C+00 0/1 0/0 0/0 .bss             @932 */
#pragma push
#pragma force_active on
static u8 lit_932[12];
#pragma pop

/* 80431424-80431430 05E144 000C+00 0/1 0/0 0/0 .bss             @933 */
#pragma push
#pragma force_active on
static u8 lit_933[12];
#pragma pop

/* 80431430-8043143C 05E150 000C+00 0/1 0/0 0/0 .bss             @934 */
#pragma push
#pragma force_active on
static u8 lit_934[12];
#pragma pop

/* 8043143C-80431448 05E15C 000C+00 0/1 0/0 0/0 .bss             @935 */
#pragma push
#pragma force_active on
static u8 lit_935[12];
#pragma pop

/* 80431448-80431490 05E168 0048+00 1/2 0/0 0/0 .bss
 * saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light   */
u8 JStudio_JStage::TAdaptor_light::saoVVOutput_direction_[72];

/* 8028CC68-8028CCB0 2875A8 0048+00 1/0 0/0 0/0 .text
 * adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_prepare() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804554E8-804554F0 003AE8 0004+04 1/1 0/0 0/0 .sdata2          @846 */
SECTION_SDATA2 static f32 lit_846[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 804554F0-804554F8 003AF0 0008+00 1/1 0/0 0/0 .sdata2          @847 */
SECTION_SDATA2 static f64 lit_847 = 0.5;

/* 804554F8-80455500 003AF8 0008+00 1/1 0/0 0/0 .sdata2          @848 */
SECTION_SDATA2 static f64 lit_848 = 3.0;

/* 80455500-80455508 003B00 0008+00 1/1 0/0 0/0 .sdata2          @849 */
SECTION_SDATA2 static u8 lit_849[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455508-8045550C 003B08 0004+00 1/1 0/0 0/0 .sdata2          @850 */
SECTION_SDATA2 static f32 lit_850 = 57.295780181884766f;

/* 8028CCB0-8028CF68 2875F0 02B8+00 1/0 0/0 0/0 .text
 * adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFv       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_begin() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFv.s"
}
#pragma pop

/* 8028CF68-8028CFBC 2878A8 0054+00 1/0 0/0 0/0 .text
 * adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_end() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045550C-80455510 003B0C 0004+00 1/1 0/0 0/0 .sdata2          @898 */
SECTION_SDATA2 static f32 lit_898 = 0.01745329238474369f;

/* 8028CFBC-8028D18C 2878FC 01D0+00 1/0 0/0 0/0 .text
 * adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFUl     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_update(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFUl.s"
}
#pragma pop

/* 8028D18C-8028D1B0 287ACC 0024+00 1/0 0/0 0/0 .text
 * adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCvUlPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_data(void const* param_0, u32 param_1,
                                                         void const* param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCvUlPCvUl.s"
}
#pragma pop

/* 8028D1B0-8028D228 287AF0 0078+00 1/0 0/0 0/0 .text
 * adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_FACULTY(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/func_8028D1B0.s"
}
#pragma pop

/* 8028D228-8028D24C 287B68 0024+00 1/0 0/0 0/0 .text
 * adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_ENABLE(JStudio::data::TEOperationData param_0,
                                                           void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/func_8028D228.s"
}
#pragma pop

/* 8028D24C-8028D258 287B8C 000C+00 1/0 0/0 0/0 .text
 * __cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_light::TVVOutput_direction_::operator()(f32 param_0,
                                                                 JStudio::TAdaptor* param_1) const {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/func_8028D24C.s"
}
#pragma pop

/* 8028D258-8028D2B8 287B98 0060+00 2/1 0/0 0/0 .text
 * __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_light::TVVOutput_direction_::~TVVOutput_direction_() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv.s"
}
#pragma pop

/* 8028D2B8-8028D550 287BF8 0298+00 0/0 1/0 0/0 .text            __sinit_object-light_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_8028D2B8() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/func_8028D2B8.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8028D2B8, func_8028D2B8);
#pragma pop
