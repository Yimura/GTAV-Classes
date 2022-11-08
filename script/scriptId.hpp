#pragma once
#include "scriptIdBase.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scriptId : public scriptIdBase
    {
    public:
        joaat_t m_hash;           // 0x08
        char m_name[0x20];        // 0x0C
    };
}
#pragma pack(pop)