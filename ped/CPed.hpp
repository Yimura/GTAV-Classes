#pragma once


#include "../vehicle/CVehicle.hpp"
#include "../player/CPlayerInfo.hpp"
#include "CPedModelInfo.hpp"
#include "CPedWeaponManager.hpp"
#include "CPedInventory.hpp"
#include "../entities/fwEntity.hpp"
#include "../rage/vector.hpp"
#include "../draw_handlers/CPedDrawHandler.hpp"

#include <cstdint>

#pragma pack(push, 1)

class CPed : public rage::CPhysical
{
public:
	CPedModelinfo* m_model_info; //0x0020 
	char pad_0x0028[0x20]; //0x0028
	CPedDrawHandler* m_draw_handler; //0x0048 
	char pad_0x0050[0x230]; //0x0050
	float m_health; //0x0280 
	char pad_0x0284[0x1C]; //0x0284
	float m_max_health; //0x02A0 
	char pad_0x02A4[0x7C]; //0x02A4
	rage::fvector3 m_velocity; //0x0320 
	char pad_0x032C[0x8A4]; //0x032C
	CBuilding* m_building; //0x0BD0 
	char pad_0x0BD8[0x158]; //0x0BD8
	CVehicle* m_vehicle; //0x0D30 
	char pad_0x0D38[0x390]; //0x0D38
	CPlayerInfo* m_player_info; //0x10C8 
	CPedInventory* m_inventory; //0x10D0 
	CPedWeaponManager* m_weapon_manager; //0x10D8 
	char pad_0x10E0[0x38B]; //0x10E0
	uint8_t m_ped_task_flag; //0x146B 
	char pad_0x146C[0xC4]; //0x146C
	float m_armor; //0x1530 
}; //Size: 0x1534
static_assert(sizeof(CPed) == 0x1534);

#pragma pack(pop)
