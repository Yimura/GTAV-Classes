#pragma once
#include "scrThread.hpp"

class GtaThread : public rage::scrThread
{
public:
	rage::joaat_t m_script_hash;                // 0x128
	int m_force_cleanup_ip;                     // 0x12C
	int m_force_cleanup_fp;                     // 0x130
	int m_force_cleanup_sp;                     // 0x134
	int m_force_cleanup_filter;                 // 0x138
	int m_force_cleanup_cause;                  // 0x13C
	std::int32_t m_instance_id;                 // 0x140
	char m_padding4[0x04];                      // 0x144
	std::uint8_t m_flag1;                       // 0x148
	bool m_safe_for_network_game;               // 0x149
	char m_padding5[0x02];                      // 0x14A
	bool m_is_minigame_script;                  // 0x14C
	char m_padding6[0x02];                      // 0x14D
	bool m_can_be_paused;                       // 0x14F
	bool m_can_remove_blips_from_other_scripts; // 0x150
	char m_padding7[0x2];                       // 0x151
	std::uint8_t m_force_cleanup_state;         // 0x153
	char m_padding8[0xC];                       // 0x154
};
static_assert(sizeof(GtaThread) == 0x160);