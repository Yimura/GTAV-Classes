#pragma once
#include <cstdint>

// todo?
#pragma pack(push, 4)
class CPedInventoryDataNode
{
public:
    char pad_0000[5232];
    uint32_t m_items[105];
    uint32_t m_num_items;
    uint32_t m_ammos[65];
    uint32_t m_ammo_quantities[65];
    uint32_t m_num_ammos;
    uint8_t unk_1680[105];
    uint8_t unk_16E9[105];
    char pad_1680[1260];
    bool m_infinite_ammos[65];
    bool m_ammo_all_infinite;
};
static_assert(sizeof(CPedInventoryDataNode) == 0x1E24);
#pragma pack(pop)