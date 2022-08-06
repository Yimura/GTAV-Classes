#pragma once

#include "netSyncNodeBase.hpp"

namespace rage
{
#pragma pack(push, 8)
    class netSyncDataNodeBase : public netSyncNodeBase
    {
    public:
        uint32_t flags; //0x40
        uint32_t pad3; //0x44
        uint64_t pad4; //0x48

        netSyncDataNodeBase* parentData; //0x50
        uint32_t childCount; //0x58
        netSyncDataNodeBase* children[8]; //0x5C
        uint8_t syncFrequencies[8]; //0x9C
        void* nodeBuffer; //0xA4
    };
    static_assert(sizeof(netSyncDataNodeBase) == 0xB0);
#pragma pack(pop)
}