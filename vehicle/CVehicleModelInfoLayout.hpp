#include "CVehicleLayoutMetaData.hpp"

#pragma pack(push, 4)
class CVehicleModelInfoLayout
{
private:
	char pad_0000[842]; //0x0000
public:
	int8_t m_max_seats; //0x034A
private:
	char pad_034B[5]; //0x034B
public:
	class CVehicleLayoutMetaData* m_layout_metadata; //0x0350
}; //Size: 0x0358
#pragma pack(pop)