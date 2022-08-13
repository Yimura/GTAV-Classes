#pragma once

#include <cstdint>

#pragma pack(push,4)
class CPedCreationDataNode
{
public:
    char pad_0000[192]; //0x0000
    uint32_t m_pop_type;  //0x00C0
    uint32_t m_model; //0x00C4
    uint32_t m_random_seed; //0x00C8
    uint32_t m_max_health; //0x00CC
    bool m_in_vehicle; //0x00D0
    char pad_0xD1[1]; //0x00D1
    uint16_t m_vehicle_id; //0x00D2
    uint32_t m_vehicle_seat; //0x00D4
    bool m_has_prop; //0x00D8
    char pad_0xD9[3];  //0x00D9
    uint32_t m_prop_model; //0x00DC
    bool m_is_standing; //0x00E0
    bool m_is_respawn_object_id; //0x00E1
    bool m_is_respawn_flagged_for_removal; //0x00E2
    bool m_has_attr_damage_to_player; //0x00E3
    uint8_t m_attribute_damage_to_player; //0x00E4
    uint32_t m_voice_hash; //0x00E8
}; //Size: 0x00EC
static_assert(sizeof(CPedCreationDataNode) == 0xEC);
#pragma pack(pop)