#pragma once

#include <cstdint>

namespace rage
{
    uint64_t SecureHash(uint64_t& Hash)
    {
        Hash -= 0x269EC3;
        return Hash = (Hash ^ 0x343FD) * 0x269EC3 + 0x6A6E53CB;
    }
}