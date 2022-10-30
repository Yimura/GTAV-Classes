#pragma once

#include "phBoundCapsule.hpp"

namespace rage
{

	class phBoundCapsuleList
	{
	public:
		class phBoundCapsule* m_bound_capsule; //0x0000
	}; //Size: 0x0008
	static_assert(sizeof(phBoundCapsuleList) == 0x08);

}