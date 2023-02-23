#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

class CPedAIDataNode : CSyncDataNodeInfrequent
{
public:
    uint32_t m_relationship_group; //0x00C0
    uint32_t m_decision_maker_type; //0x00C4
}; //Size: 0x00C8
static_assert(sizeof(CPedAIDataNode) == 0xC8);
