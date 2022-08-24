#pragma once

#include <cinttypes>

#include "fwDrawData.hpp"

namespace rage
{
    class CEntityDrawHandler : rage::fwDrawData
    {

    };
    static_assert(sizeof(CEntityDrawHandler) == 0x2C);
}
