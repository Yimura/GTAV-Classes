#pragma once
#include <cstdint>
#include "../rage/rlGamerInfo.hpp"

#pragma pack(push, 1)
class RemoteGamerInfoMsg
{
public:
	uint64_t m_session_id; //0x0000
	class rage::rlGamerInfo m_gamer_info; //0x0008
	char pad_00A0[256]; //0x00A0 (tons of more fields down here, like IP addresses...)
}; //Size: 0x01A0
static_assert(sizeof(RemoteGamerInfoMsg) == 0x1A0);
#pragma pack(pop)
