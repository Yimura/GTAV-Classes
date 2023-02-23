#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPhysicalScriptMigrationDataNode : CProjectBaseSyncDataNode
{
public:
	bool m_has_data;           // 0xC0
	int m_script_participants; // 0xC4
	uint16_t m_host_token;     // 0xC8
};
static_assert(sizeof(CPhysicalScriptMigrationDataNode) == 0xCC);
#pragma pack(pop)