#pragma once
#include "rage/atArray.hpp"

class CPoolSizes;
class CPoolSize;
class CGameConfig;

#pragma pack(push, 1)

class CPoolSize {
public:
	char* m_pool;
	uint32_t m_size;
};
static_assert(sizeof(CPoolSize) == 0xC);

class CStackSizeData {
public:
	rage::joaat_t m_stack_name;
	int32_t m_size_of_stack;
	int32_t m_number_of_stacks_of_this_size;

	inline CStackSizeData(rage::joaat_t name, int size, int num) :
		m_stack_name(name),
		m_size_of_stack(size),
		m_number_of_stacks_of_this_size(num)
	{
	}

	inline CStackSizeData(const std::string& name, int size, int num) :
		m_stack_name(rage::joaat(name)),
		m_size_of_stack(size),
		m_number_of_stacks_of_this_size(num)
	{
	}
};
static_assert(sizeof(CStackSizeData) == 0xC);

namespace rage
{
	class parStructure;

	class fwConfig
	{
	public:
		virtual ~fwConfig() = 0;

		virtual void copy_data_from_config(fwConfig* config) = 0;

		virtual fwConfig* clone_config() = 0;

		virtual parStructure* get_structure() = 0;

		rage::atArray<CPoolSize> m_pool_sizes;
		char padding[0x8];
	};
	static_assert(sizeof(fwConfig) == 0x20);

	template <typename T>
	class fwConfigManagerImpl
	{
	public:
		virtual ~fwConfigManagerImpl() = 0;

		virtual T* create_config() = 0;

		char padding[0x10];

		T* m_config;
	};
	static_assert(sizeof(fwConfigManagerImpl<CGameConfig>) == 0x20);
};

class CConfigPopulation
{
public:
	int32_t m_scenario_peds_multiplier_base; //0x0000
	int32_t m_scenario_peds_multiplier; //0x0004
	int32_t m_ambient_peds_multiplier_base; //0x0008
	int32_t m_ambient_peds_multiplier; //0x000C
	int32_t m_max_total_peds_base; //0x0010
	int32_t m_max_total_peds; //0x0014
	int32_t m_ped_memory_multiplier; //0x0018
	int32_t m_peds_for_vehicles_base; //0x001C
	int32_t m_peds_for_vehicles; //0x0020
	int32_t m_vehicle_timeslice_max_updates_per_frame_base; //0x0024
	int32_t m_vehicle_timeslice_max_updates_per_frame; //0x0028
	int32_t m_vehicle_ambient_density_multiplier_base; //0x002C
	int32_t m_vehicle_ambient_density_multiplier; //0x0030
	int32_t m_vehicle_memory_multiplier; //0x0034
	int32_t m_vehicle_parked_density_multiplier_base; //0x0038
	int32_t m_vehicle_parked_density_multiplier; //0x003C
	int32_t m_vehicle_low_prio_parked_density_multiplier_base; //0x0040
	int32_t m_vehicle_low_prio_parked_density_multiplier; //0x0044
	int32_t m_vehicle_upper_limit_base; //0x0048
	int32_t m_vehicle_upper_limit; //0x004C
	int32_t m_vehicle_upper_limit_mp; //0x0050
	int32_t m_vehicle_parked_upper_limit_base; //0x0054
	int32_t m_vehicle_parked_upper_limit; //0x0058
	int32_t m_vehicle_keyhole_shape_inner_thickness_base; //0x005C
	int32_t m_vehicle_keyhole_shape_inner_thickness; //0x0060
	int32_t m_vehicle_keyhole_shape_outer_thickness_base; //0x0064
	int32_t m_vehicle_keyhole_shape_outer_thickness; //0x0068
	int32_t m_vehicle_keyhole_shape_inner_radius_base; //0x006C
	int32_t m_vehicle_keyhole_shape_inner_radius; //0x0070
	int32_t m_vehicle_keyhole_shape_outer_radius_base; //0x0074
	int32_t m_vehicle_keyhole_shape_outer_radius; //0x0078
	int32_t m_vehicle_keyhole_side_wall_thickness_base; //0x007C
	int32_t m_vehicle_keyhole_side_wall_thickness; //0x0080
	int32_t m_vehicle_max_creation_distance_base; //0x0084
	int32_t m_vehicle_max_creation_distance; //0x0088
	int32_t m_vehicle_max_creation_distance_offscreen_base; //0x008C
	int32_t m_vehicle_max_creation_distance_offscreen; //0x0090
	int32_t m_vehicle_cull_range_base; //0x0094
	int32_t m_vehicle_cull_range; //0x0098
	int32_t m_vehicle_cull_range_on_screen_scale_base; //0x009C
	int32_t m_vehicle_cull_range_on_screen_scale; //0x00A0
	int32_t m_vehicle_cull_range_off_screen_base; //0x00A4
	int32_t m_vehicle_cull_range_off_screen; //0x00A8
	int32_t m_density_based_removal_rate_scale_base; //0x00AC
	int32_t m_density_based_removal_rate_scale; //0x00B0
	int32_t m_density_based_removal_target_headroom_base; //0x00B4
	int32_t m_density_based_removal_target_headroom; //0x00B8
	rage::atArray<int> m_vehicle_spacing_base; // TODO: these are atFixedArrays
	char pad_00CC[48]; //0x00CC
	rage::atArray<int> m_vehicle_spacing;
	char pad_010C[48]; //0x010C
	int32_t m_players_road_scan_distance_base; //0x013C
	int32_t m_players_road_scan_distance; //0x0140
	rage::atArray<int> m_player_road_density_inc_base;
	char pad_0154[48]; //0x0154
	rage::atArray<int> m_player_road_density_inc;
	char pad_0194[48]; //0x0194
	rage::atArray<int> m_non_player_road_density_dec_base;
	char pad_01D4[56]; //0x01D4
	rage::atArray<int> m_non_player_road_density_dec;
	char pad_021C[40]; //0x021C
	int32_t m_vehicle_population_frame_rate_base; //0x0244
	int32_t m_vehicle_population_frame_rate; //0x0248
	int32_t m_vehicle_population_cycles_per_frame_base; //0x024C
	int32_t m_vehicle_population_cycles_per_frame; //0x0250
	int32_t m_vehicle_population_frame_rate_mp_base; //0x0254
	int32_t m_vehicle_population_frame_rate_mp; //0x0258
	int32_t m_vehicle_population_cycles_per_frame_mp_base; //0x025C
	int32_t m_vehicle_population_cycles_per_frame_mp; //0x0260
	int32_t m_ped_population_frame_rate_base; //0x0264
	int32_t m_ped_population_frame_rate; //0x0268
	int32_t m_ped_population_cycles_per_frame_base; //0x026C
	int32_t m_ped_population_cycles_per_frame; //0x0270
	int32_t m_ped_population_frame_rate_mp_base; //0x0274
	int32_t m_ped_population_frame_rate_mp; //0x0278
	int32_t m_ped_population_cycles_per_frame_mp_base; //0x027C
	int32_t m_ped_population_cycles_per_frame_mp; //0x0280
};
static_assert(sizeof(CConfigPopulation) == 0x284);

class CConfig2DEffects // looks unused
{
public:
	int32_t m_max_attrs_audio; //0x0000
	int32_t m_max_attrs_buoyancy; //0x0004
	int32_t m_max_attrs_decal; //0x0008
	int32_t m_max_attrs_explosion; //0x000C
	int32_t m_max_attrs_ladder; //0x0010
	char pad_0014[8]; //0x0014
	int32_t m_max_attrs_light_shaft; //0x001C
	int32_t m_max_attrs_particle; //0x0020
	int32_t m_max_attrs_proc_obj; //0x0024
	int32_t m_max_attrs_scroll_bar; //0x0028
	int32_t m_max_attrs_spawn_point; //0x002C
	char pad_0030[8]; //0x0030
	int32_t m_max_attrs_wind_disturbance; //0x0038
	int32_t m_max_attrs_world_point; //0x003C
	int32_t m_0xFC5DD116; //0x0040
	int32_t m_max_effects_world_2d; //0x0044
	char pad[4];
};
static_assert(sizeof(CConfig2DEffects) == 0x4C);

class CConfigModelInfo
{
public:
	char* m_default_player_name; //0x0000
	char* m_default_prologue_player_name; //0x0008
	int32_t m_max_base_model_infos; //0x0010
	int32_t m_max_comp_entity_model_infos; //0x0014
	int32_t m_max_mlo_instances; //0x0018
	int32_t m_max_mlo_model_infos; //0x001C
	int32_t m_max_ped_model_infos; //0x0020
	int32_t m_max_time_model_infos; //0x0024
	int32_t m_max_vehicle_model_infos; //0x0028
	int32_t m_max_weapon_model_infos; //0x002C
	int32_t m_max_extra_ped_model_infos; //0x0030
	int32_t m_max_extra_vehicle_model_infos; //0x0034
	int32_t m_max_extra_weapon_model_infos; //0x0038
	int32_t m_unk;
};
static_assert(sizeof(CConfigModelInfo) == 0x40);

class CConfigExtensions
{
public:
	int32_t m_max_door_extensions;
	int32_t m_max_light_extensions;
	int32_t m_max_spawn_point_override_extensions;
	int32_t m_max_expression_extensions;
	int32_t m_0xBDE77A4F;
};
static_assert(sizeof(CConfigExtensions) == 0x14);

class CConfigStreamingEngine
{
public:
	int32_t m_archive_count;
	int32_t m_physical_streaming_buffer;
	int32_t m_virtual_streaming_buffer;
};
static_assert(sizeof(CConfigStreamingEngine) == 0xC);

class CConfigOnlineServices
{
public:
	char* m_ros_title_name;
	int32_t m_ros_title_version;
	int32_t m_sc_version;
	int64_t m_steam_app_id;
	char* m_title_directory_name;
	char* m_multiplayer_session_template_name;
	char* m_sc_auth_title_id;
};
static_assert(sizeof(CConfigOnlineServices) == 0x30);

class CConfigUGCDescriptions
{
public:
	int32_t m_max_description_length;
	int32_t m_max_num_descriptions;
	int32_t m_size_of_description_buffer;
};
static_assert(sizeof(CConfigUGCDescriptions) == 0xC);

class CConfigScriptStackSizes
{
public:
	rage::atArray<CStackSizeData> m_stack_size_data;
};
static_assert(sizeof(CConfigScriptStackSizes) == 0x10);

class CGameConfig : public rage::fwConfig {
public:
	CConfigPopulation m_config_population;
	CConfig2DEffects m_config_2d_effects;
	CConfigModelInfo m_config_model_info;
	CConfigExtensions m_config_extensions;
	CConfigStreamingEngine m_config_streaming_engine;
	CConfigOnlineServices m_config_online_services;
	CConfigUGCDescriptions m_config_ugc_descriptions;
	char padding[0x488 - 0x38C]; // CConfigNetScriptBroadcastData
	CConfigScriptStackSizes m_config_script_stack_sizes;
	// TODO: more stuff down here
};
#pragma pack(pop)