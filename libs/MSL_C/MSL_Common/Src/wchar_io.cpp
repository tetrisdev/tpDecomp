//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/wchar_io
//

#include "msl_c/MSL_Common/Src/wchar_io.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void fwide();

//
// External References:
//

//
// Declarations:
//

/* 80369114-8036919C 363A54 0088+00 0/0 5/5 0/0 .text            fwide */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fwide() {
    nofralloc
#include "asm/msl_c/MSL_Common/Src/wchar_io/fwide.s"
}
#pragma pop
