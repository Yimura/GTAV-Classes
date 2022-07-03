#pragma once

#include <cstdint>

enum class eModelType : std::uint8_t
{
    Invalid,
    Object,
    Interior,
    Window,
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

#pragma pack(push, 2)
class CBaseModelInfo
{
public:
	char pad_0000[24]; //0x0000
	uint32_t m_model_hash; //0x0018
	char pad_001C[129]; //0x001C
	eModelType m_model_type; //0x009D
	char pad_009E[6]; //0x009E
}; //Size: 0x00A4
static_assert(sizeof(CBaseModelInfo) == 0xA4);
#pragma pack(pop)
