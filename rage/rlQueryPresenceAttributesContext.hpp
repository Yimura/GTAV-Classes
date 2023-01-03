#pragma once
#include <cstdint>

namespace rage
{
	class rlQueryPresenceAttributesContext
	{
	public:
		char m_presence_attribute_key[64]; //0x0000
		char m_presence_attribute_value[256]; //0x0040
		uint32_t m_presence_attibute_type; //0x0140
		char pad_0144[4]; //0x0144
	}; //Size: 0x0148
	static_assert(sizeof(rage::rlQueryPresenceAttributesContext) == 0x148);
}