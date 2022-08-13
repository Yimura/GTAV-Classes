#pragma once

#include <cstdint>

#pragma pack(push, 8)
class CPickupCreationDataNode
{
public:
    char pad_0000[192]; //0x0000
    bool m_has_placement; //0x00C0
    char pad_00C1[7]; //0x00C1
    uint64_t *unk_struct_00C8; //0x00C8
    uint32_t unk_00D0; //0x00D0
    uint16_t unk_00D4; //0x00D4
    char pad_00D6[66]; //0x00D6
    uint32_t m_pickup_hash; //0x0118
    uint32_t m_amount; //0x011C
    uint32_t m_custom_model; //0x0120
    uint32_t m_life_time; //0x0124
    uint32_t m_weapon_component[11]; //0x0128
    uint32_t m_num_weapon_components; //0x0154
    uint32_t m_tint_index; //0x0158
    bool m_player_gift; //0x015C
    bool unk_015D; //0x015D
    char pad_015E[6]; //0x015E
    uint32_t unk_0164; //0x0164
    bool unk_0168; //0x0168
}; //Size: 0x0170
static_assert(sizeof(CPickupCreationDataNode) == 0x170);
#pragma pack(pop)
