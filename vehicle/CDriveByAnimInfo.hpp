#include "CWeaponGroupNames.hpp"

class CDriveByAnimInfo
{
public:
	char pad_0000[48]; //0x0000
	class CWeaponGroupNames* m_weapon_groups; //0x0030
}; //Size: 0x0088
static_assert(sizeof(CDriveByAnimInfo) == 0x38);