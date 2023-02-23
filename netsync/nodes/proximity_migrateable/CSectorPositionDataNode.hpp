#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CSectorPositionDataNode : CSyncDataNodeFrequent
{
public:
    float m_sector_pos_x; //0x00C0
    float m_sector_pos_y; //0x00C4
    float m_sector_pos_z; //0x00C8
}; //Size: 0x00CC
static_assert(sizeof(CSectorPositionDataNode) == 0xCC);
#pragma pack(pop)