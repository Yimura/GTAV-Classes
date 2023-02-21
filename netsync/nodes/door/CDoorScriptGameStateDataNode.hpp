#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
struct CDoorScriptGameStateDataNode : CSyncDataNodeInfrequent
{
public:
	uint32_t m_door_system_state; // 0xC0
	float m_automatic_distance;   // 0xC4
	float m_slide_rate;           // 0xC8
	bool m_has_broken_flags;      // 0xCC
	uint32_t m_broken_flags;      // 0xD0
	bool m_has_damaged_flags;     // 0xD4
	uint32_t m_damaged_flags;     // 0xD8
	bool m_hold_open;             // 0xDC
};
static_assert(sizeof(CDoorScriptGameStateDataNode) == 0xE0);
#pragma pack(pop)