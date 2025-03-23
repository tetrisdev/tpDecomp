//
// Generated By: dol2asm
// Translation Unit: d_a_tag_event
//

#include "d/actor/d_a_tag_event.h"
#include "d/d_com_inf_game.h"
#include "dol2asm.h"
#include "d/actor/d_a_horse.h"

/* 8048AD38-8048AD68 000078 0030+00 1/1 0/0 0/0 .text            daTag_getBk__FUl */
static fopAc_ac_c* daTag_getBk(u32 param_0) {
    return fopAcM_searchFromName("Bk", 0xF, param_0);
}

/* 8048AD68-8048AD74 0000A8 000C+00 4/4 0/0 0/0 .text            getEventNo__13daTag_Event_cFv */
u8 daTag_Event_c::getEventNo() {
    return fopAcM_GetParam(this) >> 0x18;
}

/* 8048AD74-8048AD80 0000B4 000C+00 4/4 0/0 0/0 .text            getSwbit__13daTag_Event_cFv */
u8 daTag_Event_c::getSwbit() {
    return fopAcM_GetParam(this) >> 0x8;
}

/* 8048AD80-8048AD8C 0000C0 000C+00 1/1 0/0 0/0 .text            getSwbit2__13daTag_Event_cFv */
u8 daTag_Event_c::getSwbit2() {
    return fopAcM_GetParam(this) >> 0x10;
}

/* 8048AD8C-8048AD98 0000CC 000C+00 1/1 0/0 0/0 .text            getType__13daTag_Event_cFv */
u8 daTag_Event_c::getType() {
    return fopAcM_GetParam(this);
}

/* 8048AD98-8048ADA4 0000D8 000C+00 1/1 0/0 0/0 .text getInvalidEventFlag__13daTag_Event_cFv */
u16 daTag_Event_c::getInvalidEventFlag() {
    return home.angle.x & 0x7FFF;
}

/* 8048ADA4-8048ADB0 0000E4 000C+00 1/1 0/0 0/0 .text            getAreaType__13daTag_Event_cFv */
u16 daTag_Event_c::getAreaType() {
    return home.angle.x & 0x8000;
}

/* 8048ADB0-8048ADBC 0000F0 000C+00 1/1 0/0 0/0 .text getValidEventFlag__13daTag_Event_cFv */
u16 daTag_Event_c::getValidEventFlag() {
    return home.angle.z;
}

/* 8048ADBC-8048ADEC 0000FC 0030+00 2/2 0/0 0/0 .text            horseRodeo__13daTag_Event_cFv */
BOOL daTag_Event_c::horseRodeo() {
    if (getType() == 5) {
        return true;
    } else {
        return false;
    }
}

/* 8048ADEC-8048AEEC 00012C 0100+00 2/2 0/0 0/0 .text            arrivalTerms__13daTag_Event_cFv */
BOOL daTag_Event_c::arrivalTerms() {
    int swbit2 = getSwbit2();
    if (swbit2 != 0xFF) {
        if (!dComIfGs_isSwitch(swbit2, fopAcM_GetRoomNo(this))) {
            return false;
        }
    }

    u16 invalid_flag = getInvalidEventFlag();
    if (invalid_flag != 0x7FFF && invalid_flag != 0 &&
        dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[invalid_flag]))
    {
        return false;
    }

    u16 valid_flag = getValidEventFlag();
    if (valid_flag != 0xFFFF && valid_flag != 0 &&
        !dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[valid_flag]))
    {
        return false;
    }

    return true;
}

/* 8048AEEC-8048AEF8 00022C 000C+00 1/1 0/0 0/0 .text            demoInitProc__13daTag_Event_cFv */
void daTag_Event_c::demoInitProc() {
    field_0x56e = 0;
}

/* 8048AEF8-8048AEFC 000238 0004+00 1/1 0/0 0/0 .text            demoEndProc__13daTag_Event_cFv */
void daTag_Event_c::demoEndProc() {}

/* 8048AEFC-8048AF00 00023C 0004+00 1/1 0/0 0/0 .text            demoProc__13daTag_Event_cFv */
void daTag_Event_c::demoProc() {}

/* 8048AF00-8048B0E4 000240 01E4+00 1/1 0/0 0/0 .text            create__13daTag_Event_cFv */
int daTag_Event_c::create() {
    fopAcM_SetupActor(this, daTag_Event_c);

    int swbit = getSwbit();
    int room_no = fopAcM_GetRoomNo(this);

    mEventIdx = dComIfGp_getEventManager().getEventIdx(this, getEventNo());
    mMapToolId = -1;
    mMapEventIdx = -1;

    dStage_MapEvent_dt_c* event_data = dEvt_control_c::searchMapEventData(getEventNo(), room_no);
    if (event_data != NULL) {
        mMapToolId = event_data->field_0x5;
        mMapEventIdx = dComIfGp_getEventManager().getEventIdx(this, mMapToolId);
    }

    eventInfo.setEventId(mEventIdx);
    eventInfo.setMapToolId(getEventNo());

    if (mEventIdx != -1 || horseRodeo() && (swbit == 0xFF || !dComIfGs_isSwitch(swbit, room_no)))
    {
        setActio(ACTION_ARRIVAL);
    } else {
        setActio(ACTION_WAIT);
    }

    shape_angle.z = 0;
    shape_angle.x = 0;
    current.angle.z = 0;
    current.angle.x = 0;

    scale.x *= 100.0f;
    scale.y *= 100.0f;
    scale.z *= 100.0f;

    if (horseRodeo()) {
        if (dComIfGs_isEventBit(dSv_event_flag_c::M_023)) {
            return cPhs_ERROR_e;
        }

        scale.x *= 10.0f;
        scale.y *= 10.0f;
        scale.z *= 10.0f;
    }

    return cPhs_COMPLEATE_e;
}

/* 8048B0E4-8048B1B0 000424 00CC+00 1/1 0/0 0/0 .text            actionNext__13daTag_Event_cFv */
int daTag_Event_c::actionNext() {
    if (eventInfo.checkCommandDemoAccrpt()) {
        mEventIdx = mMapEventIdx;
        mMapEventIdx = -1;

        dStage_MapEvent_dt_c* event_data =
            dEvt_control_c::searchMapEventData(mMapToolId, fopAcM_GetRoomNo(this));
        if (event_data != NULL) {
            mMapToolId = event_data->field_0x5;
            mMapEventIdx = dComIfGp_getEventManager().getEventIdx(this, mMapToolId);
        } else {
            mMapToolId = -1;
        }

        setActio(ACTION_EVENT);
        actionEvent();
    } else {
        fopAcM_orderOtherEventId(this, mMapEventIdx, mMapToolId, 0xFFFF, 0, 1);
    }

    return 1;
}

/* 8048B1B0-8048B268 0004F0 00B8+00 3/3 0/0 0/0 .text            actionEvent__13daTag_Event_cFv */
int daTag_Event_c::actionEvent() {
    if (dComIfGp_evmng_endCheck(mEventIdx)) {
        dComIfGp_event_reset();

        if (mMapEventIdx != -1) {
            setActio(ACTION_NEXT);
            fopAcM_orderOtherEventId(this, mMapEventIdx, mMapToolId, 0xFFFF, 0, 1);
        } else {
            setActio(ACTION_WAIT);
            demoEndProc();
            mMapToolId = -1;
        }
    } else {
        demoProc();
    }

    return 1;
}

/* 8048B268-8048B378 0005A8 0110+00 1/1 0/0 0/0 .text            actionReady__13daTag_Event_cFv */
int daTag_Event_c::actionReady() {
    int swbit = getSwbit();

    if (eventInfo.checkCommandDemoAccrpt()) {
        demoInitProc();
        setActio(ACTION_EVENT);
        actionEvent();

        if (swbit != 0xFF) {
            dComIfGs_onSwitch(swbit, fopAcM_GetRoomNo(this));
        }

        if (horseRodeo() && dComIfGp_getHorseActor() != NULL) {
            dComIfGp_getHorseActor()->onRodeoMode();
        }
    } else {
        if (swbit != 0xFF && dComIfGs_isSwitch(swbit, fopAcM_GetRoomNo(this))) {
            setActio(ACTION_WAIT);
        } else {
            fopAcM_orderOtherEventId(this, mEventIdx, getEventNo(), 0xFFFF, 0, 1);
        }
    }

    return 1;
}

/* 8048B378-8048B514 0006B8 019C+00 1/1 0/0 0/0 .text            checkArea__13daTag_Event_cFv */
BOOL daTag_Event_c::checkArea() {
    cXyz pos;
    daPy_py_c* player = dComIfGp_getLinkPlayer();

    if (getAreaType() == 0x8000) {
        pos = player->current.pos;

        cXyz start(current.pos.x - scale.x * 0.5f, current.pos.y, current.pos.z - scale.z * 0.5f);
        cXyz end(current.pos.x + scale.x * 0.5f, current.pos.y + scale.y,
                 current.pos.z + scale.z * 0.5f);

        if (start.x <= pos.x && pos.x <= end.x && start.y <= pos.y && pos.y <= end.y &&
            start.z <= pos.z && pos.z <= end.z)
        {
            return true;
        }
    } else {
        pos = player->current.pos - current.pos;

        if (pos.y < 0.0f) {
            pos.y = -pos.y;
        }

        if (pos.abs2XZ() < scale.x * scale.x && pos.y <= scale.y) {
            return true;
        }
    }

    return false;
}

/* 8048B514-8048B5C8 000854 00B4+00 2/2 0/0 0/0 .text            actionHunt__13daTag_Event_cFv */
int daTag_Event_c::actionHunt() {
    int swbit = getSwbit();

    if (swbit != 0xFF && dComIfGs_isSwitch(swbit, fopAcM_GetRoomNo(this))) {
        setActio(ACTION_WAIT);
    } else if (arrivalTerms() && checkArea()) {
        setActio(ACTION_READY);
        fopAcM_orderOtherEventId(this, mEventIdx, getEventNo(), 0xFFFF, 0, 1);
    }

    return 1;
}

/* 8048B5C8-8048B5F4 000908 002C+00 1/1 0/0 0/0 .text            actionArrival__13daTag_Event_cFv */
int daTag_Event_c::actionArrival() {
    setActio(ACTION_HUNT);
    actionHunt();
    return 1;
}

/* 8048B5F4-8048B5FC 000934 0008+00 1/1 0/0 0/0 .text            actionWait__13daTag_Event_cFv */
int daTag_Event_c::actionWait() {
    return true;
}

/* 8048B5FC-8048B6D4 00093C 00D8+00 1/1 0/0 0/0 .text            actionHunt2__13daTag_Event_cFv */
int daTag_Event_c::actionHunt2() {
    int swbit = getSwbit();

    if (swbit != 0xFF && dComIfGs_isSwitch(swbit, fopAcM_GetRoomNo(this))) {
        setActio(ACTION_WAIT);
    } else if (arrivalTerms() && daTag_getBk(field_0x573) == NULL) {
        if (mHunt2Timer > 0) {
            mHunt2Timer--;
        } else {
            setActio(ACTION_READY);
            fopAcM_orderOtherEventId(this, mEventIdx, getEventNo(), 0xFFFF, 0, 1);
        }
    } else {
        mHunt2Timer = 65;
    }

    return 1;
}

/* 8048B6D4-8048B784 000A14 00B0+00 1/1 0/0 0/0 .text            execute__13daTag_Event_cFv */
int daTag_Event_c::execute() {
    if (home.roomNo != dComIfGp_roomControl_getStayNo()) {
        return 0;
    }

    switch (mAction) {
    case ACTION_ARRIVAL:
        actionArrival();
        break;
    case ACTION_HUNT:
        actionHunt();
        break;
    case ACTION_HUNT2:
        actionHunt2();
        break;
    case ACTION_READY:
        actionReady();
        break;
    case ACTION_NEXT:
        actionNext();
        break;
    case ACTION_EVENT:
        actionEvent();
        break;
    default:
        actionWait();
    }

    return 1;
}

/* 8048B784-8048B78C 000AC4 0008+00 1/1 0/0 0/0 .text            draw__13daTag_Event_cFv */
int daTag_Event_c::draw() {
    return 1;
}

/* 8048B78C-8048B7AC 000ACC 0020+00 1/0 0/0 0/0 .text            daTag_Event_Draw__FP13daTag_Event_c
 */
static int daTag_Event_Draw(daTag_Event_c* i_this) {
    return i_this->draw();
}

/* 8048B7AC-8048B7D0 000AEC 0024+00 1/0 0/0 0/0 .text daTag_Event_Execute__FP13daTag_Event_c */
static int daTag_Event_Execute(daTag_Event_c* i_this) {
    i_this->execute();
    return 1;
}

/* 8048B7D0-8048B7D8 000B10 0008+00 1/0 0/0 0/0 .text daTag_Event_IsDelete__FP13daTag_Event_c */
static int daTag_Event_IsDelete(daTag_Event_c* i_this) {
    return 1;
}

/* 8048B7D8-8048B808 000B18 0030+00 1/0 0/0 0/0 .text daTag_Event_Delete__FP13daTag_Event_c */
static int daTag_Event_Delete(daTag_Event_c* i_this) {
    i_this->~daTag_Event_c();
    return 1;
}

/* 8048B808-8048B828 000B48 0020+00 1/0 0/0 0/0 .text            daTag_Event_Create__FP10fopAc_ac_c
 */
static int daTag_Event_Create(fopAc_ac_c* i_this) {
    return static_cast<daTag_Event_c*>(i_this)->create();
}

/* 8048B844-8048B864 -00001 0020+00 1/0 0/0 0/0 .data            l_daTag_Event_Method */
static actor_method_class l_daTag_Event_Method = {
    (process_method_func)daTag_Event_Create,  (process_method_func)daTag_Event_Delete,
    (process_method_func)daTag_Event_Execute, (process_method_func)daTag_Event_IsDelete,
    (process_method_func)daTag_Event_Draw,
};

/* 8048B864-8048B894 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_EVENT */
extern actor_process_profile_definition g_profile_TAG_EVENT = {
    fpcLy_CURRENT_e,
    7,
    fpcPi_CURRENT_e,
    PROC_TAG_EVENT,
    &g_fpcLf_Method.base,
    sizeof(daTag_Event_c),
    0,
    0,
    &g_fopAc_Method.base,
    281,
    &l_daTag_Event_Method,
    0x44000,
    fopAc_ACTOR_e,
    fopAc_CULLBOX_6_e,
};
