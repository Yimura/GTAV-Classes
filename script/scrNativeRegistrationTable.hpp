#pragma once
#include <cstdint>

#include "scrNativeRegistration.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scrNativeRegistrationTable
    {
        scrNativeRegistration *m_entries[0xFF];
        std::uint32_t m_unk;
        bool m_initialized;
    };
}
#pragma pack(pop)