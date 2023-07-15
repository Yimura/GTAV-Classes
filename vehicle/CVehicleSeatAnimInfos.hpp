#include "CVehicleSeatAnimInfo.hpp"

#pragma pack(push, 4)
class CVehicleSeatAnimInfos
{
private:
	char pad_0000[8]; //0x0000
public:
	class CVehicleSeatAnimInfo* m_front_left; //0x0008
private:
	char pad_0010[8]; //0x0010
public:
	class CVehicleSeatAnimInfo* m_front_right; //0x0018
private:
	char pad_0020[8]; //0x0020
public:
	class CVehicleSeatAnimInfo* m_rear_left; //0x0028
private:
	char pad_0030[8]; //0x0030
public:
	class CVehicleSeatAnimInfo* m_rear_right; //0x0038
}; //Size: 0x0040
#pragma pack(pop)