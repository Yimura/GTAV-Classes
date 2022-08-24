#pragma once

#include <cinttypes>

#include "CEntityDrawHandler.hpp"

namespace rage
{
    class CObjectFragmentDrawHandler : CEntityDrawHandler
    {
    };
    static_assert(sizeof(CObjectFragmentDrawHandler) == 0x2C);
}
