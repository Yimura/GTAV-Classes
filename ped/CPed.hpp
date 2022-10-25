#pragma once


#include "../vehicle/CVehicle.hpp"
#include "../player/CPlayerInfo.hpp"
#include "CPedModelInfo.hpp"
#include "CPedWeaponManager.hpp"
#include "CPedInventory.hpp"
#include "../entities/fwEntity.hpp"
#include "../rage/vector.hpp"

#include <cstdint>

#pragma pack(push, 1)

class CPed : public rage::CPhysical
{
public:
	char gap30C[20];
	rage::fvector3 m_velocity; //0x0320
	char pad_032C[2564]; //0x032C
	class CVehicle *m_vehicle; //0x0D30
	char pad_0D38[912]; //0x0D38
	class CPlayerInfo *m_player_info; //0x10C8
	class CPedInventory* m_inventory; //0x10D0
	class CPedWeaponManager *m_weapon_manager; //0x10D8
	char pad_10E0[907]; //0x10E0
	uint8_t m_ped_task_flag; //0x146B
	char pad_146C[192]; //0x146C
	float m_armor; //0x150C
}; //Size: 0x1510
static_assert(sizeof(CPed) == 0x1510);

#pragma pack(pop)
