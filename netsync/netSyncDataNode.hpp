#pragma once

#include "netSyncNodeBase.hpp"

namespace rage
{
#pragma pack(push, 8)
    class netSyncDataNode : public netSyncNodeBase
    {
    public:
        uint32_t flags; //0x40
        uint32_t pad3; //0x44
        uint64_t pad4; //0x48

        netSyncDataNode* parentData; //0x50
        uint32_t childCount; //0x58
        netSyncDataNode* children[8]; //0x5C
        uint8_t syncFrequencies[8]; //0x9C
        void* commonDataOpsVFT; //0xA8 wtf
    };
    static_assert(sizeof(netSyncDataNode) == 0xB0);
#pragma pack(pop)
}