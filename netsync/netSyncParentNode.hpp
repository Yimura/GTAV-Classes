#pragma once
#include "netSyncNodeBase.hpp"

namespace rage
{
	class netSyncParentNode : public netSyncNodeBase
	{
	public:
		char pad_0040[32];
	};
	static_assert(sizeof(netSyncParentNode) == 0x60);
}

class CProjectBaseSyncParentNode : public rage::netSyncParentNode {};