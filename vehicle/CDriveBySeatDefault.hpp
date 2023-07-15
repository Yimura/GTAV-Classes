#include "CVehicleDriveByAnimInfo.hpp"

#pragma pack(push, 4)
class CDriveBySeatDefault
{
private:
	char pad_0000[320]; //0x0000
public:
	class CVehicleDriveByAnimInfo* m_driveby_standard_front_left; //0x0140
	class CVehicleDriveByAnimInfo* m_driveby_standard_front_right; //0x0148
	class CVehicleDriveByAnimInfo* m_driveby_standard_rear_left; //0x0150
	class CVehicleDriveByAnimInfo* m_driveby_standard_rear_right; //0x0158
}; //Size: 0x0160
#pragma pack(pop)