#pragma once

#include "fwExtension.hpp"

namespace rage
{

    class fwExtensionContainer
    {
    public:
        fwExtension *m_entry; //0x0000
        fwExtensionContainer* m_next; //0x0008
    }; //Size: 0x0010
    static_assert(sizeof(fwExtensionContainer) == 0x10);

}