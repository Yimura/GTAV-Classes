#pragma once

#include "CAmmoInfo.hpp"
#include "CItemInfo.hpp"
#include "CWeaponBoneId.hpp"
#include "../rage/vector.hpp"
#include "../rage/atArray.hpp"
#include "../enums/eExplosionTag.hpp"

#include <cstdint>
#include <bitset>

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

class CAimingInfo
{
public:
    uint32_t m_name_hash;//0x00
    float m_heading_limit;//0x04
    float m_sweep_pitch_min;//0x08
    float m_sweep_pitch_max;//0x0C
};
static_assert(sizeof(CAimingInfo) == 0x10);

class sWeaponFx
{
public:
    enum class eEffectGroup : int32_t
    {
        PunchKick,
        MeleeWood,
        MeleeMetal,
        MeleeSharp,
        MeleeGeneric,
        PistolSmall,
        PistolLarge,
        PistolSilenced,
        Rubber,
        SMG,
        ShotGun,
        RifleAssault,
        RifleSniper,
        Rocket,
        Grenade,
        Molotov,
        Fire,
        Explosion,
        Laser,
        Stungun,
        HeavyMG,
        VehicleMG
    } m_effect_group;                     //0x00
    uint32_t m_flash_fx_hash;             //0x04
    uint32_t m_flash_fx_alt_hash;         //0x08
    uint32_t m_flash_fx_fp_hash;          //0x0C
    uint32_t m_flash_fx_fp_alt_hash;      //0x10
    uint32_t m_smoke_fx_hash;             //0x14
    uint32_t m_smoke_fx_fp_hash;          //0x18
    float m_muzzle_smoke_fx_min_level;    //0x1C
    float m_muzzle_smoke_fx_inc_per_shot; //0x20
    float m_muzzle_smoke_fx_dec_per_sec;  //0x24
    char pad_28[8];
    rage::fvector3 m_muzzle_override_offset; //0x30
    char pad_3C[8];
    uint32_t m_shell_fx_hash;    //0x44
    uint32_t m_shell_fx_fp_hash; //0x48
    uint32_t m_tracer_fx_hash;   //0x4C
    uint32_t m_ped_damage_hash;  //0x50
    float m_tracer_fx_chance_sp; //0x54
    float m_tracer_fx_chance_mp; //0x58
    char pad_5C[4];
    float m_flash_fx_chance_sp;             //0x60
    float m_flash_fx_chance_mp;             //0x64
    float m_flash_fx_alt_chance;            //0x68
    float m_flash_fx_scale;                 //0x6C
    bool m_flash_fx_light_enabled;       //0x70
    bool m_flash_fx_light_casts_shadows; //0x71
    float m_flash_fx_light_offset_dist; //0x74
    char pad_78[8];
    rage::fvector3 m_flash_fx_light_rgba_min; //0x80
    char pad_8C[4];
    rage::fvector3 m_flash_fx_light_rgba_max; //0x90
    char pad_9C[4];
    rage::fvector2 m_flash_fx_light_intensity_minmax; //0xA0
    rage::fvector2 m_flash_fx_light_range_minmax;     //0xA8
    rage::fvector2 m_flash_fx_light_falloff_minmax;   //0xB0
    bool m_ground_disturb_fx_enabled;              // 0xB8
    float m_ground_disturb_fx_dist;                 //0xBC
    uint32_t m_ground_disturb_fx_name_default_hash; //0xC0
    uint32_t m_ground_disturb_fx_name_sand_hash;    //0xC4
    uint32_t m_ground_disturb_fx_name_dirt_hash;    //0xC8
    uint32_t m_ground_disturb_fx_name_water_hash;   //0xCC
    uint32_t m_ground_disturb_fx_name_foliage_hash; //0xD0
    char pad_D4[12];
};
static_assert(sizeof(sWeaponFx) == 0xE0);

class CWeaponComponentPoint
{
public:
    uint32_t m_attach_bone_hash; //0x00
    char pad_04[4];
    class sComponent
    {
    public:
        uint32_t m_name_hash;
        bool m_default;
    } m_components[12]; // 0x08
    static_assert(sizeof(sComponent) == 8);
    int32_t m_component_count; // 0x68
};
static_assert(sizeof(CWeaponComponentPoint) == 0x6c);

class CWeaponSpecValue
{
public:
    float m_spec_fresnel;//0x00
    float m_spec_falloff_mult;//0x04
    float m_spec_int_mult;//0x08
    float m_spec2_factor;//0x0c
    float m_spec2_color_int;//0x10
    uint32_t m_spec2_color;//0x14
};
static_assert(sizeof(CWeaponSpecValue) == 0x18);

class CWeaponTintSpecValues
{
public:
    uint32_t m_name_hash; //0x00
    rage::atArray<CWeaponSpecValue> m_tints; //0x08
};
static_assert(sizeof(CWeaponTintSpecValues) == 0x18);

class CFiringPatternAlias
{
public:
    uint32_t m_firing_pattern_hash;//0x00
    uint32_t m_alias_hash;//0x04
};
static_assert(sizeof(CFiringPatternAlias) == 0x8);

class CWeaponFiringPatternAliases
{
public:
    uint32_t m_name_hash; //0x00
    rage::atArray<CFiringPatternAlias> m_aliases; //0x08
};
static_assert(sizeof(CWeaponFiringPatternAliases) == 0x18);

class CWeaponUpperBodyFixupExpressionData
{
public:
    uint32_t m_name_hash; //0x00
    class sData
    {
    public:
        float m_idle;//0x00
        float m_walk;//0x04
        float m_run;//0x08
    } m_data[4];//0x04
};
static_assert(sizeof(CWeaponUpperBodyFixupExpressionData) == 0x34);

class CCamoDiffuseTexIdxs
{
public:
    uint32_t m_key_hash; //0x00
    class sKeyValue
    {
    public:
        uint32_t m_key;//0x0
        uint32_t m_value;//0x4
    };
    alignas(0x10) rage::atArray<sKeyValue> m_items; //0x10
};
static_assert(sizeof(CCamoDiffuseTexIdxs) == 0x20);

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
    CAmmoInfo *m_ammo_info; //0x0060
    CAimingInfo *m_aiming_info; //0x0068
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
    float m_endurance_damage; //0x00C0
    uint32_t N00000898; //0x00C4
    float m_hit_limbs_damage_modifier; //0x00C8
    float m_network_hit_limbs_damage_modifier; //0x00CC
    float m_lightly_armoured_damage_modifier; //0x00D0
    float m_vehicle_damage_modifier; //0x00D4
    float m_force; //0x00D8
    float m_force_on_ped; //0x00DC
    float m_force_on_vehicle; //0x00E0
    float m_force_on_heli; //0x00E4
    class sBoneForce
    {
    public:
        int32_t m_bone_tag; //0x00
        float m_force_front;//0x04
        float m_force_back;//0x08
    };
    static_assert(sizeof(sBoneForce) == 0xc);
    rage::atArray<sBoneForce> m_override_forces; //0x00E8
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
    float m_bullet_bending_near_radius;                          //0x0154
    float m_bullet_bending_far_radius;                           //0x0158
    float m_bullet_bending_zoom_radius;                          //0x015C
    float m_first_person_bullet_bending_near_radius;             //0x0160
    float m_first_person_bullet_bending_far_radius;              //0x0164
    float m_first_person_bullet_bending_zoom_radius;             //0x0168
    char pad_016C[4];
    sWeaponFx m_weapon_fx;                    //0x0170
    int32_t m_initial_rumble_duration;        //0x0250
    float m_initial_rumble_intensity;         //0x0254
    float m_initial_rumble_intensity_trigger; //0x0258
    int32_t m_rumble_duration;                //0x025C
    float m_rumble_intensity;                 //0x0260
    float m_rumble_intensity_trigger;         //0x0264
    float m_rumble_damage_intensity;          //0x0268
    int32_t m_initial_rumble_duration_fps;    //0x026C
    float m_initial_rumble_intensity_fps;     //0x0270
    int32_t m_rumble_duration_fps;            //0x0274
    float m_rumble_intensity_fps;             //0x0278
    float m_network_player_damage_modifier; //0x027C
    float m_network_ped_damage_modifier; //0x0280
    float m_network_headshot_modifier; //0x0284
    float m_lock_on_range; //0x0288
    float m_weapon_range; //0x028C
    float m_ai_sound_range; //0x0290
    float m_ai_potential_blast_event_range; //0x0294
    float m_damage_fall_off_range_min; //0x0298
    float m_damage_fall_off_range_max; //0x029C
    char pad_02A0[8];
    float m_damage_fall_off_modifier; //0x02A8
    char pad_02AC[8];
    uint32_t m_vehicle_weapon_hash; //0x02B4
    uint32_t m_default_camera_hash; //0x02B8
    uint32_t m_aim_camera_hash; //0x02BC
    uint32_t m_fire_camera_hash; //0x02C0
    uint32_t m_cover_camera_hash; //0x02C4
    uint32_t m_cover_ready_to_fire_hash; //0x02C8
    uint32_t m_run_and_gun_camera_hash; //0x02CC
    uint32_t m_cinematic_shooting_camera_hash; //0x02D0
    uint32_t m_alt_or_scoped_camera_hash; //0x02D4
    uint32_t m_run_and_gun_alt_or_scoped_camera_hash; //0x02D8
    uint32_t m_cinematic_shooting_alt_or_scoped_camera_hash; //0x02DC
    uint32_t m_pov_turret_camera_hash; //0x02E0
    uint32_t m_recoil_shake_hash; //0x02E4
    uint32_t m_recoil_shake_hash_first_person; //0x02E8
    uint32_t m_accuracy_offset_shake_hash;                   //0x02EC
    float m_min_time_between_recoil_shakes; //0x02F0
    float m_recoil_shake_amplitude; //0x02F4
    float m_explosion_shake_amplitude; //0x02F8
    float m_camera_fov; //0x02FC
    float m_first_person_aim_fov_min; //0x0300
    float m_first_person_aim_fov_max; //0x0304
    float m_first_person_scope_fov; //0x0308
    float m_first_person_scope_attachment_fov; //0x030C
    rage::fvector3 m_first_person_driveby_ik_offset; //0x0310
    char pad_031C[4];
    rage::fvector3 m_first_person_rng_offset; //0x0320
    char pad_032C[4];
    rage::fvector3 m_first_person_rng_rotation_offset; //0x0330
    char pad_033C[4];
    rage::fvector3 m_first_person_lt_offset; //0x0340
    char pad_034C[4];
    rage::fvector3 m_first_person_lt_rotation_offset; //0x0350
    char pad_035C[4];
    rage::fvector3 m_first_person_scope_offset; //0x0360
    char pad_036C[4];
    rage::fvector3 m_first_person_scope_attachment_offset; //0x0370
    char pad_037C[4];
    rage::fvector3 m_first_person_scope_rotation_offset; //0x0380
    char pad_038C[4];
    rage::fvector3 m_first_person_scope_attachment_rotation_offset; //0x0390
    char pad_039C[4];
    rage::fvector3 m_first_person_as_third_person_idle_offset; //0x03A0
    char pad_03AC[4];
    rage::fvector3 m_first_person_as_third_person_rng_offset; //0x03B0
    char pad_03BC[4];
    rage::fvector3 m_first_person_as_third_person_lt_offset; //0x03C0
    char pad_03CC[4];
    rage::fvector3 m_first_person_as_third_person_scope_offset; //0x03D0
    char pad_03DC[4];
    rage::fvector3 m_first_person_as_third_person_weapon_blocked_offset; //0x03E0
    char pad_03EC[4];
    float m_first_person_dof_subject_magnification_power_factor_near; //0x03F0
    float m_first_person_dof_max_near_in_focus_distance;              //0x03F4
    float m_first_person_dof_max_near_in_focus_distance_blend_level;  //0x03F8
    char pad_03FC[4];
    class sFirstPersonScopeAttachmentData
    {
    public:
        uint32_t m_name_hash; //0x00
        float m_first_person_scope_attachment_fov; //0x04
        alignas(0x10) rage::fvector3 m_first_person_scope_attachment_offset; //0x10
        alignas(0x10) rage::fvector3 m_first_person_scope_attachment_rotation_offset; //0x20
    };
    static_assert(sizeof(sFirstPersonScopeAttachmentData) == 0x30);
    rage::atArray<sFirstPersonScopeAttachmentData> m_first_person_scope_attachment_data; //0x0400
    float m_zoom_factor_for_accurate_mode;         //0x0410
    char pad_0414[12];
    rage::fvector3 m_aim_offset_min; //0x0420
    char pad_042C[4];
    rage::fvector3 m_aim_offset_max; //0x0430
    char pad_043C[4];
    rage::fvector2 m_torso_aim_offset;          //0x0440
    rage::fvector2 m_torso_crouched_aim_offset; //0x0448
    float m_aim_probe_length_min;               //0x0450
    float m_aim_probe_length_max;               //0x0454
    char pad_0458[8];
    rage::fvector3 m_aim_offset_min_fps_idle; //0x0460
    char pad_046C[4];
    rage::fvector3 m_aim_offset_med_fps_idle; //0x0470
    char pad_047C[4];
    rage::fvector3 m_aim_offset_max_fps_idle; //0x0480
    char pad_048C[4];
    rage::fvector3 m_aim_offset_min_fps_lt; //0x0490
    char pad_049C[4];
    rage::fvector3 m_aim_offset_max_fps_lt; //0x04A0
    char pad_04AC[4];
    rage::fvector3 m_aim_offset_min_fps_rng; //0x04B0
    char pad_04BC[4];
    rage::fvector3 m_aim_offset_max_fps_rng; //0x04C0
    char pad_04CC[4];
    rage::fvector3 m_aim_offset_min_fps_scope; //0x04D0
    char pad_04DC[4];
    rage::fvector3 m_aim_offset_max_fps_scope; //0x04E0
    char pad_04EC[4];
    rage::fvector3 m_aim_offset_end_pos_min_fps_idle; //0x04F0
    char pad_04FC[4];
    rage::fvector3 m_aim_offset_end_pos_med_fps_idle; //0x0500
    char pad_050C[4];
    rage::fvector3 m_aim_offset_end_pos_max_fps_idle; //0x0510
    char pad_051C[4];
    rage::fvector3 m_aim_offset_end_pos_min_fps_lt; //0x0520
    char pad_052C[4];
    rage::fvector3 m_aim_offset_end_pos_med_fps_lt; //0x0530
    char pad_053C[4];
    rage::fvector3 m_aim_offset_end_pos_max_fps_lt; //0x0540
    char pad_054C[4];
    float m_aim_probe_radius_override_fps_idle;         // 0x0550
    float m_aim_probe_radius_override_fps_idle_stealth; // 0x0554
    float m_aim_probe_radius_override_fps_lt;           // 0x0558
    float m_aim_probe_radius_override_fps_rng;          // 0x055C
    float m_aim_probe_radius_override_fps_scope;        // 0x0560
    char pad_0564[12];
    rage::fvector3 m_left_hand_ik_offset; //0x0570
    char pad_057C[4];
    float m_ik_recoil_displacement;                    //0x0580
    float m_ik_recoil_displacement_scope;              //0x0584
    float m_ik_recoil_displacement_scale_backward;     //0x0588
    float m_ik_recoil_displacement_scale_vertical;     //0x058C
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
    int8_t m_hud_range; //0x05CD
    float m_aiming_breathing_additive_weight; //0x05D0
    float m_firing_breathing_additive_weight; //0x05D4
    float m_stealth_aiming_breathing_additive_weight; //0x5D8
    float m_stealth_firing_breathing_additive_weight; //0x5DC
    float m_aiming_lean_additive_weight; //0x05E0
    float m_firing_lean_additive_weight; //0x05E4
    float m_stealth_aiming_lean_additive_weight; //0x05E8
    float m_stealth_firing_lean_additive_weight; //0x05EC
    char* m_stat_name;                                //0x05F0
    int32_t m_knockdown_count;                        //0x05F8
    float m_killshot_impulse_scale;                   //0x05FC
    uint32_t m_nm_shot_tuning_set_hash;               //0x0600
    CWeaponComponentPoint m_attach_points[7];   //0x0604
    int32_t m_attach_point_count;                     //0x08f8
    CWeaponBoneId m_gun_feed_bone;              //0x08fc
    std::bitset<192> m_weapon_flags;            //0x0900
    CWeaponTintSpecValues *m_tint_spec_values;   //0x0918
    CWeaponFiringPatternAliases *m_firing_pattern_aliases; //0x0920
    CWeaponUpperBodyFixupExpressionData *m_reload_upper_body_fixup_expression_data; //0x0928
    uint32_t m_target_sequence_group_hash;             //0x0930
    float m_bullet_direction_offset_in_degrees;        //0x0934
    float m_bullet_direction_pitch_offset;             //0x0938
    float m_bullet_direction_pitch_homing_offset;      //0x093C
    char pad_0940[20];
    float m_expand_ped_capsule_radius; //0x0954
    float m_vehicle_attack_angle;      //0x0958
    float m_torso_ik_angle_limit;      //0x095C
    float m_melee_damage_multiplier;   //0x0960
    float m_melee_right_fist_target_health_damage_scaler; //0x0964
    float m_airborne_aircraft_lock_on_multiplier;         //0x0968
    float m_armoured_vehicle_glass_damage_override;       //0x096C
    char pad_0970[8];
    rage::atArray<CCamoDiffuseTexIdxs> m_camo_diffuse_tex_idxs;//0x0978
    CWeaponBoneId m_rotate_barrel_bone;//0x988
    CWeaponBoneId m_rotate_barrel_bone2;//0x98A
};
static_assert(sizeof(CWeaponInfo) == 0x0990);
