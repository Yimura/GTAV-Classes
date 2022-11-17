#pragma once
#include <cstdint>

#pragma pack(push, 1)
class CMsgJoinResponse
{
public:
	uint32_t m_status_code; //0x0000
	uint32_t m_visibility_flags; //0x0004
	bool m_can_wait_for_slot; //0x0008
	char pad_0009[3]; //0x0009
	bool m_is_activity_session; //0x000C
	char pad_000D[7]; //0x000D
	uint32_t m_network_time; //0x0014
	char pad_0018[72]; //0x0018
}; //Size: 0x0060
static_assert(sizeof(CMsgJoinResponse) == 0x60);
#pragma pack(pop)
