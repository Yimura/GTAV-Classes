#pragma once

#include <cstdint>

class CPedAIDataNode
{
public:
    char pad_0000[192]; //0x0000
    uint32_t m_relationship_group; //0x00C0
    uint32_t m_decision_maker_type; //0x00C4
}; //Size: 0x00C8
static_assert(sizeof(CPedAIDataNode) == 0xC8);
