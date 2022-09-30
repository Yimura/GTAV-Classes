#pragma once

#include "CAmmoInfo.hpp"
#include "CWeaponBoneId.hpp"
#include "../rage/vector.hpp"
#include "../enums/eExplosionTag.hpp"

#include <cstdint>

class CAmmoProjectileInfo : public CAmmoInfo
{
public:
    float m_damage; // 0x0040
    float m_lifetime; // 0x0044
    float m_from_vehicle_lifetime; //0x0048
    float m_lifetime_after_impact; //0x004C
    float m_lifetime_after_explosion; //0x0050
    float m_explosion_time; //0x0054
    float m_launch_speed; //0x0058
    float m_separation_time; //0x005C
    float m_time_to_reach_target; //0x0060
    float m_amping; //0x0064
    float m_gravity_factor; //0x0068
    float m_ricochet_tolerance; //0x006C
    float m_ped_ricochet_tolerance; //0x0070
    float m_vehicle_ricochet_tolerance; //0x0074
    float m_friction_multiplier; //0x0078
    class sExplosion
    {
    public:
        enum eExplosionTag m_default; //0x0000
        enum eExplosionTag m_hit_car; //0x0004
        enum eExplosionTag m_hit_truck; //0x0008
        enum eExplosionTag m_hit_bike; //0x000C
        enum eExplosionTag m_hit_boat; //0x0010
        enum eExplosionTag m_hit_plane; //0x0014
    } m_explosion;
    uint32_t m_m_fuse_fx_hash; //0x0094
    uint32_t m_m_proximity_fx_hash; //0x0098
    uint32_t m_m_trail_fx_hash; //0x009C
    uint32_t m_trail_fx_under_water_hash; //0x00A0
    uint32_t m_primed_fx_hash; //0x00A4
    uint32_t m_fuse_fx_fp_hash; //0x00A8
    uint32_t m_primed_fx_fp_hash; //0x00AC
    float m_trail_fx_fade_in_time; //0x00B0
    float m_trail_fx_fade_out_time; //0x00B4
    uint32_t m_disturb_fx_default_hash; //0x00B8
    uint32_t m_disturb_fx_sand_hash; //0x00BC
    uint32_t m_disturb_fx_water_hash; //0x00C0
    uint32_t m_disturb_fx_dirt_hash; //0x00C4
    uint32_t m_disturb_fx_foliage_hash; //0x00C8
    float m_disturb_fx_probe_dist; //0x00CC
    float m_disturb_fx_scale; //0x00D0
    float m_ground_fx_probe_distance; //0x00D4
    bool m_fx_alt_tint_colour; //0x00D8
    bool m_light_only_active_when_stuck; //0x00D9
    bool m_light_flickers; //0x00DA
    bool m_light_speeds_up; //0x00DB
    class CWeaponBoneId m_light_bone; //0x00DC
    rage::fvector4 m_light_colour; //0x00E0
    float m_light_intensity; //0x00F0
    float m_light_range; //0x00F4
    float m_light_falloff_exp; //0x00F8
    float m_light_frequency; //0x00FC
    float m_light_power; //0x0100
    float m_corona_size; //0x0104
    float m_corona_intensity; //0x0108
    float m_corona_z_bias; //0x010C
    bool m_proximity_affects_firing_player; //0x0110
    bool m_proximity_can_be_triggered_by_peds; //0x0111
    float m_proximity_activation_time; //0x0114
    float m_proximity_repeated_detonation_activation_time; //0x0118
    float m_proximity_trigger_radius; //0x011C
    float m_proximity_fuse_time_ped; //0x0120
    float m_proximity_fuse_time_vehicle_min; //0x0124
    float m_proximity_fuse_time_vehicle_max; //0x0128
    float m_proximity_fuse_time_vehicle_speed; //0x012C
    rage::fvector4 m_proximity_light_colour_untriggered; //0x0130
    float m_proximity_light_frequency_multiplier_triggered; //0x0140
    float m_time_to_ignore_owner; //0x0144
    float m_charged_launch_time; //0x0148
    float m_charged_launch_speed_mult; //0x014C
    enum eExplosionTag m_cluster_explosion_tag; //0x0150
    uint32_t m_cluster_explosion_count; //0x0154
    float m_cluster_min_radius; //0x0158
    float m_cluster_max_radius; //0x015C
    float m_cluster_initial_delay; //0x0160
    float m_cluster_inbetween_delay; //0x0164
    enum Flags : uint32_t
    {
        Sticky,
        DestroyOnImpact,
        ProcessImpacts,
        HideDrawable,
        TrailFxInactiveOnceWet,
        TrailFxRemovedOnImpact,
        DoGroundDisturbanceFx,
        CanBePlaced,
        NoPullPin,
        DelayUntilSettled,
        CanBeDestroyedByDamage,
        CanBounce,
        DoubleDamping,
        _0x08B0D0C23,
        _0x02E3F9CBA,
        ThrustUnderwater,
        ApplyDamageOnImpact,
        SetOnFireOnImpact,
        DontFireAnyEvents,
        AlignWithTrajectory,
        ExplodeAtTrailFxPos,
        ProximityDetonation,
        AlignWithTrajectoryYAxis,
        HomingAttractor,
        Cluster,
        _0x0E792E56F,
        _0x08A7D429C,
        UseGravityOutOfWater
    } m_projectile_flags; //0x0168
    char pad_016C[4]; //0x016C
};
static_assert(sizeof(CAmmoProjectileInfo) == 0x170);
