#pragma once

#include <cstdint>
#include "../../rage/vector.hpp"

#pragma pack(push, 8)
class CPickupPlacementCreationDataNode
{
public:
    char pad_0000[192]; //0x0000
    bool m_has_pickup_data; //0x00C0
    char pad_00C1[15]; //0x00C1
    rage::fvector3 m_pickup_pos; //0x00D0
    char pad_00DC[4]; //0x00DC
    rage::fvector4 m_pickup_orientation; //0x00E0
    uint32_t m_pickup_type; //0x00F0
    uint32_t m_pickup_flags; //0x00F4
    uint32_t m_amount; //0x00F8
    uint32_t m_custom_model; //0x00FC
    uint32_t m_custom_regeneration_time; //0x0100
    uint32_t m_team_permits; //0x0104
    uint64_t *unk_struct_0108; //0x0108
}; //Size: 0x0110
static_assert(sizeof(CPickupPlacementCreationDataNode) == 0x110);
#pragma pack(pop)
