#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CGlobalFlagsDataNode : CSyncDataNodeInfrequent
{
public:
    uint32_t m_global_flags; //0x00C0
    uint32_t m_ownership_token; //0x00C4
}; //Size: 0x00C8
static_assert(sizeof(CGlobalFlagsDataNode) == 0xC8);
#pragma pack(pop)