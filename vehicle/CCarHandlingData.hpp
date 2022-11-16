#pragma once
#include <cstdint>

#include "CAdvancedData.hpp"
#include "CBaseSubHandlingData.hpp"
#include "../rage/atArray.hpp"

enum eAdvancedFlags
{
    NONE,
    CF_DIFF_FRONT = 1 << 0,
    CF_DIFF_REAR = 1 << 1,
    CF_DIFF_CENTRE = 1 << 2,
    CF_DIFF_LIMITED_FRONT = 1 << 3,
    CF_DIFF_LIMITED_REAR = 1 << 4,
    CF_DIFF_LIMITED_CENTRE = 1 << 5,
    CF_DIFF_LOCKING_FRONT = 1 << 6,
    CF_DIFF_LOCKING_REAR = 1 << 7,
    CF_DIFF_LOCKING_CENTRE = 1 << 8,
    CF_GEARBOX_FULL_AUTO = 1 << 9,
    CF_GEARBOX_MANUAL = 1 << 10,
    CF_GEARBOX_DIRECT_SHIFT = 1 << 11,
    CF_GEARBOX_ELECTRIC = 1 << 12,
    CF_ASSIST_TRACTION_CONTROL = 1 << 13,
    CF_ASSIST_STABILITY_CONTROL = 1 << 14,
    CF_ALLOW_REDUCED_SUSPENSION_FORCE = 1 << 15,
    CF_HARD_REV_LIMIT = 1 << 16,
    CF_HOLD_GEAR_WITH_WHEELSPIN = 1 << 17,
    CF_INCREASE_SUSPENSION_FORCE_WITH_SPEED = 1 << 18,
    CF_BLOCK_INCREASED_ROT_VELOCITY_WITH_DRIVE_FORCE = 1 << 19,
    CF_REDUCED_SELF_RIGHTING_SPEED = 1 << 20,
    CF_CLOSE_RATIO_GEARBOX = 1 << 21,
    CF_FORCE_SMOOTH_RPM = 1 << 22,
    CF_ALLOW_TURN_ON_SPOT = 1 << 23,
    CF_CAN_WHEELIE = 1 << 24,
    CF_ENABLE_WHEEL_BLOCKER_SIDE_IMPACTS = 1 << 25,
    CF_FIX_OLD_BUGS = 1 << 26,
    CF_USE_DOWNFORCE_BIAS = 1 << 27,
    CF_REDUCE_BODY_ROLL_WITH_SUSPENSION_MODS = 1 << 28,
    CF_ALLOWS_EXTENDED_MODS = 1 << 29
};

class CCarHandlingData : public CBaseSubHandlingData
{
public:
    float m_back_end_popup_car_impulse_mult;        //0x0008
    float m_back_end_popup_building_impulse_mult;   //0x000C
    float m_back_end_popup_max_delta_speed;         //0x0010
    float m_toe_front;                              //0x0014
    float m_toe_rear;                               //0x0018
    float m_camber_front;                           //0x001C
    float m_camber_rear;                            //0x0020
    float m_castor;                                 //0x0024
    float m_engine_resistance;                      //0x0028
    float m_max_drive_bias_transfer;                //0x002C
    float m_jumpforce_scale;                        //0x0030
    float m_unk_034;                                //0x0034
    uint32_t m_unk_038;                             //0x0038
    uint32_t m_advanced_flags;                      //0x003C
    rage::atArray<CAdvancedData> m_advanced_data;   //0x0040
};