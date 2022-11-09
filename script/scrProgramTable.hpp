#pragma once
#include "scrProgramTableEntry.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scrProgramTable
    {
    public:
        scrProgramTableEntry* m_data;    // 0x00
        char m_padding[0x10];            // 0x08
        std::uint32_t m_size;            // 0x18

        scrProgram* find_script(joaat_t hash)
        {
            for (std::uint32_t i = 0; i < m_size; ++i)
            {
                if (m_data[i].m_hash == hash)
                {
                    return m_data[i].m_program;
                }
            }

            return nullptr;
        }

        scrProgramTableEntry* begin()
        {
            return m_data;
        }

        scrProgramTableEntry* end()
        {
            return m_data + m_size;
        }
    };
    static_assert(sizeof(scrProgramTable) == 0x1C);
}
#pragma pack(pop)