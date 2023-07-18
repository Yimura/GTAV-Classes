#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPedMovementGroupDataNode : CSyncDataNodeFrequent
{
public:
	float m_unk;			                  // 0xC0 (CTaskMotionInAutomobile+0x1EC)
	uint32_t m_movement_task_index;           // 0xC4
	uint32_t m_movement_task_stage;           // 0xC8
	uint32_t m_movement_group;                // 0xCC
	uint32_t m_overridden_weapon_group;       // 0xD0
	uint32_t m_overridden_unk_group;          // 0xD4 (SET_PED_ALTERNATE_MOVEMENT_ANIM?)
	bool m_is_crouching;                      // 0xD8
	bool m_is_stealthy;                       // 0xD9
	bool m_is_strafing;                       // 0xDA
	bool m_is_ragdolling;                     // 0xDB
	bool m_is_ragdoll_constraint_ankle_active;// 0xDC
	bool m_is_ragdoll_constraint_wrist_active;// 0xDD
	char m_pad1[2];                           // 0xDE
	char m_tennis_data[0x20];                 // 0xE0 TODO
};
static_assert(sizeof(CPedMovementGroupDataNode) == 0x100);
#pragma pack(pop)
