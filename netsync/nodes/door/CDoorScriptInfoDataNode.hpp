#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"
#include "script/CGameScriptObjInfo.hpp"

#pragma pack(push, 4)
struct CDoorScriptInfoDataNode : CSyncDataNodeInfrequent
{
public:
	alignas(8) bool m_has_script_info;
	CGameScriptObjInfo m_script_info;
	uint32_t m_door_system_hash;
	bool m_existing_door_system_entry;
};
static_assert(sizeof(CDoorScriptInfoDataNode) == 0x120);
#pragma pack(pop)