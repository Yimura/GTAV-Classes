#pragma once
#include <typeinfo>

#include "fwRefAwareBase.hpp"
#include "fwExtensionContainer.hpp"

#include "../rage/joaat.hpp"

namespace rage
{
    class fwExtensibleBase : public fwRefAwareBase
    {
    public:
        // virtual bool is_of_type(std::uint32_t hash) = 0;
        // virtual uint32_t const &get_type() = 0;

        fwExtensionContainer* m_extension_container; // 0x0010
        void *m_extensible_unk; // 0x0018
    }; //Size: 0x0020
    static_assert(sizeof(fwExtensibleBase) == 0x20);

}
