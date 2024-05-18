#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push,4)
class CPedTaskSequenceData
{
public:
	int m_task_type;       // 0x00
	int m_task_data_size;  // 0x04
	char m_task_data[602]; // 0x08
};
static_assert(sizeof(CPedTaskSequenceData) == 0x264);

class CPedTaskSequenceDataNode : CSyncDataNodeFrequent
{
public:
	bool m_has_sequence;                  // 0xC0
	int m_sequence_resource_id;           // 0xC4
	int m_num_tasks_in_sequence;          // 0xC8
	CPedTaskSequenceData m_task_data[10]; // 0xCC
	int m_unk;                            // 0x18B4
};
static_assert(sizeof(CPedTaskSequenceDataNode) == 0x18B8);
#pragma pack(pop)