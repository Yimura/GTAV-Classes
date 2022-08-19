#pragma once

namespace rage
{

    class pgBase
	{
	public:
		virtual ~pgBase() = default;

		void *unk_0000; // 0x0000
	}; //Size: 0x0008
    static_assert(sizeof(pgBase) == 0x10);

}