#pragma once

#include "phBound.hpp"

namespace rage
{
#pragma pack(push,1)
    class phBoundCapsule : public phBound
    {
    public:
        float m_capsule_half_height;
        uint64_t unk_0074;
        uint32_t unk_007C;
    }; //Size: 0x0080
    static_assert(sizeof(phBoundCapsule) == 0x80);
#pragma pack(pop)
}