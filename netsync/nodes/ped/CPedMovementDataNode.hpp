#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push,4)
class CPedMovementDataNode : CSyncDataNodeFrequent
{
public:
    bool m_has_desired_move_blend_ratio_x; //0x00C0
    bool m_has_desired_move_blend_ratio_y; //0x00C1
    bool unk_00C2; //0x00C2
    float m_desired_move_blend_ratio_x; //0x00C4
    float m_desired_move_blend_ratio_y; //0x00C8
    float unk_00CC; //0x00CC
    float m_desired_pitch; //0x00D0
}; //Size: 0x00D4
static_assert(sizeof(CPedMovementDataNode) == 0xD4);
#pragma pack(pop)
