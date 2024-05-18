#include "../rage/atArray.hpp"

#pragma pack(push, 1)
class CWeaponGroupNames
{
public:
	char pad_0000[8]; //0x0000
	rage::atArray<Hash> m_groups; //0x0008
	char pad_0018[4]; //0x0018
	rage::atArray<Hash> m_weapons; //0x001C
}; //Size: 0x002C
#pragma pack(pop)
static_assert(sizeof(CWeaponGroupNames) == 0x2C);