#pragma once
#include <cstdint>

union netAddress {
	uint32_t m_packed; //0x0000
	struct {
		uint8_t m_field4; //0x0000
		uint8_t m_field3; //0x0001
		uint8_t m_field2; //0x0002
		uint8_t m_field1; //0x0003
	};
}; //Size: 0x0004
static_assert(sizeof(netAddress) == 0x04);

namespace rage
{
#pragma pack(push, 4)
	class netPeerAddress
	{
	public:
		netAddress m_internal_ip; //0x0000
		uint16_t m_internal_port; //0x0004
		netAddress m_external_ip; //0x0008
		uint16_t m_external_port; //0x000C
		uint64_t m_peer_id; //0x0010
		netAddress m_relay_address; //0x0018
		uint16_t m_relay_port; //0x001C
		uint8_t m_connection_type; //0x001E
	};
	static_assert(sizeof(netPeerAddress) == 0x20);
#pragma pack(pop)
}