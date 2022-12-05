#pragma once
#include <cstdint>
#include "../rage/rlGamerInfo.hpp"

#pragma pack(push, 4)
class netConnectionPeer
{
public:
	uint32_t m_internal_ip; //0x0000
	uint16_t m_internal_port; //0x0004
	uint32_t m_external_ip; //0x0008
	uint16_t m_external_port; //0x000C
	uint64_t m_peer_id; //0x0010
	uint32_t unk_0018; //0x0018
	uint16_t unk_001C; //0x001C
	uint8_t m_platform; //0x001E
};
static_assert(sizeof(netConnectionPeer) == 0x20);
#pragma pack(pop)

#pragma pack(push, 8)
class RemoteGamerInfoMsg
{
public:
	uint64_t m_session_id; //0x0000
	class rage::rlGamerInfo m_gamer_info; //0x0008
	class netConnectionPeer m_gamer_peer_data; //0x00A0
	uint32_t unk_0xC0; //0x00C0
	uint32_t m_unk_struct_size; //0x00C4 
	char m_unk_struct[512]; //0x00C8 Might be bitbuffer data
	uint32_t m_num_handles; //0x02C8
	class rage::rlGamerHandle m_handles[32]; //0x02D0
}; //Size: 0x04D0
static_assert(sizeof(RemoteGamerInfoMsg) == 0x4D0);
#pragma pack(pop)
