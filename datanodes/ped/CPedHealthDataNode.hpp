#pragma once

#include <cstdint>

#pragma pack(push,2)
class CPedHealthDataNode
{
public:
    char pad_0000[192]; //0x0000
    uint32_t unk_00C0; //0x00C0
    uint32_t m_health; //0x00C4
    uint32_t m_armor; //0x00C8
    uint32_t unk_00CC; //0x00CC
    uint32_t unk_00D0; //0x00D0
    uint32_t m_weapon_damage_hash; //0x00D4
    uint32_t m_hurt_end_time; //0x00D8
    uint32_t m_weapon_damage_component; //0x00DC
    uint16_t m_weapon_damage_entity; //0x00E0
    bool m_has_max_health; //0x00E2
    bool m_has_default_armor; //0x00E3
    bool unk_00E4; //0x00E4
    bool m_killed_with_headshot; //0x00E5
    bool m_killed_with_melee; //0x00E6
    char m_hurt_started; //0x00E7
    bool unk_00E8; //0x00E8
    bool unk_00E9; //0x00E9
}; //Size: 0x0EA
static_assert(sizeof(CPedHealthDataNode) == 0xEA);
#pragma pack(pop)