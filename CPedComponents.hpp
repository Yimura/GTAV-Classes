#pragma once

#include <cstdint>

#pragma pack(push, 4)
class CPedComponents
{
public:
	uint32_t m_component_bitset; //0x0000
	char pad_0x4[4]; //0x0004
	uint32_t unk_0x8[12]; //0x0008
	uint32_t m_drawables[12]; //0x0038
	uint32_t m_textures[12]; //0x0068
	uint32_t m_palettes[12]; //0x0098
}; //Size: 0x00C8
static_assert(sizeof(CPedComponents) == 0xC8);
#pragma pack(pop)