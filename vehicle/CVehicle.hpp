#pragma once

#include "../entities/CPhysical.hpp"
#include "CHandlingData.hpp"

#include <cstdint>
#include <cmath>

#pragma pack(push, 1)
class CVehicle : public rage::CPhysical
{
public:
    char pad_02EC[0xC]; //0x02EC
    uint8_t m_boost_state; //0x02F8
    char pad_02F9[0x2]; //0x02F9
    uint8_t m_boost_allow_recharge; //0x02FB
    char pad_02FC[0x4]; //0x02FC
    float m_boost; //0x0300
    float m_rocket_recharge_speed; //0x304
    char pad_0308[0x88]; //0x0308
    float m_jump_boost_charge; //0x0390
    char pad_0394[0x43C]; //0x0394
    rage::fvector3 m_velocity; //0x07D0
    char pad_07DC[0x44]; //0x07DC
    float m_body_health; //0x0820
    float m_petrol_tank_health; //0x0824
    char pad_0x828[0xC0]; //0x0828
    float m_engine_health; //0x08E8
    char pad_08EC[0x2C]; //0x08EC
    CHandlingData* m_handling_data; //0x0918
    char pad_0920[0x2]; //0x0920
    uint8_t m_is_drivable; //0x0922
    uint8_t m_tyres_can_burst; //0x0923
    uint8_t m_deform_god; //0x0924
    char pad_0925[0xB3]; //0x0925
    float m_dirt_level; //0x09D8
    char pad_09DC[0xC2]; //0x09DC
    uint8_t m_is_targetable; //0x0A9E
    char pad_0A9F[0x19D]; //0x0A9F
    float m_gravity; //0x0C3C - might be start of some sub-class
    uint8_t m_max_passengers; //0x0C40
    char pad_0C41; //0x0C41
    uint8_t m_num_of_passengers; //0x0C42
    char pad_0C43[5]; //0x0C43
    class CPed* m_driver; //0x0C48
    class CPed* m_passengers[15]; //0x0C50
    class CPed* m_last_driver; //0x0CC8
    char pad_0CD0[0x6A0]; //0x0CD0
    uint32_t m_door_lock_status; //0x1370
    char pad_1374[0xDC]; //0x1374

    float get_speed() { return sqrt(m_velocity.x * m_velocity.x + m_velocity.y * m_velocity.y + m_velocity.z * m_velocity.z); }
};
static_assert(sizeof(CVehicle) == 0x1450);
#pragma pack(pop)
