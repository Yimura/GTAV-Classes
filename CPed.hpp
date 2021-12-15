#pragma once
#include "CAutomobile.hpp"
#include "CPedModelInfo.hpp"
#include "CPedWeaponManager.hpp"
#include "CPlayerInfo.hpp"
#include "pgBase.hpp"

#pragma pack(push, 1)

class CPed
{
public:
	char pad_0000[32]; //0x0000
	class CPedModelInfo *m_ped_model_info; //0x0020
	uint8_t m_entity_type; //0x0028
	char pad_0029[3]; //0x0029
	uint8_t m_invisible; //0x002C
	char pad_002D[1]; //0x002D
	uint8_t m_freeze_momentum; //0x002E
	char pad_002F[1]; //0x002F
	class pgBase *m_posbase; //0x0030
	char pad_0038[88]; //0x0038
	rage::vector3 m_camera; //0x0090
	char pad_009C[237]; //0x009C
	uint8_t m_godmode; //0x0189
	char pad_018A[2]; //0x018A
	uint8_t m_hostility; //0x018C
	char pad_018D[243]; //0x018D
	float m_health; //0x0280
	char pad_0284[28]; //0x0284
	float m_maxhealth; //0x02A0
	char pad_02A4[124]; //0x02A4
	rage::vector3 m_velocity; //0x0320
	char pad_032C[2564]; //0x032C
	class CAutomobile *m_vehicle; //0x0D30
	char pad_0D38[912]; //0x0D38
	class CPlayerInfo *m_player_info; //0x10C8
	char pad_10D0[8]; //0x10D0
	class CPedWeaponManager *m_weapon_manager; //0x10D8
	char pad_10E0[907]; //0x10E0
	uint8_t m_in_vehicle; //0x146B
	char pad_146C[196]; //0x146C
	float m_armor; //0x1530
}; //Size: 0x1534
static_assert(sizeof(CPed) == 0x1534);

#pragma pack(pop)
