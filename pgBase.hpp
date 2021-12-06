#pragma once

class pgBase
{
public:
	char pad_0000[80]; //0x0000
	rage::vector3 m_pos; //0x0050
}; //Size: 0x005C
static_assert(sizeof(pgBase) == 0x5C);
