#pragma once

#include "CAmmoInfo.hpp"
#include "CItemInfo.hpp"

#include <cstdint>

enum class eDamageType : int32_t
{
	Unknown,
	None,
	Melee,
	Bullet,
	_0xC5403EC0,
	Explosive,
	Fire,
	_0xA869C908,
	Fall,
	_0xCAE075C0,
	Electric,
	BarbedWire,
	FireExtinguisher,
	Smoke,
	WaterCannon,
	_0x1C8E59AE
};

enum class eImpactType : int32_t
{
	DEFAULT_BULLETS         = -1,
	GRENADE                 = 0,
	GRENADELAUNCHER         = 1,
	STICKYBOMB              = 2,
	MOLOTOV                 = 3,
	ROCKET                  = 4,
	TANKSHELL               = 5,
	HI_OCTANE               = 6,
	CAR                     = 7,
	PLANE                   = 8,
	PETROL_PUMP             = 9,
	BIKE                    = 10,
	DIR_STEAM               = 11,
	DIR_FLAME               = 12,
	DIR_WATER_HYDRANT       = 13,
	DIR_GAS_CANISTER        = 14,
	BOAT                    = 15,
	SHIP_DESTROY            = 16,
	TRUCK                   = 17,
	MK2_EXPLOSIVE_BULLETS   = 18,
	SMOKEGRENADELAUNCHER    = 19,
	SMOKEGRENADE            = 20,
	BZGAS                   = 21,
	FLARE                   = 22,
	GAS_CANISTER            = 23,
	EXTINGUISHER_1          = 24,
	PROGRAMMABLEAR          = 25,
	TRAIN                   = 26,
	BARREL                  = 27,
	PROPANE                 = 28,
	BLIMP                   = 29,
	DIR_FLAME_EXPLODE       = 30,
	TANKER                  = 31,
	PLANE_ROCKET            = 32,
	VEHICLE_BULLET          = 33,
	GAS_TANK                = 34,
	BIRD_CRAP               = 35,
	RAILGUN                 = 36,
	BLIMP2                  = 37,
	FIREWORK                = 38,
	SNOWBALL                = 39,
	PROXMINE                = 40,
	VALKYRIE_CANNON         = 41,
	AIR_DEFENCE             = 42,
	PIPEBOMB                = 43,
	VEHICLEMINE             = 44,
	EXPLOSIVEAMMO           = 45,
	APCSHELL                = 46,
	BOMB_CLUSTER            = 47,
	BOMB_GAS                = 48,
	BOMB_INCENDIARY         = 49,
	BOMB_STANDARD           = 50,
	TORPEDO                 = 51,
	TORPEDO_UNDERWATER      = 52,
	BOMBUSHKA_CANNON        = 53,
	BOMB_CLUSTER_SECONDARY  = 54,
	HUNTER_BARRAGE          = 55,
	HUNTER_CANNON           = 56,
	ROGUE_CANNON            = 57,
	MINE_UNDERWATER         = 58,
	ORBITAL_CANNON          = 59,
	BOMB_STANDARD_WIDE      = 60,
	EXPLOSIVEAMMO_SHOTGUN   = 61,
	OPPRESSOR2_CANNON       = 62,
	MORTAR_KINETIC          = 63,
	VEHICLEMINE_KINETIC     = 64,
	VEHICLEMINE_EMP         = 65,
	VEHICLEMINE_SPIKE       = 66,
	VEHICLEMINE_SLICK       = 67,
	VEHICLEMINE_TAR         = 68,
	SCRIPT_DRONE            = 69,
	RAYGUN                  = 70,
	BURIEDMINE              = 71,
	SCRIPT_MISSILE          = 72,
	RCTANK_ROCKET           = 73,
	BOMB_WATER              = 74,
	BOMB_WATER_SECONDARY    = 75,
	EXTINGUISHER_2          = 76,
	EXTINGUISHER_3          = 77,
	EXTINGUISHER_4          = 78,
	EXTINGUISHER_5          = 79,
	EXTINGUISHER_6          = 80,
	SCRIPT_MISSILE_LARGE    = 81,
	SUBMARINE_BIG           = 82,
	EMPLAUNCHER_EMP         = 83,
	SPOOF_EXPLOSION         = 99
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

enum class eWheelSlot : int32_t
{
	Pistol,
	SMG,
	Rifle,
	Sniper,
	UnarmedMelee,
	ShotGun,
	Heavy,
	Throwable
};

class AimingInfo;
class CWeaponInfo : public CItemInfo
{
public:
	eDamageType m_damage_type; //0x0020
	eImpactType m_impact_type; //0x0024
	char pad_0028[44]; //0x0028
	eFireType m_fire_type; //0x0054
	eWheelSlot m_wheel_slot; //0x0058
	uint32_t m_group; //0x005C
	class CAmmoInfo *m_ammo_info; //0x0060
	class AimingInfo *m_aiming_info; //0x0068
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
	char pad_0290[8]; //0x0290
	float m_damage_fall_off_range_min; //0x0298
	float m_damage_fall_off_range_max; //0x029C
	float m_damage_fall_off_modifier; //0x02A0
	char pad_02A4[64]; //0x02A4
	uint32_t m_recoil_shake_hash; //0x02E4
	uint32_t m_recoil_shake_hash_first_person; //0x02E8
	float m_min_time_between_recoil_shakes; //0x02EC
	float m_recoil_shake_amplitude; //0x02F0
	float m_explosion_shake_amplitude; //0x02F4
}; //Size: 0x02F8
static_assert(sizeof(CWeaponInfo) == 0x2F8);
