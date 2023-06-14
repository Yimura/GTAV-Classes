#pragma once

#include <cstdint>
#include "rlGamerInfoBase.hpp"

namespace rage
{
#pragma pack(push,8)
	class rlGamerInfo : public rlGamerInfoBase
	{
	public:
		uint64_t m_host_token;

		union
		{
			rlGamerHandle m_gamer_handle_2;
			uint32_t m_peer_id_2; // not found in all instances
		};

		uint32_t m_ros_privilege;
		char m_name[17];
	}; //Size: 0x0098
	static_assert(sizeof(rlGamerInfo) == 0xF0);
#pragma pack(pop)
}
