#pragma once

#include "../player/CPlayerAngles.hpp"

class CCameraAngles
{
private:
	char pad_0000[704]; //0x0000
public:
	CPlayerAngles* m_vehicle; //0x02C0
	CPlayerAngles* m_vehicle_two; //0x02C8
private:
	char pad_02D0[240]; //0x02D0
public:
	CPlayerAngles* m_player_first_person; //0x03C0
}; //Size: 0x03C8
static_assert(sizeof(CCameraAngles) == 0x3C8);