#pragma once

#include "CBaseModelInfo.hpp"

#include <cstdint>

enum class eVehicleType : std::uint32_t
{
    Car,
    Plane,
	Unk2,
	Quadbike,
	Unk4,
	Unk5,
	AmphibiousCar,
	AmphibiousQuadbike,
	Heli,
	Unk9,
	Unk10,
	Bike,
	Bicycle,
	Boat,
	Train
};

#pragma pack(push, 2)
class CVehicleModelInfo : public CBaseModelInfo
{
public:
	char pad_00A4[500]; //0x00A4
	char m_name[12]; //0x0298
	char m_manufacturer[12]; //0x02A4
	char pad_02B0[144]; //0x02B0
	eVehicleType m_vehicle_type; //0x0340
	char pad_0344[572]; //0x0344
	uint32_t m_is_jetski; //0x0580
	char pad_0584[4]; //0x0584
}; //Size: 0x0588
static_assert(sizeof(CVehicleModelInfo) == 0x588);
#pragma pack(pop)
