#pragma once

#include <cstdint>

#pragma pack(push, 4)
class CGlobalFlagsDataNode
{
public:
    char pad_0000[192]; //0x0000
    uint32_t m_global_flags; //0x00C0
    uint32_t m_ownership_token; //0x00C4
}; //Size: 0x00C8
static_assert(sizeof(CGlobalFlagsDataNode) == 0xC8);
#pragma pack(pop)