#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPhysicalVelocityDataNode : CSyncDataNodeFrequent
{
public:
    int32_t m_velocity_x; //0x00C0 Divide by 16.
    int32_t m_velocity_y; //0x00C4 Divide by 16.
    int32_t m_velocity_z; //0x00C8 Divide by 16.
}; // 0x00CC
static_assert(sizeof(CPhysicalVelocityDataNode) == 0xCC);
#pragma pack(pop)