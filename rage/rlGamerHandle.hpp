#pragma once

#include <cstdint>

namespace rage
{
    enum rlPlatforms : uint8_t
    {
        UNK0,
        XBOX,
        PLAYSTATION,
        PC,
    };

#pragma pack(push,8)
    class rlGamerHandle
    {
    public:
        int64_t m_rockstar_id; //0x0000
        uint8_t m_platform; //0x0008
        uint8_t m_padding; //0x0009

        inline rlGamerHandle() = default;

        inline rlGamerHandle(int64_t rockstar_id) :
            m_rockstar_id(rockstar_id),
            m_platform(rlPlatforms::PC),
            m_padding(0)
        {
        }
    }; //Size: 0x0010
    static_assert(sizeof(rlGamerHandle) == 0x10);
#pragma pack(pop)
}