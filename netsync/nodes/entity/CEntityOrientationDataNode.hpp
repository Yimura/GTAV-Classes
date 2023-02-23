#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CEntityOrientationDataNode : CSyncDataNodeFrequent
{
public:
    rage::fmatrix44 m_eulers;
}; //Size: 0x00EC
static_assert(sizeof(CEntityOrientationDataNode) == 0x100);
#pragma pack(pop)
