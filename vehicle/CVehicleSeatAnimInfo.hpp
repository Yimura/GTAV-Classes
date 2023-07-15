#include "CVehicleDriveByAnimInfo.hpp"

#pragma pack(push, 4)
class CVehicleSeatAnimInfo
{
public:
	uint32_t name; //0x0000
private:
	char pad_0004[4]; //0x0004
public:
	class CVehicleDriveByAnimInfo* m_drive_by_info; //0x0008
}; //Size: 0x0010
#pragma pack(pop)