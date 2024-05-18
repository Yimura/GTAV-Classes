#pragma once

#include "../base/CBaseModelInfo.hpp"
#include "vehicle/CVehicleModelInfoLayout.hpp"

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

enum class CVehicleModelInfoFlags : std::uint16_t
{
    SMALL_WORKER,
    BIG,
    NO_BOOT,
    ONLY_DURING_OFFICE_HOURS,
    BOOT_IN_FRONT,
    IS_VAN,
    AVOID_TURNS,
    HAS_LIVERY,
    LIVERY_MATCH_EXTRA,
    SPORTS,
    DELIVERY,
    UNK_0xB5A93F62,
    ONLY_ON_HIGHWAYS,
    TALL_SHIP,
    SPAWN_ON_TRAILER,
    SPAWN_BOAT_ON_TRAILER,
    EXTRAS_GANG,
    EXTRAS_CONVERTIBLE,
    EXTRAS_TAXI,
    EXTRAS_RARE,
    EXTRAS_REQUIRE,
    EXTRAS_STRONG,
    EXTRAS_ONLY_BREAK_WHEN_DESTROYED,
    EXTRAS_SCRIPT,
    EXTRAS_ALL,
    EXTRAS_MATCH_LIVERY,
    DONT_ROTATE_TAIL_ROTOR,
    PARKING_SENSORS,
    PEDS_CAN_STAND_ON_TOP,
    UNK_0x77C9F804,
    GEN_NAVMESH,
    LAW_ENFORCEMENT,
    EMERGENCY_SERVICE,
    DRIVER_NO_DRIVE_BY,
    NO_RESPRAY,
    IGNORE_ON_SIDE_CHECK,
    RICH_CAR,
    AVERAGE_CAR,
    POOR_CAR,
    ALLOWS_RAPPEL,
    DONT_CLOSE_DOOR_UPON_EXIT,
    USE_HIGHER_DOOR_TORQUE,
    DISABLE_THROUGH_WINDSHIELD,
    IS_ELECTRIC,
    NO_BROKEN_DOWN_SCENARIO,
    IS_JETSKI,
    DAMPEN_STICKYBOMB_DAMAGE,
    DONT_SPAWN_IN_CARGEN,
    IS_OFFROAD_VEHICLE,
    INCREASE_PED_COMMENTS,
    EXPLODE_ON_CONTACT,
    USE_FAT_INTERIOR_LIGHT,
    HEADLIGHTS_USE_ACTUAL_BONE_POS,
    FAKE_EXTRALIGHTS,
    CANNOT_BE_MODDED,
    DONT_SPAWN_AS_AMBIENT,
    IS_BULKY,
    BLOCK_FROM_ATTRACTOR_SCENARIO,
    IS_BUS,
    USE_STEERING_PARAM_FOR_LEAN,
    CANNOT_BE_DRIVEN_BY_PLAYER,
    SPRAY_PETROL_BEFORE_EXPLOSION,
    ATTACH_TRAILER_ON_HIGHWAY,
    ATTACH_TRAILER_IN_CITY,
    HAS_NO_ROOF,
    ALLOW_TARGETING_OF_OCCUPANTS,
    RECESSED_HEADLIGHT_CORONAS,
    RECESSED_TAILLIGHT_CORONAS,
    IS_TRACKED_FOR_TRAILS,
    HEADLIGHTS_ON_LANDINGGEAR,
    CONSIDERED_FOR_VEHICLE_ENTRY_WHEN_STOOD_ON,
    GIVE_SCUBA_GEAR_ON_EXIT,
    IS_DIGGER,
    IS_TANK,
    USE_COVERBOUND_INFO_FOR_COVERGEN,
    CAN_BE_DRIVEN_ON,
    HAS_BULLETPROOF_GLASS,
    CANNOT_TAKE_COVER_WHEN_STOOD_ON,
    INTERIOR_BLOCKED_BY_BOOT,
    DONT_TIMESLICE_WHEELS,
    FLEE_FROM_COMBAT,
    DRIVER_SHOULD_BE_FEMALE,
    DRIVER_SHOULD_BE_MALE,
    COUNT_AS_FACEBOOK_DRIVEN,
    BIKE_CLAMP_PICKUP_LEAN_RATE,
    PLANE_WEAR_ALTERNATIVE_HELMET,
    USE_STRICTER_EXIT_COLLISION_TESTS,
    TWO_DOORS_ONE_SEAT,
    USE_LIGHTING_INTERIOR_OVERRIDE,
    USE_RESTRICTED_DRIVEBY_HEIGHT,
    CAN_HONK_WHEN_FLEEING,
    PEDS_INSIDE_CAN_BE_SET_ON_FIRE_MP,
    REPORT_CRIME_IF_STANDING_ON,
    HELI_USES_FIXUPS_ON_OPEN_DOOR,
    FORCE_ENABLE_CHASSIS_COLLISION,
    CANNOT_BE_PICKUP_BY_CARGOBOB,
    CAN_HAVE_NEONS,
    HAS_INTERIOR_EXTRAS,
    HAS_TURRET_SEAT_ON_VEHICLE,
    ALLOW_OBJECT_LOW_LOD_COLLISION,
    DISABLE_AUTO_VAULT_ON_VEHICLE,
    USE_TURRET_RELATIVE_AIM_CALCULATION,
    USE_FULL_ANIMS_FOR_MP_WARP_ENTRY_POINTS,
    HAS_DIRECTIONAL_SHUFFLES,
    DISABLE_WEAPON_WHEEL_IN_FIRST_PERSON,
    USE_PILOT_HELMET,
    USE_WEAPON_WHEEL_WITHOUT_HELMET,
    PREFER_ENTER_TURRET_AFTER_DRIVER,
    USE_SMALLER_OPEN_DOOR_RATIO_TOLERANCE,
    USE_HEADING_ONLY_IN_TURRET_MATRIX,
    DONT_STOP_WHEN_GOING_TO_CLIMB_UP_POINT,
    HAS_REAR_MOUNTED_TURRET,
    DISABLE_BUSTING,
    IGNORE_RWINDOW_COLLISION,
    HAS_GULL_WING_DOORS,
    CARGOBOB_HOOK_UP_CHASSIS,
    USE_FIVE_ANIM_THROW_FP,
    ALLOW_HATS_NO_ROOF,
    HAS_REAR_SEAT_ACTIVITIES,
    HAS_LOWRIDER_HYDRAULICS,
    HAS_BULLET_RESISTANT_GLASS,
    HAS_INCREASED_RAMMING_FORCE,
    HAS_CAPPED_EXPLOSION_DAMAGE,
    HAS_LOWRIDER_DONK_HYDRAULICS,
    HELICOPTER_WITH_LANDING_GEAR,
    JUMPING_CAR,
    HAS_ROCKET_BOOST,
    RAMMING_SCOOP,
    HAS_PARACHUTE,
    RAMP,
    HAS_EXTRA_SHUFFLE_SEAT_ON_VEHICLE,
    FRONT_BOOT,
    HALF_TRACK,
    RESET_TURRET_SEAT_HEADING,
    TURRET_MODS_ON_ROOF,
    UPDATE_WEAPON_BATTERY_BONES,
    DONT_HOLD_LOW_GEARS_WHEN_ENGINE_UNDER_LOAD,
    HAS_GLIDER,
    INCREASE_LOW_SPEED_TORQUE,
    USE_AIRCRAFT_STYLE_WEAPON_TARGETING,
    KEEP_ALL_TURRETS_SYNCHRONISED,
    SET_WANTED_FOR_ATTACHED_VEH,
    TURRET_ENTRY_ATTACH_TO_DRIVER_SEAT,
    USE_STANDARD_FLIGHT_HELMET,
    SECOND_TURRET_MOD,
    THIRD_TURRET_MOD,
    HAS_EJECTOR_SEATS,
    UNK_0x2028D687,
    HAS_JATO_BOOST_MOD,
    IGNORE_TRAPPED_HULL_CHECK,
    HOLD_TO_SHUFFLE,
    TURRET_MOD_WITH_NO_STOCK_TURRET,
    EQUIP_UNARMED_ON_ENTER,
    DISABLE_CAMERA_PUSH_BEYOND,
    HAS_VERTICAL_FLIGHT_MODE,
    HAS_OUTRIGGER_LEGS,
    CAN_NAVIGATE_TO_ON_VEHICLE_ENTRY,
    DROP_SUSPENSION_WHEN_STOPPED,
    DONT_CRASH_ABANDONED_NEAR_GROUND,
    USE_INTERIOR_RED_LIGHT,
    HAS_HELI_STRAFE_MODE,
    HAS_VERTICAL_ROCKET_BOOST,
    CREATE_WEAPON_MANAGER_ON_SPAWN,
    USE_ROOT_AS_BASE_LOCKON_POS,
    HEADLIGHTS_ON_TAP_ONLY,
    CHECK_WARP_TASK_DURING_ENTER,
    USE_RESTRICTED_DRIVEBY_HEIGHT_HIGH,
    INCREASE_CAMBER_WITH_SUSPENSION_MOD,
    NO_HEAVY_BRAKE_ANIMATION,
    HAS_TWO_BONNET_BONES,
    DONT_LINK_BOOT2,
    HAS_INCREASED_RAMMING_FORCE_WITH_CHASSIS_MOD,
    UNK_0x4C8630D9,
    HAS_EXTENDED_COLLISION_MODS,
    HAS_NITROUS_MOD,
    HAS_JUMP_MOD,
    HAS_RAMMING_SCOOP_MOD,
    HAS_SUPER_BRAKES_MOD,
    CRUSHES_OTHER_VEHICLES,
    HAS_WEAPON_BLADE_MODS,
    HAS_WEAPON_SPIKE_MODS,
    FORCE_BONNET_CAMERA_INSTEAD_OF_POV,
    RAMP_MOD,
    HAS_TOMBSTONE,
    HAS_SIDE_SHUNT,
    HAS_FRONT_SPIKE_MOD,
    HAS_RAMMING_BAR_MOD,
    TURRET_MODS_ON_CHASSIS5,
    HAS_SUPERCHARGER,
    IS_TANK_WITH_FLAME_DAMAGE,
    DISABLE_DEFORMATION,
    ALLOW_RAPPEL_AI_ONLY,
    USE_RESTRICTED_DRIVEBY_HEIGHT_MID_ONLY,
    FORCE_AUTO_VAULT_ON_VEHICLE_WHEN_STUCK,
    SPOILER_MOD_DOESNT_INCREASE_GRIP,
    NO_REVERSING_ANIMATION,
    IS_QUADBIKE_USING_BIKE_ANIMATIONS,
    IS_FORMULA_VEHICLE,
    LATCH_ALL_JOINTS,
    REJECT_ENTRY_TO_VEHICLE_WHEN_STOOD_ON,
    CHECK_IF_DRIVER_SEAT_IS_CLOSER_THAN_TURRETS_WITH_ON_BOARD_ENTER,
    RENDER_WHEELS_WITH_ZERO_COMPRESSION,
    USE_LENGTH_OF_VEHICLE_BOUNDS_FOR_PLAYER_LOCKON_POS,
    PREFER_FRONT_SEAT
};

#pragma pack(push, 1)
class CVehicleModelInfo : public CBaseModelInfo
{
public:
    CVehicleModelInfoLayout* m_vehicle_layout; //0x00B0
    char pad_00B8[64]; //0x00B8
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
    uint16_t m_diffuse_tint; //0x0348
    int8_t m_max_seats; //0x034A
    char pad_034B[5]; //0x034B
    CVehicleLayoutMetaData* m_layout_metadata; //0x0350
    char pad_0358[8]; //0x0358
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
    char pad_0558[36]; //0x0558
    uint32_t m_vehicle_model_flags[7]; // 0x057C

    inline bool get_vehicle_model_flag(const CVehicleModelInfoFlags flag)
    {
        const auto index = static_cast<uint16_t>(flag);

        return this->m_vehicle_model_flags[index / 32] & (1 << (index % 32));
    }

    inline void set_vehicle_model_flag(const CVehicleModelInfoFlags flag, bool toggle)
    {
        const auto index = static_cast<uint16_t>(flag);

        if (toggle)
            this->m_vehicle_model_flags[index / 32] |= (1 << (index % 32));
        else
            this->m_vehicle_model_flags[index / 32] &= ~(1 << (index % 32));
    }
}; //Size: 0x0598
static_assert(sizeof(CVehicleModelInfo) == 0x598);
#pragma pack(pop)