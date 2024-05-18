#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
struct CEntityScriptGameStateDataNode : CSyncDataNodeInfrequent
{
	bool m_fixed; //0x00C0
	bool m_uses_collision; //0x00C1
	bool m_completely_disabled_collision; //0x00C2
}; //Size: 0x00C3
static_assert(sizeof(CEntityScriptGameStateDataNode) == 0xC4);
#pragma pack(pop)