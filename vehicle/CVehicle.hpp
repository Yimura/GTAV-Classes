#pragma once

#include "entities/CPhysical.hpp"
#include "vehicle/CHandlingData.hpp"

#include <cstdint>

#pragma pack(push, 4)
class CVehicle : public rage::CPhysical
{
public:
	char pad_030C[12]; //0x30C
	uint8_t m_boost_state; //0x0318
	char pad_0319[2]; //0x0319
	uint8_t m_boost_allow_recharge; //0x031B
	char pad_031C[4]; //0x031C
	float m_boost; //0x0320
	float m_rocket_recharge_speed; //0x0324
	char pad_0328[136]; //0x0328
	float m_jump_boost_charge; //0x03B0
	char pad_03B4[1164]; //0x03B4
	float m_body_health; //0x0840
	float m_petrol_tank_health; //0x0844
	char pad_0848[192]; //0x0848
	float m_engine_health; //0x0908
	char pad_090C[44]; //0x090C
	class CHandlingData *m_handling; //0x0938
	char pad_0940[2]; //0x0940
	uint8_t m_is_drivable; //0x0942
	uint8_t m_tyres_can_burst; //0x0943
	uint8_t m_deform_god; //0x0944
	char pad_0945[179]; //0x0945
	float m_dirt_level; //0x09F8
	char pad_09FC[194]; //0x09FC
	uint8_t m_is_targetable; //0x0ABE
	char pad_0ABF[413]; //0x0ABF
	float m_gravity; //0x0C5C
	char pad_0C60[8]; //0x0C60
	class CPed *m_driver; //0x0C68
	class CPed *m_passengers[15]; //0x0C70
	class CPed *m_last_driver; //0x0CE8
}; //Size: 0x0CF0
static_assert(sizeof(CVehicle) == 0xCF0);
#pragma pack(pop)
