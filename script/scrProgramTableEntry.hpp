#pragma once
#include "scrProgram.hpp"
#include "../rage/joaat.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scrProgramTableEntry
    {
    public:
        scrProgram* m_program;     // 0x00
        char m_Pad1[0x04];         // 0x08
        joaat_t m_hash;            // 0x0C
    };
    static_assert(sizeof(scrProgramTableEntry) == 0x10);
}
#pragma pack(pop)