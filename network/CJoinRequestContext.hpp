#pragma once
#include <cstdint>

#pragma pack(push, 1)
class CJoinRequestContext
{
public:
	char pad_0000[40]; //0x0000
	void* m_join_request_data; //0x0028
	uint32_t m_join_request_size; //0x0030
	uint8_t m_join_response_data[512]; //0x0034
	uint32_t m_join_response_size; //0x0234
	char pad_0238[12]; //0x0238
}; //Size: 0x0244
static_assert(sizeof(CJoinRequestContext) == 0x244);
#pragma pack(pop)
