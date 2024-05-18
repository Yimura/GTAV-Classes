#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push,4)
class CPedTaskData
{
public:
	int m_task_type;   // 0x00
	int m_priority;    // 0x04
	int m_tree_depth;  // 0x08
	int m_sequence_id; // 0x0C
	bool m_active;     // 0x10
};
static_assert(sizeof(CPedTaskData) == 0x14);

class CPedTaskTreeDataNode : CSyncDataNodeFrequent
{
public:
	CPedTaskData m_tasks[8];    // 0xC0
	int m_task_bitset;          // 0x160
	int m_script_command;       // 0x164
	int m_script_command_stage; // 0x168
};
static_assert(sizeof(CPedTaskTreeDataNode) == 0x16C); // tree offset != size for this one
#pragma pack(pop)