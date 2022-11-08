#pragma once

#include <cstdint>

#pragma pack(push, 1)
class FriendInfo
{
public:
    char m_name[20]; //0x0000
    char pad_0014[36]; //0x0014
    uint64_t m_rockstar_id; //0x0038
    uint8_t unk; //0x0040
    char pad_0041[3]; //0x0041
    uint32_t m_friend_state; //0x0044
    char pad_0048[304]; //0x0048
    uint32_t m_is_joinable; //0x0178
    char pad_017C[4]; //0x017C
}; //Size: 0x0180
static_assert(sizeof(FriendInfo) == 0x180);
#pragma pack(pop)
