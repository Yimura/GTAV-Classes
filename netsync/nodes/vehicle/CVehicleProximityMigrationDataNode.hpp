#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push,4)
class CVehicleProximityMigrationDataNode : CProjectBaseSyncDataNode
{
public:
	uint32_t m_max_occupants;
	bool m_has_occupants[16];
	int16_t m_occupants[16];
	char pad[16];
	bool m_override_position;
	char pad2[8];
	rage::fvector3 m_position;
	rage::vector3<int32_t> m_velocity;
	char pad3[352];
}; //Size: 0x0180
static_assert(sizeof(CVehicleProximityMigrationDataNode) == 0x288);
#pragma pack(pop)