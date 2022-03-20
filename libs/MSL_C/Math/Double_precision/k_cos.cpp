//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/k_cos
//

#include "msl_c/Math/Double_precision/k_cos.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __kernel_cos();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 804569C0-804569C8 004FC0 0008+00 1/1 0/0 0/0 .sdata2          @65 */
SECTION_SDATA2 static f64 lit_65 = 1.0;

/* 804569C8-804569D0 004FC8 0008+00 1/1 0/0 0/0 .sdata2          @66 */
SECTION_SDATA2 static f64 lit_66 = 0.0416666666666666;

/* 804569D0-804569D8 004FD0 0008+00 1/1 0/0 0/0 .sdata2          @67 */
SECTION_SDATA2 static f64 lit_67 = -0.001388888888887411;

/* 804569D8-804569E0 004FD8 0008+00 1/1 0/0 0/0 .sdata2          @68 */
SECTION_SDATA2 static f64 lit_68 = 2.480158728947673e-05;

/* 804569E0-804569E8 004FE0 0008+00 1/1 0/0 0/0 .sdata2          @69 */
SECTION_SDATA2 static f64 lit_69 = -2.7557314351390663e-07;

/* 804569E8-804569F0 004FE8 0008+00 1/1 0/0 0/0 .sdata2          @70 */
SECTION_SDATA2 static f64 lit_70 = 2.087572321298175e-09;

/* 804569F0-804569F8 004FF0 0008+00 1/1 0/0 0/0 .sdata2          @71 */
SECTION_SDATA2 static f64 lit_71 = -1.1359647557788195e-11;

/* 804569F8-80456A00 004FF8 0008+00 1/1 0/0 0/0 .sdata2          @72 */
SECTION_SDATA2 static f64 lit_72 = 0.5;

/* 80456A00-80456A08 005000 0008+00 1/1 0/0 0/0 .sdata2          @73 */
SECTION_SDATA2 static f64 lit_73 = 0.28125;

/* 8036AAA8-8036AB9C 3653E8 00F4+00 0/0 2/2 0/0 .text            __kernel_cos */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __kernel_cos() {
    nofralloc
#include "asm/msl_c/Math/Double_precision/k_cos/__kernel_cos.s"
}
#pragma pop
