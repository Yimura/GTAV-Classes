#pragma once

#include "fwDrawData.hpp"

namespace rage
{
    class CEntityDrawHandler : public rage::fwDrawData
    {
    public:

    };
    static_assert(sizeof(CEntityDrawHandler) == 0x2C);
}
