//
// Generated By: dol2asm
// Translation Unit: c_API_graphic
//

#include "SSystem/SComponent/c_API_graphic.h"
#include "SSystem/SComponent/c_API.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 802632C8-802632F8 0030+00 s=0 e=1 z=0  None .text      cAPIGph_Painter__Fv */
void cAPIGph_Painter(void) {
    g_cAPI_Interface[3]();
}

/* 802632F8-80263328 0030+00 s=0 e=1 z=0  None .text      cAPIGph_BeforeOfDraw__Fv */
void cAPIGph_BeforeOfDraw(void) {
    g_cAPI_Interface[1]();
}

/* 80263328-80263358 0030+00 s=0 e=1 z=0  None .text      cAPIGph_AfterOfDraw__Fv */
void cAPIGph_AfterOfDraw(void) {
    g_cAPI_Interface[2]();
}
