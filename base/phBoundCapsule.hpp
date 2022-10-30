#pragma once

namespace rage
{

	class phBoundCapsule
	{
	public:
		char pad_0000[44]; //0x0000
		float m_collsion; //0x002C
	}; //Size: 0x0030
	static_assert(sizeof(phBoundCapsule) == 0x30);

}