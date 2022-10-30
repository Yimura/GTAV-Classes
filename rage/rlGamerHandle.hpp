#pragma once

#include <cstdint>

namespace rage
{
#pragma pack(push,8)
    class rlGamerHandle
    {
    public:
        uint64_t m_rockstar_id; //0x0000
        uint8_t m_platform; //0x0008
        uint8_t unk_0009; //0x0009

        inline rlGamerHandle() = default;

        inline rlGamerHandle(uint64_t rockstar_id) :
            m_rockstar_id(rockstar_id),
            m_platform(3),
            unk_0009(0)
        {
        }
    }; //Size: 0x0010
    static_assert(sizeof(rlGamerHandle) == 0x10);
#pragma pack(pop)
}