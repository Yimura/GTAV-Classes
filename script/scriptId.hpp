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

class CGameScriptId : public rage::scriptId
{
public:
    char m_padding[0x04];         // 0x2C
    std::int32_t m_timestamp;     // 0x30
    std::int32_t m_position_hash; // 0x34
    std::int32_t m_instance_id;   // 0x38
    std::int32_t m_unk;           // 0x3C
};

static_assert(sizeof(CGameScriptId) == 0x40);
#pragma pack(pop)