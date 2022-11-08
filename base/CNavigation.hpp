#pragma once

#include "../rage/vector.hpp"
#include "phArchetype.hpp"

#pragma pack(push, 1)
class CNavigation
{
public:
	char pad_0000[16]; //0x0000
	class rage::phArchetypeDamp* m_damp; //0x0010
	char pad_0018[8]; //0x0018
	rage::fmatrix44 m_transformation_matrix;

	rage::fvector3* get_position()
	{
		return reinterpret_cast<rage::fvector3*>(&m_transformation_matrix.rows[3]);
	}
}; //Size: 0x0060
static_assert(sizeof(CNavigation) == 0x60);
#pragma pack(pop)
