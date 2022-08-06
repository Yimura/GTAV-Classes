#pragma once

#include <cstdint>

namespace rage
{
#pragma pack(push, 8)
    class netSyncNodeBase
    {
    public:
        virtual ~netSyncNodeBase() = 0;
        virtual bool IsDataNode() = 0;
        virtual bool IsParentNode() = 0;

        netSyncNodeBase* m_next_sibling; //0x0000
        netSyncNodeBase* m_prev_sibling; //0x0008
        netSyncNodeBase* m_root; //0x0010
        netSyncNodeBase* m_parent; //0x0018

        uint32_t m_flags1; //0x0020
        uint32_t m_flags2; //0x0024
        uint32_t m_flags3; //0x0028

        uint32_t m_pad2; //0x002C

        netSyncNodeBase* m_first_child; //0x0030
    }; //Size: 0x0040
    static_assert(sizeof(netSyncNodeBase) == 0x40);
#pragma pack(pop)
}