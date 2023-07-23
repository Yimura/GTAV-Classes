#pragma once

#include <cstdint>
#include <cstddef>
#include "rlGamerHandle.hpp"
#include "network/netPeerAddress.hpp"

namespace rage
{
#pragma pack(push,8)
	class rlGamerInfoBase
	{
	public:
		int m_security_enabled;          //0x0000
		uint64_t m_peer_id;              //0x0008
		rlGamerHandle m_gamer_handle;    //0x0010
		char m_aes_key[0x28];            //0x0020
		netPeerAddress m_relay_address;  //0x0048
		char m_relay_signature[0x40];    //0x0068
		netAddress m_external_ip;        //0x00A8
		uint16_t m_external_port;        //0x00AC
		netAddress m_internal_ip;        //0x00B0
		uint16_t m_internal_port;        //0x00B4
		uint32_t m_nat_type;             //0x00B8
		bool m_force_relays;             //0x00BC
	};
	static_assert(sizeof(rlGamerInfoBase) == 0xC0);
#pragma pack(pop)
}
