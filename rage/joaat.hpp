#pragma once

#include <cstdint>
#include <string_view>

namespace rage
{
    using joaat_t = std::uint32_t;
    inline constexpr char joaat_to_lower(char c)
    {
        return c >= 'A' && c <= 'Z' ? c | 1 << 5 : c;
    }

    inline constexpr joaat_t joaat(const std::string_view str)
    {
        joaat_t hash = 0;
        for (auto c : str)
        {
            hash += joaat_to_lower(c);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }

    inline constexpr joaat_t case_joaat(const std::string_view& name, joaat_t initialHash = 0)
    {
        joaat_t hash = initialHash;
        for (char c : name) {
            hash += static_cast<joaat_t>(c);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }

    inline constexpr joaat_t partial_joaat(const std::string_view name, joaat_t initialHash = 0)
    {
        joaat_t hash = initialHash;
        for (char Normalize : name) {
            if (Normalize >= 'A' && Normalize <= 'Z') {
                Normalize = static_cast<char>(Normalize + ('a' - 'A'));
            }
            hash += static_cast<joaat_t>(Normalize);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }

    inline constexpr joaat_t literal_joaat(const std::string_view name, joaat_t initialHash = 0)
    {
        joaat_t hash = initialHash;
        for (char Normalize : name) {
            if (Normalize >= 'A' && Normalize <= 'Z') {
                Normalize = static_cast<char>(Normalize + ('a' - 'A'));
            }
            hash += static_cast<joaat_t>(Normalize);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }

    inline constexpr joaat_t tokened_joaat(const std::string_view name, char token, joaat_t initialHash = 0) 
    {
        joaat_t hash = initialHash;
        for (char Normalize : name) {
            if (Normalize >= 'A' && Normalize <= 'Z') {
                Normalize = static_cast<char>(Normalize + ('a' - 'A'));
            }
            hash += static_cast<joaat_t>(Normalize);
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += static_cast<joaat_t>(token);
        hash += (hash << 10);
        hash ^= (hash >> 6);
        hash += (hash << 3);
        hash ^= (hash >> 11);
        hash += (hash << 15);
        return hash;
    }
};








