/* d_kankyo_wether.cpp autogenerated by split.py v0.3 at 2021-01-01 22:17:50.097171 */

#include "SComponent/c_xyz.h"
#include "Z2AudioLib/Z2SeMgr/Z2SeMgr.h"
#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "global.h"
#include "m_Do/m_Do_audio/m_Do_audio.h"

extern "C" {
int func_8036608C(const void*, const void*, u32);
int strcmp(const char*, const char*);
void __dl__FPv(void);
void __ml__4cXyzCFf(void);
void __ne__4cXyzCFRC3Vec(void);
void __nw__FUli(void);
void __pl__4cXyzCFRC3Vec(void);
void cLib_addCalc__FPfffff(void);
void cloud_shadow_move(void);
void cXyz_NS_ctor(void);
void cXyz_NS_dtor(void);
void dComIfG_getStageRes(void);
void dComIfG_play_c_NS_getLayerNo(int);
void dComIfGp_getReverb(void);
void dKy_darkworld_check(void);
void dKy_get_dayofweek(void);
void dKy_undwater_filter_draw(void);
void dKyr_drawHousi(void);
void dKyr_drawLenzflare(void);
void dKyr_drawRain(void);
void dKyr_drawSibuki(void);
void dKyr_drawSnow(void);
void dKyr_drawStar(void);
void dKyr_drawSun(void);
void dKyr_evil_draw(void);
void dKyr_evil_init(void);
void dKyr_evil_move(void);
void dKyr_get_vectle_calc(void);
void dKyr_housi_move(void);
void dKyr_lenzflare_move(void);
void dKyr_mud_draw(void);
void dKyr_mud_init(void);
void dKyr_mud_move(void);
void dKyr_odour_draw(void);
void dKyr_odour_init(void);
void dKyr_odour_move(void);
void dKyr_rain_init(void);
void dKyr_rain_move(void);
void dKyr_shstar_init(void);
void dKyr_shstar_move(void);
void dKyr_snow_init(void);
void dKyr_snow_move(void);
void dKyr_star_init(void);
void dKyr_star_move(void);
void dKyr_sun_move(void);
void dKyr_thunder_init(void);
void dKyr_thunder_move(void);
void dKyw_get_wind_pow(void);
void dKyw_get_wind_vec(void);
void dKyw_pntlight_set(void);
void dKyw_pntwind_cut(void);
void dKyw_pntwind_init(void);
void dKyw_wind_init(void);
void dPa_control_c_NS_set(void);
void drawCloudShadow(void);
void drawVrkumo(void);
void dRes_control_c_NS_getRes(void);
void dScnKy_env_light_c_NS_getDaytime(void);
void dStage_roomControl_c_NS_getStatusRoomDt(void);
void func_80361C24(void);
void func_80361D60(void);
void J3DDrawBuffer_NS_entryImm(void);
void normZP__4cXyzCFv(void);
void squal_proc(void);
void vrkumo_move(void);
void Z2EnvSeMgr_NS_initStrongWindSe(void);
void Z2EnvSeMgr_NS_setWindDirection(void);
void Z2EnvSeMgr_NS_startRainSe(void);
void Z2EnvSeMgr_NS_startStrongWindSe(void);
}

extern "C" {
// dKyw_setDrawPacketList__FP9J3DPacketi
// dKyw_setDrawPacketList(J3DPacket*, int)
asm void dKyw_setDrawPacketList(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056AA8.s"
}

// dKyw_setDrawPacketListIndScreen__FP9J3DPacketi
// dKyw_setDrawPacketListIndScreen(J3DPacket*, int)
asm void dKyw_setDrawPacketListIndScreen(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056AF8.s"
}

// dKyw_setDrawPacketListSky__FP9J3DPacketi
// dKyw_setDrawPacketListSky(J3DPacket*, int)
asm void dKyw_setDrawPacketListSky(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056B48.s"
}

// dKyw_setDrawPacketListXluBg__FP9J3DPacketi
// dKyw_setDrawPacketListXluBg(J3DPacket*, int)
asm void dKyw_setDrawPacketListXluBg(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056BD8.s"
}

// draw__18dKankyo_sun_PacketFv
// dKankyo_sun_Packet::draw(void)
asm void func_80056C60(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056C60.s"
}

// draw__22dKankyo_sunlenz_PacketFv
// dKankyo_sunlenz_Packet::draw(void)
asm void func_80056C98(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056C98.s"
}

// __dt__8RAIN_EFFFv
// RAIN_EFF::~RAIN_EFF(void)
asm void RAIN_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056CD0.s"
}

// __ct__8RAIN_EFFFv
// RAIN_EFF::RAIN_EFF(void)
asm void RAIN_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056D0C.s"
}

// draw__19dKankyo_rain_PacketFv
// dKankyo_rain_Packet::draw(void)
asm void func_80056D10(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056D10.s"
}

// __dt__8SNOW_EFFFv
// SNOW_EFF::~SNOW_EFF(void)
asm void SNOW_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056D58.s"
}

// __ct__8SNOW_EFFFv
// SNOW_EFF::SNOW_EFF(void)
asm void SNOW_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056D94.s"
}

// draw__19dKankyo_snow_PacketFv
// dKankyo_snow_Packet::draw(void)
asm void func_80056D98(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056D98.s"
}

// __dt__8STAR_EFFFv
// STAR_EFF::~STAR_EFF(void)
asm void STAR_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056DC8.s"
}

// __ct__8STAR_EFFFv
// STAR_EFF::STAR_EFF(void)
asm void STAR_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056E04.s"
}

// draw__19dKankyo_star_PacketFv
// dKankyo_star_Packet::draw(void)
asm void func_80056E08(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056E08.s"
}

// __dt__9CLOUD_EFFFv
// CLOUD_EFF::~CLOUD_EFF(void)
asm void CLOUD_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056E38.s"
}

// __ct__9CLOUD_EFFFv
// CLOUD_EFF::CLOUD_EFF(void)
asm void CLOUD_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056E74.s"
}

// draw__20dKankyo_cloud_PacketFv
// dKankyo_cloud_Packet::draw(void)
asm void func_80056E78(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056E78.s"
}

// __dt__9HOUSI_EFFFv
// HOUSI_EFF::~HOUSI_EFF(void)
asm void HOUSI_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056EA8.s"
}

// __ct__9HOUSI_EFFFv
// HOUSI_EFF::HOUSI_EFF(void)
asm void HOUSI_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056EE4.s"
}

// draw__20dKankyo_housi_PacketFv
// dKankyo_housi_Packet::draw(void)
asm void func_80056EE8(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056EE8.s"
}

// __dt__10VRKUMO_EFFFv
// VRKUMO_EFF::~VRKUMO_EFF(void)
asm void VRKUMO_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056F18.s"
}

// __ct__10VRKUMO_EFFFv
// VRKUMO_EFF::VRKUMO_EFF(void)
asm void VRKUMO_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056F54.s"
}

// draw__21dKankyo_vrkumo_PacketFv
// dKankyo_vrkumo_Packet::draw(void)
asm void func_80056F58(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056F58.s"
}

// __dt__12EF_ODOUR_EFFFv
// EF_ODOUR_EFF::~EF_ODOUR_EFF(void)
asm void EF_ODOUR_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056F8C.s"
}

// __ct__12EF_ODOUR_EFFFv
// EF_ODOUR_EFF::EF_ODOUR_EFF(void)
asm void EF_ODOUR_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056FC8.s"
}

// draw__20dKankyo_odour_PacketFv
// dKankyo_odour_Packet::draw(void)
asm void func_80056FCC(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056FCC.s"
}

// __dt__10EF_MUD_EFFFv
// EF_MUD_EFF::~EF_MUD_EFF(void)
asm void EF_MUD_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80056FFC.s"
}

// __ct__10EF_MUD_EFFFv
// EF_MUD_EFF::EF_MUD_EFF(void)
asm void EF_MUD_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057038.s"
}

// draw__18dKankyo_mud_PacketFv
// dKankyo_mud_Packet::draw(void)
asm void func_8005703C(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005703C.s"
}

// __dt__11EF_EVIL_EFFFv
// EF_EVIL_EFF::~EF_EVIL_EFF(void)
asm void EF_EVIL_EFF_NS_dtor(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005706C.s"
}

// __ct__11EF_EVIL_EFFFv
// EF_EVIL_EFF::EF_EVIL_EFF(void)
asm void EF_EVIL_EFF(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800570A8.s"
}

// draw__19dKankyo_evil_PacketFv
// dKankyo_evil_Packet::draw(void)
asm void func_800570AC(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800570AC.s"
}

// dKyw_drawSun__Fi
// dKyw_drawSun(int)
asm void dKyw_drawSun(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800570DC.s"
}

// dKyw_Sun_Draw__Fv
// dKyw_Sun_Draw(void)
asm void dKyw_Sun_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005710C.s"
}

// dKyw_drawSunlenz__Fi
// dKyw_drawSunlenz(int)
asm void dKyw_drawSunlenz(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057130.s"
}

// dKyw_Sunlenz_Draw__Fv
// dKyw_Sunlenz_Draw(void)
asm void dKyw_Sunlenz_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057174.s"
}

// dKyw_drawRain__Fi
// dKyw_drawRain(int)
asm void dKyw_drawRain(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057198.s"
}

// dKyw_Rain_Draw__Fv
// dKyw_Rain_Draw(void)
asm void dKyw_Rain_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800571C8.s"
}

// dKyw_drawSnow__Fi
// dKyw_drawSnow(int)
asm void dKyw_drawSnow(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800571EC.s"
}

// dKyw_Snow_Draw__Fv
// dKyw_Snow_Draw(void)
asm void dKyw_Snow_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005721C.s"
}

// dKyw_drawStar__Fi
// dKyw_drawStar(int)
asm void dKyw_drawStar(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057240.s"
}

// dKyw_Star_Draw__Fv
// dKyw_Star_Draw(void)
asm void dKyw_Star_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057270.s"
}

// dKyw_drawHousi__Fi
// dKyw_drawHousi(int)
asm void dKyw_drawHousi(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057294.s"
}

// dKyw_Housi_Draw__Fv
// dKyw_Housi_Draw(void)
asm void dKyw_Housi_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800572C4.s"
}

// dKyw_drawCloud__Fi
// dKyw_drawCloud(int)
asm void dKyw_drawCloud(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800572E8.s"
}

// dKyw_Cloud_Draw__Fv
// dKyw_Cloud_Draw(void)
asm void dKyw_Cloud_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057318.s"
}

// dKyw_drawVrkumo__Fi
// dKyw_drawVrkumo(int)
asm void dKyw_drawVrkumo(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005733C.s"
}

// dKyw_Vrkumo_Draw__Fv
// dKyw_Vrkumo_Draw(void)
asm void dKyw_Vrkumo_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005736C.s"
}

// dKyw_shstar_packet__Fi
// dKyw_shstar_packet(int)
asm void dKyw_shstar_packet(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057390.s"
}

// dKyw_shstar_Draw__Fv
// dKyw_shstar_Draw(void)
asm void dKyw_shstar_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800573C0.s"
}

// dKyw_odour_packet__Fi
// dKyw_odour_packet(int)
asm void dKyw_odour_packet(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800573E4.s"
}

// dKyw_Odour_Draw__Fv
// dKyw_Odour_Draw(void)
asm void dKyw_Odour_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057414.s"
}

// dKyw_mud_packet__Fi
// dKyw_mud_packet(int)
asm void dKyw_mud_packet(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057438.s"
}

// dKyw_mud_Draw__Fv
// dKyw_mud_Draw(void)
asm void dKyw_mud_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057468.s"
}

// dKyw_evil_packet__Fi
// dKyw_evil_packet(int)
asm void dKyw_evil_packet(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005748C.s"
}

// dKyw_evil_Draw__Fv
// dKyw_evil_Draw(void)
asm void dKyw_evil_Draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800574BC.s"
}

// dKyw_wether_init__Fv
// dKyw_wether_init(void)
asm void dKyw_wether_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800574E0.s"
}

// dKyw_wether_init2__Fv
// dKyw_wether_init2(void)
asm void dKyw_wether_init2(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800579EC.s"
}

// dKyw_wether_delete__Fv
// dKyw_wether_delete(void)
asm void dKyw_wether_delete(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057A04.s"
}

// __dt__19dKankyo_evil_PacketFv
// dKankyo_evil_Packet::~dKankyo_evil_Packet(void)
asm void func_80057C84(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057C84.s"
}

// __dt__18dKankyo_mud_PacketFv
// dKankyo_mud_Packet::~dKankyo_mud_Packet(void)
asm void func_80057D08(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057D08.s"
}

// __dt__20dKankyo_odour_PacketFv
// dKankyo_odour_Packet::~dKankyo_odour_Packet(void)
asm void func_80057D8C(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057D8C.s"
}

// __dt__20dKankyo_cloud_PacketFv
// dKankyo_cloud_Packet::~dKankyo_cloud_Packet(void)
asm void func_80057E10(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057E10.s"
}

// __dt__20dKankyo_housi_PacketFv
// dKankyo_housi_Packet::~dKankyo_housi_Packet(void)
asm void func_80057E94(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057E94.s"
}

// __dt__19dKankyo_star_PacketFv
// dKankyo_star_Packet::~dKankyo_star_Packet(void)
asm void func_80057F18(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057F18.s"
}

// __dt__19dKankyo_snow_PacketFv
// dKankyo_snow_Packet::~dKankyo_snow_Packet(void)
asm void func_80057F9C(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80057F9C.s"
}

// __dt__19dKankyo_rain_PacketFv
// dKankyo_rain_Packet::~dKankyo_rain_Packet(void)
asm void func_80058020(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058020.s"
}

// __dt__22dKankyo_sunlenz_PacketFv
// dKankyo_sunlenz_Packet::~dKankyo_sunlenz_Packet(void)
asm void func_800580A4(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800580A4.s"
}

// __dt__18dKankyo_sun_PacketFv
// dKankyo_sun_Packet::~dKankyo_sun_Packet(void)
asm void func_80058128(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058128.s"
}

// dKyw_wether_delete2__Fv
// dKyw_wether_delete2(void)
asm void dKyw_wether_delete2(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800581AC.s"
}

// __dt__21dKankyo_vrkumo_PacketFv
// dKankyo_vrkumo_Packet::~dKankyo_vrkumo_Packet(void)
asm void func_8005820C(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005820C.s"
}

// wether_move_thunder__Fv
// wether_move_thunder(void)
asm void wether_move_thunder(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058290.s"
}

// dKyw_wether_move__Fv
// dKyw_wether_move(void)
asm void dKyw_wether_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800582F8.s"
}

// wether_move_sun__Fv
// wether_move_sun(void)
asm void wether_move_sun(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058318.s"
}

// wether_move_rain__Fv
// wether_move_rain(void)
asm void wether_move_rain(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058894.s"
}

// wether_move_snow__Fv
// wether_move_snow(void)
asm void wether_move_snow(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058B00.s"
}

// wether_move_star__Fv
// wether_move_star(void)
asm void wether_move_star(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058B8C.s"
}

// wether_move_housi__Fv
// wether_move_housi(void)
asm void wether_move_housi(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80058F18.s"
}

// wether_move_odour__Fv
// wether_move_odour(void)
asm void wether_move_odour(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_800593DC.s"
}

// wether_move_moya__Fv
// wether_move_moya(void)
asm void wether_move_moya(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80059580.s"
}

// wether_move_vrkumo__Fv
// wether_move_vrkumo(void)
asm void wether_move_vrkumo(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80059728.s"
}

// wether_move_mud__Fv
// wether_move_mud(void)
asm void wether_move_mud(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80059E38.s"
}

// wether_move_evil__Fv
// wether_move_evil(void)
asm void wether_move_evil(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_80059F74.s"
}

// dKyw_wether_move_draw__Fv
// dKyw_wether_move_draw(void)
asm void dKyw_wether_move_draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005A0B8.s"
}

// dKyw_wether_move_draw2__Fv
// dKyw_wether_move_draw2(void)
asm void dKyw_wether_move_draw2(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005A154.s"
}

// dKyw_wether_draw__Fv
// dKyw_wether_draw(void)
asm void dKyw_wether_draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005A174.s"
}

// dKyw_wether_draw2__Fv
// dKyw_wether_draw2(void)
asm void dKyw_wether_draw2(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005A304.s"
}

// dKyw_wether_proc__Fv
// dKyw_wether_proc(void)
asm void dKyw_wether_proc(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005A340.s"
}

// dKyw_wind_init__Fv
// dKyw_wind_init(void)
asm void dKyw_wind_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005A57C.s"
}

// dKyw_wind_set__Fv
// dKyw_wind_set(void)
asm void dKyw_wind_set(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005A5C0.s"
}

// dKyw_get_wind_vec__Fv
// dKyw_get_wind_vec(void)
asm void dKyw_get_wind_vec(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AAE0.s"
}

// dKyw_get_wind_pow__Fv
// dKyw_get_wind_pow(void)
asm void dKyw_get_wind_pow(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AAF0.s"
}

// dKyw_get_wind_vecpow__Fv
// dKyw_get_wind_vecpow(void)
asm void dKyw_get_wind_vecpow(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AB00.s"
}

// dKyw_plight_collision_set__FP4cXyzssfffff
// dKyw_plight_collision_set(cXyz*, short, short, float, float, float, float, float)
asm void func_8005AB64(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AB64.s"
}

// squal_proc__Fv
// squal_proc(void)
asm void squal_proc(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AC30.s"
}

// dKyw_pntwind_init__Fv
// dKyw_pntwind_init(void)
asm void dKyw_pntwind_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AD44.s"
}

// pntwind_set__FP14WIND_INFLUENCE
// pntwind_set(WIND_INFLUENCE*)
asm void pntwind_set(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AD98.s"
}

// dKyw_pntwind_set__FP14WIND_INFLUENCE
// dKyw_pntwind_set(WIND_INFLUENCE*)
asm void func_8005ADFC(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005ADFC.s"
}

// dKyw_pntlight_set__FP14WIND_INFLUENCE
// dKyw_pntlight_set(WIND_INFLUENCE*)
asm void dKyw_pntlight_set(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AE28.s"
}

// dKyw_pntwind_cut__FP14WIND_INFLUENCE
// dKyw_pntwind_cut(WIND_INFLUENCE*)
asm void dKyw_pntwind_cut(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AE58.s"
}

// pntwind_get_info__FP4cXyzP4cXyzPfUc
// pntwind_get_info(cXyz*, cXyz*, float*, unsigned char)
asm void pntwind_get_info(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005AE90.s"
}

// dKyw_pntwind_get_info__FP4cXyzP4cXyzPf
// dKyw_pntwind_get_info(cXyz*, cXyz*, float*)
asm void dKyw_pntwind_get_info(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B23C.s"
}

// dKyw_pntlight_collision_get_info__FP4cXyzP4cXyzPf
// dKyw_pntlight_collision_get_info(cXyz*, cXyz*, float*)
asm void func_8005B260(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B260.s"
}

// dKyw_pntwind_get_vecpow__FP4cXyz
// dKyw_pntwind_get_vecpow(cXyz*)
asm void dKyw_pntwind_get_vecpow(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B284.s"
}

// dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf
// dKyw_get_AllWind_vec(cXyz*, cXyz*, float*)
asm void dKyw_get_AllWind_vec(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B2F8.s"
}

// dKyw_get_AllWind_vecpow__FP4cXyz
// dKyw_get_AllWind_vecpow(cXyz*)
asm void func_8005B530(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B530.s"
}

// dKyw_custom_windpower__Ff
// dKyw_custom_windpower(float)
asm void func_8005B60C(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B60C.s"
}

// dKyw_evt_wind_set__Fss
// dKyw_evt_wind_set(short, short)
asm void func_8005B61C(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B61C.s"
}

// dKyw_evt_wind_set_go__Fv
// dKyw_evt_wind_set_go(void)
asm void func_8005B638(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B638.s"
}

// dKyw_rain_set__Fi
// dKyw_rain_set(int)
asm void dKyw_rain_set(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_wether/asm/func_8005B64C.s"
}
};
