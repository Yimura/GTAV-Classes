#pragma once
#include "CProximityMigrateableSyncTreeBase.hpp"
#include "netsync/netSyncParentNode.hpp"

#include "netsync/nodes/entity/CEntityScriptInfoDataNode.hpp"
#include "netsync/nodes/entity/CEntityScriptGameStateDataNode.hpp"

class CEntitySyncTreeBase : public CProximityMigrateableSyncTreeBase
{
public:
	CProjectBaseSyncParentNode m_parent_node_4[5];
	CEntityScriptInfoDataNode m_entity_script_info_data_node;
	CEntityScriptGameStateDataNode m_entity_script_game_state_data_node;
};
static_assert(sizeof(CEntitySyncTreeBase) == 0xCD8);