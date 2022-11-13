#pragma once

#include <cstdint>

#pragma pack(push, 4)
struct CDecorator
{
    uint32_t m_type;
    uint32_t m_value;
    uint32_t m_name_hash;
};

class CDynamicEntityGameStateDataNode
{
public:
    char pad_0000[192]; // 0x0000
    uint32_t m_interior_index; // 0x00C0
    bool unk_00C4; // 0x00C4
    bool unk_00C5; // 0x00C5
    uint32_t m_decor_count; // 0x00C8
    CDecorator m_decors[12]; // 0x00CC
}; //Size: 0x15C
static_assert(sizeof(CDynamicEntityGameStateDataNode) == 0x15C);
#pragma pack(pop)
