#pragma once

#include <cstdint>

class CTunables
{
public:
	char pad_0000[112]; //0x0000
	uint64_t m_bPtr; //0x0070
	uint16_t m_bCount; //0x0078
}; //Size: 0x007A
