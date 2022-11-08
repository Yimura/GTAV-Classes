#pragma once

#include "phBound.hpp"

namespace rage
{
    class phArchetype
    {
    public:
        char pad_0000[32]; //0x0000
        class phBound* m_bound; //0x0020
        char pad_0028[16]; //0x0028
    }; //Size: 0x0038
    static_assert(sizeof(phArchetype) == 0x38);

    class phArchetypePhys : public phArchetype
    {
    public:
        char pad_0038[28]; //0x0028
        float m_water_collision; //0x0054
        char pad_0058[40]; //0x0058
    }; //Size: 0x0080
    static_assert(sizeof(phArchetypePhys) == 0x80);

    class phArchetypeDamp : public phArchetypePhys
    {
    public:
        char pad_0080[96]; //0x0080
    }; //Size: 0x00E0
    static_assert(sizeof(phArchetypeDamp) == 0xE0);
}