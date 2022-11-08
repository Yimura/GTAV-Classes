#pragma once

#include "FriendInfo.hpp"

#include <cstdint>

#pragma pack(push, 4)
class FriendRegistry
{
public:
    uint32_t m_friend_count; //0x0000
    char pad_0004[8]; //0x0004
    FriendInfo (*m_friends)[250]; //0x000C

    inline FriendInfo* get(std::uint32_t idx)
    {
        return &(*m_friends)[idx];
    }
}; //Size: 0x0014
static_assert(sizeof(FriendRegistry) == 0x14);
#pragma pack(pop)
