#pragma once
#include <cstdint>

namespace rage
{
	class snConnectToPeerTaskData
	{
	public:
		int m_unk;
		int m_reason;
		uint64_t m_session_token;
	};

	class snConnectToPeerTaskResult
	{
	public:
		char pad[0x10]{};
		int m_peer_id;
		char pad2[0x400]{};
	};
}