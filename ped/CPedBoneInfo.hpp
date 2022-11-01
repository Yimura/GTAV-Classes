#pragma once

#include "../rage/vector.hpp"

class CPedBoneInfo
{
public:
	rage::fvector3 m_bone_head_model_coords; //0x0000
	char pad_000C[4]; //0x000C
	rage::fvector3 m_bone_left_foot_model_coords; //0x0010
	char pad_001C[4]; //0x001C
	rage::fvector3 m_bone_right_foot_model_coords; //0x0020
	char pad_002C[4]; //0x002C
	rage::fvector3 m_bone_left_ankle_model_coords; //0x0030
	char pad_003C[4]; //0x003C
	rage::fvector3 m_bone_right_ankle_model_coords; //0x0040
	char pad_004C[4]; //0x004C
	rage::fvector3 m_bone_left_hand_model_coords; //0x0050
	char pad_005C[4]; //0x005C
	rage::fvector3 m_bone_right_hand_model_coords; //0x0060
	char pad_006C[4]; //0x006C
	rage::fvector3 m_bone_neck_model_coords; //0x0070
	char pad_007C[4]; //0x007C
	rage::fvector3 m_bone_abdomen_model_coords; //0x0080
	char pad_008C[4]; //0x008C
}; //Size: 0x0090
static_assert(sizeof(CPedBoneInfo) == 0x90);