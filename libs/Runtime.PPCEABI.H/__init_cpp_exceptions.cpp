//
// Generated By: dol2asm
// Translation Unit: __init_cpp_exceptions
//

#include "Runtime.PPCEABI.H/__init_cpp_exceptions.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __fini_cpp_exceptions();
extern "C" void __init_cpp_exceptions();
SECTION_CTORS10 extern void* const __init_cpp_exceptions_reference;
SECTION_CTORS15 extern void* const _ctors[];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
SECTION_DTORS15 extern void* const __fini_cpp_exceptions_reference;
SECTION_DTORS15 extern void* const __dtors_null_terminator;

//
// External References:
//

#pragma section "extabindex_"
extern void* const data_8000569C[8];
extern "C" void __destroy_global_chain();
extern "C" void __unregister_fragment();
extern "C" void __register_fragment();

//
// Declarations:
//

/* ############################################################################################## */
/* 803737C0-803737C4 000000 0004+00 0/0 1/1 0/0 .ctors           __init_cpp_exceptions_reference */
SECTION_CTORS10 extern void* const __init_cpp_exceptions_reference = (void*)__init_cpp_exceptions;

/* 803737C4-8037396C 000004 01A8+00 0/0 0/1 0/0 .ctors           _ctors */
/* generated by the linker */

/* ############################################################################################## */
/* 80373980-80373984 000000 0004+00 0/0 1/1 0/0 .dtors           __destroy_global_chain_reference */
SECTION_DTORS10 extern void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 80373984-80373988 000004 0004+00 0/0 0/1 0/0 .dtors           __fini_cpp_exceptions_reference */
SECTION_DTORS15 extern void* const __fini_cpp_exceptions_reference = (void*)__fini_cpp_exceptions;

/* 80373988-8037398C 000008 0004+00 0/0 0/0 0/0 .dtors           __dtors_null_terminator */
SECTION_DTORS15 extern void* const __dtors_null_terminator = (void*)NULL;

/* ############################################################################################## */
/* 80450AD0-80450AD8 000550 0004+04 2/2 0/0 0/0 .sdata           fragmentID */
SECTION_SDATA static int fragmentID = -2;

/* 8036283C-80362870 35D17C 0034+00 1/0 1/0 0/0 .text            __fini_cpp_exceptions */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __fini_cpp_exceptions() {
    nofralloc
#include "asm/Runtime.PPCEABI.H/__init_cpp_exceptions/__fini_cpp_exceptions.s"
}
#pragma pop

/* 80362870-803628AC 35D1B0 003C+00 1/0 1/0 0/0 .text            __init_cpp_exceptions */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __init_cpp_exceptions() {
    nofralloc
#include "asm/Runtime.PPCEABI.H/__init_cpp_exceptions/__init_cpp_exceptions.s"
}
#pragma pop
