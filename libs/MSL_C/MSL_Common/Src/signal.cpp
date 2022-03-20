//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/signal
//

#include "msl_c/MSL_Common/Src/signal.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void raise();

//
// External References:
//

extern "C" void exit();
extern "C" void __end_critical_region();
extern "C" void __begin_critical_region();

//
// Declarations:
//

/* ############################################################################################## */
/* 8044D878-8044D890 07A598 0018+00 1/1 0/0 0/0 .bss             signal_funcs */
static u8 signal_funcs[24];

/* 8036881C-803688DC 36315C 00C0+00 0/0 1/1 0/0 .text            raise */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void raise() {
    nofralloc
#include "asm/msl_c/MSL_Common/Src/signal/raise.s"
}
#pragma pop
