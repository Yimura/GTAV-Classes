#pragma once
#include "CEntitySyncTreeBase.hpp"
#include "netsync/netSyncParentNode.hpp"

#include "netsync/nodes/dynamic_entity/CDynamicEntityGameStateDataNode.hpp"

class CDynamicEntitySyncTreeBase : public CEntitySyncTreeBase
{
public:
	CDynamicEntityGameStateDataNode m_dynamic_entity_game_state_data_node;
};
static_assert(sizeof(CDynamicEntitySyncTreeBase) == 0xE28);