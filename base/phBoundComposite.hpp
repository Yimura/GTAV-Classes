#pragma once

#include "phBoundCapsuleList.hpp"

namespace rage
{

	class phBoundComposite
	{
	public:
		char pad_0000[112]; //0x0000
		class phBoundCapsuleList* m_bound_capsule_list; //0x0070
	}; //Size: 0x0078
	static_assert(sizeof(phBoundComposite) == 0x78);

}