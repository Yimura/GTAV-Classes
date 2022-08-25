#pragma once

#include <cstdint>
#include "../../rage/vector.hpp"

#pragma pack(push,4)
class CPhysicalAttachDataNode
{
public:
    char pad_0000[192]; //0x0000
    bool m_attached; //0x00C0
    bool unk_00C1; //0x00C1
    uint16_t m_attached_to; //0x00C2
    char pad_00C4[12]; //0x00C4
    rage::fvector3 m_offset; //0x00D0
    char pad_00DC[4]; //0x00DC
    rage::fvector4 m_orientation; //0x00E0
    rage::fvector3 m_parent_offset; //0x00F0
    char pad_00FC[4]; //0x00FC
    uint16_t m_other_attach_bone; //0x0100
    uint16_t m_attach_bone; //0x0102
    uint32_t m_attach_flags; //0x0104
    bool m_allow_initial_separation; //0x0108
    char pad_00109[3]; //0x0109
    float unk_010C; //0x010C
    float unk_0110; //0x0110
    bool unk_0114; //0x0114
    bool unk_0115; //0x0115
    bool m_is_cargo_vehicle; //0x0116
}; //Size: 0x0118
static_assert(sizeof(CPhysicalAttachDataNode) == 0x118);
#pragma pack(pop)
