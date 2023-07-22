#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"
#include "netsync/nodes/physical/CPhysicalHealthDataNode.hpp"

#pragma pack(push, 8)
class CHeliHealthDataNode : CPhysicalHealthDataNode // intentionally private since the physical health node fields aren't serialized
{
public:
	char m_pad[0x10]; // 0xF0
	uint32_t m_main_rotor_health;
	uint32_t m_rear_rotor_health;
	bool m_can_tail_boom_break_off;
	bool m_is_tail_boom_broken;
	bool m_unk;
	bool m_disable_explode_from_body_damage;
	uint32_t m_body_health;
	uint32_t m_petrol_tank_health;
	uint32_t m_engine_health;
	float m_unk_deformation_level;
	float m_unk2_deformation_level;
	float m_unk3_deformation_level;
};
static_assert(sizeof(CHeliHealthDataNode) == 0x118);
#pragma pack(pop)