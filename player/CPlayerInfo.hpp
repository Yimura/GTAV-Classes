#pragma once

#include "../rage/rlGamerInfo.hpp"

#include <cstdint>

enum class eGameState : int32_t
{
	Invalid = -1,
	Playing,
	Died,
	Arrested,
	FailedMission,
	LeftGame,
	Respawn,
	InMPCutscene
};

#pragma pack(push, 4)
class CPlayerInfo
{
public:
	char pad_0000[32]; //0x0000
	class rage::rlGamerInfo m_net_player_data; //0x0020
	char pad_0110[184]; //0x0110
	float m_swim_speed; //0x01C8
	char pad_01CC[20]; //0x01CC
	uint32_t m_water_proof; //0x01E0
	char pad_01E4[76]; //0x01E4
	eGameState m_game_state; //0x0230
	char pad_0234[12]; //0x0234
	class CPed* m_ped; //0x0240
	char pad_0248[40]; //0x0248
	uint32_t m_frame_flags; //0x0270
	char pad_0274[52]; //0x0274
	uint32_t m_player_controls; //0x02A8
	char pad_02AC[1248]; //0x02AC
	float m_wanted_can_change; //0x078C
	char pad_0790[304]; //0x0790
	uint32_t m_npc_ignore; //0x08C0
	char pad_08C4[12]; //0x08C4
	bool m_is_wanted; //0x08D0
	char pad_08D1[7]; //0x08D1
	uint32_t m_wanted_level; //0x08D8
	uint32_t m_wanted_level_display; //0x08DC
	char pad_08E0[1120]; //0x08E0
	float m_run_speed; //0x0D40
	float m_stamina; //0x0D44
	float m_stamina_regen; //0x0D48
	char pad_0D4C[16]; //0x0D4C
	float m_weapon_damage_mult; //0x0D5C
	float m_weapon_defence_mult; //0x0D60
	char pad_0D64[4]; //0x0D64
	float m_melee_weapon_damage_mult; //0x0D68
	float m_melee_damage_mult; //0x0D6C
	float m_melee_defence_mult; //0x0D70
	char pad_0D74[8]; //0x0D74
	float m_melee_weapon_defence_mult; //0x0D7C
}; //Size: 0x0D80
static_assert(sizeof(CPlayerInfo) == 0xD80);
#pragma pack(pop)
