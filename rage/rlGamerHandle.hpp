#pragma once

#include <cstdint>

namespace rage
{
#pragma pack(push,8)
    class rlGamerHandle
    {
    public:
        uint64_t m_rockstar_id;
        uint64_t m_unk;

        inline rlGamerHandle() = default;

        inline rlGamerHandle(uint64_t rockstar_id) :
            m_rockstar_id(rockstar_id),
            m_unk(3)
        {
        }
    };
#pragma pack(pop)
}