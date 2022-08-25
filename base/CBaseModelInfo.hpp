#pragma once

#include "../rage/vector.hpp"

#include <cstdint>

enum class eModelType : std::uint8_t
{
    Invalid,
    Object,
    MLO,
    Time,
    Weapon,
    Vehicle,
    Ped,
    Destructable,
    WorldObject = 33,
    Sprinkler = 35,
    Unk65 = 65,
    EmissiveLOD = 67,
    Plant = 129,
    LOD = 131,
    Unk132 = 132,
    Unk133 = 133,
    OnlineOnlyPed = 134,
    Building = 161,
    Unk193 = 193
};

#pragma pack(push, 8)
class CBaseModelInfo
{
public:
    char pad_0000[24]; //0x0000
    uint32_t m_model_hash; //0x0018
    char pad_001C[20]; //0x001C
    rage::fvector4 m_axis_aligned_bounding_box_min; //0x0030
    rage::fvector4 m_axis_aligned_bounding_box_max; //0x0040
    uint32_t m_flags;
    char pad_0054[4];
    uint16_t unk_0x58;
    char pad_005A[6];
    uint8_t m_drawable_type;
    char pad_0061;
    uint16_t m_drawable_index;
    char pad_0064[6];
    uint16_t unk_0x6A;
    char pad_006C[12];
    uint64_t unk_0x78;
    uint64_t unk_0x80;
    char pad_0088[8];
    uint64_t unk_0x90;
    char pad_0098[5];
    eModelType m_model_type;
    char pad_009E[6];
    uint64_t unk_0xA8;
}; //Size: 0x00B0
static_assert(sizeof(CBaseModelInfo) == 0xB0);
#pragma pack(pop)
