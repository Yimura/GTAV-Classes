#pragma once
#include <cstdint>
#include "rage/vector.hpp"
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CObjectCreationDataNode : CProjectBaseSyncDataNode
{
public:
	uint32_t unk_00C0; //0x00C0
	uint32_t unk_00C4; //0x00C4
	uint32_t unk_00C8; //0x00C8
	bool unk_00CC;
	bool unk_00CD;
	uint16_t unk_00D0; //0x00D0
	char pad_0xC2[14]; //0x00D2
	rage::fvector4 m_object_orientation; //0x00E0
	char pad_00E0[30]; //0x00F0
	rage::fvector3 m_object_position; //0x0110
	char pad_010C[4]; //0x011C
	rage::fvector3 m_dummy_position; //0x011E
	char pad_011A[20]; //0x012C
	rage::fvector3 m_script_grab_position; //0x0140
	char pad_013C[12]; //0x013C
	float m_script_grab_radius; //0x0148
	uint32_t m_created_by; //0x014C
	uint32_t m_model; //0x0150
	uint32_t m_frag_group_index; //0x0154
	uint32_t m_ownership_token; //0x0158
	uint32_t unk_015C; //0x015C
	bool m_no_reassign; //0x0160
	bool unk_0161; //0x0161
	bool m_player_wants_control; //0x0162
	bool m_has_init_physics; //0x0163
	bool m_script_grabbed_from_world; //0x0164
	bool m_has_frag_group; //0x0165
	bool m_is_broken; //0x0166
	bool m_has_exploded; //0x0167
	bool m_keep_registered; //0x0168
	bool unk_0169; //0x0169
	bool unk_016A; //0x016A
	bool unk_016B; //0x016B
}; //Size: 0x016C
static_assert(sizeof(CObjectCreationDataNode) == 0x17C);
#pragma pack(pop)
