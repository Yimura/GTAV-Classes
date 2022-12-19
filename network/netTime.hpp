#pragma once
#include <cstdint>

namespace rage
{
	class netConnectionManager;
}

namespace rage
{
	class netTime
	{
	public:
		virtual ~netTime() = default;

		netConnectionManager* m_net_connection_mgr; //0x0008
		uint32_t m_host_peer_id; //0x0010
		uint32_t m_time_token; //0x0014
		uint32_t m_time_offset; //0x0018
		char pad_001C[72]; //0x001C
		uint32_t m_failed_sync_counter; //0x0064
		uint32_t m_last_sync_id_sent; //0x0068
		uint32_t m_last_sync_id_received; //0x006C
		uint32_t m_role_flags; //0x0070
		uint32_t m_connection_identifier; //0x0074
		uint32_t m_time; //0x0078
		uint32_t m_calculation_flags; //0x007C
	}; //Size: 0x0080
	static_assert(sizeof(netTime) == 0x80);

	struct netTimeSyncMsg
	{
		int action;
		int counter;
		int token;
		int timestamp;
		int increment;
	};
	static_assert(sizeof(netTimeSyncMsg) == 0x14);
}