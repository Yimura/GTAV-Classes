#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CMigrationDataNode : CProjectBaseSyncDataNode
{
public:
    uint32_t m_cloned_state; //0x00C0
    uint32_t m_cloned_players_that_left; //0x00C4
    uint32_t m_unsynced_nodes; //0x00C8
}; //Size: 0x00CC
static_assert(sizeof(CMigrationDataNode) == 0xCC);
#pragma pack(pop)