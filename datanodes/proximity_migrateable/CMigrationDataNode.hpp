#pragma once

#include <cstdint>

#pragma pack(push, 4)
class CMigrationDataNode
{
public:
    char pad_0000[192]; //0x0000
    uint32_t m_cloned_state; //0x00C0
    uint32_t m_cloned_players_that_left; //0x00C4
    uint32_t m_unsynced_nodes; //0x00C8
}; //Size: 0x00CC
static_assert(sizeof(CMigrationDataNode) == 0xCC);
#pragma pack(pop)