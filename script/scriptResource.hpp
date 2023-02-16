#pragma once

namespace rage
{
	class scriptResource {
	public:
		virtual ~scriptResource();
	}; //Size: 0x0008
	static_assert(sizeof(scriptResource) == 0x8);
}