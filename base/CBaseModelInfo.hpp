#pragma once

#include <cstdint>
#include "fwArchetype.hpp"

enum class eModelType : std::uint8_t
{
    Invalid,
    Object,
    MLO,
    Time,
    Weapon,
    Vehicle,
    Ped,
    Destructable
};

#pragma pack(push, 8)
class CBaseModelInfo : public rage::fwArchetype
{
public:
    char pad_0070[8]; //0x0070
    uint64_t unk_0078; //0x0078
    uint64_t unk_0080; //0x0080
    char pad_0088[8]; //0x0088
    uint64_t unk_0090; //0x0090
    char pad_0098[5]; //0x0098
    uint8_t m_model_type; //0x009D
    char pad_009E[6]; //0x009E
    uint64_t unk_00A8; //0x00A8

    inline eModelType get_model_type()
    {
        return static_cast<eModelType>(m_model_type & 0x1F);
    }
}; //Size: 0x00B0
static_assert(sizeof(CBaseModelInfo) == 0xB0);
#pragma pack(pop)
