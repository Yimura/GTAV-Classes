#pragma once

#include "CAmmoProjectileInfo.hpp"
#include "CHomingRocketParams.hpp"

#include <cstdint>

class CAmmoRocketInfo : public CAmmoProjectileInfo
{
public:
    float m_forward_drag_coeff; //0x0170
    float m_side_drag_coeff; //0x0174
    float m_time_before_homing; //0x0178
    float m_time_before_switch_target_min; //0x017C
    float m_time_before_switch_target_max; //0x0180
    float m_proximity_radius; //0x0184
    float m_pitch_change_rate; //0x0188
    float m_yaw_change_rate; //0x018C
    float m_roll_change_rate; //0x0190
    float m_max_roll_angle_sin; //0x0194
    float m_lifetime_player_vehicle_locked_override_mp; //0x0198
    class CHomingRocketParams m_homing_rocket_params; //0x019C
}; // Size: 0x01BC
static_assert(sizeof(CAmmoRocketInfo) == 0x1BC);