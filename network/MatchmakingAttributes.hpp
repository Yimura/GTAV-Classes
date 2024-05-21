#pragma once
#include <cstdint>

class MatchmakingAttributes
{
public:
	uint32_t m_game_mode; //0x0000
	uint32_t m_num_params; //0x0004
	uint32_t m_param_unk[8]; //0x0008
	char m_param_names[8][24]; //0x0028
	uint32_t m_param_values[8]; //0x00E8
	uint32_t m_params_bitset; //0x0108
}; //Size: 0x010C
static_assert(sizeof(MatchmakingAttributes) == 0x10C);