#pragma once

#include <cstdint>

#include "CEntityDrawHandler.hpp"

namespace rage
{
#pragma pack(push, 4)
    class CPedDrawHandler : public CEntityDrawHandler
    {
    public:
        uint64_t qword30;
        uint64_t qword38;
        char gap40[752];
        uint32_t dword330;
    };
    static_assert(sizeof(CPedDrawHandler) == 0x330);
#pragma pack(pop)
}
