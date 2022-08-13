#pragma once

class CAutomobileCreationDataNode
{
public:
    char pad_0000[192]; //0x0000
    bool m_all_doors_closed; //0x00C0
    bool m_door_closed[10]; //0x00C1
}; //Size: 0x00CB
static_assert(sizeof(CAutomobileCreationDataNode) == 0xCB);