#pragma once

#include "CAmmoInfo.hpp"
#include "CItemInfo.hpp"
#include "../rage/vector.hpp"
#include "../enums/eExplosionTag.hpp"

#include <cstdint>

enum class eDamageType : int32_t
{
    Unknown,
    None,
    Melee,
    Bullet,
    BulletRubber,
    Explosive,
    Fire,
    Collision,
    Fall,
    Drown,
    Electric,
    BarbedWire,
    FireExtinguisher,
    Smoke,
    WaterCannon,
    Tranquilizer
};

enum class eFireType : int32_t
{
    None,
    Melee,
    InstantHit,
    DelayedHit,
    ProjectTile,
    VolumetricParticle
};

enum class eWeaponWheelSlot : int32_t
{
    Pistol,
    SMG,
    Rifle,
    Sniper,
    UnarmedMelee,
    ShotGun,
    Heavy,
    ThrowableSpecial
};

class AimingInfo;
class CWeaponInfo : public CItemInfo
{
public:
    eDamageType m_damage_type; //0x0020
    class sExplosion
    {
    public:
        enum eExplosionTag m_default; //0x0000
        enum eExplosionTag m_hit_car; //0x0004
        enum eExplosionTag m_hit_truck; //0x0008
        enum eExplosionTag m_hit_bike; //0x000C
        enum eExplosionTag m_hit_boat; //0x0010
        enum eExplosionTag m_hit_plane; //0x0014
    } m_explosion; //0x0024
    static_assert(sizeof(sExplosion) == 0x18);
    struct sFrontClearTestParams
    {
    public:
        bool m_should_perform_front_clear_test; //0x0000
        float m_forward_offset; //0x0004
        float m_vertical_offset; //0x0008
        float m_horizontal_offset; //0x000C
        float m_capsule_radius; //0x0010
        float m_capsule_length; //0x0014
    } m_front_clear_test_params; //0x003C
    static_assert(sizeof(sFrontClearTestParams) == 0x18);
    eFireType m_fire_type; //0x0054
    eWeaponWheelSlot m_wheel_slot; //0x0058
    uint32_t m_group; //0x005C
    class CAmmoInfo *m_ammo_info; //0x0060
    class CAimingInfo *m_aiming_info; //0x0068
    uint32_t m_clip_size; //0x0070
    float m_accuracy_spread; //0x0074
    float m_accurate_mode_accuracy_modifier; //0x0078
    float m_run_and_gun_accuracy; //0x007C
    float m_run_and_gun_min_accuracy; //0x0080
    float m_recoil_accuracy_max; //0x0084
    float m_recoil_error_time; //0x0088
    float m_recoil_recovery_rate; //0x008C
    float m_recoil_accuracy_to_allow_headshot_ai; //0x0090
    float m_min_headshot_distance_ai; //0x0094
    float m_max_headshot_distance_ai; //0x0098
    float m_headshot_damage_modifier_ai; //0x009C
    float m_recoil_accuracy_to_allow_headshot_player; //0x00A0
    float m_min_headshot_distance_player; //0x00A4
    float m_max_headshot_distance_player; //0x00A8
    float m_headshot_damage_modifier_player; //0x00AC
    float m_damage; //0x00B0
    float m_damage_time; //0x00B4
    float m_damage_time_in_vehicle; //0x00B8
    float m_damage_time_in_vehicle_headshot; //0x00BC
    float N000008F9; //0x00C0
    uint32_t N00000898; //0x00C4
    float m_hit_limbs_damage_modifier; //0x00C8
    float m_network_hit_limbs_damage_modifier; //0x00CC
    float m_lightly_armoured_damage_modifier; //0x00D0
    float m_vehicle_damage_modifier; //0x00D4
    float m_force; //0x00D8
    float m_force_on_ped; //0x00DC
    float m_force_on_vehicle; //0x00E0
    float m_force_on_heli; //0x00E4
    char pad_00E8[16]; //0x00E8
    float m_force_max_strength_mult; //0x00F8
    float m_force_falloff_range_start; //0x00FC
    float m_force_falloff_range_end; //0x0100
    float m_force_falloff_range_min; //0x0104
    float m_project_force; //0x0108
    float m_frag_impulse; //0x010C
    float m_penetration; //0x0110
    float m_vertical_launch_adjustment; //0x0114
    float m_drop_forward_velocity; //0x0118
    float m_speed; //0x011C
    uint32_t m_bullets_in_batch; //0x0120
    float m_batch_spread; //0x0124
    float m_reload_time_mp; //0x0128
    float m_reload_time_sp; //0x012C
    float m_vehicle_reload_time; //0x0130
    float m_anim_reload_time; //0x0134
    int32_t m_bullets_per_anime_loop; //0x0138
    float m_time_between_shots; //0x013C
    float m_time_left_between_shots_where_should_fire_is_cached; //0x0140
    float m_spinup_time; //0x0144
    float m_spin_time; //0x0148
    float m_spindown_time; //0x014C
    float m_alternate_wait_time; //0x0150
    char pad_0154[296]; //0x0154
    float m_network_player_damage_modifier; //0x027C
    float m_network_ped_damage_modifier; //0x0280
    float m_network_headshot_modifier; //0x0284
    float m_lock_on_range; //0x0288
    float m_weapon_range; //0x028C
    float m_ai_sound_range; //0x0290
    float m_ai_potential_blast_event_range; //0x0294
    float m_damage_fall_off_range_min; //0x0298
    float m_damage_fall_off_range_max; //0x029C
    float m_damage_fall_off_modifier; //0x02A0
    uint32_t m_vehicle_weapon_hash; //0x02A4
    uint32_t m_default_camera_hash; //0x02B8
    uint32_t m_aim_camera_hash; //0x02BC
    uint32_t m_fire_camera_hash; //0x02C0
    uint32_t m_cover_camera_hash; //0x02C4
    uint32_t m_cover_ready_to_fire_hash; //0x02C8
    uint32_t m_run_and_gun_camera_hash; //0x02CC
    uint32_t m_cinematic_shooting_camera_hash; //0x02D0
    uint32_t m_alt_or_scoped_camera_hash; //0x002D4
    uint32_t m_run_and_gun_alt_or_scoped_camera_hash; //0x02D8
    uint32_t m_cinematic_shooting_alt_or_scoped_camera_hash; //0x2DC
    uint32_t m_pov_turret_camera_hash; //0x2E0
    uint32_t m_recoil_shake_hash; //0x02E4
    uint32_t m_recoil_shake_hash_first_person; //0x02E8
    float m_min_time_between_recoil_shakes; //0x02EC
    float m_recoil_shake_amplitude; //0x02F0
    float m_explosion_shake_amplitude; //0x02F4
    float m_camera_fov; //0x02FC
    float m_first_person_aim_fov_min; //0x0300
    float m_first_person_aim_fov_max; //0x0300
    float m_first_person_scope_fov; //0x0308
    float m_first_person_scope_attachment_fov; //0x030C
    char pad_00310[636]; //0x00310
    rage::fvector2 m_reticule_hud_position; //0x0590
    rage::fvector2 m_reticule_hud_position_pov_turret; //0x0598
    float m_reticule_min_size_standing; //0x05A0
    float m_reticule_min_size_crouched; //0x05A4
    float m_reticule_scale; //0x05A8
    uint32_t m_reticule_style_hash; //0x05AC
    uint32_t m_first_person_reticule_style_hash; //0x05B0
    uint32_t m_pickup_hash; //0x05B4
    uint32_t m_mp_pickup_hash; //0x05B8
    uint32_t m_human_name_hash; //0x05BC
    uint32_t m_audio_collision_hash; //0x05C0
    uint32_t m_movement_mode_conditional_idle_hash; //0x05C4
    uint8_t m_ammo_diminishing_rate; //0x05C8
    int8_t m_hud_damage; //0x05C9
    int8_t m_hud_speed; //0x05CA
    int8_t m_hud_capacity; //0x05CB
    int8_t m_hud_accuracy; //0x05CC
    float m_hud_range; //0x05CD
    float m_aiming_breathing_additive_weight; //0x05D0
    float m_firing_breathing_additive_weight; //0x05D4
    float m_stealth_aiming_breathing_additive_weight; //0x5D8
    float m_stealth_firing_breathing_additive_weight; //0x5DC
    float m_aiming_lean_additive_weight; //0x05E0
    float m_firing_lean_additive_weight; //0x05E4
    float m_stealth_aiming_lean_additive_weight; //0x05E8
    float m_stealth_firing_lean_additive_weight; //0x05EC
    char m_stat_name[8]; //0x05F0
}; //Size: 0x05E8
static_assert(sizeof(CWeaponInfo) == 0x5E8);
