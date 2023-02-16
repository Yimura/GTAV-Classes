#pragma once
#include "scrThread.hpp"

class GtaThread : public rage::scrThread
{
public:
	uint32_t m_script_hash; //0x0120
	uint32_t m_instruction_pointer_cleanup; //0x0124
	char unk_0128[16]; //0x0128
	int32_t m_instance_id; //0x0138
	uint32_t unk_013C; //0x013C
	uint8_t m_flag1; //0x0140
	bool m_safe_for_network_game; //0x0141
	char pad_0142[2]; //0x0142
	bool m_is_minigame_script; //0x0144
	char pad_0145[2]; //0x0145
	bool m_can_be_paused; //0x0147
	bool m_can_remove_blips_from_other_scripts; //0x0148
	char pad_0149[15]; //0x0149
}; //Size: 0x0160
static_assert(sizeof(GtaThread) == 0x160);