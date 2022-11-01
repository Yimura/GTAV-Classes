#pragma once


#include "../vehicle/CVehicle.hpp"
#include "../player/CPlayerInfo.hpp"
#include "CPedModelInfo.hpp"
#include "CPedWeaponManager.hpp"
#include "CPedInventory.hpp"
#include "../entities/fwEntity.hpp"
#include "../rage/vector.hpp"
#include "CPedOxygenInfo.hpp"
#include "CPedBoneInfo.hpp"

#include <cstdint>

#pragma pack(push, 1)

class CPed : public rage::CPhysical
{
public:
	char gap30C[20];
	rage::fvector3 m_velocity; //0x0300
	char pad_032C[260]; //0x030C
	class CPedBoneInfo m_bone_info; //0x0410
	char pad_4A0[2160]; //0x04A0
	class CVehicle *m_vehicle; //0x0D10
	char pad_0D38[904]; //0x0D18
	class CPedOxygenInfo* m_oxygen_info; //0x10A0
	class CPlayerInfo *m_player_info; //0x10A8
	class CPedInventory* m_inventory; //0x10B0
	class CPedWeaponManager *m_weapon_manager; //0x10B8
	char pad_10C0[892]; //0x10C0
	uint8_t m_seatbelt; //0x143C
	char pad_143D[14]; //0x143D
	uint8_t m_ped_task_flag; //0x144B
	char pad_146C[192]; //0x144C
	float m_armor; //0x150C
}; //Size: 0x1510
static_assert(sizeof(CPed) == 0x1510);

#pragma pack(pop)
