#pragma once

#include <cstdint>

#pragma pack(push, 4)
class CDynamicEntityGameStateDataNode
{
public:
    char pad_0000[192]; // 0x0000
    uint32_t m_interior_index; // 0x00C0
    bool unk_00C4; // 0x00C4
    bool unk_00C5; // 0x00C5
    uint32_t m_decor_count; // 0x00C8
    uint32_t m_decor_type[12]; // 0x00CC
    uint32_t m_decor_value[12]; // 0x00FC
    uint32_t m_decor_name_hash[12]; // 0x012C
}; //Size: 0x15C
static_assert(sizeof(CDynamicEntityGameStateDataNode) == 0x15C);
#pragma pack(pop)