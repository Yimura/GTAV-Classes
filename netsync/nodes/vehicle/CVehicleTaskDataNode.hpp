#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push,4)
class CVehicleTaskDataNode : CSyncDataNodeInfrequent
{
public:
	uint32_t m_task_type;       // 0xC0
	uint32_t m_task_data_size;  // 0xC4
	char m_task_data[255];      // 0xC8
}; //Size: 0x0180
static_assert(sizeof(CVehicleTaskDataNode) == 0x1C8);
#pragma pack(pop)