#pragma once
#include "netSyncTree.hpp"

class CProjectSyncTree : public rage::netSyncTree
{
	void* m_unk_data;
	int m_unk_data_size;
	char pad_04C4[4];
};
static_assert(sizeof(CProjectSyncTree) == 0x4C8);