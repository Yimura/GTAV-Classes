#pragma once
#include "scriptIdBase.hpp"

#pragma pack(push, 1)
namespace rage
{
	class scriptId : public scriptIdBase {
	public:
		uint32_t m_hash; //0x0008
		char m_name[32]; //0x000C
	}; //Size: 0x002C
	static_assert(sizeof(scriptId) == 0x2C);
}
#pragma pack(pop)