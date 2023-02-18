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
        netSyncNodeBase* m_next_sync_node; //0x0010
        netSyncNodeBase* m_last_sync_node; //0x0018
        uint32_t m_child_node_count; //0x0020
        uint32_t m_unk_array_count; //0x0024
        char pad_0028[8]; //0x0028
        netSyncNodeBase* m_child_nodes[42]; //0x0030
        uint32_t m_child_node_max_count; //0x0180
        netSyncNodeBase* m_unk_array[32]; //0x0188
        uint32_t m_unk_array_max_count; //0x0288
    }; //Size: 0x0290
    static_assert(sizeof(netSyncTree) == 0x290);
#pragma pack(pop)
}