#pragma once
#include <cstdint>
#include "../rage/rlGamerInfo.hpp"

#pragma pack(push, 1)
class CVoiceConnection
{
public:
    class rage::rlGamerInfo m_gamer_info; //0x0000
	char pad_0098[40]; //0x0098
}; //Size: 0x00C0
static_assert(sizeof(CVoiceConnection) == 0xC0);

class CVoice
{
public:
	class CVoiceConnection m_connection_storage[32]; //0x0000
	char pad_1800[8]; //0x1800
	class CVoiceConnection *m_connections[32]; //0x1808
	uint32_t m_connection_count; //0x1908
	char pad_190C[3508]; //0x190C
}; //Size: 0x1978
static_assert(sizeof(CVoice) == 0x26C0);

class CCommunications
{
public:
	char pad_0000[48]; //0x0000
	class CVoice m_voice; //0x0030
	char pad_26F0[280300]; //0x26F0
}; //Size: 0x46DE4
static_assert(sizeof(CCommunications) == 0x46DDC);
#pragma pack(pop)