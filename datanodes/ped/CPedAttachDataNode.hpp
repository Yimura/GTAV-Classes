#pragma once

#include <cstdint>
#include "../../rage/vector.hpp"

#pragma pack(push,4)
class CPedAttachDataNode
{
public:
    char pad_0000[192]; //0x0000
    rage::fvector3 m_offset; //0x00C0
    char pad_00CC[4]; //0x00CC
    rage::fvector4 m_orientation; //0x00D0
    uint16_t m_attached_to; //0x00E0
    uint16_t m_attachment_bone; //0x00E2
    uint32_t m_attachment_flags; //0x00E4
    float m_heading_1; //0x00E8
    float m_heading_2; //0x00EC
    bool m_attached; //0x00F0
    bool unk_00F1; //0x00F1
};
static_assert(sizeof(CPedAttachDataNode) == 0xF4);
#pragma pack(pop)
