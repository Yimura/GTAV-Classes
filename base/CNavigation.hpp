#pragma once

#include "../rage/vector.hpp"
#include "phArchetypeDamp.hpp"

#pragma pack(push, 1)
class CNavigation
{
public:
	char pad_0000[16]; //0x0000
	class rage::phArchetypeDamp* m_damp; //0x0010
	char pad_0018[8]; //0x0018
	rage::fvector3 m_right; //0x0020
	char pad_002C[4]; //0x002C
	rage::fvector3 m_forward; //0x0030
	char pad_003C[4]; //0x003C
	rage::fvector3 m_up; //0x0040
	char pad_004C[4]; //0x004C
	rage::fvector3 m_position; //0x0050
}; //Size: 0x0060
static_assert(sizeof(CNavigation) == 0x5C);
#pragma pack(pop)
