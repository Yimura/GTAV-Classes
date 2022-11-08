#pragma once

#include "../base/CBaseModelInfo.hpp"

#include <cstdint>

enum class eVehicleType : std::uint32_t
{
    VEHICLE_TYPE_NONE = 4294967295,
    VEHICLE_TYPE_CAR = 0,
    VEHICLE_TYPE_PLANE = 1,
    VEHICLE_TYPE_TRAILER = 2,
    VEHICLE_TYPE_QUADBIKE = 3,
    VEHICLE_TYPE_DRAFT = 4,
    VEHICLE_TYPE_SUBMARINECAR = 5,
    VEHICLE_TYPE_AMPHIBIOUS_AUTOMOBILE = 6,
    VEHICLE_TYPE_AMPHIBIOUS_QUADBIKE = 7,
    VEHICLE_TYPE_HELI = 8,
    VEHICLE_TYPE_BLIMP = 9,
    VEHICLE_TYPE_AUTOGYRO = 10,
    VEHICLE_TYPE_BIKE = 11,
    VEHICLE_TYPE_BICYCLE = 12,
    VEHICLE_TYPE_BOAT = 13,
    VEHICLE_TYPE_TRAIN = 14,
    VEHICLE_TYPE_SUBMARINE = 15,
};

enum class eVehicleClass : std::uint8_t
{
    VC_COMPACT = 0,
    VC_SEDAN = 1,
    VC_SUV = 2,
    VC_COUPE = 3,
    VC_MUSCLE = 4,
    VC_SPORT_CLASSIC = 5,
    VC_SPORT = 6,
    VC_SUPER = 7,
    VC_MOTORCYCLE = 8,
    VC_OFF_ROAD = 9,
    VC_INDUSTRIAL = 10,
    VC_UTILITY = 11,
    VC_VAN = 12,
    VC_CYCLE = 13,
    VC_BOAT = 14,
    VC_HELICOPTER = 15,
    VC_PLANE = 16,
    VC_SERVICE = 17,
    VC_EMERGENCY = 18,
    VC_MILITARY = 19,
    VC_COMMERCIAL = 20,
    VC_RAIL = 21,
    VC_OPEN_WHEEL = 22,
};

#pragma pack(push, 1)
class CVehicleModelInfo : public CBaseModelInfo
{
public:
    char pad_00A4[72]; //0x00A4
    uint8_t m_primary_color_combinations[25]; //0x00F8
    uint8_t m_secondary_color_combinations[25]; //0x0111
    uint8_t m_unk_color_combos1[25]; //0x012A
    uint8_t m_unk_color_combos2[25]; //0x0143
    uint8_t m_interior_color_combinations[25]; //0x015C
    uint8_t m_dashboard_color_combinations[25]; //0x0175
    char pad_018E[266]; //0x018E
    char m_name[12]; //0x0298
    char m_manufacturer[12]; //0x02A4
    uint16_t* m_modkits; //0x02B0
    uint16_t m_modkits_count; //0x02B8
    char pad_02BA[30]; //0x02BA
    uint8_t m_passenger_capacity; //0x02D8
    char pad_02D9[103]; //0x02D9
    eVehicleType m_vehicle_type; //0x0340
    uint32_t m_unk_vehicle_type; //0x0344
    uint32_t m_diffuse_tint; //0x0348
    char pad_034C[20]; //0x034C
    rage::fvector3 m_first_person_driveby_ik_offset; //0x0360
    char pad_036C[4]; //0x036C
    rage::fvector3 m_first_person_driveby_unarmed_ik_offset; //0x0370
    char pad_037C[20]; //0x037C
    rage::fvector3 m_first_person_driveby_right_passenger_ik_offset; //0x0390
    char pad_039C[36]; //0x039C
    rage::fvector3 m_first_person_driveby_right_passenger_unarmed_ik_offset; //0x03C0
    char pad_03CC[4]; //0x03CC
    rage::fvector3 m_first_person_projectile_driveby_ik_offset; //0x03D0
    char pad_03DC[4]; //0x03DC
    rage::fvector3 m_first_person_projectile_driveby_passenger_ik_offset; //0x03E0
    char pad_03EC[52]; //0x03EC
    rage::fvector3 m_first_person_mobile_phone_offset; //0x0420
    char pad_042C[4]; //0x042C
    rage::fvector3 m_first_person_passenger_mobile_phone_offset; //0x0430
    char pad_043C[20]; //0x043C
    rage::fvector3 m_pov_camera_offset; //0x0450
    char pad_045C[36]; //0x045C
    float m_pov_camera_vertical_adjustement_for_rollcage; //0x0480
    char pad_0484[8]; //0x0484
    float m_wheel_scale; //0x048C
    float m_wheel_scale_rear; //0x0490
    float m_default_health; //0x0494
    char pad_0498[4]; //0x0498
    float m_steer_wheel_multiplier; //0x049C
    char pad_04A0[168]; //0x04A0
    eVehicleClass m_vehicle_class; //0x0548
    char pad_0549[11];
    float m_min_seat_height; //0x0554
    char pad_0558[40]; //0x0558
    uint32_t m_is_jetski; //0x0580
    char pad_0584[28]; //0x0584
}; //Size: 0x05A0
static_assert(sizeof(CVehicleModelInfo) == 0x5A0);
#pragma pack(pop)
