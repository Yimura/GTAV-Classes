#pragma once
#include <cstdint>
#include "rage/vector.hpp"
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push,4)
class CPlayerWantedAndLOSDataNode : CSyncDataNodeInfrequent
{
public:
	rage::fvector3 m_wanted_position; // 0xC0
	int m_time_in_prev_pursuit;       // 0xCC
	rage::fvector3 m_unk_position;    // 0xD0
	int m_time_in_pursuit;            // 0xDC
	int m_wanted_level;               // 0xE0
	int m_unk_wanted_level;           // 0xE4
	int m_current_time;               // 0xE8
	int m_unk_player_bitset;          // 0xEC
	int m_pursuit_start_time;         // 0xF0
	uint8_t m_fake_wanted_level;      // 0xF4
	bool m_cops_cant_see_player;      // 0xF5
	bool m_is_evading;                // 0xF6
	bool m_pending_wanted_level;      // 0xF7
	bool m_unk3;                      // 0xF8
	uint8_t m_unk_player_index;       // 0xF9
};
static_assert(sizeof(CPlayerWantedAndLOSDataNode) == 0xFC);
#pragma pack(pop)
