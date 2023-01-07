#pragma once

#pragma pack(push, 4)
class CPedOrientationDataNode
{
public:
	char gap0[192];//0x0000
	bool m_has_desired_heading_x;//0x00C1
	bool m_has_desired_heading_y;//0x00C2
	float m_desired_heading_x;//0x000C4
	float m_desired_heading_y;//0x000C8
};
static_assert(sizeof(CPedMovementDataNode) == 0xD4);
#pragma pack(pop)
