#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPedOrientationDataNode : CSyncDataNodeFrequent
{
public:
	bool m_has_desired_heading_x; //000C1
	bool m_has_desired_heading_y; //000C2
	float m_desired_heading_x; //0x00C4
	float m_desired_heading_y; //0x00C8
};
static_assert(sizeof(CPedOrientationDataNode) == 0xCC);
#pragma pack(pop)
