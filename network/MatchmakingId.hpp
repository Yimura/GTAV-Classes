#pragma once
#include <cstdint>
#include <cstddef>

#pragma pack(push, 1)
class MatchmakingId
{
public:
	char m_data1[0x26];
	std::uint64_t m_data2;
	std::uint64_t m_data3;
};
static_assert(offsetof(MatchmakingId, m_data3) == 0x2E);
#pragma pack(pop)
