#pragma once

#include <cstdint>
#include "../../rage/vector.hpp"

#pragma pack(push,8)
class CObjectCreationDataNode
{
public:
    char pad_0000[192]; //0x0000
    uint16_t unk_00C0; //0x00C0
    char pad_0xC2[14]; //0x00C2
    rage::fvector4 m_object_orientation; //0x00D0
    char pad_00E0[30]; //0x00E0
    rage::fvector3 m_object_position; //0x0100
    char pad_010C[4]; //0x010C
    rage::fvector3 m_dummy_position; //0x010E
    char pad_011A[20]; //0x011C
    rage::fvector3 m_script_grab_position; //0x0130
    char pad_013C[12]; //0x013C
    float m_script_grab_radius; //0x0148
    uint32_t m_created_by; //0x014C
    uint32_t m_model; //0x0150
    uint32_t m_frag_group_index; //0x0154
    uint32_t m_ownership_token; //0x0158
    uint32_t unk_015C; //0x015C
    bool m_no_reassign; //0x0160
    bool unk_0161; //0x0161
    bool m_player_wants_control; //0x0162
    bool m_has_init_physics; //0x0163
    bool m_script_grabbed_from_world; //0x0164
    bool m_has_frag_group; //0x0165
    bool m_is_broken; //0x0166
    bool m_has_exploded; //0x0167
    bool m_keep_registered; //0x0168
    bool unk_0169; //0x0169
    bool unk_016A; //0x016A
    bool unk_016B; //0x016B
}; //Size: 0x016C
static_assert(sizeof(CObjectCreationDataNode) == 0x16C);
#pragma pack(pop)
