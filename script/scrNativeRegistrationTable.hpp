#pragma once
#include <cstdint>

#include "scrNativeRegistration.hpp"

#pragma pack(push, 1)
namespace rage
{
	class scrNativeRegistrationTable {
	public:
		scrNativeRegistration* m_entries[0xFF]; //0x0000
		uint32_t m_unk; //0x07F8
		bool m_initialized; //0x07FC
	}; //Size: 0x07FD
	static_assert(sizeof(scrNativeRegistrationTable) == 0x7FD);
}
#pragma pack(pop)