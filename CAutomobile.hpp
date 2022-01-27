#pragma once
#include "CHandlingData.hpp"
#include "CVehicleDrawHandler.hpp"
#include "CVehicleModelInfo.hpp"
#include "fwEntity.hpp"

class CAutomobile : public rage::fwEntity
{
public:
	char pad_018C[240]; //0x018C
	float m_health; //0x027C
	char pad_0280[28]; //0x0280
	float m_health_max; //0x029C
	char pad_02A0[116]; //0x02A0
	uint8_t m_boost_state; //0x0314
	char pad_0315[2]; //0x0315
	uint8_t m_boost_allow_recharge; //0x0317
	char pad_0318[4]; //0x0318
	float m_boost; //0x031C
	float m_rocket_recharge_speed; //0x0320
	char pad_0324[136]; //0x0324
	float m_jump_boost_charge; //0x03AC
	char pad_03B0[1164]; //0x03B0
	float m_body_health; //0x083C
	float m_petrol_tank_health; //0x0840
	char pad_0844[192]; //0x0844
	float m_engine_health; //0x0904
	char pad_0908[44]; //0x0908
	class CHandlingData *m_handling; //0x0934
	char pad_093C[2]; //0x093C
	uint8_t m_is_drivable; //0x093E
	uint8_t m_tyres_can_burst; //0x093F
	uint8_t m_deform_god; //0x0940
	char pad_0941[179]; //0x0941
	float m_dirt_level; //0x09F4
	char pad_09F8[194]; //0x09F8
	uint8_t m_is_targetable; //0x0ABA
	char pad_0ABB[413]; //0x0ABB
	float m_gravity; //0x0C58
	char pad_0C5C[8]; //0x0C5C
	class CPed *m_driver; //0x0C64
	class CPed *m_passengers[15]; //0x0C6C
	class CPed *m_last_driver; //0x0CE4
}; //Size: 0x0CEC
static_assert(sizeof(CAutomobile) == 0xCEC);
