#pragma once

#include <cstdint>

#pragma pack(push, 2)
class CSectorDataNode
{
public:
    char pad_0x0[192]; //0x0
    uint16_t m_pos_x; //0xC0
    uint16_t m_pos_y; //0xC2
    uint16_t m_pos_z; //0xC4
};
static_assert(sizeof(CSectorDataNode) == 0xC6);
#pragma pack(pop)