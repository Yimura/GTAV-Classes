#pragma once
#include <cstdint>
#include "../rage/rlGamerInfo.hpp"

#pragma pack(push, 1)
class CVoiceConnection
{
public:
	class rage::rlGamerInfo m_gamer_info; //0x0000
	char pad_0098[40]; //0x00F8
}; //Size: 0x00C0
static_assert(sizeof(CVoiceConnection) == 0x118);

class CVoice
{
public:
	class CVoiceConnection m_connection_storage[32]; //0x0000
	char pad_2300[8]; //0x2300
	class CVoiceConnection* m_connections[32]; //0x2308
	uint32_t m_connection_count; //0x2408
	char pad_240C[3508]; //0x240C
}; //Size: 0x31C0
static_assert(sizeof(CVoice) == 0x31C0);

class CCommunications
{
public:
	char pad_0000[48]; //0x0000
	class CVoice m_voice; //0x0030
	char pad_31F0[280300]; //0x31F0
}; //Size: 0x478DC
static_assert(sizeof(CCommunications) == 0x478DC);
#pragma pack(pop)