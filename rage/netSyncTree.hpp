#pragma once

#include "netSyncNodeBase.hpp"

namespace rage
{
#pragma pack(push,8)
    class netSyncTree
    {
    public:
        virtual ~netSyncTree();

        char pad_0008[8]; //0x0008
        netSyncNodeBase* m_sync_node; //0x0010
        char pad_0018[8]; //0x0018
        uint32_t m_child_node_count; //0x0020
        char pad_0024[12]; //0x0024
    }; //Size: 0x0030
    static_assert(sizeof(netSyncTree) == 0x30);
#pragma pack(pop)
}