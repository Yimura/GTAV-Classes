#pragma once
#include "CEntitySyncTreeBase.hpp"
#include "netsync/netSyncParentNode.hpp"

#include "netsync/nodes/physical/CPhysicalMigrationDataNode.hpp"
#include "netsync/nodes/physical/CPhysicalScriptMigrationDataNode.hpp"
#include "netsync/nodes/entity/CEntityOrientationDataNode.hpp"
#include "netsync/nodes/physical/CPhysicalVelocityDataNode.hpp"
#include "netsync/nodes/physical/CPhysicalAngVelocityDataNode.hpp"
#include "netsync/nodes/physical/CPhysicalHealthDataNode.hpp"
#include "netsync/nodes/physical/CPhysicalAttachDataNode.hpp"

class CPhysicalSyncTreeBase : public CDynamicEntitySyncTreeBase
{
public:
	CPhysicalMigrationDataNode m_physical_migration_data_node;
	CPhysicalScriptMigrationDataNode m_physical_script_migration_data_node;
	char pad_0FB8[8];
	CEntityOrientationDataNode m_entity_orientation_data_node;
	CPhysicalVelocityDataNode m_physical_velocity_data_node;
	CPhysicalAngVelocityDataNode m_physical_angular_velocity_data_node;
	char pad_1258[8];
	CPhysicalHealthDataNode m_physical_health_data_node;
	CPhysicalAttachDataNode m_physical_attach_data_node;
	char pad_1458[8];
	char m_physical_game_state_data_node[0x1530 - 0x1460]; // TODO
	char m_physical_script_game_state_data_node[0x1620 - 0x1530]; // TODO
};
static_assert(sizeof(CPhysicalSyncTreeBase) == 0x1620);