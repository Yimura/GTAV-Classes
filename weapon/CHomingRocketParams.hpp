#pragma  once

class CHomingRocketParams
{
public:
    bool m_should_use_homing_params_from_info; //0x0000
    bool m_should_ignore_owner_combat_behaviour; //0x0001
    float m_time_before_starting_homing; //0x0004
    float m_time_before_homing_angle_break; //0x0008
    float m_turn_rate_modifier; //0x000C
    float m_pitch_yaw_roll_clamp; //0x0010
    float m_default_homing_rocket_break_lock_angle; //0x0014
    float m_default_homing_rocket_break_lock_angle_close; //0x0018
    float m_default_homing_rocket_break_lock_close_distance; //0x001C
}; // Size: 0x0020
static_assert(sizeof(CHomingRocketParams) == 0x20);