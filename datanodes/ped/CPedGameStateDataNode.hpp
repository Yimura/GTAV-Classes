#pragma once

#include <cstdint>

#pragma pack(push,2)
class CPedGameStateDataNode
{
public:
    char pad_0000[192]; //0x0000
    bool m_weapon_component_something[11]; //0x0C0
    uint32_t m_weapon_component_hash[11]; //0x0CC
    uint32_t m_gadget_hash[3]; //0x0F8
    uint32_t unk_0104; // 0x0104
    uint32_t unk_0108; // 0x0108
    uint32_t unk_010C; // 0x010C
    float unk_0110; // 0x0110
    float unk_0114; // 0x0114
    float unk_0118; // 0x0118
    bool unk_011C; // 0x011C
    char pad_011D[3]; //0x011D
    uint32_t m_arrest_state; //0x0120
    uint32_t m_death_state; //0x0124
    uint32_t m_weapon_hash; //0x0128
    uint32_t m_num_weapon_components; //0x012C
    uint32_t m_num_equiped_gadgets; //0x0130
    uint32_t m_seat; //0x0134
    uint32_t m_action_mode_override; //0x0138
    uint32_t unk_013C; // 0x013C
    uint16_t m_vehicle; //0x0140
    uint16_t m_mount_id; //0x0142
    uint16_t m_custodian_id; //0x0144
    uint16_t unk_0146; // 0x0146
    bool m_tint_index; //0x0148
    char pad_0149; //0x0149
    uint8_t unk_014A; // 0x014A
    bool m_is_handcuffed; //0x014B
    bool m_can_preform_arrest; //0x014C
    bool m_can_preform_uncuff; //0x014D
    bool m_can_be_arrested; //0x014E
    bool m_is_in_custody; //0x014F
    char pad_0150; //0x0150
    bool m_weapon_exists; //0x0151
    bool m_weapon_visible; //0x0152
    bool m_weapon_has_ammo; //0x0153
    bool m_weapon_attach_left; //0x0154
    char pad_0155; //0x0155
    bool m_in_seat; //0x0156
    bool m_in_vehicle; //0x0157
    bool m_on_mount; //0x0158
    bool m_has_custodian_or_arrest_flags; //0x0159
    char pad_015A; //0x015A
    bool m_action_mode_enabled; //0x015B
    bool m_stealth_mode_enabled; //0x015C
    bool unk_015D; // 0x015D
    bool unk_015E; // 0x015E
    bool unk_015F; // 0x015F
    bool unk_0160; // 0x0160
    bool unk_0161; // 0x0161
    bool unk_0162; // 0x0162
    bool unk_0163; // 0x0163
    bool unk_0164; // 0x0164
    bool unk_0165; // 0x0165
    bool unk_0166; // 0x0166
    bool unk_0167; // 0x0167
    bool unk_0168; // 0x0168
    bool unk_0169; // 0x0169
    bool unk_016A; // 0x016A
    bool unk_016B; // 0x016B
    bool unk_016C; // 0x016C
    bool unk_016D; // 0x016D
    bool unk_016E; // 0x016E
    bool unk_016F; // 0x016F
    bool unk_0170; // 0x0170
    bool unk_0171; // 0x0171
    bool unk_0172; // 0x0172
}; //Size: 0x0174
static_assert(sizeof(CPedGameStateDataNode) == 0x174);
#pragma pack(pop)