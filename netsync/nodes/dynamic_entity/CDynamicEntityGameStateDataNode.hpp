#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 1)
struct CDecorator
{
    uint32_t m_type;
    uint32_t m_name_hash;
    uint32_t m_value;
};
#pragma pack(pop)

#pragma pack(push, 4)
class CDynamicEntityGameStateDataNode : CSyncDataNodeInfrequent
{
public:
    uint32_t m_interior_index; // 0x00C0
    bool unk_00C4; // 0x00C4
    bool unk_00C5; // 0x00C5
    uint32_t m_decor_count; // 0x00C8
    CDecorator m_decors[10]; // 0x00CC
    char pad[8]; // TODO!
}; //Size: 0x15C
static_assert(sizeof(CDynamicEntityGameStateDataNode) == 0x14C);
#pragma pack(pop)
