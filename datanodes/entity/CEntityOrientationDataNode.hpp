#pragma once

#pragma pack(push, 4)
class CEntityOrientationDataNode
{
public:
    char pad_0x0[192]; //0x0000
    float m_eulers[11]; //0x00C0
}; //Size: 0x00EC
static_assert(sizeof(CEntityOrientationDataNode) == 0xEC);
#pragma pack(pop)
