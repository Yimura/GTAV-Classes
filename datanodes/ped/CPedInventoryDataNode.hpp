#pragma once

#include <cstdint>

#pragma pack(push,1)
class CPedInventoryDataNode
{
public:
    char pad_0000[4812]; //0x0000
    uint32_t m_items[105]; //0x12CC
    uint32_t m_num_items; //0x1470
    uint32_t m_ammos[65]; //0x1474
    uint32_t m_ammo_quantities[65]; //0x1578
    uint32_t m_num_ammos; //0x167C
    uint8_t unk_1680[105]; //0x1680
    uint8_t unk_16E9[105]; //0x16E9
    char pad_1680[1155]; //0x1752
    bool m_infinite_ammos[65]; //0x1BD5
    bool m_ammo_all_infinite; //0x1C16
}; //Size: 0x1C17
static_assert(sizeof(CPedInventoryDataNode) == 0x1C17);
#pragma pack(pop)