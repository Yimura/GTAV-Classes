#pragma once

#pragma pack(push, 4)
class CSectorPositionDataNode
{
public:
    char pad_0000[192]; //0x0000
    float m_sector_pos_x; //0x00C0
    float m_sector_pos_y; //0x00C4
    float m_sector_pos_z; //0x00C8
}; //Size: 0x00CC
static_assert(sizeof(CSectorPositionDataNode) == 0xCC);
#pragma pack(pop)