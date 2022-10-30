#pragma once

#include "phBoundComposite.hpp"

namespace rage
{

	class phArchetypeDamp
	{
	public:
		char pad_0000[32]; //0x0000
		class phBoundComposite* m_bound_composite; //0x0020
	}; //Size: 0x0028
	static_assert(sizeof(phArchetypeDamp) == 0x28);

}