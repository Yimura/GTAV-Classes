#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 2)
class CVehicleGameStateDataNode : CSyncDataNodeInfrequent
{
public:
	float m_unk66;
	float m_unk32;
	float m_unk200;
	float m_unk204;
	int m_radio_station;
	uint32_t m_lock_status;
	uint32_t m_unk17;
	uint32_t m_unbreakable_doors;
	uint32_t m_open_windows;
	uint32_t m_unk34;
	uint8_t m_unk49[4];
	unsigned int m_unk62_1;
	uint32_t m_unk240;
	uint16_t m_unk35;
	uint16_t m_unk37[2];
	uint16_t m_unk39;
	uint8_t m_unk252;
	char m_light_state;
	uint8_t m_unk21;
	char m_unk27[8];
	uint8_t m_doors_open;
	char m_door_positions[8];
	uint32_t m_locked_players;
	uint8_t m_is_engine_on;
	bool m_is_engine_starting;
	bool unk4;
	bool m_handbrake;
	bool m_unk6;
	uint8_t m_siren_on;
	bool m_unk1;
	uint8_t m_unk13;
	uint8_t m_unk12;
	uint8_t m_unk14;
	uint8_t m_unk25;
	uint8_t m_unk26;
	bool m_no_longer_needed;
	uint8_t m_unk28;
	uint8_t m_unk33;
	uint8_t m_unk30;
	bool m_lights_on;
	bool m_highbeams_on;
	char m_unk43;
	char m_unk44;
	bool m_unk7;
	char m_unk29;
	char m_unk45;
	char m_unk46;
	char m_unk47;
	char m_unk48;
	uint8_t m_unk38;
	char m_unk51;
	bool m_has_been_owned_by_player;
	char m_unk53;
	char m_unk54;
	char m_unk55;
	char m_unk56;
	char m_unk57;
	char m_unk58;
	char m_unk61;
	uint8_t m_unk62;
	char m_unk63;
	char m_unk64;
	char m_unk67;
	char m_unk68;
	char m_unk138;
	char m_unk139;
	char m_unk59;
	char m_unk60;
	char pad[6];
};
#pragma pack(pop)
static_assert(sizeof(CVehicleGameStateDataNode) == 0x148);