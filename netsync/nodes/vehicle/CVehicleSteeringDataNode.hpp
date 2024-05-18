#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CVehicleSteeringNodeData : CSyncDataNodeFrequent
{
public:
	float m_steering_handle; // 0xC0
	char pad[4];             // 0xC4
}; //Size: 0x00C8
#pragma pack(pop)
static_assert(sizeof(CVehicleSteeringNodeData) == 0xC8);
