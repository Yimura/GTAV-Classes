#include "../rage/atArray.hpp"

#pragma once

#pragma pack(push, 4)
class CVehicleDriveByAnimInfo
{
public:
	uint32_t m_name; //0x0000
	float m_min_aim_sweep_heading_angle_degs; //0x0004
	float m_max_aim_sweep_heading_angle_degs; //0x0008
	float m_first_person_min_aim_sweep_heading_angle_degs; //0x000C
	float m_first_person_max_aim_sweep_heading_angle_degs; //0x0010
	float m_first_person_unarmed_min_aim_sweep_heading_angle_degs; //0x0014
	float m_first_person_unarmed_max_aim_sweep_heading_angle_degs; //0x0018
	uint64_t m_unk1; //0x001C
	float m_min_restricted_aim_sweep_heading_angle_degs; //0x0024
	float m_max_restricted_aim_sweep_heading_angle_degs; //0x0028
	float m_min_smash_window_angle_degs; //0x002C
	float m_max_smash_window_angle_degs; //0x0030
	float m_min_smash_window_angle_first_person_degs; //0x0034
	float m_max_smash_window_angle_first_person_degs; //0x0038
	float m_max_speed_param; //0x003C
	float m_max_longitudinal_lean_blend_weight_delta; //0x0040
	float m_max_lateral_lean_blend_weight_delta; //0x0044
	float m_approach_speed_to_within_max_blend_delta; //0x0048
	float m_spine_additive_blend_in_delay; //0x004C
	float m_spine_additive_blend_in_duration_still; //0x0050
	float m_spine_additive_blend_in_duration; //0x0054
	float m_spine_additive_blend_out_delay; //0x0058
	float m_spine_additive_blend_out_duration; //0x005C
	float m_min_unarmed_driveby_yaw_if_window_rolled_up; //0x0060
	float m_max_unarmed_driveby_yaw_if_window_rolled_up; //0x0064
	rage::atArray<const Hash*> m_drive_by_anim_infos; //0x0068
}; //Size: 0x0078
#pragma pack(pop)