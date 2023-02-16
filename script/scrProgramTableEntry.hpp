#pragma once
#include "scrProgram.hpp"
#include "../rage/joaat.hpp"

#pragma pack(push, 1)
namespace rage
{
	class scrProgramTableEntry
	{
	public:
		scrProgram* m_program; //0x0000
		char pad_0008[4]; //0x0008
		joaat_t m_hash; //0x000C
	}; //Size: 0x0010
    static_assert(sizeof(scrProgramTableEntry) == 0x10);
}
#pragma pack(pop)