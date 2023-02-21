#pragma once
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPedScriptCreationDataNode : CProjectBaseSyncDataNode
{
public:
    bool m_stay_in_car_when_jacked; //0x00C0
}; //Size: 0x00C1
static_assert(sizeof(CPedScriptCreationDataNode) == 0xC4);
#pragma pack(pop)