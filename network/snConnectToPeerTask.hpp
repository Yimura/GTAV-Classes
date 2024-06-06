#pragma once
#include <cstdint>

namespace rage
{
#pragma pack(push, 8)
	class snConnectToPeerTaskData
	{
	public:
		std::uint8_t m_host_flag;
		std::uint8_t m_connect_reason;
		std::uint64_t m_session_token;
		std::uint8_t m_flag2;
		std::uint8_t m_flag3;
	};
	static_assert(sizeof(rage::snConnectToPeerTaskData) == 0x18);
#pragma pack(pop)

	class snConnectToPeerTaskResult
	{
	public:
		char pad[0x10]{};
		int m_peer_id;
		char pad2[0x400]{};
	};
}