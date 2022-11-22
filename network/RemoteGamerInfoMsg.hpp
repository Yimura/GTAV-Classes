#pragma once
#include <cstdint>
#include "../rage/rlGamerInfo.hpp"

#pragma pack(push, 1)
class RemotePlayerDataMsg
{
public:
	uint64_t m_session_id; //0x0000
	class rage::rlGamerInfo m_gamer_info; //0x0008
	char pad_00A0[32]; //0x00A0
	uint32_t m_unk; //0x00C0
	char pad_00C4[516]; //0x00C4
	uint32_t m_required_player_count; //0x02C8
	char pad_02CC[20]; //0x02CC
}; //Size: 0x02E0
static_assert(sizeof(RemotePlayerDataMsg) == 0x2E0);
#pragma pack(pop)
