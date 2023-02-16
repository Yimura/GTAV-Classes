#pragma once
#include "scrProgramTableEntry.hpp"

#pragma pack(push, 1)
namespace rage
{
	class scrProgramTable
	{
	public:
		scrProgramTableEntry* m_data; //0x0000
		char pad_0008[16]; //0x0008
		uint32_t m_size; //0x0018

		scrProgram* find_script(joaat_t hash) {
			for (uint32_t i{}; i != m_size; ++i) {
				if (m_data[i].m_hash == hash) {
					return m_data[i].m_program;
				}
			}
			return nullptr;
		}
		scrProgramTableEntry* begin() {
			return m_data;
		}
		scrProgramTableEntry* end() {
			return m_data + m_size;
		}
	}; //Size: 0x001C
	static_assert(sizeof(scrProgramTable) == 0x1C);
}
#pragma pack(pop)