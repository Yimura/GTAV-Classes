#include "CVehicleSeatAnimInfos.hpp"

#pragma pack(push, 4)
class CVehicleLayoutMetaData
{
private:
	char pad_0000[8]; //0x0000
public:
	class CVehicleSeatAnimInfos* m_seat_info; //0x0008
}; //Size: 0x0010
#pragma pack(pop)