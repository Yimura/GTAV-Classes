#pragma once

#include "datBase.hpp"
#include "../rage/vector.hpp"

namespace rage
{
    class fwExtensionDef : public rage::datBase
    {
    public:
        const char* m_name; //0x0007
    };
    static_assert(sizeof(fwExtensionDef) == 0x10);
}