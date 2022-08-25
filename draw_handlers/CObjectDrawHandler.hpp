#pragma once

#include "CEntityDrawHandler.hpp"

namespace rage
{
    class CObjectFragmentDrawHandler : public CEntityDrawHandler
    {
    };
    static_assert(sizeof(CObjectFragmentDrawHandler) == 0x2C);
}
