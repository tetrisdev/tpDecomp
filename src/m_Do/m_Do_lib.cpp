/* m_Do_lib.cpp autogenerated by split.py v0.4 at 2021-01-31 21:06:36.599841 */

#include "JSystem/JMath/JMath.h"
#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "global.h"

// additional symbols needed for m_Do_lib.cpp
// autogenerated by split.py v0.4 at 2021-01-31 21:06:36.599867
extern "C" {
void GXInitTexObjCI(void);
void GXInitTlutObj(void);
void calcViewFrustum__11J3DUClipperFv(void);
void __dt__11J3DUClipperFv(void);
void init__11J3DUClipperFv(void);
void __dl__FPv(void);
void _restgpr_29(void);
void _savegpr_29(void);
void __sinit_m_Do_lib_cpp(void);
void func_80361C24(void);
void setup__14mDoLib_clipperFffff(void);
void mDoLib_pos2camera__FP3VecP3Vec(void);
void mDoLib_project__FP3VecP3Vec(void);
void mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj(void);
}

// additional symbols needed for m_Do_lib.cpp
// autogenerated by split.py v0.4 at 2021-01-31 21:06:36.599871
extern u8 lbl_803A3498;
extern u8 lbl_803DD8D8;
extern u8 lbl_803DD8E4;
extern u8 lbl_80450C70;
extern u8 lbl_80450C74;
extern u8 lbl_80451B70;
extern u8 lbl_80451B74;
extern u8 lbl_80451B78;
extern u8 lbl_80451B80;
extern u8 lbl_80451B84;
extern u8 lbl_80451B88;
extern u8 lbl_80451B8C;
extern u8 lbl_80451B90;
extern u8 lbl_80451B94;
extern u8 lbl_80451B98;
extern u8 lbl_80451B9C;
extern u8 lbl_80451BA0;

extern "C" {
// mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj
// mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj(const ResTIMG*, _GXTexObj*, u32,
// _GXTlutObj*)
asm void mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj(void) {
    nofralloc
#include "m_Do/m_Do_lib/asm/func_8001513C.s"
}

// setup__14mDoLib_clipperFffff
// mDoLib_clipper::setup(f32, f32, f32, f32)
asm void setup__14mDoLib_clipperFffff(void) {
    nofralloc
#include "m_Do/m_Do_lib/asm/func_8001528C.s"
}

// mDoLib_project__FP3VecP3Vec
// mDoLib_project__FP3VecP3Vec(Vec*, Vec*)
asm void mDoLib_project__FP3VecP3Vec(void) {
    nofralloc
#include "m_Do/m_Do_lib/asm/func_80015310.s"
}

// mDoLib_pos2camera__FP3VecP3Vec
// mDoLib_pos2camera__FP3VecP3Vec(Vec*, Vec*)
asm void mDoLib_pos2camera__FP3VecP3Vec(void) {
    nofralloc
#include "m_Do/m_Do_lib/asm/func_800154EC.s"
}

// __sinit_m_Do_lib_cpp
//
asm void __sinit_m_Do_lib_cpp(void) {
    nofralloc
#include "m_Do/m_Do_lib/asm/func_80015544.s"
}

// __dt__11J3DUClipperFv
// J3DUClipper::~J3DUClipper(void)
asm void __dt__11J3DUClipperFv(void) {
    nofralloc
#include "m_Do/m_Do_lib/asm/func_80015590.s"
}
};
