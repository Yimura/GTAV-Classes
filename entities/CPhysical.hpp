#pragma once

#include "CDynamicEntity.hpp"
#include "CAttackers.hpp"

#include <cstdint>

namespace rage
{
#pragma pack(push, 1)
    class CPhysical : public CDynamicEntity
    {
    public:
        char gapF0[144];
        uint64_t qword180;
        uint32_t m_damage_bits; //0x0188
        uint8_t m_hostility; //0x018C
        char gap18D[3];
        uint8_t byte190;
        char gap191[3];
        uint32_t dword194;
        char gap198[232];
        float m_health; //0x0280
        float m_maxhealth; //0x0284
        class CAttackers* m_attackers;
        char gap2B0[72];
        uint64_t qword2F8;
        uint64_t qword300;
        uint32_t dword308;
    };
    static_assert(sizeof(CPhysical) == 0x2EC);
#pragma pack(pop)
}
