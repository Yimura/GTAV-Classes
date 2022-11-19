#pragma once
#include <cstdint>

#pragma pack(push, 1)
class CMsgTextMessage
{
public:
	char m_message[256]; //0x0000
	uint64_t m_peer_id; //0x0100
	bool m_is_team; //0x0108
}; //Size: 0x0109
static_assert(sizeof(CMsgTextMessage) == 0x109);
#pragma pack(pop)
