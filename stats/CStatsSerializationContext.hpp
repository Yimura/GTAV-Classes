#pragma once
#include <cstdint>

#pragma pack(push, 1)
class CStatsSerializationContext
{
public:
	bool m_compressed; //0x0000
	char pad_0001[7]; //0x0001
	class CStatSerializationEntry* m_entries; //0x0008
	uint16_t m_size; //0x0010
}; //Size: 0x0012
static_assert(sizeof(CStatsSerializationContext) == 0x12);

class CStatSerializationEntry
{
public:
	uint32_t m_hash; //0x0000
	union //0x0004
	{
		float m_float_value; //0x0000
		uint16_t m_short_value; //0x0000
		uint64_t m_int_value; //0x0000
	};
}; //Size: 0x000C
static_assert(sizeof(CStatSerializationEntry) == 0xC); // can be 0x8 or 0xC
#pragma pack(pop)