#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPhysicalMigrationDataNode : CProjectBaseSyncDataNode
{
public:
	bool m_unk;
};
static_assert(sizeof(CPhysicalMigrationDataNode) == 0xC4);
#pragma pack(pop)