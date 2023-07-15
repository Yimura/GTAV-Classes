#pragma once

#include <cstdint>

namespace rage
{
#pragma pack(push, 8)
	class rlScHandle
	{
	public:
		uint64_t m_rockstar_id; //0x0000
		int16_t unk_0008;
		uint8_t m_platform; //0x000A
		char pad[5]{};      //0x000B

		inline rlScHandle() = default;

		inline rlScHandle(uint64_t rockstar_id) :
		    m_rockstar_id(rockstar_id),
		    m_platform(3),
		    unk_0008(0)
		{
		}
	}; //Size: 0x0010
	static_assert(sizeof(rlScHandle) == 0x10);
#pragma pack(pop)
}
