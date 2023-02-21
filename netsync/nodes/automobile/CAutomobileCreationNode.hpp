#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

class CAutomobileCreationDataNode : CProjectBaseSyncDataNode
{
public:
    bool m_all_doors_closed; //0x00C0
    bool m_door_closed[10]; //0x00C1
};
static_assert(sizeof(CAutomobileCreationDataNode) == 0xD0);