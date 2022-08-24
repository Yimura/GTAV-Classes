#pragma once

#include "fwEntity.hpp"

#include <cstdint>

namespace rage
{
    class CEntity : public rage::fwEntity
    {
    public:
        char gapB9[7];
        uint32_t dwordC0;
        uint32_t dwordC4;
        uint32_t dwordC8;
        uint32_t dwordCC;
    };
    static_assert(sizeof(CEntity) == 0xD0);
}
