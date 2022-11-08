#pragma once

#include <cstdint>
#include <string_view>

namespace rage
{
    using joaat_t = std::uint32_t;
    inline constexpr char joaat_to_lower(char c)
    {
        return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;
    }

    inline joaat_t joaat(std::string_view str)
    {
        joaat_t hash = 0;
        for (auto c : str) {
            hash += joaat_to_lower(c);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }
};
