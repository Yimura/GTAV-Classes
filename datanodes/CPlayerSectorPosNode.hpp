#pragma once

#include <cstdint>

#pragma pack(push,4)
class CPlayerSectorPosNode
{
public:
    char pax_0000[192]; //0x0000
    float m_sector_pos_x; //0x00C0
    float m_sector_pos_y; //0x00C4
    float m_sector_pos_z; //0x00C8
    bool m_is_standing_on_entity; //0x00CC
    bool unk_00CD; //0x00CD
    bool unk_00CE; //0x00CE
    char pad_00CF[1]; //0x00CF
    uint16_t m_entity_standing_on; //0x00D0
    char pad_00D2[12]; //0x00D2
    float m_standing_on_entity_offset_x; //0x00E0
    float m_standing_on_entity_offset_y; //0x00E4
    float m_standing_on_entity_offset_z; //0x00E8
    char pad_00EC[8]; //0x00EC
    uint32_t m_stealth_noise;  //0x00F4
}; //Size: 0x00F8
static_assert(sizeof(CPlayerSectorPosNode) == 0xF8);
#pragma pack(pop)