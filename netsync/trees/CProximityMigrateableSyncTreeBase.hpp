#pragma once
#include "netsync/CProjectSyncTree.hpp"
#include "netsync/netSyncParentNode.hpp"

#include "netsync/nodes/proximity_migrateable/CMigrationDataNode.hpp"
#include "netsync/nodes/proximity_migrateable/CGlobalFlagsDataNode.hpp"
#include "netsync/nodes/proximity_migrateable/CSectorDataNode.hpp"
#include "netsync/nodes/proximity_migrateable/CSectorPositionDataNode.hpp"

class CProximityMigrateableSyncTreeBase : public CProjectSyncTree
{
public:
	CProjectBaseSyncParentNode m_parent_node_1;
	CProjectBaseSyncParentNode m_parent_node_2;
	CProjectBaseSyncParentNode m_parent_node_3;
	CMigrationDataNode m_migration_data_node;
	CGlobalFlagsDataNode m_global_flags_data_node;
	CSectorDataNode m_sector_data_node;
	CSectorPositionDataNode m_sector_position_data_node;
	char pad_0910[8];
};
static_assert(sizeof(CProximityMigrateableSyncTreeBase) == 0x918);