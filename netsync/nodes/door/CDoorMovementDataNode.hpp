#pragma once
#include <cstdint>
#include "rage/vector.hpp"
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CDoorMovementDataNode : CSyncDataNodeFrequent
{
public:
	bool m_is_manual_door; // 0xC0
	float m_open_ratio;    // 0xC4
	bool m_opening;        // 0xC8
	bool m_fully_open;     // 0xC9
	bool m_closed;         // 0xCA
};
static_assert(sizeof(CDoorMovementDataNode) == 0xCC);
#pragma pack(pop)
